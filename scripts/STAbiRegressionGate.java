// Check the current Program ABI against the last accepted exported corpus before expensive
// whole-program recovery continues.  The engine is generic; stable sentinel rules and exact
// reviewed transitions live under config/, never as image-specific Java branches.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Validate ABI Regression

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.io.IOException;
import java.io.InputStream;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.StandardCopyOption;
import java.security.MessageDigest;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Set;
import java.util.TreeMap;
import java.util.TreeSet;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeComponent;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.FunctionDefinition;
import ghidra.program.model.data.ParameterDefinition;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.TypeDef;
import ghidra.program.model.listing.Function;

public class STAbiRegressionGate extends GhidraScript {
    private static final int DECOMPILE_TIMEOUT_SECONDS = 600;
    private static final boolean DECOMPILE_C_CODE = true;
    private static final boolean DECOMPILE_SYNTAX_TREE = true;
    private static final String METRIC_BASELINE_SCHEMA = "1";
    private static final String METRIC_BASELINE_FILE = "abi_fixture_baseline.tsv";
    private static final String RULES_FILE = "abi-regression-rules.tsv";
    private static final String TRANSITIONS_FILE = "abi-regression-transitions.tsv";
    private static final Pattern JSON_PATH = Pattern.compile(
        "\\\"path\\\":\\\"([^\\\"]+)\\\"");
    private static final Pattern JSON_NAME = Pattern.compile(
        "\\\"name\\\":\\\"([^\\\"]+)\\\"");
    private static final Pattern JSON_CLASS = Pattern.compile(
        "\\\"class\\\":\\\"([^\\\"]+)\\\"");
    private static final Pattern JSON_LENGTH = Pattern.compile(
        "\\\"length\\\":(-?[0-9]+)");
    private static final Pattern CALLING_CONVENTION = Pattern.compile(
        "\\\"calling_convention\\\":\\\"([^\\\"]*)\\\"");
    private static final Pattern RETURN_TYPE = Pattern.compile(
        "\\\"return_type\\\":\\\"([^\\\"]*)\\\"");
    private static final Pattern VARARGS = Pattern.compile(
        "\\\"varargs\\\":(true|false)");
    private static final Pattern NORETURN = Pattern.compile(
        "\\\"noreturn\\\":(true|false)");
    private static final Pattern ARGUMENTS = Pattern.compile(
        "\\\"arguments\\\":\\[(.*?)](?:}|,\\\")");
    private static final Pattern ARGUMENT_TYPE = Pattern.compile(
        "\\\"name\\\":\\\"(?:\\\\.|[^\\\"])*\\\",\\\"type\\\":\\\"([^\\\"]+)\\\"");
    private static final Pattern VTABLE_SOURCE = Pattern.compile(
        "\\bfrom ([0-9A-Fa-f]{8})\\b");
    private static final Pattern COMPONENT = Pattern.compile(
        "\\{\\\"ordinal\\\":[0-9]+,\\\"offset\\\":([0-9]+)," +
        "\\\"length\\\":([0-9]+),\\\"field_name\\\":\\\"([^\\\"]*)\\\"," +
        "\\\"type\\\":\\\"([^\\\"]+)\\\"");
    private static final Pattern FUNCTION_ADDRESS = Pattern.compile(
        "\\\"address\\\":\\\"([0-9A-Fa-f]{8})\\\"");
    private static final Pattern FUNCTION_SIGNATURE = Pattern.compile(
        "\\\"signature\\\":\\\"((?:\\\\.|[^\\\"])*)\\\"");
    private static final Pattern FUNCTION_CC = Pattern.compile(
        "\\\"calling_convention\\\":\\\"([^\\\"]*)\\\"");
    private static final Pattern FUNCTION_PARAMETER_COUNT = Pattern.compile(
        "\\\"parameter_count\\\":([0-9]+)");
    private static final Pattern FUNCTION_PARAMETERS = Pattern.compile(
        "\\\"parameters\\\":\\[(.*?)](?:,\\\"locals\\\":|})");
    private static final Pattern FUNCTION_QUALIFIED_NAME = Pattern.compile(
        "\\\"qualified_name\\\":\\\"((?:\\\\.|[^\\\"])*)\\\"");
    private static final Pattern RECEIPT_STATUS = Pattern.compile(
        "\\\"status\\\":\\\"([^\\\"]+)\\\"");
    private static final Pattern RECEIPT_CURRENT = Pattern.compile(
        "\\\"current_manifest_sha256\\\":\\\"([0-9a-f]{64})\\\"");
    private static final Pattern RECEIPT_PREVIOUS = Pattern.compile(
        "\\\"previous_manifest_sha256\\\":\\\"([0-9a-f]{64})\\\"");
    private static final Pattern RECEIPT_SEMANTIC = Pattern.compile(
        "\\\"program_semantic_sha256\\\":\\\"([0-9a-f]{64})\\\"");

    private final List<Row> rows = new ArrayList<>();
    private final Map<String, Transition> transitions = new HashMap<>();
    private final Set<String> usedTransitions = new HashSet<>();
    private final Map<String, String> decompiled = new HashMap<>();
    private final Map<String, Integer> acceptedMetricCounts = new HashMap<>();
    private final List<MetricSample> metricSamples = new ArrayList<>();
    private int typedSlotsChecked;
    private int classVptrsChecked;
    private int fixtureFunctionsChecked;
    private String rulesHash;
    private String transitionsHash;
    private String metricBaselineStatus = "unavailable";
    private String metricBaselineHash = "";

