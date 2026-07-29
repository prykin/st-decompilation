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
import java.util.ArrayList;
import java.util.Comparator;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Set;
import java.util.TreeMap;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.TypeDef;
import ghidra.program.model.data.Undefined;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.Symbol;

public class STLocalLifetimeAnalyzer extends GhidraScript {
    private static final int DECOMPILE_TIMEOUT = 45;
    private static final int RETURN_WEIGHT = 12;
    private static final int COPY_WEIGHT = 10;
    private static final int ARGUMENT_WEIGHT = 4;

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

        DecompInterface decompiler = new DecompInterface();
        decompiler.toggleCCode(true);
        decompiler.toggleSyntaxTree(true);
        if (!decompiler.openProgram(currentProgram))
            throw new IllegalStateException("Decompiler could not open current program");
        try {
            Address only = onlyFunction();
            if (only != null) {
                Function function =
                    currentProgram.getFunctionManager().getFunctionAt(only);
                if (function == null)
                    throw new IllegalArgumentException("No function at " + addr(only));
                analyze(function, decompiler);
            }
            else {
                FunctionIterator functions =
                    currentProgram.getFunctionManager().getFunctions(true);
                while (functions.hasNext()) {
                    monitor.checkCancelled();
                    analyze(functions.next(), decompiler);
                }
            }
        }
        finally {
            decompiler.dispose();
        }

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

    private void analyze(Function function, DecompInterface decompiler)
            throws Exception {
        if (function == null || function.isExternal() || function.isThunk() ||
                library(function)) return;
        functionsSeen++;
        DecompileResults result =
            decompiler.decompileFunction(function, DECOMPILE_TIMEOUT, monitor);
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
        if (!merged && !genericUnknown(currentType)) return;
        if (merged) {
            mergedLocals++;
            mergeGroups += groups.size();
        }
        else singleGroupUnknowns++;

        Map<Short, Decision> decisions = new TreeMap<>();
        for (Map.Entry<Short, List<Object>> entry : groups.entrySet()) {
            Map<String, TypeEvidence> evidence = new TreeMap<>();
            for (Object varnode : entry.getValue())
                collectEvidence(varnode, evidence);
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
            boolean different = !selected.specification.equals(
                currentSpecification);
            // Single-group locals are an undefined-type recovery pass, not an
            // inventory of already typed SSA values. The older multi-group
            // rows remain complete because they document every independent
            // lifetime sharing one Listing local.
            if (!merged && !different) continue;
            boolean manual = symbolSource == SourceType.USER_DEFINED ||
                symbolSource == SourceType.IMPORTED;
            boolean apply = different && !manual &&
                selected.score >= automaticThreshold(selected);
            if (!merged) singleGroupProposals++;
            String confidence = apply ? "high" :
                manual ? "manual" : different ? "review" : "existing";
            String reason = (merged ? "separate decompiler merge group" :
                "single undefined local lifetime") + "; exact_type_votes=" +
                selected.anchors.size() + "; score=" + selected.score +
                "; sources=" + selected.sources +
                (different ? "" : "; group already has the merged type") +
                (manual ? "; manual/imported HighSymbol preserved" : "") +
                (selected.score < automaticThreshold(selected) ?
                    "; one-way call conversion alone is review-only" : "");
            rows.add(new Row(apply, function, originalName, entry.getKey(),
                groups.size(), currentSpecification, symbolSource.toString(),
                selected.specification, anchor, selected.anchors.size(),
                confidence, reason));
        }
    }

    private int automaticThreshold(TypeEvidence evidence) {
        if (evidence.sources.contains("call_return")) return RETURN_WEIGHT;
        if (evidence.sources.contains("typed_copy")) return COPY_WEIGHT;
        return ARGUMENT_WEIGHT * 2;
    }

