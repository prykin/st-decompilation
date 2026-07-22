// Run the Submarine Titans recovery scripts as a path-free, dependency-ordered pipeline.
// The repository root is inferred from this file's scripts/ directory.  Child scripts still
// enforce their own proposal flags, stale baselines, transactions, and manual-type protection.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Run Recovery Pipeline

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.time.Duration;
import java.time.Instant;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Set;

import ghidra.app.script.GhidraScript;

public class STRecoveryPipeline extends GhidraScript {
    private static final int MAX_STRUCTURAL_PASSES = 3;
    private static final int MAX_DEEP_PASSES = 2;
    private static final Set<String> MUTATING_STATUSES = Set.of(
        "applied", "created", "converted", "updated", "partial", "renamed");

    private Path repository;
    private Path recoveryRoot;
    private Path recoveryProgram;
    private Path decompRoot;
    private Path reportPath;
    private final List<PipelineRow> report = new ArrayList<>();
    private int sequence;
    private boolean programMutationObserved;

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
        try {
            switch (options.mode) {
                case "core" -> runCore();
                case "deep" -> runDeep();
                case "full" -> { runCore(); runDeep(); }
                case "export" -> runExport();
                case "full-export" -> { runCore(); runDeep(); runExport(); }
                default -> throw new IllegalArgumentException("Unknown pipeline mode: " +
                    options.mode);
            }
        }
        catch (Exception exception) {
            flushReport();
            printerr("Pipeline stopped after the first failed step: " + message(exception));
            throw exception;
        }
        flushReport();
        long seconds = Duration.between(started, Instant.now()).toSeconds();
        if (programMutationObserved && !currentProgram.isChanged())
            throw new IllegalStateException("Pipeline observed committed Program mutations, " +
                "but Program.isChanged() is false at completion; refusing a false success");
        println("ST recovery pipeline complete in " + seconds + " s.");
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
        step("STRecoveredTypesApplier.java");

