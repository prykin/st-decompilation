// Run the Submarine Titans recovery scripts as a path-free, dependency-ordered pipeline.
// The repository root is inferred from this file's scripts/ directory.  Child scripts still
// enforce their own proposal flags, stale baselines, transactions, and manual-type protection.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Advanced.Run Recovery Pipeline Directly

import java.io.BufferedWriter;
import java.io.File;
import java.io.IOException;
import java.io.InputStream;
import java.io.PrintWriter;
import java.io.StringWriter;
import java.io.Writer;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.StandardCopyOption;
import java.nio.file.StandardOpenOption;
import java.nio.file.attribute.FileTime;
import java.time.Duration;
import java.time.Instant;
import java.security.MessageDigest;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Comparator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Set;
import java.util.TreeMap;

import generic.jar.ResourceFile;
import ghidra.app.script.GhidraScript;
import ghidra.app.script.GhidraScriptProvider;
import ghidra.app.script.GhidraScriptUtil;
import ghidra.app.plugin.core.analysis.AutoAnalysisManager;
import ghidra.framework.model.TransactionInfo;

public class STRecoveryPipeline extends GhidraScript {
    private static final int MAX_BOOTSTRAP_PASSES = 24;
    private static final int MAX_STRUCTURAL_PASSES = 24;
    private static final int MAX_DEEP_PASSES = 12;
    private static final int MAX_RUN_HISTORY = 3;
    private static final Set<String> MUTATING_STATUSES = Set.of(
        "applied", "created", "converted", "updated", "partial", "renamed", "repaired");
    private static final Set<String> UNCHANGED_STATUSES = Set.of(
        "unchanged", "already_present");
    private static final Set<String> REVIEW_STATUSES = Set.of(
        "disabled", "preserved", "skipped", "review");
    private static final Set<String> CONFLICT_STATUSES = Set.of("conflict");
    private static final Set<String> ERROR_STATUSES = Set.of("error", "failed");

    private Path repository;
    private Path recoveryRoot;
    private Path recoveryProgram;
    private Path decompRoot;
    private Path reportPath;
    private final List<PipelineRow> report = new ArrayList<>();
    private int sequence;
    private boolean programMutationObserved;
    private boolean lastStepMutatedProgram;
    private Path runsRoot;
    private Path activeRun;
    private Path eventsPath;
    private Path logPath;
    private Instant runStarted;
    private String runMode = "";
    private String currentSection = "startup";
    private long runModificationBefore;
    private final List<BuildRow> builds = new ArrayList<>();
    private int buildFailures;

    @Override
    protected void run() throws Exception {
        if (currentProgram == null) {
            printerr("Open the ST program before running the recovery pipeline.");
            return;
        }
        // GhidraScript wraps run() in one implicit transaction. Keeping that wrapper open
        // across child scripts is unsafe: any child rollback marks the shared transaction
        // ABORTED, while later scripts and the exporter still see its temporary state. End
        // the empty wrapper now so every child owns a real independent transaction.
        end(true);
        settleBackgroundAnalysis("pipeline startup");
        requireNoOpenTransaction("at pipeline startup");
        PipelineOptions options = options();
        repository = options.repository;
        recoveryRoot = repository.resolve("recovery");
        recoveryProgram = recoveryRoot.resolve(currentProgram.getName());
        decompRoot = repository.resolve("decomp");
        reportPath = recoveryProgram.resolve("pipeline_report.tsv");
        validateRepository();
        Files.createDirectories(recoveryProgram);
        Files.createDirectories(decompRoot);

        println("ST recovery pipeline: mode=" + options.mode +
            ", repository=" + repository);
        println("No proposal flags are changed by the pipeline. Review-only rows remain disabled.");
        Instant started = Instant.now();
        startRun(options.mode, started);
        try {
            preflightScripts();
            switch (options.mode) {
                case "core" -> { runCore(); recordEvidence(); }
                case "deep" -> { runDeep(); recordEvidence(); }
                case "full" -> { runCore(); runDeep(); recordEvidence(); }
                case "export" -> finalizeAndExport();
                case "full-export" -> {
                    runCore(); runDeep(); finalizeAndExport();
                }
                default -> throw new IllegalArgumentException("Unknown pipeline mode: " +
                    options.mode);
            }
            flushReport();
            if (programMutationObserved && !currentProgram.isChanged())
                throw new IllegalStateException("Pipeline observed committed Program mutations, " +
                    "but Program.isChanged() is false at completion; refusing a false success");
            long seconds = Duration.between(started, Instant.now()).toSeconds();
            logLine("pipeline_complete duration_s=" + seconds +
                " program_changed=" + currentProgram.isChanged());
            finishRun("completed", null);
            println("ST recovery pipeline complete in " + seconds + " s.");
        }
        catch (Throwable failure) {
            try {
                flushReport();
                logLine("pipeline_failed " + message(failure));
                finishRun("failed", failure);
            }
            catch (Throwable loggingFailure) {
                failure.addSuppressed(loggingFailure);
            }
            printerr("Pipeline stopped after the first failed step: " + message(failure));
            rethrow(failure);
        }
        println("Pipeline report: " + reportPath.toAbsolutePath().normalize());
        println("Program changed after pipeline: " + currentProgram.isChanged());
        if (!options.mode.equals("export"))
            println("Applier transactions are committed in the open Program, but the pipeline " +
                "does not call DomainObject.save(). If Save Program is enabled after this script " +
                "returns, save normally. If it is disabled, Ghidra reports that the Program has " +
                "no unsaved changes; close the project normally and verify a recovered symbol " +
                "after reopening before committing its project files.");
    }

    /** Fast structural loop: types/debug names, message ABI, exact entries, factories and classes. */
    private void runCore() throws Exception {
        section("core baseline");
        runBootstrapFixpoint();

        analyzer("STDebugSymbolAnalyzer.java");
        applier("STDebugSymbolApplier.java", "proposals.tsv");
        optionalApplier("STCuratedRecoveryApplier.java", "curated_recovery.tsv");
        runOptionalCallsiteFixpoint();

        pair("STMessageIdAnalyzer.java", "STMessageIdApplier.java",
            "message_id_proposals.tsv", null);
        pair("STMessageHandlerAnalyzer.java", "STMessageHandlerApplier.java",
            "message_handler_proposals.tsv", "message_handler_apply_report.tsv");

        fixUnclaimedCode();
        runStructuralFixpoint();
    }

