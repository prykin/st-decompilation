// Recover x86 ABI details which are visible in machine code but easy to lose in propagated C types.
// Read-only: writes abi_consistency_proposals.tsv and abi_consistency_summary.txt.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Analyze ABI Consistency

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.HashSet;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Set;
import java.util.TreeMap;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.AbstractIntegerDataType;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.TypeDef;
import ghidra.program.model.data.Undefined;
import ghidra.program.model.lang.Register;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.FunctionTag;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Listing;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.symbol.SourceType;

public class STAbiConsistencyAnalyzer extends GhidraScript {
    private static final String SETJMP3 = "0072D7F0";
    private static final String LOAD_RESOURCE_STRING = "006B0140";
    private static final int CALL_USE_SCAN_LIMIT = 8;
    private static final int RETURN_DEFINITION_SCAN_LIMIT = 12;
    private static final Pattern STACK_MEMORY = Pattern.compile(
        "^\\[EBP(?:([+-])(0X[0-9A-F]+|[0-9]+))?\\]$");

    private Listing listing;
    private int pointerSize;
    private final Map<Address, ReturnUse> returnUses = new TreeMap<>();

    @Override
    protected void run() throws Exception {
        // Read-only script: do not leave GhidraScript's implicit transaction around runScript().
        end(true);
        if (currentProgram == null) {
            printerr("Open the analyzed ST program first.");
            return;
        }
        File selected = outputDirectory();
        if (selected == null) return;
        Path directory = programDirectory(selected);
        Files.createDirectories(directory);
        listing = currentProgram.getListing();
        pointerSize = currentProgram.getDefaultPointerSize();

        collectReturnUses();
        List<Row> rows = new ArrayList<>();
        addKnownRepairs(rows);

        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        int functionsSeen = 0;
        while (functions.hasNext()) {
            monitor.checkCancelled();
            Function function = functions.next();
            if (function.isExternal() || function.isThunk() || isLibrary(function)) continue;
            functionsSeen++;
            addReturnWidthRepair(function, rows);
            addParameterWidthRepairs(function, rows);
        }
        rows.sort(Comparator.comparing((Row row) -> row.functionAddress)
            .thenComparing(row -> row.targetKind)
            .thenComparingInt(row -> row.targetOrdinal));

        writeRows(directory.resolve("abi_consistency_proposals.tsv"), rows);
        writeSummary(directory.resolve("abi_consistency_summary.txt"), functionsSeen, rows);
        println("ABI consistency analysis complete: " + directory.toAbsolutePath().normalize());
        println("Proposals=" + rows.size() + ", automatic=" +
            rows.stream().filter(row -> row.apply).count());
    }

    private void collectReturnUses() throws Exception {
        FunctionIterator callers = currentProgram.getFunctionManager().getFunctions(true);
        while (callers.hasNext()) {
            monitor.checkCancelled();
            Function caller = callers.next();
            if (caller.isExternal()) continue;
            InstructionIterator instructions = listing.getInstructions(caller.getBody(), true);
            while (instructions.hasNext()) {
                Instruction call = instructions.next();
                if (!"CALL".equalsIgnoreCase(call.getMnemonicString())) continue;
                Function called = directCalledFunction(call);
                if (called == null) continue;
                called = resolveThunk(called);
                if (called == null) continue;
                RegisterUse use = firstAccumulatorUse(caller, call);
                if (use.width == 0) continue;
                ReturnUse aggregate = returnUses.computeIfAbsent(called.getEntryPoint(),
                    ignored -> new ReturnUse());
                if (use.width >= 4) aggregate.full++;
                else aggregate.narrow++;
                if (aggregate.sites.size() < 24)
                    aggregate.sites.add(addr(caller.getEntryPoint()) + " @ " +
                        addr(call.getAddress()) + " -> " + use.evidence);
            }
        }
    }

    private RegisterUse firstAccumulatorUse(Function caller, Instruction call) {
        Instruction instruction = listing.getInstructionAfter(call.getAddress());
        for (int count = 0; count < CALL_USE_SCAN_LIMIT && instruction != null &&
                caller.getBody().contains(instruction.getAddress()); count++) {
            int input = accumulatorWidth(instruction.getInputObjects());
            if (input > 0)
                return new RegisterUse(input, instruction.getMnemonicString().toUpperCase(Locale.ROOT) +
                    " " + instruction.toString());
            if (accumulatorWidth(instruction.getResultObjects()) > 0 ||
                    "CALL".equalsIgnoreCase(instruction.getMnemonicString())) break;
            instruction = listing.getInstructionAfter(instruction.getAddress());
        }
        return new RegisterUse(0, "");
    }

