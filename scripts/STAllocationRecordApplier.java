// Apply exact allocation-backed record views proposed by STAllocationRecordAnalyzer.
// The neutral allocator prototype is never changed. Manual/imported ABI work is preserved.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Apply Allocation Records

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.security.MessageDigest;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.CategoryPath;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeComponent;
import ghidra.program.model.data.DataTypeConflictHandler;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.PointerDataType;
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.StructureDataType;
import ghidra.program.model.data.TypeDef;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.symbol.SourceType;

public class STAllocationRecordApplier extends GhidraScript {
    private static final String MARKER = "[STAllocationRecordApplier]";
    private static final String TAG = "RECOVERED_ALLOCATION_RECORD";
    private static final Pattern STORED_HASH = Pattern.compile(
        "generated_layout_sha256=([0-9a-f]{64})");

    private final List<Report> report = new ArrayList<>();
    private DataTypeManager dataTypes;

    @Override
    protected void run() throws Exception {
        end(true);
        if (currentProgram == null) {
            printerr("Open the analyzed ST program first.");
            return;
        }
        File selected = inputFile();
        if (selected == null) return;
        Path inputPath = selected.toPath().toAbsolutePath().normalize();
        Tsv input = read(inputPath);
        require(input, "apply", "function_address", "expected_function",
            "expected_signature", "expected_signature_source", "allocation_call",
            "allocator_address", "copy_first_site", "copy_last_site", "copy_span",
            "source_parameter_ordinal", "expected_source_name",
            "expected_source_type", "expected_source_source",
            "expected_return_type", "expected_return_source", "proposed_type_path",
            "create_type", "field_layout", "layout_sha256", "field_count",
            "source_apply", "return_apply", "unique_return_root", "confidence",
            "reason");
        dataTypes = currentProgram.getDataTypeManager();

        for (Map<String, String> row : input.rows) {
            monitor.checkCancelled();
            if (!enabled(row.get("apply"))) {
                report.add(new Report(row.get("function_address"), "disabled", "apply=0"));
                continue;
            }
            applyRow(row);
        }

        report.sort(Comparator.comparing((Report row) -> row.functionAddress)
            .thenComparing(row -> row.status));
        Path output = inputPath.getParent().resolve(
            "allocation_record_apply_report.tsv");
        writeReport(output);
        println("Allocation records: applied=" + count("applied") +
            ", unchanged=" + count("unchanged") +
            ", preserved=" + count("preserved") +
            ", conflicts=" + count("conflict") +
            ", disabled=" + count("disabled"));
        println("Apply report: " + output);
    }

