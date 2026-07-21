// Apply reviewed hidden_this_proposals.tsv without assigning speculative class owners/names.
// Creates neutral anonymous receiver/vtable skeletons and preserves manual signatures/types.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Apply Hidden This

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Set;

import ghidra.app.script.GhidraScript;
import ghidra.app.util.parser.FunctionSignatureParser;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.CategoryPath;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeConflictHandler;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.PointerDataType;
import ghidra.program.model.data.FunctionDefinitionDataType;
import ghidra.program.model.data.ParameterDefinition;
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.StructureDataType;
import ghidra.program.model.data.Undefined;
import ghidra.program.model.data.VoidDataType;
import ghidra.program.model.listing.AutoParameterType;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Function.FunctionUpdateType;
import ghidra.program.model.listing.FunctionTag;
import ghidra.program.model.listing.GhidraClass;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.listing.ParameterImpl;
import ghidra.program.model.listing.ReturnParameterImpl;
import ghidra.program.model.listing.Variable;
import ghidra.program.model.symbol.Namespace;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.SymbolTable;

public class STHiddenThisApplier extends GhidraScript {
    private static final String TAG = "RECOVERED_HIDDEN_THIS";
    private static final String MARKER = "[STHiddenThisApplier generated]";
    private static final String RECEIVER_DESCRIPTION = MARKER +
        " Anonymous receiver shared only by proven same-ECX flows; no semantic " +
        "class owner is claimed.";
    private static final String VTABLE_DESCRIPTION = MARKER +
        " Neutral anonymous vtable skeleton; slot signatures remain unresolved.";
    private static final CategoryPath CATEGORY =
        new CategoryPath("/SubmarineTitans/Recovered/HiddenThis");

    private final List<ReportRow> report = new ArrayList<>();
    private DataTypeManager dataTypes;
    private DataType voidPtr;

    @Override
    protected void run() throws Exception {
        if (currentProgram == null) {
            printerr("Open the analyzed ST program first.");
            return;
        }
        File file = inputFile();
        if (file == null) return;
        Tsv tsv = readTsv(file.toPath());
        requireColumns(tsv, "convention_apply", "receiver_type_apply", "address",
            "expected_name", "expected_name_source", "expected_signature",
            "expected_signature_source", "expected_calling_convention",
            "proposed_calling_convention", "receiver_type_name", "receiver_type_path",
            "observed_size", "vtable_slots", "confidence", "reason");
        dataTypes = currentProgram.getDataTypeManager();
        voidPtr = new PointerDataType(VoidDataType.dataType, dataTypes);

        // Version 1 changed the convention before attempting the forbidden direct
        // AutoParameterImpl mutation.  Ghidra kept that partial change, and its
        // DYNAMIC_STORAGE_ALL_PARAMS compatibility heuristic could also consume the
        // original first stack argument.  Never apply those proposals: use their saved
        // exact baseline solely to restore the pre-run signature, then require a fresh
        // version-2 analysis.
        if (!tsv.header.contains("analysis_version")) {
            Path marker = file.toPath().toAbsolutePath().normalize().resolveSibling(
                "hidden_this_legacy_repair_complete.txt");
            Files.deleteIfExists(marker);
            repairLegacyPartialApply(tsv);
            Path output = file.toPath().toAbsolutePath().normalize().resolveSibling(
                "hidden_this_apply_report.tsv");
            writeReport(output);
            if (count("conflict") == 0 && count("preserved") == 0) {
                Files.write(marker, List.of("program=" + currentProgram.getName(),
                    "status=complete", "repaired=" + count("repaired"),
                    "unchanged=" + count("unchanged")), StandardCharsets.UTF_8);
            }
            println("Legacy hidden-this repair: repaired=" + count("repaired") +
                ", unchanged=" + count("unchanged") + ", preserved=" +
                count("preserved") + ", generated types cleaned=" + count("cleaned") +
                ", conflicts=" + count("conflict") +
                ". Rerun STHiddenThisAnalyzer before applying again.");
            println("Repair report: " + output);
            return;
        }
        requireColumns(tsv, "analysis_version", "group_members");
        for (Map<String, String> row : tsv.rows) {
            if (!"2".equals(row.get("analysis_version")))
                throw new IllegalArgumentException("Unsupported hidden-this analysis version " +
                    row.get("analysis_version") + " at " + row.get("address"));
        }

        for (Map<String, String> row : tsv.rows) {
            monitor.checkCancelled();
            int reportIndex = report.size();
            int transaction = currentProgram.startTransaction(
                "Apply recovered hidden this " + row.get("address"));
            boolean commit = false;
            try {
                applyRow(row);
                ReportRow result = report.get(reportIndex);
                commit = !"conflict".equals(result.status) &&
                    !"partial".equals(result.status);
            }
            finally {
                currentProgram.endTransaction(transaction, commit);
            }
            if (!commit && report.size() > reportIndex) {
                ReportRow result = report.get(reportIndex);
                report.set(reportIndex, new ReportRow(result.address, "conflict",
                    "rolled back atomically: " + result.detail));
            }
        }

        Path output = file.toPath().toAbsolutePath().normalize().resolveSibling(
            "hidden_this_apply_report.tsv");
        writeReport(output);
        println("Hidden this: applied=" + count("applied") + ", partial=" +
            count("partial") + ", unchanged=" + count("unchanged") +
            ", preserved=" + count("preserved") + ", conflicts=" + count("conflict") +
            ", disabled=" + count("disabled"));
        println("Apply report: " + output);
    }

