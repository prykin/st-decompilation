// Apply reviewed hidden_this_proposals.tsv without assigning speculative class owners/names.
// Creates neutral recovered receiver/vtable skeletons and preserves manual signatures/types.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Apply Hidden This

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.security.MessageDigest;
import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Set;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

import ghidra.app.script.GhidraScript;
import ghidra.app.plugin.core.analysis.AutoAnalysisManager;
import ghidra.app.util.parser.FunctionSignatureParser;
import ghidra.framework.model.TransactionInfo;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.CategoryPath;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeConflictHandler;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.PointerDataType;
import ghidra.program.model.data.FunctionDefinitionDataType;
import ghidra.program.model.data.ParameterDefinition;
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.StructureDataType;
import ghidra.program.model.data.Undefined;
import ghidra.program.model.data.VoidDataType;
import ghidra.program.model.listing.AutoParameterType;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Function.FunctionUpdateType;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.FunctionTag;
import ghidra.program.model.listing.GhidraClass;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.listing.ParameterImpl;
import ghidra.program.model.listing.ReturnParameterImpl;
import ghidra.program.model.listing.Variable;
import ghidra.program.model.symbol.Namespace;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.SymbolTable;
import ghidra.util.SystemUtilities;

public class STHiddenThisApplier extends GhidraScript {
    private static final String TAG = "RECOVERED_HIDDEN_THIS";
    private static final String RECEIVER_ROLE_TAG = "RECOVERED_RECEIVER_ABI";
    private static final String MARKER = "[STHiddenThisApplier generated]";
    private static final String RECEIVER_DESCRIPTION = MARKER +
        " Structural receiver shared only by proven same-ECX flows; no semantic " +
        "class owner is claimed.";
    private static final String VTABLE_DESCRIPTION = MARKER +
        " Neutral recovered vtable skeleton; slot signatures remain unresolved.";
    private static final CategoryPath CATEGORY =
        new CategoryPath("/SubmarineTitans/Recovered/HiddenThis");
    private static final Pattern GENERATED_LAYOUT_HASH = Pattern.compile(
        "(?:^|;)\\s*generated_layout_sha256=([0-9a-f]{64})(?:;|$)");

    private final List<ReportRow> report = new ArrayList<>();
    private DataTypeManager dataTypes;
    private DataType voidPtr;
    private String receiverTypeFailure = "";

    @Override
    protected void run() throws Exception {
        // Each proposal owns an independent top-level transaction.
        end(true);
        if (currentProgram == null) {
            printerr("Open the analyzed ST program first.");
            return;
        }
        File file = inputFile();
        if (file == null) return;
        Tsv tsv = readTsv(file.toPath());
        requireColumns(tsv, "convention_apply", "receiver_type_apply", "address",
            "expected_name", "expected_name_source", "expected_signature",
            "expected_signature_source", "expected_calling_convention",
            "proposed_calling_convention", "receiver_type_name", "receiver_type_path",
            "observed_size", "vtable_slots", "confidence", "reason");
        dataTypes = currentProgram.getDataTypeManager();
        voidPtr = new PointerDataType(VoidDataType.dataType, dataTypes);

        // Version 1 changed the convention before attempting the forbidden direct
        // AutoParameterImpl mutation.  Ghidra kept that partial change, and its
        // DYNAMIC_STORAGE_ALL_PARAMS compatibility heuristic could also consume the
        // original first stack argument.  Never apply those proposals: use their saved
        // exact baseline solely to restore the pre-run signature, then require a fresh
        // version-2 analysis.
        if (!tsv.header.contains("analysis_version")) {
            Path marker = file.toPath().toAbsolutePath().normalize().resolveSibling(
                "hidden_this_legacy_repair_complete.txt");
            Files.deleteIfExists(marker);
            repairLegacyPartialApply(tsv);
            Path output = file.toPath().toAbsolutePath().normalize().resolveSibling(
                "hidden_this_apply_report.tsv");
            writeReport(output);
            if (count("conflict") == 0 && count("preserved") == 0) {
                Files.write(marker, List.of("program=" + currentProgram.getName(),
                    "status=complete", "repaired=" + count("repaired"),
                    "unchanged=" + count("unchanged")), StandardCharsets.UTF_8);
            }
            println("Legacy hidden-this repair: repaired=" + count("repaired") +
                ", unchanged=" + count("unchanged") + ", preserved=" +
                count("preserved") + ", generated types cleaned=" + count("cleaned") +
                ", conflicts=" + count("conflict") +
                ". Rerun STHiddenThisAnalyzer before applying again.");
            println("Repair report: " + output);
            return;
        }
        requireColumns(tsv, "analysis_version", "group_members", "receiver_type_cleanup",
            "receiver_role_apply", "receiver_role_cleanup");
        for (Map<String, String> row : tsv.rows) {
            if (!"3".equals(row.get("analysis_version")))
                throw new IllegalArgumentException("Unsupported hidden-this analysis version " +
                    row.get("analysis_version") + " at " + row.get("address"));
        }

        migrateReceiverNames(tsv);

        for (Map<String, String> row : tsv.rows) {
            monitor.checkCancelled();
            int reportIndex = report.size();
            long modificationBefore = currentProgram.getModificationNumber();
            int transaction = currentProgram.startTransaction(
                "Apply recovered hidden this " + row.get("address"));
            boolean commit = false;
            try {
                applyRow(row);
                ReportRow result = report.get(reportIndex);
                commit = !"conflict".equals(result.status) &&
                    !"partial".equals(result.status);
            }
            finally {
                currentProgram.endTransaction(transaction, commit);
            }
            // Disabled, preserved, and already-equal rows cannot have queued analysis. Avoid
            // asking Ghidra to drain its global queue hundreds of times for no-op proposals.
            ReportRow settledResult = report.get(reportIndex);
            boolean roleTagOnly = settledResult.detail.startsWith("receiver_role=") &&
                !settledResult.detail.contains(";");
            if (currentProgram.getModificationNumber() != modificationBefore && !roleTagOnly)
                settleBackgroundAnalysis(row.get("address"));
            if (!commit && report.size() > reportIndex) {
                ReportRow result = report.get(reportIndex);
                report.set(reportIndex, new ReportRow(result.address, "conflict",
                    "rolled back atomically: " + result.detail));
            }
        }

        Path output = file.toPath().toAbsolutePath().normalize().resolveSibling(
            "hidden_this_apply_report.tsv");
        writeReport(output);
        println("Hidden this: applied=" + count("applied") + ", partial=" +
            count("partial") + ", unchanged=" + count("unchanged") +
            ", reverted=" + count("reverted") +
            ", preserved=" + count("preserved") + ", conflicts=" + count("conflict") +
            ", disabled=" + count("disabled"));
        println("Apply report: " + output);
    }

