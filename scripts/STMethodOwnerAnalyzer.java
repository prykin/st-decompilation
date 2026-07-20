// Recover owners of non-virtual methods by tracing an established caller's incoming this
// value into ECX at direct call sites. Read-only: writes method_owner_*.{tsv,jsonl,txt}.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Analyze Method Owners

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
import java.util.TreeMap;
import java.util.TreeSet;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.Structure;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.FunctionTag;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.symbol.SourceType;

public class STMethodOwnerAnalyzer extends GhidraScript {
    private static final Pattern MEMORY = Pattern.compile(
        "^\\[([A-Z][A-Z0-9]{1,3})(?:([+-])(0X[0-9A-F]+|[0-9]+))?\\]$");
    private static final Pattern REGISTER = Pattern.compile("^[A-Z][A-Z0-9]{1,3}$");
    private static final String TAG = "RECOVERED_METHOD_OWNER";
    private static final long MAX_THIS_OFFSET = 0x1000000L;

    private final Map<Address, Candidate> candidates = new TreeMap<>();
    private DataTypeManager dataTypes;

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

        int callerMethods = 0;
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            monitor.checkCancelled();
            Function caller = functions.next();
            String owner = ownerOf(caller);
            if (owner.isBlank() || caller.isThunk() || caller.isExternal() ||
                    isLibrary(caller) || !"__thiscall".equals(caller.getCallingConventionName()))
                continue;
            callerMethods++;
            analyzeCaller(caller, owner);
        }

        // Preserve reviewed rows on later analyzer runs even when no currently named caller
        // reaches the method directly (for example, all calls go through anonymous helpers).
        functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            Function function = functions.next();
            if (!hasTag(function, TAG)) continue;
            candidates.computeIfAbsent(function.getEntryPoint(), ignored -> new Candidate(function));
        }

        List<Proposal> proposals = new ArrayList<>();
        for (Candidate candidate : candidates.values()) {
            monitor.checkCancelled();
            Proposal proposal = makeProposal(candidate);
            if (proposal != null) proposals.add(proposal);
        }
        proposals.sort(Comparator.comparing(row -> row.address));
        writeTsv(directory.resolve("method_owner_proposals.tsv"), proposals);
        writeJson(directory.resolve("method_owner_proposals.jsonl"), proposals);
        writeSummary(directory.resolve("method_owner_summary.txt"), proposals, callerMethods);

        println("Method-owner analysis complete: " + directory.toAbsolutePath().normalize());
        println("Named caller methods: " + callerMethods + ", candidates: " +
            proposals.size() + ", owner_apply: " +
            proposals.stream().filter(row -> row.ownerApply).count() +
            ", convention_apply: " +
            proposals.stream().filter(row -> row.conventionApply).count());
    }

    private void analyzeCaller(Function caller, String owner) {
        Map<String, ThisValue> registers = new HashMap<>();
        registers.put("ECX", new ThisValue(0));
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(caller.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            String[] operands = splitOperands(instruction.toString().toUpperCase(Locale.ROOT));
            if ("CALL".equals(mnemonic)) {
                Function target = calledFunction(instruction);
                ThisValue receiver = registers.get("ECX");
                if (target != null && receiver != null && receiver.offset == 0 &&
                        isCandidate(target)) {
                    Candidate candidate = candidates.computeIfAbsent(target.getEntryPoint(),
                        ignored -> new Candidate(target));
                    candidate.ownerCalls.merge(owner, 1, Integer::sum);
                    candidate.callSites.add(addr(instruction.getAddress()) + " " +
                        caller.getName(true));
                }
                registers.remove("EAX");
                registers.remove("ECX");
                registers.remove("EDX");
                continue;
            }
            updateRegisters(mnemonic, operands, registers);
        }
    }

    private Proposal makeProposal(Candidate candidate) {
        Function function = candidate.function;
        if (function.isExternal() || function.isThunk() || isLibrary(function)) return null;
        Set<String> owners = new TreeSet<>(candidate.ownerCalls.keySet());
        String existingOwner = hasTag(function, TAG) ? ownerOf(function) : "";
        if (!existingOwner.isBlank()) owners.add(existingOwner);
        if (owners.isEmpty()) return null;
        String owner = owners.size() == 1 ? owners.iterator().next() : "";
        int agreedCalls = owner.isBlank() ? 0 : candidate.ownerCalls.getOrDefault(owner, 0);
        int receiverAccesses = incomingThisAccesses(function);
        int edxUses = incomingEdxUses(function);
        int stackParameterUses = incomingStackParameterUses(function);
        String ownerTypePath = owner.isBlank() ? "" : ownerTypePath(owner);
        boolean scriptOwned = hasTag(function, TAG);
        boolean synthetic = isSynthetic(function.getName()) || scriptOwned;
        boolean conventionCandidate = "__thiscall".equals(function.getCallingConventionName()) ||
            "__fastcall".equals(function.getCallingConventionName());
        boolean manualName = protectedSource(function.getSymbol().getSource());
        boolean manualSignature = protectedSource(function.getSignatureSource());
        boolean strong = !owner.isBlank() && !ownerTypePath.isBlank() && synthetic &&
            conventionCandidate && receiverAccesses > 0 &&
            (!"__fastcall".equals(function.getCallingConventionName()) || edxUses == 0) &&
            (agreedCalls >= 2 || (agreedCalls == 1 && candidate.callSites.size() == 1 &&
                receiverAccesses >= 2));
        boolean alreadyApplied = scriptOwned && !existingOwner.isBlank() &&
            existingOwner.equals(owner);
        String proposedName = owner.isBlank() ? "" : owner + "::sub_" + addr(function.getEntryPoint());
        if (alreadyApplied) proposedName = function.getName(true);
        boolean ownerApply = (strong || alreadyApplied) && !manualName &&
            !function.getName(true).equals(proposedName);
        boolean parameterApply = (strong || alreadyApplied) && !manualSignature &&
            edxUses == 0 && stackParameterUses == 0 &&
            (receiverOnlyFastcallSignature(function) || alreadyApplied &&
                "__thiscall".equals(function.getCallingConventionName()) &&
                !explicitParameters(function).isEmpty());
        boolean conventionApply = (strong || alreadyApplied) && !manualSignature &&
            !"__thiscall".equals(function.getCallingConventionName()) && parameterApply;
        boolean thisTypeApply = (strong || alreadyApplied) && !manualSignature &&
            !receiverTypeMatches(function, ownerTypePath);
        String confidence = strong || alreadyApplied ? "high" :
            owners.size() == 1 ? "medium" : "conflict";
        List<String> reasons = new ArrayList<>();
        reasons.add("this_call_owners=" + owners);
        reasons.add("agreed_this_calls=" + agreedCalls);
        reasons.add("incoming_this_accesses=" + receiverAccesses);
        reasons.add("incoming_edx_uses=" + edxUses);
        reasons.add("incoming_stack_parameter_uses=" + stackParameterUses);
        if (ownerTypePath.isBlank()) reasons.add("owner_data_type_missing");
        if (!conventionCandidate) reasons.add("calling_convention_not_receiver_compatible");
        if (manualName) reasons.add("manual_name_preserved");
        if (manualSignature) reasons.add("manual_signature_preserved");
        if (alreadyApplied) reasons.add("previously_applied");
        return new Proposal(function, owner, proposedName, ownerTypePath, agreedCalls,
            receiverAccesses, edxUses, stackParameterUses, candidate.ownerCalls,
            candidate.callSites, ownerApply, conventionApply, thisTypeApply,
            parameterApply, confidence, String.join("; ", reasons));
    }

    private boolean receiverOnlyFastcallSignature(Function function) {
        if (!"__fastcall".equals(function.getCallingConventionName())) return false;
        List<Parameter> parameters = explicitParameters(function);
        if (parameters.size() != 1) return false;
        Parameter parameter = parameters.get(0);
        return parameter.isRegisterVariable() && parameter.getRegister() != null &&
            "ECX".equals(canonicalRegister(parameter.getRegister().getName()));
    }

    private List<Parameter> explicitParameters(Function function) {
        List<Parameter> result = new ArrayList<>();
        for (Parameter parameter : function.getParameters())
            if (!parameter.isAutoParameter()) result.add(parameter);
        return result;
    }

    private int incomingThisAccesses(Function function) {
        Map<String, ThisValue> registers = new HashMap<>();
        registers.put("ECX", new ThisValue(0));
        int accesses = 0;
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            String[] operands = splitOperands(instruction.toString().toUpperCase(Locale.ROOT));
            if (!"LEA".equals(mnemonic)) {
                for (String operand : operands) {
                    MemoryExpr memory = memoryExpr(operand);
                    ThisValue base = memory == null ? null : registers.get(memory.register);
                    if (base == null) continue;
                    long offset = base.offset + memory.displacement;
                    if (offset >= 0 && offset < MAX_THIS_OFFSET) accesses++;
                }
            }
            if ("CALL".equals(mnemonic)) {
                registers.remove("EAX");
                registers.remove("ECX");
                registers.remove("EDX");
            }
            else updateRegisters(mnemonic, operands, registers);
        }
        return accesses;
    }

    private int incomingEdxUses(Function function) {
        boolean live = true;
        int uses = 0, seen = 0;
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext() && seen++ < 64 && live) {
            Instruction instruction = instructions.next();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            String[] operands = splitOperands(instruction.toString().toUpperCase(Locale.ROOT));
            for (int index = 0; index < operands.length; index++) {
                String register = cleanRegister(operands[index]);
                MemoryExpr memory = memoryExpr(operands[index]);
                boolean mentionsEdx = "EDX".equals(register) ||
                    memory != null && "EDX".equals(memory.register);
                if (!mentionsEdx) continue;
                boolean pureOverwrite = index == 0 && "EDX".equals(register) &&
                    Set.of("MOV", "LEA", "POP").contains(mnemonic);
                if (pureOverwrite) live = false;
                else uses++;
            }
            if ("XOR".equals(mnemonic) && operands.length >= 2 &&
                    "EDX".equals(cleanRegister(operands[0])) &&
                    "EDX".equals(cleanRegister(operands[1]))) live = false;
            if ("CALL".equals(mnemonic)) live = false;
        }
        return uses;
    }

    private int incomingStackParameterUses(Function function) {
        int uses = 0;
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            String[] operands = splitOperands(instruction.toString().toUpperCase(Locale.ROOT));
            for (String operand : operands) {
                MemoryExpr memory = memoryExpr(operand);
                if (memory == null) continue;
                if ("EBP".equals(memory.register) && memory.displacement >= 8 ||
                        "ESP".equals(memory.register) && memory.displacement >= 4) uses++;
            }
        }
        return uses;
    }

    private void updateRegisters(String mnemonic, String[] operands,
            Map<String, ThisValue> registers) {
        if (operands.length == 0) return;
        String destination = cleanRegister(operands[0]);
        if ("MOV".equals(mnemonic) && destination != null && operands.length >= 2) {
            if (!isFullRegister(operands[0])) { registers.remove(destination); return; }
            String source = cleanRegister(operands[1]);
            ThisValue value = source == null || !isFullRegister(operands[1]) ? null :
                registers.get(source);
            if (value == null) registers.remove(destination);
            else registers.put(destination, value);
            return;
        }
        if ("LEA".equals(mnemonic) && destination != null && operands.length >= 2) {
            if (!isFullRegister(operands[0])) { registers.remove(destination); return; }
            MemoryExpr memory = memoryExpr(operands[1]);
            ThisValue value = memory == null ? null : registers.get(memory.register);
            if (value == null) registers.remove(destination);
            else registers.put(destination, new ThisValue(value.offset + memory.displacement));
            return;
        }
        if (("ADD".equals(mnemonic) || "SUB".equals(mnemonic)) && destination != null &&
                operands.length >= 2 && registers.containsKey(destination)) {
            Long immediate = immediate(operands[1]);
            if (immediate == null) registers.remove(destination);
            else {
                long delta = "SUB".equals(mnemonic) ? -immediate : immediate;
                registers.put(destination, new ThisValue(registers.get(destination).offset + delta));
            }
            return;
        }
        if (destination != null && !Set.of("CMP", "TEST", "PUSH", "JMP", "RET")
                .contains(mnemonic)) registers.remove(destination);
    }

    private Function calledFunction(Instruction instruction) {
        for (Address flow : instruction.getFlows()) {
            Function function = currentProgram.getFunctionManager().getFunctionAt(flow);
            if (function == null) continue;
            Set<Address> seen = new TreeSet<>();
            while (function.isThunk() && seen.add(function.getEntryPoint())) {
                Function target = function.getThunkedFunction(false);
                if (target == null || target.equals(function)) break;
                function = target;
            }
            return function;
        }
        return null;
    }

    private boolean isCandidate(Function function) {
        if (function == null || function.isThunk() || function.isExternal() || isLibrary(function))
            return false;
        return isSynthetic(function.getName()) || hasTag(function, TAG);
    }

    private String ownerOf(Function function) {
        String qualified = function.getName(true);
        int separator = qualified.lastIndexOf("::");
        if (separator <= 0) return "";
        String owner = qualified.substring(0, separator);
        String upper = owner.toUpperCase(Locale.ROOT);
        return owner.equals("Global") || owner.startsWith("Library::") || upper.contains(".DLL") ?
            "" : owner;
    }

    private String ownerTypePath(String owner) {
        String name = leaf(owner);
        DataType direct = dataTypes.getDataType("/" + name);
        if (direct instanceof Structure) return direct.getPathName();
        List<DataType> matches = new ArrayList<>();
        dataTypes.findDataTypes(name, matches);
        for (DataType match : matches)
            if (match instanceof Structure && !match.getPathName().contains("/VTables/"))
                return match.getPathName();
        return "";
    }

    private boolean receiverTypeMatches(Function function, String typePath) {
        if (typePath.isBlank()) return false;
        for (Parameter parameter : function.getParameters()) {
            if (!(parameter.getDataType() instanceof Pointer pointer) ||
                    pointer.getDataType() == null ||
                    !typePath.equals(pointer.getDataType().getPathName())) continue;
            if (parameter.isAutoParameter()) return true;
            if (parameter.isRegisterVariable() && parameter.getRegister() != null &&
                    "ECX".equals(canonicalRegister(parameter.getRegister().getName()))) return true;
        }
        return false;
    }

    private boolean isLibrary(Function function) {
        for (FunctionTag tag : function.getTags()) {
            String name = tag.getName().toUpperCase(Locale.ROOT);
            if (name.equals("LIBRARY") || name.startsWith("LIBRARY_")) return true;
        }
        return false;
    }

    private boolean hasTag(Function function, String name) {
        for (FunctionTag tag : function.getTags()) if (name.equals(tag.getName())) return true;
        return false;
    }

    private boolean isSynthetic(String name) {
        return name != null && (name.matches("(?i)(?:thunk_)?FUN_[0-9a-f]+") ||
            name.matches("(?i)sub_[0-9a-f]+"));
    }

    private boolean protectedSource(SourceType source) {
        return source == SourceType.USER_DEFINED || source == SourceType.IMPORTED;
    }

    private MemoryExpr memoryExpr(String operand) {
        int open = operand.indexOf('['), close = operand.lastIndexOf(']');
        if (open < 0 || close <= open) return null;
        String value = operand.substring(open, close + 1)
            .replace(" ", "").toUpperCase(Locale.ROOT);
        Matcher matcher = MEMORY.matcher(value);
        if (!matcher.matches()) return null;
        long displacement = 0;
        if (matcher.group(3) != null) {
            Long parsed = immediate(matcher.group(3));
            if (parsed == null) return null;
            displacement = "-".equals(matcher.group(2)) ? -parsed : parsed;
        }
        return new MemoryExpr(canonicalRegister(matcher.group(1)), displacement);
    }

    private String cleanRegister(String operand) {
        String value = operand.trim().toUpperCase(Locale.ROOT);
        return REGISTER.matcher(value).matches() ? canonicalRegister(value) : null;
    }
    private String canonicalRegister(String register) {
        return switch (register.toUpperCase(Locale.ROOT)) {
            case "AL", "AH", "AX", "EAX", "RAX" -> "EAX";
            case "BL", "BH", "BX", "EBX", "RBX" -> "EBX";
            case "CL", "CH", "CX", "ECX", "RCX" -> "ECX";
            case "DL", "DH", "DX", "EDX", "RDX" -> "EDX";
            case "SI", "ESI", "RSI" -> "ESI"; case "DI", "EDI", "RDI" -> "EDI";
            case "BP", "EBP", "RBP" -> "EBP"; case "SP", "ESP", "RSP" -> "ESP";
            default -> register.toUpperCase(Locale.ROOT);
        };
    }
    private boolean isFullRegister(String operand) {
        return Set.of("EAX", "EBX", "ECX", "EDX", "ESI", "EDI", "EBP", "ESP",
            "RAX", "RBX", "RCX", "RDX", "RSI", "RDI", "RBP", "RSP")
            .contains(operand.trim().toUpperCase(Locale.ROOT));
    }

    private Long immediate(String operand) {
        String value = operand.trim().toUpperCase(Locale.ROOT).replace("+", "");
        try {
            if (value.startsWith("0X")) return Long.parseUnsignedLong(value.substring(2), 16);
            if (value.matches("[0-9A-F]+H"))
                return Long.parseUnsignedLong(value.substring(0, value.length() - 1), 16);
            if (value.matches("[0-9]+")) return Long.parseLong(value);
        }
        catch (NumberFormatException ignored) { }
        return null;
    }

    private String[] splitOperands(String instruction) {
        int space = instruction.indexOf(' ');
        if (space < 0 || space == instruction.length() - 1) return new String[0];
        return instruction.substring(space + 1).split("\\s*,\\s*");
    }

    private File outputDirectory() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException("Recovery output directory is required");
        return askDirectory("Select recovery output directory", "Select");
    }

    private Path programDirectory(File selected) {
        if (selected.getName().equals(currentProgram.getName())) return selected.toPath();
        return selected.toPath().resolve(currentProgram.getName());
    }

    private void writeTsv(Path path, List<Proposal> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("owner_apply\tconvention_apply\tthis_type_apply\tparameter_apply\taddress\t" +
                "expected_name\texpected_name_source\texpected_signature\t" +
                "expected_signature_source\texpected_calling_convention\towner\t" +
                "proposed_name\towner_type_path\tagreed_this_calls\treceiver_accesses\t" +
                "incoming_edx_uses\tincoming_stack_parameter_uses\t" +
                "owner_call_counts\tcall_sites\tconfidence\treason\n");
            for (Proposal p : rows) out.write(bit(p.ownerApply) + "\t" +
                bit(p.conventionApply) + "\t" + bit(p.thisTypeApply) + "\t" +
                bit(p.parameterApply) + "\t" +
                addr(p.address) + "\t" + tsv(p.expectedName) + "\t" +
                p.expectedNameSource + "\t" + tsv(p.expectedSignature) + "\t" +
                p.expectedSignatureSource + "\t" + p.expectedConvention + "\t" +
                tsv(p.owner) + "\t" + tsv(p.proposedName) + "\t" +
                tsv(p.ownerTypePath) + "\t" + p.agreedCalls + "\t" +
                p.receiverAccesses + "\t" + p.edxUses + "\t" +
                p.stackParameterUses + "\t" +
                tsv(p.ownerCounts.toString()) + "\t" +
                tsv(String.join(" | ", p.callSites)) + "\t" + p.confidence + "\t" +
                tsv(p.reason) + "\n");
        }
    }

    private void writeJson(Path path, List<Proposal> rows) throws Exception {
        List<String> lines = new ArrayList<>();
        for (Proposal p : rows) lines.add("{\"owner_apply\":" + p.ownerApply +
            ",\"convention_apply\":" + p.conventionApply +
            ",\"this_type_apply\":" + p.thisTypeApply +
            ",\"parameter_apply\":" + p.parameterApply +
            ",\"address\":" + q(addr(p.address)) + ",\"owner\":" + q(p.owner) +
            ",\"proposed_name\":" + q(p.proposedName) +
            ",\"owner_type_path\":" + q(p.ownerTypePath) +
            ",\"agreed_this_calls\":" + p.agreedCalls +
            ",\"receiver_accesses\":" + p.receiverAccesses +
            ",\"incoming_edx_uses\":" + p.edxUses +
            ",\"incoming_stack_parameter_uses\":" + p.stackParameterUses +
            ",\"confidence\":" + q(p.confidence) + ",\"reason\":" + q(p.reason) + "}");
        Files.write(path, lines, StandardCharsets.UTF_8);
    }

    private void writeSummary(Path path, List<Proposal> rows, int callerMethods) throws Exception {
        Files.write(path, List.of("program=" + currentProgram.getName(),
            "named_caller_methods=" + callerMethods,
            "proposals=" + rows.size(),
            "owner_auto_apply=" + rows.stream().filter(row -> row.ownerApply).count(),
            "convention_auto_apply=" + rows.stream().filter(row -> row.conventionApply).count(),
            "this_type_auto_apply=" + rows.stream().filter(row -> row.thisTypeApply).count(),
            "parameter_auto_apply=" + rows.stream().filter(row -> row.parameterApply).count(),
            "owner_conflicts=" + rows.stream().filter(row -> row.confidence.equals("conflict")).count(),
            "note=Only direct calls whose ECX still aliases the named caller's incoming this are evidence.",
            "note_names=Recovered methods receive structural Class::sub_ADDRESS names only.",
            "note_manual=USER_DEFINED names and signatures are never auto-applied."),
            StandardCharsets.UTF_8);
    }

    private static String leaf(String owner) {
        int separator = owner.lastIndexOf("::");
        return separator < 0 ? owner : owner.substring(separator + 2);
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

    private static class ThisValue {
        final long offset;
        ThisValue(long offset) { this.offset = offset; }
    }
    private static class MemoryExpr {
        final String register;
        final long displacement;
        MemoryExpr(String register, long displacement) {
            this.register = register; this.displacement = displacement;
        }
    }
    private static class Candidate {
        final Function function;
        final Map<String, Integer> ownerCalls = new TreeMap<>();
        final Set<String> callSites = new TreeSet<>();
        Candidate(Function function) { this.function = function; }
    }
    private static class Proposal {
        final Address address;
        final String expectedName, expectedNameSource, expectedSignature,
            expectedSignatureSource, expectedConvention, owner, proposedName,
            ownerTypePath, confidence, reason;
        final int agreedCalls, receiverAccesses, edxUses, stackParameterUses;
        final Map<String, Integer> ownerCounts;
        final Set<String> callSites;
        final boolean ownerApply, conventionApply, thisTypeApply, parameterApply;
        Proposal(Function function, String owner, String proposedName, String ownerTypePath,
                int agreedCalls, int receiverAccesses, int edxUses, int stackParameterUses,
                Map<String, Integer> ownerCounts,
                Set<String> callSites, boolean ownerApply, boolean conventionApply,
                boolean thisTypeApply, boolean parameterApply, String confidence,
                String reason) {
            this.address = function.getEntryPoint();
            this.expectedName = function.getName(true);
            this.expectedNameSource = function.getSymbol().getSource().toString();
            this.expectedSignature = function.getSignature().getPrototypeString(true);
            this.expectedSignatureSource = function.getSignatureSource().toString();
            this.expectedConvention = function.getCallingConventionName();
            this.owner = owner; this.proposedName = proposedName;
            this.ownerTypePath = ownerTypePath; this.agreedCalls = agreedCalls;
            this.receiverAccesses = receiverAccesses;
            this.edxUses = edxUses;
            this.stackParameterUses = stackParameterUses;
            this.ownerCounts = new TreeMap<>(ownerCounts);
            this.callSites = new TreeSet<>(callSites);
            this.ownerApply = ownerApply; this.conventionApply = conventionApply;
            this.thisTypeApply = thisTypeApply; this.parameterApply = parameterApply;
            this.confidence = confidence;
            this.reason = reason;
        }
    }
}
