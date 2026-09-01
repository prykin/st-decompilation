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
import java.util.ArrayDeque;
import java.util.Comparator;
import java.util.Deque;
import java.util.HashSet;
import java.util.IdentityHashMap;
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
import ghidra.program.model.data.FunctionDefinition;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.PointerDataType;
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.TypeDef;
import ghidra.program.model.data.Undefined;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.CommentType;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.listing.Variable;
import ghidra.program.model.listing.VariableStorage;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.Symbol;
import ghidra.program.model.symbol.Namespace;
import ghidra.program.model.symbol.StackReference;
import ghidra.program.model.pcode.DataTypeSymbol;
import ghidra.program.model.pcode.HighFunction;
import ghidra.program.model.pcode.HighFunctionDBUtil;
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
        collectPersistentCallResultViewRepairs(candidates);
        collectPersistentReceiverCallReturnRepairs(candidates);

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
        Map<Object, String> namedLocalHighs = new IdentityHashMap<>();
        Set<Object> seenHighVariables =
            java.util.Collections.newSetFromMap(new java.util.IdentityHashMap<>());
        while (symbols.hasNext()) {
            monitor.checkCancelled();
            Object symbol = symbols.next();
            boolean parameter = (boolean)symbol.getClass()
                .getMethod("isParameter").invoke(symbol);
            boolean global = (boolean)symbol.getClass()
                .getMethod("isGlobal").invoke(symbol);
            Object high = symbol.getClass()
                .getMethod("getHighVariable").invoke(symbol);
            if (high != null && !global)
                namedLocalHighs.put(high, text((String)symbol.getClass()
                    .getMethod("getName").invoke(symbol)));
            if (parameter || global) continue;
            if (high == null || !seenHighVariables.add(high)) continue;
            analyzeHighVariable(function, symbol, high);
        }
        collectUnrepresentedCallDomainBoundaries(function, highFunction,
            namedLocalHighs);
    }

    /**
     * Inventory exact CALL operands whose machine value domain disagrees with
     * a trusted callee parameter even when the owning HighVariable was not an
     * ordinary split candidate.  This is audit/source-view evidence only: a
     * mixed or nominal whole local is never retyped from one consumer.
     */
    private void collectUnrepresentedCallDomainBoundaries(Function function,
            Object highFunction, Map<Object, String> namedLocalHighs) {
        try {
            @SuppressWarnings("unchecked")
            Iterator<Object> operations = (Iterator<Object>)highFunction.getClass()
                .getMethod("getPcodeOps").invoke(highFunction);
            while (operations.hasNext()) {
                Object op = operations.next();
                if (!mnemonic(op).equals("CALL")) continue;
                CallTarget target = callTarget(op);
                if (target == null) continue;
                int inputs = ((Number)op.getClass()
                    .getMethod("getNumInputs").invoke(op)).intValue();
                SignatureParameters signature = signatureParameters(
                    target, inputs - 1);
                if (signature == null) continue;
                for (int slot = 1; slot < inputs; slot++) {
                    Parameter parameter = signature.parameters[slot - 1];
                    if (!trustedParameter(signature.function, parameter)) continue;
                    Object input = op.getClass().getMethod("getInput", int.class)
                        .invoke(op, slot);
                    BoundaryOrigin origin = contradictoryBoundaryOrigin(input,
                        parameter.getDataType(),
                        java.util.Collections.newSetFromMap(
                            new IdentityHashMap<>()), namedLocalHighs, 0);
                    if (origin == null) continue;
                    Evidence anchor = anchor(op, "call_argument", slot - 1,
                        target, parameter.getSource().toString());
                    String proposed = typeSpecification(parameter.getDataType());
                    boolean duplicate = rows.stream().anyMatch(row ->
                        row.functionAddress.equals(addr(function.getEntryPoint())) &&
                        row.proposedType.equals(proposed) &&
                        row.anchors.stream().anyMatch(existing ->
                            existing.key().equals(anchor.key())));
                    if (duplicate) continue;
                    rows.add(new Row(false, function, origin.name, 0, 1,
                        typeSpecification(origin.type), origin.source,
                        proposed, anchor, List.of(anchor), 1, "review",
                        "exact call-boundary type is proven, but no same-width " +
                        "transparent p-code path reattaches that argument to one " +
                        "persistent HighSymbol; complete CALL-operand scan records " +
                        "an address-local source view only"));
                }
            }
        }
        catch (Exception exception) {
            failures.add(new Failure(function,
                "call-domain inventory failed: " + text(exception.getMessage())));
        }
    }

    private BoundaryOrigin contradictoryBoundaryOrigin(Object varnode,
            DataType required, Set<Object> seen,
            Map<Object, String> namedLocalHighs, int depth) throws Exception {
        if (varnode == null || depth > 8 || !seen.add(varnode)) return null;
        int size = ((Number)varnode.getClass().getMethod("getSize")
            .invoke(varnode)).intValue();
        if (!usableType(required, size)) return null;
        Object high = varnode.getClass().getMethod("getHigh").invoke(varnode);
        DataType current = high == null ? null : (DataType)high.getClass()
            .getMethod("getDataType").invoke(high);
        if (current != null && current.getLength() == size &&
                contradictoryDomains(current, required) &&
                namedLocalHighs.containsKey(high)) {
            Object symbol = high.getClass().getMethod("getSymbol").invoke(high);
            String name = namedLocalHighs.get(high);
            SourceType source = symbol instanceof Symbol value ?
                value.getSource() : SourceType.DEFAULT;
            return new BoundaryOrigin(name,
                current, source.toString());
        }
        Object definition = varnode.getClass().getMethod("getDef").invoke(varnode);
        if (definition == null || !Set.of("COPY", "CAST", "INDIRECT")
                .contains(mnemonic(definition))) return null;
        int count = ((Number)definition.getClass().getMethod("getNumInputs")
            .invoke(definition)).intValue();
        BoundaryOrigin result = null;
        for (int index = 0; index < count; index++) {
            Object input = definition.getClass().getMethod("getInput", int.class)
                .invoke(definition, index);
            if (input == null || (boolean)input.getClass()
                    .getMethod("isConstant").invoke(input)) continue;
            int inputSize = ((Number)input.getClass().getMethod("getSize")
                .invoke(input)).intValue();
            if (inputSize != size) continue;
            BoundaryOrigin candidate = contradictoryBoundaryOrigin(input,
                required, seen, namedLocalHighs, depth + 1);
            if (candidate == null) continue;
            if (result != null && (!result.name.equals(candidate.name) ||
                    !equivalentLifetimeType(result.type, candidate.type)))
                return null;
            result = candidate;
        }
        return result;
    }

    private boolean contradictoryDomains(DataType current, DataType required) {
        if (equivalentLifetimeType(current, required)) return false;
        String left = valueDomain(current), right = valueDomain(required);
        if (left.equals(right) || left.equals("neutral") || right.equals("neutral"))
            return false;
        return Set.of(left, right).stream().anyMatch(value ->
            Set.of("pointer", "floating", "void").contains(value));
    }

    private String valueDomain(DataType type) {
        DataType base = untypedef(type);
        if (base == null || Undefined.isUndefined(base)) return "neutral";
        if (base instanceof Pointer) return "pointer";
        String path = base.getPathName();
        if (Set.of("/float", "/double", "/float10").contains(path))
            return "floating";
        if (path.equals("/void")) return "void";
        return "scalar";
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
        DataType databaseType = persistentDatabaseType(highSymbol);
        boolean databaseTypeMismatch = databaseType != null &&
            !equivalentLifetimeType(databaseType, currentType) &&
            scriptOwnedPersistentLocal(highSymbol);
        SourceType symbolSource = symbolSource(highSymbol);
        boolean merged = groups.size() > 1;
        boolean receiverAliasCandidate =
            receiverAliasCandidate(function, highSymbol, currentType);
        boolean receiverHistoryCandidate =
            receiverHistoryCandidate(function, highSymbol, currentType);
        boolean priorScriptRepairCandidate =
            priorScriptRepairCandidate(highSymbol, currentType);
        boolean misattachedReceiverHistoryCandidate =
            misattachedReceiverHistoryCandidate(function, highSymbol,
                currentType);
        boolean exactCallViewCandidate =
            scriptOwnedGenericStoragePointer(highSymbol, currentType);
        boolean generatedReceiverCallViewCandidate =
            scriptOwnedGeneratedReceiverPointer(highSymbol, currentType);
        boolean scalarTransportPointerCandidate =
            groups.size() == 1 && scalarTransportPointerCandidate(
                function, groups.values().iterator().next(), currentType);
        if (!merged && !genericUnknown(currentType) &&
                !scriptOwnedScalarLocal(highSymbol, currentType) &&
                !receiverAliasCandidate && !receiverHistoryCandidate &&
                !priorScriptRepairCandidate &&
                !misattachedReceiverHistoryCandidate &&
                !exactCallViewCandidate && !generatedReceiverCallViewCandidate &&
                !databaseTypeMismatch &&
                !scalarTransportPointerCandidate)
            return;
        if (merged) {
            mergedLocals++;
            mergeGroups += groups.size();
        }
        else singleGroupUnknowns++;

        Map<Short, Decision> decisions = new TreeMap<>();
        Set<Short> scalarTransportGroups = new HashSet<>();
        for (Map.Entry<Short, List<Object>> entry : groups.entrySet()) {
            Map<String, TypeEvidence> evidence = new TreeMap<>();
            boolean groupScalarTransport = scalarTransportPointerCandidate(
                function, entry.getValue(), currentType);
            if (groupScalarTransport)
                scalarTransportGroups.add(entry.getKey());
            boolean mixedDomainEligible = merged || genericUnknown(currentType) ||
                groupScalarTransport;
            for (Object varnode : entry.getValue())
                collectEvidence(varnode, evidence,
                    scalarRoleEligible(currentType) ||
                        groupScalarTransport ||
                        mixedDomainEligible && !semanticPointer(currentType),
                    mixedDomainEligible);
            if (!merged && genericUnknown(currentType))
                reinforceMachineControlIndex(function, highSymbol, evidence);
            if (receiverAliasCandidate)
                collectReceiverAliasEvidence(function, entry.getValue(),
                    currentType, evidence);
            if (receiverHistoryCandidate)
                collectReceiverHistoryEvidence(function, highSymbol,
                    entry.getValue(), currentType, evidence);
            if (priorScriptRepairCandidate)
                collectPriorScriptRepairEvidence(highSymbol,
                    entry.getValue(), evidence);
            preferPriorReceiverView(currentType, evidence);
            preferTrustedCurrentCallView(currentType, evidence);
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
                    "", anchor, List.of(anchor), decision.evidence.size(), "conflict",
                    "incompatible exact lifetime types=" +
                        decision.evidence.keySet()));
                continue;
            }
            TypeEvidence selected = decision.selected;
            boolean callArgumentOnly = selected.sources.size() == 1 &&
                selected.sources.contains("call_argument");
            boolean stableCallArgumentAnchor = !callArgumentOnly ||
                selected.anchors.stream().anyMatch(Evidence::persistent);
            Evidence anchor = selected.anchors.stream()
                .sorted(Comparator.comparing((Evidence value) ->
                        stableCallArgumentAnchor && value.persistent ? 0 : 1)
                    .thenComparing(Evidence.ORDER))
                .findFirst().orElse(null);
            if (anchor == null) continue;
            boolean different = !equivalentLifetimeSpecifications(
                selected.specification, currentSpecification);
            boolean sameType = equivalentLifetimeSpecifications(
                selected.specification, currentSpecification);
            boolean isolate = merged && isolationEligible(selected) &&
                requiresIsolation(entry.getKey(), selected.specification,
                    decisions) &&
                // Retyping a split to the type already carried by the parent
                // HighVariable gives Ghidra no durable distinction to retain.
                // It is useful only for the special recursive-node case, where
                // the generated self-link identity is itself the persistent
                // boundary.  Ordinary same-type splits otherwise remerge on
                // the next decompile and used to recur forever as conflicts.
                (!sameType || recursivePointerIdentity(
                    resolveTypeSpecification(selected.specification)) != null);
            boolean persistenceRepair = databaseTypeMismatch && sameType;
            // Proposal TSVs are an apply/review queue, not an inventory of every
            // already-correct HighVariable. A same-typed group is retained only when
            // heterogeneous sibling lifetimes make isolation itself meaningful.
            if (!different && !isolate && !persistenceRepair) continue;
            boolean manual = symbolSource == SourceType.USER_DEFINED ||
                symbolSource == SourceType.IMPORTED;
            boolean neutralPointerRefinement = neutralVoidPointer(currentType);
            boolean closedNeutralPointerUse = !neutralPointerRefinement ||
                completeNeutralPointerConsumerEvidence(
                    groups.get(entry.getKey()), selected);
            boolean representableIsolation = !isolate ||
                persistentSplitRepresentable(function, highSymbol, groups,
                    entry.getKey());
            boolean semanticDowngrade = weakerThanCurrentType(currentType,
                selected.specification) &&
                !selected.sources.contains("prior_script_provenance");
            boolean downstreamPointeeGuess =
                downstreamOnlyIntegerPointeeRefinement(currentType, selected);
            boolean apply = (different || isolate || persistenceRepair) && !manual &&
                selected.score >= automaticThreshold(selected) &&
                closedNeutralPointerUse && representableIsolation &&
                !semanticDowngrade && !downstreamPointeeGuess &&
                stableCallArgumentAnchor;
            if (!merged) singleGroupProposals++;
            String confidence = apply ? "high" :
                manual ? "manual" : different ? "review" : "existing";
            String reason = (merged ? "separate decompiler merge group" :
                receiverAliasCandidate ? "single receiver-alias lifetime" :
                receiverHistoryCandidate ?
                    "automation-owned receiver history revalidated" :
                misattachedReceiverHistoryCandidate ?
                    "misattached receiver history revalidated from exact current lifetime" :
                scalarTransportGroups.contains(entry.getKey()) ?
                    "pointer-shaped local has only scalar consumers" :
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
                    "; complete neutral-pointer consumer set agrees" : "") +
                (!representableIsolation ?
                    "; Listing stack lifetime has nonzero first-use and cannot be split persistently" :
                    "") +
                (semanticDowngrade ?
                    "; weaker generic evidence cannot replace the current nominal type" : "") +
                (downstreamPointeeGuess ?
                    "; downstream call consumers do not prove signedness or semantics of an already width-known pointee" :
                    "") +
                (!stableCallArgumentAnchor ?
                    "; exact call-boundary type is proven, but no same-width transparent p-code path reattaches that argument to one persistent HighSymbol" :
                    "") +
                (persistenceRepair ?
                    "; database local type differs from the exact current High lifetime" :
                    "");
            rows.add(new Row(apply, function, originalName, entry.getKey(),
                groups.size(), currentSpecification, symbolSource.toString(),
                selected.specification, anchor, selected.anchors,
                selected.anchors.size(),
                confidence, reason));
        }
    }

    /**
     * Passing an existing undefinedN pointer to char/int APIs proves a compatible
     * machine-width view, not the stored pointee's signedness or source-level
     * semantic type.  Require producer-side evidence before changing that
     * width-known pointer.  This is intentionally evidence classification, not
     * a function/address exclusion.
     */
    private boolean downstreamOnlyIntegerPointeeRefinement(DataType current,
            TypeEvidence selected) {
        DataType base = untypedef(current);
        if (!(base instanceof Pointer currentPointer)) return false;
        DataType currentPointed = untypedef(currentPointer.getDataType());
        if (currentPointed == null || !Undefined.isUndefined(currentPointed))
            return false;
        DataType proposed = resolveTypeSpecification(selected.specification);
        DataType proposedBase = untypedef(proposed);
        if (!(proposedBase instanceof Pointer proposedPointer)) return false;
        DataType proposedPointed = untypedef(proposedPointer.getDataType());
        if (!(proposedPointed instanceof AbstractIntegerDataType) ||
                proposedPointed.getLength() != currentPointed.getLength())
            return false;
        return selected.sources.stream().allMatch(source ->
            source.equals("call_argument") ||
            source.equals("peer_pointer_comparison"));
    }

    private boolean persistentSplitRepresentable(Function function, Object highSymbol,
            Map<Short, List<Object>> groups, short targetGroup) {
        try {
            Symbol symbol = (Symbol)highSymbol.getClass()
                .getMethod("getSymbol").invoke(highSymbol);
            Object object = symbol == null ? null : symbol.getObject();
            if (object instanceof Variable variable && variable.isStackVariable() &&
                    variable.getFirstUseOffset() != 0) return false;
            Set<String> target = persistentDynamicIdentities(function,
                groups.getOrDefault(targetGroup, List.of()));
            if (target.isEmpty()) return false;
            Set<String> siblings = new HashSet<>();
            for (Map.Entry<Short, List<Object>> entry : groups.entrySet())
                if (entry.getKey() != targetGroup)
                    siblings.addAll(persistentDynamicIdentities(function,
                        entry.getValue()));
            return target.stream().anyMatch(identity -> !siblings.contains(identity));
        }
        catch (Exception ignored) {
            return false;
        }
    }

    private Set<String> persistentDynamicIdentities(Function function,
            List<Object> varnodes) throws Exception {
        Set<String> result = new HashSet<>();
        for (Object varnode : varnodes) {
            Object entry = buildDynamicEntry(varnode);
            VariableStorage storage = (VariableStorage)entry.getClass()
                .getMethod("getStorage").invoke(entry);
            Address pc = (Address)entry.getClass().getMethod("getPCAdress").invoke(entry);
            if (storage == null || storage.isBadStorage() || storage.isUnassignedStorage() ||
                    storage.isStackStorage()) continue;
            int firstUse = 0;
            if (pc != null) {
                try { firstUse = (int)pc.subtract(function.getEntryPoint()); }
                catch (Exception ignored) { continue; }
            }
            result.add(storage + "@" + firstUse);
        }
        return result;
    }

    private Object buildDynamicEntry(Object varnode) throws Exception {
        ClassLoader loader = varnode.getClass().getClassLoader();
        Class<?> entryClass = Class.forName(
            "ghidra.program.model.pcode.DynamicEntry", true, loader);
        for (java.lang.reflect.Method method : entryClass.getMethods())
            if (method.getName().equals("build") && method.getParameterCount() == 1)
                return method.invoke(null, varnode);
        throw new IllegalStateException("DynamicEntry.build API is unavailable");
    }

    private boolean weakerThanCurrentType(DataType current, String selectedSpecification) {
        if (typeSpecification(current).equals(selectedSpecification)) return false;
        DataType selected = resolveType(selectedSpecification);
        DataType currentBase = untypedef(current);
        DataType selectedBase = untypedef(selected);
        if ((current instanceof TypeDef || currentBase instanceof Enum) &&
                selectedBase instanceof AbstractIntegerDataType) return true;
        if (!(currentBase instanceof Pointer currentPointer) ||
                !(selectedBase instanceof Pointer selectedPointer)) return false;
        DataType currentPointee = untypedef(currentPointer.getDataType());
        DataType selectedPointee = untypedef(selectedPointer.getDataType());
        return currentPointee instanceof Structure && genericStoragePointee(selectedPointee);
    }

    private boolean genericStoragePointee(DataType type) {
        if (type == null || Undefined.isUndefined(type) ||
                type.getPathName().equals("/void")) return true;
        return Set.of("/byte", "/char", "/uchar", "/short", "/ushort",
            "/int", "/uint").contains(type.getPathName());
    }

    /**
     * Revisit an automation-owned local which a previous receiver-alias pass
     * changed from a concrete caller view to a generated HiddenThis receiver.
     * A HiddenThis identity describes the callee's structural ECX domain; it is
     * not automatically the best persistent type for a caller-local alias.  The
     * ordinary exact call-argument solver below must still find one unanimous
     * stronger semantic pointer before any repair can be applied.
     */
    private boolean scriptOwnedGeneratedReceiverPointer(Object highSymbol,
            DataType currentType) {
        // The datatype itself is automation-owned: these receiver structures
        // exist only under our deterministic HiddenThis category.  Older
        // applier revisions did not consistently leave a variable comment, so
        // requiring a marker here strands exactly the stale locals this audit
        // is meant to repair.  A persistent Listing local is still required;
        // synthetic High variables remain out of scope.
        try {
            return persistentVariable(highSymbol) != null &&
                generatedHiddenReceiverPointer(currentType);
        }
        catch (Exception ignored) { return false; }
    }

    private boolean automationOwnedPersistentLocal(Object highSymbol) {
        try {
            Variable variable = persistentVariable(highSymbol);
            String comment = variable == null ? "" : text(variable.getComment());
            return comment.contains(APPLIER_MARKER) ||
                comment.contains("[STPointerShapeApplier]");
        }
        catch (Exception ignored) { return false; }
    }

    private boolean generatedHiddenReceiverPointer(DataType type) {
        DataType base = untypedef(type);
        if (!(base instanceof Pointer pointer)) return false;
        DataType pointed = untypedef(pointer.getDataType());
        if (!(pointed instanceof Structure)) return false;
        String path = pointed.getPathName();
        return path.startsWith("/SubmarineTitans/Recovered/HiddenThis/" +
            "RecoveredReceiver_") ||
            path.startsWith("/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_");
    }

    private boolean concreteSemanticPointer(DataType type) {
        DataType base = untypedef(type);
        if (!(base instanceof Pointer pointer)) return false;
        DataType pointed = untypedef(pointer.getDataType());
        return pointed instanceof Structure && !generatedHiddenReceiverPointer(type) &&
            !pointed.getPathName().startsWith("/SubmarineTitans/Recovered/");
    }

    private DataType resolveType(String specification) {
        if (specification == null || specification.isBlank()) return null;
        if (specification.startsWith("pointer:")) {
            DataType pointed = resolveType(specification.substring("pointer:".length()));
            return pointed == null ? null : new PointerDataType(pointed,
                currentProgram.getDefaultPointerSize(),
                currentProgram.getDataTypeManager());
        }
        return currentProgram.getDataTypeManager().getDataType(specification);
    }

    /**
     * Ghidra can type a complete four-byte local as T* after one load from a
     * pointer-typed field even when every subsequent machine boundary treats
     * that word as an integer handle/result.  Revisit that local only when its
     * complete SSA lifetime has no pointer consumer.  The ordinary evidence
     * scorer must still find independent exact scalar call/operation anchors;
     * this predicate merely makes the otherwise nominal local eligible.
     */
    private boolean scalarTransportPointerCandidate(Function function,
            List<Object> group, DataType currentType) {
        DataType base = untypedef(currentType);
        if (!(base instanceof Pointer) || currentType.getLength() !=
                currentProgram.getDefaultPointerSize()) return false;
        try {
            for (Object varnode : group)
                if (hasIndependentPointerConsumer(function, varnode)) return false;
            return true;
        }
        catch (Exception ignored) {
            return false;
        }
    }

    private boolean hasIndependentPointerConsumer(Function function,
            Object varnode) throws Exception {
        Object definition = varnode.getClass().getMethod("getDef").invoke(varnode);
        if (definition != null && Set.of("PTRADD", "PTRSUB")
                .contains(mnemonic(definition))) return true;
        @SuppressWarnings("unchecked")
        Iterator<Object> descendants = (Iterator<Object>)varnode.getClass()
            .getMethod("getDescendants").invoke(varnode);
        while (descendants.hasNext()) {
            Object op = descendants.next();
            String operation = mnemonic(op);
            int operand = operandOf(op, varnode);
            if (operand < 0) continue;
            if ((operation.equals("LOAD") || operation.equals("STORE")) &&
                    operand == 1) return true;
            if (operation.equals("PTRADD") || operation.equals("PTRSUB")) return true;
            if (operation.equals("RETURN") && semanticPointer(function.getReturnType()))
                return true;
            if (!operation.equals("CALL") && !operation.equals("CALLIND")) continue;
            CallTarget target = callTarget(op);
            if (target == null) return true;
            int inputs = ((Number)op.getClass().getMethod("getNumInputs")
                .invoke(op)).intValue();
            SignatureParameters signature = signatureParameters(target, inputs - 1);
            int argument = operand - 1;
            if (argument < 0 || signature == null ||
                    argument >= signature.parameters.length) return true;
            if (semanticPointer(signature.parameters[argument].getDataType())) return true;
        }
        return false;
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
            evidence.sources.contains("indirect_receiver") ||
            evidence.sources.contains("typed_copy") ||
            evidence.sources.contains("typed_cast") ||
            evidence.sources.contains("floating_role") ||
            evidence.sources.contains("control_index") ||
            evidence.sources.contains("byte_pointer_result") ||
            evidence.sources.contains("byte_pointer_index") ||
            evidence.sources.contains("peer_pointer_comparison") ||
            evidence.sources.contains("receiver_alias") ||
            evidence.sources.contains("receiver_history") ||
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
        if (evidence.sources.contains("receiver_alias") ||
                evidence.sources.contains("receiver_history"))
            return TYPED_FIELD_WEIGHT;
        if (evidence.sources.contains("call_return")) return RETURN_WEIGHT;
        if (evidence.sources.contains("indirect_receiver"))
            return TYPED_FIELD_WEIGHT;
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
                .filter(value -> value.sources.contains("receiver_alias") ||
                    value.sources.contains("receiver_history"))
                .toList();
            if (receiverAliases.size() == 1 &&
                    generatedHiddenReceiverPointer(resolveTypeSpecification(
                        receiverAliases.get(0).specification))) {
                List<TypeEvidence> semanticCallViews = evidence.values().stream()
                    .filter(value -> value.sources.contains("call_argument") &&
                        concreteSemanticPointer(resolveTypeSpecification(
                            value.specification)) &&
                        value.anchors.stream().filter(anchor ->
                            anchor.kind.equals("call_argument")).count() >= 2)
                    .toList();
                if (semanticCallViews.size() == 1)
                    return new Decision(semanticCallViews.get(0), false, evidence);
            }
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
        // A generated structural receiver does not outrank a concrete semantic
        // caller-local view.  The structural type remains correct for auto-this,
        // while exact typed call boundaries may legitimately require the concrete
        // base object in the spill/reload lifetime.
        if (generatedHiddenReceiverPointer(receiverType) &&
                concreteSemanticPointer(currentType)) return;
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

    /**
     * Revalidate an earlier automation-owned receiver view after a later pass
     * shortened the same persistent local to a base structure.  The comment is
     * not evidence by itself: the live High value must still originate at the
     * exact unadjusted auto-this parameter.  The receiver identity itself is
     * stronger than relative layout density: generated whole-object views for
     * derived classes can legitimately contain fewer named components than a
     * broadly observed base view.  This is address/name independent and cannot
     * resurrect a foreign or adjusted view.
     */
    private boolean receiverHistoryCandidate(Function function, Object highSymbol,
            DataType currentType) {
        DataType receiverType = receiverType(function);
        Structure receiver = pointedStructure(receiverType);
        Structure current = pointedStructure(currentType);
        String specification = receiverType == null ? "" :
            typeSpecification(receiverType);
        return receiver != null && current != null &&
            !equivalentLifetimeType(receiverType, currentType) &&
            priorLocalLifetimeSpecifications(highSymbol).contains(specification) &&
            exactEntryReceiverStackSpill(function, highSymbol) != null;
    }

    private void collectReceiverHistoryEvidence(Function function,
            Object highSymbol, List<Object> varnodes, DataType currentType,
            Map<String, TypeEvidence> evidence) {
        DataType receiverType = receiverType(function);
        if (receiverType == null || !priorLocalLifetimeSpecifications(highSymbol)
                .contains(typeSpecification(receiverType))) return;
        Instruction spill = exactEntryReceiverStackSpill(function, highSymbol);
        if (spill == null) return;
        try {
            for (Object varnode : varnodes) {
                Object definition = varnode.getClass().getMethod("getDef")
                    .invoke(varnode);
                if (definition == null || !receiverAliasOrigin(varnode,
                        receiverType, java.util.Collections.newSetFromMap(
                            new java.util.IdentityHashMap<>()), 0)) continue;
                Evidence anchor = new Evidence(addr(spill.getAddress()), 0,
                    "receiver_history_stack_spill", -1, "", "",
                    typeSpecification(receiverType));
                addEvidence(evidence, receiverType, TYPED_FIELD_WEIGHT,
                    "receiver_history", anchor);
                return;
            }
        }
        catch (Exception ignored) {
            // History is admitted only when the current SSA origin is complete.
        }
    }

    private Set<String> priorLocalLifetimeSpecifications(Object highSymbol) {
        Set<String> result = new HashSet<>();
        try {
            Variable variable = persistentVariable(highSymbol);
            if (variable == null) return result;
            java.util.regex.Matcher matcher = Pattern.compile(
                "\\[STLocalLifetimeApplier\\][^\\r\\n;]*;\\s*type=([^;\\s]+)")
                .matcher(text(variable.getComment()));
            while (matcher.find()) result.add(matcher.group(1));
        }
        catch (Exception ignored) {
            // No persistent automation history means no repair candidate.
        }
        return result;
    }

    /** Exact entry-block storage proof for an unadjusted x86 this receiver. */
    private Instruction exactEntryReceiverStackSpill(Function function,
            Object highSymbol) {
        try {
            Variable variable = persistentVariable(highSymbol);
            if (function == null || variable == null ||
                    !variable.isStackVariable() || variable.getLength() != 4)
                return null;
            int stackOffset = variable.getStackOffset();
            InstructionIterator iterator = currentProgram.getListing()
                .getInstructions(function.getBody(), true);
            while (iterator.hasNext()) {
                Instruction instruction = iterator.next();
                String mnemonic = instruction.getMnemonicString()
                    .toUpperCase(Locale.ROOT);
                if (mnemonic.equals("CALL") ||
                        instruction.getFlowType().isJump() ||
                        instruction.getFlowType().isTerminal()) return null;
                String destination = instruction.getNumOperands() > 0 ?
                    instruction.getDefaultOperandRepresentation(0) : "";
                String source = instruction.getNumOperands() > 1 ?
                    instruction.getDefaultOperandRepresentation(1) : "";
                if (mnemonic.equals("MOV") &&
                        stackOperand(instruction, 0, stackOffset) &&
                        "ECX".equals(fullRegister(source))) return instruction;
                if ("ECX".equals(fullRegister(destination)) &&
                        writesFirstOperand(mnemonic)) return null;
            }
        }
        catch (Exception ignored) {
            // Machine proof is optional; an incomplete mapping is no proof.
        }
        return null;
    }

    /**
     * Reconsider an automation-owned local when an older exact pointer-shape
     * provenance was overwritten by this applier.  This is a migration path,
     * not a preference for old output: the older type is reinforced only when
     * the current decompile independently passes that same exact type to a
     * trusted call boundary.  It repairs bad receiver promotions without an
     * address, class, or method allow-list.
     */
    private boolean priorScriptRepairCandidate(Object highSymbol,
            DataType currentType) {
        String prior = priorPointerShapeSpecification(highSymbol);
        DataType priorType = prior == null ? null :
            resolveTypeSpecification(prior);
        Function function = functionOf(highSymbol);
        DataType receiver = receiverType(function);
        // One physical Listing stack local cannot persist two overlapping
        // source lifetimes.  When the slot is the exact entry-block ECX spill,
        // its durable identity is the unadjusted method receiver.  A later call
        // accepting a base/peer pointer is a use-site view and must not revive
        // an older pointer-shape marker on the whole slot.  Otherwise the two
        // individually valid recovery rules alternate forever:
        //
        //   receiver spill -> old call-boundary view -> receiver spill -> ...
        //
        // This is storage/provenance based, not tied to an address, class, or
        // local name.  A genuinely separable High merge group is still handled
        // by the ordinary lifetime analysis before this migration path.
        if (receiver != null &&
                priorLocalLifetimeSpecifications(highSymbol).contains(
                    typeSpecification(receiver)) &&
                exactEntryReceiverStackSpill(function, highSymbol) != null)
            return false;
        return priorType != null && receiver != null &&
            equivalentLifetimeType(currentType, receiver) &&
            !equivalentLifetimeType(priorType, currentType);
    }

    /**
     * Migrate output from the old symbol-less receiver COPY anchor.  It could
     * stamp the method receiver type onto a transient register lifetime (most
     * often a call return) while the intended stack spill remained unchanged.
     * Reconsider only an automation-owned non-stack local which currently has
     * the exact receiver type and also retains an earlier, different local-
     * lifetime marker.  The marker merely admits re-analysis; an independently
     * typed current call/copy boundary must still win the normal evidence vote.
     */
    private boolean misattachedReceiverHistoryCandidate(Function function,
            Object highSymbol, DataType currentType) {
        DataType receiver = receiverType(function);
        if (receiver == null ||
                !equivalentLifetimeType(receiver, currentType)) return false;
        try {
            Variable variable = persistentVariable(highSymbol);
            if (variable == null || variable.isStackVariable() ||
                    !text(variable.getComment()).contains(APPLIER_MARKER))
                return false;
            String current = typeSpecification(currentType);
            return priorLocalLifetimeSpecifications(highSymbol).stream()
                .anyMatch(specification ->
                    !equivalentLifetimeSpecifications(specification, current));
        }
        catch (Exception ignored) {
            return false;
        }
    }

    /**
     * Migrate database output produced by the retired symbol-less receiver
     * anchor.  That implementation could attach a receiver type to the EAX
     * lifetime of the call at the same address.  This scan deliberately uses
     * durable Listing locals rather than another decompiler symbol mapping:
     * the bad mapping is exactly what is under review.
     *
     * The old marker is only admission evidence.  Automatic repair still
     * requires a full EAX local, an exact direct CALL at the recorded address,
     * and a trusted callee/thunk return ABI which agrees with an older
     * same-address local-lifetime marker.  No function, class, local name, or
     * address is special-cased.
     */
    private void collectPersistentReceiverCallReturnRepairs(
            List<Function> functions) {
        Pattern marker = Pattern.compile(
            "\\[STLocalLifetimeApplier\\][^\\r\\n;]*?\\bat\\s+" +
            "([0-9A-Fa-f]{8});\\s*type=([^;\\s]+)");
        for (Function function : functions) {
            DataType receiver = receiverType(function);
            if (receiver == null) continue;
            String receiverSpecification = typeSpecification(receiver);
            for (Variable variable : function.getLocalVariables()) {
                if (!variable.isRegisterVariable() ||
                        variable.getRegister() == null ||
                        !"EAX".equals(fullRegister(
                            variable.getRegister().getName())) ||
                        variable.getLength() != 4 ||
                        variable.getSource() == SourceType.USER_DEFINED ||
                        variable.getSource() == SourceType.IMPORTED ||
                        !equivalentLifetimeType(variable.getDataType(), receiver))
                    continue;
                String comment = text(variable.getComment());
                if (!comment.contains(APPLIER_MARKER)) continue;
                Map<String, Set<String>> specificationsByAddress =
                    new TreeMap<>();
                java.util.regex.Matcher markers = marker.matcher(comment);
                while (markers.find())
                    specificationsByAddress.computeIfAbsent(
                        markers.group(1).toUpperCase(Locale.ROOT),
                        ignored -> new HashSet<>()).add(markers.group(2));
                for (Map.Entry<String, Set<String>> entry :
                        specificationsByAddress.entrySet()) {
                    if (!entry.getValue().contains(receiverSpecification))
                        continue;
                    Address address = currentProgram.getAddressFactory()
                        .getAddress(entry.getKey());
                    Instruction call = address == null ? null :
                        currentProgram.getListing().getInstructionAt(address);
                    if (call == null || !"CALL".equalsIgnoreCase(
                            call.getMnemonicString())) continue;
                    Function direct = directCalledFunction(call);
                    Function resolved = resolveThunk(direct);
                    if (resolved == null) resolved = direct;
                    Function signature = direct != null && trustedReturn(direct) ?
                        direct : resolved != null && trustedReturn(resolved) ?
                            resolved : null;
                    DataType returned = signature == null ? null :
                        signature.getReturnType();
                    if (returned == null || returned.getLength() != 4 ||
                            !semanticType(returned) ||
                            equivalentLifetimeType(returned, receiver)) continue;
                    String proposed = typeSpecification(returned);
                    if (!entry.getValue().stream().anyMatch(prior ->
                            equivalentLifetimeSpecifications(prior, proposed)))
                        continue;
                    boolean duplicate = rows.stream().anyMatch(row ->
                        row.functionAddress.equals(addr(function.getEntryPoint())) &&
                        row.originalName.equals(variable.getName()) &&
                        row.anchor.address.equals(entry.getKey()));
                    if (duplicate) continue;
                    Evidence anchor = new Evidence(entry.getKey(), 0,
                        "misattached_receiver_call_return", -1,
                        direct == null ? "" : addr(direct.getEntryPoint()),
                        resolved == null ? "" : addr(resolved.getEntryPoint()),
                        proposed);
                    rows.add(new Row(true, function, variable.getName(), 0, 1,
                        typeSpecification(variable.getDataType()),
                        variable.getSource().toString(), proposed, anchor,
                        List.of(anchor), 1,
                        "high", "retired receiver anchor was attached to a full-EAX " +
                            "call-result lifetime; exact trusted callee return ABI and " +
                            "same-address prior marker agree"));
                    singleGroupProposals++;
                }
            }
        }
    }

    /**
     * Revalidate durable locals created by an older lifetime pass against the
     * exact address-local return ABI currently installed at their CALL.  This
     * is the persistent counterpart of collectCallReturn(): once a merge group
     * has been split, Ghidra may no longer expose that Listing local through
     * the ordinary local-symbol iterator even though it still renders it and
     * keeps its script marker.  The marker supplies only stable storage/group
     * identity; the current call override supplies the type proof.
     */
    private void collectPersistentCallResultViewRepairs(
            List<Function> functions) {
        Pattern marker = Pattern.compile(
            "\\[STLocalLifetimeApplier\\]\\s+(?:split merge group|" +
            "typed local lifetime)\\s+(\\d+)\\s+at\\s+" +
            "([0-9A-Fa-f]{8});\\s*type=([^;\\s]+)");
        Set<String> existing = new HashSet<>();
        for (Row row : rows)
            existing.add(row.functionAddress + "|" + row.originalName + "|" +
                row.mergeGroup + "|" + row.anchor.address);
        for (Function function : functions) {
            for (Variable variable : function.getLocalVariables()) {
                if (variable.getSource() == SourceType.USER_DEFINED ||
                        variable.getSource() == SourceType.IMPORTED) continue;
                java.util.regex.Matcher match = marker.matcher(
                    text(variable.getComment()));
                while (match.find()) {
                    // A durable variable created by splitOutMergeGroup owns a
                    // fresh one-group HighVariable on subsequent decompiles.
                    // Its name/comment retain the historical parent group for
                    // provenance, but the current anchor group is necessarily
                    // zero.  Reusing the historical number makes every repair
                    // except the old group zero fail the applier's fresh
                    // p-code baseline check.
                    int group = 0;
                    Address address = currentProgram.getAddressFactory()
                        .getAddress(match.group(2));
                    Instruction call = address == null ? null :
                        currentProgram.getListing().getInstructionAt(address);
                    if (call == null || !"CALL".equalsIgnoreCase(
                            call.getMnemonicString())) continue;
                    DataType proposed = exactScriptCallReturnType(function,
                        address);
                    if (!usableType(proposed, variable.getLength()) ||
                            equivalentLifetimeType(proposed,
                                variable.getDataType())) continue;
                    Function direct = directCalledFunction(call);
                    Function resolved = resolveThunk(direct);
                    if (resolved == null) resolved = direct;
                    String functionAddress = addr(function.getEntryPoint());
                    String callAddress = addr(address);
                    String key = functionAddress + "|" + variable.getName() +
                        "|" + group + "|" + callAddress;
                    if (!existing.add(key)) continue;
                    String specification = typeSpecification(proposed);
                    Evidence anchor = new Evidence(callAddress, 0,
                        "call_return", -1,
                        direct == null ? "" : addr(direct.getEntryPoint()),
                        resolved == null ? "" : addr(resolved.getEntryPoint()),
                        "USE_SITE_OVERRIDE");
                    rows.add(new Row(true, function, variable.getName(),
                        (short)group, 1,
                        typeSpecification(variable.getDataType()),
                        variable.getSource().toString(), specification, anchor,
                        List.of(anchor),
                        1, "high", "automation-owned persistent call-result " +
                            "lifetime conflicts with the exact current " +
                            "address-local return override; prior marker=" +
                            match.group(3)));
                    singleGroupProposals++;
                }
            }
        }
    }

    private Function directCalledFunction(Instruction instruction) {
        if (instruction == null) return null;
        for (Address flow : instruction.getFlows()) {
            Function function = currentProgram.getFunctionManager()
                .getFunctionAt(flow);
            if (function != null) return function;
        }
        return null;
    }

    private Function functionOf(Object highSymbol) {
        try {
            Object highFunction = highSymbol.getClass()
                .getMethod("getHighFunction").invoke(highSymbol);
            return (Function)highFunction.getClass().getMethod("getFunction")
                .invoke(highFunction);
        }
        catch (Exception ignored) {
            return null;
        }
    }

    private void preferPriorReceiverView(DataType currentType,
            Map<String, TypeEvidence> evidence) {
        TypeEvidence prior = evidence.values().stream()
            .filter(value -> value.sources.contains("prior_script_provenance"))
            .findFirst().orElse(null);
        if (prior == null) return;
        evidence.entrySet().removeIf(entry ->
            !entry.getKey().equals(prior.specification) &&
            equivalentLifetimeSpecifications(entry.getKey(),
                typeSpecification(currentType)) &&
            entry.getValue().sources.stream().allMatch(source ->
                source.equals("typed_copy") || source.equals("receiver_alias")));
    }

    private void preferTrustedCurrentCallView(DataType currentType,
            Map<String, TypeEvidence> evidence) {
        if (generatedHiddenReceiverPointer(currentType)) {
            List<TypeEvidence> concreteBoundaries = evidence.values().stream()
                .filter(value -> {
                    DataType type = resolveTypeSpecification(value.specification);
                    if (!semanticPointer(type) ||
                            generatedHiddenReceiverPointer(type)) return false;
                    long arguments = value.anchors.stream()
                        .filter(anchor -> anchor.kind.equals("call_argument"))
                        .count();
                    return value.sources.contains("indirect_receiver") ||
                        arguments >= 2;
                })
                .toList();
            if (concreteBoundaries.size() == 1) {
                String selected = concreteBoundaries.get(0).specification;
                evidence.entrySet().removeIf(entry ->
                    !entry.getKey().equals(selected) &&
                    generatedHiddenReceiverPointer(
                        resolveTypeSpecification(entry.getKey())));
                return;
            }
        }
        TypeEvidence current = evidence.values().stream()
            .filter(value -> equivalentLifetimeSpecifications(
                value.specification, typeSpecification(currentType)) &&
                (value.sources.contains("call_argument") ||
                    value.sources.contains("indirect_receiver")))
            .findFirst().orElse(null);
        if (current == null) return;
        evidence.entrySet().removeIf(entry ->
            !entry.getKey().equals(current.specification) &&
            (entry.getValue().sources.stream().allMatch(source ->
                source.equals("typed_copy") || source.equals("receiver_alias")) ||
             generatedHiddenReceiverPointer(
                resolveTypeSpecification(entry.getKey()))));
    }

    private void collectPriorScriptRepairEvidence(Object highSymbol,
            List<Object> varnodes, Map<String, TypeEvidence> evidence) {
        String prior = priorPointerShapeSpecification(highSymbol);
        if (prior == null) return;
        DataType type = resolveTypeSpecification(prior);
        if (type == null) return;
        TypeEvidence independent = evidence.get(prior);
        if (independent == null ||
                !independent.sources.contains("call_argument")) return;
        try {
            for (Object varnode : varnodes) {
                Object definition = varnode.getClass().getMethod("getDef")
                    .invoke(varnode);
                if (definition == null) continue;
                String operation = mnemonic(definition);
                if (!Set.of("COPY", "CAST", "MULTIEQUAL", "INDIRECT")
                        .contains(operation)) continue;
                Evidence anchor = anchor(definition,
                    "prior_script_repair_" +
                        operation.toLowerCase(Locale.ROOT), -1, null, prior);
                addEvidence(evidence, type, TYPED_FIELD_WEIGHT,
                    "prior_script_provenance", anchor);
                return;
            }
        }
        catch (Exception ignored) {
            // A missing exact lifetime boundary cannot restore old provenance.
        }
    }

    private String priorPointerShapeSpecification(Object highSymbol) {
        try {
            Variable variable = persistentVariable(highSymbol);
            if (variable == null) return null;
            String comment = text(variable.getComment());
            if (!comment.contains(APPLIER_MARKER)) return null;
            java.util.regex.Matcher matcher = Pattern.compile(
                "\\[STPointerShapeApplier\\]\\s+(pointer:[^;\\s]+)")
                .matcher(comment);
            return matcher.find() ? matcher.group(1) : null;
        }
        catch (Exception ignored) {
            return null;
        }
    }

    private DataType persistentDatabaseType(Object highSymbol) {
        try {
            Variable variable = persistentVariable(highSymbol);
            return variable == null ? null : variable.getDataType();
        }
        catch (Exception ignored) {
            return null;
        }
    }

    private boolean scriptOwnedPersistentLocal(Object highSymbol) {
        try {
            Variable variable = symbolVariable(highSymbol);
            if (variable == null) variable = persistentVariable(highSymbol);
            return variable != null &&
                text(variable.getComment()).contains(APPLIER_MARKER);
        }
        catch (Exception ignored) {
            return false;
        }
    }

    private Variable symbolVariable(Object highSymbol) {
        try {
            Symbol symbol = (Symbol)highSymbol.getClass()
                .getMethod("getSymbol").invoke(highSymbol);
            Object object = symbol == null ? null : symbol.getObject();
            return object instanceof Variable variable &&
                !(variable instanceof Parameter) ? variable : null;
        }
        catch (Exception ignored) {
            return null;
        }
    }

    private Variable persistentVariable(Object highSymbol) throws Exception {
        Object highFunction = highSymbol.getClass()
            .getMethod("getHighFunction").invoke(highSymbol);
        Function function = (Function)highFunction.getClass()
            .getMethod("getFunction").invoke(highFunction);
        VariableStorage storage = (VariableStorage)highSymbol.getClass()
            .getMethod("getStorage").invoke(highSymbol);
        Address pcAddress = (Address)highSymbol.getClass()
            .getMethod("getPCAddress").invoke(highSymbol);
        Object high = highSymbol.getClass()
            .getMethod("getHighVariable").invoke(highSymbol);
        if (high != null && !storage.isHashStorage() &&
                (boolean)high.getClass().getMethod("requiresDynamicStorage")
                    .invoke(high)) {
            Object representative = high.getClass()
                .getMethod("getRepresentative").invoke(high);
            Object entry = buildDynamicEntry(representative);
            storage = (VariableStorage)entry.getClass()
                .getMethod("getStorage").invoke(entry);
            pcAddress = (Address)entry.getClass()
                .getMethod("getPCAdress").invoke(entry);
        }
        if (storage.isHashStorage()) {
            long hash = storage.getFirstVarnode().getOffset();
            for (Variable variable : function.getLocalVariables())
                if (variable.isUniqueVariable() &&
                        variable.getFirstStorageVarnode().getOffset() == hash)
                    return variable;
            return null;
        }
        int firstUse = 0;
        if (pcAddress != null) {
            try {
                firstUse = (int)pcAddress.subtract(function.getEntryPoint());
            }
            catch (Exception ignored) {
                firstUse = 0;
            }
        }
        for (Variable variable : function.getLocalVariables())
            if (variable.getFirstUseOffset() == firstUse &&
                    variable.getVariableStorage().equals(storage))
                return variable;
        return null;
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
                else if (mnemonic(op).equals("CALLIND"))
                    collectIndirectReceiver(op, varnode, evidence);
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
            collectTransparentConsumerEvidence(varnode, evidence);
            if (mixedDomainEligible)
                collectControlIndexRole(varnode, evidence);
        }
        catch (Exception ignored) {
            // One malformed p-code edge does not invalidate other independent anchors.
        }
    }

    /**
     * Follow only value-preserving, same-width p-code into a later High
     * lifetime before inspecting typed call boundaries.  Ghidra commonly
     * materializes a cast or COPY between one persistent Listing local and a
     * receiver-aware call override.  Looking only at direct descendants then
     * leaves the stale whole-local type in place and exports a cast at every
     * otherwise readable virtual call.
     *
     * This deliberately does not cross arithmetic, PTRSUB/PTRADD, LOAD/STORE,
     * or MULTIEQUAL.  Those operations may adjust the pointer or merge another
     * value and therefore cannot prove that the original local has the same
     * source-level role.  The terminal evidence is still the independently
     * installed exact call ABI; the transparent chain contributes no type by
     * itself.
     */
    private void collectTransparentConsumerEvidence(Object root,
            Map<String, TypeEvidence> evidence) throws Exception {
        int rootSize = ((Number)root.getClass().getMethod("getSize")
            .invoke(root)).intValue();
        Set<Object> seen = java.util.Collections.newSetFromMap(
            new IdentityHashMap<>());
        Deque<ValueDepth> queue = new ArrayDeque<>();
        seen.add(root);
        queue.addLast(new ValueDepth(root, 0));
        while (!queue.isEmpty()) {
            ValueDepth current = queue.removeFirst();
            if (current.depth >= 6) continue;
            @SuppressWarnings("unchecked")
            Iterator<Object> descendants = (Iterator<Object>)current.varnode
                .getClass().getMethod("getDescendants").invoke(current.varnode);
            while (descendants.hasNext()) {
                Object op = descendants.next();
                String operation = mnemonic(op);
                if (operation.equals("CALL"))
                    collectCallArgument(op, current.varnode, evidence);
                else if (operation.equals("CALLIND"))
                    collectIndirectReceiver(op, current.varnode, evidence);
                if (!operation.equals("COPY") && !operation.equals("CAST") &&
                        !operation.equals("INDIRECT")) continue;
                if (operandOf(op, current.varnode) < 0) continue;
                Object output = op.getClass().getMethod("getOutput").invoke(op);
                if (output == null || !seen.add(output)) continue;
                int outputSize = ((Number)output.getClass().getMethod("getSize")
                    .invoke(output)).intValue();
                if (outputSize != rootSize) continue;
                queue.addLast(new ValueDepth(output, current.depth + 1));
            }
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
        Function caller = currentProgram.getFunctionManager()
            .getFunctionContaining(sequenceAddress(op));
        DataType override = exactScriptCallReturnType(caller,
            sequenceAddress(op));
        if (override != null) {
            DataType type = override;
            int size = ((Number)output.getClass().getMethod("getSize")
                .invoke(output)).intValue();
            if (usableType(type, size)) {
                Evidence anchor = anchor(op, "call_return", -1, target,
                    "USE_SITE_OVERRIDE");
                addEvidence(evidence, type, RETURN_WEIGHT,
                    "use_site_call_return", anchor);
                return;
            }
        }
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

    private Address sequenceAddress(Object op) throws Exception {
        Object sequence = op.getClass().getMethod("getSeqnum").invoke(op);
        return (Address)sequence.getClass().getMethod("getTarget")
            .invoke(sequence);
    }

    private DataType exactScriptCallReturnType(Function caller,
            Address call) {
        if (caller == null || call == null) return null;
        String comment = text(currentProgram.getListing()
            .getComment(CommentType.EOL, call));
        if (!comment.contains(
                "[STUtilityFunctionApplier] heterogeneous_payload_consumer_view") &&
                !comment.contains(
                    "[STCallResultViewApplier] readability_validated"))
            return null;
        Namespace root = HighFunction.findOverrideSpace(caller);
        if (root != null) {
            FunctionDefinition agreed = null;
            for (Symbol symbol : currentProgram.getSymbolTable().getSymbols(call)) {
                if (!root.equals(symbol.getParentNamespace())) continue;
                DataTypeSymbol value = HighFunctionDBUtil.readOverride(symbol);
                if (value == null || !(value.getDataType() instanceof
                        FunctionDefinition definition)) continue;
                if (agreed != null && !agreed.isEquivalent(definition)) return null;
                agreed = definition;
            }
            if (agreed != null) return agreed.getReturnType();
        }
        java.util.regex.Matcher marker = Pattern.compile(
            "signature=[^;\\r\\n]*;(pointer:[^;\\s]+|/[^;\\s]+)")
            .matcher(comment);
        return marker.find() ? resolveTypeSpecification(marker.group(1)) : null;
    }

    /**
     * Feed one exact receiver-aware CALLIND boundary back into the local
     * lifetime solver.  Ghidra does not always propagate a call-override's
     * first argument through a raw or merged local, even though the override
     * already proves the physical receiver type at that instruction.  Only
     * operand one (the receiver), a script-owned override, and a concrete
     * named structure are accepted; sibling merge groups remain independent.
     */
    private void collectIndirectReceiver(Object op, Object varnode,
            Map<String, TypeEvidence> evidence) throws Exception {
        if (operandOf(op, varnode) != 1) return;
        Address call = sequenceAddress(op);
        Function caller = currentProgram.getFunctionManager()
            .getFunctionContaining(call);
        FunctionDefinition definition = exactScriptCallDefinition(caller, call);
        if (definition == null ||
                !"__thiscall".equals(definition.getCallingConventionName()) ||
                definition.getArguments().length < 1) return;
        DataType receiver = definition.getArguments()[0].getDataType();
        DataType unwrapped = untypedef(receiver);
        if (!(unwrapped instanceof Pointer pointer)) return;
        DataType pointee = untypedef(pointer.getDataType());
        if (!(pointee instanceof Structure structure) ||
                structure.getPathName().contains(
                    "/PointerShapes/CallableReceivers/")) return;
        int size = ((Number)varnode.getClass().getMethod("getSize")
            .invoke(varnode)).intValue();
        if (!usableType(receiver, size)) return;
        Evidence anchor = anchor(op, "indirect_receiver", 1, null,
            structure.getPathName());
        addEvidence(evidence, receiver, TYPED_FIELD_WEIGHT,
            "indirect_receiver", anchor);
    }

    private FunctionDefinition exactScriptCallDefinition(Function caller,
            Address call) {
        if (caller == null || call == null) return null;
        String comment = text(currentProgram.getListing()
            .getComment(CommentType.EOL, call));
        if (!comment.contains("[STIndirectCallsiteApplier]")) return null;
        Namespace root = HighFunction.findOverrideSpace(caller);
        if (root == null) return null;
        FunctionDefinition agreed = null;
        for (Symbol symbol : currentProgram.getSymbolTable().getSymbols(call)) {
            if (!root.equals(symbol.getParentNamespace())) continue;
            DataTypeSymbol value = HighFunctionDBUtil.readOverride(symbol);
            if (value == null || !(value.getDataType() instanceof
                    FunctionDefinition definition)) continue;
            if (agreed != null && !agreed.isEquivalent(definition)) return null;
            agreed = definition;
        }
        return agreed;
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
            target == null ? "" : addr(target.resolved.getEntryPoint()), source,
            persistentAnchor(op, kind, operand));
    }

    /**
     * Check that the evidence operand reaches one durable Listing local through
     * same-width transparent p-code.  Without this preflight a synthetic CAST
     * at a typed call boundary looks high-confidence to the analyzer but cannot
     * be written back by the applier, so the same proposal recurs forever.
     */
    private boolean persistentAnchor(Object op, String kind, int operand) {
        try {
            Object varnode;
            if (kind.equals("call_argument"))
                varnode = op.getClass().getMethod("getInput", int.class)
                    .invoke(op, operand + 1);
            else if (kind.equals("indirect_receiver"))
                varnode = op.getClass().getMethod("getInput", int.class)
                    .invoke(op, 1);
            else if (operand < 0)
                varnode = op.getClass().getMethod("getOutput").invoke(op);
            else
                varnode = op.getClass().getMethod("getInput", int.class)
                    .invoke(op, operand);
            return persistentTransparentOrigin(varnode,
                java.util.Collections.newSetFromMap(new IdentityHashMap<>()), 0);
        }
        catch (Exception ignored) {
            return false;
        }
    }

    private boolean persistentTransparentOrigin(Object varnode,
            Set<Object> seen, int depth) throws Exception {
        if (varnode == null || depth > 6 || !seen.add(varnode)) return false;
        Object high = varnode.getClass().getMethod("getHigh").invoke(varnode);
        Object highSymbol = high == null ? null : high.getClass()
            .getMethod("getSymbol").invoke(high);
        if (highSymbol != null) {
            Symbol symbol = (Symbol)highSymbol;
            Object object = symbol.getObject();
            if (object instanceof Variable variable &&
                    !(variable instanceof Parameter))
                return true;
        }
        Object definition = varnode.getClass().getMethod("getDef").invoke(varnode);
        if (definition == null || !Set.of("COPY", "CAST", "INDIRECT")
                .contains(mnemonic(definition))) return false;
        int size = ((Number)varnode.getClass().getMethod("getSize")
            .invoke(varnode)).intValue();
        int inputs = ((Number)definition.getClass()
            .getMethod("getNumInputs").invoke(definition)).intValue();
        int persistent = 0;
        for (int index = 0; index < inputs; index++) {
            Object input = definition.getClass()
                .getMethod("getInput", int.class).invoke(definition, index);
            if (input == null || (boolean)input.getClass()
                    .getMethod("isConstant").invoke(input)) continue;
            int inputSize = ((Number)input.getClass().getMethod("getSize")
                .invoke(input)).intValue();
            if (inputSize != size) continue;
            if (persistentTransparentOrigin(input, seen, depth + 1)) persistent++;
        }
        return persistent == 1;
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
            Variable variable = persistentVariable(highSymbol);
            return variable != null &&
                text(variable.getComment()).contains(APPLIER_MARKER);
        }
        catch (Exception ignored) {
            return false;
        }
    }

    private boolean scriptOwnedGenericStoragePointer(Object highSymbol,
            DataType type) {
        DataType base = untypedef(type);
        if (!(base instanceof Pointer pointer)) return false;
        DataType pointed = untypedef(pointer.getDataType());
        if (!genericStoragePointee(pointed)) return false;
        try {
            Variable variable = persistentVariable(highSymbol);
            return variable != null &&
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
                "anchor_source\tsupporting_anchors\tevidence_count\t" +
                "confidence\treason\n");
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
                    tsv(supportingAnchors(row.anchors)) + "\t" +
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

    private static String supportingAnchors(List<Evidence> anchors) {
        return anchors.stream().sorted(Evidence.ORDER).map(anchor ->
            anchor.address + ":t" + anchor.time + ":" + anchor.kind + ":" +
            anchor.operand + ":" + anchor.directTarget + ":" +
            anchor.resolvedTarget).distinct()
            .collect(java.util.stream.Collectors.joining(","));
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
    private record ValueDepth(Object varnode, int depth) {}
    private record Decision(TypeEvidence selected, boolean conflict,
        Map<String, TypeEvidence> evidence) {}
    private record CallTarget(Function direct, Function resolved) {}
    private record SignatureParameters(Function function,
        Parameter[] parameters) {}
    private record ScalarRole(String kind, int operand, int weight,
        String source) {}
    private record TypedField(DataType type, String identity) {}
    private record BoundaryOrigin(String name, DataType type, String source) {}
    private record Evidence(String address, int time, String kind, int operand,
        String directTarget, String resolvedTarget, String source,
        boolean persistent) {
        Evidence(String address, int time, String kind, int operand,
                String directTarget, String resolvedTarget, String source) {
            this(address, time, kind, operand, directTarget, resolvedTarget,
                source, false);
        }
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
        final List<Evidence> anchors;
        Row(boolean apply, Function function, String originalName,
                int mergeGroup, int mergeGroupCount,
                String expectedCurrentType, String expectedSymbolSource,
                String proposedType, Evidence anchor, List<Evidence> anchors,
                int evidenceCount,
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
            this.anchors = List.copyOf(anchors);
            this.evidenceCount = evidenceCount;
            this.confidence = confidence;
            this.reason = reason;
        }
    }
    private record Failure(Function function, String reason) {}
}
