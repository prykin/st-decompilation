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
import java.util.Collections;
import java.util.HashMap;
import java.util.IdentityHashMap;
import java.util.LinkedHashMap;
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

public class STTypeLifecycleApplier extends GhidraScript {
    private static final String VIEW = "[ST_VIEW_ONLY]";
    private static final String ANCHOR = "[ST_SEMANTIC_ANCHOR]";
    private static final Pattern EMBEDDED_ADDRESS = Pattern.compile(
        "(?i)(?:^|_)([0-9a-f]{8})(?:_|$)");
    private final List<Report> report = new ArrayList<>();
    private final Map<String, Baseline> baselines = new HashMap<>();
    private DataTypeManager manager;
    private UsageIndex usage;
    private UsageIndex removalUsage;
    private Map<String, Integer> receiverOwnerCounts;

    @Override
    protected void run() throws Exception {
        end(true);
        if (currentProgram == null) { printerr("Open the analyzed ST program first."); return; }
        File file = inputFile(); if (file == null) return;
        Tsv input = read(file.toPath());
        require(input, "apply", "action", "type_path", "replacement_path",
            "expected_replacement", "expected_length", "expected_parents",
            "expected_function_uses",
            "expected_listing_uses", "expected_description", "reason");
        manager = currentProgram.getDataTypeManager();
        List<DataType> observed = new ArrayList<>();
        for (Map<String, String> row : input.rows) {
            if (!enabled(row.get("apply"))) continue;
            DataType target = manager.getDataType(row.get("type_path"));
            DataType replacement = manager.getDataType(row.get("replacement_path"));
            if (target != null && !observed.contains(target)) observed.add(target);
            if (replacement != null && !observed.contains(replacement))
                observed.add(replacement);
        }
        usage = usageIndex(observed);
        for (DataType type : observed)
            baselines.put(type.getPathName(), baseline(type));
        int transaction = currentProgram.startTransaction("Apply type lifecycle");
        boolean commit = false;
        try {
            for (Map<String, String> row : input.rows) {
                monitor.checkCancelled();
                if (enabled(row.get("apply")) &&
                        "replace".equals(row.get("action"))) apply(row);
            }
            List<DataType> removals = new ArrayList<>();
            for (Map<String, String> row : input.rows) {
                if (!enabled(row.get("apply")) ||
                        !"remove".equals(row.get("action"))) continue;
                DataType type = manager.getDataType(row.get("type_path"));
                if (type != null && !removals.contains(type)) removals.add(type);
            }
            removalUsage = usageIndex(removals);
            for (Map<String, String> row : input.rows) {
                monitor.checkCancelled();
                if (!(enabled(row.get("apply")) &&
                        "replace".equals(row.get("action")))) apply(row);
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
            Baseline observed = baselines.get(path);
            boolean derivedView = derivedFromView(type);
            if (observed == null || !observed.matches(row)) {
                report.add(new Report(row.get("action"), path, "preserved",
                    "stale baseline: " + baselineDifference(row, observed)));
                return;
            }
            String currentDescription = text(type.getDescription());
            if (currentDescription.contains(ANCHOR) &&
                    !currentDescription.contains(VIEW) && !derivedView) {
                report.add(new Report(row.get("action"), path, "preserved",
                    "current type is a semantic anchor"));
                return;
            }
            int functionUses = observed.functionUses;
            int listingUses = observed.listingUses;
            int liveFunctionUses = removalUsage == null ? functionUses :
                functionUses(removalUsage, type);
            int liveListingUses = removalUsage == null ? listingUses :
                removalUsage.listingUses.getOrDefault(type, 0);
            if ("replace".equals(row.get("action"))) {
                DataType replacement = manager.getDataType(row.get("replacement_path"));
                if (replacement == null || !row.get("expected_replacement").equals(
                        replacementBaseline(replacement))) {
                    report.add(new Report("replace", path, "preserved",
                        "stale replacement baseline"));
                    return;
                }
                boolean hiddenReceiverFamily =
                    row.get("reason").equals(
                        "unique namespace-backed HiddenThis receiver family") &&
                    hiddenThis(type) && hiddenThis(replacement) &&
                    type.isEquivalent(replacement) &&
                    ownedReceiverFunctions(type) == 0 &&
                    ownedReceiverFunctions(replacement) >= 2;
                String replacementDescription = replacement == null ? "" :
                    text(replacement.getDescription());
                boolean replacementAnchor = replacementDescription.contains(ANCHOR) &&
                    !replacementDescription.contains(VIEW);
                if (replacement == null ||
                        (!hiddenReceiverFamily && !replacementAnchor) ||
                        !type.isEquivalent(replacement) ||
                        !hiddenReceiverFamily && !replacementCompatible(type,
                            currentDescription, replacement,
                            replacementDescription)) {
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
                boolean generatedEnum = disposableGeneratedEnum(type, description);
                if (hasPhysicalVptrCompanion(type)) {
                    report.add(new Report("remove", path, "preserved",
                        "physical vptr companion requires atomic class/vtable retirement"));
                    return;
                }
                if (!(description.contains(VIEW) || derivedView || anonymous ||
                        generatedEnum) ||
                        type.getParents().size() != 0 ||
                        !(removalProvenance(text(type.getDescription())) || derivedView) ||
                        liveFunctionUses != 0 || liveListingUses != 0 ||
                        hiddenThis(type) && ownedReceiverFunctions(type) != 0) {
                    report.add(new Report("remove", path, "preserved",
                        "type is no longer an unreferenced view; live function/listing uses=" +
                            liveFunctionUses + "/" + liveListingUses));
                    return;
                }
                if (!manager.remove(type))
                    throw new IllegalStateException(
                        "datatype manager refused removal");
                report.add(new Report("remove", path, "removed",
                    generatedEnum ?
                        "unreferenced switch enum without a stable typed target" :
                    anonymous ?
                        "unreferenced hash/script-owned anonymous type" :
                    derivedView ?
                        "unreferenced Pointer/Array derivative of view type" :
                        "unreferenced script-owned view"));
            }
            else report.add(new Report(row.get("action"), path, "preserved",
                "unsupported action"));
        }
        catch (Exception exception) {
            report.add(new Report(row.get("action"), path, "conflict", message(exception)));
        }
    }

    /** Same path-based wrapper walk as the analyzer; one whole-program scan. */
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
            addUses(listingUses, wantedByPath, data.next().getDataType());
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
        }
        for (DataType type : matched) counts.merge(type, 1, Integer::sum);
    }

