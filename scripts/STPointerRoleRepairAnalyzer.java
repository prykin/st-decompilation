// Find script-owned pointer locals whose stack slot is reused for scalar values.
// Read-only: only strong conflicts in functions with unsettled type propagation are enabled.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Analyze Pointer Role Repairs

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.HashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Variable;

public class STPointerRoleRepairAnalyzer extends GhidraScript {
    private static final String POINTER_MARKER = "[STPointerShapeApplier]";
    private static final String REPAIR_MARKER = "[STPointerRoleRepairApplier]";
    private static final int DECOMPILE_TIMEOUT = 60;
    private static final Pattern DECLARATION = Pattern.compile(
        "(?m)^\\s*(u?int|u?short|u?char|byte|undefined[1248]|bool|long|ulong)\\s+([^;]+);");
    private final List<Proposal> proposals = new ArrayList<>();
    private final List<String> failures = new ArrayList<>();
    private int candidateFunctions, unsettledFunctions;

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

        DecompInterface decompiler = new DecompInterface();
        decompiler.toggleCCode(true);
        decompiler.toggleSyntaxTree(true);
        if (!decompiler.openProgram(currentProgram))
            throw new IllegalStateException("Decompiler could not open the current program");
        try {
            Address only = onlyFunction();
            if (only != null) {
                Function function = currentProgram.getFunctionManager().getFunctionAt(only);
                if (function == null)
                    throw new IllegalArgumentException("No function at " + addr(only));
                List<Variable> candidates = candidates(function);
                if (!candidates.isEmpty()) {
                    candidateFunctions++;
                    analyze(function, candidates, decompiler);
                }
            }
            else {
                FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
                while (functions.hasNext()) {
                    monitor.checkCancelled();
                    Function function = functions.next();
                    List<Variable> candidates = candidates(function);
                    if (candidates.isEmpty()) continue;
                    candidateFunctions++;
                    analyze(function, candidates, decompiler);
                }
            }
        }
        finally {
            decompiler.dispose();
        }
        proposals.sort(Comparator.comparing((Proposal row) -> row.functionAddress)
            .thenComparing(row -> row.locator));
        writeTsv(directory.resolve("pointer_role_repair_proposals.tsv"));
        writeJson(directory.resolve("pointer_role_repair_proposals.jsonl"));
        writeFailures(directory.resolve("pointer_role_repair_failures.tsv"));
        writeSummary(directory.resolve("pointer_role_repair_summary.txt"));
        println("Pointer-role repair analysis complete: " + directory.toAbsolutePath().normalize());
        println("Candidate functions=" + candidateFunctions + ", unsettled=" +
            unsettledFunctions + ", proposals=" + proposals.size() + ", auto_apply=" +
            proposals.stream().filter(row -> row.apply).count() + ", failures=" +
            failures.size());
    }

    private List<Variable> candidates(Function function) {
        List<Variable> result = new ArrayList<>();
        if (function == null || function.isExternal() || function.isThunk()) return result;
        for (Variable variable : function.getLocalVariables()) {
            String comment = variable.getComment();
            if (!variable.isValid() || !(variable.getDataType() instanceof Pointer) ||
                    variable.getLength() != currentProgram.getDefaultPointerSize() ||
                    comment == null || !comment.contains(POINTER_MARKER) ||
                    comment.contains(REPAIR_MARKER)) continue;
            result.add(variable);
        }
        return result;
    }

    private void analyze(Function function, List<Variable> candidates,
            DecompInterface decompiler) {
        DecompileResults result = decompiler.decompileFunction(function, DECOMPILE_TIMEOUT, monitor);
        if (!result.decompileCompleted() || result.getDecompiledFunction() == null) {
            failures.add(addr(function.getEntryPoint()) + "\t" + tsv(function.getName(true)) +
                "\t" + tsv(result == null ? "no result" : result.getErrorMessage()));
            return;
        }
        String c = result.getDecompiledFunction().getC();
        if (!c.contains("Type propagation algorithm not settling")) return;
        unsettledFunctions++;
        Map<String, String> scalarVariables = scalarVariables(c);
        for (Variable variable : candidates) {
            String name = variable.getName();
            int scalarCasts = count(c, Pattern.compile(
                "\\((?:u?int|u?short|u?char|byte|undefined[1248]|long|ulong)\\)\\s*" +
                Pattern.quote(name) + "\\b"));
            int addressMember = count(c, Pattern.compile(
                "&\\s*" + Pattern.quote(name) + "\\s*->"));
            int memberUses = count(c, Pattern.compile(
                "\\b" + Pattern.quote(name) + "\\s*->"));
            AssignmentEvidence assignments = scalarAssignments(c, name, scalarVariables);
            // Taking &pointer->field is ordinary C and is only diagnostic here.  It
            // becomes an automatic repair only when the same persistent local is also
            // demonstrably sourced from a scalar lifetime.
            boolean apply = assignments.narrow > 0 ||
                (assignments.all > 0 && scalarCasts > 0);
            if (!apply && scalarCasts == 0 && assignments.all == 0) continue;
            String confidence = apply ? "high" : "review";
            String reason = "unsettled decompiler type propagation; pointer-shape-owned local " +
                "also has scalar lifetime evidence: scalar_casts=" + scalarCasts +
                ", scalar_source_assignments=" + assignments.all +
                ", narrow_scalar_assignments=" + assignments.narrow +
                ", address_of_member=" + addressMember + ", member_uses=" + memberUses +
                ". Resetting the persistent database type lets SSA lifetimes infer independently.";
            proposals.add(new Proposal(apply, function, variable, confidence, scalarCasts,
                assignments.all, assignments.narrow, addressMember, memberUses, reason));
        }
    }

    private Map<String, String> scalarVariables(String c) {
        Map<String, String> result = new HashMap<>();
        Matcher matcher = DECLARATION.matcher(c);
        while (matcher.find()) {
            String type = matcher.group(1);
            for (String item : matcher.group(2).split(",")) {
                Matcher name = Pattern.compile("([A-Za-z_$][A-Za-z0-9_$]*)")
                    .matcher(item.trim());
                if (name.find()) result.put(name.group(1), type);
            }
        }
        return result;
    }

    private AssignmentEvidence scalarAssignments(String c, String target,
            Map<String, String> scalarVariables) {
        Matcher assignments = Pattern.compile("(?m)\\b" + Pattern.quote(target) +
            "\\s*=\\s*([^;\\r\\n]{1,300});").matcher(c);
        int all = 0, narrow = 0;
        while (assignments.find()) {
            String rhs = assignments.group(1);
            // Require the scalar to be the direct value under the outer pointer cast.
            // A scalar merely used as an argument of a pointer-returning function is
            // not evidence that the destination stack slot has a scalar lifetime.
            Matcher direct = Pattern.compile("^\\s*\\([^)]*\\*[^)]*\\)\\s*" +
                "(?:\\([^)]*\\)\\s*)*([A-Za-z_$][A-Za-z0-9_$]*)\\s*$")
                .matcher(rhs);
            if (!direct.matches()) continue;
            String type = scalarVariables.get(direct.group(1));
            if (type == null) continue;
            all++;
            if (type.matches("u?(?:short|char)|byte")) narrow++;
        }
        return new AssignmentEvidence(all, narrow);
    }

    private int count(String text, Pattern pattern) {
        int result = 0;
        Matcher matcher = pattern.matcher(text);
        while (matcher.find()) result++;
        return result;
    }

    private File outputDirectory() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException("Recovery output directory required");
        return askDirectory("Select recovery output directory", "Select");
    }
    private Address onlyFunction() {
        String[] args = getScriptArgs();
        if (args.length < 2 || args[1].isBlank()) return null;
        Address result = currentProgram.getAddressFactory().getAddress(args[1]);
        if (result == null) throw new IllegalArgumentException("Invalid function address: " + args[1]);
        return result;
    }
    private Path programDirectory(File selected) {
        return selected.getName().equals(currentProgram.getName()) ? selected.toPath() :
            selected.toPath().resolve(currentProgram.getName());
    }

    private void writeTsv(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\tfunction_address\tfunction_name\ttarget_name\ttarget_locator\t" +
                "expected_type\texpected_source\texpected_comment\tproposed_type\tconfidence\t" +
                "scalar_casts\tscalar_source_assignments\tnarrow_scalar_assignments\t" +
                "address_member_uses\tmember_uses\treason\n");
            for (Proposal row : proposals) out.write(bit(row.apply) + "\t" +
                row.functionAddress + "\t" + tsv(row.functionName) + "\t" +
                tsv(row.name) + "\t" + tsv(row.locator) + "\t" +
                tsv(row.expectedType) + "\t" + row.expectedSource + "\t" +
                tsv(row.expectedComment) + "\t/undefined4\t" + row.confidence + "\t" +
                row.scalarCasts + "\t" + row.scalarAssignments + "\t" +
                row.narrowAssignments + "\t" + row.addressMemberUses + "\t" +
                row.memberUses + "\t" + tsv(row.reason) + "\n");
        }
    }

    private void writeJson(Path path) throws Exception {
        List<String> lines = new ArrayList<>();
        for (Proposal row : proposals) lines.add("{\"apply\":" + row.apply +
            ",\"function_address\":" + q(row.functionAddress) +
            ",\"function_name\":" + q(row.functionName) +
            ",\"target_name\":" + q(row.name) +
            ",\"target_locator\":" + q(row.locator) +
            ",\"expected_type\":" + q(row.expectedType) +
            ",\"proposed_type\":\"/undefined4\",\"confidence\":" +
            q(row.confidence) + ",\"reason\":" + q(row.reason) + "}");
        Files.write(path, lines, StandardCharsets.UTF_8);
    }

    private void writeFailures(Path path) throws Exception {
        List<String> lines = new ArrayList<>();
        lines.add("function_address\tfunction_name\treason");
        lines.addAll(failures);
        Files.write(path, lines, StandardCharsets.UTF_8);
    }

    private void writeSummary(Path path) throws Exception {
        Files.write(path, List.of("program=" + currentProgram.getName(),
            "candidate_functions=" + candidateFunctions,
            "unsettled_type_propagation_functions=" + unsettledFunctions,
            "proposals=" + proposals.size(),
            "auto_apply=" + proposals.stream().filter(row -> row.apply).count(),
            "review_only=" + proposals.stream().filter(row -> !row.apply).count(),
            "decompile_failures=" + failures.size(),
            "policy=Only STPointerShapeApplier-owned four-byte locals in unsettled functions are considered.",
            "policy_apply=Automatic reset requires a narrow scalar source, or both a scalar source " +
                "and an explicit scalar cast. Address-of-member use alone remains review-only.",
            "effect=Reset to undefined4 removes a function-wide pointer constraint; it does not rename or split variables."),
            StandardCharsets.UTF_8);
    }

    private String typeSpecification(Variable variable) {
        if (variable.getDataType() instanceof Pointer pointer && pointer.getDataType() != null)
            return "pointer:" + pointer.getDataType().getPathName();
        return variable.getDataType().getPathName();
    }
    private static String addr(Address value) {
        return value == null ? "" : value.toString().toUpperCase(Locale.ROOT);
    }
    private static String bit(boolean value) { return value ? "1" : "0"; }
    private static String tsv(String value) {
        if (value == null) return "";
        return value.replace("\\", "\\\\").replace("\t", "\\t")
            .replace("\r", "\\r").replace("\n", "\\n");
    }
    private static String q(String value) {
        if (value == null) return "null";
        return "\"" + value.replace("\\", "\\\\").replace("\"", "\\\"")
            .replace("\r", "\\r").replace("\n", "\\n").replace("\t", "\\t") + "\"";
    }

    private record AssignmentEvidence(int all, int narrow) {}
    private class Proposal {
        final boolean apply;
        final String functionAddress, functionName, name, locator, expectedType,
            expectedSource, expectedComment, confidence, reason;
        final int scalarCasts, scalarAssignments, narrowAssignments,
            addressMemberUses, memberUses;
        Proposal(boolean apply, Function function, Variable variable, String confidence,
                int scalarCasts, int scalarAssignments, int narrowAssignments,
                int addressMemberUses, int memberUses, String reason) {
            this.apply = apply; functionAddress = addr(function.getEntryPoint());
            functionName = function.getName(true); name = variable.getName();
            locator = variable.getVariableStorage().toString();
            expectedType = typeSpecification(variable);
            expectedSource = variable.getSource().toString();
            expectedComment = variable.getComment() == null ? "" : variable.getComment();
            this.confidence = confidence; this.scalarCasts = scalarCasts;
            this.scalarAssignments = scalarAssignments;
            this.narrowAssignments = narrowAssignments;
            this.addressMemberUses = addressMemberUses; this.memberUses = memberUses;
            this.reason = reason;
        }
    }
}