    /** Slower whole-program propagation.  It assumes core outputs exist or were checked in. */
    private void runDeep() throws Exception {
        section("deep ownership and ABI");
        requireFile("vtable_proposals.tsv",
            "Run mode=core first; deep recovery needs current vtable proposals.");
        migrateLegacyHiddenThisIfNeeded();
        pair("STHiddenThisAnalyzer.java", "STHiddenThisApplier.java",
            "hidden_this_proposals.tsv", "hidden_this_apply_report.tsv");
        pair("STMethodOwnerAnalyzer.java", "STMethodOwnerApplier.java",
            "method_owner_proposals.tsv", "method_owner_apply_report.tsv");
        pair("STDestructorAnalyzer.java", "STDestructorApplier.java",
            "destructor_proposals.tsv", "destructor_apply_report.tsv");
        pair("STSwitchEnumAnalyzer.java", "STSwitchEnumApplier.java",
            "switch_enum_proposals.tsv", "switch_enum_apply_report.tsv");

        pair("STUtilityFunctionAnalyzer.java", "STUtilityFunctionApplier.java",
            "utility_function_proposals.tsv", "utility_function_apply_report.tsv");

        boolean converged = false;
        for (int pass = 1; pass <= MAX_DEEP_PASSES; pass++) {
            section("deep propagation pass " + pass + "/" + MAX_DEEP_PASSES);
            int changed = 0;
            changed += pair("STAbiConsistencyAnalyzer.java", "STAbiConsistencyApplier.java",
                "abi_consistency_proposals.tsv", "abi_consistency_apply_report.tsv");
            changed += pair("STReturnSemanticsAnalyzer.java", "STReturnSemanticsApplier.java",
                "return_semantics_proposals.tsv", "return_semantics_apply_report.tsv");
            changed += runPrototypeCycle();
            changed += pair("STGlobalRecordAnalyzer.java", "STGlobalRecordApplier.java",
                "global_record_proposals.tsv", "global_record_apply_report.tsv");
            changed += pair("STDiscriminatedPayloadAnalyzer.java",
                "STDiscriminatedPayloadApplier.java",
                "discriminated_payload_proposals.tsv",
                "discriminated_payload_apply_report.tsv");
            changed += pair("STSpatialGridAnalyzer.java", "STSpatialGridApplier.java",
                "spatial_grid_proposals.tsv", "spatial_grid_apply_report.tsv");
            changed += pair("STGlobalAggregateAnalyzer.java", "STGlobalAggregateApplier.java",
                "global_aggregate_proposals.tsv", "global_aggregate_apply_report.tsv");
            changed += pair("STGlobalDataAnalyzer.java", "STGlobalDataApplier.java",
                "global_data_proposals.tsv", "global_data_apply_report.tsv");
            // A global which has just become Owner * is direct method-owner evidence
            // when that value flows into ECX.  Keep this inside the deep fixed point:
            // requiring another full pipeline run would leave anonymous hidden-this
            // namespaces alive after their concrete singleton class is already known.
            changed += pair("STMethodOwnerAnalyzer.java", "STMethodOwnerApplier.java",
                "method_owner_proposals.tsv", "method_owner_apply_report.tsv");
            changed += pair("STIndirectCallAnalyzer.java", "STIndirectCallApplier.java",
                "indirect_call_proposals.tsv", "indirect_call_apply_report.tsv");
            changed += pair("STPointerRoleRepairAnalyzer.java",
                "STPointerRoleRepairApplier.java", "pointer_role_repair_proposals.tsv",
                "pointer_role_repair_apply_report.tsv");
            changed += pair("STPointerShapeAnalyzer.java", "STPointerShapeApplier.java",
                "pointer_shape_target_proposals.tsv", "pointer_shape_apply_report.tsv");
            changed += pair("STTypeFamilyAnalyzer.java", "STTypeFamilyApplier.java",
                "type_family_proposals.tsv", "type_family_apply_report.tsv");
            analyzer("STClassArrayAnalyzer.java");
            changed += pair("STClassLayoutAnalyzer.java", "STClassLayoutApplier.java",
                "class_layout_proposals.tsv", "class_layout_apply_report.tsv");
            changed += pair("STSwitchEnumAnalyzer.java", "STSwitchEnumApplier.java",
                "switch_enum_proposals.tsv", "switch_enum_apply_report.tsv");
            changed += pair("STObjectFactoryAnalyzer.java", "STObjectFactoryApplier.java",
                "object_factory_proposals.tsv", "object_factory_apply_report.tsv");
            println("Deep propagation pass " + pass + ": mutating report rows=" + changed);
            if (changed == 0) { converged = true; break; }
        }
        if (!converged)
            throw new IllegalStateException("Deep propagation did not reach a fixed point in " +
                MAX_DEEP_PASSES + " passes; export is unsafe");

        // Consume newly recovered fields/owners before library classification hides OURLIB bodies
        // from implementation-based analyzers.
        runStructuralFixpoint();

        // Structural vtable discovery may expose fresh generic slots after the deep loop.
        // Re-run indirect typing after the last table rebuild so the exported database always
        // contains the final slot prototypes rather than orphaned function definitions.
        section("post-structural indirect propagation");
        pair("STIndirectCallAnalyzer.java", "STIndirectCallApplier.java",
            "indirect_call_proposals.tsv", "indirect_call_apply_report.tsv");

        section("deep finalization");
        pair("STSourceProvenanceAnalyzer.java", "STSourceProvenanceApplier.java",
            "source_provenance_proposals.tsv", "source_provenance_apply_report.tsv");
        pair("STThunkPropagationAnalyzer.java", "STThunkPropagationApplier.java",
            "thunk_proposals.tsv", "thunk_apply_report.tsv");
        analyzer("STManualTypeAuditAnalyzer.java");
        pair("STControlFlowLabelAnalyzer.java", "STControlFlowLabelApplier.java",
            "control_flow_label_proposals.tsv", "control_flow_label_apply_report.tsv");
        pair("STLibraryAnalyzer.java", "STLibraryApplier.java",
            "library_proposals.tsv", null);
        runTypeLifecycleFixpoint();
    }

    private void runExport() throws Exception {
        section("LLM corpus export");
        step("STEvidenceLedger.java", "verify", recoveryRoot.toString());
        Path baseline = snapshotPreviousExport();
        step("STDecompExport.java", decompRoot.toString());
        Path current = decompRoot.resolve(currentProgram.getName());
        step("STExportRegressionGate.java", current.toString(),
            baseline == null ? "-" : baseline.toString(), recoveryProgram.toString());
        snapshotRunArtifact(recoveryProgram.resolve("export_regression_report.tsv"),
            "export_regression_report.tsv");
        snapshotRunArtifact(recoveryProgram.resolve("export_receipt.json"),
            "export_receipt.json");
    }

    /**
     * Every export synchronizes the last ABI layer after all structural/type work, records
     * the resulting Program plus exact proposal/apply artifacts, and immediately verifies
     * that checkpoint before decompilation.  This keeps the ordinary export path valid after
     * either a full pipeline or a reviewed incremental Ghidra edit without adding
     * subsystem-specific export modes.
     */
    private void finalizeAndExport() throws Exception {
        runExportAbiRepair();
        recordEvidence();
        runExport();
    }

    /**
     * Short fixed-point repair for ABI layers whose mistakes directly create blocking
     * decompiler artifacts.  This is part of the ordinary export contract, not a one-off
     * migration mode: return semantics and indirect/vtable call types must agree before the
     * evidence checkpoint and corpus fingerprint are recorded.
     */
    private void runExportAbiRepair() throws Exception {
        section("critical export ABI stabilization");
        step("STReturnSemanticsAnalyzer.java", recoveryRoot.toString(), "repair-only");
        Path returnProposals = requireFile("return_semantics_proposals.tsv", null);
        step("STReturnSemanticsApplier.java", returnProposals.toString());
        int repairedReturns = convergenceMutationCount(
            "STReturnSemanticsApplier.java", returnProposals,
            recoveryProgram.resolve("return_semantics_apply_report.tsv"),
            MUTATING_STATUSES);
        println("Export return rollback repairs: mutating rows=" + repairedReturns);

        for (int pass = 1; pass <= 4; pass++) {
            int changed = pair("STIndirectCallAnalyzer.java", "STIndirectCallApplier.java",
                "indirect_call_proposals.tsv", "indirect_call_apply_report.tsv");
            println("Export indirect ABI stabilization pass " + pass +
                ": mutating rows=" + changed);
            if (changed == 0) return;
        }
        throw new IllegalStateException("Export indirect ABI stabilization did not reach a " +
            "fixed point in 4 passes; inspect indirect_call_apply_report.tsv under " +
            recoveryProgram);
    }

    private void recordEvidence() throws Exception {
        section("evidence checkpoint");
        step("STEvidenceLedger.java", "record", recoveryRoot.toString());
    }

    private void runBootstrapFixpoint() throws Exception {
        for (int pass = 1; pass <= MAX_BOOTSTRAP_PASSES; pass++) {
            int changed = pair("STTypeBootstrapAnalyzer.java",
                "STTypeBootstrapApplier.java", "type_bootstrap_proposals.tsv",
                "type_bootstrap_apply_report.tsv");
            println("Type-bootstrap pass " + pass + ": mutating rows=" + changed);
            if (changed == 0) return;
        }
        throw new IllegalStateException("Type bootstrap did not reach a fixed point in " +
            MAX_BOOTSTRAP_PASSES + " passes; inspect " +
            recoveryProgram.resolve("type_bootstrap_apply_report.tsv"));
    }

    private void runOptionalCallsiteFixpoint() throws Exception {
        Path input = recoveryProgram.resolve("debug_calling_convention_review.tsv");
        if (!hasDataRows(input)) {
            skipped("STCallsiteConventionAnalyzer.java", input.toString(),
                "audit input is absent or empty");
            skipped("STCallsiteConventionApplier.java",
                recoveryProgram.resolve("callsite_convention_proposals.tsv").toString(),
                "analyzer input is absent or empty");
            return;
        }
        for (int pass = 1; pass <= MAX_STRUCTURAL_PASSES; pass++) {
            step("STCallsiteConventionAnalyzer.java", input.toString());
            Path proposals = requireFile("callsite_convention_proposals.tsv", null);
            step("STCallsiteConventionApplier.java",
                proposals.toString());
            int changed = convergenceMutationCount(
                "STCallsiteConventionApplier.java",
                proposals,
                recoveryProgram.resolve("callsite_convention_apply_report.tsv"),
                MUTATING_STATUSES);
            println("Callsite-convention pass " + pass + ": mutating rows=" + changed);
            if (changed == 0) return;
        }
        throw new IllegalStateException("Callsite convention repair did not reach a fixed point");
    }

