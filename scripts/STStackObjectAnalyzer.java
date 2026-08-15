// Recover fixed local stack objects from exact MSVC REP STOS spans and audit dynamic alloca sites.
// Read-only: writes stack_object_proposals.tsv and stack_object_summary.txt.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Analyze Stack Objects

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.HashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Set;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.FunctionTag;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Variable;
import ghidra.program.model.symbol.Reference;

public class STStackObjectAnalyzer extends GhidraScript {
    private static final int MAX_SPAN = 0x100000;
    private static final Pattern MEMORY = Pattern.compile(
        "^\\[([A-Z][A-Z0-9]{1,3})(?:([+-])(0X[0-9A-F]+|[0-9]+))?\\]$");

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

        List<Row> rows = new ArrayList<>();
        int functionsSeen = 0;
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            monitor.checkCancelled();
            Function function = functions.next();
            if (function.isExternal() || function.isThunk() || isLibrary(function)) continue;
            functionsSeen++;
            analyzeFunction(function, rows);
        }
        rows.sort(Comparator.comparing((Row row) -> row.functionAddress)
            .thenComparing(row -> row.kind)
            .thenComparingLong(row -> row.stackOffset)
            .thenComparing(row -> row.site));
        writeRows(directory.resolve("stack_object_proposals.tsv"), rows);
        writeSummary(directory.resolve("stack_object_summary.txt"), functionsSeen, rows);
        println("Stack-object analysis complete: " + directory.toAbsolutePath().normalize());
        println("Functions=" + functionsSeen + ", fixed_zero=" + count(rows, "fixed_zero") +
            ", fixed_apply=" + rows.stream().filter(row -> row.apply).count() +
            ", overlapping=" + rows.stream().filter(row -> row.reason.equals("overlapping_stack_lifetimes")).count() +
            ", dynamic_alloca=" + count(rows, "dynamic_alloca"));
    }

    private void analyzeFunction(Function function, List<Row> rows) {
        Map<String, Value> registers = new HashMap<>();
        List<Span> spans = new ArrayList<>();
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            List<String> operands = operands(instruction);

            if (mnemonic.startsWith("STOS")) {
                int width = mnemonic.startsWith("STOSD") ? 4 :
                    mnemonic.startsWith("STOSW") ? 2 : 1;
                long count = mnemonic.endsWith(".REP") ? constant(registers.get("ECX")) : 1;
                Value destination = registers.get("EDI");
                long bytes = safeBytes(count, width);
                if (destination != null && destination.stackOffset != null &&
                        constant(registers.get("EAX")) == 0 && bytes > 0) {
                    Span next = new Span(destination.stackOffset, (int)bytes,
                        instruction.getAddress(), addr(instruction.getAddress()) + " " + instruction);
                    if (!spans.isEmpty() && spans.get(spans.size() - 1).adjacent(next))
                        spans.get(spans.size() - 1).extend(next);
                    else spans.add(next);
                    registers.put("EDI", destination.add(bytes));
                    if (mnemonic.endsWith(".REP")) registers.put("ECX", Value.constant(0));
                }
                else {
                    registers.remove("EDI");
                    if (mnemonic.endsWith(".REP")) registers.remove("ECX");
                }
                continue;
            }

            if ("CALL".equals(mnemonic)) {
                Function target = calledFunction(instruction);
                if (target != null && "alloca_probe".equals(target.getCallFixup())) {
                    rows.add(dynamicRow(function, instruction));
                }
                registers.remove("EAX");
                registers.remove("ECX");
                registers.remove("EDX");
                continue;
            }

            transfer(mnemonic, operands, registers);
            if (instruction.getFlowType().isJump() || instruction.getFlowType().isTerminal()) {
                Value ebp = registers.get("EBP");
                registers.clear();
                if (ebp != null) registers.put("EBP", ebp);
            }
        }

        for (Span span : spans) rows.add(fixedRow(function, span));
    }

    private void transfer(String mnemonic, List<String> operands,
            Map<String, Value> registers) {
        if (operands.isEmpty()) return;
        String destination = register(operands.get(0));
        if (destination.isBlank()) return;
        if (("XOR".equals(mnemonic) || "SUB".equals(mnemonic)) && operands.size() >= 2 &&
                destination.equals(register(operands.get(1)))) {
            registers.put(destination, Value.constant(0));
            return;
        }
        if ("MOV".equals(mnemonic) && operands.size() >= 2) {
            String source = register(operands.get(1));
            if (destination.equals("EBP") && source.equals("ESP")) {
                // On 32-bit x86 EBP is entry-SP minus the pushed old EBP.  Ghidra's
                // Stack[] offsets are entry-SP relative, hence the exact -4 bias.
                registers.put("EBP", Value.stack(-4));
                return;
            }
            Value value = source.isBlank() ? null : registers.get(source);
            Long immediate = value == null ? immediate(operands.get(1)) : null;
            if (value != null) registers.put(destination, value);
            else if (immediate != null) registers.put(destination, Value.constant(signed32(immediate)));
            else registers.remove(destination);
            return;
        }
        if ("LEA".equals(mnemonic) && operands.size() >= 2) {
            Memory memory = memory(operands.get(1));
            Value base = memory == null ? null : registers.get(memory.base);
            if (base != null && base.stackOffset != null)
                registers.put(destination, base.add(memory.offset));
            else registers.remove(destination);
            return;
        }
        if (("ADD".equals(mnemonic) || "SUB".equals(mnemonic) ||
                "OR".equals(mnemonic)) && operands.size() >= 2) {
            Value old = registers.get(destination);
            Long immediate = immediate(operands.get(1));
            if ("OR".equals(mnemonic) && immediate != null &&
                    signed32(immediate) == -1) {
                registers.put(destination, Value.constant(-1));
                return;
            }
            if (old == null || immediate == null) registers.remove(destination);
            else registers.put(destination, old.add(
                "SUB".equals(mnemonic) ? -signed32(immediate) : signed32(immediate)));
            return;
        }
        if (!Set.of("CMP", "TEST", "PUSH", "POP", "NOP").contains(mnemonic))
            registers.remove(destination);
    }

    private Row fixedRow(Function function, Span span) {
        String overlaps = overlapFingerprint(function, span.offset, span.length);
        Variable exact = exactVariable(function, span.offset, span.length);
        boolean safeRange = span.offset < 0 && span.offset + span.length <= 0;
        boolean already = exact != null && exact.getDataType() instanceof
            ghidra.program.model.data.Array array && array.getElementLength() == 1;
        // A one/two/three-byte zero is evidence for a scalar or packed tail, not
        // for an anonymous byte array.  Only a nontrivial contiguous object is
        // eligible, and then only when Listing storage is actually unclaimed.
        boolean apply = safeRange && span.length >= 16 && (overlaps.isBlank() || already);
        String reason = !safeRange ? "nonlocal_or_crosses_frame_boundary" :
            already ? "exact_stack_array_present" :
            overlaps.isBlank() ? "exact_zero_span_unclaimed" : "overlapping_stack_lifetimes";
        return new Row(apply, "fixed_zero", addr(function.getEntryPoint()),
            function.getName(true), function.getPrototypeString(true, true), span.offset,
            span.length, "stack_bytes_" + offsetName(span.offset), overlaps,
            span.site, reason,
            "exact zero-valued REP STOS span rooted in EBP-relative local storage");
    }

    private Row dynamicRow(Function function, Instruction instruction) {
        return new Row(false, "dynamic_alloca", addr(function.getEntryPoint()),
            function.getName(true), function.getPrototypeString(true, true), 0, 0,
            "dynamic_stack_" + addr(instruction.getAddress()), "", addr(instruction.getAddress()),
            "runtime_extent_review",
            "call target has the machine-verified MSVC alloca_probe p-code fixup; " +
                "the resulting ESP-rooted object has runtime extent and cannot be a fixed Listing local");
    }

    private Variable exactVariable(Function function, long offset, int length) {
        for (Variable variable : function.getLocalVariables())
            if (variable.isStackVariable() && variable.getStackOffset() == offset &&
                    variable.getLength() == length) return variable;
        return null;
    }

    private String overlapFingerprint(Function function, long offset, int length) {
        long end = offset + length;
        List<String> values = new ArrayList<>();
        for (Variable variable : function.getLocalVariables()) {
            if (!variable.isStackVariable()) continue;
            long start = variable.getStackOffset();
            if (start >= end || start + variable.getLength() <= offset) continue;
            values.add(variable.getVariableStorage() + ":" + variable.getName() + ":" +
                variable.getDataType().getPathName() + ":" + variable.getSource() + ":" +
                clean(variable.getComment()));
        }
        values.sort(Comparator.naturalOrder());
        return String.join(" | ", values);
    }

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

    private long safeBytes(long count, int width) {
        return count < 1 || count > MAX_SPAN || count > MAX_SPAN / width ?
            -1 : count * width;
    }
    private long constant(Value value) {
        return value == null || value.constant == null ? Long.MIN_VALUE : value.constant;
    }
    private List<String> operands(Instruction instruction) {
        List<String> result = new ArrayList<>();
        for (int index = 0; index < instruction.getNumOperands(); index++)
            result.add(instruction.getDefaultOperandRepresentation(index)
                .toUpperCase(Locale.ROOT));
        return result;
    }
    private Memory memory(String operand) {
        String value = operand == null ? "" : operand.toUpperCase(Locale.ROOT)
            .replace("QWORD PTR", "").replace("DWORD PTR", "")
            .replace("WORD PTR", "").replace("BYTE PTR", "")
            .replace(" ", "");
        Matcher matcher = MEMORY.matcher(value);
        if (!matcher.matches()) return null;
        Long amount = matcher.group(3) == null ? 0L : immediate(matcher.group(3));
        if (amount == null) return null;
        amount = signed32(amount);
        return new Memory(matcher.group(1), "-".equals(matcher.group(2)) ? -amount : amount);
    }
    private String register(String value) {
        value = value == null ? "" : value.trim().toUpperCase(Locale.ROOT);
        return Set.of("EAX", "EBX", "ECX", "EDX", "ESI", "EDI", "EBP", "ESP")
            .contains(value) ? value : "";
    }
    private Long immediate(String value) {
        value = value == null ? "" : value.trim().toUpperCase(Locale.ROOT);
        try {
            if (value.startsWith("0X")) return Long.parseUnsignedLong(value.substring(2), 16);
            if (value.matches("[0-9A-F]+H"))
                return Long.parseUnsignedLong(value.substring(0, value.length() - 1), 16);
            return value.matches("[0-9]+") ? Long.parseLong(value) : null;
        }
        catch (NumberFormatException ignored) { return null; }
    }
    private long signed32(long value) {
        return value >= 0x80000000L && value <= 0xffffffffL ?
            value - 0x100000000L : value;
    }
    private String offsetName(long value) {
        return value < 0 ? "neg_" + Long.toHexString(-value).toUpperCase(Locale.ROOT) :
            Long.toHexString(value).toUpperCase(Locale.ROOT);
    }
    private long count(List<Row> rows, String kind) {
        return rows.stream().filter(row -> row.kind.equals(kind)).count();
    }
    private boolean isLibrary(Function function) {
        for (FunctionTag tag : function.getTags())
            if (tag.getName().equals("LIBRARY") || tag.getName().startsWith("LIBRARY_"))
                return true;
        return false;
    }

    private void writeRows(Path path, List<Row> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\tkind\tfunction_address\texpected_function\texpected_signature\t" +
                "stack_offset\tlength\tproposed_name\texpected_overlaps\tsite\treason\tevidence\n");
            for (Row row : rows) out.write((row.apply ? "1" : "0") + "\t" + row.kind +
                "\t" + row.functionAddress + "\t" + clean(row.expectedFunction) + "\t" +
                clean(row.expectedSignature) + "\t" + row.stackOffset + "\t" + row.length +
                "\t" + row.proposedName + "\t" + clean(row.expectedOverlaps) + "\t" +
                row.site + "\t" + row.reason + "\t" + clean(row.evidence) + "\n");
        }
    }

    private void writeSummary(Path path, int functions, List<Row> rows) throws Exception {
        Files.write(path, List.of(
            "program=" + currentProgram.getName(),
            "functions_scanned=" + functions,
            "fixed_zero_spans=" + count(rows, "fixed_zero"),
            "fixed_zero_apply=" + rows.stream().filter(row -> row.apply).count(),
            "overlapping_stack_lifetimes=" + rows.stream()
                .filter(row -> row.reason.equals("overlapping_stack_lifetimes")).count(),
            "dynamic_alloca_sites=" + count(rows, "dynamic_alloca"),
            "note=An exact zero span proves storage extent, not a semantic element type.",
            "note=Overlapping stack lifetimes remain presentation/audit facts because Ghidra Listing stack locals cannot overlap."
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
    private static String addr(Address address) {
        return address == null ? "" : address.toString().toUpperCase(Locale.ROOT);
    }
    private static String clean(String value) {
        return value == null ? "" : value.replace('\t', ' ').replace('\r', ' ')
            .replace('\n', ' ');
    }

    private static final class Span {
        long offset;
        int length;
        Address lastSite;
        String site;
        Span(long offset, int length, Address lastSite, String site) {
            this.offset = offset;
            this.length = length;
            this.lastSite = lastSite;
            this.site = site;
        }
        boolean adjacent(Span other) {
            return offset + length == other.offset && other.lastSite.subtract(lastSite) <= 4;
        }
        void extend(Span other) {
            length += other.length;
            lastSite = other.lastSite;
            site += " | " + other.site;
        }
    }
    private record Memory(String base, long offset) {}
    private record Value(Long stackOffset, Long constant) {
        static Value stack(long offset) { return new Value(offset, null); }
        static Value constant(long value) { return new Value(null, value); }
        Value add(long delta) {
            return stackOffset != null ? stack(stackOffset + delta) :
                constant != null ? constant(constant + delta) : this;
        }
    }
    private record Row(boolean apply, String kind, String functionAddress,
            String expectedFunction, String expectedSignature, long stackOffset,
            int length, String proposedName, String expectedOverlaps, String site,
            String reason, String evidence) {}
}