    private int accumulatorWidth(Object[] objects) {
        int width = 0;
        for (Object object : objects) {
            if (!(object instanceof Register register)) continue;
            String name = register.getName().toUpperCase(Locale.ROOT);
            if (name.equals("EAX") || name.equals("RAX")) width = Math.max(width, 4);
            else if (name.equals("AX")) width = Math.max(width, 2);
            else if (name.equals("AL") || name.equals("AH")) width = Math.max(width, 1);
        }
        return width;
    }

    private void addKnownRepairs(List<Row> rows) {
        Function setjmp = functionAt(SETJMP3);
        if (setjmp != null && !matchesFullPrototype(setjmp, "/int", "__cdecl", true,
                List.of("pointer:/int", "/int"))) {
            rows.add(Row.full(setjmp, "known_setjmp3", true, "/int", "__cdecl", true,
                "pointer:/int;/int", "env;count", "high",
                "MSVC _setjmp3 has two fixed arguments followed by optional unwind metadata; " +
                "call sites push env and count only"));
        }

        Function loadString = functionAt(LOAD_RESOURCE_STRING);
        if (loadString != null && !"pointer:/char".equals(typeSpec(loadString.getReturnType()))) {
            rows.add(Row.target(loadString, "known_load_resource_string", true, "return", -1,
                loadString.getReturn(), "", "pointer:/char", "high",
                "the helper computes the ring-buffer address in EAX and callers consume that " +
                "address immediately; 572 exported calls depend on the value"));
        }
    }

    private void addReturnWidthRepair(Function function, List<Row> rows) {
        Parameter returned = function.getReturn();
        if (manual(returned.getSource()) || hasTag(function, "RECOVERED_ABI_CONSISTENCY")) return;
        DataType current = unwrap(returned.getDataType());
        if (current == null || current.getLength() < 1 || current.getLength() >= 4 ||
                current instanceof Pointer) return;
        ReturnUse use = returnUses.get(function.getEntryPoint());
        if (use == null || use.full == 0 || use.narrow != 0 || !allReturnsDefineFullAccumulator(function))
            return;
        if (!(current instanceof AbstractIntegerDataType) &&
                !current.getName().equalsIgnoreCase("bool")) return;
        rows.add(Row.target(function, "full_eax_return", true, "return", -1, returned,
            "", "/int", "high", "all observed callers consume full EAX (" + use.full +
            "), none consume AL/AX, and every RET path defines full EAX; sites=" +
            String.join(" | ", use.sites)));
    }