    /**
     * `AnonReceiver_ADDRESS` was the original generated identity.  Once the same
     * exact ECX-backed layout is shared by a proven receiver family it is no
     * longer anonymous recovery debt, even though its original semantic class
     * name is still unknown.  Rename the script-owned datatype objects in place
     * so every field/signature reference, including refined vtable slots, keeps
     * the same identity.  Never clone or rebuild an existing layout here.
     */
    private void migrateReceiverNames(Tsv tsv) throws Exception {
        Set<String> names = new LinkedHashSet<>();
        for (Map<String, String> row : tsv.rows) {
            String name = unt(row.get("receiver_type_name"));
            if (name.startsWith("RecoveredReceiver_")) names.add(name);
        }
        if (names.isEmpty()) return;
        long modificationBefore = currentProgram.getModificationNumber();
        int transaction = currentProgram.startTransaction(
            "Migrate recovered receiver identities");
        boolean commit = false;
        try {
            for (String replacement : names) {
                String suffix = replacement.substring("RecoveredReceiver_".length());
                String legacy = "AnonReceiver_" + suffix;
                renameGeneratedType(legacy + "VTable", replacement + "VTable");
                renameGeneratedType(legacy, replacement);
                migrateGeneratedReceiverNamespace(legacy, replacement);
            }
            commit = true;
        }
        finally { currentProgram.endTransaction(transaction, commit); }
        if (commit && currentProgram.getModificationNumber() != modificationBefore)
            settleBackgroundAnalysis("receiver identity migration");
    }

    /**
     * Datatypes and class namespaces are separate objects in Ghidra.  Renaming only
     * the generated Structure leaves MethodOwner-owned functions under the retired
     * AnonReceiver namespace; their auto-this then points at the detached legacy
     * type and every otherwise typed physical slot decompiles as a raw call.  Move
     * only functions carrying an exact recovery-script marker and an analysis-owned
     * signature.  This is an identity migration, not a new owner inference.
     */
    private void migrateGeneratedReceiverNamespace(String legacy, String replacement)
            throws Exception {
        SymbolTable table = currentProgram.getSymbolTable();
        Namespace parent = currentProgram.getGlobalNamespace();
        for (String part : new String[] { "SubmarineTitans", "Recovered", "HiddenThis" }) {
            parent = table.getNamespace(part, parent);
            if (parent == null) return;
        }
        Namespace oldNamespace = table.getNamespace(legacy, parent);
        if (!(oldNamespace instanceof GhidraClass)) return;
        GhidraClass newClass = ensureReceiverClass(replacement);
        if (newClass == null)
            throw new IllegalStateException("receiver namespace migration collision: " +
                replacement);

        List<Function> functions = new ArrayList<>();
        FunctionIterator iterator = currentProgram.getFunctionManager().getFunctions(true);
        while (iterator.hasNext()) {
            Function function = iterator.next();
            if (function.getParentNamespace().equals(oldNamespace)) functions.add(function);
        }
        for (Function function : functions) {
            Function thunkTarget = function.isThunk() ?
                function.getThunkedFunction(false) : null;
            boolean generatedThunk = thunkTarget != null &&
                ((thunkTarget.getParentNamespace().equals(oldNamespace) &&
                    generatedReceiverOwnerComment(thunkTarget, legacy)) ||
                 thunkTarget.getParentNamespace().equals(newClass));
            if (protectedSource(function.getSignatureSource()) ||
                    !"__thiscall".equals(function.getCallingConventionName()) ||
                    (!generatedReceiverOwnerComment(function, legacy) &&
                        !generatedThunk)) {
                report.add(new ReportRow(addr(function.getEntryPoint()), "preserved",
                    "legacy receiver namespace has non-generated function state"));
                continue;
            }
            function.setParentNamespace(newClass);
            normalizeThiscall(function);
            String comment = function.getComment();
            if (comment != null)
                function.setComment(comment.replace(legacy, replacement));
            report.add(new ReportRow(addr(function.getEntryPoint()), "migrated",
                "moved generated receiver namespace " + legacy + " -> " + replacement));
        }
    }

    private boolean generatedReceiverOwnerComment(Function function, String legacy) {
        String comment = function.getComment();
        if (comment == null || !comment.contains(legacy)) return false;
        return comment.contains("[STHiddenThisApplier]") ||
            comment.contains("[STMethodOwnerApplier]");
    }

    private void renameGeneratedType(String oldName, String newName) throws Exception {
        DataType oldType = dataTypes.getDataType(CATEGORY, oldName);
        if (oldType == null) return;
        DataType newType = dataTypes.getDataType(CATEGORY, newName);
        if (!generated(oldType))
            throw new IllegalStateException("legacy receiver type is not script-owned: " +
                oldType.getPathName());
        if (newType != null) {
            if (!generated(newType) || !newType.isEquivalent(oldType))
                throw new IllegalStateException("receiver migration collision: " +
                    oldType.getPathName() + " -> " + newType.getPathName());
            dataTypes.replaceDataType(oldType, newType, false);
            if (!dataTypes.remove(oldType))
                throw new IllegalStateException("failed to retire " + oldType.getPathName());
            report.add(new ReportRow("TYPE:" + oldName, "replaced",
                "migrated generated identity to " + newType.getPathName()));
            return;
        }
        oldType.setName(newName);
        report.add(new ReportRow("TYPE:" + oldName, "renamed",
            "migrated generated identity to " + oldType.getPathName()));
    }

