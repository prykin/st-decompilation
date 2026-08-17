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
import java.util.Collection;
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

import ghidra.app.decompiler.DecompileResults;
import ghidra.app.decompiler.parallel.DecompilerCallback;
import ghidra.app.decompiler.parallel.ParallelDecompiler;
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
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.listing.Variable;
import ghidra.program.model.lang.Register;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.Symbol;
import ghidra.program.model.pcode.PcodeOp;
import ghidra.util.task.TaskMonitor;

public class STPointerShapeAnalyzer extends GhidraScript {
    private static final int DECOMPILE_TIMEOUT = 30;
    private static final int LARGE_DECOMPILE_TIMEOUT = 120;
    private static final int RETRY_DECOMPILE_TIMEOUT = 300;
    private static final long LARGE_FUNCTION_BYTES = 0x4000;
    private static final int MAX_SHAPE_SIZE = 0x4000;
    private static final String DARRAY_PATH = "/SubmarineTitans/Recovered/DArrayTy";
    private static final String ANON_ROOT = "/SubmarineTitans/Recovered/PointerShapes/";
    private static final String APPLIER_MARKER = "[STPointerShapeApplier]";
    private static final Set<String> POINTER_OWNER_MARKERS = Set.of(
        APPLIER_MARKER, "[STTypeFamilyApplier]", "[STGlobalDataApplier]");

    // Examples covered:
    //   *(uint *)(local_20 + 0xc)
    //   *(undefined4 *)((int)DAT_global + 0xe4)
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
    private static final Pattern SIMPLE_IDENTIFIER = Pattern.compile(
        "[A-Za-z_$][A-Za-z0-9_$]*");
    private static final Pattern LOCAL_STRUCTURE_DECLARATION = Pattern.compile(
        "(?m)^\\s*([A-Za-z_$][A-Za-z0-9_$:]*)\\s+" +
        "([A-Za-z_$][A-Za-z0-9_$]*)\\s*;");
    private static final Pattern LOCAL_STRUCTURE_POINTER_DECLARATION = Pattern.compile(
        "(?m)^\\s*([A-Za-z_$][A-Za-z0-9_$:]*)\\s*\\*\\s*" +
        "([A-Za-z_$][A-Za-z0-9_$]*)\\s*;");
    private static final Pattern RENDERED_POINTER_DECLARATION = Pattern.compile(
        "(?m)^\\s*([A-Za-z_$][A-Za-z0-9_$: ]*)\\s*(\\*+)\\s*" +
        "([A-Za-z_$][A-Za-z0-9_$]*)\\s*;");
    private static final Pattern RENDERED_POINTER_PARAMETER = Pattern.compile(
        "(?:\\(|,)\\s*([A-Za-z_$][A-Za-z0-9_$: ]*)\\s*(\\*+)\\s*" +
        "([A-Za-z_$][A-Za-z0-9_$]*)(?=\\s*[,\\)])");
    private static final Pattern TYPED_BASE_ZERO_ACCESS = Pattern.compile(
        "\\*\\s*\\(\\s*([^()\\r\\n]{1,80}?)\\s*\\*\\s*\\)\\s*" +
        "([A-Za-z_$][A-Za-z0-9_$:]*)(?![A-Za-z0-9_$:]|\\s*(?:->|\\+|\\[))");
    private static final Pattern TYPED_MEMBER_REINTERPRET = Pattern.compile(
        "\\*\\s*\\(\\s*([^()\\r\\n]{1,80}?)\\s*\\*\\s*\\)\\s*&\\s*" +
        "([A-Za-z_$][A-Za-z0-9_$:]*)\\s*->\\s*" +
        "([A-Za-z_$][A-Za-z0-9_$:]*)");
    private static final Pattern INDEXED_MEMBER_REFERENCE = Pattern.compile(
        "(?<![A-Za-z0-9_$:])([A-Za-z_$][A-Za-z0-9_$:]*)\\s*" +
        "\\[\\s*(0[xX][0-9A-Fa-f]+|[0-9]+)\\s*\\]\\s*\\.\\s*" +
        "([A-Za-z_$][A-Za-z0-9_$:]*)");
    private static final Pattern ADDRESS_OF_INDEXED_MEMBER = Pattern.compile(
        "&\\s*([A-Za-z_$][A-Za-z0-9_$:]*)\\s*" +
        "\\[\\s*(0[xX][0-9A-Fa-f]+|[0-9]+)\\s*\\]\\s*\\.\\s*" +
        "([A-Za-z_$][A-Za-z0-9_$:]*)");
    private static final Pattern TYPED_INDEXED_MEMBER_REINTERPRET = Pattern.compile(
        "\\*\\s*\\(\\s*([^()\\r\\n]{1,80}?)\\s*\\*\\s*\\)\\s*&\\s*" +
        "([A-Za-z_$][A-Za-z0-9_$:]*)\\s*" +
        "\\[\\s*(0[xX][0-9A-Fa-f]+|[0-9]+)\\s*\\]\\s*\\.\\s*" +
        "([A-Za-z_$][A-Za-z0-9_$:]*)");
    private static final Pattern PIECE_ASSIGNMENT = Pattern.compile(
        "(?m)^\\s*([A-Za-z_$][A-Za-z0-9_$]*)\\._([0-9]+)_([0-9]+)_\\s*=\\s*" +
        "([^;\\r\\n]+);");
    private static final Pattern FIELD_ASSIGNMENT = Pattern.compile(
        "(?m)^\\s*([A-Za-z_$][A-Za-z0-9_$]*)\\.field_(?:0[xX])?" +
        "([0-9A-Fa-f]+)\\s*=\\s*([^;\\r\\n]+);");
    private static final Pattern LEADING_CAST = Pattern.compile(
        "^\\(\\s*([^()\\r\\n]{1,80})\\s*\\)\\s*(.+)$");
    private static final Pattern VTABLE_TARGET = Pattern.compile(
        "(?i)->\\s*([0-9a-f]{8,16})\\b");
    private static final Pattern MEMORY_REGISTER = Pattern.compile(
        "(?i)(?:BYTE|WORD|DWORD|QWORD)?\\s*PTR\\s*\\[\\s*([A-Z][A-Z0-9]*)" +
        "(?:\\s*\\+\\s*(0X[0-9A-F]+|[0-9]+))?\\s*\\]");

    private final Map<String, TargetEvidence> targets = new LinkedHashMap<>();
    private final Map<String, Map<Long, FieldEvidence>> anonymousValueFields =
        new LinkedHashMap<>();
    private final List<Failure> failures = new ArrayList<>();
    private final List<Structure> structures = new ArrayList<>();
    private final Set<Address> unsettledFunctions = new HashSet<>();
    private DataTypeManager dataTypes;
    private int functionsSeen;
    private int functionsWithRawAccess;
    private int rawAccesses;
    private int nestedPointerAccesses;
    private int pointerFieldAliases;
    private int redirectedAliasAccesses;
    private int ownerThisSpillRepairs;
    private int typedFieldConsumerHints;
    private int exactReinterpretAccesses;
    private int indexedTailRepairs;
    private int propagatedCallTypeTargets;
    private int machineNestedMemberAccesses;
    private int machineNestedPointerFields;
    private final Map<String, TargetEvidence> generatedBackingTargets =
        new LinkedHashMap<>();
    private final Set<String> missingGeneratedBackingTargets = new HashSet<>();
    private final List<CallTypeEdge> callTypeEdges = new ArrayList<>();
    private final Map<String, Map<String, Set<String>>> callTypeSeeds =
        new LinkedHashMap<>();
    private Map<String, List<Function>> globalCallAliases;

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
        List<Function> normal = new ArrayList<>();
        List<Function> large = new ArrayList<>();
        List<Address> selectedFunctions = selectedFunctions();
        if (!selectedFunctions.isEmpty()) {
            for (Address selectedFunction : selectedFunctions) {
                Function function = currentProgram.getFunctionManager()
                    .getFunctionAt(selectedFunction);
                if (function == null) throw new IllegalArgumentException(
                    "No function at " + addr(selectedFunction));
                if (candidate(function) && hasPointerMemoryAccess(function)) {
                    if (decompileTimeout(function) == LARGE_DECOMPILE_TIMEOUT)
                        large.add(function);
                    else normal.add(function);
                }
            }
        }
        else {
            FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
            while (functions.hasNext()) {
                monitor.checkCancelled();
                Function function = functions.next();
                if (!candidate(function) || !hasPointerMemoryAccess(function)) continue;
                (decompileTimeout(function) == LARGE_DECOMPILE_TIMEOUT ?
                    large : normal).add(function);
            }
        }
        analyzeParallel(normal, DECOMPILE_TIMEOUT);
        analyzeParallel(large, LARGE_DECOMPILE_TIMEOUT);
        propagateCallBoundaryTypes();

        Analysis analysis = makeProposals();
        writeTypes(directory.resolve("pointer_shape_type_proposals.tsv"), analysis.types);
        writeFields(directory.resolve("pointer_shape_field_proposals.tsv"), analysis.fields);
        writeTargets(directory.resolve("pointer_shape_target_proposals.tsv"), analysis.targets);
        writeCallTypeEdges(directory.resolve("pointer_shape_call_type_edges.tsv"));
        writeFailures(directory.resolve("pointer_shape_decompile_failures.tsv"));
        writeSummary(directory.resolve("pointer_shape_summary.txt"), analysis);

