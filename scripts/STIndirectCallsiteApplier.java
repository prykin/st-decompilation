// Apply exact polymorphic indirect-call overrides produced by STIndirectCallsiteAnalyzer.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Apply Indirect Call Sites

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.HashSet;
import java.util.Set;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeComponent;
import ghidra.program.model.data.DataTypeConflictHandler;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.CategoryPath;
import ghidra.program.model.data.FunctionDefinition;
import ghidra.program.model.data.FunctionDefinitionDataType;
import ghidra.program.model.data.ParameterDefinition;
import ghidra.program.model.data.ParameterDefinitionImpl;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.PointerDataType;
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.VoidDataType;
import ghidra.program.model.listing.CommentType;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.pcode.DataTypeSymbol;
import ghidra.program.model.pcode.HighFunction;
import ghidra.program.model.pcode.HighFunctionDBUtil;
import ghidra.program.model.symbol.Namespace;
import ghidra.program.model.symbol.Symbol;

public class STIndirectCallsiteApplier extends GhidraScript {
    private static final String MARKER = "[STIndirectCallsiteApplier]";
    private static final int DECOMPILE_TIMEOUT = 600;
    private static final Pattern UNRESOLVED_REGISTER = Pattern.compile(
        "\\b(?:unaff|in|extraout)_[A-Za-z0-9_]+\\b");
    private static final Pattern UNDEFINED_DECLARATION = Pattern.compile(
        "(?m)^\\s*undefined(?:[1248])?\\s*\\*{0,8}\\s*[A-Za-z_][A-Za-z0-9_]*");
    private static final Pattern RAW_INDIRECT_CALL = Pattern.compile(
        "\\(\\s*\\*\\*?\\s*\\(\\s*code\\s*\\*\\*?\\s*\\)");
    private static final Pattern VOID_MEMBER_CALL = Pattern.compile(
        "\\(\\s*\\*\\s*[A-Za-z_][A-Za-z0-9_]*" +
        "(?:->(?:vtable|slot_[0-9A-Fa-f]+|vfunc_[0-9A-Fa-f]+))+" +
        "\\s*\\)\\s*\\(");
    private static final Pattern POINTER_TOWER = Pattern.compile(
        "\\bundefined(?:[1248])?\\s*\\*{3,}");
    private static final Pattern ANONYMOUS_TYPE = Pattern.compile(
        "\\b(?:AnonShape|AnonReceiver|AnonNested|AnonPointee)_[A-Za-z0-9_]+\\b");
    private static final CategoryPath FUNCTIONS =
        new CategoryPath("/SubmarineTitans/Recovered/IndirectCallFunctions");
    private final List<Report> report = new ArrayList<>();
    private DataTypeManager dataTypes;
    private int pointerSize;
    private DecompInterface decompiler;

    @Override
    protected void run() throws Exception {
        end(true);
        if (currentProgram == null) {
            printerr("Open the analyzed ST program first.");
            return;
        }
        File file = inputFile();
        if (file == null) return;
        Tsv input = read(file.toPath());
        require(input, "apply", "action", "function_address", "function_name",
            "call_address", "slot_offset", "expected_override",
            "proposed_calling_convention", "receiver_type", "stack_parameter_count",
            "proposed_parameter_types", "proposed_return_type",
            "signature_function_address", "signature_function", "confidence", "evidence");
        dataTypes = currentProgram.getDataTypeManager();
        pointerSize = currentProgram.getDefaultPointerSize();
        boolean presentationOnly = java.util.Arrays.stream(getScriptArgs())
            .skip(1).anyMatch("presentation-only"::equalsIgnoreCase);
        Set<String> selectedFunctions = selectedFunctions();
        decompiler = new DecompInterface();
        decompiler.toggleCCode(true);
        decompiler.toggleSyntaxTree(true);
        if (!decompiler.openProgram(currentProgram))
            throw new IllegalStateException("Decompiler could not open the current program");
        try {
            Map<String, List<Map<String, String>>> guarded = new LinkedHashMap<>();
            for (Map<String, String> row : input.rows) {
                monitor.checkCancelled();
                if (!selectedFunctions.isEmpty() &&
                        !selectedFunctions.contains(row.get("function_address"))) {
                    report.add(new Report(target(row), row.get("action"), "disabled",
                        "outside requested function selection"));
                    continue;
                }
                if (presentationOnly && !"present".equals(row.get("action"))) {
                    report.add(new Report(target(row), row.get("action"), "disabled",
                        "presentation-only run"));
                    continue;
                }
                if (enabled(row.get("apply")) && "apply".equals(row.get("action")) &&
                        !row.get("call_address").isBlank())
                    guarded.computeIfAbsent(row.get("function_address"),
                        ignored -> new ArrayList<>()).add(row);
                else
                    applyOneTransaction(row);
            }
            for (List<Map<String, String>> rows : guarded.values()) {
                monitor.checkCancelled();
                applyFunctionTransaction(rows);
            }
        }
        finally { decompiler.dispose(); }
        Path output = file.toPath().toAbsolutePath().getParent()
            .resolve("indirect_callsite_apply_report.tsv");
        writeReport(output);
        println("Indirect call sites: applied=" + count("applied") +
            ", presented=" + count("presented") +
            ", removed=" + count("removed") + ", unchanged=" + count("unchanged") +
            ", preserved=" + count("preserved") + ", conflicts=" + count("conflict") +
            ", disabled=" + count("disabled"));
        println("Apply report: " + output);
    }

