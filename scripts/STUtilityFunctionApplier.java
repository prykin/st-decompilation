// Apply verified utility-function semantics produced by STUtilityFunctionAnalyzer.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Apply Utility Functions

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
import ghidra.program.model.data.PointerDataType;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.symbol.SourceType;

public class STUtilityFunctionApplier extends GhidraScript {
    private static final String MARKER = "[STUtilityFunctionApplier]";
    private static final String TAG = "RECOVERED_UTILITY_SEMANTICS";
    private final List<Report> report = new ArrayList<>();
    private DataTypeManager dataTypes;

    @Override
    protected void run() throws Exception {
        // Explicit per-script transactions must not be nested in GhidraScript's wrapper.
        end(true);
        if (currentProgram == null) { printerr("Open the analyzed ST program first."); return; }
        File file = inputFile(); if (file == null) return;
        Tsv input = readTsv(file.toPath());
        require(input, "apply", "function_address", "semantic_id", "expected_qualified_name",
            "expected_name", "expected_name_source", "expected_signature", "expected_convention",
            "expected_parameters", "proposed_name", "proposed_convention",
            "proposed_return_type", "proposed_parameter_types", "proposed_parameter_names",
            "semantics", "evidence");
        dataTypes = currentProgram.getDataTypeManager();
        int transaction = currentProgram.startTransaction("Apply utility-function semantics");
        boolean commit = false;
        try {
            for (Map<String, String> row : input.rows) {
                monitor.checkCancelled(); apply(row);
            }
            commit = true;
        }
        finally { currentProgram.endTransaction(transaction, commit); }
        Path output = file.toPath().toAbsolutePath().getParent()
            .resolve("utility_function_apply_report.tsv");
        writeReport(output);
        println("Utility functions: applied=" + count("applied") + ", unchanged=" +
            count("unchanged") + ", preserved=" + count("preserved") + ", conflicts=" +
            count("conflict") + ", disabled=" + count("disabled"));
        println("Apply report: " + output);
    }

    private void apply(Map<String, String> row) {
        String addressText = row.get("function_address");
        if (!enabled(row.get("apply"))) {
            report.add(new Report(addressText, row.get("semantic_id"), "disabled", "apply=0"));
            return;
        }
        try {
            Address address = currentProgram.getAddressFactory().getAddress(addressText);
            Function function = address == null ? null :
                currentProgram.getFunctionManager().getFunctionAt(address);
            if (function == null) { conflict(addressText, row, "function missing"); return; }
            boolean exact = function.getName(true).equals(unt(row.get("expected_qualified_name"))) &&
                function.getName().equals(unt(row.get("expected_name"))) &&
                function.getSymbol().getSource().toString().equals(row.get("expected_name_source")) &&
                function.getPrototypeString(true, true).equals(unt(row.get("expected_signature"))) &&
                function.getCallingConventionName().equals(row.get("expected_convention")) &&
                parameterBaseline(function).equals(unt(row.get("expected_parameters")));
            boolean already = function.getName().equals(row.get("proposed_name")) &&
                function.getCallingConventionName().equals(row.get("proposed_convention")) &&
                typeSpec(function.getReturnType()).equals(row.get("proposed_return_type")) &&
                proposedParametersPresent(function, row);
            if (already) {
                report.add(new Report(addressText, row.get("semantic_id"), "unchanged",
                    "desired name and prototype already present")); return;
            }
            if (!exact || function.getSymbol().getSource() == SourceType.USER_DEFINED ||
                    function.getSymbol().getSource() == SourceType.IMPORTED) {
                report.add(new Report(addressText, row.get("semantic_id"), "preserved",
                    "stale baseline or manual function identity")); return;
            }
            String[] types = split(row.get("proposed_parameter_types"));
            String[] names = split(row.get("proposed_parameter_names"));
            List<Parameter> parameters = explicitParameters(function);
            if (types.length != parameters.size() || names.length != parameters.size()) {
                conflict(addressText, row, "parameter count mismatch"); return;
            }
            DataType returnType = resolve(row.get("proposed_return_type"));
            if (returnType == null) { conflict(addressText, row, "return type missing"); return; }
            List<DataType> resolved = new ArrayList<>();
            for (String specification : types) {
                DataType type = resolve(specification);
                if (type == null) { conflict(addressText, row, "parameter type missing: " + specification); return; }
                resolved.add(type);
            }
            function.setCallingConvention(row.get("proposed_convention"));
            function.setReturnType(returnType, SourceType.ANALYSIS);
            for (int index = 0; index < parameters.size(); index++) {
                Parameter parameter = parameters.get(index);
                if (parameter.getSource() == SourceType.USER_DEFINED ||
                        parameter.getSource() == SourceType.IMPORTED) {
                    conflict(addressText, row, "manual parameter " + index + " appeared"); return;
                }
                parameter.setDataType(resolved.get(index), SourceType.ANALYSIS);
                parameter.setName(names[index], SourceType.ANALYSIS);
            }
            function.getSymbol().setName(row.get("proposed_name"), SourceType.ANALYSIS);
            function.addTag(TAG);
            replaceComment(function, row);
            report.add(new Report(addressText, row.get("semantic_id"), "applied",
                row.get("proposed_name") + " " + row.get("proposed_convention")));
        }
        catch (Exception exception) { conflict(addressText, row, message(exception)); }
    }