    /**
     * Namespace/signature changes can wake Ghidra auto-analysis before the row transaction has
     * fully drained.  Waiting here preserves the intended one-row transaction boundary instead
     * of allowing the analyzer entry to bridge several proposal rows.
     */
    private void settleBackgroundAnalysis(String address) throws Exception {
        AutoAnalysisManager analysis =
            AutoAnalysisManager.getAnalysisManager(currentProgram);
        // isAnalyzing() may become false just before the worker transaction closes, so the
        // wait is intentionally unconditional and followed by a bounded transaction drain.
        drainAnalysis(analysis);
        for (int attempt = 0; attempt < 500; attempt++) {
            monitor.checkCancelled();
            TransactionInfo transaction = currentProgram.getCurrentTransactionInfo();
            if (transaction == null || completedTransactionSnapshot(transaction) ||
                    !onlyAutoAnalysisOpen(transaction)) break;
            if (analysis.isAnalyzing()) drainAnalysis(analysis);
            else Thread.sleep(10);
        }
        TransactionInfo transaction = currentProgram.getCurrentTransactionInfo();
        if (transaction != null && !completedTransactionSnapshot(transaction))
            throw new IllegalStateException("Program transaction did not drain after hidden-this " +
                address + ": status=" + transaction.getStatus() +
                ", open_subtransactions=" + transaction.getOpenSubTransactions());
    }

    private void drainAnalysis(AutoAnalysisManager analysis) {
        // Ghidra 12.1.2 waitForAnalysis() persists analyzer timing options after the queue has
        // drained. Headless scripts are outside a Program transaction here, so that diagnostic
        // write throws NoTransactionException. The synchronous path drains the same queue
        // without attempting the OptionsDB write.
        if (SystemUtilities.isInHeadlessMode()) analysis.startAnalysis(monitor, false);
        else analysis.waitForAnalysis(null, monitor);
    }

    private boolean completedTransactionSnapshot(TransactionInfo transaction) {
        return transaction != null &&
            transaction.getStatus() == TransactionInfo.Status.COMMITTED &&
            transaction.getOpenSubTransactions().isEmpty();
    }

    private boolean onlyAutoAnalysisOpen(TransactionInfo transaction) {
        List<String> open = transaction.getOpenSubTransactions();
        return !open.isEmpty() && open.stream().allMatch("Auto Analysis"::equals);
    }

    private void repairLegacyPartialApply(Tsv tsv) throws Exception {
        for (Map<String, String> row : tsv.rows) {
            monitor.checkCancelled();
            boolean enabled = enabled(row.get("convention_apply")) ||
                enabled(row.get("receiver_type_apply"));
            Address address = address(row.get("address"));
            if (!enabled) {
                report.add(new ReportRow(addr(address), "disabled",
                    "legacy proposal was not enabled"));
                continue;
            }
            int transaction = currentProgram.startTransaction(
                "Repair legacy hidden-this partial apply " + addr(address));
            boolean commit = false;
            try {
                Function function = currentProgram.getFunctionManager().getFunctionAt(address);
                if (function == null) {
                    report.add(new ReportRow(addr(address), "conflict",
                        "no function at address"));
                    commit = true;
                    continue;
                }
                String expectedName = unt(row.get("expected_name"));
                String expectedSignature = unt(row.get("expected_signature"));
                String expectedConvention = row.get("expected_calling_convention");
                String currentSignature = function.getSignature().getPrototypeString(true);
                if (function.getName(true).equals(expectedName) &&
                        currentSignature.equals(expectedSignature) &&
                        function.getCallingConventionName().equals(expectedConvention)) {
                    report.add(new ReportRow(addr(address), "unchanged",
                        "legacy proposal had not modified this function"));
                    commit = true;
                    continue;
                }
                boolean recognizablePartial = function.getName(true).equals(expectedName) &&
                    "__thiscall".equals(function.getCallingConventionName()) &&
                    !"__thiscall".equals(expectedConvention) &&
                    !protectedSource(function.getSignatureSource());
                if (!recognizablePartial) {
                    report.add(new ReportRow(addr(address), "preserved",
                        "state is not the exact legacy partial-apply shape: " +
                        currentSignature));
                    commit = true;
                    continue;
                }
                restoreSignature(function, expectedSignature, expectedConvention,
                    source(row.get("expected_signature_source")));
                String restored = function.getSignature().getPrototypeString(true);
                if (!restored.equals(expectedSignature))
                    throw new IllegalStateException("restored signature differs: " + restored);
                report.add(new ReportRow(addr(address), "repaired",
                    "restored pre-v1 signature; fresh analysis required"));
                commit = true;
            }
            catch (Exception exception) {
                report.add(new ReportRow(addr(address), "conflict", message(exception)));
            }
            finally {
                currentProgram.endTransaction(transaction, commit);
            }
        }
        if (count("conflict") == 0 && count("preserved") == 0)
            cleanupLegacyTypes(tsv);
    }

    private void cleanupLegacyTypes(Tsv tsv) throws Exception {
        Set<String> typeNames = new LinkedHashSet<>();
        for (Map<String, String> row : tsv.rows) {
            if (enabled(row.get("convention_apply")) || enabled(row.get("receiver_type_apply")))
                typeNames.add(unt(row.get("receiver_type_name")));
        }
        int transaction = currentProgram.startTransaction(
            "Remove legacy hidden-this generated types");
        boolean commit = false;
        List<String> cleaned = new ArrayList<>();
        try {
            for (String typeName : typeNames) {
                DataType receiver = dataTypes.getDataType(CATEGORY, typeName);
                DataType vtable = dataTypes.getDataType(CATEGORY, typeName + "VTable");
                if (receiver != null && !legacyGeneratedReceiver(receiver)) {
                    report.add(new ReportRow("TYPE:" + typeName, "preserved",
                        "legacy receiver has manual or unexpected content"));
                    return;
                }
                if (vtable != null && !legacyGeneratedVtable(vtable)) {
                    report.add(new ReportRow("TYPE:" + typeName + "VTable", "preserved",
                        "legacy vtable has manual or unexpected content"));
                    return;
                }
            }
            for (String typeName : typeNames) {
                DataType receiver = dataTypes.getDataType(CATEGORY, typeName);
                DataType vtable = dataTypes.getDataType(CATEGORY, typeName + "VTable");
                if (receiver != null && !dataTypes.remove(receiver))
                    throw new IllegalStateException("failed to remove " + receiver.getPathName());
                if (vtable != null && !dataTypes.remove(vtable))
                    throw new IllegalStateException("failed to remove " + vtable.getPathName());
                if (receiver != null || vtable != null)
                    cleaned.add(typeName);
            }
            commit = true;
        }
        catch (Exception exception) {
            report.add(new ReportRow("TYPE:legacy", "conflict", message(exception)));
        }
        finally {
            currentProgram.endTransaction(transaction, commit);
        }
        if (commit) {
            for (String typeName : cleaned)
                report.add(new ReportRow("TYPE:" + typeName, "cleaned",
                    "removed exact version-1 generated receiver/vtable"));
        }
    }

