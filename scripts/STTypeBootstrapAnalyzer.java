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
import java.util.HashMap;
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
import ghidra.program.model.data.Enum;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.Structure;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.FunctionTag;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.SourceType;

public class STTypeBootstrapAnalyzer extends GhidraScript {
    private static final String ROOT = "/SubmarineTitans/Recovered";
    private static final String RECORDS = ROOT + "/GlobalRecords";
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

        FamilyEvidence controls = namedFamilyEvidence(
            Set.of("SetCtrlCmd", "CmdToPlsObj"), Set.of("RET", "CALL"));
        rows.add(typeRow("ensure_control_command", ROOT + "/STControlCommand", "",
            strongControl(controls), controls.domains(), controls.detail()));

        FamilyEvidence temporary = namedFamilyEvidence(Set.of(
            "AddObjToTmp", "AddObjToTmp2", "DelObjFromTmps", "ResetActivityFromTmp",
            "SaveTmp", "RestoreTmp"), Set.of("CALL", "MOV"));
        rows.add(typeRow("ensure_player_temp", RECORDS + "/STPlayerTempSlot", "",
            strongTemporarySlot(temporary), temporary.domains(), temporary.detail()));

        int grids = spatialDescriptorCandidates();
        rows.add(typeRow("ensure_spatial_descriptors", RECORDS + "/STSpatialGrid16", "",
            grids >= 2, "global_writes|repeated_descriptor_geometry",
            "descriptor_candidates=" + grids +
                "; required layout is four adjacent 16-bit bounds followed by a pointer"));

        int systemMethods = methodFamilyCount("SystemClassTy");
        DataType canonicalSystem = currentProgram.getDataTypeManager().getDataType("/SystemClassTy");
        DataType duplicateSystem = currentProgram.getDataTypeManager().getDataType(
            ROOT + "/SystemClassTy");
        rows.add(typeRow("canonical_system", "/SystemClassTy", "",
            canonicalSystem instanceof Structure && systemMethods >= 4,
            "class_namespace|method_family|vtable_family",
            "named_methods=" + systemMethods + "; canonical_type=" +
                (canonicalSystem == null ? "missing" : canonicalSystem.getPathName())));
        if (canonicalSystem instanceof Structure canonical &&
                duplicateSystem instanceof Structure duplicate) {
            boolean compatible = canonical.isEquivalent(duplicate);
            rows.add(typeRow("replace_duplicate", duplicate.getPathName(),
                canonical.getPathName(), compatible,
                "canonical_class_identity|equivalent_layout",
                "duplicate_length=" + duplicate.getLength() +
                    "; canonical_length=" + canonical.getLength()));
        }

