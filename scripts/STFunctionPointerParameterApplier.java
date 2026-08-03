// Apply exact function-address -> parameter -> indirect-call callback proposals.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Apply Function Pointer Parameters

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.security.MessageDigest;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Set;
import java.util.TreeSet;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.CategoryPath;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeConflictHandler;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.FunctionDefinition;
import ghidra.program.model.data.FunctionDefinitionDataType;
import ghidra.program.model.data.ParameterDefinition;
import ghidra.program.model.data.ParameterDefinitionImpl;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.PointerDataType;
import ghidra.program.model.data.TypeDef;
import ghidra.program.model.data.Undefined;
import ghidra.program.model.data.VoidDataType;
import ghidra.program.model.lang.Register;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionTag;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.scalar.Scalar;
import ghidra.program.model.symbol.SourceType;

public class STFunctionPointerParameterApplier extends GhidraScript {
    private static final String MARKER = "[STFunctionPointerParameterApplier]";
    private static final String SIGNATURE_HASH_MARKER = " signature-sha256=";
    private static final String TAG = "RECOVERED_FUNCTION_POINTER_PARAMETER";
    private static final int MAX_ARGUMENTS = 64;
    private static final int RETURN_DEFINITION_SCAN_LIMIT = 20;
    private final List<Report> report = new ArrayList<>();
    private DataTypeManager dataTypes;
    private int pointerSize;

    @Override
    protected void run() throws Exception {
        end(true);
        if (currentProgram == null) {
            printerr("Open the same program that was analyzed.");
            return;
        }
        File file = inputFile();
        if (file == null) return;
        if (file.isDirectory()) file = new File(file,
            "function_pointer_parameter_proposals.tsv");
        Tsv input = read(file.toPath());
        require(input, "apply", "function_address", "expected_function",
            "parameter_ordinal", "expected_parameter_name", "expected_storage",
            "expected_parameter_type", "expected_parameter_source",
            "expected_parameter_comment", "definition_path",
            "proposed_calling_convention", "proposed_return_type",
            "stack_parameter_count", "proposed_parameter_types", "target_addresses",
            "target_sites", "indirect_call_sites", "evidence");
        dataTypes = currentProgram.getDataTypeManager();
        pointerSize = currentProgram.getDefaultPointerSize();

        int transaction = currentProgram.startTransaction(
            "Apply recovered function-pointer parameters");
        boolean commit = false;
        try {
            for (Map<String, String> row : input.rows) {
                monitor.checkCancelled();
                apply(row);
            }
            commit = true;
        }
        finally { currentProgram.endTransaction(transaction, commit); }

        Path output = file.toPath().toAbsolutePath().normalize().resolveSibling(
            "function_pointer_parameter_apply_report.tsv");
        writeReport(output);
        println("Function-pointer parameters: applied=" + count("applied") +
            ", unchanged=" + count("unchanged") + ", preserved=" +
            count("preserved") + ", conflicts=" + count("conflict") +
            ", disabled=" + count("disabled"));
        println("Apply report: " + output);
    }

