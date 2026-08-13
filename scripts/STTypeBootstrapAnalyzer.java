// Discover the small set of structural types needed to bootstrap later recovery passes.
// This analyzer deliberately contains no program addresses or enum values.  A type is proposed
// only when independent function-family, ABI, and field-access evidence is present.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Analyze Heuristic Type Bootstrap

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Set;
import java.util.TreeSet;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeComponent;
import ghidra.program.model.data.Enum;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.TypeDef;
import ghidra.program.model.data.Undefined;
import ghidra.program.model.data.VoidDataType;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.FunctionTag;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.listing.Variable;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.SourceType;

public class STTypeBootstrapAnalyzer extends GhidraScript {
    private static final String ROOT = "/SubmarineTitans/Recovered";
    private static final String LEGACY_CURATED_TAG = "RECOVERED_CURATED_PROPOSAL";
    private static final String SEMANTIC_ANCHOR = "[ST_SEMANTIC_ANCHOR]";
    private static final String VIEW_ONLY = "[ST_VIEW_ONLY]";
    private static final Pattern DARRAY_SOURCE = Pattern.compile(
        "(?i)(?:^|[^a-z0-9_])[ds]arr[a-z0-9_]*\\.c(?:$|[^a-z0-9_])");
    private static final Pattern OFFSET = Pattern.compile(
        "(?i)\\[[^]]+\\+\\s*(?:0x)?([0-9a-f]+)\\]");
    @Override
    protected void run() throws Exception {
        end(true);
        if (currentProgram == null) {
            printerr("Open the analyzed ST program first.");
            return;
        }
        File selected = outputDirectory();
        if (selected == null) return;
        Path directory = programDirectory(selected);
        Files.createDirectories(directory);

        List<Row> rows = new ArrayList<>();
        FamilyEvidence darray = darrayEvidence();
        rows.add(typeRow("ensure_darray", ROOT + "/DArrayTy", "",
            strongDArray(darray), darray.domains(), darray.detail()));

        FamilyEvidence messages = messageEvidence();
        rows.add(typeRow("ensure_message", ROOT + "/STMessage", "",
            messages.strong(5, 3), messages.domains(), messages.detail()));

        int systemMethods = methodFamilyCount("SystemClassTy");
        DataType canonicalSystem = currentProgram.getDataTypeManager().getDataType("/SystemClassTy");
        rows.add(typeRow("canonical_system", "/SystemClassTy", "",
            canonicalSystem instanceof Structure && systemMethods >= 4,
            "class_namespace|method_family|vtable_family",
            "named_methods=" + systemMethods + "; canonical_type=" +
                (canonicalSystem == null ? "missing" : canonicalSystem.getPathName())));
        addSemanticDuplicateReconciliation(rows, systemMethods);

        Iterator<DataType> legacyTypes =
            currentProgram.getDataTypeManager().getAllDataTypes();
        while (legacyTypes.hasNext()) {
            DataType type = legacyTypes.next();
            String description = type.getDescription();
            if (!type.getPathName().startsWith(ROOT + "/") ||
                    semanticBootstrapType(type) ||
                    description != null && description.contains("[ST_VIEW_ONLY]") ||
                    !(legacyProjection(description) ||
                        hasEquivalentSemanticAnchor(type))) continue;
            rows.add(typeRow("mark_view_only", type.getPathName(), "", true,
                "legacy_script_provenance|semantic_anchor_risk",
                "legacy projection is retained only as a migratable view"));
        }
        addLegacyViewParameterRetirement(rows);
        addLegacyViewLocalRetirement(rows);
        addSignatureProvenance(rows, messages, darray);
        addCuratedIdentityRetirement(rows);
        addHeuristicSignatureProvenance(rows);

        rows.sort(Comparator.comparing((Row row) -> row.action)
            .thenComparing(row -> row.target));
        writeTsv(directory.resolve("type_bootstrap_proposals.tsv"), rows);
        writeSummary(directory.resolve("type_bootstrap_summary.txt"), rows);
        println("Heuristic type bootstrap: proposals=" + rows.size() + ", apply=" +
            rows.stream().filter(row -> row.apply).count() + ", output=" + directory);
    }

