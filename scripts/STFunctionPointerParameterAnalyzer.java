// Recover non-vtable callback parameters from the complete machine chain:
// exact function address at every direct callsite -> one callee parameter -> CALL through it.
// Read-only: writes function_pointer_parameter_proposals.tsv and diagnostics.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Analyze Function Pointer Parameters

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.HashMap;
import java.util.HashSet;
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
import ghidra.program.model.data.FunctionDefinition;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.TypeDef;
import ghidra.program.model.data.Undefined;
import ghidra.program.model.data.VoidDataType;
import ghidra.program.model.lang.Register;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.FunctionTag;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.scalar.Scalar;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.SourceType;

public class STFunctionPointerParameterAnalyzer extends GhidraScript {
    private static final String MARKER = "[STFunctionPointerParameterApplier]";
    private static final String TYPE_ROOT =
        "/SubmarineTitans/Recovered/FunctionPointerParameters/";
    private static final int MAX_ARGUMENTS = 64;
    private static final int RETURN_DEFINITION_SCAN_LIMIT = 20;
    private static final Pattern MEMORY = Pattern.compile(
        "^\\[([A-Z]{2,3})(?:([+-])(0X[0-9A-F]+|[0-9A-F]+H|[0-9]+))?\\]$");
    private static final Pattern REGISTER = Pattern.compile(
        "(?i)(?:[RE]?(?:AX|BX|CX|DX|SI|DI|BP|SP)|[ABCD][HL])");

    private final Map<Key, UseEvidence> uses = new TreeMap<>();
    private final Map<Key, CallEvidence> calls = new TreeMap<>();
    private final Map<String, Set<Long>> returnPopCache = new HashMap<>();
    private int functionsScanned, directCallsSeen, exactTargetSites, nullSites,
        unknownSites, indirectParameterCalls, backwardArgumentCallsites,
        incompleteBackwardArgumentCallsites, registerValueAlternatives,
        stackCleanupProofs, stackCleanupFailures, completeCoverageCandidates,
        enoughTargetCandidates, compatibleAbiCandidates, replaceableCandidates,
        protectedBaselineCandidates, fullyProvenCandidates;

    @Override
    protected void run() throws Exception {
        end(true);
        if (currentProgram == null) {
            printerr("Open the analyzed ST program first.");
            return;
        }
        File selected = outputDirectory();
        if (selected == null) return;
        Path directory = programDirectory(selected);
        Files.createDirectories(directory);

        collectIndirectParameterUses();
        collectDirectCallArguments();
        List<Row> rows = proposals();
        writeRows(directory.resolve("function_pointer_parameter_proposals.tsv"), rows);
        writeSummary(directory.resolve("function_pointer_parameter_summary.txt"), rows);
        println("Function-pointer-parameter analysis complete: " +
            directory.toAbsolutePath());
        println("Indirect parameters=" + uses.size() + ", proposals=" + rows.size() +
            ", apply=" + rows.stream().filter(row -> row.apply).count());
    }

