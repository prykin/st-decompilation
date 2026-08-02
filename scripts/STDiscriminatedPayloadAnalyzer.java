// Infer discriminator-specific payload structures and their stack lifetimes.
// Candidate families are discovered as functions which switch on one explicit parameter and
// consume another explicit pointer parameter.  No function address, case value, or stack offset
// is seeded by this script.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Analyze Discriminated Payloads

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.security.MessageDigest;
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
import ghidra.program.model.data.AbstractIntegerDataType;
import ghidra.program.model.data.Array;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeComponent;
import ghidra.program.model.data.Enum;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.TypeDef;
import ghidra.program.model.data.Undefined;
import ghidra.program.model.lang.Register;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.listing.Variable;
import ghidra.program.model.scalar.Scalar;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.StackReference;
import ghidra.util.task.TaskMonitor;

public class STDiscriminatedPayloadAnalyzer extends GhidraScript {
    private Map<Address, Set<Address>> thunkEntriesByTarget;
    private static final String CATEGORY =
        "/SubmarineTitans/Recovered/DiscriminatedPayloads";
    private static final Pattern SWITCH = Pattern.compile("\\bswitch\\s*\\(([^)]*)\\)\\s*\\{");
    private static final Pattern CASE = Pattern.compile(
        "(?m)^\\s*case\\s+([A-Za-z_][A-Za-z0-9_:]*|-?(?:0[xX][0-9a-fA-F]+|[0-9]+))\\s*:");
    private static final Pattern DEREFERENCE = Pattern.compile(
        "\\*\\s*\\(\\s*([A-Za-z_][A-Za-z0-9_:]*(?:\\s*\\*)*)\\s*\\*\\s*\\)\\s*" +
        "\\(*\\s*(?:\\(\\s*int\\s*\\)\\s*)?%s" +
        "(?:\\s*\\+\\s*(0[xX][0-9a-fA-F]+|[0-9]+))?\\s*\\)*");


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

        boolean reusedFamilies = finalStackMode();
        List<Family> families;
        List<CaseRow> cases;
        if (reusedFamilies) {
            LoadedFamilies loaded = loadCurrentFamilies(
                directory.resolve("discriminated_payload_proposals.tsv"));
            families = loaded.families;
            cases = loaded.cases;
        }
        else {
            List<Function> candidates = new ArrayList<>();
            FunctionIterator functions =
                currentProgram.getFunctionManager().getFunctions(true);
            while (functions.hasNext()) {
                monitor.checkCancelled();
                Function function = functions.next();
                if (candidate(function)) candidates.add(function);
            }

            families = new ArrayList<>();
            for (Decompiled unit : parallelDecompile(candidates)) {
                Family family = analyze(unit.function, unit.c);
                if (family != null && (family.cases.size() >= 2 ||
                        family.messageEnvelope && !family.cases.isEmpty()))
                    families.add(family);
            }
            families.sort(Comparator.comparing(
                family -> family.function.getEntryPoint()));

            cases = new ArrayList<>();
            for (Family family : families)
                for (CaseLayout layout : family.cases.values())
                    cases.add(caseRow(family, layout));
        }
        List<StackRow> stacks = stackRows(families);
        if (finalStackMode()) stacks.addAll(renderedStackRows(families));
        stacks = normalizeStackRows(stacks);
        cases.sort(Comparator.comparing((CaseRow row) -> row.functionAddress)
            .thenComparingLong(row -> row.value));
        stacks.sort(Comparator.comparing((StackRow row) -> row.functionAddress)
            .thenComparingInt(row -> row.stackOffset));