        println("Pointer-shape analysis complete: " + directory.toAbsolutePath().normalize());
        println("Functions=" + functionsSeen + ", raw functions=" + functionsWithRawAccess +
            ", raw accesses=" + rawAccesses + ", nested=" + nestedPointerAccesses +
            ", pointer aliases=" + pointerFieldAliases + ", alias accesses=" +
            redirectedAliasAccesses + ", owner-this spill repairs=" +
            ownerThisSpillRepairs + ", typed-field consumers=" +
            typedFieldConsumerHints + ", exact reinterpret=" +
            exactReinterpretAccesses + ", indexed tails=" + indexedTailRepairs +
            ", call type edges=" + callTypeEdges.size() +
            ", call type seeds=" + callTypeSeeds.size() +
            ", propagated call targets=" + propagatedCallTypeTargets +
            ", machine nested accesses=" + machineNestedMemberAccesses +
            ", machine nested pointer fields=" + machineNestedPointerFields +
            ", targets=" + analysis.targets.size() +
            ", target_apply=" + analysis.targets.stream().filter(row -> row.apply).count() +
            ", anonymous_types=" + analysis.types.stream().filter(row -> row.apply).count() +
            ", failures=" + failures.size());
    }

    private int decompileTimeout(Function function) {
        return function.getBody().getNumAddresses() >= LARGE_FUNCTION_BYTES ?
            LARGE_DECOMPILE_TIMEOUT : DECOMPILE_TIMEOUT;
    }

    private boolean candidate(Function function) {
        return function != null && !function.isExternal() && !function.isThunk() &&
            !isLibrary(function);
    }

    /**
     * Every shape accepted below originates in a machine LOAD/STORE: raw or nested
     * dereferences, pointer-field aliases, DArray access, and owner-this spills all
     * require one.  Rejecting functions without either p-code operation is therefore
     * a lossless prefilter and avoids invoking the decompiler for pure register/control
     * helpers.  Unknown/empty p-code stays eligible rather than becoming a false negative.
     */
    private boolean hasPointerMemoryAccess(Function function) {
        boolean sawPcode = false;
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            PcodeOp[] operations = instruction.getPcode();
            if (operations == null || operations.length == 0) continue;
            sawPcode = true;
            for (PcodeOp operation : operations)
                if (operation.getOpcode() == PcodeOp.LOAD ||
                        operation.getOpcode() == PcodeOp.STORE) return true;
        }
        return !sawPcode;
    }

    private void analyzeParallel(Collection<Function> functions, int timeout)
            throws Exception {
        if (functions.isEmpty()) return;
        DecompilerCallback<Decompiled> callback = new DecompilerCallback<>(
                currentProgram, dec -> {
                    dec.toggleCCode(true);
                    dec.toggleSyntaxTree(true);
                }) {
            @Override
            public Decompiled process(DecompileResults result,
                    TaskMonitor callbackMonitor) {
                Function function = result.getFunction();
                if (!result.decompileCompleted() ||
                        result.getDecompiledFunction() == null)
                    return new Decompiled(function, "",
                        result.getErrorMessage() == null ?
                            "decompile failed" : result.getErrorMessage());
                return new Decompiled(function,
                    result.getDecompiledFunction().getC(), "");
            }
        };
        callback.setTimeout(timeout);
        try {
            List<Decompiled> units = ParallelDecompiler.decompileFunctions(
                callback, functions, monitor);
            units.removeIf(unit -> unit == null || unit.function == null);
            if (timeout < LARGE_DECOMPILE_TIMEOUT) {
                List<Function> retry = units.stream()
                    .filter(unit -> !unit.error.isBlank())
                    .map(unit -> unit.function).toList();
                if (!retry.isEmpty()) {
                    units.removeIf(unit -> !unit.error.isBlank());
                    callback.setTimeout(RETRY_DECOMPILE_TIMEOUT);
                    List<Decompiled> retried = ParallelDecompiler.decompileFunctions(
                        callback, retry, monitor);
                    retried.removeIf(unit -> unit == null || unit.function == null);
                    units.addAll(retried);
                }
            }
            units.sort(Comparator.comparing(unit -> unit.function.getEntryPoint()));
            for (Decompiled unit : units) analyzeFunction(unit);
        }
        finally {
            callback.dispose();
        }
    }

    private void analyzeFunction(Decompiled unit) throws Exception {
        Function function = unit.function;
        if (!candidate(function)) return;
        functionsSeen++;
        if (!unit.error.isBlank()) {
            failures.add(new Failure(function, unit.error));
            return;
        }
        String c = unit.c;
        if (c.contains("Type propagation algorithm not settling"))
            unsettledFunctions.add(function.getEntryPoint());
        Map<String, Variable> locals = localVariables(function);
        Map<String, Integer> renderedPointerWidths = renderedPointerWidths(c);
        Map<String, String> renderedStructurePointers =
            renderedStructurePointers(c);
        collectAnonymousValueFields(function, c, locals);
        Set<String> stableStorages = stableStorages(locals);
        Map<String, TargetEvidence> functionTargets = new LinkedHashMap<>();
        collectTransientGeneratedTargets(function, c, functionTargets);
        c = collectIndexedGeneratedTails(function, c, locals, stableStorages,
            functionTargets);
        int before = rawAccesses;
        collectTypedReinterpretedAccesses(function, c, locals, stableStorages,
            functionTargets);
        int ownerSpillHints = collectOwnerThisSpills(function, c, locals,
            stableStorages, functionTargets);
        collectNestedAccesses(function, c, locals, stableStorages, functionTargets,
            renderedPointerWidths);
        collectMachineGeneratedMemberPointees(function, locals, stableStorages,
            functionTargets);
        Map<String, PointerAlias> aliases = collectPointerAliases(function, c, locals,
            stableStorages, functionTargets, renderedPointerWidths);
        collectCountedPointerTableRoles(function, c, locals, stableStorages,
            functionTargets);
        collectRawIndexedAccesses(function, c, locals, stableStorages, functionTargets,
            renderedPointerWidths);
        Matcher matcher = RAW_ACCESS.matcher(c);
        while (matcher.find()) {
            monitor.checkCancelled();
            String valueType = matcher.group(1).trim();
            String name = matcher.group(2);
            long renderedOffset = parseUnsigned(matcher.group(3));
            long offset = byteOffset(matcher.group(), name, renderedOffset,
                renderedPointerWidths);
            if (offset < 0 || offset >= MAX_SHAPE_SIZE || name.equals("this") ||
                    name.startsWith("this_")) continue;
            int width = accessWidth(valueType);
            if (width < 1 || width > 16 || offset + width > MAX_SHAPE_SIZE) continue;
            PointerAlias alias = aliases.get(name);
            if (alias != null) {
                long scaled = alias.childBaseOffset +
                    (integerCastBefore(matcher.group(), name) ? renderedOffset :
                        renderedOffset * alias.elementWidth);
                recordNestedField(function, alias.parent, alias.parentOffset, scaled,
                    width, valueTypeSpecification(valueType, width),
                    name + "+0x" + Long.toHexString(renderedOffset).toUpperCase(Locale.ROOT) +
                    " through pointer-field alias");
                if (scaledPointerExpression(matcher.group(), name, renderedPointerWidths))
                    alias.parent.scaledPointerEvidence = true;
                redirectedAliasAccesses++;
            }
            else {
                TargetEvidence canonical = canonicalTarget(function, locals, stableStorages,
                    functionTargets, name);
                if (canonical == null) continue;
                if (scaledPointerExpression(matcher.group(), name, renderedPointerWidths))
                    canonical.scaledPointerEvidence = true;
                recordField(function, canonical, offset, width,
                    valueTypeSpecification(valueType, width), name + "+0x" +
                    Long.toHexString(offset).toUpperCase(Locale.ROOT));
            }
            rawAccesses++;
        }
        collectAliasIndexes(function, c, aliases);
        collectTypedDArrayTargets(function, c, locals, stableStorages, functionTargets);
        collectDArrayEvidence(c, functionTargets, aliases);
        collectCallTypeEdges(function, c, locals, renderedStructurePointers);
        boolean hasRawAccess = rawAccesses != before;
        if (hasRawAccess) functionsWithRawAccess++;
        if (!hasRawAccess && ownerSpillHints == 0) return;
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
        collectCallEvidence(function, c, locals, stableStorages, functionTargets,
            renderedStructurePointers);
        markCallResultViews(c, functionTargets, renderedPointerWidths);
        for (TargetEvidence target : functionTargets.values()) {
            if (target.typeEvidence.isEmpty() || targets.containsKey(target.key)) continue;
            targets.put(target.key, target);
        }
    }

    /**
     * A decompiler HighVariable may already carry one of our generated pointer
     * types without having a corresponding Listing local.  Retain that exact type
     * identity while collecting layout evidence; a real script-owned parameter or
     * local with the same type is used as the transactional backing target.
     */
    private void collectTransientGeneratedTargets(Function function, String c,
            Map<String, TargetEvidence> functionTargets) {
        Matcher declaration = LOCAL_STRUCTURE_POINTER_DECLARATION.matcher(c);
        while (declaration.find()) {
            Structure structure = uniqueStructure(declaration.group(1));
            String name = declaration.group(2);
            if (structure == null || !generatedAnonymousOwned(structure) ||
                    !hasDirectCallRoot(c, name)) continue;
            String key = addr(function.getEntryPoint()) + "|transient|" + name;
            TargetEvidence transientTarget = new TargetEvidence(key, "transient",
                function.getEntryPoint(), function.getName(true), name,
                "HighVariable[" + name + "]", "pointer:" + structure.getPathName(),
                SourceType.DEFAULT.toString(), true, false, false);
            functionTargets.putIfAbsent(name, transientTarget);
            targets.putIfAbsent(key, transientTarget);
            ensureGeneratedBackingTarget(structure.getPathName());
        }
    }

    private boolean hasDirectCallRoot(String c, String name) {
        Matcher assignments = ASSIGNMENT.matcher(c);
        while (assignments.find()) {
            if (!assignments.group(1).equals(name)) continue;
            String value = assignments.group(2).trim();
            for (int pass = 0; pass < 4; pass++) {
                Matcher cast = LEADING_CAST.matcher(value);
                if (!cast.matches()) break;
                value = cast.group(2).trim();
            }
            if (value.matches("[A-Za-z_$][A-Za-z0-9_$:]*\\s*\\(.*")) return true;
        }
        return false;
    }

    private void ensureGeneratedBackingTarget(String structurePath) {
        if (generatedBackingTargets.containsKey(structurePath) ||
                missingGeneratedBackingTargets.contains(structurePath)) return;
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            Function function = functions.next();
            for (Variable variable : function.getAllVariables()) {
                if (!variable.isValid() || variable.getVariableStorage() == null ||
                        !pointedStructure(typeSpecification(variable.getDataType()))
                            .equals(structurePath)) continue;
                boolean ownedVariable = scriptOwnedPointer(variable.getComment());
                if (protectedSource(variable.getSource()) && !ownedVariable) continue;
                String storage = variable.getVariableStorage().toString();
                String kind = variable instanceof Parameter ? "parameter" : "local";
                String key = addr(function.getEntryPoint()) + "|" + kind + "|" + storage;
                TargetEvidence backing = new TargetEvidence(key, kind,
                    function.getEntryPoint(), function.getName(true), variable.getName(),
                    storage, typeSpecification(variable.getDataType()),
                    variable.getSource().toString(), true, false, true);
                generatedBackingTargets.put(structurePath, backing);
                targets.putIfAbsent(backing.key, backing);
                return;
            }
        }
        missingGeneratedBackingTargets.add(structurePath);
    }

    /**
     * Ghidra spells a field beyond the current end of a too-short generated
     * structure as base[constant].field_NNNN.  Treat this as a continuation of
     * the same record only when one generated pointer has at least three distinct
     * constant-index members and at least one of them is explicitly addressed.
     * A variable subscript rejects the entire candidate, preserving real arrays.
     */
    private String collectIndexedGeneratedTails(Function function, String c,
            Map<String, Variable> locals, Set<String> stableStorages,
            Map<String, TargetEvidence> functionTargets) {
        Map<String, List<IndexedMember>> byBase = new LinkedHashMap<>();
        Matcher references = INDEXED_MEMBER_REFERENCE.matcher(c);
        while (references.find()) {
            String base = references.group(1);
            long index = parseUnsigned(references.group(2));
            if (index <= 0 || index > 0x1000) continue;
            TargetEvidence target = canonicalTarget(function, locals, stableStorages,
                functionTargets, base);
            Structure owner = target == null ? null :
                structureFromPointer(target.expectedType);
            if (owner == null || !generatedAnonymousOwned(owner) ||
                    owner.getLength() < 1) continue;
            long memberOffset = memberOffset(target, references.group(3));
            long absolute = index * (long)owner.getLength() + memberOffset;
            if (memberOffset < 0 || memberOffset >= owner.getLength() ||
                    absolute < 0 || absolute >= MAX_SHAPE_SIZE) continue;
            byBase.computeIfAbsent(base, ignored -> new ArrayList<>()).add(
                new IndexedMember(base, references.group(2), index,
                    references.group(3), memberOffset, absolute, target, owner));
        }
        if (byBase.isEmpty()) return c;

        Set<String> addressed = new HashSet<>();
        Matcher addresses = ADDRESS_OF_INDEXED_MEMBER.matcher(c);
        while (addresses.find())
            addressed.add(indexedMemberKey(addresses.group(1), addresses.group(2),
                addresses.group(3)));

        Map<String, IndexedMember> approved = new LinkedHashMap<>();
        for (Map.Entry<String, List<IndexedMember>> entry : byBase.entrySet()) {
            String base = entry.getKey();
            if (hasVariableIndex(c, base)) continue;
            Set<Long> offsets = new HashSet<>();
            boolean hasAddress = false;
            Set<Long> indexes = new HashSet<>();
            for (IndexedMember member : entry.getValue()) {
                offsets.add(member.absoluteOffset);
                indexes.add(member.index);
                if (addressed.contains(member.key())) hasAddress = true;
            }
            if (offsets.size() < 3 || indexes.size() != 1 || !hasAddress) continue;
            indexedTailRepairs++;
            for (IndexedMember member : entry.getValue()) {
                approved.put(member.key(), member);
                DataTypeComponent component =
                    member.owner.getComponentAt((int)member.memberOffset);
                if (component == null || component.getOffset() != member.memberOffset ||
                        component.getFieldName() == null ||
                        !component.getFieldName().equals(member.memberName)) continue;
                recordField(function, member.target, member.absoluteOffset,
                    component.getLength(), typeSpecification(component.getDataType()),
                    "constant-index generated tail " + base + "[" + member.indexText +
                    "]." + member.memberName + " => +0x" +
                    Long.toHexString(member.absoluteOffset).toUpperCase(Locale.ROOT));
            }
        }
        if (approved.isEmpty()) return c;

        Matcher exact = TYPED_INDEXED_MEMBER_REINTERPRET.matcher(c);
        while (exact.find()) {
            IndexedMember member = approved.get(indexedMemberKey(exact.group(2),
                exact.group(3), exact.group(4)));
            if (member == null) continue;
            int width = accessWidth(exact.group(1));
            if (width < 1 || width > 16 ||
                    member.absoluteOffset + width > MAX_SHAPE_SIZE) continue;
            recordExactField(function, member.target, member.absoluteOffset, width,
                valueTypeSpecification(exact.group(1), width),
                "exact reinterpret of constant-index generated tail");
        }

        StringBuffer normalized = new StringBuffer();
        addresses.reset();
        while (addresses.find()) {
            IndexedMember member = approved.get(indexedMemberKey(addresses.group(1),
                addresses.group(2), addresses.group(3)));
            if (member == null) continue;
            String replacement = "(" + member.baseName + " + 0x" +
                Long.toHexString(member.absoluteOffset).toUpperCase(Locale.ROOT) + ")";
            addresses.appendReplacement(normalized, Matcher.quoteReplacement(replacement));
        }
        addresses.appendTail(normalized);
        return normalized.toString();
    }

    private boolean hasVariableIndex(String c, String base) {
        Matcher indexes = Pattern.compile("(?<![A-Za-z0-9_$:])" +
            Pattern.quote(base) + "\\s*\\[\\s*([^]\\r\\n]+)\\s*\\]").matcher(c);
        while (indexes.find()) {
            String value = indexes.group(1).trim();
            if (!value.matches("(?:0[xX][0-9A-Fa-f]+|[0-9]+)")) return true;
        }
        return false;
    }

    private String indexedMemberKey(String base, String index, String member) {
        return base + "|" + parseUnsigned(index) + "|" + member;
    }

    /** Exact casted loads expose the physical width hidden by a stale generated field. */
    private void collectTypedReinterpretedAccesses(Function function, String c,
            Map<String, Variable> locals, Set<String> stableStorages,
            Map<String, TargetEvidence> functionTargets) {
        Map<TargetEvidence, Map<String, ExactReinterpret>> candidates =
            new LinkedHashMap<>();
        Matcher zero = TYPED_BASE_ZERO_ACCESS.matcher(c);
        while (zero.find()) {
            TargetEvidence target = canonicalTarget(function, locals, stableStorages,
                functionTargets, zero.group(2));
            Structure owner = target == null ? null :
                structureFromPointer(target.expectedType);
            int width = accessWidth(zero.group(1));
            if (owner == null || !generatedAnonymousOwned(owner) || width < 1 || width > 16)
                continue;
            addExactReinterpret(candidates, target, 0, width,
                valueTypeSpecification(zero.group(1), width),
                "exact reinterpret load at generated record base");
        }

        Matcher member = TYPED_MEMBER_REINTERPRET.matcher(c);
        while (member.find()) {
            TargetEvidence target = canonicalTarget(function, locals, stableStorages,
                functionTargets, member.group(2));
            Structure owner = target == null ? null :
                structureFromPointer(target.expectedType);
            int width = accessWidth(member.group(1));
            long offset = target == null ? -1 : memberOffset(target, member.group(3));
            if (owner == null || !generatedAnonymousOwned(owner) || width < 1 || width > 16 ||
                    offset < 0 || offset + width > MAX_SHAPE_SIZE) continue;
            addExactReinterpret(candidates, target, offset, width,
                valueTypeSpecification(member.group(1), width),
                "exact reinterpret load through generated member " + member.group(3));
        }

        /*
         * A lone casted load is not enough to replace a structure member: optimized code
         * routinely reads several adjacent bytes as one integer.  Promote only a connected
         * run of at least two equal adjacent physical fields when one member of that run
         * demonstrably widens or concretizes an existing weak generated field.  This
         * recovers packed coordinate/header pairs such as short fields at +0 and +2 without
         * turning every isolated dword load into a persistent layout assertion.
         */
        for (Map.Entry<TargetEvidence, Map<String, ExactReinterpret>> entry :
                candidates.entrySet()) {
            TargetEvidence target = entry.getKey();
            Structure owner = structureFromPointer(target.expectedType);
            if (owner == null) continue;
            List<ExactReinterpret> values = new ArrayList<>(entry.getValue().values());
            Set<ExactReinterpret> selected = new LinkedHashSet<>();
            for (ExactReinterpret seed : values) {
                if (!exactReinterpretSeed(owner, seed)) continue;
                Set<ExactReinterpret> cluster = new LinkedHashSet<>();
                cluster.add(seed);
                boolean changed;
                do {
                    changed = false;
                    for (ExactReinterpret candidate : values) {
                        if (cluster.contains(candidate) ||
                                candidate.width != seed.width ||
                                !candidate.type.equals(seed.type)) continue;
                        boolean adjacent = cluster.stream().anyMatch(current ->
                            candidate.offset + candidate.width == current.offset ||
                            current.offset + current.width == candidate.offset);
                        if (adjacent) changed |= cluster.add(candidate);
                    }
                }
                while (changed);
                if (cluster.stream().map(value -> value.offset).distinct().count() >= 2)
                    selected.addAll(cluster);
            }
            for (ExactReinterpret candidate : selected)
                for (int count = 0; count < candidate.count; count++)
                    recordExactField(function, target, candidate.offset,
                        candidate.width, candidate.type, candidate.detail);
        }
    }

    private void addExactReinterpret(
            Map<TargetEvidence, Map<String, ExactReinterpret>> candidates,
            TargetEvidence target, long offset, int width, String type, String detail) {
        if (type == null || type.isBlank() || type.matches("/undefined(?:1|2|4|8)?"))
            return;
        String key = offset + "|" + width + "|" + type;
        ExactReinterpret candidate = candidates.computeIfAbsent(target,
            ignored -> new LinkedHashMap<>()).computeIfAbsent(key,
                ignored -> new ExactReinterpret(offset, width, type, detail));
        candidate.count++;
    }

    private boolean exactReinterpretSeed(Structure owner, ExactReinterpret candidate) {
        DataTypeComponent component = owner.getComponentAt((int)candidate.offset);
        if (component == null || component.getOffset() != candidate.offset ||
                component.getFieldName() == null ||
                !component.getFieldName().matches(
                    "(?i)(?:field|value|unknown|unk)(?:_?(?:0x)?[0-9a-f]+)?"))
            return false;
        String current = typeSpecification(component.getDataType());
        boolean concreteSameWidth = component.getLength() == candidate.width &&
            current.matches("/undefined(?:1|2|4|8)?");
        boolean weakWidening = candidate.width > component.getLength() &&
            component.getLength() <= 2 && candidate.width <= 4 &&
            current.matches("/(?:undefined(?:1|2)?|byte|char|uchar)");
        if (!concreteSameWidth && !weakWidening) return false;
        long end = candidate.offset + candidate.width;
        for (DataTypeComponent other : owner.getDefinedComponents()) {
            if (other == component) continue;
            long otherStart = other.getOffset();
            long otherEnd = otherStart + other.getLength();
            if (candidate.offset < otherEnd && otherStart < end) return false;
        }
        return end <= MAX_SHAPE_SIZE;
    }

    private void recordExactField(Function function, TargetEvidence target, long offset,
            int width, String type, String detail) {
        FieldEvidence field = target.fields.computeIfAbsent(offset, FieldEvidence::new);
        field.widths.merge(width, 1, Integer::sum);
        field.exactWidths.merge(width, 1, Integer::sum);
        if (type != null && !type.isBlank()) field.types.merge(type, 2, Integer::sum);
        field.sites.add(addr(function.getEntryPoint()) + " " + detail + " +0x" +
            Long.toHexString(offset).toUpperCase(Locale.ROOT));
        target.accessCount++;
        target.functions.add(addr(function.getEntryPoint()));
        rawAccesses++;
        exactReinterpretAccesses++;
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
            Map<String, TargetEvidence> functionTargets,
            Map<String, Integer> renderedPointerWidths) {
        Matcher nested = NESTED_ACCESS.matcher(c);
        while (nested.find()) {
            String valueType = nested.group(1).trim();
            String name = nested.group(3);
            long parentOffset = byteOffset(nested.group(), name,
                parseUnsigned(nested.group(4)), renderedPointerWidths);
            long childOffset = parseUnsigned(nested.group(5));
            int width = accessWidth(valueType);
            if (!validNestedOffsets(parentOffset, childOffset, width)) continue;
            TargetEvidence parent = canonicalTarget(function, locals, stableStorages,
                functionTargets, name);
            if (parent == null) continue;
            if (scaledPointerExpression(nested.group(), name, renderedPointerWidths))
                parent.scaledPointerEvidence = true;
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
            long parentOffset = byteOffset(zero.group(), name,
                parseUnsigned(zero.group(3)), renderedPointerWidths);
            int width = accessWidth(valueType);
            if (!validNestedOffsets(parentOffset, 0, width)) continue;
            TargetEvidence parent = canonicalTarget(function, locals, stableStorages,
                functionTargets, name);
            if (parent == null) continue;
            if (scaledPointerExpression(zero.group(), name, renderedPointerWidths))
                parent.scaledPointerEvidence = true;
            recordNestedField(function, parent, parentOffset, 0, width,
                valueTypeSpecification(valueType, width), "nested-zero " + name + "+0x" +
                Long.toHexString(parentOffset).toUpperCase(Locale.ROOT));
            nestedPointerAccesses++;
        }
        Matcher indexed = NESTED_INDEX_ACCESS.matcher(c);
        while (indexed.find()) {
            String elementType = indexed.group(1).trim();
            String name = indexed.group(2);
            long parentOffset = byteOffset(indexed.group(), name,
                parseUnsigned(indexed.group(3)), renderedPointerWidths);
            long index = parseUnsigned(indexed.group(4));
            int width = accessWidth(elementType);
            long childOffset = index * Math.max(1, width);
            if (!validNestedOffsets(parentOffset, childOffset, width)) continue;
            TargetEvidence parent = canonicalTarget(function, locals, stableStorages,
                functionTargets, name);
            if (parent == null) continue;
            if (scaledPointerExpression(indexed.group(), name, renderedPointerWidths))
                parent.scaledPointerEvidence = true;
            recordNestedField(function, parent, parentOffset, childOffset, width,
                valueTypeSpecification(elementType, width), "nested-index " + name +
                "+0x" + Long.toHexString(parentOffset).toUpperCase(Locale.ROOT) +
                "[" + index + "]");
            nestedPointerAccesses++;
        }
    }

    /**
     * Recover the pointee of a weak member in an already script-owned generated
     * record from the machine chain which the decompiler commonly obscures:
     *
     * <pre>
     *     MOV savedParent,[EBP+arg]
     *     MOV child,[savedParent+member]
     *     MOV value,[child+fixedOffset]
     * </pre>
     *
     * A loaded child word is promoted to a pointer only when it is itself used
     * as the base of a later memory operand.  Merely loading or storing a dword
     * never proves pointer semantics.  The ordinary nested-layout decision still
     * requires at least two fixed child fields and the normal hash/manual guards,
     * so this pass cannot turn an isolated integer field into a structure.
     */
    private void collectMachineGeneratedMemberPointees(Function function,
            Map<String, Variable> locals, Set<String> stableStorages,
            Map<String, TargetEvidence> functionTargets) {
        Map<Long, TargetEvidence> stackParents = new LinkedHashMap<>();
        Map<String, TargetEvidence> parentRegisters = new LinkedHashMap<>();
        int pointerSize = currentProgram.getDefaultPointerSize();
        for (Parameter parameter : function.getParameters()) {
            if (parameter.isAutoParameter()) continue;
            TargetEvidence target = canonicalTarget(function, locals, stableStorages,
                functionTargets, parameter.getName());
            Structure owner = target == null ? null :
                structureFromPointer(target.expectedType);
            if (owner == null || !target.scriptOwned ||
                    !generatedAnonymousOwned(owner)) continue;
            if (parameter.hasStackStorage())
                stackParents.put((long)parameter.getStackOffset() + pointerSize, target);
            Register register = parameter.getRegister();
            if (register != null)
                parentRegisters.put(rootRegister(register.getName()), target);
        }
        if (stackParents.isEmpty() && parentRegisters.isEmpty()) return;

        Map<String, MachineMemberPointer> memberPointers = new LinkedHashMap<>();
        Map<String, MachineNestedValue> nestedValues = new LinkedHashMap<>();
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);

            // Consume the old register state before applying this instruction's
            // destination definition.  This is essential for MOV EDX,[EDX].
            for (int operand = 0; operand < instruction.getNumOperands(); operand++) {
                MachineMemory memory = machineMemory(instruction, operand);
                if (memory == null) continue;
                MachineMemberPointer member = memory.fixed ?
                    memberPointers.get(memory.baseRegister) : null;
                if (member != null && memory.width > 0) {
                    long childOffset = member.childBaseOffset + memory.displacement;
                    if (validNestedOffsets(member.parentOffset, childOffset,
                            memory.width)) {
                        recordNestedField(function, member.parent,
                            member.parentOffset, childOffset, memory.width,
                            "/undefined" + memory.width,
                            "machine member-pointer dereference " +
                            addr(instruction.getAddress()));
                        machineNestedMemberAccesses++;
                    }
                }
                for (String register : memory.registers) {
                    MachineNestedValue value = nestedValues.get(register);
                    if (value == null || memory.width < 1 || memory.width > 16)
                        continue;
                    recordNestedField(function, value.member.parent,
                        value.member.parentOffset, value.childOffset, pointerSize,
                        "pointer:" + machineScalarType(memory.width),
                        "machine-loaded child reused as memory base " +
                        addr(instruction.getAddress()));
                    machineNestedPointerFields++;
                }
            }

            String destination = machineRegisterOperand(instruction, 0);
            String source = machineRegisterOperand(instruction, 1);
            MachineMemory sourceMemory = instruction.getNumOperands() > 1 ?
                machineMemory(instruction, 1) : null;
            MachineMemory destinationMemory = instruction.getNumOperands() > 0 ?
                machineMemory(instruction, 0) : null;

            TargetEvidence copiedParent = source == null ? null :
                parentRegisters.get(source);
            MachineMemberPointer copiedMember = source == null ? null :
                memberPointers.get(source);
            MachineNestedValue copiedNested = source == null ? null :
                nestedValues.get(source);
            MachineMemberPointer loadedMember = null;
            MachineNestedValue loadedNested = null;
            TargetEvidence loadedParent = null;
            if (sourceMemory != null && sourceMemory.fixed) {
                if ("EBP".equals(sourceMemory.baseRegister))
                    loadedParent = stackParents.get(sourceMemory.displacement);
                TargetEvidence parent =
                    parentRegisters.get(sourceMemory.baseRegister);
                if (parent != null && validNestedOffsets(sourceMemory.displacement,
                        0, pointerSize) && weakGeneratedMember(parent,
                            sourceMemory.displacement))
                    loadedMember = new MachineMemberPointer(parent,
                        sourceMemory.displacement, 0);
                MachineMemberPointer member =
                    memberPointers.get(sourceMemory.baseRegister);
                if (member != null) {
                    long childOffset = member.childBaseOffset +
                        sourceMemory.displacement;
                    if (validNestedOffsets(member.parentOffset, childOffset,
                            pointerSize))
                        loadedNested = new MachineNestedValue(member, childOffset);
                }
            }

            // A register value stored into a weak generated member becomes a
            // tentative alias of that member.  It is recorded only if a later
            // dereference supplies the independent nested-layout evidence.
            if ("MOV".equals(mnemonic) && destinationMemory != null &&
                    destinationMemory.fixed && source != null) {
                TargetEvidence parent =
                    parentRegisters.get(destinationMemory.baseRegister);
                if (parent != null && validNestedOffsets(
                        destinationMemory.displacement, 0, pointerSize) &&
                        weakGeneratedMember(parent,
                            destinationMemory.displacement))
                    memberPointers.put(source, new MachineMemberPointer(parent,
                        destinationMemory.displacement, 0));
            }

            if (destination != null && machineWritesFirstOperand(mnemonic)) {
                parentRegisters.remove(destination);
                memberPointers.remove(destination);
                nestedValues.remove(destination);
                if (Set.of("MOV", "MOVSX", "MOVZX").contains(mnemonic)) {
                    if (copiedParent != null) parentRegisters.put(destination, copiedParent);
                    if (copiedMember != null) memberPointers.put(destination, copiedMember);
                    if (copiedNested != null) nestedValues.put(destination, copiedNested);
                    if (loadedParent != null) parentRegisters.put(destination, loadedParent);
                    if (loadedMember != null) memberPointers.put(destination, loadedMember);
                    if (loadedNested != null) nestedValues.put(destination, loadedNested);
                }
                else if ("LEA".equals(mnemonic) && sourceMemory != null &&
                        sourceMemory.fixed) {
                    MachineMemberPointer member =
                        memberPointers.get(sourceMemory.baseRegister);
                    if (member != null)
                        memberPointers.put(destination, new MachineMemberPointer(
                            member.parent, member.parentOffset,
                            member.childBaseOffset + sourceMemory.displacement));
                    MachineNestedValue value =
                        nestedValues.get(sourceMemory.baseRegister);
                    if (value != null) {
                        recordNestedField(function, value.member.parent,
                            value.member.parentOffset, value.childOffset,
                            pointerSize, "pointer:/void",
                            "machine-loaded child used in address calculation " +
                            addr(instruction.getAddress()));
                        machineNestedPointerFields++;
                    }
                }
            }

            if (instruction.getFlowType().isCall()) {
                for (String volatileRegister : Set.of("EAX", "ECX", "EDX")) {
                    parentRegisters.remove(volatileRegister);
                    memberPointers.remove(volatileRegister);
                    nestedValues.remove(volatileRegister);
                }
            }
            // A linear Listing walk must not carry a path-specific loaded child
            // through a control-flow join.  Long-lived saved parent registers
            // remain tracked (ordinary x86 code keeps them across branches), but
            // member and child aliases must be re-established in each block.
            if (instruction.getFlowType().isJump() ||
                    instruction.getFlowType().isTerminal()) {
                memberPointers.clear();
                nestedValues.clear();
            }
        }
    }

    private MachineMemory machineMemory(Instruction instruction, int operand) {
        if (instruction == null || operand < 0 ||
                operand >= instruction.getNumOperands()) return null;
        String rendered = instruction.getDefaultOperandRepresentation(operand);
        if (rendered == null || !rendered.contains("[")) return null;
        String upper = rendered.toUpperCase(Locale.ROOT).trim();
        int open = upper.indexOf('['), close = upper.lastIndexOf(']');
        if (open < 0 || close <= open) return null;
        String expression = upper.substring(open + 1, close).replace(" ", "");
        Set<String> registers = new LinkedHashSet<>();
        for (Object object : instruction.getOpObjects(operand))
            if (object instanceof Register register)
                registers.add(rootRegister(register.getName()));
        Matcher fixed = Pattern.compile(
            "^([A-Z][A-Z0-9]*)(?:([+-])(0X[0-9A-F]+|[0-9]+))?$")
            .matcher(expression);
        String base = "";
        long displacement = 0;
        boolean exact = fixed.matches();
        if (exact) {
            base = rootRegister(fixed.group(1));
            if (fixed.group(3) != null) {
                displacement = parseUnsigned(fixed.group(3));
                if ("-".equals(fixed.group(2))) displacement = -displacement;
            }
        }
        return new MachineMemory(base, displacement, exact, registers,
            machineMemoryWidth(upper));
    }

    private int machineMemoryWidth(String rendered) {
        if (rendered.startsWith("QWORD PTR")) return 8;
        if (rendered.startsWith("DWORD PTR")) return 4;
        if (rendered.startsWith("WORD PTR")) return 2;
        if (rendered.startsWith("BYTE PTR")) return 1;
        return -1;
    }

    private boolean weakGeneratedMember(TargetEvidence parent, long offset) {
        Structure owner = structureFromPointer(parent.expectedType);
        if (owner == null || !generatedAnonymousOwned(owner) || offset < 0 ||
                offset > Integer.MAX_VALUE) return false;
        DataTypeComponent component = owner.getComponentContaining((int)offset);
        if (component == null) return true;
        if (component.getOffset() != offset) return false;
        DataType type = untypedef(component.getDataType());
        if (Undefined.isUndefined(type)) return true;
        if (type instanceof Pointer pointer) {
            DataType pointed = untypedef(pointer.getDataType());
            if (pointed instanceof Structure) return false;
            String name = pointed == null ? "" :
                pointed.getName().toLowerCase(Locale.ROOT);
            return name.matches(
                "(?:void|byte|char|uchar|short|ushort|word|u?int|long|ulong|undefined[1248]?)");
        }
        String name = type.getName().toLowerCase(Locale.ROOT);
        return name.matches(
            "(?:u?int|long|ulong|dword|word|qword|undefined[1248]?)");
    }

    private String machineScalarType(int width) {
        return switch (width) {
            case 1 -> "/byte";
            case 2 -> "/ushort";
            case 4 -> "/uint";
            case 8 -> "/ulonglong";
            default -> "/undefined" + width;
        };
    }

    private String machineRegisterOperand(Instruction instruction, int operand) {
        if (instruction == null || operand < 0 ||
                operand >= instruction.getNumOperands()) return null;
        String rendered = instruction.getDefaultOperandRepresentation(operand);
        if (rendered == null || !rendered.trim().matches("[A-Za-z][A-Za-z0-9]*"))
            return null;
        Object[] objects = instruction.getOpObjects(operand);
        if (objects.length != 1 || !(objects[0] instanceof Register register))
            return null;
        return rootRegister(register.getName());
    }

    private String rootRegister(String name) {
        String value = name == null ? "" : name.toUpperCase(Locale.ROOT);
        return switch (value) {
            case "EAX", "AX", "AL", "AH" -> "EAX";
            case "EBX", "BX", "BL", "BH" -> "EBX";
            case "ECX", "CX", "CL", "CH" -> "ECX";
            case "EDX", "DX", "DL", "DH" -> "EDX";
            case "ESI", "SI" -> "ESI";
            case "EDI", "DI" -> "EDI";
            case "EBP", "BP" -> "EBP";
            case "ESP", "SP" -> "ESP";
            default -> value;
        };
    }

    private boolean machineWritesFirstOperand(String mnemonic) {
        return Set.of("MOV", "MOVSX", "MOVZX", "LEA", "POP", "XOR", "SUB",
            "SBB", "ADD", "ADC", "AND", "OR", "IMUL", "SHL", "SHR",
            "SAR", "SAL", "INC", "DEC", "NEG", "NOT").contains(mnemonic);
    }

    private Map<String, PointerAlias> collectPointerAliases(Function function, String c,
            Map<String, Variable> locals, Set<String> stableStorages,
            Map<String, TargetEvidence> functionTargets,
            Map<String, Integer> renderedPointerWidths) {
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
                parentOffset = byteOffset(access.group(), parentName,
                    parseUnsigned(access.group(3)), renderedPointerWidths);
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
            if (raw && scaledPointerExpression(access.group(), parentName,
                    renderedPointerWidths)) parent.scaledPointerEvidence = true;
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
            Map<String, TargetEvidence> functionTargets,
            Map<String, Integer> renderedPointerWidths) {
        Matcher matcher = RAW_INDEXED_ACCESS.matcher(c);
        while (matcher.find()) {
            String valueType = matcher.group(1).trim();
            String name = matcher.group(2);
            long renderedOffset = parseUnsigned(matcher.group(3));
            long renderedScale = parseUnsigned(matcher.group(5));
            int elementWidth = integerCastBefore(matcher.group(), name) ? 1 :
                renderedPointerWidths.getOrDefault(name, 1);
            long offset = renderedOffset * elementWidth;
            long effectiveScale = renderedScale * elementWidth;
            int scale = effectiveScale > Integer.MAX_VALUE ? -1 : (int)effectiveScale;
            int width = accessWidth(valueType);
            if (offset < 0 || offset >= MAX_SHAPE_SIZE || width < 1 ||
                    width > 16 || scale != width || offset + width > MAX_SHAPE_SIZE ||
                    name.equals("this") || name.startsWith("this_")) continue;
            TargetEvidence target = canonicalTarget(function, locals, stableStorages,
                functionTargets, name);
            if (target == null) continue;
            if (elementWidth > 1) target.scaledPointerEvidence = true;
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

    /**
     * Offsets in decompiler C are expressed in elements until the base is cast
     * to an integer.  Listing locals can retain an older generic type while the
     * current HighVariable is rendered as (for example) {@code ushort *}; using
     * the literal as a byte offset then creates a structurally impossible field.
     */
    private long byteOffset(String expression, String name, long renderedOffset,
            Map<String, Integer> renderedPointerWidths) {
        if (renderedOffset < 0 || integerCastBefore(expression, name))
            return renderedOffset;
        int width = renderedPointerWidths.getOrDefault(name, 1);
        if (width < 1 || renderedOffset > Long.MAX_VALUE / width) return -1;
        return renderedOffset * width;
    }

    private boolean scaledPointerExpression(String expression, String name,
            Map<String, Integer> renderedPointerWidths) {
        return !integerCastBefore(expression, name) &&
            renderedPointerWidths.getOrDefault(name, 1) > 1;
    }

    private Map<String, Integer> renderedPointerWidths(String c) {
        Map<String, Integer> result = new LinkedHashMap<>();
        Matcher matcher = RENDERED_POINTER_DECLARATION.matcher(c);
        while (matcher.find()) {
            int width = renderedPointerWidth(matcher.group(1), matcher.group(2));
            if (width > 0) result.putIfAbsent(matcher.group(3), width);
        }
        int body = c.indexOf('{');
        String signature = body < 0 ? c : c.substring(0, body);
        matcher = RENDERED_POINTER_PARAMETER.matcher(signature);
        while (matcher.find()) {
            int width = renderedPointerWidth(matcher.group(1), matcher.group(2));
            if (width > 0) result.putIfAbsent(matcher.group(3), width);
        }
        return result;
    }

    private Map<String, String> renderedStructurePointers(String c) {
        Map<String, String> result = new LinkedHashMap<>();
        Matcher matcher = LOCAL_STRUCTURE_POINTER_DECLARATION.matcher(c);
        while (matcher.find()) {
            Structure structure = uniqueStructure(matcher.group(1));
            if (structure != null && namedReceiverType(structure))
                result.putIfAbsent(matcher.group(2), structure.getPathName());
        }
        int body = c.indexOf('{');
        String signature = body < 0 ? c : c.substring(0, body);
        matcher = RENDERED_POINTER_PARAMETER.matcher(signature);
        while (matcher.find()) {
            if (matcher.group(2).length() != 1) continue;
            Structure structure = uniqueStructure(matcher.group(1).trim());
            if (structure != null && namedReceiverType(structure))
                result.putIfAbsent(matcher.group(3), structure.getPathName());
        }
        return result;
    }

    private int renderedPointerWidth(String type, String stars) {
        if (stars == null || stars.isEmpty()) return -1;
        if (stars.length() > 1) return currentProgram.getDefaultPointerSize();
        return accessWidth(type.trim());
    }

    private boolean integerCastBefore(String expression, String name) {
        return Pattern.compile("(?i)\\(\\s*(?:u?int|long|ulong|dword|word|qword)\\s*\\)\\s*" +
            Pattern.quote(name) + "\\b").matcher(expression).find();
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
            Map<String, TargetEvidence> functionTargets,
            Map<String, String> renderedStructurePointers) {
        for (CallSite call : directCalls(containing, c)) {
            Function called = call.function;
            List<String> arguments = call.arguments;
            if (arguments.isEmpty()) continue;
            String site = addr(containing.getEntryPoint()) + " C call -> " +
                called.getName(true);

            if (isDArrayHelper(called) &&
                    dataTypes.getDataType(DARRAY_PATH) instanceof Structure)
                addTypeEvidence(arguments.get(0), containing, locals, stableStorages,
                    functionTargets,
                    "pointer:" + DARRAY_PATH, 3, site + " DArray helper");

            Parameter[] parameters = called.getParameters();
            if (parameters.length == arguments.size()) {
                for (int index = 0; index < parameters.length; index++) {
                    markGenericPointerConsumer(arguments.get(index), parameters[index], called,
                        functionTargets, site);
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

    private void collectCallTypeEdges(Function containing, String c,
            Map<String, Variable> locals,
            Map<String, String> renderedStructurePointers) {
        for (CallSite call : directCalls(containing, c)) {
            Parameter[] parameters = call.function.getParameters();
            if (parameters.length != call.arguments.size()) continue;
            String site = addr(containing.getEntryPoint()) + " C call -> " +
                call.function.getName(true);
            for (int index = 0; index < parameters.length; index++)
                recordCallTypeEdge(containing, call.arguments.get(index), locals,
                    renderedStructurePointers, call.function, parameters[index], site);
        }
    }

    /**
     * Preserve named receiver alternatives across neutral generated helpers.  The edge is
     * address/storage based; casts printed at either call boundary are presentation only and
     * cannot manufacture a type seed.  Seeds come from the decompiler's independently rendered
     * named pointer declaration at the originating caller.
     */
    private void recordCallTypeEdge(Function containing, String expression,
            Map<String, Variable> locals,
            Map<String, String> renderedStructurePointers, Function called,
            Parameter parameter, String site) {
        String sourceName = simpleArgumentName(expression);
        Variable sourceVariable = locals.get(sourceName);
        if (sourceName.isBlank() || sourceVariable == null || parameter == null ||
                sourceVariable.getVariableStorage() == null ||
                parameter.getVariableStorage() == null) return;
        String sourceKind = sourceVariable instanceof Parameter ? "parameter" : "local";
        String destinationKind = parameter instanceof Parameter ? "parameter" : "local";
        String sourceKey = targetKey(containing, sourceKind,
            sourceVariable.getVariableStorage().toString());
        String destinationKey = targetKey(called, destinationKind,
            parameter.getVariableStorage().toString());
        callTypeEdges.add(new CallTypeEdge(sourceKey, destinationKey, site));
        String seed = renderedStructurePointers.get(sourceName);
        if (seed != null && !seed.isBlank())
            callTypeSeeds.computeIfAbsent(sourceKey, ignored -> new TreeMap<>())
                .computeIfAbsent(seed, ignored -> new TreeSet<>())
                .add(addr(containing.getEntryPoint()) + "|" + sourceName);
    }

    private String targetKey(Function function, String kind, String storage) {
        return addr(function.getEntryPoint()) + "|" + kind + "|" + storage;
    }

    private void propagateCallBoundaryTypes() {
        Map<String, Map<String, Set<String>>> flowing = new LinkedHashMap<>();
        for (Map.Entry<String, Map<String, Set<String>>> seed :
                callTypeSeeds.entrySet()) {
            Map<String, Set<String>> copy = new TreeMap<>();
            for (Map.Entry<String, Set<String>> type : seed.getValue().entrySet())
                copy.put(type.getKey(), new TreeSet<>(type.getValue()));
            flowing.put(seed.getKey(), copy);
        }
        boolean changed = true;
        for (int pass = 0; changed && pass < 64; pass++) {
            changed = false;
            for (CallTypeEdge edge : callTypeEdges) {
                Map<String, Set<String>> source = flowing.get(edge.sourceKey);
                if (source == null) continue;
                Map<String, Set<String>> destination = flowing.computeIfAbsent(
                    edge.destinationKey, ignored -> new TreeMap<>());
                for (Map.Entry<String, Set<String>> type : source.entrySet())
                    if (destination.computeIfAbsent(type.getKey(),
                            ignored -> new TreeSet<>()).addAll(type.getValue()))
                        changed = true;
            }
        }
        for (TargetEvidence target : targets.values()) {
            Map<String, Set<String>> values = flowing.get(target.key);
            if (values == null) continue;
            for (Map.Entry<String, Set<String>> value : values.entrySet()) {
                target.incomingNamedTypes.put(value.getKey(),
                    new TreeSet<>(value.getValue()));
                target.typeSites.add("interprocedural named receiver flow " +
                    value.getKey() + " from " + value.getValue());
            }
            if (!values.isEmpty()) propagatedCallTypeTargets++;
        }
    }

    private void markGenericPointerConsumer(String expression, Parameter parameter,
            Function called, Map<String, TargetEvidence> functionTargets, String site) {
        if (expression == null || expression.contains("&") || called == null ||
                isLibrary(called) || parameter == null) return;
        DataType type = untypedef(parameter.getDataType());
        if (!(type instanceof Pointer pointer)) return;
        DataType pointed = untypedef(pointer.getDataType());
        if (pointed != null && !Undefined.isUndefined(pointed) &&
                !pointed.getPathName().equals("/void")) return;
        String name = simpleArgumentName(expression);
        TargetEvidence target = functionTargets.get(name);
        if (target == null || !target.kind.equals("local")) return;
        target.genericPointerConsumers++;
        target.typeSites.add(site + " consumes call-result view " + name +
            " through generic pointer parameter " + parameter.getName());
    }

    /**
     * A pointer returned by one call, inspected through fixed offsets, and then
     * handed to one internal generic consumer is a consumer-local record view.
     * The rule does not type the shared producer ABI and rejects array syntax,
     * pointer iteration, competing non-null definitions, and transient values.
     */
    private void markCallResultViews(String c,
            Map<String, TargetEvidence> functionTargets,
            Map<String, Integer> renderedPointerWidths) {
        for (TargetEvidence target : functionTargets.values()) {
            if (!target.kind.equals("local") || !target.databaseBacked ||
                    !renderedPointerWidths.containsKey(target.name) ||
                    target.genericPointerConsumers < 1 || target.fields.isEmpty()) continue;
            Pattern definitions = Pattern.compile("(?m)^\\s*" +
                Pattern.quote(target.name) + "\\s*=\\s*([^;]+);");
            Matcher matcher = definitions.matcher(c);
            int calls = 0;
            boolean competing = false;
            while (matcher.find()) {
                String expression = matcher.group(1).trim();
                if (expression.equals("nullptr") || expression.equals("0") ||
                        expression.matches("\\([^)]*\\*+\\)\\s*0x0")) continue;
                String value = expression;
                while (true) {
                    Matcher cast = Pattern.compile(
                        "^\\([^()]+\\*+\\)\\s*(.+)$", Pattern.DOTALL).matcher(value);
                    if (!cast.matches()) break;
                    value = cast.group(1).trim();
                }
                if (value.matches(
                        "[A-Za-z_$][A-Za-z0-9_$:]*(?:\\s*::\\s*[A-Za-z_$][A-Za-z0-9_$:]*)*" +
                        "\\s*\\([\\s\\S]*\\)")) calls++;
                else competing = true;
            }
            boolean arrayStyle = Pattern.compile("(?<![A-Za-z0-9_$:])" +
                Pattern.quote(target.name) +
                "\\s*(?:\\[|\\+\\+|--|\\+=|-=)").matcher(c).find();
            if (calls == 1 && !competing && !arrayStyle) target.callResultView = true;
        }
    }

    private boolean isDArrayHelper(Function function) {
        if (!hasTag(function, "RECOVERED_UTILITY_SEMANTICS")) return false;
        for (Parameter parameter : function.getParameters()) {
            if (parameter.isAutoParameter()) continue;
            return typeSpecification(parameter.getFormalDataType()).equals(
                "pointer:" + DARRAY_PATH);
        }
        return false;
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
            Function resolved = resolveThunk(direct);
            addCallAlias(byName, direct.getName(), resolved);
            addCallAlias(byName, direct.getName(true), resolved);
            if (resolved != null) {
                Address[] thunkAddresses =
                    resolved.getFunctionThunkAddresses(true);
                if (thunkAddresses == null) continue;
                for (Address thunkAddress : thunkAddresses) {
                    Function thunk = currentProgram.getFunctionManager()
                        .getFunctionAt(thunkAddress);
                    if (thunk == null) continue;
                    addCallAlias(byName, thunk.getName(), resolved);
                    addCallAlias(byName, thunk.getName(true), resolved);
                }
            }
        }
        if (byName.isEmpty()) return List.of();
        List<CallSite> result = new ArrayList<>();
        Matcher matcher = CALL_HEAD.matcher(c);
        while (matcher.find()) {
            List<Function> candidates = byName.get(matcher.group(1));
            if (candidates == null)
                candidates = globalCallAliases().get(matcher.group(1));
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

    private Map<String, List<Function>> globalCallAliases() {
        if (globalCallAliases != null) return globalCallAliases;
        globalCallAliases = new LinkedHashMap<>();
        FunctionIterator functions =
            currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            Function function = functions.next();
            Function resolved = resolveThunk(function);
            addCallAlias(globalCallAliases, function.getName(), resolved);
            addCallAlias(globalCallAliases, function.getName(true), resolved);
        }
        return globalCallAliases;
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
        suppressExactCoveredSubfields();
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
     * Repeated exact full-width reinterpret loads supersede weak generated
     * subpieces wholly contained in that scalar.  Partial overlaps, competing
     * exact widths, and independently exact subfields remain unresolved.
     */
    private void suppressExactCoveredSubfields() {
        for (TargetEvidence target : targets.values()) {
            Set<Long> remove = new HashSet<>();
            for (FieldEvidence container : target.fields.values()) {
                int width = uniqueWidth(container);
                int exactCount = container.exactWidths.values().stream()
                    .mapToInt(Integer::intValue).sum();
                if (width < 2 || exactCount < 2) continue;
                long start = container.offset;
                long end = start + width;
                for (FieldEvidence candidate : target.fields.values()) {
                    if (candidate == container || !candidate.exactWidths.isEmpty()) continue;
                    int candidateWidth = uniqueWidth(candidate);
                    if (candidateWidth < 1 || candidate.offset <= start ||
                            candidate.offset + candidateWidth > end) continue;
                    remove.add(candidate.offset);
                }
            }
            for (Long offset : remove) target.fields.remove(offset);
        }
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
            value.scaledPointerEvidence |= target.scaledPointerEvidence;
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
            target.scaledPointerEvidence |= value.scaledPointerEvidence;
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
            for (Map.Entry<Integer, Integer> width : found.exactWidths.entrySet())
                target.exactWidths.merge(width.getKey(), width.getValue(), Integer::sum);
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
            for (Map.Entry<Integer, Integer> width : source.exactWidths.entrySet())
                destination.exactWidths.merge(width.getKey(), width.getValue(), Integer::sum);
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
        if (prototypeByteTransportBoundary(target))
            return new TargetDecision(false, false, "", "existing",
                "machine-proven mutable byte transport retained; fixed offsets are " +
                "optimized word/byte accesses, not record-field identity");
        if (overwrittenScalarParameter(target))
            return new TargetDecision(false, false, "", "review",
                "incoming scalar ABI slot is fully overwritten before its pointer-shaped " +
                "lifetime; split the post-write local instead of changing the parameter");
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
        TargetDecision commonReceiver = commonReceiverBoundaryDecision(target,
            currentStructure);
        if (commonReceiver != null) return commonReceiver;
        if (!currentStructure.isBlank() && !generatedAnonymous)
            return new TargetDecision(false, false, currentStructure, "existing",
                "target already has a named/manual structure pointer type");

        // Exact reinterpret loads and constant-index continuation fields refine
        // the already selected generated identity. Competing helper-local
        // anonymous prefixes do not supersede that identity; named/manual types
        // still take the normal semantic-type path below.
        if (generatedAnonymous && anonymousOnlyTypeEvidence(target)) {
            Structure current = structureFromPointer("pointer:" + currentStructure);
            boolean covered = current != null && coversGeneratedFields(current, target);
            boolean refine = covered && validFields(target) &&
                needsGeneratedRefinement(current, target);
            boolean apply = refine && automaticTarget(target) && !autoThis(target);
            if (refine)
                return new TargetDecision(apply, apply, currentStructure,
                    apply ? "refine" : "review",
                    "exact generated-layout evidence refines the current identity; " +
                    "anonymous helper views remain partial aliases");
        }

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
            if (!target.fields.isEmpty() && !semanticCompatible(structure, target)) {
                /*
                 * A helper-local generated view can be a strict prefix of the same value
                 * observed by its caller.  The exact typed-call edge proves identity for
                 * this target, but does not license widening the helper's shared type.
                 * Materialize a complete one-owner superset instead.  This is deliberately
                 * not a geometry merge: every old component is imported from the exact
                 * semantic type and every overlap must agree byte-for-byte.
                 */
                boolean semanticSuperset = anonymousTypePath(structure.getPathName()) &&
                    generatedAnonymousOwned(structure) &&
                    replaceable(target.expectedType) && automaticTarget(target) &&
                    !autoThis(target) &&
                    seedSemanticAnonymousView(target, structure);
                if (semanticSuperset) {
                    String path = anonymousPath(target);
                    return new TargetDecision(true, true, path, "layout",
                        choice.reason + "=" + target.typeEvidence +
                        "; exact typed-call view is a strict generated prefix; " +
                        "materialized a target-local non-conflicting superset instead of " +
                        "widening the helper-owned type");
                }
                return new TargetDecision(false, false, "",
                    "conflict", "semantic type " + choice.specification +
                    " is shorter than or conflicts with offsets");
            }
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
        // records often share the same layout. Rebuild only those exact legacy
        // targets from their own access profile.  Modern contextual/source
        // families carry interprocedural identity and are semantic anchors;
        // treating every STTypeFamilyApplier marker as legacy makes this pass
        // fight the family pass forever.
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
        boolean callResultView = target.callResultView &&
            target.genericPointerConsumers >= 1 && target.accessCount >= 1;
        boolean strongNested = target.nested.values().stream().anyMatch(nested -> {
            List<FieldEvidence> selected = selectedNestedFields(nested);
            return usableNested(nested, selected);
        });
        String path = anonymousPath(target);
        boolean replaceable = replaceable(target.expectedType) || target.scriptOwned;
        boolean apply = (multiField || strongNested || callResultView) && replaceable && automaticTarget(target) &&
            !autoThis(target);
        String reason = multiField ? "multiple consistent fixed offsets in one persistent target" :
            strongNested ? "consistent nested offsets through a pointer field in one persistent target" :
            callResultView ? "single-call consumer-local record view with fixed-offset evidence" :
            "single/weak fixed-offset profile retained for review";
        if (!replaceable) reason += "; concrete target type preserved";
        else if (!target.databaseBacked)
            reason += "; transient decompiler symbol requires review";
        else if (unsettledLocal(target))
            reason += "; unsettled decompiler type propagation: persistent local requires role repair";
        else if (target.scaledPointerEvidence && !target.callResultView)
            reason += "; newly corrected element-scaled pointer geometry is review-only";
        return new TargetDecision(apply, true, path, apply ? "layout" : "review", reason);
    }

    /**
     * Correct a script-owned receiver which was contaminated by one derived caller.  At least
     * two independently named caller families must flow through the complete call chain.  The
     * replacement is the unique non-caller class whose object extent covers every machine
     * access and whose physical vtable both covers every machine slot and strongly agrees with
     * every caller table.  This deliberately does not infer inheritance from layout alone.
     */
    private TargetDecision commonReceiverBoundaryDecision(TargetEvidence target,
            String currentStructure) {
        if (!target.kind.equals("parameter") || !target.scriptOwned ||
                !target.databaseBacked || currentStructure.isBlank() ||
                target.incomingNamedTypes.size() < 2 ||
                target.functionAddress == null) return null;
        Map<String, Set<String>> externalIncoming = new TreeMap<>();
        String selfPrefix = addr(target.functionAddress) + "|";
        for (Map.Entry<String, Set<String>> entry :
                target.incomingNamedTypes.entrySet()) {
            Set<String> origins = new TreeSet<>(entry.getValue());
            origins.removeIf(origin -> origin.startsWith(selfPrefix));
            if (!origins.isEmpty()) externalIncoming.put(entry.getKey(), origins);
        }
        if (externalIncoming.size() < 2) return null;
        target.typeSites.add("common receiver audit incoming=" +
            externalIncoming.keySet());
        Set<String> origins = new TreeSet<>();
        for (Set<String> values : externalIncoming.values())
            origins.addAll(values);
        if (origins.size() < 2) return null;
        Function function = currentProgram.getFunctionManager().getFunctionAt(
            target.functionAddress);
        ReceiverMachineProfile profile = receiverMachineProfile(function,
            target.locator);
        if (profile == null || profile.virtualSlots.isEmpty()) {
            target.typeSites.add("common receiver audit: no receiver-relative " +
                "machine virtual slots");
            return null;
        }
        target.typeSites.add("common receiver machine profile: extent=0x" +
            Integer.toHexString(profile.objectExtent).toUpperCase(Locale.ROOT) +
            ", slots=" + profile.virtualSlots);
        Structure currentOwner = structureFromPointer("pointer:" + currentStructure);
        Structure currentTable = vtableForOwner(currentOwner);
        int maximumSlot = profile.virtualSlots.stream().mapToInt(Integer::intValue)
            .max().orElse(-1);
        if (currentTable == null || maximumSlot < currentTable.getLength()) return null;

        List<Structure> sourceTables = new ArrayList<>();
        for (String path : externalIncoming.keySet()) {
            DataType value = dataTypes.getDataType(path);
            Structure table = value instanceof Structure owner ?
                vtableForOwner(owner) : null;
            if (table == null) return null;
            sourceTables.add(table);
        }
        ReceiverCandidate best = null;
        ReceiverCandidate second = null;
        for (Structure candidate : structures) {
            String path = candidate.getPathName();
            if (!namedReceiverType(candidate) || path.contains("/VTables/") ||
                    externalIncoming.containsKey(path) ||
                    path.equals(currentStructure) ||
                    candidate.getLength() < profile.objectExtent) continue;
            Structure table = vtableForOwner(candidate);
            if (table == null || maximumSlot >= table.getLength() ||
                    !supportsSlots(table, profile.virtualSlots)) continue;
            double minimum = 1.0;
            int compared = 0;
            for (Structure source : sourceTables) {
                SlotAgreement agreement = slotAgreement(table, source);
                minimum = Math.min(minimum, agreement.ratio);
                compared += agreement.compared;
            }
            target.typeSites.add("common receiver candidate " + path +
                " minimum_agreement=" +
                String.format(Locale.ROOT, "%.3f", minimum) +
                " comparisons=" + compared);
            if (minimum < 0.70 || compared < sourceTables.size() * 12) continue;
            ReceiverCandidate ranked = new ReceiverCandidate(candidate, minimum,
                compared);
            if (best == null || ranked.betterThan(best)) {
                second = best;
                best = ranked;
            }
            else if (second == null || ranked.betterThan(second)) second = ranked;
        }
        if (best == null || second != null &&
                best.minimumAgreement - second.minimumAgreement < 0.03) return null;
        return new TargetDecision(true, false, best.owner.getPathName(), "high",
            "two-or-more named receiver families propagated across exact call boundaries; " +
                "current physical vtable length=0x" +
                Integer.toHexString(currentTable.getLength()).toUpperCase(Locale.ROOT) +
                " is shorter than machine virtual slot 0x" +
                Integer.toHexString(maximumSlot).toUpperCase(Locale.ROOT) +
                "; unique common receiver " + best.owner.getPathName() +
                " covers object extent 0x" +
                Integer.toHexString(profile.objectExtent).toUpperCase(Locale.ROOT) +
                " and all slots; minimum exact slot-family agreement=" +
                String.format(Locale.ROOT, "%.3f", best.minimumAgreement) +
                " across " + best.compared + " comparisons; incoming=" +
                externalIncoming.keySet());
    }

    private ReceiverMachineProfile receiverMachineProfile(Function function,
            String storage) {
        if (function == null || storage == null) return null;
        Matcher initial = Pattern.compile("(?i)([A-Z][A-Z0-9]*):[0-9]+")
            .matcher(storage);
        if (!initial.find()) return null;
        Set<String> receiver = new HashSet<>();
        Set<String> vtable = new HashSet<>();
        receiver.add(initial.group(1).toUpperCase(Locale.ROOT));
        Set<Integer> slots = new TreeSet<>();
        int extent = 0;
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            for (int operand = 0; operand < instruction.getNumOperands(); operand++) {
                Matcher memory = MEMORY_REGISTER.matcher(
                    instruction.getDefaultOperandRepresentation(operand)
                        .toUpperCase(Locale.ROOT));
                if (!memory.find()) continue;
                String base = memory.group(1).toUpperCase(Locale.ROOT);
                int offset = memory.group(2) == null ? 0 :
                    (int)parseUnsigned(memory.group(2));
                if (receiver.contains(base)) extent = Math.max(extent, offset + 1);
                if ("CALL".equals(mnemonic) && vtable.contains(base)) slots.add(offset);
            }
            String destination = registerOperand(instruction, 0);
            String source = registerOperand(instruction, 1);
            boolean sourceReceiver = source != null && receiver.contains(source);
            boolean sourceVtable = source != null && vtable.contains(source);
            boolean loadsVtable = false;
            if ("MOV".equals(mnemonic) && destination != null &&
                    instruction.getNumOperands() > 1) {
                Matcher memory = MEMORY_REGISTER.matcher(
                    instruction.getDefaultOperandRepresentation(1)
                        .toUpperCase(Locale.ROOT));
                loadsVtable = memory.matches() &&
                    receiver.contains(memory.group(1).toUpperCase(Locale.ROOT)) &&
                    memory.group(2) == null;
                receiver.remove(destination);
                vtable.remove(destination);
                if (sourceReceiver) receiver.add(destination);
                if (sourceVtable || loadsVtable) vtable.add(destination);
            }
            else if (destination != null && instruction.getResultObjects().length > 0) {
                receiver.remove(destination);
                vtable.remove(destination);
            }
            if (instruction.getFlowType().isCall()) {
                for (String volatileRegister : Set.of("EAX", "ECX", "EDX")) {
                    receiver.remove(volatileRegister);
                    vtable.remove(volatileRegister);
                }
            }
        }
        return new ReceiverMachineProfile(Math.max(extent, shapeLengthForMachine(function,
            storage)), slots);
    }

    private int shapeLengthForMachine(Function function, String storage) {
        String key = targetKey(function, "parameter", storage);
        TargetEvidence evidence = targets.get(key);
        return evidence == null ? 0 : shapeLength(evidence);
    }

    private String registerOperand(Instruction instruction, int operand) {
        if (operand < 0 || operand >= instruction.getNumOperands()) return null;
        String value = instruction.getDefaultOperandRepresentation(operand)
            .trim().toUpperCase(Locale.ROOT);
        return value.matches("[A-Z][A-Z0-9]*") ? value : null;
    }

    private Structure vtableForOwner(Structure owner) {
        if (owner == null) return null;
        DataType primary = dataTypes.getDataType(
            "/SubmarineTitans/Recovered/VTables/" + owner.getName() + "VTable");
        if (primary instanceof Structure table) return table;
        DataTypeComponent component = owner.getComponentAt(0);
        if (component == null || component.getOffset() != 0) return null;
        DataType value = untypedef(component.getDataType());
        if (!(value instanceof Pointer pointer)) return null;
        value = untypedef(pointer.getDataType());
        return value instanceof Structure table &&
            table.getPathName().contains("/VTables/") ? table : null;
    }

    private boolean supportsSlots(Structure table, Set<Integer> slots) {
        for (int slot : slots)
            if (slotTarget(table, slot) == null) return false;
        return true;
    }

    private SlotAgreement slotAgreement(Structure candidate, Structure source) {
        int length = Math.min(candidate.getLength(), source.getLength());
        int compared = 0;
        int matched = 0;
        for (int offset = 0; offset < length;
                offset += currentProgram.getDefaultPointerSize()) {
            Address left = slotTarget(candidate, offset);
            Address right = slotTarget(source, offset);
            if (left == null || right == null) continue;
            compared++;
            if (left.equals(right)) matched++;
        }
        return new SlotAgreement(compared == 0 ? 0.0 :
            (double)matched / compared, compared);
    }

    private Address slotTarget(Structure table, int offset) {
        DataTypeComponent component = table.getComponentAt(offset);
        if (component == null || component.getOffset() != offset) return null;
        Matcher matcher = VTABLE_TARGET.matcher(
            component.getComment() == null ? "" : component.getComment());
        if (!matcher.find()) return null;
        Address address = currentProgram.getAddressFactory().getAddress(matcher.group(1));
        Function function = address == null ? null :
            currentProgram.getFunctionManager().getFunctionAt(address);
        function = resolveThunk(function);
        return function == null ? address : function.getEntryPoint();
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

    /**
     * Seed a target-local semantic superset with every component of the exact
     * generated type which reached this value through a typed call.  Partial
     * overlap is rejected because it would require a union/packed interpretation
     * which an ordinary Structure cannot express safely.
     */
    private boolean seedSemanticAnonymousView(TargetEvidence target, Structure view) {
        Map<Long, MergedComponent> merged = new TreeMap<>();
        for (FieldEvidence field : target.fields.values()) {
            int width = uniqueWidth(field);
            if (width < 1 || !mergeComponent(merged, field.offset, width,
                    selectedType(field, width), "direct target access"))
                return false;
        }
        for (DataTypeComponent component : view.getDefinedComponents()) {
            String specification = typeSpecification(component.getDataType());
            DataType componentType = untypedef(component.getDataType());
            if (componentType instanceof Array array && array.getNumElements() == 1)
                specification = typeSpecification(array.getDataType());
            if (!mergeComponent(merged, component.getOffset(), component.getLength(),
                    specification, view.getPathName()))
                return false;
        }
        if (merged.isEmpty()) return false;

        Map<Long, FieldEvidence> original = new TreeMap<>(target.fields);
        target.fields.clear();
        for (MergedComponent component : merged.values()) {
            FieldEvidence field = original.get(component.offset);
            if (field == null) field = new FieldEvidence(component.offset);
            field.widths.clear();
            field.widths.put(component.width, 1);
            field.types.clear();
            if (!component.type.isBlank()) field.types.put(component.type, 1);
            field.sites.add("exact semantic view baseline: " +
                String.join(" | ", component.sources));
            DataTypeComponent source = view.getComponentAt((int)component.offset);
            if (source != null && source.getOffset() == component.offset) {
                String name = source.getFieldName();
                if ("flags".equals(name) || "entryCount".equals(name) ||
                        "entries".equals(name))
                    field.roles.merge(name, 1, Integer::sum);
                DataType sourceType = untypedef(source.getDataType());
                if (sourceType instanceof Array array && array.getNumElements() == 1)
                    field.indexedStrides.merge(array.getElementLength(), 1, Integer::sum);
            }
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

    private boolean anonymousOnlyTypeEvidence(TargetEvidence target) {
        for (String specification : target.typeEvidence.keySet()) {
            Structure structure = structureFromPointer(specification);
            if (structure == null || !anonymousTypePath(structure.getPathName()) ||
                    !generatedAnonymousOwned(structure)) return false;
        }
        return true;
    }

    private boolean automaticTarget(TargetEvidence target) {
        if (!target.databaseBacked || unsettledLocal(target)) return false;
        // Correctly scaling decompiler pointer arithmetic can reveal a large
        // amount of previously hidden geometry. Keep that new geometry visible
        // in proposals, but apply it automatically only for the closed
        // call-result/consumer-local case proved above. This prevents one
        // analyzer upgrade from revising dozens of established generated views.
        if (target.scaledPointerEvidence && !target.callResultView) return false;
        // An analyzer proposal must not create its backing anonymous datatype when
        // the corresponding target is guaranteed to be preserved by the applier.
        // Otherwise every run creates an unreachable type which TypeLifecycle then
        // removes in the same run.
        boolean protectedTarget = target.expectedSource.equals(
            SourceType.USER_DEFINED.toString()) || target.expectedSource.equals(
                SourceType.IMPORTED.toString());
        return !protectedTarget || target.scriptOwned;
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

    private boolean prototypeByteTransportBoundary(TargetEvidence target) {
        if (!"parameter".equals(target.kind) || target.functionAddress == null ||
                !"pointer:/byte".equals(target.expectedType)) return false;
        Function function = currentProgram.getFunctionManager().getFunctionAt(
            target.functionAddress);
        if (function == null) return false;
        Parameter matched = null;
        for (Parameter parameter : function.getParameters()) {
            if (parameter.isAutoParameter() || parameter.getVariableStorage() == null ||
                    !parameter.getVariableStorage().toString().equals(target.locator)) continue;
            if (matched != null) return false;
            matched = parameter;
        }
        if (matched == null) return false;
        String comment = function.getComment();
        String ordinary = "[STPrototypeApplier] Propagated parameter " +
            matched.getOrdinal() + ".";
        String repair = "[STPrototypeRepairApplier] Propagated parameter " +
            matched.getOrdinal() + ".";
        return comment != null &&
            (comment.contains(ordinary) || comment.contains(repair)) &&
            comment.contains("complete mutable byte-buffer machine proof");
    }

    private boolean overwrittenScalarParameter(TargetEvidence target) {
        if (!"parameter".equals(target.kind) || target.functionAddress == null ||
                target.expectedType.startsWith("pointer:")) return false;
        Function function = currentProgram.getFunctionManager().getFunctionAt(
            target.functionAddress);
        if (function == null) return false;
        Parameter matched = null;
        for (Parameter parameter : function.getParameters()) {
            if (parameter.isAutoParameter() || !parameter.hasStackStorage() ||
                    parameter.getVariableStorage() == null ||
                    !parameter.getVariableStorage().toString().equals(target.locator)) continue;
            if (matched != null) return false;
            matched = parameter;
        }
        if (matched == null) return false;
        long frameDisplacement = (long)matched.getStackOffset() +
            currentProgram.getDefaultPointerSize();
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            MachineMemory destination = machineMemory(instruction, 0);
            if (destination == null || !destination.fixed ||
                    !"EBP".equals(destination.baseRegister) ||
                    destination.displacement != frameDisplacement ||
                    destination.width != currentProgram.getDefaultPointerSize()) continue;
            if (machineWritesFirstOperand(
                    instruction.getMnemonicString().toUpperCase(Locale.ROOT))) return true;
        }
        return false;
    }

    private boolean protectedSource(SourceType source) {
        return source == SourceType.USER_DEFINED || source == SourceType.IMPORTED;
    }

    private boolean typeFamilyOwned(String comment) {
        return comment != null && comment.contains(
            "[STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT");
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
                    "; exact_widths=" + field.exactWidths +
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
                    "; exact_widths=" + field.exactWidths +
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
            if (field == null) return false;
            if (width != component.getLength()) {
                if (!safeExactGeneratedWidening(structure, component, field, width))
                    return false;
                continue;
            }
            String observed = selectedType(field, width);
            DataType componentType = componentValueType(component, field, width);
            if (!Undefined.isUndefined(componentType) && !observed.isBlank() &&
                    !observed.equals(typeSpecification(componentType))) return false;
        }
        return true;
    }

    private boolean safeExactGeneratedWidening(Structure structure,
            DataTypeComponent current, FieldEvidence field, int width) {
        if (!generatedAnonymousOwned(structure) || width <= current.getLength() ||
                field.exactWidths.size() != 1 ||
                !field.exactWidths.containsKey(width) ||
                current.getFieldName() == null ||
                !current.getFieldName().matches(
                    "(?i)(?:field|value|unknown|unk)(?:_?(?:0x)?[0-9a-f]+)?"))
            return false;
        long start = current.getOffset();
        long end = start + width;
        for (DataTypeComponent other : structure.getDefinedComponents()) {
            if (other == current) continue;
            long otherStart = other.getOffset();
            long otherEnd = otherStart + other.getLength();
            if (start < otherEnd && otherStart < end) return false;
        }
        return end <= MAX_SHAPE_SIZE;
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
        if (field.exactWidths.size() == 1)
            return field.exactWidths.keySet().iterator().next();
        if (field.exactWidths.size() > 1) {
            List<Map.Entry<Integer, Integer>> exact =
                new ArrayList<>(field.exactWidths.entrySet());
            exact.sort(Comparator
                .<Map.Entry<Integer, Integer>>comparingInt(Map.Entry::getValue).reversed()
                .thenComparingInt(Map.Entry::getKey));
            Map.Entry<Integer, Integer> first = exact.get(0);
            Map.Entry<Integer, Integer> second = exact.get(1);
            return first.getValue() >= 3 &&
                first.getValue() >= second.getValue() * 4 ? first.getKey() : -1;
        }
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
        return pointed.matches(
            "/(?:void|byte|char|uchar|short|ushort|word|undefined(?:1|2|4|8)?|u?int|long|ulong)");
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

    private boolean hasTag(Function function, String name) {
        for (FunctionTag tag : function.getTags())
            if (name.equals(tag.getName())) return true;
        return false;
    }

    private File outputDirectory() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException("Output directory is required");
        return askDirectory("Select recovery output directory", "Select");
    }

    private List<Address> selectedFunctions() {
        String[] args = getScriptArgs();
        if (args.length < 2) return List.of();
        List<Address> result = new ArrayList<>();
        for (int index = 1; index < args.length; index++) {
            if (args[index].isBlank()) continue;
            Address address = currentProgram.getAddressFactory().getAddress(args[index]);
            if (address == null)
                throw new IllegalArgumentException(
                    "Invalid function address " + args[index]);
            if (!result.contains(address)) result.add(address);
        }
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

    private void writeCallTypeEdges(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path,
                StandardCharsets.UTF_8)) {
            out.write("source_target\tdestination_target\tsite\n");
            for (CallTypeEdge edge : callTypeEdges)
                out.write(tsv(edge.sourceKey) + "\t" +
                    tsv(edge.destinationKey) + "\t" + tsv(edge.site) + "\n");
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
            "owner_this_spill_repairs=" + ownerThisSpillRepairs,
            "typed_field_consumer_hints=" + typedFieldConsumerHints,
            "exact_reinterpret_accesses=" + exactReinterpretAccesses,
            "indexed_generated_tail_repairs=" + indexedTailRepairs,
            "machine_nested_member_accesses=" + machineNestedMemberAccesses,
            "machine_nested_pointer_fields=" + machineNestedPointerFields,
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
        final Map<String, Set<String>> incomingNamedTypes = new TreeMap<>();
        final Set<String> typeSites = new TreeSet<>();
        final Set<String> functions = new TreeSet<>();
        boolean discriminatedPayload, callResultView, scaledPointerEvidence;
        String directThisOwner = "";
        int accessCount, dArrayIndexEvidence, genericPointerConsumers;
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
    private record CallTypeEdge(String sourceKey, String destinationKey,
        String site) {}
    private record ReceiverMachineProfile(int objectExtent,
        Set<Integer> virtualSlots) {}
    private record SlotAgreement(double ratio, int compared) {}
    private record ReceiverCandidate(Structure owner, double minimumAgreement,
            int compared) {
        boolean betterThan(ReceiverCandidate other) {
            int score = Double.compare(minimumAgreement, other.minimumAgreement);
            if (score != 0) return score > 0;
            if (compared != other.compared) return compared > other.compared;
            return owner.getPathName().compareTo(other.owner.getPathName()) < 0;
        }
    }
    private record SemanticChoice(String specification, String reason) {}
    private record PointerAlias(TargetEvidence parent, long parentOffset, long childBaseOffset,
        int elementWidth, String elementType) {}
    private record MachineMemberPointer(TargetEvidence parent, long parentOffset,
        long childBaseOffset) {}
    private record MachineNestedValue(MachineMemberPointer member, long childOffset) {}
    private record MachineMemory(String baseRegister, long displacement, boolean fixed,
        Set<String> registers, int width) {}
    private record IndexedMember(String baseName, String indexText, long index,
        String memberName, long memberOffset, long absoluteOffset,
        TargetEvidence target, Structure owner) {
        String key() { return baseName + "|" + index + "|" + memberName; }
    }
    private static class ExactReinterpret {
        final long offset;
        final int width;
        final String type, detail;
        int count;
        ExactReinterpret(long offset, int width, String type, String detail) {
            this.offset = offset;
            this.width = width;
            this.type = type;
            this.detail = detail;
        }
    }
    private static class NestedEvidence {
        final long parentOffset;
        final Map<Long, FieldEvidence> fields = new TreeMap<>();
        int accessCount, dArrayIndexEvidence, pointerDepth = 1;
        NestedEvidence(long parentOffset) { this.parentOffset = parentOffset; }
    }
    private static class MergedGeneratedEvidence {
        final Map<Long, FieldEvidence> fields = new TreeMap<>();
        final Map<Long, NestedEvidence> nested = new TreeMap<>();
        boolean baselineSeeded, scaledPointerEvidence;
    }
    private static class FieldEvidence {
        final long offset;
        final Map<Integer, Integer> widths = new TreeMap<>();
        final Map<Integer, Integer> exactWidths = new TreeMap<>();
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
    private record Decompiled(Function function, String c, String error) { }
    private record Analysis(List<TypeProposal> types, List<FieldProposal> fields,
        List<TargetProposal> targets) {}
}
