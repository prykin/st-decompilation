// Apply address-local direct-call result views produced by STCallResultViewAnalyzer.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Apply Direct Call Result Views

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Set;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.FunctionDefinition;
import ghidra.program.model.data.FunctionDefinitionDataType;
import ghidra.program.model.data.ParameterDefinition;
import ghidra.program.model.data.ParameterDefinitionImpl;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.PointerDataType;
import ghidra.program.model.data.TypeDef;
import ghidra.program.model.listing.CommentType;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.pcode.DataTypeSymbol;
import ghidra.program.model.pcode.HighFunction;
import ghidra.program.model.pcode.HighFunctionDBUtil;
import ghidra.program.model.symbol.Namespace;
import ghidra.program.model.symbol.Symbol;

public class STCallResultViewApplier extends GhidraScript {
    private static final String MARKER = "[STCallResultViewApplier]";
    private static final int DECOMPILE_TIMEOUT = 600;
    private static final Pattern UNRESOLVED_REGISTER = Pattern.compile(
        "\\b(?:unaff|in|extraout)_[A-Za-z0-9_]+\\b");
    private static final Pattern UNDEFINED_DECLARATION = Pattern.compile(
        "(?m)^\\s*undefined(?:[1248])?\\s*\\*{0,8}\\s*[A-Za-z_][A-Za-z0-9_]*");
    private static final Pattern RAW_INDIRECT_CALL = Pattern.compile(
        "\\(\\s*\\*\\*?\\s*\\(\\s*code\\s*\\*\\*?\\s*\\)");
    private static final Pattern POINTER_TOWER = Pattern.compile(
        "\\bundefined(?:[1248])?\\s*\\*{3,}");
    private static final Pattern ANONYMOUS_TYPE = Pattern.compile(
        "\\b(?:AnonShape|AnonReceiver|AnonNested|AnonPointee)_[A-Za-z0-9_]+\\b");
    private static final Pattern CASTED_CALL_RESULT = Pattern.compile(
        "\\(\\s*[A-Za-z_$][A-Za-z0-9_$: ]*\\s*\\*+\\s*\\)\\s*" +
        "(?:[A-Za-z_$][A-Za-z0-9_$]*::)*[A-Za-z_$][A-Za-z0-9_$]*\\s*\\(",
        Pattern.MULTILINE);
    private final List<Report> report = new ArrayList<>();
    private DataTypeManager dataTypes;
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
            "call_address", "target_address", "target_name", "expected_override",
            "proposed_return_type", "confidence", "evidence");
        dataTypes = currentProgram.getDataTypeManager();
        Set<String> selectedFunctions = selectedFunctions();
        decompiler = new DecompInterface();
        decompiler.toggleCCode(true);
        decompiler.toggleSyntaxTree(true);
        if (!decompiler.openProgram(currentProgram))
            throw new IllegalStateException("Decompiler could not open the current program");
        try {
            Map<String, List<Map<String, String>>> guardedGroups = new LinkedHashMap<>();
            Set<String> handledCleanup = new HashSet<>();
            // Removing override symbols invalidates a Ghidra 12.1.2 SymbolManager cache
            // for the lifetime of this headless process.  Commit cleanup rows first and
            // defer every apply row; STRecoveryPipeline records a restart sentinel and
            // the outer runner resumes in a fresh process with the saved Program.
            for (Map<String, String> row : input.rows) {
                monitor.checkCancelled();
                if (!selectedFunctions.isEmpty() && !selectedFunctions.contains(
                        row.get("function_address"))) continue;
                if (enabled(row.get("apply")) && "cleanup".equals(row.get("action"))) {
                    applyOneTransaction(row);
                    handledCleanup.add(key(row));
                }
            }
            boolean restartRequired = count("removed") != 0;
            for (Map<String, String> row : input.rows) {
                monitor.checkCancelled();
                if (handledCleanup.contains(key(row))) continue;
                if (!selectedFunctions.isEmpty() &&
                        !selectedFunctions.contains(row.get("function_address"))) {
                    report.add(new Report(key(row), row.get("action"), "disabled",
                        "outside requested function selection"));
                    continue;
                }
                if (restartRequired) {
                    report.add(new Report(key(row), row.get("action"), "deferred",
                        "fresh headless process required after override-symbol cleanup"));
                    continue;
                }
                if (enabled(row.get("apply")) && "apply".equals(row.get("action")))
                    guardedGroups.computeIfAbsent(row.get("function_address"),
                        ignored -> new ArrayList<>()).add(row);
                else
                    applyOneTransaction(row);
            }
            for (List<Map<String, String>> rows : guardedGroups.values()) {
                monitor.checkCancelled();
                applyFunctionTransaction(rows);
            }
        }
        finally { decompiler.dispose(); }
        Path output = file.toPath().toAbsolutePath().getParent()
            .resolve("call_result_view_apply_report.tsv");
        writeReport(output);
        println("Direct-call result views: applied=" + count("applied") +
            ", removed=" + count("removed") + ", unchanged=" + count("unchanged") +
            ", preserved=" + count("preserved") + ", conflicts=" + count("conflict") +
            ", disabled=" + count("disabled"));
        println("Apply report: " + output);
    }

    /** Address-local safety boundary shared with the indirect-callsite applier. */
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
     * A use-site return override is presentation-oriented and must prove that it
     * actually improves the containing function.  Ghidra may merge the returned
     * value with an unrelated Listing local; in that case a seemingly precise
     * pointer result can create in_stack/extraout values, raw dispatches, or a
     * larger anonymous-type surface elsewhere in the same function.  Evaluate
     * all proposals for one containing function in one transaction and roll
     * them back unless one fresh post-apply decompile removes at least one
     * casted call result without worsening any address-local readability
     * invariant.  Grouping is important: large functions can contain dozens of
     * eligible calls and must not be decompiled twice for every callsite.
     */
    private void applyFunctionTransaction(List<Map<String, String>> rows) throws Exception {
        List<Map<String, String>> activeRows = new ArrayList<>();
        for (Map<String, String> row : rows) {
            if (presentationOnlyCurrent(row)) {
                report.add(new Report(key(row), "apply", "unchanged",
                    "exact result view is retained as presentation-only evidence"));
            }
            else activeRows.add(row);
        }
        if (activeRows.isEmpty()) return;
        rows = activeRows;
        Map<String, String> first = rows.get(0);
        boolean overrideMutation = false;
        for (Map<String, String> row : rows) {
            if (overrideWouldMutate(row)) {
                overrideMutation = true;
                break;
            }
        }
        // A converged proposal batch commonly contains only exact overrides
        // which are already present.  Re-decompiling the containing function
        // before and after every such pass used to dominate the fixed-point
        // runtime while proving nothing new.  Still execute apply() so stale
        // baselines and missing provenance markers are reported/repaired, but
        // reserve the expensive readability transaction for an actual override
        // change.
        if (!overrideMutation) {
            if (rows.stream().anyMatch(this::needsReadabilityValidation)) {
                validateExistingFunctionOverrides(rows);
                return;
            }
            int transaction = currentProgram.startTransaction(
                "Confirm direct-call result views in " + first.get("function_address"));
            boolean commit = false;
            try {
                for (Map<String, String> row : rows) apply(row);
                commit = true;
            }
            finally { currentProgram.endTransaction(transaction, commit); }
            return;
        }
        Function caller = currentProgram.getFunctionManager().getFunctionAt(
            address(first.get("function_address")));
        Readability before = readability(decompile(caller));
        if (before == null) {
            for (Map<String, String> row : rows)
                report.add(new Report(key(row), row.get("action"), "preserved",
                    "fresh pre-apply decompile unavailable; readability cannot be proven"));
            return;
        }

        int reportStart = report.size();
        List<Map<String, String>> presentationOnly = new ArrayList<>();
        int transaction = currentProgram.startTransaction(
            "Apply direct-call result views in " + first.get("function_address"));
        boolean commit = false;
        try {
            for (Map<String, String> row : rows) apply(row);
            commit = true;
        }
        finally {
            currentProgram.endTransaction(transaction, commit);
            currentProgram.flushEvents();
            decompiler.flushCache();
        }
        List<Integer> applied = new ArrayList<>();
        for (int index = reportStart; index < report.size(); index++)
            if ("applied".equals(report.get(index).status)) applied.add(index);
        boolean rejected = false;
        if (!applied.isEmpty()) {
            // Override symbols are not reliably visible to Ghidra's decompiler until
            // their transaction commits.  Validate the committed batch, then remove
            // only those exact script-owned symbols in a second transaction if the
            // containing function regresses.  This avoids DBObjectCache NPEs from
            // decompiling a half-published override namespace.
            Readability after = readability(decompile(caller));
            String regression = after == null ? "post-apply decompile unavailable" :
                before.regression(after);
            rejected = after == null || !regression.isBlank();
            if (rejected) {
                int cleanupTransaction = currentProgram.startTransaction(
                    "Reject direct-call result views in " +
                        first.get("function_address"));
                boolean cleanupCommit = false;
                try {
                    for (int index : applied) {
                        Report appliedReport = report.get(index);
                        for (Map<String, String> row : rows) {
                            if (!key(row).equals(appliedReport.target)) continue;
                            Address call = address(row.get("call_address"));
                            if (hasMarker(call)) {
                                deleteOverrides(caller, call);
                                removeMarker(call);
                            }
                            if ("none".equals(row.get("expected_override")))
                                presentationOnly.add(row);
                            break;
                        }
                    }
                    cleanupCommit = true;
                }
                finally {
                    currentProgram.endTransaction(cleanupTransaction, cleanupCommit);
                    currentProgram.flushEvents();
                    decompiler.flushCache();
                }
                String detail = "removed after containing-function result-view validation: " +
                    regression;
                for (int index : applied) {
                    Report old = report.get(index);
                    report.set(index, new Report(old.target, old.action, "preserved",
                        detail + "; exact evidence retained for source presentation"));
                }
            }
        }
        // A rejected High-level override can still carry exact machine proof
        // useful to the text/source projection.  Persist only that proof as an
        // EOL marker after the override transaction has rolled back.  This
        // avoids repeatedly retrying a view which Ghidra cannot attach without
        // merging unrelated SSA lifetimes, while the analyzer can still remove
        // the marker if the consumer chain stops re-proving it.
        if (rejected && !presentationOnly.isEmpty()) {
            int markerTransaction = currentProgram.startTransaction(
                "Record presentation-only direct-call result evidence in " +
                    first.get("function_address"));
            boolean markerCommit = false;
            try {
                for (Map<String, String> row : presentationOnly) {
                    Address call = address(row.get("call_address"));
                    Address entry = address(row.get("function_address"));
                    Function markerCaller = entry == null ? null :
                        currentProgram.getFunctionManager().getFunctionAt(entry);
                    Instruction instruction = call == null ? null :
                        currentProgram.getListing().getInstructionAt(call);
                    Function direct = directCalledFunction(instruction);
                    if (markerCaller == null || instruction == null ||
                            !markerCaller.getBody().contains(call) || direct == null ||
                            existingOverride(markerCaller, call) != null ||
                            !addr(direct.getEntryPoint()).equals(row.get("target_address")) ||
                            !direct.getName(true).equals(row.get("target_name"))) continue;
                    setPresentationMarker(call, row);
                }
                markerCommit = true;
            }
            finally { currentProgram.endTransaction(markerTransaction, markerCommit); }
        }
    }

    private boolean presentationOnlyCurrent(Map<String, String> row) {
        try {
            if (!"apply".equals(row.get("action")) ||
                    !"none".equals(row.get("expected_override"))) return false;
            Address entry = address(row.get("function_address"));
            Address callAddress = address(row.get("call_address"));
            Function caller = entry == null ? null :
                currentProgram.getFunctionManager().getFunctionAt(entry);
            Instruction call = callAddress == null ? null :
                currentProgram.getListing().getInstructionAt(callAddress);
            Function direct = directCalledFunction(call);
            if (caller == null || call == null || direct == null ||
                    !caller.getBody().contains(callAddress) ||
                    existingOverride(caller, callAddress) != null ||
                    !addr(direct.getEntryPoint()).equals(row.get("target_address")) ||
                    !direct.getName(true).equals(row.get("target_name"))) return false;
            String expected = MARKER + " presentation_only; exact direct-call result=" +
                row.get("proposed_return_type") + ";";
            return text(currentProgram.getListing().getComment(
                CommentType.EOL, callAddress)).contains(expected);
        }
        catch (Exception ignored) { return false; }
    }

    /**
     * Earlier versions skipped the guard once an exact override was already in
     * the database.  A later pipeline pass could therefore confirm a view which
     * had never been compared with its no-override rendering.  Validate the whole
     * containing-function batch once by temporarily removing only exact
     * script-owned views.  Keep them only when the same exporter-compatible
     * metric proves at least one casted-call reduction and no other local
     * readability regression.
     */
    private void validateExistingFunctionOverrides(List<Map<String, String>> rows)
            throws Exception {
        Map<String, String> first = rows.get(0);
        Function caller = currentProgram.getFunctionManager().getFunctionAt(
            address(first.get("function_address")));
        Readability withViews = readability(decompile(caller));
        if (withViews == null) {
            for (Map<String, String> row : rows)
                report.add(new Report(key(row), "apply", "preserved",
                    "fresh validation decompile unavailable"));
            return;
        }
        List<Map<String, String>> validationRows = rows.stream()
            .filter(this::exactScriptOwnedCurrentView).toList();
        if (validationRows.isEmpty()) {
            int transaction = currentProgram.startTransaction(
                "Confirm direct-call result views in " + first.get("function_address"));
            try { for (Map<String, String> row : rows) apply(row); }
            finally { currentProgram.endTransaction(transaction, true); }
            return;
        }

        // Ghidra does not reliably expose a deleted override to a decompile while the
        // deletion transaction is still open.  Commit the script-owned removal first,
        // obtain the real counterfactual body, then restore the exact views in a second
        // transaction only when they demonstrably improve that body.  A failed
        // counterfactual decompile restores the prior views conservatively.
        int removeTransaction = currentProgram.startTransaction(
            "Temporarily remove direct-call result views in " +
                first.get("function_address"));
        boolean removed = false;
        try {
            for (Map<String, String> row : validationRows) {
                Address call = address(row.get("call_address"));
                deleteOverrides(caller, call);
                removeMarker(call);
            }
            removed = true;
        }
        finally { currentProgram.endTransaction(removeTransaction, removed); }
        currentProgram.flushEvents();
        decompiler.flushCache();

        Readability withoutViews = readability(decompile(caller));
        String regression = withoutViews == null ?
            "no-override decompile unavailable" : withoutViews.regression(withViews);
        boolean useful = withoutViews != null && regression.isBlank();
        boolean restore = useful || withoutViews == null;
        if (restore) {
            int restoreTransaction = currentProgram.startTransaction(
                "Restore validated direct-call result views in " +
                    first.get("function_address"));
            boolean restored = false;
            try {
                for (Map<String, String> row : validationRows) {
                    Address call = address(row.get("call_address"));
                    Instruction instruction = currentProgram.getListing()
                        .getInstructionAt(call);
                    Function direct = directCalledFunction(instruction);
                    DataType returned = resolve(row.get("proposed_return_type"));
                    FunctionDefinitionDataType desired = desired(direct, call, returned);
                    HighFunctionDBUtil.writeOverride(caller, call, desired);
                    setValidatedMarker(call, row, fingerprint(desired));
                    report.add(new Report(key(row), "apply",
                        useful ? "unchanged" : "preserved",
                        (useful ?
                            "validated address-local result view improves containing function" :
                            "counterfactual decompile unavailable; prior view restored") +
                        "; without=" + withoutViews + "; with=" + withViews));
                }
                restored = true;
            }
            finally { currentProgram.endTransaction(restoreTransaction, restored); }
        }
        else {
            // The exact machine proof is still useful to the exporter even when
            // Ghidra's persistent override makes the containing High function
            // worse.  Keep a marker-only view after removing the override.  On
            // the fresh process the analyzer will rederive the same proposal,
            // and presentationOnlyCurrent() will make that state a true fixed
            // point instead of alternating apply -> cleanup forever.
            int markerTransaction = currentProgram.startTransaction(
                "Record rejected direct-call result views in " +
                    first.get("function_address"));
            boolean markerCommit = false;
            try {
                for (Map<String, String> row : validationRows) {
                    Address call = address(row.get("call_address"));
                    if (existingOverride(caller, call) == null)
                        setPresentationMarker(call, row);
                }
                markerCommit = true;
            }
            finally { currentProgram.endTransaction(markerTransaction, markerCommit); }
            for (Map<String, String> row : validationRows)
                report.add(new Report(key(row), "cleanup", "removed",
                    "persistent result view failed containing-function validation; " +
                    "exact evidence retained as presentation-only: " + regression +
                    "; without=" + withoutViews + "; with=" + withViews));
        }
        currentProgram.flushEvents();
        decompiler.flushCache();
    }

    private boolean needsReadabilityValidation(Map<String, String> row) {
        return exactScriptOwnedCurrentView(row) &&
            (row.get("evidence").contains("requires no-override revalidation") ||
                !text(currentProgram.getListing().getComment(CommentType.EOL,
                    address(row.get("call_address")))).contains(
                        MARKER + " readability_validated;"));
    }

    private boolean exactScriptOwnedCurrentView(Map<String, String> row) {
        try {
            Address entry = address(row.get("function_address"));
            Address call = address(row.get("call_address"));
            Function caller = entry == null ? null :
                currentProgram.getFunctionManager().getFunctionAt(entry);
            Instruction instruction = call == null ? null :
                currentProgram.getListing().getInstructionAt(call);
            if (caller == null || instruction == null || !hasMarker(call)) return false;
            Function direct = directCalledFunction(instruction);
            DataType returned = resolve(row.get("proposed_return_type"));
            if (direct == null || returned == null) return false;
            return fingerprint(existingOverride(caller, call)).equals(
                fingerprint(desired(direct, call, returned)));
        }
        catch (Exception ignored) { return false; }
    }

    private boolean overrideWouldMutate(Map<String, String> row) {
        try {
            Address entry = address(row.get("function_address"));
            Address callAddress = address(row.get("call_address"));
            Function caller = entry == null ? null :
                currentProgram.getFunctionManager().getFunctionAt(entry);
            Instruction call = callAddress == null ? null :
                currentProgram.getListing().getInstructionAt(callAddress);
            if (caller == null || call == null || !caller.getBody().contains(callAddress) ||
                    !"CALL".equalsIgnoreCase(call.getMnemonicString())) return false;
            Function direct = directCalledFunction(call);
            DataType returned = resolve(row.get("proposed_return_type"));
            if (direct == null || !(untypedef(returned) instanceof Pointer) ||
                    !addr(direct.getEntryPoint()).equals(row.get("target_address")) ||
                    !direct.getName(true).equals(row.get("target_name"))) return false;
            FunctionDefinition existing = existingOverride(caller, callAddress);
            String current = fingerprint(existing);
            FunctionDefinitionDataType wanted = desired(direct, callAddress, returned);
            if (fingerprint(wanted).equals(current)) return false;
            if (!current.equals(row.get("expected_override"))) return false;
            return existing == null || hasMarker(callAddress);
        }
        catch (Exception ignored) { return false; }
    }

    private void applyOneTransaction(Map<String, String> row) {
        int transaction = currentProgram.startTransaction(
            "Apply direct-call result view " + row.get("call_address"));
        boolean commit = false;
        try {
            apply(row);
            commit = true;
        }
        finally { currentProgram.endTransaction(transaction, commit); }
    }

    private String key(Map<String, String> row) {
        return row.get("function_address") + "@" + row.get("call_address");
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
            matches(POINTER_TOWER, code),
            matches(ANONYMOUS_TYPE, code),
            matches(CASTED_CALL_RESULT, code));
    }

    private int matches(Pattern pattern, String text) {
        int count = 0;
        Matcher matcher = pattern.matcher(text);
        while (matcher.find()) count++;
        return count;
    }

    private void apply(Map<String, String> row) {
        String key = row.get("function_address") + "@" + row.get("call_address");
        if (!enabled(row.get("apply"))) {
            report.add(new Report(key, row.get("action"), "disabled", "apply=0"));
            return;
        }
        try {
            Address entry = address(row.get("function_address"));
            Address callAddress = address(row.get("call_address"));
            Function caller = entry == null ? null :
                currentProgram.getFunctionManager().getFunctionAt(entry);
            Instruction call = callAddress == null ? null :
                currentProgram.getListing().getInstructionAt(callAddress);
            if (caller == null || call == null || !caller.getBody().contains(callAddress) ||
                    !"CALL".equalsIgnoreCase(call.getMnemonicString())) {
                conflict(key, row, "caller or direct CALL is missing");
                return;
            }
            FunctionDefinition existing = existingOverride(caller, callAddress);
            String current = fingerprint(existing);
            if (!current.equals(row.get("expected_override"))) {
                if (hasMarker(callAddress) && "apply".equals(row.get("action"))) {
                    Function direct = directCalledFunction(call);
                    DataType returned = resolve(row.get("proposed_return_type"));
                    FunctionDefinitionDataType desired = direct == null || returned == null ?
                        null : desired(direct, callAddress, returned);
                    if (desired != null && fingerprint(desired).equals(current)) {
                        report.add(new Report(key, "apply", "unchanged",
                            "exact script-owned result view already present"));
                        return;
                    }
                }
                preserve(key, row, "stale call override: expected " +
                    row.get("expected_override") + ", found " + current);
                return;
            }
            if ("cleanup".equals(row.get("action"))) {
                if (!hasMarker(callAddress)) {
                    preserve(key, row, "cleanup refused for a foreign override");
                    return;
                }
                int removedOverrides = deleteOverrides(caller, callAddress);
                removeMarker(callAddress);
                currentProgram.flushEvents();
                FunctionDefinition remaining = existingOverride(caller, callAddress);
                if (remaining != null || hasMarker(callAddress))
                    throw new IllegalStateException(
                        "call-result cleanup did not detach exact override/marker; " +
                        "deleted_symbols=" + removedOverrides + "; remaining=" +
                        fingerprint(remaining) + "; marker=" + hasMarker(callAddress));
                report.add(new Report(key, "cleanup", "removed",
                    "stale script-owned result view removed; override_symbols=" +
                    removedOverrides));
                return;
            }
            if (!"apply".equals(row.get("action"))) {
                conflict(key, row, "unknown action");
                return;
            }
            Function direct = directCalledFunction(call);
            if (direct == null || !addr(direct.getEntryPoint()).equals(row.get("target_address")) ||
                    !direct.getName(true).equals(row.get("target_name"))) {
                preserve(key, row, "direct target identity changed");
                return;
            }
            DataType returned = resolve(row.get("proposed_return_type"));
            if (!(untypedef(returned) instanceof Pointer)) {
                conflict(key, row, "proposed result is not a pointer");
                return;
            }
            FunctionDefinitionDataType desired = desired(direct, callAddress, returned);
            String wanted = fingerprint(desired);
            if (existing != null && wanted.equals(current)) {
                if (!hasMarker(callAddress)) setMarker(callAddress, row, wanted);
                report.add(new Report(key, "apply", "unchanged",
                    "exact direct-call result view already present"));
                return;
            }
            if (existing != null && !hasMarker(callAddress)) {
                preserve(key, row, "foreign non-equivalent call override preserved");
                return;
            }
            if (hasMarker(callAddress)) deleteOverrides(caller, callAddress);
            HighFunctionDBUtil.writeOverride(caller, callAddress, desired);
            setMarker(callAddress, row, wanted);
            report.add(new Report(key, "apply", "applied",
                "address-local return=" + row.get("proposed_return_type")));
        }
        catch (Exception exception) { conflict(key, row, message(exception)); }
    }

    private FunctionDefinitionDataType desired(Function called, Address call,
            DataType returned) throws Exception {
        FunctionDefinitionDataType desired = new FunctionDefinitionDataType(
            "result_view_" + addr(call), dataTypes);
        desired.setCallingConvention(called.getCallingConventionName());
        desired.setReturnType(returned);
        desired.setVarArgs(called.hasVarArgs());
        Parameter[] parameters = called.getParameters();
        ParameterDefinition[] arguments = new ParameterDefinition[parameters.length];
        for (int index = 0; index < parameters.length; index++)
            arguments[index] = new ParameterDefinitionImpl(parameters[index].getName(),
                parameters[index].getFormalDataType(),
                "exact direct-call parameter; only the address-local result view differs");
        desired.setArguments(arguments);
        return desired;
    }

    private Function directCalledFunction(Instruction instruction) {
        for (Address flow : instruction.getFlows()) {
            Function function = currentProgram.getFunctionManager().getFunctionAt(flow);
            if (function != null) return function;
        }
        return null;
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

    private int deleteOverrides(Function caller, Address call) {
        Namespace root = HighFunction.findOverrideSpace(caller);
        if (root == null) return 0;
        List<DataTypeSymbol> remove = new ArrayList<>();
        for (Symbol symbol : currentProgram.getSymbolTable().getSymbols(call)) {
            if (!root.equals(symbol.getParentNamespace())) continue;
            DataTypeSymbol value = HighFunctionDBUtil.readOverride(symbol);
            if (value != null) remove.add(value);
        }
        int removed = 0;
        for (DataTypeSymbol value : remove) {
            if (!value.getSymbol().delete()) continue;
            // Ghidra's override is a paired label + /auto_proto datatype.  A
            // bare Symbol.delete() leaves the hashed datatype behind and, in
            // 12.1.x, can leave the override namespace iterator observing a
            // deleted record.  This is the companion cleanup used by Ghidra's
            // own DataTypeSymbol lifecycle.
            value.cleanupUnusedOverride();
            removed++;
        }
        return removed;
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

    private DataType resolve(String specification) {
        if (specification == null || specification.isBlank()) return null;
        if (specification.startsWith("pointer:")) {
            DataType pointed = resolve(specification.substring("pointer:".length()));
            return pointed == null ? null : new PointerDataType(pointed,
                currentProgram.getDefaultPointerSize(), dataTypes);
        }
        return dataTypes.getDataType(specification);
    }

    private DataType untypedef(DataType type) {
        while (type instanceof TypeDef definition)
            type = definition.getBaseDataType();
        return type;
    }

    private void setMarker(Address address, Map<String, String> row, String signature) {
        String currentComment = text(currentProgram.getListing()
            .getComment(CommentType.EOL, address));
        List<String> lines = keptLines(currentProgram.getListing()
            .getComment(CommentType.EOL, address));
        String provenance = row.get("evidence").contains(
            "rederived after explicit script-owned override cleanup") ||
                currentComment.contains(MARKER + " rederived_after_cleanup;") ?
                " rederived_after_cleanup;" : "";
        lines.add(MARKER + provenance + " exact direct-call result=" +
            row.get("proposed_return_type") +
            "; signature=" + signature);
        currentProgram.getListing().setComment(address, CommentType.EOL,
            String.join("\n", lines));
    }
    private void setValidatedMarker(Address address, Map<String, String> row,
            String signature) {
        String currentComment = text(currentProgram.getListing()
            .getComment(CommentType.EOL, address));
        List<String> lines = keptLines(currentProgram.getListing()
            .getComment(CommentType.EOL, address));
        String provenance = row.get("evidence").contains(
            "rederived after explicit script-owned override cleanup") ||
                currentComment.contains(MARKER + " rederived_after_cleanup;") ?
                " rederived_after_cleanup;" : "";
        lines.add(MARKER + provenance + " readability_validated; exact direct-call result=" +
            row.get("proposed_return_type") + "; signature=" + signature);
        currentProgram.getListing().setComment(address, CommentType.EOL,
            String.join("\n", lines));
    }
    private void setPresentationMarker(Address address, Map<String, String> row) {
        List<String> lines = keptLines(currentProgram.getListing()
            .getComment(CommentType.EOL, address));
        lines.add(MARKER + " presentation_only; exact direct-call result=" +
            row.get("proposed_return_type") + "; source view only; no Ghidra override");
        currentProgram.getListing().setComment(address, CommentType.EOL,
            String.join("\n", lines));
    }
    private void removeMarker(Address address) {
        List<String> lines = keptLines(currentProgram.getListing()
            .getComment(CommentType.EOL, address));
        currentProgram.getListing().setComment(address, CommentType.EOL,
            lines.isEmpty() ? null : String.join("\n", lines));
    }
    private boolean hasMarker(Address address) {
        return text(currentProgram.getListing().getComment(CommentType.EOL, address))
            .contains(MARKER);
    }
    private List<String> keptLines(String comment) {
        List<String> lines = new ArrayList<>();
        if (comment != null) for (String line : comment.split("\\R"))
            if (!line.contains(MARKER) && !line.isBlank()) lines.add(line);
        return lines;
    }

    private String typeSpec(DataType type) {
        if (type instanceof Pointer pointer && pointer.getDataType() != null)
            return "pointer:" + typeSpec(pointer.getDataType());
        return type == null ? "" : type.getPathName();
    }
    private Address address(String text) {
        return text == null || text.isBlank() ? null :
            currentProgram.getAddressFactory().getAddress(text);
    }
    private String addr(Address address) {
        return address == null ? "" : address.toString().toUpperCase(Locale.ROOT);
    }
    private boolean enabled(String value) {
        return "1".equals(value) || "true".equalsIgnoreCase(value);
    }
    private String text(Object value) { return value == null ? "" : value.toString(); }
    private String clean(String value) {
        return text(value).replace('\t', ' ').replace('\r', ' ').replace('\n', ' ');
    }
    private String message(Exception exception) {
        String value = exception.getMessage();
        return value == null ? exception.getClass().getSimpleName() : value;
    }
    private void preserve(String key, Map<String, String> row, String detail) {
        report.add(new Report(key, row.get("action"), "preserved", detail));
    }
    private void conflict(String key, Map<String, String> row, String detail) {
        report.add(new Report(key, row.get("action"), "conflict", detail));
    }

    private File inputFile() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException("Path to call_result_view_proposals.tsv is required");
        return askFile("Select call_result_view_proposals.tsv", "Apply");
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
                throw new IllegalArgumentException("Invalid TSV row " + (line + 1));
            Map<String, String> row = new LinkedHashMap<>();
            for (int column = 0; column < header.length; column++)
                row.put(header[column], values[column]);
            rows.add(row);
        }
        return new Tsv(List.of(header), rows);
    }
    private void require(Tsv input, String... columns) {
        for (String column : columns) if (!input.header.contains(column))
            throw new IllegalArgumentException("Missing TSV column: " + column);
    }
    private void writeReport(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("target\taction\tstatus\tdetail\n");
            for (Report row : report) out.write(clean(row.target) + "\t" + row.action +
                "\t" + row.status + "\t" + clean(row.detail) + "\n");
        }
    }
    private long count(String status) {
        return report.stream().filter(row -> row.status.equals(status)).count();
    }
    private record Readability(int unresolvedRegisters, int undefinedDeclarations,
            int rawIndirectCalls, int pointerTowers, int anonymousTypes,
            int castedCallResults) {
        String regression(Readability after) {
            if (after == null) return "";
            List<String> reasons = new ArrayList<>();
            addIncrease(reasons, "unresolved_register_input", unresolvedRegisters,
                after.unresolvedRegisters);
            addIncrease(reasons, "generic_undefined_declaration", undefinedDeclarations,
                after.undefinedDeclarations);
            addIncrease(reasons, "raw_indirect_call", rawIndirectCalls,
                after.rawIndirectCalls);
            addIncrease(reasons, "excessive_pointer_depth", pointerTowers,
                after.pointerTowers);
            addIncrease(reasons, "anonymous_shape_type", anonymousTypes,
                after.anonymousTypes);
            addIncrease(reasons, "casted_call_result", castedCallResults,
                after.castedCallResults);
            if (after.castedCallResults >= castedCallResults)
                reasons.add("no casted-call improvement " + castedCallResults + "->" +
                    after.castedCallResults);
            return String.join(", ", reasons);
        }
        private static void addIncrease(List<String> reasons, String name,
                int before, int after) {
            if (after > before) reasons.add(name + " " + before + "->" + after);
        }
    }
    private record Tsv(List<String> header, List<Map<String, String>> rows) { }
    private record Report(String target, String action, String status, String detail) { }
}
