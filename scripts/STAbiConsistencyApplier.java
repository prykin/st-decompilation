// Apply reviewed x86 ABI repairs produced by STAbiConsistencyAnalyzer.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Apply ABI Consistency

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.PointerDataType;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Function.FunctionUpdateType;
import ghidra.program.model.listing.FunctionTag;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.listing.ParameterImpl;
import ghidra.program.model.listing.ReturnParameterImpl;
import ghidra.program.model.listing.Variable;
import ghidra.program.model.symbol.SourceType;

public class STAbiConsistencyApplier extends GhidraScript {
    private static final String TAG = "RECOVERED_ABI_CONSISTENCY";
    private static final String COMMENT_MARKER = "[STAbiConsistencyApplier]";
    private DataTypeManager dataTypes;
    private final List<Report> report = new ArrayList<>();

    @Override
    protected void run() throws Exception {
        if (currentProgram == null) { printerr("Open the analyzed ST program first."); return; }
        File file = inputFile(); if (file == null) return;
        Tsv tsv = readTsv(file.toPath());
        requireColumns(tsv, "apply", "repair_kind", "function_address", "expected_function",
            "expected_signature", "expected_signature_source", "target_kind", "target_ordinal",
            "expected_target_name", "expected_target_type", "expected_target_source",
            "proposed_name", "proposed_type", "proposed_convention", "proposed_varargs",
            "proposed_parameter_types", "proposed_parameter_names", "confidence", "evidence");
        dataTypes = currentProgram.getDataTypeManager();

        int tx = currentProgram.startTransaction("Apply x86 ABI consistency repairs");
        boolean commit = false;
        try {
            for (Map<String, String> row : tsv.rows) {
                monitor.checkCancelled();
                if (!enabled(row.get("apply"))) {
                    report.add(new Report(row.get("function_address"), row.get("repair_kind"),
                        "disabled", "apply=0"));
                    continue;
                }
                apply(row);
            }
            commit = report.stream().anyMatch(row -> row.status.equals("applied"));
        }
        finally { currentProgram.endTransaction(tx, commit); }
        Path output = file.toPath().toAbsolutePath().normalize().getParent()
            .resolve("abi_consistency_apply_report.tsv");
        writeReport(output);
        println("ABI repairs: applied=" + count("applied") + ", unchanged=" +
            count("unchanged") + ", preserved=" + count("preserved") +
            ", conflicts=" + count("conflict") + ", disabled=" + count("disabled"));
        println("Apply report: " + output);
    }

    private void apply(Map<String, String> row) {
        String addressText = row.get("function_address");
        try {
            Address address = currentProgram.getAddressFactory().getAddress(addressText);
            Function function = address == null ? null :
                currentProgram.getFunctionManager().getFunctionAt(address);
            if (function == null) { conflict(row, "function missing"); return; }
            if (!function.getName(true).equals(unt(row.get("expected_function")))) {
                conflict(row, "function identity changed"); return;
            }
            String targetKind = row.get("target_kind");
            if ("function".equals(targetKind)) applyFullPrototype(function, row);
            else applyTarget(function, row);
        }
        catch (Exception exception) { conflict(row, message(exception)); }
    }

