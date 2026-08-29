// Recover DArray descriptor specializations whose elements are concrete object pointers.
// Evidence comes from a concrete-pointer accessor, DArrayGetElement out-parameter flow,
// and every container source selected by that accessor.  Read-only.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Analyze DArray Pointer Elements

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.HashMap;
import java.util.HashSet;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Set;
import java.util.TreeMap;
import java.util.TreeSet;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

import ghidra.app.decompiler.DecompileResults;
import ghidra.app.decompiler.parallel.DecompilerCallback;
import ghidra.app.decompiler.parallel.ParallelDecompiler;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.Array;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeComponent;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.TypeDef;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.FunctionTag;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.listing.Variable;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.Symbol;
import ghidra.program.model.symbol.SymbolIterator;
import ghidra.util.task.TaskMonitor;

public class STDArrayPointerElementAnalyzer extends GhidraScript {
    private static final int DECOMPILE_TIMEOUT = 600;
    private static final String DARRAY_PATH = "/SubmarineTitans/Recovered/DArrayTy";
    private static final String DESCRIPTOR_ROOT =
        "/SubmarineTitans/Recovered/DArraySpecializations/";
    private static final Pattern SIMPLE = Pattern.compile(
        "[A-Za-z_$][A-Za-z0-9_$]*");
    private static final Pattern ASSIGNMENT = Pattern.compile(
        "(?m)^\\s*([A-Za-z_$][A-Za-z0-9_$]*)\\s*=\\s*([^;]+);");
    private static final Pattern RETURN = Pattern.compile("(?m)\\breturn\\s+([^;]+);");
    private static final Pattern RECORD_FIELD = Pattern.compile(
        "^([A-Za-z_$][A-Za-z0-9_$]*)\\s*\\[[^\\]]+\\]\\s*\\.\\s*" +
        "([A-Za-z_$][A-Za-z0-9_$]*)$");

    private final Map<String, Symbol> globals = new HashMap<>();
    private final List<Row> rows = new ArrayList<>();
    private final List<OutputObservation> outputObservations = new ArrayList<>();
    private final List<OutputRow> outputRows = new ArrayList<>();
    private final List<Failure> failures = new ArrayList<>();
    private DataTypeManager dataTypes;
    private int candidates, accessors, conflicts;

    @Override
    protected void run() throws Exception {
        end(true);
        if (currentProgram == null) {
            printerr("Open the analyzed ST program first.");
            return;
        }
        File selected = outputDirectory();
        if (selected == null) return;
        Path directory = programDirectory(selected);
        Files.createDirectories(directory);
        dataTypes = currentProgram.getDataTypeManager();
        if (!(dataTypes.getDataType(DARRAY_PATH) instanceof Structure))
            throw new IllegalStateException("Missing recovered " + DARRAY_PATH);
        indexGlobals();

        List<Function> functions = new ArrayList<>();
        FunctionIterator iterator = currentProgram.getFunctionManager().getFunctions(true);
        while (iterator.hasNext()) {
            monitor.checkCancelled();
            Function function = iterator.next();
            if (function.isExternal() || function.isThunk() || library(function) ||
                    !callsDArrayGetElement(function)) continue;
            functions.add(function);
        }
        candidates = functions.size();
        decompile(functions);
        disableConflictingSources();
        buildOutputRows();
        rows.sort(Comparator.comparing((Row row) -> row.sourceKind)
            .thenComparing(row -> row.globalAddress)
            .thenComparingLong(row -> row.fieldOffset));
        writeRows(directory.resolve("darray_pointer_element_proposals.tsv"));
        writeOutputRows(directory.resolve("darray_pointer_output_proposals.tsv"));
        writeFailures(directory.resolve("darray_pointer_element_failures.tsv"));
        writeSummary(directory.resolve("darray_pointer_element_summary.txt"));
        println("DArray-pointer-element analysis complete: " +
            directory.toAbsolutePath().normalize());
        println("Candidates=" + candidates + ", accessors=" + accessors +
            ", targets=" + rows.size() + ", apply=" +
            rows.stream().filter(row -> row.apply).count() +
            ", conflicts=" + conflicts + ", failures=" + failures.size());
    }

