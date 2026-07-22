// Audit uncertain x86 calling conventions from their direct call sites.
// Read-only: consumes debug_calling_convention_review.tsv and emits detailed evidence.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Analyze Callsite Conventions

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.Comparator;
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

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.DataType;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Listing;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.scalar.Scalar;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;

public class STCallsiteConventionAnalyzer extends GhidraScript {
    private static final Pattern IMMEDIATE = Pattern.compile(
        "^(?:-?(?:0X[0-9A-F]+|[0-9]+)|[0-9A-F]+H)$");
    private static final Pattern STACK_ADJUST = Pattern.compile(
        "^ADD\\s+ESP\\s*,\\s*(0X[0-9A-F]+|[0-9]+|[0-9A-F]+H)$");
    private static final Pattern STACK_LEA = Pattern.compile(
        "^LEA\\s+ESP\\s*,\\s*\\[ESP\\s*\\+\\s*(0X[0-9A-F]+|[0-9]+|[0-9A-F]+H)\\]$");
    private static final int BACKWARD_LIMIT = 24;
    private static final int FORWARD_LIMIT = 4;

    private Listing listing;

    @Override
    protected void run() throws Exception {
        // Read-only script: do not leave GhidraScript's implicit transaction around runScript().
        end(true);
        if (currentProgram == null) {
            printerr("Open the analyzed ST program first.");
            return;
        }
        File selected = inputFile();
        if (selected == null) return;
        Path input = resolveInput(selected.toPath().toAbsolutePath().normalize());
        Tsv review = readTsv(input);
        requireColumns(review, "address", "function", "current_calling_convention",
            "signature_source", "evidence");
        listing = currentProgram.getListing();

        Map<Address, Set<Function>> thunks = thunkIndex();
        List<Proposal> proposals = new ArrayList<>();
        List<Callsite> callsites = new ArrayList<>();
        for (Map<String, String> row : review.rows) {
            monitor.checkCancelled();
            Address address = address(row.get("address"));
            Function function = currentProgram.getFunctionManager().getFunctionAt(address);
            if (function == null) {
                proposals.add(Proposal.missing(row, address));
                continue;
            }
            Proposal proposal = analyze(function, row, thunks, callsites);
            proposals.add(proposal);
        }
        proposals.sort(Comparator.comparing(proposal -> proposal.address));
        callsites.sort(Comparator.comparing((Callsite call) -> call.targetAddress)
            .thenComparing(call -> call.callAddress));

        Path directory = input.getParent();
        writeProposals(directory.resolve("callsite_convention_proposals.tsv"), proposals);
        writeJson(directory.resolve("callsite_convention_proposals.jsonl"), proposals);
        writeCallsites(directory.resolve("callsite_convention_calls.tsv"), callsites);
        writeSummary(directory.resolve("callsite_convention_summary.txt"), proposals, callsites);
        println("Callsite convention analysis complete: " + directory);
        println("Candidates: " + proposals.size() + ", callsites: " + callsites.size() +
            ", classifications: " + classifications(proposals));
        println("This analyzer is read-only; every apply flag is intentionally 0.");
    }

