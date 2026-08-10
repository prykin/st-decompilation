// Validate a freshly exported corpus against the immediately preceding corpus snapshot.
// The pipeline supplies current corpus, optional baseline snapshot, and recovery output paths.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Validate Export Regression

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStream;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.StandardCopyOption;
import java.security.MessageDigest;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Set;
import java.util.TreeSet;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

import ghidra.app.script.GhidraScript;

public class STExportRegressionGate extends GhidraScript {
    private static final Pattern ADDRESS = Pattern.compile("\\\"address\\\":\\\"([^\\\"]+)\\\"");
    private static final Pattern NAME = Pattern.compile("\\\"name\\\":\\\"((?:\\\\.|[^\\\"])*)\\\"");
    private static final Pattern STATUS = Pattern.compile(
        "\\\"decompile_status\\\":\\\"([^\\\"]+)\\\"");
    private static final Pattern THUNK_TARGET = Pattern.compile(
        "\\\"thunk_target\\\":\\\"([0-9A-Fa-f]{8})(?: [^\\\"]*)?\\\"");
    private static final String JSON_QUOTE = Character.toString(34);
    private static final Pattern TYPE_PATH = Pattern.compile(
        Pattern.quote(JSON_QUOTE + "path" + JSON_QUOTE + ":" + JSON_QUOTE) +
        "([^" + JSON_QUOTE + "]+)" + Pattern.quote(JSON_QUOTE));
    private static final Pattern VTABLE_SOURCE = Pattern.compile(
        "\\[STVTableApplier\\] Generated from ([0-9A-Fa-f]{8})");
    private static final Pattern VTABLE_COMPONENT = Pattern.compile(
        Pattern.quote("{" + JSON_QUOTE + "ordinal" + JSON_QUOTE + ":") +
        "[0-9]+," + Pattern.quote(JSON_QUOTE + "offset" + JSON_QUOTE + ":") +
        "([0-9]+),.*?" +
        Pattern.quote(JSON_QUOTE + "field_name" + JSON_QUOTE + ":" + JSON_QUOTE) +
        "([^" + JSON_QUOTE + "]*)" +
        Pattern.quote(JSON_QUOTE + "," + JSON_QUOTE + "type" + JSON_QUOTE +
            ":" + JSON_QUOTE) +
        "([^" + JSON_QUOTE + "]+)" + Pattern.quote(JSON_QUOTE));
    private static final Pattern VTABLE_TARGET_COMPONENT = Pattern.compile(
        Pattern.quote("{" + JSON_QUOTE + "ordinal" + JSON_QUOTE + ":") +
        "[0-9]+," + Pattern.quote(JSON_QUOTE + "offset" + JSON_QUOTE + ":") +
        "([0-9]+),.*?" +
        Pattern.quote(JSON_QUOTE + "field_name" + JSON_QUOTE + ":" + JSON_QUOTE) +
        "([^" + JSON_QUOTE + "]*)" +
        Pattern.quote(JSON_QUOTE + "," + JSON_QUOTE + "type" + JSON_QUOTE +
            ":" + JSON_QUOTE) +
        "([^" + JSON_QUOTE + "]+)" +
        Pattern.quote(JSON_QUOTE + "," + JSON_QUOTE + "comment" + JSON_QUOTE +
            ":" + JSON_QUOTE) +
        "[^" + JSON_QUOTE + "]*?->\\s*([0-9A-Fa-f]{8})[^" + JSON_QUOTE + "]*" +
        Pattern.quote(JSON_QUOTE));
    private static final Pattern CATEGORY = Pattern.compile(
        "\\{\\\"kind\\\":\\\"([^\\\"]+)\\\".*?\\\"occurrences\\\":([0-9]+)");
    private static final Pattern ISSUE_FUNCTION = Pattern.compile(
        "\\\"function_address\\\":\\\"([0-9A-Fa-f]{8})\\\"");
    private static final Pattern ISSUE_KIND = Pattern.compile(
        "\\\"kind\\\":\\\"([^\\\"]+)\\\"");
    private static final Pattern ISSUE_OCCURRENCES = Pattern.compile(
        "\\\"occurrences\\\":([0-9]+)");
    private static final Pattern HEX64 = Pattern.compile("[0-9a-f]{64}");

    private final List<Check> checks = new ArrayList<>();

