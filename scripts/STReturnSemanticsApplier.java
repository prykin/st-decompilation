// Apply reviewed return semantics produced by STReturnSemanticsAnalyzer.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Apply Return Semantics

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
import ghidra.program.model.symbol.SourceType;

public class STReturnSemanticsApplier extends GhidraScript {
    private static final String MARKER = "[STReturnSemanticsApplier]";
    private static final String TAG = "RECOVERED_RETURN_SEMANTICS";
    private final List<Report> report = new ArrayList<>();
    private DataTypeManager dataTypes;

    @Override
    protected void run() throws Exception {
        // Explicit per-script transactions must not be nested in GhidraScript's wrapper.
        end(true);
        if (currentProgram == null) { printerr("Open the analyzed ST program first."); return; }
        File file = inputFile(); if (file == null) return;
        Tsv input = read(file.toPath());
        require(input, "apply", "function_address", "expected_function", "expected_signature",
            "expected_return_type", "expected_return_source", "expected_noreturn",
            "proposed_return_type", "proposed_noreturn", "semantic_id", "evidence");
        dataTypes = currentProgram.getDataTypeManager();
        int tx = currentProgram.startTransaction("Apply return semantics"); boolean commit = false;
        try {
            for (Map<String, String> row : input.rows) { monitor.checkCancelled(); apply(row); }
            commit = true;
        }
        finally { currentProgram.endTransaction(tx, commit); }
        Path output = file.toPath().toAbsolutePath().getParent().resolve("return_semantics_apply_report.tsv");
        writeReport(output);
        println("Return semantics: applied=" + count("applied") + ", unchanged=" +
            count("unchanged") + ", preserved=" + count("preserved") + ", conflicts=" +
            count("conflict") + ", disabled=" + count("disabled"));
        println("Apply report: " + output);
    }

    private void apply(Map<String, String> row) {
        String addressText = row.get("function_address");
        if (!enabled(row.get("apply"))) {
            report.add(new Report(addressText, row.get("semantic_id"), "disabled", "apply=0")); return;
        }
        try {
            Address address = currentProgram.getAddressFactory().getAddress(addressText);
            Function function = address == null ? null : currentProgram.getFunctionManager().getFunctionAt(address);
            if (function == null) { conflict(row, "function missing"); return; }
            DataType proposed = resolve(row.get("proposed_return_type"));
            if (proposed == null) { conflict(row, "proposed return type missing"); return; }
            boolean proposedNoReturn = Boolean.parseBoolean(row.get("proposed_noreturn"));
            if (function.getReturnType().isEquivalent(proposed) &&
                    function.hasNoReturn() == proposedNoReturn) {
                report.add(new Report(addressText, row.get("semantic_id"), "unchanged",
                    "desired return semantics already present")); return;
            }
            boolean baseline = function.getName(true).equals(row.get("expected_function")) &&
                function.getPrototypeString(true, true).equals(row.get("expected_signature")) &&
                typeSpec(function.getReturnType()).equals(row.get("expected_return_type")) &&
                function.getReturn().getSource().toString().equals(row.get("expected_return_source")) &&
                function.hasNoReturn() == Boolean.parseBoolean(row.get("expected_noreturn"));
            if (!baseline || function.getReturn().getSource() == SourceType.USER_DEFINED ||
                    function.getReturn().getSource() == SourceType.IMPORTED) {
                report.add(new Report(addressText, row.get("semantic_id"), "preserved",
                    "stale baseline or manual return type")); return;
            }
            function.setReturnType(proposed, SourceType.ANALYSIS);
            function.setNoReturn(proposedNoReturn);
            function.addTag(TAG); addComment(function, row);
            report.add(new Report(addressText, row.get("semantic_id"), "applied",
                row.get("proposed_return_type") + ", noreturn=" + proposedNoReturn));
        }
        catch (Exception exception) { conflict(row, message(exception)); }
    }
    private void addComment(Function function, Map<String, String> row) {
        String block = MARKER + " " + row.get("semantic_id") + ".\nEvidence: " + row.get("evidence");
        String old = function.getComment();
        if (old == null || old.isBlank()) function.setComment(block);
        else if (!old.contains(MARKER + " " + row.get("semantic_id"))) function.setComment(old + "\n\n" + block);
    }
    private DataType resolve(String specification) {
        if (specification.startsWith("pointer:")) {
            DataType base = resolve(specification.substring("pointer:".length()));
            return base == null ? null : new PointerDataType(base,
                currentProgram.getDefaultPointerSize(), dataTypes);
        }
        return dataTypes.getDataType(specification);
    }
    private String typeSpec(DataType type) {
        if (type instanceof Pointer pointer && pointer.getDataType() != null)
            return "pointer:" + typeSpec(pointer.getDataType());
        return type == null ? "" : type.getPathName();
    }
    private void conflict(Map<String, String> row, String detail) {
        report.add(new Report(row.get("function_address"), row.get("semantic_id"), "conflict", detail));
    }
    private long count(String status) { return report.stream().filter(r -> r.status.equals(status)).count(); }
    private void writeReport(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("function_address\tsemantic_id\tstatus\tdetail\n");
            for (Report row : report) out.write(row.address + "\t" + row.semantic + "\t" +
                row.status + "\t" + clean(row.detail) + "\n");
        }
    }
    private File inputFile() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless()) throw new IllegalArgumentException("Path to return_semantics_proposals.tsv is required");
        return askFile("Select return_semantics_proposals.tsv", "Apply");
    }
    private Tsv read(Path path) throws Exception {
        List<String> lines = Files.readAllLines(path, StandardCharsets.UTF_8);
        if (lines.isEmpty()) throw new IllegalArgumentException("Empty TSV: " + path);
        String[] header = lines.get(0).split("\\t", -1); List<Map<String, String>> rows = new ArrayList<>();
        for (int line = 1; line < lines.size(); line++) {
            if (lines.get(line).isBlank()) continue;
            String[] values = lines.get(line).split("\\t", -1);
            if (values.length != header.length) throw new IllegalArgumentException("Invalid TSV row " + (line + 1));
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
    private static String clean(String value) { return value == null ? "" : value.replace('\t',' ').replace('\r',' ').replace('\n',' '); }
    private static String message(Exception e) { return e.getMessage() == null ? e.getClass().getSimpleName() : e.getMessage(); }
    private record Tsv(List<String> header, List<Map<String, String>> rows) {}
    private record Report(String address, String semantic, String status, String detail) {}
}
