// Apply only high-confidence calling-convention proposals from direct x86 callsites.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Apply Callsite Conventions

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Function.FunctionUpdateType;
import ghidra.program.model.listing.FunctionTag;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.listing.ParameterImpl;
import ghidra.program.model.listing.ReturnParameterImpl;
import ghidra.program.model.listing.Variable;
import ghidra.program.model.symbol.SourceType;

public class STCallsiteConventionApplier extends GhidraScript {
    private static final String TAG = "RECOVERED_CALLSITE_CONVENTION";
    private static final String MARKER = "[STCallsiteConventionApplier]";
    private final List<Report> report = new ArrayList<>();

    @Override
    protected void run() throws Exception {
        end(true);
        if (currentProgram == null) { printerr("Open the analyzed ST program first."); return; }
        File file = inputFile(); if (file == null) return;
        Tsv input = read(file.toPath());
        require(input, "apply", "address", "function", "current_signature",
            "current_calling_convention", "signature_source", "calls",
            "ecx_pointer_setup", "caller_cleanup_calls", "caller_cleanup_bytes",
            "callee_ret_pop_bytes", "expected_stack_bytes",
            "incoming_ecx_used", "exact_stack_argument_calls",
            "classification", "suggested_calling_convention", "confidence", "reason");
        int transaction = currentProgram.startTransaction("Apply callsite conventions");
        boolean commit = false;
        try {
            for (Map<String, String> row : input.rows) {
                monitor.checkCancelled();
                apply(row);
            }
            commit = true;
        }
        finally { currentProgram.endTransaction(transaction, commit); }
        Path output = file.toPath().toAbsolutePath().normalize().getParent()
            .resolve("callsite_convention_apply_report.tsv");
        write(output);
        println("Callsite conventions: applied=" + count("applied") +
            ", unchanged=" + count("unchanged") + ", preserved=" + count("preserved") +
            ", disabled=" + count("disabled") + ", conflicts=" + count("conflict"));
        println("Apply report: " + output);
    }

    private void apply(Map<String, String> row) {
        String target = row.get("address");
        if (!enabled(row.get("apply"))) {
            report.add(new Report(target, "disabled", "apply=0"));
            return;
        }
        try {
            Address address = currentProgram.getAddressFactory().getAddress(target);
            Function function = address == null ? null :
                currentProgram.getFunctionManager().getFunctionAt(address);
            if (function == null) throw new IllegalArgumentException("function missing");
            int calls = Integer.parseInt(row.get("calls"));
            int expected = Integer.parseInt(row.get("expected_stack_bytes"));
            int exactStackCalls = Integer.parseInt(row.get("exact_stack_argument_calls"));
            String proposed = row.get("suggested_calling_convention");
            boolean cdeclRule = "static_cdecl_candidate".equals(row.get("classification")) &&
                "__cdecl".equals(proposed) &&
                "high".equals(row.get("confidence")) &&
                calls >= 2 && exactStackCalls == calls &&
                "0".equals(row.get("incoming_ecx_used")) &&
                "0".equals(row.get("ecx_pointer_setup")) &&
                Integer.parseInt(row.get("caller_cleanup_calls")) ==
                    calls &&
                exactCleanup(row.get("caller_cleanup_bytes"), expected) &&
                noPositive(row.get("callee_ret_pop_bytes"));
            boolean stdcallRule =
                "static_stdcall_candidate".equals(row.get("classification")) &&
                "__stdcall".equals(proposed) && "high".equals(row.get("confidence")) &&
                calls >= 2 && exactStackCalls == calls && expected > 0 &&
                "0".equals(row.get("incoming_ecx_used")) &&
                "0".equals(row.get("ecx_pointer_setup")) &&
                "0".equals(row.get("caller_cleanup_calls")) &&
                exactCleanup(row.get("callee_ret_pop_bytes"), expected);
            if (!cdeclRule && !stdcallRule) {
                report.add(new Report(target, "preserved",
                    "proposal no longer satisfies strict automatic rule"));
                return;
            }
            if (proposed.equals(function.getCallingConventionName())) {
                report.add(new Report(target, "unchanged", "already " + proposed));
                return;
            }
            boolean baseline = function.getName(true).equals(unt(row.get("function"))) &&
                function.getSignature().getPrototypeString(true)
                    .equals(unt(row.get("current_signature"))) &&
                function.getCallingConventionName().equals(
                    row.get("current_calling_convention")) &&
                function.getSignatureSource().toString().equals(row.get("signature_source"));
            if (!baseline) {
                report.add(new Report(target, "preserved", "stale signature baseline"));
                return;
            }
            if (function.getSignatureSource() == SourceType.IMPORTED ||
                    function.getSignatureSource() == SourceType.USER_DEFINED) {
                report.add(new Report(target, "preserved", "manual/imported signature"));
                return;
            }
            List<Variable> parameters = new ArrayList<>();
            for (Parameter parameter : function.getParameters()) {
                if (parameter.isAutoParameter()) continue;
                parameters.add(new ParameterImpl(parameter.getName(),
                    parameter.getFormalDataType(), currentProgram, SourceType.ANALYSIS));
            }
            boolean varargs = function.hasVarArgs();
            function.updateFunction(proposed,
                new ReturnParameterImpl(function.getReturnType(), currentProgram),
                parameters, FunctionUpdateType.DYNAMIC_STORAGE_FORMAL_PARAMS, true,
                SourceType.ANALYSIS);
            function.setVarArgs(varargs);
            function.setSignatureSource(SourceType.ANALYSIS);
            if (!hasTag(function, TAG)) function.addTag(TAG);
            String line = MARKER + " " + proposed +
                " inferred from complete caller/callee stack and ECX dataflow. Evidence: " +
                unt(row.get("reason"));
            String old = function.getComment();
            if (old == null || old.isBlank()) function.setComment(line);
            else if (!old.contains(MARKER)) function.setComment(old + "\n\n" + line);
            report.add(new Report(target, "applied", "__thiscall -> " + proposed));
        }
        catch (Exception exception) {
            report.add(new Report(target, "conflict", message(exception)));
        }
    }