    private void fixUnclaimedCode() throws Exception {
        section("exact unclaimed entries");
        for (int pass = 1; pass <= MAX_STRUCTURAL_PASSES; pass++) {
            int changed = pair("STUnclaimedCodeAnalyzer.java", "STUnclaimedCodeApplier.java",
                "unclaimed_code_proposals.tsv", "unclaimed_code_apply_report.tsv",
                Set.of("created", "converted"), null);
            println("Unclaimed-code pass " + pass + ": created/converted=" + changed);
            if (changed == 0) return;
        }
        throw new IllegalStateException("Unclaimed-code recovery did not reach a fixed point in " +
            MAX_STRUCTURAL_PASSES + " passes");
    }

    private void runStructuralFixpoint() throws Exception {
        section("factory/vtable/constructor/class fixpoint");
        for (int pass = 1; pass <= MAX_STRUCTURAL_PASSES; pass++) {
            int changed = 0;
            changed += pair("STMessageHandlerAnalyzer.java", "STMessageHandlerApplier.java",
                "message_handler_proposals.tsv", "message_handler_apply_report.tsv");
            changed += pair("STObjectFactoryAnalyzer.java", "STObjectFactoryApplier.java",
                "object_factory_proposals.tsv", "object_factory_apply_report.tsv");
            changed += pair("STVTableAnalyzer.java", "STVTableApplier.java",
                "vtable_proposals.tsv", "vtable_apply_report.tsv");
            changed += pair("STVirtualMethodAnalyzer.java", "STVirtualMethodApplier.java",
                "virtual_method_proposals.tsv", "virtual_method_apply_report.tsv",
                MUTATING_STATUSES, recoveryProgram.resolve("vtable_proposals.tsv"));
            changed += pair("STConstructorAnalyzer.java", "STConstructorApplier.java",
                "constructor_proposals.tsv", "constructor_apply_report.tsv",
                MUTATING_STATUSES, recoveryProgram.resolve("vtable_proposals.tsv"));
            analyzer("STClassArrayAnalyzer.java");
            changed += pair("STClassLayoutAnalyzer.java", "STClassLayoutApplier.java",
                "class_layout_proposals.tsv", "class_layout_apply_report.tsv");
            println("Structural pass " + pass + ": mutating report rows=" + changed);
            if (changed == 0) return;
        }
        throw new IllegalStateException("Structural recovery did not reach a fixed point in " +
            MAX_STRUCTURAL_PASSES + " passes");
    }

    private void runTypeLifecycleFixpoint() throws Exception {
        section("generated type lifecycle");
        for (int pass = 1; pass <= MAX_STRUCTURAL_PASSES; pass++) {
            int changed = pair("STTypeLifecycleAnalyzer.java", "STTypeLifecycleApplier.java",
                "type_lifecycle_proposals.tsv", "type_lifecycle_apply_report.tsv",
                Set.of("replaced", "removed"), null);
            println("Type-lifecycle pass " + pass + ": replaced/removed=" + changed);
            if (changed == 0) return;
        }
        throw new IllegalStateException("Type lifecycle did not reach a fixed point in " +
            MAX_STRUCTURAL_PASSES + " passes");
    }

    private int runPrototypeCycle() throws Exception {
        analyzer("STPrototypeAnalyzer.java");
        Path proposals = requireFile("prototype_proposals.tsv", null);
        step("STPrototypeRepairAnalyzer.java", proposals.toString());
        Path repairs = requireFile("prototype_repair_proposals.tsv", null);
        step("STPrototypeRepairApplier.java", repairs.toString());
        int changed = convergenceMutationCount(
            "STPrototypeRepairApplier.java", repairs,
            recoveryProgram.resolve("prototype_repair_apply_report.tsv"),
            MUTATING_STATUSES);
        analyzer("STPrototypeAnalyzer.java");
        proposals = requireFile("prototype_proposals.tsv", null);
        step("STPrototypeApplier.java", proposals.toString());
        return changed + convergenceMutationCount(
            "STPrototypeApplier.java", proposals,
            recoveryProgram.resolve("prototype_apply_report.tsv"),
            MUTATING_STATUSES);
    }

    private int pair(String analyzer, String applier, String proposal, String applyReport)
            throws Exception {
        return pair(analyzer, applier, proposal, applyReport, MUTATING_STATUSES, null);
    }

    private int pair(String analyzer, String applier, String proposal, String applyReport,
            Set<String> statuses, Path analyzerInput) throws Exception {
        if (analyzerInput == null) analyzer(analyzer);
        else {
            if (!Files.isRegularFile(analyzerInput))
                throw new IllegalStateException("Missing analyzer input: " + analyzerInput);
            step(analyzer, analyzerInput.toString());
        }
        Path proposalPath = requireFile(proposal, null);
        step(applier, proposalPath.toString());
        if (applyReport == null) {
            snapshotPassArtifacts(applier, proposalPath, null);
            return 0;
        }
        return convergenceMutationCount(applier, proposalPath,
            recoveryProgram.resolve(applyReport), statuses);
    }

    private void analyzer(String script) throws Exception {
        step(script, recoveryRoot.toString());
    }

    private void applier(String script, String proposal) throws Exception {
        step(script, requireFile(proposal, null).toString());
    }

    private void optionalApplier(String script, String proposal) throws Exception {
        Path path = recoveryProgram.resolve(proposal);
        if (!Files.isRegularFile(path)) {
            skipped(script, path.toString(), "optional proposal is absent");
            return;
        }
        step(script, path.toString());
    }

    private void migrateLegacyHiddenThisIfNeeded() throws Exception {
        Path path = recoveryProgram.resolve("hidden_this_proposals.tsv");
        if (!Files.isRegularFile(path)) return;
        String header;
        try (java.io.BufferedReader reader = Files.newBufferedReader(path,
                StandardCharsets.UTF_8)) { header = reader.readLine(); }
        if (header != null && !Arrays.asList(header.split("\\t", -1))
                .contains("analysis_version")) {
            println("Legacy hidden-this proposals detected; applying the v1 repair before analysis.");
            step("STHiddenThisApplier.java", path.toString());
        }
    }

