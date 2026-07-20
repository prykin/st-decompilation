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
import ghidra.program.model.data.Pointer;
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
    private static final Pattern CONSTANT_INDEX = Pattern.compile(
        "(?<![A-Za-z0-9_$:])([A-Za-z_$][A-Za-z0-9_$:]*)\\s*" +
        "\\[\\s*(0[xX][0-9A-Fa-f]+|[0-9]+)\\s*\\]");
    private static final Pattern CALL_HEAD = Pattern.compile(
        "(?<![A-Za-z0-9_$:])([A-Za-z_$][A-Za-z0-9_$:]*)\\s*\\(");
    private static final Pattern SIMPLE_SWITCH = Pattern.compile(
        "\\bswitch\\s*\\(\\s*([A-Za-z_$][A-Za-z0-9_$:]*)\\s*\\)");
    private static final Pattern CASE_LABEL = Pattern.compile("(?m)^\\s*case\\s+[^:]+:");
    private static final Pattern ASSIGNMENT = Pattern.compile(
        "(?m)^\\s*([A-Za-z_$][A-Za-z0-9_$]*)\\s*=\\s*([^;\\r\\n]{1,500});");
    private static final Pattern HEX_CONSTANT = Pattern.compile("0[xX]([0-9A-Fa-f]+)");
    private static final Pattern PLAYER_STRIDE_TERM = Pattern.compile(
        "(?i)(?:0x0*a62|2658)\\b");
    private static final Pattern SIMPLE_IDENTIFIER = Pattern.compile(
        "[A-Za-z_$][A-Za-z0-9_$]*");

    private final Map<String, TargetEvidence> targets = new LinkedHashMap<>();
    private final List<Failure> failures = new ArrayList<>();
    private final List<Structure> structures = new ArrayList<>();
    private DecompInterface decompiler;
    private DataTypeManager dataTypes;
    private int functionsSeen;
    private int functionsWithRawAccess;
    private int rawAccesses;
    private int nestedPointerAccesses;
    private int pointerFieldAliases;
    private int redirectedAliasAccesses;
    private int globalRecordTypeHints;

    @Override
    protected void run() throws Exception {
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
        writeTargetJson(directory.resolve("pointer_shape_target_proposals.jsonl"), analysis.targets);
        writeFailures(directory.resolve("pointer_shape_decompile_failures.tsv"));
        writeSummary(directory.resolve("pointer_shape_summary.txt"), analysis);

        println("Pointer-shape analysis complete: " + directory.toAbsolutePath().normalize());
        println("Functions=" + functionsSeen + ", raw functions=" + functionsWithRawAccess +
            ", raw accesses=" + rawAccesses + ", nested=" + nestedPointerAccesses +
            ", pointer aliases=" + pointerFieldAliases + ", alias accesses=" +
            redirectedAliasAccesses + ", global-record hints=" +
            globalRecordTypeHints + ", targets=" + analysis.targets.size() +
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
        Map<String, Variable> locals = localVariables(function);
        Set<String> stableStorages = stableStorages(locals);
        Map<String, TargetEvidence> functionTargets = new LinkedHashMap<>();
        collectNestedAccesses(function, c, locals, stableStorages, functionTargets);
        Map<String, PointerAlias> aliases = collectPointerAliases(function, c, locals,
            stableStorages, functionTargets);
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
        collectDArrayEvidence(c, functionTargets, aliases);
        boolean hasRawAccess = rawAccesses != before;
        if (hasRawAccess) functionsWithRawAccess++;
        int recordHints = collectGlobalRecordTypeEvidence(function, c, locals,
            stableStorages, functionTargets);
        globalRecordTypeHints += recordHints;
        if (!hasRawAccess && recordHints == 0) return;
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
            if (!access.find() || access.start() != 0 || access.end() != expression.length())
                continue;
            String loadedType = access.group(1).trim();
            boolean declaredPointer = loadedType.contains("*");
            if (!declaredPointer && (accessWidth(loadedType) !=
                    currentProgram.getDefaultPointerSize() ||
                    !usedAsDereferenceBase(c, aliasName))) continue;
            String parentName = access.group(2);
            long parentOffset = parseUnsigned(access.group(3));
            int elementWidth = declaredPointer ? pointedElementWidth(loadedType) : 1;
            if (parentOffset < 0 || parentOffset + currentProgram.getDefaultPointerSize() >
                    MAX_SHAPE_SIZE || elementWidth < 1 || elementWidth > 16) continue;
            TargetEvidence parent = canonicalTarget(function, locals, stableStorages,
                functionTargets, parentName);
            if (parent == null) continue;
            recordPointerField(function, parent, parentOffset,
                "pointer-field alias " + aliasName + " = " + parentName + "+0x" +
                Long.toHexString(parentOffset).toUpperCase(Locale.ROOT));
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

    private boolean looksLikeDArrayIndex(String c, String name) {
        String n = Pattern.quote(name);
        String size = "\\*\\s*\\(\\s*(?:u?int|undefined4)\\s*\\*\\s*\\)\\s*" +
            "\\(\\s*(?:\\(\\s*int\\s*\\)\\s*)?" + n +
            "\\s*\\+\\s*(?:8|0[xX]0*8)\\s*\\)";
        String data = "\\*\\s*\\(\\s*(?:u?int|undefined4)\\s*\\*\\s*\\)\\s*" +
            "\\(\\s*(?:\\(\\s*int\\s*\\)\\s*)?" + n +
            "\\s*\\+\\s*(?:28|0[xX]0*1[cC])\\s*\\)";
        return Pattern.compile(size + "[^;\\r\\n]{0,160}\\+[^;\\r\\n]{0,80}" + data)
            .matcher(c).find() ||
            Pattern.compile(data + "[^;\\r\\n]{0,160}\\+[^;\\r\\n]{0,80}" + size)
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
        }
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
        parent.nested.computeIfAbsent(parentOffset, NestedEvidence::new);
    }

    private void recordNestedField(Function function, TargetEvidence parent, long parentOffset,
            long childOffset, int width, String type, String detail) {
        recordPointerField(function, parent, parentOffset, detail);
        NestedEvidence child = parent.nested.computeIfAbsent(parentOffset, NestedEvidence::new);
        FieldEvidence field = child.fields.computeIfAbsent(childOffset, FieldEvidence::new);
        field.widths.merge(width, 1, Integer::sum);
        if (type != null && !type.isBlank()) field.types.merge(type, 1, Integer::sum);
        field.sites.add(addr(function.getEntryPoint()) + " " + detail);
        child.accessCount++;
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
                source, comment.contains(APPLIER_MARKER), stableStorages.contains(storage));
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
            comment != null && comment.contains(APPLIER_MARKER), true);
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
                    if (type.isBlank()) continue;
                    int weight = parameters[index].getSource() == SourceType.USER_DEFINED ||
                        parameters[index].getSource() == SourceType.IMPORTED ? 3 : 1;
                    addTypeEvidence(arguments.get(index), containing, locals, stableStorages,
                        functionTargets, type, weight, site + " parameter " +
                        parameters[index].getName());
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
        Map<String, TypeProposal> types = new LinkedHashMap<>();
        Map<String, List<FieldProposal>> fields = new LinkedHashMap<>();
        List<TargetProposal> targetRows = new ArrayList<>();
        for (TargetEvidence target : targets.values()) {
            TargetDecision decision = decide(target);
            if (decision.anonymous && !decision.typePath.isBlank()) {
                String shapeId = decision.typePath.substring(decision.typePath.lastIndexOf('/') + 1);
                TypeProposal type = types.computeIfAbsent(shapeId, ignored ->
                    new TypeProposal(decision.apply, shapeId, decision.typePath,
                        shapeLength(target), 0, target.fields.size(), decision.confidence,
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

    private TargetDecision decide(TargetEvidence target) {
        if (target.discriminatedPayload &&
                (replaceable(target.expectedType) || target.scriptOwned))
            return new TargetDecision(false, false, "", "review",
                "parameter is a payload carrier used by multiple switch arms; " +
                "typed-call evidence is variant-specific and must not become one persistent type");

        String currentStructure = pointedStructure(target.expectedType);
        if (!currentStructure.isBlank()) return new TargetDecision(false, false,
            currentStructure, "existing", "target already has a structure pointer type");

        if (!target.typeEvidence.isEmpty()) {
            SemanticChoice choice = semanticChoice(target);
            if (choice == null) return new TargetDecision(false, false, "", "conflict",
                "conflicting semantic type evidence=" + target.typeEvidence);
            Structure structure = structureFromPointer(choice.specification);
            if (structure == null) return new TargetDecision(false, false, "", "review",
                "semantic type is missing or not a structure: " + choice.specification);
            if (!target.fields.isEmpty() && !semanticCompatible(structure, target))
                return new TargetDecision(false, false, "",
                "conflict", "semantic type " + choice.specification +
                    " is shorter than or conflicts with offsets");
            boolean replaceable = replaceable(target.expectedType) || target.scriptOwned;
            boolean apply = replaceable && target.databaseBacked;
            String suffix = apply ? "" : !replaceable ? "; concrete target type preserved" :
                "; transient decompiler symbol requires review";
            return new TargetDecision(apply, false, structure.getPathName(),
                apply ? "high" : "review", choice.reason + "=" +
                target.typeEvidence + suffix);
        }

        if (knownDArray(target.fields, target.dArrayIndexEvidence)) {
            DataType candidate = dataTypes.getDataType(DARRAY_PATH);
            Structure darray = candidate instanceof Structure ? (Structure)candidate : null;
            boolean replaceable = replaceable(target.expectedType) || target.scriptOwned;
            boolean layoutCompatible = darray != null &&
                compatibleFields(darray, target.fields);
            boolean apply = layoutCompatible && replaceable && target.databaseBacked;
            return new TargetDecision(apply, false,
                !layoutCompatible ? "" : darray.getPathName(), apply ? "high" : "review",
                "DArray elementSize*index+data addressing idiom" +
                (darray == null ? "; recovered DArrayTy is missing" : "") +
                (darray != null && !layoutCompatible ?
                    "; other observed offsets conflict with DArrayTy" : "") +
                (!replaceable ? "; concrete target type preserved" : "") +
                (!target.databaseBacked ?
                    "; transient decompiler symbol requires review" : ""));
        }

        if (!validFields(target)) return new TargetDecision(false, false, "", "review",
            "conflicting or invalid access widths");

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
        boolean apply = (multiField || strongNested) && replaceable && target.databaseBacked;
        String reason = multiField ? "multiple consistent fixed offsets in one persistent target" :
            strongNested ? "consistent nested offsets through a pointer field in one persistent target" :
            "single/weak fixed-offset profile retained for review";
        if (!replaceable) reason += "; concrete target type preserved";
        else if (!target.databaseBacked)
            reason += "; transient decompiler symbol requires review";
        return new TargetDecision(apply, true, path, apply ? "layout" : "review", reason);
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
            String type = unique(field.types);
            NestedEvidence nested = target.nested.get(field.offset);
            List<FieldEvidence> selected = nested == null ? List.of() :
                selectedNestedFields(nested);
            Structure knownNested = knownNestedType(nested);
            if (knownNested != null) type = "pointer:" + knownNested.getPathName();
            else if (nested != null && usableNested(nested, selected))
                type = "pointer:" + nestedPath(target, field.offset, nested);
            else if (type.isBlank() || typeLength(type) != width)
                type = "/undefined" + width;
            String name = "field_" + String.format("%04X", field.offset);
            result.add(new FieldProposal(true, shapeId, field.offset, width, name, type,
                field.sites.size(), "fixed-offset dereference; observed_types=" + field.types));
        }
        return result;
    }

    private List<FieldProposal> makeNestedFieldProposals(String shapeId,
            NestedEvidence nested, List<FieldEvidence> selected) {
        List<FieldProposal> result = new ArrayList<>();
        for (FieldEvidence field : selected) {
            int width = uniqueWidth(field);
            String type = unique(field.types);
            if (type.isBlank() || typeLength(type) != width) type = "/undefined" + width;
            result.add(new FieldProposal(true, shapeId, field.offset, width,
                "field_" + String.format("%04X", field.offset), type, field.sites.size(),
                "dereference through parent pointer field; observed_types=" + field.types));
        }
        return result;
    }

    private boolean usableNested(NestedEvidence nested, List<FieldEvidence> selected) {
        return nested != null && nested.accessCount >= 2 && selected.size() >= 2 &&
            nestedLength(selected) <= MAX_SHAPE_SIZE;
    }

    private Structure knownNestedType(NestedEvidence nested) {
        if (nested == null || !knownDArray(nested.fields, nested.dArrayIndexEvidence)) return null;
        DataType candidate = dataTypes.getDataType(DARRAY_PATH);
        return candidate instanceof Structure && compatibleFields((Structure)candidate,
            nested.fields) ? (Structure)candidate : null;
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
        return (int)((end + 3) & ~3L);
    }

    private String nestedPath(TargetEvidence target, long parentOffset,
            NestedEvidence nested) {
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
        return (int)((end + 3) & ~3L);
    }

    private int uniqueWidth(FieldEvidence field) {
        if (field.widths.size() != 1) return -1;
        return field.widths.keySet().iterator().next();
    }

    private String ownerType(Function function) {
        String qualified = function.getName(true);
        int separator = qualified.lastIndexOf("::");
        if (separator <= 0 || qualified.startsWith("Library::")) return "";
        String owner = qualified.substring(0, separator);
        String leaf = owner.substring(owner.lastIndexOf("::") + 2);
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
        if (specification.startsWith("pointer:")) return currentProgram.getDefaultPointerSize();
        DataType type = dataTypes.getDataType(specification);
        return type == null ? -1 : type.getLength();
    }

    private String typeSpecification(DataType type) {
        type = untypedef(type);
        if (type instanceof Pointer pointer && pointer.getDataType() != null)
            return "pointer:" + untypedef(pointer.getDataType()).getPathName();
        return type == null ? "" : type.getPathName();
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
            "targets=" + analysis.targets.size(),
            "target_apply=" + analysis.targets.stream().filter(row -> row.apply).count(),
            "existing_type_targets=" + analysis.targets.stream()
                .filter(row -> row.apply && !row.proposedType.contains("/PointerShapes/" )).count(),
            "anonymous_type_targets=" + analysis.targets.stream()
                .filter(row -> row.apply && row.proposedType.contains("/PointerShapes/" )).count(),
            "anonymous_types=" + analysis.types.stream().filter(row -> row.apply).count(),
            "decompile_failures=" + failures.size(),
            "policy=known structure from typed calls first; field-only existing-type matches require review; " +
                "one anonymous type per persistent multi-field target",
            "manual_safety=USER_DEFINED/IMPORTED and concrete non-generic target types are never auto-replaced"
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
        final boolean scriptOwned, databaseBacked;
        final Map<Long, FieldEvidence> fields = new TreeMap<>();
        final Map<Long, NestedEvidence> nested = new TreeMap<>();
        final Map<String, Integer> typeEvidence = new TreeMap<>();
        final Set<String> typeSites = new TreeSet<>();
        final Set<String> functions = new TreeSet<>();
        boolean discriminatedPayload;
        int accessCount, dArrayIndexEvidence;
        TargetEvidence(String key, String kind, Address functionAddress, String functionName,
                String name, String locator, String expectedType, String expectedSource,
                boolean scriptOwned, boolean databaseBacked) {
            this.key = key; this.kind = kind; this.functionAddress = functionAddress;
            this.functionName = functionName; this.name = name; this.locator = locator;
            this.expectedType = expectedType; this.expectedSource = expectedSource;
            this.scriptOwned = scriptOwned; this.databaseBacked = databaseBacked;
        }
    }
    private record CallSite(Function function, List<String> arguments) {}
    private record SemanticChoice(String specification, String reason) {}
    private record PointerAlias(TargetEvidence parent, long parentOffset, long childBaseOffset,
        int elementWidth, String elementType) {}
    private static class NestedEvidence {
        final long parentOffset;
        final Map<Long, FieldEvidence> fields = new TreeMap<>();
        int accessCount, dArrayIndexEvidence;
        NestedEvidence(long parentOffset) { this.parentOffset = parentOffset; }
    }
    private static class FieldEvidence {
        final long offset;
        final Map<Integer, Integer> widths = new TreeMap<>();
        final Map<String, Integer> types = new TreeMap<>();
        final Set<String> sites = new TreeSet<>();
        FieldEvidence(long offset) { this.offset = offset; }
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