    private String replacementBaseline(DataType type) {
        return type == null ? "missing" : type.getLength() + "|" +
            clean(type.getDescription());
    }

    private Baseline baseline(DataType type) {
        return new Baseline(type.getLength(), type.getParents().size(),
            functionUses(usage, type),
            usage.listingUses.getOrDefault(type, 0), clean(type.getDescription()));
    }

    private int functionUses(UsageIndex index, DataType type) {
        int direct = index.functionUses.getOrDefault(type, 0);
        return hiddenThis(type) ? Math.max(direct, ownedReceiverFunctions(type)) : direct;
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

    private String parentPath(DataType type) {
        String path = type.getPathName();
        int separator = path.lastIndexOf('/');
        return separator < 0 ? "" : path.substring(0, separator);
    }

    private String conflictBase(String name) {
        return name.replaceFirst("\\.conflict[0-9]*$", "");
    }

    private String baselineDifference(Map<String, String> row, Baseline actual) {
        if (actual == null) return "type was not present in the pre-transaction snapshot";
        List<String> differences = new ArrayList<>();
        difference(differences, "length", row.get("expected_length"), actual.length);
        difference(differences, "parents", row.get("expected_parents"), actual.parents);
        difference(differences, "function_uses", row.get("expected_function_uses"),
            actual.functionUses);
        difference(differences, "listing_uses", row.get("expected_listing_uses"),
            actual.listingUses);
        if (!row.get("expected_description").equals(actual.description))
            differences.add("description_changed");
        return differences.isEmpty() ? "unknown snapshot mismatch" :
            String.join(", ", differences);
    }

    private void difference(List<String> output, String name, String expected, int actual) {
        if (!expected.equals(Integer.toString(actual)))
            output.add(name + " expected=" + expected + " current=" + actual);
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
    private boolean hiddenThis(DataType type) {
        return type instanceof Structure &&
            type.getPathName().startsWith(
                "/SubmarineTitans/Recovered/HiddenThis/") &&
            text(type.getDescription()).contains("[STHiddenThisApplier generated]");
    }
    private int ownedReceiverFunctions(DataType type) {
        if (type == null) return 0;
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

    /** Revalidate the physical class/vtable pair at mutation time. */
    private boolean hasPhysicalVptrCompanion(DataType type) {
        if (!(type instanceof Structure structure) || structure.getLength() < 4)
            return false;
        DataTypeComponent component = structure.getComponentAt(0);
        if (component == null || component.getOffset() != 0 ||
                !(component.getDataType() instanceof Pointer pointer) ||
                !(pointer.getDataType() instanceof Structure vtable)) return false;
        return "vtable".equals(text(component.getFieldName())) &&
            vtable.getPathName().equals(type.getPathName() + "VTable");
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
    private record UsageIndex(Map<DataType, Integer> functionUses,
        Map<DataType, Integer> listingUses) { }
    private record Baseline(int length, int parents, int functionUses, int listingUses,
            String description) {
        boolean matches(Map<String, String> row) {
            return row.get("expected_length").equals(Integer.toString(length)) &&
                row.get("expected_parents").equals(Integer.toString(parents)) &&
                row.get("expected_function_uses").equals(Integer.toString(functionUses)) &&
                row.get("expected_listing_uses").equals(Integer.toString(listingUses)) &&
                row.get("expected_description").equals(description);
        }
    }
    private record Tsv(List<String> header, List<Map<String, String>> rows) { }
    private record Report(String kind, String target, String status, String detail) { }
}
