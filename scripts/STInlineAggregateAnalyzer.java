// Recover by-value nested class members from exact REP MOVS copies and catalogue exact
// REP STOS zero spans. Inline arrays whose extent is proved by a zero span are consumed by
// STClassArrayAnalyzer; this pass contributes exact typed nested-copy evidence.
// Read-only: writes inline_aggregate_proposals.tsv and inline_aggregate_summary.txt.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Analyze Inline Aggregates

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
import java.util.TreeMap;
import java.util.TreeSet;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeComponent;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.Structure;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.FunctionTag;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Parameter;

public class STInlineAggregateAnalyzer extends GhidraScript {
    private static final Pattern MEMORY = Pattern.compile(
        "^\\[([A-Z][A-Z0-9]{1,3})(?:([+-])(0X[0-9A-F]+|[0-9]+))?\\]$");
    private static final Pattern STACK_STORAGE = Pattern.compile(
        "(?i)Stack\\[0x([0-9a-f]+)\\]");
    private static final int MAX_SPAN = 0x100000;
    private static final Set<String> GENERATED_MARKERS = Set.of(
        "[STClassLayoutApplier]", "[STGlobalDataApplier]",
        "[STPointerShapeApplier]", "[STDArrayElementApplier]");

    private final Map<CopyKey, CopyEvidence> copies = new TreeMap<>();
    private final List<SpanRow> zeroSpans = new ArrayList<>();
    private DataTypeManager dataTypes;

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

