// Recover independent types for compiler-reused decompiler local lifetimes.
// Read-only: emits address-anchored merge-group split proposals.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Analyze Local Lifetimes

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.security.MessageDigest;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Set;
import java.util.TreeMap;
import java.util.regex.Pattern;

import ghidra.app.decompiler.DecompileResults;
import ghidra.app.decompiler.parallel.DecompilerCallback;
import ghidra.app.decompiler.parallel.ParallelDecompiler;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.AbstractIntegerDataType;
import ghidra.program.model.data.Array;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeComponent;
import ghidra.program.model.data.Enum;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.PointerDataType;
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.TypeDef;
import ghidra.program.model.data.Undefined;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.listing.Variable;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.Symbol;
import ghidra.program.model.symbol.StackReference;
import ghidra.util.task.TaskMonitor;

public class STLocalLifetimeAnalyzer extends GhidraScript {
    private static final String APPLIER_MARKER = "[STLocalLifetimeApplier]";
    private static final int DECOMPILE_TIMEOUT = 600;
    private static final int DECOMPILE_CHUNK_SIZE = 256;
    private static final int RETURN_WEIGHT = 12;
    private static final int COPY_WEIGHT = 10;
    private static final int TYPED_FIELD_WEIGHT = 12;
    private static final int ARGUMENT_WEIGHT = 4;
    private static final int EXTENSION_ROLE_WEIGHT = 10;
    private static final int ARITHMETIC_ROLE_WEIGHT = 4;
    private static final int BOOLEAN_ROLE_WEIGHT = 10;
    private static final int BYTE_AFFINE_ROLE_WEIGHT = 10;
    private static final int FLOAT_ROLE_WEIGHT = 12;
    private static final int CONTROL_INDEX_ROLE_WEIGHT = 12;
    private static final int PEER_POINTER_WEIGHT = 4;

    private final List<Row> rows = new ArrayList<>();
    private final List<Failure> failures = new ArrayList<>();
    private int functionsSeen;
    private int mergedLocals;
    private int mergeGroups;
    private int singleGroupUnknowns;
    private int singleGroupProposals;
    private int groupsWithEvidence;
    private int conflicts;

    @Override
    protected void run() throws Exception {
        // Read-only script: do not retain the implicit GhidraScript transaction.
        end(true);
        if (currentProgram == null) {
            printerr("Open the analyzed ST program first.");
            return;
        }
        File selected = outputDirectory();
        if (selected == null) return;
        Path directory = programDirectory(selected);
        Files.createDirectories(directory);

        List<Function> candidates = new ArrayList<>();
        List<Address> only = selectedFunctions();
        if (!only.isEmpty()) {
            for (Address address : only) {
                Function function = currentProgram.getFunctionManager()
                    .getFunctionAt(address);
                if (function == null)
                    throw new IllegalArgumentException(
                        "No function at " + addr(address));
                if (candidate(function)) candidates.add(function);
            }
        }
        else {
            FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
            while (functions.hasNext()) {
                monitor.checkCancelled();
                Function function = functions.next();
                if (candidate(function)) candidates.add(function);
            }
        }
        analyzeParallel(candidates);

        rows.sort(Comparator.comparing((Row row) -> row.functionAddress)
            .thenComparing(row -> row.originalName)
            .thenComparingInt(row -> row.mergeGroup)
            .thenComparing(row -> row.anchor.address)
            .thenComparingInt(row -> row.anchor.time));
        writeProposals(directory.resolve("local_lifetime_proposals.tsv"));
        writeFailures(directory.resolve("local_lifetime_failures.tsv"));
        writeSummary(directory.resolve("local_lifetime_summary.txt"));
        println("Local-lifetime analysis complete: " +
            directory.toAbsolutePath().normalize());
        println("Functions=" + functionsSeen + ", merged_locals=" + mergedLocals +
            ", merge_groups=" + mergeGroups + ", groups_with_evidence=" +
            groupsWithEvidence + ", single_group_unknowns=" +
            singleGroupUnknowns + ", single_group_proposals=" +
            singleGroupProposals + ", proposals=" + rows.size() + ", apply=" +
            rows.stream().filter(row -> row.apply).count() + ", conflicts=" +
            conflicts + ", failures=" + failures.size());
    }

    private boolean candidate(Function function) {
        return function != null && !function.isExternal() && !function.isThunk() &&
            !library(function);
    }

    private void analyzeParallel(List<Function> functions) throws Exception {
        if (functions.isEmpty()) return;
        DecompilerCallback<DecompileResults> callback = new DecompilerCallback<>(
                currentProgram, dec -> {
                    // Only the HighFunction/local symbol map is consumed below.
                    // Rendering C roughly doubles work for large functions and adds no
                    // evidence to merge-group recovery.
                    dec.toggleCCode(false);
                    dec.toggleSyntaxTree(true);
                }) {
            @Override
            public DecompileResults process(DecompileResults result,
                    TaskMonitor callbackMonitor) {
                return result;
            }
        };
        callback.setTimeout(DECOMPILE_TIMEOUT);
        try {
            for (int start = 0; start < functions.size();
                    start += DECOMPILE_CHUNK_SIZE) {
                monitor.checkCancelled();
                int end = Math.min(functions.size(), start + DECOMPILE_CHUNK_SIZE);
                List<DecompileResults> results = ParallelDecompiler.decompileFunctions(
                    callback, functions.subList(start, end), monitor);
                results.removeIf(result -> result == null ||
                    result.getFunction() == null);
                results.sort(Comparator.comparing(result ->
                    result.getFunction().getEntryPoint()));
                for (DecompileResults result : results) analyze(result);
            }
        }
        finally {
            callback.dispose();
        }
    }

    private void analyze(DecompileResults result) throws Exception {
        Function function = result.getFunction();
        if (!candidate(function)) return;
        functionsSeen++;
        if (!result.decompileCompleted()) {
            failures.add(new Failure(function, text(result.getErrorMessage())));
            return;
        }
        Object highFunction = result.getClass()
            .getMethod("getHighFunction").invoke(result);
        if (highFunction == null) {
            failures.add(new Failure(function, "decompiler returned no HighFunction"));
            return;
        }
        Object localMap = highFunction.getClass()
            .getMethod("getLocalSymbolMap").invoke(highFunction);
        @SuppressWarnings("unchecked")
        Iterator<Object> symbols = (Iterator<Object>)localMap.getClass()
            .getMethod("getSymbols").invoke(localMap);
        Set<Object> seenHighVariables =
            java.util.Collections.newSetFromMap(new java.util.IdentityHashMap<>());
        while (symbols.hasNext()) {
            monitor.checkCancelled();
            Object symbol = symbols.next();
            if ((boolean)symbol.getClass().getMethod("isParameter").invoke(symbol) ||
                    (boolean)symbol.getClass().getMethod("isGlobal").invoke(symbol))
                continue;
            Object high = symbol.getClass()
                .getMethod("getHighVariable").invoke(symbol);
            if (high == null || !seenHighVariables.add(high)) continue;
            analyzeHighVariable(function, symbol, high);
        }
    }

    private void analyzeHighVariable(Function function, Object highSymbol,
            Object high) throws Exception {
        Object[] instances = (Object[])high.getClass()
            .getMethod("getInstances").invoke(high);
        Map<Short, List<Object>> groups = new TreeMap<>();
        for (Object varnode : instances) {
            short group = ((Number)varnode.getClass()
                .getMethod("getMergeGroup").invoke(varnode)).shortValue();
            groups.computeIfAbsent(group, ignored -> new ArrayList<>())
                .add(varnode);
        }
        String originalName = (String)highSymbol.getClass()
            .getMethod("getName").invoke(highSymbol);
        DataType currentType = (DataType)highSymbol.getClass()
            .getMethod("getDataType").invoke(highSymbol);
        String currentSpecification = typeSpecification(currentType);
        SourceType symbolSource = symbolSource(highSymbol);
        boolean merged = groups.size() > 1;
        boolean receiverAliasCandidate =
            receiverAliasCandidate(function, highSymbol, currentType);
        if (!merged && !genericUnknown(currentType) &&
                !scriptOwnedScalarLocal(highSymbol, currentType) &&
                !receiverAliasCandidate)
            return;
        if (merged) {
            mergedLocals++;
            mergeGroups += groups.size();
        }
        else singleGroupUnknowns++;

        Map<Short, Decision> decisions = new TreeMap<>();
        for (Map.Entry<Short, List<Object>> entry : groups.entrySet()) {
            Map<String, TypeEvidence> evidence = new TreeMap<>();
            boolean mixedDomainEligible = merged || genericUnknown(currentType);
            for (Object varnode : entry.getValue())
                collectEvidence(varnode, evidence,
                    scalarRoleEligible(currentType) ||
                        mixedDomainEligible && !semanticPointer(currentType),
                    mixedDomainEligible);
            if (!merged && genericUnknown(currentType))
                reinforceMachineControlIndex(function, highSymbol, evidence);
            if (receiverAliasCandidate)
                collectReceiverAliasEvidence(function, entry.getValue(),
                    currentType, evidence);
            if (!evidence.isEmpty()) groupsWithEvidence++;
            Decision decision = decide(evidence);
            decisions.put(entry.getKey(), decision);
        }

        for (Map.Entry<Short, Decision> entry : decisions.entrySet()) {
            Decision decision = entry.getValue();
            if (decision.selected == null) {
                if (!decision.conflict) continue;
                conflicts++;
                Evidence anchor = firstEvidence(decision.evidence);
                if (anchor == null) continue;
                rows.add(new Row(false, function, originalName, entry.getKey(),
                    groups.size(), currentSpecification, symbolSource.toString(),
                    "", anchor, decision.evidence.size(), "conflict",
                    "incompatible exact lifetime types=" +
                        decision.evidence.keySet()));
                continue;
            }
            TypeEvidence selected = decision.selected;
            Evidence anchor = selected.anchors.stream()
                .sorted(Evidence.ORDER).findFirst().orElse(null);
            if (anchor == null) continue;
            boolean different = !equivalentLifetimeSpecifications(
                selected.specification, currentSpecification);
            boolean isolate = merged && isolationEligible(selected) &&
                requiresIsolation(entry.getKey(), selected.specification,
                    decisions);
            // Proposal TSVs are an apply/review queue, not an inventory of every
            // already-correct HighVariable. A same-typed group is retained only when
            // heterogeneous sibling lifetimes make isolation itself meaningful.
            if (!different && !isolate) continue;
            boolean manual = symbolSource == SourceType.USER_DEFINED ||
                symbolSource == SourceType.IMPORTED;
            boolean neutralPointerRefinement = neutralVoidPointer(currentType);
            boolean closedNeutralPointerUse = !neutralPointerRefinement ||
                completeNeutralPointerConsumerEvidence(
                    groups.get(entry.getKey()), selected);
            boolean apply = (different || isolate) && !manual &&
                selected.score >= automaticThreshold(selected) &&
                closedNeutralPointerUse;
            if (!merged) singleGroupProposals++;
            String confidence = apply ? "high" :
                manual ? "manual" : different ? "review" : "existing";
            String reason = (merged ? "separate decompiler merge group" :
                receiverAliasCandidate ? "single receiver-alias lifetime" :
                "single undefined local lifetime") + "; exact_type_votes=" +
                selected.anchors.size() + "; score=" + selected.score +
                "; sources=" + selected.sources +
                (different ? "" :
                    "; exact type matches merged local but heterogeneous siblings require isolation") +
                (manual ? "; manual/imported HighSymbol preserved" : "") +
                (selected.score < automaticThreshold(selected) ?
                    "; one-way call conversion alone is review-only" : "") +
                (!closedNeutralPointerUse ?
                    "; neutral void pointer has an unclassified consumer" : "") +
                (neutralPointerRefinement && closedNeutralPointerUse ?
                    "; complete neutral-pointer consumer set agrees" : "");
            rows.add(new Row(apply, function, originalName, entry.getKey(),
                groups.size(), currentSpecification, symbolSource.toString(),
                selected.specification, anchor, selected.anchors.size(),
                confidence, reason));
        }
    }

