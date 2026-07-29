// Recover structure types for raw fixed-offset pointer dereferences.
// Read-only: emits pointer_shape_{type,field,target}_proposals.tsv and diagnostics.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Analyze Pointer Shapes

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.security.MessageDigest;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Set;
import java.util.TreeMap;
import java.util.TreeSet;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeComponent;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.Array;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.PointerDataType;
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.TypeDef;
import ghidra.program.model.data.Undefined;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.FunctionTag;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.listing.Variable;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.Symbol;

public class STPointerShapeAnalyzer extends GhidraScript {
    private static final int DECOMPILE_TIMEOUT = 30;
    private static final int MAX_SHAPE_SIZE = 0x4000;
    private static final String DARRAY_PATH = "/SubmarineTitans/Recovered/DArrayTy";
    private static final String PLAYER_TEMP_SLOT_PATH =
        "/SubmarineTitans/Recovered/GlobalRecords/STPlayerTempSlot";
    private static final long PLAYER_RUNTIME_BASE = 0x007f4e20L;
    private static final int TEMP_GROUP_0_OFFSET = 0x0163;
    private static final int TEMP_GROUP_1_OFFSET = 0x01b3;
    private static final int TEMP_GROUP_LENGTH = 0x50;
    private static final int TEMP_SLOT_LENGTH = 0x10;
    private static final int TEMP_OBJECT_IDS_OFFSET = 0x0a;
    private static final String ANON_ROOT = "/SubmarineTitans/Recovered/PointerShapes/";
    private static final String APPLIER_MARKER = "[STPointerShapeApplier]";
    private static final Set<String> POINTER_OWNER_MARKERS = Set.of(
        APPLIER_MARKER, "[STTypeFamilyApplier]", "[STGlobalDataApplier]");
    private static final Set<Long> DARRAY_FIRST_ARGUMENT = Set.of(
        0x006acc70L, // indexed get
        0x006ae110L, // destroy
        0x006ae140L, // put
        0x006ae1c0L, // append
        0x006b0c70L  // erase
    );

    // Examples covered:
    //   *(uint *)(local_20 + 0xc)
    //   *(undefined4 *)((int)DAT_00802a38 + 0xe4)
    // The first group is the loaded/stored value type, not the base-pointer type.
    private static final Pattern RAW_ACCESS = Pattern.compile(
        "\\*\\s*\\(\\s*([^()\\r\\n]{1,80}?)\\s*\\*\\s*\\)\\s*" +
        "\\(\\s*(?:\\(\\s*[^()\\r\\n]{1,40}\\s*\\)\\s*)?" +
        "([A-Za-z_$][A-Za-z0-9_$:]*)\\s*\\+\\s*" +
        "(0[xX][0-9A-Fa-f]+|[0-9]+)\\s*\\)");
    private static final Pattern RAW_INDEXED_ACCESS = Pattern.compile(
        "\\*\\s*\\(\\s*([^()\\r\\n]{1,80}?)\\s*\\*\\s*\\)\\s*" +
        "\\(\\s*(?:\\(\\s*[^()\\r\\n]{1,40}\\s*\\)\\s*)?" +
        "([A-Za-z_$][A-Za-z0-9_$:]*)\\s*\\+\\s*" +
        "(0[xX][0-9A-Fa-f]+|[0-9]+)\\s*\\+\\s*" +
        "([^;\\r\\n]{1,240}?)\\s*\\*\\s*" +
        "(0[xX][0-9A-Fa-f]+|[0-9]+)\\s*\\)");
    private static final Pattern NESTED_ACCESS = Pattern.compile(
        "\\*\\s*\\(\\s*([^()\\r\\n]{1,80}?)\\s*\\*\\s*\\)\\s*" +
        "\\(\\s*\\*\\s*\\(\\s*([^()\\r\\n]{1,80}?)\\s*\\*\\s*\\)\\s*" +
        "\\(\\s*(?:\\(\\s*[^()\\r\\n]{1,40}\\s*\\)\\s*)?" +
        "([A-Za-z_$][A-Za-z0-9_$:]*)\\s*\\+\\s*" +
        "(0[xX][0-9A-Fa-f]+|[0-9]+)\\s*\\)\\s*\\+\\s*" +
        "(0[xX][0-9A-Fa-f]+|[0-9]+)\\s*\\)");
    private static final Pattern NESTED_ZERO_ACCESS = Pattern.compile(
        "\\*\\s*\\*\\s*\\(\\s*([^()\\r\\n]{1,80}?)\\s*\\*\\s*\\*\\s*\\)\\s*" +
        "\\(\\s*(?:\\(\\s*[^()\\r\\n]{1,40}\\s*\\)\\s*)?" +
        "([A-Za-z_$][A-Za-z0-9_$:]*)\\s*\\+\\s*" +
        "(0[xX][0-9A-Fa-f]+|[0-9]+)\\s*\\)");
    private static final Pattern NESTED_INDEX_ACCESS = Pattern.compile(
        "\\(\\s*\\*\\s*\\(\\s*([^()\\r\\n]{1,80}?)\\s*\\*\\s*\\*\\s*\\)\\s*" +
        "\\(\\s*(?:\\(\\s*[^()\\r\\n]{1,40}\\s*\\)\\s*)?" +
        "([A-Za-z_$][A-Za-z0-9_$:]*)\\s*\\+\\s*" +
        "(0[xX][0-9A-Fa-f]+|[0-9]+)\\s*\\)\\s*\\)\\s*" +
        "\\[\\s*(0[xX][0-9A-Fa-f]+|[0-9]+)\\s*\\]");
    private static final Pattern TYPED_INDEXED_POINTER = Pattern.compile(
        "^\\*\\s*\\(\\s*([^()\\r\\n]{1,80}?\\*\\s*\\*)\\s*\\)\\s*" +
        "\\(\\s*([A-Za-z_$][A-Za-z0-9_$:]*)\\s*->\\s*" +
        "(?:field|entries)_(?:0[xX])?([0-9A-Fa-f]+)\\s*\\+\\s*" +
        "[^()\\r\\n]{1,180}\\s*\\)$");
    private static final Pattern TYPED_MEMBER_INDEX = Pattern.compile(
        "^([A-Za-z_$][A-Za-z0-9_$:]*)\\s*->\\s*" +
        "([A-Za-z_$][A-Za-z0-9_$:]*)\\s*\\[[^\\]\\r\\n]+\\]$");
    private static final Pattern FORWARD_COUNT_BOUND = Pattern.compile(
        "(?<![A-Za-z0-9_$:])([A-Za-z_$][A-Za-z0-9_$:]*)\\s*<\\s*" +
        "([A-Za-z_$][A-Za-z0-9_$:]*)\\s*->\\s*" +
        "(field_(?:0[xX])?[0-9A-Fa-f]+|entryCount)\\b");
    private static final Pattern REVERSE_COUNT_BOUND = Pattern.compile(
        "(?<![A-Za-z0-9_$:])([A-Za-z_$][A-Za-z0-9_$:]*)\\s*->\\s*" +
        "(field_(?:0[xX])?[0-9A-Fa-f]+|entryCount)\\s*>\\s*" +
        "([A-Za-z_$][A-Za-z0-9_$:]*)\\b");
    private static final Pattern CONSTANT_INDEX = Pattern.compile(
        "(?<![A-Za-z0-9_$:])([A-Za-z_$][A-Za-z0-9_$:]*)\\s*" +
        "\\[\\s*(0[xX][0-9A-Fa-f]+|[0-9]+)\\s*\\]");
    private static final Pattern CALL_HEAD = Pattern.compile(
        "(?<![A-Za-z0-9_$:])([A-Za-z_$][A-Za-z0-9_$:]*)\\s*\\(");
    private static final Pattern FIELD_ARGUMENT_ACCESS = Pattern.compile(
        "(?<![A-Za-z0-9_$:])([A-Za-z_$][A-Za-z0-9_$:]*)\\s*->\\s*" +
        "([A-Za-z_$][A-Za-z0-9_$:]*)(?:\\s*\\[[^\\]\\r\\n]+\\])?");
    private static final Pattern SIMPLE_SWITCH = Pattern.compile(
        "\\bswitch\\s*\\(\\s*([A-Za-z_$][A-Za-z0-9_$:]*)\\s*\\)");
    private static final Pattern CASE_LABEL = Pattern.compile("(?m)^\\s*case\\s+[^:]+:");
    private static final Pattern ASSIGNMENT = Pattern.compile(
        "(?m)^\\s*([A-Za-z_$][A-Za-z0-9_$]*)\\s*=\\s*([^;\\r\\n]{1,500});");
    private static final Pattern DIRECT_THIS_SPILL = Pattern.compile(
        "(?m)^\\s*([A-Za-z_$][A-Za-z0-9_$]*)\\s*=\\s*" +
        "(?:\\(\\s*[A-Za-z_$][A-Za-z0-9_$:]*\\s*\\*\\s*\\)\\s*)?this\\s*;");
    private static final Pattern TYPED_DARRAY_BASE = Pattern.compile(
        "(?<![A-Za-z0-9_$:])([A-Za-z_$][A-Za-z0-9_$:]*)\\s*->\\s*" +
        "field_(?:0[xX])?0*8\\b");
    private static final Pattern HEX_CONSTANT = Pattern.compile("0[xX]([0-9A-Fa-f]+)");
    private static final Pattern PLAYER_STRIDE_TERM = Pattern.compile(
        "(?i)(?:0x0*a62|2658)\\b");
    private static final Pattern SIMPLE_IDENTIFIER = Pattern.compile(
        "[A-Za-z_$][A-Za-z0-9_$]*");
    private static final Pattern LOCAL_STRUCTURE_DECLARATION = Pattern.compile(
        "(?m)^\\s*([A-Za-z_$][A-Za-z0-9_$:]*)\\s+" +
        "([A-Za-z_$][A-Za-z0-9_$]*)\\s*;");
    private static final Pattern PIECE_ASSIGNMENT = Pattern.compile(
        "(?m)^\\s*([A-Za-z_$][A-Za-z0-9_$]*)\\._([0-9]+)_([0-9]+)_\\s*=\\s*" +
        "([^;\\r\\n]+);");
    private static final Pattern FIELD_ASSIGNMENT = Pattern.compile(
        "(?m)^\\s*([A-Za-z_$][A-Za-z0-9_$]*)\\.field_(?:0[xX])?" +
        "([0-9A-Fa-f]+)\\s*=\\s*([^;\\r\\n]+);");
    private static final Pattern LEADING_CAST = Pattern.compile(
        "^\\(\\s*([^()\\r\\n]{1,80})\\s*\\)\\s*(.+)$");

    private final Map<String, TargetEvidence> targets = new LinkedHashMap<>();
    private final Map<String, Map<Long, FieldEvidence>> anonymousValueFields =
        new LinkedHashMap<>();
    private final List<Failure> failures = new ArrayList<>();
    private final List<Structure> structures = new ArrayList<>();
    private final Set<Address> unsettledFunctions = new HashSet<>();
    private DecompInterface decompiler;
    private DataTypeManager dataTypes;
    private int functionsSeen;
    private int functionsWithRawAccess;
    private int rawAccesses;
    private int nestedPointerAccesses;
    private int pointerFieldAliases;
    private int redirectedAliasAccesses;
    private int globalRecordTypeHints;
    private int ownerThisSpillRepairs;
    private int typedFieldConsumerHints;

    @Override
    protected void run() throws Exception {
        // Read-only script: do not leave GhidraScript's implicit transaction around runScript().
        end(true);
        if (currentProgram == null) {
            printerr("Open the analyzed ST program first.");
            return;
        }
        File selected = outputDirectory();
        if (selected == null) return;
        Path directory = programDirectory(selected);
        Files.createDirectories(directory);

        dataTypes = currentProgram.getDataTypeManager();
        Iterator<Structure> allStructures = dataTypes.getAllStructures();
        while (allStructures.hasNext()) structures.add(allStructures.next());
        decompiler = new DecompInterface();
        decompiler.toggleCCode(true);
        decompiler.toggleSyntaxTree(true);
        if (!decompiler.openProgram(currentProgram))
            throw new IllegalStateException("Decompiler could not open the current program");

        Address only = onlyFunction();
        try {
            if (only != null) {
                Function function = currentProgram.getFunctionManager().getFunctionAt(only);
                if (function == null) throw new IllegalArgumentException(
                    "No function at " + addr(only));
                analyzeFunction(function);
            }
            else {
                FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
                while (functions.hasNext()) {
                    monitor.checkCancelled();
                    analyzeFunction(functions.next());
                }
            }
        }
        finally {
            decompiler.dispose();
        }

        Analysis analysis = makeProposals();
        writeTypes(directory.resolve("pointer_shape_type_proposals.tsv"), analysis.types);
        writeFields(directory.resolve("pointer_shape_field_proposals.tsv"), analysis.fields);
        writeTargets(directory.resolve("pointer_shape_target_proposals.tsv"), analysis.targets);
        writeFailures(directory.resolve("pointer_shape_decompile_failures.tsv"));
        writeSummary(directory.resolve("pointer_shape_summary.txt"), analysis);

        println("Pointer-shape analysis complete: " + directory.toAbsolutePath().normalize());
        println("Functions=" + functionsSeen + ", raw functions=" + functionsWithRawAccess +
            ", raw accesses=" + rawAccesses + ", nested=" + nestedPointerAccesses +
            ", pointer aliases=" + pointerFieldAliases + ", alias accesses=" +
            redirectedAliasAccesses + ", global-record hints=" +
            globalRecordTypeHints + ", owner-this spill repairs=" +
            ownerThisSpillRepairs + ", typed-field consumers=" +
            typedFieldConsumerHints + ", targets=" + analysis.targets.size() +
            ", target_apply=" + analysis.targets.stream().filter(row -> row.apply).count() +
            ", anonymous_types=" + analysis.types.stream().filter(row -> row.apply).count() +
            ", failures=" + failures.size());
    }

