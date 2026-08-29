// Recover address-local concrete pointer views for generic direct-call results.
// Read-only: writes call_result_view_proposals.tsv and a compact summary.
//
// This deliberately does not specialize the callee.  Allocators, loaders, and
// other transport helpers legitimately return a neutral machine pointer which
// has different concrete views at different consumers.  The proposal is tied
// to one CALL instruction and requires one unambiguous High-pcode consumer type.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Analyze Direct Call Result Views

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
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Set;
import java.util.TreeMap;
import java.util.TreeSet;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.FunctionDefinition;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.TypeDef;
import ghidra.program.model.data.Undefined;
import ghidra.program.model.data.VoidDataType;
import ghidra.program.model.listing.CommentType;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.pcode.DataTypeSymbol;
import ghidra.program.model.pcode.HighFunction;
import ghidra.program.model.pcode.HighFunctionDBUtil;
import ghidra.program.model.symbol.Namespace;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.Symbol;

public class STCallResultViewAnalyzer extends GhidraScript {
    private static final String MARKER = "[STCallResultViewApplier]";
    private static final int TIMEOUT = 600;
    private static final int TRACE_DEPTH = 8;
    private int candidateCalls, functionsDecompiled, failures, conflicts;
    private final Set<String> selectedFunctions = new HashSet<>();
    private final Set<String> rejectedOwnedCalls = new HashSet<>();
    private final Set<String> recentlyRemovedCalls = new HashSet<>();

    @Override
    protected void run() throws Exception {
        end(true);
        if (currentProgram == null) {
            printerr("Open the analyzed ST program first.");
            return;
        }
        File selected = outputDirectory();
        if (selected == null) return;
        parseSelectors();
        Path directory = programDirectory(selected);
        Files.createDirectories(directory);
        loadRecentCleanup(directory);

        Map<Address, List<CallCandidate>> byCaller = machineCandidates();
        Map<String, Row> rows = new TreeMap<>();
        DecompInterface decompiler = new DecompInterface();
        decompiler.toggleCCode(true);
        decompiler.toggleSyntaxTree(true);
        if (!decompiler.openProgram(currentProgram))
            throw new IllegalStateException("Decompiler could not open the current program");
        try {
            for (Map.Entry<Address, List<CallCandidate>> entry : byCaller.entrySet()) {
                monitor.checkCancelled();
                Function caller = currentProgram.getFunctionManager().getFunctionAt(entry.getKey());
                if (caller == null) continue;
                DecompileResults result = decompiler.decompileFunction(caller, TIMEOUT, monitor);
                if (result == null || !result.decompileCompleted() ||
                        result.getHighFunction() == null) {
                    failures++;
                    continue;
                }
                functionsDecompiled++;
                analyzeCaller(caller, result.getHighFunction(), entry.getValue(), rows);
            }
        }
        finally { decompiler.dispose(); }

        // Every old script-owned override must remain re-provable.  Otherwise it is
        // explicitly removed instead of silently becoming a permanent manual fact.
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            Function caller = functions.next();
            if (!selectedFunctions.isEmpty() && !selectedFunctions.contains(
                    addr(caller.getEntryPoint()))) continue;
            InstructionIterator instructions = currentProgram.getListing()
                .getInstructions(caller.getBody(), true);
            while (instructions.hasNext()) {
                Instruction instruction = instructions.next();
                Address call = instruction.getAddress();
                if (!hasMarker(call) || rows.containsKey(addr(call))) continue;
                FunctionDefinition existing = existingOverride(caller, call);
                Function direct = directCalledFunction(instruction);
                Function target = resolveThunk(direct);
                String markedResult = markerResult(call);
                // An installed result override can make the High CALL output
                // concrete and thereby hide the neutral-to-concrete consumer
                // edge which originally proved it.  Test the exact owned view
                // before interpreting a contradictory with-override trace: the
                // applier compares a fresh with-view decompile against a
                // committed no-override decompile.  Reversing this order makes
                // the analyzer alternate forever between apply and cleanup.
                if (existing != null && direct != null && target != null &&
                        !target.hasVarArgs() && transportReturn(target.getReturnType()) &&
                        markedResult.startsWith("pointer:/") &&
                        fingerprint(existing).equals(
                            desiredFingerprint(direct, markedResult))) {
                    rows.put(addr(call), new Row(true, "apply",
                        addr(caller.getEntryPoint()), caller.getName(true), addr(call),
                        addr(direct.getEntryPoint()), direct.getName(true),
                        fingerprint(existing), markedResult, "high",
                        "script-owned direct-call result view requires no-override " +
                        "revalidation because its installed type masks the original " +
                        "consumer chain"));
                    continue;
                }
                // A fresh High/machine trace saw an owned override which no
                // longer matches its marker/target contract and could not
                // reproduce one compatible pointer consumer.  Only this stale
                // non-counterfactual case may be removed directly.
                if (rejectedOwnedCalls.contains(addr(call)) &&
                        !rederivedAfterCleanup(call)) {
                    rows.put(addr(call), new Row(true, "cleanup",
                        addr(caller.getEntryPoint()), caller.getName(true), addr(call),
                        "", "", fingerprint(existing), "", "high",
                        "script-owned direct-call result view is contradicted by " +
                        "a fresh incompatible or consumer-free High/machine trace"));
                    continue;
                }
                rows.put(addr(call), new Row(true, "cleanup", addr(caller.getEntryPoint()),
                    caller.getName(true), addr(call), "", "", fingerprint(existing), "",
                    "high", "script-owned direct-call result view is no longer proven"));
            }
        }

