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
import ghidra.util.SystemUtilities;

public class STRecoveryPipeline extends GhidraScript {
    private static final int MAX_BOOTSTRAP_PASSES = 24;
    private static final int MAX_STRUCTURAL_PASSES = 24;
    private static final int MAX_DEEP_PASSES = 12;
    private static final int MAX_RUN_HISTORY = 3;
    private static final String ANALYZER_CACHE_SCHEMA = "1";
    private static final Map<String, List<String>> CACHEABLE_ANALYZER_OUTPUTS = Map.ofEntries(
        Map.entry("STDArrayElementAnalyzer.java", List.of(
            "darray_element_proposals.tsv", "darray_element_field_proposals.tsv",
            "darray_element_local_proposals.tsv", "darray_element_decompile_failures.tsv",
            "darray_element_summary.txt")),
        Map.entry("STDArrayPointerElementAnalyzer.java", List.of(
            "darray_pointer_element_proposals.tsv",
            "darray_pointer_output_proposals.tsv",
            "darray_pointer_element_failures.tsv",
            "darray_pointer_element_summary.txt")),
        Map.entry("STPointerShapeAnalyzer.java", List.of(
            "pointer_shape_type_proposals.tsv", "pointer_shape_field_proposals.tsv",
            "pointer_shape_target_proposals.tsv", "pointer_shape_decompile_failures.tsv",
            "pointer_shape_call_type_edges.tsv", "pointer_shape_summary.txt")),
        Map.entry("STSwitchEnumAnalyzer.java", List.of(
            "switch_enum_proposals.tsv", "switch_enum_decompile_retries.tsv",
            "switch_enum_decompile_failures.tsv", "switch_enum_domains.tsv",
            "switch_enum_composition_audit.tsv",
            "switch_enum_summary.txt")),
        Map.entry("STJumpTableBoundaryAnalyzer.java", List.of(
            "jump_table_boundary_proposals.tsv",
            "jump_table_boundary_summary.txt")),
        Map.entry("STDiscriminatedPayloadAnalyzer.java", List.of(
            "discriminated_payload_proposals.tsv",
            "discriminated_stack_proposals.tsv",
            "discriminated_payload_summary.txt")),
        Map.entry("STPointerRoleRepairAnalyzer.java", List.of(
            "pointer_role_repair_proposals.tsv",
            "pointer_role_repair_failures.tsv",
            "pointer_role_repair_summary.txt")),
        Map.entry("STPrototypeAnalyzer.java", List.of(
            "prototype_proposals.tsv", "prototype_callsite_audit.tsv",
            "prototype_undefined_boundary_audit.tsv",
            "prototype_byte_buffer_audit.tsv", "prototype_summary.txt")),
        Map.entry("STLocalLifetimeAnalyzer.java", List.of(
            "local_lifetime_proposals.tsv", "local_lifetime_failures.tsv",
            "local_lifetime_summary.txt")),
        Map.entry("STControlFlowLabelAnalyzer.java", List.of(
            "control_flow_label_proposals.tsv", "control_flow_label_unresolved.tsv",
            "control_flow_label_summary.txt")),
        Map.entry("STFunctionPointerParameterAnalyzer.java", List.of(
            "function_pointer_parameter_proposals.tsv",
            "function_pointer_parameter_summary.txt")),
        Map.entry("STFunctionPointerFieldAnalyzer.java", List.of(
            "function_pointer_field_proposals.tsv",
            "function_pointer_field_machine_stores.tsv",
            "function_pointer_field_failures.tsv",
            "function_pointer_field_summary.txt")),
        Map.entry("STAllocationRecordAnalyzer.java", List.of(
            "allocation_record_proposals.tsv",
            "allocation_record_machine_audit.tsv",
            "allocation_record_summary.txt")),
        Map.entry("STRecursivePointeeAnalyzer.java", List.of(
            "recursive_pointee_proposals.tsv",
            "recursive_pointee_audit.tsv",
            "recursive_pointee_failures.tsv",
            "recursive_pointee_summary.txt")),
        Map.entry("STTypeFamilyAnalyzer.java", List.of(
            "type_family_groups.tsv", "anon_named_type_matches.tsv",
            "anonymous_type_audit.tsv", "contextual_record_promotions.tsv",
            "record_identity_view_audit.tsv",
            "type_family_proposals.tsv", "polymorphic_receiver_callsites.tsv",
            "type_family_summary.txt")),
        Map.entry("STClassLayoutAnalyzer.java", List.of(
            "class_layout_proposals.tsv", "class_field_proposals.tsv",
            "class_nested_type_proposals.tsv", "class_nested_field_proposals.tsv",
            "class_layout_summary.txt")),
        Map.entry("STAbiConsistencyAnalyzer.java", List.of(
            "abi_consistency_proposals.tsv", "abi_consistency_scalar_audit.tsv",
            "abi_consistency_summary.txt")),
        Map.entry("STClassArrayAnalyzer.java", List.of(
            "class_array_proposals.tsv", "class_record_array_type_proposals.tsv",
            "class_record_array_field_proposals.tsv", "class_array_summary.txt")),
        Map.entry("STInlineAggregateAnalyzer.java", List.of(
            "inline_aggregate_proposals.tsv", "inline_aggregate_summary.txt")),
        Map.entry("STStackObjectAnalyzer.java", List.of(
            "stack_object_proposals.tsv", "stack_object_summary.txt")),
        Map.entry("STStackOutputArrayAnalyzer.java", List.of(
            "stack_output_array_proposals.tsv",
            "stack_output_array_summary.txt")),
        Map.entry("STObjectFactoryAnalyzer.java", List.of(
            "object_factory_registry.tsv", "object_factory_proposals.tsv",
            "object_type_consumer_proposals.tsv", "object_factory_summary.txt")),
        Map.entry("STVTableAnalyzer.java", List.of(
            "vtable_proposals.tsv", "vtable_slots.tsv", "vtable_relations.tsv",
            "vtable_summary.txt")),
        Map.entry("STMethodOwnerAnalyzer.java", List.of(
            "method_owner_proposals.tsv", "method_owner_summary.txt")),
        Map.entry("STGlobalRecordAnalyzer.java", List.of(
            "global_record_proposals.tsv", "global_record_field_proposals.tsv",
            "global_record_evidence.tsv", "global_record_summary.txt")),
        Map.entry("STGlobalAggregateAnalyzer.java", List.of(
            "global_aggregate_proposals.tsv", "global_aggregate_summary.txt")),
        Map.entry("STGlobalDataAnalyzer.java", List.of(
            "global_data_proposals.tsv", "global_call_boundary_audit.tsv",
            "global_pointer_audit.tsv", "global_pointer_summary.txt",
            "global_data_summary.txt")),
        Map.entry("STIndirectCallAnalyzer.java", List.of(
            "indirect_call_proposals.tsv", "indirect_call_sites.tsv",
            "indirect_call_summary.txt")),
        Map.entry("STIndirectCallsiteAnalyzer.java", List.of(
            "indirect_callsite_proposals.tsv",
            "callable_family_audit.tsv",
            "indirect_callsite_summary.txt")),
        Map.entry("STCallableReceiverAnalyzer.java", List.of(
            "callable_receiver_proposals.tsv",
            "callable_receiver_type_proposals.tsv",
            "callable_receiver_slot_proposals.tsv",
            "callable_receiver_summary.txt")),
        Map.entry("STCallResultViewAnalyzer.java", List.of(
            "call_result_view_proposals.tsv",
            "call_result_view_summary.txt")));
    private static final Map<String, List<String>> CACHEABLE_ANALYZER_INPUTS = Map.ofEntries(
        Map.entry("STDArrayElementAnalyzer.java", List.of()),
        Map.entry("STDArrayPointerElementAnalyzer.java", List.of()),
        Map.entry("STPointerShapeAnalyzer.java", List.of()),
        Map.entry("STSwitchEnumAnalyzer.java", List.of("switch_enum_domains.tsv")),
        Map.entry("STJumpTableBoundaryAnalyzer.java", List.of()),
        Map.entry("STDiscriminatedPayloadAnalyzer.java", List.of()),
        Map.entry("STPointerRoleRepairAnalyzer.java", List.of()),
        Map.entry("STPrototypeAnalyzer.java", List.of()),
        Map.entry("STLocalLifetimeAnalyzer.java", List.of()),
        Map.entry("STControlFlowLabelAnalyzer.java", List.of()),
        Map.entry("STFunctionPointerParameterAnalyzer.java", List.of()),
        Map.entry("STFunctionPointerFieldAnalyzer.java", List.of()),
        Map.entry("STAllocationRecordAnalyzer.java", List.of()),
        Map.entry("STRecursivePointeeAnalyzer.java", List.of()),
        Map.entry("STTypeFamilyAnalyzer.java", List.of(
            "vtable_proposals.tsv", "callable_family_audit.tsv",
            "prototype_callsite_audit.tsv", "pointer_shape_call_type_edges.tsv")),
        Map.entry("STClassLayoutAnalyzer.java", List.of(
            "constructor_class_sizes.tsv", "constructor_hierarchy.tsv",
            "vtable_proposals.tsv",
            "class_array_proposals.tsv", "class_record_array_type_proposals.tsv",
            "class_record_array_field_proposals.tsv",
            "inline_aggregate_proposals.tsv")),
        Map.entry("STAbiConsistencyAnalyzer.java", List.of()),
        Map.entry("STClassArrayAnalyzer.java", List.of()),
        Map.entry("STInlineAggregateAnalyzer.java", List.of()),
        Map.entry("STStackObjectAnalyzer.java", List.of()),
        Map.entry("STStackOutputArrayAnalyzer.java", List.of()),
        Map.entry("STObjectFactoryAnalyzer.java", List.of()),
        Map.entry("STVTableAnalyzer.java", List.of()),
        Map.entry("STMethodOwnerAnalyzer.java", List.of()),
        Map.entry("STGlobalRecordAnalyzer.java", List.of()),
        Map.entry("STGlobalAggregateAnalyzer.java", List.of()),
        Map.entry("STGlobalDataAnalyzer.java", List.of()),
        Map.entry("STIndirectCallAnalyzer.java", List.of("vtable_proposals.tsv")),
        Map.entry("STIndirectCallsiteAnalyzer.java", List.of(
            "indirect_call_proposals.tsv", "indirect_call_sites.tsv",
            "polymorphic_receiver_callsites.tsv")),
        Map.entry("STCallableReceiverAnalyzer.java", List.of(
            "callable_family_audit.tsv")),
        Map.entry("STCallResultViewAnalyzer.java", List.of()));
    private static final Set<String> MUTATING_STATUSES = Set.of(
        "applied", "created", "converted", "updated", "partial", "renamed", "repaired",
        "replaced", "removed", "reverted");
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
    private long lastStepModificationBefore = -1;
    private long lastStepModificationAfter = -1;
    private Path runsRoot;
    private Path activeRun;
    private Path eventsPath;
    private Path logPath;
    private long runStartedNanos;
    private String runMode = "";
    private String currentSection = "startup";
    private long runModificationBefore;
    private final List<BuildRow> builds = new ArrayList<>();
    private int buildFailures;
    private boolean darrayLegacyLocalsCleaned;
    private final Map<String, AnalyzerStamp> analyzerStamps = new LinkedHashMap<>();
    private final Map<String, AnalyzerCacheEntry> persistentAnalyzerCache =
        new LinkedHashMap<>();
    private final Map<Long, String> semanticFingerprintByModification =
        new LinkedHashMap<>();
    private String startupSemanticFingerprint = "";
    private long startupFingerprintModification = -1;
    private int analyzerEpochCacheHits;
    private int analyzerPersistentCacheHits;
    private String abiRulesHash = "";
    private String abiTransitionsHash = "";

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
        pinAbiPolicy();
        Files.createDirectories(recoveryProgram);
        Files.createDirectories(decompRoot);