    private void reinforceMachineControlIndex(Function function, Object highSymbol,
            Map<String, TypeEvidence> evidence) {
        TypeEvidence unsigned = evidence.get("/uint");
        if (unsigned == null || unsigned.sources.contains("control_index")) return;
        try {
            Symbol symbol = (Symbol)highSymbol.getClass()
                .getMethod("getSymbol").invoke(highSymbol);
            Object object = symbol == null ? null : symbol.getObject();
            if (!(object instanceof Variable variable) ||
                    !variable.isStackVariable() || variable.getLength() != 4 ||
                    !machineControlIndex(function, variable.getStackOffset())) return;
            unsigned.score += CONTROL_INDEX_ROLE_WEIGHT;
            unsigned.sources.add("control_index");
        }
        catch (Exception ignored) {
            // A missing persistent stack identity cannot reinforce p-code evidence.
        }
    }

    /** Exact dword stack load -> bounded table-byte selector -> computed JMP. */
    private boolean machineControlIndex(Function function, int stackOffset) {
        List<Instruction> instructions = new ArrayList<>();
        InstructionIterator iterator = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (iterator.hasNext()) instructions.add(iterator.next());
        for (int index = 0; index < instructions.size(); index++) {
            Instruction load = instructions.get(index);
            if (!"MOV".equalsIgnoreCase(load.getMnemonicString()) ||
                    load.getNumOperands() < 2 ||
                    !stackOperand(load, 1, stackOffset)) continue;
            String source = load.getDefaultOperandRepresentation(1)
                .toUpperCase(Locale.ROOT);
            if (!source.contains("DWORD PTR")) continue;
            String root = fullRegister(load.getDefaultOperandRepresentation(0));
            if (root.isBlank()) continue;
            Set<String> values = new HashSet<>();
            values.add(root);
            boolean compared = false, tableLoad = false;
            for (int next = index + 1; next < instructions.size() && next <= index + 80;
                    next++) {
                Instruction instruction = instructions.get(next);
                String mnemonic = instruction.getMnemonicString()
                    .toUpperCase(Locale.ROOT);
                String operand0 = instruction.getNumOperands() > 0 ?
                    instruction.getDefaultOperandRepresentation(0)
                        .toUpperCase(Locale.ROOT) : "";
                String operand1 = instruction.getNumOperands() > 1 ?
                    instruction.getDefaultOperandRepresentation(1)
                        .toUpperCase(Locale.ROOT) : "";
                if ((mnemonic.equals("CMP") || mnemonic.equals("TEST")) &&
                        values.stream().anyMatch(value ->
                            containsRegister(operand0, value) ||
                            containsRegister(operand1, value))) compared = true;
                boolean propagated = mnemonic.equals("MOV") && operand1.contains("[") &&
                    values.stream().anyMatch(value -> containsRegister(operand1, value));
                String destination = fullRegister(operand0);
                if (propagated && !destination.isBlank()) {
                    values.add(destination);
                    tableLoad = true;
                }
                if (mnemonic.equals("JMP") && instruction.getFlowType().isComputed() &&
                        tableLoad && compared && values.stream().anyMatch(value ->
                            containsRegister(operand0, value))) return true;
                if (!destination.isBlank() && writesFirstOperand(mnemonic) &&
                        !propagated) {
                    String copied = mnemonic.equals("MOV") ? fullRegister(operand1) : "";
                    if (copied.isBlank() || !values.contains(copied))
                        values.remove(destination);
                }
                if (mnemonic.equals("CALL") || values.isEmpty()) break;
            }
        }
        return false;
    }

    private boolean stackOperand(Instruction instruction, int operand,
            int expectedOffset) {
        for (ghidra.program.model.symbol.Reference reference :
                instruction.getOperandReferences(operand))
            if (reference instanceof StackReference stack &&
                    stack.getStackOffset() == expectedOffset) return true;
        return false;
    }

    private String fullRegister(String operand) {
        String value = operand == null ? "" : operand.trim().toUpperCase(Locale.ROOT);
        return switch (value) {
            case "EAX", "AX", "AL", "AH" -> "EAX";
            case "EBX", "BX", "BL", "BH" -> "EBX";
            case "ECX", "CX", "CL", "CH" -> "ECX";
            case "EDX", "DX", "DL", "DH" -> "EDX";
            case "ESI", "EDI", "EBP", "ESP" -> value;
            default -> "";
        };
    }

    private boolean containsRegister(String operand, String register) {
        return operand != null && Pattern.compile("(?<![A-Z0-9_])" +
            Pattern.quote(register) + "(?![A-Z0-9_])")
            .matcher(operand.toUpperCase(Locale.ROOT)).find();
    }

    private boolean writesFirstOperand(String mnemonic) {
        return !Set.of("CMP", "TEST", "PUSH", "CALL", "JMP", "JZ", "JNZ",
            "JA", "JAE", "JB", "JBE", "JG", "JGE", "JL", "JLE")
            .contains(mnemonic);
    }

    private boolean requiresIsolation(short group, String specification,
            Map<Short, Decision> decisions) {
        for (Map.Entry<Short, Decision> sibling : decisions.entrySet()) {
            if (sibling.getKey() == group) continue;
            Decision decision = sibling.getValue();
            if (decision.selected == null ||
                    !equivalentLifetimeSpecifications(
                        decision.selected.specification, specification))
                return true;
        }
        return false;
    }

    private boolean isolationEligible(TypeEvidence evidence) {
        DataType type = resolveTypeSpecification(evidence.specification);
        if (type == null || !semanticType(type)) return false;
        if (recursivePointerIdentity(type) != null) return true;
        return evidence.sources.contains("call_return") ||
            evidence.sources.contains("typed_copy") ||
            evidence.sources.contains("typed_cast") ||
            evidence.sources.contains("floating_role") ||
            evidence.sources.contains("control_index") ||
            evidence.sources.contains("byte_pointer_result") ||
            evidence.sources.contains("byte_pointer_index") ||
            evidence.sources.contains("peer_pointer_comparison") ||
            evidence.sources.contains("receiver_alias") ||
            evidence.sources.contains("typed_recursive_field");
    }

    private DataType resolveTypeSpecification(String specification) {
        if (specification == null || specification.isBlank()) return null;
        if (specification.startsWith("pointer:")) {
            DataType pointed = resolveTypeSpecification(
                specification.substring("pointer:".length()));
            return pointed == null ? null : new PointerDataType(pointed,
                currentProgram.getDefaultPointerSize(),
                currentProgram.getDataTypeManager());
        }
        return currentProgram.getDataTypeManager().getDataType(specification);
    }

    private int automaticThreshold(TypeEvidence evidence) {
        if (evidence.sources.contains("receiver_alias"))
            return TYPED_FIELD_WEIGHT;
        if (evidence.sources.contains("call_return")) return RETURN_WEIGHT;
        if (evidence.sources.contains("typed_copy")) return COPY_WEIGHT;
        if (evidence.sources.contains("typed_cast")) return COPY_WEIGHT;
        if (evidence.sources.contains("floating_role"))
            return FLOAT_ROLE_WEIGHT;
        if (evidence.sources.contains("control_index"))
            return CONTROL_INDEX_ROLE_WEIGHT;
        if (evidence.sources.contains("byte_pointer_result") ||
                evidence.sources.contains("byte_pointer_index"))
            return BYTE_AFFINE_ROLE_WEIGHT;
        if (evidence.sources.contains("peer_pointer_comparison"))
            return PEER_POINTER_WEIGHT * 2;
        if (evidence.sources.contains("typed_recursive_field"))
            return TYPED_FIELD_WEIGHT;
        return ARGUMENT_WEIGHT * 2;
    }

