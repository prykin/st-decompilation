// Apply reviewed virtual_method_proposals.tsv from STVirtualMethodAnalyzer.
// name_apply, convention_apply, and signature_apply are independent.  Manual
// USER_DEFINED names and signatures are preserved and reported, never overwritten.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Apply Virtual Methods

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Set;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.Pointer;
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

public class STVirtualMethodApplier extends GhidraScript {
    private static final String TAG = "RECOVERED_VIRTUAL_METHOD";
    private static final String COMMENT_MARKER = "[STVirtualMethodApplier]";

    private DataTypeManager dataTypes;
    private final List<ReportRow> report = new ArrayList<>();

    @Override
    protected void run() throws Exception {
        // Each virtual method owns an independent top-level transaction.
        end(true);
        if (currentProgram == null) {
            printerr("Open the same ST program that was analyzed.");
            return;
        }
        File proposalFile = inputFile();
        if (proposalFile == null) return;
        Tsv tsv = readTsv(proposalFile.toPath());
        requireColumns(tsv, "name_apply", "convention_apply", "signature_apply",
            "target_address", "expected_name", "expected_name_source", "expected_signature",
            "expected_signature_source", "expected_calling_convention",
            "proposed_calling_convention", "proposed_name", "owner", "method",
            "owner_type_path", "table_addresses", "entry_addresses", "slot_offsets",
            "anchor_address", "return_type_path", "parameters", "varargs", "noreturn",
            "confidence", "reason");
        dataTypes = currentProgram.getDataTypeManager();

        Set<Address> seen = new HashSet<>();
        int applied = 0, partial = 0, unchanged = 0, preserved = 0, conflicts = 0, disabled = 0;
        for (Map<String, String> row : tsv.rows) {
            monitor.checkCancelled();
            boolean nameApply = enabled(row.get("name_apply"));
            boolean conventionApply = enabled(row.get("convention_apply"));
            boolean signatureApply = enabled(row.get("signature_apply"));
            String addressText = row.get("target_address");
            String proposedName = unt(row.get("proposed_name"));
            if (!nameApply && !conventionApply && !signatureApply) {
                report.add(new ReportRow(addressText, "disabled", proposedName,
                    "all apply flags are 0"));
                disabled++;
                continue;
            }
            Address targetAddress;
            try { targetAddress = address(addressText); }
            catch (Exception exception) {
                report.add(new ReportRow(addressText, "conflict", proposedName,
                    message(exception)));
                conflicts++;
                continue;
            }
            if (!seen.add(targetAddress)) {
                report.add(new ReportRow(addressText, "conflict", proposedName,
                    "duplicate selected target row"));
                conflicts++;
                continue;
            }

            int transaction = currentProgram.startTransaction(
                "Apply recovered virtual method " + addressText);
            boolean commit = false;
            try {
                ApplyResult result = applyRow(row, nameApply, conventionApply, signatureApply);
                commit = result.changed;
                report.add(new ReportRow(addressText, result.status, proposedName, result.detail));
                if (result.status.equals("applied")) applied++;
                else if (result.status.equals("partial")) partial++;
                else if (result.status.equals("unchanged")) unchanged++;
                else if (result.status.equals("preserved")) preserved++;
                else conflicts++;
            }
            catch (Exception exception) {
                report.add(new ReportRow(addressText, "conflict", proposedName,
                    message(exception)));
                conflicts++;
            }
            finally {
                currentProgram.endTransaction(transaction, commit);
            }
        }

        Path reportPath = proposalFile.toPath().toAbsolutePath().normalize()
            .resolveSibling("virtual_method_apply_report.tsv");
        writeReport(reportPath);
        println("Virtual methods: applied=" + applied + ", partial=" + partial +
            ", unchanged=" + unchanged + ", manual/stale preserved=" + preserved +
            ", conflicts=" + conflicts + ", disabled=" + disabled);
        println("Apply report: " + reportPath);
    }