    @Override
    protected void run() throws Exception {
        end(true);
        if (currentProgram == null)
            throw new IllegalStateException("Open a Program before running the ABI gate");
        String[] args = getScriptArgs();
        if (args.length != 0 && args.length < 3)
            throw new IllegalArgumentException(
                "Usage: <accepted-corpus-or-snapshot> <recovery-program-dir> " +
                "<policy-dir> [phase] [current-semantic-sha256]");
        Path repository = args.length == 0 ? inferredRepository() : null;
        Path baselineRoot = args.length == 0 ?
            repository.resolve("decomp").resolve(currentProgram.getName()) :
            Path.of(args[0]).toAbsolutePath().normalize();
        Path recovery = args.length == 0 ?
            repository.resolve("recovery").resolve(currentProgram.getName()) :
            Path.of(args[1]).toAbsolutePath().normalize();
        Path policy = args.length == 0 ? repository.resolve("config") :
            Path.of(args[2]).toAbsolutePath().normalize();
        String phase = args.length > 3 ? args[3] : "standalone";
        String currentSemantic = args.length > 4 ? args[4] : "";
        Path functions = baselineRoot.resolve("functions.json");
        Path types = regressionArtifact(baselineRoot, "types.jsonl", "types.snapshot");
        if (!Files.isRegularFile(baselineRoot.resolve("manifest.json")) ||
                !Files.isRegularFile(functions) || !Files.isRegularFile(types))
            throw new IllegalStateException("Incomplete accepted ABI baseline: " + baselineRoot);
        rulesHash = sha256(policy.resolve(RULES_FILE));
        Path transitionPath = policy.resolve(TRANSITIONS_FILE);
        transitionsHash = Files.isRegularFile(transitionPath) ? sha256(transitionPath) : "";
        AcceptedReceipt receipt = verifyAcceptedManifest(baselineRoot, recovery);
        loadTransitions(transitionPath);
        Baseline baseline = loadBaseline(functions, types);
        List<Rule> rules = loadRules(policy.resolve(RULES_FILE));
        Path metricBaseline = recovery.resolve(METRIC_BASELINE_FILE);
        boolean metricBaselineLoaded = loadMetricBaseline(metricBaseline, receipt, rules);
        boolean initializeMetricBaseline = !metricBaselineLoaded &&
            ("startup".equals(phase) || "accepted-refresh".equals(phase)) &&
            "passed".equals(receipt.status) &&
            currentSemantic.matches("[0-9a-f]{64}") &&
            receipt.programSemantic.equals(currentSemantic);
        if (!metricBaselineLoaded && !initializeMetricBaseline) {
            metricBaselineStatus = "missing_or_stale";
            rows.add(new Row("error", "global", "fixture-metric-baseline",
                "raw_metric_baseline", "accepted raw fixture baseline", "unavailable",
                "", "", "configuration_error",
                "A raw fixture baseline may be initialized only from a freshly " +
                "fingerprinted Program whose semantic hash equals the passed receipt"));
        }
        else metricBaselineStatus = initializeMetricBaseline ? "initializing" : "verified";

        checkClassVptrs(baseline);
        checkAcceptedVtableSlots(baseline);
        checkFixtures(baseline, rules, initializeMetricBaseline);
        if (initializeMetricBaseline &&
                rows.stream().noneMatch(row -> "error".equals(row.severity))) {
            writeMetricBaseline(metricBaseline, receipt, rules);
            metricBaselineStatus = "initialized";
            metricBaselineHash = sha256(metricBaseline);
        }
        checkTransitionLifecycle();
        if (!rulesHash.equals(sha256(policy.resolve(RULES_FILE))) ||
                !transitionsHash.equals(Files.isRegularFile(transitionPath) ?
                    sha256(transitionPath) : ""))
            throw new IllegalStateException("ABI regression policy changed while the gate " +
                "was running; restart with one stable policy bundle");

        long errors = rows.stream().filter(row -> "error".equals(row.severity)).count();
        long warnings = rows.stream().filter(row -> "warning".equals(row.severity)).count();
        Path report = recovery.resolve("abi_regression_report.tsv");
        Path summary = recovery.resolve("abi_regression_summary.txt");
        writeReport(report, phase);
        writeSummary(summary, phase, baselineRoot, rules.size(), errors, warnings);
        println("ABI regression gate: phase=" + phase + ", typed_vtable_slots=" +
            typedSlotsChecked + ", class_vptrs=" + classVptrsChecked +
            ", fixture_functions=" + fixtureFunctionsChecked + ", errors=" + errors +
            ", warnings=" + warnings + ", report=" + report);
        if (errors > 0)
            throw new IllegalStateException("ABI regression gate rejected the Program: " +
                errors + " hard regression(s); inspect " + report);
    }

    private AcceptedReceipt verifyAcceptedManifest(Path baseline, Path recovery)
            throws Exception {
        Path receiptPath = recovery.resolve("export_receipt.json");
        if (!Files.isRegularFile(receiptPath))
            throw new IllegalStateException("Missing accepted export receipt: " + receiptPath);
        String receipt = Files.readString(receiptPath, StandardCharsets.UTF_8);
        String status = match(RECEIPT_STATUS, receipt);
        String semantic = match(RECEIPT_SEMANTIC, receipt);
        String expected = switch (status) {
            case "passed" -> match(RECEIPT_CURRENT, receipt);
            case "failed", "incomplete" -> match(RECEIPT_PREVIOUS, receipt);
            default -> "";
        };
        String actual = sha256(baseline.resolve("manifest.json"));
        if (expected.isBlank() || !expected.equals(actual))
            throw new IllegalStateException("ABI baseline is not the accepted corpus: status=" +
                status + ", expected_manifest=" + expected + ", actual_manifest=" + actual +
                ", baseline=" + baseline);
        return new AcceptedReceipt(status, expected, semantic);
    }

    private Baseline loadBaseline(Path functions, Path types) throws Exception {
        Baseline result = new Baseline();
        try (BufferedReader reader = Files.newBufferedReader(functions,
                StandardCharsets.UTF_8)) {
            String line;
            while ((line = reader.readLine()) != null) {
                Matcher address = FUNCTION_ADDRESS.matcher(line);
                if (!address.find()) continue;
                String signature = unescape(match(FUNCTION_SIGNATURE, line));
                String cc = match(FUNCTION_CC, line);
                String count = match(FUNCTION_PARAMETER_COUNT, line);
                String qualified = unescape(match(FUNCTION_QUALIFIED_NAME, line));
                boolean varargs = Boolean.parseBoolean(match(VARARGS, line));
                boolean noreturn = Boolean.parseBoolean(match(NORETURN, line));
                if (signature.isBlank() || count.isBlank()) continue;
                List<String> parameters = new ArrayList<>();
                Matcher parameterBlock = FUNCTION_PARAMETERS.matcher(line);
                if (parameterBlock.find()) {
                    Matcher parameter = ARGUMENT_TYPE.matcher(parameterBlock.group(1));
                    while (parameter.find()) parameters.add(unescape(parameter.group(1)));
                }
                int parameterCount = Integer.parseInt(count);
                if (parameters.size() != parameterCount)
                    throw new IllegalStateException("Could not parse accepted parameter types " +
                        "for " + address.group(1) + ": expected=" + parameterCount +
                        ", parsed=" + parameters.size());
                result.functions.put(address.group(1).toUpperCase(Locale.ROOT),
                    new Boundary(signature, cc, parameterCount, qualified, parameters,
                        varargs, noreturn));
            }
        }
        try (BufferedReader reader = Files.newBufferedReader(types,
                StandardCharsets.UTF_8)) {
            String line;
            while ((line = reader.readLine()) != null) {
                Matcher path = JSON_PATH.matcher(line);
                Matcher kind = JSON_CLASS.matcher(line);
                if (!path.find() || !kind.find()) continue;
                String typePath = unescape(path.group(1));
                if ("FunctionDefinitionDB".equals(kind.group(1))) {
                    String cc = match(CALLING_CONVENTION, line);
                    String returned = unescape(match(RETURN_TYPE, line));
                    List<String> arguments = new ArrayList<>();
                    Matcher block = ARGUMENTS.matcher(line);
                    if (block.find()) {
                        Matcher argument = ARGUMENT_TYPE.matcher(block.group(1));
                        while (argument.find()) arguments.add(unescape(argument.group(1)));
                    }
                    result.definitions.put(typePath,
                        new Abi(cc, returned, arguments,
                            Boolean.parseBoolean(match(VARARGS, line)),
                            Boolean.parseBoolean(match(NORETURN, line))));
                    continue;
                }
                if (!"StructureDB".equals(kind.group(1))) continue;
                Map<Integer, String> components = components(line);
                if (typePath.startsWith("/SubmarineTitans/Recovered/VTables/")) {
                    Matcher source = VTABLE_SOURCE.matcher(line);
                    String address = source.find() ?
                        source.group(1).toUpperCase(Locale.ROOT) : "";
                    result.vtables.add(new BaselineVtable(typePath, address, components));
                }
                else {
                    String vptr = components.get(0);
                    if (vptr != null && line.contains("\"field_name\":\"vtable\"")) {
                        String name = unescape(match(JSON_NAME, line));
                        int length = Integer.parseInt(match(JSON_LENGTH, line));
                        result.classVptrs.put(typePath, new BaselineClass(typePath, name,
                            length, vptr, componentGeometry(line)));
                    }
                }
            }
        }
        result.vtables = mergeBaselineVtables(result.vtables, result.definitions);
        return result;
    }

