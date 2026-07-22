// Consolidate evidence that an existing concrete/manual type may be stale.
// Read-only: consumes current recovery TSVs and writes manual_type_conflicts.tsv/summary.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Audit Manual Types

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;

import ghidra.app.script.GhidraScript;

public class STManualTypeAuditAnalyzer extends GhidraScript {
    private final List<AuditRow> rows = new ArrayList<>();

    @Override
    protected void run() throws Exception {
        if (currentProgram == null) { printerr("Open the analyzed ST program first."); return; }
        File selected = outputDirectory(); if (selected == null) return;
        Path directory = programDirectory(selected); Files.createDirectories(directory);

        auditPrototypes(directory.resolve("prototype_proposals.tsv"));
        auditClassFields(directory.resolve("class_field_proposals.tsv"));
        auditPointerShapes(directory.resolve("pointer_shape_target_proposals.tsv"));
        auditTypeFamilies(directory.resolve("type_family_proposals.tsv"));
        rows.sort(Comparator.comparing((AuditRow row) -> row.domain)
            .thenComparing(row -> row.locator).thenComparing(row -> row.currentType));
        writeTsv(directory.resolve("manual_type_conflicts.tsv"));
        writeSummary(directory.resolve("manual_type_conflicts_summary.txt"));

        long likely = rows.stream().filter(row -> row.status.equals("likely_stale")).count();
        long approved = rows.stream().filter(row -> row.status.equals("approved_override")).count();
        println("Manual-type audit complete: " + directory.toAbsolutePath().normalize());
        println("Candidates=" + rows.size() + ", likely stale=" + likely +
            ", already approved overrides=" + approved + ", review=" +
            (rows.size() - likely - approved));
    }

    private void auditPrototypes(Path path) throws Exception {
        for (Map<String, String> row : readTsv(path)) {
            String source = value(row, "expected_target_source");
            if (!protectedSource(source)) continue;
            String current = value(row, "expected_target_type");
            String candidate = value(row, "proposed_type");
            if (candidate.isBlank() || sameType(current, candidate)) continue;
            String reason = value(row, "reason");
            boolean strong = reason.matches(".*strong_evidence=[1-9][0-9]*.*") ||
                "high".equals(value(row, "confidence"));
            if (!strong) continue;
            String kind = value(row, "target_kind");
            String ordinal = value(row, "target_ordinal");
            String locator = value(row, "function_address") + ":" + kind +
                (ordinal.isBlank() ? "" : ":" + ordinal);
            String status = genericType(current) && !genericType(candidate) ?
                "likely_stale" : "review";
            rows.add(new AuditRow("prototype", locator, value(row, "expected_function"),
                current, candidate, source, status, value(row, "confidence"),
                value(row, "evidence_sites"), reason, path.getFileName().toString()));
        }
    }

    private void auditClassFields(Path path) throws Exception {
        for (Map<String, String> row : readTsv(path)) {
            String reason = value(row, "reason");
            if (!reason.contains("existing_concrete_type_preserved") &&
                    !reason.contains("inferred_type_conflict")) continue;
            String current = value(row, "proposed_type");
            String candidate = value(row, "inferred_type");
            if (candidate.isBlank() || sameType(current, candidate)) continue;
            if (current.contains("/Recovered/Enums/") && scalarType(candidate)) continue;
            if (candidate.contains("/Anon") || candidate.contains("/PointerShapes/") ||
                    candidate.contains("/ClassPointees/") || candidate.contains("/HiddenThis/"))
                continue;
            if (!genericType(current) && scalarType(candidate)) continue;
            String locator = value(row, "owner") + "+" + value(row, "offset_hex");
            String status = genericType(current) && !genericType(candidate) ?
                "likely_stale" : "review";
            rows.add(new AuditRow("class_field", locator, value(row, "proposed_name"),
                current, candidate, "STRUCTURE_COMPONENT", status,
                value(row, "type_confidence"), value(row, "type_evidence"), reason,
                path.getFileName().toString()));
        }
    }

    private void auditPointerShapes(Path path) throws Exception {
        for (Map<String, String> row : readTsv(path)) {
            String source = value(row, "expected_source");
            if (!protectedSource(source)) continue;
            String current = value(row, "expected_type");
            String candidate = value(row, "proposed_type");
            if (candidate.isBlank() || sameType(current, candidate)) continue;
            String locator = value(row, "target_kind") + ":" +
                (value(row, "function_address").isBlank() ? value(row, "target_locator") :
                    value(row, "function_address") + ":" + value(row, "target_locator"));
            String status = genericType(current) && !genericType(candidate) ?
                "likely_stale" : "review";
            rows.add(new AuditRow("pointer_shape", locator, value(row, "target_name"),
                current, candidate, source, status, value(row, "confidence"),
                value(row, "evidence_sites"), value(row, "reason"),
                path.getFileName().toString()));
        }
    }

