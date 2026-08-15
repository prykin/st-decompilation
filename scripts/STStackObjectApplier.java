// Apply non-overlapping fixed stack-byte objects proposed by STStackObjectAnalyzer.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Apply Stack Objects

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.Array;
import ghidra.program.model.data.ArrayDataType;
import ghidra.program.model.data.ByteDataType;
import ghidra.program.model.data.DataType;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.StackFrame;
import ghidra.program.model.listing.Variable;
import ghidra.program.model.symbol.SourceType;

public class STStackObjectApplier extends GhidraScript {
    private static final String MARKER = "[STStackObjectApplier]";
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
        require(input, "apply", "kind", "function_address", "expected_function",
            "expected_signature", "stack_offset", "length", "proposed_name",
            "expected_overlaps", "site", "reason", "evidence");
        int transaction = currentProgram.startTransaction("Apply recovered stack objects");
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
            .resolve("stack_object_apply_report.tsv");
        writeReport(output);
        println("Stack objects: applied=" + count("applied") + ", unchanged=" +
            count("unchanged") + ", preserved=" + count("preserved") +
            ", conflicts=" + count("conflict") + ", disabled=" + count("disabled"));
        println("Apply report: " + output);
    }

    private void apply(Map<String, String> row) {
        String addressText = row.get("function_address");
        String target = addressText + ":" + row.get("kind") + ":" + row.get("site");
        if (!enabled(row.get("apply"))) {
            report.add(new Report(target, "disabled", row.get("reason")));
            return;
        }
        if (!"fixed_zero".equals(row.get("kind"))) {
            report.add(new Report(target, "conflict", "unsupported enabled kind"));
            return;
        }
        try {
            Address address = currentProgram.getAddressFactory().getAddress(addressText);
            Function function = address == null ? null :
                currentProgram.getFunctionManager().getFunctionAt(address);
            if (function == null) {
                report.add(new Report(target, "conflict", "function missing"));
                return;
            }
            if (!function.getName(true).equals(row.get("expected_function")) ||
                    !function.getPrototypeString(true, true).equals(row.get("expected_signature"))) {
                report.add(new Report(target, "preserved", "stale function baseline"));
                return;
            }
            int offset = Integer.parseInt(row.get("stack_offset"));
            int length = Integer.parseInt(row.get("length"));
            if (offset >= 0 || length < 2 || offset + length > 0) {
                report.add(new Report(target, "conflict", "invalid local stack range"));
                return;
            }
            Variable exact = exactVariable(function, offset, length);
            if (exact != null && exact.getDataType() instanceof Array array &&
                    array.getElementLength() == 1) {
                report.add(new Report(target, "unchanged", exact.getName()));
                return;
            }
            String overlaps = overlapFingerprint(function, offset, length);
            if (!overlaps.equals(row.get("expected_overlaps")) || !overlaps.isBlank()) {
                report.add(new Report(target, "preserved", overlaps.isBlank() ?
                    "stale overlap baseline" : "overlapping stack local appeared"));
                return;
            }
            DataType type = new ArrayDataType(ByteDataType.dataType, length, 1);
            StackFrame frame = function.getStackFrame();
            Variable created = frame.createVariable(row.get("proposed_name"), offset,
                type, SourceType.ANALYSIS);
            created.setComment(MARKER + " exact REP STOS zero span; site=" +
                row.get("site") + "; " + row.get("evidence"));
            report.add(new Report(target, "applied", created.getName()));
        }
        catch (Exception exception) {
            report.add(new Report(target, "conflict", message(exception)));
        }
    }

    private Variable exactVariable(Function function, int offset, int length) {
        for (Variable variable : function.getLocalVariables())
            if (variable.isStackVariable() && variable.getStackOffset() == offset &&
                    variable.getLength() == length) return variable;
        return null;
    }
    private String overlapFingerprint(Function function, int offset, int length) {
        int end = offset + length;
        List<String> values = new ArrayList<>();
        for (Variable variable : function.getLocalVariables()) {
            if (!variable.isStackVariable()) continue;
            int start = variable.getStackOffset();
            if (start >= end || start + variable.getLength() <= offset) continue;
            values.add(variable.getVariableStorage() + ":" + variable.getName() + ":" +
                variable.getDataType().getPathName() + ":" + variable.getSource() + ":" +
                clean(variable.getComment()));
        }
        values.sort(Comparator.naturalOrder());
        return String.join(" | ", values);
    }

    private File inputFile() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException("Path to stack_object_proposals.tsv is required");
        return askFile("Select stack_object_proposals.tsv", "Apply");
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
    private static String clean(String value) {
        return value == null ? "" : value.replace('\t', ' ').replace('\r', ' ')
            .replace('\n', ' ');
    }
    private static String message(Exception exception) {
        return exception.getMessage() == null ? exception.getClass().getSimpleName() :
            exception.getMessage();
    }
    private record Tsv(List<String> header, List<Map<String, String>> rows) {}
    private record Report(String target, String status, String detail) {}
}
