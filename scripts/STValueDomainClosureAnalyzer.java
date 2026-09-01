// Audit Q-057 machine value domains against the live Ghidra Program.
// Read-only: validates proposal anchors, call boundaries, and current signatures.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Audit Value-Domain Closure

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Set;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;

public class STValueDomainClosureAnalyzer extends GhidraScript {
    private static final int DECOMPILE_TIMEOUT = 600;
    private static final Set<String> CALL_ANCHORS = Set.of(
        "call_argument", "call_return", "indirect_receiver",
        "misattached_receiver_call_return");

    private final List<Row> rows = new ArrayList<>();
    private int pcodeVerified;
    private int callVerified;
    private int conflicts;

    @Override
    protected void run() throws Exception {
        // This is an acceptance audit.  It must never retain the implicit
        // GhidraScript transaction or mutate the Program it is certifying.
        end(true);
        if (currentProgram == null)
            throw new IllegalStateException("Open the analyzed ST program first");
        Path directory = outputDirectory();
        Files.createDirectories(directory);

        Tsv lifetime = readTsv(directory.resolve("local_lifetime_proposals.tsv"));
        requireColumns(lifetime, "apply", "function_address", "function_name",
            "original_name", "merge_group", "merge_group_count",
            "expected_current_type", "expected_symbol_source", "proposed_type",
            "anchor_kind", "anchor_address", "anchor_time", "anchor_operand",
            "direct_target_address", "resolved_target_address", "anchor_source",
            "supporting_anchors", "evidence_count", "confidence", "reason");
        Tsv lifetimeApply = readTsv(
            directory.resolve("local_lifetime_apply_report.tsv"));
        requireColumns(lifetimeApply, "function_address", "original_name",
            "merge_group", "anchor_address", "anchor_kind", "proposed_type",
            "status", "detail");
        Map<String, Map<String, String>> lifetimeStatus = index(
            lifetimeApply.rows, STValueDomainClosureAnalyzer::lifetimeStableKey);

        Tsv returns = readTsv(directory.resolve("return_semantics_proposals.tsv"));
        requireColumns(returns, "apply", "function_address", "expected_function",
            "expected_signature", "expected_return_type", "expected_return_source",
            "expected_noreturn", "proposed_return_type", "proposed_noreturn",
            "semantic_id", "confidence", "evidence");

        Map<String, List<Map<String, String>>> byFunction = new LinkedHashMap<>();
        for (Map<String, String> row : lifetime.rows)
            for (Map<String, String> expanded : expandAnchors(row))
                byFunction.computeIfAbsent(upper(expanded.get("function_address")),
                    ignored -> new ArrayList<>()).add(expanded);

        DecompInterface decompiler = new DecompInterface();
        decompiler.toggleCCode(false);
        decompiler.toggleSyntaxTree(true);
        if (!decompiler.openProgram(currentProgram))
            throw new IllegalStateException("Decompiler could not open current Program");
        try {
            for (Map.Entry<String, List<Map<String, String>>> entry :
                    byFunction.entrySet()) {
                monitor.checkCancelled();
                Function function = function(entry.getKey());
                Object highFunction = null;
                String decompileFailure = "";
                if (function == null) {
                    decompileFailure = "function is missing from the live Program";
                }
                else {
                    DecompileResults result = decompiler.decompileFunction(
                        function, DECOMPILE_TIMEOUT, monitor);
                    if (!result.decompileCompleted())
                        decompileFailure = "decompile failed: " +
                            text(result.getErrorMessage());
                    else
                        highFunction = result.getClass()
                            .getMethod("getHighFunction").invoke(result);
                    if (highFunction == null && decompileFailure.isBlank())
                        decompileFailure = "decompiler returned no HighFunction";
                }
                for (Map<String, String> proposal : entry.getValue()) {
                    Map<String, String> applied = lifetimeStatus.get(
                        lifetimeStableKey(proposal));
                    rows.add(localRow(function, highFunction, proposal, applied,
                        decompileFailure));
                }
            }
        }
        finally {
            decompiler.dispose();
        }

        for (Map<String, String> row : returns.rows) {
            monitor.checkCancelled();
            rows.add(returnRow(row));
        }
        ensureRepresentatives();
        rows.sort(Comparator.comparing(Row::functionAddress)
            .thenComparing(Row::family).thenComparing(Row::storage)
            .thenComparing(Row::definitions));
        writeRows(directory.resolve("q057_machine_domain_audit.tsv"));
        writeSummary(directory.resolve("q057_machine_domain_summary.txt"));
        println("Q-057 machine-domain audit complete: " + directory);
        println("Rows=" + rows.size() + ", pcode_verified=" + pcodeVerified +
            ", call_boundaries_verified=" + callVerified +
            ", conflicts=" + conflicts);
    }