    /**
     * Force Ghidra's Java provider to load every repository recovery script before the first
     * pipeline mutation. The provider can emit on-demand compiler diagnostics here, but a
     * Script Manager refresh compiles the source bundle before this class can execute and
     * therefore remains a host-level Ghidra logging boundary.
     */
    private void preflightScripts() throws Exception {
        section("script load preflight");
        Path directory = activeRun.resolve("build");
        Path manifest = activeRun.resolve("build_manifest.tsv");
        Files.writeString(manifest,
            "sequence\tscript\tstatus\tduration_ms\tsource_sha256\tsource_path\tlog\n",
            StandardCharsets.UTF_8, StandardOpenOption.CREATE,
            StandardOpenOption.TRUNCATE_EXISTING);
        List<Path> sources;
        try (java.util.stream.Stream<Path> stream =
                Files.list(repository.resolve("scripts"))) {
            sources = stream.filter(Files::isRegularFile)
                .filter(path -> path.getFileName().toString().matches("ST[A-Za-z0-9_]+\\.java"))
                .sorted(Comparator.comparing(path -> path.getFileName().toString()))
                .toList();
        }
        List<String> failed = new ArrayList<>();
        int ordinal = 0;
        for (Path source : sources) {
            monitor.checkCancelled();
            ordinal++;
            String script = source.getFileName().toString();
            String hash = sha256(source);
            Path output = directory.resolve(String.format(Locale.ROOT, "%03d-%s.log",
                ordinal, script.replaceAll("[^A-Za-z0-9._-]+", "_")));
            logLine("build_start sequence=" + ordinal + " script=" + script +
                " source_sha256=" + hash);
            event("build_start", 0, script, "building", 0, -1, -1,
                "build_sequence=" + ordinal + "; source_sha256=" + hash);
            Instant started = Instant.now();
            StringWriter diagnostics = new StringWriter();
            Throwable failure = null;
            String status = "loaded";
            try (PrintWriter compiler = new PrintWriter(diagnostics, true)) {
                if (script.equals(getScriptName())) status = "already_loaded";
                else {
                    ResourceFile located = GhidraScriptUtil.findScriptByName(script);
                    if (located == null)
                        throw new IllegalStateException(
                            "Script is not visible to Ghidra Script Manager: " + script);
                    Path locatedPath = Path.of(located.getAbsolutePath())
                        .toAbsolutePath().normalize();
                    if (!Files.isSameFile(source, locatedPath))
                        throw new IllegalStateException("Ghidra resolves " + script + " to " +
                            locatedPath + " instead of repository source " + source);
                    GhidraScriptProvider provider = GhidraScriptUtil.getProvider(located);
                    if (provider == null)
                        throw new IllegalStateException("No Ghidra script provider for " + script);
                    GhidraScript instance = provider.getScriptInstance(located, compiler);
                    compiler.flush();
                    if (instance == null)
                        throw new IllegalStateException(
                            "Ghidra compiler returned no script instance for " + script);
                }
            }
            catch (Throwable problem) {
                failure = problem;
                status = "failed";
                buildFailures++;
                failed.add(script);
            }
            long milliseconds = Duration.between(started, Instant.now()).toMillis();
            String diagnosticText = diagnostics.toString();
            String text = "script=" + script + "\nsource=" +
                source.toAbsolutePath().normalize() + "\nsource_sha256=" + hash +
                "\nstatus=" + status + "\nduration_ms=" + milliseconds +
                "\n\ndiagnostics:\n" + diagnosticText +
                (failure == null ? "" : "\nexception:\n" + stackTrace(failure));
            Files.writeString(output, text, StandardCharsets.UTF_8,
                StandardOpenOption.CREATE, StandardOpenOption.TRUNCATE_EXISTING);
            BuildRow row = new BuildRow(script, hash, status, milliseconds,
                activeRun.relativize(output).toString());
            builds.add(row);
            Files.writeString(manifest, ordinal + "\t" + tsv(script) + "\t" + status +
                "\t" + milliseconds + "\t" + hash + "\t" +
                tsv(source.toAbsolutePath().normalize().toString()) + "\t" +
                tsv(row.log) + "\n", StandardCharsets.UTF_8,
                StandardOpenOption.CREATE, StandardOpenOption.APPEND);
            logLine("build_" + status + " sequence=" + ordinal + " script=" + script +
                " duration_ms=" + milliseconds + " log=" + row.log);
            event(failure == null ? "build_complete" : "build_failed", 0, script,
                status, milliseconds, -1, -1,
                "build_sequence=" + ordinal + "; log=" + row.log +
                    (failure == null ? "" : "; error=" + message(failure)));
            if (!diagnosticText.isBlank()) {
                PrintWriter destination = failure == null ? writer : errorWriter;
                if (destination != null) {
                    destination.print(diagnosticText);
                    destination.flush();
                }
            }
        }
        logLine("build_preflight_complete scripts=" + builds.size() +
            " failures=" + buildFailures);
        if (!failed.isEmpty())
            throw new IllegalStateException("Ghidra script build preflight failed for " +
                String.join(", ", failed) + "; see " +
                activeRun.resolve("build_manifest.tsv"));
    }

    private void step(String script, String... args) throws Exception {
        monitor.checkCancelled();
        Path source = repository.resolve("scripts").resolve(script);
        if (!Files.isRegularFile(source))
            throw new IllegalStateException("Pipeline script is missing: " + source);
        String argument = Arrays.stream(args).map(this::portableArgument)
            .collect(java.util.stream.Collectors.joining(" | "));
        int ordinal = ++sequence;
        println(String.format(Locale.ROOT, "[%02d] %s%s", ordinal, script,
            argument.isBlank() ? "" : " <- " + argument));
        logLine("step_start sequence=" + ordinal + " script=" + script +
            (argument.isBlank() ? "" : " argument=" + argument));
        event("step_start", ordinal, script, "running", 0, -1, -1, argument);
        Instant started = Instant.now();
        lastStepMutatedProgram = false;
        long modificationBefore = currentProgram.getModificationNumber();
        long modificationAfter = modificationBefore;
        String sourceHash = sha256(source);
        StepCapture capture = startStepCapture(ordinal, script, argument, sourceHash,
            modificationBefore);
        Throwable failure = null;
        try {
            // A committed child can enqueue auto-analysis just after the preceding post-step
            // drain observed an empty queue. Drain again at the consumer boundary instead of
            // mistaking Ghidra's own transaction for a leaked script transaction.
            settleBackgroundAnalysis("before " + script);
            requireNoOpenTransaction("before " + script);
            modificationBefore = currentProgram.getModificationNumber();
            runScript(script, args);
            settleBackgroundAnalysis("after " + script);
            requireNoOpenTransaction("after " + script);
            modificationAfter = currentProgram.getModificationNumber();
        }
        catch (Throwable problem) {
            failure = problem;
            modificationAfter = currentProgram.getModificationNumber();
        }
        long milliseconds = Duration.between(started, Instant.now()).toMillis();
        try {
            finishStepCapture(capture, failure == null ? "completed" : "failed",
                milliseconds, modificationBefore, modificationAfter, failure);
        }
        catch (Throwable loggingFailure) {
            if (failure == null) failure = loggingFailure;
            else failure.addSuppressed(loggingFailure);
        }
        if (failure != null) {
            report.add(new PipelineRow(ordinal, script, "failed", milliseconds, argument,
                message(failure)));
            logLine("step_failed sequence=" + ordinal + " script=" + script +
                " duration_ms=" + milliseconds + " error=" + message(failure) +
                " log=" + activeRun.relativize(capture.directory));
            event("step_failed", ordinal, script, "failed", milliseconds,
                modificationBefore, modificationAfter, message(failure) +
                    "; log=" + activeRun.relativize(capture.directory));
            flushReport();
            rethrow(failure);
        }
        lastStepMutatedProgram = modificationAfter != modificationBefore;
        if (lastStepMutatedProgram) programMutationObserved = true;
        String detail = modificationAfter == modificationBefore ? "" :
            "program_modification=" + modificationBefore + "->" + modificationAfter;
        report.add(new PipelineRow(ordinal, script, "completed", milliseconds, argument,
            detail));
        logLine("step_complete sequence=" + ordinal + " script=" + script +
            " duration_ms=" + milliseconds + (detail.isBlank() ? "" : " " + detail) +
            " log=" + activeRun.relativize(capture.directory));
        event("step_complete", ordinal, script, "completed", milliseconds,
            modificationBefore, modificationAfter,
            detail + (detail.isBlank() ? "" : "; ") +
                "log=" + activeRun.relativize(capture.directory));
        flushReport();
    }

    private StepCapture startStepCapture(int ordinal, String script, String argument,
            String sourceHash, long modification) throws Exception {
        Path directory = activeRun.resolve("steps").resolve(
            String.format(Locale.ROOT, "%03d-%s", ordinal,
                script.replaceAll("[^A-Za-z0-9._-]+", "_")));
        Files.createDirectories(directory);
        BufferedWriter stdoutFile = Files.newBufferedWriter(directory.resolve("stdout.log"),
            StandardCharsets.UTF_8, StandardOpenOption.CREATE,
            StandardOpenOption.TRUNCATE_EXISTING);
        BufferedWriter stderrFile;
        try {
            stderrFile = Files.newBufferedWriter(directory.resolve("stderr.log"),
                StandardCharsets.UTF_8, StandardOpenOption.CREATE,
                StandardOpenOption.TRUNCATE_EXISTING);
        }
        catch (Exception failure) {
            stdoutFile.close();
            throw failure;
        }
        PrintWriter previousWriter = writer;
        PrintWriter previousErrorWriter = errorWriter;
        PrintWriter stepWriter = new PrintWriter(
            new TeeWriter(previousWriter, stdoutFile), true);
        PrintWriter stepErrorWriter = new PrintWriter(
            new TeeWriter(previousErrorWriter, stderrFile), true);
        StepCapture capture = new StepCapture(directory, script, argument, sourceHash,
            previousWriter, previousErrorWriter, stepWriter, stepErrorWriter,
            stdoutFile, stderrFile);
        try {
            Files.writeString(directory.resolve("step.json"),
                stepMetadata(capture, "running", 0, modification, modification, null),
                StandardCharsets.UTF_8, StandardOpenOption.CREATE,
                StandardOpenOption.TRUNCATE_EXISTING);
        }
        catch (Exception failure) {
            stdoutFile.close();
            stderrFile.close();
            throw failure;
        }
        writer = stepWriter;
        errorWriter = stepErrorWriter;
        return capture;
    }