    private Decision decide(Map<String, TypeEvidence> evidence) {
        if (evidence.isEmpty()) return new Decision(null, false, evidence);
        if (evidence.size() != 1)
            return new Decision(null, true, evidence);
        return new Decision(evidence.values().iterator().next(), false, evidence);
    }

    private Evidence firstEvidence(Map<String, TypeEvidence> evidence) {
        return evidence.values().stream()
            .flatMap(value -> value.anchors.stream())
            .sorted(Evidence.ORDER).findFirst().orElse(null);
    }

    private void collectEvidence(Object varnode,
            Map<String, TypeEvidence> evidence) {
        try {
            Object definition = varnode.getClass().getMethod("getDef").invoke(varnode);
            if (definition != null) {
                String mnemonic = mnemonic(definition);
                if (mnemonic.equals("CALL"))
                    collectCallReturn(definition, varnode, evidence);
                else if (mnemonic.equals("COPY"))
                    collectTypedCopy(definition, varnode, evidence);
            }
            @SuppressWarnings("unchecked")
            Iterator<Object> descendants = (Iterator<Object>)varnode.getClass()
                .getMethod("getDescendants").invoke(varnode);
            while (descendants.hasNext()) {
                Object op = descendants.next();
                if (mnemonic(op).equals("CALL"))
                    collectCallArgument(op, varnode, evidence);
            }
        }
        catch (Exception ignored) {
            // One malformed p-code edge does not invalidate other independent anchors.
        }
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
        Object sourceSymbol = sourceHigh.getClass()
            .getMethod("getSymbol").invoke(sourceHigh);
        if (sourceSymbol == null) return;
        boolean parameter = (boolean)sourceSymbol.getClass()
            .getMethod("isParameter").invoke(sourceSymbol);
        boolean global = (boolean)sourceSymbol.getClass()
            .getMethod("isGlobal").invoke(sourceSymbol);
        if (!parameter && !global) return;
        DataType type = (DataType)sourceHigh.getClass()
            .getMethod("getDataType").invoke(sourceHigh);
        int size = ((Number)output.getClass().getMethod("getSize")
            .invoke(output)).intValue();
        if (!usableType(type, size)) return;
        SourceType source = symbolSource(sourceSymbol);
        if (source == SourceType.DEFAULT && !semanticPointer(type)) return;
        Evidence anchor = anchor(op, "typed_copy", 0, null,
            source.toString());
        addEvidence(evidence, type, COPY_WEIGHT, "typed_copy", anchor);
    }

    private void addEvidence(Map<String, TypeEvidence> evidence, DataType type,
            int weight, String source, Evidence anchor) {
        String specification = typeSpecification(type);
        TypeEvidence value = evidence.computeIfAbsent(specification,
            ignored -> new TypeEvidence(specification));
        if (!value.anchorKeys.add(anchor.key())) return;
        value.score += weight;
        value.sources.add(source);
        value.anchors.add(anchor);
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
     * A one-lifetime HighSymbol is eligible only when its current type carries
     * no semantic information. In particular, do not reinterpret void * or an
     * already named integer merely because one consumer accepts something more
     * specific. Raw undefinedN and undefinedN * are safe targets for exact
     * typed call/copy evidence.
     */
    private boolean genericUnknown(DataType type) {
        type = untypedef(type);
        if (type == null || Undefined.isUndefined(type)) return true;
        if (!(type instanceof Pointer pointer)) return false;
        DataType pointed = untypedef(pointer.getDataType());
        return pointed == null || Undefined.isUndefined(pointed);
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

    private Address onlyFunction() {
        String[] args = getScriptArgs();
        if (args.length < 2 || args[1].isBlank()) return null;
        Address address = currentProgram.getAddressFactory()
            .getAddress(args[1]);
        if (address == null)
            throw new IllegalArgumentException(
                "Invalid function address: " + args[1]);
        return address;
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
                "the same exact typed return/copy evidence or two agreeing typed " +
                "call arguments. Competing exact types are review-only.",
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