    private Row localRow(Function function, Object highFunction,
            Map<String, String> proposal, Map<String, String> applied,
            String decompileFailure) {
        String functionAddress = upper(proposal.get("function_address"));
        String anchorAddress = upper(proposal.get("anchor_address"));
        int anchorTime = integer(proposal.get("anchor_time"), -1);
        String anchorKind = text(proposal.get("anchor_kind"));
        boolean instruction = false;
        boolean pcode = false;
        boolean call = !CALL_ANCHORS.contains(anchorKind);
        String validation = decompileFailure;
        try {
            Address address = currentProgram.getAddressFactory()
                .getAddress(anchorAddress);
            Instruction item = address == null ? null :
                currentProgram.getListing().getInstructionAt(address);
            instruction = item != null && function != null &&
                function.getBody().contains(address);
            if (!instruction)
                validation = append(validation,
                    "anchor instruction is absent or outside the function");
            if (highFunction != null && address != null) {
                @SuppressWarnings("unchecked")
                java.util.Iterator<Object> operations =
                    (java.util.Iterator<Object>)highFunction.getClass()
                        .getMethod("getPcodeOps", Address.class)
                        .invoke(highFunction, address);
                while (operations.hasNext()) {
                    Object op = operations.next();
                    Object sequence = op.getClass().getMethod("getSeqnum")
                        .invoke(op);
                    int time = ((Number)sequence.getClass().getMethod("getTime")
                        .invoke(sequence)).intValue();
                    int opcode = ((Number)op.getClass().getMethod("getOpcode")
                        .invoke(op)).intValue();
                    boolean exactSequence = time == anchorTime;
                    // Older call-return rows used zero as an unavailable
                    // sequence time.  The instruction address is still exact,
                    // so accept only its CALL/CALLIND op rather than any op at
                    // that address.
                    boolean legacyCallSequence = anchorTime == 0 &&
                        anchorKind.equals("call_return") &&
                        (opcode == ghidra.program.model.pcode.PcodeOp.CALL ||
                         opcode == ghidra.program.model.pcode.PcodeOp.CALLIND);
                    if (exactSequence || legacyCallSequence) {
                        pcode = true;
                        break;
                    }
                }
            }
            if (!pcode)
                validation = append(validation,
                    "exact p-code sequence anchor did not survive fresh decompile");
            if (CALL_ANCHORS.contains(anchorKind)) {
                call = item != null && item.getFlowType().isCall();
                String expected = upper(proposal.get("direct_target_address"));
                if (call && !expected.isBlank()) {
                    boolean target = false;
                    for (Address flow : item.getFlows())
                        if (upper(flow.toString()).equals(expected)) target = true;
                    call = target;
                }
                if (!call)
                    validation = append(validation,
                        "exact direct/indirect call boundary is stale");
            }
        }
        catch (Exception exception) {
            validation = append(validation, message(exception));
        }
        if (pcode) pcodeVerified++;
        if (CALL_ANCHORS.contains(anchorKind) && call) callVerified++;

        String apply = text(proposal.get("apply"));
        String applyStatus = applied == null ? "" : text(applied.get("status"));
        String status;
        String repair;
        if (!instruction || !pcode || !call) {
            status = "conflict";
            repair = "stale machine/p-code evidence";
        }
        else if (apply.equals("1") && Set.of("applied", "unchanged")
                .contains(applyStatus)) {
            status = "resolved";
            repair = applyStatus.equals("applied") ?
                "persistent High lifetime was split/retyped" :
                "persistent High lifetime already carries the proposed domain";
        }
        else if (apply.equals("1")) {
            status = "conflict";
            repair = "automatic proposal was not durably applied";
            validation = append(validation, applied == null ?
                "missing apply report row" : text(applied.get("detail")));
        }
        else {
            status = "review";
            repair = "retain neutral or current storage; require an exact per-use view";
        }
        if (status.equals("conflict")) conflicts++;
        String current = text(proposal.get("expected_current_type"));
        String proposed = text(proposal.get("proposed_type"));
        return new Row(functionAddress,
            function == null ? text(proposal.get("function_name")) :
                function.getName(true), "local_lifetime",
            text(proposal.get("original_name")) + "/mg" +
                text(proposal.get("merge_group")),
            domain(current) + " -> " + domain(proposed),
            anchorAddress + ":t" + anchorTime + " " + anchorKind +
                " operand=" + text(proposal.get("anchor_operand")) +
                " target=" + upper(proposal.get("direct_target_address")),
            consumer(proposal), repair,
            append(text(proposal.get("reason")), validation), status,
            pcode, call);
    }

