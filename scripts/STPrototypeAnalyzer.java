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
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.Deque;
import java.util.HashMap;
import java.util.HashSet;
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
import ghidra.program.model.data.AbstractFloatDataType;
import ghidra.program.model.data.AbstractIntegerDataType;
import ghidra.program.model.data.Array;
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
import ghidra.program.model.listing.Variable;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.StackReference;

public class STPrototypeAnalyzer extends GhidraScript {
    private static final Pattern MEMORY = Pattern.compile(
        "^\\[([A-Z][A-Z0-9]{1,3})(?:([+-])(0X[0-9A-F]+|[0-9]+))?\\]$");
    private static final Pattern REGISTER = Pattern.compile("^[A-Z][A-Z0-9]{1,3}$");
    private static final Pattern GENERIC_PARAMETER = Pattern.compile("(?i)(?:param|arg)_?[0-9]+");
    private static final Pattern APPLIED_TARGET = Pattern.compile(
        "\\[(?:STPrototype|STPrototypeRepair)Applier\\] Propagated " +
        "(return|parameter(?: ([0-9]+))?)\\.");
    private static final String TAG = "RECOVERED_PROTOTYPE";
    // Wrapper/thunk ladders in the linked image are deeper than eight calls.  This is a cheap
    // machine-only fixed point and avoids turning each additional level into an expensive outer
    // pipeline pass which reruns every decompiler-backed structural analyzer.
    private static final int MAX_TYPE_PROPAGATION_PASSES = 32;

    private final Map<TargetKey, Evidence> evidence = new TreeMap<>();
    private final Map<TargetKey, Set<TargetKey>> boundaryEdges = new TreeMap<>();
    private final Set<TargetKey> localPointerOutputTargets = new TreeSet<>();
    private final Map<TargetKey, String> definiteOutputTypes = new HashMap<>();
    private final List<CallSiteAudit> callSiteAudits = new ArrayList<>();
    private final List<ByteBufferAudit> byteBufferAudits = new ArrayList<>();
    private final Map<TargetKey, ByteBufferProof> byteBufferProofs = new TreeMap<>();
    private Map<TargetKey, String> inferredSeeds = Map.of();
    private DataTypeManager dataTypes;
    private int reverseReturnEvidence;
    private int sccComponents, sccTargets;
    private int propagationCycleLength, propagationCycleDroppedSeeds;