    /**
     * Optional reusable safety boundary for address-local repair.  Every argument after
     * the proposal path of the form function=AAAAAAAA selects one containing function.
     * The ordinary pre/post readability transaction still guards all selected rows as a
     * single function batch; this option never changes proposal evidence or apply flags.
     */
    private Set<String> selectedFunctions() {
        Set<String> result = new HashSet<>();
        String[] arguments = getScriptArgs();
        for (int index = 1; index < arguments.length; index++) {
            String value = text(arguments[index]).trim();
            if (!value.regionMatches(true, 0, "function=", 0, 9)) continue;
            String address = value.substring(9).trim().toUpperCase(Locale.ROOT);
            if (!address.matches("[0-9A-F]{8}"))
                throw new IllegalArgumentException(
                    "Invalid function selection: " + value);
            result.add(address);
        }
        return result;
    }

    /**
     * A use-site override is accepted only when a fresh decompile proves that the complete
     * containing function became more readable.  Exact machine ABI is necessary but not
     * sufficient: an ownerless void-this override can otherwise replace an already readable
     * physical member call with code** arithmetic, or manufacture unresolved High variables.
     * Batch all sites in one function so a dense family costs two decompiles rather than two
     * per call, and roll the complete batch back on any address-local regression.
     */
    private void applyFunctionTransaction(List<Map<String, String>> rows) throws Exception {
        boolean mutating = false;
        for (Map<String, String> row : rows)
            if (requiresUseSiteMutation(row)) { mutating = true; break; }
        if (!mutating) {
            int transaction = currentProgram.startTransaction(
                "Confirm indirect call-site ABIs in " +
                    rows.get(0).get("function_address"));
            boolean commit = false;
            try {
                for (Map<String, String> row : rows) apply(row);
                commit = true;
            }
            finally { currentProgram.endTransaction(transaction, commit); }
            return;
        }
        Function function = currentProgram.getFunctionManager().getFunctionAt(
            address(rows.get(0).get("function_address")));
        Readability before = readability(decompile(function));
        if (before == null) {
            for (Map<String, String> row : rows)
                report.add(new Report(target(row), row.get("action"), "preserved",
                    "fresh pre-apply decompile unavailable; readability cannot be proven"));
            return;
        }
        int reportStart = report.size();
        List<Map<String, String>> presentationRows = new ArrayList<>();
        List<Integer> presentationReportIndices = new ArrayList<>();
        int transaction = currentProgram.startTransaction(
            "Apply indirect call-site ABIs in " + rows.get(0).get("function_address"));
        boolean commit = false;
        try {
            for (Map<String, String> row : rows) apply(row);
            commit = true;
            List<Integer> applied = new ArrayList<>();
            for (int index = reportStart; index < report.size(); index++)
                if ("applied".equals(report.get(index).status)) applied.add(index);
            if (!applied.isEmpty()) {
                decompiler.flushCache();
                Readability after = readability(decompile(function));
                String regression = before.regression(after);
                boolean presentationFallback =
                    "no measured readability improvement".equals(regression) &&
                    applied.stream().allMatch(index ->
                        "none".equals(rows.get(index - reportStart).get(
                            "expected_override")));
                if (presentationFallback) {
                    commit = false;
                    for (int index : applied) {
                        presentationRows.add(rows.get(index - reportStart));
                        presentationReportIndices.add(index);
                        Report old = report.get(index);
                        report.set(index, new Report(old.target, old.action,
                            "presented", "Ghidra retained raw syntax; use-site override " +
                                "rolled back and exact address-stable structural " +
                                "presentation retained"));
                    }
                }
                else if (after == null || !regression.isBlank()) {
                    commit = false;
                    String detail = "rolled back with containing-function indirect-call batch" +
                        (regression.isBlank() ? ": post-apply decompile unavailable" :
                            ": " + regression);
                    for (int index : applied) {
                        Report old = report.get(index);
                        report.set(index, new Report(old.target, old.action,
                            "preserved", detail));
                    }
                }
            }
        }
        finally {
            currentProgram.endTransaction(transaction, commit);
            decompiler.flushCache();
        }
        if (!presentationRows.isEmpty()) {
            int presentationTransaction = currentProgram.startTransaction(
                "Record structural indirect-call presentation in " +
                    rows.get(0).get("function_address"));
            boolean presentationCommit = false;
            try {
                for (int ordinal = 0; ordinal < presentationRows.size(); ordinal++) {
                    Map<String, String> row = presentationRows.get(ordinal);
                    Address call = address(row.get("call_address"));
                    if (call == null || existingOverride(function, call) != null) {
                        int index = presentationReportIndices.get(ordinal);
                        Report old = report.get(index);
                        report.set(index, new Report(old.target, old.action,
                            "conflict", "rolled-back override left a non-empty callsite"));
                        continue;
                    }
                    setPresentationMarker(call, row);
                }
                presentationCommit = true;
            }
            finally {
                currentProgram.endTransaction(presentationTransaction,
                    presentationCommit);
            }
        }
    }

