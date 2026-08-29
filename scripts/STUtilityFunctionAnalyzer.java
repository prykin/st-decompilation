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
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Set;
import java.util.TreeSet;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

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
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.FunctionDefinition;
import ghidra.program.model.pcode.DataTypeSymbol;
import ghidra.program.model.pcode.HighFunction;
import ghidra.program.model.pcode.HighFunctionDBUtil;
import ghidra.program.model.symbol.Namespace;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;
import ghidra.program.model.symbol.Symbol;

public class STUtilityFunctionAnalyzer extends GhidraScript {
    private static final int TIMEOUT = 600;
    private final Map<Long, String> consumerCallViews = new LinkedHashMap<>();

    @Override
    protected void run() throws Exception {
        // Read-only script: do not leave GhidraScript's implicit transaction around runScript().
        end(true);
        if (currentProgram == null) { printerr("Open the analyzed ST program first."); return; }
        File selected = outputDirectory(); if (selected == null) return;
        Path directory = programDirectory(selected); Files.createDirectories(directory);
        DecompInterface decompiler = new DecompInterface();
        decompiler.toggleCCode(true); decompiler.toggleSyntaxTree(true);
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
                    function.hasVarArgs(), parameterBaseline(function), callFixup(function), rule,
                    verified ? "body pattern verified" :
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

        addDiscovered(result, occupied, discoverAllocaProbe(),
            "msvc_alloca_probe", "__alloca_probe", "__stdcall", "/void",
            new String[0], new String[0],
            "MSVC x86 dynamic-stack probe; the canonical name activates Ghidra's " +
                "built-in alloca_probe call-fixup so EAX-sized stack allocations remain " +
                "dynamic local storage instead of raw stack0x address artifacts",
            "alloca_probe");
        addDiscovered(result, occupied, discoverFreeAndNull(),
            "free_and_null", "FreeAndNull", "__stdcall", "/void",
            new String[] { "pointer:/void" }, new String[] { "slotStorage" },
            "treats its argument as the untyped address of a caller-owned pointer slot, " +
                "frees the non-null allocation, and clears that slot; void * is intentional " +
                "because unrelated C++ T ** values do not implicitly convert to void **");
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
            addDiscovered(result, occupied, discoverSourceCreate("darrcrea.c", 20),
                "darray_create_tracked", "DArrayCreateTracked", "__stdcall", darrayPointer,
                new String[] { darrayPointer, "/uint", "/uint", "/uint", "/uint" },
                new String[] { "array", "initialCapacity", "elementSize", "growCapacity",
                    "callerPc" },
                "creates or initializes a generic dynamic-array descriptor and records " +
                    "the caller program counter supplied by the instrumented runtime");
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
        Function bitsetBuilder = discoverSentinelBitset128Builder();
        if (bitsetBuilder != null && occupied.add(
                bitsetBuilder.getEntryPoint().getOffset()))
            result.add(new Rule(bitsetBuilder.getEntryPoint().getOffset(),
                "sentinel_bitset128_builder", "BuildBitSet128", "__cdecl", "/void",
                new String[] { "pointer:/uint" }, new String[] { "bits" },
                new String[0],
                "clears one 128-bit output set, then consumes a sentinel-terminated " +
                    "variadic list of bit indexes and sets each corresponding bit; " +
                    "the 128-entry loop cap is a corruption guard rather than a fixed " +
                    "source argument count", "", true));
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

        PayloadLoaderCandidate payloadLoader =
            discoverHeterogeneousPayloadLoader(decompiler);
        if (payloadLoader != null && occupied.add(
                payloadLoader.function.getEntryPoint().getOffset()))
            result.add(new Rule(payloadLoader.function.getEntryPoint().getOffset(),
                "heterogeneous_payload_loader", payloadLoader.function.getName(),
                payloadLoader.function.getCallingConventionName(), "pointer:/byte",
                parameterTypes(payloadLoader.function),
                parameterNames(payloadLoader.function),
                new String[0],
                "loads a heterogeneous binary payload; byte pointer is the neutral ABI " +
                    "type and each consumer owns its payload layout; independently " +
                    "rendered consumer views=" + String.join("|", payloadLoader.views)));

        for (Rule allocator : discoverMemoryAllocators()) {
            if (occupied.add(allocator.address)) result.add(allocator);
        }
        return result;
    }

    private void addDiscovered(List<Rule> result, Set<Long> occupied, Function function,
            String id, String name, String convention, String returnType,
            String[] parameterTypes, String[] parameterNames, String semantics) {
        addDiscovered(result, occupied, function, id, name, convention, returnType,
            parameterTypes, parameterNames, semantics, "");
    }

