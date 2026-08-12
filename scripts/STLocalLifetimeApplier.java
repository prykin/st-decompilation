// Split and type compiler-reused decompiler local lifetimes proposed by
// STLocalLifetimeAnalyzer. Manual/imported symbols are preserved.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Apply Local Lifetimes

import java.io.BufferedWriter;
import java.io.File;
import java.lang.reflect.InvocationTargetException;
import java.security.MessageDigest;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Set;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.AbstractIntegerDataType;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeComponent;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.Enum;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.PointerDataType;
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.TypeDef;
import ghidra.program.model.data.Undefined;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.listing.Variable;
import ghidra.program.model.listing.VariableStorage;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.Symbol;

public class STLocalLifetimeApplier extends GhidraScript {
    private static final String MARKER = "[STLocalLifetimeApplier]";
    private static final int DECOMPILE_TIMEOUT = 45;

    private final List<ReportRow> report = new ArrayList<>();
    private final List<Applied> applied = new ArrayList<>();
    private final List<Applied> rejected = new ArrayList<>();
    private final Set<String> previouslyRejected = new HashSet<>();
    private final Map<String, String> legacyRejected = new LinkedHashMap<>();
    private DataTypeManager dataTypes;

    @Override
    protected void run() throws Exception {
        // Own explicit transactions when invoked from STRecoveryPipeline.
        end(true);
        if (currentProgram == null) {
            printerr("Open the same program that was analyzed.");
            return;
        }
        File file = inputFile();
        if (file == null) return;
        if (file.isDirectory())
            file = new File(file, "local_lifetime_proposals.tsv");
        if (!file.isFile())
            throw new IllegalArgumentException("Missing " + file);
        Tsv input = readTsv(file.toPath());
        requireColumns(input, "apply", "function_address", "function_name",
            "original_name", "merge_group", "merge_group_count",
            "expected_current_type", "expected_symbol_source", "proposed_type",
            "anchor_kind", "anchor_address", "anchor_time", "anchor_operand",
            "direct_target_address", "resolved_target_address", "anchor_source",
            "evidence_count", "confidence", "reason");
        dataTypes = currentProgram.getDataTypeManager();
        loadPreviousRejections(file.toPath().toAbsolutePath().normalize()
            .resolveSibling("local_lifetime_apply_report.tsv"));

        List<Prepared> prepared = prepare(input.rows);
        prepared.sort(Comparator.comparing((Prepared value) ->
                unt(value.row.get("function_address")))
            .thenComparingInt(value -> value.representativeGroup ? 1 : 0)
            .thenComparingInt(value -> value.targetGroup));

        int transaction =
            currentProgram.startTransaction("Apply recovered local lifetimes");
        boolean commit = false;
        try {
            for (Prepared value : prepared) {
                monitor.checkCancelled();
                apply(value);
            }
            commit = true;
        }
        finally {
            currentProgram.endTransaction(transaction, commit);
        }
        currentProgram.flushEvents();
        verifyApplied();

        Path reportPath = file.toPath().toAbsolutePath().normalize()
            .resolveSibling("local_lifetime_apply_report.tsv");
        writeReport(reportPath);
        println("Local lifetimes: applied=" + count("applied") +
            ", unchanged=" + count("unchanged") + ", preserved=" +
            count("preserved") + ", conflicts=" + count("conflict") +
            ", disabled=" + count("disabled"));
        println("Apply report: " + reportPath);
    }