    private boolean requiresUseSiteMutation(Map<String, String> row) {
        try {
            Address entry = address(row.get("function_address"));
            Address call = address(row.get("call_address"));
            Function function = entry == null ? null :
                currentProgram.getFunctionManager().getFunctionAt(entry);
            if (function == null || call == null || !function.getBody().contains(call))
                return false;
            FunctionDefinition existing = existingOverride(function, call);
            FunctionDefinitionDataType wanted = desired(row);
            return existing == null || !fingerprint(existing).equals(fingerprint(wanted));
        }
        catch (Exception exception) {
            // Let the ordinary guarded path produce the exact conflict report.
            return true;
        }
    }

    private void applyOneTransaction(Map<String, String> row) {
        int transaction = currentProgram.startTransaction(
            "Apply indirect call-site ABI " + target(row));
        boolean commit = false;
        try { apply(row); commit = true; }
        finally { currentProgram.endTransaction(transaction, commit); }
    }

    private String target(Map<String, String> row) {
        return row.get("action").startsWith("vtable_slot_") ?
            row.get("function_address") + "@" + row.get("slot_offset") :
            row.get("function_address") + "@" + row.get("call_address");
    }

    private String decompile(Function function) {
        if (function == null) return null;
        DecompileResults result = decompiler.decompileFunction(function,
            DECOMPILE_TIMEOUT, monitor);
        return result != null && result.decompileCompleted() &&
            result.getDecompiledFunction() != null ?
                result.getDecompiledFunction().getC() : null;
    }

    private Readability readability(String code) {
        return code == null ? null : new Readability(
            matches(UNRESOLVED_REGISTER, code),
            matches(UNDEFINED_DECLARATION, code),
            matches(RAW_INDIRECT_CALL, code),
            matches(VOID_MEMBER_CALL, code),
            matches(POINTER_TOWER, code),
            matches(ANONYMOUS_TYPE, code));
    }

    private int matches(Pattern pattern, String text) {
        int count = 0;
        Matcher matcher = pattern.matcher(text);
        while (matcher.find()) count++;
        return count;
    }

