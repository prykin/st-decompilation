// Apply stale-baseline-checked type replacement/removal proposals.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Apply Type Lifecycle

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
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.Structure;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.DataIterator;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.listing.Variable;

public class STTypeLifecycleApplier extends GhidraScript {
    private static final String VIEW = "[ST_VIEW_ONLY]";
    private static final String ANCHOR = "[ST_SEMANTIC_ANCHOR]";
    private final List<Report> report = new ArrayList<>();
    private DataTypeManager manager;

    @Override
    protected void run() throws Exception {
        end(true);
        if (currentProgram == null) { printerr("Open the analyzed ST program first."); return; }
        File file = inputFile(); if (file == null) return;
        Tsv input = read(file.toPath());
        require(input, "apply", "action", "type_path", "replacement_path",
            "expected_length", "expected_parents", "expected_function_uses",
            "expected_listing_uses", "expected_description", "reason");
        manager = currentProgram.getDataTypeManager();
        int transaction = currentProgram.startTransaction("Apply type lifecycle");
        boolean commit = false;
        try {
            for (Map<String, String> row : input.rows) {
                monitor.checkCancelled();
                apply(row);
            }
            commit = true;
        }
        finally { currentProgram.endTransaction(transaction, commit); }
        Path output = file.toPath().toAbsolutePath().normalize().getParent()
            .resolve("type_lifecycle_apply_report.tsv");
        write(output);
        println("Type lifecycle: replaced=" + count("replaced") +
            ", removed=" + count("removed") + ", preserved=" + count("preserved") +
            ", disabled=" + count("disabled") + ", conflicts=" + count("conflict"));
        println("Apply report: " + output);
    }

    private void apply(Map<String, String> row) {
        String path = row.get("type_path");
        if (!enabled(row.get("apply"))) {
            report.add(new Report(row.get("action"), path, "disabled", "apply=0"));
            return;
        }
        try {
            DataType type = manager.getDataType(path);
            if (type == null) {
                report.add(new Report(row.get("action"), path, "unchanged",
                    "type already absent"));
                return;
            }
            int parents = type.getParents().size();
            int functionUses = functionUses(type), listingUses = listingUses(type);
            boolean baseline = type.getLength() == Integer.parseInt(row.get("expected_length")) &&
                parents == Integer.parseInt(row.get("expected_parents")) &&
                functionUses == Integer.parseInt(row.get("expected_function_uses")) &&
                listingUses == Integer.parseInt(row.get("expected_listing_uses")) &&
                clean(type.getDescription()).equals(row.get("expected_description"));
            if (!baseline || text(type.getDescription()).contains(ANCHOR)) {
                report.add(new Report(row.get("action"), path, "preserved",
                    "stale baseline or semantic anchor"));
                return;
            }
            if ("replace".equals(row.get("action"))) {
                DataType replacement = manager.getDataType(row.get("replacement_path"));
                if (replacement == null ||
                        !text(replacement.getDescription()).contains(ANCHOR) ||
                        !type.isEquivalent(replacement)) {
                    report.add(new Report("replace", path, "preserved",
                        "replacement is missing, changed, or not an anchor"));
                    return;
                }
                manager.replaceDataType(type, replacement, false);
                report.add(new Report("replace", path, "replaced",
                    replacement.getPathName()));
            }
            else if ("remove".equals(row.get("action"))) {
                String description = text(type.getDescription());
                boolean anonymous = disposableAnonymous(type, description);
                if (!(description.contains(VIEW) || anonymous) ||
                        parents != 0 ||
                        !removalProvenance(text(type.getDescription())) ||
                        functionUses != 0 || listingUses != 0) {
                    report.add(new Report("remove", path, "preserved",
                        "type is no longer an unreferenced view"));
                    return;
                }
                manager.remove(type);
                report.add(new Report("remove", path, "removed",
                    anonymous ?
                        "unreferenced hash/script-owned anonymous type" :
                        "unreferenced script-owned view"));
            }
            else report.add(new Report(row.get("action"), path, "preserved",
                "unsupported action"));
        }
        catch (Exception exception) {
            report.add(new Report(row.get("action"), path, "conflict", message(exception)));
        }
    }

    private int functionUses(DataType wanted) {
        int result = 0;
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            Function function = functions.next();
            if (uses(function.getReturnType(), wanted)) result++;
            for (Parameter parameter : function.getParameters())
                if (uses(parameter.getDataType(), wanted)) result++;
            for (Variable variable : function.getLocalVariables())
                if (uses(variable.getDataType(), wanted)) result++;
        }
        return result;
    }
    private int listingUses(DataType wanted) {
        int result = 0;
        DataIterator data = currentProgram.getListing().getDefinedData(true);
        while (data.hasNext()) {
            Data item = data.next();
            if (uses(item.getDataType(), wanted)) result++;
        }
        return result;
    }
    private boolean uses(DataType actual, DataType wanted) {
        if (actual == null) return false;
        if (actual.equals(wanted)) return true;
        if (actual instanceof Pointer pointer && pointer.getDataType() != null)
            return uses(pointer.getDataType(), wanted);
        return actual.dependsOn(wanted);
    }
    private boolean removalProvenance(String description) {
        return description.contains("[STRecoveredTypesApplier]") ||
            description.contains("[STTypeBootstrapApplier]") ||
            description.contains("[STDiscriminatedPayloadApplier]") ||
            description.contains("[STPointerShapeApplier]") ||
            description.contains("[STClassLayoutApplier]") ||
            description.contains("[STHiddenThisApplier generated]");
    }
    private boolean disposableAnonymous(DataType type, String description) {
        if (!(type instanceof Structure)) return false;
        String path = type.getPathName();
        return path.startsWith("/SubmarineTitans/Recovered/PointerShapes/") &&
                description.contains("[STPointerShapeApplier]") &&
                description.contains("generated_layout_sha256=") ||
            path.startsWith("/SubmarineTitans/Recovered/ClassPointees/") &&
                description.contains("[STClassLayoutApplier]") &&
                description.contains("generated_layout_sha256=") ||
            path.startsWith("/SubmarineTitans/Recovered/HiddenThis/") &&
                description.contains("[STHiddenThisApplier generated]");
    }
    private File inputFile() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException("Path to type_lifecycle_proposals.tsv required");
        return askFile("Select type_lifecycle_proposals.tsv", "Apply lifecycle");
    }
    private Tsv read(Path path) throws Exception {
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
        for (String column : columns) if (!input.header.contains(column))
            throw new IllegalArgumentException("Missing TSV column: " + column);
    }
    private void write(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("kind\ttarget\tstatus\tdetail\n");
            for (Report row : report) out.write(row.kind + "\t" + row.target + "\t" +
                row.status + "\t" + clean(row.detail) + "\n");
        }
    }
    private long count(String status) {
        return report.stream().filter(row -> status.equals(row.status)).count();
    }
    private static boolean enabled(String value) {
        return "1".equals(value) || "true".equalsIgnoreCase(value) ||
            "yes".equalsIgnoreCase(value);
    }
    private static String text(String value) { return value == null ? "" : value; }
    private static String clean(String value) {
        return text(value).replace('\t', ' ').replace('\r', ' ').replace('\n', ' ');
    }
    private static String message(Exception exception) {
        String value = exception.getMessage();
        return value == null || value.isBlank() ? exception.getClass().getSimpleName() : value;
    }
    private record Tsv(List<String> header, List<Map<String, String>> rows) { }
    private record Report(String kind, String target, String status, String detail) { }
}