    private void applyFullPrototype(Function function, Map<String, String> row) throws Exception {
        String returnPath = row.get("proposed_type");
        String convention = row.get("proposed_convention");
        boolean varargs = enabled(row.get("proposed_varargs"));
        String[] typePaths = split(row.get("proposed_parameter_types"));
        String[] names = split(row.get("proposed_parameter_names"));
        if (typePaths.length != names.length)
            throw new IllegalArgumentException("parameter type/name count mismatch");
        DataType returnType = requireType(returnPath);
        List<Variable> parameters = new ArrayList<>();
        for (int index = 0; index < typePaths.length; index++)
            parameters.add(new ParameterImpl(names[index], requireType(typePaths[index]),
                currentProgram, SourceType.ANALYSIS));
        if (fullPrototypeMatches(function, returnType, convention, varargs, parameters)) {
            report.add(new Report(addr(function.getEntryPoint()), row.get("repair_kind"),
                "unchanged", "desired prototype already present"));
            return;
        }
        if (!function.getSignature().getPrototypeString(true).equals(
                    unt(row.get("expected_signature"))) ||
                !function.getSignatureSource().toString().equals(
                    row.get("expected_signature_source"))) {
            report.add(new Report(addr(function.getEntryPoint()), row.get("repair_kind"),
                "preserved", "stale or manually changed signature"));
            return;
        }
        if (function.getSignatureSource() == SourceType.USER_DEFINED && !hasTag(function, TAG)) {
            report.add(new Report(addr(function.getEntryPoint()), row.get("repair_kind"),
                "preserved", "USER_DEFINED signature"));
            return;
        }
        function.updateFunction(convention, new ReturnParameterImpl(returnType, currentProgram),
            parameters, FunctionUpdateType.DYNAMIC_STORAGE_FORMAL_PARAMS, true,
            SourceType.ANALYSIS);
        function.setVarArgs(varargs);
        function.setSignatureSource(SourceType.ANALYSIS);
        finish(function, row, "prototype=" + function.getSignature().getPrototypeString(true));
    }

    private void applyTarget(Function function, Map<String, String> row) throws Exception {
        String kind = row.get("target_kind");
        int ordinal = Integer.parseInt(row.get("target_ordinal"));
        Parameter target = "return".equals(kind) ? function.getReturn() :
            explicitParameter(function, ordinal);
        if (target == null) { conflict(row, "target parameter missing"); return; }
        DataType proposed = requireType(row.get("proposed_type"));
        if (proposed.isEquivalent(target.getFormalDataType())) {
            report.add(new Report(addr(function.getEntryPoint()), row.get("repair_kind"),
                "unchanged", kind + " already has " + proposed.getPathName()));
            return;
        }
        boolean baseline = unt(target.getName()).equals(unt(row.get("expected_target_name"))) &&
            typeSpec(target.getFormalDataType()).equals(row.get("expected_target_type")) &&
            target.getSource().toString().equals(row.get("expected_target_source"));
        if (!baseline || manual(target.getSource())) {
            report.add(new Report(addr(function.getEntryPoint()), row.get("repair_kind"),
                "preserved", "stale or manual " + kind + " baseline"));
            return;
        }
        if ("return".equals(kind)) function.setReturnType(proposed, SourceType.ANALYSIS);
        else {
            target.setDataType(proposed, SourceType.ANALYSIS);
            String proposedName = unt(row.get("proposed_name"));
            if (!proposedName.isBlank() && !proposedName.equals(target.getName()))
                target.setName(proposedName, SourceType.ANALYSIS);
        }
        function.setSignatureSource(SourceType.ANALYSIS);
        finish(function, row, kind + "=" + proposed.getPathName());
    }

    private void finish(Function function, Map<String, String> row, String detail) throws Exception {
        function.addTag(TAG);
        String old = function.getComment();
        String line = COMMENT_MARKER + " " + row.get("repair_kind") + ": " + detail +
            " Evidence: " + unt(row.get("evidence"));
        if (old == null || old.isBlank()) function.setComment(line);
        else if (!old.contains(COMMENT_MARKER + " " + row.get("repair_kind")))
            function.setComment(old + "\n" + line);
        report.add(new Report(addr(function.getEntryPoint()), row.get("repair_kind"),
            "applied", detail));
    }

    private boolean fullPrototypeMatches(Function function, DataType returned, String convention,
            boolean varargs, List<Variable> desired) {
        if (!returned.isEquivalent(function.getReturnType()) ||
                !convention.equals(function.getCallingConventionName()) ||
                varargs != function.hasVarArgs()) return false;
        List<Parameter> actual = explicitParameters(function);
        if (actual.size() != desired.size()) return false;
        for (int index = 0; index < actual.size(); index++)
            if (!actual.get(index).getFormalDataType().isEquivalent(
                    desired.get(index).getDataType())) return false;
        return true;
    }