    private Decision decide(Map<String, TypeEvidence> evidence) {
        if (evidence.isEmpty()) return new Decision(null, false, evidence);
        if (evidence.size() != 1) {
            List<TypeEvidence> receiverAliases = evidence.values().stream()
                .filter(value -> value.sources.contains("receiver_alias"))
                .toList();
            // The exact unadjusted machine provenance of a local is stronger
            // than a downstream call accepting a base or neutral pointer.  A
            // competing receiver origin still cancels the proposal.
            if (receiverAliases.size() == 1)
                return new Decision(receiverAliases.get(0), false, evidence);
            List<TypeEvidence> exact = evidence.values().stream()
                .filter(value -> value.sources.stream()
                    .anyMatch(source -> !source.startsWith("scalar_") &&
                        !source.equals("boolean_role")))
                .toList();
            // A direct typed copy/call is stronger than the machine operation
            // used on that value. Comparisons and extensions describe how an
            // enum or typedef is consumed; they must not erase its nominal type.
            if (exact.size() == 1)
                return new Decision(exact.get(0), false, evidence);
            return new Decision(null, true, evidence);
        }
        return new Decision(evidence.values().iterator().next(), false, evidence);
    }

    /**
     * Recover a compiler spill/reload alias of a method receiver.  MSVC SEH and
     * setjmp-heavy functions frequently copy ECX through a stack local; Ghidra
     * then assigns that local a shorter base-class view and renders every
     * derived member as `*(T *)&alias->field_0xNN`.  This rule is deliberately
     * independent of names and addresses: the value must trace to the exact
     * auto `this` parameter through representation-neutral p-code only, and a
     * use must reach a concrete member present in the owner layout but absent
     * from the current pointee layout.
     */
    private void collectReceiverAliasEvidence(Function function,
            List<Object> varnodes, DataType currentType,
            Map<String, TypeEvidence> evidence) {
        DataType receiverType = receiverType(function);
        Structure receiver = pointedStructure(receiverType);
        Structure current = pointedStructure(currentType);
        if (receiver == null || current == null ||
                equivalentLifetimeType(receiverType, currentType)) return;
        try {
            for (Object varnode : varnodes) {
                Object definition = varnode.getClass().getMethod("getDef")
                    .invoke(varnode);
                if (definition == null ||
                        !receiverAliasOrigin(varnode, receiverType,
                            java.util.Collections.newSetFromMap(
                                new java.util.IdentityHashMap<>()), 0) ||
                        !needsReceiverLayout(varnode, current, receiver))
                    continue;
                String operation = mnemonic(definition);
                if (!Set.of("COPY", "CAST", "MULTIEQUAL", "INDIRECT")
                        .contains(operation)) continue;
                Evidence anchor = anchor(definition,
                    "receiver_alias_" + operation.toLowerCase(Locale.ROOT),
                    -1, null, typeSpecification(receiverType));
                addEvidence(evidence, receiverType, TYPED_FIELD_WEIGHT,
                    "receiver_alias", anchor);
            }
        }
        catch (Exception ignored) {
            // A partially malformed SSA chain is not receiver evidence.
        }
    }

    private boolean receiverAliasCandidate(Function function, Object highSymbol,
            DataType currentType) {
        DataType receiverType = receiverType(function);
        Structure receiver = pointedStructure(receiverType);
        Structure current = pointedStructure(currentType);
        return receiver != null && current != null &&
            !equivalentLifetimeType(receiverType, currentType) &&
            persistentLocal(highSymbol);
    }

    private boolean persistentLocal(Object highSymbol) {
        try {
            Symbol symbol = (Symbol)highSymbol.getClass()
                .getMethod("getSymbol").invoke(highSymbol);
            Object object = symbol == null ? null : symbol.getObject();
            return object instanceof Variable variable &&
                !(variable instanceof Parameter);
        }
        catch (Exception ignored) {
            return false;
        }
    }

    private DataType receiverType(Function function) {
        if (function == null ||
                !"__thiscall".equals(function.getCallingConventionName()))
            return null;
        for (Parameter parameter : function.getParameters()) {
            if (!parameter.isAutoParameter() ||
                    !"this".equals(parameter.getName())) continue;
            return semanticPointer(parameter.getDataType()) ?
                parameter.getDataType() : null;
        }
        return null;
    }

    private Structure pointedStructure(DataType type) {
        type = untypedef(type);
        if (!(type instanceof Pointer pointer)) return null;
        DataType pointed = untypedef(pointer.getDataType());
        return pointed instanceof Structure structure ? structure : null;
    }

    private boolean receiverAliasOrigin(Object varnode, DataType receiverType,
            Set<Object> visited, int depth) throws Exception {
        if (varnode == null || depth > 32 || !visited.add(varnode)) return false;
        Object high = varnode.getClass().getMethod("getHigh").invoke(varnode);
        Object symbol = high == null ? null : high.getClass()
            .getMethod("getSymbol").invoke(high);
        if (symbol != null && (boolean)symbol.getClass()
                .getMethod("isParameter").invoke(symbol)) {
            String name = (String)symbol.getClass().getMethod("getName")
                .invoke(symbol);
            DataType type = (DataType)high.getClass().getMethod("getDataType")
                .invoke(high);
            return "this".equals(name) &&
                equivalentLifetimeType(type, receiverType);
        }
        Object definition = varnode.getClass().getMethod("getDef").invoke(varnode);
        if (definition == null) return false;
        String operation = mnemonic(definition);
        int inputs = ((Number)definition.getClass().getMethod("getNumInputs")
            .invoke(definition)).intValue();
        if (operation.equals("COPY") || operation.equals("CAST") ||
                operation.equals("INDIRECT")) {
            if (inputs < 1) return false;
            Object input = definition.getClass().getMethod("getInput", int.class)
                .invoke(definition, 0);
            int inputSize = ((Number)input.getClass().getMethod("getSize")
                .invoke(input)).intValue();
            int outputSize = ((Number)varnode.getClass().getMethod("getSize")
                .invoke(varnode)).intValue();
            return inputSize == outputSize && receiverAliasOrigin(input,
                receiverType, visited, depth + 1);
        }
        if (!operation.equals("MULTIEQUAL") || inputs < 1) return false;
        for (int index = 0; index < inputs; index++) {
            Object input = definition.getClass().getMethod("getInput", int.class)
                .invoke(definition, index);
            Set<Object> branch = java.util.Collections.newSetFromMap(
                new java.util.IdentityHashMap<>());
            branch.addAll(visited);
            if (!receiverAliasOrigin(input, receiverType, branch, depth + 1))
                return false;
        }
        return true;
    }

    private boolean needsReceiverLayout(Object varnode, Structure current,
            Structure receiver) throws Exception {
        return needsReceiverLayout(varnode, current, receiver,
            java.util.Collections.newSetFromMap(
                new java.util.IdentityHashMap<>()), 0);
    }

    private boolean needsReceiverLayout(Object varnode, Structure current,
            Structure receiver, Set<Object> visited, int depth) throws Exception {
        if (varnode == null || depth > 16 || !visited.add(varnode)) return false;
        @SuppressWarnings("unchecked")
        Iterator<Object> descendants = (Iterator<Object>)varnode.getClass()
            .getMethod("getDescendants").invoke(varnode);
        while (descendants.hasNext()) {
            Object operation = descendants.next();
            String mnemonic = mnemonic(operation);
            if (Set.of("COPY", "CAST", "INDIRECT", "MULTIEQUAL")
                    .contains(mnemonic)) {
                Object output = operation.getClass().getMethod("getOutput")
                    .invoke(operation);
                if (output != null && needsReceiverLayout(output, current,
                        receiver, visited, depth + 1)) return true;
                continue;
            }
            if (!mnemonic.equals("PTRSUB")) continue;
            Object base = operation.getClass().getMethod("getInput", int.class)
                .invoke(operation, 0);
            if (!sameLifetime(base, varnode)) continue;
            Long offset = constant(operation.getClass()
                .getMethod("getInput", int.class).invoke(operation, 1));
            if (offset == null || offset < 0 || offset > Integer.MAX_VALUE)
                continue;
            DataTypeComponent wanted = receiver.getComponentAt(offset.intValue());
            if (wanted == null || wanted.getOffset() != offset.intValue() ||
                    wanted.getFieldName() == null ||
                    wanted.getFieldName().isBlank() ||
                    !semanticType(wanted.getDataType())) continue;
            DataTypeComponent existing = current.getComponentAt(offset.intValue());
            if (existing == null || existing.getOffset() != offset.intValue() ||
                    existing.getLength() != wanted.getLength() ||
                    !equivalentLifetimeType(existing.getDataType(),
                        wanted.getDataType())) return true;
        }
        return false;
    }

    private Evidence firstEvidence(Map<String, TypeEvidence> evidence) {
        return evidence.values().stream()
            .flatMap(value -> value.anchors.stream())
            .sorted(Evidence.ORDER).findFirst().orElse(null);
    }