    private void repairLegacyPartialApply(Tsv tsv) throws Exception {
        for (Map<String, String> row : tsv.rows) {
            monitor.checkCancelled();
            boolean enabled = enabled(row.get("convention_apply")) ||
                enabled(row.get("receiver_type_apply"));
            Address address = address(row.get("address"));
            if (!enabled) {
                report.add(new ReportRow(addr(address), "disabled",
                    "legacy proposal was not enabled"));
                continue;
            }
            int transaction = currentProgram.startTransaction(
                "Repair legacy hidden-this partial apply " + addr(address));
            boolean commit = false;
            try {
                Function function = currentProgram.getFunctionManager().getFunctionAt(address);
                if (function == null) {
                    report.add(new ReportRow(addr(address), "conflict",
                        "no function at address"));
                    commit = true;
                    continue;
                }
                String expectedName = unt(row.get("expected_name"));
                String expectedSignature = unt(row.get("expected_signature"));
                String expectedConvention = row.get("expected_calling_convention");
                String currentSignature = function.getSignature().getPrototypeString(true);
                if (function.getName(true).equals(expectedName) &&
                        currentSignature.equals(expectedSignature) &&
                        function.getCallingConventionName().equals(expectedConvention)) {
                    report.add(new ReportRow(addr(address), "unchanged",
                        "legacy proposal had not modified this function"));
                    commit = true;
                    continue;
                }
                boolean recognizablePartial = function.getName(true).equals(expectedName) &&
                    "__thiscall".equals(function.getCallingConventionName()) &&
                    !"__thiscall".equals(expectedConvention) &&
                    !protectedSource(function.getSignatureSource());
                if (!recognizablePartial) {
                    report.add(new ReportRow(addr(address), "preserved",
                        "state is not the exact legacy partial-apply shape: " +
                        currentSignature));
                    commit = true;
                    continue;
                }
                restoreSignature(function, expectedSignature, expectedConvention,
                    source(row.get("expected_signature_source")));
                String restored = function.getSignature().getPrototypeString(true);
                if (!restored.equals(expectedSignature))
                    throw new IllegalStateException("restored signature differs: " + restored);
                report.add(new ReportRow(addr(address), "repaired",
                    "restored pre-v1 signature; fresh analysis required"));
                commit = true;
            }
            catch (Exception exception) {
                report.add(new ReportRow(addr(address), "conflict", message(exception)));
            }
            finally {
                currentProgram.endTransaction(transaction, commit);
            }
        }
        if (count("conflict") == 0 && count("preserved") == 0)
            cleanupLegacyTypes(tsv);
    }