        Enum legacyOrder = enumAt(ROOT + "/Enums/STGroupBoatOrderType");
        Enum derivedOrder = equivalentDerivedEnum(legacyOrder);
        if (legacyOrder != null && derivedOrder != null) {
            rows.add(typeRow("replace_duplicate", legacyOrder.getPathName(),
                derivedOrder.getPathName(), true,
                "switch_domain|exact_enum_value_set",
                "derived enum " + derivedOrder.getPathName() +
                    " has the exact discriminator domain"));
        }

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
        addSignatureProvenance(rows, messages, controls, darray);

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
                    !function.getName(true).toLowerCase(Locale.ROOT).contains("darray")) continue;
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

    private boolean strongDArray(FamilyEvidence evidence) {
        return evidence.functions >= 5 && evidence.offsets.size() >= 6 &&
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

    private FamilyEvidence namedFamilyEvidence(Set<String> leaves, Set<String> operations) {
        FamilyEvidence result = new FamilyEvidence();
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            Function function = functions.next();
            if (function.isExternal() || function.isThunk() ||
                    !leaves.contains(function.getName())) continue;
            result.functions++;
            result.names.add(function.getName(true));
            InstructionIterator instructions = currentProgram.getListing()
                .getInstructions(function.getBody(), true);
            while (instructions.hasNext()) {
                Instruction instruction = instructions.next();
                String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
                Matcher offsets = OFFSET.matcher(instruction.toString());
                while (offsets.find()) {
                    try {
                        int offset = Integer.parseInt(offsets.group(1), 16);
                        if (offset >= 0 && offset <= 0x100) result.offsets.add(offset);
                    }
                    catch (NumberFormatException ignored) { }
                }
                if (operations.contains(mnemonic) ||
                        operations.contains("RET") && mnemonic.startsWith("RET"))
                    result.operations.add(mnemonic.startsWith("RET") ? "ret" :
                        mnemonic.toLowerCase(Locale.ROOT));
            }
        }
        return result;
    }

    private boolean strongControl(FamilyEvidence evidence) {
        return evidence.functions >= 2 && evidence.offsets.size() >= 4 &&
            evidence.offsets.stream().mapToInt(Integer::intValue).max().orElse(0) >= 0x18;
    }

    private boolean strongTemporarySlot(FamilyEvidence evidence) {
        return evidence.functions >= 4 && evidence.offsets.size() >= 3 &&
            evidence.offsets.stream().mapToInt(Integer::intValue).max().orElse(0) >= 0xa;
    }

    private int spatialDescriptorCandidates() {
        Map<Address, Map<Address, Set<Integer>>> writes = new HashMap<>();
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            Function function = functions.next();
            if (function.isExternal() || function.isThunk()) continue;
            InstructionIterator instructions = currentProgram.getListing()
                .getInstructions(function.getBody(), true);
            while (instructions.hasNext()) {
                Instruction instruction = instructions.next();
                String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
                if (!Set.of("MOV", "MOVZX", "MOVSX").contains(mnemonic)) continue;
                for (Reference reference : instruction.getReferencesFrom()) {
                    Address target = reference.getToAddress();
                    if (target == null || !currentProgram.getMemory().contains(target)) continue;
                    for (int offset : new int[] { 0, 2, 4, 6, 8 }) {
                        Address base;
                        try { base = target.subtract(offset); }
                        catch (Exception ignored) { continue; }
                        writes.computeIfAbsent(base, unused -> new HashMap<>())
                            .computeIfAbsent(function.getEntryPoint(), unused -> new TreeSet<>())
                            .add(offset);
                    }
                }
            }
        }
        int result = 0;
        for (Map<Address, Set<Integer>> byFunction : writes.values()) {
            boolean complete = byFunction.values().stream()
                .anyMatch(offsets -> offsets.containsAll(Set.of(0, 2, 4, 6, 8)));
            if (complete) result++;
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

    private Enum enumAt(String path) {
        DataType type = currentProgram.getDataTypeManager().getDataType(path);
        return type instanceof Enum value ? value : null;
    }

    private boolean semanticBootstrapType(DataType type) {
        return Set.of("DArrayTy", "STMessage", "STMessageId", "STControlCommand",
            "STPlayerTempSlot", "STWorldCell", "STWorldGrid", "STSpatialGrid16",
            "SystemClassTy").contains(type.getName());
    }

    private boolean legacyProjection(String description) {
        if (description == null) return false;
        String value = description.toLowerCase(Locale.ROOT);
        return value.contains("[strecoveredtypesapplier]") ||
            value.contains("discriminator") || value.contains("payload") ||
            value.contains("packed command") || value.contains("addressable view") ||
            value.contains("world/grid coordinates");
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

    private Enum equivalentDerivedEnum(Enum legacy) {
        if (legacy == null) return null;
        Iterator<DataType> iterator = currentProgram.getDataTypeManager().getAllDataTypes();
        while (iterator.hasNext()) {
            DataType type = iterator.next();
            if (!(type instanceof Enum candidate) || candidate.equals(legacy) ||
                    !candidate.getPathName().contains("/Recovered/Enums/")) continue;
            if (candidate.getLength() != legacy.getLength()) continue;
            Set<Long> left = enumValues(legacy), right = enumValues(candidate);
            if (left.size() >= 3 && left.equals(right)) return candidate;
        }
        return null;
    }

    private Set<Long> enumValues(Enum value) {
        Set<Long> result = new TreeSet<>();
        for (String name : value.getNames()) result.add(value.getValue(name));
        return result;
    }

    private void addSignatureProvenance(List<Row> rows, FamilyEvidence messages,
            FamilyEvidence controls, FamilyEvidence darray) {
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            Function function = functions.next();
            if (function.getSignatureSource() != SourceType.USER_DEFINED ||
                    hasImportedTag(function)) continue;
            String reason = "";
            String leaf = function.getName();
            if ("GetMessage".equals(leaf) && messages.strong(5, 3))
                reason = "named GetMessage family + RET 4 + envelope offsets";
            else if (Set.of("SetCtrlCmd", "CmdToPlsObj").contains(leaf) &&
                    strongControl(controls))
                reason = "paired control-command producer/consumer family";
            else if (function.getName(true).toLowerCase(Locale.ROOT).contains("darray") &&
                    strongDArray(darray))
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
        return function.getSymbol().getSource() == SourceType.IMPORTED;
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
                .append(component.getDataType().getPathName());
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
        boolean strong(int minimumFunctions, int minimumOffsets) {
            return functions >= minimumFunctions && offsets.size() >= minimumOffsets &&
                !operations.isEmpty();
        }
        String domains() {
            List<String> domains = new ArrayList<>();
            if (!names.isEmpty()) domains.add("named_family");
            if (!offsets.isEmpty()) domains.add("field_offsets");
            if (!operations.isEmpty()) domains.add("instruction_semantics");
            return String.join("|", domains);
        }
        String detail() {
            return "functions=" + functions + "; offsets=" + offsets +
                "; operations=" + operations + "; examples=" +
                names.stream().limit(8).toList();
        }
    }
    private record Row(boolean apply, String action, String target, String replacement,
        String expected, String proposed, String domains, String confidence, String evidence) { }
}