    private void apply(Map<String, String> row) {
        String targetLabel = row.get("function_address") + ":p" +
            row.get("parameter_ordinal");
        if (!enabled(row.get("apply"))) {
            report.add(new Report(targetLabel, "disabled", "apply=0"));
            return;
        }
        try {
            Function function = function(row.get("function_address"));
            if (function == null || !function.getName(true).equals(row.get("expected_function"))) {
                conflict(targetLabel, "function is missing or renamed");
                return;
            }
            int ordinal = Integer.parseInt(row.get("parameter_ordinal"));
            Parameter parameter = explicitParameter(function, ordinal);
            if (parameter == null) {
                conflict(targetLabel, "explicit parameter is missing");
                return;
            }
            if (!baseline(parameter, row)) {
                preserve(targetLabel, "parameter baseline changed");
                return;
            }
            if ((protectedSource(parameter.getSource()) ||
                    protectedSource(function.getSignatureSource()))) {
                preserve(targetLabel, "manual/imported function or parameter preserved");
                return;
            }
            if (!genericParameter(parameter) && !generatedParameter(parameter)) {
                preserve(targetLabel, "concrete parameter type preserved");
                return;
            }
            int argumentCount = Integer.parseInt(row.get("stack_parameter_count"));
            MachineAbi expected = new MachineAbi(row.get("proposed_calling_convention"),
                row.get("proposed_return_type"), argumentCount,
                row.get("proposed_parameter_types"));
            List<Function> targets = currentTargets(row.get("target_addresses"));
            if (targets.isEmpty()) {
                conflict(targetLabel, "exact target set is stale");
                return;
            }
            for (Function target : targets) {
                MachineAbi current = machineAbi(target, argumentCount);
                if (current == null || !current.key().equals(expected.key())) {
                    conflict(targetLabel, "target machine ABI changed at " +
                        addr(target.getEntryPoint()));
                    return;
                }
            }

            FunctionPointerResult recovered = functionPointer(row.get("definition_path"),
                expected, row.get("evidence"));
            boolean changed = recovered.changed;
            if (!parameter.getDataType().isEquivalent(recovered.pointer)) {
                parameter.setDataType(recovered.pointer, SourceType.ANALYSIS);
                function.setSignatureSource(SourceType.ANALYSIS);
                changed = true;
            }
            String comment = MARKER + " exact function-address argument and indirect-call " +
                "chain; targets=" + row.get("target_addresses");
            String oldComment = text(parameter.getComment());
            String newComment = parameterComment(oldComment, comment);
            if (!oldComment.equals(newComment)) {
                parameter.setComment(newComment);
                changed = true;
            }
            if (!hasTag(function, TAG)) {
                function.addTag(TAG);
                changed = true;
            }
            report.add(new Report(targetLabel, changed ? "applied" : "unchanged",
                changed ? "installed " + row.get("definition_path") + " from " +
                    targets.size() + " ABI-compatible exact target(s)" :
                    "recovered function-pointer parameter already present"));
        }
        catch (Exception exception) { conflict(targetLabel, message(exception)); }
    }

    private FunctionPointerResult functionPointer(String path, MachineAbi abi, String evidence)
            throws Exception {
        int separator = path.lastIndexOf('/');
        if (separator <= 0 || separator == path.length() - 1)
            throw new IllegalArgumentException("invalid definition path " + path);
        if (abi.argumentCount < 0 || abi.argumentCount > MAX_ARGUMENTS)
            throw new IllegalArgumentException("invalid callback argument count " +
                abi.argumentCount);
        String[] specifications = abi.argumentCount == 0 ? new String[0] :
            abi.parameterTypes.split(";", -1);
        if (specifications.length != abi.argumentCount)
            throw new IllegalArgumentException("callback parameter-type count mismatch");
        CategoryPath category = new CategoryPath(path.substring(0, separator));
        String name = path.substring(separator + 1);
        FunctionDefinitionDataType desired = new FunctionDefinitionDataType(
            category, name, dataTypes);
        desired.setCallingConvention(abi.convention);
        DataType returned = resolveType(abi.returnType);
        if (returned == null) throw new IllegalArgumentException("missing callback return type");
        desired.setReturnType(returned);
        ParameterDefinition[] arguments = new ParameterDefinition[abi.argumentCount];
        for (int index = 0; index < arguments.length; index++) {
            DataType type = resolveType(specifications[index]);
            if (type == null || type.getLength() != pointerSize)
                throw new IllegalArgumentException("missing/non-word callback argument type " +
                    specifications[index]);
            arguments[index] = new ParameterDefinitionImpl("arg_" + (index + 1), type,
                "/undefined4".equals(specifications[index]) ?
                    "neutral ABI word; semantics unresolved" :
                    "type retained by every independently trusted exact target");
        }
        desired.setArguments(arguments);
        String desiredHash = functionDefinitionHash(desired);
        desired.setComment(MARKER + " Machine ABI recovered from exact function-address " +
            "arguments; " + evidence + SIGNATURE_HASH_MARKER + desiredHash);

        DataType existing = dataTypes.getDataType(path);
        DataType definition;
        boolean changed = false;
        if (existing == null) {
            definition = dataTypes.resolve(desired, DataTypeConflictHandler.KEEP_HANDLER);
            if (!definition.getPathName().equals(path))
                throw new IllegalStateException("definition path was occupied: " + path);
            changed = true;
        }
        else if (existing instanceof FunctionDefinition current) {
            if (!text(current.getComment()).contains(MARKER))
                throw new IllegalArgumentException("manual function definition preserved");
            String storedHash = storedSignatureHash(current.getComment());
            String currentHash = functionDefinitionHash(current);
            if (storedHash == null || !storedHash.equals(currentHash))
                throw new IllegalArgumentException(
                    "edited generated function definition preserved");
            if (!current.isEquivalentSignature(desired)) {
                current.replaceWith(desired);
                changed = true;
            }
            if (!text(current.getComment()).equals(desired.getComment())) {
                current.setComment(desired.getComment());
                changed = true;
            }
            definition = current;
        }
        else throw new IllegalArgumentException(
            "definition name is occupied by a non-function type");
        return new FunctionPointerResult(
            new PointerDataType(definition, pointerSize, dataTypes), changed);
    }