        if (!reusedFamilies)
            writeCases(directory.resolve("discriminated_payload_proposals.tsv"), cases);
        writeStacks(directory.resolve("discriminated_stack_proposals.tsv"), stacks);
        writeSummary(directory.resolve("discriminated_payload_summary.txt"),
            families, cases, stacks);
        println("Discriminated payloads: families=" + families.size() +
            ", case layouts=" + cases.size() + ", stack targets=" + stacks.size() +
            ", family source=" + (reusedFamilies ?
                "verified current-epoch proposals" : "fresh decompilation") +
            ", output=" + directory);
    }

    private boolean finalStackMode() {
        String[] args = getScriptArgs();
        return args.length > 1 && "final-stacks".equalsIgnoreCase(args[1]);
    }

    /**
     * The pipeline runs the ordinary analyzer through its epoch/source/artifact cache
     * immediately before final-stacks. Rehydrate those checked case families instead
     * of decompiling every discriminator function a second time merely to discover the
     * same cases. Every function/signature/type/layout hash is revalidated here.
     */
    private LoadedFamilies loadCurrentFamilies(Path path) throws Exception {
        if (!Files.isRegularFile(path))
            throw new IllegalStateException(
                "Final stack recovery requires current case proposals: " + path);
        List<String> lines = Files.readAllLines(path, StandardCharsets.UTF_8);
        if (lines.isEmpty()) throw new IllegalStateException("Empty case proposals: " + path);
        String[] header = lines.get(0).split("\\t", -1);
        Map<String, Integer> columns = new HashMap<>();
        for (int index = 0; index < header.length; index++)
            columns.put(header[index], index);
        for (String required : List.of("apply", "family_id", "function_address",
                "expected_function", "expected_signature", "discriminator_ordinal",
                "discriminator_name", "discriminator_type", "carrier_ordinal",
                "carrier_name", "carrier_type", "case_value", "case_label",
                "type_path", "size", "layout", "layout_sha256", "confidence",
                "evidence"))
            if (!columns.containsKey(required))
                throw new IllegalStateException(
                    "Case proposals are missing column " + required + ": " + path);

        Map<String, Family> families = new LinkedHashMap<>();
        List<CaseRow> cases = new ArrayList<>();
        for (int line = 1; line < lines.size(); line++) {
            monitor.checkCancelled();
            if (lines.get(line).isBlank()) continue;
            String[] values = lines.get(line).split("\\t", -1);
            if (values.length != header.length)
                throw new IllegalStateException(
                    "Invalid case proposal row " + (line + 1));
            String familyId = value(values, columns, "family_id");
            String functionAddress = value(values, columns, "function_address");
            Address address = currentProgram.getAddressFactory()
                .getAddress(functionAddress);
            Function function = address == null ? null :
                currentProgram.getFunctionManager().getFunctionAt(address);
            String expectedFunction = value(values, columns, "expected_function");
            String expectedSignature = value(values, columns, "expected_signature");
            if (function == null || !function.getName(true).equals(expectedFunction) ||
                    !function.getPrototypeString(true, true).equals(expectedSignature))
                throw new IllegalStateException(
                    "Stale discriminator family at " + functionAddress);

            int discriminatorOrdinal = Integer.parseInt(
                value(values, columns, "discriminator_ordinal"));
            int carrierOrdinal = Integer.parseInt(
                value(values, columns, "carrier_ordinal"));
            Parameter discriminator = parameter(function, discriminatorOrdinal);
            Parameter carrier = parameter(function, carrierOrdinal);
            if (discriminator == null || carrier == null)
                throw new IllegalStateException(
                    "Stale discriminator/carrier ordinal at " + functionAddress);
            String discriminatorSpecification =
                value(values, columns, "discriminator_type");
            DataType discriminatorType = currentProgram.getDataTypeManager()
                .getDataType(discriminatorSpecification);
            if (discriminatorType == null ||
                    !typeSpec(carrier.getDataType()).equals(
                        value(values, columns, "carrier_type")))
                throw new IllegalStateException(
                    "Stale discriminator/carrier type at " + functionAddress);

            long caseValue = Long.parseLong(value(values, columns, "case_value"));
            String label = value(values, columns, "case_label");
            int size = Integer.parseInt(value(values, columns, "size"));
            String layoutText = value(values, columns, "layout");
            String hash = value(values, columns, "layout_sha256");
            if (!hash.equals(sha256(size + "|" + layoutText)))
                throw new IllegalStateException(
                    "Stale case layout hash at " + functionAddress + ":" + caseValue);
            CaseLayout layout = new CaseLayout(caseValue, label);
            if (!layoutText.isBlank()) for (String item : layoutText.split(";")) {
                String[] field = item.split(":", 3);
                if (field.length != 3)
                    throw new IllegalStateException("Invalid case layout field " + item);
                layout.add(Long.parseLong(field[0]), Integer.parseInt(field[1]),
                    field[2], "verified current-epoch case proposal");
            }
            layout.size = size;
            boolean apply = enabled(value(values, columns, "apply"));
            if (!apply) layout.conflict = true;
            String evidence = value(values, columns, "evidence");
            layout.evidence.add(evidence);

            String key = familyId + "|" + functionAddress;
            Family family = families.get(key);
            if (family == null) {
                family = new Family(function, familyId, discriminator,
                    value(values, columns, "discriminator_name"), discriminatorType,
                    carrier, new TreeMap<>(),
                    evidence.contains("message_envelope="), evidence);
                families.put(key, family);
            }
            else if (family.function != function ||
                    family.discriminator.getOrdinal() != discriminatorOrdinal ||
                    family.carrier.getOrdinal() != carrierOrdinal)
                throw new IllegalStateException(
                    "Inconsistent discriminator family " + familyId);
            family.cases.put(caseValue, layout);
            cases.add(new CaseRow(apply, familyId, functionAddress,
                expectedFunction, expectedSignature, discriminatorOrdinal,
                value(values, columns, "discriminator_name"),
                discriminatorSpecification, carrierOrdinal,
                value(values, columns, "carrier_name"),
                value(values, columns, "carrier_type"), caseValue, label,
                value(values, columns, "type_path"), size, layoutText, hash,
                value(values, columns, "confidence"), evidence));
        }
        List<Family> result = new ArrayList<>(families.values());
        result.sort(Comparator.comparing(family -> family.function.getEntryPoint()));
        cases.sort(Comparator.comparing((CaseRow row) -> row.functionAddress)
            .thenComparingLong(row -> row.value));
        return new LoadedFamilies(result, cases);
    }

    private Parameter parameter(Function function, int ordinal) {
        for (Parameter parameter : function.getParameters())
            if (parameter.getOrdinal() == ordinal) return parameter;
        return null;
    }

    private String value(String[] values, Map<String, Integer> columns, String name) {
        return values[columns.get(name)];
    }

    private boolean enabled(String value) {
        return "1".equals(value) || "true".equalsIgnoreCase(value) ||
            "yes".equalsIgnoreCase(value);
    }

    private boolean candidate(Function function) {
        if (function == null || function.isExternal() || function.isThunk() ||
                libraryOrigin(function)) return false;
        if (messageCarrier(function) != null) return true;
        if (!hasComputedJump(function)) return false;
        List<Parameter> explicit = explicitParameters(function);
        if (explicit.size() < 2) return false;
        return explicit.stream().anyMatch(parameter ->
            parameter.getDataType() instanceof AbstractIntegerDataType ||
                parameter.getDataType() instanceof Enum);
    }

    private boolean libraryOrigin(Function function) {
        if (function.getName(true).startsWith("Library::") ||
                function.getSymbol().getSource() == SourceType.IMPORTED ||
                function.getSignatureSource() == SourceType.IMPORTED) return true;
        for (Parameter parameter : function.getParameters())
            if (parameter.getSource() == SourceType.IMPORTED) return true;
        for (var tag : function.getTags()) {
            String name = tag.getName();
            if ("LIBRARY".equals(name) || name.startsWith("LIBRARY_")) return true;
        }
        return false;
    }

    private List<Decompiled> parallelDecompile(List<Function> functions)
            throws Exception {
        if (functions.isEmpty()) return List.of();
        DecompilerCallback<Decompiled> callback = new DecompilerCallback<>(
                currentProgram, dec -> {
                    dec.toggleCCode(true);
                    dec.toggleSyntaxTree(false);
                    dec.setSimplificationStyle("decompile");
                }) {
            @Override
            public Decompiled process(DecompileResults result,
                    TaskMonitor callbackMonitor) {
                Function function = result.getFunction();
                if (!result.decompileCompleted() ||
                        result.getDecompiledFunction() == null)
                    return new Decompiled(function, "",
                        result.getErrorMessage() == null ?
                            "decompile failed" : result.getErrorMessage());
                return new Decompiled(function,
                    result.getDecompiledFunction().getC(), "");
            }
        };
        callback.setTimeout(90);
        try {
            List<Decompiled> result = ParallelDecompiler.decompileFunctions(
                callback, functions, monitor);
            result.removeIf(value -> value == null || value.function == null ||
                !value.error.isBlank());
            result.sort(Comparator.comparing(value -> value.function.getEntryPoint()));
            return result;
        }
        finally {
            callback.dispose();
        }
    }

    private Family analyze(Function function, String c) {
        Family messageFamily = analyzeMessageBranches(function, c);
        if (messageFamily != null) return messageFamily;
        Matcher switchMatcher = SWITCH.matcher(c);
        List<Parameter> explicit = explicitParameters(function);
        while (switchMatcher.find()) {
            String expression = normalize(switchMatcher.group(1));
            Parameter discriminator = explicit.stream()
                .filter(parameter -> normalize(parameter.getName()).equals(expression))
                .findFirst().orElse(null);
            if (discriminator == null || !(discriminator.getDataType() instanceof AbstractIntegerDataType) &&
                    !(discriminator.getDataType() instanceof Enum)) continue;
            Parameter carrier = explicit.stream()
                .filter(parameter -> parameter != discriminator)
                .filter(parameter -> parameter.getDataType() instanceof Pointer ||
                    decompilerTreatsAsCarrier(c, parameter.getName()))
                .findFirst().orElse(null);
            if (carrier == null) continue;
            int open = c.indexOf('{', switchMatcher.start());
            int close = matching(c, open);
            if (open < 0 || close < 0) continue;
            String body = c.substring(open + 1, close);
            Map<Long, CaseLayout> layouts = layouts(body, carrier.getName(),
                discriminator.getDataType(), function);
            layouts.values().removeIf(layout -> layout.size < 1 || layout.fields.isEmpty());
            if (layouts.size() < 2) continue;
            String owner = owner(function);
            String id = sanitize((owner.isBlank() ? "Global" : owner) + "_" +
                function.getName()) + "_" + addr(function.getEntryPoint());
            return new Family(function, id, discriminator, discriminator.getName(),
                discriminator.getDataType(), carrier, layouts, false,
                "switch_expression=" + expression + "; decompiler_case_reads");
        }
        return null;
    }

    /**
     * GetMessage-style envelopes carry a discriminator and three union slots in
     * one parameter. Assigning one global meaning to arg0/arg1/arg2 would be
     * wrong, so mine only equality-guarded branch bodies and create a separate
     * payload view for each exact message id. The STMessage parameter itself is
     * never retyped.
     */
    private Family analyzeMessageBranches(Function function, String c) {
        MessageCarrier message = messageCarrier(function);
        if (message == null) return null;
        String carrier = message.parameter.getName();
        String token = "[A-Za-z_][A-Za-z0-9_:]*|-?(?:0[xX][0-9a-fA-F]+|[0-9]+)";
        Pattern branch = Pattern.compile(
            "(?:else\\s+)?if\\s*\\(\\s*" + Pattern.quote(carrier) +
            "\\s*->\\s*id\\s*==\\s*(" + token + ")\\s*\\)\\s*\\{");
        Matcher matcher = branch.matcher(c);
        Map<Long, CaseLayout> layouts = new TreeMap<>();
        while (matcher.find()) {
            Long value = caseValue(matcher.group(1), message.discriminatorType);
            int open = c.indexOf('{', matcher.start());
            int close = matching(c, open);
            if (value == null || open < 0 || close < 0) continue;
            String segment = c.substring(open + 1, close);
            CaseLayout layout = inferMessageLayout(value, matcher.group(1),
                carrier, segment);
            if (layout.fields.isEmpty()) continue;
            CaseLayout current = layouts.get(value);
            if (current == null) layouts.put(value, layout);
            else current.merge(layout);
        }
        if (layouts.isEmpty()) return null;
        String owner = owner(function);
        String id = sanitize((owner.isBlank() ? "Global" : owner) + "_" +
            function.getName()) + "_" + addr(function.getEntryPoint()) +
            "_MessagePayload";
        return new Family(function, id, message.parameter,
            carrier + "->id", message.discriminatorType, message.parameter,
            layouts, true,
            "message_envelope=" + message.structure.getPathName() +
                "; equality_guarded_case_local_argument_views");
    }

    private CaseLayout inferMessageLayout(long value, String label,
            String carrier, String segment) {
        CaseLayout result = new CaseLayout(value, label);
        Pattern member = Pattern.compile("\\(?\\s*" + Pattern.quote(carrier) +
            "\\s*->\\s*arg([012])\\s*\\)?\\s*\\.\\s*" +
            "(u32|i32|ptr|words)\\b");
        Map<Integer, Set<String>> views = new TreeMap<>();
        Matcher matcher = member.matcher(segment);
        while (matcher.find())
            views.computeIfAbsent(Integer.parseInt(matcher.group(1)),
                ignored -> new TreeSet<>()).add(matcher.group(2));
        for (Map.Entry<Integer, Set<String>> entry : views.entrySet()) {
            String type;
            if (entry.getValue().size() != 1)
                type = "/SubmarineTitans/Recovered/STMessageArg";
            else type = switch (entry.getValue().iterator().next()) {
                case "u32" -> "/uint";
                case "i32" -> "/int";
                case "ptr" -> "pointer:/void";
                case "words" ->
                    "/SubmarineTitans/Recovered/STMessageArgWords";
                default -> "/undefined4";
            };
            int offset = entry.getKey() * currentProgram.getDefaultPointerSize();
            result.add(offset, currentProgram.getDefaultPointerSize(), type,
                "guard " + label + " uses arg" + entry.getKey() +
                    " as " + entry.getValue());
        }
        // The view is the complete three-slot payload even when only one slot is
        // read in this handler. Undefined gaps remain gaps, not invented fields.
        if (!result.fields.isEmpty())
            result.size = 3 * currentProgram.getDefaultPointerSize();
        return result;
    }

    private MessageCarrier messageCarrier(Function function) {
        for (Parameter parameter : explicitParameters(function)) {
            DataType type = unwrap(parameter.getDataType());
            if (!(type instanceof Pointer pointer)) continue;
            DataType pointed = unwrap(pointer.getDataType());
            if (!(pointed instanceof Structure structure)) continue;
            DataTypeComponent id = namedComponent(structure, "id");
            if (id == null || namedComponent(structure, "arg0") == null ||
                    namedComponent(structure, "arg1") == null ||
                    namedComponent(structure, "arg2") == null)
                continue;
            DataType discriminator = unwrap(id.getDataType());
            if (!(discriminator instanceof Enum) &&
                    !(discriminator instanceof AbstractIntegerDataType))
                continue;
            return new MessageCarrier(parameter, structure, discriminator);
        }
        return null;
    }

    private DataTypeComponent namedComponent(Structure structure, String name) {
        for (DataTypeComponent component : structure.getDefinedComponents())
            if (name.equals(component.getFieldName())) return component;
        return null;
    }

    private DataType unwrap(DataType type) {
        while (type instanceof TypeDef value) type = value.getBaseDataType();
        return type;
    }

    private boolean decompilerTreatsAsCarrier(String c, String name) {
        if (name == null || name.isBlank()) return false;
        String carrier = Pattern.quote(name);
        return Pattern.compile("(?s)\\*\\s*\\([^)]*\\*[^)]*\\)\\s*" +
            "(?:\\(\\s*int\\s*\\)\\s*)?" + carrier + "\\b").matcher(c).find();
    }

    private Map<Long, CaseLayout> layouts(String body, String carrier, DataType discriminator,
            Function function) {
        List<CaseMark> marks = new ArrayList<>();
        Matcher matcher = CASE.matcher(body);
        while (matcher.find()) {
            Long value = caseValue(matcher.group(1), discriminator);
            if (value != null) marks.add(new CaseMark(value, matcher.end()));
        }
        Map<Long, CaseLayout> result = new TreeMap<>();
        for (int index = 0; index < marks.size(); index++) {
            CaseMark mark = marks.get(index);
            int end = index + 1 < marks.size() ? marks.get(index + 1).start : body.length();
            String segment = body.substring(mark.start, end);
            segment = appendUniqueGotoTail(body, segment);
            CaseLayout layout = inferLayout(mark.value, carrier, segment, function);
            CaseLayout current = result.get(mark.value);
            if (current == null) result.put(mark.value, layout);
            else current.merge(layout);
        }
        return result;
    }

    private String appendUniqueGotoTail(String body, String segment) {
        Matcher jumps = Pattern.compile("\\bgoto\\s+([A-Za-z_][A-Za-z0-9_]*)\\s*;")
            .matcher(segment);
        String label = null;
        while (jumps.find()) {
            if (label != null && !label.equals(jumps.group(1))) return segment;
            label = jumps.group(1);
        }
        if (label == null || segment.contains(label + ":")) return segment;
        Matcher target = Pattern.compile("(?m)^\\s*" + Pattern.quote(label) + "\\s*:")
            .matcher(body);
        if (!target.find()) return segment;
        int end = body.length();
        Matcher nextCase = CASE.matcher(body);
        if (nextCase.find(target.end())) end = nextCase.start();
        return segment + "\n" + body.substring(target.end(), end);
    }

    private CaseLayout inferLayout(long value, String carrier, String segment, Function function) {
        CaseLayout result = new CaseLayout(value);
        Pattern reads = Pattern.compile(String.format(DEREFERENCE.pattern(),
            Pattern.quote(carrier)));
        List<CopyLoop> loops = fixedCopyLoops(segment, carrier, reads);
        int copied = 0;
        for (CopyLoop loop : loops) {
            for (int index = 0; index < loop.count; index++)
                result.add(copied + (long)index * loop.stride,
                    loop.width.length, loop.width.type,
                    "fixed pointer-advance copy loop count=" + loop.count +
                        " stride=" + loop.stride);
            addCopiedOwnerFields(result, function, loop, copied);
            copied += loop.bytes();
        }

        Matcher matcher = reads.matcher(segment);
        while (matcher.find()) {
            if (insideCopyLoop(loops, matcher.start())) continue;
            TypeWidth width = typeWidth(matcher.group(1));
            if (width == null) continue;
            long offset = matcher.group(2) == null ? 0 : number(matcher.group(2));
            offset += completedCopyBytes(loops, matcher.start());
            if (offset < 0 || offset > 0x10000) continue;
            result.add(offset, width.length, width.type,
                "typed dereference " + compact(matcher.group()));
        }
        addDArrayAppendElement(result, carrier, segment);
        return result;
    }

    private void addDArrayAppendElement(CaseLayout layout, String carrier, String segment) {
        Pattern append = Pattern.compile("\\bDArrayAppend\\s*\\([^;]*,\\s*" +
            Pattern.quote(carrier) + "\\s*\\)");
        if (!append.matcher(segment).find()) return;
        Pattern create = Pattern.compile("\\bDArrayCreate\\s*\\([^;]*?,\\s*1\\s*,\\s*" +
            "(0[xX][0-9a-fA-F]+|[0-9]+)\\s*,\\s*1\\s*\\)");
        Matcher matcher = create.matcher(segment);
        Set<Long> widths = new TreeSet<>();
        while (matcher.find()) {
            try { widths.add(number(matcher.group(1))); }
            catch (Exception ignored) { }
        }
        if (widths.size() != 1) return;
        long width = widths.iterator().next();
        if (width < 1 || width > 16) return;
        layout.add(0, (int)width, "/undefined" + width,
            "DArrayAppend copies one element whose DArrayCreate elementSize is " + width);
    }

    private List<CopyLoop> fixedCopyLoops(String segment, String carrier, Pattern reads) {
        List<CopyLoop> result = new ArrayList<>();
        String number = "(0[xX][0-9a-fA-F]+|[0-9]+)";
        Pattern header = Pattern.compile("for\\s*\\(\\s*([A-Za-z_][A-Za-z0-9_]*)" +
            "\\s*=\\s*" + number + "\\s*;\\s*\\1\\s*!=\\s*0\\s*;[^)]*\\)\\s*\\{");
        Matcher matcher = header.matcher(segment);
        while (matcher.find()) {
            int open = segment.indexOf('{', matcher.start());
            int close = matching(segment, open);
            if (open < 0 || close < 0) continue;
            long count;
            try { count = number(matcher.group(2)); }
            catch (Exception ignored) { continue; }
            if (count < 1 || count > 0x1000) continue;
            String body = segment.substring(open + 1, close);
            Matcher read = reads.matcher(body);
            if (!read.find()) continue;
            TypeWidth width = typeWidth(read.group(1));
            if (width == null) continue;
            Pattern advance = Pattern.compile(Pattern.quote(carrier) +
                "\\s*=\\s*\\([^;=]*\\*\\)\\s*\\(\\s*\\(\\s*int\\s*\\)\\s*" +
                Pattern.quote(carrier) + "\\s*\\+\\s*" + number + "\\s*\\)");
            Matcher step = advance.matcher(body);
            if (!step.find()) continue;
            long strideLong;
            try { strideLong = number(step.group(1)); }
            catch (Exception ignored) { continue; }
            if (strideLong != width.length || count * strideLong > 0x10000) continue;
            Integer destinationBase = copyDestinationBase(segment, open, body, read.start());
            result.add(new CopyLoop(open, close + 1, (int)count,
                (int)strideLong, width, destinationBase));
        }
        return result;
    }
    private Integer copyDestinationBase(String segment, int loopStart, String body,
            int sourceReadStart) {
        Matcher destination = Pattern.compile(
            "\\*\\s*([A-Za-z_][A-Za-z0-9_]*)\\s*=\\s*$")
            .matcher(body.substring(0, sourceReadStart));
        if (!destination.find()) return null;
        String variable = destination.group(1);
        Pattern assignment = Pattern.compile("\\b" + Pattern.quote(variable) +
            "\\s*=\\s*[^;]*&\\s*this\\s*->\\s*field_(?:0x)?([0-9a-fA-F]+)\\s*;");
        Matcher matcher = assignment.matcher(segment.substring(0, loopStart));
        Integer result = null;
        while (matcher.find()) {
            try { result = Integer.parseInt(matcher.group(1), 16); }
            catch (NumberFormatException ignored) { result = null; }
        }
        return result;
    }

    private void addCopiedOwnerFields(CaseLayout layout, Function function,
            CopyLoop loop, int payloadBase) {
        if (loop.destinationBase == null) return;
        Structure owner = receiverStructure(function);
        if (owner == null) return;
        int destinationEnd = loop.destinationBase + loop.bytes();
        for (DataTypeComponent component : owner.getDefinedComponents()) {
            int offset = component.getOffset();
            if (offset < loop.destinationBase ||
                    offset + component.getLength() > destinationEnd) continue;
            DataType type = component.getDataType();
            long payloadOffset = payloadBase + offset - loop.destinationBase;
            Field copied = layout.fields.get(payloadOffset);
            if (Undefined.isUndefined(type) || copied == null ||
                    copied.length != component.getLength() ||
                    !copied.type.startsWith("/undefined")) continue;
            layout.add(payloadOffset, component.getLength(), typeSpec(type),
                "exact concrete destination field inside fixed copy cell");
        }
    }

    private Structure receiverStructure(Function function) {
        for (Parameter parameter : function.getParameters()) {
            if (!parameter.isAutoParameter()) continue;
            DataType type = unwrap(parameter.getDataType());
            if (type instanceof Pointer pointer) type = unwrap(pointer.getDataType());
            if (type instanceof Structure structure) return structure;
        }
        return null;
    }


    private boolean insideCopyLoop(List<CopyLoop> loops, int position) {
        for (CopyLoop loop : loops)
            if (position >= loop.start && position < loop.end) return true;
        return false;
    }

    private int completedCopyBytes(List<CopyLoop> loops, int position) {
        int result = 0;
        for (CopyLoop loop : loops) if (loop.end <= position) result += loop.bytes();
        return result;
    }

    private TypeWidth typeWidth(String raw) {
        String value = raw.replaceAll("\\s+", "").toLowerCase(Locale.ROOT);
        if (value.equals("undefined1") || value.equals("byte") || value.equals("char"))
            return new TypeWidth(1, "/byte");
        if (value.equals("undefined2") || value.equals("short"))
            return new TypeWidth(2, "/short");
        if (value.equals("ushort") || value.equals("word"))
            return new TypeWidth(2, "/ushort");
        if (value.equals("undefined4") || value.equals("dword") ||
                value.equals("int") || value.equals("uint"))
            return new TypeWidth(4, "/undefined4");
        if (value.endsWith("*")) {
            String base = raw.replace("*", "").trim();
            List<DataType> matches = new ArrayList<>();
            currentProgram.getDataTypeManager().findDataTypes(base, matches);
            if (matches.size() == 1)
                return new TypeWidth(currentProgram.getDefaultPointerSize(),
                    "pointer:" + matches.get(0).getPathName());
            return new TypeWidth(currentProgram.getDefaultPointerSize(), "pointer:/void");
        }
        return null;
    }

    private CaseRow caseRow(Family family, CaseLayout layout) throws Exception {
        String suffix = !layout.label.isBlank() ? sanitize(layout.label) :
            layout.value < 0 ? "NEG_" + Long.toHexString(-layout.value) :
                Long.toHexString(layout.value).toUpperCase(Locale.ROOT);
        String typePath = CATEGORY + "/" + family.id + "_Case_" + suffix;
        String serialized = layout.serialized();
        String fingerprint = sha256(layout.size + "|" + serialized);
        boolean apply = layout.fields.size() >= 1 && layout.size <= 0x10000 &&
            !layout.conflict;
        String evidence = family.evidence + "; " + String.join(" | ", layout.evidence);
        return new CaseRow(apply, family.id, addr(family.function.getEntryPoint()),
            family.function.getName(true), family.function.getPrototypeString(true, true),
            family.discriminator.getOrdinal(), family.discriminatorName,
            typeSpec(family.discriminatorType), family.carrier.getOrdinal(),
            family.carrier.getName(), typeSpec(family.carrier.getDataType()), layout.value,
            layout.label, typePath, layout.size, serialized, fingerprint,
            layout.conflict ? "review" : "high", evidence);
    }

    private List<StackRow> stackRows(List<Family> families) {
        List<StackRow> result = new ArrayList<>();
        Map<Address, Family> targets = new HashMap<>();
        for (Family family : families) {
            if (family.messageEnvelope ||
                    family.discriminator.getOrdinal() == family.carrier.getOrdinal())
                continue;
            targets.put(family.function.getEntryPoint(), family);
        }
        if (targets.isEmpty()) return result;
        FunctionIterator callers = currentProgram.getFunctionManager().getFunctions(true);
        while (callers.hasNext()) {
            Function caller = callers.next();
            if (caller.isExternal()) continue;
            Map<String, Value> registers = new HashMap<>();
            List<Value> pushes = new ArrayList<>();
            InstructionIterator instructions = currentProgram.getListing()
                .getInstructions(caller.getBody(), true);
            while (instructions.hasNext()) {
                Instruction instruction = instructions.next();
                String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
                if ("PUSH".equals(mnemonic)) {
                    pushes.add(value(instruction, 0, registers));
                    continue;
                }
                if (instruction.getFlowType().isCall()) {
                    Function called = calledFunction(instruction);
                    Family family = called == null ? null :
                        targets.get(called.getEntryPoint());
                    if (family != null) {
                        StackRow row = stackRow(family, caller, instruction, pushes);
                        if (row != null) result.add(row);
                    }
                    pushes.clear();
                    registers.remove("EAX");
                    registers.remove("ECX");
                    registers.remove("EDX");
                    continue;
                }
                updateRegister(instruction, registers);
                if (instruction.getFlowType().isJump() ||
                        instruction.getFlowType().isTerminal()) {
                    pushes.clear();
                    registers.clear();
                }
            }
        }
        return result;
    }

    /**
     * Typed vtable calls do not have a direct call reference.  On the final deep
     * pass only, decompile functions which contain a computed call at a slot used
     * by one of the discovered discriminator families, then consume the rendered
     * member-call identity.  No slot, function address, or local name is seeded.
     */
    private List<StackRow> renderedStackRows(List<Family> families) throws Exception {
        Map<String, List<Family>> byLeaf = new TreeMap<>();
        Map<Integer, List<Family>> bySlot = new TreeMap<>();
        for (Family family : families) {
            if (family.messageEnvelope ||
                    family.discriminator.getOrdinal() == family.carrier.getOrdinal()) continue;
            byLeaf.computeIfAbsent(family.function.getName(), unused -> new ArrayList<>())
                .add(family);
            for (Integer slot : vtableSlots(family.function))
                bySlot.computeIfAbsent(slot, unused -> new ArrayList<>()).add(family);
        }
        if (bySlot.isEmpty()) return List.of();

        List<Function> candidates = new ArrayList<>();
        Map<Address, Map<Family, Set<MachineStack>>> machine = new HashMap<>();
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            monitor.checkCancelled();
            Function function = functions.next();
            if (function.isExternal()) continue;
            InstructionIterator instructions = currentProgram.getListing()
                .getInstructions(function.getBody(), true);
            Map<String, Value> registers = new HashMap<>();
            List<Value> pushes = new ArrayList<>();
            boolean relevant = false;
            while (instructions.hasNext()) {
                Instruction instruction = instructions.next();
                String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
                if ("PUSH".equals(mnemonic)) {
                    pushes.add(value(instruction, 0, registers));
                    continue;
                }
                if (instruction.getFlowType().isCall()) {
                    Integer slot = computedCallSlot(instruction);
                    if (slot != null)
                        for (Family family : bySlot.getOrDefault(slot, List.of())) {
                            MachineStack observed = machineStackArguments(family, pushes);
                            if (observed != null) {
                                machine.computeIfAbsent(function.getEntryPoint(),
                                    unused -> new HashMap<>())
                                    .computeIfAbsent(family, unused -> new HashSet<>())
                                    .add(observed);
                                relevant = true;
                            }
                        }
                    pushes.clear();
                    registers.remove("EAX");
                    registers.remove("ECX");
                    registers.remove("EDX");
                    continue;
                }
                updateRegister(instruction, registers);
                if (instruction.getFlowType().isJump() ||
                        instruction.getFlowType().isTerminal()) {
                    pushes.clear();
                    registers.clear();
                }
            }
            if (relevant) candidates.add(function);
        }

        List<StackRow> result = new ArrayList<>();
        for (Decompiled unit : parallelDecompile(candidates)) {
            for (Map.Entry<String, List<Family>> entry : byLeaf.entrySet()) {
                if (entry.getValue().size() != 1 ||
                        !unit.c.contains(entry.getKey() + "(")) continue;
                Family family = entry.getValue().get(0);
                Set<MachineStack> observations = machine
                    .getOrDefault(unit.function.getEntryPoint(), Map.of())
                    .getOrDefault(family, Set.of());
                result.addAll(renderedCalls(unit.function, unit.c, family, observations));
            }
        }
        return result;
    }

    private MachineStack machineStackArguments(Family family, List<Value> pushes) {
        if (pushes.size() < explicitParameters(family.function).size()) return null;
        int discriminatorIndex = explicitIndex(family.function, family.discriminator);
        int carrierIndex = explicitIndex(family.function, family.carrier);
        Value discriminator = pushedArgument(pushes, discriminatorIndex);
        Value carrier = pushedArgument(pushes, carrierIndex);
        if (discriminator == null || carrier == null || discriminator.constant == null ||
                carrier.stackAddress == null) return null;
        CaseLayout layout = family.cases.get(discriminator.constant);
        return layout != null && layout.size > 0 && !layout.conflict ?
            new MachineStack(discriminator.constant, carrier.stackAddress) : null;
    }

    private Set<Integer> vtableSlots(Function function) {
        Set<Integer> result = new TreeSet<>();
        for (Address entry : thunkEntries(function)) {
            ReferenceIterator references = currentProgram.getReferenceManager()
                .getReferencesTo(entry);
            while (references.hasNext()) {
                Reference reference = references.next();
                Address from = reference.getFromAddress();
                if (from == null || currentProgram.getListing().getInstructionAt(from) != null)
                    continue;
                Data root = currentProgram.getListing().getDefinedDataContaining(from);
                if (root == null) continue;
                while (root.getParent() != null) root = root.getParent();
                long offset = from.subtract(root.getMinAddress());
                int pointer = currentProgram.getDefaultPointerSize();
                if (root.getLength() >= pointer * 2 && offset >= 0 &&
                        offset + pointer <= root.getLength() && offset % pointer == 0)
                    result.add((int)offset);
            }
        }
        return result;
    }

    private Set<Address> thunkEntries(Function target) {
        if (thunkEntriesByTarget == null) {
            thunkEntriesByTarget = new HashMap<>();
            FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
            while (functions.hasNext()) {
                Function function = functions.next();
                Function resolved = function;
                Set<Address> seen = new HashSet<>();
                for (int depth = 0; depth < 32 && resolved != null && resolved.isThunk(); depth++) {
                    if (!seen.add(resolved.getEntryPoint())) { resolved = null; break; }
                    Function next = resolved.getThunkedFunction(false);
                    if (next == null || next.equals(resolved)) { resolved = null; break; }
                    resolved = next;
                }
                if (resolved != null)
                    thunkEntriesByTarget.computeIfAbsent(resolved.getEntryPoint(),
                        unused -> new TreeSet<>()).add(function.getEntryPoint());
            }
        }
        return thunkEntriesByTarget.getOrDefault(target.getEntryPoint(),
            Set.of(target.getEntryPoint()));
    }

    private Integer computedCallSlot(Instruction instruction) {
        if (!instruction.getFlowType().isCall() ||
                !instruction.getFlowType().isComputed()) return null;
        Scalar scalar = instruction.getScalar(0);
        if (scalar == null) return 0;
        long value = scalar.getUnsignedValue();
        int pointer = currentProgram.getDefaultPointerSize();
        return value <= 0x10000 && value % pointer == 0 ? (int)value : null;
    }

    private List<StackRow> renderedCalls(Function caller, String c, Family family,
            Set<MachineStack> observations) {
        List<StackRow> result = new ArrayList<>();
        Pattern call = Pattern.compile("\\b" + Pattern.quote(family.function.getName()) +
            "\\s*\\(");
        Matcher matcher = call.matcher(c);
        int ordinal = 0;
        while (matcher.find()) {
            int open = c.indexOf('(', matcher.start());
            int close = matchingParenthesis(c, open);
            if (open < 0 || close < 0) continue;
            List<String> arguments = splitArguments(c.substring(open + 1, close));
            int discriminatorIndex = explicitIndex(family.function, family.discriminator);
            int carrierIndex = explicitIndex(family.function, family.carrier);
            if (discriminatorIndex < 0 || carrierIndex < 0 ||
                    discriminatorIndex >= arguments.size() ||
                    carrierIndex >= arguments.size()) continue;
            Long value = renderedConstant(arguments.get(discriminatorIndex), family);
            Integer stack = stackAddress(caller, arguments.get(carrierIndex));
            if (value == null || stack == null ||
                    !observations.contains(new MachineStack(value, stack))) continue;
            CaseLayout layout = family.cases.get(value);
            if (layout == null || layout.size < 1 || layout.conflict) continue;
            String typePath = caseTypePath(family, layout);
            result.add(new StackRow(true, family.id, addr(caller.getEntryPoint()),
                caller.getName(true), caller.getPrototypeString(true, true),
                "decompiler_call_" + ordinal++, stack, layout.size, layout.value,
                typePath, overlappingVariables(caller, stack, layout.size), "high",
                "machine LEA/PUSH case and stack offset agree with the same typed " +
                    "decompiler member call; vtable slot identity is inferred"));
        }
        return result;
    }

    private Long renderedConstant(String expression, Family family) {
        Pattern token = Pattern.compile(
            "[A-Za-z_][A-Za-z0-9_:]*|-?(?:0[xX][0-9a-fA-F]+|[0-9]+)");
        Matcher matcher = token.matcher(expression);
        Long result = null;
        while (matcher.find()) {
            Long value = caseValue(matcher.group(), family.discriminatorType);
            if (value != null && family.cases.containsKey(value)) result = value;
        }
        return result;
    }

    private Integer stackAddress(Function function, String expression) {
        Matcher addressed = Pattern.compile("&\\s*([A-Za-z_][A-Za-z0-9_]*)")
            .matcher(expression);
        String renderedName = null;
        boolean addressOf = addressed.find();
        if (addressOf) renderedName = addressed.group(1);
        else {
            String value = expression.replaceAll("\\([^()]*\\)", "")
                .replaceAll("[\\s()]", "");
            if (value.matches("[A-Za-z_][A-Za-z0-9_]*")) renderedName = value;
        }
        if (renderedName == null) return null;

        Variable target = null;
        Integer renderedOffset = renderedStackOffset(renderedName);
        for (Variable variable : function.getLocalVariables()) {
            if (!variable.isStackVariable()) continue;
            if (variable.getName().equals(renderedName) || renderedOffset != null &&
                    variable.getStackOffset() == renderedOffset) {
                target = variable;
                break;
            }
        }
        if (target == null) return renderedOffset;
        DataType unwrapped = unwrap(target.getDataType());
        if (!addressOf && !(unwrapped instanceof Array)) return null;
        int offset = target.getStackOffset();
        Matcher member = Pattern.compile(Pattern.quote(renderedName) +
            "\\s*(?:->|\\.)\\s*([A-Za-z_][A-Za-z0-9_]*)").matcher(expression);
        if (member.find()) {
            Integer component = componentOffset(target.getDataType(), member.group(1));
            if (component == null) return null;
            offset += component;
        }
        return offset;
    }

    /** Map Ghidra's rendered uStack_/pStack_/local_ suffix to a stack offset.
     * A missing persistent Listing local is allowed only because renderedCalls
     * independently requires an identical machine-observed case/offset pair. */
    private Integer renderedStackOffset(String name) {
        Matcher matcher = Pattern.compile(
            "(?i)(?:[A-Za-z0-9]*Stack_|local_)([0-9a-f]+)$").matcher(name);
        if (!matcher.matches()) return null;
        try {
            long magnitude = Long.parseLong(matcher.group(1), 16);
            return magnitude > 0 && magnitude <= Integer.MAX_VALUE ?
                (int)-magnitude : null;
        }
        catch (NumberFormatException ignored) { return null; }
    }

    private Integer componentOffset(DataType type, String field) {
        DataType current = unwrap(type);
        if (current instanceof Pointer pointer) current = unwrap(pointer.getDataType());
        if (!(current instanceof Structure structure)) return null;
        for (DataTypeComponent component : structure.getDefinedComponents())
            if (field.equals(component.getFieldName())) return component.getOffset();
        return null;
    }

    private int matchingParenthesis(String text, int open) {
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
        int parentheses = 0, brackets = 0, start = 0;
        for (int index = 0; index < text.length(); index++) {
            char value = text.charAt(index);
            if (value == '(') parentheses++;
            else if (value == ')') parentheses--;
            else if (value == '[') brackets++;
            else if (value == ']') brackets--;
            else if (value == ',' && parentheses == 0 && brackets == 0) {
                result.add(text.substring(start, index).trim());
                start = index + 1;
            }
        }
        if (start < text.length() || !text.isBlank()) result.add(text.substring(start).trim());
        return result;
    }

    private List<StackRow> normalizeStackRows(List<StackRow> input) {
        Map<String, StackRow> unique = new LinkedHashMap<>();
        for (StackRow row : input) {
            String key = row.functionAddress + "|" + row.stackOffset + "|" + row.length +
                "|" + row.proposedType;
            unique.putIfAbsent(key, row);
        }
        List<StackRow> rows = new ArrayList<>(unique.values());
        Set<Integer> conflicts = new HashSet<>();
        for (int left = 0; left < rows.size(); left++) {
            StackRow a = rows.get(left);
            for (int right = left + 1; right < rows.size(); right++) {
                StackRow b = rows.get(right);
                if (!a.functionAddress.equals(b.functionAddress)) continue;
                boolean overlap = a.stackOffset < b.stackOffset + b.length &&
                    b.stackOffset < a.stackOffset + a.length;
                boolean identical = a.stackOffset == b.stackOffset &&
                    a.length == b.length && a.proposedType.equals(b.proposedType);
                if (overlap && !identical) { conflicts.add(left); conflicts.add(right); }
            }
        }
        List<StackRow> result = new ArrayList<>();
        for (int index = 0; index < rows.size(); index++) {
            StackRow row = rows.get(index);
            result.add(conflicts.contains(index) ? reviewStack(row,
                "ambiguous overlapping stack lifetimes in the same function") : row);
        }
        return result;
    }

    private StackRow reviewStack(StackRow row, String reason) {
        return new StackRow(false, row.familyId, row.functionAddress, row.function,
            row.signature, row.callAddress, row.stackOffset, row.length, row.value,
            row.proposedType, row.expectedOverlaps, "review", row.evidence + "; " + reason);
    }

    private String caseTypePath(Family family, CaseLayout layout) {
        String suffix = !layout.label.isBlank() ? sanitize(layout.label) :
            layout.value < 0 ? "NEG_" + Long.toHexString(-layout.value) :
                Long.toHexString(layout.value).toUpperCase(Locale.ROOT);
        return CATEGORY + "/" + family.id + "_Case_" + suffix;
    }

    private StackRow stackRow(Family family, Function caller, Instruction call,
            List<Value> pushes) {
        int explicit = explicitParameters(family.function).size();
        if (pushes.size() < explicit) return null;
        int discriminatorIndex = explicitIndex(family.function, family.discriminator);
        int carrierIndex = explicitIndex(family.function, family.carrier);
        Value discriminator = pushedArgument(pushes, discriminatorIndex);
        Value carrier = pushedArgument(pushes, carrierIndex);
        if (discriminator == null || carrier == null ||
                discriminator.constant == null || carrier.stackAddress == null) return null;
        CaseLayout layout = family.cases.get(discriminator.constant);
        if (layout == null || layout.size < 1 || layout.conflict) return null;
        String typePath = caseTypePath(family, layout);
        String expected = overlappingVariables(caller, carrier.stackAddress, layout.size);
        return new StackRow(true, family.id, addr(caller.getEntryPoint()),
            caller.getName(true), caller.getPrototypeString(true, true),
            addr(call.getAddress()), carrier.stackAddress, layout.size, layout.value,
            typePath, expected, "high",
            "constant discriminator and stack-address carrier reach the same direct call");
    }

    private int explicitIndex(Function function, Parameter wanted) {
        List<Parameter> explicit = explicitParameters(function);
        for (int index = 0; index < explicit.size(); index++)
            if (explicit.get(index).getOrdinal() == wanted.getOrdinal()) return index;
        return -1;
    }

    private Value pushedArgument(List<Value> pushes, int ordinal) {
        int index = pushes.size() - 1 - ordinal;
        return index < 0 || index >= pushes.size() ? null : pushes.get(index);
    }

    private String overlappingVariables(Function function, int offset, int length) {
        int end = offset + length;
        List<String> result = new ArrayList<>();
        for (Variable variable : function.getLocalVariables()) {
            if (!variable.isStackVariable()) continue;
            int start = variable.getStackOffset();
            if (start >= end || start + variable.getLength() <= offset) continue;
            result.add(variable.getVariableStorage() + ":" + variable.getName() + ":" +
                typeSpec(variable.getDataType()) + ":" + variable.getSource());
        }
        return String.join(" | ", result);
    }

    private Value value(Instruction instruction, int operand,
            Map<String, Value> registers) {
        Register register = instruction.getRegister(operand);
        if (register != null)
            return registers.getOrDefault(canonical(register.getName()), Value.unknown());
        Scalar scalar = instruction.getScalar(operand);
        if (scalar != null) return Value.constant(scalar.getSignedValue());
        Integer stack = stackReference(instruction, operand);
        return stack == null ? Value.unknown() : Value.stackAddress(stack);
    }

    private void updateRegister(Instruction instruction, Map<String, Value> registers) {
        Register destination = instruction.getRegister(0);
        if (destination == null) return;
        String name = canonical(destination.getName());
        String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
        if ("LEA".equals(mnemonic)) {
            Integer stack = stackReference(instruction, 1);
            if (stack == null) registers.remove(name);
            else registers.put(name, Value.stackAddress(stack));
            return;
        }
        if ("MOV".equals(mnemonic) || "MOVZX".equals(mnemonic) ||
                "MOVSX".equals(mnemonic)) {
            Value source = value(instruction, 1, registers);
            if (source.known()) registers.put(name, source);
            else registers.remove(name);
            return;
        }
        if ("XOR".equals(mnemonic) && instruction.getRegister(1) != null &&
                name.equals(canonical(instruction.getRegister(1).getName()))) {
            registers.put(name, Value.constant(0));
            return;
        }
        if (!Set.of("CMP", "TEST", "PUSH").contains(mnemonic)) registers.remove(name);
    }

    private Integer stackReference(Instruction instruction, int operand) {
        for (Reference reference : instruction.getReferencesFrom())
            if (reference instanceof StackReference stack &&
                    reference.getOperandIndex() == operand) return stack.getStackOffset();
        return null;
    }

    private Function calledFunction(Instruction instruction) {
        for (Address flow : instruction.getFlows()) {
            Function function = currentProgram.getFunctionManager().getFunctionAt(flow);
            if (function == null) continue;
            for (int depth = 0; depth < 32 && function.isThunk(); depth++) {
                Function target = function.getThunkedFunction(false);
                if (target == null || target.equals(function)) break;
                function = target;
            }
            return function;
        }
        return null;
    }

    private boolean hasComputedJump(Function function) {
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            if (instruction.getFlowType().isComputed() &&
                    instruction.getFlowType().isJump()) return true;
        }
        return false;
    }

    private List<Parameter> explicitParameters(Function function) {
        List<Parameter> result = new ArrayList<>();
        for (Parameter parameter : function.getParameters())
            if (!parameter.isAutoParameter()) result.add(parameter);
        return result;
    }

    private Long caseValue(String token, DataType type) {
        if (type instanceof Enum value) {
            for (String name : value.getNames())
                if (name.equals(token) || name.endsWith("::" + token))
                    return value.getValue(name);
        }
        try { return number(token); }
        catch (Exception ignored) { return null; }
    }

    private long number(String token) {
        String value = token.trim();
        boolean negative = value.startsWith("-");
        if (negative) value = value.substring(1);
        long result = value.startsWith("0x") || value.startsWith("0X") ?
            Long.parseUnsignedLong(value.substring(2), 16) : Long.parseLong(value);
        return negative ? -result : result;
    }

    private int matching(String text, int open) {
        if (open < 0) return -1;
        int depth = 0;
        for (int index = open; index < text.length(); index++) {
            char ch = text.charAt(index);
            if (ch == '{') depth++;
            else if (ch == '}' && --depth == 0) return index;
        }
        return -1;
    }

    private String owner(Function function) {
        String name = function.getName(true);
        int separator = name.lastIndexOf("::");
        return separator < 0 ? "" : name.substring(0, separator);
    }
    private String normalize(String value) {
        return value == null ? "" : value.replaceAll("\\s+", "")
            .replaceAll("^\\(+|\\)+$", "");
    }
    private String typeSpec(DataType type) {
        if (type instanceof Pointer pointer && pointer.getDataType() != null)
            return "pointer:" + typeSpec(pointer.getDataType());
        return type == null ? "" : type.getPathName();
    }
    private String canonical(String register) {
        String value = register.toUpperCase(Locale.ROOT);
        if (Set.of("AL", "AH", "AX", "EAX").contains(value)) return "EAX";
        if (Set.of("BL", "BH", "BX", "EBX").contains(value)) return "EBX";
        if (Set.of("CL", "CH", "CX", "ECX").contains(value)) return "ECX";
        if (Set.of("DL", "DH", "DX", "EDX").contains(value)) return "EDX";
        return value;
    }

    private void writeCases(Path path, List<CaseRow> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\tfamily_id\tfunction_address\texpected_function\t" +
                "expected_signature\tdiscriminator_ordinal\tdiscriminator_name\t" +
                "discriminator_type\tcarrier_ordinal\tcarrier_name\tcarrier_type\t" +
                "case_value\tcase_label\ttype_path\tsize\tlayout\tlayout_sha256\t" +
                "confidence\tevidence\n");
            for (CaseRow row : rows) out.write(bit(row.apply) + "\t" + row.familyId + "\t" +
                row.functionAddress + "\t" + clean(row.function) + "\t" +
                clean(row.signature) + "\t" + row.discriminatorOrdinal + "\t" +
                clean(row.discriminatorName) + "\t" + row.discriminatorType + "\t" +
                row.carrierOrdinal + "\t" + clean(row.carrierName) + "\t" +
                row.carrierType + "\t" + row.value + "\t" +
                clean(row.label) + "\t" + row.typePath + "\t" +
                row.size + "\t" + row.layout + "\t" + row.hash + "\t" +
                row.confidence + "\t" + clean(row.evidence) + "\n");
        }
    }

    private void writeCaseJson(Path path, List<CaseRow> rows) throws Exception {
        List<String> output = new ArrayList<>();
        for (CaseRow row : rows) output.add("{\"apply\":" + row.apply +
            ",\"family_id\":" + q(row.familyId) + ",\"function_address\":" +
            q(row.functionAddress) + ",\"case_value\":" + row.value +
            ",\"type_path\":" + q(row.typePath) + ",\"size\":" + row.size +
            ",\"layout\":" + q(row.layout) + ",\"layout_sha256\":" + q(row.hash) +
            ",\"evidence\":" + q(row.evidence) + "}");
        Files.write(path, output, StandardCharsets.UTF_8);
    }

    private void writeStacks(Path path, List<StackRow> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\tfamily_id\tfunction_address\texpected_function\t" +
                "expected_signature\tcall_address\tstack_offset\tlength\tcase_value\t" +
                "proposed_type\texpected_overlaps\tconfidence\tevidence\n");
            for (StackRow row : rows) out.write(bit(row.apply) + "\t" + row.familyId +
                "\t" + row.functionAddress + "\t" + clean(row.function) + "\t" +
                clean(row.signature) + "\t" + row.callAddress + "\t" +
                row.stackOffset + "\t" + row.length + "\t" + row.value + "\t" +
                row.proposedType + "\t" + clean(row.expectedOverlaps) + "\t" +
                row.confidence + "\t" + clean(row.evidence) + "\n");
        }
    }

    private void writeSummary(Path path, List<Family> families, List<CaseRow> cases,
            List<StackRow> stacks) throws Exception {
        Files.write(path, List.of(
            "program=" + currentProgram.getName(),
            "families=" + families.size(),
            "case_layouts=" + cases.size(),
            "automatic_case_layouts=" + cases.stream().filter(row -> row.apply).count(),
            "stack_targets=" + stacks.size(),
            "automatic_stack_targets=" + stacks.stream().filter(row -> row.apply).count(),
            "note=each case type is scoped to one discriminator family; equal geometry never " +
                "merges semantic identities",
            "note=stack offsets are observed at call sites and are never embedded in script code"),
            StandardCharsets.UTF_8);
    }

    private String sha256(String value) throws Exception {
        byte[] digest = MessageDigest.getInstance("SHA-256")
            .digest(value.getBytes(StandardCharsets.UTF_8));
        StringBuilder result = new StringBuilder();
        for (byte item : digest) result.append(String.format("%02x", item & 0xff));
        return result.toString();
    }
    private File outputDirectory() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException("Recovery output directory is required");
        return askDirectory("Select recovery output directory", "Select");
    }
    private Path programDirectory(File selected) {
        Path path = selected.toPath().toAbsolutePath().normalize();
        return path.getFileName() != null &&
            path.getFileName().toString().equals(currentProgram.getName()) ?
            path : path.resolve(currentProgram.getName());
    }
    private static String compact(String value) {
        return value.replaceAll("\\s+", " ").trim();
    }
    private static String sanitize(String value) {
        return value.replaceAll("[^A-Za-z0-9_]", "_");
    }
    private static String addr(Address address) {
        return address == null ? "" : address.toString().toUpperCase(Locale.ROOT);
    }
    private static String bit(boolean value) { return value ? "1" : "0"; }
    private static String clean(String value) {
        return value == null ? "" : value.replace('\t', ' ')
            .replace('\r', ' ').replace('\n', ' ');
    }
    private static String q(String value) {
        return "\"" + (value == null ? "" : value).replace("\\", "\\\\")
            .replace("\"", "\\\"").replace("\r", "\\r").replace("\n", "\\n") + "\"";
    }

    private static class Family {
        final Function function;
        final String id;
        final Parameter discriminator, carrier;
        final String discriminatorName;
        final DataType discriminatorType;
        final Map<Long, CaseLayout> cases;
        final boolean messageEnvelope;
        final String evidence;
        Family(Function function, String id, Parameter discriminator,
                String discriminatorName, DataType discriminatorType,
                Parameter carrier, Map<Long, CaseLayout> cases,
                boolean messageEnvelope, String evidence) {
            this.function = function;
            this.id = id;
            this.discriminator = discriminator;
            this.discriminatorName = discriminatorName;
            this.discriminatorType = discriminatorType;
            this.carrier = carrier;
            this.cases = cases;
            this.messageEnvelope = messageEnvelope;
            this.evidence = evidence;
        }
    }
    private static class CaseLayout {
        final long value;
        String label;
        int size;
        boolean conflict;
        final Map<Long, Field> fields = new TreeMap<>();
        final List<String> evidence = new ArrayList<>();
        CaseLayout(long value) { this(value, ""); }
        CaseLayout(long value, String label) {
            this.value = value;
            this.label = label == null ? "" : label;
        }
        void add(long offset, int length, String type, String reason) {
            Field current = fields.get(offset);
            boolean currentGeneric = current != null && current.type.startsWith("/undefined");
            boolean proposedGeneric = type.startsWith("/undefined");
            boolean genericUpgrade = current != null && current.length == length &&
                currentGeneric != proposedGeneric;
            if (current != null &&
                    (current.length != length || !current.type.equals(type)) &&
                    !genericUpgrade) {
                conflict = true;
                evidence.add("conflicting types at +" + offset + ": " +
                    current.length + ":" + current.type + " versus " +
                    length + ":" + type);
            }
            for (Field field : fields.values()) {
                if (field.offset == offset) continue;
                long leftEnd = offset + length, rightEnd = field.offset + field.length;
                if (offset < rightEnd && field.offset < leftEnd) {
                    conflict = true;
                    evidence.add("overlapping access views at +" + field.offset +
                        " and +" + offset);
                }
            }
            if (current == null || length > current.length ||
                    current.length == length && currentGeneric && !proposedGeneric)
                fields.put(offset, new Field(offset, length, type));
            size = Math.max(size, (int)offset + length);
            if (evidence.size() < 16) evidence.add(reason);
        }
        void merge(CaseLayout other) {
            conflict |= other.conflict;
            if (label.isBlank()) label = other.label;
            for (Field field : other.fields.values())
                add(field.offset, field.length, field.type, "merged fall-through case access");
            size = Math.max(size, other.size);
            evidence.addAll(other.evidence);
        }
        String serialized() {
            List<String> values = new ArrayList<>();
            for (Field field : fields.values())
                values.add(field.offset + ":" + field.length + ":" + field.type);
            return String.join(";", values);
        }
    }
    private record Decompiled(Function function, String c, String error) { }
    private record LoadedFamilies(List<Family> families, List<CaseRow> cases) { }
    private record Field(long offset, int length, String type) { }
    private record TypeWidth(int length, String type) { }
    private record CopyLoop(int start, int end, int count, int stride, TypeWidth width,
            Integer destinationBase) {
        int bytes() { return count * stride; }
    }
    private record MachineStack(long value, int stackOffset) { }
    private record MessageCarrier(Parameter parameter, Structure structure,
        DataType discriminatorType) { }
    private record CaseMark(long value, int start) { }
    private static class Value {
        final Long constant;
        final Integer stackAddress;
        private Value(Long constant, Integer stackAddress) {
            this.constant = constant;
            this.stackAddress = stackAddress;
        }
        static Value constant(long value) { return new Value(value, null); }
        static Value stackAddress(int value) { return new Value(null, value); }
        static Value unknown() { return new Value(null, null); }
        boolean known() { return constant != null || stackAddress != null; }
    }
    private record CaseRow(boolean apply, String familyId, String functionAddress,
        String function, String signature, int discriminatorOrdinal, String discriminatorName,
        String discriminatorType, int carrierOrdinal, String carrierName, String carrierType,
        long value, String label, String typePath, int size, String layout, String hash,
        String confidence, String evidence) { }
    private record StackRow(boolean apply, String familyId, String functionAddress,
        String function, String signature, String callAddress, int stackOffset, int length,
        long value, String proposedType, String expectedOverlaps, String confidence,
        String evidence) { }
}