    private void applyRow(Map<String, String> row) {
        String addressText = row.get("function_address");
        int transaction = currentProgram.startTransaction(
            "Apply allocation record " + addressText);
        boolean commit = false;
        try {
            Function function = function(addressText);
            if (function == null)
                throw new IllegalArgumentException("function is missing");
            if (!function.getName(true).equals(row.get("expected_function")))
                throw new PreserveException("function identity changed");
            if (!function.getSignature().getPrototypeString(true)
                    .equals(row.get("expected_signature")) ||
                    !function.getSignatureSource().toString()
                        .equals(row.get("expected_signature_source")))
                throw new PreserveException("signature baseline is stale");
            if (!enabled(row.get("unique_return_root")))
                throw new IllegalArgumentException(
                    "proposal does not prove one returned allocation root");
            validateMachineSites(row);

            Parameter source = explicitParameter(function,
                integer(row.get("source_parameter_ordinal")));
            if (source == null)
                throw new IllegalArgumentException("source parameter is missing");
            if (!source.getName().equals(row.get("expected_source_name")) ||
                    !typeSpec(source.getDataType()).equals(
                        row.get("expected_source_type")) ||
                    !source.getSource().toString().equals(
                        row.get("expected_source_source")))
                throw new PreserveException("source parameter baseline is stale");
            if (!typeSpec(function.getReturnType()).equals(
                    row.get("expected_return_type")) ||
                    !function.getReturn().getSource().toString().equals(
                        row.get("expected_return_source")))
                throw new PreserveException("return baseline is stale");
            if (protectedSource(source.getSource()) ||
                    protectedSource(function.getReturn().getSource()))
                throw new PreserveException("manual/imported ABI baseline");

            int span = integer(row.get("copy_span"));
            if (span < 1 || span > 0x100000)
                throw new IllegalArgumentException("invalid copy span");
            List<Field> fields = parseFields(row.get("field_layout"));
            if (fields.size() != integer(row.get("field_count")))
                throw new IllegalArgumentException("field-count mismatch");
            validateFields(fields, span);
            String expectedHash = sha256(row.get("proposed_type_path") + "|" +
                serialize(fields));
            if (!expectedHash.equals(row.get("layout_sha256")))
                throw new IllegalArgumentException("proposal layout hash mismatch");

            StructureResult structure = structure(row, fields, span);
            DataType pointer = new PointerDataType(structure.structure,
                currentProgram.getDefaultPointerSize(), dataTypes);
            boolean changed = structure.changed;

            if (enabled(row.get("source_apply")) &&
                    !source.getDataType().isEquivalent(pointer)) {
                source.setDataType(pointer, SourceType.ANALYSIS);
                String comment = mergeComment(source.getComment(),
                    MARKER + " Exact fixed-copy source view; copy_span=" + span +
                    "; allocation_call=" + row.get("allocation_call"));
                source.setComment(comment);
                changed = true;
            }
            if (enabled(row.get("return_apply")) &&
                    !function.getReturnType().isEquivalent(pointer)) {
                function.setReturnType(pointer, SourceType.ANALYSIS);
                changed = true;
            }
            if (changed) function.setSignatureSource(SourceType.ANALYSIS);
            if (!hasTag(function, TAG)) {
                function.addTag(TAG);
                changed = true;
            }
            String commentBlock = MARKER + " Consumer-local packed record " +
                structure.structure.getPathName() + ".\nEvidence: exact " + span +
                "-byte source-parameter copy at " + row.get("copy_first_site") +
                (row.get("copy_first_site").equals(row.get("copy_last_site")) ? "" :
                    ".." + row.get("copy_last_site"));
            String oldComment = text(function.getComment());
            String newComment = mergeComment(oldComment, commentBlock);
            if (!oldComment.equals(newComment)) {
                function.setComment(newComment);
                changed = true;
            }
            commit = true;
            report.add(new Report(addressText, changed ? "applied" : "unchanged",
                (changed ? "installed " : "already present ") +
                    structure.structure.getPathName() + "; fields=" + fields.size() +
                    "; span=" + span));
        }
        catch (PreserveException exception) {
            report.add(new Report(addressText, "preserved", exception.getMessage()));
        }
        catch (Exception exception) {
            report.add(new Report(addressText, "conflict", message(exception)));
        }
        finally {
            currentProgram.endTransaction(transaction, commit);
        }
    }

    private StructureResult structure(Map<String, String> row,
            List<Field> fields, int span) throws Exception {
        String path = row.get("proposed_type_path");
        DataType existing = dataTypes.getDataType(path);
        if (!enabled(row.get("create_type"))) {
            if (!(existing instanceof Structure structure))
                throw new IllegalArgumentException(
                    "existing complete source structure is missing");
            if (structure.getLength() != span)
                throw new IllegalArgumentException(
                    "existing source structure extent changed");
            return new StructureResult(structure, false);
        }

        StructureDataType desired = new StructureDataType(category(path),
            leaf(path), span, dataTypes);
        for (Field field : fields) {
            DataType type = resolve(field.type);
            if (type == null || type.getLength() != field.width)
                throw new IllegalArgumentException("missing/wrong-width field type " +
                    field.type + " at " + field.offset);
            desired.replaceAtOffset((int)field.offset, type, field.width,
                field.name, MARKER + " exact access inside fixed-copy span");
        }
        String description = MARKER + " Consumer-local allocation record; " +
            "producer=" + row.get("function_address") + "; copy_span=" + span +
            "; source_parameter=" + row.get("source_parameter_ordinal") +
            "; generated_layout_sha256=" + row.get("layout_sha256");
        desired.setDescription(description);

        if (existing == null) {
            DataType installed = dataTypes.resolve(desired,
                DataTypeConflictHandler.KEEP_HANDLER);
            if (!(installed instanceof Structure structure) ||
                    !structure.getPathName().equals(path))
                throw new IllegalStateException("generated type path is occupied");
            structure.setDescription(description);
            return new StructureResult(structure, true);
        }
        if (!(existing instanceof Structure structure))
            throw new PreserveException("generated type path is manually occupied");
        String oldDescription = text(structure.getDescription());
        if (!oldDescription.contains(MARKER))
            throw new PreserveException("existing structure is not script-owned");
        Matcher stored = STORED_HASH.matcher(oldDescription);
        if (!stored.find())
            throw new PreserveException("generated structure has no layout baseline");
        String currentHash = sha256(path + "|" + serialize(structureFields(structure)));
        if (!stored.group(1).equals(currentHash))
            throw new PreserveException("edited generated structure preserved");
        boolean changed = false;
        if (!structure.isEquivalent(desired)) {
            structure.replaceWith(desired);
            changed = true;
        }
        if (!text(structure.getDescription()).equals(description)) {
            structure.setDescription(description);
            changed = true;
        }
        return new StructureResult(structure, changed);
    }