    private void decompile(List<Function> functions) throws Exception {
        if (functions.isEmpty()) return;
        DecompilerCallback<Result> callback = new DecompilerCallback<>(
                currentProgram, dec -> {
                    dec.toggleCCode(true);
                    dec.toggleSyntaxTree(true);
                }) {
            @Override
            public Result process(DecompileResults result, TaskMonitor callbackMonitor) {
                Function function = result.getFunction();
                if (!result.decompileCompleted() || result.getDecompiledFunction() == null)
                    return new Result(function, "", result.getErrorMessage() == null ?
                        "decompile failed" : result.getErrorMessage());
                return new Result(function, result.getDecompiledFunction().getC(), "");
            }
        };
        callback.setTimeout(DECOMPILE_TIMEOUT);
        try {
            List<Result> results = ParallelDecompiler.decompileFunctions(
                callback, functions, monitor);
            results.removeIf(value -> value == null || value.function == null);
            results.sort(Comparator.comparing(value -> value.function.getEntryPoint()));
            for (Result result : results) {
                monitor.checkCancelled();
                if (!result.error.isBlank()) {
                    failures.add(new Failure(result.function, result.error));
                    continue;
                }
                observeOutputs(result.function, result.c);
                analyzeAccessor(result.function, result.c);
                analyzeTypedOutputs(result.function, result.c);
            }
        }
        finally { callback.dispose(); }
    }

    private void analyzeAccessor(Function function, String c) {
        Structure object = concreteObjectPointee(function.getReturnType());
        if (object == null) return;
        String utility = darrayGetElementName(function);
        if (utility.isBlank()) { reject(function, "no tagged DArrayGetElement callee"); return; }
        int cursor = 0;
        Set<String> arrays = new TreeSet<>(), outputs = new TreeSet<>();
        while ((cursor = tokenIndex(c, utility, cursor)) >= 0) {
            int open = c.indexOf('(', cursor + utility.length());
            int close = matching(c, open);
            if (open < 0 || close < 0) break;
            List<String> arguments = splitArguments(c.substring(open + 1, close));
            if (arguments.size() == 3) {
                String array = simpleExpression(arguments.get(0));
                String output = addressOfSimple(arguments.get(2));
                if (!array.isBlank() && !output.isBlank()) {
                    arrays.add(array);
                    outputs.add(output);
                }
            }
            cursor = close + 1;
        }
        if (arrays.size() != 1 || outputs.size() != 1) {
            reject(function, "DArrayGetElement parse did not yield one selector/output: arrays=" +
                arrays + "; outputs=" + outputs);
            return;
        }
        String array = arrays.iterator().next(), output = outputs.iterator().next();
        if (!closedReturns(function, c, output)) {
            reject(function, "non-null return is not closed over output " + output +
                "; returns=" + returnExpressions(c) + "; alternate-definitions=" +
                alternateReturnDefinitions(c, output));
            return;
        }

        Set<Source> sources = new TreeSet<>();
        List<String> sourceExpressions = new ArrayList<>();
        Matcher assignments = ASSIGNMENT.matcher(c);
        while (assignments.find()) {
            if (!array.equals(assignments.group(1))) continue;
            String expression = assignments.group(2).trim().replaceAll("\\s+", " ");
            sourceExpressions.add(expression);
            Source source = source(expression);
            if (source != null) sources.add(source);
        }
        if (sources.size() < 2) {
            reject(function, "selector " + array + " has fewer than two resolved sources: " +
                sources);
            return;
        }
        accessors++;
        String descriptorPath = DESCRIPTOR_ROOT + "DArrayOf_" +
            sanitize(object.getName()) + "Ptr";
        for (Source source : sources) {
            boolean apply = source.compatible;
            rows.add(new Row(apply, addr(function.getEntryPoint()),
                function.getName(true), object.getPathName(), descriptorPath,
                source.kind, source.globalAddress, source.symbol,
                source.ownerPath, source.fieldOffset, source.expectedType,
                source.symbolSource, apply ? "high" : "review",
                "concrete pointer return " + object.getPathName() +
                "; every non-null return derives from DArrayGetElement out-parameter " +
                output + "; selector local " + array + " has " + sources.size() +
                " exact DArray sources; selector_assignments=" + sourceExpressions +
                "; " + source.reason));
        }
    }