    private void cleanupLegacyTypes(Tsv tsv) throws Exception {
        Set<String> typeNames = new LinkedHashSet<>();
        for (Map<String, String> row : tsv.rows) {
            if (enabled(row.get("convention_apply")) || enabled(row.get("receiver_type_apply")))
                typeNames.add(unt(row.get("receiver_type_name")));
        }
        int transaction = currentProgram.startTransaction(
            "Remove legacy hidden-this generated types");
        boolean commit = false;
        List<String> cleaned = new ArrayList<>();
        try {
            for (String typeName : typeNames) {
                DataType receiver = dataTypes.getDataType(CATEGORY, typeName);
                DataType vtable = dataTypes.getDataType(CATEGORY, typeName + "VTable");
                if (receiver != null && !legacyGeneratedReceiver(receiver)) {
                    report.add(new ReportRow("TYPE:" + typeName, "preserved",
                        "legacy receiver has manual or unexpected content"));
                    return;
                }
                if (vtable != null && !legacyGeneratedVtable(vtable)) {
                    report.add(new ReportRow("TYPE:" + typeName + "VTable", "preserved",
                        "legacy vtable has manual or unexpected content"));
                    return;
                }
            }
            for (String typeName : typeNames) {
                DataType receiver = dataTypes.getDataType(CATEGORY, typeName);
                DataType vtable = dataTypes.getDataType(CATEGORY, typeName + "VTable");
                if (receiver != null && !dataTypes.remove(receiver))
                    throw new IllegalStateException("failed to remove " + receiver.getPathName());
                if (vtable != null && !dataTypes.remove(vtable))
                    throw new IllegalStateException("failed to remove " + vtable.getPathName());
                if (receiver != null || vtable != null)
                    cleaned.add(typeName);
            }
            commit = true;
        }
        catch (Exception exception) {
            report.add(new ReportRow("TYPE:legacy", "conflict", message(exception)));
        }
        finally {
            currentProgram.endTransaction(transaction, commit);
        }
        if (commit) {
            for (String typeName : cleaned)
                report.add(new ReportRow("TYPE:" + typeName, "cleaned",
                    "removed exact version-1 generated receiver/vtable"));
        }
    }

    private boolean legacyGeneratedReceiver(DataType type) {
        if (!(type instanceof Structure) ||
                !RECEIVER_DESCRIPTION.equals(type.getDescription())) return false;
        Structure structure = (Structure)type;
        ghidra.program.model.data.DataTypeComponent[] defined =
            structure.getDefinedComponents();
        if (defined.length != 1) return false;
        ghidra.program.model.data.DataTypeComponent first = defined[0];
        return first.getOffset() == 0 && "vtable".equals(first.getFieldName()) &&
            first.getDataType() instanceof Pointer;
    }

    private boolean legacyGeneratedVtable(DataType type) {
        if (!(type instanceof Structure) ||
                !VTABLE_DESCRIPTION.equals(type.getDescription())) return false;
        for (ghidra.program.model.data.DataTypeComponent component :
                ((Structure)type).getDefinedComponents()) {
            if (!(component.getDataType() instanceof Pointer) ||
                    component.getFieldName() == null ||
                    !component.getFieldName().startsWith("slot_")) return false;
        }
        return true;
    }

    private void restoreSignature(Function function, String prototype, String convention,
            SourceType source) throws Exception {
        FunctionSignatureParser parser = new FunctionSignatureParser(dataTypes, null);
        // FunctionSignatureParser parses a C prototype but does not accept Ghidra's
        // calling-convention token in the return-type position emitted by
        // getPrototypeString(true).  The convention is restored separately below.
        String parseablePrototype = prototype.replaceFirst(
            "\\s+" + java.util.regex.Pattern.quote(convention) + "\\s+", " ");
        FunctionDefinitionDataType parsed = parser.parse(function.getSignature(),
            parseablePrototype);
        List<Variable> parameters = new ArrayList<>();
        int ordinal = 1;
        for (ParameterDefinition parameter : parsed.getArguments()) {
            String name = parameter.getName();
            if (name == null || name.isBlank()) name = "param_" + ordinal;
            parameters.add(new ParameterImpl(name, parameter.getDataType(), currentProgram,
                source));
            ordinal++;
        }
        function.updateFunction(convention,
            new ReturnParameterImpl(parsed.getReturnType(), currentProgram), parameters,
            FunctionUpdateType.DYNAMIC_STORAGE_FORMAL_PARAMS, true, source);
        function.setVarArgs(parsed.hasVarArgs());
        function.setNoReturn(parsed.hasNoReturn());
        function.setSignatureSource(source);
    }