    private void analyzeFunction(Function function) throws Exception {
        if (function == null || function.isExternal() || function.isThunk() || isLibrary(function))
            return;
        functionsSeen++;
        DecompileResults result = decompiler.decompileFunction(function, DECOMPILE_TIMEOUT, monitor);
        if (!result.decompileCompleted() || result.getDecompiledFunction() == null) {
            failures.add(new Failure(function, result == null ? "no result" :
                result.getErrorMessage()));
            return;
        }
        String c = result.getDecompiledFunction().getC();
        if (c.contains("Type propagation algorithm not settling"))
            unsettledFunctions.add(function.getEntryPoint());
        Map<String, Variable> locals = localVariables(function);
        collectAnonymousValueFields(function, c, locals);
        Set<String> stableStorages = stableStorages(locals);
        Map<String, TargetEvidence> functionTargets = new LinkedHashMap<>();
        int ownerSpillHints = collectOwnerThisSpills(function, c, locals,
            stableStorages, functionTargets);
        collectNestedAccesses(function, c, locals, stableStorages, functionTargets);
        Map<String, PointerAlias> aliases = collectPointerAliases(function, c, locals,
            stableStorages, functionTargets);
        collectCountedPointerTableRoles(function, c, locals, stableStorages,
            functionTargets);
        collectRawIndexedAccesses(function, c, locals, stableStorages, functionTargets);
        Matcher matcher = RAW_ACCESS.matcher(c);
        int before = rawAccesses;
        while (matcher.find()) {
            monitor.checkCancelled();
            String valueType = matcher.group(1).trim();
            String name = matcher.group(2);
            long offset = parseUnsigned(matcher.group(3));
            if (offset < 0 || offset >= MAX_SHAPE_SIZE || name.equals("this") ||
                    name.startsWith("this_")) continue;
            int width = accessWidth(valueType);
            if (width < 1 || width > 16 || offset + width > MAX_SHAPE_SIZE) continue;
            PointerAlias alias = aliases.get(name);
            if (alias != null) {
                long scaled = alias.childBaseOffset +
                    (integerCastBefore(matcher.group(), name) ? offset :
                        offset * alias.elementWidth);
                recordNestedField(function, alias.parent, alias.parentOffset, scaled,
                    width, valueTypeSpecification(valueType, width),
                    name + "+0x" + Long.toHexString(offset).toUpperCase(Locale.ROOT) +
                    " through pointer-field alias");
                redirectedAliasAccesses++;
            }
            else {
                TargetEvidence canonical = canonicalTarget(function, locals, stableStorages,
                    functionTargets, name);
                if (canonical == null) continue;
                recordField(function, canonical, offset, width,
                    valueTypeSpecification(valueType, width), name + "+0x" +
                    Long.toHexString(offset).toUpperCase(Locale.ROOT));
            }
            rawAccesses++;
        }
        collectAliasIndexes(function, c, aliases);
        collectTypedDArrayTargets(function, c, locals, stableStorages, functionTargets);
        collectDArrayEvidence(c, functionTargets, aliases);
        boolean hasRawAccess = rawAccesses != before;
        if (hasRawAccess) functionsWithRawAccess++;
        int recordHints = collectGlobalRecordTypeEvidence(function, c, locals,
            stableStorages, functionTargets);
        globalRecordTypeHints += recordHints;
        if (!hasRawAccess && recordHints == 0 && ownerSpillHints == 0) return;
        // A typed helper call can identify sibling locals that are not themselves
        // dereferenced in this particular function (for example, three DArray
        // pointers unpacked from one 12-byte element). Keep them ephemeral until
        // call evidence actually reaches them so the output is not flooded.
        for (Map.Entry<String, Variable> entry : locals.entrySet()) {
            if (functionTargets.containsKey(entry.getKey())) continue;
            TargetEvidence potential = target(function, entry.getValue(), entry.getKey(),
                stableStorages);
            if (potential != null) functionTargets.put(entry.getKey(), potential);
        }
        markDiscriminatedPayloads(function, c, locals, stableStorages, functionTargets);
        collectCallEvidence(function, c, locals, stableStorages, functionTargets);
        for (TargetEvidence target : functionTargets.values()) {
            if (target.typeEvidence.isEmpty() || targets.containsKey(target.key)) continue;
            targets.put(target.key, target);
        }
    }

    /**
     * Repair a persistent local that an earlier pointer-shape pass typed as a base
     * class solely because it was passed to a base implementation.  A direct
     * assignment from this has no base adjustment, so inside a named method its
     * most-derived owner is the safer persistent type.  The call expression can
     * still apply the ordinary implicit base-pointer conversion.
     *
     * This is deliberately restricted to script-owned locals.  User/imported
     * types, anonymous owners, adjusted multiple-inheritance pointers and
     * transient decompiler SSA symbols remain untouched.
     */
    private int collectOwnerThisSpills(Function function, String c,
            Map<String, Variable> locals, Set<String> stableStorages,
            Map<String, TargetEvidence> functionTargets) {
        String ownerPath = ownerType(function);
        if (ownerPath.isBlank() || ownerPath.contains("/PointerShapes/") ||
                leaf(ownerPath).startsWith("Anon")) return 0;
        DataType ownerType = dataTypes.getDataType(ownerPath);
        if (!(ownerType instanceof Structure owner)) return 0;

        int result = 0;
        Set<String> seen = new HashSet<>();
        Matcher matcher = DIRECT_THIS_SPILL.matcher(c);
        while (matcher.find()) {
            String name = matcher.group(1);
            if (!seen.add(name)) continue;
            Variable local = locals.get(name);
            if (local == null || local instanceof Parameter) continue;
            TargetEvidence target = canonicalTarget(function, locals, stableStorages,
                functionTargets, name);
            if (target == null || !target.scriptOwned || !target.databaseBacked ||
                    target.expectedSource.equals(SourceType.USER_DEFINED.toString()) ||
                    target.expectedSource.equals(SourceType.IMPORTED.toString())) continue;
            Structure current = structureFromPointer(target.expectedType);
            if (current == null || current.getPathName().equals(ownerPath) ||
                    owner.getLength() < current.getLength()) continue;

            target.directThisOwner = ownerPath;
            String specification = "pointer:" + ownerPath;
            target.typeEvidence.merge(specification, 100, Integer::sum);
            target.typeSites.add(addr(function.getEntryPoint()) + " direct this spill " +
                name + " => " + specification);
            result++;
            ownerThisSpillRepairs++;
        }
        return result;
    }

    private void markDiscriminatedPayloads(Function function, String c,
            Map<String, Variable> locals, Set<String> stableStorages,
            Map<String, TargetEvidence> functionTargets) {
        Matcher switchMatcher = SIMPLE_SWITCH.matcher(c);
        Set<String> discriminators = new HashSet<>();
        while (switchMatcher.find()) discriminators.add(switchMatcher.group(1));
        Matcher labels = CASE_LABEL.matcher(c);
        List<Integer> caseStarts = new ArrayList<>();
        while (labels.find()) caseStarts.add(labels.start());
        if (caseStarts.size() < 4 || discriminators.isEmpty()) return;

        for (Parameter parameter : function.getParameters()) {
            String name = parameter.getName();
            if (name == null || name.isBlank() || "this".equals(name) ||
                    discriminators.contains(name)) continue;
            int occurrences = identifierOccurrences(c, name);
            if (occurrences < 6) continue;
            int caseRegions = 0;
            Pattern identifier = Pattern.compile("(?<![A-Za-z0-9_$:])" +
                Pattern.quote(name) + "(?![A-Za-z0-9_$:])");
            for (int index = 0; index < caseStarts.size(); index++) {
                int start = caseStarts.get(index);
                int end = index + 1 < caseStarts.size() ? caseStarts.get(index + 1) : c.length();
                if (identifier.matcher(c.substring(start, end)).find()) caseRegions++;
            }
            if (caseRegions < 3) continue;
            TargetEvidence target = functionTargets.get(name);
            if (target == null) {
                TargetEvidence potential = target(function, locals.get(name), name,
                    stableStorages);
                if (potential == null) continue;
                target = targets.computeIfAbsent(potential.key, ignored -> potential);
                functionTargets.put(name, target);
            }
            target.discriminatedPayload = true;
            target.typeSites.add(addr(function.getEntryPoint()) +
                " switch-discriminated payload: " + name + " is used in " +
                caseRegions + " case regions");
        }
    }

    private int identifierOccurrences(String text, String name) {
        Matcher matcher = Pattern.compile("(?<![A-Za-z0-9_$:])" + Pattern.quote(name) +
            "(?![A-Za-z0-9_$:])").matcher(text);
        int count = 0;
        while (matcher.find()) count++;
        return count;
    }

    private void collectNestedAccesses(Function function, String c,
            Map<String, Variable> locals, Set<String> stableStorages,
            Map<String, TargetEvidence> functionTargets) {
        Matcher nested = NESTED_ACCESS.matcher(c);
        while (nested.find()) {
            String valueType = nested.group(1).trim();
            String name = nested.group(3);
            long parentOffset = parseUnsigned(nested.group(4));
            long childOffset = parseUnsigned(nested.group(5));
            int width = accessWidth(valueType);
            if (!validNestedOffsets(parentOffset, childOffset, width)) continue;
            TargetEvidence parent = canonicalTarget(function, locals, stableStorages,
                functionTargets, name);
            if (parent == null) continue;
            recordNestedField(function, parent, parentOffset, childOffset, width,
                valueTypeSpecification(valueType, width), "nested " + name + "+0x" +
                Long.toHexString(parentOffset).toUpperCase(Locale.ROOT) + " -> +0x" +
                Long.toHexString(childOffset).toUpperCase(Locale.ROOT));
            nestedPointerAccesses++;
        }
        Matcher zero = NESTED_ZERO_ACCESS.matcher(c);
        while (zero.find()) {
            String valueType = zero.group(1).trim();
            String name = zero.group(2);
            long parentOffset = parseUnsigned(zero.group(3));
            int width = accessWidth(valueType);
            if (!validNestedOffsets(parentOffset, 0, width)) continue;
            TargetEvidence parent = canonicalTarget(function, locals, stableStorages,
                functionTargets, name);
            if (parent == null) continue;
            recordNestedField(function, parent, parentOffset, 0, width,
                valueTypeSpecification(valueType, width), "nested-zero " + name + "+0x" +
                Long.toHexString(parentOffset).toUpperCase(Locale.ROOT));
            nestedPointerAccesses++;
        }
        Matcher indexed = NESTED_INDEX_ACCESS.matcher(c);
        while (indexed.find()) {
            String elementType = indexed.group(1).trim();
            String name = indexed.group(2);
            long parentOffset = parseUnsigned(indexed.group(3));
            long index = parseUnsigned(indexed.group(4));
            int width = accessWidth(elementType);
            long childOffset = index * Math.max(1, width);
            if (!validNestedOffsets(parentOffset, childOffset, width)) continue;
            TargetEvidence parent = canonicalTarget(function, locals, stableStorages,
                functionTargets, name);
            if (parent == null) continue;
            recordNestedField(function, parent, parentOffset, childOffset, width,
                valueTypeSpecification(elementType, width), "nested-index " + name +
                "+0x" + Long.toHexString(parentOffset).toUpperCase(Locale.ROOT) +
                "[" + index + "]");
            nestedPointerAccesses++;
        }
    }

    private Map<String, PointerAlias> collectPointerAliases(Function function, String c,
            Map<String, Variable> locals, Set<String> stableStorages,
            Map<String, TargetEvidence> functionTargets) {
        Map<String, PointerAlias> result = new LinkedHashMap<>();
        Matcher assignment = ASSIGNMENT.matcher(c);
        while (assignment.find()) {
            String aliasName = assignment.group(1);
            String expression = assignment.group(2).trim();
            Matcher access = RAW_ACCESS.matcher(expression);
            Matcher typedIndex = TYPED_INDEXED_POINTER.matcher(expression);
            Matcher typedMember = TYPED_MEMBER_INDEX.matcher(expression);
            boolean raw = access.find() && access.start() == 0 &&
                access.end() == expression.length();
            boolean indexedField = !raw && typedIndex.matches();
            boolean indexedMember = !raw && !indexedField && typedMember.matches();
            if (!raw && !indexedField && !indexedMember) continue;
            String loadedType;
            String parentName;
            long parentOffset;
            int pointerDepth = 1;
            TargetEvidence parent = null;
            if (indexedMember) {
                parentName = typedMember.group(1);
                parent = canonicalTarget(function, locals, stableStorages,
                    functionTargets, parentName);
                Structure owner =
                    parent == null ? null : structureFromPointer(parent.expectedType);
                DataTypeComponent member =
                    owner == null ? null : componentNamed(owner, typedMember.group(2));
                if (member == null || pointerDepth(member.getDataType()) < 2) continue;
                parentOffset = member.getOffset();
                DataType selected = untypedef(member.getDataType());
                if (!(selected instanceof Pointer pointer)) continue;
                selected = untypedef(pointer.getDataType());
                loadedType = selected.getDisplayName();
                pointerDepth = 2;
            }
            else if (indexedField) {
                String tableType = typedIndex.group(1).trim();
                int lastStar = tableType.lastIndexOf('*');
                if (lastStar < 0) continue;
                loadedType = tableType.substring(0, lastStar).trim();
                parentName = typedIndex.group(2);
                parentOffset = parseUnsigned("0x" + typedIndex.group(3));
                pointerDepth = 2;
            }
            else {
                loadedType = access.group(1).trim();
                parentName = access.group(2);
                parentOffset = parseUnsigned(access.group(3));
            }
            boolean declaredPointer = loadedType.contains("*");
            if (!declaredPointer && (accessWidth(loadedType) !=
                    currentProgram.getDefaultPointerSize() ||
                    !usedAsDereferenceBase(c, aliasName))) continue;
            int elementWidth = declaredPointer ? pointedElementWidth(loadedType) : 1;
            if (parentOffset < 0 || parentOffset + currentProgram.getDefaultPointerSize() >
                    MAX_SHAPE_SIZE || elementWidth < 1 ||
                    elementWidth > MAX_SHAPE_SIZE) continue;
            if (parent == null)
                parent = canonicalTarget(function, locals, stableStorages,
                    functionTargets, parentName);
            if (parent == null) continue;
            recordPointerField(function, parent, parentOffset,
                "pointer-field alias " + aliasName + " = " + parentName + "+0x" +
                Long.toHexString(parentOffset).toUpperCase(Locale.ROOT) +
                (pointerDepth == 2 ? " through indexed pointer table" : ""));
            NestedEvidence nested = nestedEvidence(parent, parentOffset);
            nested.pointerDepth = Math.max(nested.pointerDepth, pointerDepth);
            PointerAlias previous = result.putIfAbsent(aliasName,
                new PointerAlias(parent, parentOffset, 0, elementWidth,
                    declaredPointer ? loadedType.substring(0,
                        loadedType.lastIndexOf('*')).trim() : "undefined1"));
            if (previous != null && (previous.parent != parent ||
                    previous.parentOffset != parentOffset || previous.elementWidth != elementWidth))
                result.remove(aliasName);
            else pointerFieldAliases++;
        }
        // Propagate through copies/casts of a pointer carrier. This is common when
        // the decompiler splits one source-level pointer into several SSA names.
        for (int pass = 0; pass < 4; pass++) {
            boolean changed = false;
            assignment.reset();
            while (assignment.find()) {
                String aliasName = assignment.group(1);
                if (result.containsKey(aliasName)) continue;
                String sourceName = simpleArgumentName(assignment.group(2));
                PointerAlias source = result.get(sourceName);
                if (source == null || !usedAsDereferenceBase(c, aliasName)) continue;
                result.put(aliasName, source);
                pointerFieldAliases++;
                changed = true;
            }
            if (!changed) break;
        }
        return result;
    }

    private DataTypeComponent componentNamed(Structure structure, String name) {
        if (structure == null || name == null || name.isBlank()) return null;
        DataTypeComponent found = null;
        for (DataTypeComponent component : structure.getDefinedComponents()) {
            if (!name.equals(component.getFieldName())) continue;
            if (found != null) return null;
            found = component;
        }
        return found;
    }

    private int pointerDepth(DataType type) {
        int depth = 0;
        type = untypedef(type);
        while (type instanceof Pointer pointer) {
            depth++;
            type = untypedef(pointer.getDataType());
        }
        return depth;
    }

    private boolean usedAsDereferenceBase(String c, String name) {
        Matcher access = RAW_ACCESS.matcher(c);
        while (access.find()) if (access.group(2).equals(name)) return true;
        if (Pattern.compile("(?<![A-Za-z0-9_$:])" + Pattern.quote(name) +
                "\\s*\\[").matcher(c).find()) return true;
        return Pattern.compile("(?<![A-Za-z0-9_$:])\\*\\s*" + Pattern.quote(name) +
            "\\b").matcher(c).find();
    }

    private void collectDArrayEvidence(String c,
            Map<String, TargetEvidence> functionTargets, Map<String, PointerAlias> aliases) {
        for (Map.Entry<String, TargetEvidence> entry : functionTargets.entrySet()) {
            if (looksLikeDArrayIndex(c, entry.getKey())) entry.getValue().dArrayIndexEvidence++;
        }
        for (Map.Entry<String, PointerAlias> entry : aliases.entrySet()) {
            if (!looksLikeDArrayIndex(c, entry.getKey())) continue;
            PointerAlias alias = entry.getValue();
            NestedEvidence nested = alias.parent.nested.computeIfAbsent(alias.parentOffset,
                NestedEvidence::new);
            nested.dArrayIndexEvidence++;
        }
    }