    /**
     * DArrayGetElement copies one complete descriptor element into its third argument.  When
     * that exact output variable already has an independently concrete object-pointer type,
     * the descriptor element is therefore T*.  This proof does not depend on an accessor
     * returning the value and covers ordinary consumer loops such as a typed method receiver.
     */
    private void analyzeTypedOutputs(Function function, String c) {
        String utility = darrayGetElementName(function);
        if (utility.isBlank()) return;
        Map<String, Structure> variables = concretePointerVariables(function);
        if (variables.isEmpty()) return;
        int cursor = 0;
        while ((cursor = tokenIndex(c, utility, cursor)) >= 0) {
            int open = c.indexOf('(', cursor + utility.length());
            int close = matching(c, open);
            if (open < 0 || close < 0) break;
            List<String> arguments = splitArguments(c.substring(open + 1, close));
            if (arguments.size() == 3) {
                String array = simpleExpression(arguments.get(0));
                String output = addressOfSimple(arguments.get(2));
                Structure object = variables.get(output);
                Source source = source(array);
                if (object != null && source != null) {
                    accessors++;
                    String descriptorPath = DESCRIPTOR_ROOT + "DArrayOf_" +
                        sanitize(object.getName()) + "Ptr";
                    boolean apply = source.compatible;
                    rows.add(new Row(apply, addr(function.getEntryPoint()),
                        function.getName(true), object.getPathName(), descriptorPath,
                        source.kind, source.globalAddress, source.symbol,
                        source.ownerPath, source.fieldOffset, source.expectedType,
                        source.symbolSource, apply ? "high" : "review",
                        "DArrayGetElement copies one complete element into independently " +
                            "typed output " + output + "=" + object.getPathName() +
                            " *; source=" + array + "; " + source.reason));
                }
            }
            cursor = close + 1;
        }
    }

    private Map<String, Structure> concretePointerVariables(Function function) {
        Map<String, Structure> result = new TreeMap<>();
        for (Parameter parameter : function.getParameters()) {
            if (parameter.isAutoParameter()) continue;
            Structure structure = concreteObjectPointee(parameter.getFormalDataType());
            if (structure != null) result.put(parameter.getName(), structure);
        }
        for (Variable variable : function.getLocalVariables()) {
            Structure structure = concreteObjectPointee(variable.getDataType());
            if (structure != null) result.put(variable.getName(), structure);
        }
        return result;
    }

    private void observeOutputs(Function function, String c) {
        String utility = darrayGetElementName(function);
        if (utility.isBlank()) return;
        int cursor = 0;
        while ((cursor = tokenIndex(c, utility, cursor)) >= 0) {
            int open = c.indexOf('(', cursor + utility.length());
            int close = matching(c, open);
            if (open < 0 || close < 0) break;
            List<String> arguments = splitArguments(c.substring(open + 1, close));
            if (arguments.size() == 3) {
                String array = simpleExpression(arguments.get(0));
                String output = addressOfSimple(arguments.get(2));
                Source source = source(array);
                Variable variable = localVariable(function, output);
                if (source != null && variable != null)
                    outputObservations.add(new OutputObservation(function, c, output,
                        variable, source));
            }
            cursor = close + 1;
        }
    }

    private Variable localVariable(Function function, String name) {
        if (name == null || name.isBlank()) return null;
        Variable selected = null;
        for (Variable variable : function.getLocalVariables()) {
            if (!name.equals(variable.getName())) continue;
            if (selected != null) return null;
            selected = variable;
        }
        return selected;
    }