    private SourceType source(String value) {
        try { return SourceType.valueOf(value); }
        catch (Exception ignored) { return SourceType.ANALYSIS; }
    }

    private void applyRow(Map<String, String> row) {
        boolean conventionApply = enabled(row.get("convention_apply"));
        boolean typeApply = enabled(row.get("receiver_type_apply"));
        Address address = address(row.get("address"));
        if (!conventionApply && !typeApply) {
            report.add(new ReportRow(addr(address), "disabled", "all apply flags are 0"));
            return;
        }
        Function function = currentProgram.getFunctionManager().getFunctionAt(address);
        if (function == null) {
            report.add(new ReportRow(addr(address), "conflict", "no function at address"));
            return;
        }
        try {
            boolean scriptOwned = hasTag(function, TAG);
            boolean baselineName = function.getName(true).equals(unt(row.get("expected_name"))) &&
                function.getSymbol().getSource().toString().equals(row.get("expected_name_source"));
            boolean baselineSignature = function.getSignature().getPrototypeString(true)
                    .equals(unt(row.get("expected_signature"))) &&
                function.getSignatureSource().toString()
                    .equals(row.get("expected_signature_source")) &&
                function.getCallingConventionName()
                    .equals(row.get("expected_calling_convention"));
            boolean manualSignature = protectedSource(function.getSignatureSource());
            if (!baselineName && !scriptOwned) {
                report.add(new ReportRow(addr(address), "preserved",
                    "stale/manual name baseline: " + function.getName(true)));
                return;
            }
            if ((!baselineSignature && !scriptOwned) || manualSignature) {
                report.add(new ReportRow(addr(address), "preserved",
                    "stale/manual signature: " +
                    function.getSignature().getPrototypeString(true)));
                return;
            }

            String typeName = unt(row.get("receiver_type_name"));
            int observedSize = boundedSize(row.get("observed_size"));
            int maxSlot = maximumSlot(unt(row.get("vtable_slots")));
            Structure receiver = ensureReceiverType(typeName, observedSize, maxSlot);
            if (receiver == null) {
                report.add(new ReportRow(addr(address), "conflict",
                    "receiver type exists but is not script-owned: " + typeName));
                return;
            }

            List<String> detail = new ArrayList<>();
            boolean changed = false, preserved = false, conflict = false;
            GhidraClass receiverClass = null;
            if (typeApply) {
                receiverClass = ensureReceiverClass(typeName);
                if (receiverClass == null) {
                    report.add(new ReportRow(addr(address), "conflict",
                        "anonymous class namespace exists with an incompatible kind: " +
                        typeName));
                    return;
                }
                if (!function.getParentNamespace().equals(receiverClass)) {
                    if (!function.getParentNamespace().isGlobal() && !scriptOwned) {
                        report.add(new ReportRow(addr(address), "preserved",
                            "existing non-global owner: " +
                            function.getParentNamespace().getName(true)));
                        return;
                    }
                    function.setParentNamespace(receiverClass);
                    detail.add("owner=applied(" + typeName + ")");
                    changed = true;
                }
            }

            // In dynamic-storage mode Ghidra derives the immutable auto-this type from
            // the function's class namespace.  Rebuilding the signature after assigning
            // that neutral namespace is the supported API; AutoParameterImpl.setDataType
            // always throws in Ghidra 12.1.x.
            boolean wasThiscall = "__thiscall".equals(function.getCallingConventionName());
            if (conventionApply || typeApply) {
                normalizeThiscall(function);
                if (!wasThiscall) {
                    detail.add("convention=applied(__thiscall)");
                    changed = true;
                }
                else if (conventionApply) detail.add("convention=unchanged");
            }

            if (typeApply) {
                Parameter receiverParameter = thisParameter(function);
                if (receiverParameter == null) {
                    detail.add("receiver_type=conflict(no auto this parameter)");
                    conflict = true;
                }
                else if (receiverPointerPath(receiverParameter).equals(receiver.getPathName())) {
                    detail.add("receiver_type=unchanged");
                }
                else if (protectedSource(function.getSignatureSource()) && !scriptOwned) {
                    detail.add("receiver_type=preserved(manual signature)");
                    preserved = true;
                }
                else {
                    detail.add("receiver_type=conflict(namespace did not produce " +
                        receiver.getPathName() + " *; actual=" +
                        receiverParameter.getDataType().getPathName() + ")");
                    conflict = true;
                }
            }

            if (changed) {
                function.addTag(TAG);
                addComment(function, row, receiver);
            }
            String status = conflict && !changed ? "conflict" :
                changed && (conflict || preserved) ? "partial" : changed ? "applied" :
                preserved ? "preserved" : "unchanged";
            report.add(new ReportRow(addr(address), status, String.join("; ", detail)));
        }
        catch (Exception exception) {
            report.add(new ReportRow(addr(address), "conflict", message(exception)));
        }
    }

