// Propagate conservative parameter/return types and parameter names across direct calls.
// Read-only: writes prototype_proposals.tsv and prototype_summary.txt.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Analyze Prototypes

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.HashMap;
import java.util.HashSet;
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
import ghidra.program.model.data.AbstractFloatDataType;
import ghidra.program.model.data.AbstractIntegerDataType;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.Enum;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.TypeDef;
import ghidra.program.model.data.Undefined;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.FunctionTag;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.SourceType;

public class STPrototypeAnalyzer extends GhidraScript {
    private static final Pattern MEMORY = Pattern.compile(
        "^\\[([A-Z][A-Z0-9]{1,3})(?:([+-])(0X[0-9A-F]+|[0-9]+))?\\]$");
    private static final Pattern REGISTER = Pattern.compile("^[A-Z][A-Z0-9]{1,3}$");
    private static final Pattern GENERIC_PARAMETER = Pattern.compile("(?i)(?:param|arg)_?[0-9]+");
    private static final Pattern APPLIED_TARGET = Pattern.compile(
        "\\[(?:STPrototype|STPrototypeRepair)Applier\\] Propagated " +
        "(return|parameter(?: ([0-9]+))?)\\.");
    private static final String TAG = "RECOVERED_PROTOTYPE";
    private static final int MAX_TYPE_PROPAGATION_PASSES = 8;

    private final Map<TargetKey, Evidence> evidence = new TreeMap<>();
    private final Map<TargetKey, Set<TargetKey>> boundaryEdges = new TreeMap<>();
    private final List<CallSiteAudit> callSiteAudits = new ArrayList<>();
    private Map<TargetKey, String> inferredSeeds = Map.of();
    private DataTypeManager dataTypes;
    private int reverseReturnEvidence;
    private int sccComponents, sccTargets;

    @Override
    protected void run() throws Exception {
        // Read-only script: do not leave GhidraScript's implicit transaction around runScript().
        end(true);
        if (currentProgram == null) { printerr("Open the analyzed ST program first."); return; }
        File selected = outputDirectory(); if (selected == null) return;
        Path directory = programDirectory(selected); Files.createDirectories(directory);
        dataTypes = currentProgram.getDataTypeManager();
        int functionsSeen = 0, callSites = 0, propagationPasses = 0;
        for (int pass = 1; pass <= MAX_TYPE_PROPAGATION_PASSES; pass++) {
            evidence.clear();
            boundaryEdges.clear();
            callSiteAudits.clear();
            reverseReturnEvidence = 0;
            sccComponents = 0;
            sccTargets = 0;
            ScanCounts counts = scanAllFunctions();
            functionsSeen = counts.functions;
            callSites = counts.callSites;
            addNarrowRawStorageFallbacks();
            addStronglyConnectedBoundaryEvidence();
            Map<TargetKey, String> nextSeeds = qualifiedInferredSeeds();
            propagationPasses = pass;
            if (nextSeeds.equals(inferredSeeds)) break;
            inferredSeeds = nextSeeds;
        }
        seedPreviouslyAppliedTargets();
        List<Proposal> proposals = makeProposals();
        writeTsv(directory.resolve("prototype_proposals.tsv"), proposals);
        writeCallSiteAudit(directory.resolve("prototype_callsite_audit.tsv"));
        writeUndefinedBoundaryAudit(
            directory.resolve("prototype_undefined_boundary_audit.tsv"));
        writeSummary(directory.resolve("prototype_summary.txt"), proposals,
            functionsSeen, callSites, propagationPasses);
        println("Prototype analysis complete: " + directory.toAbsolutePath().normalize());
        println("Functions: " + functionsSeen + ", direct calls: " + callSites +
            ", proposals: " + proposals.size() + ", type_apply: " +
            proposals.stream().filter(row -> row.typeApply).count() + ", name_apply: " +
            proposals.stream().filter(row -> row.nameApply).count() + ", repair: " +
            proposals.stream().filter(row -> row.repair).count() +
            ", propagation_passes: " + propagationPasses);
    }

    private ScanCounts scanAllFunctions() throws Exception {
        int functions = 0, calls = 0;
        FunctionIterator iterator = currentProgram.getFunctionManager().getFunctions(true);
        while (iterator.hasNext()) {
            monitor.checkCancelled();
            Function function = iterator.next();
            if (function.isThunk() || function.isExternal() || isLibrary(function)) continue;
            functions++;
            addLocalParameterEvidence(function);
            calls += analyze(function);
        }
        return new ScanCounts(functions, calls);
    }