    private boolean legacyGeneratedReceiver(DataType type) {
        if (!(type instanceof Structure) ||
                !RECEIVER_DESCRIPTION.equals(type.getDescription())) return false;
        Structure structure = (Structure)type;
        ghidra.program.model.data.DataTypeComponent[] defined =
            structure.getDefinedComponents();
        if (defined.length != 1) return false;
        ghidra.program.model.data.DataTypeComponent first = defined[0];
        return first.getOffset() == 0 && "vtable".equals(first.getFieldName()) &&
            first.getDataType() instanceof Pointer;
    }

    private boolean legacyGeneratedVtable(DataType type) {
        if (!(type instanceof Structure) ||
                !VTABLE_DESCRIPTION.equals(type.getDescription())) return false;
        for (ghidra.program.model.data.DataTypeComponent component :
                ((Structure)type).getDefinedComponents()) {
            if (!(component.getDataType() instanceof Pointer) ||
                    component.getFieldName() == null ||
                    !component.getFieldName().startsWith("slot_")) return false;
        }
        return true;
    }

    private void restoreSignature(Function function, String prototype, String convention,
            SourceType source) throws Exception {
        FunctionSignatureParser parser = new FunctionSignatureParser(dataTypes, null);
        // FunctionSignatureParser parses a C prototype but does not accept Ghidra's
        // calling-convention token in the return-type position emitted by
        // getPrototypeString(true).  The convention is restored separately below.
        String parseablePrototype = prototype.replaceFirst(
            "\\s+" + java.util.regex.Pattern.quote(convention) + "\\s+", " ");
        FunctionDefinitionDataType parsed = parser.parse(function.getSignature(),
            parseablePrototype);
        List<Variable> parameters = new ArrayList<>();
        int ordinal = 1;
        for (ParameterDefinition parameter : parsed.getArguments()) {
            String name = parameter.getName();
            if (name == null || name.isBlank()) name = "param_" + ordinal;
            parameters.add(new ParameterImpl(name, parameter.getDataType(), currentProgram,
                source));
            ordinal++;
        }
        function.updateFunction(convention,
            new ReturnParameterImpl(parsed.getReturnType(), currentProgram), parameters,
            FunctionUpdateType.DYNAMIC_STORAGE_FORMAL_PARAMS, true, source);
        function.setVarArgs(parsed.hasVarArgs());
        function.setNoReturn(parsed.hasNoReturn());
        function.setSignatureSource(source);
    }

    private SourceType source(String value) {
        try { return SourceType.valueOf(value); }
        catch (Exception ignored) { return SourceType.ANALYSIS; }
    }