    private void buildOutputRows() {
        Map<String, Map<String, Set<String>>> voters = new TreeMap<>();
        Map<String, String> descriptors = new TreeMap<>();
        for (Row row : rows) {
            if (!row.apply) continue;
            voters.computeIfAbsent(row.identity(), ignored -> new TreeMap<>())
                .computeIfAbsent(row.objectTypePath, ignored -> new TreeSet<>())
                .add(row.accessorAddress);
            descriptors.put(row.identity() + "|" + row.objectTypePath,
                row.descriptorTypePath);
        }
        Map<String, Set<String>> outputSources = new TreeMap<>();
        for (OutputObservation observation : outputObservations)
            outputSources.computeIfAbsent(addr(observation.function.getEntryPoint()) + "|" +
                    observation.output, ignored -> new TreeSet<>())
                .add(sourceIdentity(observation.source));

        Set<String> emitted = new HashSet<>();
        for (OutputObservation observation : outputObservations) {
            String sourceId = sourceIdentity(observation.source);
            Map<String, Set<String>> byType = voters.getOrDefault(sourceId, Map.of());
            if (byType.size() != 1) continue;
            Map.Entry<String, Set<String>> vote = byType.entrySet().iterator().next();
            if (vote.getValue().size() < 2) continue;
            String outputKey = addr(observation.function.getEntryPoint()) + "|" +
                observation.output;
            if (outputSources.getOrDefault(outputKey, Set.of()).size() != 1 ||
                    !replaceableOutput(observation.variable.getDataType()) ||
                    !closedOutputLifetime(observation.c, observation.output)) continue;
            String key = outputKey + "|" + sourceId;
            if (!emitted.add(key)) continue;
            String objectPath = vote.getKey();
            outputRows.add(new OutputRow(true,
                addr(observation.function.getEntryPoint()),
                observation.function.getName(true), observation.output,
                observation.variable.getVariableStorage().getSerializationString(),
                typeSpec(observation.variable.getDataType()),
                observation.variable.getSource().toString(), objectPath,
                descriptors.get(sourceId + "|" + objectPath), sourceId, "high",
                "one local lifetime is written only by null initialization and " +
                    "DArrayGetElement from one descriptor source; independently typed " +
                    "outputs agree on " + objectPath + " * in " + vote.getValue().size() +
                    " functions=" + vote.getValue()));
        }
        outputRows.sort(Comparator.comparing((OutputRow row) -> row.functionAddress)
            .thenComparing(row -> row.outputName));
    }

    private boolean closedOutputLifetime(String c, String name) {
        Matcher assignments = Pattern.compile("(?m)^\\s*" + Pattern.quote(name) +
            "\\s*=\\s*([^;]+);").matcher(c);
        while (assignments.find())
            if (!nullExpression(assignments.group(1).trim())) return false;
        return true;
    }

    private boolean replaceableOutput(DataType type) {
        DataType value = unwrap(type);
        if (value instanceof Pointer pointer) {
            DataType pointed = unwrap(pointer.getDataType());
            return pointed == null ||
                pointed instanceof ghidra.program.model.data.VoidDataType ||
                pointed instanceof ghidra.program.model.data.Undefined;
        }
        String path = value == null ? "" : value.getPathName();
        return Set.of("/int", "/uint", "/undefined4").contains(path);
    }

    private String sourceIdentity(Source source) {
        return source.kind + "|" + source.globalAddress + "|" + source.fieldOffset;
    }

    private void reject(Function function, String reason) {
        failures.add(new Failure(function, "review: " + reason));
    }