    private Structure ensureReceiverType(String typeName, int observedSize, int maxSlot) {
        int pointerSize = currentProgram.getDefaultPointerSize();
        Structure vtable = null;
        if (maxSlot >= 0) {
            String vtableName = typeName + "VTable";
            DataType existingVtable = dataTypes.getDataType(CATEGORY, vtableName);
            if (existingVtable == null) {
                vtable = new StructureDataType(CATEGORY, vtableName, 0, dataTypes);
                vtable.setDescription(VTABLE_DESCRIPTION);
            }
            else if (existingVtable instanceof Structure && generated(existingVtable))
                vtable = (Structure)existingVtable;
            else return null;

            int requiredVtable = maxSlot + pointerSize;
            while (layoutLength(vtable) < requiredVtable) {
                int offset = layoutLength(vtable);
                vtable.add(voidPtr, pointerSize, String.format("slot_%02X", offset),
                    "Unresolved virtual/function-pointer slot at +0x" +
                    Integer.toHexString(offset).toUpperCase(Locale.ROOT) + ".");
            }
            vtable = (Structure)dataTypes.resolve(vtable,
                DataTypeConflictHandler.KEEP_HANDLER);
        }

        DataType existingReceiver = dataTypes.getDataType(CATEGORY, typeName);
        Structure receiver;
        if (existingReceiver == null) {
            receiver = new StructureDataType(CATEGORY, typeName, 0, dataTypes);
            receiver.setDescription(RECEIVER_DESCRIPTION);
        }
        else if (existingReceiver instanceof Structure && generated(existingReceiver))
            receiver = (Structure)existingReceiver;
        else return null;

        if (maxSlot < 0 && legacyUnprovenVtable(receiver)) {
            // The first implementation incorrectly installed a vtable in every receiver,
            // even when no indirect call through offset zero existed.  This exact
            // script-owned legacy shape is safe to migrate back to an unknown layout.
            receiver.deleteAll();
        }
        if (vtable != null) {
            DataType pointer = new PointerDataType(vtable, dataTypes);
            ghidra.program.model.data.DataTypeComponent component = receiver.isZeroLength() ?
                null : receiver.getComponentAt(0);
            if (receiver.isZeroLength()) {
                receiver.add(pointer, pointerSize, "vtable",
                    "Neutral vtable skeleton recovered from indirect calls through incoming this.");
            }
            else if (component == null || Undefined.isUndefined(component.getDataType())) {
                receiver.replaceAtOffset(0, pointer, pointerSize, "vtable",
                    "Neutral vtable skeleton recovered from indirect calls through incoming this.");
            }
            else if (!"vtable".equals(component.getFieldName()) ||
                    !component.getDataType().isEquivalent(pointer)) return null;
        }
        int receiverLength = layoutLength(receiver);
        if (receiverLength < observedSize)
            receiver.growStructure(observedSize - receiverLength);
        return (Structure)dataTypes.resolve(receiver, DataTypeConflictHandler.KEEP_HANDLER);
    }