    private void applyRow(Map<String, String> row) {
        boolean conventionApply = enabled(row.get("convention_apply"));
        boolean typeApply = enabled(row.get("receiver_type_apply"));
        boolean typeCleanup = enabled(row.get("receiver_type_cleanup"));
        boolean roleApply = enabled(row.get("receiver_role_apply"));
        boolean roleCleanup = enabled(row.get("receiver_role_cleanup"));
        Address address = address(row.get("address"));
        if (!conventionApply && !typeApply && !typeCleanup && !roleApply && !roleCleanup) {
            report.add(new ReportRow(addr(address), "disabled", "all apply flags are 0"));
            return;
        }
        Function function = currentProgram.getFunctionManager().getFunctionAt(address);
        if (function == null) {
            report.add(new ReportRow(addr(address), "conflict", "no function at address"));
            return;
        }
        try {
            if (typeCleanup) {
                cleanupStructuralReceiver(function, row);
                report.add(new ReportRow(addr(address), "reverted",
                    "retired broad structural receiver; retained " +
                    "the machine-proven __thiscall ABI with neutral void * this"));
                return;
            }
            boolean scriptOwned = hasTag(function, TAG);
            boolean baselineName = function.getName(true).equals(unt(row.get("expected_name"))) &&
                function.getSymbol().getSource().toString().equals(row.get("expected_name_source"));
            boolean baselineSignature = function.getSignature().getPrototypeString(true)
                    .equals(unt(row.get("expected_signature"))) &&
                function.getSignatureSource().toString()
                    .equals(row.get("expected_signature_source")) &&
                function.getCallingConventionName()
                    .equals(row.get("expected_calling_convention"));
            boolean manualSignature = protectedSource(function.getSignatureSource());
            if (!baselineName && !scriptOwned) {
                report.add(new ReportRow(addr(address), "preserved",
                    "stale/manual name baseline: " + function.getName(true)));
                return;
            }
            if ((!baselineSignature && !scriptOwned) || manualSignature) {
                report.add(new ReportRow(addr(address), "preserved",
                    "stale/manual signature: " +
                    function.getSignature().getPrototypeString(true)));
                return;
            }

            List<String> detail = new ArrayList<>();
            boolean changed = false, hiddenReceiverChanged = false;
            boolean preserved = false, conflict = false;
            if (roleCleanup && hasTag(function, RECEIVER_ROLE_TAG)) {
                function.removeTag(RECEIVER_ROLE_TAG);
                detail.add("receiver_role=removed(stale structural ABI proof)");
                changed = true;
            }
            if (roleApply && !hasTag(function, RECEIVER_ROLE_TAG)) {
                function.addTag(RECEIVER_ROLE_TAG);
                detail.add("receiver_role=applied(free-function __thiscall wrapper)");
                changed = true;
            }

            String typeName = unt(row.get("receiver_type_name"));
            Structure receiver = null;
            if (conventionApply || typeApply || typeCleanup) {
                int observedSize = boundedSize(row.get("observed_size"));
                int maxSlot = maximumSlot(unt(row.get("vtable_slots")));
                receiver = ensureReceiverType(typeName, observedSize, maxSlot);
                if (receiver == null) {
                    report.add(new ReportRow(addr(address), "conflict",
                        "receiver type cannot be safely reused: " + typeName +
                        (receiverTypeFailure.isBlank() ? "" : "; " + receiverTypeFailure)));
                    return;
                }
            }
            GhidraClass receiverClass = null;
            if (typeApply) {
                receiverClass = ensureReceiverClass(typeName);
                if (receiverClass == null) {
                    report.add(new ReportRow(addr(address), "conflict",
                        "anonymous class namespace exists with an incompatible kind: " +
                        typeName));
                    return;
                }
                if (!function.getParentNamespace().equals(receiverClass)) {
                    if (!function.getParentNamespace().isGlobal() && !scriptOwned) {
                        report.add(new ReportRow(addr(address), "preserved",
                            "existing non-global owner: " +
                            function.getParentNamespace().getName(true)));
                        return;
                    }
                    function.setParentNamespace(receiverClass);
                    detail.add("owner=applied(" + typeName + ")");
                    changed = true;
                    hiddenReceiverChanged = true;
                }
            }

            // In dynamic-storage mode Ghidra derives the immutable auto-this type from
            // the function's class namespace.  Rebuilding the signature after assigning
            // that neutral namespace is the supported API; AutoParameterImpl.setDataType
            // always throws in Ghidra 12.1.x.
            boolean wasThiscall = "__thiscall".equals(function.getCallingConventionName());
            if (conventionApply || typeApply) {
                normalizeThiscall(function);
                if (!wasThiscall) {
                    detail.add("convention=applied(__thiscall)");
                    changed = true;
                    hiddenReceiverChanged = true;
                }
                else if (conventionApply) detail.add("convention=unchanged");
            }

            if (typeApply) {
                Parameter receiverParameter = thisParameter(function);
                if (receiverParameter == null) {
                    detail.add("receiver_type=conflict(no auto this parameter)");
                    conflict = true;
                }
                else if (receiverPointerType(receiverParameter, receiver)) {
                    detail.add("receiver_type=applied(" + receiver.getPathName() + ")");
                    changed = true;
                    hiddenReceiverChanged = true;
                }
                else if (protectedSource(function.getSignatureSource()) && !scriptOwned) {
                    detail.add("receiver_type=preserved(manual signature)");
                    preserved = true;
                }
                else {
                    detail.add("receiver_type=conflict(namespace did not produce " +
                        receiver.getPathName() + " *; actual=" +
                        receiverParameter.getDataType().getPathName() + ")");
                    conflict = true;
                }
            }

            if (hiddenReceiverChanged) {
                function.addTag(TAG);
                addComment(function, row, receiver);
            }
            String status = conflict && !changed ? "conflict" :
                changed && (conflict || preserved) ? "partial" : changed ? "applied" :
                preserved ? "preserved" : "unchanged";
            report.add(new ReportRow(addr(address), status, String.join("; ", detail)));
        }
        catch (Exception exception) {
            report.add(new ReportRow(addr(address), "conflict", message(exception)));
        }
    }

    /**
     * The short-lived broad receiver rule promoted every field-dereferencing
     * __thiscall helper to a nominal class.  A type observed in only one function
     * has no stable identity: at callers it hides the
     * concrete base class and turns readable virtual calls back into raw dispatch.
     * Revert only the exact script-owned shape produced by that rule.  The ABI
     * remains __thiscall and no semantic owner is inferred.  A previous grouping
     * pass may have moved the function below a sibling recovered-receiver class,
     * so ownership is checked against the generated category and the actual
     * auto-this pointee rather than against the current proposal anchor name.
     */
    private void cleanupStructuralReceiver(Function function, Map<String, String> row)
            throws Exception {
        if (!hasTag(function, TAG) || !broadAdoptionComment(function))
            throw new IllegalArgumentException(
                "function is not owned by the retired broad structural-receiver rule");
        if (protectedSource(function.getSignatureSource()))
            throw new IllegalArgumentException("manual/imported signature is protected");
        if (!"__thiscall".equals(function.getCallingConventionName()))
            throw new IllegalArgumentException("recovered function is no longer __thiscall");

        Namespace parent = function.getParentNamespace();
        String parentName = parent == null ? "" : parent.getName(true);
        if (!(parent instanceof GhidraClass) ||
                !parentName.contains("SubmarineTitans::Recovered::HiddenThis::") ||
                !parent.getName().startsWith("RecoveredReceiver_"))
            throw new IllegalArgumentException(
                "function is no longer owned by a generated hidden-this class");
        Parameter oldThis = thisParameter(function);
        DataType attachedReceiver = oldThis == null ? null : pointedType(oldThis.getDataType());
        if (attachedReceiver == null ||
                !attachedReceiver.getPathName().startsWith(
                    "/SubmarineTitans/Recovered/HiddenThis/RecoveredReceiver_") ||
                !attachedReceiver.getName().equals(parent.getName()))
            throw new IllegalArgumentException(
                "auto-this no longer names the generated hidden-this owner");
        // Ghidra may leave a detached StructureDB object attached to a signature
        // after another generated-layout pass resolves the same pathname.  The
        // canonical manager object carries the current hash/provenance and is the
        // object which must be validated and neutralized.
        DataType receiver = dataTypes.getDataType(attachedReceiver.getPathName());
        if (!(receiver instanceof Structure) ||
                (!generated(receiver) &&
                    !classLayoutOwnedReceiver((Structure)receiver)))
            throw new IllegalArgumentException("receiver datatype is not script-owned");

        function.setParentNamespace(currentProgram.getGlobalNamespace());
        normalizeThiscallReplacingReceiver(function, receiver);
        Parameter thisParameter = thisParameter(function);
        if (thisParameter == null || !(thisParameter.getDataType() instanceof Pointer pointer) ||
                !(pointer.getDataType() instanceof VoidDataType))
            throw new IllegalStateException("global __thiscall did not restore void * this");
        function.removeTag(TAG);
        removeOwnedComment(function);
    }

