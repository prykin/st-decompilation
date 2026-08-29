// Recover the common STMessage * signature across the named GetMessage family.
// Read-only: writes proposals consumed by STMessageHandlerApplier.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Analyze Message Handlers

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.HashSet;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Set;
import java.util.TreeSet;
import java.util.regex.Pattern;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.AbstractIntegerDataType;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.Undefined;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionTag;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.lang.Register;
import ghidra.program.model.scalar.Scalar;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.StackReference;

public class STMessageHandlerAnalyzer extends GhidraScript {
    private static final String MESSAGE_PATH = "/SubmarineTitans/Recovered/STMessage";
    private static final String INT_PATH = "/int";
    private static final String TAG = "RECOVERED_MESSAGE_HANDLER";
    private static final Pattern MESSAGE_OFFSET = Pattern.compile(
        "(?i)\\+\\s*0x(10|14|18|1c)\\]");
    private static final Pattern FIRST_FRAMED_STACK_ARGUMENT = Pattern.compile(
        "(?i)\\[(?:E|R)BP\\s*\\+\\s*(?:0x)?0*8\\]");

    @Override
    protected void run() throws Exception {
        // Read-only script: do not leave GhidraScript's implicit transaction around runScript().
        end(true);
        if (currentProgram == null) { printerr("Open the ST program first."); return; }
        File root = outputDirectory();
        if (root == null) return;
        requireMessageLayout();

        Map<Address, Candidate> candidates = new LinkedHashMap<>();
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            monitor.checkCancelled();
            Function entry = functions.next();
            if (entry.isExternal() || !"GetMessage".equals(entry.getName())) continue;
            Function target = resolveThunk(entry);
            if (target == null || target.isExternal()) continue;
            Candidate candidate = candidates.computeIfAbsent(target.getEntryPoint(),
                ignored -> new Candidate(target));
            candidate.familyNames.add(entry.getName(true));
            candidate.familyEntries.add(addr(entry.getEntryPoint()));
        }