    private Source source(String expression) {
        String value = stripOuterCasts(expression.trim());
        if (SIMPLE.matcher(value).matches()) {
            Symbol symbol = globals.get(value);
            if (symbol == null) return null;
            Data data = currentProgram.getListing().getDefinedDataAt(symbol.getAddress());
            if (data == null) return null;
            String type = typeSpec(data.getDataType());
            boolean compatible = darrayPointer(data.getDataType());
            return new Source("global", addr(symbol.getAddress()), value, "", -1,
                type, symbol.getSource().toString(), compatible,
                compatible ? "standalone global is DArray-compatible" :
                    "standalone global type is not DArray-compatible: " + type);
        }
        Matcher record = RECORD_FIELD.matcher(value);
        if (!record.matches()) return null;
        Symbol symbol = globals.get(record.group(1));
        if (symbol == null) return null;
        Data data = currentProgram.getListing().getDefinedDataAt(symbol.getAddress());
        if (data == null) return null;
        DataType root = unwrap(data.getDataType());
        if (root instanceof Array array) root = unwrap(array.getDataType());
        if (!(root instanceof Structure owner)) return null;
        DataTypeComponent field = null;
        for (DataTypeComponent component : owner.getDefinedComponents())
            if (record.group(2).equals(component.getFieldName())) {
                field = component;
                break;
            }
        if (field == null) {
            Matcher generated = Pattern.compile(".*_0[xX]([0-9A-Fa-f]+)$")
                .matcher(record.group(2));
            if (generated.matches()) {
                int offset = Integer.parseUnsignedInt(generated.group(1), 16);
                DataTypeComponent component = owner.getComponentAt(offset);
                if (component != null && component.getOffset() == offset) field = component;
            }
        }
        if (field == null) return null;
        String type = typeSpec(field.getDataType());
        boolean compatible = darrayPointer(field.getDataType());
        return new Source("record_field", addr(symbol.getAddress()), record.group(1),
            owner.getPathName(), field.getOffset(), type, symbol.getSource().toString(),
            compatible, compatible ? "exact generated record member is DArray-compatible" :
                "record member is not DArray-compatible: " + type);
    }

    private boolean closedReturns(Function function, String c, String output) {
        Matcher returns = RETURN.matcher(c);
        int nonNull = 0;
        while (returns.find()) {
            String expression = returns.group(1).trim();
            if (nullExpression(expression)) continue;
            if (SIMPLE.matcher(expression).matches() &&
                    provenNullLocal(c, expression)) continue;
            if (SIMPLE.matcher(expression).matches() &&
                    debugTrapFallsThroughToZero(function)) continue;
            if (!word(expression, output) && !word(expression, "_" + output)) return false;
            nonNull++;
        }
        return nonNull > 0;
    }

    private boolean debugTrapFallsThroughToZero(Function function) {
        ghidra.program.model.listing.InstructionIterator instructions =
            currentProgram.getListing().getInstructions(function.getBody(), true);
        List<ghidra.program.model.listing.Instruction> body = new ArrayList<>();
        while (instructions.hasNext()) body.add(instructions.next());
        for (int index = 0; index < body.size(); index++) {
            String mnemonic = body.get(index).getMnemonicString().toUpperCase(Locale.ROOT);
            if (!"INT3".equals(mnemonic)) continue;
            boolean zero = false;
            for (int next = index + 1; next < body.size() && next <= index + 8; next++) {
                ghidra.program.model.listing.Instruction instruction = body.get(next);
                String op = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
                String rendered = instruction.toString().toUpperCase(Locale.ROOT)
                    .replaceAll("\\s+", "");
                if (("XOR".equals(op) || "SUB".equals(op)) &&
                        rendered.endsWith("EAX,EAX")) zero = true;
                if (instruction.getFlowType().isCall() || instruction.getFlowType().isJump())
                    break;
                if ("RET".equals(op) || "RETF".equals(op)) {
                    if (zero) return true;
                    break;
                }
            }
        }
        return false;
    }

    private boolean provenNullLocal(String c, String name) {
        Matcher assignments = Pattern.compile("(?m)^\\s*[^;=]*\\b" +
            Pattern.quote(name) + "\\s*=\\s*([^;]+);").matcher(c);
        int definitions = 0;
        while (assignments.find()) {
            definitions++;
            if (!nullExpression(assignments.group(1).trim())) return false;
        }
        return definitions > 0;
    }

    private List<String> returnExpressions(String c) {
        List<String> result = new ArrayList<>();
        Matcher returns = RETURN.matcher(c);
        while (returns.find()) result.add(returns.group(1).trim().replaceAll("\\s+", " "));
        return result;
    }

