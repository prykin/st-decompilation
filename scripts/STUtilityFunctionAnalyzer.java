// Recover semantics and prototypes of small, heavily reused runtime helpers.
// Read-only: writes utility_function_proposals.tsv and utility_function_summary.txt.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Analyze Utility Functions

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Locale;
import java.util.Set;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.FunctionTag;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.symbol.Reference;

public class STUtilityFunctionAnalyzer extends GhidraScript {
    private static final int TIMEOUT = 60;

    @Override
    protected void run() throws Exception {
        // Read-only script: do not leave GhidraScript's implicit transaction around runScript().
        end(true);
        if (currentProgram == null) { printerr("Open the analyzed ST program first."); return; }
        File selected = outputDirectory(); if (selected == null) return;
        Path directory = programDirectory(selected); Files.createDirectories(directory);
        DecompInterface decompiler = new DecompInterface();
        decompiler.toggleCCode(true); decompiler.toggleSyntaxTree(false);
        if (!decompiler.openProgram(currentProgram))
            throw new IllegalStateException("Decompiler could not open the current program");
        List<Row> rows = new ArrayList<>();
        try {
            List<Rule> activeRules = discoveredRules(decompiler);
            for (Rule rule : activeRules) {
                monitor.checkCancelled();
                Address address = currentProgram.getAddressFactory().getDefaultAddressSpace()
                    .getAddress(rule.address);
                Function function = currentProgram.getFunctionManager().getFunctionAt(address);
                if (function == null) { rows.add(Row.missing(rule, addr(address))); continue; }
                Function target = resolveThunk(function);
                DecompileResults result = decompiler.decompileFunction(target, TIMEOUT, monitor);
                String c = result.decompileCompleted() && result.getDecompiledFunction() != null ?
                    result.getDecompiledFunction().getC() : "";
                List<String> missing = new ArrayList<>();
                for (String token : rule.tokens) if (!c.contains(token)) missing.add(token);
                boolean verified = missing.isEmpty();
                rows.add(new Row(verified, addr(function.getEntryPoint()),
                    function.getName(true), function.getName(), function.getSymbol().getSource().toString(),
                    function.getPrototypeString(true, true), function.getCallingConventionName(),
                    parameterBaseline(function), rule, verified ? "body pattern verified" :
                    "missing body tokens: " + String.join(",", missing)));
            }
        }
        finally { decompiler.dispose(); }
        writeTsv(directory.resolve("utility_function_proposals.tsv"), rows);
        writeSummary(directory.resolve("utility_function_summary.txt"), rows);
        println("Utility-function analysis complete: " + directory.toAbsolutePath().normalize());
        println("Rules=" + rows.size() + ", verified/apply=" +
            rows.stream().filter(row -> row.apply).count());
    }