        List<Row> ordered = new ArrayList<>(rows.values());
        ordered.sort(Comparator.comparing(row -> row.callAddress));
        String suffix = selectedFunctions.isEmpty() ? "" : ".selected";
        writeRows(directory.resolve("call_result_view_proposals" + suffix + ".tsv"), ordered);
        writeSummary(directory.resolve("call_result_view_summary" + suffix + ".txt"), ordered);
        println("Direct-call result-view analysis complete: " + directory);
        println("Candidate calls=" + candidateCalls + ", functions=" +
            functionsDecompiled + ", proposals=" + ordered.size() + ", apply=" +
            ordered.stream().filter(row -> row.apply && row.action.equals("apply")).count() +
            ", cleanup=" + ordered.stream().filter(row -> row.action.equals("cleanup")).count() +
            ", conflicts=" + conflicts + ", failures=" + failures);
    }

    private Map<Address, List<CallCandidate>> machineCandidates() {
        Map<Address, List<CallCandidate>> result = new TreeMap<>();
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            Function caller = functions.next();
            if (!selectedFunctions.isEmpty() && !selectedFunctions.contains(
                    addr(caller.getEntryPoint()))) continue;
            if (caller.isExternal()) continue;
            InstructionIterator instructions = currentProgram.getListing()
                .getInstructions(caller.getBody(), true);
            while (instructions.hasNext()) {
                Instruction instruction = instructions.next();
                if (!"CALL".equalsIgnoreCase(instruction.getMnemonicString())) continue;
                Function direct = directCalledFunction(instruction);
                Function target = resolveThunk(direct);
                if (direct == null || target == null || target.hasVarArgs() ||
                        !transportReturn(target.getReturnType()))
                    continue;
                candidateCalls++;
                result.computeIfAbsent(caller.getEntryPoint(), ignored -> new ArrayList<>())
                    .add(new CallCandidate(instruction.getAddress(), direct, target));
            }
        }
        return result;
    }

    private void analyzeCaller(Function caller, HighFunction high,
            List<CallCandidate> candidates, Map<String, Row> rows) throws Exception {
        Map<String, CallCandidate> byAddress = new HashMap<>();
        for (CallCandidate candidate : candidates) byAddress.put(addr(candidate.call), candidate);
        @SuppressWarnings("unchecked")
        Iterator<Object> operations = (Iterator<Object>)high.getClass()
            .getMethod("getPcodeOps").invoke(high);
        while (operations.hasNext()) {
            Object operation = operations.next();
            if (!"CALL".equals(mnemonic(operation))) continue;
            Address address = operationAddress(operation);
            CallCandidate candidate = address == null ? null : byAddress.get(addr(address));
            if (candidate == null) continue;
            Object output = operation.getClass().getMethod("getOutput").invoke(operation);
            if (output == null) {
                // A Listing void/unsized prototype suppresses the High CALL
                // output even when the machine EAX value immediately reaches
                // one exact typed consumer.  The closed instruction-level
                // chain is deliberately independent of High and is sufficient
                // for an address-local result view; it is not sufficient to
                // mutate the callee's global return ABI.
                String machineView = machineConsumerPointerView(
                    caller, candidate.call);
                selectedAudit(candidate, "high_output=none; machine=" + machineView);
                if (!machineView.isBlank()) {
                    addProposal(caller, candidate, machineView,
                        "one exact direct CALL has no High output because the " +
                        "transport ABI is void/unsized, but its full EAX reaches " +
                        "one concrete pointer consumer before any redefinition", rows);
                }
                else if (hasMarker(candidate.call)) {
                    rejectedOwnedCalls.add(addr(candidate.call));
                }
                continue;
            }
            int outputSize = size(output);
            if (outputSize != currentProgram.getDefaultPointerSize() &&
                    !(outputSize > 0 && outputSize < currentProgram.getDefaultPointerSize() &&
                        machineFullEaxConsumer(caller, candidate.call))) {
                selectedAudit(candidate, "output_size=" + outputSize + "; rejected");
                if (hasMarker(candidate.call))
                    rejectedOwnedCalls.add(addr(candidate.call));
                continue;
            }
            Trace trace = new Trace();
            collectViews(output, trace, java.util.Collections.newSetFromMap(
                new java.util.IdentityHashMap<>()), 0, true, false);
            // COPY/CAST descendants can retain the callee's own transport type
            // before the value reaches its real consumer.  That is not an
            // independent competing view any more than the root CALL type is.
            // Remove the exact transport echo, then let High or the closed
            // full-EAX/stack-spill machine chain prove the address-local view.
            trace.concrete.remove(typeSpec(candidate.target.getReturnType()));
            String machineView = machineConsumerPointerView(caller, candidate.call);
            if (!machineView.isBlank()) {
                // A complete address-local EAX -> optional exact stack spill
                // -> one typed call boundary is stronger than High's merged
                // local lifetime.  Compiler slot reuse can otherwise mark the
                // whole High variable incompatible even though this one CALL
                // has an unambiguous consumer before the next definition.
                trace.concrete.clear();
                trace.concrete.add(machineView);
                trace.incompatible = false;
                trace.anchors.add(addr(candidate.call) +
                    ":machine-call-boundary");
            }
            if (trace.concrete.size() == 1 && trace.incompatible &&
                    firstBoundaryPrecedesConflict(trace, candidate.call)) {
                trace.incompatible = false;
                trace.anchors.add(addr(candidate.call) +
                    ":typed-boundary-before-reused-lifetime");
            }
            selectedAudit(candidate, "transport=" +
                typeSpec(candidate.target.getReturnType()) + "; machine=" + machineView +
                "; concrete=" + trace.concrete + "; incompatible=" +
                trace.incompatible + "; boundaries=" + trace.typedBoundaries +
                "; conflicts=" + trace.incompatibleAddresses +
                "; anchors=" + trace.anchors);
            if (trace.concrete.size() != 1 || trace.incompatible) {
                if (hasMarker(candidate.call))
                    rejectedOwnedCalls.add(addr(candidate.call));
                if (trace.concrete.size() > 1) conflicts++;
                continue;
            }
            String proposed = trace.concrete.iterator().next();
            if (proposed.equals(typeSpec(candidate.target.getReturnType()))) continue;
            addProposal(caller, candidate, proposed,
                "one exact direct CALL result reaches only the concrete pointer " +
                "view " + proposed + " through COPY/CAST/INDIRECT; consumer anchors=" +
                trace.anchors, rows);
        }
    }

    private void addProposal(Function caller, CallCandidate candidate,
            String proposed, String proof, Map<String, Row> rows) {
        FunctionDefinition existing = existingOverride(caller, candidate.call);
        String current = fingerprint(existing);
        String desired = desiredFingerprint(candidate.direct, proposed);
        boolean marker = hasMarker(candidate.call);
        if (existing != null && marker && !desired.equals(current)) {
            rows.put(addr(candidate.call), new Row(true, "cleanup",
                addr(caller.getEntryPoint()), caller.getName(true), addr(candidate.call),
                "", "", current, "", "high",
                "script-owned direct-call result view changed from " + current +
                " to " + desired + "; remove the old override before accepting a " +
                "fresh no-override derivation"));
            return;
        }
        boolean apply = existing == null || desired.equals(current) || marker;
        String evidence = proof + "; transport callee ABI " +
            typeSpec(candidate.target.getReturnType()) + " is retained" +
            (recentlyRemovedCalls.contains(addr(candidate.call)) ?
                "; rederived after explicit script-owned override cleanup" : "") +
            (apply ? "" : "; foreign call override preserved: " + current);
        rows.put(addr(candidate.call), new Row(apply, "apply",
            addr(caller.getEntryPoint()), caller.getName(true), addr(candidate.call),
            addr(candidate.direct.getEntryPoint()), candidate.direct.getName(true), current,
            proposed, apply ? "high" : "conflict", evidence));
    }

    private void selectedAudit(CallCandidate candidate, String detail) {
        if (selectedFunctions.isEmpty()) return;
        println("result-view audit " + addr(candidate.call) + " -> " +
            candidate.direct.getName(true) + ": " + detail);
    }

    private void collectViews(Object varnode, Trace trace, Set<Object> visited,
            int depth, boolean root, boolean addressDerived) throws Exception {
        if (varnode == null || depth > TRACE_DEPTH || !visited.add(varnode)) return;
        DataType type = dataType(varnode);
        // The CALL output's own High type is the transport ABI which this pass
        // deliberately leaves untouched. Counting it as a consumer view makes
        // every legitimate neutral/base-pointer to concrete-pointer use look
        // conflicting. Only descendants and typed boundaries are independent
        // use-site evidence.
        if (!root && concretePointer(type) && !addressDerived &&
                !derivedAddress(varnode)) {
            trace.concrete.add(typeSpec(type));
            trace.anchors.add(site(varnode));
        }
        @SuppressWarnings("unchecked")
        Iterator<Object> descendants = (Iterator<Object>)varnode.getClass()
            .getMethod("getDescendants").invoke(varnode);
        while (descendants.hasNext()) {
            Object operation = descendants.next();
            String op = mnemonic(operation);
            int operand = operandOf(operation, varnode);
            if (operand < 0) continue;
            if (Set.of("COPY", "CAST", "INDIRECT").contains(op)) {
                Object output = operation.getClass().getMethod("getOutput").invoke(operation);
                collectViews(output, trace, visited, depth + 1, false,
                    addressDerived);
                continue;
            }
            // A merge can introduce an unrelated value.  A callsite override must
            // not force one pointer view across such a lifetime join.
            if ("MULTIEQUAL".equals(op)) {
                incompatible(trace, operation);
                continue;
            }
            if ("PTRADD".equals(op) || "PTRSUB".equals(op) || "INT_ADD".equals(op)) {
                Object output = operation.getClass().getMethod("getOutput").invoke(operation);
                collectViews(output, trace, visited, depth + 1, false, true);
                continue;
            }
            if ("LOAD".equals(op) && operand == 1) {
                trace.anchors.add(site(operation) + ":load-base");
                continue;
            }
            if ("STORE".equals(op)) {
                if (operand == 1) {
                    trace.anchors.add(site(operation) + ":store-base");
                    continue;
                }
                if (operand == 2) {
                    DataType addressType = dataType(input(operation, 1));
                    DataType stored = pointed(addressType);
                    if (concretePointer(stored)) {
                        trace.concrete.add(typeSpec(stored));
                        trace.anchors.add(site(operation) + ":typed-store");
                        trace.typedBoundaries.add(operationAddress(operation));
                        continue;
                    }
                    if (neutralTransport(stored)) {
                        trace.anchors.add(site(operation) + ":neutral-store");
                        continue;
                    }
                    trace.anchors.add(site(operation) + ":scalar-store:" +
                        typeSpec(stored));
                }
                incompatible(trace, operation);
                continue;
            }
            if (("INT_EQUAL".equals(op) || "INT_NOTEQUAL".equals(op)) &&
                    otherInputIsZero(operation, operand)) {
                trace.anchors.add(site(operation) + ":null-test");
                continue;
            }
            if ("CALL".equals(op)) {
                Function target = calledFunction(operation);
                int parameterIndex = operand - 1;
                if (target != null && parameterIndex >= 0 &&
                        parameterIndex < target.getParameterCount()) {
                    DataType parameter = target.getParameters()[parameterIndex]
                        .getFormalDataType();
                    if (concretePointer(parameter)) {
                        trace.concrete.add(typeSpec(parameter));
                        trace.anchors.add(site(operation) + ":typed-argument");
                        trace.typedBoundaries.add(operationAddress(operation));
                        continue;
                    }
                }
                incompatible(trace, operation);
                continue;
            }
            if ("RETURN".equals(op)) {
                Function owner = function(operation);
                if (owner != null && concretePointer(owner.getReturnType())) {
                    trace.concrete.add(typeSpec(owner.getReturnType()));
                    trace.anchors.add(site(operation) + ":typed-return");
                    trace.typedBoundaries.add(operationAddress(operation));
                    continue;
                }
                incompatible(trace, operation);
                continue;
            }
            // A zero/nonzero pointer test may reach BOOL_NEGATE/CBRANCH through
            // the comparison output, never through the pointer varnode itself.
            // Every other direct use interprets the machine word in another domain.
            incompatible(trace, operation);
        }
    }

    private boolean derivedAddress(Object varnode) {
        try {
            Object definition = varnode.getClass().getMethod("getDef").invoke(varnode);
            if (definition == null) return false;
            return Set.of("PTRADD", "PTRSUB", "INT_ADD").contains(
                mnemonic(definition));
        }
        catch (Exception ignored) { return false; }
    }

    private void incompatible(Trace trace, Object operation) {
        trace.incompatible = true;
        Address address = operationAddress(operation);
        if (address != null) trace.incompatibleAddresses.add(address);
    }

    private boolean firstBoundaryPrecedesConflict(Trace trace, Address call) {
        Address boundary = trace.typedBoundaries.stream()
            .filter(address -> address != null && address.compareTo(call) >= 0)
            .min(Address::compareTo).orElse(null);
        if (boundary == null) return false;
        Address conflict = trace.incompatibleAddresses.stream()
            .filter(address -> address != null && address.compareTo(call) >= 0)
            .min(Address::compareTo).orElse(null);
        return conflict == null || boundary.compareTo(conflict) < 0;
    }

    private boolean otherInputIsZero(Object operation, int operand) throws Exception {
        int count = inputCount(operation);
        if (count != 2) return false;
        Object other = input(operation, operand == 0 ? 1 : 0);
        boolean constant = (boolean)other.getClass().getMethod("isConstant").invoke(other);
        long offset = ((Number)other.getClass().getMethod("getOffset").invoke(other)).longValue();
        return constant && offset == 0;
    }

    private Function calledFunction(Object operation) {
        try {
            Object target = input(operation, 0);
            Address address = (Address)target.getClass().getMethod("getAddress").invoke(target);
            return address == null ? null :
                currentProgram.getFunctionManager().getFunctionAt(address);
        }
        catch (Exception ignored) { return null; }
    }

    private Function function(Object operation) {
        try {
            Object parent = operation.getClass().getMethod("getParent").invoke(operation);
            Object high = parent == null ? null : parent.getClass()
                .getMethod("getHigh").invoke(parent);
            return high == null ? null : (Function)high.getClass()
                .getMethod("getFunction").invoke(high);
        }
        catch (Exception ignored) { return null; }
    }

    private DataType dataType(Object varnode) {
        try {
            Object high = varnode.getClass().getMethod("getHigh").invoke(varnode);
            return high == null ? null : (DataType)high.getClass()
                .getMethod("getDataType").invoke(high);
        }
        catch (Exception ignored) { return null; }
    }

    private boolean transportReturn(DataType type) {
        type = untypedef(type);
        if (type == null || Undefined.isUndefined(type) ||
                type instanceof VoidDataType ||
                "/undefined".equals(type.getPathName())) return true;
        String scalar = type == null ? "" : type.getPathName();
        if (scalar.equals("/int") || scalar.equals("/uint")) return true;
        if (!(type instanceof Pointer pointer)) return false;
        DataType base = untypedef(pointer.getDataType());
        // A concrete base pointer may still have one exact derived/container view
        // at this callsite.  The local override does not assert inheritance and
        // leaves the shared callee signature untouched.
        return base != null;
    }

    /**
     * A stale narrow callee prototype can make High p-code attach a one-byte
     * output to CALL even though the caller immediately consumes the complete
     * EAX register as a pointer.  Widen only at that exact call when the first
     * register event is a full-EAX input; an AL/AX read or prior full definition
     * rejects the view.
     */
    private boolean machineFullEaxConsumer(Function caller, Address call) {
        Instruction instruction = currentProgram.getListing().getInstructionAfter(call);
        for (int count = 0; instruction != null && count < 12; count++) {
            if (!caller.getBody().contains(instruction.getAddress()) ||
                    instruction.getFlowType().isCall() ||
                    instruction.getFlowType().isJump() ||
                    instruction.getFlowType().isTerminal()) return false;
            boolean fullInput = false, narrowInput = false, fullOutput = false;
            for (Object object : instruction.getInputObjects()) {
                if (!(object instanceof ghidra.program.model.lang.Register register)) continue;
                String name = register.getName().toUpperCase(Locale.ROOT);
                if ("EAX".equals(name)) fullInput = true;
                else if (Set.of("AX", "AL", "AH").contains(name)) narrowInput = true;
            }
            for (Object object : instruction.getResultObjects()) {
                if (object instanceof ghidra.program.model.lang.Register register &&
                        "EAX".equals(register.getName().toUpperCase(Locale.ROOT)))
                    fullOutput = true;
            }
            if (fullInput) return true;
            if (narrowInput || fullOutput) return false;
            instruction = currentProgram.getListing().getInstructionAfter(
                instruction.getAddress());
        }
        return false;
    }

    /**
     * Follow the complete EAX word through ordinary register copies to one exact
     * typed call boundary.  Null tests and conditional branches do not consume
     * the value.  Any arithmetic, partial-register operation, unknown call, or
     * conflicting typed receiver cancels the proof.
     */
    private String machineConsumerPointerView(Function caller, Address call) {
        String returned = machineReturnedPointerView(caller, call);
        if (!returned.isBlank()) {
            selectedMachineAudit(caller, call, "returned", returned);
            return returned;
        }
        Set<String> origins = new HashSet<>();
        origins.add("EAX");
        Set<Long> originStackSlots = new HashSet<>();
        Set<String> views = new TreeSet<>();
        List<String> pushed = new ArrayList<>();
        Instruction instruction = currentProgram.getListing().getInstructionAfter(call);
        for (int count = 0; instruction != null && count < 80; count++) {
            if (!caller.getBody().contains(instruction.getAddress()) ||
                    instruction.getFlowType().isTerminal() ||
                    instruction.getFlowType().isJump() &&
                    instruction.getFlowType().isUnConditional()) break;
            String mnemonic = text(instruction.getMnemonicString()).toUpperCase(Locale.ROOT);
            String destination = instruction.getNumOperands() > 0 ?
                standaloneRegister(instruction.getDefaultOperandRepresentation(0)) : "";
            String source = instruction.getNumOperands() > 1 ?
                standaloneRegister(instruction.getDefaultOperandRepresentation(1)) : "";
            Long destinationStack = stackSlot(instruction, 0);
            Long sourceStack = stackSlot(instruction, 1);
            if ("MOV".equals(mnemonic)) {
                if (!destination.isBlank()) {
                    if (origins.contains(source) ||
                            sourceStack != null && originStackSlots.contains(sourceStack))
                        origins.add(destination);
                    else origins.remove(destination);
                }
                else if (destinationStack != null) {
                    if (origins.contains(source)) originStackSlots.add(destinationStack);
                    else originStackSlots.remove(destinationStack);
                }
                else {
                    // An exact write of the result word to one typed global is
                    // a concrete consumer boundary.  This is independent of
                    // High p-code, which may insert the very cast that the
                    // address-local override is intended to remove.
                    if (origins.contains(source)) {
                        String storedView = exactTypedStoreView(instruction);
                        if (storedView.isBlank()) return "";
                        views.add(storedView);
                        selectedMachineAudit(caller, instruction.getAddress(),
                            "typed-store", storedView);
                        break;
                    }
                }
            }
            else if ("PUSH".equals(mnemonic) && instruction.getNumOperands() == 1) {
                Long pushedStack = stackSlot(instruction, 0);
                boolean origin = origins.contains(standaloneRegister(
                    instruction.getDefaultOperandRepresentation(0))) ||
                    pushedStack != null && originStackSlots.contains(pushedStack);
                pushed.add(origin ? "origin" : "other");
            }
            else if (instruction.getFlowType().isCall()) {
                Function target = resolveThunk(directCalledFunction(instruction));
                if (target == null) break;
                Parameter[] parameters = target.getParameters();
                if ("__thiscall".equals(target.getCallingConventionName()) &&
                        origins.contains("ECX") && parameters.length > 0 &&
                        exactPointerTransport(parameters[0].getFormalDataType()))
                    {
                        String view = typeSpec(parameters[0].getFormalDataType());
                        views.add(view);
                        selectedMachineAudit(caller, instruction.getAddress(),
                            "thiscall-receiver", view);
                    }
                for (int pushIndex = 0; pushIndex < pushed.size(); pushIndex++) {
                    if (!"origin".equals(pushed.get(pushed.size() - 1 - pushIndex)) ||
                            pushIndex >= parameters.length) continue;
                    DataType parameter = parameters[pushIndex].getFormalDataType();
                    if (exactPointerTransport(parameter)) {
                        String view = typeSpec(parameter);
                        views.add(view);
                        selectedMachineAudit(caller, instruction.getAddress(),
                            "stack-argument-" + pushIndex, view);
                    }
                }
                break;
            }
            else if (!Set.of("CMP", "TEST", "JZ", "JNZ", "JE", "JNE", "NOP")
                    .contains(mnemonic)) {
                // If an origin register participates in an operation not explicitly
                // recognized as a transparent copy/null test, its pointer domain is
                // no longer exact.
                for (Object object : instruction.getInputObjects()) {
                    if (object instanceof ghidra.program.model.lang.Register register &&
                            origins.contains(register.getName().toUpperCase(Locale.ROOT)))
                        return "";
                }
            }
            // Any non-MOV definition ends that register's copy of the CALL result.  In
            // particular, `LEA EAX,...` is a fresh address, not a transparent continuation
            // of the prior EAX value.  Ghidra's operand objects expose the destination
            // register separately; failing to kill it made a later PUSH EAX look like the
            // original call result and could retype an unrelated merged Listing local.
            if (!"MOV".equals(mnemonic)) {
                for (Object object : instruction.getResultObjects()) {
                    if (!(object instanceof ghidra.program.model.lang.Register register))
                        continue;
                    String defined = fullRegisterName(
                        register.getName().toUpperCase(Locale.ROOT));
                    if (!defined.isBlank()) origins.remove(defined);
                }
            }
            if (views.size() > 1) return "";
            instruction = currentProgram.getListing().getInstructionAfter(
                instruction.getAddress());
        }
        return views.size() == 1 ? views.iterator().next() : "";
    }

    private String fullRegisterName(String name) {
        if (name == null) return "";
        return switch (name.toUpperCase(Locale.ROOT)) {
            case "EAX", "AX", "AL", "AH" -> "EAX";
            case "EBX", "BX", "BL", "BH" -> "EBX";
            case "ECX", "CX", "CL", "CH" -> "ECX";
            case "EDX", "DX", "DL", "DH" -> "EDX";
            case "ESI", "SI" -> "ESI";
            case "EDI", "DI" -> "EDI";
            case "EBP", "BP" -> "EBP";
            case "ESP", "SP" -> "ESP";
            default -> "";
        };
    }

    private void selectedMachineAudit(Function caller, Address address,
            String role, String view) {
        if (caller == null || selectedFunctions.isEmpty() ||
                !selectedFunctions.contains(addr(caller.getEntryPoint()))) return;
        println("result-view machine anchor " + addr(address) + " role=" + role +
            " view=" + view);
    }

    /**
     * Prove the direct CALL result is returned unchanged by the containing
     * function.  This is the machine counterpart of High's typed RETURN edge
     * for a void/unsized callee: every reachable path must preserve full EAX
     * until RET, and the containing function must already have an exact
     * pointer-storage return.  Calls, partial writes, unresolved exits, and
     * scan-limit exhaustion reject the view.
     */
    private String machineReturnedPointerView(Function caller, Address call) {
        String returned = exactPointerTransport(caller.getReturnType()) ?
            typeSpec(caller.getReturnType()) : "";
        if (returned.isBlank()) return "";
        Instruction origin = currentProgram.getListing().getInstructionAt(call);
        Address start = origin == null ? null : origin.getFallThrough();
        if (start == null || !caller.getBody().contains(start)) return "";
        ArrayDeque<Address> pending = new ArrayDeque<>();
        Set<Address> visited = new HashSet<>();
        pending.add(start);
        int returns = 0, nodes = 0;
        while (!pending.isEmpty()) {
            Address address = pending.removeFirst();
            if (!visited.add(address)) continue;
            if (++nodes > 192) return "";
            Instruction instruction = currentProgram.getListing()
                .getInstructionAt(address);
            if (instruction == null || !caller.getBody().contains(address)) return "";
            String mnemonic = text(instruction.getMnemonicString())
                .toUpperCase(Locale.ROOT);
            if (mnemonic.startsWith("RET")) {
                returns++;
                continue;
            }
            if (instruction.getFlowType().isCall()) return "";
            for (Object output : instruction.getResultObjects()) {
                if (!(output instanceof ghidra.program.model.lang.Register register))
                    continue;
                String name = register.getName().toUpperCase(Locale.ROOT);
                if (Set.of("EAX", "AX", "AL", "AH").contains(name)) return "";
            }
            int successors = 0;
            Address fallThrough = instruction.getFallThrough();
            if (fallThrough != null && caller.getBody().contains(fallThrough)) {
                pending.addLast(fallThrough);
                successors++;
            }
            if (instruction.getFlowType().isJump()) {
                for (Address flow : instruction.getFlows()) {
                    if (!caller.getBody().contains(flow)) continue;
                    pending.addLast(flow);
                    successors++;
                }
            }
            if (successors == 0) return "";
        }
        return returns > 0 ? returned : "";
    }

    private String exactTypedStoreView(Instruction instruction) {
        Set<String> views = new TreeSet<>();
        for (Reference reference : currentProgram.getReferenceManager()
                .getReferencesFrom(instruction.getAddress())) {
            if (reference.getOperandIndex() != 0 ||
                    !reference.getReferenceType().isData()) continue;
            Data data = currentProgram.getListing().getDataContaining(
                reference.getToAddress());
            if (data == null) {
                Symbol symbol = currentProgram.getSymbolTable().getPrimarySymbol(
                    reference.getToAddress());
                if (symbol != null && symbol.getObject() instanceof Data symbolData)
                    data = symbolData;
            }
            if (data == null || !concretePointer(data.getDataType())) continue;
            views.add(typeSpec(data.getDataType()));
        }
        return views.size() == 1 ? views.iterator().next() : "";
    }

    /** Exact EBP-relative four-byte local used for one call-result lifetime. */
    private Long stackSlot(Instruction instruction, int operand) {
        if (instruction == null || operand < 0 ||
                operand >= instruction.getNumOperands()) return null;
        String value = text(instruction.getDefaultOperandRepresentation(operand))
            .toUpperCase(Locale.ROOT).replace(" ", "")
            .replace("+-", "-").replace("-+", "-").replace("++", "+");
        java.util.regex.Matcher matcher = java.util.regex.Pattern.compile(
            "^(?:DWORDPTR)?\\[EBP(?:([+-])(0X[0-9A-F]+|[0-9]+))?\\]$")
            .matcher(value);
        if (!matcher.matches()) return null;
        long displacement = 0;
        if (matcher.group(2) != null) {
            String number = matcher.group(2);
            displacement = number.startsWith("0X") ?
                Long.parseUnsignedLong(number.substring(2), 16) :
                Long.parseLong(number);
            if ("-".equals(matcher.group(1))) displacement = -displacement;
        }
        return displacement;
    }

    private String standaloneRegister(String operand) {
        String value = text(operand).trim().toUpperCase(Locale.ROOT);
        return value.matches("(?:E|R)?(?:AX|BX|CX|DX|SI|DI|BP|SP)|(?:AL|AH|BL|BH|CL|CH|DL|DH|AX|BX|CX|DX|SI|DI|BP|SP)") ?
            value : "";
    }

    private boolean concretePointer(DataType type) {
        type = untypedef(type);
        if (!(type instanceof Pointer pointer)) return false;
        DataType base = untypedef(pointer.getDataType());
        if (base == null || base instanceof Undefined || base instanceof VoidDataType)
            return false;
        String path = base.getPathName();
        return !path.equals("/byte") && !path.equals("/char") &&
            !path.matches("/undefined[0-9]*");
    }

    /** A pointer with any fixed pointee width is an exact C++ storage view.
     * Byte/char and undefinedN remain semantically neutral, but they are not
     * interchangeable with void or unsized undefined at a call boundary. */
    private boolean exactPointerTransport(DataType type) {
        type = untypedef(type);
        if (!(type instanceof Pointer pointer)) return false;
        DataType base = untypedef(pointer.getDataType());
        if (base == null || base instanceof VoidDataType || base.getLength() <= 0)
            return false;
        if (base instanceof Undefined)
            return base.getPathName().matches("/undefined[1248]");
        return true;
    }

    private boolean neutralTransport(DataType type) {
        type = untypedef(type);
        if (type == null || type instanceof Undefined || type instanceof VoidDataType)
            return true;
        if (type instanceof Pointer pointer) {
            DataType base = untypedef(pointer.getDataType());
            return base == null || base instanceof Undefined ||
                base instanceof VoidDataType;
        }
        String path = type.getPathName().toLowerCase(Locale.ROOT);
        return path.matches("/(?:u?int|long|ulong|dword|undefined4)");
    }

    private DataType pointed(DataType type) {
        type = untypedef(type);
        return type instanceof Pointer pointer ? untypedef(pointer.getDataType()) : null;
    }

    private DataType untypedef(DataType type) {
        Set<DataType> seen = new HashSet<>();
        while (type instanceof TypeDef alias && seen.add(type)) type = alias.getBaseDataType();
        return type;
    }

    private Function directCalledFunction(Instruction instruction) {
        for (Address flow : instruction.getFlows()) {
            Function function = currentProgram.getFunctionManager().getFunctionAt(flow);
            if (function != null) return function;
        }
        return null;
    }

    private Function resolveThunk(Function function) {
        Set<Address> seen = new HashSet<>();
        while (function != null && function.isThunk() && seen.add(function.getEntryPoint())) {
            Function next = function.getThunkedFunction(false);
            if (next == null || next.equals(function)) break;
            function = next;
        }
        return function;
    }

    private String desiredFingerprint(Function called, String returned) {
        List<String> values = new ArrayList<>();
        values.add(text(called.getCallingConventionName()));
        values.add(returned);
        for (var parameter : called.getParameters())
            values.add(typeSpec(parameter.getFormalDataType()));
        return String.join(";", values);
    }

    private FunctionDefinition existingOverride(Function caller, Address call) {
        Namespace root = HighFunction.findOverrideSpace(caller);
        if (root == null) return null;
        FunctionDefinition agreed = null;
        for (Symbol symbol : currentProgram.getSymbolTable().getSymbols(call)) {
            if (!root.equals(symbol.getParentNamespace())) continue;
            DataTypeSymbol value = HighFunctionDBUtil.readOverride(symbol);
            if (value == null || !(value.getDataType() instanceof FunctionDefinition definition))
                continue;
            if (agreed != null && !fingerprint(agreed).equals(fingerprint(definition)))
                return null;
            agreed = definition;
        }
        return agreed;
    }

    private String fingerprint(FunctionDefinition definition) {
        if (definition == null) return "none";
        List<String> values = new ArrayList<>();
        values.add(text(definition.getCallingConventionName()));
        values.add(typeSpec(definition.getReturnType()));
        for (var parameter : definition.getArguments())
            values.add(typeSpec(parameter.getDataType()));
        return String.join(";", values);
    }

    private boolean hasMarker(Address address) {
        return text(currentProgram.getListing().getComment(CommentType.EOL, address))
            .contains(MARKER);
    }

    private boolean rederivedAfterCleanup(Address address) {
        return text(currentProgram.getListing().getComment(CommentType.EOL, address))
            .contains(MARKER + " rederived_after_cleanup;");
    }

    /**
     * The immediately preceding apply report is the fixed-point handshake between two
     * analyzer passes.  If an owned override was removed and the no-override body proves
     * the same view again, the new proposal is genuinely rederived rather than merely
     * self-confirmed.  Carry only the exact call address and only for one report generation.
     */
    private void loadRecentCleanup(Path directory) {
        Path report = directory.resolve("call_result_view_apply_report.tsv");
        if (!Files.isRegularFile(report)) return;
        try {
            List<String> lines = Files.readAllLines(report, StandardCharsets.UTF_8);
            if (lines.isEmpty()) return;
            String[] header = lines.get(0).split("\\t", -1);
            int targetColumn = -1, statusColumn = -1;
            for (int index = 0; index < header.length; index++) {
                if ("target".equals(header[index])) targetColumn = index;
                else if ("status".equals(header[index])) statusColumn = index;
            }
            if (targetColumn < 0 || statusColumn < 0) return;
            for (int line = 1; line < lines.size(); line++) {
                String[] values = lines.get(line).split("\\t", -1);
                if (values.length <= Math.max(targetColumn, statusColumn) ||
                        !"removed".equals(values[statusColumn])) continue;
                String target = values[targetColumn];
                int separator = target.lastIndexOf('@');
                if (separator >= 0 && target.substring(separator + 1)
                        .matches("[0-9A-Fa-f]{8}"))
                    recentlyRemovedCalls.add(target.substring(separator + 1)
                        .toUpperCase(Locale.ROOT));
            }
        }
        catch (Exception ignored) {
            // A malformed/stale diagnostic report is never recovery evidence.
            recentlyRemovedCalls.clear();
        }
    }

    private String markerResult(Address address) {
        String comment = text(currentProgram.getListing()
            .getComment(CommentType.EOL, address));
        String prefix = "exact direct-call result=";
        int start = comment.indexOf(prefix);
        if (start < 0) return "";
        start += prefix.length();
        int end = comment.indexOf(';', start);
        if (end < 0) end = comment.indexOf('\n', start);
        if (end < 0) end = comment.length();
        return comment.substring(start, end).trim();
    }

    private Address operationAddress(Object operation) {
        try {
            Object sequence = operation.getClass().getMethod("getSeqnum").invoke(operation);
            return (Address)sequence.getClass().getMethod("getTarget").invoke(sequence);
        }
        catch (Exception ignored) { return null; }
    }

    private String site(Object value) {
        try {
            Object operation = value;
            if (!value.getClass().getSimpleName().contains("PcodeOp"))
                operation = value.getClass().getMethod("getDef").invoke(value);
            Address address = operation == null ? null : operationAddress(operation);
            return address == null ? "unknown" : addr(address);
        }
        catch (Exception ignored) { return "unknown"; }
    }

    private String mnemonic(Object operation) throws Exception {
        return (String)operation.getClass().getMethod("getMnemonic").invoke(operation);
    }
    private int inputCount(Object operation) throws Exception {
        return ((Number)operation.getClass().getMethod("getNumInputs").invoke(operation)).intValue();
    }
    private Object input(Object operation, int index) throws Exception {
        return operation.getClass().getMethod("getInput", int.class).invoke(operation, index);
    }
    private int size(Object varnode) throws Exception {
        return ((Number)varnode.getClass().getMethod("getSize").invoke(varnode)).intValue();
    }
    private int operandOf(Object operation, Object varnode) throws Exception {
        for (int index = 0; index < inputCount(operation); index++)
            if (input(operation, index).equals(varnode)) return index;
        return -1;
    }

    private String typeSpec(DataType type) {
        if (type instanceof Pointer pointer && pointer.getDataType() != null)
            return "pointer:" + typeSpec(pointer.getDataType());
        return type == null ? "" : type.getPathName();
    }
    private String addr(Address address) {
        return address == null ? "" : address.toString().toUpperCase(Locale.ROOT);
    }
    private String text(Object value) { return value == null ? "" : value.toString(); }
    private String clean(String value) {
        return text(value).replace('\t', ' ').replace('\r', ' ').replace('\n', ' ');
    }

    private File outputDirectory() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException("Recovery output directory is required");
        return askDirectory("Select recovery output directory", "Choose");
    }
    private void parseSelectors() {
        String[] args = getScriptArgs();
        for (int index = 1; index < args.length; index++) {
            String value = args[index].trim();
            if (!value.toLowerCase(Locale.ROOT).startsWith("function="))
                throw new IllegalArgumentException("Unknown selector: " + value);
            String address = value.substring(value.indexOf('=') + 1).trim()
                .toUpperCase(Locale.ROOT);
            if (!address.matches("[0-9A-F]{8}"))
                throw new IllegalArgumentException("Invalid function selector: " + value);
            selectedFunctions.add(address);
        }
    }
    private Path programDirectory(File selected) {
        Path path = selected.toPath().toAbsolutePath().normalize();
        return path.getFileName() != null && path.getFileName().toString()
            .equals(currentProgram.getName()) ? path : path.resolve(currentProgram.getName());
    }

    private void writeRows(Path path, List<Row> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\taction\tfunction_address\tfunction_name\tcall_address\t" +
                "target_address\ttarget_name\texpected_override\tproposed_return_type\t" +
                "confidence\tevidence\n");
            for (Row row : rows) out.write((row.apply ? "1" : "0") + "\t" + row.action +
                "\t" + row.functionAddress + "\t" + clean(row.functionName) + "\t" +
                row.callAddress + "\t" + row.targetAddress + "\t" + clean(row.targetName) +
                "\t" + clean(row.expectedOverride) + "\t" + row.proposedReturnType + "\t" +
                row.confidence + "\t" + clean(row.evidence) + "\n");
        }
    }

    private void writeSummary(Path path, List<Row> rows) throws Exception {
        List<String> lines = List.of(
            "Direct-call result view summary",
            "Candidate generic-return calls: " + candidateCalls,
            "Functions decompiled: " + functionsDecompiled,
            "Apply: " + rows.stream().filter(r -> r.apply && r.action.equals("apply")).count(),
            "Cleanup: " + rows.stream().filter(r -> r.action.equals("cleanup")).count(),
            "Conflicts: " + conflicts,
            "Failures: " + failures);
        Files.write(path, lines, StandardCharsets.UTF_8);
    }

    private static final class Trace {
        final Set<String> concrete = new TreeSet<>();
        final Set<String> anchors = new TreeSet<>();
        final Set<Address> typedBoundaries = new TreeSet<>();
        final Set<Address> incompatibleAddresses = new TreeSet<>();
        boolean incompatible;
    }
    private record CallCandidate(Address call, Function direct, Function target) { }
    private record Row(boolean apply, String action, String functionAddress,
        String functionName, String callAddress, String targetAddress, String targetName,
        String expectedOverride, String proposedReturnType, String confidence,
        String evidence) { }
}