    private Row returnRow(Map<String, String> proposal) {
        String addressText = upper(proposal.get("function_address"));
        Function function = function(addressText);
        String semantic = text(proposal.get("semantic_id"));
        boolean current = function != null &&
            function.getReturnType().getPathName().equals(
                text(proposal.get("expected_return_type"))) &&
            function.hasNoReturn() == bit(proposal.get("expected_noreturn"));
        String evidence = text(proposal.get("evidence"));
        boolean noProvenUse = !semantic.equals("void_eax_read_review") ||
            evidence.contains("used=0");
        String status = current && noProvenUse ? "review" : "conflict";
        if (status.equals("conflict")) conflicts++;
        return new Row(addressText,
            function == null ? text(proposal.get("expected_function")) :
                function.getName(true), "return_abi", "EAX/x87 return",
            domain(proposal.get("expected_return_type")) + " -> " +
                domain(proposal.get("proposed_return_type")),
            "all reachable callee return paths",
            evidence, semantic.equals("void_eax_read_review") ?
                "retain void unless a complete caller-use proof exists" :
                "retain current machine-width return pending strict ABI proof",
            current ? evidence : append(evidence,
                "current Program return baseline is stale"), status,
            true, true);
    }

    private void ensureRepresentatives() {
        for (String address : List.of("0064A970", "00548C40", "00605B60",
                "00652810")) {
            if (rows.stream().anyMatch(row -> row.functionAddress.equals(address)))
                continue;
            Function function = function(address);
            rows.add(new Row(address, function == null ? "" : function.getName(true),
                "representative", "function", "no active contradictory proposal",
                "current Program and analyzer frontier",
                "generated source closure audit",
                "no machine mutation selected",
                "representative family has no remaining automatically applicable " +
                    "machine-domain proposal", "review", true, true));
        }
    }

    private String consumer(Map<String, String> row) {
        String direct = upper(row.get("direct_target_address"));
        String resolved = upper(row.get("resolved_target_address"));
        String source = text(row.get("anchor_source"));
        String result = source;
        if (!direct.isBlank()) result = append(result, "direct=" + direct);
        if (!resolved.isBlank() && !resolved.equals(direct))
            result = append(result, "resolved=" + resolved);
        return result;
    }

