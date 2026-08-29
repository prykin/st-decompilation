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
import java.util.ArrayDeque;
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
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeComponent;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.TypeDef;
import ghidra.program.model.data.Undefined;
import ghidra.program.model.data.VoidDataType;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.FunctionTag;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.scalar.Scalar;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.StackReference;
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
        // Read-only script: do not leave GhidraScript's implicit transaction around runScript().
        end(true);
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

        int typedSingletonCalls = 0;
        functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            monitor.checkCancelled();
            Function caller = functions.next();
            if (caller.isThunk() || caller.isExternal() || isLibrary(caller)) continue;
            typedSingletonCalls += analyzeTypedProducerReceivers(caller);
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
        writeSummary(directory.resolve("method_owner_summary.txt"), proposals, callerMethods,
            typedSingletonCalls);

        println("Method-owner analysis complete: " + directory.toAbsolutePath().normalize());
        println("Named caller methods: " + callerMethods + ", candidates: " +
            proposals.size() + ", owner_apply: " +
            proposals.stream().filter(row -> row.ownerApply).count() +
            ", owner_repair: " +
            proposals.stream().filter(row -> row.repairApply).count() +
            ", convention_apply: " +
            proposals.stream().filter(row -> row.conventionApply).count() +
            ", typed_singleton_calls: " + typedSingletonCalls);
    }

    private void analyzeCaller(Function caller, String owner) {
        traceIncomingThisCalls(caller, owner, null, true);
    }

    /**
     * Trace the unadjusted incoming receiver over the machine CFG.  The previous
     * address-order walk lost callee-saved ESI/EDI/EBX aliases whenever a later
     * branch block happened to be listed before its predecessor.  That hid exact
     * caller ownership for large helper families and encouraged weaker anonymous
     * receiver types downstream.  At joins retain only facts which every reached
     * predecessor agrees on; calls kill volatile registers but not stable EBP
     * spills or callee-saved aliases.
     */
    private Set<Address> traceIncomingThisCalls(Function caller, String owner,
            Function targetFilter, boolean recordCandidates) {
        Set<Address> matched = new TreeSet<>();
        Set<Address> recorded = new HashSet<>();
        Map<Address, ThisFlowState> incoming = new TreeMap<>();
        ArrayDeque<Address> pending = new ArrayDeque<>();
        ThisFlowState entry = new ThisFlowState();
        entry.registers.put("ECX", new ThisValue(0));
        incoming.put(caller.getEntryPoint(), entry);
        pending.add(caller.getEntryPoint());

        while (!pending.isEmpty()) {
            Address address = pending.removeFirst();
            Instruction instruction = currentProgram.getListing().getInstructionAt(address);
            if (instruction == null || !caller.getBody().contains(address)) continue;
            ThisFlowState state = incoming.get(address).copy();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            String[] operands = splitOperands(instruction.toString().toUpperCase(Locale.ROOT));
            boolean call = "CALL".equals(mnemonic);
            if (call) {
                Function target = calledFunction(instruction);
                ThisValue receiver = state.registers.get("ECX");
                if (target != null && receiver != null && receiver.offset == 0) {
                    if (targetFilter != null &&
                            target.getEntryPoint().equals(targetFilter.getEntryPoint()))
                        matched.add(address);
                    if (recordCandidates && isCandidate(target) && recorded.add(address)) {
                        Candidate candidate = candidates.computeIfAbsent(target.getEntryPoint(),
                            ignored -> new Candidate(target));
                        candidate.ownerCalls.merge(owner, 1, Integer::sum);
                        candidate.attributedCallers.add(caller.getEntryPoint());
                        candidate.callSites.add(addr(address) + " " + caller.getName(true) +
                            " [CFG-exact incoming this]");
                    }
                }
                state.registers.remove("EAX");
                state.registers.remove("ECX");
                state.registers.remove("EDX");
            }
            else updateRegisters(mnemonic, operands, state.registers, state.stackSpills);

            Set<Address> successors = new TreeSet<>();
            Address fallthrough = instruction.getFallThrough();
            if (fallthrough != null && caller.getBody().contains(fallthrough))
                successors.add(fallthrough);
            if (!call) {
                for (Address flow : instruction.getFlows())
                    if (caller.getBody().contains(flow)) successors.add(flow);
            }
            for (Address successor : successors) {
                if (mergeIncoming(incoming, successor, state)) pending.addLast(successor);
            }
        }
        return matched;
    }

    private boolean mergeIncoming(Map<Address, ThisFlowState> states, Address address,
            ThisFlowState incoming) {
        ThisFlowState current = states.get(address);
        if (current == null) {
            states.put(address, incoming.copy());
            return true;
        }
        ThisFlowState merged = current.intersection(incoming);
        if (merged.equals(current)) return false;
        states.put(address, merged);
        return true;
    }

    /**
     * A typed global singleton loaded into ECX is stronger owner evidence than
     * the temporary anonymous receiver which an earlier hidden-this pass had to
     * invent.  Track the singleton through register copies and stable EBP spills;
     * never derive an owner from an anonymous/generated structure.
     */
    private int analyzeTypedSingletonReceivers(Function caller) {
        Map<String, String> registers = new HashMap<>();
        Map<String, String> stackSpills = new HashMap<>();
        int result = 0;
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(caller.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            String[] operands = splitOperands(instruction.toString().toUpperCase(Locale.ROOT));
            if ("CALL".equals(mnemonic)) {
                Function target = calledFunction(instruction);
                String owner = registers.get("ECX");
                if (target != null && owner != null && isCandidate(target)) {
                    Candidate candidate = candidates.computeIfAbsent(target.getEntryPoint(),
                        ignored -> new Candidate(target));
                    candidate.ownerCalls.merge(owner, 1, Integer::sum);
                    candidate.attributedCallers.add(caller.getEntryPoint());
                    candidate.callSites.add(addr(instruction.getAddress()) + " " +
                        caller.getName(true) + " [typed global singleton]");
                    result++;
                }
                registers.remove("EAX");
                registers.remove("ECX");
                registers.remove("EDX");
                continue;
            }
            updateOwnerRegisters(instruction, mnemonic, operands, registers, stackSpills);
        }
        return result;
    }

    /**
     * Propagate exact concrete pointer producers over the caller CFG.  The old
     * owner pass recognized only the caller's own auto-this and a linear load
     * from a typed global singleton.  It consequently discarded equally strong
     * machine boundaries: concrete pointer parameters, trusted pointer returns,
     * and concrete pointer members loaded from an already typed object.
     *
     * Facts survive a join only when every predecessor agrees on the same
     * semantic owner.  Calls kill volatile facts, stack parameters are matched
     * through Ghidra StackReference offsets, and a member load is accepted only
     * at the exact start of one concrete pointer component.  No decompiler local
     * type or source-looking name participates in the proof.
     */
    private int analyzeTypedProducerReceivers(Function caller) {
        Map<Integer, TypedOwner> entryStack = new TreeMap<>();
        TypedOwnerFlowState entry = new TypedOwnerFlowState();
        for (Parameter parameter : caller.getParameters()) {
            if (parameter.isAutoParameter()) continue;
            String owner = concreteOwner(parameter.getDataType());
            if (owner.isBlank()) continue;
            TypedOwner value = new TypedOwner(owner,
                "typed parameter " + parameter.getName());
            if (parameter.isRegisterVariable() && parameter.getRegister() != null)
                entry.registers.put(canonicalRegister(parameter.getRegister().getName()), value);
            else if (parameter.isStackVariable())
                entryStack.put(parameter.getStackOffset(), value);
        }
        entry.stack.putAll(entryStack);

        Map<Address, TypedOwnerFlowState> incoming = new TreeMap<>();
        ArrayDeque<Address> pending = new ArrayDeque<>();
        incoming.put(caller.getEntryPoint(), entry);
        pending.add(caller.getEntryPoint());
        Set<String> recorded = new HashSet<>();
        int result = 0;

        while (!pending.isEmpty()) {
            Address address = pending.removeFirst();
            Instruction instruction = currentProgram.getListing().getInstructionAt(address);
            if (instruction == null || !caller.getBody().contains(address)) continue;
            TypedOwnerFlowState state = incoming.get(address).copy();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            String[] operands = splitOperands(instruction.toString().toUpperCase(Locale.ROOT));
            boolean call = "CALL".equals(mnemonic);

            if (call) {
                Function target = calledFunction(instruction);
                TypedOwner receiver = state.registers.get("ECX");
                if (target != null && receiver != null && isCandidate(target)) {
                    String key = addr(instruction.getAddress()) + "|" + receiver.owner;
                    if (recorded.add(key)) {
                        Candidate candidate = candidates.computeIfAbsent(target.getEntryPoint(),
                            ignored -> new Candidate(target));
                        candidate.ownerCalls.merge(receiver.owner, 1, Integer::sum);
                        candidate.attributedCallers.add(caller.getEntryPoint());
                        candidate.callSites.add(addr(instruction.getAddress()) + " " +
                            caller.getName(true) + " [CFG-exact " + receiver.reason + "]");
                        result++;
                    }
                }
                state.registers.remove("EAX");
                state.registers.remove("ECX");
                state.registers.remove("EDX");
                String returnedOwner = target == null ? "" :
                    trustedConcreteReturnOwner(target);
                if (!returnedOwner.isBlank())
                    state.registers.put("EAX", new TypedOwner(returnedOwner,
                        "trusted return from " + target.getName(true)));
            }
            else updateTypedOwnerState(instruction, mnemonic, operands, state);

            Set<Address> successors = new TreeSet<>();
            Address fallthrough = instruction.getFallThrough();
            if (fallthrough != null && caller.getBody().contains(fallthrough))
                successors.add(fallthrough);
            if (!call) {
                for (Address flow : instruction.getFlows())
                    if (caller.getBody().contains(flow)) successors.add(flow);
            }
            for (Address successor : successors) {
                TypedOwnerFlowState current = incoming.get(successor);
                if (current == null) {
                    incoming.put(successor, state.copy());
                    pending.addLast(successor);
                    continue;
                }
                TypedOwnerFlowState merged = current.intersection(state);
                if (!merged.equals(current)) {
                    incoming.put(successor, merged);
                    pending.addLast(successor);
                }
            }
        }
        return result;
    }

    private void updateTypedOwnerState(Instruction instruction, String mnemonic,
            String[] operands, TypedOwnerFlowState state) {
        if (operands.length == 0) return;
        String destination = cleanRegister(operands[0]);
        Integer destinationStack = stackOffset(instruction, 0);
        if ("MOV".equals(mnemonic) && operands.length >= 2) {
            TypedOwner source = typedOwnerSource(instruction, 1, operands[1], state);
            if (destination != null) {
                if (isFullRegister(operands[0]) && source != null)
                    state.registers.put(destination, source);
                else state.registers.remove(destination);
            }
            else if (destinationStack != null) {
                if (source == null) state.stack.remove(destinationStack);
                else state.stack.put(destinationStack, source);
            }
            return;
        }
        if ("LEA".equals(mnemonic) && destination != null && operands.length >= 2) {
            String owner = typedGlobalOwner(instruction, false);
            if (owner == null) state.registers.remove(destination);
            else state.registers.put(destination,
                new TypedOwner(owner, "typed global object address"));
            return;
        }
        if (destination != null && !Set.of("CMP", "TEST", "PUSH", "JMP", "RET")
                .contains(mnemonic)) state.registers.remove(destination);
        if (destinationStack != null && !Set.of("CMP", "TEST", "PUSH")
                .contains(mnemonic)) state.stack.remove(destinationStack);
    }

    private TypedOwner typedOwnerSource(Instruction instruction, int operand,
            String rendered, TypedOwnerFlowState state) {
        String register = cleanRegister(rendered);
        if (register != null && isFullRegister(rendered))
            return state.registers.get(register);
        Integer stack = stackOffset(instruction, operand);
        if (stack != null) return state.stack.get(stack);
        MemoryExpr memory = memoryExpr(rendered);
        if (memory != null) {
            TypedOwner base = state.registers.get(memory.register);
            if (base != null) {
                String owner = exactPointerMemberOwner(base.owner, memory.displacement);
                if (!owner.isBlank()) return new TypedOwner(owner,
                    "typed member of " + base.owner + "+0x" +
                        Long.toHexString(memory.displacement).toUpperCase(Locale.ROOT));
            }
        }
        String global = typedGlobalOwner(instruction, true);
        return global == null ? null : new TypedOwner(global, "typed global singleton");
    }

    private Integer stackOffset(Instruction instruction, int operand) {
        for (Reference reference : instruction.getReferencesFrom())
            if (reference.getOperandIndex() == operand &&
                    reference instanceof StackReference stack)
                return stack.getStackOffset();
        return null;
    }

    private String exactPointerMemberOwner(String owner, long offset) {
        if (offset < 0 || offset > Integer.MAX_VALUE) return "";
        String path = ownerTypePath(owner);
        DataType type = path.isBlank() ? null : dataTypes.getDataType(path);
        if (!(type instanceof Structure structure)) return "";
        DataTypeComponent component = structure.getComponentAt((int)offset);
        if (component == null || component.getOffset() != offset) return "";
        return concreteOwner(component.getDataType());
    }

    private String trustedConcreteReturnOwner(Function function) {
        if (function == null || function.getSignatureSource() == SourceType.DEFAULT) return "";
        return concreteOwner(function.getReturnType());
    }

    private String concreteOwner(DataType type) {
        DataType value = unwrap(type);
        if (!(value instanceof Pointer pointer)) return "";
        DataType pointee = unwrap(pointer.getDataType());
        return pointee instanceof Structure structure && namedReceiverType(structure) ?
            structure.getName() : "";
    }

    private void updateOwnerRegisters(Instruction instruction, String mnemonic,
            String[] operands, Map<String, String> registers,
            Map<String, String> stackSpills) {
        if (operands.length == 0) return;
        String destination = cleanRegister(operands[0]);
        MemoryExpr destinationMemory = memoryExpr(operands[0]);
        if ("MOV".equals(mnemonic) && destinationMemory != null && operands.length >= 2 &&
                isStackMemory(destinationMemory)) {
            String source = cleanRegister(operands[1]);
            String owner = source != null && isFullRegister(operands[1]) ?
                registers.get(source) : null;
            String key = stackKey(destinationMemory);
            if (owner == null) stackSpills.remove(key);
            else stackSpills.put(key, owner);
            return;
        }
        if ("MOV".equals(mnemonic) && destination != null && operands.length >= 2) {
            if (!isFullRegister(operands[0])) {
                registers.remove(destination);
                return;
            }
            String source = cleanRegister(operands[1]);
            MemoryExpr sourceMemory = memoryExpr(operands[1]);
            String owner = source != null && isFullRegister(operands[1]) ?
                registers.get(source) : sourceMemory != null && isStackMemory(sourceMemory) ?
                    stackSpills.get(stackKey(sourceMemory)) :
                    typedGlobalOwner(instruction, true);
            if (owner == null) registers.remove(destination);
            else registers.put(destination, owner);
            return;
        }
        if ("LEA".equals(mnemonic) && destination != null && operands.length >= 2) {
            String owner = isFullRegister(operands[0]) ?
                typedGlobalOwner(instruction, false) : null;
            if (owner == null) registers.remove(destination);
            else registers.put(destination, owner);
            return;
        }
        if (destination != null && !Set.of("CMP", "TEST", "PUSH", "JMP", "RET")
                .contains(mnemonic)) registers.remove(destination);
    }

    private String typedGlobalOwner(Instruction instruction, boolean requirePointer) {
        String result = null;
        for (Reference reference : instruction.getReferencesFrom()) {
            if (!reference.getReferenceType().isData()) continue;
            Data data = currentProgram.getListing().getDefinedDataAt(reference.getToAddress());
            if (data == null) continue;
            DataType type = unwrap(data.getDataType());
            if (requirePointer) {
                if (!(type instanceof Pointer pointer)) continue;
                type = unwrap(pointer.getDataType());
            }
            if (!(type instanceof Structure structure) || !namedReceiverType(structure)) continue;
            String owner = structure.getName();
            if (result != null && !result.equals(owner)) return null;
            result = owner;
        }
        return result;
    }

    private DataType unwrap(DataType type) {
        Set<String> seen = new TreeSet<>();
        while (type instanceof TypeDef typedef && seen.add(type.getPathName()))
            type = typedef.getBaseDataType();
        return type;
    }

    private boolean namedReceiverType(Structure structure) {
        String path = structure.getPathName();
        return !path.contains("/Recovered/HiddenThis/") &&
            !path.contains("/Recovered/PointerShapes/") &&
            !path.contains("/Recovered/ClassPointees/") &&
            !path.contains("/VTables/") && !structure.getName().startsWith("Anon");
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
        int receiverForwards = incomingThisForwardCalls(function);
        boolean entryReceiverCapture = entryIncomingEcxCapture(function);
        boolean retStackMatches = returnStackMatches(function);
        String ownerTypePath = owner.isBlank() ? "" : ownerTypePath(owner);
        boolean scriptOwned = hasTag(function, TAG);
        boolean synthetic = isSynthetic(function.getName()) || scriptOwned;
        boolean stackReceiverConvention = Set.of("__stdcall", "__cdecl")
            .contains(function.getCallingConventionName()) && entryReceiverCapture &&
            receiverForwards > 0 && edxUses == 0 && retStackMatches;
        boolean conventionCandidate = "__thiscall".equals(function.getCallingConventionName()) ||
            "__fastcall".equals(function.getCallingConventionName()) ||
            stackReceiverConvention;
        boolean manualName = protectedSource(function.getSymbol().getSource());
        boolean manualSignature = protectedSource(function.getSignatureSource());
        int directCallers = 0;
        int receiverAliasCallers = 0;
        for (Function caller : logicalCallingFunctions(function)) {
            directCallers++;
            if (callsTargetWithIncomingEcx(caller, function)) receiverAliasCallers++;
        }
        int attributedCallers = candidate.attributedCallers.size();
        boolean adequateCoverage = receiverAliasCallers <= Math.max(3, attributedCallers * 3);
        boolean sharedReceiverHelper = directCallers >= 8 && receiverAliasCallers >= 4 &&
            receiverAliasCallers * 2 >= directCallers;
        boolean repairApply = scriptOwned && !existingOwner.isBlank() &&
            sharedReceiverHelper && attributedCallers * 3 < receiverAliasCallers &&
            !manualName && !manualSignature;
        boolean physicalOwner = !ownerTypePath.isBlank() &&
            uniquePrimaryPhysicalVtable(ownerTypePath);
        // Two differently typed callers do not prove that an already recovered method is a
        // shared helper.  In this image the same primary-base receiver routinely arrives
        // through a base and a derived view; treating that ordinary polymorphism as a repair
        // erased valid STMineSetC/STFishC/TLO owners and cascaded into hundreds of void-this
        // indirect calls.  Removing a script-owned owner requires the closed, dense direct-
        // caller family above.  Conflicting sparse votes remain review-only.
        boolean strong = !owner.isBlank() && !ownerTypePath.isBlank() && synthetic &&
            conventionCandidate && adequateCoverage && attributedCallers >= 2 &&
            physicalOwner &&
            (!"__fastcall".equals(function.getCallingConventionName()) || edxUses == 0) &&
            agreedCalls >= 2 &&
            receiverConversionCompatible(function, ownerTypePath);
        boolean alreadyApplied = scriptOwned && !repairApply && !existingOwner.isBlank() &&
            existingOwner.equals(owner) && adequateCoverage;
        String proposedName = owner.isBlank() ? "" : owner + "::sub_" + addr(function.getEntryPoint());
        if (alreadyApplied) proposedName = function.getName(true);
        if (repairApply) proposedName = "sub_" + addr(function.getEntryPoint());
        boolean ownerApply = (strong || alreadyApplied) && !manualName &&
            !function.getName(true).equals(proposedName);
        boolean parameterApply = (strong || alreadyApplied) && !manualSignature &&
            edxUses == 0 && stackParameterUses == 0 &&
            (receiverOnlyFastcallSignature(function) || alreadyApplied &&
                "__thiscall".equals(function.getCallingConventionName()) &&
                !explicitParameters(function).isEmpty());
        boolean conventionApply = (strong || alreadyApplied) && !manualSignature &&
            !"__thiscall".equals(function.getCallingConventionName()) &&
            (parameterApply || stackReceiverConvention);
        boolean thisTypeApply = (strong || alreadyApplied) && !manualSignature &&
            ("__thiscall".equals(function.getCallingConventionName()) ||
                conventionApply) &&
            !receiverTypeMatches(function, ownerTypePath);
        String confidence = strong || alreadyApplied ? "high" :
            owners.size() == 1 ? "medium" : "conflict";
        List<String> reasons = new ArrayList<>();
        reasons.add("this_call_owners=" + owners);
        reasons.add("agreed_this_calls=" + agreedCalls);
        reasons.add("incoming_this_accesses=" + receiverAccesses);
        reasons.add("incoming_edx_uses=" + edxUses);
        reasons.add("incoming_stack_parameter_uses=" + stackParameterUses);
        reasons.add("incoming_this_forward_calls=" + receiverForwards);
        reasons.add("entry_incoming_ecx_capture=" + entryReceiverCapture);
        reasons.add("ret_stack_matches_explicit_parameters=" + retStackMatches);
        reasons.add("direct_non_thunk_callers=" + directCallers);
        reasons.add("incoming_ecx_receiver_callers=" + receiverAliasCallers);
        reasons.add("attributed_named_callers=" + attributedCallers);
        reasons.add("owner_evidence_coverage=" + (adequateCoverage ? "adequate" : "weak"));
        reasons.add("unique_primary_physical_vtable=" + physicalOwner);
        if (ownerTypePath.isBlank()) reasons.add("owner_data_type_missing");
        if (!conventionCandidate) reasons.add("calling_convention_not_receiver_compatible");
        if (stackReceiverConvention)
            reasons.add("callee_closed_hidden_ecx_receiver_transport");
        if (attributedCallers < 2)
            reasons.add("requires_two_independent_named_caller_functions");
        if ((strong || alreadyApplied) &&
                !"__thiscall".equals(function.getCallingConventionName()) &&
                !conventionApply &&
                !receiverTypeMatches(function, ownerTypePath))
            reasons.add("receiver_type_review_requires_thiscall_conversion");
        if (manualName) reasons.add("manual_name_preserved");
        if (manualSignature) reasons.add("manual_signature_preserved");
        if (alreadyApplied) reasons.add("previously_applied");
        if (repairApply) reasons.add("repair_script_owned_owner_shared_across_many_callers");
        return new Proposal(function, owner, proposedName, ownerTypePath, agreedCalls,
            receiverAccesses, edxUses, stackParameterUses, candidate.ownerCalls,
            candidate.callSites, ownerApply, conventionApply, thisTypeApply,
            parameterApply, repairApply, directCallers, receiverAliasCallers,
            attributedCallers,
            repairApply ? "repair" : confidence, String.join("; ", reasons));
    }

    /**
     * New semantic ownership requires a real primary physical vptr, not merely
     * matching object geometry.  The offset-zero member must point at one
     * accepted vtable structure and that same datatype may not be the primary
     * vptr of a different semantic class.  Secondary subobject vtables therefore
     * cannot win this proof by datatype iteration order.
     */
    private boolean uniquePrimaryPhysicalVtable(String ownerTypePath) {
        DataType type = dataTypes.getDataType(ownerTypePath);
        if (!(type instanceof Structure owner) || owner.isZeroLength()) return false;
        DataTypeComponent component = owner.getComponentAt(0);
        if (component == null || component.getOffset() != 0) return false;
        DataType member = unwrap(component.getDataType());
        if (!(member instanceof Pointer pointer)) return false;
        DataType target = unwrap(pointer.getDataType());
        if (!(target instanceof Structure vtable) ||
                !vtable.getPathName().contains("/Recovered/VTables/") ||
                vtable.getName().contains("_at_")) return false;

        int owners = 0;
        java.util.Iterator<Structure> structures = dataTypes.getAllStructures();
        while (structures.hasNext()) {
            Structure candidate = structures.next();
            if (!namedReceiverType(candidate) || candidate.isZeroLength()) continue;
            DataTypeComponent first = candidate.getComponentAt(0);
            if (first == null || first.getOffset() != 0) continue;
            DataType firstType = unwrap(first.getDataType());
            if (!(firstType instanceof Pointer firstPointer)) continue;
            DataType pointed = unwrap(firstPointer.getDataType());
            if (pointed != null && pointed.getPathName().equals(vtable.getPathName())) owners++;
            if (owners > 1) return false;
        }
        return owners == 1;
    }

    private boolean callsTargetWithIncomingEcx(Function caller, Function target) {
        return !traceIncomingThisCalls(caller, "", target, false).isEmpty();
    }

    private boolean receiverOnlyFastcallSignature(Function function) {
        if (!"__fastcall".equals(function.getCallingConventionName())) return false;
        List<Parameter> parameters = explicitParameters(function);
        if (parameters.size() != 1) return false;
        Parameter parameter = parameters.get(0);
        return parameter.isRegisterVariable() && parameter.getRegister() != null &&
            "ECX".equals(canonicalRegister(parameter.getRegister().getName()));
    }

    /**
     * Converting a one-register fastcall helper into Owner::__thiscall changes the semantic
     * receiver type globally.  That is safe only when the existing ECX parameter is generic
     * machine storage or already names the proposed owner.  A concrete foreign/base pointer
     * (for example STGameObjC *) is independent evidence and must not be narrowed merely
     * because the currently observed callers all belong to one derived class.
     */
    private boolean receiverConversionCompatible(Function function, String ownerTypePath) {
        if (!"__fastcall".equals(function.getCallingConventionName())) return true;
        List<Parameter> parameters = explicitParameters(function);
        if (parameters.size() != 1) return false;
        DataType type = parameters.get(0).getDataType();
        if (!(type instanceof Pointer pointer)) return Undefined.isUndefined(type);
        DataType pointee = unwrap(pointer.getDataType());
        if (pointee instanceof VoidDataType || Undefined.isUndefined(pointee)) return true;
        return pointee.getPathName().equals(ownerTypePath);
    }

    private List<Parameter> explicitParameters(Function function) {
        List<Parameter> result = new ArrayList<>();
        for (Parameter parameter : function.getParameters())
            if (!parameter.isAutoParameter()) result.add(parameter);
        return result;
    }

    private int incomingThisAccesses(Function function) {
        Map<String, ThisValue> registers = new HashMap<>();
        Map<String, ThisValue> stackSpills = new HashMap<>();
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
            else updateRegisters(mnemonic, operands, registers, stackSpills);
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

    /**
     * Count direct calls which receive the callee's original, unadjusted ECX value.
     * The value may travel through a callee-saved register or a fixed EBP spill.  This
     * is deliberately a transport proof only: semantic ownership still comes from the
     * independently typed callers collected above.
     */
    private int incomingThisForwardCalls(Function function) {
        Map<String, ThisValue> registers = new HashMap<>();
        Map<String, ThisValue> stackSpills = new HashMap<>();
        registers.put("ECX", new ThisValue(0));
        int calls = 0;
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            String[] operands = splitOperands(instruction.toString().toUpperCase(Locale.ROOT));
            if ("CALL".equals(mnemonic)) {
                ThisValue receiver = registers.get("ECX");
                if (calledFunction(instruction) != null && receiver != null &&
                        receiver.offset == 0) calls++;
                registers.remove("EAX");
                registers.remove("ECX");
                registers.remove("EDX");
            }
            else updateRegisters(mnemonic, operands, registers, stackSpills);
        }
        return calls;
    }

    /**
     * Require an entry-prologue capture of incoming ECX before any call, branch, or
     * redefinition.  This excludes ordinary stdcall helpers which merely happen to
     * inherit a caller's volatile ECX value at one callsite.
     */
    private boolean entryIncomingEcxCapture(Function function) {
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        int seen = 0;
        while (instructions.hasNext() && seen++ < 32) {
            Instruction instruction = instructions.next();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            String[] operands = splitOperands(instruction.toString().toUpperCase(Locale.ROOT));
            if ("MOV".equals(mnemonic) && operands.length >= 2 &&
                    "ECX".equals(cleanRegister(operands[1])) &&
                    isFullRegister(operands[1])) {
                String destination = cleanRegister(operands[0]);
                MemoryExpr memory = memoryExpr(operands[0]);
                if (destination != null && Set.of("EBX", "ESI", "EDI")
                        .contains(destination) && isFullRegister(operands[0])) return true;
                if (memory != null && isStackMemory(memory)) return true;
            }
            if (instruction.getFlowType().isCall() || instruction.getFlowType().isJump())
                return false;
            if (writesIncomingEcx(mnemonic, operands)) return false;
        }
        return false;
    }

    private boolean writesIncomingEcx(String mnemonic, String[] operands) {
        if (operands.length == 0 || !"ECX".equals(cleanRegister(operands[0])) ||
                !isFullRegister(operands[0])) return false;
        return !Set.of("CMP", "TEST", "PUSH").contains(mnemonic);
    }

    private boolean returnStackMatches(Function function) {
        Set<Long> pops = new TreeSet<>();
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            if (!"RET".equals(mnemonic) && !"RETF".equals(mnemonic)) continue;
            Scalar scalar = instruction.getScalar(0);
            pops.add(scalar == null ? 0 : scalar.getUnsignedValue());
        }
        return pops.size() == 1 && pops.iterator().next() == expectedStackBytes(function);
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

    private void updateRegisters(String mnemonic, String[] operands,
            Map<String, ThisValue> registers, Map<String, ThisValue> stackSpills) {
        if (operands.length == 0) return;
        String destination = cleanRegister(operands[0]);
        MemoryExpr destinationMemory = memoryExpr(operands[0]);
        if ("MOV".equals(mnemonic) && destinationMemory != null && operands.length >= 2 &&
                isStackMemory(destinationMemory)) {
            String key = stackKey(destinationMemory);
            String source = cleanRegister(operands[1]);
            ThisValue value = source == null || !isFullRegister(operands[1]) ? null :
                registers.get(source);
            if (value == null) stackSpills.remove(key);
            else stackSpills.put(key, value);
            return;
        }
        if ("MOV".equals(mnemonic) && destination != null && operands.length >= 2) {
            if (!isFullRegister(operands[0])) { registers.remove(destination); return; }
            String source = cleanRegister(operands[1]);
            MemoryExpr sourceMemory = memoryExpr(operands[1]);
            ThisValue value = source != null && isFullRegister(operands[1]) ?
                registers.get(source) : sourceMemory != null && isStackMemory(sourceMemory) ?
                    stackSpills.get(stackKey(sourceMemory)) : null;
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

    private Set<Function> logicalCallingFunctions(Function target) {
        Set<Function> result = new TreeSet<>(Comparator.comparing(Function::getEntryPoint));
        Set<Address> seen = new TreeSet<>();
        ArrayDeque<Function> pending = new ArrayDeque<>();
        pending.add(target);
        while (!pending.isEmpty()) {
            Function current = pending.removeFirst();
            if (!seen.add(current.getEntryPoint())) continue;
            for (Function caller : current.getCallingFunctions(monitor)) {
                if (caller.isThunk()) pending.addLast(caller);
                else result.add(caller);
            }
        }
        return result;
    }

    private boolean isStackMemory(MemoryExpr memory) {
        // EBP-negative locals are stable. ESP-relative slots move under PUSH/POP and are
        // deliberately excluded until the tracker models the complete stack delta.
        return memory != null && "EBP".equals(memory.register) && memory.displacement < 0;
    }

    private String stackKey(MemoryExpr memory) {
        return memory.register + ":" + memory.displacement;
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
        return owner.equals("Global") || owner.startsWith("Library::") ||
            upper.contains(".DLL") || recoveredAnonymousOwner(owner) ? "" : owner;
    }

    private boolean recoveredAnonymousOwner(String owner) {
        return owner.contains("SubmarineTitans::Recovered::HiddenThis::") ||
            owner.contains("SubmarineTitans::Recovered::PointerShapes::Anon") ||
            owner.contains("SubmarineTitans::Recovered::ClassPointees::Anon");
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
            .replace(" ", "").replace("+-", "-").replace("-+", "-")
            .toUpperCase(Locale.ROOT);
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
            out.write("repair_apply\towner_apply\tconvention_apply\tthis_type_apply\tparameter_apply\taddress\t" +
                "expected_name\texpected_name_source\texpected_signature\t" +
                "expected_signature_source\texpected_calling_convention\towner\t" +
                "proposed_name\towner_type_path\tagreed_this_calls\treceiver_accesses\t" +
                "incoming_edx_uses\tincoming_stack_parameter_uses\t" +
                "owner_call_counts\tcall_sites\tdirect_callers\treceiver_alias_callers\t" +
                "attributed_callers\t" +
                "confidence\treason\n");
            for (Proposal p : rows) out.write(bit(p.repairApply) + "\t" + bit(p.ownerApply) + "\t" +
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
                tsv(String.join(" | ", p.callSites)) + "\t" + p.directCallers + "\t" +
                p.receiverAliasCallers + "\t" +
                p.attributedCallers + "\t" + p.confidence + "\t" +
                tsv(p.reason) + "\n");
        }
    }

    private void writeJson(Path path, List<Proposal> rows) throws Exception {
        List<String> lines = new ArrayList<>();
        for (Proposal p : rows) lines.add("{\"repair_apply\":" + p.repairApply +
            ",\"owner_apply\":" + p.ownerApply +
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
            ",\"direct_callers\":" + p.directCallers +
            ",\"receiver_alias_callers\":" + p.receiverAliasCallers +
            ",\"attributed_callers\":" + p.attributedCallers +
            ",\"confidence\":" + q(p.confidence) + ",\"reason\":" + q(p.reason) + "}");
        Files.write(path, lines, StandardCharsets.UTF_8);
    }

    private void writeSummary(Path path, List<Proposal> rows, int callerMethods,
            int typedSingletonCalls) throws Exception {
        Files.write(path, List.of("program=" + currentProgram.getName(),
            "named_caller_methods=" + callerMethods,
            "typed_global_singleton_calls=" + typedSingletonCalls,
            "proposals=" + rows.size(),
            "owner_auto_repair=" + rows.stream().filter(row -> row.repairApply).count(),
            "owner_auto_apply=" + rows.stream().filter(row -> row.ownerApply).count(),
            "convention_auto_apply=" + rows.stream().filter(row -> row.conventionApply).count(),
            "this_type_auto_apply=" + rows.stream().filter(row -> row.thisTypeApply).count(),
            "parameter_auto_apply=" + rows.stream().filter(row -> row.parameterApply).count(),
            "owner_conflicts=" + rows.stream().filter(row -> row.confidence.equals("conflict")).count(),
            "note=Direct and thunk-resolved calls whose ECX still aliases the named caller's " +
                "incoming this are evidence; stable EBP spill/reload aliases are retained. " +
                "A named structure pointer loaded from a typed global singleton is independent " +
                "owner evidence.",
            "note_coverage=A script-owned owner is repaired only for conflicting named " +
                "owners or when at least four incoming-ECX receiver callers dominate a " +
                "fan-out of at least eight. Service-object calls count only when ECX is " +
                "traced from a named, typed global singleton.",
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

    private record ThisValue(long offset) { }
    private record TypedOwner(String owner, String reason) {
        @Override
        public boolean equals(Object value) {
            // Provenance text is diagnostic.  At a CFG join only the concrete
            // semantic owner is part of the dataflow fact.
            return value instanceof TypedOwner other && owner.equals(other.owner);
        }

        @Override
        public int hashCode() { return owner.hashCode(); }
    }

    private static final class TypedOwnerFlowState {
        final Map<String, TypedOwner> registers = new HashMap<>();
        final Map<Integer, TypedOwner> stack = new HashMap<>();

        TypedOwnerFlowState copy() {
            TypedOwnerFlowState result = new TypedOwnerFlowState();
            result.registers.putAll(registers);
            result.stack.putAll(stack);
            return result;
        }

        TypedOwnerFlowState intersection(TypedOwnerFlowState other) {
            TypedOwnerFlowState result = new TypedOwnerFlowState();
            intersectTyped(registers, other.registers, result.registers);
            intersectTyped(stack, other.stack, result.stack);
            return result;
        }

        private static <K> void intersectTyped(Map<K, TypedOwner> left,
                Map<K, TypedOwner> right, Map<K, TypedOwner> output) {
            for (Map.Entry<K, TypedOwner> entry : left.entrySet())
                if (entry.getValue().equals(right.get(entry.getKey())))
                    output.put(entry.getKey(), entry.getValue());
        }

        @Override
        public boolean equals(Object value) {
            return value instanceof TypedOwnerFlowState other &&
                registers.equals(other.registers) && stack.equals(other.stack);
        }

        @Override
        public int hashCode() { return 31 * registers.hashCode() + stack.hashCode(); }
    }

    private static final class ThisFlowState {
        final Map<String, ThisValue> registers = new HashMap<>();
        final Map<String, ThisValue> stackSpills = new HashMap<>();

        ThisFlowState copy() {
            ThisFlowState result = new ThisFlowState();
            result.registers.putAll(registers);
            result.stackSpills.putAll(stackSpills);
            return result;
        }

        ThisFlowState intersection(ThisFlowState other) {
            ThisFlowState result = new ThisFlowState();
            intersect(registers, other.registers, result.registers);
            intersect(stackSpills, other.stackSpills, result.stackSpills);
            return result;
        }

        private static void intersect(Map<String, ThisValue> left,
                Map<String, ThisValue> right, Map<String, ThisValue> output) {
            for (Map.Entry<String, ThisValue> entry : left.entrySet())
                if (entry.getValue().equals(right.get(entry.getKey())))
                    output.put(entry.getKey(), entry.getValue());
        }

        @Override
        public boolean equals(Object value) {
            return value instanceof ThisFlowState other &&
                registers.equals(other.registers) && stackSpills.equals(other.stackSpills);
        }

        @Override
        public int hashCode() { return 31 * registers.hashCode() + stackSpills.hashCode(); }
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
        final Set<Address> attributedCallers = new TreeSet<>();
        Candidate(Function function) { this.function = function; }
    }
    private static class Proposal {
        final Address address;
        final String expectedName, expectedNameSource, expectedSignature,
            expectedSignatureSource, expectedConvention, owner, proposedName,
            ownerTypePath, confidence, reason;
        final int agreedCalls, receiverAccesses, edxUses, stackParameterUses;
        final int directCallers, receiverAliasCallers, attributedCallers;
        final Map<String, Integer> ownerCounts;
        final Set<String> callSites;
        final boolean ownerApply, conventionApply, thisTypeApply, parameterApply, repairApply;
        Proposal(Function function, String owner, String proposedName, String ownerTypePath,
                int agreedCalls, int receiverAccesses, int edxUses, int stackParameterUses,
                Map<String, Integer> ownerCounts,
                Set<String> callSites, boolean ownerApply, boolean conventionApply,
                boolean thisTypeApply, boolean parameterApply, boolean repairApply,
                int directCallers, int receiverAliasCallers, int attributedCallers,
                String confidence,
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
            this.repairApply = repairApply; this.directCallers = directCallers;
            this.receiverAliasCallers = receiverAliasCallers;
            this.attributedCallers = attributedCallers;
            this.confidence = confidence;
            this.reason = reason;
        }
    }
}