    @Override
    protected void run() throws Exception {
        end(true);
        String[] args = getScriptArgs();
        if (args.length < 3)
            throw new IllegalArgumentException(
                "Usage: <decomp-program-dir> <baseline-dir-or-dash> <recovery-program-dir>");
        Path current = Path.of(args[0]).toAbsolutePath().normalize();
        Path baseline = "-".equals(args[1]) ? null : Path.of(args[1]).toAbsolutePath().normalize();
        Path recovery = Path.of(args[2]).toAbsolutePath().normalize();
        if (!Files.isRegularFile(current.resolve("manifest.json")) ||
                !Files.isRegularFile(current.resolve("functions.json")) ||
                !Files.isRegularFile(current.resolve("types.jsonl")))
            throw new IllegalStateException("Incomplete current export: " + current);
        Files.createDirectories(recovery);

        CorpusMetrics now = metrics(current);
        boolean hasBaseline = baseline != null &&
            Files.isRegularFile(baseline.resolve("manifest.json")) &&
            Files.isRegularFile(baseline.resolve("functions.json")) &&
            Files.isRegularFile(regressionArtifact(baseline, "types.jsonl",
                "types.snapshot"));
        CorpusMetrics before = hasBaseline ? metrics(baseline) : null;

        internalChecks(now);
        if (hasBaseline) regressionChecks(before, now);
        else add("info", "baseline", 0, 0, "baseline_created",
            "No previous corpus snapshot was available");

        long errors = checks.stream().filter(check -> "error".equals(check.severity)).count();
        long warnings = checks.stream().filter(check -> "warning".equals(check.severity)).count();
        String status = errors > 0 ? "failed" : hasBaseline ? "passed" : "baseline_created";
        Path report = recovery.resolve("export_regression_report.tsv");
        Path receipt = recovery.resolve("export_receipt.json");
        writeReport(report);
        writeReceipt(receipt, status, errors, warnings, current, baseline, now, before);
        println("Export regression gate: status=" + status + ", errors=" + errors +
            ", warnings=" + warnings + ", report=" + report);
        if (errors > 0)
            throw new IllegalStateException("Export regression gate rejected the corpus: " +
                errors + " hard regression(s); inspect " + report);
    }

    private void internalChecks(CorpusMetrics now) {
        add(now.failedBodies == 0 ? "info" : "error", "decompile_failures", 0,
            now.failedBodies, now.failedBodies == 0 ? "ok" : "regressed",
            "Every body_exported function must have decompile_status=ok");
        long enumCompositions = now.quality.getOrDefault(
            "generated_enum_bitwise_composition", 0L);
        add(enumCompositions == 0 ? "info" : "error",
            "generated_enum_bitwise_composition", 0, enumCompositions,
            enumCompositions == 0 ? "ok" : "quality_debt",
            "Strict internal invariant, not a baseline delta: generated enum " +
                "CASE_*|CASE_* compositions must be repaired before export");
        add(now.untypedTaggedMessageSlots.isEmpty() ? "info" : "error",
            "tagged_message_vtable_slot_untyped", 0,
            now.untypedTaggedMessageSlots.size(),
            now.untypedTaggedMessageSlots.isEmpty() ? "ok" : "regressed",
            sample(now.untypedTaggedMessageSlots));
    }