    private ApplyResult applyRow(Map<String, String> row, boolean nameApply,
            boolean conventionApply, boolean signatureApply) throws Exception {
        Address targetAddress = address(row.get("target_address"));
        Function function = currentProgram.getFunctionManager().getFunctionAt(targetAddress);
        if (function == null) return ApplyResult.conflict("no function at target address");
        if (!hasLiveEntry(row, targetAddress))
            return ApplyResult.conflict("none of the analyzed vtable entries still resolves to target");
        if (function.isExternal() || isLibraryFunction(function))
            return ApplyResult.conflict("target is external/library and is outside this applier's scope");

        String initialName = function.getName(true);
        String initialSignature = function.getSignature().getPrototypeString(true);
        String initialConvention = function.getCallingConventionName();
        SourceType initialNameSource = function.getSymbol().getSource();
        SourceType initialSignatureSource = function.getSignatureSource();

        String expectedName = unt(row.get("expected_name"));
        String expectedNameSource = row.get("expected_name_source");
        String expectedSignature = unt(row.get("expected_signature"));
        String expectedSignatureSource = row.get("expected_signature_source");
        String expectedConvention = unt(row.get("expected_calling_convention"));
        String desiredConvention = unt(row.get("proposed_calling_convention"));
        String proposedName = unt(row.get("proposed_name"));
        String owner = unt(row.get("owner"));
        String method = unt(row.get("method"));
        String ownerTypePath = unt(row.get("owner_type_path"));

        List<String> details = new ArrayList<>();
        boolean changed = false, actionConflict = false, actionPreserved = false;

        boolean nameSafe = initialName.equals(expectedName) &&
            initialNameSource.toString().equals(expectedNameSource) &&
            (initialNameSource != SourceType.USER_DEFINED || hasTag(function, TAG));
        if (nameApply) {
            if (proposedName.isBlank() || owner.isBlank() || method.isBlank()) {
                details.add("name=conflict(missing proposed owner/method)");
                actionConflict = true;
            }
            else if (initialName.equals(proposedName)) details.add("name=unchanged");
            else if (!nameSafe) {
                details.add("name=preserved(current " + initialName + " [" +
                    initialNameSource + "], expected " + expectedName + " [" +
                    expectedNameSource + "])" );
                actionPreserved = true;
            }
            else {
                setQualifiedName(function, owner, method);
                details.add("name=applied(" + function.getName(true) + ")");
                changed = true;
            }
        }

        boolean signatureBaselineMatches = initialSignature.equals(expectedSignature) &&
            initialConvention.equals(expectedConvention) &&
            initialSignatureSource.toString().equals(expectedSignatureSource);
        boolean signatureManual = initialSignatureSource == SourceType.USER_DEFINED &&
            !hasTag(function, TAG);

        boolean signatureSafe = signatureBaselineMatches && !signatureManual;
        boolean desiredSignatureAlreadyPresent = signatureApply &&
            signatureMatches(function, row, desiredConvention, ownerTypePath);
        if (signatureApply) {
            if (desiredSignatureAlreadyPresent) {
                details.add("signature=unchanged");
            }
            else if (signatureManual) {
                details.add("signature=preserved(USER_DEFINED " + initialSignature + ")");
                actionPreserved = true;
            }
            else if (!signatureSafe) {
                details.add("signature=preserved(stale baseline; current " + initialSignature +
                    ", expected " + expectedSignature + ")");
                actionPreserved = true;
            }
            else {
                applySignature(function, row, desiredConvention, owner, ownerTypePath);
                details.add("signature=applied(" +
                    function.getSignature().getPrototypeString(true) + ")");
                changed = true;
            }
        }

        if (conventionApply && !signatureApply) {
            if (initialConvention.equals(desiredConvention)) {
                details.add("convention=unchanged");
            }
            else if (signatureManual) {
                details.add("convention=preserved(USER_DEFINED signature)");
                actionPreserved = true;
            }
            else if (!signatureSafe) {
                details.add("convention=preserved(stale signature baseline)");
                actionPreserved = true;
            }
            else {
                ensureOwnerNamespace(function, owner);
                function.setCallingConvention(desiredConvention);
                function.setSignatureSource(SourceType.ANALYSIS);
                verifyThisType(function, ownerTypePath);
                details.add("convention=applied(" + desiredConvention + ")");
                changed = true;
            }
        }
        else if (conventionApply && signatureApply && desiredSignatureAlreadyPresent) {
            details.add("convention=unchanged");
        }

        if (changed) {
            function.addTag(TAG);
            addRecoveryComment(function, row);
        }
        String status;
        if (actionConflict && !changed) status = "conflict";
        else if (changed && (actionConflict || actionPreserved)) status = "partial";
        else if (changed) status = "applied";
        else if (actionPreserved) status = "preserved";
        else status = "unchanged";
        return new ApplyResult(status, String.join("; ", details), changed);
    }