    private void finishStepCapture(StepCapture capture, String status, long duration,
            long modificationBefore, long modificationAfter, Throwable failure)
            throws Exception {
        if (capture.closed) return;
        Throwable outputFailure = null;
        try {
            capture.stepWriter.flush();
            capture.stepErrorWriter.flush();
            if (capture.stepWriter.checkError() || capture.stepErrorWriter.checkError())
                outputFailure = new IOException("Could not write complete step stdout/stderr");
        }
        catch (Throwable problem) {
            outputFailure = problem;
        }
        finally {
            writer = capture.previousWriter;
            errorWriter = capture.previousErrorWriter;
            try { capture.stdoutFile.close(); }
            catch (Throwable problem) {
                if (outputFailure == null) outputFailure = problem;
                else outputFailure.addSuppressed(problem);
            }
            try { capture.stderrFile.close(); }
            catch (Throwable problem) {
                if (outputFailure == null) outputFailure = problem;
                else outputFailure.addSuppressed(problem);
            }
            capture.closed = true;
        }
        if (failure != null)
            Files.writeString(capture.directory.resolve("exception.txt"),
                stackTrace(failure), StandardCharsets.UTF_8,
                StandardOpenOption.CREATE, StandardOpenOption.TRUNCATE_EXISTING);
        Files.writeString(capture.directory.resolve("step.json"),
            stepMetadata(capture, status, duration, modificationBefore,
                modificationAfter, failure),
            StandardCharsets.UTF_8, StandardOpenOption.CREATE,
            StandardOpenOption.TRUNCATE_EXISTING);
        if (outputFailure != null) rethrow(outputFailure);
    }

    private String stepMetadata(StepCapture capture, String status, long duration,
            long modificationBefore, long modificationAfter, Throwable failure) {
        return "{" +
            "\"schema\":\"st-pipeline-step\"," +
            "\"schema_version\":1," +
            "\"script\":" + q(capture.script) + "," +
            "\"source_sha256\":" + q(capture.sourceHash) + "," +
            "\"argument\":" + q(capture.argument) + "," +
            "\"status\":" + q(status) + "," +
            "\"duration_ms\":" + duration + "," +
            "\"program_modification_before\":" + modificationBefore + "," +
            "\"program_modification_after\":" + modificationAfter + "," +
            "\"error\":" + q(failure == null ? "" : message(failure)) +
            "}\n";
    }

    private void section(String name) throws Exception {
        currentSection = name;
        println("\n== " + name + " ==");
        logLine("section " + name);
        event("section", sequence, "", "", 0, -1, -1, name);
    }

    private void requireNoOpenTransaction(String context) throws Exception {
        TransactionInfo transaction = currentProgram.getCurrentTransactionInfo();
        if (completedTransactionSnapshot(transaction)) return;
        // Close the remaining race between waitForAnalysis() returning and the analysis
        // worker publishing/closing its Program transaction.  Only Ghidra's exact outer
        // transaction is waitable here; a child-owned transaction still fails immediately.
        if (transaction != null && autoAnalysisBoundaryOpen(transaction)) {
            settleBackgroundAnalysis(context);
            transaction = currentProgram.getCurrentTransactionInfo();
        }
        if (completedTransactionSnapshot(transaction)) return;
        if (transaction != null)
            throw new IllegalStateException("Unexpected open Program transaction " + context +
                ": description=" + transaction.getDescription() +
                ", status=" + transaction.getStatus() +
                ", open_subtransactions=" + transaction.getOpenSubTransactions());
    }

    private void settleBackgroundAnalysis(String context) throws Exception {
        AutoAnalysisManager analysis =
            AutoAnalysisManager.getAnalysisManager(currentProgram);
        boolean announced = analysis.isAnalyzing();
        if (announced)
            println("Waiting for Ghidra auto-analysis " + context + "...");
        // Do not guard this call with isAnalyzing(): Ghidra clears that flag slightly before
        // AnalysisWorkerCommand closes its outer Program transaction.
        analysis.waitForAnalysis(null, monitor);
        for (int attempt = 0; attempt < 500; attempt++) {
            monitor.checkCancelled();
            TransactionInfo transaction = currentProgram.getCurrentTransactionInfo();
            if (transaction == null || completedTransactionSnapshot(transaction) ||
                    !autoAnalysisBoundaryOpen(transaction)) return;
            if (!announced) {
                println("Waiting for Ghidra auto-analysis transaction " + context + "...");
                announced = true;
            }
            if (analysis.isAnalyzing()) analysis.waitForAnalysis(null, monitor);
            else Thread.sleep(10);
        }
    }

    /**
     * Ghidra may briefly retain the just-finished TransactionInfo snapshot after
     * endTransaction() has committed its DB transaction and emptied every nested entry.
     * Such a snapshot is terminal, not an open transaction.  Do not generalize this to
     * ABORTED: a child that silently rolled back must still stop the pipeline.
     */
    private boolean completedTransactionSnapshot(TransactionInfo transaction) {
        return transaction != null &&
            transaction.getStatus() == TransactionInfo.Status.COMMITTED &&
            transaction.getOpenSubTransactions().isEmpty();
    }

    /**
     * Ghidra can retain the just-ended script transaction as the outer entry while an
     * Auto Analysis subtransaction drains.  In that state the description is the script's
     * transaction name (for example "Apply recovered switch enums"), not "Auto Analysis".
     * Waiting is still safe: once the auto-analysis child closes, a genuinely leaked script
     * transaction remains visible without an Auto Analysis child and the boundary check fails.
     */
    private boolean autoAnalysisBoundaryOpen(TransactionInfo transaction) {
        List<String> open = transaction.getOpenSubTransactions();
        if (!open.isEmpty() && open.stream().allMatch("Auto Analysis"::equals))
            return true;
        return open.isEmpty() && "Auto Analysis".equals(transaction.getDescription());
    }

    private void skipped(String script, String argument, String detail) throws Exception {
        int ordinal = ++sequence;
        println(String.format(Locale.ROOT, "[%02d] %s skipped: %s", ordinal, script, detail));
        report.add(new PipelineRow(ordinal, script, "skipped", 0, argument, detail));
        logLine("step_skipped sequence=" + ordinal + " script=" + script +
            " detail=" + detail);
        event("step_skipped", ordinal, script, "skipped", 0, -1, -1, detail);
        flushReport();
    }

    private String portableArgument(String value) {
        try {
            Path path = Path.of(value);
            if (path.isAbsolute() && path.normalize().startsWith(repository))
                return "<repo>/" + repository.relativize(path.normalize())
                    .toString().replace(File.separatorChar, '/');
        }
        catch (Exception ignored) { }
        return value;
    }

    /**
     * The analyzer/applier artifacts are the recovery state. Enabled proposals say what was
     * eligible for this pass; result statuses split it into progress, settled rows, review,
     * conflicts, and errors. Only progress is iterated. Program's modification number is an
     * independent proof that the reported progress really changed the database.
     */
    private int convergenceMutationCount(String applier, Path proposals, Path applyReport,
            Set<String> mutatingStatuses) throws Exception {
        RecoveryState state = recoveryState(proposals, applyReport, mutatingStatuses);
        String summary = "proposals_enabled=" + state.enabledProposals +
            ", proposals_review=" + state.reviewProposals +
            ", changed=" + state.changed + ", unchanged=" + state.unchanged +
            ", review=" + state.review + ", conflict=" + state.conflict +
            ", error=" + state.error +
            (state.other.isEmpty() ? "" : ", other=" + state.other);
        annotateLastStep(applier, "recovery_state: " + summary);
        println(applier + " state: " + summary);
        logLine("recovery_state script=" + applier + " " + summary);
        snapshotPassArtifacts(applier, proposals, applyReport);
        if (state.changed > 0 && !lastStepMutatedProgram) {
            println(applier + ": ignored " + state.changed +
                " mutating report row(s) because Program did not change");
            return 0;
        }
        if (state.changed == 0 && lastStepMutatedProgram) {
            println(applier + ": Program modification counter advanced without a mutating " +
                "report row; treating report state as settled (rolled-back row transactions " +
                "can advance Ghidra's diagnostic counter)");
            logLine("diagnostic_modification_without_reported_mutation script=" + applier);
            return 0;
        }
        return state.changed;
    }