    private void collectIndirectParameterUses() throws Exception {
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            monitor.checkCancelled();
            Function function = functions.next();
            if (!candidate(function)) continue;
            functionsScanned++;
            Map<Long, Parameter> stackParameters = frameParameters(function);
            if (stackParameters.isEmpty()) continue;
            Map<String, Parameter> registers = new HashMap<>();
            List<Value> pushes = new ArrayList<>();
            MachineContext context = machineContext(function);
            Set<String> savedRegisters = context.savedRegisters;
            Set<String> savedSeen = new HashSet<>();
            boolean inPrologue = true;
            boolean stackKnown = true;
            boolean beforeFirstCall = true;
            String previous = "";
            Set<Address> starts = context.blockStarts;
            InstructionIterator instructions = currentProgram.getListing()
                .getInstructions(function.getBody(), true);
            while (instructions.hasNext()) {
                Instruction instruction = instructions.next();
                if (!instruction.getAddress().equals(function.getEntryPoint()) &&
                        starts.contains(instruction.getAddress())) {
                    registers.clear();
                    pushes.clear();
                    inPrologue = false;
                    stackKnown = true;
                }
                String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
                String[] operands = splitOperands(instruction.toString().toUpperCase(Locale.ROOT));
                if (inPrologue) {
                    if (prologueInstruction(mnemonic, operands, savedRegisters, previous)) {
                        if ("PUSH".equals(mnemonic) && operands.length > 0) {
                            String register = cleanRegister(operands[0]);
                            if (savedRegisters.contains(register)) savedSeen.add(register);
                        }
                        previous = mnemonic + (operands.length == 0 ? "" : " " +
                            String.join(",", operands));
                        pushes.clear();
                        continue;
                    }
                    inPrologue = false;
                    pushes.clear();
                }
                if ("PUSH".equals(mnemonic)) {
                    String register = operands.length == 0 ? null :
                        cleanRegister(operands[0]);
                    if (beforeFirstCall && register != null &&
                            savedRegisters.contains(register) && savedSeen.add(register))
                        continue;
                    if (stackKnown && pushes.size() < MAX_ARGUMENTS * 2)
                        pushes.add(Value.unknown());
                    else {
                        stackKnown = false;
                        pushes.clear();
                    }
                    continue;
                }
                if (("MOV".equals(mnemonic) || "LEA".equals(mnemonic)) &&
                        operands.length >= 2) {
                    String destination = cleanRegister(operands[0]);
                    if (destination != null && isFullRegister(operands[0])) {
                        Parameter parameter = parameterValue(operands[1], registers,
                            stackParameters);
                        if (parameter == null) registers.remove(destination);
                        else registers.put(destination, parameter);
                    }
                }
                if ("CALL".equals(mnemonic)) {
                    beforeFirstCall = false;
                    if (directCalledFunction(instruction) == null) {
                        Parameter parameter = operands.length == 0 ? null :
                            parameterValue(operands[0], registers, stackParameters);
                        int cleanup = -1;
                        if (parameter != null && !parameter.isAutoParameter()) {
                            Key key = new Key(addr(function.getEntryPoint()),
                                parameter.getOrdinal());
                            UseEvidence evidence = uses.computeIfAbsent(key,
                                ignored -> new UseEvidence(function, parameter));
                            cleanup = stackKnown ?
                                callerCleanupWords(instruction, pushes.size()) : -1;
                            // Optimized MSVC code may stage arguments for a later call
                            // below the actual callback argument.  The raw number of
                            // preceding PUSH instructions is therefore only an upper
                            // bound.  For cdecl, the first exact removal of a word which
                            // predates this CALL proves the top callback-argument span;
                            // retain the old upper bound only when no such removal is
                            // visible so a callee-cleaned target can still prove itself
                            // from RET n.
                            evidence.argumentCounts.add(stackKnown && cleanup > 0 ?
                                cleanup : stackKnown ? pushes.size() : -1);
                            evidence.callerCleanupCounts.add(cleanup);
                            if (cleanup >= 0) stackCleanupProofs++;
                            else stackCleanupFailures++;
                            evidence.sites.add(addr(instruction.getAddress()) + " " +
                                instruction);
                            indirectParameterCalls++;
                        }
                        // A proven cdecl cleanup may be delayed across one or
                        // more following calls.  Keep the physical PUSH stack
                        // intact and let the later ADD/LEA consume it; clearing
                        // here makes a second callback in the same basic block
                        // spuriously unknown.  With no exact cleanup the stack
                        // shape is still unsafe and must be discarded.
                        if (cleanup < 0) {
                            stackKnown = false;
                            pushes.clear();
                        }
                    }
                    else {
                        int cleanup = directCallCleanupWords(instruction);
                        if (cleanup < 0 || stackKnown &&
                                !applyStackDelta(pushes, -cleanup)) {
                            stackKnown = false;
                            pushes.clear();
                        }
                    }
                    registers.remove("EAX");
                    registers.remove("ECX");
                    registers.remove("EDX");
                    continue;
                }
                int delta = stackWordDelta(instruction, mnemonic, operands);
                if (delta != 0 && (delta == Integer.MIN_VALUE || stackKnown &&
                        !applyStackDelta(pushes, delta))) {
                    stackKnown = false;
                    pushes.clear();
                }
                if (instruction.getFlowType().isJump() ||
                        instruction.getFlowType().isTerminal()) {
                    pushes.clear();
                    stackKnown = true;
                }
            }
        }
    }

    private void collectDirectCallArguments() throws Exception {
        Map<String, List<Key>> byFunction = new HashMap<>();
        for (Key key : uses.keySet())
            byFunction.computeIfAbsent(key.functionAddress, ignored -> new ArrayList<>())
                .add(key);
        if (byFunction.isEmpty()) return;

        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            monitor.checkCancelled();
            Function caller = functions.next();
            // Library tagging must not hide a direct callsite: incomplete coverage is a
            // reason to keep the proposal review-only, never a reason to infer through it.
            if (caller == null || caller.isExternal()) continue;
            List<DirectSite> candidateSites = new ArrayList<>();
            InstructionIterator instructions = currentProgram.getListing()
                .getInstructions(caller.getBody(), true);
            while (instructions.hasNext()) {
                Instruction instruction = instructions.next();
                String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
                if (!"CALL".equals(mnemonic)) continue;
                Function called = resolveThunk(directCalledFunction(instruction));
                if (called == null) continue;
                directCallsSeen++;
                List<Key> keys = byFunction.get(addr(called.getEntryPoint()));
                if (keys == null) continue;
                candidateSites.add(new DirectSite(instruction, called, keys,
                    stackShape(called)));
            }
            if (candidateSites.isEmpty()) continue;
            Map<Address, List<Instruction>> predecessors = instructionPredecessors(caller);
            for (DirectSite site : candidateSites) {
                ArgumentPaths paths = site.shape.valid ? backwardArguments(caller,
                    site.instruction, site.shape.wordCount, predecessors) :
                    new ArgumentPaths(false, List.of());
                backwardArgumentCallsites++;
                if (!paths.complete) incompleteBackwardArgumentCallsites++;
                collectCallSite(caller, site.instruction, site.called, site.keys, paths,
                    site.shape);
            }
        }
    }

    private Map<Address, List<Instruction>> instructionPredecessors(Function function) {
        Map<Address, List<Instruction>> result = new HashMap<>();
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            Address fallThrough = instruction.getFallThrough();
            if (fallThrough != null && function.getBody().contains(fallThrough))
                result.computeIfAbsent(fallThrough, ignored -> new ArrayList<>())
                    .add(instruction);
            if (!instruction.getFlowType().isJump()) continue;
            for (Address flow : instruction.getFlows())
                if (function.getBody().contains(flow))
                    result.computeIfAbsent(flow, ignored -> new ArrayList<>())
                        .add(instruction);
        }
        return result;
    }

    private ArgumentPaths backwardArguments(Function caller, Instruction call,
            int argumentCount, Map<Address, List<Instruction>> predecessors) throws Exception {
        if (argumentCount < 0 || argumentCount > MAX_ARGUMENTS)
            return new ArgumentPaths(false, List.of());
        if (argumentCount == 0)
            return new ArgumentPaths(true, List.of(List.of()));
        List<BackwardState> pending = new ArrayList<>();
        for (Instruction predecessor : predecessors.getOrDefault(call.getAddress(), List.of()))
            pending.add(new BackwardState(predecessor.getAddress(), 0, List.of(), 0));
        if (pending.isEmpty()) return new ArgumentPaths(false, List.of());

        Map<String, List<Value>> completed = new TreeMap<>();
        Set<String> visited = new HashSet<>();
        boolean complete = true;
        int processed = 0;
        for (int cursor = 0; cursor < pending.size(); cursor++) {
            monitor.checkCancelled();
            if (++processed > 4096) return new ArgumentPaths(false, List.of());
            BackwardState state = pending.get(cursor);
            if (state.depth > 256 || state.discardWords > MAX_ARGUMENTS * 4) {
                complete = false;
                continue;
            }
            String stateKey = addr(state.address) + ":" + state.discardWords + ":" +
                valuesKey(state.arguments);
            if (!visited.add(stateKey)) continue;
            Instruction instruction = currentProgram.getListing()
                .getInstructionAt(state.address);
            if (instruction == null || !caller.getBody().contains(instruction.getAddress())) {
                complete = false;
                continue;
            }
            int discard = state.discardWords;
            List<Value> arguments = new ArrayList<>(state.arguments);
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            String[] operands = splitOperands(instruction.toString().toUpperCase(Locale.ROOT));
            boolean invalid = false;
            if ("PUSH".equals(mnemonic)) {
                if (discard > 0) discard--;
                else {
                    String operand = operands.length == 0 ? "" : operands[0];
                    Value value = argumentValue(instruction, 0, operand, Map.of());
                    String register = cleanRegister(operand);
                    if (value.kind == ValueKind.UNKNOWN && register != null &&
                            isFullRegister(operand) &&
                            arguments.size() + 1 == argumentCount) {
                        RegisterValues resolved = backwardRegisterValues(caller,
                            instruction, register, predecessors);
                        if (resolved.complete && !resolved.values.isEmpty()) {
                            for (Value item : resolved.values) {
                                List<Value> expanded = new ArrayList<>(arguments);
                                expanded.add(item);
                                completed.putIfAbsent(valuesKey(expanded),
                                    List.copyOf(expanded));
                            }
                            continue;
                        }
                    }
                    arguments.add(value);
                }
            }
            else if ("CALL".equals(mnemonic)) {
                int cleanup = directCallCleanupWords(instruction);
                if (cleanup < 0) invalid = true;
                else discard += cleanup;
            }
            else {
                int delta = stackWordDelta(instruction, mnemonic, operands);
                if (delta == Integer.MIN_VALUE) invalid = true;
                else if (delta < 0) discard += -delta;
                else if (delta > 0) {
                    if (discard >= delta) discard -= delta;
                    else invalid = true; // SUB/reserved outgoing slots are not exact PUSH values.
                }
            }
            if (invalid || arguments.size() > argumentCount) {
                complete = false;
                continue;
            }
            if (arguments.size() == argumentCount && discard == 0) {
                completed.putIfAbsent(valuesKey(arguments), List.copyOf(arguments));
                continue;
            }
            List<Instruction> before = predecessors.getOrDefault(instruction.getAddress(),
                List.of());
            if (before.isEmpty()) {
                complete = false;
                continue;
            }
            for (Instruction predecessor : before)
                pending.add(new BackwardState(predecessor.getAddress(), discard,
                    List.copyOf(arguments), state.depth + 1));
        }
        return new ArgumentPaths(complete && !completed.isEmpty(),
            new ArrayList<>(completed.values()));
    }

    private RegisterValues backwardRegisterValues(Function caller, Instruction use,
            String wanted, Map<Address, List<Instruction>> predecessors) throws Exception {
        List<RegisterState> pending = new ArrayList<>();
        for (Instruction predecessor : predecessors.getOrDefault(use.getAddress(), List.of()))
            pending.add(new RegisterState(predecessor.getAddress(), wanted, 0));
        if (pending.isEmpty()) return new RegisterValues(false, List.of());
        Map<String, Value> values = new TreeMap<>();
        Set<String> visited = new HashSet<>();
        boolean complete = true;
        for (int cursor = 0; cursor < pending.size(); cursor++) {
            monitor.checkCancelled();
            if (cursor > 1024) return new RegisterValues(false, List.of());
            RegisterState state = pending.get(cursor);
            if (state.depth > 128 ||
                    !visited.add(addr(state.address) + ":" + state.register)) {
                if (state.depth > 128) complete = false;
                continue;
            }
            Instruction instruction = currentProgram.getListing()
                .getInstructionAt(state.address);
            if (instruction == null || !caller.getBody().contains(instruction.getAddress())) {
                complete = false;
                continue;
            }
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            String[] operands = splitOperands(instruction.toString().toUpperCase(Locale.ROOT));
            String destination = operands.length == 0 ? null : cleanRegister(operands[0]);
            boolean defines = state.register.equals(destination) ||
                writesRegister(instruction, state.register) ||
                "CALL".equals(mnemonic) && Set.of("EAX", "ECX", "EDX")
                    .contains(state.register);
            if (defines) {
                if (("MOV".equals(mnemonic) || "LEA".equals(mnemonic)) &&
                        operands.length >= 2 && state.register.equals(destination) &&
                        isFullRegister(operands[0])) {
                    Value value = argumentValue(instruction, 1, operands[1], Map.of());
                    if (value.kind != ValueKind.UNKNOWN) values.putIfAbsent(value.key(), value);
                    else {
                        String source = cleanRegister(operands[1]);
                        if (source == null || !isFullRegister(operands[1])) complete = false;
                        else enqueueRegisterPredecessors(pending, predecessors, instruction,
                            source, state.depth + 1);
                    }
                }
                else if (("XOR".equals(mnemonic) || "SUB".equals(mnemonic)) &&
                        operands.length >= 2 && state.register.equals(destination) &&
                        state.register.equals(cleanRegister(operands[1]))) {
                    Value value = Value.nullValue();
                    values.putIfAbsent(value.key(), value);
                }
                else complete = false;
                continue;
            }
            List<Instruction> before = predecessors.getOrDefault(instruction.getAddress(),
                List.of());
            if (before.isEmpty()) {
                complete = false;
                continue;
            }
            for (Instruction predecessor : before)
                pending.add(new RegisterState(predecessor.getAddress(), state.register,
                    state.depth + 1));
        }
        boolean proven = complete && !values.isEmpty();
        if (proven) registerValueAlternatives += values.size();
        return new RegisterValues(proven, new ArrayList<>(values.values()));
    }

    private void enqueueRegisterPredecessors(List<RegisterState> pending,
            Map<Address, List<Instruction>> predecessors, Instruction instruction,
            String register, int depth) {
        for (Instruction predecessor : predecessors.getOrDefault(instruction.getAddress(),
                List.of()))
            pending.add(new RegisterState(predecessor.getAddress(), register, depth));
    }

    private boolean writesRegister(Instruction instruction, String wanted) {
        for (Object output : instruction.getResultObjects())
            if (output instanceof Register register && wanted.equals(
                    canonicalRegister(register.getName()))) return true;
        return false;
    }

    private String valuesKey(List<Value> values) {
        List<String> result = new ArrayList<>();
        for (Value value : values) result.add(value.key());
        return String.join(";", result);
    }

    private void collectCallSite(Function caller, Instruction instruction, Function called,
            List<Key> keys, ArgumentPaths paths, StackShape shape) {
        for (Key key : keys) {
            CallEvidence evidence = calls.computeIfAbsent(key, ignored -> new CallEvidence());
            evidence.totalSites++;
            Integer index = shape.wordIndexByOrdinal.get(key.ordinal);
            String site = addr(caller.getEntryPoint()) + " " + caller.getName(true) +
                " -> " + addr(called.getEntryPoint()) + " @ " +
                addr(instruction.getAddress());
            Set<String> seenValues = new TreeSet<>();
            List<Value> values = new ArrayList<>();
            if (!paths.complete || index == null || paths.arguments.isEmpty())
                values.add(Value.unknown());
            else for (List<Value> arguments : paths.arguments) {
                Value value = index < arguments.size() ? arguments.get(index) : Value.unknown();
                if (seenValues.add(value.key())) values.add(value);
            }
            boolean covered = !values.isEmpty();
            for (Value value : values) {
                if (value.kind == ValueKind.FUNCTION && value.function != null) {
                    Function target = resolveThunk(value.function);
                    if (target == null) {
                        evidence.unknownSites.add(site + " unresolved function address");
                        unknownSites++;
                        covered = false;
                    }
                    else {
                        evidence.targets.put(addr(target.getEntryPoint()), target);
                        evidence.targetSites.add(site + " passes " +
                            addr(value.function.getEntryPoint()) + " " +
                            value.function.getName(true));
                        exactTargetSites++;
                    }
                }
                else if (value.kind == ValueKind.NULL) {
                    evidence.nullSites.add(site + " passes null");
                    nullSites++;
                }
                else {
                    evidence.unknownSites.add(site + " has an untracked callback argument");
                    unknownSites++;
                    covered = false;
                }
            }
            if (covered) evidence.coveredSites.add(site);
        }
    }

    private List<Row> proposals() {
        List<Row> rows = new ArrayList<>();
        for (Map.Entry<Key, UseEvidence> entry : uses.entrySet()) {
            Key key = entry.getKey();
            UseEvidence use = entry.getValue();
            Parameter parameter = explicitParameter(use.function, key.ordinal);
            if (parameter == null) continue;
            CallEvidence call = calls.getOrDefault(key, new CallEvidence());
            int argumentCount = use.argumentCounts.size() == 1 ?
                use.argumentCounts.iterator().next() : -1;
            Set<String> abis = new TreeSet<>();
            MachineAbi agreed = null;
            for (Function target : call.targets.values()) {
                MachineAbi candidate = machineAbi(target, argumentCount);
                if (candidate == null) abis.add("unproven:" + addr(target.getEntryPoint()));
                else {
                    abis.add(candidate.key());
                    if (agreed == null) agreed = candidate;
                }
            }
            boolean completeCoverage = call.totalSites > 0 && call.unknownSites.isEmpty() &&
                call.totalSites == call.coveredSites.size();
            boolean enoughTargets = call.targetSites.size() >= 2 && !call.targets.isEmpty();
            boolean cleanupCompatible = agreed != null &&
                (!"__cdecl".equals(agreed.convention) || argumentCount == 0 ||
                    use.callerCleanupCounts.equals(Set.of(argumentCount)));
            boolean compatibleAbi = agreed != null && abis.size() == 1 && cleanupCompatible;
            boolean replaceable = genericParameter(parameter) || generatedParameter(parameter);
            boolean manual = protectedSource(parameter.getSource()) ||
                protectedSource(use.function.getSignatureSource());
            boolean fullyProven = argumentCount >= 0 && argumentCount <= MAX_ARGUMENTS &&
                completeCoverage && enoughTargets && compatibleAbi;
            if (completeCoverage) completeCoverageCandidates++;
            if (enoughTargets) enoughTargetCandidates++;
            if (compatibleAbi) compatibleAbiCandidates++;
            if (replaceable) replaceableCandidates++;
            if (manual) protectedBaselineCandidates++;
            if (fullyProven) fullyProvenCandidates++;
            boolean apply = fullyProven && replaceable && !manual;
            String definition = TYPE_ROOT + "callback_" + key.functionAddress + "_p" +
                key.ordinal;
            String reason = "indirect_calls=" + use.sites.size() +
                ", observed_argument_counts=" + use.argumentCounts +
                ", caller_cleanup_counts=" + use.callerCleanupCounts +
                ", direct_calls=" + call.totalSites +
                ", exact_target_sites=" + call.targetSites.size() +
                ", null_sites=" + call.nullSites.size() +
                ", unknown_sites=" + call.unknownSites.size() +
                ", targets=" + call.targets.keySet() + ", machine_abis=" + abis +
                (completeCoverage ? "" : "; incomplete direct-call coverage") +
                (enoughTargets ? "" : "; fewer than two exact target sites") +
                (cleanupCompatible ? "" : "; cdecl caller cleanup is absent/conflicting") +
                (compatibleAbi ? "" : "; target machine ABIs are absent/conflicting") +
                (replaceable ? "" : "; concrete parameter type preserved") +
                (manual ? "; manual/imported parameter preserved" : "");
            rows.add(new Row(apply, key.functionAddress, use.function.getName(true),
                key.ordinal, parameter.getName(), parameter.getVariableStorage().toString(),
                typeSpec(parameter.getDataType()), parameter.getSource().toString(),
                text(parameter.getComment()), definition,
                agreed == null ? "" : agreed.convention,
                agreed == null ? "" : agreed.returnType,
                agreed == null ? -1 : agreed.argumentCount,
                agreed == null ? "" : agreed.parameterTypes,
                String.join("|", call.targets.keySet()),
                String.join(" | ", call.targetSites),
                String.join(" | ", call.nullSites),
                String.join(" | ", call.unknownSites),
                String.join(" | ", use.sites), apply ? "high" : "review", reason));
        }
        rows.sort(Comparator.comparing((Row row) -> row.functionAddress)
            .thenComparingInt(row -> row.ordinal));
        return rows;
    }

    private MachineAbi machineAbi(Function target, int observedArguments) {
        if (target == null || observedArguments < 0 || observedArguments > MAX_ARGUMENTS ||
                target.hasVarArgs() || usesIncomingEcx(target)) return null;
        Set<Long> pops = returnPops(target);
        if (pops.size() != 1) return null;
        long bytes = pops.iterator().next();
        if (bytes < 0 || bytes > (long)MAX_ARGUMENTS * currentProgram.getDefaultPointerSize() ||
                bytes % currentProgram.getDefaultPointerSize() != 0) return null;
        String convention;
        if (bytes == 0) convention = "__cdecl";
        else {
            if (bytes / currentProgram.getDefaultPointerSize() != observedArguments) return null;
            convention = "__stdcall";
        }
        String returned = machineReturnType(target);
        List<String> parameters = new ArrayList<>();
        for (int index = 0; index < observedArguments; index++)
            parameters.add(trustedParameterType(target, index));
        return new MachineAbi(convention, returned, observedArguments,
            String.join(";", parameters));
    }

    private String trustedParameterType(Function function, int index) {
        if (!trustedAbi(function)) return "/undefined4";
        StackShape shape = stackShape(function);
        if (!shape.valid) return "/undefined4";
        for (Parameter parameter : stackParameters(function)) {
            Integer wordIndex = shape.wordIndexByOrdinal.get(parameter.getOrdinal());
            DataType type = parameter.getFormalDataType();
            if (wordIndex != null && wordIndex == index && type != null &&
                    type.getLength() == currentProgram.getDefaultPointerSize())
                return typeSpec(type);
        }
        return "/undefined4";
    }

    private boolean trustedAbi(Function function) {
        if (function.getSignatureSource() == SourceType.IMPORTED) return true;
        for (FunctionTag tag : function.getTags()) {
            String name = tag.getName();
            if (name.equals("RECOVERED_ABI_CONSISTENCY") ||
                    name.equals("RECOVERED_CALLSITE_CONVENTION") ||
                    name.equals("RECOVERED_HEURISTIC_SIGNATURE") ||
                    name.equals("RECOVERED_PROTOTYPE") ||
                    name.equals("RECOVERED_UTILITY_SEMANTICS") ||
                    name.startsWith("RECOVERED_UTILITY_")) return true;
        }
        return false;
    }

    private Set<Long> returnPops(Function function) {
        String key = addr(function.getEntryPoint());
        Set<Long> cached = returnPopCache.get(key);
        if (cached != null) return cached;
        Set<Long> result = new TreeSet<>();
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            if (!mnemonic.equals("RET") && !mnemonic.equals("RETF")) continue;
            Scalar scalar = instruction.getScalar(0);
            result.add(scalar == null ? 0L : scalar.getUnsignedValue());
        }
        Set<Long> frozen = Set.copyOf(result);
        returnPopCache.put(key, frozen);
        return frozen;
    }

    private boolean usesIncomingEcx(Function function) {
        boolean live = true;
        int count = 0;
        String previous = "", beforePrevious = "";
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext() && count++ < 256 && live) {
            Instruction instruction = instructions.next();
            String rendered = instruction.toString().toUpperCase(Locale.ROOT);
            if (rendered.equals("XOR ECX,ECX") ||
                    rendered.equals("SUB ECX,ECX")) {
                // The x86 zero idiom defines ECX without consuming its incoming
                // value even though Ghidra lists ECX as both an input and an
                // output object.  Switch-index scratch setup must not turn an
                // ordinary cdecl callback into a fictitious __thiscall target.
                live = false;
                break;
            }
            boolean scratch = "PUSH ECX".equals(rendered) &&
                "MOV EBP,ESP".equals(previous) && "PUSH EBP".equals(beforePrevious);
            for (Object input : instruction.getInputObjects())
                if (input instanceof Register register &&
                        "ECX".equals(register.getName().toUpperCase(Locale.ROOT)) && !scratch)
                    return true;
            for (Object output : instruction.getResultObjects())
                if (output instanceof Register register &&
                        "ECX".equals(register.getName().toUpperCase(Locale.ROOT))) live = false;
            beforePrevious = previous;
            previous = rendered;
        }
        return false;
    }

    private String machineReturnType(Function function) {
        if (definitelyVoid(function)) return "/void";
        Set<Integer> widths = new TreeSet<>();
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            if (!mnemonic.equals("RET") && !mnemonic.equals("RETF")) continue;
            Instruction prior = currentProgram.getListing()
                .getInstructionBefore(instruction.getAddress());
            int width = 0;
            for (int scanned = 0; scanned < RETURN_DEFINITION_SCAN_LIMIT && prior != null &&
                    function.getBody().contains(prior.getAddress()); scanned++) {
                width = accumulatorWriteWidth(prior);
                if (width > 0) break;
                String priorMnemonic = prior.getMnemonicString().toUpperCase(Locale.ROOT);
                if ("CALL".equals(priorMnemonic) || priorMnemonic.startsWith("J")) break;
                prior = currentProgram.getListing().getInstructionBefore(prior.getAddress());
            }
            if (width == 0) return "/undefined4";
            widths.add(width);
        }
        int analyzedWidth = function.getReturnType() == null ? -1 :
            function.getReturnType().getLength();
        if (widths.equals(Set.of(1)) && analyzedWidth == 1) return "/undefined1";
        if (widths.equals(Set.of(2)) && analyzedWidth == 2) return "/undefined2";
        return "/undefined4";
    }

    private int accumulatorWriteWidth(Instruction instruction) {
        int result = 0;
        for (Object output : instruction.getResultObjects()) {
            if (!(output instanceof Register register)) continue;
            String name = register.getName().toUpperCase(Locale.ROOT);
            if (name.equals("EAX") || name.equals("RAX")) result = Math.max(result, 4);
            else if (name.equals("AX")) result = Math.max(result, 2);
            else if (name.equals("AL") || name.equals("AH")) result = Math.max(result, 1);
        }
        return result;
    }

    private boolean definitelyVoid(Function function) {
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            if (instruction.getFlowType().isCall()) return false;
            for (Object output : instruction.getResultObjects()) {
                if (!(output instanceof Register register)) continue;
                String name = register.getName().toUpperCase(Locale.ROOT);
                if (Set.of("EAX", "AX", "AL", "AH").contains(name)) return false;
            }
        }
        return true;
    }

    private Map<Long, Parameter> frameParameters(Function function) {
        Map<Long, Parameter> result = new HashMap<>();
        long bias = currentProgram.getDefaultPointerSize();
        for (Parameter parameter : function.getParameters())
            if (!parameter.isAutoParameter() && parameter.isStackVariable())
                result.put((long)parameter.getStackOffset() + bias, parameter);
        return result;
    }

    private Parameter parameterValue(String operand, Map<String, Parameter> registers,
            Map<Long, Parameter> stackParameters) {
        String register = cleanRegister(operand);
        if (register != null) return isFullRegister(operand) ? registers.get(register) : null;
        MemoryExpr memory = memoryExpr(operand);
        return memory != null && "EBP".equals(memory.register) ?
            stackParameters.get(memory.displacement) : null;
    }

    private Value argumentValue(Instruction instruction, int operandIndex, String operand,
            Map<String, Value> registers) {
        String register = cleanRegister(operand);
        if (register != null)
            return isFullRegister(operand) ? registers.getOrDefault(register, Value.unknown()) :
                Value.unknown();
        Function function = referencedFunction(instruction, operandIndex);
        if (function != null) return Value.function(function);
        Long immediate = immediate(operand);
        return immediate != null && immediate == 0 ? Value.nullValue() : Value.unknown();
    }

    private Function referencedFunction(Instruction instruction, int operandIndex) {
        for (Reference reference : instruction.getReferencesFrom()) {
            if (reference.getOperandIndex() != operandIndex) continue;
            Function function = currentProgram.getFunctionManager()
                .getFunctionAt(reference.getToAddress());
            if (function != null) return function;
        }
        if (operandIndex < 0 || operandIndex >= instruction.getNumOperands()) return null;
        for (Object object : instruction.getOpObjects(operandIndex))
            if (object instanceof Scalar scalar) {
                Address address = currentProgram.getAddressFactory().getDefaultAddressSpace()
                    .getAddress(scalar.getUnsignedValue());
                Function function = currentProgram.getFunctionManager().getFunctionAt(address);
                if (function != null) return function;
            }
        return null;
    }

    private Function directCalledFunction(Instruction instruction) {
        for (Address flow : instruction.getFlows()) {
            Function function = currentProgram.getFunctionManager().getFunctionAt(flow);
            if (function != null) return function;
        }
        return null;
    }

    private int directCallCleanupWords(Instruction instruction) {
        Function target = resolveThunk(directCalledFunction(instruction));
        if (target == null) return -1;
        Set<Long> pops = returnPops(target);
        if (pops.size() != 1) return -1;
        long bytes = pops.iterator().next();
        int word = currentProgram.getDefaultPointerSize();
        return bytes >= 0 && bytes % word == 0 && bytes / word <= MAX_ARGUMENTS ?
            (int)(bytes / word) : -1;
    }

    private int stackWordDelta(Instruction instruction, String mnemonic, String[] operands) {
        if ("POP".equals(mnemonic))
            return operands.length > 0 && "ESP".equals(cleanRegister(operands[0])) ?
                Integer.MIN_VALUE : -1;
        if (("ADD".equals(mnemonic) || "SUB".equals(mnemonic)) &&
                operands.length >= 2 && "ESP".equals(cleanRegister(operands[0]))) {
            Scalar scalar = instruction.getScalar(1);
            Long bytes = scalar == null ? immediate(operands[1]) :
                Long.valueOf(scalar.getUnsignedValue());
            int word = currentProgram.getDefaultPointerSize();
            if (bytes == null || bytes < 0 || bytes % word != 0 ||
                    bytes / word > MAX_ARGUMENTS) return Integer.MIN_VALUE;
            int words = (int)(bytes / word);
            return "ADD".equals(mnemonic) ? -words : words;
        }
        if ("LEA".equals(mnemonic) && operands.length >= 2 &&
                "ESP".equals(cleanRegister(operands[0]))) {
            MemoryExpr memory = memoryExpr(operands[1]);
            int word = currentProgram.getDefaultPointerSize();
            if (memory == null || !"ESP".equals(memory.register) ||
                    memory.displacement % word != 0 ||
                    Math.abs(memory.displacement / word) > MAX_ARGUMENTS)
                return Integer.MIN_VALUE;
            return (int)(-memory.displacement / word);
        }
        if (("LEAVE".equals(mnemonic) || operands.length > 0 &&
                "ESP".equals(cleanRegister(operands[0]))) &&
                !"CMP".equals(mnemonic) && !"TEST".equals(mnemonic))
            return Integer.MIN_VALUE;
        return 0;
    }

    private boolean applyStackDelta(List<Value> stack, int delta) {
        if (delta == Integer.MIN_VALUE) return false;
        if (delta > 0) {
            if (stack.size() + delta > MAX_ARGUMENTS * 2) return false;
            for (int index = 0; index < delta; index++) stack.add(Value.unknown());
            return true;
        }
        int remove = -delta;
        if (remove > stack.size()) return false;
        stack.subList(stack.size() - remove, stack.size()).clear();
        return true;
    }

    private int callerCleanupWords(Instruction call, int observedWords) {
        if (observedWords == 0) return 0;
        Function owner = currentProgram.getFunctionManager()
            .getFunctionContaining(call.getAddress());
        Instruction next = currentProgram.getListing().getInstructionAfter(call.getAddress());
        int newerWords = 0;
        for (int scanned = 0; scanned < 32 && next != null && owner != null &&
                owner.getBody().contains(next.getAddress()); scanned++) {
            String mnemonic = next.getMnemonicString().toUpperCase(Locale.ROOT);
            String[] operands = splitOperands(next.toString().toUpperCase(Locale.ROOT));
            if ("NOP".equals(mnemonic)) {
                next = currentProgram.getListing().getInstructionAfter(next.getAddress());
                continue;
            }
            if ("PUSH".equals(mnemonic)) {
                newerWords++;
                next = currentProgram.getListing().getInstructionAfter(next.getAddress());
                continue;
            }
            if ("POP".equals(mnemonic)) {
                if (newerWords > 0) newerWords--;
                else return 1;
                next = currentProgram.getListing().getInstructionAfter(next.getAddress());
                continue;
            }
            if ("CALL".equals(mnemonic)) {
                Function target = resolveThunk(directCalledFunction(next));
                if (target == null) return -1;
                StackShape shape = stackShape(target);
                // If the following call consumes a word which was already on
                // the stack at the callback site, that word was deliberately
                // staged for the later callee and cannot prove callback arity.
                if (!shape.valid || target.hasVarArgs() ||
                        newerWords < shape.wordCount) return -1;
                Set<Long> pops = returnPops(target);
                if (pops.size() != 1) return -1;
                long popped = pops.iterator().next();
                if (popped < 0 || popped % currentProgram.getDefaultPointerSize() != 0)
                    return -1;
                int poppedWords = (int)(popped /
                    currentProgram.getDefaultPointerSize());
                if (poppedWords > newerWords) return -1;
                newerWords -= poppedWords;
                next = currentProgram.getListing().getInstructionAfter(next.getAddress());
                continue;
            }
            long bytes = -1;
            if ("ADD".equals(mnemonic) && operands.length >= 2 &&
                    "ESP".equals(cleanRegister(operands[0]))) {
                Scalar scalar = next.getScalar(1);
                Long parsed = scalar == null ? immediate(operands[1]) :
                    Long.valueOf(scalar.getUnsignedValue());
                if (parsed != null) bytes = parsed;
            }
            else if ("LEA".equals(mnemonic) && operands.length >= 2 &&
                    "ESP".equals(cleanRegister(operands[0]))) {
                MemoryExpr memory = memoryExpr(operands[1]);
                if (memory != null && "ESP".equals(memory.register) &&
                        memory.displacement > 0) bytes = memory.displacement;
            }
            if (bytes >= 0 && bytes % currentProgram.getDefaultPointerSize() == 0) {
                int removed = (int)(bytes /
                    currentProgram.getDefaultPointerSize());
                if (removed <= newerWords) newerWords -= removed;
                else {
                    int originalRemoved = removed - newerWords;
                    return originalRemoved <= observedWords ? originalRemoved : -1;
                }
                next = currentProgram.getListing().getInstructionAfter(next.getAddress());
                continue;
            }
            if (("SUB".equals(mnemonic) || "AND".equals(mnemonic)) &&
                    operands.length >= 1 && "ESP".equals(cleanRegister(operands[0])))
                return -1;
            if (operands.length >= 1 && "ESP".equals(cleanRegister(operands[0])))
                return -1;
            if (next.getFlowType().isJump() || next.getFlowType().isTerminal()) return -1;
            next = currentProgram.getListing().getInstructionAfter(next.getAddress());
        }
        return -1;
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

    private List<Parameter> stackParameters(Function function) {
        List<Parameter> result = new ArrayList<>();
        for (Parameter parameter : function.getParameters())
            if (!parameter.isAutoParameter() && parameter.isStackVariable()) result.add(parameter);
        result.sort(Comparator.comparingInt(Parameter::getOrdinal));
        return result;
    }

    private StackShape stackShape(Function function) {
        int word = currentProgram.getDefaultPointerSize();
        Map<Integer, Integer> indices = new HashMap<>();
        Set<Integer> occupied = new HashSet<>();
        int count = 0;
        for (Parameter parameter : stackParameters(function)) {
            int offset = parameter.getStackOffset();
            DataType type = parameter.getFormalDataType();
            int length = type == null ? -1 : type.getLength();
            if (offset < word || offset % word != 0 || length < 0)
                return new StackShape(false, 0, Map.of());
            int index = offset / word - 1;
            int words = Math.max(1, (length + word - 1) / word);
            if (index < 0 || index + words > MAX_ARGUMENTS)
                return new StackShape(false, 0, Map.of());
            for (int slot = index; slot < index + words; slot++)
                if (!occupied.add(slot)) return new StackShape(false, 0, Map.of());
            indices.put(parameter.getOrdinal(), index);
            count = Math.max(count, index + words);
        }
        return new StackShape(true, count, Map.copyOf(indices));
    }

    private Parameter explicitParameter(Function function, int ordinal) {
        for (Parameter parameter : function.getParameters())
            if (!parameter.isAutoParameter() && parameter.getOrdinal() == ordinal)
                return parameter;
        return null;
    }

    private boolean genericParameter(Parameter parameter) {
        DataType type = unwrap(parameter.getFormalDataType());
        if (Undefined.isUndefined(type))
            return type.getLength() == currentProgram.getDefaultPointerSize();
        if (!(type instanceof Pointer pointer)) return false;
        DataType pointed = unwrap(pointer.getDataType());
        return pointed == null || pointed instanceof VoidDataType ||
            Undefined.isUndefined(pointed);
    }

    private boolean generatedParameter(Parameter parameter) {
        DataType type = unwrap(parameter.getFormalDataType());
        return type instanceof Pointer pointer &&
            unwrap(pointer.getDataType()) instanceof FunctionDefinition definition &&
            text(definition.getComment()).contains(MARKER);
    }

    private DataType unwrap(DataType type) {
        Set<String> seen = new HashSet<>();
        while (type instanceof TypeDef typeDef && seen.add(type.getPathName()))
            type = typeDef.getBaseDataType();
        return type;
    }

    private boolean protectedSource(SourceType source) {
        return source == SourceType.USER_DEFINED || source == SourceType.IMPORTED;
    }

    private boolean candidate(Function function) {
        return function != null && !function.isExternal() && !function.isThunk() &&
            !isLibrary(function);
    }

    private boolean isLibrary(Function function) {
        for (FunctionTag tag : function.getTags()) {
            String name = tag.getName().toUpperCase(Locale.ROOT);
            if (name.equals("LIBRARY") || name.startsWith("LIBRARY_")) return true;
        }
        return false;
    }

    private MachineContext machineContext(Function function) {
        Set<Address> starts = new HashSet<>();
        Set<String> saved = new HashSet<>();
        starts.add(function.getEntryPoint());
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            if (instruction.getFlowType().isJump()) {
                for (Address flow : instruction.getFlows())
                    if (function.getBody().contains(flow)) starts.add(flow);
                Address fallThrough = instruction.getFallThrough();
                if (fallThrough != null && function.getBody().contains(fallThrough))
                    starts.add(fallThrough);
            }
            if ("POP".equalsIgnoreCase(instruction.getMnemonicString())) {
                String[] operands = splitOperands(
                    instruction.toString().toUpperCase(Locale.ROOT));
                if (operands.length == 0) continue;
                String register = cleanRegister(operands[0]);
                if (register != null && Set.of("EBX", "ESI", "EDI").contains(register))
                    saved.add(register);
            }
        }
        return new MachineContext(starts, saved);
    }

    private boolean prologueInstruction(String mnemonic, String[] operands,
            Set<String> savedRegisters, String previous) {
        if ("MOV".equals(mnemonic) && operands.length >= 2 &&
                "EBP".equals(cleanRegister(operands[0])) &&
                "ESP".equals(cleanRegister(operands[1]))) return true;
        if (("SUB".equals(mnemonic) || "AND".equals(mnemonic)) && operands.length >= 1 &&
                "ESP".equals(cleanRegister(operands[0]))) return true;
        if (!"PUSH".equals(mnemonic) || operands.length == 0) return false;
        String register = cleanRegister(operands[0]);
        if ("EBP".equals(register) && previous.isEmpty()) return true;
        if (savedRegisters.contains(register)) return true;
        // VC6 commonly reserves one local word with PUSH ECX directly after frame setup.
        return "ECX".equals(register) && previous.equals("MOV EBP,ESP");
    }

    private MemoryExpr memoryExpr(String operand) {
        int open = operand.indexOf('['), close = operand.lastIndexOf(']');
        if (open < 0 || close <= open) return null;
        String value = operand.substring(open, close + 1).replace(" ", "")
            .replace("+-", "-").replace("-+", "-").toUpperCase(Locale.ROOT);
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
            case "SI", "ESI", "RSI" -> "ESI";
            case "DI", "EDI", "RDI" -> "EDI";
            case "BP", "EBP", "RBP" -> "EBP";
            case "SP", "ESP", "RSP" -> "ESP";
            default -> register.toUpperCase(Locale.ROOT);
        };
    }

    private boolean isFullRegister(String operand) {
        String value = operand.trim().toUpperCase(Locale.ROOT);
        return Set.of("EAX", "EBX", "ECX", "EDX", "ESI", "EDI", "EBP", "ESP",
            "RAX", "RBX", "RCX", "RDX", "RSI", "RDI", "RBP", "RSP")
            .contains(value);
    }

    private Long immediate(String operand) {
        String value = operand.trim().toUpperCase(Locale.ROOT).replace("+", "");
        boolean negative = value.startsWith("-");
        if (negative) value = value.substring(1);
        try {
            long parsed;
            if (value.startsWith("0X")) parsed = Long.parseUnsignedLong(value.substring(2), 16);
            else if (value.matches("[0-9A-F]+H"))
                parsed = Long.parseUnsignedLong(value.substring(0, value.length() - 1), 16);
            else if (value.matches("[0-9]+")) parsed = Long.parseLong(value);
            else return null;
            return negative ? -parsed : parsed;
        }
        catch (NumberFormatException ignored) { return null; }
    }

    private String[] splitOperands(String instruction) {
        int space = instruction.indexOf(' ');
        return space < 0 || space == instruction.length() - 1 ? new String[0] :
            instruction.substring(space + 1).split("\\s*,\\s*");
    }

    private void writeRows(Path path, List<Row> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\tfunction_address\texpected_function\tparameter_ordinal\t" +
                "expected_parameter_name\texpected_storage\texpected_parameter_type\t" +
                "expected_parameter_source\texpected_parameter_comment\tdefinition_path\t" +
                "proposed_calling_convention\tproposed_return_type\tstack_parameter_count\t" +
                "proposed_parameter_types\ttarget_addresses\ttarget_sites\tnull_sites\t" +
                "unknown_sites\tindirect_call_sites\tconfidence\tevidence\n");
            for (Row row : rows)
                out.write(bit(row.apply) + "\t" + row.functionAddress + "\t" +
                    clean(row.expectedFunction) + "\t" + row.ordinal + "\t" +
                    clean(row.expectedName) + "\t" + clean(row.expectedStorage) + "\t" +
                    row.expectedType + "\t" + row.expectedSource + "\t" +
                    clean(row.expectedComment) + "\t" + row.definitionPath + "\t" +
                    row.convention + "\t" + row.returnType + "\t" +
                    (row.argumentCount < 0 ? "" : row.argumentCount) + "\t" +
                    row.parameterTypes + "\t" + row.targetAddresses + "\t" +
                    clean(row.targetSites) + "\t" + clean(row.nullSites) + "\t" +
                    clean(row.unknownSites) + "\t" + clean(row.indirectSites) + "\t" +
                    row.confidence + "\t" + clean(row.evidence) + "\n");
        }
    }

    private void writeSummary(Path path, List<Row> rows) throws Exception {
        Files.write(path, List.of(
            "program=" + currentProgram.getName(),
            "functions_scanned=" + functionsScanned,
            "direct_calls_seen=" + directCallsSeen,
            "indirect_parameter_calls=" + indirectParameterCalls,
            "indirect_parameter_candidates=" + uses.size(),
            "backward_argument_callsites=" + backwardArgumentCallsites,
            "incomplete_backward_argument_callsites=" +
                incompleteBackwardArgumentCallsites,
            "register_value_alternatives=" + registerValueAlternatives,
            "stack_cleanup_proofs=" + stackCleanupProofs,
            "stack_cleanup_failures=" + stackCleanupFailures,
            "exact_function_target_sites=" + exactTargetSites,
            "null_target_sites=" + nullSites,
            "unknown_target_sites=" + unknownSites,
            "proposals=" + rows.size(),
            "complete_coverage_candidates=" + completeCoverageCandidates,
            "enough_target_candidates=" + enoughTargetCandidates,
            "compatible_abi_candidates=" + compatibleAbiCandidates,
            "fully_proven_candidates=" + fullyProvenCandidates,
            "replaceable_parameter_candidates=" + replaceableCandidates,
            "protected_baseline_candidates=" + protectedBaselineCandidates,
            "auto_apply=" + rows.stream().filter(row -> row.apply).count(),
            "note=Automatic typing requires every observed direct callsite to pass an exact " +
                "function address or null, at least two exact target sites, one indirect-call " +
                "argument count, and one unanimous machine-derived cdecl/stdcall ABI; cdecl " +
                "argument counts also require matching caller cleanup at every indirect site.",
            "note=USER_DEFINED/IMPORTED and concrete parameters are preserved; semantic " +
                "argument types are copied only from independently trusted target ABIs."
        ), StandardCharsets.UTF_8);
    }

    private File outputDirectory() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException("Recovery output directory is required");
        return askDirectory("Select recovery output directory", "Select");
    }

    private Path programDirectory(File selected) {
        Path path = selected.toPath().toAbsolutePath().normalize();
        return path.getFileName() != null && path.getFileName().toString()
            .equals(currentProgram.getName()) ? path : path.resolve(currentProgram.getName());
    }

    private String typeSpec(DataType type) {
        if (type instanceof Pointer pointer && pointer.getDataType() != null)
            return "pointer:" + typeSpec(pointer.getDataType());
        return type == null ? "" : type.getPathName();
    }

    private static String addr(Address address) {
        return address == null ? "" : address.toString().toUpperCase(Locale.ROOT);
    }
    private static String bit(boolean value) { return value ? "1" : "0"; }
    private static String text(String value) { return value == null ? "" : value; }
    private static String clean(String value) {
        return text(value).replace("\\", "\\\\").replace("\t", "\\t")
            .replace("\r", "\\r").replace("\n", "\\n");
    }

    private enum ValueKind { FUNCTION, NULL, UNKNOWN }
    private static class Value {
        final ValueKind kind;
        final Function function;
        Value(ValueKind kind, Function function) { this.kind = kind; this.function = function; }
        static Value function(Function function) { return new Value(ValueKind.FUNCTION, function); }
        static Value nullValue() { return new Value(ValueKind.NULL, null); }
        static Value unknown() { return new Value(ValueKind.UNKNOWN, null); }
        String key() {
            return kind + (function == null ? "" : ":" + addr(function.getEntryPoint()));
        }
    }
    private static class UseEvidence {
        final Function function;
        final Parameter parameter;
        final Set<Integer> argumentCounts = new TreeSet<>();
        final Set<Integer> callerCleanupCounts = new TreeSet<>();
        final Set<String> sites = new TreeSet<>();
        UseEvidence(Function function, Parameter parameter) {
            this.function = function;
            this.parameter = parameter;
        }
    }
    private static class CallEvidence {
        int totalSites;
        final Map<String, Function> targets = new TreeMap<>();
        final Set<String> targetSites = new TreeSet<>();
        final Set<String> nullSites = new TreeSet<>();
        final Set<String> unknownSites = new TreeSet<>();
        final Set<String> coveredSites = new TreeSet<>();
    }
    private record Key(String functionAddress, int ordinal) implements Comparable<Key> {
        @Override public int compareTo(Key other) {
            int value = functionAddress.compareTo(other.functionAddress);
            return value != 0 ? value : Integer.compare(ordinal, other.ordinal);
        }
    }
    private record MemoryExpr(String register, long displacement) { }
    private record MachineContext(Set<Address> blockStarts, Set<String> savedRegisters) { }
    private record BackwardState(Address address, int discardWords, List<Value> arguments,
        int depth) { }
    private record RegisterState(Address address, String register, int depth) { }
    private record RegisterValues(boolean complete, List<Value> values) { }
    private record StackShape(boolean valid, int wordCount,
        Map<Integer, Integer> wordIndexByOrdinal) { }
    private record DirectSite(Instruction instruction, Function called, List<Key> keys,
        StackShape shape) { }
    private record ArgumentPaths(boolean complete, List<List<Value>> arguments) { }
    private record MachineAbi(String convention, String returnType, int argumentCount,
        String parameterTypes) {
        String key() {
            return convention + ";" + returnType + ";" + argumentCount + ";" + parameterTypes;
        }
    }
    private record Row(boolean apply, String functionAddress, String expectedFunction,
        int ordinal, String expectedName, String expectedStorage, String expectedType,
        String expectedSource, String expectedComment, String definitionPath,
        String convention, String returnType, int argumentCount, String parameterTypes,
        String targetAddresses, String targetSites, String nullSites, String unknownSites,
        String indirectSites, String confidence, String evidence) { }
}