    private void regressionChecks(CorpusMetrics before, CorpusMetrics now) {
        compareNondecreasing("function_count", before.number("function_count"),
            now.number("function_count"));
        Set<String> removedBodies = new TreeSet<>(before.bodyFunctions);
        removedBodies.removeAll(now.bodyFunctions);
        Set<String> newlyExcludedLibraries = new TreeSet<>(removedBodies);
        newlyExcludedLibraries.retainAll(now.libraryFunctions);
        Set<String> unexpectedBodyLoss = new TreeSet<>(removedBodies);
        unexpectedBodyLoss.removeAll(now.libraryFunctions);
        long beforeBodies = before.number("body_function_count");
        long afterBodies = now.number("body_function_count");
        add(unexpectedBodyLoss.isEmpty() ? "info" : "error", "body_function_count",
            beforeBodies, afterBodies,
            unexpectedBodyLoss.isEmpty() ?
                afterBodies < beforeBodies ? "stage_transition" :
                    afterBodies > beforeBodies ? "improved" : "ok" :
                "regressed",
            unexpectedBodyLoss.isEmpty() ?
                newlyExcludedLibraries.isEmpty() ? "policy=per-address nondecreasing" :
                    "Bodies intentionally excluded after explicit LIBRARY classification: " +
                        sample(newlyExcludedLibraries) :
                "Non-library function bodies disappeared: " + sample(unexpectedBodyLoss));
        add("info", "new_library_body_exclusions", 0, newlyExcludedLibraries.size(),
            newlyExcludedLibraries.isEmpty() ? "ok" : "stage_transition",
            sample(newlyExcludedLibraries));
        compareNondecreasing("covered_executable_bytes",
            before.number("function_covered_executable_byte_count"),
            now.number("function_covered_executable_byte_count"));
        compareNonincreasing("unclaimed_meaningful_bytes",
            before.number("unclaimed_meaningful_byte_count"),
            now.number("unclaimed_meaningful_byte_count"));
        boolean typedSlotCountDropped = now.typedVtableSlots < before.typedVtableSlots;
        add(typedSlotCountDropped ? "warning" : "info", "typed_vtable_slots",
            before.typedVtableSlots, now.typedVtableSlots,
            typedSlotCountDropped ? "investigate" :
                now.typedVtableSlots > before.typedVtableSlots ? "improved" : "ok",
            "Exact per-slot type erasure is the hard regression criterion");
        boolean dispatchCountDropped = now.dispatchVtables < before.dispatchVtables;
        add(dispatchCountDropped ? "error" : "info", "dispatch_vtable_count",
            before.dispatchVtables,
            now.dispatchVtables,
            dispatchCountDropped ? "regression" :
                now.dispatchVtables > before.dispatchVtables ? "improved" : "ok",
            "Physical vtable layouts and polymorphic dispatch interfaces are counted separately");
        Set<String> erasedVtableTypes = new TreeSet<>();
        for (Map.Entry<String, String> entry : before.vtableSlots.entrySet()) {
            if (!isRecoveredFunctionPointer(entry.getValue()))
                continue;
            String currentType = now.vtableSlots.get(entry.getKey());
            if (currentType == null || !isRecoveredFunctionPointer(currentType))
                erasedVtableTypes.add(entry.getKey() + " " + entry.getValue() + " -> " +
                    (currentType == null ? "<missing>" : currentType));
        }
        add(erasedVtableTypes.isEmpty() ? "info" : "error", "typed_vtable_slot_erasure", 0,
            erasedVtableTypes.size(), erasedVtableTypes.isEmpty() ? "ok" : "regressed",
            sample(erasedVtableTypes));

        Set<String> removed = new TreeSet<>(before.names.keySet());
        removed.removeAll(now.names.keySet());
        add(removed.isEmpty() ? "info" : "error", "function_addresses_removed", 0,
            removed.size(), removed.isEmpty() ? "ok" : "regressed",
            sample(removed));

        Set<String> downgraded = new TreeSet<>();
        for (Map.Entry<String, String> entry : before.names.entrySet()) {
            String currentName = now.names.get(entry.getKey());
            String terminal = terminalTarget(entry.getKey(), now);
            boolean intentionalRetirement =
                now.retiredHeuristicIdentities.contains(entry.getKey()) ||
                now.retiredHeuristicIdentities.contains(terminal);
            if (currentName != null && !defaultName(entry.getValue()) &&
                    defaultName(currentName) && !intentionalRetirement)
                downgraded.add(entry.getKey() + " " + entry.getValue() + " -> " + currentName);
        }
        add(downgraded.isEmpty() ? "info" : "error", "semantic_name_downgrades", 0,
            downgraded.size(), downgraded.isEmpty() ? "ok" : "regressed",
            sample(downgraded));

        Set<String> kinds = new TreeSet<>(before.quality.keySet());
        kinds.addAll(now.quality.keySet());
        boolean firstDispatchMigration =
            before.dispatchVtables == 0 && now.dispatchVtables > 0;
        boolean functionAnalysisTransition =
            now.number("function_analysis_schema") >
                before.number("function_analysis_schema");
        for (String kind : kinds) {
            long oldValue = before.quality.getOrDefault(kind, 0L);
            long newValue = now.quality.getOrDefault(kind, 0L);
            String policy = qualityPolicy(kind);
            if ("strict_zero".equals(policy)) continue;
            if ("nonincreasing".equals(policy)) {
                boolean regressed = newValue > oldValue;
                boolean dispatchTransition = regressed && firstDispatchMigration &&
                    "raw_indirect_call".equals(kind);
                boolean accountingTransition = regressed && functionAnalysisTransition &&
                    "raw_indirect_call".equals(kind);
                boolean coverageTransition = regressed &&
                    qualityIncreaseIsConfinedToNewFunctions(before, now, kind);
                String severity = !regressed ? "info" :
                    dispatchTransition || accountingTransition || coverageTransition ? "warning" :
                    blockingQuality(kind) ? "error" : "warning";
                add(severity, "quality:" + kind, oldValue, newValue,
                    dispatchTransition ? "stage_transition" :
                        accountingTransition ? "analysis_transition" :
                        coverageTransition ? "coverage_transition" :
                        regressed ? "regressed" : newValue < oldValue ? "improved" : "ok",
                    dispatchTransition ?
                        "First dispatch-shape migration may expose honest unresolved tail " +
                            "calls while removing wrapped vtable[1] aliases; the next export " +
                            "uses the normal blocking nonincreasing policy" :
                    accountingTransition ?
                        "Function-analysis schema " +
                            before.number("function_analysis_schema") + " -> " +
                            now.number("function_analysis_schema") +
                            " exposed previously malformed exporter-owned syntax; " +
                            "changed_functions=" + qualityDeltaSample(before, now, kind) +
                            "; the next export uses the normal blocking policy" :
                    coverageTransition ?
                        "Newly claimed executable bytes exposed honest recovery debt only in " +
                            "functions absent from the baseline; existing functions did not " +
                            "regress. new_functions=" +
                            qualityIncreaseFunctionSample(before, now, kind) +
                            "; subsequent exports compare these functions normally" :
                        "policy=nonincreasing; blocking=" + blockingQuality(kind) +
                            (regressed ? "; increased_functions=" +
                                qualityDeltaSample(before, now, kind) : ""));
            }
            else if ("stage_transition".equals(policy) && newValue != oldValue) {
                add("warning", "quality:" + kind, oldValue, newValue, "stage_transition",
                    "A later recovery stage may expose more named layout debt without losing " +
                    "structure; changed_functions=" +
                    qualityDeltaSample(before, now, kind));
            }
        }
    }

