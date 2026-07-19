// Apply reviewed control-flow labels produced by STControlFlowLabelAnalyzer.
// Existing manual labels are never replaced or demoted.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Apply Control Flow Labels

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
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.Symbol;
import ghidra.program.model.symbol.SymbolTable;
import ghidra.program.model.symbol.SymbolType;

public class STControlFlowLabelApplier extends GhidraScript {
    private static final String TAG = "RECOVERED_CONTROL_FLOW_LABELS";
    private final List<ReportRow> report = new ArrayList<>();
    private SymbolTable symbols;

    @Override
    protected void run() throws Exception {
        if (currentProgram == null) {
            printerr("Open the same program that was analyzed.");
            return;
        }
        File proposalFile = inputFile();
        if (proposalFile == null) return;
        Tsv tsv = readTsv(proposalFile.toPath());
        requireColumns(tsv, "apply", "function_address", "expected_function",
            "label_address", "decompiler_label", "existing_primary_name",
            "existing_primary_source", "proposed_name", "kind", "goto_count",
            "confidence", "reason");
        symbols = currentProgram.getSymbolTable();

        int transaction = currentProgram.startTransaction(
            "Apply recovered control-flow labels");
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

        Path reportPath = proposalFile.getAbsoluteFile().getParentFile().toPath()
            .resolve("control_flow_label_apply_report.tsv");
        writeReport(reportPath);
        long applied = count("applied"), unchanged = count("unchanged");
        long preserved = count("preserved"), conflicts = count("conflict");
        long disabled = count("disabled");
        println("Control-flow labels: applied=" + applied + ", unchanged=" + unchanged +
            ", preserved=" + preserved + ", conflicts=" + conflicts +
            ", disabled=" + disabled);
        println("Apply report: " + reportPath.toAbsolutePath().normalize());
    }

    private void applyRow(Map<String, String> row) {
        String functionAddress = row.get("function_address");
        String labelAddress = row.get("label_address");
        String proposedName = unt(row.get("proposed_name"));
        if (!enabled(row.get("apply"))) {
            report.add(new ReportRow(functionAddress, labelAddress, proposedName,
                "disabled", "apply=0"));
            return;
        }
        try {
            Address functionEntry = address(functionAddress);
            Address target = address(labelAddress);
            Function function = currentProgram.getFunctionManager().getFunctionAt(functionEntry);
            if (function == null) {
                report.add(new ReportRow(functionAddress, labelAddress, proposedName,
                    "conflict", "function no longer exists"));
                return;
            }
            if (!function.getBody().contains(target) || target.equals(functionEntry)) {
                report.add(new ReportRow(functionAddress, labelAddress, proposedName,
                    "conflict", "label target is outside function body or is the entry point"));
                return;
            }
            if (!proposedName.matches("[A-Za-z_][A-Za-z0-9_]*")) {
                report.add(new ReportRow(functionAddress, labelAddress, proposedName,
                    "conflict", "invalid label identifier"));
                return;
            }

            Symbol current = symbols.getPrimarySymbol(target);
            if (current != null && current.getName().equals(proposedName) &&
                    function.equals(current.getParentNamespace())) {
                function.addTag(TAG);
                report.add(new ReportRow(functionAddress, labelAddress, proposedName,
                    "unchanged", "label is already primary"));
                return;
            }
            String safety = safetyConflict(target, current);
            if (safety != null) {
                report.add(new ReportRow(functionAddress, labelAddress, proposedName,
                    "preserved", safety));
                return;
            }

            Symbol label = symbols.getSymbol(proposedName, target, function);
            if (label == null)
                label = symbols.createLabel(target, proposedName, function, SourceType.ANALYSIS);
            if (!label.setPrimary() && !label.isPrimary()) {
                report.add(new ReportRow(functionAddress, labelAddress, proposedName,
                    "conflict", "could not make recovered label primary"));
                return;
            }
            function.addTag(TAG);
            report.add(new ReportRow(functionAddress, labelAddress, proposedName,
                "applied", "kind=" + row.get("kind") + "; gotos=" +
                    row.get("goto_count") + "; previous=" +
                    (current == null ? "" : current.getName(true))));
        }
        catch (Exception exception) {
            report.add(new ReportRow(functionAddress, labelAddress, proposedName,
                "conflict", message(exception)));
        }
    }

    private String safetyConflict(Address target, Symbol primary) {
        for (Symbol symbol : symbols.getSymbols(target)) {
            if (symbol.getSymbolType() == SymbolType.LABEL &&
                    symbol.getSource() == SourceType.USER_DEFINED &&
                    !symbol.getName().startsWith("cf_"))
                return "manual label preserved: " + symbol.getName(true);
        }
        if (primary == null || primary.isDynamic() || primary.getSource() == SourceType.DEFAULT)
            return null;
        if (generatedName(primary.getName()) || generatedName(primary.getName(true))) return null;
        return "non-generated primary label preserved: " + primary.getName(true) +
            " [" + primary.getSource() + "]";
    }

    private boolean generatedName(String name) {
        if (name == null) return true;
        String leaf = name;
        int separator = leaf.lastIndexOf("::");
        if (separator >= 0) leaf = leaf.substring(separator + 2);
        return leaf.startsWith("LAB_") || leaf.startsWith("switchD_") ||
            leaf.startsWith("caseD_") || leaf.startsWith("joined_r0x") ||
            leaf.startsWith("code_r0x") || leaf.startsWith("cf_");
    }

    private File inputFile() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException(
                "Path to control_flow_label_proposals.tsv is required");
        return askFile("Select control_flow_label_proposals.tsv",
            "Apply control-flow labels");
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
        for (String name : names)
            if (!tsv.header.contains(name))
                throw new IllegalArgumentException("Missing TSV column: " + name);
    }

    private void writeReport(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("function_address\tlabel_address\tproposed_name\tstatus\tdetail\n");
            for (ReportRow row : report) {
                out.write(row.functionAddress + "\t" + row.labelAddress + "\t" +
                    row.proposedName + "\t" + row.status + "\t" + tsv(row.detail) + "\n");
            }
        }
    }

    private long count(String status) {
        return report.stream().filter(row -> row.status.equals(status)).count();
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
    private static String tsv(String value) {
        if (value == null) return "";
        return value.replace("\\", "\\\\").replace("\t", "\\t")
            .replace("\r", "\\r").replace("\n", "\\n");
    }
    private static String unt(String value) {
        if (value == null) return "";
        StringBuilder result = new StringBuilder();
        boolean escaped = false;
        for (char ch : value.toCharArray()) {
            if (!escaped && ch == '\\') { escaped = true; continue; }
            if (escaped) {
                if (ch == 't') result.append('\t');
                else if (ch == 'r') result.append('\r');
                else if (ch == 'n') result.append('\n');
                else result.append(ch);
                escaped = false;
            }
            else result.append(ch);
        }
        if (escaped) result.append('\\');
        return result.toString();
    }
    private static String message(Exception exception) {
        String value = exception.getMessage();
        return value == null || value.isBlank() ? exception.getClass().getSimpleName() : value;
    }

    private static class Tsv {
        final List<String> header;
        final List<Map<String, String>> rows;
        Tsv(List<String> header, List<Map<String, String>> rows) {
            this.header = header; this.rows = rows;
        }
    }
    private static class ReportRow {
        final String functionAddress, labelAddress, proposedName, status, detail;
        ReportRow(String functionAddress, String labelAddress, String proposedName,
                String status, String detail) {
            this.functionAddress = functionAddress; this.labelAddress = labelAddress;
            this.proposedName = proposedName; this.status = status; this.detail = detail;
        }
    }
}