    private void collectEvidence(Object varnode,
            Map<String, TypeEvidence> evidence, boolean scalarEligible,
            boolean mixedDomainEligible) {
        try {
            Object definition = varnode.getClass().getMethod("getDef").invoke(varnode);
            if (definition != null) {
                String mnemonic = mnemonic(definition);
                if (mnemonic.equals("CALL"))
                    collectCallReturn(definition, varnode, evidence);
                else if (mnemonic.equals("COPY"))
                    collectTypedCopy(definition, varnode, evidence);
                else if (mnemonic.equals("LOAD"))
                    collectTypedFieldLoad(definition, varnode, evidence);
                else if (mnemonic.equals("PTRSUB"))
                    collectTypedFieldAddress(definition, varnode, evidence);
                else if (mnemonic.equals("CAST"))
                    collectTypedCast(definition, varnode, evidence);
                if (mnemonic.equals("INT_ADD"))
                    collectBytePointerAffineRole(definition, varnode, evidence);
                if (scalarEligible)
                    collectScalarRole(definition, varnode, evidence);
                if (mixedDomainEligible)
                    collectFloatingRole(definition, varnode, evidence);
            }
            @SuppressWarnings("unchecked")
            Iterator<Object> descendants = (Iterator<Object>)varnode.getClass()
                .getMethod("getDescendants").invoke(varnode);
            while (descendants.hasNext()) {
                Object op = descendants.next();
                if (mnemonic(op).equals("CALL"))
                    collectCallArgument(op, varnode, evidence);
                else if (mnemonic(op).equals("STORE"))
                    collectTypedFieldStore(op, varnode, evidence);
                if (mnemonic(op).equals("INT_ADD"))
                    collectBytePointerAffineRole(op, varnode, evidence);
                if (scalarEligible)
                    collectScalarRole(op, varnode, evidence);
                collectPeerPointerComparison(op, varnode, evidence);
                if (mixedDomainEligible)
                    collectFloatingRole(op, varnode, evidence);
            }
            if (mixedDomainEligible)
                collectControlIndexRole(varnode, evidence);
        }
        catch (Exception ignored) {
            // One malformed p-code edge does not invalidate other independent anchors.
        }
    }

    /**
     * A FLOAT_* p-code operation is an exact value-domain boundary.  It is
     * stronger than the decompiler's current nominal local type: MSVC commonly
     * reuses one four-byte stack slot for a pointer and, later, for an x87
     * single-precision temporary.  Only operands which the p-code operation
     * itself interprets as floating values participate; integer inputs to
     * FLOAT_INT2FLOAT and boolean/integer outputs of comparisons/conversions do
     * not.
     */
    private void collectFloatingRole(Object op, Object varnode,
            Map<String, TypeEvidence> evidence) throws Exception {
        String operation = mnemonic(op);
        if (!operation.startsWith("FLOAT_")) return;
        int operand = operandOf(op, varnode);
        boolean output = sameLifetime(op.getClass().getMethod("getOutput")
            .invoke(op), varnode);
        boolean floating = switch (operation) {
            case "FLOAT_INT2FLOAT" -> output;
            case "FLOAT_TRUNC", "FLOAT_CEIL", "FLOAT_FLOOR", "FLOAT_ROUND" ->
                operand == 0;
            case "FLOAT_EQUAL", "FLOAT_NOTEQUAL", "FLOAT_LESS",
                    "FLOAT_LESSEQUAL", "FLOAT_NAN" -> operand >= 0;
            default -> operand >= 0 || output;
        };
        if (!floating) return;
        int size = ((Number)varnode.getClass().getMethod("getSize")
            .invoke(varnode)).intValue();
        String specification = floatingSpecification(size);
        if (specification == null) return;
        Evidence anchor = anchor(op, "floating_value_role",
            output ? -1 : operand, null, operation);
        TypeEvidence value = evidence.computeIfAbsent(specification,
            ignored -> new TypeEvidence(specification));
        if (!value.anchorKeys.add(anchor.key())) return;
        value.score += FLOAT_ROLE_WEIGHT;
        value.sources.add("floating_role");
        value.anchors.add(anchor);
    }

    private String floatingSpecification(int size) {
        return switch (size) {
            case 4 -> "/float";
            case 8 -> "/double";
            case 10 -> "/float10";
            default -> null;
        };
    }

    /**
     * Recognize the exact computed-jump selector chain rather than treating a
     * pointer-looking value in a switch as a pointer.  The selector must be an
     * index of a scale-4 PTRADD/INT_MULT and that result must reach BRANCHIND
     * only through address construction and one table LOAD.  An ordinary array
     * subscript or indirect function-pointer call therefore does not qualify.
     */
    private void collectControlIndexRole(Object varnode,
            Map<String, TypeEvidence> evidence) throws Exception {
        @SuppressWarnings("unchecked")
        Iterator<Object> descendants = (Iterator<Object>)varnode.getClass()
            .getMethod("getDescendants").invoke(varnode);
        while (descendants.hasNext()) {
            Object op = descendants.next();
            String operation = mnemonic(op);
            int operand = operandOf(op, varnode);
            if (operand < 0 || !switchScaleFour(op, operation, operand))
                continue;
            Object output = op.getClass().getMethod("getOutput").invoke(op);
            if (output == null || !reachesBranchInd(output,
                    java.util.Collections.newSetFromMap(
                        new java.util.IdentityHashMap<>()), 0, false))
                continue;
            int size = ((Number)varnode.getClass().getMethod("getSize")
                .invoke(varnode)).intValue();
            String specification = scalarSpecification(
                "unsigned_scalar_role", size);
            if (specification == null) return;
            Evidence anchor = anchor(op, "control_index_role", operand,
                null, operation);
            TypeEvidence value = evidence.computeIfAbsent(specification,
                ignored -> new TypeEvidence(specification));
            if (!value.anchorKeys.add(anchor.key())) return;
            value.score += CONTROL_INDEX_ROLE_WEIGHT;
            value.sources.add("control_index");
            value.anchors.add(anchor);
            return;
        }
    }

    private boolean switchScaleFour(Object op, String operation, int operand)
            throws Exception {
        int count = ((Number)op.getClass().getMethod("getNumInputs")
            .invoke(op)).intValue();
        if (operation.equals("PTRADD") && count >= 3 && operand == 1) {
            Long scale = constant(op.getClass().getMethod("getInput", int.class)
                .invoke(op, 2));
            return scale != null && scale == 4;
        }
        if (!operation.equals("INT_MULT") || count != 2) return false;
        int other = operand == 0 ? 1 : 0;
        Long scale = constant(op.getClass().getMethod("getInput", int.class)
            .invoke(op, other));
        return scale != null && scale == 4;
    }

    private boolean reachesBranchInd(Object varnode, Set<Object> visited,
            int depth, boolean loaded) throws Exception {
        if (varnode == null || depth > 8 || !visited.add(varnode)) return false;
        @SuppressWarnings("unchecked")
        Iterator<Object> descendants = (Iterator<Object>)varnode.getClass()
            .getMethod("getDescendants").invoke(varnode);
        while (descendants.hasNext()) {
            Object op = descendants.next();
            String operation = mnemonic(op);
            if (operation.equals("BRANCHIND")) {
                if (loaded && operandOf(op, varnode) >= 0) return true;
                continue;
            }
            boolean nextLoaded = loaded || operation.equals("LOAD");
            if (!Set.of("COPY", "CAST", "INT_ADD", "PTRADD", "LOAD",
                    "MULTIEQUAL", "INDIRECT").contains(operation))
                continue;
            Object output = op.getClass().getMethod("getOutput").invoke(op);
            if (output != null && reachesBranchInd(output, visited, depth + 1,
                    nextLoaded)) return true;
        }
        return false;
    }

    /**
     * Split the two exact machine roles in ``bytePointer + byteOffset``.
     *
     * Ghidra is free to commute INT_ADD.  When a compiler reuses one Listing
     * local for a pointer in one region and a zero-based byte offset in another,
     * the decompiler can consequently print ``offset[(int)pointer]`` or reject
     * subscripting a scalar.  An independently typed one-byte pointer makes the
     * geometry exact: the INT_ADD result is the same pointer type, while the
     * other input is an unsigned byte offset.  Pointee sizes above one are not
     * eligible because p-code byte addition would not equal C pointer scaling.
     */
    private void collectBytePointerAffineRole(Object op, Object varnode,
            Map<String, TypeEvidence> evidence) throws Exception {
        if (!"INT_ADD".equals(mnemonic(op))) return;
        int count = ((Number)op.getClass().getMethod("getNumInputs")
            .invoke(op)).intValue();
        if (count != 2) return;
        Object output = op.getClass().getMethod("getOutput").invoke(op);
        boolean isOutput = sameLifetime(output, varnode);
        int operand = operandOf(op, varnode);
        if (!isOutput && operand < 0) return;

        for (int index = 0; index < count; index++) {
            Object input = op.getClass().getMethod("getInput", int.class)
                .invoke(op, index);
            if (sameLifetime(input, varnode)) continue;
            DataType pointer = independentBytePointer(input);
            if (pointer == null) continue;
            DataType proposed = isOutput ? pointer :
                currentProgram.getDataTypeManager().getDataType("/uint");
            if (proposed == null) return;
            String source = isOutput ? "byte_pointer_result" :
                "byte_pointer_index";
            Evidence anchor = anchor(op, source,
                isOutput ? -1 : operand, null, typeSpecification(pointer));
            addEvidence(evidence, proposed, BYTE_AFFINE_ROLE_WEIGHT,
                source, anchor);
            return;
        }
    }

    private DataType independentBytePointer(Object varnode) throws Exception {
        if (varnode == null) return null;
        Object high = varnode.getClass().getMethod("getHigh").invoke(varnode);
        if (high == null) return null;
        DataType type = (DataType)high.getClass().getMethod("getDataType")
            .invoke(high);
        DataType base = untypedef(type);
        if (!(base instanceof Pointer pointer)) return null;
        DataType pointed = untypedef(pointer.getDataType());
        if (pointed == null || pointed.getLength() != 1 ||
                Undefined.isUndefined(pointed) ||
                pointed.getPathName().equals("/void")) return null;

        Object symbol = high.getClass().getMethod("getSymbol").invoke(high);
        if (symbol != null) {
            boolean parameter = (boolean)symbol.getClass()
                .getMethod("isParameter").invoke(symbol);
            boolean global = (boolean)symbol.getClass()
                .getMethod("isGlobal").invoke(symbol);
            if (parameter || global) return type;
        }
        Object definition = varnode.getClass().getMethod("getDef").invoke(varnode);
        if (definition != null && "CALL".equals(mnemonic(definition))) {
            CallTarget target = callTarget(definition);
            Function function = target == null ? null :
                signatureFunctionForReturn(target);
            if (function != null && equivalentLifetimeType(
                    function.getReturnType(), type)) return type;
        }
        return null;
    }