    private void collectTypedDArrayTargets(Function function, String c,
            Map<String, Variable> locals, Set<String> stableStorages,
            Map<String, TargetEvidence> functionTargets) {
        Matcher matcher = TYPED_DARRAY_BASE.matcher(c);
        Set<String> seen = new HashSet<>();
        while (matcher.find()) {
            String name = matcher.group(1);
            if (!seen.add(name) || !looksLikeDArrayIndex(c, name)) continue;
            TargetEvidence target = canonicalTarget(function, locals, stableStorages,
                functionTargets, name);
            if (target == null) continue;
            recordField(function, target, 8, 4, "/dword",
                name + " typed field_0008 DArray element-size role");
            recordField(function, target, 0x1c, 4, "pointer:/void",
                name + " typed field_001C DArray data role");
            if (Pattern.compile("(?<![A-Za-z0-9_$:])" + Pattern.quote(name) +
                    "\\s*->\\s*field_(?:0[xX])?0*[cC]\\b").matcher(c).find())
                recordField(function, target, 0x0c, 4, "/dword",
                    name + " typed field_000C DArray count role");
            target.dArrayIndexEvidence++;
        }
    }

    private boolean looksLikeDArrayIndex(String c, String name) {
        String n = Pattern.quote(name);
        String size = "\\*\\s*\\(\\s*(?:u?int|undefined4)\\s*\\*\\s*\\)\\s*" +
            "\\(\\s*(?:\\(\\s*int\\s*\\)\\s*)?" + n +
            "\\s*\\+\\s*(?:8|0[xX]0*8)\\s*\\)";
        String data = "\\*\\s*\\(\\s*(?:u?int|undefined4)\\s*\\*\\s*\\)\\s*" +
            "\\(\\s*(?:\\(\\s*int\\s*\\)\\s*)?" + n +
            "\\s*\\+\\s*(?:28|0[xX]0*1[cC])\\s*\\)";
        String typedSize = n + "\\s*->\\s*field_(?:0[xX])?0*8\\b";
        String typedData = n + "\\s*->\\s*field_(?:0[xX])?0*1[cC]\\b";
        return Pattern.compile(size + "[^;\\r\\n]{0,160}\\+[^;\\r\\n]{0,80}" + data)
            .matcher(c).find() ||
            Pattern.compile(data + "[^;\\r\\n]{0,160}\\+[^;\\r\\n]{0,80}" + size)
                .matcher(c).find() ||
            Pattern.compile(typedSize + "[^;]{0,320}\\+[^;]{0,160}" + typedData)
                .matcher(c).find() ||
            Pattern.compile(typedData + "[^;]{0,320}\\+[^;]{0,160}" + typedSize)
                .matcher(c).find();
    }

    private void collectAliasIndexes(Function function, String c,
            Map<String, PointerAlias> aliases) {
        Matcher index = CONSTANT_INDEX.matcher(c);
        while (index.find()) {
            PointerAlias alias = aliases.get(index.group(1));
            if (alias == null) continue;
            long item = parseUnsigned(index.group(2));
            long offset = alias.childBaseOffset + item * alias.elementWidth;
            if (!validNestedOffsets(alias.parentOffset, offset, alias.elementWidth)) continue;
            recordNestedField(function, alias.parent, alias.parentOffset, offset,
                alias.elementWidth, valueTypeSpecification(alias.elementType,
                    alias.elementWidth), index.group(1) + "[" + item +
                    "] through pointer-field alias");
            redirectedAliasAccesses++;
        }
        for (Map.Entry<String, PointerAlias> entry : aliases.entrySet()) {
            Pattern dereference = Pattern.compile("(?<![A-Za-z0-9_$:])\\*\\s*" +
                Pattern.quote(entry.getKey()) + "\\b");
            Matcher matcher = dereference.matcher(c);
            while (matcher.find()) {
                PointerAlias alias = entry.getValue();
                recordNestedField(function, alias.parent, alias.parentOffset,
                    alias.childBaseOffset,
                    alias.elementWidth, valueTypeSpecification(alias.elementType,
                        alias.elementWidth), "*" + entry.getKey() +
                        " through pointer-field alias");
                redirectedAliasAccesses++;
            }
            String aliasName = Pattern.quote(entry.getKey());
            Pattern bitMaskUse = Pattern.compile(
                "(?<![A-Za-z0-9_$:])\\*\\s*" + aliasName +
                "\\s*(?:[&|^]=|[&|^]\\s*(?:0[xX][0-9a-fA-F]+|\\d+))");
            if (bitMaskUse.matcher(c).find()) {
                PointerAlias alias = entry.getValue();
                NestedEvidence nested = nestedEvidence(alias.parent, alias.parentOffset);
                FieldEvidence field = nested.fields.computeIfAbsent(
                    alias.childBaseOffset, FieldEvidence::new);
                field.roles.merge("flags", 1, Integer::sum);
                field.sites.add(addr(function.getEntryPoint()) + " " +
                    entry.getKey() + " first member used with a bit mask");
            }
        }
    }

    /**
     * A strict upper-bound check followed by an indexed pointer-table load is
     * class- and library-independent evidence for the two container roles:
     *
     *   if (index < context->field_01A0)
     *       entry = context->entries_01B0[index];
     *
     * The names intentionally stay generic.  They express the proven relation
     * without guessing whether the source called the selected value a sprite,
     * surface, resource, object, or handle.
     */
    private void collectCountedPointerTableRoles(Function function, String c,
            Map<String, Variable> locals, Set<String> stableStorages,
            Map<String, TargetEvidence> functionTargets) {
        Matcher forward = FORWARD_COUNT_BOUND.matcher(c);
        while (forward.find())
            collectCountedPointerTableRole(function, c, forward.end(),
                forward.group(2), forward.group(1),
                forward.group(3), locals, stableStorages,
                functionTargets);

        Matcher reverse = REVERSE_COUNT_BOUND.matcher(c);
        while (reverse.find())
            collectCountedPointerTableRole(function, c, reverse.end(),
                reverse.group(1), reverse.group(3),
                reverse.group(2), locals, stableStorages,
                functionTargets);
    }

    /**
     * Recover an inline variable-length/flexible-array tail without inventing a
     * fixed element count:
     *
     *   *(uint *)(record + 0x30 + index * 4)
     *
     * A one-element array component is the conventional Ghidra/C model for this
     * layout.  It preserves the proven element width and lets the decompiler spell
     * later accesses as record->entries[index], while the containing record length
     * remains only the observed fixed prefix plus one element.
     */
    private void collectRawIndexedAccesses(Function function, String c,
            Map<String, Variable> locals, Set<String> stableStorages,
            Map<String, TargetEvidence> functionTargets) {
        Matcher matcher = RAW_INDEXED_ACCESS.matcher(c);
        while (matcher.find()) {
            String valueType = matcher.group(1).trim();
            String name = matcher.group(2);
            long offset = parseUnsigned(matcher.group(3));
            int scale = (int)parseUnsigned(matcher.group(5));
            int width = accessWidth(valueType);
            if (offset < 0 || offset >= MAX_SHAPE_SIZE || width < 1 ||
                    width > 16 || scale != width || offset + width > MAX_SHAPE_SIZE ||
                    name.equals("this") || name.startsWith("this_")) continue;
            TargetEvidence target = canonicalTarget(function, locals, stableStorages,
                functionTargets, name);
            if (target == null) continue;
            FieldEvidence field = target.fields.computeIfAbsent(offset, FieldEvidence::new);
            field.widths.merge(width, 1, Integer::sum);
            String type = valueTypeSpecification(valueType, width);
            if (!type.isBlank()) field.types.merge(type, 1, Integer::sum);
            field.indexedStrides.merge(scale, 1, Integer::sum);
            field.roles.merge("entries", 1, Integer::sum);
            field.sites.add(addr(function.getEntryPoint()) + " indexed " + name +
                "+0x" + Long.toHexString(offset).toUpperCase(Locale.ROOT) +
                " stride=" + scale);
            target.accessCount++;
            target.functions.add(addr(function.getEntryPoint()));
            rawAccesses++;
        }
    }

    private void collectCountedPointerTableRole(Function function, String c,
            int comparisonEnd, String baseName, String indexName, String countMember,
            Map<String, Variable> locals, Set<String> stableStorages,
            Map<String, TargetEvidence> functionTargets) {
        TargetEvidence target = canonicalTarget(function, locals, stableStorages,
            functionTargets, baseName);
        if (target == null) return;
        long countOffset = memberOffset(target, countMember);
        if (countOffset < 0 || countOffset + 4 > MAX_SHAPE_SIZE) return;
        int end = Math.min(c.length(), comparisonEnd + 1200);
        String window = c.substring(comparisonEnd, end);
        Pattern indexed = Pattern.compile("(?<![A-Za-z0-9_$:])" +
            Pattern.quote(baseName) + "\\s*->\\s*" +
            "((?:entries|field)_(?:0[xX])?[0-9A-Fa-f]+|entries)\\s*\\[\\s*" +
            Pattern.quote(indexName) + "\\s*\\]");
        Matcher table = indexed.matcher(window);
        if (!table.find()) return;
        long tableOffset = memberOffset(target, table.group(1));
        if (tableOffset < 0 ||
                tableOffset + currentProgram.getDefaultPointerSize() > MAX_SHAPE_SIZE)
            return;
        semanticRole(function, target, countOffset, "entryCount",
            indexName + " is strictly bounded by " + baseName + "+0x" +
            Long.toHexString(countOffset).toUpperCase(Locale.ROOT));
        semanticRole(function, target, tableOffset, "entries",
            baseName + "+0x" + Long.toHexString(tableOffset).toUpperCase(Locale.ROOT) +
            " is indexed by the same bounded value " + indexName);
    }

    private long memberOffset(TargetEvidence target, String memberName) {
        Matcher structural = Pattern.compile(
            "(?:field|entries)_(?:0[xX])?([0-9A-Fa-f]+)")
            .matcher(memberName);
        if (structural.matches()) return parseUnsigned("0x" + structural.group(1));
        Structure owner = structureFromPointer(target.expectedType);
        DataTypeComponent component = componentNamed(owner, memberName);
        return component == null ? -1 : component.getOffset();
    }

    private void semanticRole(Function function, TargetEvidence target, long offset,
            String role, String detail) {
        FieldEvidence field = target.fields.computeIfAbsent(offset, FieldEvidence::new);
        field.roles.merge(role, 1, Integer::sum);
        field.sites.add(addr(function.getEntryPoint()) + " " + detail);
    }

    private TargetEvidence canonicalTarget(Function function, Map<String, Variable> locals,
            Set<String> stableStorages, Map<String, TargetEvidence> functionTargets,
            String name) {
        TargetEvidence existing = functionTargets.get(name);
        if (existing != null) return existing;
        TargetEvidence candidate = target(function, locals.get(name), name, stableStorages);
        if (candidate == null) return null;
        TargetEvidence canonical = targets.computeIfAbsent(candidate.key, ignored -> candidate);
        functionTargets.put(name, canonical);
        return canonical;
    }

    private void recordField(Function function, TargetEvidence target, long offset, int width,
            String type, String detail) {
        FieldEvidence field = target.fields.computeIfAbsent(offset, FieldEvidence::new);
        field.widths.merge(width, 1, Integer::sum);
        if (type != null && !type.isBlank()) field.types.merge(type, 1, Integer::sum);
        field.sites.add(addr(function.getEntryPoint()) + " " + detail);
        target.accessCount++;
        target.functions.add(addr(function.getEntryPoint()));
    }

    private void recordPointerField(Function function, TargetEvidence parent, long parentOffset,
            String detail) {
        recordField(function, parent, parentOffset, currentProgram.getDefaultPointerSize(),
            "", detail);
        nestedEvidence(parent, parentOffset);
    }

    private void recordNestedField(Function function, TargetEvidence parent, long parentOffset,
            long childOffset, int width, String type, String detail) {
        recordPointerField(function, parent, parentOffset, detail);
        NestedEvidence child = nestedEvidence(parent, parentOffset);
        FieldEvidence field = child.fields.computeIfAbsent(childOffset, FieldEvidence::new);
        field.widths.merge(width, 1, Integer::sum);
        if (type != null && !type.isBlank()) field.types.merge(type, 1, Integer::sum);
        field.sites.add(addr(function.getEntryPoint()) + " " + detail);
        child.accessCount++;
    }

    private NestedEvidence nestedEvidence(TargetEvidence parent, long parentOffset) {
        return parent.nested.computeIfAbsent(parentOffset, NestedEvidence::new);
    }

    private boolean validNestedOffsets(long parentOffset, long childOffset, int width) {
        return parentOffset >= 0 && parentOffset + currentProgram.getDefaultPointerSize() <=
            MAX_SHAPE_SIZE && childOffset >= 0 && width >= 1 && width <= 16 &&
            childOffset + width <= MAX_SHAPE_SIZE;
    }

    private int pointedElementWidth(String loadedPointerType) {
        int star = loadedPointerType.lastIndexOf('*');
        if (star < 0) return -1;
        return accessWidth(loadedPointerType.substring(0, star).trim());
    }

    private boolean integerCastBefore(String expression, String name) {
        return Pattern.compile("(?i)\\(\\s*(?:u?int|long|ulong|dword|word|qword)\\s*\\)\\s*" +
            Pattern.quote(name) + "\\b").matcher(expression).find();
    }

    private int collectGlobalRecordTypeEvidence(Function function, String c,
            Map<String, Variable> locals, Set<String> stableStorages,
            Map<String, TargetEvidence> functionTargets) {
        if (!(dataTypes.getDataType(PLAYER_TEMP_SLOT_PATH) instanceof Structure) ||
                !(dataTypes.getDataType(DARRAY_PATH) instanceof Structure)) return 0;
        int count = 0;
        Matcher assignment = ASSIGNMENT.matcher(c);
        while (assignment.find()) {
            String name = assignment.group(1);
            Variable variable = locals.get(name);
            if (variable == null || variable instanceof Parameter) continue;
            String expression = assignment.group(2).trim();
            String proposed = globalRecordDerivedPointer(expression);
            if (proposed.isBlank()) continue;
            String site = addr(function.getEntryPoint()) + " C assignment " + name +
                " from STPlayerRuntimeRecord.tempSlots";
            addTypeEvidence(name, function, locals, stableStorages, functionTargets,
                proposed, 4, site);
            count++;
        }
        return count;
    }

    private String globalRecordDerivedPointer(String expression) {
        if (!PLAYER_STRIDE_TERM.matcher(expression).find()) return "";
        boolean dereference = expression.stripLeading().startsWith("*");
        Matcher constants = HEX_CONSTANT.matcher(expression);
        while (constants.find()) {
            long absolute;
            try { absolute = Long.parseUnsignedLong(constants.group(1), 16); }
            catch (NumberFormatException exception) { continue; }
            long offset = absolute - PLAYER_RUNTIME_BASE;
            int withinGroup;
            if (offset >= TEMP_GROUP_0_OFFSET &&
                    offset < TEMP_GROUP_0_OFFSET + TEMP_GROUP_LENGTH)
                withinGroup = (int)(offset - TEMP_GROUP_0_OFFSET);
            else if (offset >= TEMP_GROUP_1_OFFSET &&
                    offset < TEMP_GROUP_1_OFFSET + TEMP_GROUP_LENGTH)
                withinGroup = (int)(offset - TEMP_GROUP_1_OFFSET);
            else continue;

            int withinSlot = withinGroup % TEMP_SLOT_LENGTH;
            if (!dereference && withinGroup == 0)
                return "pointer:" + PLAYER_TEMP_SLOT_PATH;
            if (dereference && withinSlot == TEMP_OBJECT_IDS_OFFSET)
                return "pointer:" + DARRAY_PATH;
        }
        return "";
    }

    private Map<String, Variable> localVariables(Function function) {
        Map<String, Variable> result = new LinkedHashMap<>();
        Set<String> ambiguous = new HashSet<>();
        for (Variable variable : function.getAllVariables()) {
            if (!variable.isValid() || variable.getName() == null ||
                    variable.getName().isBlank()) continue;
            Variable previous = result.putIfAbsent(variable.getName(), variable);
            if (previous != null && !previous.getVariableStorage().equals(
                    variable.getVariableStorage())) ambiguous.add(variable.getName());
        }
        for (String name : ambiguous) result.remove(name);
        return result;
    }

