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
import java.util.List;
import java.util.Locale;
import java.util.Map;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.CategoryPath;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeConflictHandler;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.PointerDataType;
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.StructureDataType;
import ghidra.program.model.data.Undefined;
import ghidra.program.model.data.VoidDataType;
import ghidra.program.model.listing.AutoParameterType;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Function.FunctionUpdateType;
import ghidra.program.model.listing.FunctionTag;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.listing.ParameterImpl;
import ghidra.program.model.listing.ReturnParameterImpl;
import ghidra.program.model.listing.Variable;
import ghidra.program.model.symbol.SourceType;

public class STHiddenThisApplier extends GhidraScript {
    private static final String TAG = "RECOVERED_HIDDEN_THIS";
    private static final String MARKER = "[STHiddenThisApplier generated]";
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

        int transaction = currentProgram.startTransaction("Apply recovered hidden this");
        boolean commit = false;
        try {
            for (Map<String, String> row : tsv.rows) {
                monitor.checkCancelled();
                applyRow(row);
            }
            commit = true;
        }
        finally {
            currentProgram.endTransaction(transaction, commit);
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
            if (conventionApply && !"__thiscall".equals(function.getCallingConventionName())) {
                normalizeThiscall(function);
                detail.add("convention=applied(__thiscall)");
                changed = true;
            }
            else if (conventionApply) detail.add("convention=unchanged");

            if (typeApply) {
                Parameter receiverParameter = thisParameter(function);
                DataType desired = new PointerDataType(receiver,
                    currentProgram.getDefaultPointerSize(), dataTypes);
                if (receiverParameter == null) {
                    detail.add("receiver_type=conflict(no auto this parameter)");
                    conflict = true;
                }
                else if (receiverParameter.getDataType().isEquivalent(desired)) {
                    detail.add("receiver_type=unchanged");
                }
                else if (protectedSource(function.getSignatureSource()) && !scriptOwned) {
                    detail.add("receiver_type=preserved(manual signature)");
                    preserved = true;
                }
                else {
                    receiverParameter.setDataType(desired, SourceType.ANALYSIS);
                    function.setSignatureSource(SourceType.ANALYSIS);
                    detail.add("receiver_type=applied(" + receiver.getPathName() + " *)");
                    changed = true;
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
        String vtableName = typeName + "VTable";
        DataType existingVtable = dataTypes.getDataType(CATEGORY, vtableName);
        Structure vtable;
        if (existingVtable == null) {
            vtable = new StructureDataType(CATEGORY, vtableName, 0, dataTypes);
            vtable.setDescription(MARKER + " Neutral anonymous vtable skeleton; slot " +
                "signatures remain unresolved.");
        }
        else if (existingVtable instanceof Structure && generated(existingVtable))
            vtable = (Structure)existingVtable;
        else return null;

        int pointerSize = currentProgram.getDefaultPointerSize();
        int requiredVtable = maxSlot < 0 ? pointerSize : maxSlot + pointerSize;
        while (vtable.getLength() < requiredVtable) {
            int offset = vtable.getLength();
            vtable.add(voidPtr, pointerSize, String.format("slot_%02X", offset),
                "Unresolved virtual/function-pointer slot at +0x" +
                Integer.toHexString(offset).toUpperCase(Locale.ROOT) + ".");
        }
        vtable = (Structure)dataTypes.resolve(vtable, DataTypeConflictHandler.KEEP_HANDLER);

        DataType existingReceiver = dataTypes.getDataType(CATEGORY, typeName);
        Structure receiver;
        if (existingReceiver == null) {
            receiver = new StructureDataType(CATEGORY, typeName, 0, dataTypes);
            receiver.setDescription(MARKER + " Anonymous receiver shared only by proven " +
                "same-ECX flows; no semantic class owner is claimed.");
            receiver.add(new PointerDataType(vtable, dataTypes), pointerSize, "vtable",
                "Neutral vtable skeleton recovered from indirect calls through incoming this.");
        }
        else if (existingReceiver instanceof Structure && generated(existingReceiver))
            receiver = (Structure)existingReceiver;
        else return null;

        if (receiver.getLength() < observedSize)
            receiver.growStructure(observedSize - receiver.getLength());
        return (Structure)dataTypes.resolve(receiver, DataTypeConflictHandler.KEEP_HANDLER);
    }

    private void normalizeThiscall(Function function) throws Exception {
        List<Variable> parameters = new ArrayList<>();
        for (Parameter parameter : function.getParameters()) {
            if (parameter.isAutoParameter()) continue;
            parameters.add(new ParameterImpl(parameter.getName(),
                parameter.getFormalDataType(), currentProgram));
        }
        boolean varargs = function.hasVarArgs();
        function.updateFunction("__thiscall",
            new ReturnParameterImpl(function.getReturnType(), currentProgram), parameters,
            FunctionUpdateType.DYNAMIC_STORAGE_ALL_PARAMS, true, SourceType.ANALYSIS);
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
        return value == null || value.isBlank() ? exception.getClass().getSimpleName() : value;
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