    private DataType pointedType(DataType type) {
        while (type instanceof ghidra.program.model.data.TypeDef definition)
            type = definition.getBaseDataType();
        if (!(type instanceof Pointer pointer)) return null;
        type = pointer.getDataType();
        while (type instanceof ghidra.program.model.data.TypeDef definition)
            type = definition.getBaseDataType();
        return type;
    }

    private boolean classLayoutOwnedReceiver(Structure receiver) {
        return receiver.getPathName().startsWith(
                "/SubmarineTitans/Recovered/HiddenThis/RecoveredReceiver_") &&
            text(receiver.getDescription()).contains("[STClassLayoutApplier]");
    }

    private boolean pointerTo(DataType type, DataType pointee) {
        DataType pointed = pointedType(type);
        return pointed == pointee || pointed != null && pointee.getUniversalID() != null &&
            pointee.getUniversalID().equals(pointed.getUniversalID());
    }

    private void normalizeThiscallReplacingReceiver(Function function, DataType receiver)
            throws Exception {
        List<Variable> parameters = new ArrayList<>();
        for (Parameter parameter : function.getParameters()) {
            if (parameter.isAutoParameter()) continue;
            DataType type = parameter.getFormalDataType();
            if (pointerTo(type, receiver)) type = voidPtr;
            parameters.add(new ParameterImpl(parameter.getName(), type, currentProgram,
                SourceType.ANALYSIS));
        }
        DataType returned = function.getReturnType();
        if (pointerTo(returned, receiver)) returned = voidPtr;
        boolean varargs = function.hasVarArgs();
        function.updateFunction("__thiscall",
            new ReturnParameterImpl(returned, currentProgram), parameters,
            FunctionUpdateType.DYNAMIC_STORAGE_FORMAL_PARAMS, true, SourceType.ANALYSIS);
        function.setVarArgs(varargs);
        function.setSignatureSource(SourceType.ANALYSIS);
    }

    private boolean broadAdoptionComment(Function function) {
        String comment = function.getComment();
        return comment != null && comment.contains("[STHiddenThisApplier]") &&
            comment.contains("existing_thiscall_structural_receiver_from_exact_ecx_dereferences");
    }

    private void removeOwnedComment(Function function) {
        String comment = function.getComment();
        if (comment == null || comment.isBlank()) return;
        String marker = "[STHiddenThisApplier]";
        int start = comment.indexOf(marker);
        if (start < 0) return;
        int end = comment.indexOf("\n\n[", start + marker.length());
        String prefix = comment.substring(0, start).stripTrailing();
        String suffix = end < 0 ? "" : comment.substring(end + 2).stripLeading();
        String repaired = prefix.isBlank() ? suffix : suffix.isBlank() ? prefix :
            prefix + "\n\n" + suffix;
        function.setComment(repaired.isBlank() ? null : repaired);
    }

    private Structure ensureReceiverType(String typeName, int observedSize, int maxSlot) {
        receiverTypeFailure = "";
        int pointerSize = currentProgram.getDefaultPointerSize();
        Structure vtable = null;
        if (maxSlot >= 0) {
            String vtableName = typeName + "VTable";
            DataType existingVtable = dataTypes.getDataType(CATEGORY, vtableName);
            if (existingVtable == null) {
                vtable = new StructureDataType(CATEGORY, vtableName, 0, dataTypes);
                vtable.setDescription(VTABLE_DESCRIPTION);
            }
            else if (existingVtable instanceof Structure && generated(existingVtable))
                vtable = (Structure)existingVtable;
            else {
                receiverTypeFailure = "vtable is absent, foreign, or no longer script-owned";
                return null;
            }

            int requiredVtable = maxSlot + pointerSize;
            while (layoutLength(vtable) < requiredVtable) {
                int offset = layoutLength(vtable);
                vtable.add(voidPtr, pointerSize, String.format("slot_%02X", offset),
                    "Unresolved virtual/function-pointer slot at +0x" +
                    Integer.toHexString(offset).toUpperCase(Locale.ROOT) + ".");
            }
            vtable = (Structure)dataTypes.resolve(vtable,
                DataTypeConflictHandler.KEEP_HANDLER);
        }

        DataType existingReceiver = dataTypes.getDataType(CATEGORY, typeName);
        Structure receiver;
        if (existingReceiver == null) {
            receiver = new StructureDataType(CATEGORY, typeName, 0, dataTypes);
            receiver.setDescription(RECEIVER_DESCRIPTION);
        }
        else if (existingReceiver instanceof Structure &&
                (generated(existingReceiver) ||
                    intactClassLayoutReceiver((Structure)existingReceiver) ||
                    alreadySatisfiesRecoveredReceiver((Structure)existingReceiver,
                        vtable, observedSize, maxSlot)))
            receiver = (Structure)existingReceiver;
        else {
            receiverTypeFailure = "receiver layout is foreign or fails its ownership/hash proof";
            return null;
        }

        if (maxSlot < 0 && legacyUnprovenVtable(receiver)) {
            // The first implementation incorrectly installed a vtable in every receiver,
            // even when no indirect call through offset zero existed.  This exact
            // script-owned legacy shape is safe to migrate back to an unknown layout.
            receiver.deleteAll();
        }
        if (vtable != null) {
            DataType pointer = new PointerDataType(vtable, dataTypes);
            ghidra.program.model.data.DataTypeComponent component = receiver.isZeroLength() ?
                null : receiver.getComponentAt(0);
            if (receiver.isZeroLength()) {
                receiver.add(pointer, pointerSize, "vtable",
                    "Neutral vtable skeleton recovered from indirect calls through incoming this.");
            }
            else if (component == null || Undefined.isUndefined(component.getDataType())) {
                receiver.replaceAtOffset(0, pointer, pointerSize, "vtable",
                    "Neutral vtable skeleton recovered from indirect calls through incoming this.");
            }
            else if (recoverableClassLayoutVptrShadow(receiver, component)) {
                receiver.replaceAtOffset(0, pointer, pointerSize, "vtable",
                    "Neutral vtable skeleton recovered from indirect calls through incoming this.");
                refreshClassLayoutHash(receiver);
            }
            else if (!"vtable".equals(component.getFieldName()) ||
                    (!component.getDataType().isEquivalent(pointer) &&
                        !pointerTargetPath(component.getDataType()).equals(
                            vtable.getPathName()))) {
                receiverTypeFailure = "offset-zero component does not match the recovered vtable";
                return null;
            }
        }
        int receiverLength = layoutLength(receiver);
        if (receiverLength < observedSize)
            receiver.growStructure(observedSize - receiverLength);
        return (Structure)dataTypes.resolve(receiver, DataTypeConflictHandler.KEEP_HANDLER);
    }