    private List<Prepared> prepare(List<Map<String, String>> rows)
            throws Exception {
        List<Prepared> result = new ArrayList<>();
        Map<String, List<Map<String, String>>> byFunction =
            new LinkedHashMap<>();
        for (Map<String, String> row : rows) {
            if (!enabled(row.get("apply"))) {
                report.add(report(row, "disabled", "apply=0"));
                continue;
            }
            if (wasPreviouslyRejected(row)) {
                report.add(report(row, "preserved",
                    "unchanged proposal was rejected by fresh-decompile " +
                        "verification on the previous run"));
                continue;
            }
            byFunction.computeIfAbsent(unt(row.get("function_address")),
                ignored -> new ArrayList<>()).add(row);
        }
        if (byFunction.isEmpty()) return result;

        DecompInterface decompiler = new DecompInterface();
        decompiler.toggleCCode(false);
        decompiler.toggleSyntaxTree(true);
        if (!decompiler.openProgram(currentProgram))
            throw new IllegalStateException("Decompiler could not open current program");
        try {
            for (Map.Entry<String, List<Map<String, String>>> entry :
                    byFunction.entrySet()) {
                monitor.checkCancelled();
                Function function = function(entry.getKey());
                if (function == null) {
                    for (Map<String, String> row : entry.getValue())
                        report.add(report(row, "conflict", "function is missing"));
                    continue;
                }
                DecompileResults decompiled = decompiler.decompileFunction(
                    function, DECOMPILE_TIMEOUT, monitor);
                if (!decompiled.decompileCompleted()) {
                    for (Map<String, String> row : entry.getValue())
                        report.add(report(row, "conflict",
                            "decompile failed: " +
                                text(decompiled.getErrorMessage())));
                    continue;
                }
                Object highFunction = decompiled.getClass()
                    .getMethod("getHighFunction").invoke(decompiled);
                if (highFunction == null) {
                    for (Map<String, String> row : entry.getValue())
                        report.add(report(row, "conflict",
                            "decompiler returned no HighFunction"));
                    continue;
                }
                for (Map<String, String> row : entry.getValue()) {
                    try {
                        DataType proposed =
                            resolveType(unt(row.get("proposed_type")));
                        if (proposed == null)
                            throw new IllegalArgumentException(
                                "proposed type is missing");
                        Anchor anchor = locateAnchor(highFunction, row);
                        DataType anchored = anchoredType(anchor, row);
                        if (anchored == null ||
                                !equivalentType(proposed, anchored))
                            throw new IllegalArgumentException(
                                "anchor type is stale: " +
                                    typeSpecification(anchored) + " != " +
                                    typeSpecification(proposed));
                        Object high = anchor.varnode.getClass()
                            .getMethod("getHigh").invoke(anchor.varnode);
                        if (high == null)
                            throw new IllegalArgumentException(
                                "anchor has no HighVariable");
                        Object symbol = high.getClass()
                            .getMethod("getSymbol").invoke(high);
                        if (symbol == null)
                            throw new IllegalArgumentException(
                                "anchor has no HighSymbol");
                        SourceType source = symbolSource(symbol);
                        if (source == SourceType.USER_DEFINED ||
                                source == SourceType.IMPORTED) {
                            report.add(report(row, "preserved",
                                "manual/imported HighSymbol"));
                            continue;
                        }
                        DataType current = (DataType)high.getClass()
                            .getMethod("getDataType").invoke(high);
                        if (unt(row.get("anchor_kind")).endsWith(
                                "_scalar_role") &&
                                !scalarRoleEligible(current))
                            throw new IllegalArgumentException(
                                "scalar-role target is already nominal: " +
                                    typeSpecification(current));
                        int targetGroup = ((Number)anchor.varnode.getClass()
                            .getMethod("getMergeGroup")
                            .invoke(anchor.varnode)).intValue();
                        int expectedGroup = integer(row.get("merge_group"));
                        if (targetGroup != expectedGroup)
                            throw new IllegalArgumentException(
                                "merge-group baseline is stale: " + targetGroup +
                                    " != " + expectedGroup);
                        Object representative = high.getClass()
                            .getMethod("getRepresentative").invoke(high);
                        int representativeGroup = ((Number)representative.getClass()
                            .getMethod("getMergeGroup")
                            .invoke(representative)).intValue();
                        result.add(new Prepared(row, highFunction, anchor.varnode,
                            proposed, targetGroup,
                            targetGroup == representativeGroup));
                    }
                    catch (Exception exception) {
                        report.add(report(row, "conflict",
                            message(exception)));
                    }
                }
            }
        }
        finally {
            decompiler.dispose();
        }
        return result;
    }

    private void apply(Prepared prepared) {
        Map<String, String> row = prepared.row;
        try {
            Object high = prepared.varnode.getClass()
                .getMethod("getHigh").invoke(prepared.varnode);
            if (high == null)
                throw new IllegalStateException(
                    "anchor HighVariable disappeared after an earlier split");
            Object originalSymbol = high.getClass()
                .getMethod("getSymbol").invoke(high);
            if (originalSymbol == null)
                throw new IllegalStateException("HighVariable has no HighSymbol");
            SourceType source = symbolSource(originalSymbol);
            if (source == SourceType.USER_DEFINED ||
                    source == SourceType.IMPORTED) {
                report.add(report(row, "preserved",
                    "manual/imported HighSymbol"));
                return;
            }
            DataType current = (DataType)high.getClass()
                .getMethod("getDataType").invoke(high);
            Set<Integer> groups = mergeGroups(high);
            boolean requestedIsolation = groups.size() > 1 &&
                unt(row.get("reason")).contains(
                    "heterogeneous siblings require isolation");
            if (equivalentType(prepared.proposed, current) &&
                    !requestedIsolation) {
                report.add(report(row, "unchanged",
                    "anchor lifetime already has the proposed type"));
                return;
            }

            Object separated = high;
            if (groups.size() > 1) {
                java.lang.reflect.Method split = null;
                for (java.lang.reflect.Method method :
                        prepared.highFunction.getClass().getMethods()) {
                    if (method.getName().equals("splitOutMergeGroup") &&
                            method.getParameterCount() == 2) {
                        split = method;
                        break;
                    }
                }
                if (split == null)
                    throw new IllegalStateException(
                        "HighFunction split API is unavailable");
                try {
                    separated =
                        split.invoke(prepared.highFunction, high, prepared.varnode);
                }
                catch (InvocationTargetException exception) {
                    Throwable cause = exception.getCause();
                    throw new IllegalStateException(cause == null ?
                        exception.getMessage() : cause.getMessage(), cause);
                }
            }
            if (separated == null)
                throw new IllegalStateException("merge-group split returned null");
            if (mergeGroups(separated).size() != 1)
                throw new IllegalStateException(
                    "selected lifetime did not isolate to one merge group");
            Object splitSymbol = separated.getClass()
                .getMethod("getSymbol").invoke(separated);
            if (splitSymbol == null)
                throw new IllegalStateException(
                    "isolated lifetime has no HighSymbol");
            source = symbolSource(splitSymbol);
            if (source == SourceType.USER_DEFINED ||
                    source == SourceType.IMPORTED) {
                report.add(report(row, "preserved",
                    "isolated lifetime maps to a manual/imported symbol"));
                return;
            }

            Variable before = functionVariable(splitSymbol);
            Baseline baseline = before == null ? null :
                new Baseline(before, before.getDataType(), before.getSource(),
                    text(before.getComment()));
            String updateName = groups.size() > 1 ?
                uniqueLifetimeName(prepared.highFunction, before,
                    unt(row.get("original_name")), prepared.targetGroup) : null;
            updateVariable(splitSymbol, updateName, prepared.proposed);
            Variable variable = functionVariable(splitSymbol);
            if (variable == null ||
                    !equivalentType(prepared.proposed, variable.getDataType()))
                throw new IllegalStateException(
                    "typed lifetime did not persist in the Program database");
            mark(variable, row);
            String detail = typeSpecification(current) + " -> " +
                typeSpecification(prepared.proposed) +
                (groups.size() > 1 ? "; isolated merge group" : "");
            report.add(report(row, "pending", detail));
            applied.add(new Applied(prepared, variable, baseline, detail));
        }
        catch (Exception exception) {
            report.add(report(row, "conflict", message(exception)));
        }
    }