    private void compareNondecreasing(String name, long before, long after) {
        boolean regressed = after < before;
        add(regressed ? "error" : "info", name, before, after,
            regressed ? "regressed" : after > before ? "improved" : "ok",
            "policy=nondecreasing");
    }

    private void compareNonincreasing(String name, long before, long after) {
        boolean regressed = after > before;
        add(regressed ? "error" : "info", name, before, after,
            regressed ? "regressed" : after < before ? "improved" : "ok",
            "policy=nonincreasing");
    }

    private void add(String severity, String name, long before, long after,
            String status, String detail) {
        checks.add(new Check(severity, name, before, after, after - before, status, detail));
    }

    private CorpusMetrics metrics(Path root) throws Exception {
        CorpusMetrics result = new CorpusMetrics();
        String manifest = Files.readString(root.resolve("manifest.json"), StandardCharsets.UTF_8);
        for (String key : List.of("function_count", "body_function_count",
                "function_covered_executable_byte_count", "unclaimed_meaningful_byte_count"))
            result.numbers.put(key, jsonLong(manifest, key));
        result.numbers.put("function_analysis_schema",
            jsonLongOrDefault(manifest, "function_analysis_schema", 0));
        readFunctions(root.resolve("functions.json"), result);
        readVtables(regressionArtifact(root, "types.jsonl", "types.snapshot"), result);
        Path quality = root.resolve("decomp_quality_summary.json");
        if (Files.isRegularFile(quality)) {
            String text = Files.readString(quality, StandardCharsets.UTF_8);
            Matcher matcher = CATEGORY.matcher(text);
            while (matcher.find())
                result.quality.put(matcher.group(1), Long.parseLong(matcher.group(2)));
        }
        Path idioms = regressionArtifact(root, "pseudocode_idioms.jsonl",
            "pseudocode_idioms.snapshot");
        if (Files.isRegularFile(idioms)) readQualityByFunction(idioms, result);
        return result;
    }

    private Path regressionArtifact(Path root, String primary, String snapshot) {
        Path direct = root.resolve(primary);
        return Files.isRegularFile(direct) ? direct : root.resolve(snapshot);
    }