    private void validateMachineSites(Map<String, String> row) {
        Instruction allocation = instruction(row.get("allocation_call"));
        if (allocation == null ||
                !"CALL".equalsIgnoreCase(allocation.getMnemonicString()))
            throw new IllegalArgumentException("allocation call is stale");
        Function target = directCalledFunction(allocation);
        target = resolveThunk(target);
        if (target == null || !addr(target.getEntryPoint())
                .equals(row.get("allocator_address")))
            throw new IllegalArgumentException("allocator target is stale");
        Instruction first = instruction(row.get("copy_first_site"));
        Instruction last = instruction(row.get("copy_last_site"));
        if (!stringMove(first) || !stringMove(last))
            throw new IllegalArgumentException("fixed-copy machine sites are stale");
    }

    private Instruction instruction(String value) {
        Address address = currentProgram.getAddressFactory().getAddress(value);
        return address == null ? null : currentProgram.getListing()
            .getInstructionAt(address);
    }

    private boolean stringMove(Instruction instruction) {
        if (instruction == null) return false;
        String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
        return mnemonic.startsWith("MOVSD") || mnemonic.startsWith("MOVSW") ||
            mnemonic.startsWith("MOVSB");
    }

    private Function directCalledFunction(Instruction instruction) {
        for (Address flow : instruction.getFlows()) {
            Function function = currentProgram.getFunctionManager().getFunctionAt(flow);
            if (function != null) return function;
        }
        return null;
    }

    private Function resolveThunk(Function function) {
        java.util.Set<Address> seen = new java.util.HashSet<>();
        while (function != null && function.isThunk() &&
                seen.add(function.getEntryPoint())) {
            Function target = function.getThunkedFunction(false);
            if (target == null || target.equals(function)) break;
            function = target;
        }
        return function;
    }

    private Parameter explicitParameter(Function function, int ordinal) {
        for (Parameter parameter : function.getParameters())
            if (!parameter.isAutoParameter() &&
                    parameter.getOrdinal() == ordinal) return parameter;
        return null;
    }

    private List<Field> parseFields(String value) {
        List<Field> result = new ArrayList<>();
        if (value == null || value.isBlank()) return result;
        for (String item : value.split("\\|", -1)) {
            String[] parts = item.split(",", 4);
            if (parts.length != 4)
                throw new IllegalArgumentException("invalid field layout entry");
            result.add(new Field(Long.parseLong(parts[0]),
                Integer.parseInt(parts[1]), parts[2], parts[3]));
        }
        result.sort(Comparator.comparingLong(field -> field.offset));
        return result;
    }

    private void validateFields(List<Field> fields, int span) {
        long end = -1;
        for (Field field : fields) {
            if (field.offset < 0 || field.width < 1 ||
                    field.offset + field.width > span || field.offset < end)
                throw new IllegalArgumentException(
                    "overlapping/out-of-range generated field");
            if (field.name.isBlank())
                throw new IllegalArgumentException("blank generated field name");
            end = field.offset + field.width;
        }
    }

    private List<Field> structureFields(Structure structure) {
        List<Field> result = new ArrayList<>();
        for (DataTypeComponent component : structure.getDefinedComponents())
            result.add(new Field(component.getOffset(), component.getLength(),
                typeSpec(component.getDataType()), component.getFieldName()));
        result.sort(Comparator.comparingLong(field -> field.offset));
        return result;
    }

    private String serialize(List<Field> fields) {
        List<String> values = new ArrayList<>();
        for (Field field : fields)
            values.add(field.offset + "," + field.width + "," +
                field.type + "," + field.name);
        return String.join("|", values);
    }

    private DataType resolve(String specification) {
        if (specification.startsWith("pointer:")) {
            DataType base = resolve(specification.substring("pointer:".length()));
            return base == null ? null : new PointerDataType(base,
                currentProgram.getDefaultPointerSize(), dataTypes);
        }
        return dataTypes.getDataType(specification);
    }

    private DataType untypedef(DataType type) {
        while (type instanceof TypeDef definition)
            type = definition.getBaseDataType();
        return type;
    }