    private void addDiscovered(List<Rule> result, Set<Long> occupied, Function function,
            String id, String name, String convention, String returnType,
            String[] parameterTypes, String[] parameterNames, String semantics,
            String callFixup) {
        if (function == null || !occupied.add(function.getEntryPoint().getOffset())) return;
        result.add(new Rule(function.getEntryPoint().getOffset(), id, name, convention,
            returnType, parameterTypes, parameterNames, new String[0], semantics,
            callFixup));
    }

    /**
     * Recognize the VC6-era x86 stack probe from its complete machine contract.
     * The helper receives the allocation byte count in EAX, probes each 0x1000-byte
     * page, moves ESP below the requested extent, restores ECX, and returns through
     * the original return address.  There is deliberately no ST address or current
     * symbol-name dependency: the canonical name is needed because x86win.cspec
     * attaches its alloca_probe p-code injection by target name.
     */
    private Function discoverAllocaProbe() {
        List<Function> matches = new ArrayList<>();
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            Function function = functions.next();
            if (!smallInternal(function, 64) || callInstructionCount(function) != 0 ||
                    !hasBareReturn(function)) continue;
            String body = machineText(function).toUpperCase(Locale.ROOT);
            if (body.contains("PUSH ECX") &&
                    body.contains("CMP EAX,0X1000") &&
                    body.contains("LEA ECX,[ESP + 0X8]") &&
                    body.contains("SUB ECX,0X1000") &&
                    body.contains("SUB EAX,0X1000") &&
                    body.contains("SUB ECX,EAX") &&
                    body.contains("MOV ESP,ECX") &&
                    body.contains("MOV ECX,DWORD PTR [EAX]") &&
                    body.contains("MOV EAX,DWORD PTR [EAX + 0X4]") &&
                    body.endsWith("PUSH EAX\nRET\n"))
                matches.add(function);
        }
        return unique(matches);
    }

    private boolean hasBareReturn(Function function) {
        int returns = 0;
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            if (!instruction.getMnemonicString().toUpperCase(Locale.ROOT).startsWith("RET"))
                continue;
            if (instruction.getScalar(0) != null) return false;
            returns++;
        }
        return returns == 1;
    }

    private Function discoverFreeAndNull() throws Exception {
        List<Function> namedMatches = new ArrayList<>();
        FunctionIterator namedFunctions =
            currentProgram.getFunctionManager().getFunctions(true);
        while (namedFunctions.hasNext()) {
            Function function = namedFunctions.next();
            if ("FreeAndNull".equals(function.getName()) &&
                    freeAndNullMachineShape(function))
                namedMatches.add(function);
        }
        Function named = unique(namedMatches);
        if (named != null) return named;

        List<Function> taggedMatches = new ArrayList<>();
        FunctionIterator taggedFunctions =
            currentProgram.getFunctionManager().getFunctions(true);
        while (taggedFunctions.hasNext()) {
            Function function = taggedFunctions.next();
            if (tagged(function, "RECOVERED_UTILITY_FREE_AND_NULL") &&
                    freeAndNullMachineShape(function))
                taggedMatches.add(function);
        }
        Function tagged = unique(taggedMatches);
        if (tagged != null) return tagged;

        List<Function> matches = new ArrayList<>();
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            Function function = functions.next();
            if (freeAndNullMachineShape(function)) matches.add(function);
        }
        return unique(matches);
    }

    private boolean freeAndNullMachineShape(Function function) throws Exception {
        if (!smallInternal(function, 64) || !retCleanup(function, 4) ||
                callInstructionCount(function) != 1) return false;
        String body = machineText(function);
        return body.contains("TEST EAX,EAX") &&
            body.contains("MOV EAX,dword ptr [") &&
            (body.contains("MOV dword ptr [ESI],0x0") ||
             body.contains("MOV dword ptr [EDI],0x0") ||
             body.contains("MOV dword ptr [EBX],0x0") ||
             body.matches("(?s).*MOV dword ptr \\[[A-Z]{2,3}\\],0x0.*"));
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

    /**
     * Recognize a sentinel-varargs 128-bit set initializer from its complete
     * machine contract.  No address or current symbol participates in the
     * proof: one fixed pointer comes from EBP+8, four dwords are cleared, the
     * list walker starts at EBP+0xC, a negative value terminates it, and the
     * exact word/bit split is guarded by a 128-item bound.
     */
    private Function discoverSentinelBitset128Builder() {
        List<Function> matches = new ArrayList<>();
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            Function function = functions.next();
            if (!smallInternal(function, 128) || callInstructionCount(function) != 0 ||
                    explicitParameters(function).size() != 1 ||
                    !"__cdecl".equals(function.getCallingConventionName()) ||
                    directCallSiteCount(function) < 8) continue;
            String body = machineText(function).toUpperCase(Locale.ROOT);
            Matcher output = Pattern.compile(
                "(?m)^MOV (EAX|EBX|ECX|EDX|ESI|EDI),DWORD PTR \\[EBP \\+ 0X8\\]$")
                .matcher(body);
            Matcher walker = Pattern.compile(
                "(?m)^LEA (EAX|EBX|ECX|EDX|ESI|EDI),\\[EBP \\+ 0XC\\]$")
                .matcher(body);
            if (!output.find() || !walker.find()) continue;
            String base = output.group(1), cursor = walker.group(1);
            Matcher zero = Pattern.compile(
                "(?m)^XOR (EAX|EBX|ECX|EDX|ESI|EDI),\\1$").matcher(body);
            boolean cleared = false;
            while (zero.find() && !cleared) {
                String value = zero.group(1);
                cleared = body.matches("(?s).*MOV DWORD PTR \\[" + base + "\\]," +
                        value + ".*") &&
                    body.matches("(?s).*MOV DWORD PTR \\[" + base +
                        " \\+ 0X4\\]," + value + ".*") &&
                    body.matches("(?s).*MOV DWORD PTR \\[" + base +
                        " \\+ 0X8\\]," + value + ".*") &&
                    body.matches("(?s).*MOV DWORD PTR \\[" + base +
                        " \\+ 0XC\\]," + value + ".*");
            }
            if (!cleared || !body.matches("(?s).*MOV [A-Z]+,DWORD PTR \\[" +
                    cursor + "\\].*") ||
                    !body.contains("ADD " + cursor + ",0X4") ||
                    !Pattern.compile("(?m)^SAR [A-Z]+,0X5$").matcher(body).find() ||
                    !Pattern.compile("(?m)^SHL [A-Z]+,CL$").matcher(body).find() ||
                    !Pattern.compile("(?m)^OR [A-Z]+,[A-Z]+$").matcher(body).find() ||
                    !Pattern.compile("(?m)^CMP [A-Z]+,0X80$").matcher(body).find() ||
                    !Pattern.compile("(?m)^(?:TEST|CMP) [A-Z]+,[A-Z]+$\nJL ")
                        .matcher(body).find() || !hasBareReturn(function)) continue;
            matches.add(function);
        }
        return unique(matches);
    }

    private int directCallSiteCount(Function target) {
        int result = 0;
        ReferenceIterator references = currentProgram.getReferenceManager()
            .getReferencesTo(target.getEntryPoint());
        while (references.hasNext()) {
            Reference reference = references.next();
            Instruction instruction = currentProgram.getListing()
                .getInstructionAt(reference.getFromAddress());
            if (instruction == null || !instruction.getFlowType().isCall()) continue;
            for (Address flow : instruction.getFlows())
                if (flow.equals(target.getEntryPoint())) { result++; break; }
        }
        return result;
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

    private PayloadLoaderCandidate discoverHeterogeneousPayloadLoader(
            DecompInterface decompiler) throws Exception {
        List<PayloadLoaderCandidate> matches = new ArrayList<>();
        FunctionIterator iterator =
            currentProgram.getFunctionManager().getFunctions(true);
        while (iterator.hasNext()) {
            Function function = iterator.next();
            if (!tagged(function, "LIBRARY") ||
                    !tagged(function, "RECOVERED_SOURCE_NAME") ||
                    !"__cdecl".equals(function.getCallingConventionName()) ||
                    explicitParameters(function).size() != 4 ||
                    !(function.getReturnType() instanceof Pointer) ||
                    function.getCallingFunctions(monitor).size() < 8)
                continue;
            ConsumerViews views = exactConsumerPointerViews(function, decompiler);
            if (views.types.size() >= 2 && !views.calls.isEmpty())
                matches.add(new PayloadLoaderCandidate(function, views.types,
                    views.calls));
        }
        if (matches.size() != 1) return null;
        PayloadLoaderCandidate match = matches.get(0);
        consumerCallViews.put(match.function.getEntryPoint().getOffset(),
            encodeConsumerCallViews(match.calls));
        return match;
    }

    private ConsumerViews exactConsumerPointerViews(Function function,
            DecompInterface decompiler) throws Exception {
        Set<String> types = new TreeSet<>();
        List<ConsumerCallView> calls = new ArrayList<>();
        for (Function caller : function.getCallingFunctions(monitor)) {
            monitor.checkCancelled();
            DecompileResults decompiled =
                decompiler.decompileFunction(caller, TIMEOUT, monitor);
            if (!decompiled.decompileCompleted()) continue;
            Object highFunction = decompiled.getClass()
                .getMethod("getHighFunction").invoke(decompiled);
            if (highFunction == null) continue;
            InstructionIterator instructions = currentProgram.getListing()
                .getInstructions(caller.getBody(), true);
            while (instructions.hasNext()) {
                Instruction instruction = instructions.next();
                if (!"CALL".equalsIgnoreCase(instruction.getMnemonicString()) ||
                        !callsTarget(instruction, function)) continue;
                String view = exactCallConsumerPointerView(highFunction,
                    instruction.getAddress());
                if (view.isBlank()) continue;
                types.add(view);
                calls.add(new ConsumerCallView(caller.getEntryPoint(),
                    instruction.getAddress(), view,
                    existingOverrideFingerprint(caller,
                        instruction.getAddress())));
            }
        }
        calls.sort(java.util.Comparator
            .comparing((ConsumerCallView value) -> value.caller)
            .thenComparing(value -> value.call));
        return new ConsumerViews(types, calls);
    }

    private boolean callsTarget(Instruction instruction, Function expected) {
        for (Address flow : instruction.getFlows()) {
            Function direct = currentProgram.getFunctionManager().getFunctionAt(flow);
            if (direct != null && resolveThunk(direct).equals(expected)) return true;
        }
        return false;
    }

    private String exactCallConsumerPointerView(Object highFunction,
            Address call) throws Exception {
        @SuppressWarnings("unchecked")
        Iterator<Object> operations = (Iterator<Object>)highFunction.getClass()
            .getMethod("getPcodeOps", Address.class).invoke(highFunction, call);
        Set<String> views = new TreeSet<>();
        while (operations.hasNext()) {
            Object operation = operations.next();
            if (!"CALL".equals(operation.getClass()
                    .getMethod("getMnemonic").invoke(operation))) continue;
            Object output = operation.getClass().getMethod("getOutput")
                .invoke(operation);
            collectConsumerPointerViews(output, views,
                java.util.Collections.newSetFromMap(
                    new java.util.IdentityHashMap<>()), 0);
        }
        Set<String> concrete = new TreeSet<>();
        boolean neutral = false;
        for (String view : views) {
            if (neutralConsumerPointerSpecification(view)) neutral = true;
            else concrete.add(view);
        }
        // An immediate neutral ownership/cleanup lifetime followed by a typed
        // payload view is intentionally heterogeneous inside the caller.  A
        // use-site return override would force the typed view backwards into
        // the ownership local and manufacture a cast around the loader call.
        return !neutral && concrete.size() == 1 ?
            concrete.iterator().next() : "";
    }

    private void collectConsumerPointerViews(Object varnode, Set<String> views,
            Set<Object> visited, int depth) throws Exception {
        if (varnode == null || depth > 5 || !visited.add(varnode)) return;
        Object high = varnode.getClass().getMethod("getHigh").invoke(varnode);
        DataType type = high == null ? null : (DataType)high.getClass()
            .getMethod("getDataType").invoke(high);
        if (type instanceof Pointer) views.add(typeSpec(type));
        @SuppressWarnings("unchecked")
        Iterator<Object> descendants = (Iterator<Object>)varnode.getClass()
            .getMethod("getDescendants").invoke(varnode);
        while (descendants.hasNext()) {
            Object operation = descendants.next();
            String mnemonic = (String)operation.getClass()
                .getMethod("getMnemonic").invoke(operation);
            if (!Set.of("COPY", "CAST", "INDIRECT", "MULTIEQUAL")
                    .contains(mnemonic)) continue;
            Object output = operation.getClass().getMethod("getOutput")
                .invoke(operation);
            collectConsumerPointerViews(output, views, visited, depth + 1);
        }
    }

    private boolean concreteConsumerPointer(DataType type) {
        if (!(type instanceof Pointer pointer) || pointer.getDataType() == null)
            return false;
        DataType pointed = pointer.getDataType();
        String path = pointed.getPathName();
        return !path.equals("/void") && !path.equals("/byte") &&
            !path.equals("/char") && !path.matches("/undefined[0-9]*");
    }

    private boolean neutralConsumerPointerSpecification(String specification) {
        return specification.equals("pointer:/void") ||
            specification.equals("pointer:/byte") ||
            specification.equals("pointer:/char") ||
            specification.matches("pointer:/undefined[0-9]*");
    }

    private String existingOverrideFingerprint(Function caller, Address call) {
        Namespace root = HighFunction.findOverrideSpace(caller);
        if (root == null) return "none";
        String agreed = "";
        for (Symbol symbol : currentProgram.getSymbolTable().getSymbols(call)) {
            if (!root.equals(symbol.getParentNamespace())) continue;
            DataTypeSymbol value = HighFunctionDBUtil.readOverride(symbol);
            if (value == null ||
                    !(value.getDataType() instanceof FunctionDefinition definition))
                continue;
            String fingerprint = overrideFingerprint(definition);
            if (!agreed.isBlank() && !agreed.equals(fingerprint))
                return "ambiguous";
            agreed = fingerprint;
        }
        return agreed.isBlank() ? "none" : agreed;
    }

    private String overrideFingerprint(FunctionDefinition definition) {
        List<String> values = new ArrayList<>();
        values.add(definition.getCallingConventionName());
        values.add(typeSpec(definition.getReturnType()));
        for (var argument : definition.getArguments())
            values.add(typeSpec(argument.getDataType()));
        return String.join(";", values);
    }

    private String encodeConsumerCallViews(List<ConsumerCallView> calls) {
        List<String> result = new ArrayList<>();
        for (ConsumerCallView call : calls)
            result.add(addr(call.caller) + "," + addr(call.call) + "," +
                call.returnType + "," + call.expectedOverride);
        return String.join("|", result);
    }

    private String[] parameterTypes(Function function) {
        return explicitParameters(function).stream()
            .map(parameter -> typeSpec(parameter.getFormalDataType()))
            .toArray(String[]::new);
    }

    private String[] parameterNames(Function function) {
        List<Parameter> parameters = explicitParameters(function);
        String[] result = new String[parameters.size()];
        for (int index = 0; index < parameters.size(); index++) {
            String name = parameters.get(index).getName();
            result[index] = name == null || name.isBlank() ?
                "param_" + (index + 1) : name;
        }
        return result;
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

    private String callFixup(Function function) {
        String value = function.getCallFixup();
        return value == null ? "" : value;
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
                "expected_varargs\texpected_parameters\texpected_call_fixup\tproposed_name\tproposed_convention\tproposed_varargs\tproposed_return_type\t" +
                "proposed_parameter_types\tproposed_parameter_names\tproposed_call_fixup\t" +
                "consumer_call_views\tconfidence\tsemantics\tevidence\n");
            for (Row row : rows) out.write((row.apply ? "1" : "0") + "\t" + row.address +
                "\t" + tsv(row.rule.id) + "\t" + tsv(row.qualifiedName) + "\t" +
                tsv(row.name) + "\t" + row.nameSource + "\t" + tsv(row.signature) + "\t" +
                row.convention + "\t" + row.varargs + "\t" + tsv(row.parameters) + "\t" +
                tsv(row.callFixup) + "\t" + row.rule.name + "\t" +
                row.rule.convention + "\t" + row.rule.varargs + "\t" + row.rule.returnType + "\t" +
                tsv(String.join(";", row.rule.parameterTypes)) + "\t" +
                tsv(String.join(";", row.rule.parameterNames)) + "\t" +
                tsv(row.rule.callFixup) + "\t" +
                tsv(consumerCallViews.getOrDefault(row.rule.address, "")) +
                "\thigh\t" +
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
            String[] tokens, String semantics, String callFixup, boolean varargs) {
        Rule(long address, String id, String name, String convention,
                String returnType, String[] parameterTypes, String[] parameterNames,
                String[] tokens, String semantics) {
            this(address, id, name, convention, returnType, parameterTypes,
                parameterNames, tokens, semantics, "", false);
        }
        Rule(long address, String id, String name, String convention,
                String returnType, String[] parameterTypes, String[] parameterNames,
                String[] tokens, String semantics, String callFixup) {
            this(address, id, name, convention, returnType, parameterTypes,
                parameterNames, tokens, semantics, callFixup, false);
        }
    }
    private record PayloadLoaderCandidate(Function function, Set<String> views,
        List<ConsumerCallView> calls) {}
    private record ConsumerViews(Set<String> types,
        List<ConsumerCallView> calls) {}
    private record ConsumerCallView(Address caller, Address call,
        String returnType, String expectedOverride) {}
    private record Row(boolean apply, String address, String qualifiedName, String name,
            String nameSource, String signature, String convention, boolean varargs,
            String parameters,
            String callFixup, Rule rule, String evidence) {
        static Row missing(Rule rule, String address) {
            return new Row(false, address, "", "", "", "", "", false, "", "", rule,
                "function missing");
        }
    }
}