    private void applySignature(Function function, Map<String, String> row,
            String convention, String owner, String ownerTypePath) throws Exception {
        // Ghidra owns the synthetic this parameter and rejects setDataType() on it.
        // Give the method its proven class namespace first; __thiscall can then
        // synthesize this from the class/type relationship itself.
        ensureOwnerNamespace(function, owner);
        DataType returnType = requireType(unt(row.get("return_type_path")));
        List<Variable> parameters = parseParameters(unt(row.get("parameters")));
        function.updateFunction(convention, new ReturnParameterImpl(returnType, currentProgram),
            parameters, FunctionUpdateType.DYNAMIC_STORAGE_FORMAL_PARAMS, true,
            SourceType.ANALYSIS);
        function.setVarArgs(booleanValue(row.get("varargs")));
        function.setNoReturn(booleanValue(row.get("noreturn")));
        function.setSignatureSource(SourceType.ANALYSIS);
        verifyThisType(function, ownerTypePath);
    }

    private boolean signatureMatches(Function function, Map<String, String> row,
            String convention, String ownerTypePath) {
        try {
            if (!convention.equals(function.getCallingConventionName())) return false;
            DataType returnType = requireType(unt(row.get("return_type_path")));
            if (!returnType.isEquivalent(function.getReturnType())) return false;
            List<Variable> desired = parseParameters(unt(row.get("parameters")));
            List<Parameter> actual = explicitParameters(function);
            if (desired.size() != actual.size() ||
                    function.hasVarArgs() != booleanValue(row.get("varargs")) ||
                    function.hasNoReturn() != booleanValue(row.get("noreturn"))) return false;
            for (int index = 0; index < actual.size(); index++) {
                if (!desired.get(index).getDataType().isEquivalent(
                        actual.get(index).getFormalDataType())) return false;
            }
            if (!ownerTypePath.isBlank()) {
                DataType ownerType = requireType(ownerTypePath);
                Parameter thisParameter = thisParameter(function);
                if (thisParameter == null || !(thisParameter.getDataType() instanceof Pointer pointer) ||
                        !ownerType.isEquivalent(pointer.getDataType())) return false;
            }
            return true;
        }
        catch (Exception exception) {
            return false;
        }
    }

    private List<Parameter> explicitParameters(Function function) {
        List<Parameter> result = new ArrayList<>();
        for (Parameter parameter : function.getParameters())
            if (!parameter.isAutoParameter()) result.add(parameter);
        return result;
    }

    private List<Variable> parseParameters(String specification) throws Exception {
        List<Variable> result = new ArrayList<>();
        if (specification.isBlank()) return result;
        int ordinal = 1;
        for (String item : specification.split(";", -1)) {
            int separator = item.indexOf('=');
            if (separator <= 0 || separator == item.length() - 1)
                throw new IllegalArgumentException("Invalid parameter specification: " + item);
            String name = item.substring(0, separator);
            if (name.isBlank()) name = "param_" + ordinal;
            DataType type = requireType(item.substring(separator + 1));
            result.add(new ParameterImpl(name, type, currentProgram, SourceType.ANALYSIS));
            ordinal++;
        }
        return result;
    }

    private DataType requireType(String path) {
        if (path == null || path.isBlank())
            throw new IllegalArgumentException("Missing required data type path");
        DataType type = dataTypes.getDataType(path);
        if (type == null) throw new IllegalArgumentException("Missing data type: " + path);
        return type;
    }

    private void ensureOwnerNamespace(Function function, String owner) throws Exception {
        if (owner == null || owner.isBlank())
            throw new IllegalArgumentException("Missing owner for __thiscall method");
        Namespace desired = getOrCreateClass(owner);
        Namespace current = function.getParentNamespace();
        if (desired.equals(current)) return;

        SourceType source = function.getSymbol().getSource();
        boolean replaceable = current.equals(currentProgram.getGlobalNamespace()) &&
            (source == SourceType.DEFAULT || source == SourceType.ANALYSIS ||
                hasTag(function, TAG));
        if (!replaceable)
            throw new IllegalArgumentException("Owner namespace conflict: current " +
                current.getName(true) + ", proposed " + desired.getName(true));
        function.setParentNamespace(desired);
    }