    private boolean proposedParametersPresent(Function function, Map<String, String> row) {
        String[] types = split(row.get("proposed_parameter_types"));
        String[] names = split(row.get("proposed_parameter_names"));
        List<Parameter> parameters = explicitParameters(function);
        if (types.length != parameters.size() || names.length != parameters.size()) return false;
        for (int index = 0; index < types.length; index++)
            if (!typeSpec(parameters.get(index).getDataType()).equals(types[index]) ||
                    !parameters.get(index).getName().equals(names[index])) return false;
        return true;
    }

    private void replaceComment(Function function, Map<String, String> row) {
        String block = MARKER + " " + row.get("semantic_id") + ": " +
            unt(row.get("semantics")) + "\nEvidence: " + unt(row.get("evidence"));
        String old = function.getComment();
        List<String> kept = new ArrayList<>();
        if (old != null) for (String item : old.split("\\n\\s*\\n"))
            if (!item.trim().startsWith(MARKER) && !item.isBlank()) kept.add(item.trim());
        kept.add(block); function.setComment(String.join("\n\n", kept));
    }

    private DataType resolve(String specification) {
        specification = unt(specification);
        if (specification.startsWith("pointer:")) {
            DataType base = resolve(specification.substring("pointer:".length()));
            return base == null ? null : new PointerDataType(base,
                currentProgram.getDefaultPointerSize(), dataTypes);
        }
        return dataTypes.getDataType(specification);
    }
    private String typeSpec(DataType type) {
        if (type instanceof ghidra.program.model.data.Pointer pointer &&
                pointer.getDataType() != null)
            return "pointer:" + typeSpec(pointer.getDataType());
        return type == null ? "" : type.getPathName();
    }
    private List<Parameter> explicitParameters(Function function) {
        List<Parameter> result = new ArrayList<>();
        for (Parameter parameter : function.getParameters())
            if (!parameter.isAutoParameter()) result.add(parameter);
        return result;
    }
    private String parameterBaseline(Function function) {
        List<String> values = new ArrayList<>();
        for (Parameter parameter : explicitParameters(function))
            values.add(parameter.getName() + "=" + typeSpec(parameter.getDataType()) + "@" +
                parameter.getSource());
        return String.join(";", values);
    }
    private static String[] split(String value) {
        value = unt(value); return value.isBlank() ? new String[0] : value.split(";", -1);
    }
    private void conflict(String address, Map<String, String> row, String detail) {
        report.add(new Report(address, row.get("semantic_id"), "conflict", detail));
    }
    private long count(String status) { return report.stream().filter(r -> r.status.equals(status)).count(); }
    private void writeReport(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("function_address\tsemantic_id\tstatus\tdetail\n");
            for (Report row : report) out.write(row.address + "\t" + row.id + "\t" +
                row.status + "\t" + clean(row.detail) + "\n");
        }
    }
    private File inputFile() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException("Path to utility_function_proposals.tsv is required");
        return askFile("Select utility_function_proposals.tsv", "Apply");
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
                throw new IllegalArgumentException("Invalid TSV row " + (line + 1));
            Map<String, String> row = new LinkedHashMap<>();
            for (int column = 0; column < header.length; column++) row.put(header[column], values[column]);
            rows.add(row);
        }
        return new Tsv(List.of(header), rows);
    }
    private void require(Tsv input, String... columns) {
        for (String column : columns) if (!input.header.contains(column))
            throw new IllegalArgumentException("Missing TSV column: " + column);
    }
    private static boolean enabled(String value) { return "1".equals(value) || "true".equalsIgnoreCase(value); }
    private static String unt(String value) { return value == null ? "" : value; }
    private static String clean(String value) { return unt(value).replace('\t', ' ').replace('\r', ' ').replace('\n', ' '); }
    private static String message(Exception exception) {
        return exception.getMessage() == null ? exception.getClass().getSimpleName() : exception.getMessage();
    }
    private record Tsv(List<String> header, List<Map<String, String>> rows) {}
    private record Report(String address, String id, String status, String detail) {}
}
