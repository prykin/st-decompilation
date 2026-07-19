// Recover conservative class layouts from ECX/this-derived memory accesses.
// Read-only: writes class_layout_proposals.tsv and class_field_proposals.tsv.
// Run after STConstructorAnalyzer so unique allocation sizes can bound structures.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Analyze Class Layouts

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
import java.util.TreeMap;
import java.util.TreeSet;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeComponent;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.Enum;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.Structure;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.FunctionTag;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Parameter;

public class STClassLayoutAnalyzer extends GhidraScript {
    private static final Pattern MEMORY = Pattern.compile(
        "^\\[([A-Z][A-Z0-9]{1,3})(?:([+-])(0X[0-9A-F]+|[0-9]+))?\\]$");
    private static final Pattern REGISTER = Pattern.compile("^[A-Z][A-Z0-9]{1,3}$");
    private static final String MARKER = "[STClassLayoutApplier]";
    private static final String SWITCH_ENUM_MARKER = "[STSwitchEnumApplier]";
    private static final long MAX_CLASS_SIZE = 0x1000000L;

    private DataTypeManager dataTypes;

    @Override
    protected void run() throws Exception {
        if (currentProgram == null) {
            printerr("Open the analyzed ST program first.");
            return;
        }
        File selected = outputDirectory();
        if (selected == null) return;
        Path directory = programDirectory(selected);
        Files.createDirectories(directory);
        dataTypes = currentProgram.getDataTypeManager();

        Map<String, Long> exactSizes = readClassSizes(
            directory.resolve("constructor_class_sizes.tsv"));
        Map<String, String> vtableTypes = readVtableTypes(
            directory.resolve("vtable_proposals.tsv"));
        Map<String, ClassEvidence> classes = new TreeMap<>();

        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            monitor.checkCancelled();
            Function function = functions.next();
            String owner = ownerOf(function);
            if (owner.isBlank() || function.isThunk() || function.isExternal() ||
                    isLibrary(function) || !"__thiscall".equals(function.getCallingConventionName()))
                continue;
            ClassEvidence classEvidence = classes.computeIfAbsent(owner, ClassEvidence::new);
            analyzeFunction(function, classEvidence);
        }

        List<ClassProposal> classRows = new ArrayList<>();
        List<FieldProposal> fieldRows = new ArrayList<>();
        for (ClassEvidence evidence : classes.values()) {
            monitor.checkCancelled();
            DataType ownerType = findOwnerType(evidence.owner);
            if (!(ownerType instanceof Structure structure) || evidence.fields.isEmpty()) continue;
            long observedSize = evidence.fields.values().stream()
                .mapToLong(field -> field.offset + field.maximumSize()).max().orElse(1);
            if (vtableTypes.containsKey(evidence.owner)) observedSize = Math.max(observedSize, 4);
            long exactSize = exactSizes.getOrDefault(evidence.owner, -1L);
            long proposedSize = exactSize >= observedSize ? exactSize : observedSize;
            if (proposedSize < 1 || proposedSize > MAX_CLASS_SIZE) continue;

            List<FieldProposal> ownerFields = makeFields(evidence, structure,
                vtableTypes.get(evidence.owner), proposedSize);
            markOverlaps(ownerFields);
            long autoFields = ownerFields.stream().filter(field -> field.apply).count();
            boolean safeStructure = isPlaceholder(structure) || isOwnedUnchangedCandidate(structure);
            boolean hasExactSize = exactSize >= observedSize;
            boolean hasVtable = vtableTypes.containsKey(evidence.owner);
            // A single remote access is too weak to justify materializing a mostly-empty,
            // potentially enormous structure.  Require a second independent offset, an
            // applied vtable type, or a unique constructor allocation size.
            boolean anchoredLayout = autoFields >= 2 || hasVtable || hasExactSize;
            boolean apply = safeStructure && autoFields > 0 && anchoredLayout;
            String reason = exactSize >= observedSize ? "unique_allocation_size_and_this_accesses" :
                "observed_this_access_extent";
            if (!safeStructure) reason = "existing_manual_or_unowned_structure_preserved";
            else if (!anchoredLayout) reason = "insufficient_layout_anchors";
            ClassProposal proposal = new ClassProposal(evidence.owner, structure.getPathName(),
                structure.getLength(), observedSize, exactSize, proposedSize,
                ownerFields.size(), autoFields, apply, apply ? "high" : "manual",
                reason, evidence.functions);
            classRows.add(proposal);
            fieldRows.addAll(ownerFields);
        }
        classRows.sort(Comparator.comparing(row -> row.owner));
        fieldRows.sort(Comparator.comparing((FieldProposal row) -> row.owner)
            .thenComparingLong(row -> row.offset));