    /**
     * Recover scalar meaning from p-code operations whose semantics explicitly
     * distinguish signed, unsigned, or boolean values. Width alone is never
     * enough: INT_SEXT/INT_ZEXT and BOOL_* are strong anchors, while arithmetic
     * and comparisons need two agreeing observations through the normal score
     * threshold. Equality, COPY, generic arithmetic, and constants deliberately
     * contribute no signedness vote.
     */
    private void collectScalarRole(Object op, Object varnode,
            Map<String, TypeEvidence> evidence) throws Exception {
        ScalarRole role = scalarRole(op, varnode);
        if (role == null) return;
        int size = ((Number)varnode.getClass().getMethod("getSize")
            .invoke(varnode)).intValue();
        String specification = scalarSpecification(role.kind, size);
        if (specification == null) return;
        Evidence anchor = anchor(op, role.kind, role.operand, null,
            mnemonic(op));
        TypeEvidence value = evidence.computeIfAbsent(specification,
            ignored -> new TypeEvidence(specification));
        if (!value.anchorKeys.add(anchor.key())) return;
        value.score += role.weight;
        value.sources.add(role.source);
        value.anchors.add(anchor);
    }

    /**
     * Repair an earlier scalar lifetime guess when the exact same SSA value is
     * repeatedly ordered against a concrete pointer peer.  MSVC's generic sort
     * and partition loops compare byte cursors with INT_LESS/INT_LESSEQUAL;
     * those integer p-code mnemonics describe the machine comparison, not a
     * scalar source domain.  One nominal peer is review-only.  Two distinct
     * comparison anchors which agree on one concrete pointer type are enough to
     * restore only an automation-owned scalar local; manual/imported symbols
     * remain protected by the ordinary proposal path.
     */
    private void collectPeerPointerComparison(Object op, Object varnode,
            Map<String, TypeEvidence> evidence) throws Exception {
        String operation = mnemonic(op);
        if (!Set.of("INT_LESS", "INT_LESSEQUAL", "INT_SLESS",
                "INT_SLESSEQUAL").contains(operation)) return;
        int operand = operandOf(op, varnode);
        if (operand < 0) return;
        int count = ((Number)op.getClass().getMethod("getNumInputs")
            .invoke(op)).intValue();
        if (count != 2) return;
        Object peer = op.getClass().getMethod("getInput", int.class)
            .invoke(op, operand == 0 ? 1 : 0);
        Object high = peer == null ? null : peer.getClass()
            .getMethod("getHigh").invoke(peer);
        if (high == null) return;
        DataType type = (DataType)high.getClass().getMethod("getDataType")
            .invoke(high);
        if (!semanticPointer(type)) return;
        DataType base = untypedef(type);
        if (!(base instanceof Pointer pointer)) return;
        DataType pointed = untypedef(pointer.getDataType());
        if (!(pointed instanceof Structure structure) ||
                !hashOwnedGeneratedStructure(structure)) return;
        int size = ((Number)varnode.getClass().getMethod("getSize")
            .invoke(varnode)).intValue();
        if (!usableType(type, size)) return;
        Evidence anchor = anchor(op, "peer_pointer_comparison", operand,
            null, typeSpecification(type));
        addEvidence(evidence, type, PEER_POINTER_WEIGHT,
            "peer_pointer_comparison", anchor);
    }

    private ScalarRole scalarRole(Object op, Object varnode) throws Exception {
        String mnemonic = mnemonic(op);
        int operand = operandOf(op, varnode);
        boolean output = sameLifetime(op.getClass().getMethod("getOutput")
            .invoke(op), varnode);
        if (mnemonic.equals("INT_SEXT") && operand == 0)
            return new ScalarRole("signed_scalar_role", operand,
                EXTENSION_ROLE_WEIGHT, "scalar_extension");
        if (mnemonic.equals("INT_ZEXT") && operand == 0)
            return new ScalarRole("unsigned_scalar_role", operand,
                EXTENSION_ROLE_WEIGHT, "scalar_extension");
        if (mnemonic.startsWith("BOOL_") && (operand >= 0 || output))
            return new ScalarRole("boolean_scalar_role",
                output ? -1 : operand, BOOLEAN_ROLE_WEIGHT, "boolean_role");
        if (output && Set.of("INT_EQUAL", "INT_NOTEQUAL", "INT_LESS",
                "INT_LESSEQUAL", "INT_SLESS", "INT_SLESSEQUAL",
                "INT_CARRY", "INT_SCARRY", "INT_SBORROW")
                .contains(mnemonic))
            return new ScalarRole("boolean_scalar_role", -1,
                BOOLEAN_ROLE_WEIGHT, "boolean_role");

        boolean signed = Set.of("INT_SLESS", "INT_SLESSEQUAL", "INT_SDIV",
            "INT_SREM", "INT_SRIGHT").contains(mnemonic);
        boolean unsigned = Set.of("INT_LESS", "INT_LESSEQUAL", "INT_DIV",
            "INT_REM", "INT_RIGHT").contains(mnemonic);
        if ((!signed && !unsigned) || (operand < 0 && !output)) return null;
        return new ScalarRole(signed ? "signed_scalar_role" :
            "unsigned_scalar_role", output ? -1 : operand,
            ARITHMETIC_ROLE_WEIGHT, "scalar_arithmetic");
    }

    private int operandOf(Object op, Object varnode) throws Exception {
        int count = ((Number)op.getClass().getMethod("getNumInputs")
            .invoke(op)).intValue();
        for (int index = 0; index < count; index++) {
            Object input = op.getClass().getMethod("getInput", int.class)
                .invoke(op, index);
            if (sameLifetime(input, varnode)) return index;
        }
        return -1;
    }

    private String scalarSpecification(String kind, int size) {
        if (kind.equals("boolean_scalar_role"))
            return size == 1 ? "/bool" : null;
        if (kind.equals("signed_scalar_role"))
            return switch (size) {
                case 1 -> "/char";
                case 2 -> "/short";
                case 4 -> "/int";
                default -> null;
            };
        if (kind.equals("unsigned_scalar_role"))
            return switch (size) {
                case 1 -> "/byte";
                case 2 -> "/ushort";
                case 4 -> "/uint";
                default -> null;
            };
        return null;
    }

    private void collectCallReturn(Object op, Object output,
            Map<String, TypeEvidence> evidence) throws Exception {
        CallTarget target = callTarget(op);
        if (target == null) return;
        Function signature = signatureFunctionForReturn(target);
        if (signature == null) return;
        DataType type = signature.getReturnType();
        int size = ((Number)output.getClass().getMethod("getSize")
            .invoke(output)).intValue();
        if (!usableType(type, size) || !trustedReturn(signature)) return;
        Evidence anchor = anchor(op, "call_return", -1, target,
            signature.getSignatureSource().toString());
        addEvidence(evidence, type, RETURN_WEIGHT, "call_return", anchor);
    }

    private void collectCallArgument(Object op, Object varnode,
            Map<String, TypeEvidence> evidence) throws Exception {
        CallTarget target = callTarget(op);
        if (target == null) return;
        int inputCount = ((Number)op.getClass()
            .getMethod("getNumInputs").invoke(op)).intValue();
        for (int slot = 1; slot < inputCount; slot++) {
            Object input = op.getClass().getMethod("getInput", int.class)
                .invoke(op, slot);
            if (!sameLifetime(input, varnode)) continue;
            int argument = slot - 1;
            SignatureParameters signature =
                signatureParameters(target, inputCount - 1);
            if (signature == null) continue;
            Parameter[] parameters = signature.parameters;
            if (argument >= parameters.length) continue;
            Parameter parameter = parameters[argument];
            int size = ((Number)varnode.getClass().getMethod("getSize")
                .invoke(varnode)).intValue();
            if (!usableType(parameter.getDataType(), size) ||
                    !trustedParameter(signature.function, parameter)) continue;
            Evidence anchor = anchor(op, "call_argument", argument, target,
                parameter.getSource().toString());
            addEvidence(evidence, parameter.getDataType(), ARGUMENT_WEIGHT,
                "call_argument", anchor);
        }
    }

    private void collectTypedCopy(Object op, Object output,
            Map<String, TypeEvidence> evidence) throws Exception {
        Object input = op.getClass().getMethod("getInput", int.class)
            .invoke(op, 0);
        if (input == null || input == output) return;
        Object sourceHigh = input.getClass().getMethod("getHigh").invoke(input);
        if (sourceHigh == null) return;
        Object outputHigh =
            output.getClass().getMethod("getHigh").invoke(output);
        if (sourceHigh == outputHigh) return;
        DataType type = (DataType)sourceHigh.getClass()
            .getMethod("getDataType").invoke(sourceHigh);
        int size = ((Number)output.getClass().getMethod("getSize")
            .invoke(output)).intValue();
        if (!usableType(type, size)) return;
        Object sourceSymbol = sourceHigh.getClass()
            .getMethod("getSymbol").invoke(sourceHigh);
        if (sourceSymbol == null) {
            // A symbol-less decompiler nominal is downstream SSA inference,
            // not a Program-database anchor.  Keep only the exact recursive
            // shape case which the applier can independently revalidate.
            if (recursivePointerIdentity(type) == null) return;
            Evidence anchor = anchor(op, "typed_copy", 0, null,
                "decompiler_nominal_type");
            addEvidence(evidence, type, COPY_WEIGHT, "typed_copy", anchor);
            return;
        }
        boolean parameter = (boolean)sourceSymbol.getClass()
            .getMethod("isParameter").invoke(sourceSymbol);
        boolean global = (boolean)sourceSymbol.getClass()
            .getMethod("isGlobal").invoke(sourceSymbol);
        // A local-to-local COPY is not an independent type boundary.  The
        // decompiler routinely propagates a nominal type through an SSA merge,
        // so accepting every nominal source here generated proposals which the
        // applier (correctly) could never re-anchor.  Only the exact hash-owned
        // recursive-node case is stable enough to survive a fresh decompile;
        // parameters and globals remain independent database anchors.
        if (!parameter && !global && recursivePointerIdentity(type) == null) return;
        SourceType source = symbolSource(sourceSymbol);
        if (source == SourceType.DEFAULT && !nominalType(type)) return;
        Evidence anchor = anchor(op, "typed_copy", 0, null,
            source.toString());
        addEvidence(evidence, type, COPY_WEIGHT, "typed_copy", anchor);
    }