    private Proposal analyze(Function target, Map<String, String> baseline,
            Map<Address, Set<Function>> thunkIndex, List<Callsite> allCalls) {
        Set<Function> callableFunctions = new LinkedHashSet<>();
        callableFunctions.add(target);
        callableFunctions.addAll(thunkIndex.getOrDefault(target.getEntryPoint(), Set.of()));
        Map<Address, Callsite> unique = new LinkedHashMap<>();
        for (Function callable : callableFunctions) {
            ReferenceIterator references = currentProgram.getReferenceManager()
                .getReferencesTo(callable.getEntryPoint());
            while (references.hasNext()) {
                Reference reference = references.next();
                if (!reference.getReferenceType().isCall()) continue;
                Address from = reference.getFromAddress();
                Instruction call = listing.getInstructionAt(from);
                if (call == null || !call.getFlowType().isCall()) continue;
                Function caller = listing.getFunctionContaining(from);
                if (caller == null) continue;
                unique.computeIfAbsent(from, ignored -> callsite(target, callable, caller, call));
            }
        }
        List<Callsite> calls = new ArrayList<>(unique.values());
        allCalls.addAll(calls);

        Set<Long> retPops = returnPops(target);
        int pointerSetup = count(calls, "pointer_setup");
        int scalarSetup = count(calls, "scalar_setup");
        int liveEcx = count(calls, "live_prior_ecx");
        int noEcx = count(calls, "no_ecx_evidence");
        int cleanupCalls = 0, directCalls = 0, thunkCalls = 0, sameOwnerCalls = 0;
        Set<Long> cleanupValues = new TreeSet<>();
        for (Callsite call : calls) {
            if (call.callerCleanup > 0) {
                cleanupCalls++;
                cleanupValues.add(call.callerCleanup);
            }
            if (call.viaThunk) thunkCalls++; else directCalls++;
            if (!owner(target).isBlank() && owner(target).equals(owner(call.caller)))
                sameOwnerCalls++;
        }
        int expectedStack = expectedStackBytes(target);
        Decision decision = decide(calls.size(), pointerSetup, scalarSetup, liveEcx, noEcx,
            cleanupCalls, cleanupValues, retPops, expectedStack, sameOwnerCalls);
        return new Proposal(target.getEntryPoint(), target.getName(true),
            target.getSignature().getPrototypeString(true), target.getCallingConventionName(),
            target.getSignatureSource().toString(), calls.size(), directCalls, thunkCalls,
            pointerSetup, scalarSetup, liveEcx, noEcx, cleanupCalls, cleanupValues, retPops,
            expectedStack, decision.classification, decision.suggestedConvention,
            decision.confidence, decision.reason, false, "");
    }

    private Callsite callsite(Function target, Function callable, Function caller,
            Instruction call) {
        Backward backward = backwardEvidence(caller, call);
        long cleanup = callerCleanup(caller, call);
        return new Callsite(target.getEntryPoint(), target.getName(true),
            callable.getEntryPoint(), callable.getName(true),
            !callable.getEntryPoint().equals(target.getEntryPoint()), call.getAddress(),
            caller, call.toString(), backward.ecxMode, backward.ecxEvidence,
            backward.pushes, backward.stackReservation, cleanup, backward.boundary);
    }

    private Backward backwardEvidence(Function caller, Instruction call) {
        String mode = "no_ecx_evidence", evidence = "", boundary = "window_limit";
        int pushes = 0;
        long reservation = 0;
        Instruction instruction = listing.getInstructionBefore(call.getAddress());
        for (int count = 0; instruction != null && count < BACKWARD_LIMIT; count++) {
            if (!caller.getBody().contains(instruction.getAddress())) {
                boundary = "caller_start";
                break;
            }
            String mnemonic = upper(instruction.getMnemonicString());
            String[] operands = operands(instruction);
            if (instruction.getFlowType().isCall()) {
                boundary = "previous_call";
                break;
            }
            if (instruction.getFlowType().isJump() || instruction.getFlowType().isTerminal()) {
                boundary = "control_flow_boundary";
                break;
            }
            if ("PUSH".equals(mnemonic)) pushes++;
            if ("SUB".equals(mnemonic) && operands.length >= 2 &&
                    "ESP".equals(operands[0])) {
                Long value = number(operands[1]);
                if (value != null && value > 0) reservation += value;
            }
            if ("no_ecx_evidence".equals(mode)) {
                if (writesFullRegister(mnemonic, operands, "ECX")) {
                    String source = operands.length < 2 ? "" : operands[1];
                    boolean scalar = source.isBlank() || IMMEDIATE.matcher(source).matches() ||
                        isSelfZero(mnemonic, operands, "ECX");
                    mode = scalar ? "scalar_setup" : "pointer_setup";
                    evidence = addr(instruction.getAddress()) + ": " + instruction;
                }
                else if (mentionsInputRegister(mnemonic, operands, "ECX")) {
                    mode = "live_prior_ecx";
                    evidence = addr(instruction.getAddress()) + ": " + instruction;
                }
            }
            instruction = listing.getInstructionBefore(instruction.getAddress());
            if (instruction == null) boundary = "caller_start";
        }
        return new Backward(mode, evidence, pushes, reservation, boundary);
    }