    /**
     * A later layout pass may own the receiver description/hash while retaining
     * the exact HiddenThis vptr and sufficient extent.  Re-attaching a function
     * namespace does not require rewriting that structure.  Accept this state
     * only when the current generated vtable identity is already installed and
     * the structure is large enough, so no manual component is touched.
     */
    private boolean alreadySatisfiesRecoveredReceiver(Structure receiver,
            Structure vtable, int observedSize, int maxSlot) {
        if (!receiver.getPathName().startsWith(CATEGORY.getPath() + "/RecoveredReceiver_") ||
                receiver.getLength() < observedSize || maxSlot < 0 || vtable == null ||
                !generated(vtable)) return false;
        ghidra.program.model.data.DataTypeComponent first = receiver.getComponentAt(0);
        if (first == null || first.getOffset() != 0 ||
                !"vtable".equals(first.getFieldName()) ||
                !(first.getDataType() instanceof Pointer pointer)) return false;
        DataType pointed = pointer.getDataType();
        return pointed == vtable || pointed != null && pointed.getUniversalID() != null &&
            pointed.getUniversalID().equals(vtable.getUniversalID()) ||
            pointed != null && pointed.getPathName().equals(vtable.getPathName());
    }

    private String pointerTargetPath(DataType type) {
        return type instanceof Pointer pointer && pointer.getDataType() != null ?
            pointer.getDataType().getPathName() : "";
    }

    private boolean recoverableClassLayoutVptrShadow(Structure receiver,
            ghidra.program.model.data.DataTypeComponent component) {
        if (component.getOffset() != 0 || component.getLength() !=
                currentProgram.getDefaultPointerSize() ||
                !"vtable".equals(component.getFieldName()) ||
                !text(component.getComment()).contains("[STClassLayoutApplier]")) return false;
        String description = text(receiver.getDescription());
        if (!description.contains("[STClassLayoutApplier]")) return false;
        Matcher hash = GENERATED_LAYOUT_HASH.matcher(description);
        if (!hash.find() || !hash.group(1).equals(structureLayoutHash(receiver))) return false;
        DataType current = component.getDataType();
        if (!(current instanceof Pointer pointer) || pointer.getDataType() == null) return false;
        String path = pointer.getDataType().getPathName();
        return path.startsWith("/SubmarineTitans/Recovered/ClassPointees/AnonPointee_");
    }

    private boolean intactClassLayoutReceiver(Structure receiver) {
        if (!receiver.getPathName().startsWith(
                "/SubmarineTitans/Recovered/HiddenThis/RecoveredReceiver_")) return false;
        String description = text(receiver.getDescription());
        if (!description.contains("[STClassLayoutApplier]")) return false;
        Matcher hash = GENERATED_LAYOUT_HASH.matcher(description);
        return hash.find() && hash.group(1).equals(structureLayoutHash(receiver));
    }

    private void refreshClassLayoutHash(Structure receiver) {
        String description = text(receiver.getDescription());
        Matcher matcher = GENERATED_LAYOUT_HASH.matcher(description);
        if (!matcher.find()) return;
        String updated = description.substring(0, matcher.start(1)) +
            structureLayoutHash(receiver) + description.substring(matcher.end(1));
        receiver.setDescription(updated);
    }

    private String structureLayoutHash(Structure structure) {
        StringBuilder layout = new StringBuilder();
        layout.append("length=").append(structure.getLength()).append('\n');
        for (ghidra.program.model.data.DataTypeComponent component :
                structure.getDefinedComponents()) {
            layout.append(component.getOffset()).append('|').append(component.getLength())
                .append('|').append(component.getDataType().getPathName()).append('|')
                .append(text(component.getFieldName())).append('|')
                .append(text(component.getComment())).append('\n');
        }
        try {
            MessageDigest digest = MessageDigest.getInstance("SHA-256");
            byte[] bytes = digest.digest(layout.toString().getBytes(StandardCharsets.UTF_8));
            StringBuilder result = new StringBuilder();
            for (byte value : bytes) result.append(String.format("%02x", value & 0xff));
            return result.toString();
        }
        catch (Exception ignored) { return ""; }
    }

    private String text(String value) { return value == null ? "" : value; }

    private int layoutLength(Structure structure) {
        return structure.isZeroLength() ? 0 : structure.getLength();
    }

    private boolean legacyUnprovenVtable(Structure receiver) {
        String description = receiver.getDescription();
        if (!RECEIVER_DESCRIPTION.equals(description)) return false;
        if (receiver.isZeroLength()) return false;
        ghidra.program.model.data.DataTypeComponent first = receiver.getComponentAt(0);
        return first != null && "vtable".equals(first.getFieldName()) &&
            first.getDataType() instanceof Pointer;
    }

    private GhidraClass ensureReceiverClass(String typeName) throws Exception {
        SymbolTable table = currentProgram.getSymbolTable();
        Namespace parent = currentProgram.getGlobalNamespace();
        for (String part : new String[] { "SubmarineTitans", "Recovered", "HiddenThis" }) {
            Namespace existingParent = table.getNamespace(part, parent);
            if (existingParent == null)
                existingParent = table.createNameSpace(parent, part, SourceType.ANALYSIS);
            parent = existingParent;
        }
        Namespace existing = table.getNamespace(typeName, parent);
        if (existing == null)
            return table.createClass(parent, typeName, SourceType.ANALYSIS);
        return existing instanceof GhidraClass ? (GhidraClass)existing : null;
    }

    private void normalizeThiscall(Function function) throws Exception {
        List<Variable> parameters = new ArrayList<>();
        for (Parameter parameter : function.getParameters()) {
            if (parameter.isAutoParameter()) continue;
            parameters.add(new ParameterImpl(parameter.getName(),
                parameter.getFormalDataType(), currentProgram, parameter.getSource()));
        }
        boolean varargs = function.hasVarArgs();
        function.updateFunction("__thiscall",
            new ReturnParameterImpl(function.getReturnType(), currentProgram), parameters,
            FunctionUpdateType.DYNAMIC_STORAGE_FORMAL_PARAMS, true, SourceType.ANALYSIS);
        function.setVarArgs(varargs);
        function.setSignatureSource(SourceType.ANALYSIS);
    }