    private MachineAbi machineAbi(Function target, int observedArguments) {
        if (target == null || observedArguments < 0 || observedArguments > MAX_ARGUMENTS ||
                target.hasVarArgs() || usesIncomingEcx(target)) return null;
        Set<Long> pops = returnPops(target);
        if (pops.size() != 1) return null;
        long bytes = pops.iterator().next();
        if (bytes < 0 || bytes > (long)MAX_ARGUMENTS * pointerSize ||
                bytes % pointerSize != 0) return null;
        String convention;
        if (bytes == 0) convention = "__cdecl";
        else {
            if (bytes / pointerSize != observedArguments) return null;
            convention = "__stdcall";
        }
        List<String> parameters = new ArrayList<>();
        for (int index = 0; index < observedArguments; index++)
            parameters.add(trustedParameterType(target, index));
        return new MachineAbi(convention, machineReturnType(target), observedArguments,
            String.join(";", parameters));
    }

    private String trustedParameterType(Function function, int index) {
        if (!trustedAbi(function) || !validStackShape(function)) return "/undefined4";
        for (Parameter parameter : stackParameters(function)) {
            int offset = parameter.getStackOffset();
            DataType type = parameter.getFormalDataType();
            if (offset >= pointerSize && offset % pointerSize == 0 &&
                    offset / pointerSize - 1 == index && type != null &&
                    type.getLength() == pointerSize) return typeSpec(type);
        }
        return "/undefined4";
    }

    private boolean validStackShape(Function function) {
        Set<Integer> occupied = new HashSet<>();
        for (Parameter parameter : stackParameters(function)) {
            int offset = parameter.getStackOffset();
            DataType type = parameter.getFormalDataType();
            int length = type == null ? -1 : type.getLength();
            if (offset < pointerSize || offset % pointerSize != 0 || length < 0)
                return false;
            int index = offset / pointerSize - 1;
            int words = Math.max(1, (length + pointerSize - 1) / pointerSize);
            if (index < 0 || index + words > MAX_ARGUMENTS) return false;
            for (int slot = index; slot < index + words; slot++)
                if (!occupied.add(slot)) return false;
        }
        return true;
    }

    private boolean trustedAbi(Function function) {
        if (function.getSignatureSource() == SourceType.IMPORTED) return true;
        for (FunctionTag tag : function.getTags()) {
            String name = tag.getName();
            if (name.equals("RECOVERED_ABI_CONSISTENCY") ||
                    name.equals("RECOVERED_CALLSITE_CONVENTION") ||
                    name.equals("RECOVERED_HEURISTIC_SIGNATURE") ||
                    name.equals("RECOVERED_PROTOTYPE") ||
                    name.equals("RECOVERED_UTILITY_SEMANTICS") ||
                    name.startsWith("RECOVERED_UTILITY_")) return true;
        }
        return false;
    }