    private String typeSpec(DataType type) {
        type = untypedef(type);
        if (type instanceof Pointer pointer && pointer.getDataType() != null)
            return "pointer:" + typeSpec(pointer.getDataType());
        return type == null ? "" : type.getPathName();
    }

    private boolean protectedSource(SourceType source) {
        return source == SourceType.USER_DEFINED || source == SourceType.IMPORTED;
    }

    private boolean hasTag(Function function, String name) {
        return function.getTags().stream().anyMatch(tag -> name.equals(tag.getName()));
    }

    private String mergeComment(String oldValue, String block) {
        String value = text(oldValue);
        int marker = value.indexOf(MARKER);
        if (marker >= 0) {
            int end = value.indexOf("\n\n", marker);
            if (end < 0) end = value.length();
            String before = value.substring(0, marker).stripTrailing();
            String after = value.substring(end).stripLeading();
            return before.isBlank() ?
                after.isBlank() ? block : block + "\n\n" + after :
                after.isBlank() ? before + "\n\n" + block :
                    before + "\n\n" + block + "\n\n" + after;
        }
        return value.isBlank() ? block : value + "\n\n" + block;
    }

    private Function function(String value) {
        Address address = currentProgram.getAddressFactory().getAddress(value);
        return address == null ? null : currentProgram.getFunctionManager()
            .getFunctionAt(address);
    }

    private CategoryPath category(String path) {
        int split = path.lastIndexOf('/');
        return new CategoryPath(split <= 0 ? "/" : path.substring(0, split));
    }

    private String leaf(String path) {
        int split = path.lastIndexOf('/');
        return split < 0 ? path : path.substring(split + 1);
    }

    private long count(String status) {
        return report.stream().filter(row -> row.status.equals(status)).count();
    }

    private void writeReport(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path,
                StandardCharsets.UTF_8)) {
            out.write("function_address\tstatus\tdetail\n");
            for (Report row : report)
                out.write(row.functionAddress + "\t" + row.status + "\t" +
                    clean(row.detail) + "\n");
        }
    }

    private File inputFile() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException(
                "Path to allocation_record_proposals.tsv is required");
        return askFile("Select allocation_record_proposals.tsv", "Apply");
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
                row.put(header[column], unt(values[column]));
            rows.add(row);
        }
        return new Tsv(List.of(header), rows);
    }

    private void require(Tsv input, String... columns) {
        for (String column : columns)
            if (!input.header.contains(column))
                throw new IllegalArgumentException("Missing TSV column: " + column);
    }

    private static boolean enabled(String value) {
        return "1".equals(value) || "true".equalsIgnoreCase(value) ||
            "yes".equalsIgnoreCase(value);
    }
    private static int integer(String value) { return Integer.parseInt(value); }
    private static String addr(Address value) {
        return value == null ? "" : value.toString().toUpperCase(Locale.ROOT);
    }
    private static String text(String value) { return value == null ? "" : value; }
    private static String clean(String value) {
        return text(value).replace("\\", "\\\\").replace("\t", "\\t")
            .replace("\r", "\\r").replace("\n", "\\n");
    }
    private static String unt(String value) {
        if (value == null || value.indexOf('\\') < 0) return text(value);
        StringBuilder result = new StringBuilder();
        boolean escaped = false;
        for (char ch : value.toCharArray()) {
            if (!escaped && ch == '\\') { escaped = true; continue; }
            if (escaped) {
                result.append(ch == 't' ? '\t' : ch == 'r' ? '\r' :
                    ch == 'n' ? '\n' : ch);
                escaped = false;
            }
            else result.append(ch);
        }
        if (escaped) result.append('\\');
        return result.toString();
    }
    private static String sha256(String value) throws Exception {
        byte[] digest = MessageDigest.getInstance("SHA-256")
            .digest(value.getBytes(StandardCharsets.UTF_8));
        StringBuilder result = new StringBuilder();
        for (byte item : digest) result.append(String.format("%02x", item & 0xff));
        return result.toString();
    }
    private static String message(Exception exception) {
        String value = exception.getMessage();
        return value == null || value.isBlank() ?
            exception.getClass().getSimpleName() : value;
    }

    private record Field(long offset, int width, String type, String name) { }
    private record StructureResult(Structure structure, boolean changed) { }
    private record Report(String functionAddress, String status, String detail) { }
    private record Tsv(List<String> header, List<Map<String, String>> rows) { }
    private static final class PreserveException extends Exception {
        PreserveException(String message) { super(message); }
    }
}