    private void readQualityByFunction(Path path, CorpusMetrics result) throws Exception {
        try (BufferedReader reader = Files.newBufferedReader(path,
                StandardCharsets.UTF_8)) {
            String line;
            while ((line = reader.readLine()) != null) {
                Matcher function = ISSUE_FUNCTION.matcher(line);
                Matcher kind = ISSUE_KIND.matcher(line);
                Matcher occurrences = ISSUE_OCCURRENCES.matcher(line);
                if (!function.find() || !kind.find() || !occurrences.find()) continue;
                result.qualityByFunction.computeIfAbsent(kind.group(1),
                    ignored -> new HashMap<>()).put(
                        function.group(1).toUpperCase(Locale.ROOT),
                        Long.parseLong(occurrences.group(1)));
            }
        }
    }

    private String qualityDeltaSample(CorpusMetrics before, CorpusMetrics now,
            String kind) {
        Map<String, Long> left = before.qualityByFunction.getOrDefault(kind, Map.of());
        Map<String, Long> right = now.qualityByFunction.getOrDefault(kind, Map.of());
        if (left.isEmpty() && right.isEmpty()) return "<detail unavailable>";
        List<Map.Entry<String, Long>> deltas = new ArrayList<>();
        Set<String> functions = new TreeSet<>(left.keySet());
        functions.addAll(right.keySet());
        for (String function : functions) {
            long delta = right.getOrDefault(function, 0L) -
                left.getOrDefault(function, 0L);
            if (delta != 0)
                deltas.add(Map.entry(function, delta));
        }
        deltas.sort((a, b) -> {
            int byDelta = Long.compare(Math.abs(b.getValue()),
                Math.abs(a.getValue()));
            return byDelta != 0 ? byDelta : a.getKey().compareTo(b.getKey());
        });
        List<String> sample = new ArrayList<>();
        for (Map.Entry<String, Long> entry : deltas) {
            sample.add(entry.getKey() + (entry.getValue() > 0 ? "+" : "") +
                entry.getValue());
            if (sample.size() == 12) break;
        }
        return sample.isEmpty() ? "<summary-only delta>" : String.join(" | ", sample);
    }

    /**
     * Expanding function coverage necessarily exposes quality debt which did not exist in the
     * previous corpus.  That is a coverage transition, not a regression in already recovered
     * code.  Keep this exception deliberately address-exact: every positive per-function delta
     * must belong to a function which was wholly absent from the baseline.  On the next export
     * those addresses are part of the baseline and the ordinary blocking policy applies.
     */
    private boolean qualityIncreaseIsConfinedToNewFunctions(CorpusMetrics before,
            CorpusMetrics now, String kind) {
        Map<String, Long> left = before.qualityByFunction.getOrDefault(kind, Map.of());
        Map<String, Long> right = now.qualityByFunction.getOrDefault(kind, Map.of());
        boolean sawIncrease = false;
        for (Map.Entry<String, Long> entry : right.entrySet()) {
            long delta = entry.getValue() - left.getOrDefault(entry.getKey(), 0L);
            if (delta <= 0) continue;
            sawIncrease = true;
            if (before.names.containsKey(entry.getKey())) return false;
        }
        return sawIncrease;
    }

    private String qualityIncreaseFunctionSample(CorpusMetrics before, CorpusMetrics now,
            String kind) {
        Map<String, Long> left = before.qualityByFunction.getOrDefault(kind, Map.of());
        Map<String, Long> right = now.qualityByFunction.getOrDefault(kind, Map.of());
        Set<String> result = new TreeSet<>();
        for (Map.Entry<String, Long> entry : right.entrySet()) {
            long delta = entry.getValue() - left.getOrDefault(entry.getKey(), 0L);
            if (delta > 0 && !before.names.containsKey(entry.getKey()))
                result.add(entry.getKey() + "+" + delta);
        }
        return result.isEmpty() ? "<detail unavailable>" : sample(result);
    }