        int functionsSeen = 0;
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            monitor.checkCancelled();
            Function function = functions.next();
            Structure owner = ownerType(function);
            if (owner == null || function.isExternal() || function.isThunk() ||
                    isLibrary(function) ||
                    !"__thiscall".equals(function.getCallingConventionName())) continue;
            functionsSeen++;
            analyzeFunction(function, owner);
        }

        List<Row> rows = proposals();
        writeRows(directory.resolve("inline_aggregate_proposals.tsv"), rows);
        writeSummary(directory.resolve("inline_aggregate_summary.txt"), functionsSeen, rows);
        println("Inline-aggregate analysis complete: " + directory.toAbsolutePath());
        println("Functions=" + functionsSeen + ", exact_copies=" + copies.size() +
            ", nested_apply=" + rows.stream().filter(row -> row.apply).count() +
            ", zero_spans=" + zeroSpans.size());
    }

    private void analyzeFunction(Function function, Structure owner) {
        Map<String, Value> registers = new HashMap<>();
        Map<Long, Value> stack = new HashMap<>();
        registers.put("ECX", Value.address(owner.getPathName(), 0, true));
        seedParameters(function, stack);

        CopySegment previousCopy = null;
        InstructionIterator iterator = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (iterator.hasNext()) {
            Instruction instruction = iterator.next();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            List<String> operands = operands(instruction);

            if (mnemonic.equals("MOVSD.REP") || mnemonic.equals("MOVSB.REP")) {
                int width = mnemonic.startsWith("MOVSD") ? 4 : 1;
                long count = constant(registers.get("ECX"));
                Value destination = registers.get("EDI");
                Value source = registers.get("ESI");
                long bytes = safeBytes(count, width);
                if (bytes > 0 && destination != null && destination.ownerAddress &&
                        destination.path.equals(owner.getPathName()) && source != null &&
                        !source.ownerAddress && source.path != null) {
                    CopySegment segment = new CopySegment(function, destination.offset,
                        source.path, source.offset, (int)bytes, addr(instruction.getAddress()));
                    if (previousCopy != null && previousCopy.adjacent(segment))
                        previousCopy.extend(segment);
                    else {
                        recordCopy(segment);
                        previousCopy = segment;
                    }
                }
                else previousCopy = null;
                advance(registers, "EDI", bytes);
                advance(registers, "ESI", bytes);
                registers.put("ECX", Value.constant(0));
                continue;
            }
            if (mnemonic.equals("STOSD.REP") || mnemonic.equals("STOSB.REP") ||
                    mnemonic.equals("STOSB")) {
                int width = mnemonic.startsWith("STOSD") ? 4 : 1;
                long count = mnemonic.endsWith(".REP") ?
                    constant(registers.get("ECX")) : 1;
                long bytes = safeBytes(count, width);
                Value destination = registers.get("EDI");
                if (bytes > 0 && constant(registers.get("EAX")) == 0 &&
                        destination != null && destination.ownerAddress &&
                        destination.path.equals(owner.getPathName()))
                    zeroSpans.add(new SpanRow(owner.getName(), owner.getPathName(),
                        destination.offset, (int)bytes, addr(function.getEntryPoint()),
                        addr(instruction.getAddress()) + " " + instruction));
                advance(registers, "EDI", bytes);
                if (mnemonic.endsWith(".REP")) registers.put("ECX", Value.constant(0));
                previousCopy = null;
                continue;
            }
            previousCopy = null;
            transfer(instruction, mnemonic, operands, registers, stack);
        }
    }

    private void seedParameters(Function function, Map<Long, Value> stack) {
        for (Parameter parameter : function.getParameters()) {
            if (!(parameter.getDataType() instanceof Pointer pointer) ||
                    !(pointer.getDataType() instanceof Structure structure)) continue;
            Matcher matcher = STACK_STORAGE.matcher(parameter.getVariableStorage().toString());
            if (!matcher.find()) continue;
            long ghidraOffset = Long.parseUnsignedLong(matcher.group(1), 16);
            // Ghidra's x86 Stack[0x4] is the first explicit parameter at [EBP+0x8].
            stack.put(ghidraOffset + 4,
                Value.address(structure.getPathName(), 0, false));
        }
    }

    private void transfer(Instruction instruction, String mnemonic, List<String> operands,
            Map<String, Value> registers, Map<Long, Value> stack) {
        if ("CALL".equals(mnemonic)) {
            registers.remove("EAX"); registers.remove("ECX"); registers.remove("EDX");
            return;
        }
        if (operands.isEmpty()) return;
        String destination = register(operands.get(0));
        if (destination.isBlank()) return;
        if ("XOR".equals(mnemonic) && operands.size() >= 2 &&
                destination.equals(register(operands.get(1)))) {
            registers.put(destination, Value.constant(0));
            return;
        }
        if ("MOV".equals(mnemonic) && operands.size() >= 2) {
            Value value = null;
            String sourceRegister = register(operands.get(1));
            if (!sourceRegister.isBlank()) value = registers.get(sourceRegister);
            if (value == null) {
                Long immediate = immediate(operands.get(1));
                if (immediate != null) value = Value.constant(immediate);
            }
            if (value == null) {
                Memory memory = memory(operands.get(1));
                if (memory != null && "EBP".equals(memory.base)) value = stack.get(memory.offset);
            }
            if (value == null) registers.remove(destination);
            else registers.put(destination, value);
            return;
        }
        if ("LEA".equals(mnemonic) && operands.size() >= 2) {
            Memory memory = memory(operands.get(1));
            Value base = memory == null ? null : registers.get(memory.base);
            if (base == null || base.path == null) registers.remove(destination);
            else registers.put(destination, base.add(memory.offset));
            return;
        }
        if (("ADD".equals(mnemonic) || "SUB".equals(mnemonic)) && operands.size() >= 2) {
            Value old = registers.get(destination);
            Long delta = immediate(operands.get(1));
            if (old == null || delta == null) registers.remove(destination);
            else {
                // Ghidra renders negative x86 immediates such as -0xbb as
                // 0xffffff45.  They are 32-bit arithmetic deltas here, not positive
                // 4-GiB structure offsets.
                delta = signed32(delta);
                registers.put(destination,
                    old.add("SUB".equals(mnemonic) ? -delta : delta));
            }
            return;
        }
        if (!Set.of("CMP", "TEST", "PUSH", "JMP", "RET").contains(mnemonic))
            registers.remove(destination);
    }

    private void recordCopy(CopySegment segment) {
        CopyKey key = new CopyKey(segment.function.getEntryPoint().toString(),
            segment.destination, segment.sourcePath, segment.source);
        copies.put(key, new CopyEvidence(segment));
    }

    private List<Row> proposals() {
        List<Row> rows = new ArrayList<>();
        for (CopyEvidence evidence : copies.values()) {
            CopySegment copy = evidence.segment;
            Structure owner = ownerType(copy.function);
            DataType sourceValue = dataTypes.getDataType(copy.sourcePath);
            if (owner == null || !(sourceValue instanceof Structure source)) continue;
            boolean exact = copy.source == 0 && copy.bytes == source.getLength();
            boolean range = copy.destination >= 0 &&
                copy.destination + copy.bytes <= owner.getLength();
            boolean safe = exact && range && safeDestination(owner, copy.destination,
                copy.bytes, source);
            rows.add(new Row(safe, "nested_struct", owner.getName(), owner.getPathName(),
                copy.destination, copy.bytes, source.getPathName(),
                "aggregate_" + String.format("%04X", copy.destination),
                addr(copy.function.getEntryPoint()), String.join(" | ", copy.sites),
                safe ? "high" : "review",
                "exact REP MOVS source span=" + copy.bytes +
                    ", source_length=" + source.getLength() +
                    (range ? "" : "; destination outside owner") +
                    (safe ? "" : "; destination overlap is not automation-owned")));
        }
        for (SpanRow span : zeroSpans)
            rows.add(new Row(false, "zero_span", span.owner, span.ownerPath, span.offset,
                span.bytes, "", "", span.function, span.site, "evidence",
                "exact zero-init boundary; an independent indexed stride or typed copy is " +
                    "required before replacing fields"));
        rows.sort(Comparator.comparing((Row row) -> row.ownerPath)
            .thenComparingLong(row -> row.offset).thenComparing(row -> row.kind));
        disableOverlaps(rows);
        return rows;
    }

    private boolean safeDestination(Structure owner, long offset, int bytes,
            Structure source) {
        String description = text(owner.getDescription());
        if (GENERATED_MARKERS.stream().noneMatch(description::contains)) return false;
        for (DataTypeComponent component : owner.getDefinedComponents()) {
            if (component.getOffset() >= offset + bytes || component.getEndOffset() < offset)
                continue;
            if (component.getOffset() == offset && component.getLength() == bytes &&
                    component.getDataType().isEquivalent(source)) continue;
            String comment = text(component.getComment());
            if (GENERATED_MARKERS.stream().noneMatch(comment::contains)) return false;
        }
        return true;
    }

    private void disableOverlaps(List<Row> rows) {
        List<Row> active = rows.stream().filter(row -> row.apply).toList();
        for (int left = 0; left < active.size(); left++)
            for (int right = left + 1; right < active.size(); right++) {
                Row a = active.get(left), b = active.get(right);
                if (!a.ownerPath.equals(b.ownerPath)) continue;
                if (a.offset < b.offset + b.size && b.offset < a.offset + a.size) {
                    a.apply = false; b.apply = false;
                    a.reason += "; overlaps another exact aggregate proposal";
                    b.reason += "; overlaps another exact aggregate proposal";
                }
            }
    }

    private void writeRows(Path path, List<Row> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\tkind\towner\towner_type_path\toffset\toffset_hex\tsize\t" +
                "proposed_type\tproposed_name\tevidence_function\tevidence_sites\t" +
                "confidence\treason\n");
            for (Row row : rows)
                out.write(bit(row.apply) + "\t" + row.kind + "\t" + clean(row.owner) +
                    "\t" + row.ownerPath + "\t" + row.offset + "\t0x" +
                    Long.toHexString(row.offset).toUpperCase(Locale.ROOT) + "\t" +
                    row.size + "\t" + row.proposedType + "\t" + row.proposedName +
                    "\t" + row.function + "\t" + clean(row.sites) + "\t" +
                    row.confidence + "\t" + clean(row.reason) + "\n");
        }
    }

    private void writeSummary(Path path, int functions, List<Row> rows) throws Exception {
        Files.write(path, List.of(
            "program=" + currentProgram.getName(),
            "functions_scanned=" + functions,
            "exact_copy_candidates=" + rows.stream()
                .filter(row -> row.kind.equals("nested_struct")).count(),
            "nested_struct_apply=" + rows.stream().filter(row -> row.apply).count(),
            "zero_spans=" + rows.stream().filter(row -> row.kind.equals("zero_span")).count(),
            "note=Zero spans are extent evidence, not proof that the entire range has one element type.",
            "note=Only an exact copy of one independently typed complete structure is auto-applied."
        ), StandardCharsets.UTF_8);
    }

    private Structure ownerType(Function function) {
        for (Parameter parameter : function.getParameters())
            if (parameter.isAutoParameter() && parameter.getDataType() instanceof Pointer pointer &&
                    pointer.getDataType() instanceof Structure structure) return structure;
        String qualified = function.getName(true);
        int separator = qualified.lastIndexOf("::");
        if (separator <= 0) return null;
        String name = qualified.substring(0, separator);
        int nested = name.lastIndexOf("::");
        if (nested >= 0) name = name.substring(nested + 2);
        List<DataType> matches = new ArrayList<>();
        dataTypes.findDataTypes(name, matches);
        for (DataType match : matches)
            if (match instanceof Structure structure &&
                    !match.getPathName().contains("/Recovered/VTables/")) return structure;
        return null;
    }

    private void advance(Map<String, Value> registers, String name, long bytes) {
        if (bytes <= 0) return;
        Value value = registers.get(name);
        if (value != null) registers.put(name, value.add(bytes));
    }

    private long safeBytes(long count, int width) {
        return count < 1 || count > MAX_SPAN || count > MAX_SPAN / width ?
            -1 : count * width;
    }
    private long constant(Value value) { return value == null || value.constant == null ? -1 : value.constant; }
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
        Long offset = matcher.group(3) == null ? 0L : immediate(matcher.group(3));
        if (offset == null) return null;
        // x86 effective-address displacements are signed at this point.  In
        // particular, [EDX+0xffffff45] means [EDX-0xbb].  Keeping the parsed
        // token unsigned manufactured offsets above 4 GiB in 32-bit programs.
        offset = signed32(offset);
        return new Memory(matcher.group(1), "-".equals(matcher.group(2)) ? -offset : offset);
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
    private boolean isLibrary(Function function) {
        for (FunctionTag tag : function.getTags())
            if (tag.getName().equals("LIBRARY") || tag.getName().startsWith("LIBRARY_"))
                return true;
        return false;
    }
    private File outputDirectory() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless()) throw new IllegalArgumentException("Recovery directory required");
        return askDirectory("Select recovery output directory", "Select");
    }
    private Path programDirectory(File selected) {
        Path path = selected.toPath().toAbsolutePath().normalize();
        return path.getFileName() != null && path.getFileName().toString()
            .equals(currentProgram.getName()) ? path : path.resolve(currentProgram.getName());
    }
    private static String addr(Address address) { return address == null ? "" : address.toString().toUpperCase(Locale.ROOT); }
    private static String bit(boolean value) { return value ? "1" : "0"; }
    private static String clean(String value) { return text(value).replace("\\", "\\\\").replace("\t", "\\t").replace("\r", "\\r").replace("\n", "\\n"); }
    private static String text(String value) { return value == null ? "" : value; }

    private record Memory(String base, long offset) { }
    private record Value(String path, long offset, boolean ownerAddress, Long constant) {
        static Value address(String path, long offset, boolean owner) { return new Value(path, offset, owner, null); }
        static Value constant(long value) { return new Value(null, 0, false, value); }
        Value add(long delta) { return constant == null ? new Value(path, offset + delta, ownerAddress, null) : Value.constant(constant + delta); }
    }
    private record CopyKey(String function, long destination, String sourcePath, long source)
            implements Comparable<CopyKey> {
        @Override public int compareTo(CopyKey other) {
            int value = function.compareTo(other.function);
            if (value != 0) return value;
            value = Long.compare(destination, other.destination);
            if (value != 0) return value;
            value = sourcePath.compareTo(other.sourcePath);
            return value != 0 ? value : Long.compare(source, other.source);
        }
    }
    private static class CopySegment {
        final Function function;
        final long destination, source;
        final String sourcePath;
        int bytes;
        final Set<String> sites = new TreeSet<>();
        CopySegment(Function function, long destination, String sourcePath, long source,
                int bytes, String site) {
            this.function = function; this.destination = destination;
            this.sourcePath = sourcePath; this.source = source; this.bytes = bytes;
            sites.add(site);
        }
        boolean adjacent(CopySegment other) {
            return function.equals(other.function) && sourcePath.equals(other.sourcePath) &&
                destination + bytes == other.destination && source + bytes == other.source;
        }
        void extend(CopySegment other) { bytes += other.bytes; sites.addAll(other.sites); }
    }
    private record CopyEvidence(CopySegment segment) { }
    private record SpanRow(String owner, String ownerPath, long offset, int bytes,
        String function, String site) { }
    private static class Row {
        boolean apply;
        final String kind, owner, ownerPath, proposedType, proposedName, function, sites,
            confidence;
        final long offset;
        final int size;
        String reason;
        Row(boolean apply, String kind, String owner, String ownerPath, long offset,
                int size, String proposedType, String proposedName, String function,
                String sites, String confidence, String reason) {
            this.apply = apply; this.kind = kind; this.owner = owner;
            this.ownerPath = ownerPath; this.offset = offset; this.size = size;
            this.proposedType = proposedType; this.proposedName = proposedName;
            this.function = function; this.sites = sites; this.confidence = confidence;
            this.reason = reason;
        }
    }
}
