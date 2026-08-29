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
import java.util.Collections;
import java.util.Comparator;
import java.util.Iterator;
import java.util.HashMap;
import java.util.IdentityHashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Set;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeComponent;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.Array;
import ghidra.program.model.data.FunctionDefinition;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.TypeDef;
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
    private static final Pattern EMBEDDED_ADDRESS = Pattern.compile(
        "(?i)(?:^|_)([0-9a-f]{8})(?:_|$)");
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
            boolean semanticAnchor = description.contains(ANCHOR) &&
                !description.contains(VIEW) && !derivedView;
            if (semanticAnchor) semanticAnchors.add(type);
            if (hiddenThis(type, description) && ownedReceiverFunctions(type) >= 2)
                receiverAnchors.add(type);
            if (type.getPathName().startsWith(ROOT) && !semanticAnchor &&
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
                if (candidate == type || !candidate.isEquivalent(type) ||
                        !replacementCompatible(type, description, candidate,
                            text(candidate.getDescription()))) continue;
                anchors.add(candidate);
            }
            int ownerUses = hiddenThis(type, description) ?
                ownedReceiverFunctions(type) : 0;
            int functionUses = Math.max(
                usage.functionUses.getOrDefault(type, 0), ownerUses);
            int listingUses = usage.listingUses.getOrDefault(type, 0);
            int parents = type.getParents().size();
            List<DataType> matchingReceivers = new ArrayList<>();
            if (hiddenThis(type, description) && ownerUses == 0) {
                for (DataType candidate : receiverAnchors)
                    if (candidate != type && candidate.isEquivalent(type) &&
                            hiddenThis(candidate, text(candidate.getDescription())))
                        matchingReceivers.add(candidate);
            }
            if (matchingReceivers.size() == 1) {
                DataType replacement = matchingReceivers.get(0);
                rows.add(new Row(true, "replace", type.getPathName(),
                    replacement.getPathName(), replacementBaseline(replacement),
                    type.getLength(), parents, functionUses,
                    listingUses, description,
                    "unique namespace-backed HiddenThis receiver family"));
            }
            else if (anchors.size() == 1 && (description.contains(VIEW) ||
                    type.getName().contains(".conflict") ||
                    explicitlyPromotedFrom(type, anchors.get(0)))) {
                DataType replacement = anchors.get(0);
                rows.add(new Row(true, "replace", type.getPathName(),
                    replacement.getPathName(), replacementBaseline(replacement),
                    type.getLength(), parents, functionUses,
                    listingUses, description,
                    explicitlyPromotedFrom(type, replacement) ?
                        "exact source-family promotion retains one layout identity" :
                        "unique equivalent semantic anchor"));
            }
            else if (anchors.isEmpty() &&
                    (description.contains(VIEW) || derivedView ||
                        disposableAnonymous(type, description) ||
                        disposableGeneratedEnum(type, description)) &&
                    !hasPhysicalVptrCompanion(type) &&
                    (removalProvenance(description) || derivedView) && parents == 0 &&
                    functionUses == 0 && listingUses == 0) {
                rows.add(new Row(true, "remove", type.getPathName(), "", "",
                    type.getLength(),
                    parents, functionUses, listingUses, description,
                    disposableGeneratedEnum(type, description) ?
                        "unreferenced switch enum without a stable typed target" :
                    disposableAnonymous(type, description) ?
                        "unreferenced hash/script-owned anonymous type" :
                        derivedView ? "unreferenced Pointer/Array derivative of view type" :
                        "unreferenced script-owned view type"));
            }
            else if (description.contains(VIEW) || derivedView ||
                    disposableAnonymous(type, description) ||
                    disposableGeneratedEnum(type, description)) {
                rows.add(new Row(false, "retain", type.getPathName(), "", "",
                    type.getLength(),
                    parents, functionUses, listingUses, description,
                    hasPhysicalVptrCompanion(type) ?
                        "physical vptr companion requires atomic class/vtable retirement" :
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
            "note=Deletion requires script provenance or the pipeline-owned VIEW_ONLY " +
                "opt-in marker, plus zero parents/signature/Listing uses. Direct " +
                "Pointer/Array chains inherit " +
                "view-only retirement without crossing through an owning structure. " +
                "Non-view deletion is limited to generated anonymous PointerShapes/" +
                "ClassPointees/HiddenThis types and unreferenced switch enums whose " +
                "decompiler-local spelling has no stable typed target. A structure with an exact offset-zero " +
                "physical vptr companion is retained until class and vtable can be retired " +
                "atomically. Equivalent types migrate only when one " +
                "semantic anchor also shares the discriminator address/case, exact conflict " +
                "identity, or same-category generated-layout provenance; equal geometry alone " +
                "never merges semantic identities."),
            StandardCharsets.UTF_8);
        println("Type lifecycle: candidates=" + rows.size() + ", automatic=" +
            rows.stream().filter(row -> row.apply).count() + ", output=" + directory);
    }

    /**
     * Index all live uses in two whole-program scans instead of two scans per type.
     *
     * Ghidra does not guarantee that a Pointer/Array object returned by a Function
     * signature is the same Java object as the corresponding datatype-manager entry.
     * Keying this index by DataType identity therefore made live receiver pointers look
     * unused. Walk the actual wrapper chain and match only its stable managed path; do
     * not use isEquivalent(), because equal geometry is not semantic identity.
     */
    private UsageIndex usageIndex(List<DataType> candidates) throws Exception {
        Map<String, DataType> wantedByPath = new HashMap<>();
        for (DataType wanted : candidates)
            wantedByPath.put(wanted.getPathName(), wanted);
        Map<DataType, Integer> functionUses = new HashMap<>();
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            monitor.checkCancelled();
            Function function = functions.next();
            addUses(functionUses, wantedByPath, function.getReturnType());
            for (Parameter parameter : function.getParameters())
                addUses(functionUses, wantedByPath, parameter.getDataType());
            for (Variable variable : function.getLocalVariables())
                addUses(functionUses, wantedByPath, variable.getDataType());
        }
        Map<DataType, Integer> listingUses = new HashMap<>();
        DataIterator data = currentProgram.getListing().getDefinedData(true);
        while (data.hasNext()) {
            monitor.checkCancelled();
            Data item = data.next();
            addUses(listingUses, wantedByPath, item.getDataType());
        }
        return new UsageIndex(functionUses, listingUses);
    }

    private void addUses(Map<DataType, Integer> counts,
            Map<String, DataType> wantedByPath, DataType actual) {
        if (actual == null) return;
        Set<DataType> seen = Collections.newSetFromMap(new IdentityHashMap<>());
        Set<DataType> matched = Collections.newSetFromMap(new IdentityHashMap<>());
        List<DataType> pending = new ArrayList<>();
        pending.add(actual);
        for (int index = 0; index < pending.size(); index++) {
            DataType current = pending.get(index);
            if (current == null || !seen.add(current)) continue;
            DataType wanted = wantedByPath.get(current.getPathName());
            if (wanted != null) matched.add(wanted);
            if (current instanceof Pointer pointer)
                pending.add(pointer.getDataType());
            else if (current instanceof Array array)
                pending.add(array.getDataType());
            else if (current instanceof TypeDef typeDef)
                pending.add(typeDef.getBaseDataType());
            else if (current instanceof FunctionDefinition definition) {
                pending.add(definition.getReturnType());
                for (var parameter : definition.getArguments())
                    pending.add(parameter.getDataType());
            }
            else if (current instanceof Structure structure) {
                // A generated pointer/array wrapper stored in one live class or
                // record component is a real use even when Ghidra does not
                // expose that containment through DataType.getParents().  Walk
                // the exact managed component graph; path identity still keeps
                // equal-but-unrelated anonymous geometries separate.
                for (DataTypeComponent component : structure.getDefinedComponents())
                    pending.add(component.getDataType());
            }
        }
        for (DataType type : matched) counts.merge(type, 1, Integer::sum);
    }

    /** Equal storage is insufficient: require one address/provenance identity. */
    private boolean replacementCompatible(DataType source, String sourceDescription,
            DataType replacement, String replacementDescription) {
        String sourceDiscriminator = discriminatorIdentity(sourceDescription);
        if (!sourceDiscriminator.isBlank())
            return sourceDiscriminator.equals(
                discriminatorIdentity(replacementDescription));
        if (source.getName().contains(".conflict") &&
                parentPath(source).equals(parentPath(replacement)) &&
                conflictBase(source.getName()).equals(replacement.getName())) return true;
        String sourceHash = attribute(sourceDescription, "generated_layout_sha256");
        return !sourceHash.isBlank() &&
            sourceHash.equals(attribute(replacementDescription,
                "generated_layout_sha256")) &&
            parentPath(source).equals(parentPath(replacement));
    }

    private String discriminatorIdentity(String description) {
        String family = attribute(description, "discriminator_family");
        String value = attribute(description, "case_value");
        if (family.isBlank() || value.isBlank()) return "";
        Matcher matcher = EMBEDDED_ADDRESS.matcher(family);
        String address = "";
        while (matcher.find()) address = matcher.group(1).toUpperCase(Locale.ROOT);
        return address.isBlank() ? "" : address + ":" + value;
    }

    private String attribute(String description, String name) {
        String marker = name + "=";
        int start = description.indexOf(marker);
        if (start < 0) return "";
        start += marker.length();
        int end = description.indexOf(';', start);
        return description.substring(start, end < 0 ? description.length() : end).trim();
    }

    private boolean explicitlyPromotedFrom(DataType source, DataType replacement) {
        String description = text(replacement.getDescription());
        return description.contains(
                "[STTypeFamilyApplier] Generated SOURCE_FUNCTION_FAMILY") &&
            source.isEquivalent(replacement) &&
            source.getCategoryPath().equals(replacement.getCategoryPath()) &&
            source.getPathName().equals(attribute(description, "promoted_from"));
    }

    private String parentPath(DataType type) {
        String path = type.getPathName();
        int separator = path.lastIndexOf('/');
        return separator < 0 ? "" : path.substring(0, separator);
    }

    private String conflictBase(String name) {
        return name.replaceFirst("\\.conflict[0-9]*$", "");
    }

    private boolean derivedFromView(DataType type) {
        if (type instanceof Array array)
            return viewOrDerivative(array.getDataType());
        if (type instanceof Pointer pointer && pointer.getDataType() != null)
            return viewOrDerivative(pointer.getDataType());
        return false;
    }

    private boolean viewOrDerivative(DataType type) {
        String description = text(type.getDescription());
        if (description.contains(VIEW) || disposableAnonymous(type, description) ||
                disposableGeneratedEnum(type, description))
            return true;
        return derivedFromView(type);
    }

    private boolean hiddenThis(DataType type, String description) {
        return type instanceof Structure &&
            type.getPathName().startsWith(
                "/SubmarineTitans/Recovered/HiddenThis/") &&
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
        return description.contains(VIEW) ||
            description.contains("[STRecoveredTypesApplier]") ||
            description.contains("[STTypeBootstrapApplier]") ||
            description.contains("[STDiscriminatedPayloadApplier]") ||
            description.contains("[STPointerShapeApplier]") ||
            description.contains("[STSwitchEnumApplier]") ||
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
    private boolean disposableGeneratedEnum(DataType type, String description) {
        return type instanceof ghidra.program.model.data.Enum &&
            type.getPathName().startsWith(
                "/SubmarineTitans/Recovered/Enums/") &&
            description.contains("[STSwitchEnumApplier]");
    }

    /**
     * A physical receiver and its vtable form one ABI object.  Removing only the
     * receiver erases the accepted class-vptr boundary while the table remains live.
     * Lifecycle currently has no atomic pair-retirement proof, so retain the pair.
     */
    private boolean hasPhysicalVptrCompanion(DataType type) {
        if (!(type instanceof Structure structure) || structure.getLength() < 4)
            return false;
        DataTypeComponent component = structure.getComponentAt(0);
        if (component == null || component.getOffset() != 0 ||
                !(component.getDataType() instanceof Pointer pointer) ||
                !(pointer.getDataType() instanceof Structure vtable)) return false;
        String fieldName = text(component.getFieldName());
        return "vtable".equals(fieldName) &&
            vtable.getPathName().equals(type.getPathName() + "VTable");
    }
    private String replacementBaseline(DataType type) {
        return type == null ? "missing" : type.getLength() + "|" +
            clean(type.getDescription());
    }

    private void write(Path path, List<Row> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\taction\ttype_path\treplacement_path\t" +
                "expected_replacement\texpected_length\t" +
                "expected_parents\texpected_function_uses\texpected_listing_uses\t" +
                "expected_description\treason\n");
            for (Row row : rows) out.write(bit(row.apply) + "\t" + row.action + "\t" +
                row.typePath + "\t" + row.replacementPath + "\t" +
                clean(row.replacementBaseline) + "\t" + row.length + "\t" +
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
        String replacementBaseline, int length, int parents, int functionUses,
        int listingUses, String description,
        String reason) { }
    private record UsageIndex(Map<DataType, Integer> functionUses,
        Map<DataType, Integer> listingUses) { }
}