    /**
     * Recover a local lifetime from an exact component load of a hash-intact
     * recursive structure. This is rooted in the current datatype and p-code
     * address expression, never in a variable name or image address.
     */
    private void collectTypedFieldLoad(Object op, Object output,
            Map<String, TypeEvidence> evidence) throws Exception {
        Object address = op.getClass().getMethod("getInput", int.class)
            .invoke(op, 1);
        TypedField field = typedRecursiveField(address);
        if (field == null) return;
        int size = ((Number)output.getClass().getMethod("getSize")
            .invoke(output)).intValue();
        if (!usableType(field.type, size)) return;
        Evidence anchor = anchor(op, "typed_field_load", 1, null,
            field.identity);
        addEvidence(evidence, field.type, TYPED_FIELD_WEIGHT,
            "typed_recursive_field", anchor);
    }

    private void collectTypedFieldAddress(Object op, Object output,
            Map<String, TypeEvidence> evidence) throws Exception {
        TypedField field = typedRecursiveField(output);
        if (field == null) return;
        DataType pointer = new PointerDataType(field.type,
            currentProgram.getDefaultPointerSize(),
            currentProgram.getDataTypeManager());
        int size = ((Number)output.getClass().getMethod("getSize")
            .invoke(output)).intValue();
        if (!usableType(pointer, size)) return;
        Evidence anchor = anchor(op, "typed_field_address", -1, null,
            field.identity);
        addEvidence(evidence, pointer, TYPED_FIELD_WEIGHT,
            "typed_recursive_field", anchor);
    }

    private void collectTypedFieldStore(Object op, Object value,
            Map<String, TypeEvidence> evidence) throws Exception {
        int count = ((Number)op.getClass().getMethod("getNumInputs")
            .invoke(op)).intValue();
        if (count < 3) return;
        Object stored = op.getClass().getMethod("getInput", int.class)
            .invoke(op, 2);
        if (!sameLifetime(stored, value)) return;
        Object address = op.getClass().getMethod("getInput", int.class)
            .invoke(op, 1);
        TypedField field = typedRecursiveField(address);
        if (field == null) return;
        int size = ((Number)value.getClass().getMethod("getSize")
            .invoke(value)).intValue();
        if (!usableType(field.type, size)) return;
        Evidence anchor = anchor(op, "typed_field_store", 2, null,
            field.identity);
        addEvidence(evidence, field.type, TYPED_FIELD_WEIGHT,
            "typed_recursive_field", anchor);
    }

    /**
     * Ghidra commonly keeps the exact type on an ephemeral field-address/load
     * HighVariable, then gives the persisted local reached through a same-size
     * CAST an undefined pointer tower.  Carry the exact recursive-node pointer
     * chain across that one machine no-op.  Nominal cast targets are ineligible
     * at the caller, so this cannot overwrite a deliberate payload view.
     */
    private void collectTypedCast(Object op, Object output,
            Map<String, TypeEvidence> evidence) throws Exception {
        Object input = op.getClass().getMethod("getInput", int.class)
            .invoke(op, 0);
        if (input == null || input == output) return;
        Object sourceHigh = input.getClass().getMethod("getHigh").invoke(input);
        Object outputHigh = output.getClass().getMethod("getHigh").invoke(output);
        if (sourceHigh == null || sourceHigh == outputHigh) return;
        DataType type = (DataType)sourceHigh.getClass()
            .getMethod("getDataType").invoke(sourceHigh);
        int size = ((Number)output.getClass().getMethod("getSize")
            .invoke(output)).intValue();
        if (!usableType(type, size)) return;
        String identity = recursivePointerIdentity(type);
        if (identity != null) {
            Evidence anchor = anchor(op, "typed_recursive_cast", 0, null,
                identity);
            addEvidence(evidence, type, TYPED_FIELD_WEIGHT,
                "typed_recursive_field", anchor);
            return;
        }

        // A same-size CAST is a machine no-op.  Carry its source type only when
        // that source is a parameter/global with persistent provenance.  This
        // recovers the independent pointer/scalar lifetime which Ghidra often
        // hides behind an undefined merge group, without treating an arbitrary
        // consumer cast as proof of a new payload view.
        Object sourceSymbol = sourceHigh.getClass()
            .getMethod("getSymbol").invoke(sourceHigh);
        if (sourceSymbol == null) return;
        boolean parameter = (boolean)sourceSymbol.getClass()
            .getMethod("isParameter").invoke(sourceSymbol);
        boolean global = (boolean)sourceSymbol.getClass()
            .getMethod("isGlobal").invoke(sourceSymbol);
        SourceType source = symbolSource(sourceSymbol);
        if ((!parameter && !global) ||
                source == SourceType.DEFAULT && !nominalType(type)) return;
        Evidence anchor = anchor(op, "typed_cast", 0, null,
            typeSpecification(type));
        addEvidence(evidence, type, COPY_WEIGHT, "typed_cast", anchor);
    }

    private TypedField typedRecursiveField(Object address) throws Exception {
        if (address == null) return null;
        Object base = address;
        long offset = 0;
        Object definition = address.getClass().getMethod("getDef").invoke(address);
        if (definition != null && mnemonic(definition).equals("PTRSUB")) {
            base = definition.getClass().getMethod("getInput", int.class)
                .invoke(definition, 0);
            Object displacement = definition.getClass()
                .getMethod("getInput", int.class).invoke(definition, 1);
            Long value = constant(displacement);
            if (value == null) return null;
            offset = value;
        }
        Object high = base == null ? null :
            base.getClass().getMethod("getHigh").invoke(base);
        if (high == null) return null;
        DataType baseType = (DataType)high.getClass()
            .getMethod("getDataType").invoke(high);
        baseType = untypedef(baseType);
        if (!(baseType instanceof Pointer pointer)) return null;
        DataType pointed = untypedef(pointer.getDataType());
        if (!(pointed instanceof Structure structure) ||
                !hashOwnedGeneratedStructure(structure) ||
                offset < 0 || offset > Integer.MAX_VALUE) return null;
        DataTypeComponent component = structure.getComponentAt((int)offset);
        if (component == null || component.getOffset() != offset ||
                component.getLength() <= 0 ||
                !semanticType(component.getDataType())) return null;
        boolean recursiveContainer = text(structure.getDescription())
            .contains("[STRecursivePointeeApplier]");
        if (!recursiveContainer &&
                !pointsToHashOwnedRecursiveStructure(component.getDataType())) return null;
        return new TypedField(component.getDataType(),
            structure.getPathName() + "+0x" +
                Long.toHexString(offset).toUpperCase(Locale.ROOT));
    }

    private Long constant(Object varnode) {
        if (varnode == null) return null;
        try {
            if (!(boolean)varnode.getClass().getMethod("isConstant").invoke(varnode))
                return null;
            return ((Number)varnode.getClass().getMethod("getOffset")
                .invoke(varnode)).longValue();
        }
        catch (Exception ignored) {
            return null;
        }
    }

    private boolean hashOwnedGeneratedStructure(Structure structure) {
        String description = text(structure.getDescription());
        if (Set.of("[STRecursivePointeeApplier]", "[STClassLayoutApplier]",
                "[STGlobalDataApplier]", "[STGlobalAggregateApplier]",
                "[STPointerShapeApplier]",
                "[STTypeFamilyApplier]").stream().noneMatch(description::contains))
            return false;
        String stored = storedLayoutHash(description);
        return stored != null && stored.equals(layoutHash(structure));
    }

    private boolean pointsToHashOwnedRecursiveStructure(DataType type) {
        type = untypedef(type);
        if (!(type instanceof Pointer pointer)) return false;
        DataType pointed = untypedef(pointer.getDataType());
        return pointed instanceof Structure structure &&
            text(structure.getDescription()).contains("[STRecursivePointeeApplier]") &&
            hashOwnedGeneratedStructure(structure);
    }

    private String recursivePointerIdentity(DataType type) {
        String specification = typeSpecification(type);
        int depth = 0;
        DataType leaf = untypedef(type);
        while (leaf instanceof Pointer pointer) {
            depth++;
            leaf = untypedef(pointer.getDataType());
        }
        if (depth == 0 || !(leaf instanceof Structure structure) ||
                !text(structure.getDescription()).contains(
                    "[STRecursivePointeeApplier]") ||
                !hashOwnedGeneratedStructure(structure))
            return null;
        return specification + "->" + structure.getPathName();
    }

    private String storedLayoutHash(String description) {
        String marker = "generated_layout_sha256=";
        int index = description.indexOf(marker);
        if (index < 0 || description.length() < index + marker.length() + 64)
            return null;
        String value = description.substring(index + marker.length(),
            index + marker.length() + 64);
        return value.matches("[0-9a-fA-F]{64}") ?
            value.toLowerCase(Locale.ROOT) : null;
    }

    private String layoutHash(Structure structure) {
        StringBuilder layout = new StringBuilder();
        layout.append("length=").append(structure.getLength()).append('\n');
        for (DataTypeComponent component : structure.getDefinedComponents()) {
            layout.append(component.getOffset()).append('|')
                .append(component.getLength()).append('|')
                .append(component.getDataType().getPathName()).append('|')
                .append(text(component.getFieldName())).append('|')
                .append(text(component.getComment())).append('\n');
        }
        return sha256(layout.toString());
    }

    private String sha256(String value) {
        try {
            byte[] digest = MessageDigest.getInstance("SHA-256")
                .digest(value.getBytes(StandardCharsets.UTF_8));
            StringBuilder result = new StringBuilder();
            for (byte item : digest)
                result.append(String.format(Locale.ROOT, "%02x", item & 0xff));
            return result.toString();
        }
        catch (Exception exception) {
            throw new IllegalStateException("SHA-256 unavailable", exception);
        }
    }