    private void verifyThisType(Function function, String ownerTypePath) throws Exception {
        if (ownerTypePath == null || ownerTypePath.isBlank() ||
                !"__thiscall".equals(function.getCallingConventionName())) return;
        DataType ownerType = requireType(ownerTypePath);
        Parameter parameter = thisParameter(function);
        if (parameter == null)
            throw new IllegalArgumentException("Ghidra did not synthesize an automatic this parameter");
        if (parameter.getDataType() instanceof Pointer pointer &&
                ownerType.isEquivalent(pointer.getDataType())) return;
        throw new IllegalArgumentException("Automatic this type mismatch: got " +
            parameter.getDataType().getPathName() + ", expected pointer to " +
            ownerType.getPathName());
    }

    private Parameter thisParameter(Function function) {
        for (Parameter parameter : function.getParameters())
            if (parameter.isAutoParameter() &&
                    parameter.getAutoParameterType() == AutoParameterType.THIS) return parameter;
        return null;
    }

    private void setQualifiedName(Function function, String owner, String method) throws Exception {
        function.setParentNamespace(getOrCreateClass(owner));
        function.setName(method, SourceType.ANALYSIS);
    }

    private Namespace getOrCreateClass(String owner) throws Exception {
        SymbolTable table = currentProgram.getSymbolTable();
        Namespace parent = currentProgram.getGlobalNamespace();
        String[] parts = owner.split("::");
        for (int index = 0; index < parts.length; index++) {
            String part = parts[index];
            Namespace existing = table.getNamespace(part, parent);
            if (existing == null) {
                existing = index == parts.length - 1 ?
                    table.createClass(parent, part, SourceType.USER_DEFINED) :
                    table.getOrCreateNameSpace(parent, part, SourceType.USER_DEFINED);
            }
            else if (index == parts.length - 1 && !(existing instanceof GhidraClass)) {
                existing = table.convertNamespaceToClass(existing);
            }
            parent = existing;
        }
        return parent;
    }

    private boolean hasLiveEntry(Map<String, String> row, Address targetAddress) {
        String entries = unt(row.get("entry_addresses"));
        if (entries.isBlank()) return false;
        for (String item : entries.split("\\s*\\|\\s*")) {
            try {
                Function entry = currentProgram.getFunctionManager().getFunctionAt(address(item));
                Function target = resolveThunk(entry);
                if (target != null && target.getEntryPoint().equals(targetAddress)) return true;
            }
            catch (Exception exception) {
                // Try the next recorded entry.
            }
        }
        return false;
    }

    private Function resolveThunk(Function entry) {
        Function current = entry;
        Set<Address> seen = new HashSet<>();
        for (int depth = 0; depth < 32 && current != null && current.isThunk(); depth++) {
            if (!seen.add(current.getEntryPoint())) break;
            Function next = current.getThunkedFunction(false);
            if (next == null || next.equals(current)) break;
            current = next;
        }
        return current;
    }

    private boolean isLibraryFunction(Function function) {
        for (FunctionTag tag : function.getTags()) {
            String name = tag.getName();
            if ("LIBRARY".equals(name) || name.startsWith("LIBRARY_")) return true;
        }
        String name = function.getName(true).toUpperCase(Locale.ROOT);
        return name.startsWith("LIBRARY::") || name.contains(".DLL::");
    }

    private boolean hasTag(Function function, String name) {
        for (FunctionTag tag : function.getTags()) if (name.equals(tag.getName())) return true;
        return false;
    }

    private void addRecoveryComment(Function function, Map<String, String> row) {
        String block = COMMENT_MARKER + " Recovered from virtual table slot family.\n" +
            "Tables: " + unt(row.get("table_addresses")) + "\n" +
            "Entries: " + unt(row.get("entry_addresses")) + "\n" +
            "Slots: " + unt(row.get("slot_offsets")) + "\n" +
            "Anchor: " + row.get("anchor_address") + " " + unt(row.get("anchor_name")) + "\n" +
            "Evidence: " + unt(row.get("reason"));
        String old = function.getComment();
        if (old == null || old.isBlank()) function.setComment(block);
        else if (!old.contains(COMMENT_MARKER)) function.setComment(old + "\n\n" + block);
    }