    private Set<Long> returnPops(Function function) {
        Set<Long> result = new TreeSet<>();
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            if (!mnemonic.equals("RET") && !mnemonic.equals("RETF")) continue;
            Scalar scalar = instruction.getScalar(0);
            result.add(scalar == null ? 0L : scalar.getUnsignedValue());
        }
        return result;
    }

    private boolean usesIncomingEcx(Function function) {
        boolean live = true;
        int count = 0;
        String previous = "", beforePrevious = "";
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext() && count++ < 256 && live) {
            Instruction instruction = instructions.next();
            String rendered = instruction.toString().toUpperCase(Locale.ROOT);
            boolean scratch = "PUSH ECX".equals(rendered) &&
                "MOV EBP,ESP".equals(previous) && "PUSH EBP".equals(beforePrevious);
            for (Object input : instruction.getInputObjects())
                if (input instanceof Register register &&
                        "ECX".equals(register.getName().toUpperCase(Locale.ROOT)) && !scratch)
                    return true;
            for (Object output : instruction.getResultObjects())
                if (output instanceof Register register &&
                        "ECX".equals(register.getName().toUpperCase(Locale.ROOT))) live = false;
            beforePrevious = previous;
            previous = rendered;
        }
        return false;
    }

    private String machineReturnType(Function function) {
        if (definitelyVoid(function)) return "/void";
        Set<Integer> widths = new TreeSet<>();
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            if (!mnemonic.equals("RET") && !mnemonic.equals("RETF")) continue;
            Instruction prior = currentProgram.getListing()
                .getInstructionBefore(instruction.getAddress());
            int width = 0;
            for (int scanned = 0; scanned < RETURN_DEFINITION_SCAN_LIMIT && prior != null &&
                    function.getBody().contains(prior.getAddress()); scanned++) {
                width = accumulatorWriteWidth(prior);
                if (width > 0) break;
                String priorMnemonic = prior.getMnemonicString().toUpperCase(Locale.ROOT);
                if ("CALL".equals(priorMnemonic) || priorMnemonic.startsWith("J")) break;
                prior = currentProgram.getListing().getInstructionBefore(prior.getAddress());
            }
            if (width == 0) return "/undefined4";
            widths.add(width);
        }
        int analyzedWidth = function.getReturnType() == null ? -1 :
            function.getReturnType().getLength();
        if (widths.equals(Set.of(1)) && analyzedWidth == 1) return "/undefined1";
        if (widths.equals(Set.of(2)) && analyzedWidth == 2) return "/undefined2";
        return "/undefined4";
    }

    private int accumulatorWriteWidth(Instruction instruction) {
        int result = 0;
        for (Object output : instruction.getResultObjects()) {
            if (!(output instanceof Register register)) continue;
            String name = register.getName().toUpperCase(Locale.ROOT);
            if (name.equals("EAX") || name.equals("RAX")) result = Math.max(result, 4);
            else if (name.equals("AX")) result = Math.max(result, 2);
            else if (name.equals("AL") || name.equals("AH")) result = Math.max(result, 1);
        }
        return result;
    }

    private boolean definitelyVoid(Function function) {
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            if (instruction.getFlowType().isCall()) return false;
            for (Object output : instruction.getResultObjects()) {
                if (!(output instanceof Register register)) continue;
                String name = register.getName().toUpperCase(Locale.ROOT);
                if (Set.of("EAX", "AX", "AL", "AH").contains(name)) return false;
            }
        }
        return true;
    }

    private List<Function> currentTargets(String value) {
        List<Function> result = new ArrayList<>();
        Set<Address> seen = new TreeSet<>();
        for (String token : text(value).split("\\|")) {
            Function target = resolveThunk(function(token.trim()));
            if (target != null && seen.add(target.getEntryPoint())) result.add(target);
        }
        return result;
    }

    private Function function(String address) {
        Address value = currentProgram.getAddressFactory().getAddress(address);
        return value == null ? null : currentProgram.getFunctionManager().getFunctionAt(value);
    }

    private Function resolveThunk(Function function) {
        Set<Address> seen = new HashSet<>();
        while (function != null && function.isThunk() && seen.add(function.getEntryPoint())) {
            Function target = function.getThunkedFunction(false);
            if (target == null || target.equals(function)) break;
            function = target;
        }
        return function;
    }

    private List<Parameter> stackParameters(Function function) {
        List<Parameter> result = new ArrayList<>();
        for (Parameter parameter : function.getParameters())
            if (!parameter.isAutoParameter() && parameter.isStackVariable()) result.add(parameter);
        result.sort((left, right) -> Integer.compare(left.getOrdinal(), right.getOrdinal()));
        return result;
    }

    private Parameter explicitParameter(Function function, int ordinal) {
        for (Parameter parameter : function.getParameters())
            if (!parameter.isAutoParameter() && parameter.getOrdinal() == ordinal)
                return parameter;
        return null;
    }

    private boolean baseline(Parameter parameter, Map<String, String> row) {
        return text(parameter.getName()).equals(row.get("expected_parameter_name")) &&
            parameter.getVariableStorage().toString().equals(row.get("expected_storage")) &&
            typeSpec(parameter.getDataType()).equals(row.get("expected_parameter_type")) &&
            parameter.getSource().toString().equals(row.get("expected_parameter_source")) &&
            text(parameter.getComment()).equals(row.get("expected_parameter_comment"));
    }

    private boolean genericParameter(Parameter parameter) {
        DataType type = unwrap(parameter.getFormalDataType());
        if (type instanceof Undefined) return type.getLength() == pointerSize;
        if (!(type instanceof Pointer pointer)) return false;
        DataType pointed = unwrap(pointer.getDataType());
        return pointed == null || pointed instanceof VoidDataType || pointed instanceof Undefined;
    }

    private boolean generatedParameter(Parameter parameter) {
        DataType type = unwrap(parameter.getFormalDataType());
        return type instanceof Pointer pointer &&
            unwrap(pointer.getDataType()) instanceof FunctionDefinition definition &&
            text(definition.getComment()).contains(MARKER);
    }

    private DataType unwrap(DataType type) {
        Set<String> seen = new HashSet<>();
        while (type instanceof TypeDef typeDef && seen.add(type.getPathName()))
            type = typeDef.getBaseDataType();
        return type;
    }

    private DataType resolveType(String specification) {
        if (specification == null || specification.isBlank()) return null;
        if ("/void".equals(specification)) return VoidDataType.dataType;
        if (specification.matches("/undefined[1248]"))
            return Undefined.getUndefinedDataType(
                Integer.parseInt(specification.substring("/undefined".length())));
        if (specification.startsWith("pointer:")) {
            DataType pointed = resolveType(specification.substring("pointer:".length()));
            return pointed == null ? null : new PointerDataType(pointed, pointerSize, dataTypes);
        }
        return dataTypes.getDataType(specification);
    }

    private String typeSpec(DataType type) {
        if (type instanceof Pointer pointer && pointer.getDataType() != null)
            return "pointer:" + typeSpec(pointer.getDataType());
        return type == null ? "" : type.getPathName();
    }

    private String functionDefinitionHash(FunctionDefinition definition) {
        StringBuilder value = new StringBuilder();
        value.append("calling_convention=")
            .append(text(definition.getCallingConventionName())).append('\n')
            .append("return=").append(typeSpec(definition.getReturnType())).append('\n')
            .append("varargs=").append(definition.hasVarArgs()).append('\n')
            .append("noreturn=").append(definition.hasNoReturn()).append('\n');
        for (ParameterDefinition parameter : definition.getArguments())
            value.append("argument=").append(parameter.getOrdinal()).append('|')
                .append(text(parameter.getName())).append('|')
                .append(typeSpec(parameter.getDataType())).append('|')
                .append(text(parameter.getComment())).append('\n');
        return sha256(value.toString());
    }

    private String storedSignatureHash(String comment) {
        String value = text(comment);
        int index = value.lastIndexOf(SIGNATURE_HASH_MARKER);
        if (index < 0) return null;
        String hash = value.substring(index + SIGNATURE_HASH_MARKER.length()).trim();
        if (hash.length() < 64) return null;
        hash = hash.substring(0, 64).toLowerCase(Locale.ROOT);
        return hash.matches("[0-9a-f]{64}") ? hash : null;
    }

    private String sha256(String value) {
        try {
            byte[] digest = MessageDigest.getInstance("SHA-256")
                .digest(value.getBytes(StandardCharsets.UTF_8));
            StringBuilder result = new StringBuilder();
            for (byte item : digest) result.append(String.format("%02x", item & 0xff));
            return result.toString();
        }
        catch (Exception exception) {
            throw new IllegalStateException("SHA-256 unavailable", exception);
        }
    }

    private boolean protectedSource(SourceType source) {
        return source == SourceType.USER_DEFINED || source == SourceType.IMPORTED;
    }

    private String parameterComment(String current, String generated) {
        List<String> retained = new ArrayList<>();
        for (String line : text(current).split("\\R", -1))
            if (!line.startsWith(MARKER) && !line.isBlank()) retained.add(line);
        retained.add(generated);
        return String.join("\n", retained);
    }

    private boolean hasTag(Function function, String name) {
        for (FunctionTag tag : function.getTags())
            if (name.equals(tag.getName())) return true;
        return false;
    }

    private File inputFile() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless()) throw new IllegalArgumentException(
            "Path to function_pointer_parameter_proposals.tsv is required");
        return askFile("Select function_pointer_parameter_proposals.tsv", "Apply");
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
                row.put(header[column], unclean(values[column]));
            rows.add(row);
        }
        return new Tsv(List.of(header), rows);
    }

    private void require(Tsv input, String... columns) {
        for (String column : columns)
            if (!input.header.contains(column))
                throw new IllegalArgumentException("Missing TSV column: " + column);
    }

    private void writeReport(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("target\tstatus\tdetail\n");
            for (Report row : report)
                out.write(clean(row.target) + "\t" + row.status + "\t" +
                    clean(row.detail) + "\n");
        }
    }

    private void preserve(String target, String detail) {
        report.add(new Report(target, "preserved", detail));
    }
    private void conflict(String target, String detail) {
        report.add(new Report(target, "conflict", detail));
    }
    private long count(String status) {
        return report.stream().filter(row -> row.status.equals(status)).count();
    }
    private static boolean enabled(String value) {
        return "1".equals(value) || "true".equalsIgnoreCase(value);
    }
    private static String addr(Address address) {
        return address == null ? "" : address.toString().toUpperCase(Locale.ROOT);
    }
    private static String text(String value) { return value == null ? "" : value; }
    private static String clean(String value) {
        return text(value).replace("\\", "\\\\").replace("\t", "\\t")
            .replace("\r", "\\r").replace("\n", "\\n");
    }
    private static String unclean(String value) {
        StringBuilder out = new StringBuilder();
        boolean escaped = false;
        for (char ch : text(value).toCharArray()) {
            if (!escaped && ch == '\\') { escaped = true; continue; }
            if (escaped) {
                out.append(ch == 't' ? '\t' : ch == 'r' ? '\r' : ch == 'n' ? '\n' : ch);
                escaped = false;
            }
            else out.append(ch);
        }
        if (escaped) out.append('\\');
        return out.toString();
    }
    private static String message(Throwable throwable) {
        return throwable.getMessage() == null ? throwable.getClass().getSimpleName() :
            throwable.getMessage();
    }

    private record MachineAbi(String convention, String returnType, int argumentCount,
        String parameterTypes) {
        String key() {
            return convention + ";" + returnType + ";" + argumentCount + ";" + parameterTypes;
        }
    }
    private record FunctionPointerResult(DataType pointer, boolean changed) { }
    private record Report(String target, String status, String detail) { }
    private record Tsv(List<String> header, List<Map<String, String>> rows) { }
}