    private void addEvidence(Map<String, TypeEvidence> evidence, DataType type,
            int weight, String source, Evidence anchor) {
        String specification = typeSpecification(type);
        TypeEvidence value = evidence.get(specification);
        if (value == null) {
            for (TypeEvidence existing : evidence.values()) {
                DataType existingType = resolveTypeSpecification(existing.specification);
                if (existingType != null && equivalentLifetimeType(existingType, type)) {
                    value = existing;
                    break;
                }
            }
        }
        if (value == null) {
            value = new TypeEvidence(specification);
            evidence.put(specification, value);
        }
        if (!value.anchorKeys.add(anchor.key())) return;
        value.score += weight;
        value.sources.add(source);
        value.anchors.add(anchor);
    }

    /** Typedef spelling is not a competing SSA type. Keep the first stable
     * nominal spelling, but merge evidence when the recursively unwrapped data
     * types are genuinely equivalent. Signed/unsigned and bool/byte primitives
     * remain distinct and therefore review-only. */
    private boolean equivalentLifetimeType(DataType left, DataType right) {
        if (left == null || right == null) return false;
        if (left.isEquivalent(right) || right.isEquivalent(left)) return true;
        DataType leftBase = untypedef(left), rightBase = untypedef(right);
        if (leftBase instanceof Pointer leftPointer &&
                rightBase instanceof Pointer rightPointer)
            return equivalentLifetimeType(leftPointer.getDataType(),
                rightPointer.getDataType());
        return leftBase != null && rightBase != null &&
            (leftBase.isEquivalent(rightBase) || rightBase.isEquivalent(leftBase));
    }

    private boolean equivalentLifetimeSpecifications(String left, String right) {
        if (left == null || right == null) return false;
        if (left.equals(right)) return true;
        DataType leftType = resolveTypeSpecification(left);
        DataType rightType = resolveTypeSpecification(right);
        return leftType != null && rightType != null &&
            equivalentLifetimeType(leftType, rightType);
    }

    private Evidence anchor(Object op, String kind, int operand,
            CallTarget target, String source) throws Exception {
        Object sequence = op.getClass().getMethod("getSeqnum").invoke(op);
        Address address = (Address)sequence.getClass()
            .getMethod("getTarget").invoke(sequence);
        int time = ((Number)sequence.getClass()
            .getMethod("getTime").invoke(sequence)).intValue();
        return new Evidence(addr(address), time, kind, operand,
            target == null ? "" : addr(target.direct.getEntryPoint()),
            target == null ? "" : addr(target.resolved.getEntryPoint()), source);
    }

    private CallTarget callTarget(Object op) throws Exception {
        int inputCount = ((Number)op.getClass()
            .getMethod("getNumInputs").invoke(op)).intValue();
        if (inputCount < 1) return null;
        Object destination = op.getClass().getMethod("getInput", int.class)
            .invoke(op, 0);
        Address address = callDestination(destination);
        if (address == null) return null;
        Function direct =
            currentProgram.getFunctionManager().getFunctionAt(address);
        if (direct == null) return null;
        Function resolved = resolveThunk(direct);
        return new CallTarget(direct, resolved == null ? direct : resolved);
    }

    private Function signatureFunctionForReturn(CallTarget target) {
        if (trustedReturn(target.direct) &&
                usableType(target.direct.getReturnType(),
                    target.direct.getReturnType().getLength()))
            return target.direct;
        return trustedReturn(target.resolved) ? target.resolved : null;
    }

    private SignatureParameters signatureParameters(CallTarget target,
            int argumentCount) {
        SignatureParameters direct =
            signatureParameters(target.direct, argumentCount);
        if (direct != null) return direct;
        return signatureParameters(target.resolved, argumentCount);
    }

    private SignatureParameters signatureParameters(Function function,
            int argumentCount) {
        if (function == null) return null;
        Parameter[] parameters = function.getParameters();
        if (parameters.length == argumentCount)
            return new SignatureParameters(function, parameters);
        return null;
    }

    private boolean sameLifetime(Object left, Object right) {
        if (left == null || right == null) return false;
        try {
            Object leftHigh =
                left.getClass().getMethod("getHigh").invoke(left);
            Object rightHigh =
                right.getClass().getMethod("getHigh").invoke(right);
            if (leftHigh == null || leftHigh != rightHigh) return false;
            int leftGroup = ((Number)left.getClass()
                .getMethod("getMergeGroup").invoke(left)).intValue();
            int rightGroup = ((Number)right.getClass()
                .getMethod("getMergeGroup").invoke(right)).intValue();
            return leftGroup == rightGroup;
        }
        catch (Exception ignored) {
            return left == right;
        }
    }

    private Address callDestination(Object destination) {
        if (destination == null) return null;
        try {
            Address address = (Address)destination.getClass()
                .getMethod("getAddress").invoke(destination);
            if (address != null && address.isMemoryAddress())
                return address;
            if ((boolean)destination.getClass()
                    .getMethod("isConstant").invoke(destination)) {
                long offset = ((Number)destination.getClass()
                    .getMethod("getOffset").invoke(destination)).longValue();
                return currentProgram.getAddressFactory()
                    .getDefaultAddressSpace().getAddress(offset);
            }
        }
        catch (Exception ignored) {
            return null;
        }
        return null;
    }

    private boolean trustedReturn(Function function) {
        return function != null &&
            (function.getSignatureSource() != SourceType.DEFAULT ||
             library(function));
    }

    private boolean trustedParameter(Function function, Parameter parameter) {
        if (parameter.getSource() != SourceType.DEFAULT) return true;
        if (parameter.isAutoParameter() && semanticPointer(parameter.getDataType()))
            return true;
        return library(function) && semanticType(parameter.getDataType());
    }

    private boolean usableType(DataType type, int size) {
        return type != null && type.getLength() == size && size > 0 &&
            semanticType(type);
    }

    private boolean semanticType(DataType type) {
        type = untypedef(type);
        if (type == null || type.getLength() <= 0 || Undefined.isUndefined(type) ||
                type.getPathName().equals("/void"))
            return false;
        if (type instanceof Pointer pointer) {
            DataType pointed = untypedef(pointer.getDataType());
            while (pointed instanceof Pointer nested)
                pointed = untypedef(nested.getDataType());
            return pointed != null && pointed.getLength() >= 0 &&
                !Undefined.isUndefined(pointed) &&
                !pointed.getPathName().equals("/void");
        }
        return true;
    }

    private boolean semanticPointer(DataType type) {
        return untypedef(type) instanceof Pointer && semanticType(type);
    }

    /**
     * Scalar p-code roles refine raw machine integers only. A pointer, enum, or
     * typedef can legally participate in the same INT_* operations, so using
     * those operations to replace an already nominal type loses information.
     */
    private boolean scalarRoleEligible(DataType type) {
        DataType base = untypedef(type);
        return base != null && !(type instanceof TypeDef) &&
            !(base instanceof Enum) && !(base instanceof Pointer) &&
            (Undefined.isUndefined(base) ||
                base instanceof AbstractIntegerDataType);
    }

    private boolean nominalType(DataType type) {
        if (type instanceof TypeDef || type instanceof Enum) return true;
        return semanticPointer(type);
    }

    /**
     * Revisit a scalar local created by this applier. A later exact nominal copy
     * (for example STMessage::id) must be able to restore an enum/typedef after
     * an earlier scalar-only pass split the lifetime.
     */
    private boolean scriptOwnedScalarLocal(Object highSymbol, DataType type) {
        if (!scalarRoleEligible(type)) return false;
        try {
            Symbol symbol = (Symbol)highSymbol.getClass()
                .getMethod("getSymbol").invoke(highSymbol);
            Object object = symbol == null ? null : symbol.getObject();
            return object instanceof Variable variable &&
                text(variable.getComment()).contains(APPLIER_MARKER);
        }
        catch (Exception ignored) {
            return false;
        }
    }

    /**
     * A one-lifetime HighSymbol is eligible only when its current type carries
     * no semantic information. In particular, do not reinterpret void * or an
     * already named integer merely because one consumer accepts something more
     * specific. Raw undefinedN and undefinedN * are safe targets for exact
     * typed call/copy evidence.
     */
    private boolean genericUnknown(DataType type) {
        type = untypedef(type);
        // An undefined-element array still carries a proven aggregate extent
        // and address identity.  A 4-byte use of one piece must not collapse
        // the complete stack object to the consumer's scalar type.
        if (type instanceof Array) return false;
        if (type == null || Undefined.isUndefined(type)) return true;
        if (!(type instanceof Pointer pointer)) return false;
        DataType pointed = untypedef(pointer.getDataType());
        if (pointed != null && pointed.getPathName().equals("/void")) return true;
        while (pointed instanceof Pointer nested)
            pointed = untypedef(nested.getDataType());
        return pointed == null || Undefined.isUndefined(pointed);
    }

    private boolean neutralVoidPointer(DataType type) {
        type = untypedef(type);
        if (!(type instanceof Pointer pointer)) return false;
        DataType pointed = untypedef(pointer.getDataType());
        return pointed != null && pointed.getPathName().equals("/void");
    }