    private Parameter explicitParameter(Function function, int ordinal) {
        for (Parameter parameter : function.getParameters())
            if (!parameter.isAutoParameter() && parameter.getOrdinal() == ordinal) return parameter;
        return null;
    }
    private List<Parameter> explicitParameters(Function function) {
        List<Parameter> result = new ArrayList<>();
        for (Parameter parameter : function.getParameters())
            if (!parameter.isAutoParameter()) result.add(parameter);
        return result;
    }
    private DataType requireType(String specification) {
        if (specification.startsWith("pointer:")) {
            DataType base = requireType(specification.substring("pointer:".length()));
            return new PointerDataType(base, currentProgram.getDefaultPointerSize(), dataTypes);
        }
        DataType type = dataTypes.getDataType(specification);
        if (type == null) throw new IllegalArgumentException("Missing data type: " + specification);
        return type;
    }
    private String typeSpec(DataType type) {
        if (type instanceof Pointer pointer && pointer.getDataType() != null)
            return "pointer:" + typeSpec(pointer.getDataType());
        return type == null ? "" : type.getPathName();
    }
    private boolean hasTag(Function function, String name) {
        for (FunctionTag tag : function.getTags()) if (name.equals(tag.getName())) return true;
        return false;
    }
    private boolean manual(SourceType source) {
        return source == SourceType.USER_DEFINED || source == SourceType.IMPORTED;
    }
    private void conflict(Map<String, String> row, String detail) {
        report.add(new Report(row.get("function_address"), row.get("repair_kind"),
            "conflict", detail));
    }
    private long count(String status) {
        return report.stream().filter(row -> row.status.equals(status)).count();
    }

    private File inputFile() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException("Path to abi_consistency_proposals.tsv is required");
        return askFile("Select abi_consistency_proposals.tsv", "Apply ABI repairs");
    }
    private Tsv readTsv(Path path) throws Exception {
        List<String> lines = Files.readAllLines(path, StandardCharsets.UTF_8);
        if (lines.isEmpty()) throw new IllegalArgumentException("Empty TSV: " + path);
        String[] header = lines.get(0).split("\t", -1);
        List<Map<String, String>> rows = new ArrayList<>();
        for (int line = 1; line < lines.size(); line++) {
            if (lines.get(line).isBlank()) continue;
            String[] values = lines.get(line).split("\t", -1);
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
    private void requireColumns(Tsv tsv, String... columns) {
        for (String column : columns)
            if (!tsv.header.contains(column))
                throw new IllegalArgumentException("Missing TSV column: " + column);
    }
    private void writeReport(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("function_address\trepair_kind\tstatus\tdetail\n");
            for (Report row : report) out.write(row.address + "\t" + row.kind + "\t" +
                row.status + "\t" + clean(row.detail) + "\n");
        }
    }
    private static String[] split(String value) {
        return value == null || value.isBlank() ? new String[0] : value.split(";", -1);
    }
    private static boolean enabled(String value) {
        return "1".equals(value) || "true".equalsIgnoreCase(value) ||
            "yes".equalsIgnoreCase(value);
    }
    private static String addr(Address address) {
        return address == null ? "" : address.toString().toUpperCase();
    }
    private static String clean(String value) {
        return value == null ? "" : value.replace('\t', ' ').replace('\r', ' ').replace('\n', ' ');
    }
    private static String unt(String value) {
        if (value == null) return "";
        StringBuilder out = new StringBuilder(); boolean escaped = false;
        for (int index = 0; index < value.length(); index++) {
            char ch = value.charAt(index);
            if (!escaped && ch == '\\') { escaped = true; continue; }
            if (escaped) {
                if (ch == 't') out.append('\t'); else if (ch == 'r') out.append('\r');
                else if (ch == 'n') out.append('\n'); else out.append(ch);
                escaped = false;
            }
            else out.append(ch);
        }
        if (escaped) out.append('\\'); return out.toString();
    }
    private static String message(Exception exception) {
        return exception.getMessage() == null ? exception.getClass().getSimpleName() :
            exception.getMessage();
    }
    private record Tsv(List<String> header, List<Map<String, String>> rows) { }
    private record Report(String address, String kind, String status, String detail) { }
}