    private void readFunctions(Path path, CorpusMetrics result) throws Exception {
        try (BufferedReader reader = Files.newBufferedReader(path, StandardCharsets.UTF_8)) {
            String line;
            while ((line = reader.readLine()) != null) {
                Matcher address = ADDRESS.matcher(line);
                if (!address.find()) continue;
                String functionAddress = address.group(1).toUpperCase(Locale.ROOT);
                Matcher name = NAME.matcher(line);
                if (name.find()) result.names.put(functionAddress, unescape(name.group(1)));
                Matcher thunk = THUNK_TARGET.matcher(line);
                if (thunk.find())
                    result.thunkTargets.put(functionAddress,
                        thunk.group(1).toUpperCase(Locale.ROOT));
                if (line.contains("\"tags\":[") &&
                        line.contains("\"RECOVERED_MESSAGE_HANDLER\"") &&
                        line.contains("\"calling_convention\":\"__thiscall\"") &&
                        line.contains("\"parameter_count\":2,") &&
                        line.contains("STMessage * message)"))
                    result.taggedMessageHandlers.add(functionAddress);
                if (line.contains("\"body_exported\":true")) {
                    result.bodyFunctions.add(functionAddress);
                    Matcher status = STATUS.matcher(line);
                    if (!status.find() || !"ok".equals(status.group(1))) result.failedBodies++;
                }
                if (line.contains("\"library\":true"))
                    result.libraryFunctions.add(functionAddress);
                if (line.contains("\"RECOVERED_HEURISTIC_IDENTITY\"") ||
                        line.contains("Retired legacy curated identity"))
                    result.retiredHeuristicIdentities.add(functionAddress);
            }
        }
    }

    private void readVtables(Path path, CorpusMetrics result) throws Exception {
        try (BufferedReader reader = Files.newBufferedReader(path, StandardCharsets.UTF_8)) {
            String line;
            while ((line = reader.readLine()) != null) {
                if (!line.contains("\"path\":\"/SubmarineTitans/Recovered/VTables/")) continue;
                Matcher pathMatcher = TYPE_PATH.matcher(line);
                if (!pathMatcher.find()) continue;
                String typePath = unescape(pathMatcher.group(1));
                Matcher sourceMatcher = VTABLE_SOURCE.matcher(line);
                String tableAddress = sourceMatcher.find() ?
                    sourceMatcher.group(1).toUpperCase(Locale.ROOT) : "";
                String tableIdentity = tableAddress.isBlank() ?
                    "path:" + typePath : "table:" + tableAddress;
                if (typePath.endsWith("DispatchVTable") &&
                        result.dispatchVtableIdentities.add(tableIdentity))
                    result.dispatchVtables++;
                Matcher component = VTABLE_COMPONENT.matcher(line);
                while (component.find()) {
                    String type = unescape(component.group(3));
                    // Physical table address + byte offset is stable across deterministic
                    // generated type/field renames; those names are presentation, not identity.
                    int componentOffset = Integer.parseInt(component.group(1));
                    // A newly proven vptr store may split one formerly concatenated
                    // generated table into several physical tables.  The byte address of
                    // the pointer slot survives that repartitioning; table-name-plus-offset
                    // does not.  Keep path identity only for legacy descriptions which have
                    // no source address.
                    String key = tableAddress.isBlank() ?
                        tableIdentity + "@" + componentOffset :
                        physicalSlotIdentity(tableAddress, componentOffset);
                    String previous = result.vtableSlots.put(key, type);
                    if (previous == null) {
                        if (isRecoveredFunctionPointer(type)) result.typedVtableSlots++;
                        else if ("/void *32".equals(type)) result.voidVtableSlots++;
                    }
                    else if (!isRecoveredFunctionPointer(previous) &&
                            isRecoveredFunctionPointer(type)) {
                        result.typedVtableSlots++;
                        if ("/void *32".equals(previous)) result.voidVtableSlots--;
                    }
                    else if (isRecoveredFunctionPointer(previous) &&
                            !isRecoveredFunctionPointer(type)) {
                        // Multiple stale generated names can describe one physical table.
                        // Keep the strongest exact slot type until lifecycle cleanup removes
                        // the orphan presentation alias.
                        result.vtableSlots.put(key, previous);
                    }
                }
                Matcher message = VTABLE_TARGET_COMPONENT.matcher(line);
                while (message.find()) {
                    String field = unescape(message.group(2));
                    String type = unescape(message.group(3));
                    String target = terminalTarget(message.group(4), result);
                    if (field.startsWith("GetMessage") &&
                            result.taggedMessageHandlers.contains(target) &&
                            "/void *32".equals(type))
                        result.untypedTaggedMessageSlots.add(typePath + "@" +
                            message.group(1) + " -> " + target);
                }
            }
        }
    }