    private boolean allReturnsDefineFullAccumulator(Function function) {
        InstructionIterator instructions = listing.getInstructions(function.getBody(), true);
        int returns = 0;
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            if (!instruction.getMnemonicString().toUpperCase(Locale.ROOT).startsWith("RET")) continue;
            returns++;
            Instruction prior = listing.getInstructionBefore(instruction.getAddress());
            boolean full = false;
            for (int count = 0; count < RETURN_DEFINITION_SCAN_LIMIT && prior != null &&
                    function.getBody().contains(prior.getAddress()); count++) {
                int width = accumulatorWidth(prior.getResultObjects());
                if (width >= 4) { full = true; break; }
                String mnemonic = prior.getMnemonicString().toUpperCase(Locale.ROOT);
                if ("CALL".equals(mnemonic) || mnemonic.startsWith("J")) break;
                prior = listing.getInstructionBefore(prior.getAddress());
            }
            if (!full) return false;
        }
        return returns > 0;
    }

    private void addParameterWidthRepairs(Function function, List<Row> rows) {
        for (Parameter parameter : function.getParameters()) {
            if (parameter.isAutoParameter() || !parameter.isStackVariable() ||
                    manual(parameter.getSource()) || !genericDword(parameter.getFormalDataType())) continue;
            WidthEvidence evidence = parameterWidth(function, parameter);
            if (evidence == null || evidence.proposedType.isBlank() || evidence.conflict) continue;
            if (evidence.proposedType.equals(typeSpec(parameter.getFormalDataType()))) continue;
            rows.add(Row.target(function, "stack_parameter_width", true, "parameter",
                parameter.getOrdinal(), parameter, parameter.getName(), evidence.proposedType,
                "high", evidence.reason));
        }
    }

    private WidthEvidence parameterWidth(Function function, Parameter parameter) {
        long expectedOffset = (long)parameter.getStackOffset() + pointerSize;
        Set<String> candidates = new HashSet<>();
        List<String> sites = new ArrayList<>();
        int unmaskedDwordReads = 0;
        InstructionIterator instructions = listing.getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            for (int operandIndex = 0; operandIndex < instruction.getNumOperands(); operandIndex++) {
                String source = instruction.getDefaultOperandRepresentation(operandIndex);
                Long offset = stackOffset(source);
                if (offset == null || offset != expectedOffset) continue;
                String upperSource = source.toUpperCase(Locale.ROOT);
                String proposed = "";
                boolean sourceOperand = operandIndex == 1;
                if (sourceOperand && "MOVSX".equals(mnemonic)) {
                    if (upperSource.contains("BYTE PTR")) proposed = "/char";
                    else if (upperSource.contains("WORD PTR")) proposed = "/short";
                }
                else if (sourceOperand && "MOVZX".equals(mnemonic)) {
                    if (upperSource.contains("BYTE PTR")) proposed = "/byte";
                    else if (upperSource.contains("WORD PTR")) proposed = "/ushort";
                }
                else if (sourceOperand && "MOV".equals(mnemonic) &&
                        upperSource.contains("DWORD PTR")) {
                    proposed = maskedLoadType(instruction);
                    if (proposed.isBlank()) unmaskedDwordReads++;
                }
                else if (upperSource.contains("DWORD PTR")) unmaskedDwordReads++;
                if (!proposed.isBlank()) {
                    candidates.add(proposed);
                    if (sites.size() < 12) sites.add(addr(instruction.getAddress()) + " " +
                        instruction.toString() +
                        ("MOV".equals(mnemonic) ? "; immediate mask" : ""));
                }
            }
        }
        if (candidates.isEmpty()) return null;
        boolean conflict = candidates.size() != 1 || unmaskedDwordReads != 0;
        String proposed = candidates.size() == 1 ? candidates.iterator().next() : "";
        return new WidthEvidence(proposed, conflict, "entry-use width=" + proposed +
            "; unmasked_dword_reads=" + unmaskedDwordReads + "; evidence=" +
            String.join(" | ", sites));
    }

    private String maskedLoadType(Instruction load) {
        String destination = load.getDefaultOperandRepresentation(0).trim().toUpperCase(Locale.ROOT);
        if (!destination.matches("E?(?:AX|BX|CX|DX|SI|DI)")) return "";
        Instruction next = listing.getInstructionAfter(load.getAddress());
        if (next == null || !"AND".equalsIgnoreCase(next.getMnemonicString()) ||
                next.getNumOperands() < 2 ||
                !destination.equals(next.getDefaultOperandRepresentation(0).trim().toUpperCase(Locale.ROOT)))
            return "";
        Long mask = immediate(next.getDefaultOperandRepresentation(1));
        if (mask == null) return "";
        if (mask == 0xffL) return "/byte";
        if (mask == 0xffffL) return "/ushort";
        return "";
    }

    private Long stackOffset(String operand) {
        String value = operand.toUpperCase(Locale.ROOT).replace("BYTE PTR", "")
            .replace("WORD PTR", "").replace("DWORD PTR", "")
            .replace("QWORD PTR", "").replace(" ", "");
        Matcher matcher = STACK_MEMORY.matcher(value);
        if (!matcher.matches()) return null;
        if (matcher.group(2) == null) return 0L;
        Long parsed = immediate(matcher.group(2));
        if (parsed == null) return null;
        return "-".equals(matcher.group(1)) ? -parsed : parsed;
    }

    private Function directCalledFunction(Instruction instruction) {
        for (Address flow : instruction.getFlows()) {
            Function function = currentProgram.getFunctionManager().getFunctionAt(flow);
            if (function != null) return function;
        }
        return null;
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

    private Function functionAt(String address) {
        Address parsed = currentProgram.getAddressFactory().getAddress(address);
        return parsed == null ? null : currentProgram.getFunctionManager().getFunctionAt(parsed);
    }

    private boolean matchesFullPrototype(Function function, String returnType, String convention,
            boolean varargs, List<String> parameters) {
        if (!returnType.equals(typeSpec(function.getReturnType())) ||
                !convention.equals(function.getCallingConventionName()) ||
                varargs != function.hasVarArgs()) return false;
        List<Parameter> explicit = explicitParameters(function);
        if (explicit.size() != parameters.size()) return false;
        for (int index = 0; index < explicit.size(); index++)
            if (!parameters.get(index).equals(typeSpec(explicit.get(index).getFormalDataType())))
                return false;
        return true;
    }

    private List<Parameter> explicitParameters(Function function) {
        List<Parameter> result = new ArrayList<>();
        for (Parameter parameter : function.getParameters())
            if (!parameter.isAutoParameter()) result.add(parameter);
        return result;
    }

    private boolean genericDword(DataType type) {
        DataType current = unwrap(type);
        if (current == null || current.getLength() != 4 || current instanceof Pointer) return false;
        return Undefined.isUndefined(current) || current instanceof AbstractIntegerDataType ||
            Set.of("dword", "undefined4").contains(current.getName().toLowerCase(Locale.ROOT));
    }

    private DataType unwrap(DataType type) {
        Set<String> seen = new HashSet<>();
        while (type instanceof TypeDef typedef && seen.add(type.getPathName()))
            type = typedef.getBaseDataType();
        return type;
    }

    private String typeSpec(DataType type) {
        if (type instanceof Pointer pointer && pointer.getDataType() != null)
            return "pointer:" + typeSpec(pointer.getDataType());
        return type == null ? "" : type.getPathName();
    }

    private boolean isLibrary(Function function) {
        for (FunctionTag tag : function.getTags())
            if (tag.getName().equals("LIBRARY") || tag.getName().startsWith("LIBRARY_")) return true;
        return false;
    }
    private boolean hasTag(Function function, String name) {
        for (FunctionTag tag : function.getTags()) if (name.equals(tag.getName())) return true;
        return false;
    }
    private boolean manual(SourceType source) {
        return source == SourceType.USER_DEFINED || source == SourceType.IMPORTED;
    }
    private Long immediate(String operand) {
        String value = operand.trim().toUpperCase(Locale.ROOT).replace("+", "");
        try {
            if (value.startsWith("0X")) return Long.parseUnsignedLong(value.substring(2), 16);
            if (value.matches("[0-9A-F]+H"))
                return Long.parseUnsignedLong(value.substring(0, value.length() - 1), 16);
            if (value.matches("[0-9]+")) return Long.parseLong(value);
        }
        catch (NumberFormatException ignored) { }
        return null;
    }

    private void writeRows(Path path, List<Row> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\trepair_kind\tfunction_address\texpected_function\t" +
                "expected_signature\texpected_signature_source\ttarget_kind\ttarget_ordinal\t" +
                "expected_target_name\texpected_target_type\texpected_target_source\t" +
                "proposed_name\tproposed_type\tproposed_convention\tproposed_varargs\t" +
                "proposed_parameter_types\tproposed_parameter_names\tconfidence\tevidence\n");
            for (Row row : rows) out.write((row.apply ? "1" : "0") + "\t" + row.repairKind +
                "\t" + row.functionAddress + "\t" + tsv(row.expectedFunction) + "\t" +
                tsv(row.expectedSignature) + "\t" + row.expectedSignatureSource + "\t" +
                row.targetKind + "\t" + row.targetOrdinal + "\t" +
                tsv(row.expectedTargetName) + "\t" + row.expectedTargetType + "\t" +
                row.expectedTargetSource + "\t" + tsv(row.proposedName) + "\t" +
                row.proposedType + "\t" + row.proposedConvention + "\t" +
                row.proposedVarargs + "\t" + row.proposedParameterTypes + "\t" +
                tsv(row.proposedParameterNames) + "\t" + row.confidence + "\t" +
                tsv(row.evidence) + "\n");
        }
    }

    private void writeSummary(Path path, int functions, List<Row> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("ST x86 ABI consistency\n\nFunctions scanned: " + functions +
                "\nProposals: " + rows.size() + "\nAutomatic: " +
                rows.stream().filter(row -> row.apply).count() + "\n");
            for (String kind : List.of("known_setjmp3", "known_load_resource_string",
                    "full_eax_return", "stack_parameter_width"))
                out.write(kind + ": " + rows.stream().filter(row ->
                    row.repairKind.equals(kind)).count() + "\n");
            out.write("note=USER_DEFINED and IMPORTED target types are never selected for automatic repair.\n");
            out.write("note_returns=Full-EAX repairs require full-width caller use and a full EAX definition on every RET path.\n");
            out.write("note_parameters=Narrow stack parameters require consistent MOVSX/MOVZX or an immediate AND mask and no unmasked dword reads.\n");
        }
    }

    private File outputDirectory() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless()) throw new IllegalArgumentException("Recovery directory required");
        return askDirectory("Select recovery output directory", "Select");
    }
    private Path programDirectory(File selected) {
        Path root = selected.toPath().toAbsolutePath().normalize();
        return root.getFileName() != null && root.getFileName().toString().equals(currentProgram.getName()) ?
            root : root.resolve(currentProgram.getName());
    }
    private static String addr(Address address) {
        return address == null ? "" : address.toString().toUpperCase(Locale.ROOT);
    }
    private static String tsv(String value) {
        return value == null ? "" : value.replace("\\", "\\\\").replace("\t", "\\t")
            .replace("\r", "\\r").replace("\n", "\\n");
    }

    private static class ReturnUse {
        int full, narrow;
        final List<String> sites = new ArrayList<>();
    }
    private record RegisterUse(int width, String evidence) { }
    private record WidthEvidence(String proposedType, boolean conflict, String reason) { }
    private static class Row {
        final boolean apply;
        final String repairKind, functionAddress, expectedFunction, expectedSignature;
        final String expectedSignatureSource, targetKind;
        final int targetOrdinal;
        final String expectedTargetName, expectedTargetType, expectedTargetSource;
        final String proposedName, proposedType, proposedConvention;
        final boolean proposedVarargs;
        final String proposedParameterTypes, proposedParameterNames, confidence, evidence;

        Row(boolean apply, String repairKind, Function function, String targetKind,
                int targetOrdinal, String expectedTargetName, String expectedTargetType,
                String expectedTargetSource, String proposedName, String proposedType,
                String proposedConvention, boolean proposedVarargs,
                String proposedParameterTypes, String proposedParameterNames,
                String confidence, String evidence) {
            this.apply = apply; this.repairKind = repairKind;
            this.functionAddress = addr(function.getEntryPoint());
            this.expectedFunction = function.getName(true);
            this.expectedSignature = function.getSignature().getPrototypeString(true);
            this.expectedSignatureSource = function.getSignatureSource().toString();
            this.targetKind = targetKind; this.targetOrdinal = targetOrdinal;
            this.expectedTargetName = expectedTargetName;
            this.expectedTargetType = expectedTargetType;
            this.expectedTargetSource = expectedTargetSource;
            this.proposedName = proposedName; this.proposedType = proposedType;
            this.proposedConvention = proposedConvention;
            this.proposedVarargs = proposedVarargs;
            this.proposedParameterTypes = proposedParameterTypes;
            this.proposedParameterNames = proposedParameterNames;
            this.confidence = confidence; this.evidence = evidence;
        }

        static Row target(Function function, String kind, boolean apply, String targetKind,
                int ordinal, Parameter target, String proposedName, String proposedType,
                String confidence, String evidence) {
            return new Row(apply, kind, function, targetKind, ordinal, target.getName(),
                typeSpecStatic(target.getFormalDataType()), target.getSource().toString(),
                proposedName, proposedType, "", false, "", "", confidence, evidence);
        }
        static Row full(Function function, String kind, boolean apply, String returnType,
                String convention, boolean varargs, String parameterTypes,
                String parameterNames, String confidence, String evidence) {
            return new Row(apply, kind, function, "function", -1, "", "", "",
                "", returnType, convention, varargs, parameterTypes, parameterNames,
                confidence, evidence);
        }
        private static String typeSpecStatic(DataType type) {
            if (type instanceof Pointer pointer && pointer.getDataType() != null)
                return "pointer:" + typeSpecStatic(pointer.getDataType());
            return type == null ? "" : type.getPathName();
        }
    }
}