        println("ST recovery pipeline: mode=" + options.mode +
            ", repository=" + repository);
        println("No proposal flags are changed by the pipeline. Review-only rows remain disabled.");
        long started = System.nanoTime();
        startRun(options.mode, started);
        try {
            preflightScripts();
            section("startup ABI validation");
            runAbiRegressionGate("startup");
            // Export now performs the same ABI-finalization analyzers as the
            // mutating modes.  Their artifacts are keyed by Program semantic
            // hash, analyzer source and exact dependency digests, so an
            // unchanged database must reuse them instead of rescanning every
            // indirect callsite on each textual export.
            initializeAnalyzerCache();
            if (!Set.of("export", "callable-refresh", "call-result-refresh",
                    "corpus-export").contains(options.mode)) {
                // Freeze only machine-proven finite jump tables before any broad analyzer opens
                // a decompiler.  Without this boundary, packed selector bytes immediately after
                // a table can be re-read as an extra code address on every DecompInterface.
                section("jump-table boundary repair");
                pair("STJumpTableBoundaryAnalyzer.java",
                    "STJumpTableBoundaryApplier.java",
                    "jump_table_boundary_proposals.tsv",
                    "jump_table_boundary_apply_report.tsv");
            }
            switch (options.mode) {
                case "core" -> { runCore(); recordEvidence(); }
                case "deep" -> { runDeep(); recordEvidence(); }
                case "abi-refresh" -> { runAbiRefresh(); recordEvidence(); }
                // Internal restart target used after an override-cleanup phase.
                // Earlier structural/deep mutations are already committed; a
                // fresh process only needs to rebuild the callable ABI fixed
                // point before the original operation may complete.
                case "callable-refresh" -> {
                    runExportAbiRepair();
                    recordEvidence();
                }
                case "call-result-refresh" -> {
                    runCallResultViewFixpoint();
                    recordEvidence();
                }
                case "corpus-export" -> {
                    recordEvidence();
                    runExport();
                }
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
            long seconds = elapsedNanos(started) / 1_000_000_000L;
            logLine("pipeline_complete duration_s=" + seconds +
                " program_changed=" + currentProgram.isChanged());
            finishRun("completed", null);
            println("ST recovery pipeline complete.");
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
        finally {
            println("Total pipeline time: " +
                formatDuration(elapsedNanos(started) / 1_000_000_000L));
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
        runOptionalCallsiteFixpoint();

        pair("STMessageIdAnalyzer.java", "STMessageIdApplier.java",
            "message_id_proposals.tsv", null);
        pair("STMessageHandlerAnalyzer.java", "STMessageHandlerApplier.java",
            "message_handler_proposals.tsv", "message_handler_apply_report.tsv");

        fixUnclaimedCode();
        runStructuralFixpoint();
        // Exact object-factory vptr stores can split a formerly concatenated generated table.
        // Refresh indirect slot ABIs against the new physical structures before the early gate:
        // the call evidence is still valid, but its structure-relative component moved.
        runIndirectCallTyping();
        runAbiRegressionGate("core-final");
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
        // Hidden-receiver retirement and method-owner repair can change which
        // physical table is the class's primary offset-zero vptr.  Refresh the
        // table family before the first deep ABI gate; waiting for the later
        // structural phase leaves stale constructor/base ownership visible to
        // pointer and indirect-call propagation.
        pair("STVTableAnalyzer.java", "STVTableApplier.java",
            "vtable_proposals.tsv", "vtable_apply_report.tsv");
        pair("STSwitchEnumAnalyzer.java", "STSwitchEnumApplier.java",
            "switch_enum_proposals.tsv", "switch_enum_apply_report.tsv");

        pair("STUtilityFunctionAnalyzer.java", "STUtilityFunctionApplier.java",
            "utility_function_proposals.tsv", "utility_function_apply_report.tsv");
        pair("STStackObjectAnalyzer.java", "STStackObjectApplier.java",
            "stack_object_proposals.tsv", "stack_object_apply_report.tsv");
        pair("STStackOutputArrayAnalyzer.java", "STStackOutputArrayApplier.java",
            "stack_output_array_proposals.tsv",
            "stack_output_array_apply_report.tsv");

        boolean converged = false;
        Map<String, Integer> seenDeepStates = new LinkedHashMap<>();
        for (int pass = 1; pass <= MAX_DEEP_PASSES; pass++) {
            section("deep propagation pass " + pass + "/" + MAX_DEEP_PASSES);
            int changed = 0;
            changed += pair("STAbiConsistencyAnalyzer.java", "STAbiConsistencyApplier.java",
                "abi_consistency_proposals.tsv", "abi_consistency_apply_report.tsv");
            changed += pair("STReturnSemanticsAnalyzer.java", "STReturnSemanticsApplier.java",
                "return_semantics_proposals.tsv", "return_semantics_apply_report.tsv");
            changed += runPrototypeCycle();
            changed += pair("STAllocationRecordAnalyzer.java",
                "STAllocationRecordApplier.java",
                "allocation_record_proposals.tsv",
                "allocation_record_apply_report.tsv");
            changed += pair("STGlobalRecordAnalyzer.java", "STGlobalRecordApplier.java",
                "global_record_proposals.tsv", "global_record_apply_report.tsv");
            changed += pair("STDiscriminatedPayloadAnalyzer.java",
                "STDiscriminatedPayloadApplier.java",
                "discriminated_payload_proposals.tsv",
                "discriminated_payload_apply_report.tsv");
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
            changed += runIndirectCallTyping();
            // ABI failures are cheap to detect here and expensive to discover after the
            // broad pointer/array/class decompilers have consumed a poisoned boundary.
            runAbiRegressionGate("deep-abi-pass-" + pass);
            changed += pair("STPointerRoleRepairAnalyzer.java",
                "STPointerRoleRepairApplier.java", "pointer_role_repair_proposals.tsv",
                "pointer_role_repair_apply_report.tsv");
            changed += pair("STPointerShapeAnalyzer.java", "STPointerShapeApplier.java",
                "pointer_shape_target_proposals.tsv", "pointer_shape_apply_report.tsv");
            changed += pair("STRecursivePointeeAnalyzer.java",
                "STRecursivePointeeApplier.java",
                "recursive_pointee_proposals.tsv",
                "recursive_pointee_apply_report.tsv");
            changed += pair("STTypeFamilyAnalyzer.java", "STTypeFamilyApplier.java",
                "type_family_proposals.tsv", "type_family_apply_report.tsv");
            // Dense ownerless receiver families receive a function-local structural interface
            // view.  This types one stable parameter and its observed table slots without
            // replacing any physical class vptr or claiming semantic class ownership.
            changed += runCallableReceiverTyping();
            changed += pair("STVirtualMethodAnalyzer.java", "STVirtualMethodApplier.java",
                "virtual_method_proposals.tsv", "virtual_method_apply_report.tsv",
                MUTATING_STATUSES, recoveryProgram.resolve("vtable_proposals.tsv"));
            changed += runClassLayoutFixpoint();
            changed += runDArrayTypes();
            changed += pair("STSwitchEnumAnalyzer.java", "STSwitchEnumApplier.java",
                "switch_enum_proposals.tsv", "switch_enum_apply_report.tsv");
            changed += pair("STObjectFactoryAnalyzer.java", "STObjectFactoryApplier.java",
                "object_factory_proposals.tsv", "object_factory_apply_report.tsv");
            println("Deep propagation pass " + pass + ": mutating report rows=" + changed);
            if (changed == 0) { converged = true; break; }
            String fingerprint = deepStateFingerprint();
            Integer previous = seenDeepStates.putIfAbsent(fingerprint, pass);
            if (previous != null)
                throw new IllegalStateException(
                    "Deep propagation entered a repeated state at passes " + previous +
                    " and " + pass + "; export is unsafe");
        }
        if (!converged)
            throw new IllegalStateException("Deep propagation did not reach a fixed point in " +
                MAX_DEEP_PASSES + " passes; export is unsafe");

        // Consume newly recovered fields/owners before library classification hides OURLIB bodies
        // from implementation-based analyzers.
        runStructuralFixpoint();

        // Callback discovery is deliberately outside the broad deep fixed point. Field recovery
        // is an expensive whole-program decompiler pass whose evidence depends on the final
        // layouts produced by that loop; parameter recovery is machine-only, but consumes final
        // signatures and must precede the general indirect-call pass. The export ABI fixed point
        // below still reruns all three after a later mutation.
        section("post-structural indirect propagation");
        pair("STFunctionPointerParameterAnalyzer.java",
            "STFunctionPointerParameterApplier.java",
            "function_pointer_parameter_proposals.tsv",
            "function_pointer_parameter_apply_report.tsv");
        pair("STFunctionPointerFieldAnalyzer.java",
            "STFunctionPointerFieldApplier.java",
            "function_pointer_field_proposals.tsv",
            "function_pointer_field_apply_report.tsv");
        runCallableReceiverTyping();
        runCallResultViews();
        runAbiRegressionGate("post-structural-indirect");

        section("deep finalization");
        pair("STSourceProvenanceAnalyzer.java", "STSourceProvenanceApplier.java",
            "source_provenance_proposals.tsv", "source_provenance_apply_report.tsv");
        pair("STThunkPropagationAnalyzer.java", "STThunkPropagationApplier.java",
            "thunk_proposals.tsv", "thunk_apply_report.tsv");
        pair("STControlFlowLabelAnalyzer.java", "STControlFlowLabelApplier.java",
            "control_flow_label_proposals.tsv", "control_flow_label_apply_report.tsv");
        pair("STLibraryAnalyzer.java", "STLibraryApplier.java",
            "library_proposals.tsv", null);
        // Source-provenance can expose a whole linked-library diagnostic family
        // only at finalization.  Consume those fresh callee tags immediately so
        // high-fanout PTR_* contexts do not require a second full pipeline run.
        pair("STGlobalDataAnalyzer.java", "STGlobalDataApplier.java",
            "global_data_proposals.tsv", "global_data_apply_report.tsv");
        pair("STPointerShapeAnalyzer.java", "STPointerShapeApplier.java",
            "pointer_shape_target_proposals.tsv", "pointer_shape_apply_report.tsv");
        // Recover case-specific stack aggregates only after the last global/pointer
        // shape mutations. The analyzer discovers the discriminator family, vtable
        // slot, constant case and stack carrier from the current Program.
        runFinalStackAggregates();
        // Compiler register/stack reuse can leave several independently typed
        // SSA merge groups under one rendered local. Run this once after the
        // structural/type fixed points, when exact call/copy anchors are strongest.
        runLocalLifetimeFixpoint();
        runTypeLifecycleFixpoint();
    }

    /**
     * Bounded ABI-only fixed point for analyzer changes which affect function boundaries and
     * decompiler SSA lifetimes but do not require broad layout/ownership rediscovery. This is a
     * first-class pipeline mode rather than an ad-hoc script list: every pass keeps the normal
     * proposal/applier transactions, convergence accounting, ABI gate and evidence ledger.
     */
    private void runAbiRefresh() throws Exception {
        section("ABI prototype and return refresh");
        boolean converged = false;
        for (int pass = 1; pass <= MAX_DEEP_PASSES; pass++) {
            int changed = pair("STAbiConsistencyAnalyzer.java",
                "STAbiConsistencyApplier.java", "abi_consistency_proposals.tsv",
                "abi_consistency_apply_report.tsv");
            changed += pair("STReturnSemanticsAnalyzer.java",
                "STReturnSemanticsApplier.java", "return_semantics_proposals.tsv",
                "return_semantics_apply_report.tsv");
            changed += runPrototypeCycle();
            runAbiRegressionGate("abi-refresh-pass-" + pass);
            println("ABI refresh pass " + pass + ": mutating rows=" + changed);
            if (changed == 0) {
                converged = true;
                break;
            }
        }
        if (!converged)
            throw new IllegalStateException("ABI refresh did not reach a fixed point in " +
                MAX_DEEP_PASSES + " passes; inspect prototype, return-semantics and " +
                "ABI-consistency apply reports under " + recoveryProgram);

        runLocalLifetimeFixpoint();
        // Lifetime splitting can retire or merge generated anonymous records just
        // like the end of the broad deep pipeline.  Keep this first-class ABI
        // refresh mode semantically complete so an interrupted finalization can
        // be resumed without rerunning every unrelated whole-program analyzer.
        runTypeLifecycleFixpoint();
        runAbiRegressionGate("abi-refresh-final");
    }

    private void runExport() throws Exception {
        section("LLM corpus export");
        step("STEvidenceLedger.java", "verify", recoveryRoot.toString());
        Path baseline = snapshotPreviousExport();
        markExportIncomplete(baseline);
        step("STDecompExport.java", decompRoot.toString());
        Path current = decompRoot.resolve(currentProgram.getName());
        step("STExportRegressionGate.java", current.toString(),
            baseline == null ? "-" : baseline.toString(), recoveryProgram.toString());
        snapshotRunArtifact(recoveryProgram.resolve("export_regression_report.tsv"),
            "export_regression_report.tsv");
        snapshotRunArtifact(recoveryProgram.resolve("export_receipt.json"),
            "export_receipt.json");
        // The accepted corpus now describes the current Program. Refresh the raw
        // fixture metric baseline only after the broad export gate has promoted it.
        runAbiRegressionGate("accepted-refresh");
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
     * migration mode: parameter storage, return semantics, and indirect/vtable call types
     * must agree before the evidence checkpoint, corpus fingerprint, and decompilation.
     */
    private void runExportAbiRepair() throws Exception {
        section("critical export ABI stabilization");
        boolean abiConverged = false;
        for (int pass = 1; pass <= MAX_DEEP_PASSES; pass++) {
            int changed = pair("STAbiConsistencyAnalyzer.java",
                "STAbiConsistencyApplier.java", "abi_consistency_proposals.tsv",
                "abi_consistency_apply_report.tsv");
            println("Export ABI consistency pass " + pass +
                ": mutating rows=" + changed);
            if (changed == 0) {
                abiConverged = true;
                break;
            }
        }
        if (!abiConverged)
            throw new IllegalStateException("Export ABI consistency did not reach a " +
                "fixed point in " + MAX_DEEP_PASSES + " passes; inspect " +
                recoveryProgram.resolve("abi_consistency_apply_report.tsv"));

        step("STReturnSemanticsAnalyzer.java", recoveryRoot.toString(), "repair-only");
        Path returnProposals = requireFile("return_semantics_proposals.tsv", null);
        step("STReturnSemanticsApplier.java", returnProposals.toString());
        int repairedReturns = convergenceMutationCount(
            "STReturnSemanticsApplier.java", returnProposals,
            recoveryProgram.resolve("return_semantics_apply_report.tsv"),
            MUTATING_STATUSES);
        println("Export return rollback repairs: mutating rows=" + repairedReturns);
        runAbiRegressionGate("export-return-repair");

        for (int pass = 1; pass <= 4; pass++) {
            int changed = pair("STFunctionPointerParameterAnalyzer.java",
                "STFunctionPointerParameterApplier.java",
                "function_pointer_parameter_proposals.tsv",
                "function_pointer_parameter_apply_report.tsv");
            changed += pair("STFunctionPointerFieldAnalyzer.java",
                "STFunctionPointerFieldApplier.java",
                "function_pointer_field_proposals.tsv",
                "function_pointer_field_apply_report.tsv");
            changed += runCallableReceiverTyping();
            changed += runCallResultViews();
            runAbiRegressionGate("export-indirect-pass-" + pass);
            println("Export indirect ABI stabilization pass " + pass +
                ": mutating rows=" + changed);
            if (changed == 0) return;
        }
        throw new IllegalStateException("Export indirect ABI stabilization did not reach a " +
            "fixed point in 4 passes; inspect indirect_call_apply_report.tsv under " +
            recoveryProgram);
    }

    /**
     * Recover physical vtable component ABIs first, then attach a use-site-only override for
     * an exact polymorphic slot beyond that physical table.  Keeping the two operations in one
     * helper prevents core, deep and export modes from drifting into different ABI states.
     */
    private int runIndirectCallTyping() throws Exception {
        int changed = pair("STIndirectCallAnalyzer.java", "STIndirectCallApplier.java",
            "indirect_call_proposals.tsv", "indirect_call_apply_report.tsv");
        changed += pair("STIndirectCallsiteAnalyzer.java", "STIndirectCallsiteApplier.java",
            "indirect_callsite_proposals.tsv", "indirect_callsite_apply_report.tsv");
        return changed;
    }

    /**
     * Partition ownerless object dispatch after the ordinary physical-slot pass, install only
     * dense parameter-rooted structural views, then refresh address-local overrides against
     * the newly callable fields.  The second indirect pass is required only when the receiver
     * applier mutates the Program; analyzer caching makes the confirming pass cheap.
     */
    private int runCallableReceiverTyping() throws Exception {
        int changed = runIndirectCallTyping();
        int receiverChanges = pair("STCallableReceiverAnalyzer.java",
            "STCallableReceiverApplier.java", "callable_receiver_proposals.tsv",
            "callable_receiver_apply_report.tsv");
        changed += receiverChanges;
        if (receiverChanges != 0) changed += runIndirectCallTyping();
        return changed;
    }

    /**
     * Keep heterogeneous allocator/loader/helper return ABIs neutral while
     * installing an exact concrete pointer view at the individual direct CALL.
     * The analyzer re-proves every script-owned override and emits cleanup for
     * stale views, so this is a normal fixed-point layer rather than a migration.
     */
    private int runCallResultViews() throws Exception {
        String analyzer = "STCallResultViewAnalyzer.java";
        String applier = "STCallResultViewApplier.java";
        analyzer(analyzer);
        Path proposals = requireFile("call_result_view_proposals.tsv", null);
        step(applier, proposals.toString());
        Path report = recoveryProgram.resolve("call_result_view_apply_report.tsv");
        int changed = convergenceMutationCount(applier, proposals, report,
            MUTATING_STATUSES);
        int removed = applyStatusCount(report, "removed");
        if (removed != 0) {
            Path sentinel = repository.resolve(".st-local")
                .resolve("restart-after-call-result-cleanup");
            Files.createDirectories(sentinel.getParent());
            Files.writeString(sentinel,
                "removed=" + removed + "\n",
                StandardCharsets.UTF_8);
            throw new IllegalStateException(
                "ST_RESTART_REQUIRED_AFTER_CALL_RESULT_CLEANUP: removed=" + removed);
        }
        return changed;
    }

    /**
     * Resume only the address-local direct-call view layer after its cleanup
     * phase deliberately restarted Ghidra.  Physical callable ABIs and every
     * earlier structural layer were already committed and gated.  Re-running
     * them here wastes hours and materially raises peak memory without adding
     * evidence.  A cleanup still requests another fresh process; apply-only
     * passes may converge safely in this one.
     */
    private void runCallResultViewFixpoint() throws Exception {
        section("direct-call result-view restart fixed point");
        for (int pass = 1; pass <= 8; pass++) {
            int changed = runCallResultViews();
            runAbiRegressionGate("call-result-restart-pass-" + pass);
            println("Call-result restart pass " + pass +
                ": mutating rows=" + changed);
            if (changed == 0) return;
        }
        throw new IllegalStateException("Direct-call result views did not " +
            "converge after 8 restart passes; inspect " +
            recoveryProgram.resolve("call_result_view_apply_report.tsv"));
    }

    private int applyStatusCount(Path report, String wanted) throws Exception {
        List<String> lines = Files.readAllLines(report, StandardCharsets.UTF_8);
        if (lines.isEmpty()) return 0;
        String[] header = lines.get(0).split("\\t", -1);
        int statusColumn = indexOf(header, "status");
        if (statusColumn < 0)
            throw new IllegalStateException("Apply report has no status column: " + report);
        int count = 0;
        for (int line = 1; line < lines.size(); line++) {
            if (lines.get(line).isBlank()) continue;
            String[] values = lines.get(line).split("\\t", -1);
            if (statusColumn < values.length && wanted.equals(values[statusColumn])) count++;
        }
        return count;
    }

    /**
     * Compare the current in-memory Program with the last accepted exported ABI.  This gate is
     * intentionally read-only with respect to the Program and runs before broad consumers of
     * function/vtable boundaries.
     * Persistent fixture policy is data under config/; exact reviewed transitions are explicit
     * fingerprints rather than a broad disable switch.
     */
    private void runAbiRegressionGate(String phase) throws Exception {
        requirePinnedAbiPolicy();
        Path baseline = acceptedAbiBaseline();
        Path policy = repository.resolve("config");
        String currentSemantic = ("startup".equals(phase) ||
            "accepted-refresh".equals(phase)) ?
                semanticFingerprintForCurrentModification() : "";
        step("STAbiRegressionGate.java", baseline.toString(), recoveryProgram.toString(),
            policy.toString(), phase, currentSemantic);
        requirePinnedAbiPolicy();
        String suffix = phase.replaceAll("[^A-Za-z0-9._-]+", "_");
        snapshotRunArtifact(recoveryProgram.resolve("abi_regression_report.tsv"),
            "abi_regression_" + suffix + ".tsv");
        snapshotRunArtifact(recoveryProgram.resolve("abi_regression_summary.txt"),
            "abi_regression_" + suffix + "_summary.txt");
    }

    private Path acceptedAbiBaseline() throws Exception {
        Path current = decompRoot.resolve(currentProgram.getName());
        Path receipt = recoveryProgram.resolve("export_receipt.json");
        if (Files.isRegularFile(receipt)) {
            String status = jsonStringField(
                Files.readString(receipt, StandardCharsets.UTF_8), "status");
            if ("passed".equals(status) && Files.isRegularFile(current.resolve("manifest.json")))
                return current;
        }
        Path recovered = lastUnacceptedBaseline();
        if (recovered != null) return recovered;
        throw new IllegalStateException("No accepted corpus is available for the early ABI " +
            "regression gate; restore a passed export before running mutating recovery");
    }

    private void recordEvidence() throws Exception {
        section("final read-only audits");
        analyzer("STManualTypeAuditAnalyzer.java");
        section("evidence checkpoint");
        step("STEvidenceLedger.java", "record", recoveryRoot.toString());
        writeAnalyzerCache();
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
        Map<String, Integer> seenStructuralStates = new LinkedHashMap<>();
        for (int pass = 1; pass <= MAX_STRUCTURAL_PASSES; pass++) {
            int changed = 0;
            changed += pair("STMessageHandlerAnalyzer.java", "STMessageHandlerApplier.java",
                "message_handler_proposals.tsv", "message_handler_apply_report.tsv");
            changed += pair("STObjectFactoryAnalyzer.java", "STObjectFactoryApplier.java",
                "object_factory_proposals.tsv", "object_factory_apply_report.tsv");
            changed += pair("STVTableAnalyzer.java", "STVTableApplier.java",
                "vtable_proposals.tsv", "vtable_apply_report.tsv");
            // Keep the callable-family evidence in the same Program epoch as the physical
            // tables consumed below.  The analyzer cache makes confirming structural passes
            // cheap when neither the table nor an ABI boundary changed.
            changed += runIndirectCallTyping();
            changed += pair("STVirtualMethodAnalyzer.java", "STVirtualMethodApplier.java",
                "virtual_method_proposals.tsv", "virtual_method_apply_report.tsv",
                MUTATING_STATUSES, recoveryProgram.resolve("vtable_proposals.tsv"));
            changed += pair("STConstructorAnalyzer.java", "STConstructorApplier.java",
                "constructor_proposals.tsv", "constructor_apply_report.tsv",
                MUTATING_STATUSES, recoveryProgram.resolve("vtable_proposals.tsv"));
            changed += runClassLayoutFixpoint();
            changed += runDArrayTypes();
            println("Structural pass " + pass + ": mutating report rows=" + changed);
            if (changed == 0) return;
            String fingerprint = deepStateFingerprint();
            Integer previous = seenStructuralStates.putIfAbsent(fingerprint, pass);
            if (previous != null)
                throw new IllegalStateException(
                    "Structural recovery entered a repeated state at passes " +
                    previous + " and " + pass + "; inspect pass snapshots");
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

    /**
     * Class layouts can reveal a nested pointee which makes another field type exact on the
     * next decompile. Converge that local dependency chain here instead of restarting every
     * unrelated whole-program analyzer for each 7 -> 2 -> 1 layout staircase. The enclosing
     * structural/deep loop still runs once more after any accumulated mutation, so vtables,
     * DArrays, pointer shapes and ABI propagation consume the final layout state.
     */
    private int runClassLayoutFixpoint() throws Exception {
        int totalChanged = 0;
        Map<String, Integer> seenStates = new LinkedHashMap<>();
        for (int pass = 1; pass <= MAX_STRUCTURAL_PASSES; pass++) {
            analyzer("STClassArrayAnalyzer.java");
            analyzer("STInlineAggregateAnalyzer.java");
            int changed = pair("STClassLayoutAnalyzer.java", "STClassLayoutApplier.java",
                "class_layout_proposals.tsv", "class_layout_apply_report.tsv");
            totalChanged += changed;
            println("Class-layout local pass " + pass + ": mutating rows=" + changed);
            if (changed == 0) return totalChanged;
            String fingerprint = deepStateFingerprint();
            Integer previous = seenStates.putIfAbsent(fingerprint, pass);
            if (previous != null)
                throw new IllegalStateException(
                    "Class-layout recovery entered a repeated state at passes " + previous +
                    " and " + pass + "; inspect pass snapshots");
        }
        throw new IllegalStateException("Class-layout recovery did not reach a fixed point in " +
            MAX_STRUCTURAL_PASSES + " passes");
    }

    private int runFinalStackAggregates() throws Exception {
        section("final discriminated stack aggregates");
        // Validate or refresh the ordinary family proposals at this exact Program
        // epoch. final-stacks then rehydrates those checked families and decompiles
        // only callers which pass the machine-level slot/case/stack prefilter.
        analyzer("STDiscriminatedPayloadAnalyzer.java");
        step("STDiscriminatedPayloadAnalyzer.java", recoveryRoot.toString(),
            "final-stacks");
        stampAnalyzerArtifacts("STDiscriminatedPayloadAnalyzer.java");
        Path proposals = requireFile("discriminated_payload_proposals.tsv", null);
        step("STDiscriminatedPayloadApplier.java", proposals.toString());
        Path applyReport = recoveryProgram.resolve(
            "discriminated_payload_apply_report.tsv");
        int changed = convergenceMutationCount(
            "STDiscriminatedPayloadApplier.java", proposals, applyReport,
            MUTATING_STATUSES);
        snapshotPassArtifacts("STDiscriminatedPayloadApplier.java", proposals,
            applyReport,
            recoveryProgram.resolve("discriminated_stack_proposals.tsv"));
        println("Final discriminated stack aggregates: mutating rows=" + changed);
        return changed;
    }

    /**
     * A persisted split can expose the next independently typed merge group in
     * the same function. Run the expensive whole-program analyzer once, chase
     * that local staircase only in functions which actually changed, then
     * refresh the canonical whole-program proposal/report pair at convergence.
     */
    private int runLocalLifetimeFixpoint() throws Exception {
        section("local SSA lifetime fixpoint");
        int totalChanged = pair("STLocalLifetimeAnalyzer.java",
            "STLocalLifetimeApplier.java", "local_lifetime_proposals.tsv",
            "local_lifetime_apply_report.tsv");
        if (totalChanged == 0) return 0;

        Path lastReport = recoveryProgram.resolve(
            "local_lifetime_apply_report.tsv");
        Set<String> seenMutationStates = new java.util.HashSet<>();
        seenMutationStates.add(localLifetimeMutationState(lastReport));
        Set<String> targets = mutatingFunctionAddresses(lastReport);
        for (int pass = 2; pass <= MAX_STRUCTURAL_PASSES; pass++) {
            if (targets.isEmpty())
                throw new IllegalStateException(
                    "Local-lifetime applier reported mutations without function addresses");
            Path root = activeRun.resolve("local-lifetime-fixpoint")
                .resolve(String.format(Locale.ROOT, "pass-%02d", pass));
            Files.createDirectories(root);
            step("STLocalLifetimeAnalyzer.java", root.toString(),
                String.join(",", targets));
            Path programRoot = root.resolve(currentProgram.getName());
            Path proposals = programRoot.resolve(
                "local_lifetime_proposals.tsv");
            Path applyReport = programRoot.resolve(
                "local_lifetime_apply_report.tsv");
            if (!Files.isRegularFile(proposals))
                throw new IllegalStateException(
                    "Targeted local-lifetime analysis produced no proposals: " +
                        proposals);
            step("STLocalLifetimeApplier.java", proposals.toString());
            int changed = convergenceMutationCount(
                "STLocalLifetimeApplier.java", proposals, applyReport,
                MUTATING_STATUSES);
            totalChanged += changed;
            println("Local-lifetime targeted pass " + pass +
                ": functions=" + targets.size() + ", mutating rows=" +
                changed);
            if (changed == 0) {
                int finalChanged = pair("STLocalLifetimeAnalyzer.java",
                    "STLocalLifetimeApplier.java",
                    "local_lifetime_proposals.tsv",
                    "local_lifetime_apply_report.tsv");
                if (finalChanged != 0)
                    throw new IllegalStateException(
                        "Whole-program local-lifetime refresh found " +
                        finalChanged + " mutation(s) after targeted convergence");
                return totalChanged;
            }
            String mutationState = localLifetimeMutationState(applyReport);
            if (!seenMutationStates.add(mutationState))
                throw new IllegalStateException(
                    "Local-lifetime recovery entered a repeated mutation cycle " +
                    "at targeted pass " + pass + "; functions=" +
                    String.join(",", mutatingFunctionAddresses(applyReport)));
            targets = mutatingFunctionAddresses(applyReport);
        }
        throw new IllegalStateException(
            "Local-lifetime recovery did not reach a fixed point in " +
                MAX_STRUCTURAL_PASSES + " passes");
    }

    /**
     * Detect an analyzer/applier oscillation from semantic mutation rows rather
     * than waiting for the broad structural pass limit.  Report ordering is not
     * part of the state: the canonical key records the address, durable local,
     * anchor, proposed type, and mutation result for every changed row.
     */
    private String localLifetimeMutationState(Path applyReport)
            throws Exception {
        if (!Files.isRegularFile(applyReport))
            throw new IllegalStateException(
                "Missing local-lifetime apply report: " + applyReport);
        List<String> lines = Files.readAllLines(applyReport,
            StandardCharsets.UTF_8);
        if (lines.isEmpty()) return sha256("");
        String[] header = lines.get(0).split("\\t", -1);
        Map<String, Integer> columns = new java.util.HashMap<>();
        for (int index = 0; index < header.length; index++)
            columns.put(header[index], index);
        for (String required : List.of("function_address", "original_name",
                "anchor_address", "anchor_kind", "proposed_type", "status"))
            if (!columns.containsKey(required))
                throw new IllegalStateException(
                    "Local-lifetime apply report lacks " + required + ": " +
                    applyReport);
        List<String> state = new ArrayList<>();
        for (int line = 1; line < lines.size(); line++) {
            if (lines.get(line).isBlank()) continue;
            String[] values = lines.get(line).split("\\t", -1);
            String status = value(values, columns.get("status"));
            if (!MUTATING_STATUSES.contains(status)) continue;
            state.add(String.join("\t",
                value(values, columns.get("function_address")),
                value(values, columns.get("original_name")),
                value(values, columns.get("anchor_address")),
                value(values, columns.get("anchor_kind")),
                value(values, columns.get("proposed_type")), status));
        }
        state.sort(String::compareTo);
        return sha256(String.join("\n", state));
    }

    private String value(String[] values, int index) {
        return index >= 0 && index < values.length ? values[index] : "";
    }

    private Set<String> mutatingFunctionAddresses(Path applyReport)
            throws Exception {
        if (!Files.isRegularFile(applyReport))
            throw new IllegalStateException(
                "Missing apply report: " + applyReport);
        List<String> lines = Files.readAllLines(applyReport,
            StandardCharsets.UTF_8);
        if (lines.isEmpty()) return Set.of();
        String[] header = lines.get(0).split("\\t", -1);
        int addressColumn = indexOf(header, "function_address");
        int statusColumn = indexOf(header, "status");
        if (addressColumn < 0 || statusColumn < 0)
            throw new IllegalStateException(
                "Local-lifetime apply report lacks function_address/status: " +
                    applyReport);
        Set<String> result = new java.util.TreeSet<>();
        for (int line = 1; line < lines.size(); line++) {
            if (lines.get(line).isBlank()) continue;
            String[] values = lines.get(line).split("\\t", -1);
            if (addressColumn >= values.length || statusColumn >= values.length ||
                    !MUTATING_STATUSES.contains(values[statusColumn]))
                continue;
            String address = values[addressColumn].trim().toUpperCase(Locale.ROOT);
            if (!address.matches("[0-9A-F]{8,16}"))
                throw new IllegalStateException(
                    "Invalid mutating function address in " + applyReport +
                        ": " + address);
            result.add(address);
        }
        return result;
    }

    private int runDArrayTypes() throws Exception {
        analyzer("STDArrayElementAnalyzer.java");
        Path proposals = requireFile("darray_element_proposals.tsv", null);
        String mode = darrayLegacyLocalsCleaned ?
            "types-only" : "types-only-cleanup";
        step("STDArrayElementApplier.java", proposals.toString(), mode);
        darrayLegacyLocalsCleaned = true;
        Path applyReport = recoveryProgram.resolve(
            "darray_element_apply_report.tsv");
        int changed = convergenceMutationCount(
            "STDArrayElementApplier.java", proposals, applyReport,
            MUTATING_STATUSES);
        snapshotPassArtifacts("STDArrayElementApplier.java", proposals,
            applyReport,
            recoveryProgram.resolve("darray_element_field_proposals.tsv"),
            recoveryProgram.resolve("darray_element_local_proposals.tsv"),
            recoveryProgram.resolve("darray_element_decompile_failures.tsv"));
        changed += pair("STDArrayPointerElementAnalyzer.java",
            "STDArrayPointerElementApplier.java",
            "darray_pointer_element_proposals.tsv",
            "darray_pointer_element_apply_report.tsv");
        return changed;
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
        if (changed > 0) {
            analyzer("STPrototypeAnalyzer.java");
            proposals = requireFile("prototype_proposals.tsv", null);
        }
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
        List<String> outputs = CACHEABLE_ANALYZER_OUTPUTS.get(script);
        if (outputs == null) {
            step(script, recoveryRoot.toString());
            return;
        }
        String sourceHash = analyzerSourceHash(script);
        long modification = currentProgram.getModificationNumber();
        String dependencies = analyzerDependencyToken(script);
        String artifacts = analyzerArtifactToken(script);
        AnalyzerStamp current = analyzerStamps.get(script);
        if (current != null && current.programModification == modification &&
                current.sourceHash.equals(sourceHash) &&
                current.dependencyToken.equals(dependencies) &&
                current.artifactToken.equals(artifacts) && cacheArtifactsPresent(script)) {
            analyzerEpochCacheHits++;
            skipped(script, recoveryRoot.toString(),
                "clean analyzer node at the current Program epoch; reusing verified artifacts");
            return;
        }
        AnalyzerCacheEntry persistent = persistentAnalyzerCache.get(script);
        String currentSemantic = "";
        if (persistent != null && persistent.sourceHash.equals(sourceHash) &&
                persistent.dependencyToken.equals(dependencies) &&
                persistent.artifactToken.equals(artifacts) && cacheArtifactsPresent(script)) {
            currentSemantic = semanticFingerprintForCurrentModification();
            if (persistent.programSemantic.equals(currentSemantic)) {
                analyzerStamps.put(script, new AnalyzerStamp(modification, currentSemantic,
                    sourceHash, dependencies, artifacts));
                analyzerPersistentCacheHits++;
                skipped(script, recoveryRoot.toString(),
                    "semantic/source/dependency cache hit; reusing verified analyzer artifacts");
                return;
            }
        }
        step(script, recoveryRoot.toString());
        if (!cacheArtifactsPresent(script))
            throw new IllegalStateException(script +
                " completed without its declared cache artifacts");
        analyzerStamps.put(script, new AnalyzerStamp(
            currentProgram.getModificationNumber(), currentSemantic, sourceHash,
            analyzerDependencyToken(script), analyzerArtifactToken(script)));
    }

    private void stampAnalyzerArtifacts(String script) throws Exception {
        if (!cacheArtifactsPresent(script))
            throw new IllegalStateException(script +
                " completed without its declared cache artifacts");
        analyzerStamps.put(script, new AnalyzerStamp(
            currentProgram.getModificationNumber(), "", analyzerSourceHash(script),
            analyzerDependencyToken(script), analyzerArtifactToken(script)));
    }

    private void initializeAnalyzerCache() throws Exception {
        section("semantic analyzer cache");
        startupFingerprintModification = currentProgram.getModificationNumber();
        startupSemanticFingerprint =
            semanticFingerprintByModification.get(startupFingerprintModification);
        if (startupSemanticFingerprint == null) {
            step("STEvidenceLedger.java", "fingerprint", recoveryRoot.toString());
            Path fingerprint = recoveryProgram.resolve("program_semantic.sha256");
            startupSemanticFingerprint = Files.readString(fingerprint,
                StandardCharsets.UTF_8).trim();
        }
        if (!startupSemanticFingerprint.matches("[0-9a-f]{64}"))
            throw new IllegalStateException("Invalid startup semantic fingerprint");
        semanticFingerprintByModification.put(startupFingerprintModification,
            startupSemanticFingerprint);
        Path cache = recoveryProgram.resolve("analyzer_cache.tsv");
        if (!Files.isRegularFile(cache)) return;
        List<String> lines = Files.readAllLines(cache, StandardCharsets.UTF_8);
        String header = "schema_version\tscript\tsource_sha256\t" +
            "program_semantic_sha256\tdependency_sha256\tartifacts";
        if (lines.isEmpty() || !header.equals(lines.get(0))) {
            println("Ignoring incompatible analyzer cache: " + cache);
            return;
        }
        for (int line = 1; line < lines.size(); line++) {
            if (lines.get(line).isBlank()) continue;
            String[] fields = lines.get(line).split("\t", -1);
            if (fields.length != 6 || !ANALYZER_CACHE_SCHEMA.equals(fields[0]) ||
                    !CACHEABLE_ANALYZER_OUTPUTS.containsKey(fields[1])) continue;
            persistentAnalyzerCache.put(fields[1], new AnalyzerCacheEntry(
                fields[2], fields[3], fields[4], fields[5]));
        }
        println("Loaded reusable analyzer cache entries: " +
            persistentAnalyzerCache.size());
    }

    private String semanticFingerprintForCurrentModification() throws Exception {
        long modification = currentProgram.getModificationNumber();
        String cached = semanticFingerprintByModification.get(modification);
        if (cached != null) return cached;
        step("STEvidenceLedger.java", "fingerprint", recoveryRoot.toString());
        Path fingerprint = recoveryProgram.resolve("program_semantic.sha256");
        String semantic = Files.readString(fingerprint, StandardCharsets.UTF_8).trim();
        if (!semantic.matches("[0-9a-f]{64}"))
            throw new IllegalStateException("Invalid semantic fingerprint in " + fingerprint);
        semanticFingerprintByModification.put(modification, semantic);
        return semantic;
    }

    private void writeAnalyzerCache() throws Exception {
        // A mode which reached no cacheable analyzer must not erase a valid
        // semantic-keyed cache. If the Program changed, the recorded semantic
        // simply fails validation on the next run.
        if (runMode.equals("export") && analyzerStamps.isEmpty()) {
            logLine("analyzer_cache_preserved export_only=true");
            return;
        }
        String semantic = evidenceSemanticFingerprint();
        Path cache = recoveryProgram.resolve("analyzer_cache.tsv");
        Path temporary = cache.resolveSibling(cache.getFileName() + ".tmp");
        List<String> rows = new ArrayList<>();
        long modification = currentProgram.getModificationNumber();
        for (String script : new TreeMap<>(CACHEABLE_ANALYZER_OUTPUTS).keySet()) {
            if (!cacheArtifactsPresent(script)) continue;
            String source = analyzerSourceHash(script);
            String dependencies = analyzerDependencyToken(script);
            String artifacts = analyzerArtifactToken(script);
            AnalyzerStamp stamp = analyzerStamps.get(script);
            boolean stableSemanticRun = semantic.equals(startupSemanticFingerprint);
            boolean currentStamp = stamp != null &&
                (stamp.programModification == modification ||
                    stamp.programSemantic.equals(semantic) || stableSemanticRun) &&
                stamp.sourceHash.equals(source) &&
                stamp.dependencyToken.equals(dependencies) &&
                stamp.artifactToken.equals(artifacts);
            AnalyzerCacheEntry prior = persistentAnalyzerCache.get(script);
            boolean unchangedPrior = semantic.equals(startupSemanticFingerprint) &&
                prior != null && prior.programSemantic.equals(semantic) &&
                prior.sourceHash.equals(source) &&
                prior.dependencyToken.equals(dependencies) &&
                prior.artifactToken.equals(artifacts);
            if (!currentStamp && !unchangedPrior) continue;
            rows.add(ANALYZER_CACHE_SCHEMA + "\t" + script + "\t" + source +
                "\t" + semantic + "\t" + dependencies + "\t" + artifacts);
        }
        Files.writeString(temporary,
            "schema_version\tscript\tsource_sha256\t" +
            "program_semantic_sha256\tdependency_sha256\tartifacts\n" +
            String.join("\n", rows) + (rows.isEmpty() ? "" : "\n"),
            StandardCharsets.UTF_8);
        try {
            Files.move(temporary, cache, StandardCopyOption.REPLACE_EXISTING,
                StandardCopyOption.ATOMIC_MOVE);
        }
        catch (java.nio.file.AtomicMoveNotSupportedException exception) {
            Files.move(temporary, cache, StandardCopyOption.REPLACE_EXISTING);
        }
        println("Persisted analyzer cache entries: " + rows.size());
        logLine("analyzer_cache_written entries=" + rows.size());
    }

    private String evidenceSemanticFingerprint() throws Exception {
        Path state = recoveryProgram.resolve("automation_state.tsv");
        for (String line : Files.readAllLines(state, StandardCharsets.UTF_8)) {
            String[] fields = line.split("\t", -1);
            if (fields.length == 4 && "program".equals(fields[0]) &&
                    "semantic_sha256".equals(fields[1]) &&
                    fields[2].matches("[0-9a-f]{64}")) return fields[2];
        }
        throw new IllegalStateException("Evidence ledger has no semantic_sha256: " + state);
    }

    private String analyzerSourceHash(String script) throws Exception {
        for (BuildRow build : builds)
            if (build.script.equals(script)) return build.sourceHash;
        return sha256(repository.resolve("scripts").resolve(script));
    }

    private String analyzerDependencyToken(String script) throws Exception {
        return analyzerFileToken(CACHEABLE_ANALYZER_INPUTS.getOrDefault(script, List.of()));
    }

    private String analyzerArtifactToken(String script) throws Exception {
        return analyzerFileToken(CACHEABLE_ANALYZER_OUTPUTS.getOrDefault(script, List.of()));
    }

    private boolean cacheArtifactsPresent(String script) {
        for (String name : CACHEABLE_ANALYZER_OUTPUTS.getOrDefault(script, List.of()))
            if (!Files.isRegularFile(recoveryProgram.resolve(name))) return false;
        return true;
    }

    private String analyzerFileToken(List<String> names) throws Exception {
        MessageDigest digest = MessageDigest.getInstance("SHA-256");
        digest.update(ANALYZER_CACHE_SCHEMA.getBytes(StandardCharsets.UTF_8));
        for (String name : names.stream().sorted().toList()) {
            Path path = recoveryProgram.resolve(name);
            cacheDigestValue(digest, name);
            if (!Files.isRegularFile(path)) cacheDigestValue(digest, "missing");
            else {
                cacheDigestValue(digest, Long.toString(Files.size(path)));
                cacheDigestValue(digest, sha256(path));
            }
        }
        return hex(digest.digest());
    }

    private void cacheDigestValue(MessageDigest digest, String value) {
        byte[] bytes = value.getBytes(StandardCharsets.UTF_8);
        digest.update((byte)(bytes.length >>> 24));
        digest.update((byte)(bytes.length >>> 16));
        digest.update((byte)(bytes.length >>> 8));
        digest.update((byte)bytes.length);
        digest.update(bytes);
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
            long started = System.nanoTime();
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
            long milliseconds = elapsedNanos(started) / 1_000_000L;
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
        // Empty positional arguments can be meaningful to the child script, but they have no
        // value in the human-readable report.  Omitting them here prevents a trailing " | " and
        // whitespace-only churn in the tracked bootstrap log without changing the invoked args.
        String argument = Arrays.stream(args).map(this::portableArgument)
            .filter(value -> !value.isBlank())
            .collect(java.util.stream.Collectors.joining(" | "));
        int ordinal = ++sequence;
        println(String.format(Locale.ROOT, "[%02d] %s%s", ordinal, script,
            argument.isBlank() ? "" : " <- " + argument));
        logLine("step_start sequence=" + ordinal + " script=" + script +
            (argument.isBlank() ? "" : " argument=" + argument));
        event("step_start", ordinal, script, "running", 0, -1, -1, argument);
        long started = System.nanoTime();
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
        long milliseconds = elapsedNanos(started) / 1_000_000L;
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
        lastStepModificationBefore = modificationBefore;
        lastStepModificationAfter = modificationAfter;
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
        // AnalysisWorkerCommand closes its outer Program transaction.  In headless mode,
        // waitForAnalysis() asks Ghidra 12.1.2 to persist analyzer timing statistics after the
        // actual queue has drained.  The pipeline deliberately ended its implicit script
        // transaction, so both that OptionsDB write and mutating analyzers such as X86 Function
        // Callee Purge need an explicit transaction around the synchronous queue.  GUI mode
        // retains waitForAnalysis() and its background-thread barrier.
        drainAnalysis(analysis);
        for (int attempt = 0; attempt < 500; attempt++) {
            monitor.checkCancelled();
            TransactionInfo transaction = currentProgram.getCurrentTransactionInfo();
            if (transaction == null || completedTransactionSnapshot(transaction) ||
                    !autoAnalysisBoundaryOpen(transaction)) return;
            if (!announced) {
                println("Waiting for Ghidra auto-analysis transaction " + context + "...");
                announced = true;
            }
            if (analysis.isAnalyzing()) drainAnalysis(analysis);
            else Thread.sleep(10);
        }
    }

    private void drainAnalysis(AutoAnalysisManager analysis) {
        if (!SystemUtilities.isInHeadlessMode()) {
            analysis.waitForAnalysis(null, monitor);
            return;
        }
        int transaction = currentProgram.startTransaction("Auto Analysis");
        boolean commit = false;
        try {
            analysis.startAnalysis(monitor, false);
            commit = !monitor.isCancelled();
        }
        finally {
            currentProgram.endTransaction(transaction, commit);
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
        if (state.changed == 0) {
            if (lastStepMutatedProgram) {
                println(applier + ": Program modification counter advanced without a mutating " +
                    "report row; treating report state as settled (rolled-back row transactions " +
                    "can advance Ghidra's diagnostic counter)");
                logLine("diagnostic_modification_without_reported_mutation script=" + applier);
                rebaseCurrentAnalyzerStampsAfterDiagnosticTransaction();
            }
            return 0;
        }
        return state.changed;
    }

    /**
     * A transaction which writes no mutating apply-report row may still advance Ghidra's
     * diagnostic modification number (for example, a rolled-back per-row transaction).  The
     * analyzer products remain valid in that case.  Rebase only their volatile epoch marker;
     * source, dependency, and artifact hashes still have to match at the next use.  A real
     * mutating row never reaches this method and therefore invalidates the stamps normally.
     */
    private void rebaseCurrentAnalyzerStampsAfterDiagnosticTransaction() throws Exception {
        long modification = currentProgram.getModificationNumber();
        if (lastStepModificationBefore < 0 || lastStepModificationAfter != modification)
            return;
        int rebased = 0;
        for (Map.Entry<String, AnalyzerStamp> entry :
                new ArrayList<>(analyzerStamps.entrySet())) {
            AnalyzerStamp stamp = entry.getValue();
            // A rolled-back/no-op child transaction preserves only analyzer artifacts which
            // were current immediately before that child ran.  Rebasing every stamp used to
            // bless products made stale by an earlier real mutation (notably prototype
            // proposals after a method-owner change), because Ghidra's diagnostic
            // modification number also advances for rolled-back transactions.
            if (stamp.programModification != lastStepModificationBefore) continue;
            entry.setValue(new AnalyzerStamp(modification, stamp.programSemantic,
                stamp.sourceHash, stamp.dependencyToken, stamp.artifactToken));
            rebased++;
        }
        logLine("analyzer_epoch_rebased modification=" + modification +
            " entries=" + rebased);
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
                if ("apply".equals(header[column]) || header[column].endsWith("_apply") ||
                        header[column].endsWith("_cleanup"))
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

    private void startRun(String mode, long startedNanos) throws Exception {
        runsRoot = recoveryProgram.resolve("runs");
        Files.createDirectories(runsRoot);
        activeRun = runsRoot.resolve(".current");
        archiveInterruptedRun();
        Files.createDirectories(activeRun.resolve("passes"));
        Files.createDirectories(activeRun.resolve("artifacts"));
        Files.createDirectories(activeRun.resolve("build"));
        Files.createDirectories(activeRun.resolve("steps"));
        Path policySnapshot = activeRun.resolve("policy");
        Files.createDirectories(policySnapshot);
        Files.copy(repository.resolve("config/abi-regression-rules.tsv"),
            policySnapshot.resolve("abi-regression-rules.tsv"),
            StandardCopyOption.REPLACE_EXISTING);
        Files.copy(repository.resolve("config/abi-regression-transitions.tsv"),
            policySnapshot.resolve("abi-regression-transitions.tsv"),
            StandardCopyOption.REPLACE_EXISTING);
        eventsPath = activeRun.resolve("events.tsv");
        logPath = activeRun.resolve("pipeline.log");
        Files.writeString(eventsPath,
            "elapsed_ms\tkind\tsection\tsequence\tscript\tstatus\tduration_ms\t" +
                "program_modification_before\tprogram_modification_after\tdetail\n",
            StandardCharsets.UTF_8,
            StandardOpenOption.CREATE, StandardOpenOption.TRUNCATE_EXISTING);
        Files.writeString(logPath, "", StandardCharsets.UTF_8,
            StandardOpenOption.CREATE, StandardOpenOption.TRUNCATE_EXISTING);
        runStartedNanos = startedNanos;
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
        for (String name : List.of("automation_state.tsv", "analyzer_cache.tsv",
                "program_semantic.sha256", "switch_enum_domains.tsv",
                "abi_regression_report.tsv", "abi_regression_summary.txt",
                "abi_fixture_baseline.tsv",
                "export_regression_report.tsv", "export_receipt.json"))
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
            "\"analyzer_epoch_cache_hit_count\":" + analyzerEpochCacheHits + "," +
            "\"analyzer_persistent_cache_hit_count\":" +
                analyzerPersistentCacheHits + "," +
            "\"abi_rules_sha256\":" + q(abiRulesHash) + "," +
            "\"abi_transitions_sha256\":" + q(abiTransitionsHash) + "," +
            "\"pipeline_row_count\":" + report.size() +
            "}";
        Files.writeString(activeRun.resolve("run.json"), metadata + "\n",
            StandardCharsets.UTF_8);
        logLine("run_archive hash=" + id + " status=" + status);
        Path target = runsRoot.resolve(id);
        moveRun(activeRun, target);
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
        Path unacceptedBaseline = lastUnacceptedBaseline();
        Path protectedRun = unacceptedBaseline == null ? null :
            unacceptedBaseline.getParent();
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
        Path unacceptedBaseline = lastUnacceptedBaseline();
        Path sourceDirectory;
        if (unacceptedBaseline != null) {
            sourceDirectory = unacceptedBaseline;
            println("Preserving the last accepted export baseline after an unaccepted export: " +
                unacceptedBaseline);
            logLine("export_baseline_recovered_from_failed_run path=" +
                portableArgument(unacceptedBaseline.toString()));
        }
        else if (lastReceiptUnaccepted()) {
            throw new IllegalStateException("The preceding export was not accepted, " +
                "but its accepted pre-export baseline is no longer available under " +
                runsRoot + "; refusing to promote the rejected corpus as a new baseline");
        }
        else {
            if (!Files.isRegularFile(current.resolve("manifest.json"))) return null;
            sourceDirectory = current;
        }
        Path baseline = activeRun.resolve("pre_export");
        if (Files.exists(baseline)) deleteTree(baseline);
        Files.createDirectories(baseline);
        for (String name : List.of("manifest.json", "functions.json", "types.jsonl",
                "decomp_quality_summary.json", "decomp_quality_issues.jsonl",
                "pseudocode_idioms.jsonl")) {
            Path source = regressionArtifact(sourceDirectory, name);
            if (Files.isRegularFile(source))
                Files.copy(source, baseline.resolve(snapshotName(name)),
                    StandardCopyOption.REPLACE_EXISTING);
        }
        Path retainedTextHashes = sourceDirectory.resolve(
            "function_text_hashes.snapshot");
        if (Files.isRegularFile(retainedTextHashes))
            Files.copy(retainedTextHashes,
                baseline.resolve("function_text_hashes.snapshot"),
                StandardCopyOption.REPLACE_EXISTING);
        else
            snapshotFunctionTextHashes(sourceDirectory,
                baseline.resolve("function_text_hashes.snapshot"));
        logLine("export_baseline_snapshot path=" + portableArgument(baseline.toString()));
        return baseline;
    }

    /**
     * Retain one deterministic hash per rendered body so an analysis-detector schema migration
     * can distinguish byte-identical accounting changes from a real readability regression.
     * The compact snapshot avoids copying thousands of function directories into run history.
     */
    private void snapshotFunctionTextHashes(Path corpus, Path destination) throws Exception {
        Path functions = corpus.resolve("functions");
        if (!Files.isDirectory(functions)) return;
        List<Path> bodies;
        try (java.util.stream.Stream<Path> stream = Files.walk(functions, 2)) {
            bodies = stream.filter(path -> Files.isRegularFile(path) &&
                    "decomp.c".equals(path.getFileName().toString()))
                .sorted(Comparator.comparing(path ->
                    path.getParent().getFileName().toString()))
                .toList();
        }
        try (BufferedWriter out = Files.newBufferedWriter(destination,
                StandardCharsets.UTF_8)) {
            out.write("function_address\ttext_sha256\n");
            for (Path body : bodies) {
                String address = body.getParent().getFileName().toString();
                if (!address.matches("[0-9A-Fa-f]{8}")) continue;
                out.write(address.toUpperCase(Locale.ROOT) + "\t" +
                    sha256(body) + "\n");
            }
        }
    }

    private Path regressionArtifact(Path directory, String name) {
        Path direct = directory.resolve(name);
        if (Files.isRegularFile(direct)) return direct;
        return directory.resolve(snapshotName(name));
    }

    private String snapshotName(String name) {
        return switch (name) {
            case "types.jsonl" -> "types.snapshot";
            case "decomp_quality_issues.jsonl" -> "decomp_quality_issues.snapshot";
            case "pseudocode_idioms.jsonl" -> "pseudocode_idioms.snapshot";
            default -> name;
        };
    }

    /**
     * A failed gate may have promoted a rejected corpus, while an exporter
     * exception in an older non-transactional version may have left a partial
     * tree. Recover the accepted pre-export snapshot from either kind of
     * unaccepted run instead of allowing it to become the next baseline.
     */
    private Path lastUnacceptedBaseline() throws Exception {
        Path legacyInterrupted = latestFailedExportBaseline();
        if (legacyInterrupted != null) return legacyInterrupted;
        Path receipt = recoveryProgram == null ? null :
            recoveryProgram.resolve("export_receipt.json");
        if (receipt == null || !Files.isRegularFile(receipt) ||
                runsRoot == null || !Files.isDirectory(runsRoot)) return null;
        String rootReceipt = Files.readString(receipt, StandardCharsets.UTF_8);
        String status = jsonStringField(rootReceipt, "status");
        if (!Set.of("failed", "incomplete").contains(status)) return null;
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

    /**
     * Compatibility for an export interrupted before incomplete receipts were
     * introduced. Such a run leaves the preceding passed receipt at the root,
     * but its archived run.json is failed and its pre_export/ snapshot is the
     * only coherent accepted baseline.
     */
    private Path latestFailedExportBaseline() throws Exception {
        if (recoveryProgram == null || runsRoot == null ||
                !Files.isDirectory(runsRoot)) return null;
        Path latestFile = recoveryProgram.resolve("latest_run.txt");
        if (!Files.isRegularFile(latestFile)) return null;
        String runId = Files.readString(latestFile, StandardCharsets.UTF_8).trim();
        if (!runId.matches("[0-9a-f]{64}")) return null;
        Path run = runsRoot.resolve(runId).normalize();
        if (!run.getParent().equals(runsRoot.normalize())) return null;
        Path metadata = run.resolve("run.json");
        Path candidate = run.resolve("pre_export");
        Path manifest = candidate.resolve("manifest.json");
        if (!Files.isRegularFile(metadata) || !Files.isRegularFile(manifest))
            return null;
        String json = Files.readString(metadata, StandardCharsets.UTF_8);
        if (!"failed".equals(jsonStringField(json, "status"))) return null;
        return candidate;
    }

    private boolean lastReceiptUnaccepted() throws Exception {
        Path receipt = recoveryProgram == null ? null :
            recoveryProgram.resolve("export_receipt.json");
        if (receipt == null || !Files.isRegularFile(receipt)) return false;
        String status = jsonStringField(
            Files.readString(receipt, StandardCharsets.UTF_8), "status");
        return Set.of("failed", "incomplete").contains(status);
    }

    /**
     * Invalidate the previous successful receipt before invoking the exporter.
     * The regression gate replaces this marker with passed/failed. If export or
     * the gate throws first, the root receipt can no longer misleadingly
     * describe an older successful run.
     */
    private void markExportIncomplete(Path baseline) throws Exception {
        Path receipt = recoveryProgram.resolve("export_receipt.json");
        String previousManifest = baseline != null &&
            Files.isRegularFile(baseline.resolve("manifest.json")) ?
                sha256(baseline.resolve("manifest.json")) : "";
        String json = "{\"schema\":\"st-export-receipt\"," +
            "\"schema_version\":1,\"status\":\"incomplete\"," +
            "\"previous_manifest_sha256\":\"" + previousManifest + "\"," +
            "\"detail\":\"export started but has not passed the regression gate\"}\n";
        Path temporary = receipt.resolveSibling(receipt.getFileName() + ".tmp");
        Files.writeString(temporary, json, StandardCharsets.UTF_8);
        try {
            Files.move(temporary, receipt, StandardCopyOption.REPLACE_EXISTING,
                StandardCopyOption.ATOMIC_MOVE);
        }
        catch (java.nio.file.AtomicMoveNotSupportedException exception) {
            Files.move(temporary, receipt, StandardCopyOption.REPLACE_EXISTING);
        }
    }

    private String jsonStringField(String json, String field) {
        String prefix = "\"" + field + "\":\"";
        int start = json.indexOf(prefix);
        if (start < 0) return "";
        start += prefix.length();
        int end = json.indexOf('"', start);
        return end < 0 ? "" : json.substring(start, end);
    }

    private void snapshotPassArtifacts(String script, Path proposals, Path applyReport,
            Path... additionalArtifacts) throws Exception {
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
        for (Path additional : additionalArtifacts)
            if (additional != null && Files.isRegularFile(additional))
                Files.copy(additional,
                    directory.resolve(additional.getFileName()),
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
        String row = elapsedMilliseconds() + "\t" + tsv(kind) + "\t" +
            tsv(currentSection) + "\t" + ordinal + "\t" + tsv(script) + "\t" +
            tsv(status) + "\t" + duration + "\t" + modificationBefore + "\t" +
            modificationAfter + "\t" + tsv(detail) + "\n";
        Files.writeString(eventsPath, row, StandardCharsets.UTF_8,
            StandardOpenOption.CREATE, StandardOpenOption.APPEND);
    }

    private long elapsedMilliseconds() {
        return runStartedNanos == 0 ? 0 : elapsedNanos(runStartedNanos) / 1_000_000L;
    }

    private long elapsedNanos(long startedNanos) {
        return Math.max(0L, System.nanoTime() - startedNanos);
    }

    private String formatDuration(long totalSeconds) {
        long hours = totalSeconds / 3600;
        long minutes = totalSeconds / 60 % 60;
        long seconds = totalSeconds % 60;
        return String.format(Locale.ROOT, "%02d:%02d:%02d", hours, minutes, seconds);
    }

    private String deepStateFingerprint() throws Exception {
        StringBuilder state = new StringBuilder();
        try (java.util.stream.Stream<Path> stream = Files.list(recoveryProgram)) {
            for (Path path : stream.filter(Files::isRegularFile)
                    .filter(value -> {
                        String name = value.getFileName().toString();
                        return name.endsWith("_proposals.tsv") ||
                            name.endsWith("_apply_report.tsv");
                    }).sorted().toList())
                state.append(path.getFileName()).append('|')
                    .append(sha256(path)).append('\n');
        }
        return sha256(state.toString());
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
        value.append("abi_rules=").append(abiRulesHash).append('\n');
        value.append("abi_transitions=").append(abiTransitionsHash).append('\n');
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
                !Files.isRegularFile(repository.resolve("scripts/STAbiRegressionGate.java")) ||
                !Files.isRegularFile(repository.resolve("scripts/STExportRegressionGate.java")) ||
                !Files.isRegularFile(repository.resolve("config/abi-regression-rules.tsv")) ||
                !Files.isRegularFile(repository.resolve(
                    "config/abi-regression-transitions.tsv")) ||
                !Files.isDirectory(repository.resolve("recovery")))
            throw new IllegalStateException("Could not validate repository root " + repository +
                "; expected scripts/ and recovery/ beside each other");
    }

    private void pinAbiPolicy() throws Exception {
        abiRulesHash = sha256(repository.resolve("config/abi-regression-rules.tsv"));
        abiTransitionsHash = sha256(
            repository.resolve("config/abi-regression-transitions.tsv"));
    }

    private void requirePinnedAbiPolicy() throws Exception {
        String rules = sha256(repository.resolve("config/abi-regression-rules.tsv"));
        String transitions = sha256(
            repository.resolve("config/abi-regression-transitions.tsv"));
        if (!abiRulesHash.equals(rules) || !abiTransitionsHash.equals(transitions))
            throw new IllegalStateException("ABI regression policy changed while the pipeline " +
                "was running; restart so one pinned rule bundle governs the complete run");
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
                "ABI prototype and return refresh",
                "Export corpus only",
                "Full recovery and export");
            String selected = askChoice("Submarine Titans recovery pipeline",
                "Choose one dependency-ordered run. No paths will be requested.", choices,
                choices.get(0));
            mode = switch (selected) {
                case "Core structural refresh" -> "core";
                case "Full automatic recovery" -> "full";
                case "Deep propagation only" -> "deep";
                case "ABI prototype and return refresh" -> "abi-refresh";
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
        if (Set.of("core", "deep", "abi-refresh", "callable-refresh",
                "call-result-refresh", "corpus-export", "full", "export",
                "full-export")
                .contains(mode))
            return mode;
        throw new IllegalArgumentException("Mode must be core, deep, abi-refresh, " +
            "callable-refresh, call-result-refresh, corpus-export, full, " +
            "export, or full-export");
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
    private record AnalyzerStamp(long programModification, String programSemantic,
        String sourceHash, String dependencyToken, String artifactToken) { }
    private record AnalyzerCacheEntry(String sourceHash, String programSemantic,
        String dependencyToken, String artifactToken) { }
}
