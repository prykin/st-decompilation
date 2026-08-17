// Recover fixed typed stack arrays from repeated scalar-output calls and exact count-driven walks.
// Read-only: writes stack_output_array_proposals.tsv and stack_output_array_summary.txt.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Analyze Stack Output Arrays

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Set;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.Array;
import ghidra.program.model.data.Composite;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.FunctionDefinition;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.TypeDef;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.FunctionTag;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Listing;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.listing.Variable;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.SourceType;

public class STStackOutputArrayAnalyzer extends GhidraScript {
    private static final String MARKER = "[STStackOutputArrayApplier]";
    private static final int MAX_ARGUMENT_SCAN = 40;
    private static final int MAX_CONSUMER_SCAN = 160;
    private static final Pattern MEMORY = Pattern.compile(
        "^\\[([A-Z][A-Z0-9]{1,3})(?:([+-])(0X[0-9A-F]+|[0-9]+))?\\]$");
    private static final Set<String> CONVENTIONS = Set.of(
        "__thiscall", "__stdcall", "__cdecl");
    private static final Set<String> GENERATED_COMMENTS = Set.of(
        MARKER, "[STStackObjectApplier]", "[STDiscriminatedPayloadApplier]",
        "[STDArrayElementApplier]", "[STLocalLifetimeApplier]");

    private Listing listing;

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
        listing = currentProgram.getListing();