    private void apply(Map<String, String> row) {
        String action = row.get("action");
        String target = target(row);
        if (!enabled(row.get("apply"))) {
            report.add(new Report(target, action, "disabled", "apply=0"));
            return;
        }
        try {
            if (action.startsWith("vtable_slot_")) {
                applyVtableSlot(target, row);
                return;
            }
            Address entry = address(row.get("function_address"));
            Address call = address(row.get("call_address"));
            Function function = entry == null ? null :
                currentProgram.getFunctionManager().getFunctionAt(entry);
            if (function == null || call == null || !function.getBody().contains(call)) {
                conflict(target, row, "caller or call instruction is missing");
                return;
            }
            FunctionDefinition existing = existingOverride(function, call);
            String current = existing == null ? "none" : fingerprint(existing);
            boolean marker = hasMarker(call);
            FunctionDefinitionDataType desired = "apply".equals(action) ?
                desired(row) : null;
            String wanted = desired == null ? "" : fingerprint(desired);
            if (!current.equals(row.get("expected_override"))) {
                // A fixed-point pass may legitimately reuse the proposal which
                // installed this exact script-owned override earlier in the same
                // run.  Treat that settled state as unchanged; a non-equivalent
                // or foreign override remains protected by the stale-baseline
                // check below.
                if (marker && desired != null && wanted.equals(current)) {
                    report.add(new Report(target, "apply", "unchanged",
                        "exact script-owned call-site ABI already present"));
                    return;
                }
                preserve(target, row, "stale call override: expected " +
                    row.get("expected_override") + ", found " + current);
                return;
            }
            if ("cleanup".equals(action)) {
                if (!marker) {
                    preserve(target, row, "cleanup refused for a foreign override");
                    return;
                }
                deleteOverrides(function, call);
                removeMarker(call);
                report.add(new Report(target, "cleanup", "removed",
                    "stale script-owned call-site override removed"));
                return;
            }
            if ("present".equals(action)) {
                Instruction instruction = currentProgram.getListing().getInstructionAt(call);
                if (instruction == null || !instruction.getFlowType().isComputed()) {
                    conflict(target, row, "structural presentation requires an indirect CALL");
                    return;
                }
                if (existing != null) {
                    preserve(target, row,
                        "structural presentation never layers over a call override");
                    return;
                }
                if (marker && !hasMarkerMode(call, "structural-presentation")) {
                    preserve(target, row,
                        "another script-owned callsite mode is already present");
                    return;
                }
                if (hasMarkerMode(call, "structural-presentation")) {
                    report.add(new Report(target, action, "unchanged",
                        "exact structural dispatch presentation already present"));
                    return;
                }
                setPresentationMarker(call, row);
                report.add(new Report(target, action, "presented",
                    "address-local machine receiver/slot/arity presentation recorded"));
                return;
            }
            if (!"apply".equals(action)) {
                conflict(target, row, "unknown action " + action);
                return;
            }
            if (existing != null && wanted.equals(current)) {
                report.add(new Report(target, "apply", "unchanged",
                    "exact call-site ABI already present"));
                return;
            }
            if (existing != null && !marker) {
                preserve(target, row, "foreign non-equivalent call override preserved");
                return;
            }
            // HighFunctionDBUtil.writeOverride creates an override symbol; it does
            // not replace a non-equivalent symbol already at the same instruction.
            // Leaving the old script-owned symbol behind makes subsequent reads
            // ambiguous and causes an endless apply loop.  Foreign overrides were
            // rejected above, so only our marked override set may be replaced here.
            if (marker) deleteOverrides(function, call);
            HighFunctionDBUtil.writeOverride(function, call, desired);
            setMarker(call, row, wanted);
            report.add(new Report(target, "apply", "applied",
                "exact " + row.get("proposed_calling_convention") +
                    " call-site ABI; receiver=" + row.get("receiver_type") +
                    ", stack_parameters=" + row.get("stack_parameter_count") +
                    ", return=" + row.get("proposed_return_type")));
        }
        catch (Exception exception) { conflict(target, row, message(exception)); }
    }