    private boolean isRecoveredFunctionPointer(String type) {
        return type.contains("/SubmarineTitans/Recovered/VTableFunctions/") ||
            type.contains("/SubmarineTitans/Recovered/IndirectCallFunctions/");
    }

    private String physicalSlotIdentity(String tableAddress, int offset) {
        if (tableAddress == null || tableAddress.isBlank()) return "";
        try {
            long value = Long.parseUnsignedLong(tableAddress, 16) +
                Integer.toUnsignedLong(offset);
            return "slot:" + String.format(Locale.ROOT, "%08X", value);
        }
        catch (NumberFormatException exception) { return ""; }
    }

    private String terminalTarget(String address, CorpusMetrics metrics) {
        String current = address.toUpperCase(Locale.ROOT);
        Set<String> seen = new TreeSet<>();
        while (seen.add(current)) {
            String next = metrics.thunkTargets.get(current);
            if (next == null || next.isBlank()) return current;
            current = next;
        }
        return current;
    }

    private long jsonLong(String text, String key) {
        Matcher matcher = Pattern.compile("\\\"" + Pattern.quote(key) +
            "\\\"\\s*:\\s*([0-9]+)").matcher(text);
        if (!matcher.find()) throw new IllegalStateException("Missing numeric manifest key " + key);
        return Long.parseLong(matcher.group(1));
    }

    private long jsonLongOrDefault(String text, String key, long fallback) {
        Matcher matcher = Pattern.compile("\\\"" + Pattern.quote(key) +
            "\\\"\\s*:\\s*([0-9]+)").matcher(text);
        return matcher.find() ? Long.parseLong(matcher.group(1)) : fallback;
    }

    private String qualityPolicy(String kind) {
        return switch (kind) {
            case "generated_enum_bitwise_composition" -> "strict_zero";
            case "generic_field_name", "casted_generic_field", "anonymous_shape_type",
                 "generic_data_symbol" -> "stage_transition";
            case "control_flow_label" -> "informational";
            default -> "nonincreasing";
        };
    }

    private boolean blockingQuality(String kind) {
        return switch (kind) {
            case "raw_indirect_call", "return_width_artifact",
                 "unresolved_register_input", "unexpanded_string_symbol" -> true;
            default -> false;
        };
    }

    private boolean defaultName(String name) {
        String value = name.toLowerCase(Locale.ROOT);
        return value.startsWith("fun_") || value.startsWith("sub_") ||
            value.startsWith("thunk_fun_") || value.startsWith("thunk_sub_") ||
            value.startsWith("lab_");
    }

    private String sample(Set<String> values) {
        if (values.isEmpty()) return "";
        List<String> result = new ArrayList<>();
        for (String value : values) {
            result.add(value);
            if (result.size() == 12) break;
        }
        return String.join(" | ", result);
    }

    private void writeReport(Path path) throws Exception {
        atomicWrite(path, out -> {
            out.write("severity\tcheck\tbefore\tafter\tdelta\tstatus\tdetail\n");
            for (Check check : checks)
                out.write(check.severity + "\t" + tsv(check.name) + "\t" + check.before +
                    "\t" + check.after + "\t" + check.delta + "\t" + check.status +
                    "\t" + tsv(check.detail == null || check.detail.isBlank() ?
                        "-" : check.detail) + "\n");
        });
    }

    private void writeReceipt(Path path, String status, long errors, long warnings,
            Path current, Path baseline, CorpusMetrics now, CorpusMetrics before) throws Exception {
        String semantic = semanticHash(path.getParent().resolve("automation_state.tsv"));
        String previousManifest = baseline != null && Files.isRegularFile(baseline.resolve("manifest.json")) ?
            sha256(baseline.resolve("manifest.json")) : "";
        String json = "{" +
            "\"schema\":\"st-export-receipt\"," +
            "\"schema_version\":1," +
            "\"status\":" + q(status) + "," +
            "\"program_semantic_sha256\":" + q(semantic) + "," +
            "\"current_manifest_sha256\":" + q(sha256(current.resolve("manifest.json"))) + "," +
            "\"previous_manifest_sha256\":" + q(previousManifest) + "," +
            "\"function_count\":" + now.number("function_count") + "," +
            "\"body_function_count\":" + now.number("body_function_count") + "," +
            "\"failed_body_count\":" + now.failedBodies + "," +
            "\"typed_vtable_slot_count\":" + now.typedVtableSlots + "," +
            "\"void_vtable_slot_count\":" + now.voidVtableSlots + "," +
            "\"dispatch_vtable_count\":" + now.dispatchVtables + "," +
            "\"untyped_tagged_message_slot_count\":" +
                now.untypedTaggedMessageSlots.size() + "," +
            "\"hard_regression_count\":" + errors + "," +
            "\"warning_count\":" + warnings +
            "}";
        atomicWrite(path, out -> out.write(json + "\n"));
    }

