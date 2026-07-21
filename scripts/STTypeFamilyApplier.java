// Apply cross-function type-family proposals produced by STTypeFamilyAnalyzer.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Apply Type Families

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
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.listing.Variable;
import ghidra.program.model.symbol.SourceType;

public class STTypeFamilyApplier extends GhidraScript {
    private static final String MARKER = "[STTypeFamilyApplier]";
    private static final String TAG = "RECOVERED_TYPE_FAMILY";
    private final List<Report> report = new ArrayList<>();
    private DataTypeManager dataTypes;

    @Override
    protected void run() throws Exception {
        if (currentProgram == null) { printerr("Open the analyzed ST program first."); return; }
        File file = inputFile(); if (file == null) return;
        Tsv input = read(file.toPath());
        require(input, "apply", "function_address", "expected_function", "target_kind",
            "target_ordinal", "expected_name", "expected_storage", "expected_type",
            "expected_source", "proposed_type", "allow_manual_override", "family_id", "evidence");
        dataTypes = currentProgram.getDataTypeManager();
        int tx = currentProgram.startTransaction("Apply cross-function type families");
        boolean commit = false;
        try {
            for (Map<String, String> row : input.rows) {
                monitor.checkCancelled(); apply(row);
            }
            commit = true;
        }
        finally { currentProgram.endTransaction(tx, commit); }
        Path output = file.toPath().toAbsolutePath().getParent().resolve("type_family_apply_report.tsv");
        writeReport(output);
        println("Type families: applied=" + count("applied") + ", unchanged=" +
            count("unchanged") + ", preserved=" + count("preserved") + ", conflicts=" +
            count("conflict") + ", disabled=" + count("disabled"));
        println("Apply report: " + output);
    }

    private void apply(Map<String, String> row) {
        String target = row.get("target_kind") + ":" + row.get("expected_storage");
        if (!enabled(row.get("apply"))) {
            report.add(new Report(row.get("function_address"), target, "disabled", "apply=0"));
            return;
        }
        // Files emitted before the named-anchor policy used this family id for
        // anonymous-to-anonymous geometry merges. Refuse stale unsafe proposals;
        // the analyzer must be rerun and will emit EXACT_NAMED_LAYOUT instead.
        if ("EXACT_ANONYMOUS_LAYOUT".equals(row.get("family_id"))) {
            report.add(new Report(row.get("function_address"), target, "disabled",
                "legacy geometry-only proposal; rerun STTypeFamilyAnalyzer"));
            return;
        }
        try {
            Address address = currentProgram.getAddressFactory().getAddress(row.get("function_address"));
            Function function = address == null ? null : currentProgram.getFunctionManager().getFunctionAt(address);
            if (function == null) { conflict(row, target, "function missing"); return; }
            if (!function.getName(true).equals(row.get("expected_function"))) {
                preserve(row, target, "function identity changed"); return;
            }
            Variable variable = findTarget(function, row);
            if (variable == null) { conflict(row, target, "target missing"); return; }
            DataType proposed = resolve(row.get("proposed_type"));
            if (proposed == null) { conflict(row, target, "proposed type missing"); return; }
            if (variable.getDataType().isEquivalent(proposed)) {
                report.add(new Report(row.get("function_address"), target, "unchanged",
                    "desired type already present")); return;
            }
            boolean baseline = variable.getName().equals(row.get("expected_name")) &&
                variable.getVariableStorage().toString().equals(row.get("expected_storage")) &&
                typeSpec(variable.getDataType()).equals(row.get("expected_type")) &&
                variable.getSource().toString().equals(row.get("expected_source"));
            boolean manual = variable.getSource() == SourceType.USER_DEFINED ||
                variable.getSource() == SourceType.IMPORTED;
            boolean override = enabled(row.get("allow_manual_override"));
            if (!baseline || (manual && !override)) {
                preserve(row, target, "stale or manually refined target"); return;
            }
            if ("return".equals(row.get("target_kind")))
                function.setReturnType(proposed, SourceType.ANALYSIS);
            else variable.setDataType(proposed, SourceType.ANALYSIS);
            if (!"return".equals(row.get("target_kind")))
                variable.setComment(MARKER + " " + row.get("family_id") + "; " + row.get("evidence"));
            function.addTag(TAG); addComment(function, row);
            report.add(new Report(row.get("function_address"), target, "applied", row.get("proposed_type")));
        }
        catch (Exception exception) { conflict(row, target, message(exception)); }
    }

    private Variable findTarget(Function function, Map<String, String> row) {
        String kind = row.get("target_kind");
        if ("return".equals(kind)) return function.getReturn();
        if ("parameter".equals(kind)) {
            int ordinal = Integer.parseInt(row.get("target_ordinal"));
            for (Parameter parameter : function.getParameters())
                if (!parameter.isAutoParameter() && parameter.getOrdinal() == ordinal) return parameter;
            return null;
        }
        if ("local".equals(kind)) {
            for (Variable variable : function.getLocalVariables())
                if (variable.getVariableStorage().toString().equals(row.get("expected_storage")) &&
                        variable.getName().equals(row.get("expected_name"))) return variable;
        }
        return null;
    }

    private void addComment(Function function, Map<String, String> row) {
        String block = MARKER + " " + row.get("family_id") + ".\nEvidence: " + row.get("evidence");
        String old = function.getComment();
        if (old == null || old.isBlank()) function.setComment(block);
        else if (!old.contains(MARKER + " " + row.get("family_id")))
            function.setComment(old + "\n\n" + block);
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
    private void preserve(Map<String, String> row, String target, String detail) {
        report.add(new Report(row.get("function_address"), target, "preserved", detail));
    }
    private void conflict(Map<String, String> row, String target, String detail) {
        report.add(new Report(row.get("function_address"), target, "conflict", detail));
    }
    private long count(String status) { return report.stream().filter(r -> r.status.equals(status)).count(); }
    private void writeReport(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("function_address\ttarget\tstatus\tdetail\n");
            for (Report row : report) out.write(row.address + "\t" + clean(row.target) + "\t" +
                row.status + "\t" + clean(row.detail) + "\n");
        }
    }
    private File inputFile() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless()) throw new IllegalArgumentException("Path to type_family_proposals.tsv is required");
        return askFile("Select type_family_proposals.tsv", "Apply");
    }
    private Tsv read(Path path) throws Exception {
        List<String> lines = Files.readAllLines(path, StandardCharsets.UTF_8);
        if (lines.isEmpty()) throw new IllegalArgumentException("Empty TSV: " + path);
        String[] header = lines.get(0).split("\\t", -1);
        List<Map<String, String>> rows = new ArrayList<>();
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
    private record Report(String address, String target, String status, String detail) {}
}