    private String uniqueLifetimeName(Object highFunction, Variable current,
            String originalName, int mergeGroup) throws Exception {
        Function function = (Function)highFunction.getClass()
            .getMethod("getFunction").invoke(highFunction);
        String base = originalName == null ? "" : originalName.trim();
        if (base.isBlank()) base = "local";
        base = base.replaceAll("[^A-Za-z0-9_]", "_")
            .replaceFirst("_mg[0-9A-Fa-f]+(?:_[0-9]+)?$", "");
        String stem = base + "_mg" +
            Integer.toHexString(mergeGroup).toUpperCase(Locale.ROOT);
        Set<String> occupied = new HashSet<>();
        for (Variable variable : function.getAllVariables())
            if (current == null || variable != current)
                occupied.add(variable.getName());
        if (!occupied.contains(stem)) return stem;
        for (int suffix = 2; ; suffix++) {
            String candidate = stem + "_" + suffix;
            if (!occupied.contains(candidate)) return candidate;
        }
    }

    private void updateVariable(Object highSymbol, String name,
            DataType proposed)
            throws Exception {
        ClassLoader loader = highSymbol.getClass().getClassLoader();
        Class<?> utility = Class.forName(
            "ghidra.program.model.pcode.HighFunctionDBUtil", true, loader);
        java.lang.reflect.Method update = null;
        for (java.lang.reflect.Method method : utility.getMethods()) {
            if (method.getName().equals("updateDBVariable") &&
                    method.getParameterCount() == 4) {
                update = method;
                break;
            }
        }
        if (update == null)
            throw new IllegalStateException(
                "HighFunctionDBUtil API is unavailable");
        try {
            update.invoke(null, highSymbol, name, proposed,
                SourceType.ANALYSIS);
        }
        catch (InvocationTargetException exception) {
            Throwable cause = exception.getCause();
            throw new IllegalStateException(cause == null ?
                exception.getMessage() : cause.getMessage(), cause);
        }
    }

    private Anchor locateAnchor(Object highFunction,
            Map<String, String> row) throws Exception {
        Address address = currentProgram.getAddressFactory()
            .getAddress(unt(row.get("anchor_address")));
        if (address == null)
            throw new IllegalArgumentException("invalid anchor address");
        int expectedTime = integer(row.get("anchor_time"));
        String kind = unt(row.get("anchor_kind"));
        boolean scalarRole = kind.endsWith("_scalar_role");
        String expectedMnemonic = scalarRole ?
            unt(row.get("anchor_source")) :
            switch (kind) {
                case "typed_copy" -> "COPY";
                case "typed_field_load" -> "LOAD";
                case "typed_field_address" -> "PTRSUB";
                case "typed_field_store" -> "STORE";
                case "typed_cast" -> "CAST";
                case "typed_recursive_cast" -> "CAST";
                case "receiver_alias_copy" -> "COPY";
                case "receiver_alias_cast" -> "CAST";
                case "receiver_alias_multiequal" -> "MULTIEQUAL";
                case "receiver_alias_indirect" -> "INDIRECT";
                default -> "CALL";
            };
        @SuppressWarnings("unchecked")
        Iterator<Object> iterator = (Iterator<Object>)highFunction.getClass()
            .getMethod("getPcodeOps", Address.class)
            .invoke(highFunction, address);
        List<Object> matching = new ArrayList<>();
        List<Object> fallback = new ArrayList<>();
        while (iterator.hasNext()) {
            Object op = iterator.next();
            if (!mnemonic(op).equals(expectedMnemonic)) continue;
            if (!anchorTargetMatches(op, row)) continue;
            fallback.add(op);
            Object sequence = op.getClass().getMethod("getSeqnum").invoke(op);
            int time = ((Number)sequence.getClass()
                .getMethod("getTime").invoke(sequence)).intValue();
            if (time == expectedTime) matching.add(op);
        }
        if (matching.isEmpty() && fallback.size() == 1)
            matching.add(fallback.get(0));
        if (matching.size() != 1)
            throw new IllegalArgumentException(matching.isEmpty() ?
                "anchor p-code op is missing" : "anchor p-code op is ambiguous");
        Object op = matching.get(0);
        Object varnode;
        if (kind.equals("call_return") || kind.equals("typed_copy") ||
                kind.equals("typed_field_load") ||
                kind.equals("typed_field_address") ||
                kind.equals("typed_cast") ||
                kind.equals("typed_recursive_cast") ||
                kind.startsWith("receiver_alias_"))
            varnode = op.getClass().getMethod("getOutput").invoke(op);
        else if (kind.equals("typed_field_store"))
            varnode = op.getClass().getMethod("getInput", int.class)
                .invoke(op, 2);
        else if (kind.equals("call_argument")) {
            int operand = integer(row.get("anchor_operand"));
            varnode = op.getClass().getMethod("getInput", int.class)
                .invoke(op, operand + 1);
        }
        else if (scalarRole) {
            int operand = integer(row.get("anchor_operand"));
            varnode = operand < 0 ?
                op.getClass().getMethod("getOutput").invoke(op) :
                op.getClass().getMethod("getInput", int.class)
                    .invoke(op, operand);
        }
        else throw new IllegalArgumentException(
            "unknown anchor kind: " + kind);
        if (varnode == null)
            throw new IllegalArgumentException("anchor varnode is missing");
        return new Anchor(op, varnode, kind);
    }