    private void annotateLastStep(String script, String detail) throws Exception {
        if (report.isEmpty()) return;
        int index = report.size() - 1;
        PipelineRow row = report.get(index);
        if (!row.script.equals(script)) return;
        String combined = row.detail.isBlank() ? detail : row.detail + "; " + detail;
        report.set(index, new PipelineRow(row.sequence, row.script, row.status,
            row.durationMilliseconds, row.argument, combined));
        flushReport();
    }

    private RecoveryState recoveryState(Path proposals, Path applyReport,
            Set<String> mutatingStatuses) throws Exception {
        if (!Files.isRegularFile(applyReport))
            throw new IllegalStateException("Missing apply report: " + applyReport);
        int enabledProposals = 0;
        int reviewProposals = 0;
        List<String> proposalLines = Files.readAllLines(proposals, StandardCharsets.UTF_8);
        if (!proposalLines.isEmpty()) {
            String[] header = proposalLines.get(0).split("\\t", -1);
            List<Integer> applyColumns = new ArrayList<>();
            for (int column = 0; column < header.length; column++)
                if ("apply".equals(header[column]) || header[column].endsWith("_apply"))
                    applyColumns.add(column);
            for (int line = 1; line < proposalLines.size(); line++) {
                if (proposalLines.get(line).isBlank()) continue;
                String[] values = proposalLines.get(line).split("\\t", -1);
                boolean rowEnabled = applyColumns.isEmpty();
                for (int column : applyColumns)
                    if (column < values.length && enabled(values[column])) {
                        rowEnabled = true;
                        break;
                    }
                if (rowEnabled) enabledProposals++;
                else reviewProposals++;
            }
        }

        Map<String, Integer> statuses = new TreeMap<>();
        List<String> reportLines =
            Files.readAllLines(applyReport, StandardCharsets.UTF_8);
        if (!reportLines.isEmpty()) {
            String[] header = reportLines.get(0).split("\\t", -1);
            List<Integer> statusColumns = new ArrayList<>();
            for (int column = 0; column < header.length; column++)
                if ("status".equals(header[column]) || header[column].endsWith("_status"))
                    statusColumns.add(column);
            if (statusColumns.isEmpty())
                throw new IllegalStateException("Apply report has no status or *_status " +
                    "column: " + applyReport);
            for (int line = 1; line < reportLines.size(); line++) {
                if (reportLines.get(line).isBlank()) continue;
                String[] values = reportLines.get(line).split("\\t", -1);
                for (int column : statusColumns) {
                    String status = column < values.length ? values[column] : "";
                    statuses.merge(status.isBlank() ? "<blank>" : status,
                        1, Integer::sum);
                }
            }
        }

        int changed = statusCount(statuses, mutatingStatuses);
        int unchanged = statusCount(statuses, UNCHANGED_STATUSES);
        int review = statusCount(statuses, REVIEW_STATUSES);
        int conflict = statusCount(statuses, CONFLICT_STATUSES);
        int error = statusCount(statuses, ERROR_STATUSES);
        Map<String, Integer> other = new TreeMap<>(statuses);
        for (String status : mutatingStatuses) other.remove(status);
        for (String status : UNCHANGED_STATUSES) other.remove(status);
        for (String status : REVIEW_STATUSES) other.remove(status);
        for (String status : CONFLICT_STATUSES) other.remove(status);
        for (String status : ERROR_STATUSES) other.remove(status);
        for (int count : other.values()) error += count;
        return new RecoveryState(enabledProposals, reviewProposals, changed,
            unchanged, review, conflict, error, other);
    }

    private int statusCount(Map<String, Integer> statuses, Set<String> selected) {
        int result = 0;
        for (String status : selected) result += statuses.getOrDefault(status, 0);
        return result;
    }

    private boolean enabled(String value) {
        return "1".equals(value) || "true".equalsIgnoreCase(value) ||
            "yes".equalsIgnoreCase(value);
    }

    private int indexOf(String[] values, String wanted) {
        for (int index = 0; index < values.length; index++)
            if (wanted.equals(values[index])) return index;
        return -1;
    }

    private Path requireFile(String name, String hint) {
        Path path = recoveryProgram.resolve(name);
        if (!Files.isRegularFile(path))
            throw new IllegalStateException("Missing " + path +
                (hint == null ? "" : ". " + hint));
        return path;
    }

    private boolean hasDataRows(Path path) throws Exception {
        if (!Files.isRegularFile(path)) return false;
        try (java.io.BufferedReader reader = Files.newBufferedReader(path,
                StandardCharsets.UTF_8)) {
            if (reader.readLine() == null) return false;
            String line;
            while ((line = reader.readLine()) != null)
                if (!line.isBlank()) return true;
        }
        return false;
    }

    private void startRun(String mode, Instant started) throws Exception {
        runsRoot = recoveryProgram.resolve("runs");
        Files.createDirectories(runsRoot);
        activeRun = runsRoot.resolve(".current");
        archiveInterruptedRun();
        Files.createDirectories(activeRun.resolve("passes"));
        Files.createDirectories(activeRun.resolve("artifacts"));
        Files.createDirectories(activeRun.resolve("build"));
        Files.createDirectories(activeRun.resolve("steps"));
        eventsPath = activeRun.resolve("events.jsonl");
        logPath = activeRun.resolve("pipeline.log");
        Files.writeString(eventsPath, "", StandardCharsets.UTF_8,
            StandardOpenOption.CREATE, StandardOpenOption.TRUNCATE_EXISTING);
        Files.writeString(logPath, "", StandardCharsets.UTF_8,
            StandardOpenOption.CREATE, StandardOpenOption.TRUNCATE_EXISTING);
        runStarted = started;
        runMode = mode;
        runModificationBefore = currentProgram.getModificationNumber();
        logLine("pipeline_start mode=" + mode + " program=" + currentProgram.getName() +
            " modification=" + runModificationBefore);
        event("run_start", 0, "", "running", 0, runModificationBefore,
            runModificationBefore, "mode=" + mode);
    }

    private void archiveInterruptedRun() throws Exception {
        if (activeRun == null || !Files.isDirectory(activeRun)) return;
        Files.writeString(activeRun.resolve("run.json"),
            "{\"schema\":\"st-pipeline-run\",\"schema_version\":1," +
            "\"status\":\"interrupted\"}\n", StandardCharsets.UTF_8);
        String id = hashTree(activeRun);
        moveRun(activeRun, runsRoot.resolve(id));
        pruneRunHistory();
    }

    private void finishRun(String status, Throwable failure) throws Exception {
        if (activeRun == null || !Files.isDirectory(activeRun)) return;
        event("run_finish", sequence, "", status, elapsedMilliseconds(),
            runModificationBefore, currentProgram.getModificationNumber(),
            failure == null ? "" : message(failure));
        snapshotRunArtifact(reportPath, "pipeline_report.tsv");
        for (String name : List.of("automation_state.tsv", "automation_evidence.jsonl",
                "switch_enum_domains.tsv", "export_regression_report.tsv",
                "export_receipt.json"))
            snapshotRunArtifact(recoveryProgram.resolve(name), name);
        if (failure != null)
            Files.writeString(activeRun.resolve("exception.txt"), stackTrace(failure),
                StandardCharsets.UTF_8);
        String semantic = semanticHash();
        String id = overallRunHash(status, semantic, failure);
        long duration = elapsedMilliseconds();
        String metadata = "{" +
            "\"schema\":\"st-pipeline-run\"," +
            "\"schema_version\":1," +
            "\"run_hash\":" + q(id) + "," +
            "\"program_semantic_sha256\":" + q(semantic) + "," +
            "\"mode\":" + q(runMode) + "," +
            "\"status\":" + q(status) + "," +
            "\"duration_ms\":" + duration + "," +
            "\"program_modification_before\":" + runModificationBefore + "," +
            "\"program_modification_after\":" + currentProgram.getModificationNumber() + "," +
            "\"build_script_count\":" + builds.size() + "," +
            "\"build_failure_count\":" + buildFailures + "," +
            "\"pipeline_row_count\":" + report.size() +
            "}";
        Files.writeString(activeRun.resolve("run.json"), metadata + "\n",
            StandardCharsets.UTF_8);
        logLine("run_archive hash=" + id + " status=" + status);
        Path target = runsRoot.resolve(id);
        moveRun(activeRun, target);
        Files.setLastModifiedTime(target, FileTime.from(Instant.now()));
        Files.writeString(recoveryProgram.resolve("latest_run.txt"), id + "\n",
            StandardCharsets.UTF_8);
        activeRun = null;
        pruneRunHistory();
    }