    private String semanticHash(Path state) throws Exception {
        if (!Files.isRegularFile(state)) return "";
        for (String line : Files.readAllLines(state, StandardCharsets.UTF_8)) {
            String[] fields = line.split("\\t", -1);
            if (fields.length == 4 && "program".equals(fields[0]) &&
                    "semantic_sha256".equals(fields[1]) && HEX64.matcher(fields[2]).matches())
                return fields[2];
        }
        return "";
    }

    private String sha256(Path path) throws Exception {
        MessageDigest digest = MessageDigest.getInstance("SHA-256");
        try (InputStream input = Files.newInputStream(path)) {
            byte[] buffer = new byte[65536];
            int count;
            while ((count = input.read(buffer)) >= 0)
                if (count > 0) digest.update(buffer, 0, count);
        }
        StringBuilder result = new StringBuilder();
        for (byte value : digest.digest()) result.append(String.format("%02x", value & 0xff));
        return result.toString();
    }

    private void atomicWrite(Path path, WriterAction action) throws Exception {
        Files.createDirectories(path.getParent());
        Path temporary = path.resolveSibling(path.getFileName() + ".tmp");
        try (BufferedWriter out = Files.newBufferedWriter(temporary, StandardCharsets.UTF_8)) {
            action.write(out);
        }
        try {
            Files.move(temporary, path, StandardCopyOption.ATOMIC_MOVE,
                StandardCopyOption.REPLACE_EXISTING);
        }
        catch (IOException unsupported) {
            Files.move(temporary, path, StandardCopyOption.REPLACE_EXISTING);
        }
    }

    private static String unescape(String value) {
        StringBuilder result = new StringBuilder();
        boolean escaped = false;
        for (int index = 0; index < value.length(); index++) {
            char ch = value.charAt(index);
            if (!escaped && ch == '\\') { escaped = true; continue; }
            if (escaped) {
                result.append(switch (ch) {
                    case 'n' -> '\n'; case 'r' -> '\r'; case 't' -> '\t';
                    default -> ch;
                });
                escaped = false;
            }
            else result.append(ch);
        }
        if (escaped) result.append('\\');
        return result.toString();
    }

    private static String tsv(String value) {
        return value == null ? "" : value.replace("\\", "\\\\").replace("\t", "\\t")
            .replace("\r", "\\r").replace("\n", "\\n");
    }

    private static String q(String value) {
        return "\"" + (value == null ? "" : value.replace("\\", "\\\\")
            .replace("\"", "\\\"").replace("\r", "\\r").replace("\n", "\\n")) + "\"";
    }

    private static class CorpusMetrics {
        final Map<String, Long> numbers = new HashMap<>();
        final Map<String, String> names = new HashMap<>();
        final Map<String, Long> quality = new HashMap<>();
        final Map<String, Map<String, Long>> qualityByFunction = new HashMap<>();
        final Map<String, String> vtableSlots = new HashMap<>();
        final Map<String, String> thunkTargets = new HashMap<>();
        final Set<String> taggedMessageHandlers = new TreeSet<>();
        final Set<String> untypedTaggedMessageSlots = new TreeSet<>();
        final Set<String> retiredHeuristicIdentities = new TreeSet<>();
        final Set<String> dispatchVtableIdentities = new TreeSet<>();
        final Set<String> bodyFunctions = new TreeSet<>();
        final Set<String> libraryFunctions = new TreeSet<>();
        long failedBodies;
        long typedVtableSlots;
        long voidVtableSlots;
        long dispatchVtables;
        long number(String name) { return numbers.getOrDefault(name, 0L); }
    }

    private record Check(String severity, String name, long before, long after,
        long delta, String status, String detail) { }
    private interface WriterAction { void write(BufferedWriter writer) throws Exception; }
}