    private void auditTypeFamilies(Path path) throws Exception {
        for (Map<String, String> row : readTsv(path)) {
            String source = value(row, "expected_source");
            if (!protectedSource(source)) continue;
            String current = value(row, "expected_type");
            String candidate = value(row, "proposed_type");
            if (candidate.isBlank() || sameType(current, candidate)) continue;
            String locator = value(row, "function_address") + ":" +
                value(row, "target_kind") + ":" + value(row, "target_ordinal");
            String status = "1".equals(value(row, "allow_manual_override")) ?
                "approved_override" : genericType(current) && !genericType(candidate) ?
                    "likely_stale" : "review";
            rows.add(new AuditRow("type_family", locator, value(row, "expected_function"),
                current, candidate, source, status, value(row, "confidence"),
                value(row, "evidence"), "family=" + value(row, "family_id"),
                path.getFileName().toString()));
        }
    }

    private List<Map<String, String>> readTsv(Path path) throws Exception {
        List<Map<String, String>> result = new ArrayList<>();
        if (!Files.isRegularFile(path)) return result;
        List<String> lines = Files.readAllLines(path, StandardCharsets.UTF_8);
        if (lines.isEmpty()) return result;
        String[] header = lines.get(0).split("\\t", -1);
        for (int line = 1; line < lines.size(); line++) {
            monitor.checkCancelled();
            if (lines.get(line).isBlank()) continue;
            String[] fields = lines.get(line).split("\\t", -1);
            Map<String, String> row = new LinkedHashMap<>();
            for (int index = 0; index < header.length; index++)
                row.put(header[index], index < fields.length ? unescape(fields[index]) : "");
            result.add(row);
        }
        return result;
    }

    private void writeTsv(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\tdomain\tlocator\tsymbol\tcurrent_type\tcandidate_type\t" +
                "current_source\tstatus\tconfidence\tevidence\treason\tsource_report\n");
            for (AuditRow row : rows) out.write("0\t" + tsv(row.domain) + "\t" +
                tsv(row.locator) + "\t" + tsv(row.symbol) + "\t" +
                tsv(row.currentType) + "\t" + tsv(row.candidateType) + "\t" +
                tsv(row.currentSource) + "\t" + row.status + "\t" +
                row.confidence + "\t" + tsv(row.evidence) + "\t" +
                tsv(row.reason) + "\t" + row.sourceReport + "\n");
        }
    }

    private void writeSummary(Path path) throws Exception {
        Files.write(path, List.of("program=" + currentProgram.getName(),
            "candidates=" + rows.size(),
            "likely_stale=" + rows.stream().filter(row -> row.status.equals("likely_stale")).count(),
            "approved_overrides=" + rows.stream().filter(row -> row.status.equals("approved_override")).count(),
            "review=" + rows.stream().filter(row -> row.status.equals("review")).count(),
            "note=This report is deliberately read-only. USER_DEFINED/IMPORTED types are never silently replaced.",
            "note_order=Run it after the prototype, pointer-shape, class-layout, and type-family analyzers."),
            StandardCharsets.UTF_8);
    }

    private boolean protectedSource(String source) {
        return "USER_DEFINED".equals(source) || "IMPORTED".equals(source);
    }
    private boolean genericType(String type) {
        String value = type.toLowerCase(Locale.ROOT);
        return value.isBlank() || value.contains("undefined") || value.equals("/void") ||
            value.equals("pointer:/void");
    }
    private boolean scalarType(String type) {
        String value = type.toLowerCase(Locale.ROOT);
        return value.matches("/(?:u?int|u?long|u?short|char|byte|bool|float|double|" +
            "undefined[1248]?)");
    }
    private boolean sameType(String left, String right) {
        return left.replace(" ", "").equals(right.replace(" ", ""));
    }
    private String value(Map<String, String> row, String name) {
        return row.getOrDefault(name, "");
    }
    private String unescape(String value) {
        return value.replace("\\t", "\t").replace("\\r", "\r")
            .replace("\\n", "\n").replace("\\\\", "\\");
    }
    private String tsv(String value) {
        if (value == null) return "";
        return value.replace("\\", "\\\\").replace("\t", "\\t")
            .replace("\r", "\\r").replace("\n", "\\n");
    }
    private File outputDirectory() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException("Recovery output directory required");
        return askDirectory("Select recovery output directory", "Select");
    }
    private Path programDirectory(File selected) {
        return selected.getName().equals(currentProgram.getName()) ? selected.toPath() :
            selected.toPath().resolve(currentProgram.getName());
    }

    private static class AuditRow {
        final String domain, locator, symbol, currentType, candidateType, currentSource,
            status, confidence, evidence, reason, sourceReport;
        AuditRow(String domain, String locator, String symbol, String currentType,
                String candidateType, String currentSource, String status, String confidence,
                String evidence, String reason, String sourceReport) {
            this.domain = domain; this.locator = locator; this.symbol = symbol;
            this.currentType = currentType; this.candidateType = candidateType;
            this.currentSource = currentSource; this.status = status;
            this.confidence = confidence; this.evidence = evidence;
            this.reason = reason; this.sourceReport = sourceReport;
        }
    }
}