    private File inputFile() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException("Path to virtual_method_proposals.tsv is required");
        return askFile("Select reviewed virtual_method_proposals.tsv", "Apply");
    }

    private Tsv readTsv(Path path) throws Exception {
        List<String> lines = Files.readAllLines(path, StandardCharsets.UTF_8);
        if (lines.isEmpty()) throw new IllegalArgumentException("Empty TSV: " + path);
        String[] header = lines.get(0).split("\t", -1);
        List<Map<String, String>> rows = new ArrayList<>();
        for (int lineIndex = 1; lineIndex < lines.size(); lineIndex++) {
            if (lines.get(lineIndex).isBlank()) continue;
            String[] values = lines.get(lineIndex).split("\t", -1);
            if (values.length != header.length)
                throw new IllegalArgumentException(path.getFileName() + " line " +
                    (lineIndex + 1) + " has " + values.length + " columns; expected " +
                    header.length);
            Map<String, String> row = new LinkedHashMap<>();
            for (int column = 0; column < header.length; column++)
                row.put(header[column], values[column]);
            rows.add(row);
        }
        return new Tsv(List.of(header), rows);
    }

    private void requireColumns(Tsv tsv, String... names) {
        for (String name : names)
            if (!tsv.header.contains(name))
                throw new IllegalArgumentException("Missing TSV column: " + name);
    }

    private void writeReport(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("target_address\tstatus\tproposed_name\tdetail\n");
            for (ReportRow row : report)
                out.write(row.address + "\t" + row.status + "\t" + tsv(row.name) + "\t" +
                    tsv(row.detail) + "\n");
        }
    }

    private Address address(String value) {
        Address result = currentProgram.getAddressFactory().getAddress(value);
        if (result == null) throw new IllegalArgumentException("Invalid address: " + value);
        return result;
    }

    private static boolean enabled(String value) {
        return "1".equals(value) || "true".equalsIgnoreCase(value) ||
            "yes".equalsIgnoreCase(value);
    }
    private static boolean booleanValue(String value) {
        return "1".equals(value) || "true".equalsIgnoreCase(value) ||
            "yes".equalsIgnoreCase(value);
    }
    private static String tsv(String value) {
        if (value == null) return "";
        return value.replace("\\", "\\\\").replace("\t", "\\t")
            .replace("\r", "\\r").replace("\n", "\\n");
    }
    private static String unt(String value) {
        if (value == null) return "";
        StringBuilder out = new StringBuilder();
        boolean escaped = false;
        for (int index = 0; index < value.length(); index++) {
            char ch = value.charAt(index);
            if (!escaped && ch == '\\') { escaped = true; continue; }
            if (escaped) {
                if (ch == 't') out.append('\t');
                else if (ch == 'r') out.append('\r');
                else if (ch == 'n') out.append('\n');
                else out.append(ch);
                escaped = false;
            }
            else out.append(ch);
        }
        if (escaped) out.append('\\');
        return out.toString();
    }
    private static String message(Exception exception) {
        String value = exception.getMessage();
        return value == null || value.isBlank() ? exception.getClass().getSimpleName() : value;
    }

    private static class Tsv {
        final List<String> header;
        final List<Map<String, String>> rows;
        Tsv(List<String> header, List<Map<String, String>> rows) {
            this.header = header;
            this.rows = rows;
        }
    }

    private static class ApplyResult {
        final String status, detail;
        final boolean changed;
        ApplyResult(String status, String detail, boolean changed) {
            this.status = status;
            this.detail = detail;
            this.changed = changed;
        }
        static ApplyResult conflict(String detail) {
            return new ApplyResult("conflict", detail, false);
        }
    }

    private static class ReportRow {
        final String address, status, name, detail;
        ReportRow(String address, String status, String name, String detail) {
            this.address = address;
            this.status = status;
            this.name = name;
            this.detail = detail;
        }
    }
}
