// Apply reviewed source_provenance_proposals.tsv produced by STSourceProvenanceAnalyzer.
// Source comments and free-function names use independent apply flags.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Apply Source Provenance

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
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.SourceType;

public class STSourceProvenanceApplier extends GhidraScript {
    private static final String COMMENT_BEGIN = "[STSourceProvenanceApplier begin]";
    private static final String COMMENT_END = "[STSourceProvenanceApplier end]";
    private static final String SOURCE_TAG = "RECOVERED_SOURCE_FILE";
    private static final String NAME_TAG = "RECOVERED_SOURCE_NAME";
    private final List<ReportRow> report = new ArrayList<>();

    @Override
    protected void run() throws Exception {
        // Explicit per-script transactions must not be nested in GhidraScript's wrapper.
        end(true);
        if (currentProgram == null) {
            printerr("Open the same program that was analyzed.");
            return;
        }
        File proposalFile = inputFile();
        if (proposalFile == null) return;
        Tsv proposals = readTsv(proposalFile.toPath());
        requireColumns(proposals, "source_apply", "name_apply", "address", "old_name",
            "source_file", "diagnostic_lines", "proposed_name");

        int transaction = currentProgram.startTransaction("Apply recovered source provenance");
        boolean commit = false;
        try {
            for (Map<String, String> row : proposals.rows) {
                monitor.checkCancelled();
                applyRow(row);
            }
            commit = true;
        }
        finally {
            currentProgram.endTransaction(transaction, commit);
        }

        Path reportPath = proposalFile.getAbsoluteFile().getParentFile().toPath()
            .resolve("source_provenance_apply_report.tsv");
        writeReport(reportPath);
        long comments = report.stream().filter(row -> row.commentStatus.equals("applied") ||
            row.commentStatus.equals("updated") || row.commentStatus.equals("unchanged")).count();
        long names = report.stream().filter(row -> row.nameStatus.equals("applied") ||
            row.nameStatus.equals("unchanged")).count();
        long conflicts = report.stream().filter(row -> row.commentStatus.equals("conflict") ||
            row.nameStatus.equals("conflict")).count();
        println("Source provenance: comments=" + comments + ", names=" + names +
            ", conflicts=" + conflicts + ", rows=" + report.size());
        println("Apply report: " + reportPath.toAbsolutePath().normalize());
    }

    private void applyRow(Map<String, String> row) {
        String addressText = unt(row.get("address"));
        String source = unt(row.get("source_file"));
        String lines = unt(row.get("diagnostic_lines"));
        String expectedName = unt(row.get("old_name"));
        String proposedName = unt(row.get("proposed_name"));
        String commentStatus = enabled(row.get("source_apply")) ? "pending" : "disabled";
        String nameStatus = enabled(row.get("name_apply")) ? "pending" : "disabled";
        List<String> details = new ArrayList<>();
        try {
            Address address = currentProgram.getAddressFactory().getAddress(addressText);
            Function function = currentProgram.getFunctionManager().getFunctionAt(address);
            if (function == null || function.isExternal()) {
                report.add(new ReportRow(addressText, "conflict", "conflict",
                    "function missing or external"));
                return;
            }

            if (enabled(row.get("source_apply"))) {
                if (source.isBlank()) {
                    commentStatus = "conflict";
                    details.add("source_apply=1 but source_file is empty");
                }
                else {
                    commentStatus = applyComment(function, source, lines);
                    if (!"conflict".equals(commentStatus)) function.addTag(SOURCE_TAG);
                }
            }

            if (enabled(row.get("name_apply"))) {
                if (proposedName.isBlank()) {
                    nameStatus = "conflict";
                    details.add("name_apply=1 but proposed_name is empty");
                }
                else if (function.getName().equals(proposedName) &&
                        function.getParentNamespace().isGlobal()) {
                    nameStatus = "unchanged";
                    function.addTag(NAME_TAG);
                }
                else if (!safeToRename(function, expectedName, proposedName)) {
                    nameStatus = "preserved";
                    details.add("current name is manual/conflicting: " + function.getName(true));
                }
                else {
                    function.setParentNamespace(currentProgram.getGlobalNamespace());
                    function.setName(proposedName, SourceType.USER_DEFINED);
                    function.addTag(NAME_TAG);
                    nameStatus = "applied";
                }
            }
        }
        catch (Exception exception) {
            if ("pending".equals(commentStatus)) commentStatus = "conflict";
            if ("pending".equals(nameStatus)) nameStatus = "conflict";
            details.add(message(exception));
        }
        report.add(new ReportRow(addressText, commentStatus, nameStatus,
            details.isEmpty() ? "ok" : String.join("; ", details)));
    }

    private String applyComment(Function function, String source, String lines) {
        StringBuilder block = new StringBuilder(COMMENT_BEGIN)
            .append("\nRecovered source file: ").append(source);
        if (!lines.isBlank()) {
            block.append("\nDiagnostic line evidence: ").append(lines)
                .append(" (metadata/report site, not the function definition)");
        }
        block.append('\n').append(COMMENT_END);
        String desired = block.toString();
        String old = function.getComment();
        if (old == null || old.isBlank()) {
            function.setComment(desired);
            return "applied";
        }
        int begin = old.indexOf(COMMENT_BEGIN);
        if (begin < 0) {
            function.setComment(old + "\n\n" + desired);
            return "applied";
        }
        int endMarker = old.indexOf(COMMENT_END, begin);
        if (endMarker < 0) {
            return "conflict"; // Preserve malformed/manual text without guessing its extent.
        }
        int end = endMarker + COMMENT_END.length();
        String updated = old.substring(0, begin) + desired + old.substring(end);
        if (updated.equals(old)) return "unchanged";
        function.setComment(updated);
        return "updated";
    }

    private boolean safeToRename(Function function, String expectedName, String proposedName) {
        if (function.getName(true).equals(expectedName) || function.getName().equals(expectedName))
            return true;
        if (function.getSymbol().getSource() == SourceType.DEFAULT) return true;
        boolean previouslyApplied = function.getTags().stream()
            .anyMatch(tag -> NAME_TAG.equals(tag.getName()));
        return previouslyApplied && function.getName().equals(proposedName) &&
            function.getParentNamespace().isGlobal();
    }

    private File inputFile() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException("Path to source_provenance_proposals.tsv is required");
        return askFile("Select source_provenance_proposals.tsv", "Apply source provenance");
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

    private void requireColumns(Tsv tsv, String... columns) {
        for (String column : columns) {
            if (!tsv.header.contains(column))
                throw new IllegalArgumentException("Missing TSV column: " + column);
        }
    }

    private void writeReport(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("address\tcomment_status\tname_status\tdetail\n");
            for (ReportRow row : report) {
                out.write(row.address + "\t" + row.commentStatus + "\t" + row.nameStatus +
                    "\t" + tsv(row.detail) + "\n");
            }
        }
    }

    private static boolean enabled(String value) {
        return "1".equals(value) || "true".equalsIgnoreCase(value) ||
            "yes".equalsIgnoreCase(value);
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
    private static String tsv(String value) {
        return value.replace("\\", "\\\\").replace("\t", "\\t")
            .replace("\r", "\\r").replace("\n", "\\n");
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
        final String address, commentStatus, nameStatus, detail;
        ReportRow(String address, String commentStatus, String nameStatus, String detail) {
            this.address = address; this.commentStatus = commentStatus;
            this.nameStatus = nameStatus; this.detail = detail;
        }
    }
}
