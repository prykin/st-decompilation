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
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.FunctionTag;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Parameter;

public class STUtilityFunctionAnalyzer extends GhidraScript {
    private static final int TIMEOUT = 60;
    private final List<Rule> rules = List.of(
        new Rule(0x006ab060L, "free_and_null", "FreeAndNull", "__stdcall", "/void",
            new String[] { "pointer:pointer:/void" }, new String[] { "value" },
            new String[] { "*value = (void *)0x0", "thunk_FUN_006a4950" },
            "frees a non-null allocation and clears the caller-owned pointer"),
        new Rule(0x006ae110L, "darray_destroy", "DArrayDestroy", "__stdcall", "/void",
            new String[] { "pointer:/SubmarineTitans/Recovered/DArrayTy" },
            new String[] { "array" },
            new String[] { "array->data", "array->flags", "& 8", "FUN_006a5e90" },
            "releases DArray storage and the descriptor when the ownership flag is set"),
        new Rule(0x006ae290L, "darray_create", "DArrayCreate", "__stdcall",
            "pointer:/SubmarineTitans/Recovered/DArrayTy",
            new String[] { "pointer:/SubmarineTitans/Recovered/DArrayTy", "/uint", "/uint",
                "/uint" },
            new String[] { "array", "initialCapacity", "elementSize", "growCapacity" },
            new String[] { "darrcrea.c", "FUN_006ae230" },
            "creates or initializes a generic DArray descriptor"),
        new Rule(0x006b54f0L, "sarray_create", "SArrayCreate", "__stdcall",
            "pointer:/SubmarineTitans/Recovered/DArrayTy",
            new String[] { "pointer:/SubmarineTitans/Recovered/DArrayTy", "/uint", "/uint" },
            new String[] { "array", "initialCapacity", "growCapacity" },
            new String[] { "sarrcrea.c", "FUN_006b5480" },
            "creates or initializes the DKW string-pointer array specialization"),
        new Rule(0x006b0140L, "load_resource_string", "LoadResourceString", "__stdcall",
            "pointer:/char", new String[] { "/WinDef.h/UINT", "/WinDef.h/HINSTANCE" },
            new String[] { "resourceId", "module" },
            new String[] { "GetModuleHandleA", "LoadStringA", "0x800" },
            "loads a Win32 string resource into the process ring buffer and returns its address"),
        new Rule(0x006acc70L, "darray_get_element", "DArrayGetElement", "__fastcall",
            "/int", new String[] { "pointer:/SubmarineTitans/Recovered/DArrayTy", "/uint",
                "pointer:/void" }, new String[] { "array", "index", "outElement" },
            new String[] { "return -4", "array->count", "array->elementSize",
                "array->data" },
            "copies the indexed DArray element and returns index or -4"),
        new Rule(0x004406c0L, "player_race_id", "GetPlayerRaceId", "__stdcall", "/int",
            new String[] { "/char" }, new String[] { "playerId" },
            new String[] { "g_playerRuntime", ".raceId", "0xff" },
            "maps a player id to its race id and preserves the -1 sentinel")
    );

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
            List<Rule> activeRules = new ArrayList<>(rules);
            activeRules.addAll(discoveredRules(decompiler));
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
        for (Rule rule : rules) occupied.add(rule.address);

        Function removeAt = discoverDArrayRemoveAt(decompiler);
        if (removeAt != null && occupied.add(removeAt.getEntryPoint().getOffset()))
            result.add(new Rule(removeAt.getEntryPoint().getOffset(),
                "darray_remove_at", "DArrayRemoveAt", "__stdcall", "/int",
                new String[] { "pointer:/SubmarineTitans/Recovered/DArrayTy", "/uint" },
                new String[] { "array", "index" },
                new String[] { "->count", "->elementSize", "->data",
                    "->iteratorIndex" },
                "removes one indexed DArray element, shifts the byte tail, " +
                    "updates count/iterator state, and returns zero or -4"));

        Function getNext = discoverDArrayGetNext(decompiler);
        if (getNext != null && occupied.add(getNext.getEntryPoint().getOffset()))
            result.add(new Rule(getNext.getEntryPoint().getOffset(),
                "darray_get_next", "DArrayGetNext", "__fastcall", "/int",
                new String[] { "pointer:/SubmarineTitans/Recovered/DArrayTy",
                    "pointer:/byte" },
                new String[] { "array", "outElement" },
                new String[] { "->count", "->elementSize", "->data",
                    "->iteratorIndex" },
                "copies the element at iteratorIndex to caller storage, advances " +
                    "the iterator, and returns the previous index or -4"));

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
        return result;
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

    private boolean darrayPointer(Parameter parameter) {
        String specification = typeSpec(parameter.getDataType());
        return specification.equals(
                "pointer:/SubmarineTitans/Recovered/DArrayTy") ||
            specification.equals("pointer:/DArrayTy") ||
            specification.endsWith("/DArrayTy");
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
