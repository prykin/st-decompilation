// Recover anonymous x86 thiscall receivers from callee and direct/thunk call-site evidence.
// Read-only: writes hidden_this_*.{tsv,jsonl,txt}; the applier performs all mutations.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Analyze Hidden This

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.HashMap;
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
import ghidra.program.model.data.Pointer;
import ghidra.program.model.listing.AutoParameterType;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.FunctionTag;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Listing;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.scalar.Scalar;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;
import ghidra.program.model.symbol.SourceType;

public class STHiddenThisAnalyzer extends GhidraScript {
    private static final String TAG = "RECOVERED_HIDDEN_THIS";
    private static final int BACKWARD_LIMIT = 24;
    private static final int FORWARD_LIMIT = 4;
    private static final long MAX_RECEIVER_SIZE = 0x100000L;
    private static final Pattern MEMORY = Pattern.compile(
        ".*\\[([A-Z][A-Z0-9]{1,3})(?:\\s*\\+\\s*(-?(?:0X[0-9A-F]+|[0-9]+)))?\\].*");
    private static final Pattern IMMEDIATE = Pattern.compile(
        "^-?(?:0X[0-9A-F]+|[0-9]+|[0-9A-F]+H)$");
    private static final Pattern STACK_ADJUST = Pattern.compile(
        "^ADD\\s+ESP\\s*,\\s*(0X[0-9A-F]+|[0-9]+|[0-9A-F]+H)$");
    private static final Pattern STACK_LEA = Pattern.compile(
        "^LEA\\s+ESP\\s*,\\s*\\[ESP\\s*\\+\\s*(0X[0-9A-F]+|[0-9]+|[0-9A-F]+H)\\]$");

