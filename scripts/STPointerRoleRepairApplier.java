// Reset reviewed mixed-lifetime locals so the decompiler can infer each SSA role independently.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Apply Pointer Role Repairs

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
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.Undefined4DataType;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Variable;
import ghidra.program.model.symbol.SourceType;

public class STPointerRoleRepairApplier extends GhidraScript {
    private static final String POINTER_MARKER = "[STPointerShapeApplier]";
    private static final String MARKER = "[STPointerRoleRepairApplier]";
    private final List<ReportRow> report = new ArrayList<>();

    @Override
    protected void run() throws Exception {
        // Explicit per-script transactions must not be nested in GhidraScript's wrapper.
        end(true);
        if (currentProgram == null) {
            printerr("Open the same program that was analyzed.");
            return;
        }
        File file = inputFile();
        if (file == null) return;
        if (file.isDirectory()) file = new File(file, "pointer_role_repair_proposals.tsv");
        Tsv input = readTsv(file.toPath());
        requireColumns(input, "apply", "function_address", "function_name", "target_name",
            "target_locator", "expected_type", "expected_source", "expected_comment",
            "proposed_type", "confidence", "reason");

        int transaction = currentProgram.startTransaction("Repair mixed pointer/scalar local roles");
        boolean commit = false;
        try {
            for (Map<String, String> row : input.rows) {
                monitor.checkCancelled();
                applyRow(row);
            }
            commit = true;
        }
        finally {
            currentProgram.endTransaction(transaction, commit);
        }
        Path output = file.toPath().toAbsolutePath().normalize().resolveSibling(
            "pointer_role_repair_apply_report.tsv");
        writeReport(output);
        println("Pointer-role repairs: applied=" + count("applied") + ", unchanged=" +
            count("unchanged") + ", preserved=" + count("preserved") +
            ", conflicts=" + count("conflict") + ", disabled=" + count("disabled"));
        println("Apply report: " + output);
    }

    private void applyRow(Map<String, String> row) {
        String functionAddress = unt(row.get("function_address"));
        String name = unt(row.get("target_name"));
        if (!enabled(row.get("apply"))) {
            report.add(result(functionAddress, name, "disabled", "apply is 0"));
            return;
        }
        try {
            Address address = currentProgram.getAddressFactory().getAddress(functionAddress);
            Function function = address == null ? null :
                currentProgram.getFunctionManager().getFunctionAt(address);
            if (function == null) throw new IllegalArgumentException("function is missing");
            Variable variable = findVariable(function, unt(row.get("target_locator")), name);
            if (variable == null)
                throw new IllegalArgumentException("persistent local baseline is stale/ambiguous");
            String currentType = typeSpecification(variable);
            String comment = variable.getComment() == null ? "" : variable.getComment();
            if (currentType.equals("/undefined4") && comment.contains(MARKER)) {
                report.add(result(functionAddress, name, "unchanged", "repair already applied"));
                return;
            }
            if (!currentType.equals(unt(row.get("expected_type"))) ||
                    !variable.getSource().toString().equals(unt(row.get("expected_source"))) ||
                    !comment.equals(unt(row.get("expected_comment")))) {
                report.add(result(functionAddress, name, "preserved",
                    "stale/manual baseline: " + currentType));
                return;
            }
            if (!comment.contains(POINTER_MARKER)) {
                report.add(result(functionAddress, name, "preserved",
                    "local is not owned by STPointerShapeApplier"));
                return;
            }
            if (variable.getSource() == SourceType.USER_DEFINED ||
                    variable.getSource() == SourceType.IMPORTED) {
                report.add(result(functionAddress, name, "preserved",
                    "manual/imported local"));
                return;
            }
            variable.setDataType(Undefined4DataType.dataType, SourceType.ANALYSIS);
            variable.setComment(repairedComment(comment, unt(row.get("reason"))));
            report.add(result(functionAddress, name, "applied",
                currentType + " -> /undefined4"));
        }
        catch (Exception exception) {
            report.add(result(functionAddress, name, "conflict", message(exception)));
        }
    }

    private Variable findVariable(Function function, String locator, String name) {
        List<Variable> storageMatches = new ArrayList<>();
        for (Variable variable : function.getLocalVariables()) {
            if (!variable.isValid() || variable.getVariableStorage() == null ||
                    !variable.getVariableStorage().toString().equals(locator)) continue;
            if (variable.getName().equals(name)) return variable;
            storageMatches.add(variable);
        }
        return storageMatches.size() == 1 ? storageMatches.get(0) : null;
    }

    private String repairedComment(String old, String reason) {
        List<String> retained = new ArrayList<>();
        for (String line : old.split("\\R"))
            if (!line.contains(POINTER_MARKER) && !line.isBlank()) retained.add(line);
        retained.add(MARKER + " Reset persistent pointer type because this stack slot has " +
            "incompatible scalar and pointer lifetimes. " + reason);
        return String.join("\n", retained);
    }

    private String typeSpecification(Variable variable) {
        if (variable.getDataType() instanceof Pointer pointer && pointer.getDataType() != null)
            return "pointer:" + pointer.getDataType().getPathName();
        return variable.getDataType().getPathName();
    }

    private File inputFile() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException(
                "Path to pointer_role_repair_proposals.tsv is required");
        return askFile("Select pointer_role_repair_proposals.tsv or its directory",
            "Apply pointer role repairs");
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
                throw new IllegalArgumentException("Invalid TSV row " + (line + 1));
            Map<String, String> row = new LinkedHashMap<>();
            for (int column = 0; column < header.length; column++)
                row.put(header[column], values[column]);
            rows.add(row);
        }
        return new Tsv(List.of(header), rows);
    }
    private void requireColumns(Tsv input, String... names) {
        for (String name : names) if (!input.header.contains(name))
            throw new IllegalArgumentException("Missing TSV column: " + name);
    }
    private void writeReport(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("function_address\ttarget_name\tstatus\tdetail\n");
            for (ReportRow row : report) out.write(row.functionAddress + "\t" +
                tsv(row.name) + "\t" + row.status + "\t" + tsv(row.detail) + "\n");
        }
    }
    private long count(String status) {
        return report.stream().filter(row -> row.status.equals(status)).count();
    }
    private static boolean enabled(String value) {
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
        for (char ch : value.toCharArray()) {
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
    private static ReportRow result(String function, String name, String status, String detail) {
        return new ReportRow(function.toUpperCase(Locale.ROOT), name, status, detail);
    }

    private record Tsv(List<String> header, List<Map<String, String>> rows) {}
    private record ReportRow(String functionAddress, String name, String status, String detail) {}
}