    private void applyVtableSlot(String target, Map<String, String> row) throws Exception {
        String action = row.get("action");
        boolean variadic = "vtable_slot_variadic".equals(action);
        if (!variadic && !"vtable_slot_fixed".equals(action)) {
            conflict(target, row, "unknown physical-slot action " + action);
            return;
        }
        DataType found = dataTypes.getDataType(row.get("function_address"));
        if (!(found instanceof Structure structure)) {
            conflict(target, row, "physical vtable structure is missing");
            return;
        }
        int offset = Integer.parseInt(row.get("slot_offset"));
        DataTypeComponent component = structure.getComponentAt(offset);
        if (component == null || component.getOffset() != offset ||
                component.getLength() != pointerSize) {
            conflict(target, row, "physical slot geometry changed");
            return;
        }
        String current = typeSpec(component.getDataType());
        if (!current.equals(row.get("expected_override"))) {
            preserve(target, row, "stale physical slot: expected " +
                row.get("expected_override") + ", found " + current);
            return;
        }
        if (!(component.getDataType() instanceof Pointer pointer)) {
            preserve(target, row, "physical slot is not a pointer");
            return;
        }
        FunctionDefinition prior = pointer.getDataType() instanceof FunctionDefinition value ?
            value : null;
        boolean unresolved = pointer.getDataType() instanceof VoidDataType;
        boolean generatedCallable = prior != null &&
            text(prior.getComment()).contains(MARKER) &&
            text(component.getComment()).contains(MARKER);
        if (!unresolved && !generatedCallable) {
            preserve(target, row,
                "only an unresolved void* or this applier's generated slot may change");
            return;
        }
        int count = Integer.parseInt(row.get("stack_parameter_count"));
        String[] specifications = count == 0 && row.get("proposed_parameter_types").isBlank() ?
            new String[0] : row.get("proposed_parameter_types").split(";", -1);
        if (count < 0 || count > 64 || specifications.length != count)
            throw new IllegalArgumentException("physical slot parameter count mismatch");
        DataType receiver = resolve(row.get("receiver_type"));
        DataType returned = resolve(row.get("proposed_return_type"));
        if (!(receiver instanceof Pointer) || returned == null)
            throw new IllegalArgumentException("physical slot ABI types are missing");
        String leaf = structure.getName().replaceAll("[^A-Za-z0-9_]", "_");
        String name = String.format("dense_%s_%02X", leaf, offset);
        FunctionDefinitionDataType desired = new FunctionDefinitionDataType(
            FUNCTIONS, name, dataTypes);
        desired.setCallingConvention("__thiscall");
        desired.setReturnType(returned);
        desired.setVarArgs(variadic);
        ParameterDefinition[] arguments = new ParameterDefinition[count + 1];
        arguments[0] = new ParameterDefinitionImpl("this", receiver,
            "exact unadjusted receiver shared by the physical slot family");
        for (int index = 0; index < count; index++) {
            DataType type = resolve(specifications[index]);
            if (type == null) throw new IllegalArgumentException(
                "missing physical slot parameter " + specifications[index]);
            arguments[index + 1] = new ParameterDefinitionImpl("arg_" + (index + 1),
                type, "neutral machine-width stack argument");
        }
        desired.setArguments(arguments);
        desired.setComment(MARKER + " receiver-aware " +
            (variadic ? "variadic" : "fixed-arity") + " physical slot; " +
            row.get("evidence"));
        if (prior != null && !safeGeneratedCallableRepair(
                prior, desired, variadic)) {
            preserve(target, row,
                "existing generated callable may only retain its ABI while " +
                "repairing the neutral machine-word/EDX:EAX return transport");
            return;
        }
        DataType existing = dataTypes.getDataType(FUNCTIONS, name);
        FunctionDefinition definition;
        if (existing == null) {
            DataType resolved = dataTypes.resolve(desired, DataTypeConflictHandler.KEEP_HANDLER);
            if (!(resolved instanceof FunctionDefinition generated))
                throw new IllegalArgumentException("generated slot type resolution failed");
            definition = generated;
        }
        else if (existing instanceof FunctionDefinition generated &&
                text(generated.getComment()).contains(MARKER)) {
            if (!generated.isEquivalentSignature(desired) ||
                    generated.hasVarArgs() != variadic) generated.replaceWith(desired);
            definition = generated;
        }
        else {
            preserve(target, row, "generated function type name is occupied");
            return;
        }
        PointerDataType callable = new PointerDataType(definition, pointerSize, dataTypes);
        String field = component.getFieldName();
        String comment = MARKER + " physical " +
            (variadic ? "variadic" : "fixed-arity") + " callable slot; " +
            row.get("evidence");
        structure.replaceAtOffset(offset, callable, pointerSize, field, comment);
        report.add(new Report(target, action, "applied",
            "physical slot now has a receiver-aware callable ABI"));
    }

