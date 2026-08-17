// Apply fixed typed stack arrays proposed by STStackOutputArrayAnalyzer.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Apply Stack Output Arrays

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
import ghidra.program.model.data.Array;
import ghidra.program.model.data.ArrayDataType;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.TypeDef;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.StackFrame;
import ghidra.program.model.listing.Variable;
import ghidra.program.model.symbol.SourceType;

public class STStackOutputArrayApplier extends GhidraScript {
    private static final String MARKER = "[STStackOutputArrayApplier]";
    private final List<Report> report = new ArrayList<>();

    @Override
    protected void run() throws Exception {
        end(true);
        if (currentProgram == null) {
            printerr("Open the analyzed ST program first.");
            return;
        }
        File file = inputFile();
        if (file == null) return;
        Tsv input = readTsv(file.toPath());
        require(input, "apply", "function_address", "expected_function",
            "expected_signature", "target_address", "expected_target",
            "expected_target_signature", "stack_offset", "length", "element_type",
            "element_width", "element_count", "proposed_name", "expected_overlaps",
            "call_sites", "consumer_sites", "reason", "evidence");
        int transaction = currentProgram.startTransaction("Apply recovered stack output arrays");
        boolean commit = false;
        try {
            for (Map<String, String> row : input.rows) {
                monitor.checkCancelled();
                apply(row);
            }
            commit = true;
        }
        finally {
            currentProgram.endTransaction(transaction, commit);
        }
        Path output = file.toPath().toAbsolutePath().getParent()
            .resolve("stack_output_array_apply_report.tsv");
        writeReport(output);
        println("Stack output arrays: applied=" + count("applied") + ", unchanged=" +
            count("unchanged") + ", preserved=" + count("preserved") +
            ", conflicts=" + count("conflict") + ", disabled=" + count("disabled"));
        println("Apply report: " + output);
    }

    private void apply(Map<String, String> row) throws Exception {
        String targetName = row.get("function_address") + ":Stack[" +
            row.get("stack_offset") + "]";
        if (!enabled(row.get("apply"))) {
            report.add(new Report(targetName, "disabled", row.get("reason")));
            return;
        }
        Function function = function(row.get("function_address"));
        Function target = function(row.get("target_address"));
        if (function == null || !function.getName(true).equals(row.get("expected_function")) ||
                !function.getPrototypeString(true, true).equals(row.get("expected_signature"))) {
            report.add(new Report(targetName, "preserved", "stale caller baseline"));
            return;
        }
        if (target == null || !target.getName(true).equals(row.get("expected_target")) ||
                !target.getPrototypeString(true, true).equals(
                    row.get("expected_target_signature"))) {
            report.add(new Report(targetName, "preserved", "stale output-callee baseline"));
            return;
        }
        int offset = Integer.parseInt(row.get("stack_offset"));
        int length = Integer.parseInt(row.get("length"));
        int width = Integer.parseInt(row.get("element_width"));
        int count = Integer.parseInt(row.get("element_count"));
        if (offset >= 0 || width < 1 || count < 2 || count > 64 ||
                length != width * count || offset + length > 0) {
            report.add(new Report(targetName, "conflict", "invalid typed stack extent"));
            return;
        }
        DataType element = currentProgram.getDataTypeManager()
            .getDataType(row.get("element_type"));
        if (element == null || element.getLength() != width)
            throw new IllegalArgumentException("missing/incompatible element type");
        List<Variable> overlaps = overlaps(function, offset, length);
        if (!overlapFingerprint(overlaps).equals(row.get("expected_overlaps"))) {
            report.add(new Report(targetName, "preserved", "stale stack-local baseline"));
            return;
        }
        for (Variable variable : overlaps) {
            if (variable.getSource() == SourceType.USER_DEFINED ||
                    variable.getSource() == SourceType.IMPORTED) {
                report.add(new Report(targetName, "preserved", "manual stack local"));
                return;
            }
        }
        if (overlaps.size() == 1) {
            Variable variable = overlaps.get(0);
            if (variable.getStackOffset() == offset && variable.getLength() == length &&
                    variable.getDataType() instanceof Array array &&
                    array.getNumElements() == count &&
                    untypedef(array.getDataType()).isEquivalent(untype(element))) {
                report.add(new Report(targetName, "unchanged", variable.getName()));
                return;
            }
        }
        DataType array = new ArrayDataType(element, count, width,
            currentProgram.getDataTypeManager());
        String oldNames = String.join(",", overlaps.stream()
            .map(Variable::getName).toList());
        for (Variable variable : overlaps) function.removeVariable(variable);
        StackFrame frame = function.getStackFrame();
        Variable created = frame.createVariable(row.get("proposed_name"), offset,
            array, SourceType.ANALYSIS);
        created.setComment(MARKER + " scalar output array; previous=" + oldNames +
            "; target=" + row.get("target_address") + "; calls=" +
            row.get("call_sites") + "; consumers=" + row.get("consumer_sites") +
            "; " + row.get("evidence"));
        function.addTag("RECOVERED_STACK_OUTPUT_ARRAY");
        report.add(new Report(targetName, "applied", array.getDisplayName()));
    }

    private List<Variable> overlaps(Function function, int offset, int length) {
        List<Variable> result = new ArrayList<>();
        int end = offset + length;
        for (Variable variable : function.getLocalVariables())
            if (variable.isStackVariable() && variable.getStackOffset() < end &&
                    variable.getStackOffset() + variable.getLength() > offset)
                result.add(variable);
        return result;
    }
    private String overlapFingerprint(List<Variable> variables) {
        List<String> result = new ArrayList<>();
        for (Variable variable : variables) result.add(fingerprint(variable));
        result.sort(String::compareTo);
        return String.join(" | ", result);
    }
    private String fingerprint(Variable variable) {
        return variable.getVariableStorage() + ":" + variable.getName() + ":" +
            variable.getDataType().getPathName() + ":" + variable.getSource() + ":" +
            text(variable.getComment());
    }
    private DataType untypedef(DataType value) {
        while (value instanceof TypeDef typeDef) value = typeDef.getBaseDataType();
        return value;
    }
    private DataType untype(DataType value) { return untypedef(value); }
    private Function function(String addressText) {
        Address address = currentProgram.getAddressFactory().getAddress(addressText);
        return address == null ? null : currentProgram.getFunctionManager().getFunctionAt(address);
    }

    private File inputFile() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException("Path to stack_output_array_proposals.tsv is required");
        return askFile("Select stack_output_array_proposals.tsv", "Apply");
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
            for (int column = 0; column < header.length; column++)
                row.put(header[column], values[column]);
            rows.add(row);
        }
        return new Tsv(List.of(header), rows);
    }
    private void require(Tsv input, String... columns) {
        for (String column : columns)
            if (!input.header.contains(column))
                throw new IllegalArgumentException("Missing TSV column: " + column);
    }
    private void writeReport(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("target\tstatus\tdetail\n");
            for (Report row : report)
                out.write(clean(row.target) + "\t" + row.status + "\t" +
                    clean(row.detail) + "\n");
        }
    }
    private long count(String status) {
        return report.stream().filter(row -> row.status.equals(status)).count();
    }
    private static boolean enabled(String value) {
        return "1".equals(value) || "true".equalsIgnoreCase(value);
    }
    private static String text(String value) { return value == null ? "" : value; }
    private static String clean(String value) {
        return text(value).replace('\t', ' ').replace('\r', ' ').replace('\n', ' ');
    }
    private record Tsv(List<String> header, List<Map<String, String>> rows) {}
    private record Report(String target, String status, String detail) {}
}