    private Set<String> stableStorages(Map<String, Variable> locals) {
        Map<String, Integer> counts = new TreeMap<>();
        for (Variable variable : locals.values()) {
            if (variable.getVariableStorage() == null) continue;
            counts.merge(variable.getVariableStorage().toString(), 1, Integer::sum);
        }
        Set<String> result = new HashSet<>();
        for (Map.Entry<String, Integer> entry : counts.entrySet())
            if (entry.getValue() == 1) result.add(entry.getKey());
        return result;
    }

    private TargetEvidence target(Function function, Variable local, String name,
            Set<String> stableStorages) {
        if (local != null) {
            String source = local.getSource().toString();
            String comment = local.getComment() == null ? "" : local.getComment();
            String kind = local instanceof Parameter ? "parameter" : "local";
            String storage = local.getVariableStorage() == null ? "" :
                local.getVariableStorage().toString();
            if (storage.isBlank()) return null;
            String key = addr(function.getEntryPoint()) + "|" + kind + "|" + storage;
            return new TargetEvidence(key, kind, function.getEntryPoint(),
                function.getName(true), name, storage, typeSpecification(local.getDataType()),
                source, scriptOwnedPointer(comment) ||
                    !protectedSource(local.getSource()) &&
                    generatedOwnedPointer(local.getDataType()), typeFamilyOwned(comment),
                stableStorages.contains(storage));
        }
        List<Symbol> matches = currentProgram.getSymbolTable().getGlobalSymbols(name);
        Symbol symbol = null;
        for (Symbol candidate : matches) {
            if (candidate.getAddress() == null || !candidate.getAddress().isMemoryAddress()) continue;
            if (symbol != null && !symbol.getAddress().equals(candidate.getAddress())) return null;
            symbol = candidate;
        }
        if (symbol == null) return null;
        Data data = currentProgram.getListing().getDefinedDataAt(symbol.getAddress());
        if (data == null || data.hasStringValue() || data.getLength() !=
                currentProgram.getDefaultPointerSize()) return null;
        String comment = currentProgram.getListing().getComment(
            ghidra.program.model.listing.CommentType.PLATE, symbol.getAddress());
        return new TargetEvidence("global|" + addr(symbol.getAddress()), "global", null,
            "", symbol.getName(), addr(symbol.getAddress()),
            typeSpecification(data.getDataType()), "DATA",
            scriptOwnedPointer(comment), typeFamilyOwned(comment), true);
    }

    private void collectCallEvidence(Function containing, String c,
            Map<String, Variable> locals, Set<String> stableStorages,
            Map<String, TargetEvidence> functionTargets) {
        for (CallSite call : directCalls(containing, c)) {
            Function called = call.function;
            List<String> arguments = call.arguments;
            if (arguments.isEmpty()) continue;
            String site = addr(containing.getEntryPoint()) + " C call -> " +
                called.getName(true);

            long calledAddress = called.getEntryPoint().getOffset();
            if (DARRAY_FIRST_ARGUMENT.contains(calledAddress) &&
                    dataTypes.getDataType(DARRAY_PATH) instanceof Structure)
                addTypeEvidence(arguments.get(0), containing, locals, stableStorages,
                    functionTargets,
                    "pointer:" + DARRAY_PATH, 3, site + " DArray helper");

            Parameter[] parameters = called.getParameters();
            if (parameters.length == arguments.size()) {
                for (int index = 0; index < parameters.length; index++) {
                    String type = structurePointer(parameters[index].getDataType());
                    if (!type.isBlank()) {
                        int weight =
                            parameters[index].getSource() == SourceType.USER_DEFINED ||
                            parameters[index].getSource() == SourceType.IMPORTED ? 3 : 1;
                        addTypeEvidence(arguments.get(index), containing, locals,
                            stableStorages, functionTargets, type, weight,
                            site + " parameter " + parameters[index].getName());
                    }
                    addFieldParameterEvidence(arguments.get(index), parameters[index],
                        called, containing, locals, stableStorages, functionTargets,
                        site);
                }
            }
            if ("__thiscall".equals(called.getCallingConventionName())) {
                String owner = ownerType(called);
                if (!owner.isBlank()) addTypeEvidence(arguments.get(0), containing, locals,
                    stableStorages, functionTargets, "pointer:" + owner, 2,
                    site + " typed this receiver");
            }
        }
    }

    /**
     * A generated field used as an argument to a trusted typed API has stronger
     * value-type evidence than the undefinedN cast with which Ghidra first
     * rendered the access.  This is especially useful for flexible tables and
     * integer handles:
     *
     *     api(record->entries[index]);   // API parameter is uint
     *
     * The relation is installed only into script-owned/refinable structures,
     * requires one unambiguous field access in the argument, and preserves
     * width exactly.  Integer promotion therefore cannot turn a short field
     * into an int merely because the call expression contains an (int) cast.
     */
    private void addFieldParameterEvidence(String expression, Parameter parameter,
            Function called, Function containing, Map<String, Variable> locals,
            Set<String> stableStorages,
            Map<String, TargetEvidence> functionTargets, String site) {
        if (expression == null || expression.contains("&") ||
                parameter == null ||
                parameter.getSource() == SourceType.DEFAULT && !isLibrary(called))
            return;
        DataType parameterType = untypedef(parameter.getDataType());
        if (!semanticFieldType(parameterType)) return;
        Matcher matcher = FIELD_ARGUMENT_ACCESS.matcher(expression);
        if (!matcher.find()) return;
        String base = matcher.group(1);
        String member = matcher.group(2);
        if (matcher.find()) return;
        TargetEvidence target = canonicalTarget(containing, locals, stableStorages,
            functionTargets, base);
        if (target == null || !target.scriptOwned) return;
        Structure owner = structureFromPointer(target.expectedType);
        if (owner == null || !generatedRefinablePath(owner.getPathName())) return;
        DataTypeComponent component = componentNamed(owner, member);
        if (component == null) return;
        DataType fieldType = untypedef(component.getDataType());
        int width = component.getLength();
        if (fieldType instanceof Array array) {
            fieldType = untypedef(array.getDataType());
            width = array.getElementLength();
        }
        if (width < 1 || width > 16 || parameterType.getLength() != width) return;
        String specification = typeSpecification(parameterType);
        if (specification.isBlank()) return;
        FieldEvidence field = target.fields.computeIfAbsent(
            (long)component.getOffset(), FieldEvidence::new);
        field.widths.merge(width, 1, Integer::sum);
        field.types.merge(specification, 2, Integer::sum);
        field.sites.add(site + " consumes " + base + "->" + member +
            " as " + specification);
        typedFieldConsumerHints++;
    }

    private boolean semanticFieldType(DataType type) {
        type = untypedef(type);
        if (type == null || type.getLength() < 1 ||
                Undefined.isUndefined(type) || type.getPathName().equals("/void"))
            return false;
        if (type instanceof Pointer pointer) {
            DataType pointed = untypedef(pointer.getDataType());
            return pointed != null && !Undefined.isUndefined(pointed) &&
                !pointed.getPathName().equals("/void");
        }
        return true;
    }

    private void addTypeEvidence(String expression, Function containing,
            Map<String, Variable> locals, Set<String> stableStorages,
            Map<String, TargetEvidence> functionTargets, String type, int weight, String site) {
        String name = simpleArgumentName(expression);
        if (name.isBlank()) return;
        TargetEvidence target = functionTargets.get(name);
        if (target == null) {
            TargetEvidence potential = target(containing, locals.get(name), name, stableStorages);
            if (potential == null) return;
            target = targets.computeIfAbsent(potential.key, ignored -> potential);
            functionTargets.put(name, target);
        }
        if (target == null) return;
        target.typeEvidence.merge(type, weight, Integer::sum);
        target.typeSites.add(site + " => " + type);
    }

    private List<CallSite> directCalls(Function containing, String c) {
        Map<String, List<Function>> byName = new LinkedHashMap<>();
        for (Function direct : containing.getCalledFunctions(monitor)) {
            addCallAlias(byName, direct.getName(), resolveThunk(direct));
            addCallAlias(byName, direct.getName(true), resolveThunk(direct));
        }
        if (byName.isEmpty()) return List.of();
        List<CallSite> result = new ArrayList<>();
        Matcher matcher = CALL_HEAD.matcher(c);
        while (matcher.find()) {
            List<Function> candidates = byName.get(matcher.group(1));
            if (candidates == null) continue;
            int open = c.indexOf('(', matcher.start(1) + matcher.group(1).length());
            int close = matchingParen(c, open);
            if (close < 0) continue;
            List<String> arguments = splitArguments(c.substring(open + 1, close));
            Function called = chooseCallTarget(candidates, arguments.size());
            if (called != null) result.add(new CallSite(called, arguments));
        }
        return result;
    }

    private void addCallAlias(Map<String, List<Function>> byName, String name,
            Function function) {
        if (name == null || name.isBlank() || function == null) return;
        List<Function> values = byName.computeIfAbsent(name, ignored -> new ArrayList<>());
        if (!values.contains(function)) values.add(function);
    }

    private Function chooseCallTarget(List<Function> candidates, int argumentCount) {
        List<Function> exact = candidates.stream().filter(function ->
            function.getParameterCount() == argumentCount).toList();
        if (exact.size() == 1) return exact.get(0);
        if (exact.isEmpty() && candidates.size() == 1) return candidates.get(0);
        return null;
    }

    private Function resolveThunk(Function function) {
        Set<Address> seen = new HashSet<>();
        while (function != null && function.isThunk() && seen.add(function.getEntryPoint())) {
            Function next = function.getThunkedFunction(false);
            if (next == null || next.equals(function)) break;
            function = next;
        }
        return function;
    }

    private int matchingParen(String text, int open) {
        if (open < 0 || open >= text.length() || text.charAt(open) != '(') return -1;
        int depth = 0;
        char quote = 0;
        boolean escaped = false;
        for (int index = open; index < text.length(); index++) {
            char ch = text.charAt(index);
            if (quote != 0) {
                if (escaped) escaped = false;
                else if (ch == '\\') escaped = true;
                else if (ch == quote) quote = 0;
                continue;
            }
            if (ch == '\'' || ch == '"') { quote = ch; continue; }
            if (ch == '(') depth++;
            else if (ch == ')' && --depth == 0) return index;
        }
        return -1;
    }

    private List<String> splitArguments(String text) {
        if (text.isBlank() || text.trim().equals("void")) return List.of();
        List<String> result = new ArrayList<>();
        int start = 0, parens = 0, brackets = 0, braces = 0;
        char quote = 0;
        boolean escaped = false;
        for (int index = 0; index < text.length(); index++) {
            char ch = text.charAt(index);
            if (quote != 0) {
                if (escaped) escaped = false;
                else if (ch == '\\') escaped = true;
                else if (ch == quote) quote = 0;
                continue;
            }
            if (ch == '\'' || ch == '"') { quote = ch; continue; }
            if (ch == '(') parens++;
            else if (ch == ')') parens--;
            else if (ch == '[') brackets++;
            else if (ch == ']') brackets--;
            else if (ch == '{') braces++;
            else if (ch == '}') braces--;
            else if (ch == ',' && parens == 0 && brackets == 0 && braces == 0) {
                result.add(text.substring(start, index).trim());
                start = index + 1;
            }
        }
        result.add(text.substring(start).trim());
        return result;
    }

    private String simpleArgumentName(String expression) {
        String value = expression.trim();
        for (int pass = 0; pass < 8 && !value.isBlank(); pass++) {
            if (SIMPLE_IDENTIFIER.matcher(value).matches()) return value;
            if (value.charAt(0) != '(') return "";
            int close = matchingParen(value, 0);
            if (close < 0) return "";
            if (close == value.length() - 1) {
                value = value.substring(1, close).trim();
                continue;
            }
            String cast = value.substring(1, close).trim();
            if (!cast.matches("(?i)(?:const\\s+|volatile\\s+)*(?:struct\\s+|class\\s+|enum\\s+)?" +
                    "[A-Za-z_$][A-Za-z0-9_$: ]*(?:\\s*\\*+)?")) return "";
            value = value.substring(close + 1).trim();
        }
        return SIMPLE_IDENTIFIER.matcher(value).matches() ? value : "";
    }

    private Analysis makeProposals() {
        mergeGeneratedTypeEvidence();
        Map<String, TypeProposal> types = new LinkedHashMap<>();
        Map<String, List<FieldProposal>> fields = new LinkedHashMap<>();
        List<TargetProposal> targetRows = new ArrayList<>();
        for (TargetEvidence target : targets.values()) {
            mergeAnonymousValueFields(target);
            TargetDecision decision = decide(target);
            if (decision.anonymous && !decision.typePath.isBlank()) {
                String shapeId = decision.typePath.substring(decision.typePath.lastIndexOf('/') + 1);
                TypeProposal type = types.computeIfAbsent(shapeId, ignored ->
                    new TypeProposal(decision.apply, shapeId, decision.typePath,
                        proposalLength(target, decision), 0, target.fields.size(), decision.confidence,
                        decision.reason));
                type.apply |= decision.apply;
                type.targetCount++;
                fields.computeIfAbsent(shapeId, ignored -> makeFieldProposals(shapeId, target));
                for (Map.Entry<Long, NestedEvidence> entry : target.nested.entrySet()) {
                    if (knownNestedType(entry.getValue()) != null) continue;
                    List<FieldEvidence> selected = selectedNestedFields(entry.getValue());
                    if (!usableNested(entry.getValue(), selected)) continue;
                    String nestedPath = nestedPath(target, entry.getKey(), entry.getValue());
                    String nestedId = leaf(nestedPath);
                    TypeProposal nestedType = types.computeIfAbsent(nestedId, ignored ->
                        new TypeProposal(decision.apply, nestedId, nestedPath,
                            nestedLength(selected), 0, selected.size(),
                            decision.apply ? "layout" : "review",
                            "fixed-offset accesses through pointer field +0x" +
                            Long.toHexString(entry.getKey()).toUpperCase(Locale.ROOT)));
                    nestedType.apply |= decision.apply;
                    nestedType.targetCount++;
                    fields.computeIfAbsent(nestedId, ignored ->
                        makeNestedFieldProposals(nestedId, entry.getValue(), selected));
                }
            }
            targetRows.add(new TargetProposal(decision.apply, target, decision));
        }
        List<TypeProposal> typeRows = new ArrayList<>(types.values());
        typeRows.sort(Comparator.comparing(row -> row.typePath));
        List<FieldProposal> fieldRows = new ArrayList<>();
        for (TypeProposal type : typeRows)
            fieldRows.addAll(fields.getOrDefault(type.shapeId, List.of()));
        targetRows.sort(Comparator.comparing((TargetProposal row) -> row.functionAddress)
            .thenComparing(row -> row.kind).thenComparing(row -> row.locator));
        return new Analysis(typeRows, fieldRows, targetRows);
    }

