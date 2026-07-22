// Isolate corrective rows for targets previously changed by STPrototypeApplier.
// Run STPrototypeAnalyzer first; this script filters its evidence-backed repairs into a
// separate proposal file so old automatic changes can be repaired before new propagation.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Analyze Prototype Repairs

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

public class STPrototypeRepairAnalyzer extends GhidraScript {
    @Override
    protected void run() throws Exception {
        // Read-only script: do not leave GhidraScript's implicit transaction around runScript().
        end(true);
        if (currentProgram == null) { printerr("Open the analyzed ST program first."); return; }
        File input = inputFile(); if (input == null) return;
        Tsv source = readTsv(input.toPath());
        if (!source.header.contains("repair")) {
            printerr("Selected prototype_proposals.tsv uses the old schema (missing 'repair').");
            printerr("Restart Ghidra, rerun the current STPrototypeAnalyzer, then select its output:");
            printerr(input.getAbsolutePath());
            return;
        }
        requireColumns(source, "type_apply", "name_apply", "repair", "function_address",
            "target_kind", "target_ordinal", "reason");
        List<Map<String, String>> repairs = new ArrayList<>();
        for (Map<String, String> row : source.rows) {
            monitor.checkCancelled();
            if (enabled(row.get("repair"))) repairs.add(row);
        }
        Path directory = input.getAbsoluteFile().getParentFile().toPath();
        Path proposals = directory.resolve("prototype_repair_proposals.tsv");
        writeTsv(proposals, source.header, repairs);
        Files.write(directory.resolve("prototype_repair_summary.txt"), List.of(
            "program=" + currentProgram.getName(),
            "source=" + input.getAbsolutePath(),
            "repair_proposals=" + repairs.size(),
            "type_auto_apply=" + repairs.stream().filter(r -> enabled(r.get("type_apply"))).count(),
            "name_auto_apply=" + repairs.stream().filter(r -> enabled(r.get("name_apply"))).count(),
            "note=Rows are emitted only for targets carrying an earlier STPrototypeApplier marker.",
            "note_order=Apply this file, rerun STPrototypeAnalyzer, then apply ordinary new proposals."
        ), StandardCharsets.UTF_8);
        println("Prototype repair analysis complete: " + proposals.toAbsolutePath().normalize());
        println("Repair rows: " + repairs.size());
    }

    private File inputFile() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException("Path to prototype_proposals.tsv is required");
        return askFile("Select prototype_proposals.tsv", "Analyze repairs");
    }

    private Tsv readTsv(Path path) throws Exception {
        List<String> lines = Files.readAllLines(path, StandardCharsets.UTF_8);
        if (lines.isEmpty()) throw new IllegalArgumentException("Empty TSV: " + path);
        String[] names = lines.get(0).split("\t", -1);
        List<String> header = List.of(names);
        List<Map<String, String>> rows = new ArrayList<>();
        for (int line = 1; line < lines.size(); line++) {
            if (lines.get(line).isBlank()) continue;
            String[] values = lines.get(line).split("\t", -1);
            if (values.length != names.length)
                throw new IllegalArgumentException("Invalid TSV row " + (line + 1));
            Map<String, String> row = new LinkedHashMap<>();
            for (int column = 0; column < names.length; column++)
                row.put(names[column], values[column]);
            rows.add(row);
        }
        return new Tsv(header, rows);
    }

    private void writeTsv(Path path, List<String> header, List<Map<String, String>> rows)
            throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write(String.join("\t", header)); out.newLine();
            for (Map<String, String> row : rows) {
                List<String> values = new ArrayList<>();
                for (String name : header) values.add(row.getOrDefault(name, ""));
                out.write(String.join("\t", values)); out.newLine();
            }
        }
    }

    private void requireColumns(Tsv tsv, String... names) {
        for (String name : names) if (!tsv.header.contains(name))
            throw new IllegalArgumentException("Missing TSV column: " + name);
    }
    private static boolean enabled(String value) {
        return "1".equals(value) || "true".equalsIgnoreCase(value) ||
            "yes".equalsIgnoreCase(value);
    }
    private static class Tsv {
        final List<String> header; final List<Map<String, String>> rows;
        Tsv(List<String> header, List<Map<String, String>> rows) {
            this.header = header; this.rows = rows;
        }
    }
}