    private Map<Integer, String> components(String line) {
        Map<Integer, String> result = new TreeMap<>();
        Matcher component = COMPONENT.matcher(line);
        while (component.find())
            result.put(Integer.parseInt(component.group(1)), unescape(component.group(4)));
        return result;
    }

    private Map<Integer, BaselineComponent> componentGeometry(String line) {
        Map<Integer, BaselineComponent> result = new TreeMap<>();
        Matcher component = COMPONENT.matcher(line);
        while (component.find()) {
            int offset = Integer.parseInt(component.group(1));
            result.put(offset, new BaselineComponent(offset,
                Integer.parseInt(component.group(2)), unescape(component.group(4))));
        }
        return result;
    }

    private void checkClassVptrs(Baseline baseline) throws Exception {
        DataTypeManager manager = currentProgram.getDataTypeManager();
        int regressions = 0;
        for (Map.Entry<String, BaselineClass> entry : baseline.classVptrs.entrySet()) {
            monitor.checkCancelled();
            classVptrsChecked++;
            DataType current = manager.getDataType(entry.getKey());
            String currentPath = entry.getKey();
            Structure structure = current instanceof Structure value ? value : null;
            if (structure == null) {
                structure = exactSemanticAlias(entry.getValue(), manager);
                if (structure == null) {
                    regressions++;
                    mismatch("class-vptr:" + entry.getKey(), "class_structure_erasure",
                        canonicalType(entry.getValue().vptr), "<missing class structure>",
                        "Accepted class carrying a vptr is absent from the current data type manager");
                    continue;
                }
                currentPath = structure.getPathName();
                rows.add(new Row("info", "abi", "class-vptr:" + entry.getKey(),
                    "class_structure_exact_alias", entry.getKey(), currentPath, "", "", "ok",
                    "Missing accepted path resolved to one exact-layout semantic anchor"));
            }
            DataTypeComponent component = structure.getComponentAt(0);
            if (component == null) {
                regressions++;
                mismatch("class-vptr:" + entry.getKey(), "class_vptr_erasure",
                    canonicalType(entry.getValue().vptr), "<missing component zero>",
                    "Accepted class vptr component is absent");
                continue;
            }
            String before = canonicalType(entry.getValue().vptr);
            String after = canonicalType(component.getDataType().getPathName());
            boolean wasDispatch = dispatchPointer(before);
            boolean isDispatch = dispatchPointer(after);
            if (!wasDispatch && isDispatch) {
                regressions++;
                mismatch("class-vptr:" + entry.getKey(), "class_vptr_dispatch_transition",
                    before, after, "A synthetic dispatch interface replaced an accepted " +
                    "physical class vptr type", false);
            }
        }
        rows.add(new Row("info", "global",
            "class-vptrs", "class_vptr_regressions", Integer.toString(classVptrsChecked),
            Integer.toString(regressions), "", "", regressions == 0 ? "ok" : "regressed",
            "Compared every accepted class vptr; existing accepted dispatch vptrs are allowed"));
    }

    private Structure exactSemanticAlias(BaselineClass accepted,
            DataTypeManager manager) {
        List<Structure> matches = new ArrayList<>();
        Iterator<DataType> iterator = manager.getAllDataTypes();
        while (iterator.hasNext()) {
            DataType type = iterator.next();
            if (!(type instanceof Structure candidate) ||
                    !candidate.getName().equals(accepted.name) ||
                    candidate.getLength() != accepted.length ||
                    !text(candidate.getDescription()).contains("[ST_SEMANTIC_ANCHOR]") ||
                    !exactCompatibleGeometry(accepted, candidate)) continue;
            matches.add(candidate);
        }
        return matches.size() == 1 ? matches.get(0) : null;
    }

    private boolean exactCompatibleGeometry(BaselineClass accepted,
            Structure candidate) {
        DataTypeComponent[] components = candidate.getDefinedComponents();
        if (components.length != accepted.components.size()) return false;
        for (DataTypeComponent current : components) {
            BaselineComponent before = accepted.components.get(current.getOffset());
            if (before == null || before.length != current.getLength() ||
                    !compatibleStorageView(before.type,
                        current.getDataType().getPathName())) return false;
        }
        return true;
    }

    private boolean compatibleStorageView(String beforeRaw, String afterRaw) {
        String before = canonicalType(beforeRaw);
        String after = canonicalType(afterRaw);
        if (before.equals(after)) return true;
        int beforeDepth = pointerDepth(before);
        int afterDepth = pointerDepth(after);
        if (beforeDepth == 0 || afterDepth == 0) return false;
        if (genericPointerView(before) || genericPointerView(after)) return true;
        return beforeDepth == afterDepth &&
            leafType(pointerBase(before)).equals(leafType(pointerBase(after)));
    }

    private int pointerDepth(String path) {
        int result = 0;
        String value = canonicalType(path);
        while (value.endsWith(" *")) {
            result++;
            value = value.substring(0, value.length() - 2).trim();
        }
        return result;
    }

    private String pointerBase(String path) {
        String value = canonicalType(path);
        while (value.endsWith(" *"))
            value = value.substring(0, value.length() - 2).trim();
        return value;
    }