    private Listing listing;
    private final Map<Address, BodyEvidence> bodies = new TreeMap<>();
    private final DisjointSet groups = new DisjointSet();

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
        listing = currentProgram.getListing();

        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            monitor.checkCancelled();
            Function function = functions.next();
            if (!candidateBody(function)) continue;
            groups.add(function.getEntryPoint());
            bodies.put(function.getEntryPoint(), analyzeBody(function));
        }

        // A direct call that forwards the caller's incoming receiver into ECX proves that
        // both functions operate on the same anonymous receiver family.  This is grouping
        // evidence only; it is not sufficient by itself to change either convention.
        for (BodyEvidence evidence : bodies.values()) {
            for (Address target : evidence.sameThisTargets) {
                if (bodies.containsKey(target)) groups.union(evidence.function.getEntryPoint(), target);
            }
        }

        Map<Address, Set<Function>> thunkIndex = thunkIndex();
        Map<Address, GroupEvidence> groupEvidence = buildGroupEvidence();
        List<Proposal> proposals = new ArrayList<>();
        for (BodyEvidence body : bodies.values()) {
            monitor.checkCancelled();
            Proposal proposal = proposal(body, groupEvidence.get(groups.find(
                body.function.getEntryPoint())), thunkIndex);
            if (proposal != null) proposals.add(proposal);
        }
        proposals.sort(Comparator.comparing(row -> row.address));
        writeTsv(directory.resolve("hidden_this_proposals.tsv"), proposals);
        writeJson(directory.resolve("hidden_this_proposals.jsonl"), proposals);
        writeSummary(directory.resolve("hidden_this_summary.txt"), proposals);

        println("Hidden-this analysis complete: " + directory.toAbsolutePath().normalize());
        println("Candidates=" + proposals.size() + ", convention_apply=" +
            proposals.stream().filter(row -> row.conventionApply).count() +
            ", receiver_type_apply=" +
            proposals.stream().filter(row -> row.receiverTypeApply).count());
    }

    private BodyEvidence analyzeBody(Function function) {
        BodyEvidence result = new BodyEvidence(function);
        Map<String, Origin> registers = new HashMap<>();
        Map<String, Origin> saved = new HashMap<>();
        registers.put("ECX", Origin.receiver(0));
        boolean incomingEdxLive = true;
        InstructionIterator instructions = listing.getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            String mnemonic = upper(instruction.getMnemonicString());
            String[] operands = operands(instruction);

            if (incomingEdxLive) {
                EdxUse edx = incomingEdxUse(mnemonic, operands);
                result.incomingEdxUses += edx.uses;
                incomingEdxLive = !edx.overwritten && !instruction.getFlowType().isCall();
            }

            if (!"LEA".equals(mnemonic)) {
                for (String operand : operands) {
                    MemoryExpr memory = memory(operand);
                    Origin base = memory == null ? null : registers.get(memory.register);
                    if (base == null || base.kind != Kind.RECEIVER) continue;
                    long offset = base.offset + memory.displacement;
                    if (offset < 0 || offset >= MAX_RECEIVER_SIZE) continue;
                    result.receiverAccesses++;
                    result.observedSize = Math.max(result.observedSize,
                        offset + operandWidth(operand));
                }
            }

            if (instruction.getFlowType().isCall()) {
                Origin ecx = registers.get("ECX");
                MemoryExpr targetMemory = operands.length == 0 ? null : memory(operands[0]);
                Origin targetBase = targetMemory == null ? null :
                    registers.get(targetMemory.register);
                if (ecx != null && ecx.kind == Kind.RECEIVER && ecx.offset == 0 &&
                        targetBase != null && targetBase.kind == Kind.VTABLE &&
                        targetMemory.displacement >= 0 && targetMemory.displacement < 0x1000) {
                    result.vtableSlots.add(targetMemory.displacement);
                }
                Function target = calledFunction(instruction);
                if (target != null && ecx != null && ecx.kind == Kind.RECEIVER &&
                        ecx.offset == 0) {
                    result.sameThisTargets.add(target.getEntryPoint());
                }
                registers.remove("EAX");
                registers.remove("ECX");
                registers.remove("EDX");
                continue;
            }
            updateOrigins(mnemonic, operands, registers, saved, result);
        }
        result.returnPops.addAll(returnPops(function));
        return result;
    }

    private void updateOrigins(String mnemonic, String[] operands,
            Map<String, Origin> registers, Map<String, Origin> saved, BodyEvidence result) {
        if (operands.length == 0) return;
        String destinationRegister = register(operands[0]);
        MemoryExpr destinationMemory = memory(operands[0]);
        if ("MOV".equals(mnemonic) && operands.length >= 2) {
            Origin source = registerOrigin(operands[1], registers);
            MemoryExpr sourceMemory = memory(operands[1]);
            if (source == null && sourceMemory != null) {
                source = saved.get(stackKey(sourceMemory));
                Origin base = registers.get(sourceMemory.register);
                if (source == null && base != null && base.kind == Kind.RECEIVER &&
                        base.offset + sourceMemory.displacement == 0)
                    source = Origin.vtable();
            }
            if (destinationRegister != null) {
                if (source == null) registers.remove(destinationRegister);
                else registers.put(destinationRegister, source);
            }
            else if (destinationMemory != null && source != null &&
                    source.kind == Kind.RECEIVER && isStack(destinationMemory)) {
                saved.put(stackKey(destinationMemory), source);
                result.receiverCaptures++;
            }
            return;
        }
        if ("LEA".equals(mnemonic) && destinationRegister != null && operands.length >= 2) {
            MemoryExpr sourceMemory = memory(operands[1]);
            Origin base = sourceMemory == null ? null : registers.get(sourceMemory.register);
            if (base != null && base.kind == Kind.RECEIVER)
                registers.put(destinationRegister,
                    Origin.receiver(base.offset + sourceMemory.displacement));
            else registers.remove(destinationRegister);
            return;
        }
        if (("ADD".equals(mnemonic) || "SUB".equals(mnemonic)) &&
                destinationRegister != null && operands.length >= 2) {
            Origin old = registers.get(destinationRegister);
            Long value = number(operands[1]);
            if (old != null && old.kind == Kind.RECEIVER && value != null) {
                long delta = "ADD".equals(mnemonic) ? value : -value;
                registers.put(destinationRegister, Origin.receiver(old.offset + delta));
            }
            else registers.remove(destinationRegister);
            return;
        }
        if (destinationRegister != null && writesRegister(mnemonic, operands))
            registers.remove(destinationRegister);
    }

    private Proposal proposal(BodyEvidence body, GroupEvidence group,
            Map<Address, Set<Function>> thunkIndex) {
        Function function = body.function;
        boolean scriptOwned = hasTag(function, TAG);
        boolean alreadyThiscall = "__thiscall".equals(function.getCallingConventionName());
        if (alreadyThiscall && !scriptOwned) return null;
        if (!alreadyThiscall && !Set.of("__stdcall", "__cdecl", "unknown")
                .contains(function.getCallingConventionName())) return null;
        if (!scriptOwned && !synthetic(function.getName(true))) return null;
        if (body.receiverCaptures + body.receiverAccesses == 0) return null;

        CallEvidence calls = callEvidence(function, thunkIndex);
        int expectedStack = expectedStackBytes(function);
        boolean retMatches = body.returnPops.size() == 1 &&
            body.returnPops.iterator().next() == expectedStack;
        boolean manualSignature = protectedSource(function.getSignatureSource());
        boolean strong = calls.pointerSetup >= 2 && calls.scalarSetup == 0 &&
            calls.cleanupCalls == 0 && body.receiverCaptures > 0 &&
            body.receiverAccesses >= 2 && body.incomingEdxUses == 0 && retMatches &&
            !manualSignature;
        boolean previouslyApplied = scriptOwned && alreadyThiscall;
        boolean conventionApply = strong && !alreadyThiscall;
        String typeName = "AnonReceiver_" + addr(group.anchor);
        String typePath = "/SubmarineTitans/Recovered/HiddenThis/" + typeName;
        boolean receiverTypeApply = (strong || previouslyApplied) &&
            !receiverTypeMatches(function, typePath) && !manualSignature;
        String confidence = strong || previouslyApplied ? "high" :
            calls.pointerSetup > 0 && calls.scalarSetup == 0 ? "medium" : "review";
        List<String> reasons = new ArrayList<>();
        reasons.add("incoming_receiver_captures=" + body.receiverCaptures);
        reasons.add("receiver_accesses=" + body.receiverAccesses);
        reasons.add("incoming_edx_uses=" + body.incomingEdxUses);
        reasons.add("calls=" + calls.calls);
        reasons.add("ecx_pointer_setup=" + calls.pointerSetup);
        reasons.add("ecx_scalar_setup=" + calls.scalarSetup);
        reasons.add("caller_cleanup_calls=" + calls.cleanupCalls);
        reasons.add("callee_ret_pop=" + set(body.returnPops));
        reasons.add("expected_stack=" + expectedStack);
        if (!retMatches) reasons.add("stack_discipline_mismatch");
        if (manualSignature) reasons.add("manual_signature_preserved");
        if (previouslyApplied) reasons.add("previously_applied");
        return new Proposal(function, conventionApply, receiverTypeApply, typeName, typePath,
            group.observedSize, group.vtableSlots, calls, expectedStack, confidence,
            String.join("; ", reasons));
    }

    private CallEvidence callEvidence(Function target, Map<Address, Set<Function>> thunkIndex) {
        CallEvidence result = new CallEvidence();
        Set<Function> entries = new LinkedHashSet<>();
        entries.add(target);
        entries.addAll(thunkIndex.getOrDefault(target.getEntryPoint(), Set.of()));
        Set<Address> seen = new LinkedHashSet<>();
        for (Function entry : entries) {
            ReferenceIterator references = currentProgram.getReferenceManager()
                .getReferencesTo(entry.getEntryPoint());
            while (references.hasNext()) {
                Reference reference = references.next();
                if (!reference.getReferenceType().isCall() ||
                        !seen.add(reference.getFromAddress())) continue;
                Instruction call = listing.getInstructionAt(reference.getFromAddress());
                Function caller = listing.getFunctionContaining(reference.getFromAddress());
                if (call == null || caller == null) continue;
                Backward backward = backward(caller, call);
                result.calls++;
                if ("pointer".equals(backward.mode)) result.pointerSetup++;
                else if ("scalar".equals(backward.mode)) result.scalarSetup++;
                else if ("live".equals(backward.mode)) result.liveEcx++;
                if (callerCleanup(caller, call) > 0) result.cleanupCalls++;
            }
        }
        return result;
    }

    private Backward backward(Function caller, Instruction call) {
        Instruction instruction = listing.getInstructionBefore(call.getAddress());
        for (int count = 0; instruction != null && count < BACKWARD_LIMIT; count++) {
            if (!caller.getBody().contains(instruction.getAddress()) ||
                    instruction.getFlowType().isJump() ||
                    instruction.getFlowType().isTerminal()) break;
            if (instruction.getFlowType().isCall()) break;
            String mnemonic = upper(instruction.getMnemonicString());
            String[] operands = operands(instruction);
            if (writesFullRegister(mnemonic, operands, "ECX")) {
                String source = operands.length < 2 ? "" : operands[1];
                boolean scalar = source.isBlank() || IMMEDIATE.matcher(source).matches() ||
                    selfZero(mnemonic, operands, "ECX");
                return new Backward(scalar ? "scalar" : "pointer");
            }
            if (mentions(operands, "ECX")) return new Backward("live");
            instruction = listing.getInstructionBefore(instruction.getAddress());
        }
        return new Backward("unknown");
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
            if (instruction.getFlowType().isCall() || instruction.getFlowType().isJump() ||
                    instruction.getFlowType().isTerminal() ||
                    "PUSH".equals(upper(instruction.getMnemonicString()))) return 0;
            instruction = listing.getInstructionAfter(instruction.getAddress());
        }
        return 0;
    }

    private Map<Address, GroupEvidence> buildGroupEvidence() {
        Map<Address, GroupEvidence> result = new TreeMap<>();
        for (BodyEvidence body : bodies.values()) {
            Address root = groups.find(body.function.getEntryPoint());
            GroupEvidence group = result.computeIfAbsent(root, ignored -> new GroupEvidence(root));
            if (body.function.getEntryPoint().compareTo(group.anchor) < 0)
                group.anchor = body.function.getEntryPoint();
            group.observedSize = Math.max(group.observedSize, body.observedSize);
            group.vtableSlots.addAll(body.vtableSlots);
        }
        return result;
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

    private Function calledFunction(Instruction instruction) {
        Address[] flows = instruction.getFlows();
        if (flows.length != 1) return null;
        Function function = currentProgram.getFunctionManager().getFunctionAt(flows[0]);
        if (function == null) return null;
        Function target = function.isThunk() ? function.getThunkedFunction(true) : function;
        return target == null ? function : target;
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

    private int expectedStackBytes(Function function) {
        int result = 0;
        for (Parameter parameter : function.getParameters()) {
            if (parameter.isAutoParameter()) continue;
            int length = parameter.getDataType() == null ? 4 : parameter.getDataType().getLength();
            if (length < 1) length = 4;
            result += Math.max(4, (length + 3) & ~3);
        }
        return result;
    }

    private boolean receiverTypeMatches(Function function, String path) {
        for (Parameter parameter : function.getParameters()) {
            if (!parameter.isAutoParameter() ||
                    parameter.getAutoParameterType() != AutoParameterType.THIS ||
                    !(parameter.getDataType() instanceof Pointer pointer)) continue;
            DataType pointed = pointer.getDataType();
            return pointed != null && path.equals(pointed.getPathName());
        }
        return false;
    }

    private EdxUse incomingEdxUse(String mnemonic, String[] operands) {
        if (operands.length == 0) return new EdxUse(0, false);
        boolean mentions = mentions(operands, "EDX");
        boolean overwrite = writesFullRegister(mnemonic, operands, "EDX");
        if (selfZero(mnemonic, operands, "EDX")) return new EdxUse(0, true);
        return new EdxUse(mentions && !overwrite ? 1 : 0, overwrite);
    }

    private boolean candidateBody(Function function) {
        return function != null && !function.isExternal() && !function.isThunk() &&
            !isLibrary(function);
    }

    private boolean isLibrary(Function function) {
        for (FunctionTag tag : function.getTags())
            if (tag.getName().equals("LIBRARY") || tag.getName().startsWith("LIBRARY_"))
                return true;
        return function.getName(true).toUpperCase(Locale.ROOT).startsWith("LIBRARY::");
    }

    private boolean hasTag(Function function, String name) {
        for (FunctionTag tag : function.getTags()) if (name.equals(tag.getName())) return true;
        return false;
    }

    private boolean protectedSource(SourceType source) {
        return source == SourceType.USER_DEFINED || source == SourceType.IMPORTED;
    }

    private boolean synthetic(String name) {
        return name == null || name.startsWith("FUN_") || name.startsWith("sub_") ||
            name.startsWith("thunk_FUN_");
    }

    private MemoryExpr memory(String operand) {
        Matcher matcher = MEMORY.matcher(operand);
        if (!matcher.matches()) return null;
        return new MemoryExpr(canonicalRegister(matcher.group(1)),
            matcher.group(2) == null ? 0 : numberOrZero(matcher.group(2)));
    }

    private String register(String operand) {
        String cleaned = operand.trim().toUpperCase(Locale.ROOT);
        return cleaned.matches("[A-Z][A-Z0-9]{1,3}") ? canonicalRegister(cleaned) : null;
    }

    private Origin registerOrigin(String operand, Map<String, Origin> registers) {
        String name = register(operand);
        return name == null ? null : registers.get(name);
    }

    private String stackKey(MemoryExpr memory) {
        return memory.register + ":" + memory.displacement;
    }

    private boolean isStack(MemoryExpr memory) {
        return "EBP".equals(memory.register) || "ESP".equals(memory.register);
    }

    private int operandWidth(String operand) {
        String upper = upper(operand);
        if (upper.contains("BYTE PTR")) return 1;
        if (upper.contains("WORD PTR") && !upper.contains("DWORD PTR")) return 2;
        if (upper.contains("QWORD PTR")) return 8;
        return 4;
    }

    private boolean writesRegister(String mnemonic, String[] operands) {
        return operands.length > 0 && Set.of("MOV", "MOVSX", "MOVZX", "LEA", "POP",
            "XOR", "SUB", "SBB", "AND", "OR", "ADD", "ADC", "IMUL")
            .contains(mnemonic);
    }

    private boolean writesFullRegister(String mnemonic, String[] operands, String register) {
        return operands.length > 0 && register.equals(register(operands[0])) &&
            writesRegister(mnemonic, operands);
    }

    private boolean selfZero(String mnemonic, String[] operands, String register) {
        return operands.length >= 2 && Set.of("XOR", "SUB", "SBB").contains(mnemonic) &&
            register.equals(register(operands[0])) && register.equals(register(operands[1]));
    }

    private boolean mentions(String[] operands, String register) {
        Pattern pattern = Pattern.compile("(?:^|[^A-Z0-9_])" + register +
            "(?:$|[^A-Z0-9_])");
        for (String operand : operands) if (pattern.matcher(operand).find()) return true;
        return false;
    }

    private String[] operands(Instruction instruction) {
        String text = upper(instruction.toString());
        int space = text.indexOf(' ');
        if (space < 0) return new String[0];
        String rest = text.substring(space + 1).trim();
        return rest.isBlank() ? new String[0] : rest.split("\\s*,\\s*", -1);
    }

    private Long number(String text) {
        try {
            String value = text.trim().toUpperCase(Locale.ROOT);
            boolean negative = value.startsWith("-");
            if (negative) value = value.substring(1);
            int radix = value.startsWith("0X") || value.endsWith("H") ? 16 : 10;
            if (value.startsWith("0X")) value = value.substring(2);
            if (value.endsWith("H")) value = value.substring(0, value.length() - 1);
            long parsed = Long.parseLong(value, radix);
            return negative ? -parsed : parsed;
        }
        catch (Exception ignored) { return null; }
    }

    private long numberOrZero(String text) {
        Long value = number(text);
        return value == null ? 0 : value;
    }

    private String canonicalRegister(String name) {
        return switch (upper(name)) {
            case "AL", "AH", "AX", "EAX", "RAX" -> "EAX";
            case "BL", "BH", "BX", "EBX", "RBX" -> "EBX";
            case "CL", "CH", "CX", "ECX", "RCX" -> "ECX";
            case "DL", "DH", "DX", "EDX", "RDX" -> "EDX";
            case "SI", "ESI", "RSI" -> "ESI";
            case "DI", "EDI", "RDI" -> "EDI";
            case "BP", "EBP", "RBP" -> "EBP";
            case "SP", "ESP", "RSP" -> "ESP";
            default -> upper(name);
        };
    }

    private Path programDirectory(File selected) {
        Path path = selected.toPath().toAbsolutePath().normalize();
        if (path.getFileName() != null && path.getFileName().toString()
                .equals(safe(currentProgram.getName()))) return path;
        return path.resolve(safe(currentProgram.getName()));
    }

    private File outputDirectory() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless()) throw new IllegalArgumentException(
            "Recovery output directory is required");
        return askDirectory("Select recovery output directory", "Select");
    }

    private void writeTsv(Path path, List<Proposal> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("convention_apply\treceiver_type_apply\taddress\texpected_name\t" +
                "expected_name_source\texpected_signature\texpected_signature_source\t" +
                "expected_calling_convention\tproposed_calling_convention\t" +
                "receiver_type_name\treceiver_type_path\tobserved_size\tvtable_slots\t" +
                "calls\tecx_pointer_setup\tecx_scalar_setup\tecx_live_prior\t" +
                "caller_cleanup_calls\texpected_stack_bytes\tconfidence\treason\n");
            for (Proposal row : rows) {
                Function f = row.function;
                out.write(bit(row.conventionApply) + "\t" + bit(row.receiverTypeApply) +
                    "\t" + addr(row.address) + "\t" + tsv(f.getName(true)) + "\t" +
                    f.getSymbol().getSource() + "\t" +
                    tsv(f.getSignature().getPrototypeString(true)) + "\t" +
                    f.getSignatureSource() + "\t" + f.getCallingConventionName() +
                    "\t__thiscall\t" + row.typeName + "\t" + row.typePath + "\t" +
                    row.observedSize + "\t" + offsets(row.vtableSlots) + "\t" +
                    row.calls.calls + "\t" + row.calls.pointerSetup + "\t" +
                    row.calls.scalarSetup + "\t" + row.calls.liveEcx + "\t" +
                    row.calls.cleanupCalls + "\t" + row.expectedStack + "\t" +
                    row.confidence + "\t" + tsv(row.reason) + "\n");
            }
        }
    }

    private void writeJson(Path path, List<Proposal> rows) throws Exception {
        List<String> lines = new ArrayList<>();
        for (Proposal row : rows) lines.add("{\"convention_apply\":" +
            row.conventionApply + ",\"receiver_type_apply\":" + row.receiverTypeApply +
            ",\"address\":" + q(addr(row.address)) + ",\"function\":" +
            q(row.function.getName(true)) + ",\"receiver_type_path\":" + q(row.typePath) +
            ",\"observed_size\":" + row.observedSize + ",\"vtable_slots\":" +
            q(offsets(row.vtableSlots)) + ",\"confidence\":" + q(row.confidence) +
            ",\"reason\":" + q(row.reason) + "}");
        Files.write(path, lines, StandardCharsets.UTF_8);
    }

    private void writeSummary(Path path, List<Proposal> rows) throws Exception {
        Files.write(path, List.of("program=" + currentProgram.getName(),
            "candidates=" + rows.size(),
            "convention_apply=" + rows.stream().filter(row -> row.conventionApply).count(),
            "receiver_type_apply=" + rows.stream().filter(row -> row.receiverTypeApply).count(),
            "note=No class owner or semantic method name is invented.",
            "note_safety=High confidence requires incoming ECX capture/use, two explicit " +
                "pointer receiver call sites, no scalar ECX setup or caller cleanup, no live " +
                "incoming EDX use, and exact RET n/stack-parameter agreement.",
            "note_vtable=Generated anonymous vtables contain neutral void-pointer slots only; " +
                "a later signature pass may refine individually proven slots."),
            StandardCharsets.UTF_8);
    }

    private static String offsets(Set<Long> values) {
        List<String> result = new ArrayList<>();
        for (long value : values) result.add(String.format("0x%X", value));
        return String.join(",", result);
    }
    private static String set(Set<Long> values) { return values.toString(); }
    private static String bit(boolean value) { return value ? "1" : "0"; }
    private static String addr(Address value) { return value.toString().toUpperCase(Locale.ROOT); }
    private static String upper(String value) { return value.toUpperCase(Locale.ROOT); }
    private static String safe(String value) { return value.replaceAll("[^A-Za-z0-9._-]+", "_"); }
    private static String tsv(String value) {
        return value == null ? "" : value.replace("\\", "\\\\").replace("\t", "\\t")
            .replace("\r", "\\r").replace("\n", "\\n");
    }
    private static String q(String value) {
        return "\"" + tsv(value).replace("\"", "\\\"") + "\"";
    }

    private enum Kind { RECEIVER, VTABLE }
    private static class Origin {
        final Kind kind; final long offset;
        Origin(Kind kind, long offset) { this.kind = kind; this.offset = offset; }
        static Origin receiver(long offset) { return new Origin(Kind.RECEIVER, offset); }
        static Origin vtable() { return new Origin(Kind.VTABLE, 0); }
    }
    private static class MemoryExpr {
        final String register; final long displacement;
        MemoryExpr(String register, long displacement) {
            this.register = register; this.displacement = displacement;
        }
    }
    private static class EdxUse {
        final int uses; final boolean overwritten;
        EdxUse(int uses, boolean overwritten) { this.uses = uses; this.overwritten = overwritten; }
    }
    private static class Backward { final String mode; Backward(String mode) { this.mode = mode; } }
    private static class CallEvidence {
        int calls, pointerSetup, scalarSetup, liveEcx, cleanupCalls;
    }
    private static class BodyEvidence {
        final Function function;
        int receiverCaptures, receiverAccesses, incomingEdxUses;
        long observedSize;
        final Set<Long> vtableSlots = new TreeSet<>();
        final Set<Long> returnPops = new TreeSet<>();
        final Set<Address> sameThisTargets = new TreeSet<>();
        BodyEvidence(Function function) { this.function = function; }
    }
    private static class GroupEvidence {
        Address anchor; long observedSize;
        final Set<Long> vtableSlots = new TreeSet<>();
        GroupEvidence(Address anchor) { this.anchor = anchor; }
    }
    private static class Proposal {
        final Function function; final Address address;
        final boolean conventionApply, receiverTypeApply;
        final String typeName, typePath, confidence, reason;
        final long observedSize; final Set<Long> vtableSlots;
        final CallEvidence calls; final int expectedStack;
        Proposal(Function function, boolean conventionApply, boolean receiverTypeApply,
                String typeName, String typePath, long observedSize, Set<Long> vtableSlots,
                CallEvidence calls, int expectedStack, String confidence, String reason) {
            this.function = function; this.address = function.getEntryPoint();
            this.conventionApply = conventionApply; this.receiverTypeApply = receiverTypeApply;
            this.typeName = typeName; this.typePath = typePath;
            this.observedSize = Math.max(4, observedSize);
            this.vtableSlots = new TreeSet<>(vtableSlots); this.calls = calls;
            this.expectedStack = expectedStack; this.confidence = confidence; this.reason = reason;
        }
    }
    private static class DisjointSet {
        private final Map<Address, Address> parent = new HashMap<>();
        void add(Address value) { parent.putIfAbsent(value, value); }
        Address find(Address value) {
            Address old = parent.get(value);
            if (old == null) { add(value); return value; }
            if (old.equals(value)) return value;
            Address root = find(old); parent.put(value, root); return root;
        }
        void union(Address left, Address right) {
            Address a = find(left), b = find(right);
            if (a.equals(b)) return;
            if (a.compareTo(b) <= 0) parent.put(b, a); else parent.put(a, b);
        }
    }
}