    private boolean safeGeneratedCallableRepair(FunctionDefinition prior,
            FunctionDefinition desired, boolean variadic) {
        if (!"__thiscall".equals(prior.getCallingConventionName())) return false;
        boolean returnRepair = prior.hasVarArgs() == variadic && Set.of(
            "/undefined4->/ulonglong",
            "/undefined8->/ulonglong",
            "/ulonglong->/undefined4"
        ).contains(typeSpec(prior.getReturnType()) + "->" +
            typeSpec(desired.getReturnType()));
        ParameterDefinition[] before = prior.getArguments();
        ParameterDefinition[] after = desired.getArguments();
        if (returnRepair) {
            if (before.length != after.length) return false;
            for (int index = 0; index < before.length; index++)
                if (!typeSpec(before[index].getDataType()).equals(
                        typeSpec(after[index].getDataType()))) return false;
            return true;
        }
        // A generated receiver-only variadic fallback may become one fixed
        // neutral word only after the analyzer closes every inflated PUSH group
        // against the following direct call's exact stack cleanup.
        return prior.hasVarArgs() && !variadic &&
            typeSpec(prior.getReturnType()).equals(
                typeSpec(desired.getReturnType())) &&
            before.length == 1 && after.length == 2 &&
            typeSpec(before[0].getDataType()).equals(
                typeSpec(after[0].getDataType())) &&
            "/undefined4".equals(typeSpec(after[1].getDataType()));
    }

    private FunctionDefinitionDataType desired(Map<String, String> row) throws Exception {
        String convention = row.get("proposed_calling_convention");
        int count = Integer.parseInt(row.get("stack_parameter_count"));
        DataType returned = resolve(row.get("proposed_return_type"));
        if (returned == null || count < 0 || count > 64)
            throw new IllegalArgumentException("invalid call-site signature");
        String[] specifications = count == 0 && row.get("proposed_parameter_types").isBlank() ?
            new String[0] : row.get("proposed_parameter_types").split(";", -1);
        if (specifications.length != count)
            throw new IllegalArgumentException("stack parameter count mismatch");
        boolean thiscall = "__thiscall".equals(convention);
        boolean stdcall = "__stdcall".equals(convention);
        boolean cdecl = "__cdecl".equals(convention);
        if (!thiscall && !stdcall && !cdecl)
            throw new IllegalArgumentException("unsupported convention " + convention);
        FunctionDefinitionDataType desired = new FunctionDefinitionDataType(
            "callsite_" + row.get("call_address"), dataTypes);
        desired.setCallingConvention(convention);
        desired.setReturnType(returned);
        ParameterDefinition[] arguments = new ParameterDefinition[count + (thiscall ? 1 : 0)];
        int base = 0;
        if (thiscall) {
            DataType receiver = resolve(row.get("receiver_type"));
            if (!(receiver instanceof Pointer))
                throw new IllegalArgumentException("thiscall receiver is not a pointer");
            arguments[0] = new ParameterDefinitionImpl("this", receiver,
                "exact unadjusted receiver at this indirect call site");
            base = 1;
        }
        for (int index = 0; index < count; index++) {
            DataType type = resolve(specifications[index]);
            if (type == null)
                throw new IllegalArgumentException("missing type " + specifications[index]);
            arguments[index + base] = new ParameterDefinitionImpl("arg_" + (index + 1),
                type, "machine-width stack argument");
        }
        desired.setArguments(arguments);
        return desired;
    }