    /**
     * A generated structure is shared database state even when distinct
     * functions expose it through different parameters or locals. Merge their
     * observations by exact generated type identity before deciding a revision.
     * Existing generated components are retained as a baseline, so a richer use
     * site cannot accidentally delete fields which it did not touch.
     */
    private void mergeGeneratedTypeEvidence() {
        Map<String, MergedGeneratedEvidence> merged = new LinkedHashMap<>();
        for (TargetEvidence target : targets.values()) {
            String path = pointedStructure(target.expectedType);
            Structure structure = path.isBlank() ? null :
                structureFromPointer("pointer:" + path);
            if (structure == null || !generatedAnonymousOwned(structure) ||
                    !target.scriptOwned) continue;
            MergedGeneratedEvidence value = merged.computeIfAbsent(path,
                ignored -> new MergedGeneratedEvidence());
            if (!value.baselineSeeded) {
                for (DataTypeComponent component : structure.getDefinedComponents()) {
                    FieldEvidence field = value.fields.computeIfAbsent(
                        (long)component.getOffset(), FieldEvidence::new);
                    field.widths.merge(component.getLength(), 1, Integer::sum);
                    DataType componentType = untypedef(component.getDataType());
                    if (componentType instanceof Array array &&
                            array.getNumElements() == 1) {
                        field.types.merge(typeSpecification(array.getDataType()), 1,
                            Integer::sum);
                        field.indexedStrides.merge(array.getElementLength(), 1,
                            Integer::sum);
                        field.roles.merge("entries", 1, Integer::sum);
                    }
                    else {
                        field.types.merge(typeSpecification(component.getDataType()), 1,
                            Integer::sum);
                    }
                    String name = component.getFieldName();
                    if ("flags".equals(name) || "entryCount".equals(name) ||
                            "entries".equals(name))
                        field.roles.merge(name, 1, Integer::sum);
                    field.sites.add("existing generated baseline " + path);
                }
                value.baselineSeeded = true;
            }
            mergeFields(value.fields, target.fields);
            for (Map.Entry<Long, NestedEvidence> nested : target.nested.entrySet()) {
                NestedEvidence destination = value.nested.computeIfAbsent(
                    nested.getKey(), NestedEvidence::new);
                mergeNested(destination, nested.getValue());
            }
        }
        for (TargetEvidence target : targets.values()) {
            String path = pointedStructure(target.expectedType);
            MergedGeneratedEvidence value = merged.get(path);
            if (value == null) continue;
            mergeFields(target.fields, value.fields);
            for (Map.Entry<Long, NestedEvidence> nested : value.nested.entrySet())
                target.nested.put(nested.getKey(), nested.getValue());
        }
    }

    private void mergeFields(Map<Long, FieldEvidence> destination,
            Map<Long, FieldEvidence> source) {
        for (Map.Entry<Long, FieldEvidence> entry : source.entrySet()) {
            FieldEvidence target = destination.computeIfAbsent(entry.getKey(),
                FieldEvidence::new);
            FieldEvidence found = entry.getValue();
            for (Map.Entry<Integer, Integer> width : found.widths.entrySet())
                target.widths.merge(width.getKey(), width.getValue(), Integer::sum);
            for (Map.Entry<String, Integer> type : found.types.entrySet())
                target.types.merge(type.getKey(), type.getValue(), Integer::sum);
            for (Map.Entry<Integer, Integer> stride : found.indexedStrides.entrySet())
                target.indexedStrides.merge(stride.getKey(), stride.getValue(),
                    Integer::sum);
            for (Map.Entry<String, Integer> role : found.roles.entrySet())
                target.roles.merge(role.getKey(), role.getValue(), Integer::sum);
            target.sites.addAll(found.sites);
        }
    }

    private void mergeNested(NestedEvidence destination, NestedEvidence source) {
        destination.accessCount += source.accessCount;
        destination.dArrayIndexEvidence += source.dArrayIndexEvidence;
        destination.pointerDepth = Math.max(destination.pointerDepth, source.pointerDepth);
        mergeFields(destination.fields, source.fields);
    }

    /**
     * The decompiler often recognizes a stack value as an existing anonymous structure even
     * though Listing has no persistent local for that HighVariable.  Those values are commonly
     * built field-by-field and passed to the pointer-typed helper which originally created the
     * shape.  Recover the missing byte/word members from the value construction itself so a
     * later run does not leave holes such as local._6_1_ in an otherwise proven record.
     */
    private void collectAnonymousValueFields(Function function, String c,
            Map<String, Variable> locals) {
        Map<String, Structure> values = new LinkedHashMap<>();
        Matcher declaration = LOCAL_STRUCTURE_DECLARATION.matcher(c);
        while (declaration.find()) {
            Structure structure = uniqueStructure(declaration.group(1));
            if (structure == null || !anonymousTypePath(structure.getPathName()) ||
                    !generatedAnonymousOwned(structure)) continue;
            values.put(declaration.group(2), structure);
        }
        if (values.isEmpty()) return;

        Matcher piece = PIECE_ASSIGNMENT.matcher(c);
        while (piece.find()) {
            Structure structure = values.get(piece.group(1));
            if (structure == null) continue;
            long offset;
            int width;
            try {
                offset = Long.parseLong(piece.group(2));
                width = Integer.parseInt(piece.group(3));
            }
            catch (NumberFormatException exception) { continue; }
            if (offset < 0 || width < 1 || width > 16 ||
                    offset + width > structure.getLength()) continue;
            recordAnonymousValueField(function, structure, offset, width,
                expressionType(piece.group(4), locals, width),
                piece.group(1) + "._" + offset + "_" + width + "_ assignment");
        }

        Matcher field = FIELD_ASSIGNMENT.matcher(c);
        while (field.find()) {
            Structure structure = values.get(field.group(1));
            if (structure == null) continue;
            long offset;
            try { offset = Long.parseUnsignedLong(field.group(2), 16); }
            catch (NumberFormatException exception) { continue; }
            if (offset < 0 || offset >= structure.getLength()) continue;
            DataTypeComponent component = structure.getComponentContaining((int)offset);
            if (component == null || component.getOffset() != offset) continue;
            int width = component.getLength();
            recordAnonymousValueField(function, structure, offset, width,
                expressionType(field.group(3), locals, width),
                field.group(1) + ".field_" + field.group(2) + " assignment");
        }
    }

    private Structure uniqueStructure(String renderedName) {
        String name = renderedName;
        int separator = name.lastIndexOf("::");
        if (separator >= 0) name = name.substring(separator + 2);
        List<DataType> matches = new ArrayList<>();
        dataTypes.findDataTypes(name, matches);
        Structure found = null;
        for (DataType match : matches) {
            DataType unwrapped = untypedef(match);
            if (!(unwrapped instanceof Structure structure)) continue;
            if (found != null && !found.getPathName().equals(structure.getPathName()))
                return null;
            found = structure;
        }
        return found;
    }

    private String expressionType(String expression, Map<String, Variable> locals,
            int width) {
        String value = expression.trim();
        Matcher cast = LEADING_CAST.matcher(value);
        if (cast.matches()) {
            int castWidth = accessWidth(cast.group(1));
            if (castWidth == width)
                return concreteWidthType(valueTypeSpecification(cast.group(1), width), width);
        }
        String name = simpleArgumentName(value);
        Variable variable = locals.get(name);
        if (variable != null)
            return concreteWidthType(typeSpecification(variable.getDataType()), width);
        if (width == 1 && value.matches("'(?:[^'\\\\]|\\\\.)*'")) return "/char";
        return width == 1 ? "/byte" : width == 2 ? "/ushort" :
            width == 4 ? "/uint" : "/undefined" + width;
    }

    private String concreteWidthType(String specification, int width) {
        if (typeLength(specification) == width &&
                !specification.matches("/undefined(?:1|2|4|8)?"))
            return specification;
        if (width == 1) {
            if (specification.equals("/int") || specification.equals("/short") ||
                    specification.equals("/char")) return "/char";
            return "/byte";
        }
        if (width == 2) {
            if (specification.equals("/int") || specification.equals("/short"))
                return "/short";
            return "/ushort";
        }
        if (width == 4) {
            if (specification.equals("/int")) return "/int";
            return "/uint";
        }
        return "/undefined" + width;
    }

    private void recordAnonymousValueField(Function function, Structure structure,
            long offset, int width, String type, String detail) {
        Map<Long, FieldEvidence> fields = anonymousValueFields.computeIfAbsent(
            structure.getPathName(), ignored -> new TreeMap<>());
        FieldEvidence evidence = fields.computeIfAbsent(offset, FieldEvidence::new);
        evidence.widths.merge(width, 1, Integer::sum);
        if (type != null && !type.isBlank()) evidence.types.merge(type, 1, Integer::sum);
        evidence.sites.add(addr(function.getEntryPoint()) + " stack-value " + detail);
    }

    private void mergeAnonymousValueFields(TargetEvidence target) {
        String current = pointedStructure(target.expectedType);
        Map<Long, FieldEvidence> values = anonymousValueFields.get(current);
        if (values == null) return;
        for (Map.Entry<Long, FieldEvidence> entry : values.entrySet()) {
            FieldEvidence destination = target.fields.computeIfAbsent(
                entry.getKey(), FieldEvidence::new);
            FieldEvidence source = entry.getValue();
            for (Map.Entry<Integer, Integer> width : source.widths.entrySet())
                destination.widths.merge(width.getKey(), width.getValue(), Integer::sum);
            for (Map.Entry<String, Integer> type : source.types.entrySet())
                destination.types.merge(type.getKey(), type.getValue(), Integer::sum);
            for (Map.Entry<Integer, Integer> stride : source.indexedStrides.entrySet())
                destination.indexedStrides.merge(stride.getKey(), stride.getValue(),
                    Integer::sum);
            destination.sites.addAll(source.sites);
            target.accessCount += source.sites.size();
            target.functions.addAll(source.sites.stream()
                .map(site -> site.substring(0, Math.min(8, site.length()))).toList());
        }
    }

    private TargetDecision decide(TargetEvidence target) {
        if (target.discriminatedPayload &&
                (replaceable(target.expectedType) || target.scriptOwned))
            return new TargetDecision(false, false, "", "review",
                "parameter is a payload carrier used by multiple switch arms; " +
                "typed-call evidence is variant-specific and must not become one persistent type");

        String currentStructure = pointedStructure(target.expectedType);
        if (!target.directThisOwner.isBlank() && target.scriptOwned &&
                target.databaseBacked && !target.directThisOwner.equals(currentStructure)) {
            Structure owner = structureFromPointer("pointer:" + target.directThisOwner);
            Structure current = structureFromPointer(target.expectedType);
            if (owner != null && current != null && owner.getLength() >= current.getLength())
                return new TargetDecision(true, false, owner.getPathName(), "high",
                    "script-owned direct this spill restored from base " +
                    current.getPathName() + " to most-derived method owner " +
                    owner.getPathName());
        }
        boolean generatedAnonymous = !currentStructure.isBlank() && target.scriptOwned &&
            generatedRefinablePath(currentStructure);
        if (!currentStructure.isBlank() && !generatedAnonymous)
            return new TargetDecision(false, false, currentStructure, "existing",
                "target already has a named/manual structure pointer type");

        if (!target.typeEvidence.isEmpty()) {
            if (generatedAnonymous && consolidateGlobalAnonymousViews(target,
                    currentStructure)) {
                Structure current = structureFromPointer("pointer:" + currentStructure);
                boolean covered = current != null && coversGeneratedFields(current, target);
                boolean refine = covered && needsGeneratedRefinement(current, target);
                boolean apply = refine && automaticTarget(target);
                return new TargetDecision(apply, apply, currentStructure,
                    apply ? "refine" : "existing",
                    "typed-call dataflow proves that generated anonymous views describe " +
                    "the same global singleton; their non-conflicting fields were unioned" +
                    (refine ? "" : "; current canonical shape already contains the union"));
            }
            if (currentStructure.isBlank() &&
                    materializeGlobalAnonymousSuperset(target)) {
                String path = anonymousPath(target);
                return new TargetDecision(true, true, path, "layout",
                    "typed-call dataflow and direct fixed-offset accesses are partial views " +
                    "of the same untyped global singleton; a target-local non-conflicting " +
                    "superset was materialized");
            }
            SemanticChoice choice = semanticChoice(target);
            if (choice == null) return new TargetDecision(false, false, "", "conflict",
                "conflicting semantic type evidence=" + target.typeEvidence);
            Structure structure = structureFromPointer(choice.specification);
            if (structure == null) return new TargetDecision(false, false, "", "review",
                "semantic type is missing or not a structure: " + choice.specification);
            if (generatedAnonymous && !namedReceiverType(structure))
                return new TargetDecision(false, false, currentStructure, "review",
                    "script-owned anonymous type retained; stronger evidence names only " +
                    "another anonymous structure: " + choice.specification);
            if (generatedAnonymous && currentStructure.equals(structure.getPathName()))
                return new TargetDecision(false, false, currentStructure, "existing",
                    "semantic evidence confirms the current anonymous structure");
            if (!target.fields.isEmpty() && !semanticCompatible(structure, target))
                return new TargetDecision(false, false, "",
                "conflict", "semantic type " + choice.specification +
                    " is shorter than or conflicts with offsets");
            boolean replaceable = replaceable(target.expectedType) || target.scriptOwned;
            boolean safeAutoThis = !autoThis(target) || namedReceiverType(structure);
            boolean apply = replaceable && automaticTarget(target) && safeAutoThis;
            String suffix = apply ? "" : !replaceable ? "; concrete target type preserved" :
                !safeAutoThis ? "; anonymous auto-this ownership is review-only" :
                !target.databaseBacked ? "; transient decompiler symbol requires review" :
                "; unsettled decompiler type propagation: persistent local requires role repair";
            return new TargetDecision(apply, false, structure.getPathName(),
                apply ? "high" : "review", choice.reason + "=" +
                target.typeEvidence + (generatedAnonymous ?
                    "; replaces script-owned anonymous type " + currentStructure : "") + suffix);
        }

        if (knownDArray(target.fields, target.dArrayIndexEvidence)) {
            DataType candidate = dataTypes.getDataType(DARRAY_PATH);
            Structure darray = candidate instanceof Structure ? (Structure)candidate : null;
            boolean replaceable = replaceable(target.expectedType) || target.scriptOwned;
            boolean layoutCompatible = darray != null &&
                compatibleFields(darray, target.fields);
            boolean apply = layoutCompatible && replaceable && automaticTarget(target) &&
                !autoThis(target);
            return new TargetDecision(apply, false,
                !layoutCompatible ? "" : darray.getPathName(), apply ? "high" : "review",
                "DArray elementSize*index+data addressing idiom" +
                (darray == null ? "; recovered DArrayTy is missing" : "") +
                (darray != null && !layoutCompatible ?
                    "; other observed offsets conflict with DArrayTy" : "") +
                (!replaceable ? "; concrete target type preserved" : "") +
                (!target.databaseBacked ?
                    "; transient decompiler symbol requires review" :
                    unsettledLocal(target) ?
                    "; unsettled decompiler type propagation: persistent local requires role repair" : ""));
        }

        if (!validFields(target)) return new TargetDecision(false, false, "", "review",
            "conflicting or invalid access widths");

        // Older STTypeFamilyAnalyzer versions merged anonymous structures on
        // offset/width geometry alone. That is not a type identity: unrelated
        // records often share the same layout. Rebuild those script-owned
        // targets from their own access profile so the unsafe merge is reversible.
        if (generatedAnonymous && target.typeFamilyOwned) {
            String path = anonymousPath(target);
            boolean multiField = target.fields.size() >= 2 && target.accessCount >= 3;
            boolean apply = !path.equals(currentStructure) && multiField &&
                automaticTarget(target) && !autoThis(target);
            return new TargetDecision(apply, true, path,
                apply ? "repair" : "review",
                "legacy geometry-only anonymous family split back to the target's " +
                "own observed access profile" +
                (path.equals(currentStructure) ? "; already target-local" : "") +
                (!multiField ? "; insufficient independent field evidence" : "") +
                (!target.databaseBacked ? "; transient decompiler symbol requires review" : "") +
                (unsettledLocal(target) ?
                    "; unsettled decompiler type propagation requires review" : ""));
        }

        if (generatedAnonymous) {
            Structure current = structureFromPointer("pointer:" + currentStructure);
            boolean covered = current != null && coversGeneratedFields(current, target);
            boolean refine = covered && needsGeneratedRefinement(current, target);
            boolean apply = refine && automaticTarget(target) && !autoThis(target);
            return new TargetDecision(apply, apply, currentStructure,
                apply ? "refine" : "existing",
                refine ? "new fixed-offset evidence refines the unchanged script-owned " +
                    "anonymous structure; observed_min_extent=" + shapeLength(target) +
                    "; previous_length=" + current.getLength() :
                    !covered ? "script-owned anonymous structure retained because the current " +
                        "evidence does not cover every generated field" :
                    "script-owned anonymous structure already covers the observed extent and fields");
        }

        Structure matched = matchExisting(target);
        if (matched != null) {
            return new TargetDecision(false, false, matched.getPathName(),
                "review", "field layout alone matches existing structure; manual confirmation required");
        }

        boolean multiField = target.fields.size() >= 2 && target.accessCount >= 3;
        boolean strongNested = target.nested.values().stream().anyMatch(nested -> {
            List<FieldEvidence> selected = selectedNestedFields(nested);
            return usableNested(nested, selected);
        });
        String path = anonymousPath(target);
        boolean replaceable = replaceable(target.expectedType) || target.scriptOwned;
        boolean apply = (multiField || strongNested) && replaceable && automaticTarget(target) &&
            !autoThis(target);
        String reason = multiField ? "multiple consistent fixed offsets in one persistent target" :
            strongNested ? "consistent nested offsets through a pointer field in one persistent target" :
            "single/weak fixed-offset profile retained for review";
        if (!replaceable) reason += "; concrete target type preserved";
        else if (!target.databaseBacked)
            reason += "; transient decompiler symbol requires review";
        else if (unsettledLocal(target))
            reason += "; unsettled decompiler type propagation: persistent local requires role repair";
        return new TargetDecision(apply, true, path, apply ? "layout" : "review", reason);
    }