    /**
     * Discover helpers whose complete machine behavior is more specific than
     * their current generic prototype.  The recovered address is output data,
     * not part of the rule: this keeps the semantic proof usable on another
     * non-obfuscated build with the same DArray runtime.
     */
    private List<Rule> discoveredRules(DecompInterface decompiler) throws Exception {
        List<Rule> result = new ArrayList<>();
        Set<Long> occupied = new HashSet<>();
        String darrayPointer = darrayPointerSpecification();

        addDiscovered(result, occupied, discoverFreeAndNull(),
            "free_and_null", "FreeAndNull", "__stdcall", "/void",
            new String[] { "pointer:pointer:/void" }, new String[] { "value" },
            "frees a non-null allocation and clears the caller-owned pointer");
        if (!darrayPointer.isBlank()) {
            addDiscovered(result, occupied, discoverDArrayDestroy(),
                "darray_destroy", "DArrayDestroy", "__stdcall", "/void",
                new String[] { darrayPointer }, new String[] { "array" },
                "releases dynamic-array storage and the descriptor when the ownership flag is set");
            addDiscovered(result, occupied, discoverSourceCreate("darrcrea.c", 16),
                "darray_create", "DArrayCreate", "__stdcall", darrayPointer,
                new String[] { darrayPointer, "/uint", "/uint", "/uint" },
                new String[] { "array", "initialCapacity", "elementSize", "growCapacity" },
                "creates or initializes a generic dynamic-array descriptor");
            addDiscovered(result, occupied, discoverSourceCreate("sarrcrea.c", 12),
                "sarray_create", "SArrayCreate", "__stdcall", darrayPointer,
                new String[] { darrayPointer, "/uint", "/uint" },
                new String[] { "array", "initialCapacity", "growCapacity" },
                "creates or initializes the string-pointer array specialization");
            addDiscovered(result, occupied, discoverSourceFunction("darrput.c", 12),
                "darray_put", "DArrayPut", "__stdcall", "/int",
                new String[] { darrayPointer, "/uint", "pointer:/void" },
                new String[] { "array", "index", "element" },
                "copies one element into an indexed dynamic-array slot");
            addDiscovered(result, occupied, discoverSourceFunction("darrappe.c", 8),
                "darray_append", "DArrayAppend", "__stdcall", "/int",
                new String[] { darrayPointer, "pointer:/void" },
                new String[] { "array", "element" },
                "appends one element to a dynamic array and returns its result/index");
            addDiscovered(result, occupied, discoverDArrayGetElement(),
                "darray_get_element", "DArrayGetElement", "__fastcall", "/int",
                new String[] { darrayPointer, "/uint", "pointer:/void" },
                new String[] { "array", "index", "outElement" },
                "copies the indexed dynamic-array element and returns index or -4");
        }
        addDiscovered(result, occupied, discoverLoadResourceString(),
            "load_resource_string", "LoadResourceString", "__stdcall", "pointer:/char",
            new String[] { "/WinDef.h/UINT", "/WinDef.h/HINSTANCE" },
            new String[] { "resourceId", "module" },
            "loads a Win32 string resource into the process ring buffer and returns its address");
        Function indexedRecordByte = discoverIndexedRecordByteLookup();
        addDiscovered(result, occupied, indexedRecordByte,
            "indexed_record_byte_lookup", "LookupRecordByte", "__stdcall",
            indexedRecordByte == null ? "/int" :
                typeSpec(indexedRecordByte.getReturnType()),
            new String[] { "/char" }, new String[] { "recordIndex" },
            "maps a guarded byte-sized index to the first byte of a fixed-stride record; " +
                "return width is owned by the CFG-complete ABI consistency pass");

        if (!darrayPointer.isBlank()) {
            Function removeAt = discoverDArrayRemoveAt(decompiler);
            if (removeAt != null && occupied.add(removeAt.getEntryPoint().getOffset()))
                result.add(new Rule(removeAt.getEntryPoint().getOffset(),
                    "darray_remove_at", "DArrayRemoveAt", "__stdcall", "/int",
                    new String[] { darrayPointer, "/uint" },
                    new String[] { "array", "index" },
                    new String[] { "->count", "->elementSize", "->data",
                        "->iteratorIndex" },
                    "removes one indexed dynamic-array element, shifts the byte tail, " +
                        "updates count/iterator state, and returns zero or -4"));

            Function getNext = discoverDArrayGetNext(decompiler);
            if (getNext != null && occupied.add(getNext.getEntryPoint().getOffset()))
                result.add(new Rule(getNext.getEntryPoint().getOffset(),
                    "darray_get_next", "DArrayGetNext", "__fastcall", "/int",
                    new String[] { darrayPointer, "pointer:/byte" },
                    new String[] { "array", "outElement" },
                    new String[] { "->count", "->elementSize", "->data",
                        "->iteratorIndex" },
                    "copies the element at iteratorIndex to caller storage, advances " +
                        "the iterator, and returns the previous index or -4"));
        }

        Function copyRows = discoverCopyRows(decompiler);
        if (copyRows != null && occupied.add(copyRows.getEntryPoint().getOffset()))
            result.add(new Rule(copyRows.getEntryPoint().getOffset(),
                "copy_rows", "CopyRows", "__stdcall", "/void",
                new String[] { "pointer:/byte", "/int", "pointer:/byte", "/int",
                    "/uint", "/int" },
                new String[] { "destination", "destinationPitch", "source",
                    "sourcePitch", "rowBytes", "rowCount" },
                new String[0],
                "copies rowCount rows of rowBytes bytes between independently " +
                    "pitched byte buffers"));

        Function payloadLoader = discoverMfAObjLoad();
        if (payloadLoader != null &&
                occupied.add(payloadLoader.getEntryPoint().getOffset()))
            result.add(new Rule(payloadLoader.getEntryPoint().getOffset(),
                "mfaobj_load_payload", "mfAObjLoad", "__cdecl", "pointer:/byte",
                new String[] { "pointer:/cMf32", "pointer:/char", "/byte", "/int" },
                new String[] { "archive", "objectName", "param_3", "param_4" },
                new String[0],
                "loads a heterogeneous binary object payload; byte pointer is " +
                    "the neutral ABI type and each consumer owns its payload layout"));

        for (Rule allocator : discoverMemoryAllocators()) {
            if (occupied.add(allocator.address)) result.add(allocator);
        }
        return result;
    }