    private void moveRun(Path source, Path target) throws Exception {
        if (Files.exists(target)) deleteTree(target);
        try {
            Files.move(source, target, StandardCopyOption.ATOMIC_MOVE);
        }
        catch (IOException unsupported) {
            Files.move(source, target);
        }
    }

    private void pruneRunHistory() throws Exception {
        if (runsRoot == null || !Files.isDirectory(runsRoot)) return;
        List<Path> runs;
        try (java.util.stream.Stream<Path> stream = Files.list(runsRoot)) {
            runs = stream.filter(Files::isDirectory)
                .filter(path -> path.getFileName().toString().matches("[0-9a-f]{64}"))
                .sorted(Comparator.comparingLong(this::modifiedTime).reversed())
                .toList();
        }
        Path rejectedBaseline = lastRejectedBaseline();
        Path protectedRun = rejectedBaseline == null ? null : rejectedBaseline.getParent();
        int ordinaryKept = 0;
        for (Path run : runs) {
            if (run.equals(protectedRun) || ordinaryKept++ < MAX_RUN_HISTORY) continue;
            deleteTree(run);
        }
    }

    private long modifiedTime(Path path) {
        try { return Files.getLastModifiedTime(path).toMillis(); }
        catch (IOException ignored) { return Long.MIN_VALUE; }
    }

    private void deleteTree(Path path) throws Exception {
        Path normalized = path.toAbsolutePath().normalize();
        Path root = runsRoot.toAbsolutePath().normalize();
        if (normalized.equals(root) || !normalized.startsWith(root))
            throw new IllegalArgumentException("Refusing to remove path outside run history: " + path);
        if (!Files.exists(normalized)) return;
        try (java.util.stream.Stream<Path> stream = Files.walk(normalized)) {
            for (Path item : stream.sorted(Comparator.reverseOrder()).toList())
                Files.deleteIfExists(item);
        }
    }

    private Path snapshotPreviousExport() throws Exception {
        if (activeRun == null) return null;
        Path current = decompRoot.resolve(currentProgram.getName());
        if (!Files.isRegularFile(current.resolve("manifest.json"))) return null;
        Path sourceDirectory = current;
        Path rejectedBaseline = lastRejectedBaseline();
        if (rejectedBaseline != null) {
            sourceDirectory = rejectedBaseline;
            println("Preserving the last accepted export baseline after a failed gate: " +
                rejectedBaseline);
            logLine("export_baseline_recovered_from_failed_run path=" +
                portableArgument(rejectedBaseline.toString()));
        }
        else if (lastReceiptFailed()) {
            throw new IllegalStateException("The preceding export failed its regression gate, " +
                "but its accepted pre-export baseline is no longer available under " +
                runsRoot + "; refusing to promote the rejected corpus as a new baseline");
        }
        Path baseline = activeRun.resolve("pre_export");
        if (Files.exists(baseline)) deleteTree(baseline);
        Files.createDirectories(baseline);
        for (String name : List.of("manifest.json", "functions.json", "types.jsonl",
                "decomp_quality_summary.json", "pseudocode_idioms.jsonl")) {
            Path source = sourceDirectory.resolve(name);
            if (Files.isRegularFile(source))
                Files.copy(source, baseline.resolve(name), StandardCopyOption.REPLACE_EXISTING);
        }
        logLine("export_baseline_snapshot path=" + portableArgument(baseline.toString()));
        return baseline;
    }

    /**
     * A failed gate has already overwritten decomp/ with the rejected corpus.  Recover the
     * pre-export snapshot from that failed run instead of allowing the next invocation to make
     * the regression its own baseline.
     */
    private Path lastRejectedBaseline() throws Exception {
        Path receipt = recoveryProgram == null ? null :
            recoveryProgram.resolve("export_receipt.json");
        if (receipt == null || !Files.isRegularFile(receipt) ||
                runsRoot == null || !Files.isDirectory(runsRoot)) return null;
        String rootReceipt = Files.readString(receipt, StandardCharsets.UTF_8);
        if (!"failed".equals(jsonStringField(rootReceipt, "status"))) return null;
        String expectedManifest = jsonStringField(rootReceipt,
            "previous_manifest_sha256");
        if (!expectedManifest.matches("[0-9a-f]{64}")) return null;
        List<Path> runs;
        try (java.util.stream.Stream<Path> stream = Files.list(runsRoot)) {
            runs = stream.filter(Files::isDirectory)
                .filter(path -> path.getFileName().toString().matches("[0-9a-f]{64}"))
                .sorted(Comparator.comparingLong(this::modifiedTime).reversed())
                .toList();
        }
        for (Path run : runs) {
            Path candidate = run.resolve("pre_export");
            Path manifest = candidate.resolve("manifest.json");
            if (Files.isRegularFile(manifest) &&
                    expectedManifest.equals(sha256(manifest))) return candidate;
        }
        return null;
    }

    private boolean lastReceiptFailed() throws Exception {
        Path receipt = recoveryProgram == null ? null :
            recoveryProgram.resolve("export_receipt.json");
        return receipt != null && Files.isRegularFile(receipt) &&
            "failed".equals(jsonStringField(
                Files.readString(receipt, StandardCharsets.UTF_8), "status"));
    }

    private String jsonStringField(String json, String field) {
        String prefix = "\"" + field + "\":\"";
        int start = json.indexOf(prefix);
        if (start < 0) return "";
        start += prefix.length();
        int end = json.indexOf('"', start);
        return end < 0 ? "" : json.substring(start, end);
    }

    private void snapshotPassArtifacts(String script, Path proposals, Path applyReport)
            throws Exception {
        if (activeRun == null) return;
        Path directory = activeRun.resolve("passes").resolve(
            String.format(Locale.ROOT, "%03d-%s", sequence,
                script.replaceAll("[^A-Za-z0-9._-]+", "_")));
        Files.createDirectories(directory);
        if (Files.isRegularFile(proposals))
            Files.copy(proposals, directory.resolve(proposals.getFileName()),
                StandardCopyOption.REPLACE_EXISTING);
        if (applyReport != null && Files.isRegularFile(applyReport))
            Files.copy(applyReport, directory.resolve(applyReport.getFileName()),
                StandardCopyOption.REPLACE_EXISTING);
    }

    private void snapshotRunArtifact(Path source, String name) throws Exception {
        if (activeRun == null || !Files.isRegularFile(source)) return;
        Path target = activeRun.resolve("artifacts").resolve(name);
        Files.createDirectories(target.getParent());
        Files.copy(source, target, StandardCopyOption.REPLACE_EXISTING);
    }

    private void logLine(String value) throws Exception {
        if (logPath == null) return;
        String line = String.format(Locale.ROOT, "%08dms %s%n", elapsedMilliseconds(), value);
        Files.writeString(logPath, line, StandardCharsets.UTF_8,
            StandardOpenOption.CREATE, StandardOpenOption.APPEND);
    }

    private void event(String kind, int ordinal, String script, String status,
            long duration, long modificationBefore, long modificationAfter, String detail)
            throws Exception {
        if (eventsPath == null) return;
        String row = "{" +
            "\"elapsed_ms\":" + elapsedMilliseconds() + "," +
            "\"kind\":" + q(kind) + "," +
            "\"section\":" + q(currentSection) + "," +
            "\"sequence\":" + ordinal + "," +
            "\"script\":" + q(script) + "," +
            "\"status\":" + q(status) + "," +
            "\"duration_ms\":" + duration + "," +
            "\"program_modification_before\":" + modificationBefore + "," +
            "\"program_modification_after\":" + modificationAfter + "," +
            "\"detail\":" + q(detail) +
            "}\n";
        Files.writeString(eventsPath, row, StandardCharsets.UTF_8,
            StandardOpenOption.CREATE, StandardOpenOption.APPEND);
    }

    private long elapsedMilliseconds() {
        return runStarted == null ? 0 : Duration.between(runStarted, Instant.now()).toMillis();
    }

    private String semanticHash() throws Exception {
        Path state = recoveryProgram.resolve("automation_state.tsv");
        if (!Files.isRegularFile(state)) return "";
        for (String line : Files.readAllLines(state, StandardCharsets.UTF_8)) {
            String[] values = line.split("\t", -1);
            if (values.length == 4 && "program".equals(values[0]) &&
                    "semantic_sha256".equals(values[1]) &&
                    values[2].matches("[0-9a-f]{64}")) return values[2];
        }
        return "";
    }