    private FamilyEvidence darrayEvidence() {
        FamilyEvidence result = new FamilyEvidence();
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            Function function = functions.next();
            if (function.isExternal() || function.isThunk() ||
                    !recordDArrayIdentity(function, result)) continue;
            result.functions++;
            result.names.add(function.getName(true));
            InstructionIterator instructions = currentProgram.getListing()
                .getInstructions(function.getBody(), true);
            while (instructions.hasNext()) {
                Instruction instruction = instructions.next();
                Matcher matcher = OFFSET.matcher(instruction.toString());
                while (matcher.find()) {
                    try {
                        int offset = Integer.parseInt(matcher.group(1), 16);
                        if (offset >= 0 && offset <= 0x40 && (offset & 3) == 0)
                            result.offsets.add(offset);
                    }
                    catch (NumberFormatException ignored) { }
                }
                if ("IMUL".equalsIgnoreCase(instruction.getMnemonicString()))
                    result.operations.add("runtime_stride");
                if (instruction.getFlowType().isCall())
                    result.operations.add("helper_calls");
            }
        }
        return result;
    }

    private boolean recordDArrayIdentity(Function function, FamilyEvidence evidence) {
        boolean semanticTag = false;
        for (FunctionTag tag : function.getTags())
            if (tag.getName().startsWith("RECOVERED_UTILITY_DARRAY_")) {
                semanticTag = true;
                break;
            }
        boolean named = function.getName(true).toLowerCase(Locale.ROOT).contains("darray");
        // Existing semantic tags and recovered/debug names are O(1) identity evidence.
        // Only inspect referenced strings when neither is available; this keeps the
        // bootstrap fixed point cheap on already-recovered databases.
        boolean source = !semanticTag && !named &&
            DARRAY_SOURCE.matcher(sourceEvidence(function)).find();
        if (evidence != null) {
            if (semanticTag) evidence.identityDomains.add("utility_semantic_tag");
            if (source) evidence.identityDomains.add("embedded_source_provenance");
            if (named) evidence.identityDomains.add("named_family");
        }
        return semanticTag || source || named;
    }

    private boolean hasDArrayIdentity(Function function) {
        return recordDArrayIdentity(function, null);
    }

    private String sourceEvidence(Function function) {
        StringBuilder result = new StringBuilder(text(function.getComment()));
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            for (Reference reference : instruction.getReferencesFrom()) {
                Data data = currentProgram.getListing().getDefinedDataAt(reference.getToAddress());
                if (data != null && data.hasStringValue() && data.getValue() != null)
                    result.append("\n").append(data.getValue());
            }
        }
        return result.toString();
    }

    private boolean strongDArray(FamilyEvidence evidence) {
        boolean independentIdentity = evidence.identityDomains.contains(
                "utility_semantic_tag") || evidence.identityDomains.contains(
                "embedded_source_provenance");
        int minimumFunctions = independentIdentity ? 4 : 5;
        return evidence.functions >= minimumFunctions && evidence.offsets.size() >= 6 &&
            evidence.offsets.stream().mapToInt(Integer::intValue).max().orElse(0) >= 0x18 &&
            evidence.operations.contains("runtime_stride");
    }

    private FamilyEvidence messageEvidence() {
        FamilyEvidence result = new FamilyEvidence();
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            Function function = functions.next();
            if (function.isExternal() || function.isThunk() ||
                    !"GetMessage".equals(function.getName())) continue;
            boolean ret4 = false;
            Set<Integer> offsets = new TreeSet<>();
            InstructionIterator instructions = currentProgram.getListing()
                .getInstructions(function.getBody(), true);
            while (instructions.hasNext()) {
                Instruction instruction = instructions.next();
                String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
                if (mnemonic.startsWith("RET") && instruction.getScalar(0) != null &&
                        instruction.getScalar(0).getUnsignedValue() == 4) ret4 = true;
                Matcher matcher = OFFSET.matcher(instruction.toString());
                while (matcher.find()) {
                    try {
                        int offset = Integer.parseInt(matcher.group(1), 16);
                        if (Set.of(0x10, 0x14, 0x18, 0x1c).contains(offset))
                            offsets.add(offset);
                    }
                    catch (NumberFormatException ignored) { }
                }
            }
            if (!ret4) continue;
            result.functions++;
            result.names.add(function.getName(true));
            result.offsets.addAll(offsets);
            result.operations.add("ret_4");
            if (offsets.contains(0x10)) result.operations.add("id_dispatch");
            if (offsets.stream().anyMatch(value -> value >= 0x14))
                result.operations.add("argument_slots");
        }
        return result;
    }

    private int methodFamilyCount(String owner) {
        int result = 0;
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            String name = functions.next().getName(true);
            if (name.startsWith(owner + "::")) result++;
        }
        return result;
    }


    private boolean semanticBootstrapType(DataType type) {
        return text(type.getDescription()).contains("[ST_SEMANTIC_ANCHOR]");
    }

    /**
     * Locate an exact-layout legacy view of a unique semantic anchor. Category/name
     * preference is not evidence: two structures may share a C leaf name while carrying
     * different field names and different strengths of the same storage type. The applier
     * reconciles those views before replacing the duplicate, and therefore needs hash-intact
     * baselines for both sides.
     */
    private void addSemanticDuplicateReconciliation(List<Row> rows, int systemMethods) {
        Map<String, List<Structure>> groups = new LinkedHashMap<>();
        Iterator<DataType> iterator = currentProgram.getDataTypeManager().getAllDataTypes();
        while (iterator.hasNext()) {
            DataType type = iterator.next();
            if (type instanceof Structure structure)
                groups.computeIfAbsent(type.getName(), ignored -> new ArrayList<>())
                    .add(structure);
        }
        for (List<Structure> group : groups.values()) {
            if (group.size() < 2) continue;
            List<Structure> anchors = group.stream().filter(type ->
                semanticBootstrapType(type) ||
                    ("/SystemClassTy".equals(type.getPathName()) && systemMethods >= 4))
                .toList();
            if (anchors.size() != 1) continue;
            Structure canonical = anchors.get(0);
            for (Structure duplicate : group) {
                if (duplicate.equals(canonical) ||
                        text(duplicate.getDescription()).contains(VIEW_ONLY) ||
                        !(canonical.getPathName().startsWith(ROOT + "/") ||
                            duplicate.getPathName().startsWith(ROOT + "/"))) continue;
                MergeCompatibility compatibility = mergeCompatibility(canonical, duplicate);
                rows.add(new Row(compatibility.compatible, "reconcile_duplicate",
                    duplicate.getPathName(), canonical.getPathName(),
                    typeFingerprint(duplicate), typeFingerprint(canonical),
                    "unique_semantic_anchor|exact_component_geometry|compatible_storage_views",
                    compatibility.compatible ? "high" : "review",
                    "canonical_length=" + canonical.getLength() +
                        "; duplicate_length=" + duplicate.getLength() +
                        "; fields=" + compatibility.fields +
                        "; generic_upgrades=" + compatibility.genericUpgrades +
                        "; name_disagreements=" + compatibility.nameDisagreements +
                        (compatibility.reason.isBlank() ? "" :
                            "; blocked=" + compatibility.reason)));
            }
        }
    }

    private MergeCompatibility mergeCompatibility(Structure canonical,
            Structure duplicate) {
        if (canonical.getLength() != duplicate.getLength())
            return MergeCompatibility.blocked("different_lengths");
        DataTypeComponent[] left = canonical.getDefinedComponents();
        DataTypeComponent[] right = duplicate.getDefinedComponents();
        if (left.length != right.length)
            return MergeCompatibility.blocked("different_component_counts");
        int genericUpgrades = 0;
        int nameDisagreements = 0;
        for (int index = 0; index < left.length; index++) {
            DataTypeComponent a = left[index];
            DataTypeComponent b = right[index];
            if (a.getOffset() != b.getOffset() || a.getLength() != b.getLength())
                return MergeCompatibility.blocked("different_geometry_at_" +
                    Integer.toHexString(Math.min(a.getOffset(), b.getOffset())));
            if (!compatibleStorageTypes(a.getDataType(), b.getDataType()))
                return MergeCompatibility.blocked("conflicting_types_at_" +
                    Integer.toHexString(a.getOffset()) + ":" +
                    a.getDataType().getPathName() + "_vs_" +
                    b.getDataType().getPathName());
            if (genericPointer(a.getDataType()) != genericPointer(b.getDataType()))
                genericUpgrades++;
            if (!text(a.getFieldName()).equals(text(b.getFieldName())))
                nameDisagreements++;
        }
        return new MergeCompatibility(true, left.length, genericUpgrades,
            nameDisagreements, "");
    }

    private boolean compatibleStorageTypes(DataType left, DataType right) {
        left = unwrap(left);
        right = unwrap(right);
        if (left.isEquivalent(right)) return true;
        if (left instanceof Pointer && right instanceof Pointer) {
            if (genericPointer(left) || genericPointer(right)) return true;
            DataType leftBase = nominalBase(left);
            DataType rightBase = nominalBase(right);
            return pointerDepth(left) == pointerDepth(right) &&
                leftBase != null && rightBase != null &&
                leftBase.getName().equals(rightBase.getName()) &&
                leftBase.getLength() == rightBase.getLength();
        }
        return false;
    }

    private boolean genericPointer(DataType type) {
        type = unwrap(type);
        if (!(type instanceof Pointer)) return false;
        DataType base = nominalBase(type);
        return base == null || base instanceof VoidDataType ||
            Undefined.isUndefined(base);
    }

    private int pointerDepth(DataType type) {
        int result = 0;
        type = unwrap(type);
        while (type instanceof Pointer pointer) {
            result++;
            type = unwrap(pointer.getDataType());
        }
        return result;
    }

    private DataType nominalBase(DataType type) {
        type = unwrap(type);
        while (type instanceof Pointer pointer) type = unwrap(pointer.getDataType());
        return type;
    }

    private DataType unwrap(DataType type) {
        while (type instanceof TypeDef definition) type = definition.getBaseDataType();
        return type;
    }

    private boolean legacyProjection(String description) {
        return description != null &&
            description.toLowerCase(Locale.ROOT).contains("[strecoveredtypesapplier]");
    }

    private boolean hasEquivalentSemanticAnchor(DataType type) {
        Iterator<DataType> types =
            currentProgram.getDataTypeManager().getAllDataTypes();
        int matches = 0;
        while (types.hasNext()) {
            DataType candidate = types.next();
            if (candidate.equals(type) || !candidate.isEquivalent(type)) continue;
            String description = candidate.getDescription();
            if (description != null && description.contains("[ST_SEMANTIC_ANCHOR]"))
                matches++;
        }
        return matches == 1;
    }

    private void addLegacyViewLocalRetirement(List<Row> rows) {
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            Function function = functions.next();
            if (function.isExternal()) continue;
            for (Variable variable : function.getLocalVariables()) {
                String comment = text(variable.getComment());
                if (!variable.isValid() || !variable.isStackVariable() ||
                        variable.getVariableStorage() == null ||
                        variable.getSource() == SourceType.USER_DEFINED ||
                        variable.getSource() == SourceType.IMPORTED ||
                        !comment.contains("[STRecoveredTypesApplier]") ||
                        !viewOnlyType(variable.getDataType())) continue;
                rows.add(new Row(true, "retire_legacy_view_local",
                    addr(function.getEntryPoint()), variable.getName(),
                    localFingerprint(variable),
                    variable.getVariableStorage().toString(),
                    "legacy_local_provenance|noncanonical_view|exact_storage_baseline",
                    "high", "type=" + variable.getDataType().getPathName() +
                        "; replacement=unconstrained_ssa_stack_storage"));
            }
        }
    }

    private String localFingerprint(Variable variable) {
        return variable.getName() + "|storage=" + variable.getVariableStorage() +
            "|type=" + variable.getDataType().getPathName() +
            "|source=" + variable.getSource() +
            "|comment=" + text(variable.getComment());
    }

    private void addLegacyViewParameterRetirement(List<Row> rows) {
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            Function function = functions.next();
            if (function.isExternal() || hasImportedTag(function)) continue;
            List<String> ordinals = new ArrayList<>();
            List<String> evidence = new ArrayList<>();
            for (Parameter parameter : function.getParameters()) {
                if (parameter.isAutoParameter() ||
                        parameter.getSource() != SourceType.USER_DEFINED ||
                        !(parameter.getDataType() instanceof Pointer pointer) ||
                        !legacyScriptView(pointer.getDataType())) continue;
                ordinals.add(Integer.toString(parameter.getOrdinal()));
                evidence.add(parameter.getName() + "=" +
                    pointer.getDataType().getPathName());
            }
            if (ordinals.isEmpty()) continue;
            rows.add(new Row(true, "retire_legacy_view_parameters",
                addr(function.getEntryPoint()), "", functionFingerprint(function),
                String.join(",", ordinals),
                "legacy_script_provenance|noncanonical_view|signature_use",
                "high", "parameters=" + String.join(",", evidence) +
                    "; replacement=void_pointer_pending_shape_recovery"));
        }
    }

    private boolean viewOnlyType(DataType type) {
        if (type == null) return false;
        String description = text(type.getDescription());
        return description.contains(VIEW_ONLY) &&
            !description.contains(SEMANTIC_ANCHOR);
    }

    private boolean legacyScriptView(DataType type) {
        if (!viewOnlyType(type)) return false;
        String description = text(type.getDescription());
        return description.contains("[STTypeBootstrapApplier]") ||
            description.contains("[STRecoveredTypesApplier]");
    }

    private void addSignatureProvenance(List<Row> rows, FamilyEvidence messages,
            FamilyEvidence darray) {
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            Function function = functions.next();
            if (function.getSignatureSource() != SourceType.USER_DEFINED ||
                    hasImportedTag(function) || hasTag(function, LEGACY_CURATED_TAG)) continue;
            if (!hasTag(function, "RECOVERED_DEBUG_NAME") &&
                    !hasLegacyScriptType(function)) continue;
            String reason = "";
            String leaf = function.getName();
            if ("GetMessage".equals(leaf) && messages.strong(5, 3))
                reason = "named GetMessage family + RET 4 + envelope offsets";
            else if (hasDArrayIdentity(function) && strongDArray(darray))
                reason = "DArray helper family and descriptor accesses";
            else if (hasComputedJump(function) && hasLegacyScriptType(function))
                reason = "switch discriminator uses a legacy address-seeded type; " +
                    "case layouts are now derived independently";
            if (reason.isBlank()) continue;
            rows.add(new Row(true, "demote_signature", addr(function.getEntryPoint()), "",
                function.getPrototypeString(true, true), "ANALYSIS",
                "independent_abi|named_family", "high", reason));
        }
    }

    private void addCuratedIdentityRetirement(List<Row> rows) {
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            Function function = functions.next();
            if (!hasTag(function, LEGACY_CURATED_TAG) || hasImportedTag(function)) continue;
            boolean semanticName = List.of("RECOVERED_DEBUG_NAME", "RECOVERED_SOURCE_NAME",
                "RECOVERED_MESSAGE_HANDLER", "RECOVERED_CONSTRUCTOR",
                "RECOVERED_DESTRUCTOR").stream().anyMatch(tag -> hasTag(function, tag));
            String proposedLeaf = semanticName ? function.getName() :
                "sub_" + addr(function.getEntryPoint());
            rows.add(new Row(true, "retire_curated_identity",
                addr(function.getEntryPoint()), "", functionFingerprint(function),
                proposedLeaf, "legacy_script_provenance|independent_semantic_tags",
                "high", semanticName ?
                    "semantic leaf retained by an independent recovery tag" :
                    "unconfirmed descriptive leaf replaced by a structural address name"));
        }
    }

    private void addHeuristicSignatureProvenance(List<Row> rows) {
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            Function function = functions.next();
            if (!hasTag(function, "RECOVERED_HEURISTIC_IDENTITY") ||
                    hasImportedTag(function)) continue;
            boolean stale = function.getSignatureSource() != SourceType.ANALYSIS ||
                function.getReturn().getSource() != SourceType.ANALYSIS;
            for (Parameter parameter : function.getParameters())
                if (!parameter.isAutoParameter() &&
                        parameter.getSource() != SourceType.ANALYSIS) stale = true;
            if (!stale) continue;
            rows.add(new Row(true, "normalize_heuristic_provenance",
                addr(function.getEntryPoint()), "", functionFingerprint(function), "ANALYSIS",
                "script_retirement_tag|atomic_signature_rebuild", "high",
                "legacy signature/parameter source priority survived curated identity retirement"));
        }
    }

    private String functionFingerprint(Function function) {
        StringBuilder result = new StringBuilder(function.getName(true))
            .append("|name_source=").append(function.getSymbol().getSource())
            .append("|prototype=").append(function.getPrototypeString(true, true))
            .append("|signature_source=").append(function.getSignatureSource())
            .append("|return_source=").append(function.getReturn().getSource());
        for (Parameter parameter : function.getParameters())
            result.append("|param_").append(parameter.getOrdinal()).append("_source=")
                .append(parameter.getSource());
        return result.toString();
    }

    private boolean hasTag(Function function, String name) {
        for (FunctionTag tag : function.getTags())
            if (name.equals(tag.getName())) return true;
        return false;
    }

    private boolean hasComputedJump(Function function) {
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            if (instruction.getFlowType().isJump() &&
                    instruction.getFlowType().isComputed()) return true;
        }
        return false;
    }

    private boolean hasLegacyScriptType(Function function) {
        for (Parameter parameter : function.getParameters()) {
            DataType type = parameter.getDataType();
            if (type instanceof ghidra.program.model.data.Pointer pointer &&
                    pointer.getDataType() != null) type = pointer.getDataType();
            String description = type == null ? null : type.getDescription();
            if (description != null &&
                    description.contains("[STRecoveredTypesApplier]")) return true;
        }
        return false;
    }

    private boolean hasImportedTag(Function function) {
        for (FunctionTag tag : function.getTags())
            if (tag.getName().startsWith("LIBRARY")) return true;
        for (Parameter parameter : function.getParameters())
            if (parameter.getSource() == SourceType.IMPORTED) return true;
        return function.getSymbol().getSource() == SourceType.IMPORTED ||
            function.getSignatureSource() == SourceType.IMPORTED ||
            function.getReturn().getSource() == SourceType.IMPORTED;
    }

    private Row typeRow(String action, String target, String replacement, boolean apply,
            String domains, String evidence) {
        return new Row(apply, action, target, replacement,
            typeFingerprint(currentProgram.getDataTypeManager().getDataType(target)), "",
            domains, apply ? "high" : "review", evidence);
    }

    private String typeFingerprint(DataType type) {
        if (type == null) return "missing";
        if (type instanceof Enum value) {
            StringBuilder result = new StringBuilder(type.getPathName())
                .append(':').append(type.getLength());
            for (String name : value.getNames())
                result.append('|').append(name).append('=').append(value.getValue(name));
            return result.append("|description=").append(
                type.getDescription() == null ? "" : type.getDescription()).toString();
        }
        if (!(type instanceof Structure structure))
            return type.getPathName() + ":" + type.getLength() + "|description=" +
                (type.getDescription() == null ? "" : type.getDescription());
        StringBuilder result = new StringBuilder(structure.getPathName())
            .append(':').append(structure.getLength());
        for (var component : structure.getDefinedComponents())
            result.append('|').append(component.getOffset()).append(':')
                .append(component.getLength()).append(':')
                .append(component.getDataType().getPathName()).append(':')
                .append(text(component.getFieldName())).append(':')
                .append(text(component.getComment()));
        return result.append("|description=").append(
            type.getDescription() == null ? "" : type.getDescription()).toString();
    }

    private void writeTsv(Path path, List<Row> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\taction\ttarget\treplacement\texpected\tproposed\t" +
                "evidence_domains\tconfidence\tevidence\n");
            for (Row row : rows) out.write(bit(row.apply) + "\t" + row.action + "\t" +
                tsv(row.target) + "\t" + tsv(row.replacement) + "\t" +
                tsv(row.expected) + "\t" + tsv(row.proposed) + "\t" +
                tsv(row.domains) + "\t" + row.confidence + "\t" +
                tsv(row.evidence) + "\n");
        }
    }

    private void writeJsonl(Path path, List<Row> rows) throws Exception {
        List<String> lines = new ArrayList<>();
        for (Row row : rows) lines.add("{\"apply\":" + row.apply +
            ",\"action\":" + q(row.action) + ",\"target\":" + q(row.target) +
            ",\"replacement\":" + q(row.replacement) +
            ",\"evidence_domains\":" + q(row.domains) +
            ",\"confidence\":" + q(row.confidence) +
            ",\"evidence\":" + q(row.evidence) + "}");
        Files.write(path, lines, StandardCharsets.UTF_8);
    }

    private void writeSummary(Path path, List<Row> rows) throws Exception {
        Map<String, Long> actions = new LinkedHashMap<>();
        for (Row row : rows) actions.merge(row.action, 1L, Long::sum);
        Files.write(path, List.of(
            "program=" + currentProgram.getName(),
            "proposals=" + rows.size(),
            "auto_apply=" + rows.stream().filter(row -> row.apply).count(),
            "actions=" + actions,
            "note=no executable address, enum value, or stack offset is seeded by this pass",
            "note=types are structural consequences of independently observed families"),
            StandardCharsets.UTF_8);
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
    private static String addr(Address address) {
        return address == null ? "" : address.toString().toUpperCase(Locale.ROOT);
    }
    private static String bit(boolean value) { return value ? "1" : "0"; }
    private static String text(String value) { return value == null ? "" : value; }
    private static String tsv(String value) {
        return value == null ? "" : value.replace("\\", "\\\\").replace("\t", "\\t")
            .replace("\r", "\\r").replace("\n", "\\n");
    }
    private static String q(String value) {
        return "\"" + (value == null ? "" : value).replace("\\", "\\\\")
            .replace("\"", "\\\"").replace("\r", "\\r").replace("\n", "\\n") + "\"";
    }

    private static class FamilyEvidence {
        int functions;
        final Set<Integer> offsets = new TreeSet<>();
        final Set<String> operations = new TreeSet<>();
        final Set<String> names = new TreeSet<>();
        final Set<String> identityDomains = new TreeSet<>();
        boolean strong(int minimumFunctions, int minimumOffsets) {
            return functions >= minimumFunctions && offsets.size() >= minimumOffsets &&
                !operations.isEmpty();
        }
        String domains() {
            List<String> domains = new ArrayList<>(identityDomains);
            if (identityDomains.isEmpty() && !names.isEmpty())
                domains.add("named_family");
            if (!offsets.isEmpty()) domains.add("field_offsets");
            if (!operations.isEmpty()) domains.add("instruction_semantics");
            return String.join("|", domains);
        }
        String detail() {
            return "functions=" + functions + "; offsets=" + offsets +
                "; identity=" + identityDomains + "; operations=" + operations +
                "; examples=" +
                names.stream().limit(8).toList();
        }
    }

    private record MergeCompatibility(boolean compatible, int fields,
            int genericUpgrades, int nameDisagreements, String reason) {
        static MergeCompatibility blocked(String reason) {
            return new MergeCompatibility(false, 0, 0, 0, reason);
        }
    }
    private record Row(boolean apply, String action, String target, String replacement,
        String expected, String proposed, String domains, String confidence, String evidence) { }
}
