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
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeComponent;
import ghidra.program.model.data.Enum;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.TypeDef;
import ghidra.program.model.lang.Register;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.listing.Variable;
import ghidra.program.model.scalar.Scalar;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.StackReference;
import ghidra.util.task.TaskMonitor;

public class STDiscriminatedPayloadAnalyzer extends GhidraScript {
    private static final String CATEGORY =
        "/SubmarineTitans/Recovered/DiscriminatedPayloads";
    private static final Pattern SWITCH = Pattern.compile("\\bswitch\\s*\\(([^)]*)\\)\\s*\\{");
    private static final Pattern CASE = Pattern.compile(
        "(?m)^\\s*case\\s+([A-Za-z_][A-Za-z0-9_:]*|-?(?:0[xX][0-9a-fA-F]+|[0-9]+))\\s*:");
    private static final Pattern DEREFERENCE = Pattern.compile(
        "\\*\\s*\\(\\s*([A-Za-z_][A-Za-z0-9_:]*(?:\\s*\\*)*)\\s*\\*\\s*\\)\\s*" +
        "(?:\\(\\s*int\\s*\\)\\s*)?%s(?:\\s*\\+\\s*(0[xX][0-9a-fA-F]+|[0-9]+))?");
    private static final Pattern LOOP_COUNT = Pattern.compile(
        "(?s)for\\s*\\([^;]*;\\s*[A-Za-z_][A-Za-z0-9_]*\\s*!=\\s*" +
        "(0[xX][0-9a-fA-F]+|[0-9]+)\\s*;[^)]*\\).*");


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

        List<Function> candidates = new ArrayList<>();
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            monitor.checkCancelled();
            Function function = functions.next();
            if (candidate(function)) candidates.add(function);
        }

        List<Family> families = new ArrayList<>();
        for (Decompiled unit : parallelDecompile(candidates)) {
            Family family = analyze(unit.function, unit.c);
            if (family != null && (family.cases.size() >= 2 ||
                    family.messageEnvelope && !family.cases.isEmpty()))
                families.add(family);
        }
        families.sort(Comparator.comparing(family -> family.function.getEntryPoint()));

        List<CaseRow> cases = new ArrayList<>();
        for (Family family : families)
            for (CaseLayout layout : family.cases.values()) cases.add(caseRow(family, layout));
        List<StackRow> stacks = stackRows(families);
        cases.sort(Comparator.comparing((CaseRow row) -> row.functionAddress)
            .thenComparingLong(row -> row.value));
        stacks.sort(Comparator.comparing((StackRow row) -> row.functionAddress)
            .thenComparingInt(row -> row.stackOffset));

        writeCases(directory.resolve("discriminated_payload_proposals.tsv"), cases);
        writeStacks(directory.resolve("discriminated_stack_proposals.tsv"), stacks);
        writeSummary(directory.resolve("discriminated_payload_summary.txt"),
            families, cases, stacks);
        println("Discriminated payloads: families=" + families.size() +
            ", case layouts=" + cases.size() + ", stack targets=" + stacks.size() +
            ", output=" + directory);
    }

    private boolean candidate(Function function) {
        if (function == null || function.isExternal() || function.isThunk()) return false;
        if (messageCarrier(function) != null) return true;
        if (!hasComputedJump(function)) return false;
        List<Parameter> explicit = explicitParameters(function);
        if (explicit.size() < 2) return false;
        return explicit.stream().anyMatch(parameter ->
            parameter.getDataType() instanceof AbstractIntegerDataType ||
                parameter.getDataType() instanceof Enum);
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
                discriminator.getDataType());
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

    private Map<Long, CaseLayout> layouts(String body, String carrier, DataType discriminator) {
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
            CaseLayout layout = inferLayout(mark.value, carrier, segment);
            CaseLayout current = result.get(mark.value);
            if (current == null) result.put(mark.value, layout);
            else current.merge(layout);
        }
        return result;
    }

    private CaseLayout inferLayout(long value, String carrier, String segment) {
        CaseLayout result = new CaseLayout(value);
        Pattern reads = Pattern.compile(String.format(DEREFERENCE.pattern(),
            Pattern.quote(carrier)));
        Matcher matcher = reads.matcher(segment);
        while (matcher.find()) {
            TypeWidth width = typeWidth(matcher.group(1));
            if (width == null) continue;
            long offset = matcher.group(2) == null ? 0 : number(matcher.group(2));
            if (offset < 0 || offset > 0x10000) continue;
            result.add(offset, width.length, width.type,
                "typed dereference " + compact(matcher.group()));
        }
        Matcher loop = LOOP_COUNT.matcher(segment);
        if (loop.find() && segment.matches("(?s).*\\*\\s*\\(\\s*undefined4\\s*\\*\\s*\\)\\s*" +
                Pattern.quote(carrier) + ".*")) {
            long count = number(loop.group(1));
            if (count > 0 && count <= 0x1000) {
                result.size = Math.max(result.size, (int)count * 4);
                result.evidence.add("dword_copy_loop_count=" + count);
            }
        }
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

    private StackRow stackRow(Family family, Function caller, Instruction call,
            List<Value> pushes) {
        int explicit = explicitParameters(family.function).size();
        if (pushes.size() < explicit) return null;
        Value discriminator = pushedArgument(pushes, family.discriminator.getOrdinal());
        Value carrier = pushedArgument(pushes, family.carrier.getOrdinal());
        if (discriminator == null || carrier == null ||
                discriminator.constant == null || carrier.stackAddress == null) return null;
        CaseLayout layout = family.cases.get(discriminator.constant);
        if (layout == null || layout.size < 1 || layout.conflict) return null;
        String suffix = layout.value < 0 ? "NEG_" + Long.toHexString(-layout.value) :
            Long.toHexString(layout.value).toUpperCase(Locale.ROOT);
        String typePath = CATEGORY + "/" + family.id + "_Case_" + suffix;
        String expected = overlappingVariables(caller, carrier.stackAddress, layout.size);
        return new StackRow(true, family.id, addr(caller.getEntryPoint()),
            caller.getName(true), caller.getPrototypeString(true, true),
            addr(call.getAddress()), carrier.stackAddress, layout.size, layout.value,
            typePath, expected, "high",
            "constant discriminator and stack-address carrier reach the same direct call");
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
            if (current != null &&
                    (current.length != length || !current.type.equals(type))) {
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
            if (current == null || length > current.length)
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
    private record Field(long offset, int length, String type) { }
    private record TypeWidth(int length, String type) { }
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