    /**
     * Calls frequently expose several partial anonymous views of one global
     * singleton.  Geometry alone is not identity, but here identity is supplied
     * by the same global value flowing to all callees.  Refine only the existing
     * script-owned global shape, require it to be the longest view, and reject
     * every overlapping concrete disagreement.
     */
    private boolean consolidateGlobalAnonymousViews(TargetEvidence target,
            String currentPath) {
        if (!target.kind.equals("global") || !target.scriptOwned ||
                target.typeEvidence.size() < 2) return false;
        Structure current = structureFromPointer("pointer:" + currentPath);
        if (current == null || !pointerShapeOwned(current)) return false;

        List<Structure> views = new ArrayList<>();
        views.add(current);
        for (String specification : target.typeEvidence.keySet()) {
            Structure view = structureFromPointer(specification);
            if (view == null || !anonymousTypePath(view.getPathName()) ||
                    !generatedAnonymousOwned(view) ||
                    view.getLength() > current.getLength()) return false;
            if (!views.contains(view)) views.add(view);
        }

        Map<Long, MergedComponent> merged = new TreeMap<>();
        for (FieldEvidence field : target.fields.values()) {
            int width = uniqueWidth(field);
            if (width < 1 || !mergeComponent(merged, field.offset, width,
                    selectedType(field, width), "direct global access")) return false;
        }
        for (Structure view : views) {
            for (DataTypeComponent component : view.getDefinedComponents()) {
                String specification = typeSpecification(component.getDataType());
                if (!mergeComponent(merged, component.getOffset(), component.getLength(),
                        specification, view.getPathName())) return false;
            }
        }

        for (MergedComponent component : merged.values()) {
            FieldEvidence field = target.fields.computeIfAbsent(component.offset,
                FieldEvidence::new);
            field.widths.clear();
            field.widths.put(component.width, 1);
            field.types.clear();
            if (!component.type.isBlank()) field.types.put(component.type, 1);
            field.sites.add("global singleton view union: " +
                String.join(" | ", component.sources));
        }
        target.accessCount = Math.max(target.accessCount, merged.size());
        return !merged.isEmpty();
    }

    /**
     * An untyped global may be passed to one or more helpers which already have
     * script-owned anonymous receiver types while other functions access fields
     * beyond those partial views. The global value supplies identity, so form a
     * new global-local superset instead of choosing one view by vote or extending
     * a helper-local type. Exact overlap is accepted only when widths and concrete
     * types agree; partial overlap and concrete disagreement remain conflicts.
     */
    private boolean materializeGlobalAnonymousSuperset(TargetEvidence target) {
        if (!target.kind.equals("global") || target.scriptOwned ||
                !target.databaseBacked || !replaceable(target.expectedType) ||
                target.typeEvidence.isEmpty())
            return false;

        List<Structure> views = new ArrayList<>();
        for (String specification : target.typeEvidence.keySet()) {
            Structure view = structureFromPointer(specification);
            if (view == null || !anonymousTypePath(view.getPathName()) ||
                    !generatedAnonymousOwned(view) ||
                    view.getLength() > MAX_SHAPE_SIZE)
                return false;
            if (!views.contains(view)) views.add(view);
        }
        if (views.size() < 2 && target.fields.isEmpty()) return false;

        Map<Long, MergedComponent> merged = new TreeMap<>();
        for (FieldEvidence field : target.fields.values()) {
            int width = uniqueWidth(field);
            if (width < 1 || !mergeComponent(merged, field.offset, width,
                    selectedType(field, width), "direct global access"))
                return false;
        }
        for (Structure view : views) {
            for (DataTypeComponent component : view.getDefinedComponents()) {
                if (!mergeComponent(merged, component.getOffset(), component.getLength(),
                        typeSpecification(component.getDataType()), view.getPathName()))
                    return false;
            }
        }
        if (merged.size() < 2) return false;

        target.fields.clear();
        for (MergedComponent component : merged.values()) {
            FieldEvidence field = new FieldEvidence(component.offset);
            field.widths.put(component.width, 1);
            if (!component.type.isBlank()) field.types.put(component.type, 1);
            field.sites.add("global singleton superset: " +
                String.join(" | ", component.sources));
            target.fields.put(component.offset, field);
        }
        target.accessCount = Math.max(target.accessCount, merged.size());
        return true;
    }

    private boolean mergeComponent(Map<Long, MergedComponent> merged, long offset,
            int width, String type, String source) {
        if (offset < 0 || width < 1 || offset + width > MAX_SHAPE_SIZE) return false;
        for (MergedComponent existing : merged.values()) {
            long end = offset + width;
            long existingEnd = existing.offset + existing.width;
            if (offset >= existingEnd || existing.offset >= end) continue;
            if (offset != existing.offset || width != existing.width) return false;
            String selected = compatibleComponentType(existing.type, type);
            if (selected == null) return false;
            existing.type = selected;
            existing.sources.add(source);
            return true;
        }
        MergedComponent component = new MergedComponent(offset, width, type);
        component.sources.add(source);
        merged.put(offset, component);
        return true;
    }

    private String compatibleComponentType(String left, String right) {
        if (left == null || left.isBlank()) return right == null ? "" : right;
        if (right == null || right.isBlank() || left.equals(right)) return left;
        DataType leftType = resolveSpecification(left);
        DataType rightType = resolveSpecification(right);
        if (leftType == null || rightType == null) return null;
        if (Undefined.isUndefined(leftType)) return right;
        if (Undefined.isUndefined(rightType)) return left;
        return leftType.isEquivalent(rightType) ? left : null;
    }

    private DataType resolveSpecification(String specification) {
        if (specification == null || specification.isBlank()) return null;
        if (specification.startsWith("pointer:")) {
            DataType pointed =
                dataTypes.getDataType(specification.substring("pointer:".length()));
            return pointed == null ? null : new PointerDataType(pointed,
                currentProgram.getDefaultPointerSize(), dataTypes);
        }
        return dataTypes.getDataType(specification);
    }

    private boolean pointerShapeOwned(Structure structure) {
        String description = structure.getDescription();
        return structure.getPathName().startsWith(ANON_ROOT) && description != null &&
            description.contains(APPLIER_MARKER) &&
            description.contains("generated_layout_sha256=");
    }

    private boolean generatedAnonymousOwned(Structure structure) {
        String description = structure.getDescription();
        if (description == null) return false;
        String path = structure.getPathName();
        return pointerShapeOwned(structure) ||
            path.contains("/Recovered/ClassPointees/") &&
                description.contains("[STClassLayoutApplier]") &&
                description.contains("generated_layout_sha256=") ||
            path.contains("/Recovered/HiddenThis/") &&
                description.contains("[STHiddenThisApplier generated]") ||
            path.contains("/Recovered/LibraryContexts/") &&
                (description.contains("[STGlobalDataApplier]") ||
                 description.contains(APPLIER_MARKER)) &&
                description.contains("generated_layout_sha256=");
    }

    private boolean automaticTarget(TargetEvidence target) {
        return target.databaseBacked && !unsettledLocal(target);
    }

    private boolean autoThis(TargetEvidence target) {
        return target.kind.equals("parameter") && target.name.equals("this") &&
            target.locator.toLowerCase(Locale.ROOT).contains("auto");
    }

    private boolean namedReceiverType(Structure structure) {
        String path = structure.getPathName();
        return !path.contains("/Recovered/PointerShapes/") &&
            !path.contains("/Recovered/ClassPointees/") &&
            !path.contains("/Recovered/HiddenThis/");
    }

    private boolean anonymousTypePath(String path) {
        return path.contains("/Recovered/PointerShapes/") ||
            path.contains("/Recovered/ClassPointees/") ||
            path.contains("/Recovered/HiddenThis/") || leaf(path).startsWith("Anon");
    }

    private boolean scriptOwnedPointer(String comment) {
        if (comment == null || comment.isBlank()) return false;
        for (String marker : POINTER_OWNER_MARKERS)
            if (comment.contains(marker)) return true;
        return false;
    }

    private boolean protectedSource(SourceType source) {
        return source == SourceType.USER_DEFINED || source == SourceType.IMPORTED;
    }

    private boolean typeFamilyOwned(String comment) {
        return comment != null && comment.contains("[STTypeFamilyApplier]");
    }

    private boolean unsettledLocal(TargetEvidence target) {
        return target.kind.equals("local") && target.functionAddress != null &&
            unsettledFunctions.contains(target.functionAddress);
    }

    private SemanticChoice semanticChoice(TargetEvidence target) {
        if (target.typeEvidence.size() == 1) return new SemanticChoice(
            target.typeEvidence.keySet().iterator().next(), "unique typed-call evidence");
        List<Map.Entry<String, Integer>> ranked = new ArrayList<>(target.typeEvidence.entrySet());
        ranked.sort((left, right) -> Integer.compare(right.getValue(), left.getValue()));
        Map.Entry<String, Integer> top = ranked.get(0);
        Map.Entry<String, Integer> second = ranked.get(1);
        Structure winner = structureFromPointer(top.getKey());
        if (winner == null || top.getValue() < 3 || top.getValue() < second.getValue() * 3 ||
                !semanticCompatible(winner, target)) return null;
        for (int index = 1; index < ranked.size(); index++) {
            Structure competitor = structureFromPointer(ranked.get(index).getKey());
            if (competitor == null || competitor.getLength() > winner.getLength()) return null;
        }
        return new SemanticChoice(top.getKey(), "dominant most-derived typed-call evidence");
    }

    private String anonymousPath(TargetEvidence target) {
        String owner = target.kind.equals("global") ? "GLOBAL_" + target.locator :
            addr(target.functionAddress);
        owner = owner.replaceAll("[^A-Za-z0-9_]", "_");
        String hash = sha256(target.key + "|" + profile(target)).substring(0, 8)
            .toUpperCase(Locale.ROOT);
        return ANON_ROOT + "AnonShape_" + owner + "_" + hash;
    }

    private Structure matchExisting(TargetEvidence target) {
        if (target.fields.size() < 2) return null;
        int best = 0;
        Structure winner = null;
        boolean tie = false;
        for (Structure structure : structures) {
            String path = structure.getPathName();
            if (path.contains("/VTables/") || path.contains("/PointerShapes/") ||
                    structure.getLength() < shapeLength(target) ||
                    structure.getLength() > MAX_SHAPE_SIZE) continue;
            int score = 0;
            boolean conflict = false;
            for (FieldEvidence field : target.fields.values()) {
                int width = uniqueWidth(field);
                DataTypeComponent component = structure.getComponentContaining((int)field.offset);
                if (component == null) continue;
                if (component.getOffset() != field.offset || component.getLength() != width) {
                    if (!Undefined.isUndefined(component.getDataType())) conflict = true;
                    continue;
                }
                boolean semantic = component.getFieldName() != null &&
                    !component.getFieldName().isBlank() ||
                    !Undefined.isUndefined(component.getDataType());
                if (semantic) score++;
            }
            if (conflict || score < 2 || score != target.fields.size()) continue;
            if (score > best) { best = score; winner = structure; tie = false; }
            else if (score == best) tie = true;
        }
        return tie ? null : winner;
    }

    private List<FieldProposal> makeFieldProposals(String shapeId, TargetEvidence target) {
        List<FieldProposal> result = new ArrayList<>();
        for (FieldEvidence field : target.fields.values()) {
            int width = uniqueWidth(field);
            String type = selectedType(field, width);
            NestedEvidence nested = target.nested.get(field.offset);
            List<FieldEvidence> selected = nested == null ? List.of() :
                selectedNestedFields(nested);
            Structure knownNested = knownNestedType(nested);
            if (knownNested != null)
                type = pointerSpecification(nested.pointerDepth, knownNested.getPathName());
            else if (nested != null && usableNested(nested, selected))
                type = pointerSpecification(nested.pointerDepth,
                    nestedPath(target, field.offset, nested));
            else if (type.isBlank() || typeLength(type) != width)
                type = "/undefined" + width;
            boolean inlineEntries = inlineEntries(field, width);
            if (inlineEntries) type = "array:1:" + type;
            String name = proposedFieldName(field, width, nested);
            result.add(new FieldProposal(true, shapeId, field.offset, width, name, type,
                field.sites.size(), "fixed-offset dereference; observed_types=" + field.types +
                    "; indexed_strides=" + field.indexedStrides +
                    "; semantic_roles=" + field.roles));
        }
        return result;
    }

    private boolean inlineEntries(FieldEvidence field, int width) {
        return width > 0 && field.indexedStrides.size() == 1 &&
            field.indexedStrides.containsKey(width);
    }

    private String proposedFieldName(FieldEvidence field, int width,
            NestedEvidence nested) {
        boolean inlineEntries = inlineEntries(field, width);
        String semanticName = unique(field.roles);
        int semanticEvidence = semanticName.isBlank() ? 0 :
            field.roles.getOrDefault(semanticName, 0);
        if ("entries".equals(semanticName) && !inlineEntries) {
            // A differently-strided indexed view must not rename the dominant
            // scalar member at this offset.  Keep that scalar distinct from a
            // later compatible flexible tail.
            semanticName = "";
            semanticEvidence = 0;
        }
        return inlineEntries ? "entries" :
            semanticEvidence >= 2 ? semanticName :
            nested != null && nested.pointerDepth > 1 ?
                "entries_" + String.format("%04X", field.offset) :
                "field_" + String.format("%04X", field.offset);
    }

    private List<FieldProposal> makeNestedFieldProposals(String shapeId,
            NestedEvidence nested, List<FieldEvidence> selected) {
        List<FieldProposal> result = new ArrayList<>();
        for (FieldEvidence field : selected) {
            int width = uniqueWidth(field);
            String type = selectedType(field, width);
            if (type.isBlank() || typeLength(type) != width) type = "/undefined" + width;
            String semanticName = unique(field.roles);
            int semanticEvidence = semanticName.isBlank() ? 0 :
                field.roles.getOrDefault(semanticName, 0);
            String name = semanticEvidence >= 2 ? semanticName :
                "field_" + String.format("%04X", field.offset);
            result.add(new FieldProposal(true, shapeId, field.offset, width,
                name, type, field.sites.size(),
                "dereference through parent pointer field; observed_types=" + field.types +
                    "; semantic_roles=" + field.roles));
        }
        return result;
    }

    private boolean usableNested(NestedEvidence nested, List<FieldEvidence> selected) {
        return nested != null && nested.accessCount >= 2 && selected.size() >= 2 &&
            nestedLength(selected) <= MAX_SHAPE_SIZE;
    }