    private String overallRunHash(String status, String semantic, Throwable failure)
            throws Exception {
        StringBuilder value = new StringBuilder();
        value.append("program=").append(currentProgram.getName()).append('\n');
        value.append("semantic=").append(semantic).append('\n');
        value.append("mode=").append(runMode).append('\n');
        value.append("status=").append(status).append('\n');
        for (BuildRow row : builds)
            value.append("build|").append(row.script).append('|').append(row.sourceHash)
                .append('|').append(row.status).append('\n');
        for (PipelineRow row : report)
            value.append(row.sequence).append('|').append(row.script).append('|')
                .append(row.status).append('|').append(row.argument).append('|')
                .append(row.detail).append('\n');
        if (failure != null) value.append(stackTrace(failure));
        return sha256(value.toString());
    }

    private String hashTree(Path root) throws Exception {
        MessageDigest digest = MessageDigest.getInstance("SHA-256");
        try (java.util.stream.Stream<Path> stream = Files.walk(root)) {
            for (Path path : stream.filter(Files::isRegularFile).sorted().toList()) {
                digest.update(root.relativize(path).toString().getBytes(StandardCharsets.UTF_8));
                try (InputStream input = Files.newInputStream(path)) {
                    byte[] buffer = new byte[65536];
                    int count;
                    while ((count = input.read(buffer)) >= 0)
                        if (count > 0) digest.update(buffer, 0, count);
                }
            }
        }
        return hex(digest.digest());
    }

    private String sha256(String value) throws Exception {
        MessageDigest digest = MessageDigest.getInstance("SHA-256");
        return hex(digest.digest(value.getBytes(StandardCharsets.UTF_8)));
    }

    private String sha256(Path path) throws Exception {
        MessageDigest digest = MessageDigest.getInstance("SHA-256");
        try (InputStream input = Files.newInputStream(path)) {
            byte[] buffer = new byte[65536];
            int count;
            while ((count = input.read(buffer)) >= 0)
                if (count > 0) digest.update(buffer, 0, count);
        }
        return hex(digest.digest());
    }

    private String hex(byte[] bytes) {
        StringBuilder result = new StringBuilder();
        for (byte value : bytes) result.append(String.format("%02x", value & 0xff));
        return result.toString();
    }

    private String stackTrace(Throwable throwable) {
        StringWriter text = new StringWriter();
        throwable.printStackTrace(new PrintWriter(text));
        return text.toString();
    }

    private static String q(String value) {
        return "\"" + tsv(value == null ? "" : value).replace("\"", "\\\"") + "\"";
    }

    private void validateRepository() {
        if (!Files.isDirectory(repository.resolve("scripts")) ||
                !Files.isRegularFile(repository.resolve("scripts/STRecoveryPipeline.java")) ||
                !Files.isRegularFile(repository.resolve("scripts/STExportRegressionGate.java")) ||
                !Files.isDirectory(repository.resolve("recovery")))
            throw new IllegalStateException("Could not validate repository root " + repository +
                "; expected scripts/ and recovery/ beside each other");
    }

    private PipelineOptions options() throws Exception {
        String[] args = getScriptArgs();
        String mode;
        Path root;
        if (args.length > 0 && !args[0].isBlank()) {
            mode = normalizeMode(args[0]);
            root = args.length > 1 && !args[1].isBlank() ?
                Path.of(args[1]).toAbsolutePath().normalize() : inferredRepository();
        }
        else if (isRunningHeadless()) {
            mode = "full";
            root = inferredRepository();
        }
        else {
            List<String> choices = List.of(
                "Core structural refresh",
                "Full automatic recovery",
                "Deep propagation only",
                "Export corpus only",
                "Full recovery and export");
            String selected = askChoice("Submarine Titans recovery pipeline",
                "Choose one dependency-ordered run. No paths will be requested.", choices,
                choices.get(0));
            mode = switch (selected) {
                case "Core structural refresh" -> "core";
                case "Full automatic recovery" -> "full";
                case "Deep propagation only" -> "deep";
                case "Export corpus only" -> "export";
                case "Full recovery and export" -> "full-export";
                default -> throw new IllegalArgumentException("Unknown selection " + selected);
            };
            root = inferredRepository();
        }
        return new PipelineOptions(mode, root);
    }

    private String normalizeMode(String value) {
        String mode = value.toLowerCase(Locale.ROOT).replace('_', '-');
        if (mode.equals("auto")) return "full";
        if (Set.of("core", "deep", "full", "export", "full-export").contains(mode))
            return mode;
        throw new IllegalArgumentException("Mode must be core, deep, full, export, or full-export");
    }

    private Path inferredRepository() {
        File source = new File(getSourceFile().getAbsolutePath()).getAbsoluteFile();
        File scripts = source.getParentFile();
        if (scripts == null || scripts.getParentFile() == null)
            throw new IllegalStateException("Cannot infer repository from script path " + source);
        return scripts.getParentFile().toPath().toAbsolutePath().normalize();
    }

    private void flushReport() throws Exception {
        if (reportPath == null) return;
        Files.createDirectories(reportPath.getParent());
        try (BufferedWriter out = Files.newBufferedWriter(reportPath, StandardCharsets.UTF_8)) {
            out.write("sequence\tscript\tstatus\tduration_ms\targument\tdetail\n");
            for (PipelineRow row : report) {
                String detail = tsv(row.detail);
                out.write(row.sequence + "\t" + tsv(row.script) +
                    "\t" + row.status + "\t" + row.durationMilliseconds + "\t" +
                    tsv(row.argument) + "\t" + (detail.isBlank() ? "-" : detail) + "\n");
            }
        }
        if (activeRun != null && Files.isDirectory(activeRun))
            Files.copy(reportPath, activeRun.resolve("pipeline_report.tsv"),
                StandardCopyOption.REPLACE_EXISTING);
    }

    private static String tsv(String value) {
        return value == null ? "" : value.replace("\\", "\\\\").replace("\t", "\\t")
            .replace("\r", "\\r").replace("\n", "\\n");
    }

    private static String message(Throwable throwable) {
        String value = throwable.getMessage();
        return value == null || value.isBlank() ? throwable.getClass().getSimpleName() : value;
    }

    private static void rethrow(Throwable failure) throws Exception {
        if (failure instanceof Exception exception) throw exception;
        if (failure instanceof Error error) throw error;
        throw new RuntimeException(failure);
    }

    private static final class TeeWriter extends Writer {
        private final Writer console;
        private final Writer log;

        TeeWriter(Writer console, Writer log) {
            this.console = console;
            this.log = log;
        }

        @Override
        public void write(char[] buffer, int offset, int length) throws IOException {
            if (console != null) console.write(buffer, offset, length);
            log.write(buffer, offset, length);
        }

        @Override
        public void flush() throws IOException {
            if (console != null) console.flush();
            log.flush();
        }

        @Override
        public void close() throws IOException {
            flush();
        }
    }

    private static final class StepCapture {
        final Path directory;
        final String script;
        final String argument;
        final String sourceHash;
        final PrintWriter previousWriter;
        final PrintWriter previousErrorWriter;
        final PrintWriter stepWriter;
        final PrintWriter stepErrorWriter;
        final BufferedWriter stdoutFile;
        final BufferedWriter stderrFile;
        boolean closed;

        StepCapture(Path directory, String script, String argument, String sourceHash,
                PrintWriter previousWriter, PrintWriter previousErrorWriter,
                PrintWriter stepWriter, PrintWriter stepErrorWriter,
                BufferedWriter stdoutFile, BufferedWriter stderrFile) {
            this.directory = directory;
            this.script = script;
            this.argument = argument;
            this.sourceHash = sourceHash;
            this.previousWriter = previousWriter;
            this.previousErrorWriter = previousErrorWriter;
            this.stepWriter = stepWriter;
            this.stepErrorWriter = stepErrorWriter;
            this.stdoutFile = stdoutFile;
            this.stderrFile = stderrFile;
        }
    }

    private record PipelineOptions(String mode, Path repository) { }
    private record RecoveryState(int enabledProposals, int reviewProposals, int changed,
        int unchanged, int review, int conflict, int error, Map<String, Integer> other) { }
    private record PipelineRow(int sequence, String script, String status,
        long durationMilliseconds, String argument, String detail) { }
    private record BuildRow(String script, String sourceHash, String status,
        long durationMilliseconds, String log) { }
}