    private Parameter thisParameter(Function function) {
        for (Parameter parameter : function.getParameters()) {
            if (parameter.isAutoParameter() &&
                    parameter.getAutoParameterType() == AutoParameterType.THIS) return parameter;
        }
        return null;
    }

    private boolean receiverPointerType(Parameter parameter, DataType expected) {
        DataType type = parameter.getDataType();
        if (!(type instanceof Pointer)) return false;
        DataType pointed = ((Pointer)type).getDataType();
        // Identity is intentional. A manager-removed receiver can remain attached to
        // a signature as a detached object which renders the same path.
        return pointed == expected || pointed != null &&
            pointed.getUniversalID() != null &&
            pointed.getUniversalID().equals(expected.getUniversalID());
    }

    private boolean generated(DataType type) {
        String description = type.getDescription();
        return description != null && description.contains(MARKER);
    }

    private int boundedSize(String value) {
        try { return Math.max(4, Math.min(0x100000, Integer.parseInt(value))); }
        catch (Exception ignored) { return 4; }
    }

    private int maximumSlot(String specification) {
        int result = -1;
        if (specification.isBlank()) return result;
        for (String item : specification.split(",")) {
            try {
                String value = item.trim().toUpperCase(Locale.ROOT);
                int parsed = value.startsWith("0X") ?
                    Integer.parseUnsignedInt(value.substring(2), 16) : Integer.parseInt(value);
                if (parsed >= 0 && parsed < 0x1000 && parsed %
                        currentProgram.getDefaultPointerSize() == 0)
                    result = Math.max(result, parsed);
            }
            catch (Exception ignored) { }
        }
        return result;
    }

    private void addComment(Function function, Map<String, String> row, Structure receiver) {
        String block = "[STHiddenThisApplier] Anonymous hidden receiver recovered as " +
            receiver.getPathName() + ".\nEvidence: " + unt(row.get("reason"));
        String old = function.getComment();
        if (old == null || old.isBlank()) function.setComment(block);
        else if (!old.contains("[STHiddenThisApplier]")) function.setComment(old + "\n\n" + block);
    }

    private boolean hasTag(Function function, String name) {
        for (FunctionTag tag : function.getTags()) if (name.equals(tag.getName())) return true;
        return false;
    }
    private boolean protectedSource(SourceType source) {
        return source == SourceType.USER_DEFINED || source == SourceType.IMPORTED;
    }
    private boolean enabled(String value) {
        return "1".equals(value) || "true".equalsIgnoreCase(value) ||
            "yes".equalsIgnoreCase(value);
    }
    private long count(String status) {
        return report.stream().filter(row -> row.status.equals(status)).count();
    }

    private File inputFile() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless()) throw new IllegalArgumentException(
            "Path to hidden_this_proposals.tsv is required");
        return askFile("Select hidden_this_proposals.tsv", "Apply hidden this");
    }

    private Tsv readTsv(Path path) throws Exception {
        List<String> lines = Files.readAllLines(path, StandardCharsets.UTF_8);
        if (lines.isEmpty()) throw new IllegalArgumentException("Empty TSV: " + path);
        String[] header = lines.get(0).split("\\t", -1);
        List<Map<String, String>> rows = new ArrayList<>();
        for (int line = 1; line < lines.size(); line++) {
            if (lines.get(line).isBlank()) continue;
            String[] values = lines.get(line).split("\\t", -1);
            if (values.length != header.length)
                throw new IllegalArgumentException(path.getFileName() + " line " + (line + 1) +
                    " has " + values.length + " columns; expected " + header.length);
            Map<String, String> row = new LinkedHashMap<>();
            for (int column = 0; column < header.length; column++)
                row.put(header[column], values[column]);
            rows.add(row);
        }
        return new Tsv(List.of(header), rows);
    }

    private void requireColumns(Tsv tsv, String... names) {
        for (String name : names) if (!tsv.header.contains(name))
            throw new IllegalArgumentException("Missing TSV column: " + name);
    }

    private void writeReport(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("address\tstatus\tdetail\n");
            for (ReportRow row : report)
                out.write(row.address + "\t" + row.status + "\t" + tsv(row.detail) + "\n");
        }
    }

    private Address address(String value) {
        Address result = currentProgram.getAddressFactory().getAddress(value);
        if (result == null) throw new IllegalArgumentException("Invalid address: " + value);
        return result;
    }
    private String message(Exception exception) {
        String value = exception.getMessage();
        if (value == null || value.isBlank()) value = exception.getClass().getSimpleName();
        for (StackTraceElement frame : exception.getStackTrace()) {
            if (getClass().getName().equals(frame.getClassName()))
                return value + " @" + frame.getMethodName() + ":" + frame.getLineNumber();
        }
        return value;
    }
    private static String addr(Address value) { return value.toString().toUpperCase(Locale.ROOT); }
    private static String tsv(String value) {
        return value == null ? "" : value.replace("\\", "\\\\").replace("\t", "\\t")
            .replace("\r", "\\r").replace("\n", "\\n");
    }
    private static String unt(String value) {
        StringBuilder out = new StringBuilder();
        boolean escaped = false;
        for (int index = 0; index < value.length(); index++) {
            char c = value.charAt(index);
            if (!escaped && c == '\\') { escaped = true; continue; }
            if (escaped) {
                if (c == 't') out.append('\t');
                else if (c == 'r') out.append('\r');
                else if (c == 'n') out.append('\n');
                else out.append(c);
                escaped = false;
            }
            else out.append(c);
        }
        if (escaped) out.append('\\');
        return out.toString();
    }

    private static class Tsv {
        final List<String> header; final List<Map<String, String>> rows;
        Tsv(List<String> header, List<Map<String, String>> rows) {
            this.header = header; this.rows = rows;
        }
    }
    private static class ReportRow {
        final String address, status, detail;
        ReportRow(String address, String status, String detail) {
            this.address = address; this.status = status; this.detail = detail;
        }
    }
}