        writeClasses(directory.resolve("class_layout_proposals.tsv"), classRows);
        writeFields(directory.resolve("class_field_proposals.tsv"), fieldRows);
        writeSummary(directory.resolve("class_layout_summary.txt"), classRows, fieldRows);
        long applicable = classRows.stream().filter(row -> row.apply).count();
        long fields = fieldRows.stream().filter(row -> row.apply).count();
        println("Class-layout analysis complete: " + directory.toAbsolutePath().normalize());
        println("Classes: " + classRows.size() + ", class_apply: " + applicable +
            ", fields: " + fieldRows.size() + ", field_apply: " + fields);
    }

    private void analyzeFunction(Function function, ClassEvidence owner) {
        Map<String, Long> aliases = new HashMap<>();
        aliases.put("ECX", 0L);
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            String text = instruction.toString().toUpperCase(Locale.ROOT);
            String[] operands = splitOperands(text);

            if (!"LEA".equals(mnemonic)) {
                int size = accessSize(text, operands);
                for (int operandIndex = 0; operandIndex < operands.length; operandIndex++) {
                    MemoryExpr memory = memoryExpr(operands[operandIndex]);
                    if (memory == null || !aliases.containsKey(memory.register)) continue;
                    long offset = aliases.get(memory.register) + memory.displacement;
                    if (offset < 0 || offset >= MAX_CLASS_SIZE || size <= 0 || size > 8) continue;
                    FieldEvidence field = owner.fields.computeIfAbsent(offset,
                        ignored -> new FieldEvidence(offset));
                    field.sizes.merge(size, 1, Integer::sum);
                    boolean write = operandIndex == 0 && isWriteMnemonic(mnemonic);
                    if (write) field.writes++;
                    else field.reads++;
                    field.functions.add(function.getEntryPoint().toString().toUpperCase(Locale.ROOT));
                    owner.functions.add(function.getEntryPoint().toString().toUpperCase(Locale.ROOT));
                }
            }

            if ("CALL".equals(mnemonic)) {
                aliases.remove("EAX");
                aliases.remove("ECX");
                aliases.remove("EDX");
                continue;
            }
            updateAliases(mnemonic, operands, aliases);
        }
    }

    private List<FieldProposal> makeFields(ClassEvidence evidence, Structure structure,
            String vtableType, long proposedSize) {
        List<FieldProposal> result = new ArrayList<>();
        boolean hasOffsetZero = false;
        for (FieldEvidence field : evidence.fields.values()) {
            if (field.offset == 0) hasOffsetZero = true;
            int size = field.dominantSize();
            boolean consistent = field.sizes.size() == 1;
            String name = field.offset == 0 && vtableType != null ? "vtable" :
                String.format("field_%04X", field.offset);
            String type = field.offset == 0 && vtableType != null ? "pointer:" + vtableType :
                "/undefined" + size;
            DataTypeComponent existing = field.offset <= Integer.MAX_VALUE ?
                structure.getComponentAt((int)field.offset) : null;
            if (existing != null && existing.getOffset() == field.offset &&
                    existing.getDataType() instanceof Enum && existing.getLength() == size &&
                    existing.getComment() != null &&
                    existing.getComment().contains(SWITCH_ENUM_MARKER)) {
                type = existing.getDataType().getPathName();
                if (existing.getFieldName() != null) name = existing.getFieldName();
            }
            boolean apply = consistent && field.offset + size <= proposedSize;
            String reason = !consistent ? "conflicting_access_widths=" + field.sizeText() :
                field.offset == 0 && vtableType != null ? "owner_vtable_pointer" :
                "consistent_this_relative_access";
            result.add(new FieldProposal(evidence.owner, field.offset, size, name, type,
                field.reads, field.writes, field.functions, apply,
                apply ? "high" : "conflict", reason));
        }
        // A high-confidence owner vtable is direct layout evidence even when none of the
        // currently named methods happens to dereference [this] itself.
        if (!hasOffsetZero && vtableType != null && proposedSize >= 4) {
            result.add(new FieldProposal(evidence.owner, 0, 4, "vtable",
                "pointer:" + vtableType, 0, 0, Set.of(), true, "high",
                "owner_vtable_pointer"));
        }
        result.sort(Comparator.comparingLong(field -> field.offset));
        return result;
    }

    private void markOverlaps(List<FieldProposal> fields) {
        for (int left = 0; left < fields.size(); left++) {
            FieldProposal a = fields.get(left);
            if (!a.apply) continue;
            for (int right = left + 1; right < fields.size(); right++) {
                FieldProposal b = fields.get(right);
                if (b.offset >= a.offset + a.size) break;
                if (!b.apply || a.offset == b.offset) continue;
                a.apply = false;
                b.apply = false;
                a.confidence = b.confidence = "conflict";
                a.reason = "overlaps_field_" + String.format("%04X", b.offset);
                b.reason = "overlaps_field_" + String.format("%04X", a.offset);
            }
        }
    }

    private Map<String, Long> readClassSizes(Path path) throws Exception {
        Map<String, Long> result = new TreeMap<>();
        if (!Files.isRegularFile(path)) return result;
        Tsv tsv = readTsv(path);
        if (!tsv.header.contains("owner") || !tsv.header.contains("size")) return result;
        for (Map<String, String> row : tsv.rows) {
            if (!enabled(row.get("apply"))) continue;
            result.put(unt(row.get("owner")), Long.parseLong(row.get("size")));
        }
        return result;
    }

    private Map<String, String> readVtableTypes(Path path) throws Exception {
        Map<String, String> result = new TreeMap<>();
        if (!Files.isRegularFile(path)) return result;
        Tsv tsv = readTsv(path);
        if (!tsv.header.contains("owner") || !tsv.header.contains("proposed_name")) return result;
        for (Map<String, String> row : tsv.rows) {
            String owner = unt(row.get("owner")), name = unt(row.get("proposed_name"));
            if (owner.isBlank() || name.isBlank()) continue;
            DataType type = dataTypes.getDataType(
                "/SubmarineTitans/Recovered/VTables/" + name);
            if (type != null) result.putIfAbsent(owner, type.getPathName());
        }
        return result;
    }

    private String ownerOf(Function function) {
        String qualified = function.getName(true);
        int separator = qualified.lastIndexOf("::");
        if (separator > 0) {
            String owner = qualified.substring(0, separator);
            String upper = owner.toUpperCase(Locale.ROOT);
            if (!owner.equals("Global") && !owner.startsWith("Library::") &&
                    !upper.contains(".DLL")) return owner;
        }
        for (Parameter parameter : function.getParameters()) {
            if (!parameter.isAutoParameter() || !(parameter.getDataType() instanceof Pointer pointer))
                continue;
            DataType pointed = pointer.getDataType();
            if (pointed != null && pointed instanceof Structure) return pointed.getName();
        }
        return "";
    }

    private boolean isLibrary(Function function) {
        for (FunctionTag tag : function.getTags()) {
            String name = tag.getName();
            if ("LIBRARY".equals(name) || name.startsWith("LIBRARY_")) return true;
        }
        return false;
    }

    private DataType findOwnerType(String owner) {
        String name = leaf(owner);
        DataType direct = dataTypes.getDataType("/" + name);
        if (direct instanceof Structure) return direct;
        List<DataType> matches = new ArrayList<>();
        dataTypes.findDataTypes(name, matches);
        for (DataType match : matches) {
            if (match instanceof Structure &&
                    !match.getPathName().contains("/Recovered/VTables/")) return match;
        }
        return null;
    }

    private boolean isPlaceholder(Structure structure) {
        String description = structure.getDescription();
        return structure.getLength() <= 1 && structure.getNumDefinedComponents() == 0 &&
            (description == null || description.isBlank() ||
                description.contains("PlaceHolder Class Structure"));
    }

    private boolean isOwnedUnchangedCandidate(Structure structure) {
        String description = structure.getDescription();
        return description != null && description.contains(MARKER) &&
            description.contains("generated_layout_sha256=");
    }

    private void updateAliases(String mnemonic, String[] operands, Map<String, Long> aliases) {
        if (operands.length == 0) return;
        String destination = cleanRegister(operands[0]);
        if ("MOV".equals(mnemonic) && destination != null && operands.length >= 2) {
            String sourceRegister = cleanRegister(operands[1]);
            Long source = sourceRegister == null ? null : aliases.get(sourceRegister);
            if (source == null) aliases.remove(destination);
            else aliases.put(destination, source);
            return;
        }
        if ("LEA".equals(mnemonic) && destination != null && operands.length >= 2) {
            MemoryExpr sourceMemory = memoryExpr(operands[1]);
            Long source = sourceMemory == null ? null : aliases.get(sourceMemory.register);
            if (source == null) aliases.remove(destination);
            else aliases.put(destination, source + sourceMemory.displacement);
            return;
        }
        if (("ADD".equals(mnemonic) || "SUB".equals(mnemonic)) && destination != null &&
                aliases.containsKey(destination) && operands.length >= 2) {
            Long value = immediate(operands[1]);
            if (value == null) aliases.remove(destination);
            else aliases.put(destination, aliases.get(destination) +
                ("SUB".equals(mnemonic) ? -value : value));
            return;
        }
        if (destination != null && !Set.of("CMP", "TEST", "PUSH", "JMP", "RET")
                .contains(mnemonic)) aliases.remove(destination);
    }

    private boolean isWriteMnemonic(String mnemonic) {
        return !Set.of("CMP", "TEST", "PUSH", "CALL", "JMP", "LEA").contains(mnemonic);
    }

    private int accessSize(String text, String[] operands) {
        if (text.contains("QWORD PTR")) return 8;
        if (text.contains("DWORD PTR")) return 4;
        if (text.contains("WORD PTR")) return 2;
        if (text.contains("BYTE PTR")) return 1;
        for (String operand : operands) {
            String register = cleanRegister(operand);
            if (register == null) continue;
            if (register.startsWith("E")) return 4;
            if (register.endsWith("X") || register.endsWith("I") || register.endsWith("P")) return 2;
            if (register.endsWith("L") || register.endsWith("H")) return 1;
        }
        return 4;
    }

    private String[] splitOperands(String text) {
        int space = text.indexOf(' ');
        if (space < 0) return new String[0];
        String value = text.substring(space + 1).trim();
        return value.isEmpty() ? new String[0] : value.split("\\s*,\\s*", -1);
    }

    private MemoryExpr memoryExpr(String operand) {
        int open = operand.indexOf('['), close = operand.lastIndexOf(']');
        if (open < 0 || close <= open) return null;
        String expression = operand.substring(open, close + 1).replace(" ", "");
        Matcher matcher = MEMORY.matcher(expression);
        if (!matcher.matches()) return null; // Indexed accesses are deliberately excluded.
        long displacement = 0;
        if (matcher.group(3) != null) {
            Long parsed = immediate(matcher.group(3));
            if (parsed == null) return null;
            displacement = "-".equals(matcher.group(2)) ? -parsed : signed32(parsed);
        }
        return new MemoryExpr(matcher.group(1), displacement);
    }

    private String cleanRegister(String operand) {
        String value = operand.trim().toUpperCase(Locale.ROOT);
        return REGISTER.matcher(value).matches() ? value : null;
    }

    private Long immediate(String operand) {
        String value = operand.trim().toUpperCase(Locale.ROOT);
        try {
            if (value.startsWith("0X")) return Long.parseUnsignedLong(value.substring(2), 16);
            if (value.matches("[0-9]+")) return Long.parseLong(value);
        }
        catch (NumberFormatException exception) { return null; }
        return null;
    }

    private long signed32(long value) {
        return value <= 0xffffffffL && (value & 0x80000000L) != 0 ? value - 0x100000000L : value;
    }

    private Path programDirectory(File selected) {
        Path path = selected.toPath().toAbsolutePath().normalize();
        if (Files.isRegularFile(path.resolve("vtable_proposals.tsv")) ||
                Files.isRegularFile(path.resolve("constructor_class_sizes.tsv"))) return path;
        return path.resolve(safe(currentProgram.getName()));
    }

    private File outputDirectory() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless()) throw new IllegalArgumentException("Recovery directory required");
        return askDirectory("Select recovery output directory", "Analyze class layouts");
    }

    private void writeClasses(Path path, List<ClassProposal> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\towner\ttype_path\texisting_length\tobserved_min_size\t" +
                "exact_allocation_size\tproposed_length\tfield_count\tauto_field_count\t" +
                "confidence\treason\tevidence_functions\n");
            for (ClassProposal row : rows) out.write(bit(row.apply) + "\t" + tsv(row.owner) +
                "\t" + tsv(row.typePath) + "\t" + row.existingLength + "\t" +
                row.observedSize + "\t" + (row.exactSize < 0 ? "" : row.exactSize) + "\t" +
                row.proposedLength + "\t" + row.fieldCount + "\t" + row.autoFieldCount +
                "\t" + row.confidence + "\t" + row.reason + "\t" +
                tsv(String.join(" | ", row.functions)) + "\n");
        }
    }

    private void writeFields(Path path, List<FieldProposal> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\towner\toffset\toffset_hex\tsize\tproposed_name\t" +
                "proposed_type\treads\twrites\tconfidence\treason\tevidence_functions\n");
            for (FieldProposal row : rows) out.write(bit(row.apply) + "\t" + tsv(row.owner) +
                "\t" + row.offset + "\t" + String.format("0x%X", row.offset) + "\t" +
                row.size + "\t" + row.name + "\t" + tsv(row.type) + "\t" + row.reads +
                "\t" + row.writes + "\t" + row.confidence + "\t" + row.reason + "\t" +
                tsv(String.join(" | ", row.functions)) + "\n");
        }
    }

    private void writeSummary(Path path, List<ClassProposal> classes, List<FieldProposal> fields)
            throws Exception {
        Files.write(path, List.of("program=" + currentProgram.getName(),
            "classes_with_this_accesses=" + classes.size(),
            "class_auto_apply=" + classes.stream().filter(row -> row.apply).count(),
            "field_proposals=" + fields.size(),
            "field_auto_apply=" + fields.stream().filter(row -> row.apply).count(),
            "field_conflicts=" + fields.stream().filter(row -> !row.apply).count(),
            "note=Only exact register-plus-constant accesses derived from incoming ECX are used.",
            "note_manual=Non-placeholder structures and generated structures whose current layout " +
                "cannot be verified are never auto-applied."), StandardCharsets.UTF_8);
    }

    private Tsv readTsv(Path path) throws Exception {
        List<String> lines = Files.readAllLines(path, StandardCharsets.UTF_8);
        if (lines.isEmpty()) throw new IllegalArgumentException("Empty TSV: " + path);
        String[] header = lines.get(0).split("\\t", -1);
        List<Map<String, String>> rows = new ArrayList<>();
        for (int line = 1; line < lines.size(); line++) {
            if (lines.get(line).isBlank()) continue;
            String[] values = lines.get(line).split("\\t", -1);
            if (values.length != header.length) continue;
            Map<String, String> row = new LinkedHashMap<>();
            for (int column = 0; column < header.length; column++)
                row.put(header[column], values[column]);
            rows.add(row);
        }
        return new Tsv(List.of(header), rows);
    }

    private static String leaf(String owner) {
        int separator = owner.lastIndexOf("::");
        return separator < 0 ? owner : owner.substring(separator + 2);
    }
    private static boolean enabled(String value) {
        return "1".equals(value) || "true".equalsIgnoreCase(value) ||
            "yes".equalsIgnoreCase(value);
    }
    private static String bit(boolean value) { return value ? "1" : "0"; }
    private static String safe(String value) {
        return value.replaceAll("[^A-Za-z0-9._-]+", "_");
    }
    private static String tsv(String value) {
        return value.replace("\\", "\\\\").replace("\t", "\\t")
            .replace("\r", "\\r").replace("\n", "\\n");
    }
    private static String unt(String value) {
        if (value == null) return "";
        StringBuilder result = new StringBuilder();
        boolean escaped = false;
        for (char ch : value.toCharArray()) {
            if (!escaped && ch == '\\') { escaped = true; continue; }
            if (escaped) {
                if (ch == 't') result.append('\t');
                else if (ch == 'r') result.append('\r');
                else if (ch == 'n') result.append('\n');
                else result.append(ch);
                escaped = false;
            }
            else result.append(ch);
        }
        if (escaped) result.append('\\');
        return result.toString();
    }

    private static class Tsv {
        final List<String> header;
        final List<Map<String, String>> rows;
        Tsv(List<String> header, List<Map<String, String>> rows) {
            this.header = header; this.rows = rows;
        }
    }
    private static class MemoryExpr {
        final String register;
        final long displacement;
        MemoryExpr(String register, long displacement) {
            this.register = register; this.displacement = displacement;
        }
    }
    private static class ClassEvidence {
        final String owner;
        final Map<Long, FieldEvidence> fields = new TreeMap<>();
        final Set<String> functions = new TreeSet<>();
        ClassEvidence(String owner) { this.owner = owner; }
    }
    private static class FieldEvidence {
        final long offset;
        final Map<Integer, Integer> sizes = new TreeMap<>();
        final Set<String> functions = new TreeSet<>();
        int reads, writes;
        FieldEvidence(long offset) { this.offset = offset; }
        int dominantSize() {
            return sizes.entrySet().stream().max(Comparator
                .<Map.Entry<Integer, Integer>>comparingInt(Map.Entry::getValue)
                .thenComparingInt(Map.Entry::getKey)).map(Map.Entry::getKey).orElse(1);
        }
        int maximumSize() { return sizes.keySet().stream().mapToInt(Integer::intValue).max().orElse(1); }
        String sizeText() {
            List<String> result = new ArrayList<>();
            for (Map.Entry<Integer, Integer> entry : sizes.entrySet())
                result.add(entry.getKey() + "x" + entry.getValue());
            return String.join("|", result);
        }
    }
    private static class ClassProposal {
        final String owner, typePath, confidence, reason;
        final long existingLength, observedSize, exactSize, proposedLength, fieldCount,
            autoFieldCount;
        final boolean apply;
        final Set<String> functions;
        ClassProposal(String owner, String typePath, long existingLength, long observedSize,
                long exactSize, long proposedLength, long fieldCount, long autoFieldCount,
                boolean apply, String confidence, String reason, Set<String> functions) {
            this.owner = owner; this.typePath = typePath; this.existingLength = existingLength;
            this.observedSize = observedSize; this.exactSize = exactSize;
            this.proposedLength = proposedLength; this.fieldCount = fieldCount;
            this.autoFieldCount = autoFieldCount; this.apply = apply;
            this.confidence = confidence; this.reason = reason;
            this.functions = new TreeSet<>(functions);
        }
    }
    private static class FieldProposal {
        final String owner, name, type;
        final long offset;
        final int size, reads, writes;
        final Set<String> functions;
        boolean apply;
        String confidence, reason;
        FieldProposal(String owner, long offset, int size, String name, String type,
                int reads, int writes, Set<String> functions, boolean apply,
                String confidence, String reason) {
            this.owner = owner; this.offset = offset; this.size = size; this.name = name;
            this.type = type; this.reads = reads; this.writes = writes;
            this.functions = new TreeSet<>(functions); this.apply = apply;
            this.confidence = confidence; this.reason = reason;
        }
    }
}