    private int layoutLength(Structure structure) {
        return structure.isZeroLength() ? 0 : structure.getLength();
    }

    private boolean legacyUnprovenVtable(Structure receiver) {
        String description = receiver.getDescription();
        if (!RECEIVER_DESCRIPTION.equals(description)) return false;
        if (receiver.isZeroLength()) return false;
        ghidra.program.model.data.DataTypeComponent first = receiver.getComponentAt(0);
        return first != null && "vtable".equals(first.getFieldName()) &&
            first.getDataType() instanceof Pointer;
    }

    private GhidraClass ensureReceiverClass(String typeName) throws Exception {
        SymbolTable table = currentProgram.getSymbolTable();
        Namespace parent = currentProgram.getGlobalNamespace();
        for (String part : new String[] { "SubmarineTitans", "Recovered", "HiddenThis" }) {
            Namespace existingParent = table.getNamespace(part, parent);
            if (existingParent == null)
                existingParent = table.createNameSpace(parent, part, SourceType.ANALYSIS);
            parent = existingParent;
        }
        Namespace existing = table.getNamespace(typeName, parent);
        if (existing == null)
            return table.createClass(parent, typeName, SourceType.ANALYSIS);
        return existing instanceof GhidraClass ? (GhidraClass)existing : null;
    }

    private void normalizeThiscall(Function function) throws Exception {
        List<Variable> parameters = new ArrayList<>();
        for (Parameter parameter : function.getParameters()) {
            if (parameter.isAutoParameter()) continue;
            parameters.add(new ParameterImpl(parameter.getName(),
                parameter.getFormalDataType(), currentProgram, parameter.getSource()));
        }
        boolean varargs = function.hasVarArgs();
        function.updateFunction("__thiscall",
            new ReturnParameterImpl(function.getReturnType(), currentProgram), parameters,
            FunctionUpdateType.DYNAMIC_STORAGE_FORMAL_PARAMS, true, SourceType.ANALYSIS);
        function.setVarArgs(varargs);
        function.setSignatureSource(SourceType.ANALYSIS);
    }

    private Parameter thisParameter(Function function) {
        for (Parameter parameter : function.getParameters()) {
            if (parameter.isAutoParameter() &&
                    parameter.getAutoParameterType() == AutoParameterType.THIS) return parameter;
        }
        return null;
    }

    private String receiverPointerPath(Parameter parameter) {
        DataType type = parameter.getDataType();
        if (!(type instanceof Pointer)) return "";
        DataType pointed = ((Pointer)type).getDataType();
        return pointed == null ? "" : pointed.getPathName();
    }

    private boolean generated(DataType type) {
        String description = type.getDescription();
        return description != null && description.contains(MARKER);
    }

    private int boundedSize(String value) {
        try { return Math.max(4, Math.min(0x100000, Integer.parseInt(value))); }
        catch (Exception ignored) { return 4; }
    }

    private int maximumSlot(String specification) {
        int result = -1;
        if (specification.isBlank()) return result;
        for (String item : specification.split(",")) {
            try {
                String value = item.trim().toUpperCase(Locale.ROOT);
                int parsed = value.startsWith("0X") ?
                    Integer.parseUnsignedInt(value.substring(2), 16) : Integer.parseInt(value);
                if (parsed >= 0 && parsed < 0x1000 && parsed %
                        currentProgram.getDefaultPointerSize() == 0)
                    result = Math.max(result, parsed);
            }
            catch (Exception ignored) { }
        }
        return result;
    }

    private void addComment(Function function, Map<String, String> row, Structure receiver) {
        String block = "[STHiddenThisApplier] Anonymous hidden receiver recovered as " +
            receiver.getPathName() + ".\nEvidence: " + unt(row.get("reason"));
        String old = function.getComment();
        if (old == null || old.isBlank()) function.setComment(block);
        else if (!old.contains("[STHiddenThisApplier]")) function.setComment(old + "\n\n" + block);
    }