    private FunctionDefinition existingOverride(Function function, Address call) {
        Namespace root = HighFunction.findOverrideSpace(function);
        if (root == null) return null;
        Symbol[] symbols = currentProgram.getSymbolTable().getSymbols(call);
        FunctionDefinition agreed = null;
        for (Symbol symbol : symbols) {
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

    private void deleteOverrides(Function function, Address call) {
        Namespace root = HighFunction.findOverrideSpace(function);
        if (root == null) return;
        List<DataTypeSymbol> remove = new ArrayList<>();
        Symbol[] symbols = currentProgram.getSymbolTable().getSymbols(call);
        for (Symbol symbol : symbols) {
            if (!root.equals(symbol.getParentNamespace())) continue;
            DataTypeSymbol value = HighFunctionDBUtil.readOverride(symbol);
            if (value != null) remove.add(value);
        }
        for (DataTypeSymbol value : remove) {
            if (value.getSymbol().delete()) value.cleanupUnusedOverride();
        }
    }

    private void setMarker(Address address, Map<String, String> row, String signature) {
        String old = currentProgram.getListing().getComment(CommentType.EOL, address);
        List<String> lines = keptLines(old);
        boolean machine = row.get("signature_function_address").isBlank() &&
            row.get("evidence").contains("machine callable");
        String mode = machine ?
            ("/void".equals(row.get("proposed_return_type")) ?
                "machine-void" : Set.of("/float", "/double")
                    .contains(row.get("proposed_return_type")) ?
                    "machine-float" : "machine-word") : "dispatch";
        lines.add(MARKER + " exact slot 0x" +
            Integer.toHexString(Integer.parseInt(row.get("slot_offset")))
                .toUpperCase(Locale.ROOT) + "; mode=" + mode +
                "; signature=" + signature);
        currentProgram.getListing().setComment(address, CommentType.EOL,
            String.join("\n", lines));
    }

    private void setPresentationMarker(Address address, Map<String, String> row) {
        String old = currentProgram.getListing().getComment(CommentType.EOL, address);
        List<String> lines = keptLines(old);
        String signature = row.get("proposed_calling_convention") + ";" +
            row.get("proposed_return_type") + ";" + row.get("receiver_type") +
            (row.get("proposed_parameter_types").isBlank() ? "" :
                ";" + row.get("proposed_parameter_types"));
        lines.add(MARKER + " exact slot 0x" +
            Integer.toHexString(Integer.parseInt(row.get("slot_offset")))
                .toUpperCase(Locale.ROOT) +
            "; mode=structural-presentation; signature=" + signature);
        currentProgram.getListing().setComment(address, CommentType.EOL,
            String.join("\n", lines));
    }

    private boolean hasMarkerMode(Address address, String mode) {
        String comment = text(currentProgram.getListing().getComment(CommentType.EOL, address));
        return comment.contains(MARKER) && comment.contains("mode=" + mode + ";");
    }

    private void removeMarker(Address address) {
        String old = currentProgram.getListing().getComment(CommentType.EOL, address);
        List<String> kept = keptLines(old);
        currentProgram.getListing().setComment(address, CommentType.EOL,
            kept.isEmpty() ? null : String.join("\n", kept));
    }

    private List<String> keptLines(String comment) {
        List<String> result = new ArrayList<>();
        if (comment != null)
            for (String line : comment.split("\\R"))
                if (!line.contains(MARKER) && !line.isBlank()) result.add(line);
        return result;
    }

    private boolean hasMarker(Address address) {
        return text(currentProgram.getListing().getComment(CommentType.EOL, address))
            .contains(MARKER);
    }

    private String fingerprint(FunctionDefinition definition) {
        List<String> parts = new ArrayList<>();
        parts.add(text(definition.getCallingConventionName()));
        parts.add(typeSpec(definition.getReturnType()));
        for (ParameterDefinition argument : definition.getArguments())
            parts.add(typeSpec(argument.getDataType()));
        return String.join(";", parts);
    }

    private DataType resolve(String specification) {
        if (specification == null || specification.isBlank()) return null;
        if (specification.startsWith("pointer:")) {
            DataType pointed = resolve(specification.substring("pointer:".length()));
            return pointed == null ? null :
                new PointerDataType(pointed, pointerSize, dataTypes);
        }
        return dataTypes.getDataType(specification);
    }
    private String typeSpec(DataType type) {
        if (type instanceof Pointer pointer && pointer.getDataType() != null)
            return "pointer:" + typeSpec(pointer.getDataType());
        return type == null ? "" : type.getPathName();
    }

    private void writeReport(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("target\taction\tstatus\tdetail\n");
            for (Report row : report)
                out.write(clean(row.target) + "\t" + row.action + "\t" + row.status +
                    "\t" + clean(row.detail) + "\n");
        }
    }
    private long count(String status) {
        return report.stream().filter(row -> row.status.equals(status)).count();
    }
    private void preserve(String target, Map<String, String> row, String detail) {
        report.add(new Report(target, row.get("action"), "preserved", detail));
    }
    private void conflict(String target, Map<String, String> row, String detail) {
        report.add(new Report(target, row.get("action"), "conflict", detail));
    }

    private File inputFile() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless()) throw new IllegalArgumentException("Proposal TSV required");
        return askFile("Select indirect_callsite_proposals.tsv", "Open");
    }
    private Tsv read(Path path) throws Exception {
        List<String> lines = Files.readAllLines(path, StandardCharsets.UTF_8);
        if (lines.isEmpty()) throw new IllegalArgumentException("Empty TSV: " + path);
        String[] header = lines.get(0).split("\\t", -1);
        List<Map<String, String>> rows = new ArrayList<>();
        for (int line = 1; line < lines.size(); line++) {
            if (lines.get(line).isBlank()) continue;
            String[] values = lines.get(line).split("\\t", -1);
            if (values.length != header.length)
                throw new IllegalArgumentException("Malformed TSV row " + (line + 1));
            Map<String, String> row = new LinkedHashMap<>();
            for (int column = 0; column < header.length; column++)
                row.put(header[column], values[column]);
            rows.add(row);
        }
        return new Tsv(List.of(header), rows);
    }
    private void require(Tsv tsv, String... columns) {
        for (String column : columns)
            if (!tsv.header.contains(column))
                throw new IllegalArgumentException("Missing TSV column: " + column);
    }
    private Address address(String value) {
        try { return currentProgram.getAddressFactory().getAddress(value); }
        catch (Exception ignored) { return null; }
    }
    private boolean enabled(String value) {
        return "1".equals(value) || "true".equalsIgnoreCase(value);
    }
    private static String text(String value) { return value == null ? "" : value; }
    private static String clean(String value) {
        return text(value).replace('\t', ' ').replace('\r', ' ').replace('\n', ' ');
    }
    private static String message(Throwable throwable) {
        return throwable.getMessage() == null ?
            throwable.getClass().getSimpleName() : throwable.getMessage();
    }

    private record Tsv(List<String> header, List<Map<String, String>> rows) { }
    private record Report(String target, String action, String status, String detail) { }
    private record Readability(int unresolvedRegisters, int undefinedDeclarations,
        int rawIndirectCalls, int voidMemberCalls, int pointerTowers,
        int anonymousTypes) {
        boolean rawImproved(Readability after) {
            return after != null && after.rawIndirectCalls < rawIndirectCalls;
        }

        String nonRawRegression(Readability after) {
            if (after == null) return "post-apply decompile unavailable";
            List<String> problems = new ArrayList<>();
            if (after.unresolvedRegisters > unresolvedRegisters)
                problems.add("unresolved registers " + unresolvedRegisters + "->" +
                    after.unresolvedRegisters);
            if (after.undefinedDeclarations > undefinedDeclarations)
                problems.add("undefined declarations " + undefinedDeclarations + "->" +
                    after.undefinedDeclarations);
            if (after.pointerTowers > pointerTowers)
                problems.add("pointer towers " + pointerTowers + "->" + after.pointerTowers);
            if (after.anonymousTypes > anonymousTypes)
                problems.add("anonymous types " + anonymousTypes + "->" +
                    after.anonymousTypes);
            return String.join("; ", problems);
        }

        String regression(Readability after) {
            if (after == null) return "post-apply decompile unavailable";
            String worsened = nonRawRegression(after);
            if (!worsened.isBlank()) return worsened;
            if (after.rawIndirectCalls > rawIndirectCalls)
                return "raw indirect calls " + rawIndirectCalls + "->" +
                    after.rawIndirectCalls;
            if (after.voidMemberCalls > voidMemberCalls)
                return "void member calls " + voidMemberCalls + "->" +
                    after.voidMemberCalls;
            boolean improved = after.rawIndirectCalls < rawIndirectCalls ||
                after.voidMemberCalls < voidMemberCalls ||
                after.unresolvedRegisters < unresolvedRegisters ||
                after.undefinedDeclarations < undefinedDeclarations ||
                after.pointerTowers < pointerTowers ||
                after.anonymousTypes < anonymousTypes;
            return improved ? "" : "no measured readability improvement";
        }
    }
}