        // VC6 folded a heavily reused default handler into a global two-instruction
        // zero-return stub. It has no semantic owner, but its RET 4 and many named
        // GetMessage callers prove the same one-argument __thiscall ABI.
        functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            monitor.checkCancelled();
            Function function = functions.next();
            if (function.isExternal() || function.isThunk() || !isZeroRet4Stub(function)) continue;
            Set<String> callers = namedMessageCallers(function);
            if (callers.size() < 5) continue;
            Candidate candidate = candidates.computeIfAbsent(function.getEntryPoint(),
                ignored -> new Candidate(function));
            candidate.sharedZeroStub = true;
            candidate.familyNames.addAll(callers);
        }

        // An unnamed optimized handler may still forward its sole stack
        // argument into one already proven common GetMessage anchor before it
        // reads the message envelope itself.  This catches stack-slot reuse
        // where a later x87 output overwrites the same incoming slot and Ghidra
        // consequently labels the ABI parameter as float.  The proof is
        // machine-local: exact parameter load, register-preserving forwarding,
        // exact PUSH into the direct anchor, RET 4, and at least one canonical
        // message-envelope offset read.  No owner or semantic method name is
        // inferred from the forwarding edge.
        Set<Address> messageAnchors = new HashSet<>(candidates.keySet());
        functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            monitor.checkCancelled();
            Function function = functions.next();
            if (function.isExternal() || function.isThunk() ||
                    candidates.containsKey(function.getEntryPoint())) continue;
            List<Parameter> explicit = explicitParameters(function);
            RetEvidence ret = retEvidence(function);
            if (explicit.size() != 1 || ret.count == 0 || !ret.allPop4 ||
                    protectedSource(explicit.get(0).getSource())) continue;
            Address anchor = forwardedMessageAnchor(
                function, explicit.get(0), messageAnchors);
            int[] offsets = messageOffsetCounts(function);
            int directOffsets = java.util.Arrays.stream(offsets).sum();
            if (anchor == null || directOffsets == 0) continue;
            Candidate source = candidates.get(anchor);
            Candidate candidate = new Candidate(function);
            candidate.forwardedEnvelope = true;
            candidate.familyNames.addAll(source.familyNames);
            candidate.familyEntries.add("forwarded:" + addr(anchor));
            candidates.put(function.getEntryPoint(), candidate);
        }

        List<Proposal> proposals = new ArrayList<>();
        for (Candidate candidate : candidates.values()) {
            monitor.checkCancelled();
            proposals.add(proposal(candidate));
        }
        proposals.sort(Comparator.comparing(p -> p.function.getEntryPoint()));

        Path selected = root.toPath().toAbsolutePath().normalize();
        String programDirectory = safe(currentProgram.getName());
        Path dir = selected.getFileName() != null &&
            programDirectory.equals(selected.getFileName().toString()) ? selected :
            selected.resolve(programDirectory);
        Files.createDirectories(dir);
        writeTsv(dir.resolve("message_handler_proposals.tsv"), proposals);
        long automatic = proposals.stream().filter(p -> p.apply).count();
        long alreadyTyped = proposals.stream().filter(p -> "already_typed".equals(p.reason)).count();
        long tagRepairs = proposals.stream()
            .filter(p -> "typed_GetMessage_missing_provenance_tag".equals(p.reason)).count();
        long conflicts = proposals.stream().filter(p -> "conflict".equals(p.confidence)).count();
        Files.write(dir.resolve("message_handler_summary.txt"), List.of(
            "program=" + currentProgram.getName(),
            "final_handlers=" + proposals.size(),
            "automatic=" + automatic,
            "already_typed=" + alreadyTyped,
            "provenance_tag_repairs=" + tagRepairs,
            "conflicts_or_manual=" + conflicts,
            "shared_zero_stubs=" + proposals.stream().filter(p -> p.sharedZeroStub).count(),
            "note=GetMessage plus RET 4 proves one explicit argument; STMessage offsets " +
                "+0x10/+0x14/+0x18/+0x1c establish the common envelope.",
            "note_return=Non-void generic 32-bit returns are normalized to int from trusted " +
                "SystemClassTy, AI, boat, and TLO GetMessage anchors.",
            "note_manual=USER_DEFINED/IMPORTED non-generic parameter and return types are preserved."),
            StandardCharsets.UTF_8);
        println("Message-handler analysis complete: " + dir);
        println("Handlers: " + proposals.size() + ", automatic: " + automatic +
            ", already typed: " + alreadyTyped + ", conflicts/manual: " + conflicts);
    }

    private Proposal proposal(Candidate candidate) {
        Function function = candidate.function;
        List<Parameter> explicit = explicitParameters(function);
        DataType returnType = function.getReturnType();
        String proposedReturn = "/void".equals(returnType.getPathName()) ? "/void" : INT_PATH;
        boolean returnCompatible = proposedReturn.equals(returnType.getPathName()) ||
            genericDword(returnType);
        boolean returnManualConflict = protectedSource(function.getReturn().getSource()) &&
            !proposedReturn.equals(returnType.getPathName());

        boolean parameterShape = explicit.size() == 1 || candidate.sharedZeroStub && explicit.isEmpty();
        Parameter parameter = explicit.size() == 1 ? explicit.get(0) : null;
        boolean parameterCompatible = parameter == null ? candidate.sharedZeroStub :
            isMessagePointer(parameter.getDataType()) || genericMessageParameter(parameter.getDataType());
        if (candidate.forwardedEnvelope) parameterCompatible = true;
        boolean parameterManualConflict = parameter != null && protectedSource(parameter.getSource()) &&
            !isMessagePointer(parameter.getDataType());
        RetEvidence ret = retEvidence(function);
        boolean abi = ret.count > 0 && ret.allPop4;
        boolean namedFamily = !candidate.familyNames.isEmpty();
        boolean safe = namedFamily && parameterShape && parameterCompatible && returnCompatible &&
            !parameterManualConflict && !returnManualConflict && abi;
        boolean desired = "__thiscall".equals(function.getCallingConventionName()) &&
            explicit.size() == 1 && isMessagePointer(explicit.get(0).getDataType()) &&
            proposedReturn.equals(returnType.getPathName()) && "message".equals(explicit.get(0).getName());
        boolean tagged = hasTag(function, TAG);

        int[] offsets = messageOffsetCounts(function);
        String evidence = "family_entries=" + String.join("|", candidate.familyEntries) +
            "; family_names=" + String.join("|", candidate.familyNames) +
            "; ret4=" + ret.count +
            "; direct_offsets={10:" + offsets[0] + ",14:" + offsets[1] +
            ",18:" + offsets[2] + ",1c:" + offsets[3] + "}" +
            (candidate.sharedZeroStub ? "; shared_zero_stub=true" : "") +
            (candidate.forwardedEnvelope ? "; forwarded_envelope=true" : "");
        String reason;
        String confidence;
        boolean apply;
        if (!namedFamily) { reason = "no_named_GetMessage_family"; confidence = "conflict"; apply = false; }
        else if (!abi) { reason = "RET_cleanup_does_not_prove_one_stack_argument"; confidence = "conflict"; apply = false; }
        else if (!parameterShape) { reason = "explicit_parameter_count_conflict"; confidence = "conflict"; apply = false; }
        else if (parameterManualConflict || returnManualConflict) {
            reason = "manual_semantic_signature_preserved"; confidence = "conflict"; apply = false;
        }
        else if (!parameterCompatible || !returnCompatible) {
            reason = "non_generic_signature_conflict"; confidence = "conflict"; apply = false;
        }
        else if (desired && tagged) {
            reason = "already_typed"; confidence = "high"; apply = false;
        }
        else if (desired) {
            reason = "typed_GetMessage_missing_provenance_tag";
            confidence = "high";
            apply = safe;
        }
        else { reason = candidate.sharedZeroStub ? "shared_zero_GetMessage_stub" :
            candidate.forwardedEnvelope ? "forwarded_GetMessage_envelope_with_RET4" :
            "named_GetMessage_family_with_RET4"; confidence = "high"; apply = safe; }

        return new Proposal(apply, function, proposedReturn, candidate.sharedZeroStub,
            explicit, confidence, reason, evidence);
    }

    private void requireMessageLayout() {
        DataType type = currentProgram.getDataTypeManager().getDataType(MESSAGE_PATH);
        if (!(type instanceof Structure) || type.getLength() < 0x20)
            throw new IllegalStateException(
                "STMessage 0x20 layout is missing; run STTypeBootstrapAnalyzer/Applier first");
    }

    private Function resolveThunk(Function function) {
        Set<Address> seen = new HashSet<>();
        while (function != null && function.isThunk() && seen.add(function.getEntryPoint())) {
            Function target = function.getThunkedFunction(false);
            if (target == null || target.equals(function)) break;
            function = target;
        }
        return function;
    }

    private List<Parameter> explicitParameters(Function function) {
        List<Parameter> result = new ArrayList<>();
        for (Parameter parameter : function.getParameters())
            if (!parameter.isAutoParameter()) result.add(parameter);
        return result;
    }

    private boolean isMessagePointer(DataType type) {
        return type instanceof Pointer pointer && pointer.getDataType() != null &&
            MESSAGE_PATH.equals(pointer.getDataType().getPathName());
    }

    private boolean genericMessageParameter(DataType type) {
        if (type == null || type.getLength() != currentProgram.getDefaultPointerSize()) return false;
        if (Undefined.isUndefined(type) || type instanceof AbstractIntegerDataType) return true;
        if (!(type instanceof Pointer pointer)) return false;
        DataType pointed = pointer.getDataType();
        if (pointed == null || Undefined.isUndefined(pointed) ||
                "/void".equals(pointed.getPathName()) || pointed instanceof AbstractIntegerDataType)
            return true;
        if (!(pointed instanceof Structure structure)) return false;
        String path = structure.getPathName();
        String description = structure.getDescription();
        return path.contains("/Recovered/PointerShapes/AnonShape_") ||
            description != null && description.contains("[STPointerShapeApplier]");
    }

    private boolean genericDword(DataType type) {
        if (type == null || type.getLength() != 4) return false;
        if (Undefined.isUndefined(type)) return true;
        String path = type.getPathName();
        return "/undefined4".equals(path) || "/dword".equals(path) ||
            "/uint".equals(path) || type instanceof AbstractIntegerDataType;
    }

    private boolean protectedSource(SourceType source) {
        return source == SourceType.USER_DEFINED || source == SourceType.IMPORTED;
    }

    private boolean hasTag(Function function, String tagName) {
        for (FunctionTag tag : function.getTags())
            if (tagName.equals(tag.getName())) return true;
        return false;
    }

    private RetEvidence retEvidence(Function function) {
        int count = 0;
        boolean allPop4 = true;
        InstructionIterator instructions = currentProgram.getListing().getInstructions(
            function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            if (!mnemonic.startsWith("RET")) continue;
            count++;
            Scalar scalar = instruction.getScalar(0);
            long cleanup = scalar == null ? 0 : scalar.getUnsignedValue();
            if (cleanup != 4) allPop4 = false;
        }
        return new RetEvidence(count, allPop4);
    }

    private int[] messageOffsetCounts(Function function) {
        int[] result = new int[4];
        InstructionIterator instructions = currentProgram.getListing().getInstructions(
            function.getBody(), true);
        while (instructions.hasNext()) {
            String text = instructions.next().toString();
            java.util.regex.Matcher matcher = MESSAGE_OFFSET.matcher(text);
            while (matcher.find()) {
                String value = matcher.group(1).toLowerCase(Locale.ROOT);
                int index = value.equals("10") ? 0 : value.equals("14") ? 1 :
                    value.equals("18") ? 2 : 3;
                result[index]++;
            }
        }
        return result;
    }

    private boolean isZeroRet4Stub(Function function) {
        List<Instruction> instructions = new ArrayList<>();
        InstructionIterator iterator = currentProgram.getListing().getInstructions(
            function.getBody(), true);
        while (iterator.hasNext() && instructions.size() < 3) instructions.add(iterator.next());
        if (instructions.size() != 2) return false;
        Instruction first = instructions.get(0), second = instructions.get(1);
        if (!"XOR".equalsIgnoreCase(first.getMnemonicString()) ||
                !first.toString().replace(" ", "").toUpperCase(Locale.ROOT).contains("EAX,EAX"))
            return false;
        if (!second.getMnemonicString().toUpperCase(Locale.ROOT).startsWith("RET")) return false;
        Scalar cleanup = second.getScalar(0);
        return cleanup != null && cleanup.getUnsignedValue() == 4;
    }

    private Set<String> namedMessageCallers(Function function) {
        Set<String> result = new TreeSet<>();
        ReferenceIterator references = currentProgram.getReferenceManager().getReferencesTo(
            function.getEntryPoint());
        while (references.hasNext()) {
            Reference reference = references.next();
            if (!reference.getReferenceType().isCall()) continue;
            Function caller = currentProgram.getListing().getFunctionContaining(
                reference.getFromAddress());
            if (caller != null && "GetMessage".equals(caller.getName()))
                result.add(caller.getName(true));
        }
        return result;
    }

    private Address forwardedMessageAnchor(Function function, Parameter parameter,
            Set<Address> anchors) {
        if (!parameter.isStackVariable()) return null;
        int stackOffset = parameter.getStackOffset();
        Map<String, Boolean> parameterRegisters = new java.util.HashMap<>();
        boolean lastPush = false;
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            Register destination = standaloneRegister(instruction, 0);
            // Operand zero is not necessarily a definition on x86.  In
            // particular PUSH EDI reports EDI as op0 but writes only ESP; the
            // old code consequently killed the exact argument provenance one
            // instruction before the forwarding CALL.
            if (destination != null && writesRegister(instruction, destination)) {
                boolean origin = false;
                if ("MOV".equals(mnemonic)) {
                    for (Reference reference : instruction.getOperandReferences(1))
                        if (reference instanceof StackReference stack &&
                                exactSoleIncomingStackWord(function, parameter,
                                    stackOffset, stack.getStackOffset()))
                            origin = true;
                    // Some Ghidra x86 frame rebuilds retain Stack[0x4] on the
                    // formal but omit the StackReference on the corresponding
                    // framed [EBP+8] load.  The physical instruction is still
                    // an exact ABI anchor for the sole RET-4 argument.
                    if (exactSoleFramedArgumentLoad(function, parameter,
                            instruction, 1)) origin = true;
                    Register source = standaloneRegister(instruction, 1);
                    if (source != null && parameterRegisters.getOrDefault(
                            source.getName().toUpperCase(Locale.ROOT), false))
                        origin = true;
                }
                parameterRegisters.put(destination.getName().toUpperCase(Locale.ROOT), origin);
            }
            if ("PUSH".equals(mnemonic)) {
                Register pushed = standaloneRegister(instruction, 0);
                lastPush = pushed != null && parameterRegisters.getOrDefault(
                    pushed.getName().toUpperCase(Locale.ROOT), false);
                continue;
            }
            if (!"CALL".equals(mnemonic)) continue;
            Function called = resolveThunk(directCalledFunction(instruction));
            if (called != null && anchors.contains(called.getEntryPoint()) && lastPush)
                return called.getEntryPoint();
            lastPush = false;
            for (String volatileRegister : List.of("EAX", "ECX", "EDX"))
                parameterRegisters.put(volatileRegister, false);
        }
        return null;
    }

    private boolean writesRegister(Instruction instruction, Register register) {
        for (Object result : instruction.getResultObjects())
            if (result instanceof Register written &&
                    written.getName().equalsIgnoreCase(register.getName())) return true;
        return false;
    }

    private boolean exactSoleFramedArgumentLoad(Function function,
            Parameter parameter, Instruction instruction, int operand) {
        if (operand < 0 || operand >= instruction.getNumOperands() ||
                explicitParameters(function).size() != 1 ||
                !explicitParameters(function).get(0).equals(parameter)) return false;
        RetEvidence ret = retEvidence(function);
        if (ret.count == 0 || !ret.allPop4) return false;
        String rendered = instruction.getDefaultOperandRepresentation(operand);
        return rendered != null && FIRST_FRAMED_STACK_ARGUMENT.matcher(
            rendered.replace(" ", "")).find();
    }

    /**
     * Ghidra's x86 stack model can expose the same first explicit argument as
     * either the entry-ESP displacement (4) or the framed EBP displacement (8),
     * depending on which variable-storage pass last rebuilt the signature.  Do
     * not bake either rendering into the recovery rule.  RET 4 plus exactly one
     * explicit parameter proves that the sole positive incoming stack word is
     * that parameter; negative offsets are locals and zero is the saved frame.
     */
    private boolean exactSoleIncomingStackWord(Function function, Parameter parameter,
            int parameterOffset, int referenceOffset) {
        if (referenceOffset == parameterOffset) return true;
        if (explicitParameters(function).size() != 1 ||
                explicitParameters(function).get(0) != parameter || referenceOffset <= 0)
            return false;
        RetEvidence ret = retEvidence(function);
        return ret.count > 0 && ret.allPop4 &&
            (referenceOffset == 4 || referenceOffset == 8) &&
            (parameterOffset == 4 || parameterOffset == 8);
    }

    private Register standaloneRegister(Instruction instruction, int operand) {
        if (operand < 0 || operand >= instruction.getNumOperands()) return null;
        Object[] objects = instruction.getOpObjects(operand);
        return objects.length == 1 && objects[0] instanceof Register register ?
            register : null;
    }

    private Function directCalledFunction(Instruction instruction) {
        for (Address flow : instruction.getFlows()) {
            Function function = currentProgram.getFunctionManager().getFunctionAt(flow);
            if (function != null) return function;
        }
        return null;
    }

    private void writeTsv(Path path, List<Proposal> proposals) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\tfunction_address\texpected_function\texpected_signature\t" +
                "expected_signature_source\texpected_calling_convention\t" +
                "expected_return_type\texpected_return_source\texpected_parameter_count\t" +
                "expected_parameter_name\texpected_parameter_type\texpected_parameter_source\t" +
                "proposed_calling_convention\tproposed_return_type\tproposed_parameter_name\t" +
                "proposed_parameter_type\tshared_zero_stub\tconfidence\treason\tevidence\n");
            for (Proposal p : proposals) out.write((p.apply ? "1" : "0") + "\t" +
                addr(p.function.getEntryPoint()) + "\t" + tsv(p.function.getName(true)) + "\t" +
                tsv(p.function.getSignature().getPrototypeString(true)) + "\t" +
                p.function.getSignatureSource() + "\t" +
                tsv(p.function.getCallingConventionName()) + "\t" +
                tsv(typeSpecification(p.function.getReturnType())) + "\t" +
                p.function.getReturn().getSource() + "\t" + p.explicit.size() + "\t" +
                tsv(p.explicit.isEmpty() ? "" : p.explicit.get(0).getName()) + "\t" +
                tsv(p.explicit.isEmpty() ? "" : typeSpecification(p.explicit.get(0).getDataType())) +
                "\t" + (p.explicit.isEmpty() ? "" : p.explicit.get(0).getSource()) + "\t" +
                "__thiscall\t" + p.proposedReturn + "\tmessage\tpointer:" + MESSAGE_PATH +
                "\t" + p.sharedZeroStub + "\t" + p.confidence + "\t" + p.reason + "\t" +
                tsv(p.evidence) + "\n");
        }
    }

    private void writeJsonl(Path path, List<Proposal> proposals) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            for (Proposal p : proposals) {
                out.write("{\"apply\":" + p.apply + ",\"function_address\":\"" +
                    addr(p.function.getEntryPoint()) + "\",\"function_name\":\"" +
                    json(p.function.getName(true)) + "\",\"proposed_return_type\":\"" +
                    json(p.proposedReturn) + "\",\"proposed_parameter_type\":\"pointer:" +
                    json(MESSAGE_PATH) + "\",\"shared_zero_stub\":" + p.sharedZeroStub +
                    ",\"confidence\":\"" + p.confidence + "\",\"reason\":\"" +
                    json(p.reason) + "\",\"evidence\":\"" + json(p.evidence) + "\"}\n");
            }
        }
    }

    private File outputDirectory() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless()) throw new IllegalArgumentException("Recovery output directory required");
        return askDirectory("Select recovery output directory", "Choose");
    }

    private String typeSpecification(DataType type) {
        if (type instanceof Pointer pointer && pointer.getDataType() != null)
            return "pointer:" + pointer.getDataType().getPathName();
        return type == null ? "" : type.getPathName();
    }
    private static String addr(Address address) {
        return address == null ? "" : address.toString().toUpperCase(Locale.ROOT);
    }
    private static String safe(String value) {
        return value.replaceAll("[^A-Za-z0-9._-]+", "_");
    }
    private static String tsv(String value) {
        if (value == null) return "";
        return value.replace("\\", "\\\\").replace("\t", "\\t")
            .replace("\r", "\\r").replace("\n", "\\n");
    }
    private static String json(String value) {
        if (value == null) return "";
        return value.replace("\\", "\\\\").replace("\"", "\\\"")
            .replace("\r", "\\r").replace("\n", "\\n").replace("\t", "\\t");
    }

    private static class Candidate {
        final Function function;
        final Set<String> familyNames = new TreeSet<>();
        final Set<String> familyEntries = new TreeSet<>();
        boolean sharedZeroStub;
        boolean forwardedEnvelope;
        Candidate(Function function) { this.function = function; }
    }
    private record RetEvidence(int count, boolean allPop4) { }
    private record Proposal(boolean apply, Function function, String proposedReturn,
            boolean sharedZeroStub, List<Parameter> explicit, String confidence,
            String reason, String evidence) { }
}
