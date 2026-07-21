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
import java.util.List;
import java.util.Locale;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Parameter;

public class STUtilityFunctionAnalyzer extends GhidraScript {
    private static final int TIMEOUT = 60;
    private final List<Rule> rules = List.of(
        new Rule(0x006ab060L, "free_and_null", "FreeAndNull", "__stdcall", "/void",
            new String[] { "pointer:pointer:/void" }, new String[] { "value" },
            new String[] { "= (LPVOID)0x0", "thunk_FUN_006a4950" },
            "frees a non-null allocation and clears the caller-owned pointer"),
        new Rule(0x006ae110L, "darray_destroy", "DArrayDestroy", "__stdcall", "/void",
            new String[] { "pointer:/SubmarineTitans/Recovered/DArrayTy" },
            new String[] { "array" }, new String[] { "+ 0x1c", "& 8", "FUN_006a5e90" },
            "releases DArray storage and the descriptor when the ownership flag is set"),
        new Rule(0x006b0140L, "load_resource_string", "LoadResourceString", "__stdcall",
            "pointer:/char", new String[] { "/WinDef.h/UINT", "/WinDef.h/HINSTANCE" },
            new String[] { "resourceId", "module" },
            new String[] { "GetModuleHandleA", "LoadStringA", "0x800" },
            "loads a Win32 string resource into the process ring buffer and returns its address"),
        new Rule(0x006acc70L, "darray_get_element", "DArrayGetElement", "__fastcall",
            "/int", new String[] { "pointer:/SubmarineTitans/Recovered/DArrayTy", "/uint",
                "pointer:/void" }, new String[] { "array", "index", "outElement" },
            new String[] { "0xfffffffc", "field_0008", "field_000C", "field_001C" },
            "copies the indexed DArray element and returns index or -4"),
        new Rule(0x004406c0L, "player_race_id", "GetPlayerRaceId", "__stdcall", "/int",
            new String[] { "/char" }, new String[] { "playerId" },
            new String[] { "g_playerRuntime", ".raceId", "0xff" },
            "maps a player id to its race id and preserves the -1 sentinel")
    );

    @Override
    protected void run() throws Exception {
        if (currentProgram == null) { printerr("Open the analyzed ST program first."); return; }
        File selected = outputDirectory(); if (selected == null) return;
        Path directory = programDirectory(selected); Files.createDirectories(directory);
        DecompInterface decompiler = new DecompInterface();
        decompiler.toggleCCode(true); decompiler.toggleSyntaxTree(false);
        if (!decompiler.openProgram(currentProgram))
            throw new IllegalStateException("Decompiler could not open the current program");
        List<Row> rows = new ArrayList<>();
        try {
            for (Rule rule : rules) {
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