    private List<String> alternateReturnDefinitions(String c, String output) {
        List<String> result = new ArrayList<>();
        for (String expression : returnExpressions(c)) {
            if (!SIMPLE.matcher(expression).matches() || expression.equals(output)) continue;
            Matcher definitions = Pattern.compile("(?m)^.*\\b" + Pattern.quote(expression) +
                "\\s*=\\s*([^;]+);").matcher(c);
            while (definitions.find())
                result.add(expression + "=" + definitions.group(1).trim()
                    .replaceAll("\\s+", " "));
        }
        return result;
    }

    private void disableConflictingSources() {
        Map<String, Set<String>> types = new TreeMap<>();
        for (Row row : rows)
            types.computeIfAbsent(row.identity(), ignored -> new TreeSet<>())
                .add(row.objectTypePath);
        for (int index = 0; index < rows.size(); index++) {
            Row row = rows.get(index);
            if (types.getOrDefault(row.identity(), Set.of()).size() <= 1) continue;
            rows.set(index, row.disabled("same DArray source reaches conflicting concrete " +
                "pointer returns " + types.get(row.identity())));
            conflicts++;
        }
    }

    private boolean callsDArrayGetElement(Function function) throws Exception {
        return !darrayGetElementName(function).isBlank();
    }

    private String darrayGetElementName(Function function) {
        try {
            for (Function called : function.getCalledFunctions(monitor)) {
                Function target = resolveThunk(called);
                if (target == null || !hasTag(target,
                        "RECOVERED_UTILITY_DARRAY_GET_ELEMENT")) continue;
                String name = target.getName(true);
                int split = name.lastIndexOf("::");
                return split < 0 ? name : name.substring(split + 2);
            }
        }
        catch (Exception ignored) { }
        return "";
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

    private Structure concreteObjectPointee(DataType type) {
        type = unwrap(type);
        if (!(type instanceof Pointer pointer)) return null;
        DataType pointed = unwrap(pointer.getDataType());
        if (!(pointed instanceof Structure structure) ||
                structure.getName().startsWith("Anon") ||
                structure.getPathName().contains("/Recovered/PointerShapes/") ||
                structure.getPathName().contains("/Recovered/HiddenThis/")) return null;
        DataTypeComponent first = structure.isZeroLength() ? null : structure.getComponentAt(0);
        if (first == null || first.getOffset() != 0 ||
                !(unwrap(first.getDataType()) instanceof Pointer vptr) ||
                !(unwrap(vptr.getDataType()) instanceof Structure table) ||
                !table.getPathName().contains("/Recovered/VTables/")) return null;
        return structure;
    }

    private boolean darrayPointer(DataType type) {
        type = unwrap(type);
        if (!(type instanceof Pointer pointer)) return false;
        DataType pointed = unwrap(pointer.getDataType());
        return pointed != null && (DARRAY_PATH.equals(pointed.getPathName()) ||
            pointed.getPathName().startsWith(DESCRIPTOR_ROOT));
    }

    private void indexGlobals() {
        SymbolIterator iterator = currentProgram.getSymbolTable().getAllSymbols(true);
        while (iterator.hasNext()) {
            Symbol symbol = iterator.next();
            if (!symbol.isGlobal() || !symbol.isPrimary() ||
                    !symbol.getAddress().isMemoryAddress()) continue;
            globals.putIfAbsent(symbol.getName(), symbol);
        }
    }

    private boolean hasTag(Function function, String wanted) {
        for (FunctionTag tag : function.getTags())
            if (wanted.equals(tag.getName())) return true;
        return false;
    }

    private boolean library(Function function) {
        for (FunctionTag tag : function.getTags())
            if (tag.getName().equals("LIBRARY") ||
                    tag.getName().startsWith("LIBRARY_")) return true;
        return false;
    }

    private int tokenIndex(String text, String token, int from) {
        int index = text.indexOf(token, from);
        while (index >= 0) {
            boolean left = index == 0 || !Character.isJavaIdentifierPart(text.charAt(index - 1));
            int end = index + token.length();
            boolean right = end == text.length() || !Character.isJavaIdentifierPart(text.charAt(end));
            if (left && right) return index;
            index = text.indexOf(token, end);
        }
        return -1;
    }

    private int matching(String text, int open) {
        if (open < 0) return -1;
        int depth = 0;
        for (int index = open; index < text.length(); index++) {
            char value = text.charAt(index);
            if (value == '(') depth++;
            else if (value == ')' && --depth == 0) return index;
        }
        return -1;
    }

    private List<String> splitArguments(String text) {
        List<String> result = new ArrayList<>();
        int depth = 0, start = 0;
        for (int index = 0; index < text.length(); index++) {
            char value = text.charAt(index);
            if (value == '(' || value == '[' || value == '{') depth++;
            else if (value == ')' || value == ']' || value == '}') depth--;
            else if (value == ',' && depth == 0) {
                result.add(text.substring(start, index).trim());
                start = index + 1;
            }
        }
        result.add(text.substring(start).trim());
        return result;
    }

    private String simpleExpression(String value) {
        value = stripOuterCasts(value.trim());
        return SIMPLE.matcher(value).matches() ? value : "";
    }

    private String addressOfSimple(String value) {
        value = stripOuterCasts(value.trim());
        if (!value.startsWith("&")) return "";
        value = stripOuterCasts(value.substring(1).trim());
        return SIMPLE.matcher(value).matches() ? value : "";
    }

    private String stripOuterCasts(String value) {
        String result = value.trim();
        boolean changed;
        do {
            changed = false;
            Matcher cast = Pattern.compile("^\\([^()]+\\)\\s*(.+)$", Pattern.DOTALL)
                .matcher(result);
            if (cast.matches()) {
                result = cast.group(1).trim();
                changed = true;
            }
        } while (changed);
        return result;
    }

    private boolean nullExpression(String expression) {
        String value = expression.replaceAll("\\s+", "");
        return value.equals("nullptr") || value.equals("0") ||
            value.matches("(?:\\([^()]+\\))*0x0");
    }

    private boolean word(String text, String value) {
        return Pattern.compile("(?<![A-Za-z0-9_$])" + Pattern.quote(value) +
            "(?![A-Za-z0-9_$])").matcher(text).find();
    }

    private DataType unwrap(DataType type) {
        Set<String> seen = new HashSet<>();
        while (type instanceof TypeDef typedef && seen.add(type.getPathName()))
            type = typedef.getBaseDataType();
        return type;
    }

    private String typeSpec(DataType type) {
        type = unwrap(type);
        if (type instanceof Pointer pointer && pointer.getDataType() != null)
            return "pointer:" + typeSpec(pointer.getDataType());
        return type == null ? "" : type.getPathName();
    }

    private String sanitize(String value) {
        String result = value.replaceAll("[^A-Za-z0-9_$]", "_");
        return result.isBlank() ? "Object" : result;
    }

    private File outputDirectory() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException("Recovery output directory is required");
        return askDirectory("Select recovery output directory", "Select");
    }