    private Structure knownNestedType(NestedEvidence nested) {
        if (nested == null) return null;
        if (knownDArray(nested.fields, nested.dArrayIndexEvidence)) {
            DataType candidate = dataTypes.getDataType(DARRAY_PATH);
            if (candidate instanceof Structure && compatibleFields((Structure)candidate,
                    nested.fields)) return (Structure)candidate;
        }
        return exactNamedNestedType(selectedNestedFields(nested));
    }

    private Structure exactNamedNestedType(List<FieldEvidence> fields) {
        if (fields.size() < 2) return null;
        int length = nestedLength(fields);
        Structure winner = null;
        for (Structure candidate : structures) {
            String path = candidate.getPathName();
            if (anonymousTypePath(path) || path.contains("/VTables/") ||
                    path.contains("/VTableFunctions/") || candidate.getLength() != length ||
                    candidate.getNumDefinedComponents() != fields.size() ||
                    meaningfulFieldCount(candidate) < 2) continue;
            boolean exact = true;
            for (FieldEvidence field : fields) {
                int width = uniqueWidth(field);
                String specification = selectedType(field, width);
                DataTypeComponent component = candidate.getComponentAt((int)field.offset);
                if (width < 1 || specification.isBlank() || component == null ||
                        component.getOffset() != field.offset ||
                        component.getLength() != width ||
                        !specification.equals(typeSpecification(component.getDataType()))) {
                    exact = false; break;
                }
            }
            if (!exact) continue;
            if (winner != null) return null;
            winner = candidate;
        }
        return winner;
    }

    private int meaningfulFieldCount(Structure structure) {
        int result = 0;
        for (DataTypeComponent component : structure.getDefinedComponents()) {
            String name = component.getFieldName();
            if (name != null && !name.isBlank() && !name.matches(
                    "(?i)(?:field|value|unknown|unk)(?:_?(?:0x)?[0-9a-f]+)?")) result++;
        }
        return result;
    }

    private boolean knownDArray(Map<Long, FieldEvidence> fields, int indexEvidence) {
        if (indexEvidence < 1) return false;
        FieldEvidence elementSize = fields.get(8L);
        FieldEvidence data = fields.get(0x1cL);
        return elementSize != null && data != null && uniqueWidth(elementSize) == 4 &&
            uniqueWidth(data) == 4;
    }

    private boolean compatibleFields(Structure structure, Map<Long, FieldEvidence> fields) {
        for (FieldEvidence field : fields.values()) {
            int width = field.widths.keySet().stream().mapToInt(Integer::intValue).max()
                .orElse(1);
            if (field.offset < 0 || field.offset + width > structure.getLength()) return false;
            DataTypeComponent component = structure.getComponentContaining((int)field.offset);
            if (component != null && !Undefined.isUndefined(component.getDataType()) &&
                    field.offset + width > component.getOffset() + component.getLength())
                return false;
        }
        return true;
    }

    // A union-like overlap cannot be expressed as an ordinary anonymous structure.
    // Keep the strongest non-overlapping interpretation and leave the alternatives
    // in evidence instead of emitting a corrupt layout.
    private List<FieldEvidence> selectedNestedFields(NestedEvidence nested) {
        if (nested == null) return List.of();
        List<FieldEvidence> candidates = nested.fields.values().stream()
            .filter(field -> uniqueWidth(field) > 0)
            .sorted(Comparator.<FieldEvidence>comparingInt(this::fieldEvidenceCount).reversed()
                .thenComparingLong(field -> field.offset))
            .toList();
        List<FieldEvidence> selected = new ArrayList<>();
        for (FieldEvidence candidate : candidates) {
            long start = candidate.offset;
            long end = start + uniqueWidth(candidate);
            boolean overlaps = selected.stream().anyMatch(field -> {
                long otherStart = field.offset;
                long otherEnd = otherStart + uniqueWidth(field);
                return start < otherEnd && otherStart < end;
            });
            if (!overlaps) selected.add(candidate);
        }
        selected.sort(Comparator.comparingLong(field -> field.offset));
        return selected;
    }

    private int fieldEvidenceCount(FieldEvidence field) {
        return field.widths.values().stream().mapToInt(Integer::intValue).sum();
    }

    private int nestedLength(List<FieldEvidence> fields) {
        long end = 0;
        for (FieldEvidence field : fields)
            end = Math.max(end, field.offset + uniqueWidth(field));
        return (int)end;
    }

    private String nestedPath(TargetEvidence target, long parentOffset,
            NestedEvidence nested) {
        String current = pointedStructure(target.expectedType);
        String libraryRoot = "/SubmarineTitans/Recovered/LibraryContexts/";
        if (current.startsWith(libraryRoot)) {
            String contextName = leaf(current);
            int contextMarker = contextName.indexOf("Context");
            if (contextMarker > 0) {
                String family = contextName.substring(0, contextMarker);
                String contextSuffix =
                    contextName.substring(contextMarker + "Context".length());
                return libraryRoot + family + "Entry" + contextSuffix + "_" +
                    String.format("%04X", parentOffset);
            }
        }
        if (!current.isBlank() && generatedRefinablePath(current)) {
            StringBuilder sharedProfile = new StringBuilder();
            for (FieldEvidence field : selectedNestedFields(nested))
                sharedProfile.append(field.offset).append(':')
                    .append(uniqueWidth(field)).append(';');
            String sharedHash = sha256(current + "|nested|" + parentOffset + "|" +
                sharedProfile).substring(0, 8).toUpperCase(Locale.ROOT);
            return ANON_ROOT + "AnonNested_" + leaf(current) + "_" +
                String.format("%04X", parentOffset) + "_" + sharedHash;
        }
        String owner = target.kind.equals("global") ? "GLOBAL_" + target.locator :
            addr(target.functionAddress);
        owner = owner.replaceAll("[^A-Za-z0-9_]", "_");
        StringBuilder profile = new StringBuilder();
        for (FieldEvidence field : selectedNestedFields(nested))
            profile.append(field.offset).append(':').append(uniqueWidth(field)).append(';');
        String hash = sha256(target.key + "|nested|" + parentOffset + "|" + profile)
            .substring(0, 8).toUpperCase(Locale.ROOT);
        return ANON_ROOT + "AnonNested_" + owner + "_" +
            String.format("%04X", parentOffset) + "_" + hash;
    }

    private String leaf(String path) {
        return path.substring(path.lastIndexOf('/') + 1);
    }

    private boolean validFields(TargetEvidence target) {
        if (target.fields.isEmpty() || shapeLength(target) > MAX_SHAPE_SIZE) return false;
        long end = -1;
        for (FieldEvidence field : target.fields.values()) {
            int width = uniqueWidth(field);
            if (width < 1 || field.offset < end) return false;
            end = field.offset + width;
        }
        return true;
    }

    private boolean compatible(Structure structure, TargetEvidence target) {
        if (structure.getLength() < shapeLength(target)) return false;
        for (FieldEvidence field : target.fields.values()) {
            int width = uniqueWidth(field);
            DataTypeComponent component = structure.getComponentContaining((int)field.offset);
            if (component == null || Undefined.isUndefined(component.getDataType())) continue;
            if (component.getOffset() > field.offset ||
                    field.offset + width > component.getOffset() + component.getLength()) return false;
        }
        return true;
    }

    private boolean semanticCompatible(Structure structure, TargetEvidence target) {
        for (FieldEvidence field : target.fields.values()) {
            int widest = field.widths.keySet().stream().mapToInt(Integer::intValue).max()
                .orElse(1);
            if (field.offset < 0 || field.offset + widest > structure.getLength()) return false;
        }
        return true;
    }

    private String profile(TargetEvidence target) {
        StringBuilder result = new StringBuilder();
        for (FieldEvidence field : target.fields.values())
            result.append(field.offset).append(':').append(uniqueWidth(field)).append(';');
        return result.toString();
    }

    private int shapeLength(TargetEvidence target) {
        long end = 0;
        for (FieldEvidence field : target.fields.values())
            end = Math.max(end, field.offset + Math.max(1, uniqueWidth(field)));
        return (int)end;
    }

    private int proposalLength(TargetEvidence target, TargetDecision decision) {
        int observed = shapeLength(target);
        DataType existing = dataTypes.getDataType(decision.typePath);
        return existing instanceof Structure structure ?
            Math.max(observed, structure.getLength()) : observed;
    }

    /**
     * Updating a generated shape must never discard an older field merely because a later
     * decompile lost an SSA alias.  Require the new observation to cover every currently
     * defined generated component with the same width and without contradicting a concrete
     * type.  Gaps are not components and may safely gain newly observed fields.
     */
    private boolean coversGeneratedFields(Structure structure, TargetEvidence target) {
        for (DataTypeComponent component : structure.getDefinedComponents()) {
            FieldEvidence field = target.fields.get((long)component.getOffset());
            int width = field == null ? -1 : uniqueWidth(field);
            if (field == null || width != component.getLength()) return false;
            String observed = selectedType(field, width);
            DataType componentType = componentValueType(component, field, width);
            if (!Undefined.isUndefined(componentType) && !observed.isBlank() &&
                    !observed.equals(typeSpecification(componentType))) return false;
        }
        return true;
    }

    private boolean needsGeneratedRefinement(Structure structure, TargetEvidence target) {
        if (shapeLength(target) > structure.getLength()) return true;
        for (FieldEvidence field : target.fields.values()) {
            int width = uniqueWidth(field);
            if (width < 1) continue;
            DataTypeComponent component = structure.getComponentAt((int)field.offset);
            if (component == null || component.getOffset() != field.offset ||
                    component.getLength() != width) return true;
            String observed = selectedType(field, width);
            DataType componentType = componentValueType(component, field, width);
            NestedEvidence nested = target.nested.get(field.offset);
            if (nested != null) {
                Structure known = knownNestedType(nested);
                List<FieldEvidence> selected = selectedNestedFields(nested);
                if (known != null || usableNested(nested, selected)) {
                    String path = known != null ? known.getPathName() :
                        nestedPath(target, field.offset, nested);
                    String desired = pointerSpecification(nested.pointerDepth, path);
                    if (!desired.equals(typeSpecification(component.getDataType()))) return true;
                    if (nestedSemanticNamesNeedRefinement(nested, path)) return true;
                }
            }
            if (Undefined.isUndefined(componentType) && !observed.isBlank() &&
                    !observed.matches("/undefined(?:1|2|4|8)?") &&
                    typeLength(observed) == width) return true;
            boolean inlineEntries = inlineEntries(field, width);
            String semanticName = unique(field.roles);
            int semanticEvidence = semanticName.isBlank() ? 0 :
                field.roles.getOrDefault(semanticName, 0);
            if ("entries".equals(component.getFieldName()) &&
                    "entries".equals(semanticName) && !inlineEntries) return true;
            if (inlineEntries && !"entries".equals(component.getFieldName())) return true;
            if (!semanticName.isBlank() && semanticEvidence >= 2 &&
                    !("entries".equals(semanticName) && !inlineEntries) &&
                    !semanticName.equals(component.getFieldName())) return true;
        }
        return false;
    }

    private DataType componentValueType(DataTypeComponent component,
            FieldEvidence field, int width) {
        DataType type = untypedef(component.getDataType());
        if (type instanceof Array array && inlineEntries(field, width))
            return untypedef(array.getDataType());
        return type;
    }

    private boolean nestedSemanticNamesNeedRefinement(NestedEvidence nested,
            String typePath) {
        DataType candidate = dataTypes.getDataType(typePath);
        if (!(candidate instanceof Structure structure) ||
                !generatedAnonymousOwned(structure)) return false;
        for (FieldEvidence field : selectedNestedFields(nested)) {
            String semanticName = unique(field.roles);
            if (semanticName.isBlank() ||
                    field.roles.getOrDefault(semanticName, 0) < 2) continue;
            DataTypeComponent component =
                structure.getComponentAt((int)field.offset);
            if (component != null && component.getOffset() == field.offset &&
                    !semanticName.equals(component.getFieldName())) return true;
        }
        return false;
    }

    private int uniqueWidth(FieldEvidence field) {
        if (field.widths.size() == 1)
            return field.widths.keySet().iterator().next();
        // Keep union-like alternatives unresolved unless one physical width is
        // overwhelmingly the ordinary view.  This handles incidental low-byte
        // loads from a repeatedly word-typed packed field without silently
        // widening every mixed-width observation into one member.
        List<Map.Entry<Integer, Integer>> ranked =
            new ArrayList<>(field.widths.entrySet());
        ranked.sort(Comparator
            .<Map.Entry<Integer, Integer>>comparingInt(Map.Entry::getValue).reversed()
            .thenComparingInt(Map.Entry::getKey));
        Map.Entry<Integer, Integer> first = ranked.get(0);
        Map.Entry<Integer, Integer> second = ranked.get(1);
        return first.getValue() >= 3 &&
            first.getValue() >= second.getValue() * 4 ? first.getKey() : -1;
    }

    private String selectedType(FieldEvidence field, int width) {
        List<String> concrete = field.types.keySet().stream()
            .filter(specification -> typeLength(specification) == width)
            .filter(specification ->
                !specification.matches("/undefined(?:1|2|4|8)?"))
            .toList();
        if (concrete.size() == 1) return concrete.get(0);
        if (concrete.isEmpty()) return "";
        List<String> ranked = new ArrayList<>(concrete);
        ranked.sort(Comparator
            .<String>comparingInt(type ->
                field.types.getOrDefault(type, 0)).reversed()
            .thenComparing(type -> type));
        int first = field.types.getOrDefault(ranked.get(0), 0);
        int second = field.types.getOrDefault(ranked.get(1), 0);
        return first >= 2 && first >= second * 2 ?
            ranked.get(0) : "";
    }

    private String ownerType(Function function) {
        String qualified = function.getName(true);
        int separator = qualified.lastIndexOf("::");
        if (separator <= 0 || qualified.startsWith("Library::")) return "";
        String owner = qualified.substring(0, separator);
        int ownerSeparator = owner.lastIndexOf("::");
        String leaf = ownerSeparator < 0 ? owner : owner.substring(ownerSeparator + 2);
        DataType direct = dataTypes.getDataType("/" + leaf);
        if (direct instanceof Structure) return direct.getPathName();
        List<DataType> matches = new ArrayList<>();
        dataTypes.findDataTypes(leaf, matches);
        Structure found = null;
        for (DataType match : matches) {
            if (!(match instanceof Structure structure) ||
                    structure.getPathName().contains("/VTables/")) continue;
            if (found != null && !found.getPathName().equals(structure.getPathName())) return "";
            found = structure;
        }
        return found == null ? "" : found.getPathName();
    }

    private String structurePointer(DataType type) {
        type = untypedef(type);
        if (!(type instanceof Pointer pointer)) return "";
        DataType pointed = untypedef(pointer.getDataType());
        return pointed instanceof Structure ? "pointer:" + pointed.getPathName() : "";
    }

    private Structure structureFromPointer(String specification) {
        if (!specification.startsWith("pointer:")) return null;
        DataType type = dataTypes.getDataType(specification.substring("pointer:".length()));
        return type instanceof Structure ? (Structure)type : null;
    }

    private String pointedStructure(String specification) {
        Structure structure = structureFromPointer(specification);
        return structure == null ? "" : structure.getPathName();
    }

    private boolean replaceable(String specification) {
        if (specification == null || specification.isBlank()) return true;
        String lower = specification.toLowerCase(Locale.ROOT);
        if (lower.matches("/undefined(?:1|2|4|8)?") ||
                lower.matches("/(?:u?int|long|ulong|dword|word|qword)")) return true;
        if (!lower.startsWith("pointer:")) return false;
        String pointed = lower.substring("pointer:".length());
        return pointed.matches("/(?:void|byte|char|uchar|undefined(?:1|2|4|8)?|u?int|long|ulong)");
    }