    /**
     * Use a parameter's own machine-code loads as a strong signedness source.
     * This covers leaf/wrapper boundaries which have only one direct caller:
     * MOVSX/MOVZX plus the already recovered retained width is sufficient proof.
     */
    private void addLocalParameterEvidence(Function function) {
        Map<Long, List<Parameter>> byFrameOffset = new HashMap<>();
        for (Parameter parameter : explicitParameters(function)) {
            if (!parameter.hasStackStorage() ||
                    protectedSource(parameter.getSource()) ||
                    !Undefined.isUndefined(unwrap(parameter.getFormalDataType()))) continue;
            int width = effectiveLength(parameter.getFormalDataType());
            if (width < 1 || width > 4) continue;
            for (long offset : parameterFrameOffsets(function, parameter))
                byFrameOffset.computeIfAbsent(offset, ignored -> new ArrayList<>())
                    .add(parameter);
        }
        if (byFrameOffset.isEmpty()) return;

        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            String[] operands =
                splitOperands(instruction.toString().toUpperCase(Locale.ROOT));
            for (int operandIndex = 0; operandIndex < operands.length; operandIndex++) {
                MemoryExpr memory = memoryExpr(operands[operandIndex]);
                if (memory == null || !"EBP".equals(memory.register)) continue;
                List<Parameter> parameters = byFrameOffset.get(memory.displacement);
                if (parameters == null) continue;
                for (Parameter parameter : parameters) {
                    int width = effectiveLength(parameter.getFormalDataType());
                    String proposed = "";
                    if (operandIndex == 1 && "MOVSX".equals(mnemonic))
                        proposed = integerType(width, true);
                    else if (operandIndex == 1 && "MOVZX".equals(mnemonic))
                        proposed = integerType(width, false);
                    else if (width == 4 && operandIndex > 0 &&
                            Set.of("FLD", "FADD", "FSUB", "FSUBR", "FMUL", "FDIV",
                                "FDIVR", "FCOM", "FCOMP").contains(mnemonic))
                        proposed = "/float";
                    else if (width == 4 && operandIndex > 0 &&
                            Set.of("FILD", "FICOM", "FICOMP").contains(mnemonic))
                        proposed = "/int";
                    if (!proposed.isBlank())
                        addParameterEvidence(function, parameter, proposed, "", true,
                            addr(instruction.getAddress()) + " " + mnemonic +
                            " consumes the incoming stack parameter directly");

                    if (width == 4 && operandIndex == 1 && "MOV".equals(mnemonic) &&
                            operands.length >= 2 && isFullRegister(operands[0]))
                        addDwordUseEvidence(function, parameter, instruction,
                            cleanRegister(operands[0]));
                }
            }
        }
    }

    private void addDwordUseEvidence(Function function, Parameter parameter,
            Instruction load, String loadedRegister) {
        if (loadedRegister == null) return;
        Set<String> aliases = new HashSet<>();
        aliases.add(loadedRegister);
        Instruction cursor = currentProgram.getListing()
            .getInstructionAfter(load.getAddress());
        for (int step = 0; step < 16 && cursor != null &&
                function.getBody().contains(cursor.getAddress()); step++) {
            String mnemonic = cursor.getMnemonicString().toUpperCase(Locale.ROOT);
            String[] operands =
                splitOperands(cursor.toString().toUpperCase(Locale.ROOT));
            String proposed = "";

            if (Set.of("CMP", "TEST").contains(mnemonic) &&
                    operandsUseAlias(operands, aliases)) {
                String jump = followingConditionalJump(function, cursor);
                if (isSignedJump(jump)) proposed = "/int";
                else if ("CMP".equals(mnemonic) && isUnsignedJump(jump))
                    proposed = "/uint";
            }
            if (("SAR".equals(mnemonic) || "IDIV".equals(mnemonic)) &&
                    operandsUseAlias(operands, aliases))
                proposed = "/int";
            else if (("SHR".equals(mnemonic) || "DIV".equals(mnemonic)) &&
                    operandsUseAlias(operands, aliases))
                proposed = "/uint";
            if (proposed.isBlank() && usesAliasAsUnscaledAddress(operands, aliases))
                proposed = "pointer:/void";
            if (!proposed.isBlank())
                addParameterEvidence(function, parameter, proposed, "", true,
                    addr(cursor.getAddress()) + " " + cursor +
                    " classifies dword parameter loaded at " + addr(load.getAddress()));

            String destination = operands.length == 0 ? null :
                cleanRegister(operands[0]);
            if ("MOV".equals(mnemonic) && destination != null &&
                    isFullRegister(operands[0]) && operands.length >= 2) {
                String source = cleanRegister(operands[1]);
                if (source != null && aliases.contains(source)) aliases.add(destination);
                else aliases.remove(destination);
            }
            else if (destination != null && writesRegister(mnemonic))
                aliases.remove(destination);

            if ("CALL".equals(mnemonic) ||
                    cursor.getFlowType().isJump() &&
                        !cursor.getFlowType().isConditional() ||
                    cursor.getFlowType().isTerminal() || aliases.isEmpty()) return;
            cursor = currentProgram.getListing().getInstructionAfter(cursor.getAddress());
        }
    }

    private boolean operandsUseAlias(String[] operands, Set<String> aliases) {
        for (String operand : operands) {
            String register = cleanRegister(operand);
            if (register != null && aliases.contains(register)) return true;
        }
        return false;
    }

    private boolean usesAliasAsUnscaledAddress(String[] operands, Set<String> aliases) {
        for (String operand : operands) {
            int open = operand.indexOf('['), close = operand.lastIndexOf(']');
            if (open < 0 || close <= open) continue;
            String expression = operand.substring(open + 1, close)
                .toUpperCase(Locale.ROOT).replace(" ", "");
            for (String alias : aliases) {
                if (Pattern.compile("(?:^|[+\\-])" + Pattern.quote(alias) +
                        "(?![A-Z0-9_*])").matcher(expression).find())
                    return true;
            }
        }
        return false;
    }

    private String followingConditionalJump(Function function, Instruction comparison) {
        Instruction next = currentProgram.getListing()
            .getInstructionAfter(comparison.getAddress());
        if (next == null || !function.getBody().contains(next.getAddress())) return "";
        String jump = next.getMnemonicString().toUpperCase(Locale.ROOT);
        return jump.startsWith("J") ? jump : "";
    }

    private boolean isSignedJump(String jump) {
        return Set.of("JL", "JLE", "JG", "JGE", "JNGE", "JNG", "JNLE", "JNL",
            "JS", "JNS").contains(jump);
    }

    private boolean isUnsignedJump(String jump) {
        return Set.of("JB", "JBE", "JA", "JAE", "JNAE", "JNA", "JNBE", "JNB",
            "JC", "JNC").contains(jump);
    }

    /**
     * A retained one- or two-byte value which is only copied as raw bits can be
     * represented losslessly as byte/ushort even when signedness is unobservable.
     * Wider undefined4 values are deliberately excluded: they may be pointers,
     * floats, handles, enums, or integers.
     */
    private void addNarrowRawStorageFallbacks() throws Exception {
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            monitor.checkCancelled();
            Function function = functions.next();
            if (function.isThunk() || function.isExternal() || isLibrary(function)) continue;
            for (Parameter parameter : explicitParameters(function)) {
                DataType current = unwrap(parameter.getFormalDataType());
                if (!parameter.hasStackStorage() || protectedSource(parameter.getSource()) ||
                        !Undefined.isUndefined(current)) continue;
                int width = effectiveLength(current);
                if (width != 1 && width != 2) continue;
                TargetKey key = new TargetKey(function.getEntryPoint(), "parameter",
                    parameter.getOrdinal());
                Evidence existing = evidence.get(key);
                if (existing != null && !existing.types.isEmpty()) continue;
                String machineEvidence = rawNarrowStorageEvidence(function, parameter, width);
                if (machineEvidence.isBlank()) continue;
                addParameterEvidence(function, parameter,
                    width == 1 ? "/byte" : "/ushort", "", true, machineEvidence);
            }
        }
    }

    private String rawNarrowStorageEvidence(Function function, Parameter parameter,
            int expectedWidth) {
        Set<Long> offsets = parameterFrameOffsets(function, parameter);
        int reads = 0;
        List<String> sites = new ArrayList<>();
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            String[] operands =
                splitOperands(instruction.toString().toUpperCase(Locale.ROOT));
            for (int index = 0; index < operands.length; index++) {
                MemoryExpr memory = memoryExpr(operands[index]);
                if (memory == null || !"EBP".equals(memory.register) ||
                        !offsets.contains(memory.displacement)) continue;
                boolean write = index == 0 && writesFirstOperand(mnemonic);
                if (write) {
                    if (reads > 0) return "raw retained-width parameter lifetime: width=" +
                        expectedWidth + ", reads=" + reads + ", sites=" +
                        String.join(" | ", sites);
                    return "";
                }
                int width = memoryOperandWidth(operands[index]);
                if (width != expectedWidth || "LEA".equals(mnemonic)) return "";
                reads++;
                if (sites.size() < 8)
                    sites.add(addr(instruction.getAddress()) + " " + instruction);
            }
        }
        return reads == 0 ? "" : "raw retained-width parameter lifetime: width=" +
            expectedWidth + ", reads=" + reads + ", sites=" + String.join(" | ", sites);
    }

    private Set<Long> parameterFrameOffsets(Function function, Parameter wanted) {
        Set<Long> result = new HashSet<>();
        result.add((long)wanted.getStackOffset() +
            currentProgram.getDefaultPointerSize());
        long offset = currentProgram.getDefaultPointerSize() * 2L;
        for (Parameter parameter : explicitParameters(function)) {
            if (!parameter.hasStackStorage()) continue;
            if (parameter.getOrdinal() == wanted.getOrdinal()) {
                result.add(offset);
                break;
            }
            int length = Math.max(currentProgram.getDefaultPointerSize(),
                effectiveLength(parameter.getFormalDataType()));
            offset += (length + currentProgram.getDefaultPointerSize() - 1L) /
                currentProgram.getDefaultPointerSize() *
                currentProgram.getDefaultPointerSize();
        }
        return result;
    }

    private int memoryOperandWidth(String operand) {
        String value = operand == null ? "" : operand.toUpperCase(Locale.ROOT);
        if (value.contains("BYTE PTR")) return 1;
        if (value.contains("WORD PTR") && !value.contains("DWORD PTR") &&
                !value.contains("QWORD PTR")) return 2;
        if (value.contains("DWORD PTR")) return 4;
        if (value.contains("QWORD PTR")) return 8;
        return 0;
    }

    private boolean writesFirstOperand(String mnemonic) {
        return Set.of("MOV", "MOVSX", "MOVZX", "LEA", "POP", "XOR", "SUB",
            "SBB", "ADD", "ADC", "AND", "OR", "IMUL", "SHL", "SHR", "SAR",
            "SAL", "INC", "DEC", "NEG", "NOT").contains(mnemonic);
    }

    private Map<TargetKey, String> qualifiedInferredSeeds() {
        Map<TargetKey, String> result = new TreeMap<>();
        for (Map.Entry<TargetKey, Evidence> entry : evidence.entrySet()) {
            TargetKey key = entry.getKey();
            Evidence found = entry.getValue();
            String candidate = selectedType(found);
            if (candidate.isBlank()) continue;
            Function function = currentProgram.getFunctionManager()
                .getFunctionAt(key.address);
            if (function == null) continue;
            Parameter target = "return".equals(key.kind) ? function.getReturn() :
                explicitParameter(function, key.ordinal);
            if (target == null || typeLength(candidate) !=
                    effectiveLength(target.getFormalDataType())) continue;
            int count = found.types.getOrDefault(candidate, 0);
            int strongForType = found.strongTypeSites
                .getOrDefault(candidate, Set.of()).size();
            boolean enough = "return".equals(key.kind) ?
                strongForType > 0 :
                strongForType > 0 || count >= 2;
            if (enough) result.put(key, candidate);
        }
        return result;
    }

    private int analyze(Function caller) {
        Map<String, Value> registers = new HashMap<>();
        Map<Long, Value> stackParameters = seedParameters(caller);
        Map<String, Value> stackSpills = new HashMap<>();
        seedThis(caller, registers);
        Map<String, Value> stableRegisters = stableThisAliases(caller);
        registers.putAll(stableRegisters);
        List<Value> pushes = new ArrayList<>();
        Set<Address> blockStarts = basicBlockStarts(caller);
        boolean stackStateComplete = true;
        boolean wrapper = caller.getBody().getNumAddresses() <= 64 && directCalls(caller).size() == 1;
        int calls = 0;
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(caller.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            if (!instruction.getAddress().equals(caller.getEntryPoint()) &&
                    blockStarts.contains(instruction.getAddress())) {
                // This intentionally does not merge register values from predecessor blocks.
                // A missing proposal is preferable to carrying an EAX/ECX value through an
                // unrelated branch and manufacturing a false prototype.
                registers.clear();
                registers.putAll(stableRegisters);
                stackSpills.entrySet().removeIf(entry -> !entry.getValue().trusted);
                pushes.clear();
                stackStateComplete = false;
            }
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            String[] operands = splitOperands(instruction.toString().toUpperCase(Locale.ROOT));
            if ("PUSH".equals(mnemonic)) {
                pushes.add(sourceValue(instruction, 0, operands.length == 0 ? "" : operands[0],
                    registers, stackParameters, stackSpills, false));
                continue;
            }
            if ("POP".equals(mnemonic)) {
                if (!pushes.isEmpty()) pushes.remove(pushes.size() - 1);
                updateRegisters(instruction, mnemonic, operands, registers, stackParameters,
                    stackSpills);
                continue;
            }
            if ("ADD".equals(mnemonic) && operands.length >= 2 &&
                    "ESP".equals(cleanRegister(operands[0]))) {
                Long bytes = immediate(operands[1]);
                if (bytes != null && bytes > 0 &&
                        bytes % currentProgram.getDefaultPointerSize() == 0) {
                    long values = bytes / currentProgram.getDefaultPointerSize();
                    while (values-- > 0 && !pushes.isEmpty()) pushes.remove(pushes.size() - 1);
                }
            }
            if ("CALL".equals(mnemonic)) {
                Function direct = directCalledFunction(instruction);
                Function called = resolveThunk(direct);
                if (called != null) {
                    calls++;
                    auditCallSite(caller, instruction, direct, called, pushes, registers,
                        stackStateComplete);
                    propagateCall(caller, called, registers.get("ECX"), pushes, registers,
                        instruction.getAddress(), wrapper);
                    String returnedType = inferredSeeds.getOrDefault(
                        new TargetKey(called.getEntryPoint(), "return", -1), "");
                    boolean inferredReturn = !returnedType.isBlank();
                    if (returnedType.isBlank() &&
                            !scriptAppliedTarget(called, "return", -1))
                        returnedType = meaningfulType(called.getReturnType());
                    String returnedName = producedName(called);
                    registers.put("EAX", new Value(-1, returnedType, returnedName,
                        inferredReturn || trustedReturn(called),
                        "return of " + called.getName(true), called));
                }
                else registers.remove("EAX");
                registers.remove("ECX"); registers.remove("EDX");
                if (called == null) {
                    // An unresolved indirect call can use either caller or callee cleanup.
                    // Retaining anything across it would manufacture later arguments.
                    pushes.clear();
                    stackStateComplete = false;
                }
                else consumeCalleePurge(called, pushes);
                continue;
            }
            if ("RET".equals(mnemonic)) {
                Value returned = registers.get("EAX");
                if (returned != null) {
                    if (wrapper && !returned.type.isBlank())
                        addReturnEvidence(caller, returned, instruction.getAddress(), wrapper);
                    if (returned.producer != null && !returned.producer.equals(caller) &&
                            !scriptAppliedTarget(caller, "return", -1)) {
                        if (wrapper)
                            addBoundaryEdge(
                                new TargetKey(returned.producer.getEntryPoint(),
                                    "return", -1),
                                new TargetKey(caller.getEntryPoint(),
                                    "return", -1));
                        String callerType = meaningfulType(caller.getReturnType());
                        boolean trusted = trustedReturn(caller);
                        if (trusted || wrapper)
                            addProducedReturnEvidence(returned.producer, callerType, trusted,
                                instruction.getAddress(), "forwarded through return of " +
                                caller.getName(true));
                    }
                }
                pushes.clear();
                continue;
            }
            if (instruction.getFlowType().isJump()) pushes.clear();
            if ("MOV".equals(mnemonic) && operands.length >= 2)
                observeProducedStore(instruction, operands, registers);
            updateRegisters(instruction, mnemonic, operands, registers, stackParameters,
                stackSpills);
            if ("MOV".equals(mnemonic) && operands.length >= 2 &&
                    "EBP".equals(cleanRegister(operands[0])) &&
                    "ESP".equals(cleanRegister(operands[1]))) {
                pushes.clear();
                stackStateComplete = true;
            }
        }
        return calls;
    }

    private void propagateCall(Function caller, Function called, Value receiver,
            List<Value> pushes, Map<String, Value> registers, Address site, boolean wrapper) {
        List<Parameter> stackTargets = stackParameters(called);
        // Propagation remains stricter than the audit: a suffix behind saved-register or
        // temporary prefix pushes is useful diagnostic evidence, but is not safe enough to
        // mutate prototypes automatically.
        if (stackTargets.size() == pushes.size()) {
            for (int index = 0; index < stackTargets.size(); index++) {
                Parameter target = stackTargets.get(index);
                Value value = pushes.get(pushes.size() - 1 - index);
                propagateArgument(caller, called, target, value, site, wrapper);
            }
        }
        for (Parameter target : registerParameters(called)) {
            if (target.getRegister() == null) continue;
            Value value = registers.get(canonicalRegister(target.getRegister().getName()));
            propagateArgument(caller, called, target, value, site, wrapper);
        }
        if ("__thiscall".equals(called.getCallingConventionName()) && receiver != null) {
            String ownerType = ownerTypePath(called);
            if (receiver.parameterOrdinal >= 0) {
                Parameter source = explicitParameter(caller, receiver.parameterOrdinal);
                if (source != null && !ownerType.isBlank()) addParameterEvidence(caller, source,
                    "pointer:" + ownerType, receiver.name, true,
                    addr(caller.getEntryPoint()) + " parameter used as this of " +
                    called.getName(true) + " @ " + addr(site));
            }
            if (receiver.producer != null && !ownerType.isBlank())
                addProducedReturnEvidence(receiver.producer, "pointer:" + ownerType, true,
                    site, "used as this of " + called.getName(true));
        }
    }

    private void propagateArgument(Function caller, Function called, Parameter target,
            Value value, Address site, boolean wrapper) {
        if (value == null) return;
        String siteText = addr(caller.getEntryPoint()) + " -> " +
            addr(called.getEntryPoint()) + " @ " + addr(site);
        String argumentType = argumentType(target, value);
        if (!argumentType.isBlank()) addParameterEvidence(called, target,
            argumentType, value.name, value.trusted, siteText + "; " + value.evidence);
        if (value.producer != null && trustedProducerTarget(called, target)) {
            addProducedReturnEvidence(value.producer,
                meaningfulType(target.getDataType()), true, site,
                "used as parameter " + target.getOrdinal() + " of " + called.getName(true));
        }
        if (value.parameterOrdinal < 0) return;
        Parameter source = explicitParameter(caller, value.parameterOrdinal);
        if (source == null) return;
        if (value.extension == Extension.NONE && !value.literal &&
                effectiveLength(source.getFormalDataType()) ==
                    effectiveLength(target.getFormalDataType()))
            addBoundaryEdge(
                new TargetKey(caller.getEntryPoint(), "parameter",
                    source.getOrdinal()),
                new TargetKey(called.getEntryPoint(), "parameter",
                    target.getOrdinal()));
        String inferredTarget = inferredSeeds.getOrDefault(
            new TargetKey(called.getEntryPoint(), "parameter", target.getOrdinal()), "");
        String type = !inferredTarget.isBlank() ? inferredTarget :
            trustedParameter(called, target) ?
                meaningfulType(target.getDataType()) : "";
        String name = trustedParameterName(target) ? target.getName() : "";
        // A callee which keeps only a byte/word cannot establish that the caller's
        // wider source parameter had the same narrow type.
        if (effectiveLength(source.getFormalDataType()) !=
                effectiveLength(target.getFormalDataType())) type = "";
        if (!type.isBlank() || !name.isBlank()) addParameterEvidence(caller,
            source, type, name, wrapper || protectedSource(target.getSource()) ||
                !inferredTarget.isBlank() ||
                trustedNamedLibraryParameter(called, target), siteText);
    }

    private void addParameterEvidence(Function function, Parameter parameter, String type,
            String name, boolean strong, String site) {
        if (parameter.isAutoParameter()) return;
        TargetKey key = new TargetKey(function.getEntryPoint(), "parameter",
            parameter.getOrdinal());
        Evidence value = evidence.computeIfAbsent(key, ignored -> new Evidence());
        if (!type.isBlank()) {
            Set<String> typeSites = value.typeSites.computeIfAbsent(type,
                ignored -> new TreeSet<>());
            if (typeSites.add(site)) value.types.put(type, typeSites.size());
            if (strong)
                value.strongTypeSites.computeIfAbsent(type,
                    ignored -> new TreeSet<>()).add(site);
        }
        name = cleanParameterName(name);
        if (!name.isBlank()) value.names.merge(name, 1, Integer::sum);
        if (strong && value.strongSites.add(site))
            value.strongCount = value.strongSites.size();
        value.sites.add(site);
    }

    private void addReturnEvidence(Function function, Value returned, Address site,
            boolean wrapper) {
        if (returned.type.isBlank()) return;
        TargetKey key = new TargetKey(function.getEntryPoint(), "return", -1);
        Evidence value = evidence.computeIfAbsent(key, ignored -> new Evidence());
        String siteText = addr(function.getEntryPoint()) + " returns " + returned.evidence +
            " @ " + addr(site);
        Set<String> typeSites = value.typeSites.computeIfAbsent(returned.type,
            ignored -> new TreeSet<>());
        if (typeSites.add(siteText)) value.types.put(returned.type, typeSites.size());
        if (returned.trusted || wrapper)
            value.strongTypeSites.computeIfAbsent(returned.type,
                ignored -> new TreeSet<>()).add(siteText);
        if ((returned.trusted || wrapper) && value.strongSites.add(siteText))
            value.strongCount = value.strongSites.size();
        value.sites.add(siteText);
    }

    private void addProducedReturnEvidence(Function producer, String type, boolean strong,
            Address site, String relation) {
        if (producer == null || producer.isExternal() || isLibrary(producer) || type.isBlank()) return;
        addReturnEvidence(producer, new Value(-1, type, "", strong, relation), site, false);
        reverseReturnEvidence++;
    }

    private void addBoundaryEdge(TargetKey source, TargetKey target) {
        if (source == null || target == null) return;
        boundaryEdges.computeIfAbsent(source, ignored -> new TreeSet<>())
            .add(target);
        boundaryEdges.computeIfAbsent(target, ignored -> new TreeSet<>());
    }

    /**
     * Iterative call propagation handles ordinary chains, but a mutually
     * recursive wrapper family can otherwise spend all of its evidence
     * validating itself. Collapse only true strongly-connected boundary
     * components. A component is typed when it has one unambiguous external
     * anchor: a protected/semantic current boundary or a type already qualified
     * by non-SCC machine/call evidence in an earlier pass. Generic members of an
     * unanchored cycle never bootstrap one another.
     */
    private void addStronglyConnectedBoundaryEvidence() {
        Tarjan tarjan = new Tarjan(boundaryEdges);
        for (List<TargetKey> component : tarjan.components()) {
            if (component.size() < 2) continue;
            Set<String> anchors = new TreeSet<>();
            for (TargetKey key : component) {
                String seed = authoritativeBoundarySeed(key);
                if (!seed.isBlank()) anchors.add(seed);
                String inferred = inferredSeeds.getOrDefault(key, "");
                if (!inferred.isBlank()) anchors.add(inferred);
            }
            if (anchors.size() != 1) continue;
            String type = anchors.iterator().next();
            int width = typeLength(type);
            if (width <= 0) continue;
            boolean compatible = true;
            for (TargetKey key : component) {
                Parameter target = boundaryTarget(key);
                if (target == null ||
                        effectiveLength(target.getFormalDataType()) != width) {
                    compatible = false;
                    break;
                }
            }
            if (!compatible) continue;
            sccComponents++;
            String identity = component.stream()
                .map(this::boundaryIdentity)
                .reduce((left, right) -> left + "," + right).orElse("");
            String site = "SCC boundary component [" + identity +
                "] anchored as " + type;
            for (TargetKey key : component) {
                Evidence value = evidence.computeIfAbsent(key,
                    ignored -> new Evidence());
                Set<String> sites = value.typeSites.computeIfAbsent(type,
                    ignored -> new TreeSet<>());
                if (sites.add(site)) value.types.put(type, sites.size());
                value.strongTypeSites.computeIfAbsent(type,
                    ignored -> new TreeSet<>()).add(site);
                if (value.strongSites.add(site))
                    value.strongCount = value.strongSites.size();
                value.sites.add(site);
                sccTargets++;
            }
        }
    }

    private String authoritativeBoundarySeed(TargetKey key) {
        Function function = currentProgram.getFunctionManager()
            .getFunctionAt(key.address);
        Parameter target = boundaryTarget(key);
        if (function == null || target == null) return "";
        boolean authoritative = protectedSource(target.getSource()) ||
            semanticType(target.getFormalDataType()) ||
            abiMachineTarget(function, key.kind, key.ordinal) ||
            ("parameter".equals(key.kind) &&
                trustedNamedLibraryParameter(function, target));
        return authoritative ? meaningfulType(target.getFormalDataType()) : "";
    }

    private Parameter boundaryTarget(TargetKey key) {
        Function function = currentProgram.getFunctionManager()
            .getFunctionAt(key.address);
        if (function == null) return null;
        return "return".equals(key.kind) ? function.getReturn() :
            explicitParameter(function, key.ordinal);
    }

    private String boundaryIdentity(TargetKey key) {
        return addr(key.address) + ":" + key.kind +
            ("parameter".equals(key.kind) ? ":" + key.ordinal : "");
    }

    private void observeProducedStore(Instruction instruction, String[] operands,
            Map<String, Value> registers) {
        String sourceRegister = cleanRegister(operands[1]);
        if (sourceRegister == null || !isFullRegister(operands[1])) return;
        Value source = registers.get(sourceRegister);
        if (source == null || source.producer == null) return;
        StoreType target = storedType(instruction, operands[0], registers);
        if (target == null || target.type.isBlank()) return;
        addProducedReturnEvidence(source.producer, target.type, target.strong,
            instruction.getAddress(), "stored into " + target.evidence);
    }

    private StoreType storedType(Instruction instruction, String operand,
            Map<String, Value> registers) {
        if (!operand.contains("[") || !operand.contains("]")) return null;
        for (Reference reference : instruction.getReferencesFrom()) {
            if (reference.getOperandIndex() != 0) continue;
            Data data = currentProgram.getListing().getDefinedDataContaining(reference.getToAddress());
            if (data == null) continue;
            String type = meaningfulType(data.getDataType());
            if (!type.isBlank()) return new StoreType(type, semanticType(data.getDataType()),
                "global " + addr(data.getMinAddress()));
        }
        MemoryExpr memory = memoryExpr(operand);
        Value base = memory == null ? null : registers.get(memory.register);
        if (base == null || !base.type.startsWith("pointer:") || memory.displacement < 0 ||
                memory.displacement > Integer.MAX_VALUE) return null;
        DataType owner = dataTypes.getDataType(base.type.substring("pointer:".length()));
        if (!(owner instanceof Structure structure) || memory.displacement >= structure.getLength())
            return null;
        ghidra.program.model.data.DataTypeComponent component =
            structure.getComponentContaining((int)memory.displacement);
        if (component == null) return null;
        String type = meaningfulType(component.getDataType());
        return type.isBlank() ? null : new StoreType(type, true,
            structure.getPathName() + "+0x" + Long.toHexString(memory.displacement));
    }

    private List<Proposal> makeProposals() {
        List<Proposal> result = new ArrayList<>();
        for (Map.Entry<TargetKey, Evidence> entry : evidence.entrySet()) {
            TargetKey key = entry.getKey(); Evidence ev = entry.getValue();
            Function function = currentProgram.getFunctionManager().getFunctionAt(key.address);
            if (function == null) continue;
            Parameter target = "return".equals(key.kind) ? function.getReturn() :
                explicitParameter(function, key.ordinal);
            if (target == null) continue;
            String proposedType = selectedType(ev);
            String proposedName = "parameter".equals(key.kind) ? unique(ev.names) : "";
            String currentType = typeSpecification(target.getDataType());
            String currentName = target.getName() == null ? "" : target.getName();
            boolean manual = protectedSource(target.getSource());
            boolean scriptOwned = scriptAppliedTarget(function, key.kind, key.ordinal);
            boolean abiMachineTarget = abiMachineTarget(function, key.kind, key.ordinal);
            boolean typeConflict = ev.types.size() > 1 && proposedType.isBlank();
            boolean weakTypeAlternatives = ev.types.size() > 1 && !proposedType.isBlank();
            boolean nameConflict = ev.names.size() > 1;
            int typeCount = proposedType.isBlank() ? 0 : ev.types.get(proposedType);
            int nameCount = proposedName.isBlank() ? 0 : ev.names.get(proposedName);
            boolean compatible = !proposedType.isBlank() && typeLength(proposedType) ==
                effectiveLength(target.getDataType());
            boolean safeScriptRepair = !scriptOwned ||
                scriptRepairImproves(currentType, proposedType);
            boolean typeChange = compatible && !sameType(currentType, proposedType) &&
                (safeToRefine(target, proposedType) || scriptOwned) && safeScriptRepair;
            int strongTypeCount = proposedType.isBlank() ? 0 :
                ev.strongTypeSites.getOrDefault(proposedType, Set.of()).size();
            boolean enoughTypeEvidence = "return".equals(key.kind) ?
                strongTypeCount > 0 : strongTypeCount > 0 || typeCount >= 2;
            boolean typeApply = !manual && !abiMachineTarget && !typeConflict && typeChange &&
                enoughTypeEvidence;
            boolean invalidThisName = "parameter".equals(key.kind) &&
                "this".equals(currentName) && scriptOwned;
            if (invalidThisName && proposedName.isBlank())
                proposedName = genericParameterName(function, target);
            boolean genericName = GENERIC_PARAMETER.matcher(currentName).matches() ||
                invalidThisName;
            boolean duplicateName = !proposedName.isBlank() &&
                !uniqueParameterName(function, key, target, proposedName);
            boolean nameApply = "parameter".equals(key.kind) && !manual && !nameConflict &&
                genericName && !proposedName.isBlank() && !duplicateName &&
                (invalidThisName || ev.strongCount > 0 && nameCount >= 1 || nameCount >= 2);
            if (!typeChange && !nameApply) continue;
            String confidence = typeConflict || nameConflict ? "conflict" :
                typeApply || nameApply ? "high" : "review";
            List<String> reasons = new ArrayList<>();
            reasons.add("type_evidence=" + ev.types);
            reasons.add("name_evidence=" + ev.names);
            reasons.add("strong_evidence=" + ev.strongCount);
            if (!compatible && !proposedType.isBlank()) reasons.add("storage_width_mismatch");
            if (manual) reasons.add("manual_target_preserved");
            if (abiMachineTarget) reasons.add("machine_abi_target_preserved");
            if (scriptOwned) reasons.add("script_target_repair");
            if (scriptOwned && !safeScriptRepair)
                reasons.add("script_repair_would_lose_semantic_type");
            if (invalidThisName) reasons.add("explicit_parameter_named_this");
            if (duplicateName) reasons.add("duplicate_parameter_name");
            if (typeConflict) reasons.add("type_conflict");
            if (weakTypeAlternatives)
                reasons.add("strong_type_evidence_overrides_weak_alternatives");
            if (nameConflict) reasons.add("name_conflict");
            result.add(new Proposal(function, target, key.kind, key.ordinal, currentType,
                currentName, proposedType, proposedName, typeApply, nameApply, scriptOwned,
                confidence, String.join("; ", reasons), ev.sites));
        }
        result.sort(Comparator.comparing((Proposal row) -> row.address)
            .thenComparing(row -> row.kind).thenComparingInt(row -> row.ordinal));
        return result;
    }

    private void updateRegisters(Instruction instruction, String mnemonic, String[] operands,
            Map<String, Value> registers, Map<Long, Value> stackParameters,
            Map<String, Value> stackSpills) {
        if (operands.length == 0) return;
        String destination = cleanRegister(operands[0]);
        boolean fullDestination = isFullRegister(operands[0]);
        MemoryExpr destinationMemory = memoryExpr(operands[0]);
        if ("XOR".equals(mnemonic) && destination != null && fullDestination &&
                operands.length >= 2 &&
                destination.equals(cleanRegister(operands[1])) &&
                isFullRegister(operands[1])) {
            registers.put(destination, new Value(-1, "/uint", "", false,
                "zeroed full register at " + addr(instruction.getAddress()), null,
                Extension.UNSIGNED, 0));
            return;
        }
        if ("MOV".equals(mnemonic) && destinationMemory != null && operands.length >= 2 &&
                isStackSpill(destinationMemory)) {
            String key = stackKey(destinationMemory);
            String source = cleanRegister(operands[1]);
            Value value = source != null && isFullRegister(operands[1]) ?
                registers.get(source) : null;
            if (value == null) stackSpills.remove(key);
            else stackSpills.put(key, value);
            return;
        }
        if ("MOV".equals(mnemonic) && destination != null && operands.length >= 2) {
            if (!fullDestination) {
                registers.put(destination, partialScalarValue(instruction, operands,
                    registers, stackParameters, stackSpills));
                return;
            }
            Value value = sourceValue(instruction, 1, operands[1], registers,
                stackParameters, stackSpills, false);
            if (value == null) registers.remove(destination); else registers.put(destination, value);
            return;
        }
        if (("MOVSX".equals(mnemonic) || "MOVZX".equals(mnemonic)) &&
                destination != null && fullDestination && operands.length >= 2) {
            Value source = extensionSourceValue(instruction, operands[1], registers,
                stackParameters, stackSpills);
            int width = operandWidth(operands[1]);
            Extension extension = "MOVSX".equals(mnemonic) ?
                Extension.SIGNED : Extension.UNSIGNED;
            String primitive = integerType(width, extension == Extension.SIGNED);
            if (source == null && primitive.isBlank()) {
                registers.remove(destination);
                return;
            }
            String type = source == null || source.type.isBlank() ? primitive : source.type;
            String name = source == null ? "" : source.name;
            // MOVSX/MOVZX is itself machine-level signedness evidence even when the
            // source field has no recovered semantic type yet.
            boolean trusted = !primitive.isBlank();
            int ordinal = source == null ? -1 : source.parameterOrdinal;
            Function producer = source == null ? null : source.producer;
            String sourceEvidence = source == null || source.evidence.isBlank() ? "" :
                source.evidence + "; ";
            String extensionEvidence = sourceEvidence + mnemonic + " at " +
                addr(instruction.getAddress()) + " establishes " +
                (extension == Extension.SIGNED ? "signed" : "unsigned") +
                " source width " + width;
            Value extended = new Value(ordinal, type, name, trusted, extensionEvidence,
                producer, extension, width);
            registers.put(destination, extended);
            if (producer != null && !primitive.isBlank())
                addProducedReturnEvidence(producer, primitive, true,
                    instruction.getAddress(), extensionEvidence);
            return;
        }
        if ("LEA".equals(mnemonic) && destination != null && operands.length >= 2) {
            if (!fullDestination) { registers.remove(destination); return; }
            Value value = sourceValue(instruction, 1, operands[1], registers,
                stackParameters, stackSpills, true);
            if (value == null) registers.remove(destination); else registers.put(destination, value);
            return;
        }
        if (destination != null && !Set.of("CMP", "TEST", "PUSH", "JMP", "RET")
                .contains(mnemonic)) registers.remove(destination);
    }

    private Value sourceValue(Instruction instruction, int operandIndex, String operand,
            Map<String, Value> registers, Map<Long, Value> stackParameters,
            Map<String, Value> stackSpills, boolean addressOf) {
        String register = cleanRegister(operand);
        if (register != null) return isFullRegister(operand) ? registers.get(register) : null;
        MemoryExpr memory = memoryExpr(operand);
        if (memory != null && "EBP".equals(memory.register)) {
            Value parameter = stackSpills.get(stackKey(memory));
            if (parameter == null) parameter = stackParameters.get(memory.displacement);
            if (parameter == null) return null;
            if (!addressOf) return parameter;
            String pointed = parameter.type.isBlank() || parameter.type.startsWith("pointer:") ?
                "" : "pointer:" + parameter.type;
            return new Value(parameter.parameterOrdinal, pointed, parameter.name,
                parameter.trusted, "address of " + parameter.evidence);
        }
        Value field = typedFieldValue(memory, registers, addressOf);
        if (field != null) return field;
        for (Reference reference : instruction.getReferencesFrom()) {
            if (reference.getOperandIndex() != operandIndex) continue;
            Data data = currentProgram.getListing().getDefinedDataContaining(reference.getToAddress());
            if (data == null) continue;
            if (data.hasStringValue()) return new Value(-1, "pointer:/char", "text",
                true, "string at " + addr(reference.getToAddress()));
            String type = meaningfulType(data.getDataType());
            if (type.isBlank()) continue;
            boolean memoryOperand = operand.contains("[") && operand.contains("]");
            if (addressOf || !memoryOperand) {
                // Nested pointer specifications are intentionally not inferred here.  The
                // proposal format resolves one pointer layer and guessing a T** as T* is
                // worse than emitting no evidence.
                if (type.startsWith("pointer:")) continue;
                type = "pointer:" + type;
            }
            return new Value(-1, type, "", semanticType(data.getDataType()),
                "data at " + addr(data.getMinAddress()));
        }
        Long literal = immediate(operand);
        if (!addressOf && literal != null)
            return Value.literal(literal, addr(instruction.getAddress()));
        return null;
    }

    /**
     * Resolve an exact fixed-offset access through any already typed structure pointer.
     * This is deliberately class- and method-agnostic: a register copied from a typed
     * receiver, parameter, global, or return value is handled identically.  Interior
     * byte pieces are not promoted to the containing field because packed/unaligned
     * accesses need separate proof.
     */
    private Value typedFieldValue(MemoryExpr memory, Map<String, Value> registers,
            boolean addressOf) {
        if (memory == null || memory.displacement < 0 ||
                memory.displacement > Integer.MAX_VALUE) return null;
        Value base = registers.get(memory.register);
        if (base == null || !base.type.startsWith("pointer:")) return null;
        DataType owner = dataTypes.getDataType(base.type.substring("pointer:".length()));
        if (!(owner instanceof Structure structure) ||
                memory.displacement >= structure.getLength()) return null;
        ghidra.program.model.data.DataTypeComponent component =
            structure.getComponentAt((int)memory.displacement);
        if (component == null) return null;
        DataType componentType = component.getDataType();
        String type = meaningfulType(componentType);
        if (type.isBlank()) return null;
        if (addressOf) {
            if (type.startsWith("pointer:")) return null;
            type = "pointer:" + type;
        }
        String fieldName = component.getFieldName() == null ? "" :
            cleanParameterName(component.getFieldName());
        if (fieldName.matches("(?i)(?:field|value|member|unk|unknown)_?[0-9a-f]+"))
            fieldName = "";
        String evidence = structure.getPathName() + "+0x" +
            Long.toHexString(memory.displacement) +
            (fieldName.isBlank() ? "" : " (" + fieldName + ")");
        // A generated primitive field becomes automatic evidence only after at least
        // two independent call sites agree.  Named semantic components remain strong.
        boolean trusted = semanticType(componentType) && base.trusted;
        return new Value(-1, type, fieldName, trusted, evidence);
    }

    private Value extensionSourceValue(Instruction instruction, String operand,
            Map<String, Value> registers, Map<Long, Value> stackParameters,
            Map<String, Value> stackSpills) {
        String register = cleanRegister(operand);
        if (register != null) return registers.get(register);
        return sourceValue(instruction, 1, operand, registers, stackParameters,
            stackSpills, false);
    }

    /**
     * Convert machine extension provenance to the already recovered ABI width of the
     * target.  For example, a sign-extended 16-bit field passed to an undefined1 formal
     * establishes char, not short: the call tells us the source conversion while the
     * callee's formal storage tells us the retained width.
     */
    private String argumentType(Parameter target, Value value) {
        if (target == null || value == null) return "";
        DataType current = target.getFormalDataType();
        DataType unwrapped = unwrap(current);
        int targetWidth = effectiveLength(current);
        if (value.literal) {
            if (!Undefined.isUndefined(unwrapped) || targetWidth >= 4) return "";
            return integerType(targetWidth, value.literalSigned);
        }
        if (value.extension != Extension.NONE &&
                value.sourceWidth > 0 &&
                (Undefined.isUndefined(unwrapped) ||
                 unwrapped instanceof AbstractIntegerDataType)) {
            String converted = integerType(targetWidth,
                value.extension == Extension.SIGNED);
            if (!converted.isBlank()) return converted;
        }
        if (Undefined.isUndefined(unwrapped)) {
            Boolean signed = primitiveSignedness(value.type);
            if (signed != null) {
                String converted = integerType(targetWidth, signed);
                if (!converted.isBlank()) return converted;
            }
        }
        return value.type;
    }

    private Boolean primitiveSignedness(String specification) {
        if (specification == null || specification.isBlank()) return null;
        String value = specification.toLowerCase(Locale.ROOT);
        if (Set.of("/char", "/sbyte", "/short", "/int", "/long", "/longlong")
                .contains(value)) return true;
        if (Set.of("/byte", "/uchar", "/ushort", "/uint", "/ulong", "/ulonglong",
                "/dword", "/word", "/uint1", "/uint2", "/uint4", "/uint8")
                .contains(value)) return false;
        return null;
    }

    private String integerType(int width, boolean signed) {
        return switch (width) {
            case 1 -> signed ? "/char" : "/byte";
            case 2 -> signed ? "/short" : "/ushort";
            case 4 -> signed ? "/int" : "/uint";
            case 8 -> signed ? "/longlong" : "/ulonglong";
            default -> "";
        };
    }

    private int operandWidth(String operand) {
        String value = operand == null ? "" : operand.toUpperCase(Locale.ROOT);
        if (value.contains("BYTE PTR")) return 1;
        if (value.contains("WORD PTR") && !value.contains("DWORD PTR") &&
                !value.contains("QWORD PTR")) return 2;
        if (value.contains("DWORD PTR")) return 4;
        if (value.contains("QWORD PTR")) return 8;
        String register = operand == null ? "" : operand.trim().toUpperCase(Locale.ROOT);
        if (Set.of("AL", "AH", "BL", "BH", "CL", "CH", "DL", "DH").contains(register))
            return 1;
        if (Set.of("AX", "BX", "CX", "DX", "SI", "DI", "BP", "SP").contains(register))
            return 2;
        if (Set.of("EAX", "EBX", "ECX", "EDX", "ESI", "EDI", "EBP", "ESP")
                .contains(register)) return 4;
        return 0;
    }

    private DataType unwrap(DataType type) {
        Set<String> seen = new HashSet<>();
        while (type instanceof TypeDef typedef && seen.add(type.getPathName()))
            type = typedef.getBaseDataType();
        return type;
    }

    private Map<Long, Value> seedParameters(Function function) {
        Map<Long, Value> result = new HashMap<>();
        long frameBias = currentProgram.getDefaultPointerSize();
        for (Parameter parameter : function.getParameters()) {
            if (parameter.isAutoParameter() || !parameter.isStackVariable()) continue;
            boolean trusted = trustedParameter(function, parameter);
            boolean scriptOwned = scriptAppliedTarget(function, "parameter",
                parameter.getOrdinal());
            String type = inferredSeeds.getOrDefault(
                new TargetKey(function.getEntryPoint(), "parameter",
                    parameter.getOrdinal()), "");
            if (!type.isBlank()) trusted = true;
            else type = scriptOwned ? "" : meaningfulType(parameter.getDataType());
            String name = scriptOwned ? "" : trustedParameterName(parameter) ?
                parameter.getName() : "";
            if (scriptOwned) trusted = false;
            result.put((long)parameter.getStackOffset() + frameBias,
                new Value(parameter.getOrdinal(), type, name, trusted,
                    function.getName(true) + " parameter " + parameter.getName()));
        }
        return result;
    }

    private void seedThis(Function function, Map<String, Value> registers) {
        Value receiver = receiverValue(function);
        if (receiver != null) registers.put("ECX", receiver);
    }

    /**
     * Preserve a proven callee-saved copy of incoming this across CFG block resets.
     * Optimized switch functions commonly execute MOV ESI,ECX once in the prologue
     * and use ESI in distant case blocks.  ESI/EDI/EBX are stable under the 32-bit
     * MSVC ABI, but a candidate is accepted only when the whole function writes that
     * register exactly once.
     */
    private Map<String, Value> stableThisAliases(Function function) {
        Value receiver = receiverValue(function);
        if (receiver == null) return Map.of();
        Map<String, Integer> writes = new HashMap<>();
        Set<String> candidates = new HashSet<>();
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        int inspected = 0;
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            String[] operands = splitOperands(instruction.toString().toUpperCase(Locale.ROOT));
            if (operands.length == 0) continue;
            String destination = cleanRegister(operands[0]);
            if (destination != null && isFullRegister(operands[0]) &&
                    writesRegister(mnemonic)) {
                writes.merge(destination, 1, Integer::sum);
                if (inspected < 48 && "MOV".equals(mnemonic) && operands.length >= 2 &&
                        "ECX".equals(cleanRegister(operands[1])) &&
                        Set.of("EBX", "ESI", "EDI").contains(destination))
                    candidates.add(destination);
            }
            inspected++;
        }
        Map<String, Value> result = new HashMap<>();
        for (String candidate : candidates)
            if (writes.getOrDefault(candidate, 0) == 1)
                result.put(candidate, new Value(-1, receiver.type, "this", true,
                    receiver.evidence + "; stable alias " + candidate));
        return result;
    }

    private boolean writesRegister(String mnemonic) {
        return !Set.of("CMP", "TEST", "PUSH", "POP", "JMP", "RET", "CALL", "NOP")
            .contains(mnemonic);
    }

    private Value receiverValue(Function function) {
        if (!"__thiscall".equals(function.getCallingConventionName())) return null;
        String typePath = ownerTypePath(function);
        return typePath.isBlank() ? null :
            new Value(-1, "pointer:" + typePath, "this", true,
                function.getName(true) + " this");
    }

    private Set<Function> directCalls(Function function) {
        Set<Function> result = new HashSet<>();
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            if (!"CALL".equalsIgnoreCase(instruction.getMnemonicString())) continue;
            Function called = calledFunction(instruction); if (called != null) result.add(called);
        }
        return result;
    }

    private Set<Address> basicBlockStarts(Function function) {
        Set<Address> result = new HashSet<>();
        result.add(function.getEntryPoint());
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            if (!instruction.getFlowType().isJump()) continue;
            for (Address flow : instruction.getFlows())
                if (function.getBody().contains(flow)) result.add(flow);
            Address fallThrough = instruction.getFallThrough();
            if (fallThrough != null && function.getBody().contains(fallThrough))
                result.add(fallThrough);
        }
        return result;
    }

    private Function directCalledFunction(Instruction instruction) {
        for (Address flow : instruction.getFlows()) {
            Function function = currentProgram.getFunctionManager().getFunctionAt(flow);
            if (function != null) return function;
        }
        return null;
    }

    private Function calledFunction(Instruction instruction) {
        return resolveThunk(directCalledFunction(instruction));
    }

    private Function resolveThunk(Function function) {
        if (function == null) return null;
        Set<Address> seen = new HashSet<>();
        while (function.isThunk() && seen.add(function.getEntryPoint())) {
            Function target = function.getThunkedFunction(false);
            if (target == null || target.equals(function)) break;
            function = target;
        }
        return function;
    }

    private String thunkChain(Function direct) {
        if (direct == null) return "";
        List<String> chain = new ArrayList<>();
        Set<Address> seen = new HashSet<>();
        Function function = direct;
        while (function != null && seen.add(function.getEntryPoint())) {
            chain.add(addr(function.getEntryPoint()) + " " + function.getName(true));
            if (!function.isThunk()) break;
            Function target = function.getThunkedFunction(false);
            if (target == null || target.equals(function)) break;
            function = target;
        }
        return String.join(" -> ", chain);
    }

    private List<Parameter> stackParameters(Function function) {
        List<Parameter> result = new ArrayList<>();
        for (Parameter parameter : explicitParameters(function))
            if (parameter.isStackVariable()) result.add(parameter);
        return result;
    }

    private List<Parameter> registerParameters(Function function) {
        List<Parameter> result = new ArrayList<>();
        for (Parameter parameter : explicitParameters(function))
            if (parameter.isRegisterVariable()) result.add(parameter);
        return result;
    }

    private List<Parameter> explicitParameters(Function function) {
        List<Parameter> result = new ArrayList<>();
        for (Parameter parameter : function.getParameters())
            if (!parameter.isAutoParameter()) result.add(parameter);
        return result;
    }
    private Parameter explicitParameter(Function function, int ordinal) {
        for (Parameter parameter : function.getParameters())
            if (!parameter.isAutoParameter() && parameter.getOrdinal() == ordinal) return parameter;
        return null;
    }

    private boolean trustedParameter(Function function, Parameter parameter) {
        if (scriptAppliedTarget(function, "parameter", parameter.getOrdinal())) return false;
        return parameter.getSource() == SourceType.USER_DEFINED ||
            parameter.getSource() == SourceType.IMPORTED || semanticType(parameter.getDataType()) ||
            hasTag(function, TAG) ||
            abiMachineTarget(function, "parameter", parameter.getOrdinal()) ||
            trustedNamedLibraryParameter(function, parameter);
    }

    private boolean trustedNamedLibraryParameter(Function function, Parameter parameter) {
        if (!isLibrary(function) || function.getSymbol() == null ||
                !protectedSource(function.getSymbol().getSource())) return false;
        String name = function.getName();
        if (name == null || name.matches("(?i)(?:FUN|SUB|THUNK|LAB)_[0-9A-F]+")) return false;
        return !meaningfulType(parameter.getDataType()).isBlank();
    }
    private boolean trustedParameterName(Parameter parameter) {
        return (parameter.getSource() == SourceType.USER_DEFINED ||
            parameter.getSource() == SourceType.IMPORTED) &&
            !GENERIC_PARAMETER.matcher(parameter.getName()).matches() &&
            !"this".equals(parameter.getName());
    }
    private boolean trustedProducerTarget(Function function, Parameter parameter) {
        if (!trustedParameter(function, parameter)) return false;
        String path = parameter.getDataType().getPathName();
        // Switch recovery deliberately creates provisional enums.  They are useful for
        // arguments and fields, but are not authoritative enough to redefine the return
        // type of the function that happened to produce a switch value.
        return !path.contains("/Recovered/Enums/");
    }
    private boolean trustedReturn(Function function) {
        if (scriptAppliedTarget(function, "return", -1)) return false;
        return function.getSignatureSource() == SourceType.USER_DEFINED ||
            function.getSignatureSource() == SourceType.IMPORTED ||
            semanticType(function.getReturnType()) || hasTag(function, TAG) ||
            abiMachineTarget(function, "return", -1);
    }

    private boolean abiMachineTarget(Function function, String kind, int ordinal) {
        String comment = function == null ? null : function.getComment();
        if (comment == null || comment.isBlank()) return false;
        String target = "[STAbiConsistencyApplier] ";
        for (String repair : List.of("stack_parameter_width",
                "stack_parameter_scalar_role", "pointer_return_element_width",
                "full_eax_return")) {
            if (comment.contains(target + repair + " target=" + kind + ":" +
                    ordinal + ":")) return true;
        }
        return false;
    }

    private String meaningfulType(DataType type) {
        if (type == null || type.getLength() < 1 || Undefined.isUndefined(type)) return "";
        if (type instanceof Pointer pointer) {
            DataType pointed = pointer.getDataType();
            if (pointed == null || Undefined.isUndefined(pointed) || "/void".equals(pointed.getPathName()))
                return "";
            return "pointer:" + pointed.getPathName();
        }
        if ("/void".equals(type.getPathName())) return "";
        if (type instanceof Enum || type instanceof TypeDef || type instanceof Structure ||
                type instanceof AbstractIntegerDataType || type instanceof AbstractFloatDataType)
            return type.getPathName();
        return "";
    }

    private boolean semanticType(DataType type) {
        if (type instanceof Enum || type instanceof TypeDef || type instanceof Structure) return true;
        if (type instanceof Pointer pointer) {
            DataType pointed = pointer.getDataType();
            return pointed != null && !Undefined.isUndefined(pointed) &&
                !"/void".equals(pointed.getPathName());
        }
        return false;
    }

    private void seedPreviouslyAppliedTargets() {
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            Function function = functions.next();
            String comment = function.getComment();
            if (comment == null || comment.isBlank()) continue;
            Matcher matcher = APPLIED_TARGET.matcher(comment);
            while (matcher.find()) {
                String kind = matcher.group(1).startsWith("parameter") ? "parameter" : "return";
                int ordinal = "return".equals(kind) ? -1 : Integer.parseInt(matcher.group(2));
                evidence.computeIfAbsent(new TargetKey(function.getEntryPoint(), kind, ordinal),
                    ignored -> new Evidence());
            }
        }
    }

    private boolean scriptAppliedTarget(Function function, String kind, int ordinal) {
        String comment = function.getComment();
        if (comment == null || comment.isBlank()) return false;
        Matcher matcher = APPLIED_TARGET.matcher(comment);
        while (matcher.find()) {
            String foundKind = matcher.group(1).startsWith("parameter") ? "parameter" : "return";
            int foundOrdinal = "return".equals(foundKind) ? -1 :
                Integer.parseInt(matcher.group(2));
            if (kind.equals(foundKind) && ordinal == foundOrdinal) return true;
        }
        return false;
    }

    private String genericParameterName(Function function, Parameter target) {
        List<Parameter> parameters = explicitParameters(function);
        int index = parameters.indexOf(target);
        return "param_" + (index < 0 ? target.getOrdinal() : index + 1);
    }

    private boolean uniqueParameterName(Function function, TargetKey key, Parameter target,
            String proposed) {
        for (Parameter parameter : explicitParameters(function)) {
            if (parameter.equals(target)) continue;
            String current = parameter.getName() == null ? "" : parameter.getName();
            if (proposed.equals(current)) return false;
        }
        for (Map.Entry<TargetKey, Evidence> entry : evidence.entrySet()) {
            TargetKey other = entry.getKey();
            if (!other.address.equals(key.address) || !"parameter".equals(other.kind) ||
                    other.ordinal == key.ordinal) continue;
            if (proposed.equals(unique(entry.getValue().names))) return false;
        }
        return true;
    }

    private boolean safeToRefine(Parameter target, String proposed) {
        DataType current = target.getDataType();
        if (Undefined.isUndefined(current)) return true;
        if (current instanceof Pointer pointer) {
            DataType pointed = pointer.getDataType();
            if (!proposed.startsWith("pointer:")) return false;
            if (pointed == null || Undefined.isUndefined(pointed) ||
                    "/void".equals(pointed.getPathName())) return true;
            String path = pointed.getPathName();
            return !protectedSource(target.getSource()) &&
                (path.contains("/Recovered/PointerShapes/") ||
                 path.contains("/Recovered/ClassPointees/") ||
                 path.contains("/Recovered/HiddenThis/"));
        }
        return current instanceof AbstractIntegerDataType && semanticSpecification(proposed);
    }

    /**
     * A repair may supersede an earlier generated guess, but it must not turn a recovered
     * aggregate back into a primitive pointer merely because one caller still exposes the
     * old generic prototype.  That formed an endless PrototypeRepair <-> PointerShape cycle.
     */
    private boolean scriptRepairImproves(String current, String proposed) {
        if (current.equals(proposed)) return false;
        int currentRank = semanticRank(current);
        int proposedRank = semanticRank(proposed);
        if (proposedRank != currentRank) return proposedRank > currentRank;
        // Two unrelated generated shapes or two distinct named semantic types are evidence
        // for review, not permission for an automatic lateral replacement.
        return false;
    }

    private int semanticRank(String specification) {
        if (specification == null || specification.isBlank()) return 0;
        String path = specification.startsWith("pointer:") ?
            specification.substring("pointer:".length()) : specification;
        if (path.equals("/void") || path.matches(
                "/(?:u?int(?:1|2|4|8)?|byte|char|short|long|float|double|bool|undefined.*)"))
            return 1;
        if (path.contains("/Recovered/PointerShapes/") ||
                path.contains("/Recovered/ClassPointees/") ||
                path.contains("/Recovered/HiddenThis/"))
            return 2;
        DataType type = dataTypes.getDataType(path);
        if (type instanceof Structure || type instanceof Enum || type instanceof TypeDef)
            return 3;
        return specification.startsWith("pointer:") ? 1 : 0;
    }

    private void auditCallSite(Function caller, Instruction instruction, Function direct,
            Function resolved, List<Value> pushes, Map<String, Value> registers,
            boolean stackStateComplete) {
        List<Parameter> expectedStack = stackParameters(resolved);
        List<String> stackArguments = new ArrayList<>();
        for (int index = 0; index < expectedStack.size(); index++) {
            Parameter parameter = expectedStack.get(index);
            int pushIndex = pushes.size() - 1 - index;
            stackArguments.add("p" + parameter.getOrdinal() + "=" +
                (pushIndex < 0 ? "untracked" :
                    describeArgument(parameter, pushes.get(pushIndex))));
        }
        List<String> registerArguments = new ArrayList<>();
        for (Parameter parameter : registerParameters(resolved)) {
            String register = parameter.getRegister() == null ? "?" :
                canonicalRegister(parameter.getRegister().getName());
            Value value = registers.get(register);
            registerArguments.add(register + "=" + describeValue(value));
        }
        String status;
        if (pushes.size() < expectedStack.size()) status = stackStateComplete ?
            "stack_argument_underflow" : "cfg_stack_state_incomplete";
        else if (pushes.size() == expectedStack.size()) status = "exact_address_match";
        else if (resolved.hasVarArgs()) status = "varargs_address_match";
        else status = "address_match_with_prefix_pushes";
        callSiteAudits.add(new CallSiteAudit(caller, instruction.getAddress(), direct,
            resolved, thunkChain(direct), pushes.size(), expectedStack.size(),
            stackArguments, registerArguments, status));
    }

    private void consumeCalleePurge(Function called, List<Value> pushes) {
        int purgeBytes = -1;
        if (called.isStackPurgeSizeValid()) purgeBytes = called.getStackPurgeSize();
        if (purgeBytes < 0) {
            String convention = called.getCallingConventionName();
            if ("__cdecl".equals(convention)) purgeBytes = 0;
            else if (Set.of("__stdcall", "__thiscall", "__fastcall").contains(convention))
                purgeBytes = stackParameters(called).size() *
                    currentProgram.getDefaultPointerSize();
        }
        if (purgeBytes < 0) {
            pushes.clear();
            return;
        }
        int pointerSize = currentProgram.getDefaultPointerSize();
        int words = (purgeBytes + pointerSize - 1) / pointerSize;
        while (words-- > 0 && !pushes.isEmpty()) pushes.remove(pushes.size() - 1);
    }

    private String describeValue(Value value) {
        if (value == null) return "unknown";
        if (value.type.isBlank()) return value.evidence.isBlank() ? "unknown" : value.evidence;
        return value.evidence.isBlank() ? value.type : value.type + " (" + value.evidence + ")";
    }

    private String describeArgument(Parameter target, Value value) {
        if (value == null) return "unknown";
        String type = argumentType(target, value);
        if (type.isBlank()) return describeValue(value);
        String conversion = value.extension == Extension.NONE ? "" :
            ", source=" + value.type + ", " +
            (value.extension == Extension.SIGNED ? "sign" : "zero") +
            "-extended/" + value.sourceWidth;
        return value.evidence.isBlank() ? type + conversion :
            type + conversion + " (" + value.evidence + ")";
    }

    private boolean isStackSpill(MemoryExpr memory) {
        // ESP-relative slots move under PUSH/POP.  EBP-relative locals are stable and cover
        // the common optimized pattern: save incoming this, reload it into another register,
        // then pass it through a thunk.
        return memory != null && "EBP".equals(memory.register) && memory.displacement < 0;
    }

    private String stackKey(MemoryExpr memory) {
        return memory.register + ":" + memory.displacement;
    }
    private boolean semanticSpecification(String specification) {
        if (specification.startsWith("pointer:")) return true;
        DataType type = dataTypes.getDataType(specification);
        return type instanceof Enum || type instanceof TypeDef || type instanceof Structure;
    }
    private int typeLength(String specification) {
        if (specification.startsWith("pointer:")) return currentProgram.getDefaultPointerSize();
        DataType type = dataTypes.getDataType(specification);
        return type == null ? -1 : type.getLength();
    }
    private int effectiveLength(DataType type) {
        int length = type == null ? -1 : type.getLength();
        return length < 1 ? currentProgram.getDefaultPointerSize() : length;
    }
    private String typeSpecification(DataType type) {
        if (type instanceof Pointer pointer && pointer.getDataType() != null)
            return "pointer:" + pointer.getDataType().getPathName();
        return type == null ? "" : type.getPathName();
    }
    private boolean sameType(String left, String right) { return left.equals(right); }
    private String ownerTypePath(Function function) {
        String qualified = function.getName(true);
        int separator = qualified.lastIndexOf("::");
        if (separator <= 0) return "";
        String owner = qualified.substring(0, separator);
        if (owner.startsWith("Library::")) return "";
        int ownerSeparator = owner.lastIndexOf("::");
        String leaf = ownerSeparator < 0 ? owner : owner.substring(ownerSeparator + 2);
        DataType direct = dataTypes.getDataType("/" + leaf);
        if (direct instanceof Structure) return direct.getPathName();
        List<DataType> matches = new ArrayList<>(); dataTypes.findDataTypes(leaf, matches);
        for (DataType match : matches)
            if (match instanceof Structure && !match.getPathName().contains("/VTables/"))
                return match.getPathName();
        return "";
    }

    private String producedName(Function called) {
        Matcher matcher = Pattern.compile("^(?:Get|Find|Create|Make|New|Alloc|Open|Load)([A-Z].*)$")
            .matcher(called.getName());
        return matcher.matches() ? cleanParameterName(matcher.group(1)) : "";
    }
    private String cleanParameterName(String value) {
        if (value == null) return "";
        String result = value.trim().replaceAll("^(?:m_|p_)+", "")
            .replaceAll("[^A-Za-z0-9_]", "_");
        result = result.replaceFirst("^_+", "");
        if (result.isBlank() || "this".equalsIgnoreCase(result) ||
                GENERIC_PARAMETER.matcher(result).matches() ||
                (!Character.isLetter(result.charAt(0)) && result.charAt(0) != '_')) return "";
        if (Character.isUpperCase(result.charAt(0))) result =
            Character.toLowerCase(result.charAt(0)) + result.substring(1);
        return result;
    }
    private String unique(Map<String, Integer> values) {
        return values.size() == 1 ? values.keySet().iterator().next() : "";
    }

    private String selectedType(Evidence value) {
        if (value == null || value.types.isEmpty()) return "";
        if (value.types.size() == 1) return value.types.keySet().iterator().next();
        List<String> strong = new ArrayList<>();
        for (String type : value.types.keySet())
            if (!value.strongTypeSites.getOrDefault(type, Set.of()).isEmpty())
                strong.add(type);
        return strong.size() == 1 ? strong.get(0) : "";
    }

    private MemoryExpr memoryExpr(String operand) {
        int open = operand.indexOf('['), close = operand.lastIndexOf(']');
        if (open < 0 || close <= open) return null;
        String value = operand.substring(open, close + 1)
            .replace(" ", "").replace("+-", "-").replace("-+", "-")
            .toUpperCase(Locale.ROOT);
        Matcher matcher = MEMORY.matcher(value); if (!matcher.matches()) return null;
        long displacement = 0;
        if (matcher.group(3) != null) {
            Long parsed = immediate(matcher.group(3)); if (parsed == null) return null;
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
            "RAX", "RBX", "RCX", "RDX", "RSI", "RDI", "RBP", "RSP").contains(value);
    }
    private Value partialScalarValue(Instruction instruction, String[] operands,
            Map<String, Value> registers, Map<Long, Value> stackParameters,
            Map<String, Value> stackSpills) {
        String destination = cleanRegister(operands[0]);
        int width = operandWidth(operands[0]);
        Value prior = destination == null ? null : registers.get(destination);
        boolean zeroBase = prior != null && prior.extension == Extension.UNSIGNED &&
            prior.sourceWidth == 0;
        if (zeroBase && width > 0 && operands.length >= 2) {
            Value source = sourceValue(instruction, 1, operands[1], registers,
                stackParameters, stackSpills, false);
            String type = source == null || source.type.isBlank() ?
                integerType(width, false) : source.type;
            String name = source == null ? "" : source.name;
            String sourceEvidence = source == null || source.evidence.isBlank() ? "" :
                source.evidence + "; ";
            return new Value(source == null ? -1 : source.parameterOrdinal,
                type, name, true,
                sourceEvidence + "zero-filled partial register load at " +
                    addr(instruction.getAddress()),
                source == null ? null : source.producer, Extension.UNSIGNED, width);
        }
        return new Value(-1, "/uint", "", false, "unproven partial register write at " +
            addr(instruction.getAddress()));
    }
    private Long immediate(String operand) {
        String value = operand.trim().toUpperCase(Locale.ROOT).replace("+", "");
        boolean negative = value.startsWith("-");
        if (negative) value = value.substring(1);
        try {
            long parsed;
            if (value.startsWith("0X"))
                parsed = Long.parseUnsignedLong(value.substring(2), 16);
            else if (value.matches("[0-9A-F]+H"))
                parsed = Long.parseUnsignedLong(value.substring(0, value.length() - 1), 16);
            else if (value.matches("[0-9]+")) parsed = Long.parseLong(value);
            else return null;
            return negative ? -parsed : parsed;
        }
        catch (NumberFormatException ignored) { }
        return null;
    }
    private String[] splitOperands(String instruction) {
        int space = instruction.indexOf(' ');
        return space < 0 || space == instruction.length() - 1 ? new String[0] :
            instruction.substring(space + 1).split("\\s*,\\s*");
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
    private boolean protectedSource(SourceType source) {
        return source == SourceType.USER_DEFINED || source == SourceType.IMPORTED;
    }
    private File outputDirectory() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless()) throw new IllegalArgumentException("Recovery output directory required");
        return askDirectory("Select recovery output directory", "Select");
    }
    private Path programDirectory(File selected) {
        return selected.getName().equals(currentProgram.getName()) ? selected.toPath() :
            selected.toPath().resolve(currentProgram.getName());
    }

    private void writeTsv(Path path, List<Proposal> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("type_apply\tname_apply\trepair\tfunction_address\texpected_function\t" +
                "target_kind\ttarget_ordinal\texpected_target_name\texpected_target_type\t" +
                "expected_target_source\tproposed_name\tproposed_type\tconfidence\t" +
                "evidence_sites\treason\n");
            for (Proposal p : rows) out.write(bit(p.typeApply) + "\t" + bit(p.nameApply) +
                "\t" + bit(p.repair) + "\t" + addr(p.address) + "\t" +
                tsv(p.expectedFunction) + "\t" +
                p.kind + "\t" + (p.ordinal < 0 ? "" : p.ordinal) + "\t" +
                tsv(p.expectedTargetName) + "\t" + tsv(p.expectedTargetType) + "\t" +
                p.expectedTargetSource + "\t" + tsv(p.proposedName) + "\t" +
                tsv(p.proposedType) + "\t" + p.confidence + "\t" +
                tsv(String.join(" | ", p.sites)) + "\t" + tsv(p.reason) + "\n");
        }
    }
    private void writeJson(Path path, List<Proposal> rows) throws Exception {
        List<String> lines = new ArrayList<>();
        for (Proposal p : rows) lines.add("{\"type_apply\":" + p.typeApply +
            ",\"name_apply\":" + p.nameApply + ",\"repair\":" + p.repair +
            ",\"function_address\":" +
            q(addr(p.address)) + ",\"target_kind\":" + q(p.kind) +
            ",\"target_ordinal\":" + p.ordinal + ",\"proposed_name\":" +
            q(p.proposedName) + ",\"proposed_type\":" + q(p.proposedType) +
            ",\"confidence\":" + q(p.confidence) + ",\"reason\":" + q(p.reason) + "}");
        Files.write(path, lines, StandardCharsets.UTF_8);
    }

    private void writeCallSiteAudit(Path path) throws Exception {
        callSiteAudits.sort(Comparator.comparing((CallSiteAudit row) -> row.callerAddress)
            .thenComparing(row -> row.site));
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("caller_address\tcaller\tcall_site\tdirect_address\tdirect_function\t" +
                "resolved_address\tresolved_function\tthunk_chain\tobserved_stack_args\t" +
                "expected_stack_args\tstack_arguments\tregister_arguments\tstatus\n");
            for (CallSiteAudit row : callSiteAudits) {
                out.write(addr(row.callerAddress) + "\t" + tsv(row.caller) + "\t" +
                    addr(row.site) + "\t" + addr(row.directAddress) + "\t" +
                    tsv(row.directFunction) + "\t" + addr(row.resolvedAddress) + "\t" +
                    tsv(row.resolvedFunction) + "\t" + tsv(row.thunkChain) + "\t" +
                    row.observedStackArguments + "\t" + row.expectedStackArguments + "\t" +
                    tsv(String.join(" | ", row.stackArguments)) + "\t" +
                    tsv(String.join(" | ", row.registerArguments)) + "\t" + row.status + "\n");
            }
        }
    }

    /**
     * Inventory every undefined function-boundary type, including targets for which no
     * safe proposal exists.  The proposal file necessarily contains only changes; this
     * audit makes the remaining undefined1/2/4 population and its rejection reason
     * visible without searching individual decompiler files.
     */
    private void writeUndefinedBoundaryAudit(Path path) throws Exception {
        List<UndefinedBoundaryRow> rows = new ArrayList<>();
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            Function function = functions.next();
            List<Parameter> targets = new ArrayList<>();
            targets.add(function.getReturn());
            targets.addAll(explicitParameters(function));
            for (Parameter target : targets) {
                DataType current = unwrap(target.getFormalDataType());
                if (current == null || !Undefined.isUndefined(current)) continue;
                String kind = target == function.getReturn() ? "return" : "parameter";
                int ordinal = "return".equals(kind) ? -1 : target.getOrdinal();
                Evidence found = evidence.get(
                    new TargetKey(function.getEntryPoint(), kind, ordinal));
                String candidate = found == null ? "" : selectedType(found);
                int candidateCount = candidate.isBlank() || found == null ? 0 :
                    found.types.getOrDefault(candidate, 0);
                boolean compatible = !candidate.isBlank() &&
                    typeLength(candidate) == effectiveLength(target.getFormalDataType());
                int candidateStrong = candidate.isBlank() || found == null ? 0 :
                    found.strongTypeSites.getOrDefault(candidate, Set.of()).size();
                boolean enough = found != null &&
                    ("return".equals(kind) ? candidateStrong > 0 :
                        candidateStrong > 0 || candidateCount >= 2);
                boolean protectedTarget = protectedSource(target.getSource());
                String status;
                if (protectedTarget) status = "manual_preserved";
                else if (found == null || found.types.isEmpty()) status = "no_evidence";
                else if (candidate.isBlank()) status = "conflicting_evidence";
                else if (!compatible) status = "width_mismatch";
                else if (!enough) status = "insufficient_independent_evidence";
                else if (found.types.size() > 1)
                    status = "automatic_strong_over_weak";
                else status = "automatic_candidate";
                rows.add(new UndefinedBoundaryRow(function.getEntryPoint(),
                    function.getName(true), kind, ordinal, target.getName(),
                    typeSpecification(target.getFormalDataType()),
                    target.getVariableStorage().toString(), target.getSource().toString(),
                    candidate, found == null ? 0 : found.strongCount, candidateCount,
                    status, found == null ? "" : found.types.toString(),
                    found == null ? "" : String.join(" | ", found.sites)));
            }
        }
        rows.sort(Comparator.comparing((UndefinedBoundaryRow row) -> row.address)
            .thenComparing(row -> row.kind).thenComparingInt(row -> row.ordinal));
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("function_address\tfunction\ttarget_kind\ttarget_ordinal\t" +
                "target_name\tcurrent_type\tstorage\tsource\tcandidate_type\t" +
                "strong_evidence\tcandidate_sites\tstatus\ttype_evidence\tevidence_sites\n");
            for (UndefinedBoundaryRow row : rows)
                out.write(addr(row.address) + "\t" + tsv(row.function) + "\t" +
                    row.kind + "\t" + (row.ordinal < 0 ? "" : row.ordinal) + "\t" +
                    tsv(row.targetName) + "\t" + row.currentType + "\t" +
                    tsv(row.storage) + "\t" + row.source + "\t" + row.candidateType +
                    "\t" + row.strongEvidence + "\t" + row.candidateSites + "\t" +
                    row.status + "\t" + tsv(row.typeEvidence) + "\t" +
                    tsv(row.evidenceSites == null || row.evidenceSites.isBlank() ?
                        "-" : row.evidenceSites) + "\n");
        }
    }
    private void writeSummary(Path path, List<Proposal> rows, int functions, int calls,
            int propagationPasses) throws Exception {
        Files.write(path, List.of("program=" + currentProgram.getName(),
            "functions_scanned=" + functions, "direct_calls_seen=" + calls,
            "type_propagation_passes=" + propagationPasses,
            "proposals=" + rows.size(),
            "parameter_proposals=" + rows.stream().filter(r -> r.kind.equals("parameter")).count(),
            "return_proposals=" + rows.stream().filter(r -> r.kind.equals("return")).count(),
            "type_auto_apply=" + rows.stream().filter(r -> r.typeApply).count(),
            "name_auto_apply=" + rows.stream().filter(r -> r.nameApply).count(),
            "reverse_return_evidence=" + reverseReturnEvidence,
            "scc_components_anchored=" + sccComponents,
            "scc_targets_anchored=" + sccTargets,
            "repair_proposals=" + rows.stream().filter(r -> r.repair).count(),
            "repair_auto_apply=" + rows.stream().filter(r -> r.repair &&
                (r.typeApply || r.nameApply)).count(),
            "repair_review_only=" + rows.stream().filter(r -> r.repair &&
                !r.typeApply && !r.nameApply).count(),
            "conflicts=" + rows.stream().filter(r -> r.confidence.equals("conflict")).count(),
            "undefined_boundary_audit=prototype_undefined_boundary_audit.tsv",
            "note=Only exact explicit argument counts propagate types. The audit preserves " +
                "deferred caller-cleanup words across calls, consumes actual callee purge bytes, " +
                "and separates incomplete CFG stack state from proven underflow.",
            "note_undefined=All undefined function parameters and returns are audited, " +
                "including no-evidence and conflicting rows which cannot be auto-applied.",
            "note_fixed_point=Qualified machine/callsite types are propagated through " +
                "parameter-forwarding wrappers inside one analyzer run.",
            "note_scc=Mutually recursive boundary components require one unambiguous " +
                "protected, semantic, ABI, or previously machine-qualified anchor; " +
                "unanchored generic cycles cannot validate themselves.",
            "note_narrow_raw=Unobservable signedness on retained 1/2-byte parameters " +
                "falls back to byte/ushort; undefined4 never receives a raw fallback.",
            "note_returns=Unknown EAX producers are traced into trusted arguments, this receivers, typed stores, and return-forwarding wrappers.",
            "note_manual=USER_DEFINED targets are never auto-applied.",
            "note_iteration=Rerun after applying method owners, globals, or class fields to reach a conservative fixed point."),
            StandardCharsets.UTF_8);
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

    private static class Value {
        final int parameterOrdinal; final String type, name, evidence; final boolean trusted;
        final Function producer;
        final Extension extension;
        final int sourceWidth;
        final boolean literal, literalSigned;
        Value(int parameterOrdinal, String type, String name, boolean trusted, String evidence) {
            this(parameterOrdinal, type, name, trusted, evidence, null);
        }
        Value(int parameterOrdinal, String type, String name, boolean trusted, String evidence,
                Function producer) {
            this(parameterOrdinal, type, name, trusted, evidence, producer,
                Extension.NONE, 0, false, false);
        }
        Value(int parameterOrdinal, String type, String name, boolean trusted, String evidence,
                Function producer, Extension extension, int sourceWidth) {
            this(parameterOrdinal, type, name, trusted, evidence, producer,
                extension, sourceWidth, false, false);
        }
        Value(int parameterOrdinal, String type, String name, boolean trusted, String evidence,
                Function producer, Extension extension, int sourceWidth,
                boolean literal, boolean literalSigned) {
            this.parameterOrdinal = parameterOrdinal; this.type = type == null ? "" : type;
            this.name = name == null ? "" : name; this.trusted = trusted;
            this.evidence = evidence == null ? "" : evidence;
            this.producer = producer;
            this.extension = extension == null ? Extension.NONE : extension;
            this.sourceWidth = sourceWidth;
            this.literal = literal;
            this.literalSigned = literalSigned;
        }
        static Value literal(long value, String site) {
            boolean signed = value < 0;
            return new Value(-1, signed ? "/int" : "/uint", "", false,
                "literal " + value + " at " + site, null, Extension.NONE, 0,
                true, signed);
        }
    }
    private enum Extension { NONE, SIGNED, UNSIGNED }
    private static class StoreType {
        final String type, evidence; final boolean strong;
        StoreType(String type, boolean strong, String evidence) {
            this.type = type; this.strong = strong; this.evidence = evidence;
        }
    }
    private static class CallSiteAudit {
        final Address callerAddress, site, directAddress, resolvedAddress;
        final String caller, directFunction, resolvedFunction, thunkChain, status;
        final int observedStackArguments, expectedStackArguments;
        final List<String> stackArguments, registerArguments;
        CallSiteAudit(Function caller, Address site, Function direct, Function resolved,
                String thunkChain, int observedStackArguments, int expectedStackArguments,
                List<String> stackArguments, List<String> registerArguments, String status) {
            callerAddress = caller.getEntryPoint(); this.caller = caller.getName(true);
            this.site = site;
            directAddress = direct == null ? null : direct.getEntryPoint();
            directFunction = direct == null ? "" : direct.getName(true);
            resolvedAddress = resolved == null ? null : resolved.getEntryPoint();
            resolvedFunction = resolved == null ? "" : resolved.getName(true);
            this.thunkChain = thunkChain;
            this.observedStackArguments = observedStackArguments;
            this.expectedStackArguments = expectedStackArguments;
            this.stackArguments = new ArrayList<>(stackArguments);
            this.registerArguments = new ArrayList<>(registerArguments);
            this.status = status;
        }
    }
    private record UndefinedBoundaryRow(Address address, String function, String kind,
        int ordinal, String targetName, String currentType, String storage, String source,
        String candidateType, int strongEvidence, int candidateSites, String status,
        String typeEvidence, String evidenceSites) { }
    private static class MemoryExpr {
        final String register; final long displacement;
        MemoryExpr(String register, long displacement) {
            this.register = register; this.displacement = displacement;
        }
    }
    private static class TargetKey implements Comparable<TargetKey> {
        final Address address; final String kind; final int ordinal;
        TargetKey(Address address, String kind, int ordinal) {
            this.address = address; this.kind = kind; this.ordinal = ordinal;
        }
        @Override public int compareTo(TargetKey other) {
            int result = address.compareTo(other.address);
            if (result != 0) return result;
            result = kind.compareTo(other.kind);
            return result != 0 ? result : Integer.compare(ordinal, other.ordinal);
        }
        @Override public boolean equals(Object other) {
            return other instanceof TargetKey key && compareTo(key) == 0;
        }
        @Override public int hashCode() {
            return java.util.Objects.hash(address, kind, ordinal);
        }
    }
    private static class Tarjan {
        private final Map<TargetKey, Set<TargetKey>> graph;
        private final Map<TargetKey, Integer> index = new TreeMap<>();
        private final Map<TargetKey, Integer> low = new TreeMap<>();
        private final List<TargetKey> stack = new ArrayList<>();
        private final Set<TargetKey> onStack = new TreeSet<>();
        private final List<List<TargetKey>> components = new ArrayList<>();
        private int next;
        Tarjan(Map<TargetKey, Set<TargetKey>> graph) {
            this.graph = graph;
        }
        List<List<TargetKey>> components() {
            for (TargetKey node : graph.keySet())
                if (!index.containsKey(node)) visit(node);
            return components;
        }
        private void visit(TargetKey node) {
            index.put(node, next);
            low.put(node, next);
            next++;
            stack.add(node);
            onStack.add(node);
            for (TargetKey target : graph.getOrDefault(node, Set.of())) {
                if (!index.containsKey(target)) {
                    visit(target);
                    low.put(node, Math.min(low.get(node), low.get(target)));
                }
                else if (onStack.contains(target))
                    low.put(node, Math.min(low.get(node), index.get(target)));
            }
            if (!low.get(node).equals(index.get(node))) return;
            List<TargetKey> component = new ArrayList<>();
            while (!stack.isEmpty()) {
                TargetKey value = stack.remove(stack.size() - 1);
                onStack.remove(value);
                component.add(value);
                if (value.equals(node)) break;
            }
            component.sort(Comparator.naturalOrder());
            components.add(component);
        }
    }
    private static class Evidence {
        final Map<String, Integer> types = new TreeMap<>(), names = new TreeMap<>();
        final Set<String> sites = new TreeSet<>(), strongSites = new TreeSet<>();
        final Map<String, Set<String>> typeSites = new TreeMap<>();
        final Map<String, Set<String>> strongTypeSites = new TreeMap<>();
        int strongCount;
    }
    private record ScanCounts(int functions, int callSites) { }
    private static class Proposal {
        final Address address; final String expectedFunction, kind, expectedTargetName,
            expectedTargetType, expectedTargetSource, proposedName, proposedType,
            confidence, reason; final int ordinal;
        final boolean typeApply, nameApply, repair;
        final Set<String> sites;
        Proposal(Function function, Parameter target, String kind, int ordinal,
                String expectedTargetType, String expectedTargetName, String proposedType,
                String proposedName, boolean typeApply, boolean nameApply, boolean repair,
                String confidence, String reason, Set<String> sites) {
            address = function.getEntryPoint(); expectedFunction = function.getName(true);
            this.kind = kind; this.ordinal = ordinal;
            this.expectedTargetName = expectedTargetName;
            this.expectedTargetType = expectedTargetType;
            expectedTargetSource = target.getSource().toString();
            this.proposedName = proposedName; this.proposedType = proposedType;
            this.typeApply = typeApply; this.nameApply = nameApply;
            this.repair = repair;
            this.confidence = confidence; this.reason = reason;
            this.sites = new TreeSet<>(sites);
        }
    }
}