    private boolean hasTag(Function function, String name) {
        for (FunctionTag tag : function.getTags()) if (name.equals(tag.getName())) return true;
        return false;
    }
    private boolean protectedSource(SourceType source) {
        return source == SourceType.USER_DEFINED || source == SourceType.IMPORTED;
    }
    private boolean enabled(String value) {
        return "1".equals(value) || "true".equalsIgnoreCase(value) ||
            "yes".equalsIgnoreCase(value);
    }
    private long count(String status) {
        return report.stream().filter(row -> row.status.equals(status)).count();
    }

    private File inputFile() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless()) throw new IllegalArgumentException(
            "Path to hidden_this_proposals.tsv is required");
        return askFile("Select hidden_this_proposals.tsv", "Apply hidden this");
    }

    private Tsv readTsv(Path path) throws Exception {
        List<String> lines = Files.readAllLines(path, StandardCharsets.UTF_8);
        if (lines.isEmpty()) throw new IllegalArgumentException("Empty TSV: " + path);
        String[] header = lines.get(0).split("\\t", -1);
        List<Map<String, String>> rows = new ArrayList<>();
        for (int line = 1; line < lines.size(); line++) {
            if (lines.get(line).isBlank()) continue;
            String[] values = lines.get(line).split("\\t", -1);
            if (values.length != header.length)
                throw new IllegalArgumentException(path.getFileName() + " line " + (line + 1) +
                    " has " + values.length + " columns; expected " + header.length);
            Map<String, String> row = new LinkedHashMap<>();
            for (int column = 0; column < header.length; column++)
                row.put(header[column], values[column]);
            rows.add(row);
        }
        return new Tsv(List.of(header), rows);
    }

    private void requireColumns(Tsv tsv, String... names) {
        for (String name : names) if (!tsv.header.contains(name))
            throw new IllegalArgumentException("Missing TSV column: " + name);
    }

    private void writeReport(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("address\tstatus\tdetail\n");
            for (ReportRow row : report)
                out.write(row.address + "\t" + row.status + "\t" + tsv(row.detail) + "\n");
        }
    }

    private Address address(String value) {
        Address result = currentProgram.getAddressFactory().getAddress(value);
        if (result == null) throw new IllegalArgumentException("Invalid address: " + value);
        return result;
    }
    private String message(Exception exception) {
        String value = exception.getMessage();
        if (value == null || value.isBlank()) value = exception.getClass().getSimpleName();
        for (StackTraceElement frame : exception.getStackTrace()) {
            if (getClass().getName().equals(frame.getClassName()))
                return value + " @" + frame.getMethodName() + ":" + frame.getLineNumber();
        }
        return value;
    }
    private static String addr(Address value) { return value.toString().toUpperCase(Locale.ROOT); }
    private static String tsv(String value) {
        return value == null ? "" : value.replace("\\", "\\\\").replace("\t", "\\t")
            .replace("\r", "\\r").replace("\n", "\\n");
    }
    private static String unt(String value) {
        StringBuilder out = new StringBuilder();
        boolean escaped = false;
        for (int index = 0; index < value.length(); index++) {
            char c = value.charAt(index);
            if (!escaped && c == '\\') { escaped = true; continue; }
            if (escaped) {
                if (c == 't') out.append('\t');
                else if (c == 'r') out.append('\r');
                else if (c == 'n') out.append('\n');
                else out.append(c);
                escaped = false;
            }
            else out.append(c);
        }
        if (escaped) out.append('\\');
        return out.toString();
    }

    private static class Tsv {
        final List<String> header; final List<Map<String, String>> rows;
        Tsv(List<String> header, List<Map<String, String>> rows) {
            this.header = header; this.rows = rows;
        }
    }
    private static class ReportRow {
        final String address, status, detail;
        ReportRow(String address, String status, String detail) {
            this.address = address; this.status = status; this.detail = detail;
        }
    }
}