    private boolean genericPointerView(String path) {
        if (pointerDepth(path) == 0) return false;
        String base = pointerBase(path);
        return base.equals("/void") || base.startsWith("/undefined");
    }

    private String leafType(String path) {
        int slash = path.lastIndexOf('/');
        return slash < 0 ? path : path.substring(slash + 1);
    }

    private void checkAcceptedVtableSlots(Baseline baseline) throws Exception {
        Map<String, Map<Integer, FunctionDefinition>> currentTables =
            currentVtableSlots();
        int mismatches = 0;
        int erased = 0;
        Set<String> checkedPhysicalSlots = new HashSet<>();
        for (BaselineVtable table : baseline.vtables) {
            monitor.checkCancelled();
            Map<Integer, FunctionDefinition> current = table.address.isBlank() ?
                currentTables.get(table.identity()) : null;
            if (current == null) {
                // Addressed vtable identities may legitimately be repartitioned when a new
                // exact vptr store proves that an accepted function-pointer run actually
                // contained several adjacent tables.  Their slot ABI is still protected
                // below by the physical pointer address; only path-only legacy identities
                // require the original structure identity to remain present.
                if (!table.address.isBlank()) {
                    current = Map.of();
                }
                else {
                int typed = 0;
                for (String type : table.components.values())
                    if (baseline.definitions.containsKey(pointedType(type))) typed++;
                typedSlotsChecked += typed;
                erased += typed;
                mismatch("vtable-table:" + table.identity(), "vtable_erasure",
                    table.path + " typed_slots=" + typed, "<missing>",
                    "Accepted vtable identity is absent from the current data type manager");
                continue;
                }
            }
            for (Map.Entry<Integer, String> slot : table.components.entrySet()) {
                Abi accepted = baseline.definitions.get(pointedType(slot.getValue()));
                if (accepted == null) continue;
                String physical = table.address.isBlank() ? "" :
                    physicalSlotIdentity(table.address, slot.getKey());
                if (!physical.isBlank() && !checkedPhysicalSlots.add(physical)) continue;
                typedSlotsChecked++;
                String subject = String.format(Locale.ROOT, "vtable:%s@%X",
                    table.identity(), slot.getKey());
                Map<Integer, FunctionDefinition> physicalTable = physical.isBlank() ? null :
                    currentTables.get(physical);
                FunctionDefinition definition = physicalTable == null ?
                    current.get(slot.getKey()) : physicalTable.get(0);
                if (definition == null) {
                    erased++;
                    mismatch(subject, "typed_slot_erasure", accepted.descriptor(),
                        "<missing typed slot>",
                        table.path + " lost its accepted FunctionDefinition");
                    continue;
                }
                Abi candidate = abi(definition);
                List<String> problems = abiProblems(accepted, candidate);
                if (!problems.isEmpty()) {
                    mismatches++;
                    mismatch(subject, "typed_slot_abi", accepted.descriptor(),
                        candidate.descriptor(), table.path + ": " +
                            String.join("; ", problems));
                }
            }
        }
        rows.add(new Row("info", "global",
            "accepted-vtables", "accepted_slot_abi", Integer.toString(typedSlotsChecked),
            Integer.toString(mismatches + erased), "", "",
            mismatches + erased == 0 ? "ok" : "regressed",
            "mismatched=" + mismatches + "; erased=" + erased));
    }