    @Override
    protected void run() throws Exception {
        // Read-only script: do not leave GhidraScript's implicit transaction around runScript().
        end(true);
        if (currentProgram == null) { printerr("Open the analyzed ST program first."); return; }
        File selected = outputDirectory(); if (selected == null) return;
        Path directory = programDirectory(selected); Files.createDirectories(directory);
        dataTypes = currentProgram.getDataTypeManager();
        definiteOutputTypes.clear();
        byteBufferProofs.clear();
        int functionsSeen = 0, callSites = 0, propagationPasses = 0;
        List<Map<TargetKey, String>> seedHistory = new ArrayList<>();
        Map<String, Integer> seedStateIndex = new LinkedHashMap<>();
        seedHistory.add(new TreeMap<>(inferredSeeds));
        seedStateIndex.put(seedStateFingerprint(inferredSeeds), 0);
        for (int pass = 1; pass <= MAX_TYPE_PROPAGATION_PASSES; pass++) {
            println("Prototype propagation pass " + pass + "/" +
                MAX_TYPE_PROPAGATION_PASSES);
            evidence.clear();
            boundaryEdges.clear();
            localPointerOutputTargets.clear();
            callSiteAudits.clear();
            byteBufferAudits.clear();
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
            String nextFingerprint = seedStateFingerprint(nextSeeds);
            Integer repeated = seedStateIndex.get(nextFingerprint);
            if (repeated != null) {
                List<Map<TargetKey, String>> cycle =
                    seedHistory.subList(repeated, seedHistory.size());
                propagationCycleLength = cycle.size();
                Map<TargetKey, String> consensus = seedCycleConsensus(cycle);
                Set<TargetKey> union = new TreeSet<>();
                for (Map<TargetKey, String> state : cycle)
                    union.addAll(state.keySet());
                propagationCycleDroppedSeeds = union.size() - consensus.size();
                inferredSeeds = consensus;

                // Proposal evidence must correspond to the conservative cycle
                // intersection, not to an arbitrary MAX_PASS parity.
                evidence.clear();
                boundaryEdges.clear();
                localPointerOutputTargets.clear();
                callSiteAudits.clear();
                byteBufferAudits.clear();
                reverseReturnEvidence = 0;
                sccComponents = 0;
                sccTargets = 0;
                ScanCounts finalCounts = scanAllFunctions();
                functionsSeen = finalCounts.functions;
                callSites = finalCounts.callSites;
                addNarrowRawStorageFallbacks();
                addStronglyConnectedBoundaryEvidence();
                propagationPasses = pass + 1;
                break;
            }
            seedStateIndex.put(nextFingerprint, seedHistory.size());
            seedHistory.add(new TreeMap<>(nextSeeds));
            inferredSeeds = nextSeeds;
        }
        seedPreviouslyAppliedTargets();
        List<Proposal> proposals = makeProposals();
        writeTsv(directory.resolve("prototype_proposals.tsv"), proposals);
        writeCallSiteAudit(directory.resolve("prototype_callsite_audit.tsv"));
        writeByteBufferAudit(directory.resolve("prototype_byte_buffer_audit.tsv"));
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
            ", propagation_passes: " + propagationPasses +
            (propagationCycleLength == 0 ? "" :
                ", cycle_length: " + propagationCycleLength +
                ", cycle_seeds_dropped: " + propagationCycleDroppedSeeds));
    }

    private String seedStateFingerprint(Map<TargetKey, String> state) {
        StringBuilder result = new StringBuilder();
        for (Map.Entry<TargetKey, String> entry : new TreeMap<>(state).entrySet())
            result.append(boundaryIdentity(entry.getKey())).append('=')
                .append(entry.getValue()).append('\n');
        return result.toString();
    }

    /** Keep only facts which are identical throughout an oscillating fixed-point
     * cycle. Volatile edges remain review evidence; pass-count parity never
     * chooses the Program ABI. */
    private Map<TargetKey, String> seedCycleConsensus(
            List<Map<TargetKey, String>> cycle) {
        if (cycle.isEmpty()) return Map.of();
        Map<TargetKey, String> result = new TreeMap<>(cycle.get(0));
        result.entrySet().removeIf(entry -> {
            for (int index = 1; index < cycle.size(); index++)
                if (!entry.getValue().equals(
                        cycle.get(index).get(entry.getKey()))) return true;
            return false;
        });
        return result;
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
            addLocalByteBufferEvidence(function);
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

    /**
     * Recover a mutable byte-buffer role from the callee's complete x86 dataflow.
     *
     * A pointer to Ghidra's generic undefined word often means only that the
     * decompiler guessed the pointee from the transport used to copy it.  The
     * pointee may be refined to byte only when complete alias dataflow observes
     * byte reads and writes at two exact callsites. Wider accesses normally cancel
     * the proof; the sole exception is an automation-owned packed shape made only
     * of adjacent generic bytes, where those accesses are optimized transports.
     * This establishes storage role, not a string, array extent, or payload type.
     */
    private void addLocalByteBufferEvidence(Function function) throws Exception {
        int directCallSites = exactDirectCallSites(function);
        for (Parameter parameter : explicitParameters(function)) {
            DataType formal = unwrap(parameter.getFormalDataType());
            if (!parameter.hasStackStorage() || protectedSource(parameter.getSource()) ||
                    !(formal instanceof Pointer pointer)) continue;
            DataType pointed = unwrap(pointer.getDataType());
            boolean generatedByteTransport = generatedByteTransportView(pointed);
            if (pointed != null && !Undefined.isUndefined(pointed) &&
                    !"/void".equals(pointed.getPathName()) &&
                    !generatedByteTransport) continue;

            TargetKey key = new TargetKey(function.getEntryPoint(), "parameter",
                parameter.getOrdinal());
            ByteBufferProof proof = byteBufferProofs.get(key);
            if (proof == null) {
                proof = proveMutableByteBuffer(function, parameter, directCallSites);
                byteBufferProofs.put(key, proof);
            }
            byteBufferAudits.add(new ByteBufferAudit(function.getEntryPoint(),
                function.getName(true), parameter.getOrdinal(), parameter.getName(),
                typeSpecification(parameter.getFormalDataType()), proof.directCallSites,
                proof.byteReads.size(), proof.byteWrites.size(),
                proof.bulkTransports.size(), proof.wideDereferences.size(),
                proof.escapes.size(), proof.complete, proof.qualifies,
                proof.status(), proof.evidence()));
            if (proof.qualifies)
                addParameterEvidence(function, parameter, "pointer:/byte", "", true,
                    proof.evidence());
        }
    }

    private ByteBufferProof proveMutableByteBuffer(Function function,
            Parameter parameter, int directCallSites) throws Exception {
        ByteBufferProof proof = new ByteBufferProof(directCallSites);
        if (function.getBody().getNumAddresses() > 0x10000) {
            proof.complete = false;
            proof.failure = "function_too_large";
            return proof;
        }
        Instruction entry = currentProgram.getListing()
            .getInstructionAt(function.getEntryPoint());
        if (entry == null) {
            proof.complete = false;
            proof.failure = "missing_entry_instruction";
            return proof;
        }

        Deque<ByteAliasState> pending = new ArrayDeque<>();
        Set<ByteAliasState> visited = new HashSet<>();
        pending.add(new ByteAliasState(entry.getAddress(), 0, Set.of()));
        int nodes = 0;
        while (!pending.isEmpty()) {
            monitor.checkCancelled();
            ByteAliasState state = pending.removeFirst();
            if (!visited.add(state)) continue;
            if (++nodes > 200000) {
                proof.complete = false;
                proof.failure = "dataflow_state_limit";
                break;
            }
            Instruction instruction = currentProgram.getListing()
                .getInstructionAt(state.address);
            if (instruction == null ||
                    !function.getBody().contains(instruction.getAddress())) {
                proof.complete = false;
                proof.failure = "incomplete_cfg";
                break;
            }
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            String[] operands = splitOperands(
                instruction.toString().toUpperCase(Locale.ROOT));
            int aliases = state.registerAliases;
            Set<Long> stackAliases = new TreeSet<>(state.stackAliases);
            String site = addr(instruction.getAddress()) + " " + instruction;

            boolean stringOperation = observeByteBufferStringOperation(
                mnemonic, aliases, proof, site);
            if (!stringOperation && !"LEA".equals(mnemonic)) {
                for (int operandIndex = 0; operandIndex < operands.length;
                        operandIndex++) {
                    String operand = operands[operandIndex];
                    if (!operand.contains("[") ||
                            (memoryRegisterMask(operand) & aliases) == 0) continue;
                    int width = memoryOperandWidth(operand);
                    if (width != 1) {
                        proof.wideDereferences.add(site + " operand=" + operand +
                            " width=" + width);
                        continue;
                    }
                    boolean write = operandIndex == 0 &&
                        writesFirstOperand(mnemonic);
                    boolean read = !write || readsWrittenMemory(mnemonic);
                    if (read) proof.byteReads.add(site);
                    if (write) proof.byteWrites.add(site);
                }
            }

            // A bare alias passed to another function or stored outside an EBP
            // spill escapes this complete local proof.  The callee/owner may be
            // heterogeneous, so do not specialize it transitively here.
            if ("PUSH".equals(mnemonic) && operands.length > 0 &&
                    operandIsAliasRegister(operands[0], aliases))
                proof.escapes.add(site + " alias passed on stack");
            if ("CALL".equals(mnemonic) && operands.length > 0 &&
                    operandIsAliasRegister(operands[0], aliases))
                proof.escapes.add(site + " alias used as indirect callee");

            if ("MOV".equals(mnemonic) && operands.length >= 2) {
                MemoryExpr destination = memoryExpr(operands[0]);
                boolean sourceAlias = operandIsAliasRegister(operands[1], aliases);
                if (destination != null && "EBP".equals(destination.register)) {
                    if (sourceAlias) stackAliases.add(destination.displacement);
                    else stackAliases.remove(destination.displacement);
                }
                else if (operands[0].contains("[") && sourceAlias)
                    proof.escapes.add(site + " alias stored outside a local spill");
            }

            String destination = operands.length == 0 ? null :
                cleanRegister(operands[0]);
            int destinationBit = destination == null ? 0 : registerBit(destination);
            if (destinationBit != 0 && !isFullRegister(operands[0]) &&
                    writesRegister(mnemonic)) {
                // A partial-register write destroys exact equality with the incoming
                // pointer even though the upper bits survive.  Retaining the alias
                // through MOV AL,... made a later scalar SHL look like pointer escape.
                aliases &= ~destinationBit;
            }
            else if (destinationBit != 0 && isFullRegister(operands[0]) &&
                    writesRegister(mnemonic)) {
                boolean priorAlias = (aliases & destinationBit) != 0;
                boolean becomesAlias = false;
                if ("MOV".equals(mnemonic) && operands.length >= 2) {
                    String source = cleanRegister(operands[1]);
                    MemoryExpr sourceMemory = memoryExpr(operands[1]);
                    becomesAlias = source != null &&
                        (aliases & registerBit(source)) != 0;
                    if (!becomesAlias && sourceMemory != null &&
                            "EBP".equals(sourceMemory.register))
                        becomesAlias = stackAliases.contains(sourceMemory.displacement) ||
                            operandReferencesParameter(instruction, 1, parameter);
                }
                else if ("LEA".equals(mnemonic) && operands.length >= 2)
                    becomesAlias = (memoryRegisterMask(operands[1]) & aliases) != 0;
                else if (Set.of("ADD", "SUB", "INC", "DEC").contains(mnemonic))
                    becomesAlias = priorAlias || operands.length >= 2 &&
                        operandIsAliasRegister(operands[1], aliases);
                else if (priorAlias && alignmentDownMask(mnemonic, operands))
                    becomesAlias = true;
                else if (priorAlias && !definiteRegisterReplacement(mnemonic, operands))
                    proof.escapes.add(site + " unsupported affine alias transform");
                aliases &= ~destinationBit;
                if (becomesAlias) aliases |= destinationBit;
            }
            if ("CALL".equals(mnemonic))
                aliases &= ~(registerBit("EAX") | registerBit("ECX") |
                    registerBit("EDX"));

            if (mnemonic.startsWith("RET")) continue;
            List<Address> successors = instructionSuccessors(function, instruction);
            if (successors.isEmpty()) {
                proof.complete = false;
                proof.failure = "incomplete_cfg_at_" + addr(instruction.getAddress());
                break;
            }
            Set<Long> frozenStackAliases = Set.copyOf(stackAliases);
            for (Address successor : successors)
                pending.addLast(new ByteAliasState(successor, aliases,
                    frozenStackAliases));
        }
        proof.qualifies = proof.complete && directCallSites >= 2 &&
            !proof.byteReads.isEmpty() && !proof.byteWrites.isEmpty() &&
            (proof.wideDereferences.isEmpty() || generatedByteTransportView(
                unwrap(((Pointer)unwrap(parameter.getFormalDataType())).getDataType()))) &&
            proof.escapes.isEmpty();
        return proof;
    }

    /**
     * A script-owned four-byte "record" made exclusively from adjacent generic byte fields
     * is often the decompiler's view of an optimized byte stream, not a semantic structure.
     * When complete callee dataflow also proves byte reads and writes, wider loads/stores are
     * transport operations and the stable source type is byte *.  Named/semantic fields,
     * non-byte components, manual types, and all non-generated categories remain ineligible.
     */
    private boolean generatedByteTransportView(DataType type) {
        type = unwrap(type);
        if (!(type instanceof Structure structure) || structure.getLength() < 2 ||
                structure.getLength() > currentProgram.getDefaultPointerSize() ||
                !structure.getPathName().contains("/Recovered/PointerShapes/"))
            return false;
        String description = structure.getDescription();
        boolean scriptOwned = description != null &&
            description.contains("[STPointerShapeApplier]");
        for (ghidra.program.model.data.DataTypeComponent component :
                structure.getDefinedComponents()) {
            if (component.getLength() != 1 || component.getOffset() < 0 ||
                    component.getOffset() >= structure.getLength() ||
                    !genericByteComponent(component)) return false;
            String comment = component.getComment();
            if (comment != null && comment.contains("[STPointerShapeApplier]"))
                scriptOwned = true;
        }
        // Undefined holes are Ghidra's canonical representation for unclaimed bytes;
        // they are just as generic as an explicit undefined1 component.  Requiring
        // every byte to be a defined component made a generated {gap, byte, byte,
        // gap} transport shape impossible to retire even though the only authored
        // members were PointerShape-owned byte views.
        return scriptOwned;
    }

    private boolean genericByteComponent(
            ghidra.program.model.data.DataTypeComponent component) {
        DataType type = unwrap(component.getDataType());
        if (type == null || type.getLength() != 1 ||
                !(Undefined.isUndefined(type) || type instanceof AbstractIntegerDataType))
            return false;
        String name = component.getFieldName();
        return name == null || name.isBlank() ||
            name.matches("field_(?:0x)?[0-9A-Fa-f]+|value_[0-9A-Fa-f]+");
    }

    private boolean observeByteBufferStringOperation(String mnemonic, int aliases,
            ByteBufferProof proof, String site) {
        String base = mnemonic.replace(".REP", "").replace("REP.", "");
        boolean repeated = mnemonic.contains("REP");
        int width;
        if (base.endsWith("B")) width = 1;
        else if (base.endsWith("W")) width = 2;
        else if (base.endsWith("D")) width = 4;
        else return false;
        boolean moves = base.startsWith("MOVS");
        boolean loads = base.startsWith("LODS");
        boolean stores = base.startsWith("STOS");
        boolean scans = base.startsWith("SCAS");
        boolean compares = base.startsWith("CMPS");
        if (!moves && !loads && !stores && !scans && !compares) return false;
        boolean sourceAlias = (aliases & registerBit("ESI")) != 0;
        boolean destinationAlias = (aliases & registerBit("EDI")) != 0;
        boolean reads = sourceAlias && (moves || loads || compares) ||
            destinationAlias && (scans || compares);
        boolean writes = destinationAlias && (moves || stores);
        if (!reads && !writes) return true;
        if (width == 1) {
            if (reads) proof.byteReads.add(site);
            if (writes) proof.byteWrites.add(site);
        }
        else if (repeated && moves)
            proof.bulkTransports.add(site);
        else proof.wideDereferences.add(site + " string_width=" + width);
        return true;
    }

    private int memoryRegisterMask(String operand) {
        int open = operand.indexOf('['), close = operand.lastIndexOf(']');
        if (open < 0 || close <= open) return 0;
        int result = 0;
        Matcher matcher = Pattern.compile("[A-Z][A-Z0-9]{1,3}")
            .matcher(operand.substring(open + 1, close).toUpperCase(Locale.ROOT));
        while (matcher.find()) result |= registerBit(matcher.group());
        return result;
    }

    private boolean operandIsAliasRegister(String operand, int aliases) {
        String register = cleanRegister(operand);
        return register != null && isFullRegister(operand) &&
            (aliases & registerBit(register)) != 0;
    }

    private boolean readsWrittenMemory(String mnemonic) {
        return !Set.of("MOV", "MOVSX", "MOVZX", "LEA", "POP").contains(mnemonic);
    }

    private boolean definiteRegisterReplacement(String mnemonic, String[] operands) {
        if (Set.of("POP", "MOVSX", "MOVZX", "LEA").contains(mnemonic)) return true;
        if (("XOR".equals(mnemonic) || "SUB".equals(mnemonic)) &&
                operands.length >= 2 &&
                cleanRegister(operands[0]) != null &&
                cleanRegister(operands[0]).equals(cleanRegister(operands[1])))
            return true;
        if (!"MOV".equals(mnemonic) || operands.length < 2) return false;
        return cleanRegister(operands[1]) == null || !isFullRegister(operands[1]);
    }

    private boolean alignmentDownMask(String mnemonic, String[] operands) {
        if (!"AND".equals(mnemonic) || operands.length < 2) return false;
        Long literal = immediate(operands[1]);
        if (literal == null) return false;
        long mask = literal & 0xffffffffL;
        long clearedLowBits = ~mask & 0xffffffffL;
        // 0xfffffffc, 0xfffffff8, ... retain the same buffer family while
        // selecting an aligned transport word.  Arbitrary bit masks still kill
        // pointer identity and remain escapes.
        return clearedLowBits != 0 && clearedLowBits <= 0xff &&
            (clearedLowBits & (clearedLowBits + 1)) == 0;
    }

    private int exactDirectCallSites(Function function) {
        Set<Address> sites = new TreeSet<>();
        ReferenceIterator references = currentProgram.getReferenceManager()
            .getReferencesTo(function.getEntryPoint());
        while (references.hasNext()) {
            Reference reference = references.next();
            if (!reference.getReferenceType().isCall()) continue;
            Instruction instruction = currentProgram.getListing()
                .getInstructionAt(reference.getFromAddress());
            if (instruction == null ||
                    !"CALL".equalsIgnoreCase(instruction.getMnemonicString())) continue;
            Function direct = directCalledFunction(instruction);
            if (direct != null &&
                    direct.getEntryPoint().equals(function.getEntryPoint()))
                sites.add(instruction.getAddress());
        }
        return sites.size();
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
            // A callee-local output indirection is a complete proposal for that
            // exact formal, but it says nothing about the semantic payload of a
            // caller's temporary. Do not feed it into the transitive seed graph.
            if (localPointerOutputTargets.contains(key) &&
                    candidate.startsWith("pointer:pointer:")) continue;
            Function function = currentProgram.getFunctionManager()
                .getFunctionAt(key.address);
            if (function == null) continue;
            Parameter target = "return".equals(key.kind) ? function.getReturn() :
                explicitParameter(function, key.ordinal);
            if (target == null) continue;
            boolean compatible = typeLength(candidate) ==
                effectiveLength(target.getFormalDataType());
            // Ghidra models a bare x86 `undefined` return as one byte.  Let the same strict
            // whole-EAX wrapper proof used by proposal generation participate in the analyzer's
            // in-memory fixed point.  Otherwise only one wrapper level is discovered per outer
            // pipeline pass, needlessly rerunning every unrelated whole-program analyzer.
            if (!compatible)
                compatible = exactFullAccumulatorWrapperReturn(function, key, target,
                    candidate, found) || exactFullAccumulatorBoundaryReturn(function, key,
                        target, candidate, found);
            if (!compatible) continue;
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
        Map<Integer, PointerOutputEvidence> pointerOutputs = new TreeMap<>();
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
                Address blockStart = instruction.getAddress();
                stackSpills.entrySet().removeIf(entry -> {
                    Value value = entry.getValue();
                    if (value.flowLocal)
                        return value.flowOrigin == null ||
                            !instructionDominates(caller, value.flowOrigin, blockStart);
                    return !value.trusted;
                });
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
                    applyDefiniteStackSlotOutputs(called, pushes, stackSpills,
                        instruction.getAddress());
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
            if ("MOV".equals(mnemonic) && operands.length >= 2) {
                observePointerOutputStore(caller, instruction, operands, registers);
                observePointerAddressOutputStore(caller, instruction, operands, registers,
                    pointerOutputs);
            }
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
        addPointerAddressOutputEvidence(caller, pointerOutputs);
        return calls;
    }

    private void propagateCall(Function caller, Function called, Value receiver,
            List<Value> pushes, Map<String, Value> registers, Address site, boolean wrapper) {
        List<Parameter> stackTargets = stackParameters(called);
        // An exact argument count is the ordinary case. Optimized x86 callers frequently
        // reserve/write wide x87 arguments with SUB ESP/FSTP and then PUSH the leading dword
        // arguments, so the logical PUSH count is incomplete. Only the machine word nearest
        // the CALL is nevertheless unambiguous: for cdecl/thiscall/stdcall it is the first
        // stack formal. Do not propagate a longer apparent prefix here; stale caller-cleanup
        // or saved-register pushes can otherwise look like arguments and poison the global
        // prototype fixed point.
        if (stackTargets.size() == pushes.size() ||
                (called.hasVarArgs() && pushes.size() >= stackTargets.size())) {
            for (int index = 0; index < stackTargets.size(); index++) {
                Parameter target = stackTargets.get(index);
                Value value = pushes.get(pushes.size() - 1 - index);
                propagateArgument(caller, called, target, value, site, wrapper);
            }
        }
        else if (!stackTargets.isEmpty() && !pushes.isEmpty() &&
                isLeadingDwordPrefixWithWideTail(stackTargets, pushes.size()) &&
                hasUnmodifiedNearestArgumentPush(caller, site)) {
            Parameter target = stackTargets.get(0);
            if (effectiveLength(target.getFormalDataType()) <=
                    currentProgram.getDefaultPointerSize())
                propagateArgument(caller, called, target, pushes.get(pushes.size() - 1),
                    site, wrapper);
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

    private boolean isLeadingDwordPrefixWithWideTail(List<Parameter> targets,
            int pushCount) {
        if (pushCount <= 0 || pushCount >= targets.size()) return false;
        int word = currentProgram.getDefaultPointerSize();
        for (int index = 0; index < pushCount; index++)
            if (effectiveLength(targets.get(index).getFormalDataType()) > word)
                return false;
        for (int index = pushCount; index < targets.size(); index++)
            if (effectiveLength(targets.get(index).getFormalDataType()) <= word)
                return false;
        return true;
    }

    /**
     * Prove that the top tracked value is the word immediately supplying stack
     * argument zero. Register setup may sit between PUSH and CALL, but another
     * control transfer, stack adjustment, POP, or write through ESP invalidates
     * the proof. The short instruction bound prevents reaching prologue saves.
     */
    private boolean hasUnmodifiedNearestArgumentPush(Function caller, Address callSite) {
        Instruction instruction = currentProgram.getListing().getInstructionBefore(callSite);
        for (int distance = 0; instruction != null && distance < 12; distance++) {
            if (!caller.getBody().contains(instruction.getAddress())) return false;
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            String[] operands = splitOperands(instruction.toString().toUpperCase(Locale.ROOT));
            if ("PUSH".equals(mnemonic)) return true;
            if ("POP".equals(mnemonic) || "CALL".equals(mnemonic) ||
                    "RET".equals(mnemonic) || instruction.getFlowType().isJump()) return false;
            if (operands.length > 0 && "ESP".equals(cleanRegister(operands[0])))
                return false;
            if (operands.length > 0 && operands[0].contains("[ESP")) return false;
            instruction = currentProgram.getListing().getInstructionBefore(
                instruction.getAddress());
        }
        return false;
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

    /**
     * Refine an unknown pointer pointee from an exact machine-width output store.
     *
     * This is deliberately narrower than general pointer-shape recovery.  The
     * destination must be offset zero of one explicit pointer parameter whose
     * current pointee is undefined, while the stored register must already carry
     * an independently typed value of exactly the same width.  A common example
     * is `mov ax,[this+field]; mov [output],ax`, which proves `short *` when the
     * recovered field is short.  No class or function name participates.
     */
    private void observePointerOutputStore(Function function,
            Instruction instruction, String[] operands,
            Map<String, Value> registers) {
        MemoryExpr destination = memoryExpr(operands[0]);
        if (destination == null || destination.displacement != 0) return;
        Value pointer = registers.get(destination.register);
        if (pointer == null || pointer.parameterOrdinal < 0) return;
        Parameter target = explicitParameter(function, pointer.parameterOrdinal);
        DataType formal = target == null ? null : unwrap(target.getFormalDataType());
        if (!(formal instanceof Pointer formalPointer)) return;
        DataType pointed = unwrap(formalPointer.getDataType());
        if (pointed == null || !Undefined.isUndefined(pointed)) return;

        int width = memoryOperandWidth(operands[0]);
        String sourceRegister = cleanRegister(operands[1]);
        Value source = sourceRegister == null ? null : registers.get(sourceRegister);
        boolean exactTypedField = source != null && source.evidence.startsWith("/") &&
            source.evidence.contains("+0x");
        if (source == null || (!source.trusted && !exactTypedField) || source.literal ||
                source.type.startsWith("pointer:") ||
                width < 1 || operandWidth(operands[1]) != width ||
                typeLength(source.type) != width || pointed.getLength() != width)
            return;
        addParameterEvidence(function, target, "pointer:" + source.type,
            pointer.name, true,
            addr(instruction.getAddress()) + " exact " + width +
                "-byte output store from " + source.evidence);
    }

    /**
     * Recognize a missing pointer level on a machine-word output parameter.
     *
     * The current formal must be exactly an undefined machine-word pointee (for
     * example, undefined4 * on x86), and the write must target offset zero of
     * that explicit parameter. Every observed non-null store through the same
     * parameter must be an exact address reference or an already typed pointer;
     * an unresolved/scalar store vetoes the proposal. Two non-null sites are
     * required so that one relocation cannot turn an ordinary word output into
     * a pointer-to-pointer by accident. The recovered inner pointee remains
     * void: the machine proves an address family, not one semantic payload type.
     */
    private void observePointerAddressOutputStore(Function function,
            Instruction instruction, String[] operands, Map<String, Value> registers,
            Map<Integer, PointerOutputEvidence> outputs) {
        MemoryExpr destination = memoryExpr(operands[0]);
        if (destination == null || destination.displacement != 0 ||
                memoryOperandWidth(operands[0]) != currentProgram.getDefaultPointerSize())
            return;
        Value base = registers.get(destination.register);
        if (base == null || base.parameterOrdinal < 0) return;
        Parameter target = explicitParameter(function, base.parameterOrdinal);
        DataType formal = target == null ? null : unwrap(target.getFormalDataType());
        if (!(formal instanceof Pointer pointer)) return;
        DataType pointed = unwrap(pointer.getDataType());
        if (pointed == null || !Undefined.isUndefined(pointed) ||
                pointed.getLength() != currentProgram.getDefaultPointerSize()) return;

        PointerOutputEvidence found = outputs.computeIfAbsent(base.parameterOrdinal,
            ignored -> new PointerOutputEvidence());
        String site = addr(instruction.getAddress()) + " " + instruction;
        Long literal = immediate(operands[1]);
        if (literal != null && literal == 0) {
            found.nullSites.add(site);
            return;
        }
        if (exactAddressReference(instruction, 1)) {
            found.addressSites.add(site);
            return;
        }
        String sourceRegister = cleanRegister(operands[1]);
        Value source = sourceRegister == null || !isFullRegister(operands[1]) ? null :
            registers.get(sourceRegister);
        if (source != null && source.type.startsWith("pointer:") && !source.literal) {
            found.addressSites.add(site + " from " + source.evidence);
            return;
        }
        found.nonAddressSites.add(site);
    }

    private boolean exactAddressReference(Instruction instruction, int operandIndex) {
        for (Reference reference : instruction.getReferencesFrom()) {
            if (reference.getOperandIndex() != operandIndex) continue;
            Address target = reference.getToAddress();
            if (target == null) continue;
            // A DATA reference on an immediate is the disassembler's relocation-like
            // proof that the word denotes an address. Avoid a Memory.contains lookup
            // here: this method runs inside a whole-program fixed point and that
            // database query dominates every pass on large switch tables.
            if (reference.getReferenceType().isData() ||
                    currentProgram.getListing().getDefinedDataContaining(target) != null ||
                    currentProgram.getListing().getInstructionContaining(target) != null)
                return true;
        }
        return false;
    }

    private void addPointerAddressOutputEvidence(Function function,
            Map<Integer, PointerOutputEvidence> outputs) {
        for (Map.Entry<Integer, PointerOutputEvidence> entry : outputs.entrySet()) {
            PointerOutputEvidence found = entry.getValue();
            if (found.addressSites.size() < 2 || !found.nonAddressSites.isEmpty()) continue;
            Parameter target = explicitParameter(function, entry.getKey());
            if (target == null) continue;
            TargetKey key = new TargetKey(function.getEntryPoint(), "parameter",
                entry.getKey());
            localPointerOutputTargets.add(key);
            String evidenceSite = "complete offset-zero output stores: addresses=" +
                found.addressSites.size() + ", nulls=" + found.nullSites.size() +
                "; " + String.join(" | ", found.addressSites);
            addParameterEvidence(function, target, "pointer:pointer:/void", target.getName(),
                true, evidenceSite);
        }
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
            // Utility recovery owns the complete semantic ABI of generic helpers. In
            // particular, allocator/reallocator void * parameters must remain neutral
            // across heterogeneous consumers; majority call-site evidence is a payload
            // view, not permission to specialize the helper itself.
            if (hasTag(function, "RECOVERED_UTILITY_SEMANTICS")) continue;
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
            boolean machineForwardedReturn = !proposedType.isBlank() &&
                (exactFullAccumulatorWrapperReturn(function, key, target, proposedType, ev) ||
                 exactFullAccumulatorBoundaryReturn(function, key, target, proposedType, ev));
            int strongTypeCount = proposedType.isBlank() ? 0 :
                ev.strongTypeSites.getOrDefault(proposedType, Set.of()).size();
            boolean compatible = !proposedType.isBlank() &&
                (typeLength(proposedType) == effectiveLength(target.getDataType()) ||
                 machineForwardedReturn);
            boolean scalarRoleRepair = strongScalarRoleRepair(currentType, proposedType,
                ev, strongTypeCount);
            ByteBufferProof byteProof = byteBufferProofs.get(key);
            boolean byteBufferRepair = "pointer:/byte".equals(proposedType) &&
                byteProof != null && byteProof.qualifies &&
                unwrap(target.getFormalDataType()) instanceof Pointer currentPointer &&
                generatedByteTransportView(currentPointer.getDataType());
            boolean safeScriptRepair = !scriptOwned ||
                scriptRepairImproves(currentType, proposedType) ||
                strongPrimitiveRoleRepair(currentType, proposedType, ev,
                    strongTypeCount) || scalarRoleRepair || byteBufferRepair;
            boolean typeChange = compatible && !sameType(currentType, proposedType) &&
                (safeToRefine(target, proposedType) || scriptOwned) && safeScriptRepair;
            boolean enoughTypeEvidence = "return".equals(key.kind) ?
                strongTypeCount > 0 : strongTypeCount > 0 || typeCount >= 2;
            boolean protectedOverride = legacyDebugGenericReturn(function, target, key,
                currentType, proposedType, strongTypeCount) && !typeConflict && typeChange &&
                enoughTypeEvidence;
            boolean typeApply = (!manual || protectedOverride) && !abiMachineTarget &&
                !typeConflict && typeChange && enoughTypeEvidence;
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
            if (machineForwardedReturn)
                reasons.add("exact_full_eax_wrapper_return");
            if (manual) reasons.add("manual_target_preserved");
            if (protectedOverride)
                reasons.add("legacy_debug_signature_source_override");
            if (abiMachineTarget) reasons.add("machine_abi_target_preserved");
            if (scriptOwned) reasons.add("script_target_repair");
            if (scalarRoleRepair)
                reasons.add("post_overwrite_scalar_role_replaces_generated_pointer_view");
            if (byteBufferRepair)
                reasons.add("mixed_width_transport_replaces_generated_byte_shape");
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
                protectedOverride, confidence, String.join("; ", reasons), ev.sites));
        }
        result.sort(Comparator.comparing((Proposal row) -> row.address)
            .thenComparing(row -> row.kind).thenComparingInt(row -> row.ordinal));
        return result;
    }

    /**
     * Ghidra's bare `undefined` return has length one even on 32-bit x86.  That is a
     * presentation default, not evidence that only AL is returned.  Permit a semantic
     * four-byte return to replace it only for the strict transparent-wrapper shape which
     * the machine propagation pass has already followed: one direct CALL, no control-flow
     * split after entry, and an untouched full EAX reaching every RET.  This closes the
     * otherwise permanent width-mismatch gap without widening arbitrary narrow returns.
     */
    private boolean exactFullAccumulatorWrapperReturn(Function function, TargetKey key,
            Parameter target, String proposedType, Evidence value) {
        if (!"return".equals(key.kind) || typeLength(proposedType) !=
                currentProgram.getDefaultPointerSize() ||
                "unknown".equalsIgnoreCase(function.getCallingConventionName()) ||
                !Undefined.isUndefined(target.getFormalDataType()) ||
                effectiveLength(target.getFormalDataType()) >=
                    currentProgram.getDefaultPointerSize() ||
                value.strongTypeSites.getOrDefault(proposedType, Set.of()).isEmpty() ||
                function.getBody().getNumAddresses() > 64 || directCalls(function).size() != 1)
            return false;

        boolean afterCall = false, sawReturn = false;
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            String[] operands = splitOperands(instruction.toString().toUpperCase(Locale.ROOT));
            if ("CALL".equals(mnemonic)) {
                if (afterCall) return false;
                afterCall = true;
                continue;
            }
            if (instruction.getFlowType().isJump()) return false;
            if ("RET".equals(mnemonic)) {
                if (!afterCall) return false;
                sawReturn = true;
                continue;
            }
            if (!afterCall || operands.length == 0) continue;
            String destination = cleanRegister(operands[0]);
            if (!"EAX".equals(destination) || !writesRegister(mnemonic)) continue;
            // MOV EAX,EAX is an identity; every other post-call accumulator write
            // destroys the forwarded result proven by the call propagation pass.
            if (!("MOV".equals(mnemonic) && operands.length >= 2 &&
                    "EAX".equals(cleanRegister(operands[1])) &&
                    isFullRegister(operands[1]))) return false;
        }
        return sawReturn;
    }

    /**
     * A bare Ghidra {@code undefined} return is one byte even when the machine ABI returns a
     * complete pointer in EAX.  A transparent wrapper is only one common shape: allocation
     * builders frequently branch after one or more trusted pointer-returning calls and retain
     * the resulting EAX until every RET.  Permit a downstream pointer boundary to repair that
     * width only when the callee CFG itself proves a full pointer-valued accumulator on every
     * return path.  The caller contributes the pointee view; it never proves the machine width.
     */
    private boolean exactFullAccumulatorBoundaryReturn(Function function, TargetKey key,
            Parameter target, String proposedType, Evidence value) {
        if (!"return".equals(key.kind) || !proposedType.startsWith("pointer:") ||
                typeLength(proposedType) != currentProgram.getDefaultPointerSize() ||
                "unknown".equalsIgnoreCase(function.getCallingConventionName()) ||
                !Undefined.isUndefined(target.getFormalDataType()) ||
                effectiveLength(target.getFormalDataType()) >=
                    currentProgram.getDefaultPointerSize() ||
                value.strongTypeSites.getOrDefault(proposedType, Set.of()).isEmpty() ||
                function.getBody().getNumAddresses() > 0x4000)
            return false;

        Instruction entry = currentProgram.getListing()
            .getInstructionAt(function.getEntryPoint());
        if (entry == null) return false;
        Deque<AccumulatorState> pending = new ArrayDeque<>();
        Set<AccumulatorState> visited = new HashSet<>();
        Set<Address> reachedReturns = new HashSet<>();
        pending.add(new AccumulatorState(entry.getAddress(), false));
        int totalReturns = 0;
        InstructionIterator count = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (count.hasNext())
            if (count.next().getMnemonicString().toUpperCase(Locale.ROOT).startsWith("RET"))
                totalReturns++;
        if (totalReturns == 0) return false;

        int nodes = 0;
        while (!pending.isEmpty()) {
            AccumulatorState state = pending.removeFirst();
            if (!visited.add(state) || ++nodes > 65536) continue;
            Instruction instruction = currentProgram.getListing()
                .getInstructionAt(state.address);
            if (instruction == null ||
                    !function.getBody().contains(instruction.getAddress())) return false;
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            String[] operands = splitOperands(instruction.toString().toUpperCase(Locale.ROOT));
            boolean defined = state.fullPointer;
            if ("CALL".equals(mnemonic)) {
                Function called = resolveThunk(directCalledFunction(instruction));
                DataType returned = called == null ? null : unwrap(called.getReturnType());
                defined = returned instanceof Pointer &&
                    (trustedReturn(called) || isLibrary(called) ||
                     hasTag(called, "RECOVERED_UTILITY_SEMANTICS"));
            }
            else if (operands.length > 0 &&
                    "EAX".equals(cleanRegister(operands[0])) &&
                    isFullRegister(operands[0]) && writesRegister(mnemonic)) {
                // A non-call full EAX definition establishes the width but not pointer
                // provenance.  Preserve pointer state only for identity moves.
                defined = "MOV".equals(mnemonic) && operands.length >= 2 &&
                    "EAX".equals(cleanRegister(operands[1])) &&
                    isFullRegister(operands[1]) && defined;
            }
            if (mnemonic.startsWith("RET")) {
                if (!defined) return false;
                reachedReturns.add(instruction.getAddress());
                continue;
            }
            List<Address> successors = instructionSuccessors(function, instruction);
            if (successors.isEmpty()) return false;
            for (Address successor : successors)
                pending.addLast(new AccumulatorState(successor, defined));
        }
        return reachedReturns.size() == totalReturns;
    }

    /**
     * Track the ordinary optimized C idiom where an incoming parameter stack slot is reused as
     * a local after passing its address to a definite output parameter.  Without this effect the
     * old input type leaks past the call and poisons unrelated downstream prototypes.  Only an
     * exact offset-zero write of the complete current pointee on every callee path qualifies.
     */
    private void applyDefiniteStackSlotOutputs(Function called, List<Value> pushes,
            Map<String, Value> stackSpills, Address site) {
        List<Parameter> targets = stackParameters(called);
        if (!(targets.size() == pushes.size() ||
                called.hasVarArgs() && pushes.size() >= targets.size())) return;
        for (int index = 0; index < targets.size(); index++) {
            Value value = pushes.get(pushes.size() - 1 - index);
            if (value == null || value.addressedStackOffset == null) continue;
            Parameter target = targets.get(index);
            String outputType = definiteOutputType(called, target);
            if (outputType.isBlank()) continue;
            String evidenceSite = addr(site) + " definite output through " +
                called.getName(true) + " parameter " + target.getOrdinal();
            DataType formal = unwrap(target.getFormalDataType());
            DataType pointed = formal instanceof Pointer pointer ?
                unwrap(pointer.getDataType()) : null;
            boolean strong = protectedSource(target.getSource()) ||
                pointed instanceof Enum || pointed instanceof TypeDef ||
                pointed instanceof Structure ||
                trustedNamedLibraryParameter(called, target);
            stackSpills.put(stackKey(new MemoryExpr("EBP", value.addressedStackOffset)),
                new Value(-1, outputType, "", strong, evidenceSite, null,
                    Extension.NONE, 0, false, false, null, true, site));
        }
    }

    private String definiteOutputType(Function function, Parameter parameter) {
        TargetKey key = new TargetKey(function.getEntryPoint(), "output",
            parameter.getOrdinal());
        String cached = definiteOutputTypes.get(key);
        if (cached != null) return cached;
        String result = proveDefiniteOutputType(function, parameter);
        definiteOutputTypes.put(key, result);
        return result;
    }

    private String proveDefiniteOutputType(Function function, Parameter parameter) {
        DataType formal = unwrap(parameter.getFormalDataType());
        if (!(formal instanceof Pointer pointer)) return "";
        DataType pointed = unwrap(pointer.getDataType());
        int width = pointed == null ? -1 : pointed.getLength();
        if (width < 1 || width > 8 || function.getBody().getNumAddresses() > 0x4000)
            return "";
        String proposed = typeSpecification(pointed);
        if (proposed.isBlank() || "/void".equals(proposed)) return "";
        Instruction entry = currentProgram.getListing()
            .getInstructionAt(function.getEntryPoint());
        if (entry == null) return "";

        Deque<OutputState> pending = new ArrayDeque<>();
        Set<OutputState> visited = new HashSet<>();
        Set<Address> reachedReturns = new HashSet<>();
        pending.add(new OutputState(entry.getAddress(), 0, false));
        int totalReturns = 0;
        InstructionIterator count = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (count.hasNext())
            if (count.next().getMnemonicString().toUpperCase(Locale.ROOT).startsWith("RET"))
                totalReturns++;
        if (totalReturns == 0) return "";

        int nodes = 0;
        while (!pending.isEmpty()) {
            OutputState state = pending.removeFirst();
            if (!visited.add(state) || ++nodes > 65536) continue;
            Instruction instruction = currentProgram.getListing()
                .getInstructionAt(state.address);
            if (instruction == null ||
                    !function.getBody().contains(instruction.getAddress())) return "";
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            String[] operands = splitOperands(instruction.toString().toUpperCase(Locale.ROOT));
            int aliases = state.aliases;
            boolean wrote = state.wrote;

            if ("MOV".equals(mnemonic) && operands.length >= 2) {
                MemoryExpr destination = memoryExpr(operands[0]);
                int baseBit = destination == null ? 0 : registerBit(destination.register);
                if (destination != null && destination.displacement == 0 &&
                        (aliases & baseBit) != 0 && memoryOperandWidth(operands[0]) == width)
                    wrote = true;
            }

            String destination = operands.length == 0 ? null : cleanRegister(operands[0]);
            int destinationBit = destination == null ? 0 : registerBit(destination);
            if (destinationBit != 0 && isFullRegister(operands[0]) &&
                    writesRegister(mnemonic)) {
                boolean becomesAlias = false;
                if ("MOV".equals(mnemonic) && operands.length >= 2) {
                    String source = cleanRegister(operands[1]);
                    becomesAlias = source != null &&
                        (aliases & registerBit(source)) != 0;
                    if (!becomesAlias)
                        becomesAlias = operandReferencesParameter(instruction, 1, parameter);
                }
                aliases &= ~destinationBit;
                if (becomesAlias) aliases |= destinationBit;
            }
            if ("CALL".equals(mnemonic))
                aliases &= ~(registerBit("EAX") | registerBit("ECX") |
                    registerBit("EDX"));

            if (mnemonic.startsWith("RET")) {
                if (!wrote) return "";
                reachedReturns.add(instruction.getAddress());
                continue;
            }
            List<Address> successors = instructionSuccessors(function, instruction);
            if (successors.isEmpty()) return "";
            for (Address successor : successors)
                pending.addLast(new OutputState(successor, aliases, wrote));
        }
        return reachedReturns.size() == totalReturns ? proposed : "";
    }

    private boolean operandReferencesParameter(Instruction instruction, int operand,
            Parameter parameter) {
        for (Reference reference : instruction.getOperandReferences(operand))
            if (reference instanceof StackReference stack && parameter.isStackVariable() &&
                    stack.getStackOffset() == parameter.getStackOffset()) return true;
        String[] operands = splitOperands(instruction.toString().toUpperCase(Locale.ROOT));
        if (operand < operands.length && parameter.isStackVariable()) {
            MemoryExpr memory = memoryExpr(operands[operand]);
            // In an EBP frame Ghidra's parameter stack offset excludes the saved frame
            // pointer, while the rendered instruction displacement includes it.
            if (memory != null && "EBP".equals(memory.register) &&
                    memory.displacement == (long)parameter.getStackOffset() +
                        currentProgram.getDefaultPointerSize()) return true;
        }
        return false;
    }

    private int registerBit(String register) {
        if (register == null) return 0;
        return switch (canonicalRegister(register)) {
            case "EAX" -> 1;
            case "EBX" -> 1 << 1;
            case "ECX" -> 1 << 2;
            case "EDX" -> 1 << 3;
            case "ESI" -> 1 << 4;
            case "EDI" -> 1 << 5;
            default -> 0;
        };
    }

    private List<Address> instructionSuccessors(Function function,
            Instruction instruction) {
        List<Address> result = new ArrayList<>();
        Address fallThrough = instruction.getFallThrough();
        if (fallThrough != null && function.getBody().contains(fallThrough))
            result.add(fallThrough);
        if (instruction.getFlowType().isJump())
            for (Address flow : instruction.getFlows())
                if (function.getBody().contains(flow) && !result.contains(flow))
                    result.add(flow);
        return result;
    }

    private boolean instructionDominates(Function function, Address origin,
            Address target) {
        if (origin.equals(target)) return true;
        Instruction entry = currentProgram.getListing()
            .getInstructionAt(function.getEntryPoint());
        if (entry == null) return false;
        Deque<Address> pending = new ArrayDeque<>();
        Set<Address> visited = new HashSet<>();
        pending.add(entry.getAddress());
        int nodes = 0;
        while (!pending.isEmpty()) {
            Address address = pending.removeFirst();
            if (!visited.add(address) || ++nodes > 65536) continue;
            if (address.equals(target)) return false;
            // Search specifically for a path which avoids the proposed dominator.
            if (address.equals(origin)) continue;
            Instruction instruction = currentProgram.getListing().getInstructionAt(address);
            if (instruction == null || !function.getBody().contains(address)) return false;
            pending.addAll(instructionSuccessors(function, instruction));
        }
        return nodes <= 65536;
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
                (isStackSpill(destinationMemory) ||
                 "EBP".equals(destinationMemory.register) &&
                    stackParameters.containsKey(destinationMemory.displacement))) {
            String key = stackKey(destinationMemory);
            String source = cleanRegister(operands[1]);
            Value value = source != null && isFullRegister(operands[1]) ?
                registers.get(source) : null;
            if (stackParameters.containsKey(destinationMemory.displacement)) {
                if (value == null)
                    value = new Value(-1, "", "", false,
                        "incoming parameter slot overwritten at " +
                        addr(instruction.getAddress()), null, Extension.NONE, 0,
                        false, false, null, true, instruction.getAddress());
                else value = value.flowLocalCopy(instruction.getAddress());
                stackSpills.put(key, value);
            }
            else if (value == null) stackSpills.remove(key);
            else stackSpills.put(key, value);
            return;
        }
        if ("MOV".equals(mnemonic) && destination != null && operands.length >= 2) {
            if (!fullDestination) {
                Value typedPiece = typedPartialMoveValue(instruction, operands,
                    registers, stackParameters, stackSpills);
                registers.put(destination, typedPiece == null ?
                    partialScalarValue(instruction, operands, registers,
                        stackParameters, stackSpills) : typedPiece);
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
            if (parameter != null) {
                if (!addressOf) return parameter;
                String pointed = parameter.type.isBlank() ||
                    parameter.type.startsWith("pointer:") ?
                        "" : "pointer:" + parameter.type;
                return new Value(parameter.parameterOrdinal, pointed, parameter.name,
                    parameter.trusted, "address of " + parameter.evidence, null,
                    Extension.NONE, 0, false, false, memory.displacement, false);
            }
            Value local = stackLocalAddressValue(instruction, operandIndex,
                memory.displacement);
            if (local != null) return local;
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
     * Recover the type of `lea reg,[ebp-local]` from the Listing stack variable.
     * The local type is weak evidence unless it is manual or semantic, so two
     * independent callsites are still required before a primitive pointee changes
     * a callee prototype.  This connects Ghidra's already separated local lifetime
     * to the function boundary instead of guessing from rendered C casts.
     */
    private Value stackLocalAddressValue(Instruction instruction,
            int operandIndex, long rawStackOffset) {
        Function function = currentProgram.getFunctionManager()
            .getFunctionContaining(instruction.getAddress());
        if (function == null) return null;
        Set<Integer> offsets = new LinkedHashSet<>();
        if (rawStackOffset >= Integer.MIN_VALUE && rawStackOffset <= Integer.MAX_VALUE)
            offsets.add((int)rawStackOffset);
        for (Reference reference : instruction.getReferencesFrom()) {
            if (!(reference instanceof StackReference stack) ||
                    reference.getOperandIndex() != operandIndex) continue;
            offsets.add(stack.getStackOffset());
        }
        for (int offset : offsets) {
            Variable local = localAt(function, offset);
            if (local == null) continue;
            DataType localType = unwrap(local.getDataType());
            if (localType instanceof Array array) localType = unwrap(array.getDataType());
            if (localType == null || Undefined.isUndefined(localType)) continue;
            String type = meaningfulType(localType);
            if (type.isBlank() || type.startsWith("pointer:")) return null;
            boolean trusted = protectedSource(local.getSource()) || semanticType(localType);
            return new Value(-1, "pointer:" + type, local.getName(), trusted,
                "address of " + function.getName(true) + " stack local " +
                    local.getName() + " at " + addr(instruction.getAddress()));
        }
        return null;
    }

    private Variable localAt(Function function, int stackOffset) {
        for (Variable local : function.getLocalVariables()) {
            try {
                if (local.isStackVariable() && local.getStackOffset() == stackOffset)
                    return local;
            }
            catch (RuntimeException ignored) { }
        }
        return null;
    }

    /** Preserve an exact typed byte/word source across `mov ax/al,...`.  The
     * upper accumulator is intentionally not claimed; consumers must use the
     * same partial width before this evidence can cross a boundary. */
    private Value typedPartialMoveValue(Instruction instruction,
            String[] operands, Map<String, Value> registers,
            Map<Long, Value> stackParameters,
            Map<String, Value> stackSpills) {
        int width = operandWidth(operands[0]);
        if (width < 1 || width > 2 || operandWidth(operands[1]) != width)
            return null;
        Value source = sourceValue(instruction, 1, operands[1], registers,
            stackParameters, stackSpills, false);
        if (source == null || source.type.startsWith("pointer:") ||
                typeLength(source.type) != width) return null;
        return new Value(source.parameterOrdinal, source.type, source.name,
            source.trusted, source.evidence + "; exact partial-width MOV at " +
                addr(instruction.getAddress()), source.producer,
            Extension.NONE, width);
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
            // General propagation intentionally remains one level deep. Existing
            // T**/T*** Listing artifacts are not independent evidence and allowing
            // them to seed the fixed point makes pointer depth grow through cycles.
            // Explicit nested proposals (such as a proven output void**) use the
            // recursive proposal grammar directly and are still applied exactly.
            return pointed instanceof Pointer ? "" :
                "pointer:" + pointed.getPathName();
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
            // A DEFAULT/ANALYSIS `int *`, `uint *`, or `char *` is still only a
            // primitive machine view.  Treating it as semantic made generated
            // prototype guesses validate one another and defeat later independent
            // call-boundary evidence.  Nominal pointees retain semantic strength.
            if (pointed instanceof TypeDef) return true;
            pointed = unwrap(pointed);
            return pointed instanceof Enum || pointed instanceof Structure;
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
            // A source-family pointee is already an interprocedurally proven nominal
            // identity.  One consumer-local view must not replace it merely because
            // that view has a more concrete field layout at one call boundary.
            // Revisit the family in STTypeFamilyAnalyzer instead, where all defining
            // flows and named callees are considered together.
            if (path.contains("/Recovered/PointerShapes/RecoveredSourceFamily_"))
                return false;
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

    /**
     * Revisit an automation-owned generic machine word or primitive pointer when
     * at least two independent strong call boundaries establish one pointer role.
     * This is the conservative escape hatch for an old `/uint *` guess later
     * contradicted by dozens of `char *` producers.  Nominal aggregates and all
     * manual/imported targets remain protected; competing strong pointer roles
     * remain conflicts.
     */
    private boolean strongPrimitiveRoleRepair(String current, String proposed,
            Evidence value, int strongForProposed) {
        if (strongForProposed < 2 || !proposed.startsWith("pointer:") ||
                !primitiveOrVoidPointee(proposed)) return false;
        for (String alternative : value.types.keySet()) {
            if (alternative.equals(proposed)) continue;
            if (!value.strongTypeSites.getOrDefault(alternative, Set.of()).isEmpty())
                return false;
        }
        if (current.startsWith("pointer:"))
            return primitiveOrVoidPointee(current);
        return current.matches("/(?:undefined4|u?int(?:4)?|dword|pointer)");
    }

    /**
     * Retire a generated anonymous pointer view which escaped from an incoming stack slot after
     * that slot had already been overwritten with a machine word.  One trusted scalar boundary
     * chooses the signedness; a second same-width scalar observation (including the definite
     * output store which exposed the reuse) proves that the old pointer lifetime is gone.
     */
    private boolean strongScalarRoleRepair(String current, String proposed,
            Evidence value, int strongForProposed) {
        if (strongForProposed < 1 || !isMachineWordScalar(proposed) ||
                !current.matches("pointer:/SubmarineTitans/Recovered/PointerShapes/" +
                    "(?:AnonShape|RecoveredRecord)_[A-Za-z0-9_]+")) return false;
        int scalarSites = 0;
        for (String alternative : value.types.keySet()) {
            if (isMachineWordScalar(alternative)) {
                scalarSites += value.typeSites.getOrDefault(alternative, Set.of()).size();
                continue;
            }
            if (!value.strongTypeSites.getOrDefault(alternative, Set.of()).isEmpty())
                return false;
        }
        return scalarSites >= 2;
    }

    private boolean isMachineWordScalar(String specification) {
        if (specification == null || specification.startsWith("pointer:")) return false;
        if (typeLength(specification) != currentProgram.getDefaultPointerSize()) return false;
        String value = specification.toLowerCase(Locale.ROOT);
        return value.matches("/(?:int|uint|long|ulong|undefined4|dword|uint4)");
    }

    private boolean primitiveOrVoidPointee(String specification) {
        if (specification == null || !specification.startsWith("pointer:"))
            return false;
        String path = specification;
        while (path.startsWith("pointer:"))
            path = path.substring("pointer:".length());
        path = path.toLowerCase(Locale.ROOT);
        return path.matches("/(?:void|undefined(?:1|2|4|8)?|u?int(?:1|2|4|8)?|" +
            "byte|char|short|long|float|double|bool|dword|word)");
    }

    private int semanticRank(String specification) {
        if (specification == null || specification.isBlank()) return 0;
        String path = specification;
        while (path.startsWith("pointer:"))
            path = path.substring("pointer:".length());
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
            return "pointer:" + typeSpecification(pointer.getDataType());
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
    private boolean legacyDebugGenericReturn(Function function, Parameter target,
            TargetKey key, String currentType, String proposedType, int strongTypeCount) {
        // Old STDebugSymbolApplier versions marked an inferred __thiscall conversion as
        // USER_DEFINED.  Release only the narrow, recognizable residue: a generic pointer
        // return with direct strong callsite evidence.  Names and IMPORTED targets remain
        // protected, as do all parameters and non-pointer placeholders.
        return "return".equals(key.kind) && target.getSource() == SourceType.USER_DEFINED &&
            function.getSignatureSource() == SourceType.USER_DEFINED &&
            hasTag(function, "RECOVERED_DEBUG_NAME") && strongTypeCount > 0 &&
            currentType.toLowerCase(Locale.ROOT).matches("pointer:/undefined(?:[1248])?") &&
            proposedType.startsWith("pointer:") &&
            !proposedType.toLowerCase(Locale.ROOT).contains("undefined") &&
            !proposedType.equals("pointer:/void");
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
            out.write("type_apply\tname_apply\trepair\tprotected_override\tfunction_address\texpected_function\t" +
                "target_kind\ttarget_ordinal\texpected_target_name\texpected_target_type\t" +
                "expected_target_source\tproposed_name\tproposed_type\tconfidence\t" +
                "evidence_sites\treason\n");
            for (Proposal p : rows) out.write(bit(p.typeApply) + "\t" + bit(p.nameApply) +
                "\t" + bit(p.repair) + "\t" + bit(p.protectedOverride) + "\t" +
                addr(p.address) + "\t" +
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
            ",\"protected_override\":" + p.protectedOverride +
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

    private void writeByteBufferAudit(Path path) throws Exception {
        byteBufferAudits.sort(Comparator
            .comparing((ByteBufferAudit row) -> row.address)
            .thenComparingInt(row -> row.ordinal));
        try (BufferedWriter out = Files.newBufferedWriter(path,
                StandardCharsets.UTF_8)) {
            out.write("function_address\tfunction\tparameter_ordinal\tparameter_name\t" +
                "current_type\tdirect_call_sites\tbyte_reads\tbyte_writes\t" +
                "bulk_transports\twide_dereferences\tescapes\tcomplete\tapply\t" +
                "status\tevidence\n");
            for (ByteBufferAudit row : byteBufferAudits)
                out.write(addr(row.address) + "\t" + tsv(row.function) + "\t" +
                    row.ordinal + "\t" + tsv(row.parameterName) + "\t" +
                    tsv(row.currentType) + "\t" + row.directCallSites + "\t" +
                    row.byteReads + "\t" + row.byteWrites + "\t" +
                    row.bulkTransports + "\t" + row.wideDereferences + "\t" +
                    row.escapes + "\t" + bit(row.complete) + "\t" +
                    bit(row.apply) + "\t" + row.status + "\t" +
                    tsv(row.evidence) + "\n");
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
                    (typeLength(candidate) == effectiveLength(target.getFormalDataType()) ||
                     found != null && exactFullAccumulatorWrapperReturn(function,
                        new TargetKey(function.getEntryPoint(), kind, ordinal), target,
                        candidate, found) ||
                     found != null && exactFullAccumulatorBoundaryReturn(function,
                        new TargetKey(function.getEntryPoint(), kind, ordinal), target,
                        candidate, found));
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
            "type_propagation_cycle_length=" + propagationCycleLength,
            "type_propagation_cycle_dropped_seeds=" +
                propagationCycleDroppedSeeds,
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
            "protected_debug_overrides=" + rows.stream()
                .filter(r -> r.protectedOverride).count(),
            "conflicts=" + rows.stream().filter(r -> r.confidence.equals("conflict")).count(),
            "mutable_byte_buffer_candidates=" + byteBufferAudits.size(),
            "mutable_byte_buffer_auto_apply=" + byteBufferAudits.stream()
                .filter(ByteBufferAudit::apply).count(),
            "undefined_boundary_audit=prototype_undefined_boundary_audit.tsv",
            "byte_buffer_audit=prototype_byte_buffer_audit.tsv",
            "note=Only exact explicit argument counts propagate types. The audit preserves " +
                "deferred caller-cleanup words across calls, consumes actual callee purge bytes, " +
                "and separates incomplete CFG stack state from proven underflow.",
            "note_undefined=All undefined function parameters and returns are audited, " +
                "including no-evidence and conflicting rows which cannot be auto-applied.",
            "note_fixed_point=Qualified machine/callsite types are propagated through " +
                "parameter-forwarding wrappers inside one analyzer run. Oscillating states " +
                "are collapsed to their exact common seed intersection and rescanned once; " +
                "MAX_PASS parity never selects an ABI.",
            "note_scc=Mutually recursive boundary components require one unambiguous " +
                "protected, semantic, ABI, or previously machine-qualified anchor; " +
                "unanchored generic cycles cannot validate themselves.",
            "note_narrow_raw=Unobservable signedness on retained 1/2-byte parameters " +
                "falls back to byte/ushort; undefined4 never receives a raw fallback.",
            "note_byte_buffers=Mutable byte-pointer refinement requires complete local " +
                "machine def-use, byte-only dereferences apart from REP MOVS transport, " +
                "both reads and writes, and at least two exact direct callsites.",
            "note_returns=Unknown EAX producers are traced into trusted arguments, this receivers, typed stores, and return-forwarding wrappers.",
            "note_manual=USER_DEFINED targets are preserved except generic pointer returns " +
                "created by the legacy debug-symbol convention conversion and independently " +
                "disproved by strong callsite evidence; IMPORTED targets are never overridden.",
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
        final Long addressedStackOffset;
        final boolean flowLocal;
        final Address flowOrigin;
        Value(int parameterOrdinal, String type, String name, boolean trusted, String evidence) {
            this(parameterOrdinal, type, name, trusted, evidence, null);
        }
        Value(int parameterOrdinal, String type, String name, boolean trusted, String evidence,
                Function producer) {
            this(parameterOrdinal, type, name, trusted, evidence, producer,
                Extension.NONE, 0, false, false, null, false, null);
        }
        Value(int parameterOrdinal, String type, String name, boolean trusted, String evidence,
                Function producer, Extension extension, int sourceWidth) {
            this(parameterOrdinal, type, name, trusted, evidence, producer,
                extension, sourceWidth, false, false, null, false, null);
        }
        Value(int parameterOrdinal, String type, String name, boolean trusted, String evidence,
                Function producer, Extension extension, int sourceWidth,
                boolean literal, boolean literalSigned) {
            this(parameterOrdinal, type, name, trusted, evidence, producer, extension,
                sourceWidth, literal, literalSigned, null, false, null);
        }
        Value(int parameterOrdinal, String type, String name, boolean trusted, String evidence,
                Function producer, Extension extension, int sourceWidth,
                boolean literal, boolean literalSigned, Long addressedStackOffset,
                boolean flowLocal) {
            this(parameterOrdinal, type, name, trusted, evidence, producer, extension,
                sourceWidth, literal, literalSigned, addressedStackOffset, flowLocal, null);
        }
        Value(int parameterOrdinal, String type, String name, boolean trusted, String evidence,
                Function producer, Extension extension, int sourceWidth,
                boolean literal, boolean literalSigned, Long addressedStackOffset,
                boolean flowLocal, Address flowOrigin) {
            this.parameterOrdinal = parameterOrdinal; this.type = type == null ? "" : type;
            this.name = name == null ? "" : name; this.trusted = trusted;
            this.evidence = evidence == null ? "" : evidence;
            this.producer = producer;
            this.extension = extension == null ? Extension.NONE : extension;
            this.sourceWidth = sourceWidth;
            this.literal = literal;
            this.literalSigned = literalSigned;
            this.addressedStackOffset = addressedStackOffset;
            this.flowLocal = flowLocal;
            this.flowOrigin = flowOrigin;
        }
        Value flowLocalCopy(Address origin) {
            return new Value(parameterOrdinal, type, name, trusted, evidence, producer,
                extension, sourceWidth, literal, literalSigned, addressedStackOffset, true,
                origin);
        }
        static Value literal(long value, String site) {
            boolean signed = value < 0;
            return new Value(-1, signed ? "/int" : "/uint", "", false,
                "literal " + value + " at " + site, null, Extension.NONE, 0,
                true, signed);
        }
    }
    private record AccumulatorState(Address address, boolean fullPointer) { }
    private record OutputState(Address address, int aliases, boolean wrote) { }
    private record ByteAliasState(Address address, int registerAliases,
        Set<Long> stackAliases) { }
    private enum Extension { NONE, SIGNED, UNSIGNED }
    private static class StoreType {
        final String type, evidence; final boolean strong;
        StoreType(String type, boolean strong, String evidence) {
            this.type = type; this.strong = strong; this.evidence = evidence;
        }
    }
    private static class PointerOutputEvidence {
        final Set<String> addressSites = new TreeSet<>();
        final Set<String> nullSites = new TreeSet<>();
        final Set<String> nonAddressSites = new TreeSet<>();
    }
    private static class ByteBufferProof {
        final int directCallSites;
        final Set<String> byteReads = new TreeSet<>();
        final Set<String> byteWrites = new TreeSet<>();
        final Set<String> bulkTransports = new TreeSet<>();
        final Set<String> wideDereferences = new TreeSet<>();
        final Set<String> escapes = new TreeSet<>();
        boolean complete = true;
        boolean qualifies;
        String failure = "";
        ByteBufferProof(int directCallSites) {
            this.directCallSites = directCallSites;
        }
        String status() {
            if (!complete) return failure.isBlank() ? "incomplete_cfg" : failure;
            if (qualifies) return "automatic_mutable_byte_buffer";
            if (!wideDereferences.isEmpty()) return "mixed_or_wide_pointee";
            if (!escapes.isEmpty()) return "escaped_local_proof";
            if (byteReads.isEmpty()) return "no_byte_read";
            if (byteWrites.isEmpty()) return "read_only_byte_view";
            if (directCallSites < 2) return "insufficient_direct_calls";
            return "review";
        }
        String evidence() {
            return "complete mutable byte-buffer machine proof: direct_calls=" +
                directCallSites + ", byte_reads=" + byteReads.size() +
                ", byte_writes=" + byteWrites.size() + ", rep_movs_transports=" +
                bulkTransports.size() + ", wide_dereferences=" +
                wideDereferences.size() + ", escapes=" + escapes.size() +
                (failure.isBlank() ? "" : ", failure=" + failure) +
                "; byte_read_sites=" + sampleEvidence(byteReads) +
                "; byte_write_sites=" + sampleEvidence(byteWrites) +
                (wideDereferences.isEmpty() ? "" : "; wide_sites=" +
                    sampleEvidence(wideDereferences)) +
                (escapes.isEmpty() ? "" : "; escape_sites=" +
                    sampleEvidence(escapes));
        }
        private static String sampleEvidence(Set<String> values) {
            if (values.isEmpty()) return "-";
            List<String> result = new ArrayList<>();
            for (String value : values) {
                result.add(value);
                if (result.size() == 8) break;
            }
            if (values.size() > result.size())
                result.add("... +" + (values.size() - result.size()));
            return String.join(" | ", result);
        }
    }
    private record ByteBufferAudit(Address address, String function, int ordinal,
        String parameterName, String currentType, int directCallSites, int byteReads,
        int byteWrites, int bulkTransports, int wideDereferences, int escapes,
        boolean complete, boolean apply, String status, String evidence) { }
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
        final boolean protectedOverride;
        final Set<String> sites;
        Proposal(Function function, Parameter target, String kind, int ordinal,
                String expectedTargetType, String expectedTargetName, String proposedType,
                String proposedName, boolean typeApply, boolean nameApply, boolean repair,
                boolean protectedOverride, String confidence, String reason, Set<String> sites) {
            address = function.getEntryPoint(); expectedFunction = function.getName(true);
            this.kind = kind; this.ordinal = ordinal;
            this.expectedTargetName = expectedTargetName;
            this.expectedTargetType = expectedTargetType;
            expectedTargetSource = target.getSource().toString();
            this.proposedName = proposedName; this.proposedType = proposedType;
            this.typeApply = typeApply; this.nameApply = nameApply;
            this.repair = repair;
            this.protectedOverride = protectedOverride;
            this.confidence = confidence; this.reason = reason;
            this.sites = new TreeSet<>(sites);
        }
    }
}