        analyzer("STDebugSymbolAnalyzer.java");
        applier("STDebugSymbolApplier.java", "proposals.tsv");
        optionalApplier("STCuratedRecoveryApplier.java", "curated_recovery.tsv");
        optionalAudit("STCallsiteConventionAnalyzer.java",
            "debug_calling_convention_review.tsv");

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
            changed += pair("STSpatialGridAnalyzer.java", "STSpatialGridApplier.java",
                "spatial_grid_proposals.tsv", "spatial_grid_apply_report.tsv");
            changed += pair("STGlobalAggregateAnalyzer.java", "STGlobalAggregateApplier.java",
                "global_aggregate_proposals.tsv", "global_aggregate_apply_report.tsv");
            changed += pair("STGlobalDataAnalyzer.java", "STGlobalDataApplier.java",
                "global_data_proposals.tsv", "global_data_apply_report.tsv");
            changed += pair("STIndirectCallAnalyzer.java", "STIndirectCallApplier.java",
                "indirect_call_proposals.tsv", "indirect_call_apply_report.tsv");
            changed += pair("STPointerRoleRepairAnalyzer.java",
                "STPointerRoleRepairApplier.java", "pointer_role_repair_proposals.tsv",
                "pointer_role_repair_apply_report.tsv");
            changed += pair("STPointerShapeAnalyzer.java", "STPointerShapeApplier.java",
                "pointer_shape_target_proposals.tsv", "pointer_shape_apply_report.tsv");
            changed += pair("STTypeFamilyAnalyzer.java", "STTypeFamilyApplier.java",
                "type_family_proposals.tsv", "type_family_apply_report.tsv");
            changed += pair("STClassLayoutAnalyzer.java", "STClassLayoutApplier.java",
                "class_layout_proposals.tsv", "class_layout_apply_report.tsv");
            changed += pair("STSwitchEnumAnalyzer.java", "STSwitchEnumApplier.java",
                "switch_enum_proposals.tsv", "switch_enum_apply_report.tsv");
            changed += pair("STObjectFactoryAnalyzer.java", "STObjectFactoryApplier.java",
                "object_factory_proposals.tsv", "object_factory_apply_report.tsv");
            println("Deep propagation pass " + pass + ": mutating report rows=" + changed);
            if (changed == 0) break;
        }

        // Consume newly recovered fields/owners before library classification hides OURLIB bodies
        // from implementation-based analyzers.
        runStructuralFixpoint();

        section("deep finalization");
        analyzer("STManualTypeAuditAnalyzer.java");
        pair("STSourceProvenanceAnalyzer.java", "STSourceProvenanceApplier.java",
            "source_provenance_proposals.tsv", "source_provenance_apply_report.tsv");
        pair("STControlFlowLabelAnalyzer.java", "STControlFlowLabelApplier.java",
            "control_flow_label_proposals.tsv", "control_flow_label_apply_report.tsv");
        pair("STLibraryAnalyzer.java", "STLibraryApplier.java",
            "library_proposals.tsv", null);
    }

    private void runExport() throws Exception {
        section("LLM corpus export");
        step("STDecompExport.java", decompRoot.toString());
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
        println("Unclaimed-code loop reached its safety bound; inspect the latest apply report.");
    }

    private void runStructuralFixpoint() throws Exception {
        section("factory/vtable/constructor/class fixpoint");
        for (int pass = 1; pass <= MAX_STRUCTURAL_PASSES; pass++) {
            int changed = 0;
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
            changed += pair("STClassLayoutAnalyzer.java", "STClassLayoutApplier.java",
                "class_layout_proposals.tsv", "class_layout_apply_report.tsv");
            println("Structural pass " + pass + ": mutating report rows=" + changed);
            if (changed == 0) return;
        }
        println("Structural loop reached its safety bound; remaining changes require review or " +
            "another explicit pipeline run.");
    }

    private int runPrototypeCycle() throws Exception {
        analyzer("STPrototypeAnalyzer.java");
        Path proposals = requireFile("prototype_proposals.tsv", null);
        step("STPrototypeRepairAnalyzer.java", proposals.toString());
        Path repairs = requireFile("prototype_repair_proposals.tsv", null);
        step("STPrototypeRepairApplier.java", repairs.toString());
        int changed = mutationCount(recoveryProgram.resolve("prototype_repair_apply_report.tsv"),
            MUTATING_STATUSES, null);
        analyzer("STPrototypeAnalyzer.java");
        proposals = requireFile("prototype_proposals.tsv", null);
        step("STPrototypeApplier.java", proposals.toString());
        return changed + mutationCount(recoveryProgram.resolve("prototype_apply_report.tsv"),
            MUTATING_STATUSES, null);
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
        return applyReport == null ? 0 : mutationCount(recoveryProgram.resolve(applyReport),
            statuses, null);
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

    private void optionalAudit(String script, String input) throws Exception {
        Path path = recoveryProgram.resolve(input);
        if (!hasDataRows(path)) {
            skipped(script, path.toString(), "audit input is absent or empty");
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

    private void step(String script, String... args) throws Exception {
        monitor.checkCancelled();
        Path source = repository.resolve("scripts").resolve(script);
        if (!Files.isRegularFile(source))
            throw new IllegalStateException("Pipeline script is missing: " + source);
        String argument = String.join(" | ", args);
        int ordinal = ++sequence;
        println(String.format(Locale.ROOT, "[%02d] %s%s", ordinal, script,
            argument.isBlank() ? "" : " <- " + argument));
        Instant started = Instant.now();
        requireNoOpenTransaction("before " + script);
        long modificationBefore = currentProgram.getModificationNumber();
        try {
            runScript(script, args);
            requireNoOpenTransaction("after " + script);
            long modificationAfter = currentProgram.getModificationNumber();
            if (modificationAfter != modificationBefore) programMutationObserved = true;
            long milliseconds = Duration.between(started, Instant.now()).toMillis();
            String detail = modificationAfter == modificationBefore ? "" :
                "program_modification=" + modificationBefore + "->" + modificationAfter;
            report.add(new PipelineRow(ordinal, script, "completed", milliseconds, argument,
                detail));
            flushReport();
        }
        catch (Exception exception) {
            long milliseconds = Duration.between(started, Instant.now()).toMillis();
            report.add(new PipelineRow(ordinal, script, "failed", milliseconds, argument,
                message(exception)));
            flushReport();
            throw exception;
        }
    }

    private void section(String name) {
        println("\n== " + name + " ==");
    }

    private void requireNoOpenTransaction(String context) {
        if (currentProgram.getCurrentTransactionInfo() != null)
            throw new IllegalStateException("Unexpected open Program transaction " + context +
                ": " + currentProgram.getCurrentTransactionInfo().getDescription());
    }

    private void skipped(String script, String argument, String detail) throws Exception {
        int ordinal = ++sequence;
        println(String.format(Locale.ROOT, "[%02d] %s skipped: %s", ordinal, script, detail));
        report.add(new PipelineRow(ordinal, script, "skipped", 0, argument, detail));
        flushReport();
    }

    private int mutationCount(Path path, Set<String> statuses, String kind) throws Exception {
        if (!Files.isRegularFile(path)) return 0;
        List<String> lines = Files.readAllLines(path, StandardCharsets.UTF_8);
        if (lines.isEmpty()) return 0;
        String[] header = lines.get(0).split("\\t", -1);
        int statusColumn = indexOf(header, "status");
        int kindColumn = indexOf(header, "kind");
        if (statusColumn < 0) return 0;
        int result = 0;
        for (int line = 1; line < lines.size(); line++) {
            if (lines.get(line).isBlank()) continue;
            String[] values = lines.get(line).split("\\t", -1);
            if (statusColumn >= values.length || !statuses.contains(values[statusColumn])) continue;
            if (kind != null && (kindColumn < 0 || kindColumn >= values.length ||
                    !kind.equals(values[kindColumn]))) continue;
            result++;
        }
        return result;
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

    private void validateRepository() {
        if (!Files.isDirectory(repository.resolve("scripts")) ||
                !Files.isRegularFile(repository.resolve("scripts/STRecoveryPipeline.java")) ||
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
            for (PipelineRow row : report) out.write(row.sequence + "\t" + tsv(row.script) +
                "\t" + row.status + "\t" + row.durationMilliseconds + "\t" +
                tsv(row.argument) + "\t" + tsv(row.detail) + "\n");
        }
    }

    private static String tsv(String value) {
        return value == null ? "" : value.replace("\\", "\\\\").replace("\t", "\\t")
            .replace("\r", "\\r").replace("\n", "\\n");
    }

    private static String message(Throwable throwable) {
        String value = throwable.getMessage();
        return value == null || value.isBlank() ? throwable.getClass().getSimpleName() : value;
    }

    private record PipelineOptions(String mode, Path repository) { }
    private record PipelineRow(int sequence, String script, String status,
        long durationMilliseconds, String argument, String detail) { }
}