    private Map<String, Map<Integer, FunctionDefinition>> currentVtableSlots() {
        Map<String, Map<Integer, FunctionDefinition>> result = new HashMap<>();
        List<Structure> tables = new ArrayList<>();
        Iterator<DataType> iterator = currentProgram.getDataTypeManager().getAllDataTypes();
        while (iterator.hasNext()) {
            DataType type = iterator.next();
            if (!(type instanceof Structure structure)) continue;
            String path = structure.getPathName();
            if (!path.startsWith("/SubmarineTitans/Recovered/VTables/")) continue;
            tables.add(structure);
        }
        tables.sort(Comparator.comparing(Structure::getPathName));
        for (Structure structure : tables) {
            String path = structure.getPathName();
            Matcher source = VTABLE_SOURCE.matcher(text(structure.getDescription()));
            String address = source.find() ?
                source.group(1).toUpperCase(Locale.ROOT) : "";
            String identity = vtableIdentity(path, address);
            Map<Integer, FunctionDefinition> slots = result.computeIfAbsent(identity,
                ignored -> new TreeMap<>());
            for (DataTypeComponent component : structure.getComponents()) {
                FunctionDefinition definition = functionDefinition(component.getDataType());
                if (definition == null) continue;
                slots.putIfAbsent(component.getOffset(), definition);
                if (!address.isBlank())
                    result.computeIfAbsent(physicalSlotIdentity(address,
                        component.getOffset()), ignored -> new TreeMap<>())
                        .putIfAbsent(0, definition);
            }
        }
        return result;
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

    private List<BaselineVtable> mergeBaselineVtables(List<BaselineVtable> tables,
            Map<String, Abi> definitions) {
        Map<String, BaselineVtable> merged = new java.util.LinkedHashMap<>();
        for (BaselineVtable table : tables) {
            String identity = table.identity();
            BaselineVtable target = merged.computeIfAbsent(identity,
                ignored -> new BaselineVtable(table.path, table.address, new TreeMap<>()));
            for (Map.Entry<Integer, String> slot : table.components.entrySet()) {
                String previous = target.components.get(slot.getKey());
                boolean previousTyped = previous != null &&
                    definitions.containsKey(pointedType(previous));
                boolean candidateTyped = definitions.containsKey(pointedType(slot.getValue()));
                if (previous == null || !previousTyped && candidateTyped)
                    target.components.put(slot.getKey(), slot.getValue());
            }
        }
        return new ArrayList<>(merged.values());
    }

    private String vtableIdentity(String path, String address) {
        return address == null || address.isBlank() ? "path:" + path : "table:" + address;
    }

    private FunctionDefinition functionDefinition(DataType type) {
        while (type instanceof TypeDef value) type = value.getBaseDataType();
        if (!(type instanceof Pointer pointer)) return null;
        type = pointer.getDataType();
        while (type instanceof TypeDef value) type = value.getBaseDataType();
        return type instanceof FunctionDefinition ? (FunctionDefinition)type : null;
    }

    private Abi abi(FunctionDefinition definition) {
        List<String> arguments = new ArrayList<>();
        for (ParameterDefinition argument : definition.getArguments())
            arguments.add(argument.getDataType().getPathName());
        return new Abi(text(definition.getCallingConventionName()),
            definition.getReturnType().getPathName(), arguments,
            definition.hasVarArgs(), definition.hasNoReturn());
    }

    private List<String> abiProblems(Abi before, Abi after) {
        List<String> result = new ArrayList<>();
        if (!before.callingConvention.equals(after.callingConvention))
            result.add("calling convention " + before.callingConvention + " -> " +
                after.callingConvention);
        if (before.arguments.size() != after.arguments.size())
            result.add("argument count " + before.arguments.size() + " -> " +
                after.arguments.size());
        if (before.varargs != after.varargs)
            result.add("varargs " + before.varargs + " -> " + after.varargs);
        if (before.noreturn != after.noreturn)
            result.add("noreturn " + before.noreturn + " -> " + after.noreturn);
        String returnProblem = typeProblem(before.returnType, after.returnType, true);
        if (returnProblem != null) result.add("return " + returnProblem);
        int count = Math.min(before.arguments.size(), after.arguments.size());
        for (int index = 0; index < count; index++) {
            String problem = typeProblem(before.arguments.get(index), after.arguments.get(index),
                false);
            if (problem != null) result.add("argument " + index + " " + problem);
        }
        return result;
    }

    private String typeProblem(String beforeRaw, String afterRaw, boolean returnValue) {
        String before = canonicalType(beforeRaw);
        String after = canonicalType(afterRaw);
        if (before.equals(after)) return null;
        int beforeLength = typeLength(before);
        int afterLength = typeLength(after);
        // An accepted generic x86 stack word may be refined to a concrete one-word source
        // parameter without changing RET cleanup or explicit argument count.  Returns are
        // deliberately stricter: narrowing a generic EAX boundary can create partial-register
        // artifacts unless independent whole-CFG evidence has already been accepted.
        if (!returnValue && genericScalar(before) && !after.equals("/void") &&
                afterLength > 0 && afterLength <= currentProgram.getDefaultPointerSize())
            return null;
        if (beforeLength >= 0 && afterLength >= 0 && beforeLength != afterLength)
            return before + " -> " + after + " (width " + beforeLength + " -> " +
                afterLength + ")";
        boolean beforePointer = before.endsWith(" *");
        boolean afterPointer = after.endsWith(" *");
        if (beforePointer != afterPointer)
            return before + " -> " + after + " (pointer/scalar change)";
        if (beforePointer && afterPointer) {
            if (genericPointer(before) && !genericPointer(after)) return null;
            if (!genericPointer(before) && genericPointer(after))
                return before + " -> " + after + " (receiver/pointee weakened)";
            if (!genericPointer(before) && !genericPointer(after) && !before.equals(after))
                return before + " -> " + after + " (receiver/pointee changed)";
            return null;
        }
        if (genericScalar(before) && !genericScalar(after)) return null;
        if (!genericScalar(before) && genericScalar(after))
            return before + " -> " + after + " (concrete type weakened)";
        // Equal-width concrete signedness/name changes are semantic review, not an ABI error.
        return null;
    }

    private void checkFixtures(Baseline baseline, List<Rule> rules,
            boolean initializeMetricBaseline) throws Exception {
        DecompInterface decompiler = new DecompInterface();
        decompiler.toggleCCode(DECOMPILE_C_CODE);
        // Keep the fixture projection identical to STDecompExport.  Disabling the
        // syntax tree can change HighFunction live-in/return materialization even
        // when the Program ABI is unchanged, producing false extraout_/in_stack_/
        // unaff_ regressions against the accepted exported body.
        decompiler.toggleSyntaxTree(DECOMPILE_SYNTAX_TREE);
        if (!decompiler.openProgram(currentProgram))
            throw new IllegalStateException("Could not open current Program in decompiler");
        try {
            for (Rule rule : rules) {
                monitor.checkCancelled();
                if (!rule.enabled) continue;
                Boundary accepted = baseline.functions.get(rule.address);
                Address address = toAddr(rule.address);
                Function current = currentProgram.getFunctionManager().getFunctionAt(address);
                if (accepted == null || current == null) {
                    rows.add(new Row("error", "fixture", rule.id, "fixture_presence",
                        accepted == null ? "<missing baseline>" : "present",
                        current == null ? "<missing Program function>" : "present", "", "",
                        "configuration_error", rule.rationale));
                    continue;
                }
                fixtureFunctionsChecked++;
                if (rule.checks.contains("boundary"))
                    checkBoundary(rule, accepted, current);
                if (rule.checks.contains("identity"))
                    checkIdentity(rule, accepted, current);
                if (!rule.metrics.isEmpty())
                    checkArtifactMetrics(rule, current, decompiler,
                        initializeMetricBaseline);
            }
        }
        finally {
            decompiler.dispose();
        }
    }

    private void checkBoundary(Rule rule, Boundary accepted, Function current)
            throws Exception {
        String before = accepted.boundaryDescriptor();
        List<String> candidateParameters = new ArrayList<>();
        for (ghidra.program.model.listing.Parameter parameter : current.getParameters())
            candidateParameters.add(parameter.getDataType().getDisplayName());
        Boundary candidate = new Boundary(current.getSignature().getPrototypeString(true),
            text(current.getCallingConventionName()), current.getParameterCount(),
            current.getName(true), candidateParameters, current.hasVarArgs(),
            current.hasNoReturn());
        String after = candidate.boundaryDescriptor();
        List<String> problems = new ArrayList<>();
        if (!accepted.callingConvention.equals(candidate.callingConvention))
            problems.add("calling convention " + accepted.callingConvention + " -> " +
                candidate.callingConvention);
        if (accepted.parameterCount != candidate.parameterCount)
            problems.add("parameter count " + accepted.parameterCount + " -> " +
                candidate.parameterCount);
        if (accepted.varargs != candidate.varargs)
            problems.add("varargs " + accepted.varargs + " -> " + candidate.varargs);
        if (accepted.noreturn != candidate.noreturn)
            problems.add("noreturn " + accepted.noreturn + " -> " + candidate.noreturn);
        String returned = typeProblem(displayTypePath(accepted.returnType()),
            displayTypePath(candidate.returnType()), true);
        if (returned != null) problems.add("return " + returned);
        int parameterCount = Math.min(accepted.parameterTypes.size(),
            candidate.parameterTypes.size());
        for (int index = 0; index < parameterCount; index++) {
            String problem = typeProblem(displayTypePath(accepted.parameterTypes.get(index)),
                displayTypePath(candidate.parameterTypes.get(index)), false);
            if (problem != null) problems.add("parameter " + index + " " + problem);
        }
        if (problems.isEmpty()) {
            rows.add(pass("fixture", rule.id, "boundary", before, after, rule.rationale));
            return;
        }
        mismatch("function:" + rule.address, "fixture_boundary", before, after,
            rule.id + ": " + String.join("; ", problems) + "; " + rule.rationale);
    }

    private void checkIdentity(Rule rule, Boundary accepted, Function current)
            throws Exception {
        String before = accepted.qualifiedName;
        String after = current.getName(true);
        if (before.equals(after)) {
            rows.add(pass("fixture", rule.id, "identity", before, after, rule.rationale));
            return;
        }
        mismatch("function-identity:" + rule.address, "fixture_identity", before, after,
            rule.id + ": " + rule.rationale);
    }

    private void checkArtifactMetrics(Rule rule, Function function,
            DecompInterface decompiler, boolean initializeMetricBaseline) throws Exception {
        String after = decompiled.get(rule.address);
        if (after == null) {
            DecompileResults result = decompiler.decompileFunction(function,
                DECOMPILE_TIMEOUT_SECONDS, monitor);
            if (!result.decompileCompleted() || result.getDecompiledFunction() == null) {
                rows.add(new Row("error", "fixture", rule.id, "decompile", "ok",
                    "failed", "", "", "regressed", text(result.getErrorMessage())));
                return;
            }
            after = result.getDecompiledFunction().getC();
            decompiled.put(rule.address, after);
        }
        for (String metric : rule.metrics) {
            String token = metric.startsWith("token:") ? metric.substring(6) : null;
            if (token == null || token.isEmpty()) {
                rows.add(new Row("error", "fixture", rule.id, metric, "valid metric",
                    "unsupported", "", "", "configuration_error",
                    "Only token:<literal> metrics are currently supported"));
                continue;
            }
            int newCount = count(after, token);
            String key = metricKey(rule.id, rule.address, metric);
            Integer acceptedCount;
            if (initializeMetricBaseline) acceptedCount = Integer.valueOf(newCount);
            else acceptedCount = acceptedMetricCounts.get(key);
            metricSamples.add(new MetricSample(rule.id, rule.address, metric, newCount,
                sha256Text(after)));
            if (acceptedCount == null) {
                rows.add(new Row("error", "fixture", rule.id, metric,
                    "accepted raw metric", "missing", "", "",
                    "configuration_error", "Raw fixture baseline has no row for " + key));
                continue;
            }
            int oldCount = acceptedCount;
            String beforeDescriptor = metric + "=" + oldCount;
            String afterDescriptor = metric + "=" + newCount;
            String detail = rule.rationale + (initializeMetricBaseline ?
                "; initialized from the accepted Program semantic fingerprint" : "");
            if (newCount <= oldCount) {
                rows.add(pass("fixture", rule.id, metric, Integer.toString(oldCount),
                    Integer.toString(newCount), detail));
            }
            else {
                mismatch("fixture:" + rule.id + ":" + metric, "artifact_count",
                    beforeDescriptor, afterDescriptor, rule.address + ": " + detail);
            }
        }
    }

    private boolean loadMetricBaseline(Path path, AcceptedReceipt receipt, List<Rule> rules)
            throws Exception {
        acceptedMetricCounts.clear();
        if (!Files.isRegularFile(path)) return false;
        List<String> lines = Files.readAllLines(path, StandardCharsets.UTF_8);
        String header = "schema_version\taccepted_manifest_sha256\t" +
            "program_semantic_sha256\trules_sha256\tdecompiler_profile\t" +
            "rule_id\tfunction_address\tmetric\tcount\tbody_sha256";
        if (lines.isEmpty() || !header.equals(lines.get(0))) return false;
        for (int index = 1; index < lines.size(); index++) {
            if (lines.get(index).isBlank()) continue;
            String[] fields = lines.get(index).split("\t", -1);
            if (fields.length != 10 || !METRIC_BASELINE_SCHEMA.equals(fields[0]) ||
                    !receipt.manifest.equals(fields[1]) ||
                    !fields[2].matches("[0-9a-f]{64}") ||
                    ("passed".equals(receipt.status) &&
                        !receipt.programSemantic.equals(fields[2])) ||
                    !rulesHash.equals(fields[3]) || !decompilerProfile().equals(fields[4]) ||
                    !fields[6].matches("[0-9A-F]{8}") ||
                    !fields[8].matches("[0-9]+") ||
                    !fields[9].matches("[0-9a-f]{64}")) {
                acceptedMetricCounts.clear();
                return false;
            }
            String key = metricKey(fields[5], fields[6], fields[7]);
            if (acceptedMetricCounts.put(key, Integer.parseInt(fields[8])) != null) {
                acceptedMetricCounts.clear();
                return false;
            }
        }
        if (!acceptedMetricCounts.keySet().equals(expectedMetricKeys(rules))) {
            acceptedMetricCounts.clear();
            return false;
        }
        metricBaselineHash = sha256(path);
        return true;
    }

    private void writeMetricBaseline(Path path, AcceptedReceipt receipt, List<Rule> rules)
            throws Exception {
        Map<String, MetricSample> samples = new TreeMap<>();
        for (MetricSample sample : metricSamples) {
            String key = metricKey(sample.ruleId, sample.address, sample.metric);
            if (samples.put(key, sample) != null)
                throw new IllegalStateException("Duplicate raw ABI metric sample: " + key);
        }
        Set<String> expected = expectedMetricKeys(rules);
        if (!samples.keySet().equals(expected))
            throw new IllegalStateException("Incomplete raw ABI metric baseline: expected=" +
                expected.size() + ", sampled=" + samples.size());
        atomicWrite(path, out -> {
            out.write("schema_version\taccepted_manifest_sha256\t" +
                "program_semantic_sha256\trules_sha256\tdecompiler_profile\t" +
                "rule_id\tfunction_address\tmetric\tcount\tbody_sha256\n");
            for (MetricSample sample : samples.values())
                out.write(METRIC_BASELINE_SCHEMA + "\t" + receipt.manifest + "\t" +
                    receipt.programSemantic + "\t" + rulesHash + "\t" +
                    decompilerProfile() + "\t" + tsv(sample.ruleId) + "\t" +
                    sample.address + "\t" + tsv(sample.metric) + "\t" + sample.count +
                    "\t" + sample.bodyHash + "\n");
        });
    }

    private Set<String> expectedMetricKeys(List<Rule> rules) {
        Set<String> result = new TreeSet<>();
        for (Rule rule : rules) {
            if (!rule.enabled) continue;
            for (String metric : rule.metrics)
                result.add(metricKey(rule.id, rule.address, metric));
        }
        return result;
    }

    private String metricKey(String ruleId, String address, String metric) {
        return ruleId + "\t" + address + "\t" + metric;
    }

    private String decompilerProfile() {
        return "c_code=" + DECOMPILE_C_CODE + ";syntax_tree=" +
            DECOMPILE_SYNTAX_TREE;
    }

    private List<Rule> loadRules(Path path) throws Exception {
        if (!Files.isRegularFile(path))
            throw new IllegalStateException("Missing ABI regression rules: " + path);
        List<String> lines = Files.readAllLines(path, StandardCharsets.UTF_8);
        String header = "enabled\trule_id\tfunction_address\tchecks\tmetrics\trationale";
        if (lines.isEmpty() || !header.equals(lines.get(0)))
            throw new IllegalArgumentException("Invalid ABI regression rule header: " + path);
        List<Rule> result = new ArrayList<>();
        Set<String> ids = new HashSet<>();
        for (int index = 1; index < lines.size(); index++) {
            if (lines.get(index).isBlank() || lines.get(index).startsWith("#")) continue;
            String[] fields = lines.get(index).split("\t", -1);
            if (fields.length != 6)
                throw new IllegalArgumentException("Invalid ABI rule line " + (index + 1));
            String address = fields[2].toUpperCase(Locale.ROOT);
            if (!address.matches("[0-9A-F]{8}"))
                throw new IllegalArgumentException("Invalid ABI fixture address: " + fields[2]);
            if (!ids.add(fields[1]))
                throw new IllegalArgumentException("Duplicate ABI rule id: " + fields[1]);
            Set<String> checks = splitSet(fields[3]);
            if (!Set.of("boundary", "identity").containsAll(checks))
                throw new IllegalArgumentException("Unsupported ABI fixture check at line " +
                    (index + 1) + ": " + checks);
            result.add(new Rule("1".equals(fields[0]), fields[1], address, checks,
                splitList(fields[4]), fields[5]));
        }
        return result;
    }

    private void loadTransitions(Path path) throws Exception {
        if (!Files.isRegularFile(path)) return;
        List<String> lines = Files.readAllLines(path, StandardCharsets.UTF_8);
        String header = "enabled\ttransition_id\tsubject\tbaseline_sha256\t" +
            "candidate_sha256\trationale";
        if (lines.isEmpty() || !header.equals(lines.get(0)))
            throw new IllegalArgumentException("Invalid ABI transition header: " + path);
        for (int index = 1; index < lines.size(); index++) {
            if (lines.get(index).isBlank() || lines.get(index).startsWith("#")) continue;
            String[] fields = lines.get(index).split("\t", -1);
            if (fields.length != 6)
                throw new IllegalArgumentException("Invalid ABI transition line " + (index + 1));
            if (!"1".equals(fields[0])) continue;
            if (!fields[3].matches("[0-9a-f]{64}") ||
                    !fields[4].matches("[0-9a-f]{64}"))
                throw new IllegalArgumentException("Invalid ABI transition fingerprints at line " +
                    (index + 1));
            if (transitions.put(fields[2], new Transition(fields[1], fields[3], fields[4],
                    fields[5])) != null)
                throw new IllegalArgumentException("Duplicate ABI transition subject: " + fields[2]);
        }
    }

    private void mismatch(String subject, String check, String before, String after,
            String detail) throws Exception {
        mismatch(subject, check, before, after, detail, true);
    }

    private void mismatch(String subject, String check, String before, String after,
            String detail, boolean transitionAllowed) throws Exception {
        String beforeHash = sha256Text(before);
        String afterHash = sha256Text(after);
        Transition transition = transitions.get(subject);
        boolean exactTransition = transition != null && transition.before.equals(beforeHash) &&
            transition.after.equals(afterHash);
        boolean reviewed = transitionAllowed && exactTransition;
        if (reviewed) usedTransitions.add(subject);
        rows.add(new Row(reviewed ? "warning" : "error", "abi", subject, check,
            display(before), display(after), beforeHash, afterHash,
            reviewed ? "reviewed_transition" : "regressed",
            detail + (reviewed ? "; transition=" + transition.id + "; " +
                transition.rationale : exactTransition && !transitionAllowed ?
                    "; exact transition exists but this invariant is not waivable" : "")));
    }

    private void checkTransitionLifecycle() {
        for (Map.Entry<String, Transition> entry : new TreeMap<>(transitions).entrySet()) {
            if (usedTransitions.contains(entry.getKey())) continue;
            rows.add(new Row("warning", "policy", entry.getKey(), "transition_lifecycle",
                entry.getValue().before, entry.getValue().after, "", "",
                "unused_transition", "Remove transition " + entry.getValue().id +
                    " after its candidate ABI becomes the accepted baseline, or correct its " +
                    "fingerprints if the reviewed candidate changed"));
        }
    }

    private Row pass(String scope, String subject, String check, String before,
            String after, String detail) {
        return new Row("info", scope, subject, check, display(before), display(after),
            "", "", before.equals(after) ? "ok" : "improved", detail);
    }

    private void writeReport(Path path, String phase) throws Exception {
        atomicWrite(path, out -> {
            out.write("severity\tphase\tscope\tsubject\tcheck\tbaseline\tcandidate\t" +
                "baseline_sha256\tcandidate_sha256\tstatus\tdetail\n");
            for (Row row : rows)
                out.write(row.severity + "\t" + tsv(phase) + "\t" + tsv(row.scope) +
                    "\t" + tsv(row.subject) + "\t" + tsv(row.check) + "\t" +
                    tsv(row.before) + "\t" + tsv(row.after) + "\t" + row.beforeHash +
                    "\t" + row.afterHash + "\t" + row.status + "\t" +
                    tsv(row.detail) + "\n");
        });
    }

    private void writeSummary(Path path, String phase, Path baseline, int rules,
            long errors, long warnings) throws Exception {
        atomicWrite(path, out -> {
            out.write("ST ABI regression gate\n");
            out.write("phase=" + phase + "\n");
            out.write("baseline_manifest_sha256=" +
                sha256(baseline.resolve("manifest.json")) + "\n");
            out.write("rules_sha256=" + rulesHash + "\n");
            out.write("transitions_sha256=" + transitionsHash + "\n");
            out.write("typed_vtable_slots_checked=" + typedSlotsChecked + "\n");
            out.write("class_vptrs_checked=" + classVptrsChecked + "\n");
            out.write("fixture_rules=" + rules + "\n");
            out.write("fixture_functions_checked=" + fixtureFunctionsChecked + "\n");
            out.write("decompiled_fixture_functions=" + decompiled.size() + "\n");
            out.write("fixture_decompiler_profile=" + decompilerProfile() + "\n");
            out.write("fixture_metric_baseline_status=" + metricBaselineStatus + "\n");
            out.write("fixture_metric_baseline_sha256=" + metricBaselineHash + "\n");
            out.write("errors=" + errors + "\n");
            out.write("warnings=" + warnings + "\n");
        });
    }

    private Path regressionArtifact(Path root, String primary, String snapshot) {
        Path direct = root.resolve(primary);
        return Files.isRegularFile(direct) ? direct : root.resolve(snapshot);
    }

    private Path inferredRepository() {
        File source = new File(getSourceFile().getAbsolutePath()).getAbsoluteFile();
        File scripts = source.getParentFile();
        if (scripts == null || scripts.getParentFile() == null)
            throw new IllegalStateException("Cannot infer repository from script path " + source);
        return scripts.getParentFile().toPath().toAbsolutePath().normalize();
    }

    private String pointedType(String path) {
        String value = unescape(path);
        if (value.endsWith(" *32")) return value.substring(0, value.length() - 4);
        if (value.endsWith(" *")) return value.substring(0, value.length() - 2);
        return value;
    }

    private boolean dispatchPointer(String path) {
        return pointedType(path).endsWith("DispatchVTable");
    }

    private String canonicalType(String path) {
        String value = text(path).trim().replaceAll("\\s+", " ");
        if (value.endsWith(" *32")) value = value.substring(0, value.length() - 2);
        return value;
    }

    private int typeLength(String path) {
        String value = canonicalType(path);
        if (value.equals("/void")) return 0;
        if (value.endsWith(" *")) return currentProgram.getDefaultPointerSize();
        DataType resolved = currentProgram.getDataTypeManager().getDataType(value);
        if (resolved != null && resolved.getLength() >= 0) return resolved.getLength();
        Matcher undefined = Pattern.compile("^/undefined([1248])$").matcher(value);
        if (undefined.matches()) return Integer.parseInt(undefined.group(1));
        return switch (value) {
            case "/bool", "/byte", "/char", "/sbyte", "/undefined" -> 1;
            case "/short", "/ushort", "/word" -> 2;
            case "/int", "/uint", "/long", "/ulong", "/dword", "/float" -> 4;
            case "/longlong", "/ulonglong", "/qword", "/double" -> 8;
            default -> -1;
        };
    }

    private boolean genericPointer(String path) {
        String value = canonicalType(path);
        return value.equals("/void *") || value.startsWith("/undefined") &&
            value.endsWith(" *");
    }

    private boolean genericScalar(String path) {
        String value = canonicalType(path);
        return value.equals("/undefined") || value.matches("/undefined[1248]");
    }

    private String displayTypePath(String value) {
        String type = text(value).trim().replaceFirst("^(?:struct|class)\\s+", "")
            .replaceAll("\\s+", " ").replaceAll("\\s*\\*\\s*", " *");
        return type.startsWith("/") ? type : "/" + type;
    }

    private int count(String text, String token) {
        int count = 0;
        int offset = 0;
        while ((offset = text.indexOf(token, offset)) >= 0) {
            count++;
            offset += token.length();
        }
        return count;
    }

    private Set<String> splitSet(String value) {
        Set<String> result = new TreeSet<>();
        for (String item : value.split(";"))
            if (!item.isBlank()) result.add(item.trim());
        return result;
    }

    private List<String> splitList(String value) {
        List<String> result = new ArrayList<>();
        for (String item : value.split(";"))
            if (!item.isBlank()) result.add(item.trim());
        return result;
    }

    private String match(Pattern pattern, String text) {
        Matcher matcher = pattern.matcher(text);
        return matcher.find() ? matcher.group(1) : "";
    }

    private String display(String value) {
        String text = text(value).replace('\n', ' ').replace('\r', ' ').trim();
        return text.length() <= 240 ? text : text.substring(0, 237) + "...";
    }

    private String text(String value) { return value == null ? "" : value; }

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

    private String sha256Text(String value) throws Exception {
        MessageDigest digest = MessageDigest.getInstance("SHA-256");
        return hex(digest.digest(text(value).getBytes(StandardCharsets.UTF_8)));
    }

    private String hex(byte[] bytes) {
        StringBuilder result = new StringBuilder();
        for (byte value : bytes) result.append(String.format("%02x", value & 0xff));
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

    private static final class Baseline {
        final Map<String, Boundary> functions = new HashMap<>();
        final Map<String, Abi> definitions = new HashMap<>();
        List<BaselineVtable> vtables = new ArrayList<>();
        final Map<String, BaselineClass> classVptrs = new HashMap<>();
    }

    private record BaselineClass(String path, String name, int length, String vptr,
            Map<Integer, BaselineComponent> components) { }
    private record BaselineComponent(int offset, int length, String type) { }

    private record Boundary(String signature, String callingConvention, int parameterCount,
            String qualifiedName, List<String> parameterTypes, boolean varargs,
            boolean noreturn) {
        String boundaryDescriptor() {
            return "calling_convention=" + callingConvention + "\nparameter_count=" +
                parameterCount + "\nreturn_type=" + returnType() + "\nparameters=" +
                String.join(";", parameterTypes) + "\nvarargs=" + varargs +
                "\nnoreturn=" + noreturn;
        }
        String returnType() {
            String marker = callingConvention.isBlank() ? "" : " " + callingConvention + " ";
            int split = marker.isBlank() ? -1 : signature.indexOf(marker);
            String value;
            if (split >= 0) value = signature.substring(0, split);
            else {
                int parenthesis = signature.indexOf('(');
                int name = parenthesis < 0 ? -1 : signature.lastIndexOf(' ', parenthesis);
                value = name < 0 ? signature : signature.substring(0, name);
            }
            return value.trim().replaceAll("\\s+", " ")
                .replaceAll("\\s*\\*\\s*", " *");
        }
    }

    private record Abi(String callingConvention, String returnType,
            List<String> arguments, boolean varargs, boolean noreturn) {
        String descriptor() {
            return "calling_convention=" + callingConvention + "\nreturn_type=" +
                canonical(returnType) + "\narguments=" + arguments.stream()
                    .map(Abi::canonical).reduce((a, b) -> a + ";" + b).orElse("") +
                "\nvarargs=" + varargs + "\nnoreturn=" + noreturn;
        }
        private static String canonical(String value) {
            String result = value == null ? "" : value.trim().replaceAll("\\s+", " ");
            return result.endsWith(" *32") ? result.substring(0, result.length() - 2) : result;
        }
    }

    private record BaselineVtable(String path, String address,
            Map<Integer, String> components) {
        String identity() {
            return address == null || address.isBlank() ? "path:" + path :
                "table:" + address;
        }
    }
    private record Rule(boolean enabled, String id, String address, Set<String> checks,
            List<String> metrics, String rationale) { }
    private record AcceptedReceipt(String status, String manifest,
            String programSemantic) { }
    private record MetricSample(String ruleId, String address, String metric, int count,
            String bodyHash) { }
    private record Transition(String id, String before, String after, String rationale) { }
    private record Row(String severity, String scope, String subject, String check,
            String before, String after, String beforeHash, String afterHash, String status,
            String detail) { }
    private interface WriterAction { void write(BufferedWriter writer) throws Exception; }
}
