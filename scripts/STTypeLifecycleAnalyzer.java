// Propose replacement or removal of obsolete script-generated data types.
// No type name is a deletion seed: provenance, equivalence and live-use evidence decide.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Analyze Type Lifecycle

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.HashSet;
import java.util.Iterator;
import java.util.HashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Set;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.Array;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.Structure;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.DataIterator;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.listing.Variable;

public class STTypeLifecycleAnalyzer extends GhidraScript {
    private static final String ROOT = "/SubmarineTitans/Recovered";
    private static final String VIEW = "[ST_VIEW_ONLY]";
    private static final String ANCHOR = "[ST_SEMANTIC_ANCHOR]";
    private Map<String, Integer> receiverOwnerCounts;

    @Override
    protected void run() throws Exception {
        end(true);
        if (currentProgram == null) { printerr("Open the analyzed ST program first."); return; }
        File selected = outputDirectory(); if (selected == null) return;
        Path directory = programDirectory(selected); Files.createDirectories(directory);
        DataTypeManager manager = currentProgram.getDataTypeManager();
        List<DataType> types = new ArrayList<>();
        Iterator<DataType> iterator = manager.getAllDataTypes();
        while (iterator.hasNext()) types.add(iterator.next());

        List<DataType> candidates = new ArrayList<>();
        List<DataType> semanticAnchors = new ArrayList<>();
        List<DataType> receiverAnchors = new ArrayList<>();
        for (DataType type : types) {
            String description = text(type.getDescription());
            boolean derivedView = derivedFromView(type);
            if (description.contains(ANCHOR)) semanticAnchors.add(type);
            if (hiddenThis(type, description) && ownedReceiverFunctions(type) >= 2)
                receiverAnchors.add(type);
            if (type.getPathName().startsWith(ROOT) &&
                    !(description.contains(ANCHOR) && !derivedView) &&
                    (scriptOwned(description) || derivedView))
                candidates.add(type);
        }
        UsageIndex usage = usageIndex(candidates);
        List<Row> rows = new ArrayList<>();
        for (DataType type : candidates) {
            monitor.checkCancelled();
            String description = text(type.getDescription());
            boolean derivedView = derivedFromView(type);
            List<DataType> anchors = new ArrayList<>();
            for (DataType candidate : semanticAnchors) {
                if (candidate == type || !candidate.isEquivalent(type)) continue;
                anchors.add(candidate);
            }
            int functionUses = usage.functionUses.getOrDefault(type, 0);
            int listingUses = usage.listingUses.getOrDefault(type, 0);
            int parents = type.getParents().size();
            List<DataType> matchingReceivers = new ArrayList<>();
            if (hiddenThis(type, description) && ownedReceiverFunctions(type) == 0) {
                for (DataType candidate : receiverAnchors)
                    if (candidate != type && candidate.isEquivalent(type) &&
                            hiddenThis(candidate, text(candidate.getDescription())))
                        matchingReceivers.add(candidate);
            }
            if (matchingReceivers.size() == 1) {
                DataType replacement = matchingReceivers.get(0);
                rows.add(new Row(true, "replace", type.getPathName(),
                    replacement.getPathName(), type.getLength(), parents, functionUses,
                    listingUses, description,
                    "unique namespace-backed HiddenThis receiver family"));
            }
            else if (anchors.size() == 1 && (description.contains(VIEW) ||
                    type.getName().contains(".conflict"))) {
                DataType replacement = anchors.get(0);
                rows.add(new Row(true, "replace", type.getPathName(),
                    replacement.getPathName(), type.getLength(), parents, functionUses,
                    listingUses, description, "unique equivalent semantic anchor"));
            }
            else if (anchors.isEmpty() &&
                    (description.contains(VIEW) || derivedView ||
                        disposableAnonymous(type, description)) &&
                    (removalProvenance(description) || derivedView) && parents == 0 &&
                    functionUses == 0 && listingUses == 0) {
                rows.add(new Row(true, "remove", type.getPathName(), "", type.getLength(),
                    parents, functionUses, listingUses, description,
                    disposableAnonymous(type, description) ?
                        "unreferenced hash/script-owned anonymous type" :
                        derivedView ? "unreferenced Pointer/Array derivative of view type" :
                        "unreferenced script-owned view type"));
            }
            else if (description.contains(VIEW) || derivedView ||
                    disposableAnonymous(type, description)) {
                rows.add(new Row(false, "retain", type.getPathName(), "", type.getLength(),
                    parents, functionUses, listingUses, description,
                    anchors.size() > 1 ? "ambiguous equivalent anchors=" + anchors.size() :
                        "still referenced"));
            }
        }
        rows.sort(Comparator.comparing(row -> row.typePath));
        write(directory.resolve("type_lifecycle_proposals.tsv"), rows);
        Files.write(directory.resolve("type_lifecycle_summary.txt"), List.of(
            "program=" + currentProgram.getName(),
            "candidates=" + rows.size(),
            "automatic_replacements=" + rows.stream()
                .filter(row -> row.apply && row.action.equals("replace")).count(),
            "automatic_removals=" + rows.stream()
                .filter(row -> row.apply && row.action.equals("remove")).count(),
            "retained_review=" + rows.stream().filter(row -> !row.apply).count(),
            "note=Deletion requires an original script-owner marker and zero " +
                "parents/signature/Listing uses. Direct Pointer/Array chains inherit " +
                "view-only retirement without crossing through an owning structure. " +
                "Non-view deletion is limited to generated anonymous PointerShapes/" +
                "ClassPointees/HiddenThis types. Equivalent types migrate only to one " +
                "semantic anchor or one exact namespace-backed HiddenThis receiver family."),
            StandardCharsets.UTF_8);
        println("Type lifecycle: candidates=" + rows.size() + ", automatic=" +
            rows.stream().filter(row -> row.apply).count() + ", output=" + directory);
    }