    private Path programDirectory(File selected) {
        return selected.getName().equals(currentProgram.getName()) ? selected.toPath() :
            selected.toPath().resolve(currentProgram.getName());
    }

    private void writeRows(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\taccessor_address\taccessor\tobject_type_path\t" +
                "descriptor_type_path\tsource_kind\tglobal_address\tsymbol\t" +
                "owner_type_path\tfield_offset\texpected_type\texpected_symbol_source\t" +
                "confidence\treason\n");
            for (Row row : rows)
                out.write(bit(row.apply) + "\t" + row.accessorAddress + "\t" +
                    clean(row.accessor) + "\t" + clean(row.objectTypePath) + "\t" +
                    clean(row.descriptorTypePath) + "\t" + row.sourceKind + "\t" +
                    row.globalAddress + "\t" + clean(row.symbol) + "\t" +
                    clean(row.ownerTypePath) + "\t" +
                    (row.fieldOffset < 0 ? "" : String.format("0x%X", row.fieldOffset)) +
                    "\t" + clean(row.expectedType) + "\t" + row.expectedSymbolSource +
                    "\t" + row.confidence + "\t" + clean(row.reason) + "\n");
        }
    }

    private void writeFailures(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("function_address\tfunction\treason\n");
            for (Failure failure : failures)
                out.write(addr(failure.function.getEntryPoint()) + "\t" +
                    clean(failure.function.getName(true)) + "\t" +
                    clean(failure.reason) + "\n");
        }
    }

    private void writeOutputRows(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\tfunction_address\tfunction\toutput_name\toutput_storage\t" +
                "expected_type\texpected_source\tobject_type_path\tdescriptor_type_path\t" +
                "source_identity\tconfidence\treason\n");
            for (OutputRow row : outputRows)
                out.write(bit(row.apply) + "\t" + row.functionAddress + "\t" +
                    clean(row.function) + "\t" + clean(row.outputName) + "\t" +
                    clean(row.outputStorage) + "\t" + clean(row.expectedType) + "\t" +
                    row.expectedSource + "\t" + clean(row.objectTypePath) + "\t" +
                    clean(row.descriptorTypePath) + "\t" + clean(row.sourceIdentity) +
                    "\t" + row.confidence + "\t" + clean(row.reason) + "\n");
        }
    }

    private void writeSummary(Path path) throws Exception {
        Files.write(path, List.of("program=" + currentProgram.getName(),
            "candidate_functions=" + candidates, "proven_accessors=" + accessors,
            "targets=" + rows.size(), "auto_apply=" +
                rows.stream().filter(row -> row.apply).count(),
            "output_local_targets=" + outputRows.size(), "output_local_apply=" +
                outputRows.stream().filter(row -> row.apply).count(),
            "source_conflicts=" + conflicts, "decompile_failures=" + failures.size(),
            "policy=A concrete object-pointer return must derive every non-null return " +
                "from one DArrayGetElement out-parameter, while one selector local ranges " +
                "over at least two exact DArray-compatible global or generated-record sources. " +
                "Only those exact sources receive a descriptor whose data is T **; the " +
                "neutral DArrayTy ABI is unchanged."), StandardCharsets.UTF_8);
    }

    private String addr(Address address) {
        return address == null ? "" : address.toString().toUpperCase(Locale.ROOT);
    }
    private String bit(boolean value) { return value ? "1" : "0"; }
    private String clean(String value) {
        return value == null ? "" : value.replace('\t', ' ').replace('\r', ' ')
            .replace('\n', ' ');
    }

    private record Result(Function function, String c, String error) {}
    private record Failure(Function function, String reason) {}
    private record OutputObservation(Function function, String c, String output,
        Variable variable, Source source) {}
    private record OutputRow(boolean apply, String functionAddress, String function,
        String outputName, String outputStorage, String expectedType,
        String expectedSource, String objectTypePath, String descriptorTypePath,
        String sourceIdentity, String confidence, String reason) {}
    private record Source(String kind, String globalAddress, String symbol,
        String ownerPath, long fieldOffset, String expectedType, String symbolSource,
        boolean compatible, String reason) implements Comparable<Source> {
        @Override public int compareTo(Source other) {
            int value = kind.compareTo(other.kind);
            if (value != 0) return value;
            value = globalAddress.compareTo(other.globalAddress);
            if (value != 0) return value;
            return Long.compare(fieldOffset, other.fieldOffset);
        }
    }
    private record Row(boolean apply, String accessorAddress, String accessor,
        String objectTypePath, String descriptorTypePath, String sourceKind,
        String globalAddress, String symbol, String ownerTypePath, long fieldOffset,
        String expectedType, String expectedSymbolSource, String confidence, String reason) {
        String identity() { return sourceKind + "|" + globalAddress + "|" + fieldOffset; }
        Row disabled(String why) {
            return new Row(false, accessorAddress, accessor, objectTypePath,
                descriptorTypePath, sourceKind, globalAddress, symbol, ownerTypePath,
                fieldOffset, expectedType, expectedSymbolSource, "conflict",
                reason + "; " + why);
        }
    }
}