    private void addDiscovered(List<Rule> result, Set<Long> occupied, Function function,
            String id, String name, String convention, String returnType,
            String[] parameterTypes, String[] parameterNames, String semantics) {
        if (function == null || !occupied.add(function.getEntryPoint().getOffset())) return;
        result.add(new Rule(function.getEntryPoint().getOffset(), id, name, convention,
            returnType, parameterTypes, parameterNames, new String[0], semantics));
    }

    private Function discoverFreeAndNull() throws Exception {
        List<Function> matches = new ArrayList<>();
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            Function function = functions.next();
            if (!smallInternal(function, 64) || !retCleanup(function, 4) ||
                    callInstructionCount(function) != 1) continue;
            String body = machineText(function);
            if (body.contains("TEST EAX,EAX") && body.contains("MOV EAX,dword ptr [") &&
                    body.matches("(?s).*MOV dword ptr \\[[A-Z]{2,3}\\],0x0.*"))
                matches.add(function);
        }
        return unique(matches);
    }

    private Function discoverDArrayDestroy() throws Exception {
        List<Function> matches = new ArrayList<>();
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            Function function = functions.next();
            if (!smallInternal(function, 72) || !retCleanup(function, 4) ||
                    callInstructionCount(function) != 2) continue;
            String body = machineText(function);
            if (body.contains("+ 0x1c]") && body.contains("TEST byte ptr [") &&
                    body.contains(",0x8") && callsSameTarget(function))
                matches.add(function);
        }
        return unique(matches);
    }

    private Function discoverSourceCreate(String sourceLeaf, int cleanup) throws Exception {
        List<Function> matches = new ArrayList<>();
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            Function function = functions.next();
            if (function.isThunk() || function.isExternal() ||
                    !retCleanup(function, cleanup) || callInstructionCount(function) < 3)
                continue;
            if (evidenceText(function).contains(sourceLeaf)) matches.add(function);
        }
        return unique(matches);
    }

    private Function discoverSourceFunction(String sourceLeaf, int cleanup) {
        List<Function> matches = new ArrayList<>();
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            Function function = functions.next();
            if (function.isThunk() || function.isExternal() ||
                    !retCleanup(function, cleanup)) continue;
            if (evidenceText(function).contains(sourceLeaf)) matches.add(function);
        }
        return unique(matches);
    }

    private Function discoverLoadResourceString() throws Exception {
        List<Function> matches = new ArrayList<>();
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            Function function = functions.next();
            if (function.isThunk() || function.isExternal() || !retCleanup(function, 8) ||
                    !callsNamed(function, "GetModuleHandleA") ||
                    !callsNamed(function, "LoadStringA")) continue;
            String body = machineText(function);
            if (body.contains("0x800") && body.contains("MOV byte ptr [") &&
                    body.contains(",0x0")) matches.add(function);
        }
        return unique(matches);
    }

    private Function discoverDArrayGetElement() throws Exception {
        List<Function> matches = new ArrayList<>();
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            Function function = functions.next();
            if (!smallInternal(function, 96) || !retCleanup(function, 4) ||
                    callInstructionCount(function) != 0) continue;
            String body = machineText(function);
            if (body.contains("MOV EDI,ECX") && body.contains("MOV EAX,EDX") &&
                    body.contains("[EDI + 0x8]") && body.contains("[EDI + 0xc]") &&
                    body.contains("[EDI + 0x1c]") && body.contains("0xfffffffc") &&
                    body.contains("*0x4]")) matches.add(function);
        }
        return unique(matches);
    }

    private Function discoverIndexedRecordByteLookup() throws Exception {
        List<Function> matches = new ArrayList<>();
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            Function function = functions.next();
            if (!smallInternal(function, 80) || !retCleanup(function, 4) ||
                    callInstructionCount(function) != 0) continue;
            String body = machineText(function);
            if (body.contains("MOVSX EAX,byte ptr [EBP + 0x8]") &&
                    body.contains("CMP EAX,0xff") && body.contains("XOR AL,AL") &&
                    body.matches("(?s).*MOV AL,byte ptr \\[[^]]*\\*0x2 \\+ 0x[0-9a-f]+\\].*"))
                matches.add(function);
        }
        return unique(matches);
    }

    private boolean smallInternal(Function function, long maximumBytes) {
        return !function.isThunk() && !function.isExternal() &&
            function.getBody().getNumAddresses() <= maximumBytes;
    }

    private String machineText(Function function) {
        StringBuilder result = new StringBuilder();
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext())
            result.append(instructions.next().toString()).append('\n');
        return result.toString();
    }

    private boolean retCleanup(Function function, long expected) {
        boolean seen = false;
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            if (!instruction.getMnemonicString().toUpperCase(Locale.ROOT).startsWith("RET"))
                continue;
            if (instruction.getScalar(0) == null ||
                    instruction.getScalar(0).getUnsignedValue() != expected) return false;
            seen = true;
        }
        return seen;
    }

    private int callInstructionCount(Function function) {
        int result = 0;
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext())
            if (instructions.next().getFlowType().isCall()) result++;
        return result;
    }

    private boolean callsSameTarget(Function function) {
        Address target = null;
        int calls = 0;
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            if (!instruction.getFlowType().isCall()) continue;
            Address[] flows = instruction.getFlows();
            if (flows.length != 1) return false;
            if (target == null) target = flows[0];
            else if (!target.equals(flows[0])) return false;
            calls++;
        }
        return calls == 2;
    }

    private boolean callsNamed(Function function, String leaf) throws Exception {
        for (Function called : function.getCalledFunctions(monitor)) {
            Function target = resolveThunk(called);
            if (leaf.equals(target.getName()) || target.getName(true).endsWith("::" + leaf))
                return true;
        }
        return false;
    }

    private Function unique(List<Function> matches) {
        return matches.size() == 1 ? matches.get(0) : null;
    }

    private String evidenceText(Function function) {
        StringBuilder result = new StringBuilder(function.getComment() == null ? "" :
            function.getComment().toLowerCase(Locale.ROOT));
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            for (Reference reference : instruction.getReferencesFrom()) {
                Data data = currentProgram.getListing().getDefinedDataAt(reference.getToAddress());
                if (data != null && data.hasStringValue() && data.getValue() != null)
                    result.append('\n').append(data.getValue().toString()
                        .toLowerCase(Locale.ROOT));
            }
        }
        return result.toString();
    }

    /**
     * Recover the DKW allocation family without relying on ST image addresses.
     * The embedded source filename establishes the library role while the
     * instruction shape distinguishes plain allocation, zeroed allocation, and
     * reallocation.  A neutral void pointer is deliberately retained at the ABI:
     * each caller owns the concrete allocated-object view.
     */
    private List<Rule> discoverMemoryAllocators() throws Exception {
        List<Rule> result = new ArrayList<>();
        FunctionIterator iterator =
            currentProgram.getFunctionManager().getFunctions(true);
        while (iterator.hasNext()) {
            monitor.checkCancelled();
            Function function = iterator.next();
            if (function.isThunk() || function.isExternal()) continue;
            String lower = sourceEvidence(function);
            if (!allocatorSource(lower)) continue;
            List<Parameter> parameters = explicitParameters(function);
            int directCalls = function.getCalledFunctions(monitor).size();
            if (lower.contains("memallcl.c") && parameters.size() == 1 &&
                    hasZeroFillStore(function) && hasZeroEax(function) &&
                    directCalls >= 2) {
                result.add(new Rule(function.getEntryPoint().getOffset(),
                    "memory_allocate_zeroed", "MemAllocClear", "__stdcall",
                    "pointer:/void", new String[] { "/uint" },
                    new String[] { "size" }, new String[0],
                    "allocates at least one byte, clears the requested byte " +
                        "extent, reports allocation failure, and returns a " +
                        "neutral pointer"));
            }
            else if (lower.contains("memalloc.c") &&
                    parameters.size() == 1 && hasTestOfEax(function) &&
                    hasZeroEax(function) && directCalls >= 2) {
                result.add(new Rule(function.getEntryPoint().getOffset(),
                    "memory_allocate", "MemAlloc", "__stdcall",
                    "pointer:/void", new String[] { "/uint" },
                    new String[] { "size" }, new String[0],
                    "allocates at least one byte, reports allocation failure, " +
                        "and returns a neutral pointer"));
            }
            else if (lower.contains("memreall.c") &&
                    parameters.size() == 2 && hasTestOfEax(function) &&
                    hasZeroEax(function) && directCalls >= 2) {
                result.add(new Rule(function.getEntryPoint().getOffset(),
                    "memory_reallocate", "MemRealloc", "__stdcall",
                    "pointer:/void",
                    new String[] { "pointer:/void", "/uint" },
                    new String[] { "allocation", "newSize" }, new String[0],
                    "resizes an allocation to at least one byte, reports " +
                        "allocation failure, and returns a neutral pointer"));
            }
        }
        return result;
    }

    private String sourceEvidence(Function function) {
        String comment = function.getComment() == null ? "" :
            function.getComment().toLowerCase(Locale.ROOT);
        if (allocatorSource(comment)) return comment;
        String evidence = evidenceText(function);
        if (allocatorSource(evidence)) return evidence;
        return comment;
    }

    private boolean allocatorSource(String value) {
        return value.contains("memallcl.c") || value.contains("memalloc.c") ||
            value.contains("memreall.c");
    }

    private Function discoverDArrayRemoveAt(DecompInterface decompiler)
            throws Exception {
        List<Function> matches = new ArrayList<>();
        FunctionIterator iterator =
            currentProgram.getFunctionManager().getFunctions(true);
        while (iterator.hasNext()) {
            monitor.checkCancelled();
            Function function = iterator.next();
            if (function.isThunk() || function.isExternal() ||
                    explicitParameters(function).size() != 2 ||
                    !function.getCalledFunctions(monitor).isEmpty())
                continue;
            List<Parameter> parameters = explicitParameters(function);
            if (!darrayPointer(parameters.get(0)) ||
                    parameters.get(1).getLength() != 4 ||
                    !hasRepMovePair(function))
                continue;
            DecompileResults result =
                decompiler.decompileFunction(function, TIMEOUT, monitor);
            String c = result.decompileCompleted() &&
                result.getDecompiledFunction() != null ?
                result.getDecompiledFunction().getC() : "";
            if (c.contains("->count") && c.contains("->elementSize") &&
                    c.contains("->data") && c.contains("->iteratorIndex") &&
                    (c.contains("return 0xfffffffc") ||
                        c.contains("return -4")) &&
                    c.contains(">> 2") && c.contains("& 3") &&
                    c.contains("->count =") && c.contains("return 0;"))
                matches.add(function);
        }
        return matches.size() == 1 ? matches.get(0) : null;
    }

    private Function discoverDArrayGetNext(DecompInterface decompiler)
            throws Exception {
        List<Function> matches = new ArrayList<>();
        FunctionIterator iterator =
            currentProgram.getFunctionManager().getFunctions(true);
        while (iterator.hasNext()) {
            monitor.checkCancelled();
            Function function = iterator.next();
            if (function.isThunk() || function.isExternal() ||
                    explicitParameters(function).size() != 2 ||
                    !function.getCalledFunctions(monitor).isEmpty() ||
                    !hasRepMovePair(function))
                continue;
            List<Parameter> parameters = explicitParameters(function);
            if (!darrayPointer(parameters.get(0)) ||
                    !(parameters.get(1).getDataType() instanceof
                        ghidra.program.model.data.Pointer))
                continue;
            DecompileResults result =
                decompiler.decompileFunction(function, TIMEOUT, monitor);
            String c = result.decompileCompleted() &&
                result.getDecompiledFunction() != null ?
                result.getDecompiledFunction().getC() : "";
            if (c.contains("->count") && c.contains("->elementSize") &&
                    c.contains("->data") && c.contains("->iteratorIndex") &&
                    (c.contains("return 0xfffffffc") ||
                        c.contains("return -4")) &&
                    c.contains(">> 2") && c.contains("& 3") &&
                    !c.contains("->count =") &&
                    c.contains("->iteratorIndex ="))
                matches.add(function);
        }
        return matches.size() == 1 ? matches.get(0) : null;
    }

    /**
     * Identify the optimized row-copy primitive by its complete two-dimensional
     * copy contract rather than by an ST address. The two pitch-minus-width
     * adjustments and the 4/8-byte paths distinguish it from memcpy and from
     * one-dimensional DArray helpers.
     */
    private Function discoverCopyRows(DecompInterface decompiler)
            throws Exception {
        List<Function> matches = new ArrayList<>();
        FunctionIterator iterator =
            currentProgram.getFunctionManager().getFunctions(true);
        while (iterator.hasNext()) {
            monitor.checkCancelled();
            Function function = iterator.next();
            List<Parameter> parameters = explicitParameters(function);
            if (function.isThunk() || function.isExternal() ||
                    parameters.size() != 6 ||
                    !function.getCalledFunctions(monitor).isEmpty() ||
                    !(parameters.get(0).getDataType() instanceof
                        ghidra.program.model.data.Pointer) ||
                    !(parameters.get(2).getDataType() instanceof
                        ghidra.program.model.data.Pointer))
                continue;
            DecompileResults result =
                decompiler.decompileFunction(function, TIMEOUT, monitor);
            String c = result.decompileCompleted() &&
                result.getDecompiledFunction() != null ?
                result.getDecompiledFunction().getC() : "";
            String destinationPitch = parameters.get(1).getName();
            String sourcePitch = parameters.get(3).getName();
            String rowBytes = parameters.get(4).getName();
            String rowCount = parameters.get(5).getName();
            if (c.contains(destinationPitch + " - " + rowBytes) &&
                    c.contains(sourcePitch + " - " + rowBytes) &&
                    c.contains("0 < (int)" + rowBytes) &&
                    c.contains("0 < " + rowCount) &&
                    c.contains("0xe < (int)" + rowBytes) &&
                    c.contains("699 < (int)" + rowBytes) &&
                    c.contains(">> 3") && c.contains("& 7"))
                matches.add(function);
        }
        return matches.size() == 1 ? matches.get(0) : null;
    }

    private String darrayPointerSpecification() {
        List<ghidra.program.model.data.Structure> matches = new ArrayList<>();
        java.util.Iterator<ghidra.program.model.data.DataType> types =
            currentProgram.getDataTypeManager().getAllDataTypes();
        while (types.hasNext()) {
            ghidra.program.model.data.DataType type = types.next();
            if (type instanceof ghidra.program.model.data.Structure structure &&
                    recoveredDArrayStructure(structure))
                matches.add(structure);
        }
        return matches.size() == 1 ? "pointer:" + matches.get(0).getPathName() : "";
    }

    private boolean darrayPointer(Parameter parameter) {
        if (!(parameter.getDataType() instanceof ghidra.program.model.data.Pointer pointer) ||
                !(pointer.getDataType() instanceof ghidra.program.model.data.Structure structure))
            return false;
        return recoveredDArrayStructure(structure);
    }

    private boolean recoveredDArrayStructure(
            ghidra.program.model.data.Structure structure) {
        String description = structure.getDescription();
        return structure.getLength() == 0x20 && description != null &&
            description.contains("[STTypeBootstrapApplier]") &&
            description.contains("[ST_SEMANTIC_ANCHOR]") &&
            description.toLowerCase(Locale.ROOT).contains("darray");
    }

    private boolean hasRepMovePair(Function function) {
        boolean dwords = false, bytes = false;
        InstructionIterator iterator =
            currentProgram.getListing().getInstructions(function.getBody(), true);
        while (iterator.hasNext()) {
            Instruction instruction = iterator.next();
            String rendered = instruction.toString().toUpperCase(Locale.ROOT);
            String mnemonic =
                instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            boolean repeat = rendered.contains("REP") || mnemonic.contains("REP");
            if (repeat && (rendered.contains("MOVSD") ||
                    mnemonic.contains("MOVSD"))) dwords = true;
            if (repeat && (rendered.contains("MOVSB") ||
                    mnemonic.contains("MOVSB"))) bytes = true;
        }
        return dwords && bytes;
    }

    private boolean hasZeroFillStore(Function function) {
        boolean store = false, repeat = false;
        InstructionIterator iterator =
            currentProgram.getListing().getInstructions(function.getBody(), true);
        while (iterator.hasNext()) {
            Instruction instruction = iterator.next();
            String rendered = instruction.toString().toUpperCase(Locale.ROOT);
            String mnemonic =
                instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            boolean stringStore = rendered.contains("STOS") ||
                mnemonic.contains("STOS");
            store |= stringStore;
            repeat |= stringStore &&
                (rendered.contains("REP") || mnemonic.contains("REP"));
        }
        // The exact memallcl.c provenance distinguishes this family member.
        // Optimized MSVC tails may be an ordinary byte store rather than a
        // second REP instruction, while some Ghidra x86 renderings attach the
        // prefix outside the mnemonic. Require a real repeated string store,
        // but do not require two particular textual spellings.
        return store && repeat;
    }

    private boolean hasTestOfEax(Function function) {
        InstructionIterator iterator =
            currentProgram.getListing().getInstructions(function.getBody(), true);
        while (iterator.hasNext()) {
            Instruction instruction = iterator.next();
            String rendered = instruction.toString().toUpperCase(Locale.ROOT);
            if ((rendered.startsWith("TEST ") || rendered.startsWith("CMP ")) &&
                    rendered.contains("EAX")) return true;
        }
        return false;
    }

    private boolean hasZeroEax(Function function) {
        InstructionIterator iterator =
            currentProgram.getListing().getInstructions(function.getBody(), true);
        while (iterator.hasNext()) {
            Instruction instruction = iterator.next();
            String rendered = instruction.toString().toUpperCase(Locale.ROOT);
            if ((rendered.startsWith("XOR ") || rendered.startsWith("SUB ")) &&
                    rendered.contains("EAX") &&
                    rendered.lastIndexOf("EAX") != rendered.indexOf("EAX"))
                return true;
        }
        return false;
    }

    private Function discoverMfAObjLoad() {
        List<Function> matches = new ArrayList<>();
        FunctionIterator iterator =
            currentProgram.getFunctionManager().getFunctions(true);
        while (iterator.hasNext()) {
            Function function = iterator.next();
            if (!function.getName(true).endsWith("::MFAOBJ::mfAObjLoad") ||
                    !tagged(function, "LIBRARY") ||
                    explicitParameters(function).size() != 4 ||
                    function.getCallingFunctions(monitor).size() < 8)
                continue;
            String comment = function.getComment();
            if (comment != null &&
                    comment.toLowerCase(Locale.ROOT).contains("mfaobj.cpp"))
                matches.add(function);
        }
        return matches.size() == 1 ? matches.get(0) : null;
    }

    private boolean tagged(Function function, String name) {
        for (FunctionTag tag : function.getTags())
            if (tag.getName().equals(name)) return true;
        return false;
    }

    private List<Parameter> explicitParameters(Function function) {
        List<Parameter> result = new ArrayList<>();
        for (Parameter parameter : function.getParameters())
            if (!parameter.isAutoParameter()) result.add(parameter);
        return result;
    }

    private Function resolveThunk(Function function) {
        Function current = function;
        for (int depth = 0; depth < 16 && current != null && current.isThunk(); depth++) {
            Function next = current.getThunkedFunction(false);
            if (next == null || next.equals(current)) break;
            current = next;
        }
        return current == null ? function : current;
    }

    private String parameterBaseline(Function function) {
        List<String> values = new ArrayList<>();
        for (Parameter parameter : function.getParameters()) {
            if (parameter.isAutoParameter()) continue;
            values.add((parameter.getName() == null ? "" : parameter.getName()) + "=" +
                typeSpec(parameter.getDataType()) + "@" + parameter.getSource());
        }
        return String.join(";", values);
    }

    private String typeSpec(ghidra.program.model.data.DataType type) {
        if (type instanceof ghidra.program.model.data.Pointer pointer &&
                pointer.getDataType() != null)
            return "pointer:" + typeSpec(pointer.getDataType());
        return type == null ? "" : type.getPathName();
    }

    private void writeTsv(Path path, List<Row> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\tfunction_address\tsemantic_id\texpected_qualified_name\t" +
                "expected_name\texpected_name_source\texpected_signature\texpected_convention\t" +
                "expected_parameters\tproposed_name\tproposed_convention\tproposed_return_type\t" +
                "proposed_parameter_types\tproposed_parameter_names\tconfidence\tsemantics\tevidence\n");
            for (Row row : rows) out.write((row.apply ? "1" : "0") + "\t" + row.address +
                "\t" + tsv(row.rule.id) + "\t" + tsv(row.qualifiedName) + "\t" +
                tsv(row.name) + "\t" + row.nameSource + "\t" + tsv(row.signature) + "\t" +
                row.convention + "\t" + tsv(row.parameters) + "\t" + row.rule.name + "\t" +
                row.rule.convention + "\t" + row.rule.returnType + "\t" +
                tsv(String.join(";", row.rule.parameterTypes)) + "\t" +
                tsv(String.join(";", row.rule.parameterNames)) + "\thigh\t" +
                tsv(row.rule.semantics) + "\t" + tsv(row.evidence) + "\n");
        }
    }

    private void writeSummary(Path path, List<Row> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("ST utility-function semantics\n\n");
            out.write("Rules: " + rows.size() + "\nVerified: " +
                rows.stream().filter(row -> row.apply).count() + "\n\n");
            for (Row row : rows) out.write(row.address + " " + row.rule.name + ": " +
                (row.apply ? "apply" : "review") + " - " + row.evidence + "\n");
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
        Path root = selected.toPath().toAbsolutePath().normalize();
        return root.getFileName() != null && root.getFileName().toString().equals(currentProgram.getName()) ?
            root : root.resolve(currentProgram.getName());
    }
    private static String tsv(String value) {
        return value == null ? "" : value.replace('\t', ' ').replace('\r', ' ').replace('\n', ' ');
    }
    private String addr(Address address) { return address.toString().toUpperCase(Locale.ROOT); }

    private record Rule(long address, String id, String name, String convention,
            String returnType, String[] parameterTypes, String[] parameterNames,
            String[] tokens, String semantics) {}
    private record Row(boolean apply, String address, String qualifiedName, String name,
            String nameSource, String signature, String convention, String parameters,
            Rule rule, String evidence) {
        static Row missing(Rule rule, String address) {
            return new Row(false, address, "", "", "", "", "", "", rule,
                "function missing");
        }
    }
}