    private long callerCleanup(Function caller, Instruction call) {
        Instruction instruction = listing.getInstructionAfter(call.getAddress());
        for (int count = 0; instruction != null && count < FORWARD_LIMIT; count++) {
            if (!caller.getBody().contains(instruction.getAddress())) return 0;
            String text = upper(instruction.toString()).replaceAll("\\s+", " ");
            Matcher add = STACK_ADJUST.matcher(text);
            Matcher lea = STACK_LEA.matcher(text);
            if (add.matches()) return numberOrZero(add.group(1));
            if (lea.matches()) return numberOrZero(lea.group(1));
            String mnemonic = upper(instruction.getMnemonicString());
            if (instruction.getFlowType().isCall() || instruction.getFlowType().isJump() ||
                    instruction.getFlowType().isTerminal() || "PUSH".equals(mnemonic)) return 0;
            instruction = listing.getInstructionAfter(instruction.getAddress());
        }
        return 0;
    }

    private Set<Long> returnPops(Function function) {
        Set<Long> result = new TreeSet<>();
        InstructionIterator instructions = listing.getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            String mnemonic = upper(instruction.getMnemonicString());
            if (!"RET".equals(mnemonic) && !"RETF".equals(mnemonic)) continue;
            Scalar scalar = instruction.getScalar(0);
            result.add(scalar == null ? 0 : scalar.getUnsignedValue());
        }
        return result;
    }

    private Decision decide(int calls, int pointer, int scalar, int live, int noEcx,
            int cleanupCalls, Set<Long> cleanupValues, Set<Long> retPops,
            int expectedStack, int sameOwnerCalls) {
        boolean calleePops = retPops.stream().anyMatch(value -> value > 0);
        if (calls == 0)
            return new Decision("unreferenced", "", "review",
                "no direct call reference to function or thunk entry");
        if (pointer >= 2 && scalar == 0 && cleanupCalls == 0)
            return new Decision("thiscall_supported", "__thiscall", "high",
                pointer + " callsites explicitly load ECX; no caller stack cleanup observed");
        if (pointer >= 1 && scalar == 0 && cleanupCalls == 0 &&
                (calleePops || calls == 1))
            return new Decision("thiscall_supported", "__thiscall", "medium",
                "ECX is explicitly prepared at observed callsite" +
                (calleePops ? "; callee RET pops stack arguments" : ""));
        // A live or scalar-looking ECX in the backward window is not receiver evidence.
        // Optimized x86 callers commonly use ECX as a scratch register immediately before a
        // cdecl call.  When every observed caller reclaims the stack and no caller explicitly
        // prepares a pointer receiver, the stack discipline is the stronger signal.
        if (calls >= 2 && cleanupCalls == calls && pointer == 0 && !calleePops)
            return new Decision("static_cdecl_candidate", "__cdecl", "high",
                "all " + cleanupCalls + " callers reclaim stack arguments " + cleanupValues +
                "; no explicit ECX pointer receiver setup observed" +
                ((live + scalar) > 0 ? "; incidental ECX observations ignored (live=" + live +
                    ", scalar=" + scalar + ")" : ""));
        if (cleanupCalls >= 1 && pointer == 0 && live == 0 && !calleePops)
            return new Decision("static_cdecl_candidate", "__cdecl", "medium",
                "caller reclaims stack arguments " + cleanupValues +
                "; no ECX receiver setup observed");
        if (calleePops && pointer == 0 && live == 0 && scalar == 0)
            return new Decision("stdcall_or_preserved_this_candidate", "", "review",
                "callee RET pops " + retPops + " but observed callers do not prepare ECX");
        if (pointer > 0 && cleanupCalls > 0)
            return new Decision("conflicting_callsite_evidence", "", "review",
                "some callsites prepare ECX while caller cleanup " + cleanupValues +
                " also suggests a stack convention");
        if (live > 0 && scalar == 0)
            return new Decision("possible_preserved_this", "__thiscall", "review",
                live + " callsites carry a live prior ECX value; " + sameOwnerCalls +
                " callers have the same recovered owner");
        if (scalar > 0 && pointer == 0)
            return new Decision("ecx_is_not_receiver_candidate", "", "review",
                scalar + " callsites place an immediate/zero value in ECX");
        return new Decision("ambiguous", "", "review",
            "calls=" + calls + ", pointer_ecx=" + pointer + ", live_ecx=" + live +
            ", no_ecx=" + noEcx + ", expected_stack=" + expectedStack);
    }

    private Map<Address, Set<Function>> thunkIndex() {
        Map<Address, Set<Function>> result = new LinkedHashMap<>();
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            Function function = functions.next();
            if (!function.isThunk()) continue;
            Function target = function.getThunkedFunction(true);
            if (target != null) result.computeIfAbsent(target.getEntryPoint(),
                ignored -> new LinkedHashSet<>()).add(function);
        }
        return result;
    }

    private int expectedStackBytes(Function function) {
        int bytes = 0;
        for (Parameter parameter : function.getParameters()) {
            if (parameter.isAutoParameter()) continue;
            DataType type = parameter.getDataType();
            int length = type == null ? 4 : type.getLength();
            if (length < 1) length = 4;
            bytes += Math.max(4, (length + 3) & ~3);
        }
        return bytes;
    }

    private int count(List<Callsite> calls, String mode) {
        int result = 0;
        for (Callsite call : calls) if (mode.equals(call.ecxMode)) result++;
        return result;
    }

    private boolean writesFullRegister(String mnemonic, String[] operands, String register) {
        if (operands.length == 0 || !register.equals(operands[0])) return false;
        return Set.of("MOV", "MOVSX", "MOVZX", "LEA", "POP", "XOR", "SUB", "SBB",
            "AND", "OR", "ADD", "ADC", "IMUL").contains(mnemonic);
    }

    private boolean mentionsInputRegister(String mnemonic, String[] operands, String register) {
        if (isSelfZero(mnemonic, operands, register)) return false;
        for (int index = 0; index < operands.length; index++) {
            if (!word(operands[index], register)) continue;
            if (index == 0 && writesFullRegister(mnemonic, operands, register) &&
                    Set.of("MOV", "MOVSX", "MOVZX", "LEA", "POP").contains(mnemonic))
                continue;
            return true;
        }
        return false;
    }

    private boolean isSelfZero(String mnemonic, String[] operands, String register) {
        return operands.length >= 2 && Set.of("XOR", "SUB", "SBB").contains(mnemonic) &&
            register.equals(operands[0]) && register.equals(operands[1]);
    }

    private boolean word(String text, String register) {
        return Pattern.compile("(?:^|[^A-Z0-9_])" + register + "(?:$|[^A-Z0-9_])")
            .matcher(text).find();
    }

    private String[] operands(Instruction instruction) {
        String text = upper(instruction.toString());
        int space = text.indexOf(' ');
        if (space < 0) return new String[0];
        String value = text.substring(space + 1).trim();
        return value.isEmpty() ? new String[0] : value.split("\\s*,\\s*", -1);
    }

    private String owner(Function function) {
        String name = function.getName(true);
        int separator = name.lastIndexOf("::");
        return separator < 0 ? "" : name.substring(0, separator);
    }

    private void writeProposals(Path path, List<Proposal> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\taddress\tfunction\tcurrent_signature\tcurrent_calling_convention\t" +
                "signature_source\tcalls\tdirect_calls\tthunk_calls\tecx_pointer_setup\t" +
                "ecx_scalar_setup\tecx_live_prior\tecx_unknown\tcaller_cleanup_calls\t" +
                "caller_cleanup_bytes\tcallee_ret_pop_bytes\texpected_stack_bytes\t" +
                "classification\tsuggested_calling_convention\tconfidence\treason\terror\n");
            for (Proposal row : rows) out.write("0\t" + addr(row.address) + "\t" +
                tsv(row.function) + "\t" + tsv(row.signature) + "\t" +
                row.currentConvention + "\t" + row.signatureSource + "\t" + row.calls +
                "\t" + row.directCalls + "\t" + row.thunkCalls + "\t" +
                row.pointerSetup + "\t" + row.scalarSetup + "\t" + row.liveEcx + "\t" +
                row.noEcx + "\t" + row.cleanupCalls + "\t" + set(row.cleanupValues) +
                "\t" + set(row.retPops) + "\t" + row.expectedStack + "\t" +
                row.classification + "\t" + row.suggestedConvention + "\t" +
                row.confidence + "\t" + tsv(row.reason) + "\t" + tsv(row.error) + "\n");
        }
    }

    private void writeJson(Path path, List<Proposal> rows) throws Exception {
        List<String> output = new ArrayList<>();
        for (Proposal row : rows) output.add("{\"apply\":false,\"address\":" +
            q(addr(row.address)) + ",\"function\":" + q(row.function) +
            ",\"calls\":" + row.calls + ",\"classification\":" +
            q(row.classification) + ",\"suggested_calling_convention\":" +
            q(row.suggestedConvention) + ",\"confidence\":" + q(row.confidence) +
            ",\"reason\":" + q(row.reason) + "}");
        Files.write(path, output, StandardCharsets.UTF_8);
    }

    private void writeCallsites(Path path, List<Callsite> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("target_address\ttarget_function\tcallable_entry\tcallable_function\t" +
                "via_thunk\tcall_address\tcaller_address\tcaller_function\tcall_instruction\t" +
                "ecx_mode\tecx_evidence\tpushes_in_window\tstack_reservation\t" +
                "caller_cleanup_bytes\tbackward_boundary\n");
            for (Callsite row : rows) out.write(addr(row.targetAddress) + "\t" +
                tsv(row.targetFunction) + "\t" + addr(row.callableEntry) + "\t" +
                tsv(row.callableFunction) + "\t" + bit(row.viaThunk) + "\t" +
                addr(row.callAddress) + "\t" + addr(row.caller.getEntryPoint()) + "\t" +
                tsv(row.caller.getName(true)) + "\t" + tsv(row.instruction) + "\t" +
                row.ecxMode + "\t" + tsv(row.ecxEvidence) + "\t" + row.pushes + "\t" +
                row.stackReservation + "\t" + row.callerCleanup + "\t" +
                row.boundary + "\n");
        }
    }

    private void writeSummary(Path path, List<Proposal> proposals, List<Callsite> calls)
            throws Exception {
        long called = proposals.stream().filter(row -> row.calls > 0).count();
        long suggestedThis = proposals.stream()
            .filter(row -> "__thiscall".equals(row.suggestedConvention)).count();
        long suggestedCdecl = proposals.stream()
            .filter(row -> "__cdecl".equals(row.suggestedConvention)).count();
        Files.write(path, List.of("program=" + currentProgram.getName(),
            "candidates=" + proposals.size(), "candidates_with_direct_calls=" + called,
            "callsites=" + calls.size(), "suggested_thiscall=" + suggestedThis,
            "suggested_cdecl_review_only=" + suggestedCdecl,
            "classifications=" + classifications(proposals),
            "note=Direct references to the function and every thunk resolving to it are audited.",
            "note_limit=Indirect virtual calls cannot be attributed to one concrete target here.",
            "note_safety=The analyzer is read-only and never changes a calling convention."),
            StandardCharsets.UTF_8);
    }

    private Map<String, Long> classifications(List<Proposal> rows) {
        Map<String, Long> result = new TreeMap<>();
        for (Proposal row : rows) result.merge(row.classification, 1L, Long::sum);
        return result;
    }

    private Tsv readTsv(Path path) throws Exception {
        List<String> lines = Files.readAllLines(path, StandardCharsets.UTF_8);
        if (lines.isEmpty()) throw new IllegalArgumentException("Empty TSV: " + path);
        String[] header = lines.get(0).split("\\t", -1);
        List<Map<String, String>> rows = new ArrayList<>();
        for (int line = 1; line < lines.size(); line++) {
            if (lines.get(line).isBlank()) continue;
            String[] values = lines.get(line).split("\\t", -1);
            if (values.length != header.length)
                throw new IllegalArgumentException(path.getFileName() + " line " + (line + 1) +
                    " has " + values.length + " columns; expected " + header.length);
            Map<String, String> row = new LinkedHashMap<>();
            for (int column = 0; column < header.length; column++)
                row.put(header[column], unt(values[column]));
            rows.add(row);
        }
        return new Tsv(List.of(header), rows);
    }

    private void requireColumns(Tsv tsv, String... names) {
        for (String name : names) if (!tsv.header.contains(name))
            throw new IllegalArgumentException("Missing TSV column: " + name);
    }

    private Path resolveInput(Path selected) {
        if (Files.isRegularFile(selected)) return selected;
        Path direct = selected.resolve("debug_calling_convention_review.tsv");
        if (Files.isRegularFile(direct)) return direct;
        Path nested = selected.resolve(safe(currentProgram.getName()))
            .resolve("debug_calling_convention_review.tsv");
        if (Files.isRegularFile(nested)) return nested;
        throw new IllegalArgumentException("Could not find debug_calling_convention_review.tsv " +
            "under " + selected);
    }

    private File inputFile() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless()) throw new IllegalArgumentException(
            "Path to debug_calling_convention_review.tsv is required");
        return askFile("Select debug_calling_convention_review.tsv", "Analyze callsites");
    }

    private Address address(String value) {
        Address result = currentProgram.getAddressFactory().getAddress(value);
        if (result == null) throw new IllegalArgumentException("Invalid address: " + value);
        return result;
    }

    private Long number(String value) {
        try {
            String text = value.trim().toUpperCase(Locale.ROOT);
            boolean negative = text.startsWith("-");
            if (negative) text = text.substring(1);
            long result;
            if (text.startsWith("0X")) result = Long.parseUnsignedLong(text.substring(2), 16);
            else if (text.endsWith("H"))
                result = Long.parseUnsignedLong(text.substring(0, text.length() - 1), 16);
            else result = Long.parseLong(text);
            return negative ? -result : result;
        }
        catch (Exception exception) { return null; }
    }

    private long numberOrZero(String value) {
        Long result = number(value);
        return result == null ? 0 : result;
    }

    private static String set(Set<Long> values) {
        List<String> result = new ArrayList<>();
        for (Long value : values) result.add(Long.toString(value));
        return String.join(";", result);
    }
    private static String upper(String value) { return value.toUpperCase(Locale.ROOT); }
    private static String addr(Address value) {
        return value == null ? "" : value.toString().toUpperCase(Locale.ROOT);
    }
    private static String safe(String value) {
        return value.replaceAll("[^A-Za-z0-9._-]+", "_");
    }
    private static String bit(boolean value) { return value ? "1" : "0"; }
    private static String tsv(String value) {
        if (value == null) return "";
        return value.replace("\\", "\\\\").replace("\t", "\\t")
            .replace("\r", "\\r").replace("\n", "\\n");
    }
    private static String unt(String value) {
        StringBuilder result = new StringBuilder();
        boolean escaped = false;
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
    private static String q(String value) {
        return "\"" + (value == null ? "" : value).replace("\\", "\\\\")
            .replace("\"", "\\\"").replace("\r", "\\r").replace("\n", "\\n") + "\"";
    }

    private static class Tsv {
        final List<String> header;
        final List<Map<String, String>> rows;
        Tsv(List<String> header, List<Map<String, String>> rows) {
            this.header = header; this.rows = rows;
        }
    }
    private static class Backward {
        final String ecxMode, ecxEvidence, boundary;
        final int pushes;
        final long stackReservation;
        Backward(String ecxMode, String ecxEvidence, int pushes, long stackReservation,
                String boundary) {
            this.ecxMode = ecxMode; this.ecxEvidence = ecxEvidence; this.pushes = pushes;
            this.stackReservation = stackReservation; this.boundary = boundary;
        }
    }
    private static class Decision {
        final String classification, suggestedConvention, confidence, reason;
        Decision(String classification, String suggestedConvention, String confidence,
                String reason) {
            this.classification = classification;
            this.suggestedConvention = suggestedConvention;
            this.confidence = confidence; this.reason = reason;
        }
    }
    private static class Callsite {
        final Address targetAddress, callableEntry, callAddress;
        final String targetFunction, callableFunction, instruction, ecxMode, ecxEvidence, boundary;
        final boolean viaThunk;
        final Function caller;
        final int pushes;
        final long stackReservation, callerCleanup;
        Callsite(Address targetAddress, String targetFunction, Address callableEntry,
                String callableFunction, boolean viaThunk, Address callAddress, Function caller,
                String instruction, String ecxMode, String ecxEvidence, int pushes,
                long stackReservation, long callerCleanup, String boundary) {
            this.targetAddress = targetAddress; this.targetFunction = targetFunction;
            this.callableEntry = callableEntry; this.callableFunction = callableFunction;
            this.viaThunk = viaThunk; this.callAddress = callAddress; this.caller = caller;
            this.instruction = instruction; this.ecxMode = ecxMode;
            this.ecxEvidence = ecxEvidence; this.pushes = pushes;
            this.stackReservation = stackReservation; this.callerCleanup = callerCleanup;
            this.boundary = boundary;
        }
    }
    private static class Proposal {
        final Address address;
        final String function, signature, currentConvention, signatureSource, classification,
            suggestedConvention, confidence, reason, error;
        final int calls, directCalls, thunkCalls, pointerSetup, scalarSetup, liveEcx, noEcx,
            cleanupCalls, expectedStack;
        final Set<Long> cleanupValues, retPops;
        final boolean apply;
        Proposal(Address address, String function, String signature, String currentConvention,
                String signatureSource, int calls, int directCalls, int thunkCalls,
                int pointerSetup, int scalarSetup, int liveEcx, int noEcx, int cleanupCalls,
                Set<Long> cleanupValues, Set<Long> retPops, int expectedStack,
                String classification, String suggestedConvention, String confidence,
                String reason, boolean apply, String error) {
            this.address = address; this.function = function; this.signature = signature;
            this.currentConvention = currentConvention; this.signatureSource = signatureSource;
            this.calls = calls; this.directCalls = directCalls; this.thunkCalls = thunkCalls;
            this.pointerSetup = pointerSetup; this.scalarSetup = scalarSetup;
            this.liveEcx = liveEcx; this.noEcx = noEcx; this.cleanupCalls = cleanupCalls;
            this.cleanupValues = cleanupValues; this.retPops = retPops;
            this.expectedStack = expectedStack; this.classification = classification;
            this.suggestedConvention = suggestedConvention; this.confidence = confidence;
            this.reason = reason; this.apply = apply; this.error = error;
        }
        static Proposal missing(Map<String, String> row, Address address) {
            return new Proposal(address, row.getOrDefault("function", ""), "",
                row.getOrDefault("current_calling_convention", ""),
                row.getOrDefault("signature_source", ""), 0, 0, 0, 0, 0, 0, 0, 0,
                Set.of(), Set.of(), 0, "missing_function", "", "review",
                "function no longer exists at reviewed address", false,
                row.getOrDefault("address", ""));
        }
    }
}