    /**
     * A local void pointer is intentionally neutral until its complete SSA
     * lifetime says otherwise.  Two agreeing call arguments are sufficient
     * only when every descendant is either that exact typed call boundary or
     * a representation-neutral pointer operation.  Dereferences, arithmetic,
     * returns, stores, casts, and untyped calls remain review-only: one consumer
     * must never specialize a heterogeneous allocator/result lifetime.
     */
    private boolean completeNeutralPointerConsumerEvidence(List<Object> varnodes,
            TypeEvidence selected) {
        if (!selected.sources.equals(Set.of("call_argument")) ||
                selected.anchors.size() < 2) return false;
        try {
            for (Object varnode : varnodes) {
                @SuppressWarnings("unchecked")
                Iterator<Object> descendants = (Iterator<Object>)varnode.getClass()
                    .getMethod("getDescendants").invoke(varnode);
                while (descendants.hasNext()) {
                    Object op = descendants.next();
                    String operation = mnemonic(op);
                    if (operation.equals("CALL")) {
                        if (!neutralPointerCallAgrees(op, varnode,
                                selected.specification)) return false;
                        continue;
                    }
                    if (Set.of("COPY", "MULTIEQUAL", "INDIRECT", "CAST",
                            "INT_EQUAL", "INT_NOTEQUAL").contains(operation))
                        continue;
                    return false;
                }
            }
            return true;
        }
        catch (Exception ignored) {
            return false;
        }
    }

    private boolean neutralPointerCallAgrees(Object op, Object varnode,
            String specification) throws Exception {
        CallTarget target = callTarget(op);
        if (target == null) return false;
        int inputCount = ((Number)op.getClass()
            .getMethod("getNumInputs").invoke(op)).intValue();
        SignatureParameters signature = signatureParameters(target, inputCount - 1);
        if (signature == null) return false;
        boolean observed = false;
        for (int slot = 1; slot < inputCount; slot++) {
            Object input = op.getClass().getMethod("getInput", int.class)
                .invoke(op, slot);
            if (!sameLifetime(input, varnode)) continue;
            observed = true;
            Parameter parameter = signature.parameters[slot - 1];
            String required = typeSpecification(parameter.getDataType());
            if (!trustedParameter(signature.function, parameter) ||
                    !equivalentLifetimeSpecifications(required, specification))
                return false;
        }
        return observed;
    }

    private DataType untypedef(DataType type) {
        while (type instanceof TypeDef typedef) type = typedef.getBaseDataType();
        return type;
    }

    private String typeSpecification(DataType type) {
        if (type instanceof TypeDef) return type.getPathName();
        type = untypedef(type);
        if (type instanceof Pointer pointer)
            return "pointer:" + typeSpecification(pointer.getDataType());
        return type == null ? "" : type.getPathName();
    }

    private SourceType symbolSource(Object highSymbol) {
        try {
            Symbol symbol = (Symbol)highSymbol.getClass()
                .getMethod("getSymbol").invoke(highSymbol);
            return symbol == null ? SourceType.DEFAULT : symbol.getSource();
        }
        catch (Exception ignored) {
            return SourceType.DEFAULT;
        }
    }

    private String mnemonic(Object op) throws Exception {
        return (String)op.getClass().getMethod("getMnemonic").invoke(op);
    }

    private Function resolveThunk(Function function) {
        Set<Address> seen = new HashSet<>();
        while (function != null && function.isThunk() &&
                seen.add(function.getEntryPoint())) {
            Function next = function.getThunkedFunction(false);
            if (next == null || next.equals(function)) break;
            function = next;
        }
        return function;
    }

    private boolean library(Function function) {
        return function != null && function.getTags().stream()
            .anyMatch(tag -> tag.getName().equals("LIBRARY"));
    }

    private File outputDirectory() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException("Recovery output directory required");
        return askDirectory("Select recovery output directory", "Select");
    }

    private List<Address> selectedFunctions() {
        String[] args = getScriptArgs();
        if (args.length < 2) return List.of();
        Set<Address> selected = new java.util.TreeSet<>();
        for (int index = 1; index < args.length; index++) {
            for (String token : args[index].split("[,\\s]+")) {
                if (token.isBlank()) continue;
                Address address = currentProgram.getAddressFactory()
                    .getAddress(token);
                if (address == null)
                    throw new IllegalArgumentException(
                        "Invalid function address: " + token);
                selected.add(address);
            }
        }
        return List.copyOf(selected);
    }

    private Path programDirectory(File selected) {
        Path path = selected.toPath().toAbsolutePath().normalize();
        return path.getFileName() != null &&
            path.getFileName().toString().equals(currentProgram.getName()) ?
                path : path.resolve(currentProgram.getName());
    }

    private void writeProposals(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path,
                StandardCharsets.UTF_8)) {
            out.write("apply\tfunction_address\tfunction_name\toriginal_name\t" +
                "merge_group\tmerge_group_count\texpected_current_type\t" +
                "expected_symbol_source\tproposed_type\tanchor_kind\t" +
                "anchor_address\tanchor_time\tanchor_operand\t" +
                "direct_target_address\tresolved_target_address\t" +
                "anchor_source\tevidence_count\tconfidence\treason\n");
            for (Row row : rows) {
                Evidence anchor = row.anchor;
                out.write(bit(row.apply) + "\t" + row.functionAddress + "\t" +
                    tsv(row.functionName) + "\t" + tsv(row.originalName) + "\t" +
                    row.mergeGroup + "\t" + row.mergeGroupCount + "\t" +
                    row.expectedCurrentType + "\t" + row.expectedSymbolSource +
                    "\t" + row.proposedType + "\t" + anchor.kind + "\t" +
                    anchor.address + "\t" + anchor.time + "\t" +
                    anchor.operand + "\t" + anchor.directTarget + "\t" +
                    anchor.resolvedTarget + "\t" + anchor.source + "\t" +
                    row.evidenceCount + "\t" + row.confidence + "\t" +
                    tsv(row.reason) + "\n");
            }
        }
    }

    private void writeFailures(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path,
                StandardCharsets.UTF_8)) {
            out.write("function_address\tfunction_name\treason\n");
            for (Failure failure : failures)
                out.write(addr(failure.function.getEntryPoint()) + "\t" +
                    tsv(failure.function.getName(true)) + "\t" +
                    tsv(failure.reason) + "\n");
        }
    }

    private void writeSummary(Path path) throws Exception {
        Files.write(path, List.of(
            "program=" + currentProgram.getName(),
            "functions_seen=" + functionsSeen,
            "merged_locals=" + mergedLocals,
            "merge_groups=" + mergeGroups,
            "single_group_unknowns=" + singleGroupUnknowns,
            "single_group_proposals=" + singleGroupProposals,
            "groups_with_evidence=" + groupsWithEvidence,
            "proposals=" + rows.size(),
            "auto_apply=" + rows.stream().filter(row -> row.apply).count(),
            "review_or_existing=" + rows.stream().filter(row -> !row.apply).count(),
            "conflicts=" + conflicts,
            "decompile_failures=" + failures.size(),
            "policy=Distinct decompiler merge groups are split independently. A " +
                "single-group raw undefined local is also eligible, but only from " +
                "the same exact typed return/copy/recursive-field evidence or two agreeing typed " +
                "call arguments. A persistent pointer local may recover the exact " +
                "unadjusted __thiscall receiver type only when neutral SSA provenance " +
                "reaches auto this and a downstream named owner member proves that " +
                "the current shorter view is insufficient. Script-owned scalar splits are revisited so an " +
                "exact nominal copy can restore an enum, typedef, or pointer. " +
                "Competing exact types are review-only. Already-correct groups are " +
                "counted in the summary but omitted from the proposal/apply queue.",
            "manual_safety=USER_DEFINED and IMPORTED HighSymbols are never enabled."
        ), StandardCharsets.UTF_8);
    }

    private static String addr(Address address) {
        return address == null ? "" :
            address.toString().toUpperCase(Locale.ROOT);
    }
    private static String text(String value) {
        return value == null ? "" : value;
    }
    private static int bit(boolean value) { return value ? 1 : 0; }
    private static String tsv(String value) {
        if (value == null) return "";
        return value.replace("\\", "\\\\").replace("\t", "\\t")
            .replace("\r", "\\r").replace("\n", "\\n");
    }

    private static class TypeEvidence {
        final String specification;
        final List<Evidence> anchors = new ArrayList<>();
        final Set<String> anchorKeys = new HashSet<>();
        final Set<String> sources = new HashSet<>();
        int score;
        TypeEvidence(String specification) {
            this.specification = specification;
        }
    }
    private record Decision(TypeEvidence selected, boolean conflict,
        Map<String, TypeEvidence> evidence) {}
    private record CallTarget(Function direct, Function resolved) {}
    private record SignatureParameters(Function function,
        Parameter[] parameters) {}
    private record ScalarRole(String kind, int operand, int weight,
        String source) {}
    private record TypedField(DataType type, String identity) {}
    private record Evidence(String address, int time, String kind, int operand,
        String directTarget, String resolvedTarget, String source) {
        static final Comparator<Evidence> ORDER =
            Comparator.comparing(Evidence::address)
                .thenComparingInt(Evidence::time)
                .thenComparing(Evidence::kind)
                .thenComparingInt(Evidence::operand);
        String key() {
            return address + "|" + time + "|" + kind + "|" + operand + "|" +
                directTarget + "|" + resolvedTarget;
        }
    }
    private static class Row {
        final boolean apply;
        final String functionAddress, functionName, originalName,
            expectedCurrentType, expectedSymbolSource, proposedType,
            confidence, reason;
        final int mergeGroup, mergeGroupCount, evidenceCount;
        final Evidence anchor;
        Row(boolean apply, Function function, String originalName,
                int mergeGroup, int mergeGroupCount,
                String expectedCurrentType, String expectedSymbolSource,
                String proposedType, Evidence anchor, int evidenceCount,
                String confidence, String reason) {
            this.apply = apply;
            this.functionAddress = addr(function.getEntryPoint());
            this.functionName = function.getName(true);
            this.originalName = originalName;
            this.mergeGroup = mergeGroup;
            this.mergeGroupCount = mergeGroupCount;
            this.expectedCurrentType = expectedCurrentType;
            this.expectedSymbolSource = expectedSymbolSource;
            this.proposedType = proposedType;
            this.anchor = anchor;
            this.evidenceCount = evidenceCount;
            this.confidence = confidence;
            this.reason = reason;
        }
    }
    private record Failure(Function function, String reason) {}
}