        Map<Key, Candidate> candidates = new LinkedHashMap<>();
        int functionsSeen = 0;
        int scalarOutputCalls = 0;
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            monitor.checkCancelled();
            Function function = functions.next();
            if (function.isExternal() || function.isThunk() || isLibrary(function)) continue;
            functionsSeen++;
            InstructionIterator instructions = listing.getInstructions(function.getBody(), true);
            while (instructions.hasNext()) {
                Instruction instruction = instructions.next();
                if (!"CALL".equalsIgnoreCase(instruction.getMnemonicString())) continue;
                Evidence evidence = evidence(function, instruction);
                if (evidence == null) continue;
                scalarOutputCalls++;
                candidates.computeIfAbsent(evidence.key, ignored ->
                    new Candidate(evidence)).add(evidence);
            }
        }

        List<Row> rows = proposals(candidates);
        writeRows(directory.resolve("stack_output_array_proposals.tsv"), rows);
        writeSummary(directory.resolve("stack_output_array_summary.txt"), functionsSeen,
            scalarOutputCalls, rows);
        println("Stack-output-array analysis complete: " + directory.toAbsolutePath());
        println("Functions=" + functionsSeen + ", scalar_output_calls=" + scalarOutputCalls +
            ", candidates=" + rows.size() + ", apply=" +
            rows.stream().filter(row -> row.apply).count());
    }

    private Evidence evidence(Function caller, Instruction call) {
        Function target = calledFunction(call);
        if (target == null || target.isExternal() || target.hasVarArgs() ||
                !CONVENTIONS.contains(target.getCallingConventionName())) return null;
        List<Parameter> explicit = new ArrayList<>();
        for (Parameter parameter : target.getParameters())
            if (!parameter.isAutoParameter()) explicit.add(parameter);
        if (explicit.size() < 1 || explicit.size() > 12) return null;
        for (Parameter parameter : explicit)
            if (!parameter.isStackVariable()) return null;
        Parameter output = explicit.get(explicit.size() - 1);
        DataType element = scalarPointee(output.getDataType());
        if (element == null) return null;
        DataType result = untypedef(target.getReturnType());
        if (result == null || result instanceof Pointer || result instanceof Composite ||
                result instanceof Array || result instanceof FunctionDefinition ||
                result.getLength() != 4) return null;

        StackRoot root = outputRoot(caller, call, explicit.size());
        if (root == null || root.stackOffset >= 0) return null;
        Consumer consumer = consumerProof(caller, call, root.stackOffset,
            element.getLength());
        Variable variable = exactRootVariable(caller, root.stackOffset);
        int length = variable == null ? 0 :
            stackExtent(caller, root.stackOffset, element);
        Key key = new Key(addr(caller.getEntryPoint()), root.stackOffset,
            addr(target.getEntryPoint()), element.getPathName(), length);
        return new Evidence(key, caller.getName(true),
            caller.getPrototypeString(true, true), target.getName(true),
            target.getPrototypeString(true, true), addr(call.getAddress()),
            root.site, consumer, length <= 0 ? "" :
                overlapFingerprint(caller, root.stackOffset, length));
    }

    private StackRoot outputRoot(Function caller, Instruction call, int stackArguments) {
        List<Instruction> pushes = new ArrayList<>();
        Instruction cursor = listing.getInstructionBefore(call.getAddress());
        for (int seen = 0; cursor != null && seen < MAX_ARGUMENT_SCAN;
                seen++, cursor = listing.getInstructionBefore(cursor.getAddress())) {
            if (!caller.getBody().contains(cursor.getAddress())) return null;
            String mnemonic = upper(cursor.getMnemonicString());
            if ("CALL".equals(mnemonic) || cursor.getFlowType().isTerminal() ||
                    cursor.getFlowType().isJump()) return null;
            if ("PUSH".equals(mnemonic)) {
                pushes.add(cursor);
                if (pushes.size() == stackArguments) break;
            }
        }
        if (pushes.size() != stackArguments) return null;
        Instruction outputPush = pushes.get(stackArguments - 1);
        String pushed = register(operand(outputPush, 0));
        if (pushed.isBlank()) return null;
        Instruction definition = listing.getInstructionBefore(outputPush.getAddress());
        for (int seen = 0; definition != null && seen < 12;
                seen++, definition = listing.getInstructionBefore(definition.getAddress())) {
            if (!caller.getBody().contains(definition.getAddress())) return null;
            String destination = register(operand(definition, 0));
            if (!pushed.equals(destination)) continue;
            if (!"LEA".equals(upper(definition.getMnemonicString()))) return null;
            Memory memory = memory(operand(definition, 1));
            if (memory == null || !"EBP".equals(memory.base)) return null;
            // At entry the saved EBP occupies four bytes below Ghidra's Stack[0].
            long stackOffset = memory.offset - 4;
            return new StackRoot(stackOffset, addr(outputPush.getAddress()) + "<-" +
                addr(definition.getAddress()));
        }
        return null;
    }

    private Consumer consumerProof(Function caller, Instruction call, long root,
            int width) {
        String cursorRegister = "";
        Long countSlot = null;
        boolean countTested = false;
        boolean elementRead = false;
        boolean cursorAdvanced = false;
        boolean countLoop = false;
        Map<String, Long> countLoads = new HashMap<>();
        Set<String> decremented = new java.util.HashSet<>();
        Instruction instruction = listing.getInstructionAfter(call.getAddress());
        for (int seen = 0; instruction != null && seen < MAX_CONSUMER_SCAN;
                seen++, instruction = listing.getInstructionAfter(instruction.getAddress())) {
            if (!caller.getBody().contains(instruction.getAddress())) break;
            String mnemonic = upper(instruction.getMnemonicString());
            if (seen < 12 && ("TEST".equals(mnemonic) || "CMP".equals(mnemonic)) &&
                    ("EAX".equals(register(operand(instruction, 0))) ||
                     "EAX".equals(register(operand(instruction, 1))))) countTested = true;
            if (seen < 20 && "LEA".equals(mnemonic)) {
                Memory value = memory(operand(instruction, 1));
                if (value != null && "EBP".equals(value.base) && value.offset - 4 == root)
                    cursorRegister = register(operand(instruction, 0));
            }
            if (seen < 20 && "MOV".equals(mnemonic) &&
                    "EAX".equals(register(operand(instruction, 1)))) {
                Memory destination = memory(operand(instruction, 0));
                if (destination != null && "EBP".equals(destination.base))
                    countSlot = destination.offset - 4;
            }
            if (!cursorRegister.isBlank()) {
                for (int index = 0; index < instruction.getNumOperands(); index++) {
                    Memory value = memory(operand(instruction, index));
                    if (value != null && cursorRegister.equals(value.base))
                        elementRead = true;
                }
                if ("ADD".equals(mnemonic) &&
                        cursorRegister.equals(register(operand(instruction, 0))) &&
                        immediate(operand(instruction, 1)) != null &&
                        signed32(immediate(operand(instruction, 1))) == width)
                    cursorAdvanced = true;
            }
            if (countSlot != null && "MOV".equals(mnemonic)) {
                String destination = register(operand(instruction, 0));
                Memory source = memory(operand(instruction, 1));
                if (!destination.isBlank() && source != null &&
                        "EBP".equals(source.base) && source.offset - 4 == countSlot)
                    countLoads.put(destination, (long)seen);
                Memory store = memory(operand(instruction, 0));
                String sourceRegister = register(operand(instruction, 1));
                if (store != null && "EBP".equals(store.base) &&
                        store.offset - 4 == countSlot && decremented.contains(sourceRegister))
                    countLoop = true;
            }
            if (("DEC".equals(mnemonic) || "SUB".equals(mnemonic)) &&
                    countLoads.containsKey(register(operand(instruction, 0))) &&
                    ("DEC".equals(mnemonic) ||
                     Long.valueOf(1).equals(immediate(operand(instruction, 1)))))
                decremented.add(register(operand(instruction, 0)));
            if (instruction.getFlowType().isTerminal()) break;
        }
        boolean proven = countTested && !cursorRegister.isBlank() && countSlot != null &&
            elementRead && cursorAdvanced && countLoop;
        return new Consumer(proven, cursorRegister, countSlot == null ? 0 : countSlot,
            "tested=" + bit(countTested) + "; cursor=" + cursorRegister +
            "; count_slot=" + (countSlot == null ? "" : countSlot) +
            "; element_read=" + bit(elementRead) + "; advance=" +
            bit(cursorAdvanced) + "; count_loop=" + bit(countLoop));
    }

    private List<Row> proposals(Map<Key, Candidate> candidates) {
        List<Row> rows = new ArrayList<>();
        for (Candidate candidate : candidates.values()) {
            Key key = candidate.first.key;
            Function function = function(key.functionAddress);
            Variable variable = function == null ? null :
                exactVariable(function, key.stackOffset, key.length);
            int width = type(key.elementType).getLength();
            int count = width > 0 ? key.length / width : 0;
            boolean repeated = candidate.sites.size() >= 2;
            boolean consumers = candidate.consumerSites.size() >= 2;
            String overlaps = function == null || key.length <= 0 ? "" :
                overlapFingerprint(function, key.stackOffset, key.length);
            boolean exact = function != null && exactRootVariable(function,
                key.stackOffset) != null && !overlaps.isBlank() &&
                overlaps.equals(candidate.first.variableFingerprint);
            boolean extent = key.length >= width * 2 && key.length <= width * 64 &&
                key.length % width == 0;
            boolean protectedVariable = function != null &&
                protectedOverlap(function, key.stackOffset, key.length);
            boolean apply = repeated && consumers && exact && extent && !protectedVariable;
            boolean already = variable != null && variable.getDataType() instanceof Array array &&
                array.getNumElements() == count &&
                untypedef(array.getDataType()).isEquivalent(untype(key.elementType));
            if (already) apply = true;
            String reason = already ? "exact_typed_array_present" :
                !repeated ? "needs_two_exact_output_calls" :
                !consumers ? "needs_two_count_driven_consumers" :
                !exact ? "no_exact_stable_stack_extent" :
                !extent ? "invalid_or_unbounded_stack_extent" :
                protectedVariable ? "manual_or_nonowned_stack_local" :
                "repeated_scalar_output_with_exact_count_driven_walk";
            rows.add(new Row(apply, key.functionAddress,
                candidate.first.expectedFunction, candidate.first.expectedSignature,
                key.targetAddress, candidate.first.expectedTarget,
                candidate.first.expectedTargetSignature, key.stackOffset, key.length,
                key.elementType, width, count,
                "output_values_" + offsetName(key.stackOffset),
                candidate.first.variableFingerprint,
                String.join("|", candidate.sites),
                String.join("|", candidate.consumerSites), reason,
                "last explicit scalar-pointer parameter; exact EBP-rooted argument; " +
                    "callee return is tested and drives a width-" + width + " pointer walk; " +
                    String.join(" | ", candidate.consumerDetails)));
        }
        rows.sort(Comparator.comparing((Row row) -> row.functionAddress)
            .thenComparingLong(row -> row.stackOffset)
            .thenComparing(row -> row.targetAddress));
        return rows;
    }

    private Variable exactRootVariable(Function function, long offset) {
        List<Variable> matches = new ArrayList<>();
        for (Variable variable : function.getLocalVariables())
            if (variable.isStackVariable() && variable.getStackOffset() == offset &&
                    variable.getLength() > 0) matches.add(variable);
        return matches.size() == 1 ? matches.get(0) : null;
    }
    private int stackExtent(Function function, long offset, DataType element) {
        Variable root = exactRootVariable(function, offset);
        if (root == null) return 0;
        if (root.getDataType() instanceof Array array &&
                untypedef(array.getDataType()).isEquivalent(untype(element.getPathName())))
            return root.getLength();
        if (!genericStorage(root)) return 0;
        long cursor = offset + root.getLength();
        List<Variable> later = new ArrayList<>();
        for (Variable variable : function.getLocalVariables())
            if (variable.isStackVariable() && variable.getStackOffset() > offset)
                later.add(variable);
        later.sort(Comparator.comparingInt(Variable::getStackOffset));
        for (Variable variable : later) {
            long start = variable.getStackOffset();
            if (start < cursor) continue;
            if (start == cursor && genericStorage(variable)) {
                cursor = start + variable.getLength();
                continue;
            }
            // An unclaimed interval between the last generic transport word and
            // the next distinct local is real frame storage.  The repeated
            // output/count-walk proof determines its element type; the next
            // local supplies the exclusive capacity boundary.
            long length = start - offset;
            return length > 0 && length <= Integer.MAX_VALUE ? (int)length : 0;
        }
        long length = -offset;
        return length > 0 && length <= Integer.MAX_VALUE ? (int)length : 0;
    }
    private boolean genericStorage(Variable variable) {
        DataType type = untypedef(variable.getDataType());
        String path = type == null ? "" : type.getPathName();
        boolean generic = path.matches("/undefined(?:[1-8])?") ||
            path.matches("/undefined[1-8]\\[[0-9]+\\]");
        return generic && !protectedVariable(variable);
    }
    private Variable exactVariable(Function function, long offset, int length) {
        for (Variable variable : function.getLocalVariables())
            if (variable.isStackVariable() && variable.getStackOffset() == offset &&
                    variable.getLength() == length) return variable;
        return null;
    }
    private boolean protectedVariable(Variable variable) {
        if (variable.getSource() == SourceType.USER_DEFINED ||
                variable.getSource() == SourceType.IMPORTED) return true;
        String comment = text(variable.getComment());
        if (comment.isBlank()) return false;
        return GENERATED_COMMENTS.stream().noneMatch(comment::contains);
    }
    private boolean protectedOverlap(Function function, long offset, int length) {
        long end = offset + length;
        for (Variable variable : function.getLocalVariables()) {
            if (!variable.isStackVariable()) continue;
            long start = variable.getStackOffset();
            if (start >= end || start + variable.getLength() <= offset) continue;
            if (protectedVariable(variable)) return true;
        }
        return false;
    }
    private String overlapFingerprint(Function function, long offset, int length) {
        long end = offset + length;
        List<String> values = new ArrayList<>();
        for (Variable variable : function.getLocalVariables()) {
            if (!variable.isStackVariable()) continue;
            long start = variable.getStackOffset();
            if (start >= end || start + variable.getLength() <= offset) continue;
            values.add(fingerprint(variable));
        }
        values.sort(Comparator.naturalOrder());
        return String.join(" | ", values);
    }

    private DataType scalarPointee(DataType value) {
        value = untypedef(value);
        if (!(value instanceof Pointer pointer)) return null;
        DataType element = untypedef(pointer.getDataType());
        if (element == null || element instanceof Pointer || element instanceof Composite ||
                element instanceof Array || element instanceof FunctionDefinition) return null;
        return Set.of(1, 2, 4, 8).contains(element.getLength()) ? element : null;
    }
    private DataType untypedef(DataType value) {
        while (value instanceof TypeDef typeDef) value = typeDef.getBaseDataType();
        return value;
    }
    private DataType type(String path) {
        DataType value = currentProgram.getDataTypeManager().getDataType(path);
        if (value == null) throw new IllegalStateException("Missing data type " + path);
        return value;
    }
    private DataType untype(String path) { return untypedef(type(path)); }

    private Function calledFunction(Instruction instruction) {
        for (Reference reference : instruction.getReferencesFrom()) {
            if (!reference.getReferenceType().isCall()) continue;
            Function target = currentProgram.getFunctionManager()
                .getFunctionAt(reference.getToAddress());
            if (target == null) continue;
            for (int depth = 0; depth < 16 && target.isThunk(); depth++) {
                Function next = target.getThunkedFunction(true);
                if (next == null || next.equals(target)) break;
                target = next;
            }
            return target;
        }
        return null;
    }
    private Function function(String addressText) {
        Address address = currentProgram.getAddressFactory().getAddress(addressText);
        return address == null ? null : currentProgram.getFunctionManager().getFunctionAt(address);
    }

    private String operand(Instruction instruction, int index) {
        return instruction == null || index < 0 || index >= instruction.getNumOperands() ? "" :
            instruction.getDefaultOperandRepresentation(index).toUpperCase(Locale.ROOT);
    }
    private String register(String value) {
        value = upper(value).trim();
        return Set.of("EAX", "EBX", "ECX", "EDX", "ESI", "EDI", "EBP", "ESP")
            .contains(value) ? value : "";
    }
    private Memory memory(String operand) {
        String value = upper(operand).replace("QWORD PTR", "")
            .replace("DWORD PTR", "").replace("WORD PTR", "")
            .replace("BYTE PTR", "").replace(" ", "")
            .replace("+-", "-").replace("-+", "-");
        Matcher matcher = MEMORY.matcher(value);
        if (!matcher.matches()) return null;
        Long amount = matcher.group(3) == null ? 0L : immediate(matcher.group(3));
        if (amount == null) return null;
        amount = signed32(amount);
        return new Memory(matcher.group(1), "-".equals(matcher.group(2)) ? -amount : amount);
    }
    private Long immediate(String value) {
        value = upper(value).trim();
        boolean negative = value.startsWith("-");
        if (negative) value = value.substring(1);
        try {
            long result;
            if (value.startsWith("0X")) result = Long.parseUnsignedLong(value.substring(2), 16);
            else if (value.matches("[0-9A-F]+H"))
                result = Long.parseUnsignedLong(value.substring(0, value.length() - 1), 16);
            else if (value.matches("[0-9]+")) result = Long.parseLong(value);
            else return null;
            return negative ? -result : result;
        }
        catch (NumberFormatException ignored) { return null; }
    }
    private long signed32(long value) {
        return value >= 0x80000000L && value <= 0xffffffffL ?
            value - 0x100000000L : value;
    }
    private String fingerprint(Variable variable) {
        return variable.getVariableStorage() + ":" + variable.getName() + ":" +
            variable.getDataType().getPathName() + ":" + variable.getSource() + ":" +
            text(variable.getComment());
    }
    private boolean isLibrary(Function function) {
        for (FunctionTag tag : function.getTags())
            if (tag.getName().equals("LIBRARY") || tag.getName().startsWith("LIBRARY_"))
                return true;
        return false;
    }

    private void writeRows(Path path, List<Row> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\tfunction_address\texpected_function\texpected_signature\t" +
                "target_address\texpected_target\texpected_target_signature\tstack_offset\t" +
                "length\telement_type\telement_width\telement_count\tproposed_name\t" +
                "expected_overlaps\tcall_sites\tconsumer_sites\treason\tevidence\n");
            for (Row row : rows)
                out.write(bit(row.apply) + "\t" + row.functionAddress + "\t" +
                    clean(row.expectedFunction) + "\t" + clean(row.expectedSignature) + "\t" +
                    row.targetAddress + "\t" + clean(row.expectedTarget) + "\t" +
                    clean(row.expectedTargetSignature) + "\t" + row.stackOffset + "\t" +
                    row.length + "\t" + row.elementType + "\t" + row.elementWidth + "\t" +
                    row.elementCount + "\t" + row.proposedName + "\t" +
                    clean(row.expectedVariable) + "\t" + row.callSites + "\t" +
                    row.consumerSites + "\t" + row.reason + "\t" + clean(row.evidence) + "\n");
        }
    }
    private void writeSummary(Path path, int functions, int calls, List<Row> rows)
            throws Exception {
        Files.write(path, List.of(
            "program=" + currentProgram.getName(),
            "functions_scanned=" + functions,
            "scalar_output_calls=" + calls,
            "stack_output_candidates=" + rows.size(),
            "stack_output_apply=" + rows.stream().filter(row -> row.apply).count(),
            "note=Application requires two exact calls and two count-driven walks over one stable stack extent.",
            "note=The output parameter supplies element type; runtime return count does not invent semantic field names."
        ), StandardCharsets.UTF_8);
    }
    private File outputDirectory() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException("Recovery output directory is required");
        return askDirectory("Select recovery output directory", "Select");
    }
    private Path programDirectory(File selected) {
        Path root = selected.toPath().toAbsolutePath().normalize();
        return root.getFileName() != null && root.getFileName().toString()
            .equals(currentProgram.getName()) ? root : root.resolve(currentProgram.getName());
    }
    private String offsetName(long value) {
        return value < 0 ? "neg_" + Long.toHexString(-value).toUpperCase(Locale.ROOT) :
            Long.toHexString(value).toUpperCase(Locale.ROOT);
    }
    private static String upper(String value) {
        return value == null ? "" : value.toUpperCase(Locale.ROOT);
    }
    private static String addr(Address address) {
        return address == null ? "" : address.toString().toUpperCase(Locale.ROOT);
    }
    private static String text(String value) { return value == null ? "" : value; }
    private static String clean(String value) {
        return text(value).replace('\t', ' ').replace('\r', ' ').replace('\n', ' ');
    }
    private static String bit(boolean value) { return value ? "1" : "0"; }

    private record Memory(String base, long offset) {}
    private record StackRoot(long stackOffset, String site) {}
    private record Consumer(boolean proven, String cursor, long countSlot, String detail) {}
    private record Key(String functionAddress, long stackOffset, String targetAddress,
            String elementType, int length) {}
    private record Evidence(Key key, String expectedFunction, String expectedSignature,
            String expectedTarget, String expectedTargetSignature, String callSite,
            String rootSite, Consumer consumer, String variableFingerprint) {}
    private static final class Candidate {
        final Evidence first;
        final List<String> sites = new ArrayList<>();
        final List<String> consumerSites = new ArrayList<>();
        final List<String> consumerDetails = new ArrayList<>();
        Candidate(Evidence first) { this.first = first; }
        void add(Evidence evidence) {
            sites.add(evidence.callSite + "@" + evidence.rootSite);
            if (evidence.consumer.proven) {
                consumerSites.add(evidence.callSite);
                consumerDetails.add(evidence.callSite + " " + evidence.consumer.detail);
            }
        }
    }
    private record Row(boolean apply, String functionAddress, String expectedFunction,
            String expectedSignature, String targetAddress, String expectedTarget,
            String expectedTargetSignature, long stackOffset, int length,
            String elementType, int elementWidth, int elementCount, String proposedName,
            String expectedVariable, String callSites, String consumerSites,
            String reason, String evidence) {}
}