    private int accessWidth(String valueType) {
        String type = valueType.replaceAll("\\b(?:const|volatile|struct|class|enum)\\b", "")
            .trim().replaceAll("\\s+", " ");
        if (type.contains("*")) return currentProgram.getDefaultPointerSize();
        String lower = type.toLowerCase(Locale.ROOT);
        if (lower.matches("(?:bool|byte|char|uchar|undefined|undefined1|int8|uint8)")) return 1;
        if (lower.matches("(?:short|ushort|word|undefined2|int16|uint16)")) return 2;
        if (lower.matches("(?:int|uint|long|ulong|dword|undefined4|float|int32|uint32)")) return 4;
        if (lower.matches("(?:longlong|ulonglong|qword|undefined8|double|int64|uint64)")) return 8;
        DataType found = findType(type);
        return found == null ? -1 : found.getLength();
    }

    private String valueTypeSpecification(String valueType, int width) {
        String type = valueType.replaceAll("\\b(?:const|volatile|struct|class|enum)\\b", "")
            .trim().replaceAll("\\s+", " ");
        if (type.endsWith("*")) {
            String base = type.substring(0, type.length() - 1).trim();
            DataType pointed = findType(base);
            if (pointed != null) return "pointer:" + pointed.getPathName();
            return "/undefined" + width;
        }
        DataType found = findType(type);
        return found == null || found.getLength() != width ? "/undefined" + width :
            found.getPathName();
    }

    private DataType findType(String displayName) {
        if (displayName == null || displayName.isBlank()) return null;
        String normalized = displayName.trim();
        DataType direct = dataTypes.getDataType(normalized.startsWith("/") ? normalized :
            "/" + normalized);
        if (direct != null) return direct;
        List<DataType> matches = new ArrayList<>();
        dataTypes.findDataTypes(normalized, matches);
        DataType found = null;
        for (DataType match : matches) {
            if (match.getName().equals(normalized) || match.getDisplayName().equals(normalized)) {
                if (found != null && !found.isEquivalent(match)) return null;
                found = match;
            }
        }
        return found;
    }

    private int typeLength(String specification) {
        if (specification.startsWith("array:")) {
            int separator = specification.indexOf(':', "array:".length());
            if (separator < 0) return -1;
            try {
                int count = Integer.parseInt(
                    specification.substring("array:".length(), separator));
                int element = typeLength(specification.substring(separator + 1));
                return count < 1 || element < 1 ? -1 : count * element;
            }
            catch (NumberFormatException ignored) { return -1; }
        }
        if (specification.startsWith("pointer:")) return currentProgram.getDefaultPointerSize();
        DataType type = dataTypes.getDataType(specification);
        return type == null ? -1 : type.getLength();
    }

    private String typeSpecification(DataType type) {
        type = untypedef(type);
        if (type instanceof Pointer pointer && pointer.getDataType() != null)
            return "pointer:" + typeSpecification(pointer.getDataType());
        return type == null ? "" : type.getPathName();
    }

    private String pointerSpecification(int depth, String path) {
        return "pointer:".repeat(Math.max(1, depth)) + path;
    }

    private boolean generatedRefinablePath(String path) {
        return anonymousTypePath(path) ||
            path.contains("/Recovered/LibraryContexts/");
    }

    private boolean generatedOwnedPointer(DataType type) {
        type = untypedef(type);
        if (!(type instanceof Pointer pointer)) return false;
        type = untypedef(pointer.getDataType());
        return type instanceof Structure structure &&
            generatedAnonymousOwned(structure);
    }

    private DataType untypedef(DataType type) {
        while (type instanceof TypeDef typedef) type = typedef.getBaseDataType();
        return type;
    }

    private String unique(Map<String, Integer> values) {
        return values.size() == 1 ? values.keySet().iterator().next() : "";
    }

    private long parseUnsigned(String value) {
        return value.startsWith("0x") || value.startsWith("0X") ?
            Long.parseUnsignedLong(value.substring(2), 16) : Long.parseLong(value);
    }

    private boolean isLibrary(Function function) {
        for (FunctionTag tag : function.getTags())
            if (tag.getName().equals("LIBRARY") || tag.getName().startsWith("LIBRARY_"))
                return true;
        return false;
    }

    private File outputDirectory() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException("Output directory is required");
        return askDirectory("Select recovery output directory", "Select");
    }

    private Address onlyFunction() {
        String[] args = getScriptArgs();
        if (args.length < 2 || args[1].isBlank()) return null;
        Address result = currentProgram.getAddressFactory().getAddress(args[1]);
        if (result == null) throw new IllegalArgumentException("Invalid function address " + args[1]);
        return result;
    }

    private Path programDirectory(File selected) {
        Path path = selected.toPath().toAbsolutePath().normalize();
        if (path.getFileName() != null && path.getFileName().toString()
                .equals(currentProgram.getName())) return path;
        return path.resolve(currentProgram.getName());
    }

    private void writeTypes(Path path, List<TypeProposal> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\tshape_id\ttype_path\tlength\ttarget_count\tfield_count\tconfidence\treason\n");
            for (TypeProposal row : rows) out.write(bit(row.apply) + "\t" + row.shapeId +
                "\t" + row.typePath + "\t" + row.length + "\t" + row.targetCount + "\t" +
                row.fieldCount + "\t" + row.confidence + "\t" + tsv(row.reason) + "\n");
        }
    }

    private void writeFields(Path path, List<FieldProposal> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\tshape_id\toffset\tsize\tproposed_name\tproposed_type\tevidence_count\treason\n");
            for (FieldProposal row : rows) out.write(bit(row.apply) + "\t" + row.shapeId +
                "\t" + row.offset + "\t" + row.size + "\t" + row.name + "\t" + row.type +
                "\t" + row.evidenceCount + "\t" + tsv(row.reason) + "\n");
        }
    }

    private void writeTargets(Path path, List<TargetProposal> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\tfunction_address\tfunction_name\ttarget_kind\ttarget_name\ttarget_locator\t" +
                "expected_type\texpected_source\tproposed_type\taccess_count\tfield_count\tconfidence\t" +
                "type_evidence\tevidence_sites\treason\n");
            for (TargetProposal row : rows) out.write(bit(row.apply) + "\t" +
                row.functionAddress + "\t" + tsv(row.functionName) + "\t" + row.kind + "\t" +
                tsv(row.name) + "\t" + tsv(row.locator) + "\t" + row.expectedType + "\t" +
                row.expectedSource + "\t" + row.proposedType + "\t" + row.accessCount + "\t" +
                row.fieldCount + "\t" + row.confidence + "\t" + tsv(row.typeEvidence) + "\t" +
                tsv(row.sites) + "\t" + tsv(row.reason) + "\n");
        }
    }

    private void writeTargetJson(Path path, List<TargetProposal> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            for (TargetProposal row : rows) out.write("{\"apply\":" + row.apply +
                ",\"function_address\":\"" + json(row.functionAddress) +
                "\",\"function_name\":\"" + json(row.functionName) +
                "\",\"target_kind\":\"" + json(row.kind) +
                "\",\"target_name\":\"" + json(row.name) +
                "\",\"target_locator\":\"" + json(row.locator) +
                "\",\"expected_type\":\"" + json(row.expectedType) +
                "\",\"proposed_type\":\"" + json(row.proposedType) +
                "\",\"confidence\":\"" + json(row.confidence) +
                "\",\"reason\":\"" + json(row.reason) + "\"}\n");
        }
    }

    private void writeFailures(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("function_address\tfunction_name\treason\n");
            for (Failure failure : failures) out.write(addr(failure.function.getEntryPoint()) +
                "\t" + tsv(failure.function.getName(true)) + "\t" + tsv(failure.reason) + "\n");
        }
    }

    private void writeSummary(Path path, Analysis analysis) throws Exception {
        List<String> lines = List.of(
            "program=" + currentProgram.getName(),
            "functions_seen=" + functionsSeen,
            "functions_with_raw_access=" + functionsWithRawAccess,
            "raw_accesses=" + rawAccesses,
            "nested_pointer_accesses=" + nestedPointerAccesses,
            "pointer_field_aliases=" + pointerFieldAliases,
            "redirected_alias_accesses=" + redirectedAliasAccesses,
            "global_record_type_hints=" + globalRecordTypeHints,
            "owner_this_spill_repairs=" + ownerThisSpillRepairs,
            "typed_field_consumer_hints=" + typedFieldConsumerHints,
            "targets=" + analysis.targets.size(),
            "target_apply=" + analysis.targets.stream().filter(row -> row.apply).count(),
            "existing_type_targets=" + analysis.targets.stream()
                .filter(row -> row.apply && !row.proposedType.contains("/PointerShapes/" )).count(),
            "anonymous_type_targets=" + analysis.targets.stream()
                .filter(row -> row.apply && row.proposedType.contains("/PointerShapes/" )).count(),
            "anonymous_types=" + analysis.types.stream().filter(row -> row.apply).count(),
            "decompile_failures=" + failures.size(),
            "unsettled_type_propagation_functions=" + unsettledFunctions.size(),
            "policy=known structure from typed calls first; field-only existing-type matches require review; " +
                "one anonymous type per persistent multi-field target",
            "role_safety=locals in functions with unsettled type propagation are never auto-typed; " +
                "use STPointerRoleRepairAnalyzer/Applier for prior script-owned assignments",
            "manual_safety=USER_DEFINED/IMPORTED targets are never auto-replaced; concrete " +
                "types change only for script-owned unadjusted direct-this spills"
        );
        Files.write(path, lines, StandardCharsets.UTF_8);
    }

    private String sha256(String value) {
        try {
            byte[] digest = MessageDigest.getInstance("SHA-256")
                .digest(value.getBytes(StandardCharsets.UTF_8));
            StringBuilder result = new StringBuilder();
            for (byte item : digest) result.append(String.format("%02x", item & 0xff));
            return result.toString();
        }
        catch (Exception exception) {
            throw new IllegalStateException(exception);
        }
    }

    private static String addr(Address value) {
        return value == null ? "" : value.toString().toUpperCase(Locale.ROOT);
    }
    private static int bit(boolean value) { return value ? 1 : 0; }
    private static String tsv(String value) {
        if (value == null) return "";
        return value.replace("\\", "\\\\").replace("\t", "\\t")
            .replace("\r", "\\r").replace("\n", "\\n");
    }
    private static String json(String value) {
        if (value == null) return "";
        return value.replace("\\", "\\\\").replace("\"", "\\\"")
            .replace("\r", "\\r").replace("\n", "\\n").replace("\t", "\\t");
    }

    private static class TargetEvidence {
        final String key, kind, functionName, name, locator, expectedType, expectedSource;
        final Address functionAddress;
        final boolean scriptOwned, typeFamilyOwned, databaseBacked;
        final Map<Long, FieldEvidence> fields = new TreeMap<>();
        final Map<Long, NestedEvidence> nested = new TreeMap<>();
        final Map<String, Integer> typeEvidence = new TreeMap<>();
        final Set<String> typeSites = new TreeSet<>();
        final Set<String> functions = new TreeSet<>();
        boolean discriminatedPayload;
        String directThisOwner = "";
        int accessCount, dArrayIndexEvidence;
        TargetEvidence(String key, String kind, Address functionAddress, String functionName,
                String name, String locator, String expectedType, String expectedSource,
                boolean scriptOwned, boolean typeFamilyOwned, boolean databaseBacked) {
            this.key = key; this.kind = kind; this.functionAddress = functionAddress;
            this.functionName = functionName; this.name = name; this.locator = locator;
            this.expectedType = expectedType; this.expectedSource = expectedSource;
            this.scriptOwned = scriptOwned; this.typeFamilyOwned = typeFamilyOwned;
            this.databaseBacked = databaseBacked;
        }
    }
    private record CallSite(Function function, List<String> arguments) {}
    private record SemanticChoice(String specification, String reason) {}
    private record PointerAlias(TargetEvidence parent, long parentOffset, long childBaseOffset,
        int elementWidth, String elementType) {}
    private static class NestedEvidence {
        final long parentOffset;
        final Map<Long, FieldEvidence> fields = new TreeMap<>();
        int accessCount, dArrayIndexEvidence, pointerDepth = 1;
        NestedEvidence(long parentOffset) { this.parentOffset = parentOffset; }
    }
    private static class MergedGeneratedEvidence {
        final Map<Long, FieldEvidence> fields = new TreeMap<>();
        final Map<Long, NestedEvidence> nested = new TreeMap<>();
        boolean baselineSeeded;
    }
    private static class FieldEvidence {
        final long offset;
        final Map<Integer, Integer> widths = new TreeMap<>();
        final Map<String, Integer> types = new TreeMap<>();
        final Map<Integer, Integer> indexedStrides = new TreeMap<>();
        final Map<String, Integer> roles = new TreeMap<>();
        final Set<String> sites = new TreeSet<>();
        FieldEvidence(long offset) { this.offset = offset; }
    }
    private static class MergedComponent {
        final long offset;
        final int width;
        String type;
        final Set<String> sources = new TreeSet<>();
        MergedComponent(long offset, int width, String type) {
            this.offset = offset;
            this.width = width;
            this.type = type == null ? "" : type;
        }
    }
    private static class TargetDecision {
        final boolean apply, anonymous;
        final String typePath, confidence, reason;
        TargetDecision(boolean apply, boolean anonymous, String typePath,
                String confidence, String reason) {
            this.apply = apply; this.anonymous = anonymous; this.typePath = typePath;
            this.confidence = confidence; this.reason = reason;
        }
    }
    private static class TypeProposal {
        boolean apply;
        final String shapeId, typePath, confidence, reason;
        final int length, fieldCount;
        int targetCount;
        TypeProposal(boolean apply, String shapeId, String typePath, int length,
                int targetCount, int fieldCount, String confidence, String reason) {
            this.apply = apply; this.shapeId = shapeId; this.typePath = typePath;
            this.length = length; this.targetCount = targetCount; this.fieldCount = fieldCount;
            this.confidence = confidence; this.reason = reason;
        }
    }
    private static class FieldProposal {
        final boolean apply;
        final String shapeId, name, type, reason;
        final long offset;
        final int size, evidenceCount;
        FieldProposal(boolean apply, String shapeId, long offset, int size, String name,
                String type, int evidenceCount, String reason) {
            this.apply = apply; this.shapeId = shapeId; this.offset = offset; this.size = size;
            this.name = name; this.type = type; this.evidenceCount = evidenceCount;
            this.reason = reason;
        }
    }
    private static class TargetProposal {
        final boolean apply;
        final String functionAddress, functionName, kind, name, locator, expectedType,
            expectedSource, proposedType, confidence, typeEvidence, sites, reason;
        final int accessCount, fieldCount;
        TargetProposal(boolean apply, TargetEvidence target, TargetDecision decision) {
            this.apply = apply;
            this.functionAddress = addr(target.functionAddress);
            this.functionName = target.functionName; this.kind = target.kind;
            this.name = target.name; this.locator = target.locator;
            this.expectedType = target.expectedType; this.expectedSource = target.expectedSource;
            this.proposedType = decision.typePath.isBlank() ? "" : "pointer:" + decision.typePath;
            this.accessCount = target.accessCount; this.fieldCount = target.fields.size();
            this.confidence = decision.confidence;
            this.typeEvidence = target.typeEvidence.toString();
            Set<String> allSites = new LinkedHashSet<>();
            allSites.addAll(target.typeSites);
            for (FieldEvidence field : target.fields.values()) allSites.addAll(field.sites);
            this.sites = String.join(" | ", allSites);
            this.reason = decision.reason;
        }
    }
    private static class Failure {
        final Function function; final String reason;
        Failure(Function function, String reason) {
            this.function = function; this.reason = reason == null ? "" : reason;
        }
    }
    private record Analysis(List<TypeProposal> types, List<FieldProposal> fields,
        List<TargetProposal> targets) {}
}