    private boolean anchorTargetMatches(Object op,
            Map<String, String> row) {
        String expected = unt(row.get("direct_target_address"));
        if (expected.isBlank()) return true;
        try {
            Function target = directTarget(op);
            return target != null &&
                addr(target.getEntryPoint()).equalsIgnoreCase(expected);
        }
        catch (Exception ignored) {
            return false;
        }
    }

    private DataType anchoredType(Anchor anchor,
            Map<String, String> row) throws Exception {
        if (anchor.kind.startsWith("receiver_alias_")) {
            Function function = function(unt(row.get("function_address")));
            DataType receiver = receiverType(function);
            return receiver != null &&
                    typeSpecification(receiver).equals(
                        unt(row.get("anchor_source"))) &&
                    receiverAliasOrigin(anchor.varnode, receiver,
                        java.util.Collections.newSetFromMap(
                            new java.util.IdentityHashMap<>()), 0) ?
                receiver : null;
        }
        if (anchor.kind.endsWith("_scalar_role")) {
            int size = ((Number)anchor.varnode.getClass()
                .getMethod("getSize").invoke(anchor.varnode)).intValue();
            String mnemonic = mnemonic(anchor.op);
            int operand = integer(row.get("anchor_operand"));
            if (!validScalarRole(anchor.kind, mnemonic, operand))
                return null;
            return dataTypes.getDataType(
                scalarSpecification(anchor.kind, size));
        }
        if (anchor.kind.equals("typed_copy")) {
            Object input = anchor.op.getClass()
                .getMethod("getInput", int.class).invoke(anchor.op, 0);
            Object high = input == null ? null :
                input.getClass().getMethod("getHigh").invoke(input);
            if (high == null) return null;
            Object symbol = high.getClass().getMethod("getSymbol").invoke(high);
            DataType type = (DataType)high.getClass()
                .getMethod("getDataType").invoke(high);
            if (symbol == null)
                return unt(row.get("anchor_source")).equals(
                        "decompiler_nominal_type") &&
                        recursivePointerIdentity(type) != null ?
                    type : null;
            boolean parameter = (boolean)symbol.getClass()
                .getMethod("isParameter").invoke(symbol);
            boolean global = (boolean)symbol.getClass()
                .getMethod("isGlobal").invoke(symbol);
            SourceType source = symbolSource(symbol);
            boolean recursive = recursivePointerIdentity(type) != null;
            if (!parameter && !global && !recursive) return null;
            return source != SourceType.DEFAULT ||
                untypedef(type) instanceof Pointer || recursive ? type : null;
        }
        if (anchor.kind.equals("typed_field_load") ||
                anchor.kind.equals("typed_field_address") ||
                anchor.kind.equals("typed_field_store")) {
            Object address = anchor.kind.equals("typed_field_load") ?
                anchor.op.getClass().getMethod("getInput", int.class)
                    .invoke(anchor.op, 1) :
                anchor.kind.equals("typed_field_store") ?
                    anchor.op.getClass().getMethod("getInput", int.class)
                        .invoke(anchor.op, 1) :
                anchor.op.getClass().getMethod("getOutput").invoke(anchor.op);
            TypedField field = typedRecursiveField(address);
            if (field == null || !field.identity.equals(
                    unt(row.get("anchor_source"))))
                return null;
            if (anchor.kind.equals("typed_field_load") ||
                    anchor.kind.equals("typed_field_store")) return field.type;
            return new PointerDataType(field.type,
                currentProgram.getDefaultPointerSize(), dataTypes);
        }
        if (anchor.kind.equals("typed_recursive_cast")) {
            Object input = anchor.op.getClass()
                .getMethod("getInput", int.class).invoke(anchor.op, 0);
            Object high = input == null ? null :
                input.getClass().getMethod("getHigh").invoke(input);
            if (high == null) return null;
            DataType type = (DataType)high.getClass()
                .getMethod("getDataType").invoke(high);
            String identity = recursivePointerIdentity(type);
            return identity != null && identity.equals(
                unt(row.get("anchor_source"))) ? type : null;
        }
        if (anchor.kind.equals("typed_cast")) {
            Object input = anchor.op.getClass()
                .getMethod("getInput", int.class).invoke(anchor.op, 0);
            Object high = input == null ? null :
                input.getClass().getMethod("getHigh").invoke(input);
            if (high == null) return null;
            Object symbol = high.getClass().getMethod("getSymbol").invoke(high);
            if (symbol == null) return null;
            boolean parameter = (boolean)symbol.getClass()
                .getMethod("isParameter").invoke(symbol);
            boolean global = (boolean)symbol.getClass()
                .getMethod("isGlobal").invoke(symbol);
            DataType type = (DataType)high.getClass()
                .getMethod("getDataType").invoke(high);
            SourceType source = symbolSource(symbol);
            if ((!parameter && !global) ||
                    source == SourceType.DEFAULT && !nominalType(type) ||
                    !typeSpecification(type).equals(
                        unt(row.get("anchor_source")))) return null;
            return type;
        }
        Function direct = directTarget(anchor.op);
        if (direct == null) return null;
        Function resolved = resolveThunk(direct);
        if (resolved == null) resolved = direct;
        if (anchor.kind.equals("call_return")) {
            if (trustedReturn(direct) && semanticType(direct.getReturnType()))
                return direct.getReturnType();
            return trustedReturn(resolved) ? resolved.getReturnType() : null;
        }
        int inputCount = ((Number)anchor.op.getClass()
            .getMethod("getNumInputs").invoke(anchor.op)).intValue() - 1;
        SignatureParameters signature =
            signatureParameters(direct, inputCount);
        if (signature == null)
            signature = signatureParameters(resolved, inputCount);
        if (signature == null) return null;
        int operand = integer(row.get("anchor_operand"));
        Parameter[] parameters = signature.parameters;
        if (operand < 0 || operand >= parameters.length) return null;
        Parameter parameter = parameters[operand];
        return trustedParameter(signature.function, parameter) ?
            parameter.getDataType() : null;
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
            return "this".equals(name) && equivalentType(type, receiverType);
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

    /**
     * Re-prove analyzer field anchors from the current HighFunction and the
     * current hash-intact generated datatype.  The TSV cannot confer trust:
     * any layout edit, offset change, or marker/hash mismatch makes the anchor
     * stale and the proposal is refused.
     */
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
                !pointsToHashOwnedRecursiveStructure(component.getDataType()))
            return null;
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
                "[STGlobalDataApplier]", "[STPointerShapeApplier]",
                "[STTypeFamilyApplier]").stream()
                .noneMatch(description::contains))
            return false;
        String stored = storedLayoutHash(description);
        return stored != null && stored.equals(layoutHash(structure));
    }

    private boolean pointsToHashOwnedRecursiveStructure(DataType type) {
        type = untypedef(type);
        if (!(type instanceof Pointer pointer)) return false;
        DataType pointed = untypedef(pointer.getDataType());
        return pointed instanceof Structure structure &&
            text(structure.getDescription()).contains(
                "[STRecursivePointeeApplier]") &&
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

    private boolean validScalarRole(String kind, String mnemonic,
            int operand) {
        if (kind.equals("boolean_scalar_role"))
            return mnemonic.startsWith("BOOL_") ||
                Set.of("INT_EQUAL", "INT_NOTEQUAL", "INT_LESS",
                    "INT_LESSEQUAL", "INT_SLESS", "INT_SLESSEQUAL",
                    "INT_CARRY", "INT_SCARRY", "INT_SBORROW")
                    .contains(mnemonic);
        if (kind.equals("signed_scalar_role")) {
            if (mnemonic.equals("INT_SEXT")) return operand == 0;
            return Set.of("INT_SLESS", "INT_SLESSEQUAL", "INT_SDIV",
                "INT_SREM", "INT_SRIGHT").contains(mnemonic);
        }
        if (kind.equals("unsigned_scalar_role")) {
            if (mnemonic.equals("INT_ZEXT")) return operand == 0;
            return Set.of("INT_LESS", "INT_LESSEQUAL", "INT_DIV",
                "INT_REM", "INT_RIGHT").contains(mnemonic);
        }
        return false;
    }

    private String scalarSpecification(String kind, int size) {
        if (kind.equals("boolean_scalar_role"))
            return size == 1 ? "/bool" : "";
        if (kind.equals("signed_scalar_role"))
            return switch (size) {
                case 1 -> "/char";
                case 2 -> "/short";
                case 4 -> "/int";
                default -> "";
            };
        if (kind.equals("unsigned_scalar_role"))
            return switch (size) {
                case 1 -> "/byte";
                case 2 -> "/ushort";
                case 4 -> "/uint";
                default -> "";
            };
        return "";
    }

    private boolean scalarRoleEligible(DataType type) {
        DataType base = untypedef(type);
        return base != null && !(type instanceof TypeDef) &&
            !(base instanceof Enum) && !(base instanceof Pointer) &&
            (Undefined.isUndefined(base) ||
                base instanceof AbstractIntegerDataType);
    }

    private boolean nominalType(DataType type) {
        if (type instanceof TypeDef || type instanceof Enum) return true;
        return untypedef(type) instanceof Pointer && semanticType(type);
    }

    private SignatureParameters signatureParameters(Function function,
            int argumentCount) {
        if (function == null) return null;
        Parameter[] parameters = function.getParameters();
        if (parameters.length == argumentCount)
            return new SignatureParameters(function, parameters);
        return null;
    }

    private Function directTarget(Object op) throws Exception {
        int count = ((Number)op.getClass()
            .getMethod("getNumInputs").invoke(op)).intValue();
        if (count < 1) return null;
        Object destination = op.getClass()
            .getMethod("getInput", int.class).invoke(op, 0);
        Address address = callDestination(destination);
        if (address == null) return null;
        return currentProgram.getFunctionManager().getFunctionAt(address);
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

    private void verifyApplied() throws Exception {
        if (applied.isEmpty()) return;
        Map<String, List<Applied>> byFunction = new LinkedHashMap<>();
        for (Applied value : applied)
            byFunction.computeIfAbsent(
                unt(value.prepared.row.get("function_address")),
                ignored -> new ArrayList<>()).add(value);
        DecompInterface decompiler = new DecompInterface();
        decompiler.toggleCCode(false);
        decompiler.toggleSyntaxTree(true);
        if (!decompiler.openProgram(currentProgram))
            throw new IllegalStateException(
                "Decompiler could not reopen current program for verification");
        try {
            for (Map.Entry<String, List<Applied>> entry :
                    byFunction.entrySet()) {
                monitor.checkCancelled();
                Function function = function(entry.getKey());
                DecompileResults decompiled = function == null ? null :
                    decompiler.decompileFunction(function,
                        DECOMPILE_TIMEOUT, monitor);
                if (decompiled == null || !decompiled.decompileCompleted()) {
                    String detail = decompiled == null ? "function is missing" :
                        "fresh decompile failed: " +
                            text(decompiled.getErrorMessage());
                    for (Applied value : entry.getValue())
                        reject(value, detail);
                    continue;
                }
                Object highFunction = decompiled.getClass()
                    .getMethod("getHighFunction").invoke(decompiled);
                for (Applied value : entry.getValue()) {
                    Anchor anchor;
                    try {
                        anchor = locateAnchor(highFunction,
                            value.prepared.row);
                    }
                    catch (Exception exception) {
                        reject(value, "fresh anchor lookup failed: " +
                            message(exception));
                        continue;
                    }
                    Object high = anchor.varnode.getClass()
                        .getMethod("getHigh").invoke(anchor.varnode);
                    Object symbol = high == null ? null : high.getClass()
                        .getMethod("getSymbol").invoke(high);
                    Variable attached =
                        symbol == null ? null : functionVariable(symbol);
                    if (symbol == null ||
                            !sameVariable(attached, value.variable)) {
                        reject(value,
                            "database local did not attach to the fresh " +
                                "address-authoritative anchor lifetime");
                        continue;
                    }
                    DataType type = (DataType)symbol.getClass()
                        .getMethod("getDataType").invoke(symbol);
                    int groupCount = high == null ?
                        0 : mergeGroups(high).size();
                    if (!equivalentType(value.prepared.proposed, type) ||
                            groupCount != 1) {
                        reject(value, "fresh lifetime type/groups are " +
                            typeSpecification(type) + "/" + groupCount +
                            ", expected " +
                            typeSpecification(value.prepared.proposed) + "/1");
                        continue;
                    }
                    String name = (String)symbol.getClass()
                        .getMethod("getName").invoke(symbol);
                    replaceReport(value.prepared.row, "applied",
                        value.detail + "; fresh HighFunction attached as " + name);
                }
            }
        }
        finally {
            decompiler.dispose();
        }
        rollbackRejected();
    }

    private Variable functionVariable(Object highSymbol) throws Exception {
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

    private Object buildDynamicEntry(Object varnode) throws Exception {
        ClassLoader loader = varnode.getClass().getClassLoader();
        Class<?> entryClass = Class.forName(
            "ghidra.program.model.pcode.DynamicEntry", true, loader);
        for (java.lang.reflect.Method method : entryClass.getMethods())
            if (method.getName().equals("build") &&
                    method.getParameterCount() == 1)
                return method.invoke(null, varnode);
        throw new IllegalStateException("DynamicEntry.build API is unavailable");
    }

    private void reject(Applied value, String detail) {
        replaceReport(value.prepared.row, "conflict",
            value.detail + "; verification failed: " + detail);
        rejected.add(value);
    }

    private void rollbackRejected() {
        if (rejected.isEmpty()) return;
        int transaction = currentProgram.startTransaction(
            "Rollback unattached local lifetimes");
        boolean commit = false;
        try {
            for (Applied value : rejected) {
                Variable variable = value.variable;
                Function function = variable.getFunction();
                if (function == null || !variable.isValid()) continue;
                if (value.baseline == null) {
                    if (text(variable.getComment()).contains(MARKER))
                        function.removeVariable(variable);
                }
                else {
                    variable.setDataType(value.baseline.type,
                        value.baseline.source);
                    variable.setComment(value.baseline.comment);
                }
            }
            commit = true;
        }
        catch (Exception exception) {
            throw new IllegalStateException(
                "Could not rollback rejected local lifetime", exception);
        }
        finally {
            currentProgram.endTransaction(transaction, commit);
        }
        currentProgram.flushEvents();
    }

    private Set<Integer> mergeGroups(Object high) throws Exception {
        Set<Integer> result = new HashSet<>();
        Object[] instances = (Object[])high.getClass()
            .getMethod("getInstances").invoke(high);
        for (Object varnode : instances)
            result.add(((Number)varnode.getClass()
                .getMethod("getMergeGroup").invoke(varnode)).intValue());
        return result;
    }

    private void mark(Variable variable, Map<String, String> row) {
        String action = integer(row.get("merge_group_count")) > 1 ?
            "split merge group " : "typed local lifetime ";
        String marker = MARKER + " " + action + row.get("merge_group") + " at " +
            unt(row.get("anchor_address")) + "; type=" +
            unt(row.get("proposed_type"));
        String old = text(variable.getComment());
        if (!old.contains(marker))
            variable.setComment(old.isBlank() ? marker : old + "\n" + marker);
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

    private boolean sameVariable(Variable left, Variable right) {
        if (left == null || right == null) return false;
        Symbol leftSymbol = left.getSymbol();
        Symbol rightSymbol = right.getSymbol();
        if (leftSymbol != null && rightSymbol != null)
            return leftSymbol.getID() == rightSymbol.getID();
        return left.getFirstUseOffset() == right.getFirstUseOffset() &&
            left.getVariableStorage().equals(right.getVariableStorage());
    }

    private DataType resolveType(String specification) {
        if (specification.isBlank()) return null;
        if (specification.startsWith("pointer:")) {
            DataType pointed = resolveType(
                specification.substring("pointer:".length()));
            return pointed == null ? null :
                new PointerDataType(pointed,
                    currentProgram.getDefaultPointerSize(), dataTypes);
        }
        return dataTypes.getDataType(specification);
    }

    private String typeSpecification(DataType type) {
        if (type == null) return "";
        if (type instanceof TypeDef) return type.getPathName();
        type = untypedef(type);
        if (type instanceof Pointer pointer)
            return "pointer:" + typeSpecification(pointer.getDataType());
        return type.getPathName();
    }

    private DataType untypedef(DataType type) {
        while (type instanceof TypeDef typedef) type = typedef.getBaseDataType();
        return type;
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
            return pointed != null && !Undefined.isUndefined(pointed) &&
                !pointed.getPathName().equals("/void");
        }
        return true;
    }

    private boolean semanticPointer(DataType type) {
        return untypedef(type) instanceof Pointer && semanticType(type);
    }

    private boolean equivalentType(DataType left, DataType right) {
        if (left == null || right == null) return left == right;
        if (left.isEquivalent(right) ||
                typeSpecification(left).equals(typeSpecification(right)))
            return true;
        left = untypedef(left);
        right = untypedef(right);
        if (left == null || right == null) return left == right;
        if (left.isEquivalent(right) ||
                left.getPathName().equals(right.getPathName()))
            return true;
        if (left instanceof Pointer leftPointer &&
                right instanceof Pointer rightPointer)
            return equivalentType(leftPointer.getDataType(),
                rightPointer.getDataType());
        return false;
    }

    private boolean trustedReturn(Function function) {
        return function != null &&
            (function.getSignatureSource() != SourceType.DEFAULT ||
             library(function));
    }

    private boolean trustedParameter(Function function, Parameter parameter) {
        if (parameter.getSource() != SourceType.DEFAULT) return true;
        if (parameter.isAutoParameter() &&
                semanticType(parameter.getDataType())) return true;
        return library(function) && semanticType(parameter.getDataType());
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

    private Function function(String address) {
        try {
            Address value =
                currentProgram.getAddressFactory().getAddress(address);
            return value == null ? null :
                currentProgram.getFunctionManager().getFunctionAt(value);
        }
        catch (Exception ignored) {
            return null;
        }
    }

    private String mnemonic(Object op) throws Exception {
        return (String)op.getClass().getMethod("getMnemonic").invoke(op);
    }

    private File inputFile() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException(
                "Path to local_lifetime_proposals.tsv is required");
        return askFile("Select local_lifetime_proposals.tsv or its directory",
            "Apply local lifetimes");
    }

    private Tsv readTsv(Path path) throws Exception {
        List<String> lines =
            Files.readAllLines(path, StandardCharsets.UTF_8);
        if (lines.isEmpty())
            throw new IllegalArgumentException("Empty TSV: " + path);
        List<String> header =
            List.of(lines.get(0).split("\\t", -1));
        List<Map<String, String>> rows = new ArrayList<>();
        for (int line = 1; line < lines.size(); line++) {
            if (lines.get(line).isBlank()) continue;
            String[] values = lines.get(line).split("\\t", -1);
            if (values.length != header.size())
                throw new IllegalArgumentException(
                    "Invalid TSV row " + (line + 1));
            Map<String, String> row = new LinkedHashMap<>();
            for (int column = 0; column < header.size(); column++)
                row.put(header.get(column), values[column]);
            rows.add(row);
        }
        return new Tsv(header, rows);
    }

    private void requireColumns(Tsv input, String... columns) {
        for (String column : columns)
            if (!input.header.contains(column))
                throw new IllegalArgumentException(
                    "Missing TSV column: " + column);
    }

    private void writeReport(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path,
                StandardCharsets.UTF_8)) {
            out.write("function_address\toriginal_name\tmerge_group\t" +
                "anchor_address\tanchor_kind\tproposal_identity\tstatus\tdetail\n");
            for (ReportRow row : report)
                out.write(row.functionAddress + "\t" +
                    tsv(row.originalName) + "\t" + row.mergeGroup + "\t" +
                    row.anchorAddress + "\t" + row.anchorKind + "\t" +
                    row.proposalIdentity + "\t" + row.status + "\t" +
                    tsv(row.detail) + "\n");
        }
    }

    private ReportRow report(Map<String, String> row,
            String status, String detail) {
        return new ReportRow(unt(row.get("function_address")),
            unt(row.get("original_name")), integer(row.get("merge_group")),
            unt(row.get("anchor_address")), unt(row.get("anchor_kind")),
            proposalIdentity(row), status, detail);
    }

    private void replaceReport(Map<String, String> row,
            String status, String detail) {
        ReportRow replacement = report(row, status, detail);
        for (int index = report.size() - 1; index >= 0; index--) {
            ReportRow current = report.get(index);
            if (current.functionAddress.equals(replacement.functionAddress) &&
                    current.originalName.equals(replacement.originalName) &&
                    current.mergeGroup == replacement.mergeGroup &&
                    current.anchorAddress.equals(replacement.anchorAddress) &&
                    current.anchorKind.equals(replacement.anchorKind) &&
                    current.proposalIdentity.equals(
                        replacement.proposalIdentity)) {
                report.set(index, replacement);
                return;
            }
        }
        report.add(replacement);
    }

    private long count(String status) {
        return report.stream().filter(row -> row.status.equals(status)).count();
    }

    private void loadPreviousRejections(Path path) throws Exception {
        if (!Files.isRegularFile(path)) return;
        Tsv previous = readTsv(path);
        if (!previous.header.contains("status") ||
                !previous.header.contains("detail")) return;
        for (Map<String, String> row : previous.rows) {
            String status = unt(row.get("status"));
            String detail = unt(row.get("detail"));
            boolean freshFailure = "conflict".equals(status) &&
                detail.contains("verification failed");
            boolean retainedFailure = "preserved".equals(status) &&
                detail.contains("was rejected by fresh-decompile verification");
            if (!freshFailure && !retainedFailure) continue;
            String identity = unt(row.get("proposal_identity"));
            if (!identity.isBlank()) {
                previouslyRejected.add(identity);
                continue;
            }
            legacyRejected.put(legacyIdentity(row), detail);
        }
    }

    private boolean wasPreviouslyRejected(Map<String, String> row) {
        String identity = proposalIdentity(row);
        if (previouslyRejected.contains(identity)) return true;
        String detail = legacyRejected.get(legacyIdentity(row));
        if (detail == null) return false;
        String transition = typeText(row.get("expected_current_type")) +
            " -> " + typeText(row.get("proposed_type"));
        return detail.startsWith(transition + ";") ||
            detail.startsWith(transition + " ") || detail.equals(transition);
    }

    private static String legacyIdentity(Map<String, String> row) {
        return unt(row.get("function_address")) + "|" +
            unt(row.get("original_name")) + "|" +
            unt(row.get("merge_group")) + "|" +
            unt(row.get("anchor_address")) + "|" +
            unt(row.get("anchor_kind"));
    }

    private static String proposalIdentity(Map<String, String> row) {
        String raw = legacyIdentity(row) + "|" +
            unt(row.get("anchor_time")) + "|" +
            unt(row.get("anchor_operand")) + "|" +
            unt(row.get("expected_current_type")) + "|" +
            unt(row.get("proposed_type")) + "|" +
            unt(row.get("direct_target_address")) + "|" +
            unt(row.get("resolved_target_address")) + "|" +
            unt(row.get("anchor_source")) + "|" +
            unt(row.get("evidence_count")) + "|" +
            unt(row.get("confidence")) + "|" + unt(row.get("reason"));
        try {
            byte[] digest = MessageDigest.getInstance("SHA-256")
                .digest(raw.getBytes(StandardCharsets.UTF_8));
            StringBuilder result = new StringBuilder(digest.length * 2);
            for (byte value : digest)
                result.append(String.format(Locale.ROOT, "%02x", value & 0xff));
            return result.toString();
        }
        catch (Exception exception) {
            throw new IllegalStateException("SHA-256 is unavailable", exception);
        }
    }

    private static String typeText(String value) {
        String type = unt(value);
        if (type.startsWith("pointer:")) return type;
        return type.isBlank() || type.startsWith("/") ? type : "/" + type;
    }
    private static boolean enabled(String value) {
        return "1".equals(value) || "true".equalsIgnoreCase(value);
    }
    private static int integer(String value) {
        try { return Integer.parseInt(value); }
        catch (Exception exception) {
            throw new IllegalArgumentException("Invalid integer: " + value);
        }
    }
    private static String addr(Address address) {
        return address == null ? "" :
            address.toString().toUpperCase(Locale.ROOT);
    }
    private static String text(String value) {
        return value == null ? "" : value;
    }
    private static String message(Exception exception) {
        Throwable value = exception;
        while (value instanceof InvocationTargetException target &&
                target.getCause() != null)
            value = target.getCause();
        String message = value.getMessage();
        return message == null || message.isBlank() ?
            value.getClass().getSimpleName() : message;
    }
    private static String tsv(String value) {
        if (value == null) return "";
        return value.replace("\\", "\\\\").replace("\t", "\\t")
            .replace("\r", "\\r").replace("\n", "\\n");
    }
    private static String unt(String value) {
        if (value == null) return "";
        return value.replace("\\t", "\t").replace("\\r", "\r")
            .replace("\\n", "\n").replace("\\\\", "\\");
    }

    private record Tsv(List<String> header,
        List<Map<String, String>> rows) {}
    private record Anchor(Object op, Object varnode, String kind) {}
    private record TypedField(DataType type, String identity) {}
    private record SignatureParameters(Function function,
        Parameter[] parameters) {}
    private record Prepared(Map<String, String> row, Object highFunction,
        Object varnode, DataType proposed, int targetGroup,
        boolean representativeGroup) {}
    private record Baseline(Variable variable, DataType type,
        SourceType source, String comment) {}
    private record Applied(Prepared prepared, Variable variable,
        Baseline baseline, String detail) {}
    private record ReportRow(String functionAddress, String originalName,
        int mergeGroup, String anchorAddress, String anchorKind,
        String proposalIdentity, String status, String detail) {}
}