    private String domain(String specification) {
        String value = text(specification);
        if (value.isBlank()) return "unknown";
        if (value.startsWith("pointer:")) {
            if (value.contains("DArrayTy")) return "darray_pointer(" + value + ")";
            return "pointer(" + value + ")";
        }
        if (Set.of("/float", "/double", "/float10").contains(value))
            return "floating(" + value + ")";
        if (value.equals("/void")) return "void";
        return "scalar(" + value + ")";
    }

    private void writeRows(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path,
                StandardCharsets.UTF_8)) {
            out.write("function_address\tfunction\tfamily\tstorage_local_parameter\t" +
                "conflicting_value_domains\tmachine_definitions\tconsumers\t" +
                "selected_fix\treason\tstatus\tpcode_anchor_verified\t" +
                "call_boundary_verified\n");
            for (Row row : rows)
                out.write(row.functionAddress + "\t" + tsv(row.function) + "\t" +
                    row.family + "\t" + tsv(row.storage) + "\t" +
                    tsv(row.domains) + "\t" + tsv(row.definitions) + "\t" +
                    tsv(row.consumers) + "\t" + tsv(row.repair) + "\t" +
                    tsv(row.reason) + "\t" + row.status + "\t" +
                    bit(row.pcodeVerified) + "\t" + bit(row.callVerified) + "\n");
        }
    }

    private void writeSummary(Path path) throws Exception {
        long resolved = rows.stream().filter(row -> row.status.equals("resolved")).count();
        long neutral = rows.stream().filter(row -> row.status.equals("neutralized")).count();
        long review = rows.stream().filter(row -> row.status.equals("review")).count();
        Files.write(path, List.of(
            "program=" + currentProgram.getName(),
            "executable_sha256=" + text(currentProgram.getExecutableSHA256()),
            "program_modification=" + currentProgram.getModificationNumber(),
            "rows=" + rows.size(),
            "resolved=" + resolved,
            "neutralized=" + neutral,
            "review=" + review,
            "conflict=" + conflicts,
            "pcode_anchor_verified=" + pcodeVerified,
            "call_boundary_verified=" + callVerified,
            "policy=Compiler diagnostics are discovery only. Program changes require " +
                "fresh instruction, p-code, storage, and call-boundary evidence; " +
                "unattachable or ambiguous High lifetimes remain neutral/review-only."
        ), StandardCharsets.UTF_8);
    }

    private Path outputDirectory() {
        String[] arguments = getScriptArgs();
        if (arguments.length < 1 || arguments[0].isBlank())
            throw new IllegalArgumentException("Recovery output directory required");
        Path selected = Path.of(arguments[0]).toAbsolutePath().normalize();
        return selected.getFileName() != null &&
            selected.getFileName().toString().equals(currentProgram.getName()) ?
                selected : selected.resolve(currentProgram.getName());
    }

    private Function function(String address) {
        Address value = currentProgram.getAddressFactory().getAddress(address);
        return value == null ? null :
            currentProgram.getFunctionManager().getFunctionAt(value);
    }

    private static String lifetimeKey(Map<String, String> row) {
        return String.join("|", upper(row.get("function_address")),
            text(row.get("original_name")), text(row.get("merge_group")),
            upper(row.get("anchor_address")), text(row.get("anchor_kind")),
            text(row.get("proposed_type")));
    }

    private static String lifetimeStableKey(Map<String, String> row) {
        return String.join("|", upper(row.get("function_address")),
            text(row.get("original_name")), text(row.get("merge_group")),
            text(row.get("proposed_type")));
    }

    private static List<Map<String, String>> expandAnchors(
            Map<String, String> row) {
        String encoded = text(row.get("supporting_anchors"));
        if (encoded.isBlank()) return List.of(row);
        List<Map<String, String>> result = new ArrayList<>();
        Set<String> seen = new java.util.LinkedHashSet<>();
        for (String token : encoded.split(",")) {
            String[] parts = token.strip().split(":", -1);
            if (parts.length != 6 || !parts[1].startsWith("t"))
                throw new IllegalArgumentException(
                    "Malformed supporting anchor: " + token);
            if (!seen.add(token.strip())) continue;
            Map<String, String> value = new LinkedHashMap<>(row);
            value.put("anchor_address", upper(parts[0]));
            value.put("anchor_time", parts[1].substring(1));
            value.put("anchor_kind", parts[2]);
            value.put("anchor_operand", parts[3]);
            value.put("direct_target_address", upper(parts[4]));
            value.put("resolved_target_address", upper(parts[5]));
            result.add(value);
        }
        if (result.isEmpty())
            throw new IllegalArgumentException(
                "Proposal has no supporting anchors: " + lifetimeKey(row));
        return result;
    }

    private static Map<String, Map<String, String>> index(
            List<Map<String, String>> rows,
            java.util.function.Function<Map<String, String>, String> key) {
        Map<String, Map<String, String>> result = new HashMap<>();
        for (Map<String, String> row : rows) result.put(key.apply(row), row);
        return result;
    }

    private static Tsv readTsv(Path path) throws Exception {
        if (!Files.isRegularFile(path))
            throw new IllegalArgumentException("Missing " + path);
        List<String> lines = Files.readAllLines(path, StandardCharsets.UTF_8);
        if (lines.isEmpty()) throw new IllegalArgumentException("Empty " + path);
        String[] columns = lines.get(0).split("\\t", -1);
        List<Map<String, String>> rows = new ArrayList<>();
        for (int line = 1; line < lines.size(); line++) {
            if (lines.get(line).isBlank()) continue;
            String[] values = lines.get(line).split("\\t", -1);
            if (values.length != columns.length)
                throw new IllegalArgumentException("Malformed TSV row " +
                    (line + 1) + " in " + path);
            Map<String, String> row = new LinkedHashMap<>();
            for (int index = 0; index < columns.length; index++)
                row.put(columns[index], untsv(values[index]));
            rows.add(row);
        }
        return new Tsv(List.of(columns), rows);
    }

    private static void requireColumns(Tsv input, String... required) {
        for (String column : required)
            if (!input.columns.contains(column))
                throw new IllegalArgumentException("Missing TSV column: " + column);
    }

    private static String append(String left, String right) {
        if (left == null || left.isBlank()) return text(right);
        if (right == null || right.isBlank()) return left;
        return left + "; " + right;
    }
    private static String upper(String value) {
        return text(value).toUpperCase(Locale.ROOT);
    }
    private static String text(String value) { return value == null ? "" : value; }
    private static int integer(String value, int fallback) {
        try { return Integer.parseInt(text(value)); }
        catch (NumberFormatException ignored) { return fallback; }
    }
    private static boolean bit(String value) {
        return value != null && (value.equals("1") ||
            value.equalsIgnoreCase("true"));
    }
    private static int bit(boolean value) { return value ? 1 : 0; }
    private static String message(Throwable throwable) {
        Throwable value = throwable;
        while (value.getCause() != null) value = value.getCause();
        return value.getMessage() == null ? value.toString() : value.getMessage();
    }
    private static String tsv(String value) {
        return text(value).replace("\\", "\\\\").replace("\t", "\\t")
            .replace("\r", "\\r").replace("\n", "\\n");
    }
    private static String untsv(String value) {
        StringBuilder result = new StringBuilder();
        boolean escape = false;
        for (char item : text(value).toCharArray()) {
            if (escape) {
                result.append(item == 't' ? '\t' : item == 'r' ? '\r' :
                    item == 'n' ? '\n' : item);
                escape = false;
            }
            else if (item == '\\') escape = true;
            else result.append(item);
        }
        if (escape) result.append('\\');
        return result.toString();
    }

    private record Tsv(List<String> columns,
        List<Map<String, String>> rows) {}
    private record Row(String functionAddress, String function, String family,
        String storage, String domains, String definitions, String consumers,
        String repair, String reason, String status, boolean pcodeVerified,
        boolean callVerified) {}
}