    /** Index all live uses in two whole-program scans instead of two scans per type. */
    private UsageIndex usageIndex(List<DataType> candidates) throws Exception {
        Map<DataType, Set<DataType>> wantedByActual = new HashMap<>();
        for (DataType wanted : candidates) {
            monitor.checkCancelled();
            Set<DataType> seen = new HashSet<>();
            List<DataType> pending = new ArrayList<>();
            pending.add(wanted);
            for (int index = 0; index < pending.size(); index++) {
                DataType actual = pending.get(index);
                if (actual == null || !seen.add(actual)) continue;
                wantedByActual.computeIfAbsent(actual, unused -> new HashSet<>()).add(wanted);
                pending.addAll(actual.getParents());
            }
        }
        Map<DataType, Integer> functionUses = new HashMap<>();
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            monitor.checkCancelled();
            Function function = functions.next();
            addUses(functionUses, wantedByActual, function.getReturnType());
            for (Parameter parameter : function.getParameters())
                addUses(functionUses, wantedByActual, parameter.getDataType());
            for (Variable variable : function.getLocalVariables())
                addUses(functionUses, wantedByActual, variable.getDataType());
        }
        Map<DataType, Integer> listingUses = new HashMap<>();
        DataIterator data = currentProgram.getListing().getDefinedData(true);
        while (data.hasNext()) {
            monitor.checkCancelled();
            Data item = data.next();
            addUses(listingUses, wantedByActual, item.getDataType());
        }
        return new UsageIndex(functionUses, listingUses);
    }

    private void addUses(Map<DataType, Integer> counts,
            Map<DataType, Set<DataType>> wantedByActual, DataType actual) {
        Set<DataType> wanted = wantedByActual.get(actual);
        if (wanted == null) return;
        for (DataType type : wanted) counts.merge(type, 1, Integer::sum);
    }

    private boolean derivedFromView(DataType type) {
        if (type instanceof Array array)
            return viewOrDerivative(array.getDataType());
        if (type instanceof Pointer pointer && pointer.getDataType() != null)
            return viewOrDerivative(pointer.getDataType());
        return false;
    }

    private boolean viewOrDerivative(DataType type) {
        if (text(type.getDescription()).contains(VIEW)) return true;
        return derivedFromView(type);
    }

    private boolean hiddenThis(DataType type, String description) {
        return type instanceof Structure &&
            type.getPathName().startsWith(
                "/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_") &&
            description.contains("[STHiddenThisApplier generated]");
    }

    private int ownedReceiverFunctions(DataType type) {
        if (receiverOwnerCounts == null) {
            receiverOwnerCounts = new HashMap<>();
            FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
            while (functions.hasNext()) {
                Function function = functions.next();
                String qualified = function.getName(true);
                int separator = qualified.lastIndexOf("::");
                if (separator <= 0) continue;
                String owner = qualified.substring(0, separator);
                int leaf = owner.lastIndexOf("::");
                receiverOwnerCounts.merge(
                    leaf < 0 ? owner : owner.substring(leaf + 2), 1, Integer::sum);
            }
        }
        return receiverOwnerCounts.getOrDefault(type.getName(), 0);
    }

    private boolean scriptOwned(String description) {
        return description.contains("[ST") && description.contains("Applier]") ||
            description.contains("[STHiddenThisApplier generated]") ||
            description.contains(VIEW);
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
    private void write(Path path, List<Row> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\taction\ttype_path\treplacement_path\texpected_length\t" +
                "expected_parents\texpected_function_uses\texpected_listing_uses\t" +
                "expected_description\treason\n");
            for (Row row : rows) out.write(bit(row.apply) + "\t" + row.action + "\t" +
                row.typePath + "\t" + row.replacementPath + "\t" + row.length + "\t" +
                row.parents + "\t" + row.functionUses + "\t" + row.listingUses + "\t" +
                clean(row.description) + "\t" + clean(row.reason) + "\n");
        }
    }
    private File outputDirectory() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException("Recovery output directory is required");
        return askDirectory("Select recovery output directory", "Select");
    }
    private Path programDirectory(File selected) {
        Path path = selected.toPath().toAbsolutePath().normalize();
        return path.getFileName() != null &&
            path.getFileName().toString().equals(currentProgram.getName()) ?
            path : path.resolve(currentProgram.getName());
    }
    private static String text(String value) { return value == null ? "" : value; }
    private static String clean(String value) {
        return text(value).replace('\t', ' ').replace('\r', ' ').replace('\n', ' ');
    }
    private static String bit(boolean value) { return value ? "1" : "0"; }
    private record Row(boolean apply, String action, String typePath, String replacementPath,
        int length, int parents, int functionUses, int listingUses, String description,
        String reason) { }
    private record UsageIndex(Map<DataType, Integer> functionUses,
        Map<DataType, Integer> listingUses) { }
}