    private boolean noPositive(String values) {
        if (values == null || values.isBlank()) return true;
        for (String value : values.split(";"))
            if (!value.isBlank() && Long.parseLong(value) > 0) return false;
        return true;
    }
    private boolean exactCleanup(String values, int expected) {
        if (expected <= 0 || values == null || values.isBlank()) return false;
        String[] parts = values.split(";");
        return parts.length == 1 && Long.parseLong(parts[0]) == expected;
    }
    private boolean hasTag(Function function, String name) {
        for (FunctionTag tag : function.getTags()) if (name.equals(tag.getName())) return true;
        return false;
    }
    private File inputFile() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException("Path to callsite_convention_proposals.tsv required");
        return askFile("Select callsite_convention_proposals.tsv", "Apply conventions");
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
            out.write("address\tstatus\tdetail\n");
            for (Report row : report) out.write(row.address + "\t" + row.status + "\t" +
                clean(row.detail) + "\n");
        }
    }
    private long count(String status) {
        return report.stream().filter(row -> status.equals(row.status)).count();
    }
    private static boolean enabled(String value) {
        return "1".equals(value) || "true".equalsIgnoreCase(value) ||
            "yes".equalsIgnoreCase(value);
    }
    private static String unt(String value) {
        if (value == null) return "";
        StringBuilder result = new StringBuilder(); boolean escaped = false;
        for (char ch : value.toCharArray()) {
            if (!escaped && ch == '\\') { escaped = true; continue; }
            if (escaped) {
                if (ch == 't') result.append('\t');
                else if (ch == 'r') result.append('\r');
                else if (ch == 'n') result.append('\n');
                else result.append(ch);
                escaped = false;
            }
            else result.append(ch);
        }
        if (escaped) result.append('\\');
        return result.toString();
    }
    private static String clean(String value) {
        return value == null ? "" : value.replace('\t', ' ')
            .replace('\r', ' ').replace('\n', ' ');
    }
    private static String message(Exception exception) {
        String value = exception.getMessage();
        return value == null || value.isBlank() ? exception.getClass().getSimpleName() : value;
    }
    private record Tsv(List<String> header, List<Map<String, String>> rows) { }
    private record Report(String address, String status, String detail) { }
}
