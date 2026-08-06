// Apply recursive linked-node structures proposed by STRecursivePointeeAnalyzer.
// Manual/imported or hash-diverged structures are always preserved.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Apply Recursive Pointees

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
import java.util.Set;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

import ghidra.app.script.GhidraScript;
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
import ghidra.program.model.data.Undefined;

public class STRecursivePointeeApplier extends GhidraScript {
    private static final String MARKER = "[STRecursivePointeeApplier]";
    private static final String HASH_MARKER = "; generated_layout_sha256=";
    private static final Set<String> OWNER_MARKERS = Set.of(
        "[STClassLayoutApplier]", "[STGlobalDataApplier]",
        "[STPointerShapeApplier]", "[STTypeFamilyApplier]");
    private static final Pattern STORED_HASH = Pattern.compile(
        "generated_layout_sha256=([0-9a-fA-F]{64})");

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
        Path input = selected.toPath().toAbsolutePath().normalize();
        Tsv tsv = read(input);
        require(tsv, "apply", "owner_path", "expected_owner_hash", "field_offset",
            "expected_field_name", "expected_field_type", "expected_field_comment",
            "node_path", "node_length", "field_layout", "node_layout_sha256",
            "root_loads", "traversal_sites", "source_view_count",
            "nonzero_field_count", "source_view_hashes", "evidence_functions",
            "evidence_variables", "confidence", "reason");
        dataTypes = currentProgram.getDataTypeManager();

        for (Map<String, String> row : tsv.rows) {
            monitor.checkCancelled();
            if (!enabled(row.get("apply"))) {
                report.add(new Report(target(row), "disabled", "apply=0"));
                continue;
            }
            apply(row);
        }
        report.sort(Comparator.comparing((Report row) -> row.target));
        Path output = input.getParent().resolve("recursive_pointee_apply_report.tsv");
        writeReport(output);
        println("Recursive pointees: applied=" + count("applied") +
            ", updated=" + count("updated") + ", unchanged=" + count("unchanged") +
            ", preserved=" + count("preserved") + ", conflicts=" + count("conflict") +
            ", disabled=" + count("disabled"));
        println("Apply report: " + output);
    }

    private void apply(Map<String, String> row) {
        String target = target(row);
        int transaction = currentProgram.startTransaction(
            "Apply recursive pointee " + target);
        boolean commit = false;
        try {
            Structure owner = structure(row.get("owner_path"));
            if (owner == null) throw new PreserveException("owner structure is missing");
            validateGenerated(owner, OWNER_MARKERS, row.get("expected_owner_hash"));
            int offset = integer(row.get("field_offset"));
            DataTypeComponent component = owner.getComponentAt(offset);
            if (component == null || component.getOffset() != offset ||
                    component.getLength() != currentProgram.getDefaultPointerSize())
                throw new PreserveException("exact owner pointer field is missing");
            if (!text(component.getFieldName()).equals(row.get("expected_field_name")) ||
                    !text(component.getComment()).equals(row.get("expected_field_comment")) ||
                    !typeSpec(component.getDataType()).equals(row.get("expected_field_type")))
                throw new PreserveException("owner field baseline is stale");
            if (integer(row.get("root_loads")) < 2 ||
                    integer(row.get("traversal_sites")) < 2 ||
                    integer(row.get("source_view_count")) < 2 ||
                    integer(row.get("nonzero_field_count")) < 3)
                throw new IllegalArgumentException("proposal lacks independent recursive evidence");
            validateSourceViews(row.get("source_view_hashes"));

            int length = integer(row.get("node_length"));
            if (length < currentProgram.getDefaultPointerSize() || length > 0x4000)
                throw new IllegalArgumentException("invalid node length");
            List<Field> fields = parseFields(row.get("field_layout"));
            validateFields(fields, length);
            String proposalHash = sha256(row.get("node_path") + "|" +
                row.get("field_layout"));
            if (!proposalHash.equals(row.get("node_layout_sha256")))
                throw new IllegalArgumentException("proposal field-layout hash mismatch");

            NodeResult node = installNode(row.get("node_path"), length, fields,
                row.get("source_view_hashes"));
            DataType pointer = new PointerDataType(node.structure,
                currentProgram.getDefaultPointerSize(), dataTypes);
            boolean ownerChanged = !component.getDataType().isEquivalent(pointer);
            if (ownerChanged) {
                String comment = mergeComment(component.getComment(), MARKER +
                    " Recursive linked-node root; evidence=" +
                    row.get("evidence_functions"));
                owner.replaceAtOffset(offset, pointer, pointer.getLength(),
                    component.getFieldName(), comment);
                refreshHash(owner);
            }
            commit = true;
            report.add(new Report(target,
                ownerChanged ? "applied" : node.changed ? "updated" : "unchanged",
                (ownerChanged ? "specialized owner root as " :
                    node.changed ? "updated " : "already present ") +
                    node.structure.getPathName() + "; fields=" + fields.size() +
                    "; length=" + length +
                    (node.changeReason.isBlank() ? "" :
                        "; change=" + node.changeReason)));
        }
        catch (PreserveException exception) {
            report.add(new Report(target, "preserved", exception.getMessage()));
        }
        catch (Exception exception) {
            report.add(new Report(target, "conflict", message(exception)));
        }
        finally {
            currentProgram.endTransaction(transaction, commit);
        }
    }

    private NodeResult installNode(String path, int length, List<Field> fields,
            String sourceViews) throws Exception {
        Structure existing = structure(path);
        boolean created = false;
        if (existing == null) {
            StructureDataType blank = new StructureDataType(category(path), leaf(path),
                length, dataTypes);
            DataType installed = dataTypes.resolve(blank,
                DataTypeConflictHandler.KEEP_HANDLER);
            if (!(installed instanceof Structure structure) ||
                    !structure.getPathName().equals(path))
                throw new IllegalStateException("could not create recursive node " + path);
            existing = structure;
            created = true;
        }
        else {
            String description = text(existing.getDescription());
            if (!description.contains(MARKER))
                throw new PreserveException("node path is manually occupied");
            String stored = storedHash(description);
            if (stored == null || !stored.equals(layoutHash(existing)))
                throw new PreserveException("generated node has manual/stale changes");
        }

        StructureDataType desired = new StructureDataType(category(path), leaf(path),
            length, dataTypes);
        for (Field field : fields) {
            DataType type = resolve(field.type, field.width, existing);
            String comment = MARKER + " field evidence=" + field.evidence +
                "; sources=" + field.sources;
            desired.replaceAtOffset(field.offset, type, field.width,
                field.name, comment);
        }
        // Applying a generated member can hide the raw access which proved it,
        // while exposing a different alias on the following decompile.  Retain
        // the monotonic union of fields already installed by this applier.  This
        // state is never analyzer evidence and cannot make a weak root eligible;
        // manual/hash-diverged structures were rejected above.
        if (!created) retainProvenGeneratedFields(existing, desired);

        // Structure.isEquivalent() is deliberately recursive.  Compare the
        // exact persisted layout instead, including names/comments/type paths.
        List<String> changeReasons = new ArrayList<>();
        String presentationDifference = presentationDifference(existing, desired);
        boolean changed = created || presentationDifference != null;
        if (created) changeReasons.add("created");
        else if (presentationDifference != null)
            changeReasons.add("presentation:" + presentationDifference);
        if (changed) existing.replaceWith(desired);
        String description = MARKER + " Recursive linked-node view; root_identity=" +
            path.substring(path.lastIndexOf('/') + 1) + "; source_views=" + sourceViews +
            HASH_MARKER + layoutHash(existing);
        // Source-view presentation can legitimately alternate with the raw
        // decompiler spelling.  It is provenance, not layout.  Refresh it only
        // when the owned layout itself changed; otherwise retain the already
        // hash-valid description and report a true fixed point.
        if ((created || presentationDifference != null) &&
                !text(existing.getDescription()).equals(description)) {
            existing.setDescription(description);
            changed = true;
            changeReasons.add("description");
        }
        return new NodeResult(existing, changed, String.join("|", changeReasons));
    }

    private void retainProvenGeneratedFields(Structure existing,
            Structure desired) {
        for (DataTypeComponent old : existing.getDefinedComponents()) {
            if (old.getOffset() < 0 ||
                    old.getOffset() + old.getLength() > desired.getLength())
                continue;
            DataTypeComponent exact = exactDefinedComponent(desired,
                old.getOffset());
            if (exact != null && exact.getLength() == old.getLength()) {
                int oldStrength = generatedTypeStrength(old.getDataType());
                int newStrength = generatedTypeStrength(exact.getDataType());
                boolean currentNameUpgrade =
                    semanticFieldName(exact.getFieldName()) &&
                    !semanticFieldName(old.getFieldName());
                boolean keepOldType = oldStrength >= newStrength &&
                    !sameComponentType(old.getDataType(), exact.getDataType());
                boolean keepOldPresentation =
                    sameComponentType(old.getDataType(), exact.getDataType()) &&
                    !currentNameUpgrade;
                if (keepOldType || keepOldPresentation)
                    desired.replaceAtOffset(old.getOffset(), old.getDataType(),
                        old.getLength(), old.getFieldName(), old.getComment());
                continue;
            }
            if (overlapsDefinedComponent(desired, old.getOffset(), old.getLength()))
                throw new IllegalArgumentException(
                    "new recursive field overlaps retained generated field at 0x" +
                    Integer.toHexString(old.getOffset()).toUpperCase(Locale.ROOT));
            desired.replaceAtOffset(old.getOffset(), old.getDataType(),
                old.getLength(), old.getFieldName(), old.getComment());
        }
    }

    private DataTypeComponent exactDefinedComponent(Structure structure,
            int offset) {
        for (DataTypeComponent component : structure.getDefinedComponents())
            if (component.getOffset() == offset) return component;
        return null;
    }

    private boolean overlapsDefinedComponent(Structure structure, int offset,
            int length) {
        int end = offset + length;
        for (DataTypeComponent component : structure.getDefinedComponents()) {
            int otherStart = component.getOffset();
            int otherEnd = otherStart + component.getLength();
            if (offset < otherEnd && otherStart < end) return true;
        }
        return false;
    }

    private boolean semanticFieldName(String name) {
        return name != null && !name.isBlank() &&
            !name.matches("(?:field|value)_(?:0[xX])?[0-9A-Fa-f]+");
    }

    private int generatedTypeStrength(DataType type) {
        type = untypedef(type);
        if (type == null || Undefined.isUndefined(type)) return 0;
        if (type instanceof Pointer pointer) {
            DataType pointed = untypedef(pointer.getDataType());
            if (pointed == null || Undefined.isUndefined(pointed) ||
                    Set.of("/void", "/byte", "/char").contains(
                        pointed.getPathName())) return 1;
            return 3;
        }
        return 2;
    }

    private boolean samePresentation(Structure left, Structure right) {
        return presentationDifference(left, right) == null;
    }

    private String presentationDifference(Structure left, Structure right) {
        if (left.getLength() != right.getLength())
            return "length " + left.getLength() + "->" + right.getLength();
        DataTypeComponent[] a = left.getDefinedComponents();
        DataTypeComponent[] b = right.getDefinedComponents();
        if (a.length != b.length)
            return "component_count " + a.length + "->" + b.length;
        for (int index = 0; index < a.length; index++) {
            if (a[index].getOffset() != b[index].getOffset())
                return "component_" + index + "_offset " +
                    a[index].getOffset() + "->" + b[index].getOffset();
            if (a[index].getLength() != b[index].getLength())
                return "component_" + index + "_length " +
                    a[index].getLength() + "->" + b[index].getLength();
            if (!sameComponentType(a[index].getDataType(), b[index].getDataType()))
                return "component_" + index + "_type " +
                    a[index].getDataType().getPathName() + "->" +
                    b[index].getDataType().getPathName();
            if (!text(a[index].getFieldName()).equals(text(b[index].getFieldName())))
                return "component_" + index + "_name";
            if (!text(a[index].getComment()).equals(text(b[index].getComment())))
                return "component_" + index + "_comment";
        }
        return null;
    }

    private boolean sameComponentType(DataType left, DataType right) {
        left = untypedef(left);
        right = untypedef(right);
        if (left == null || right == null) return left == right;
        return left.getLength() == right.getLength() &&
            left.getPathName().equals(right.getPathName());
    }

    private void validateGenerated(Structure structure, Set<String> markers,
            String expectedHash) throws PreserveException {
        String description = text(structure.getDescription());
        if (markers.stream().noneMatch(description::contains))
            throw new PreserveException("manual/unowned owner preserved");
        String stored = storedHash(description);
        String current = layoutHash(structure);
        if (stored == null || !stored.equals(current))
            throw new PreserveException("owner layout has manual/stale changes");
        if (!current.equals(expectedHash))
            throw new PreserveException("owner layout changed since analysis");
    }

    private void validateSourceViews(String serialized) throws PreserveException {
        if (serialized.isBlank()) throw new PreserveException("source views are missing");
        for (String item : serialized.split("\\|")) {
            int separator = item.lastIndexOf('=');
            if (separator <= 0) throw new PreserveException("malformed source-view baseline");
            Structure view = structure(item.substring(0, separator));
            if (view == null || !layoutHash(view).equals(item.substring(separator + 1)))
                throw new PreserveException("source view changed: " +
                    item.substring(0, separator));
        }
    }

    private void validateFields(List<Field> fields, int length) {
        if (fields.isEmpty() || fields.get(0).offset != 0 ||
                !fields.get(0).type.equals("self"))
            throw new IllegalArgumentException("field zero is not the recursive link");
        int priorEnd = -1;
        for (Field field : fields) {
            if (field.offset < priorEnd || field.width < 1 ||
                    field.offset + field.width > length)
                throw new IllegalArgumentException("overlapping/out-of-range field at " +
                    field.offset);
            priorEnd = field.offset + field.width;
        }
    }

    private DataType resolve(String specification, int width, Structure self) {
        if (specification.equals("self"))
            return new PointerDataType(self, currentProgram.getDefaultPointerSize(), dataTypes);
        if (specification.startsWith("pointer:")) {
            DataType pointed = dataTypes.getDataType(specification.substring(8));
            if (pointed == null)
                throw new IllegalArgumentException("missing pointed type " + specification);
            return new PointerDataType(pointed,
                currentProgram.getDefaultPointerSize(), dataTypes);
        }
        if (specification.startsWith("/undefined"))
            return Undefined.getUndefinedDataType(width);
        DataType type = dataTypes.getDataType(specification);
        if (type == null || type.getLength() != width)
            throw new IllegalArgumentException("missing/wrong-width type " + specification);
        return type;
    }

    private void refreshHash(Structure structure) {
        String description = text(structure.getDescription());
        Matcher matcher = STORED_HASH.matcher(description);
        if (!matcher.find()) throw new IllegalArgumentException("owner lacks generated hash");
        structure.setDescription(description.substring(0, matcher.start(1)) +
            layoutHash(structure) + description.substring(matcher.end(1)));
    }

    private String mergeComment(String current, String addition) {
        current = text(current);
        if (current.contains(addition)) return current;
        return current.isBlank() ? addition : current + "; " + addition;
    }

    private List<Field> parseFields(String serialized) {
        List<Field> result = new ArrayList<>();
        for (String item : serialized.split(";", -1)) {
            if (item.isBlank()) continue;
            String[] parts = item.split("~", 6);
            if (parts.length != 6)
                throw new IllegalArgumentException("malformed field layout");
            result.add(new Field(integer(parts[0]), integer(parts[1]), parts[2],
                parts[3], integer(parts[4]), parts[5]));
        }
        result.sort(Comparator.comparingInt(field -> field.offset));
        return result;
    }

    private Structure structure(String path) {
        DataType type = dataTypes.getDataType(path);
        return type instanceof Structure structure ? structure : null;
    }

    private DataType untypedef(DataType type) {
        while (type instanceof TypeDef definition) type = definition.getBaseDataType();
        return type;
    }

    private String typeSpec(DataType type) {
        type = untypedef(type);
        if (type instanceof Pointer pointer)
            return "pointer:" + typeSpec(pointer.getDataType());
        return type == null ? "" : type.getPathName();
    }

    private String layoutHash(Structure structure) {
        StringBuilder value = new StringBuilder("length=")
            .append(structure.getLength()).append('\n');
        for (DataTypeComponent component : structure.getDefinedComponents())
            value.append(component.getOffset()).append('|').append(component.getLength())
                .append('|').append(component.getDataType().getPathName()).append('|')
                .append(text(component.getFieldName())).append('|')
                .append(text(component.getComment())).append('\n');
        return sha256(value.toString());
    }

    private String storedHash(String description) {
        Matcher matcher = STORED_HASH.matcher(description);
        return matcher.find() ? matcher.group(1).toLowerCase(Locale.ROOT) : null;
    }

    private String sha256(String value) {
        try {
            byte[] digest = MessageDigest.getInstance("SHA-256")
                .digest(value.getBytes(StandardCharsets.UTF_8));
            StringBuilder result = new StringBuilder();
            for (byte item : digest) result.append(String.format("%02x", item & 0xff));
            return result.toString();
        }
        catch (Exception exception) { throw new IllegalStateException(exception); }
    }

    private CategoryPath category(String path) {
        int separator = path.lastIndexOf('/');
        return new CategoryPath(separator <= 0 ? "/" : path.substring(0, separator));
    }

    private String leaf(String path) { return path.substring(path.lastIndexOf('/') + 1); }
    private int integer(String value) { return Integer.parseInt(value); }
    private String target(Map<String, String> row) {
        return row.get("owner_path") + "+0x" +
            Integer.toHexString(integer(row.get("field_offset"))).toUpperCase(Locale.ROOT);
    }

    private File inputFile() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException(
                "Path to recursive_pointee_proposals.tsv is required");
        return askFile("Select recursive_pointee_proposals.tsv", "Apply");
    }

    private Tsv read(Path path) throws Exception {
        List<String> lines = Files.readAllLines(path, StandardCharsets.UTF_8);
        if (lines.isEmpty()) throw new IllegalArgumentException("Empty TSV: " + path);
        List<String> header = List.of(lines.get(0).split("\t", -1));
        List<Map<String, String>> rows = new ArrayList<>();
        for (int line = 1; line < lines.size(); line++) {
            if (lines.get(line).isBlank()) continue;
            String[] values = lines.get(line).split("\t", -1);
            if (values.length != header.size())
                throw new IllegalArgumentException("Invalid TSV row " + (line + 1));
            Map<String, String> row = new LinkedHashMap<>();
            for (int column = 0; column < header.size(); column++)
                row.put(header.get(column), unescape(values[column]));
            rows.add(row);
        }
        return new Tsv(header, rows);
    }

    private void require(Tsv input, String... names) {
        for (String name : names)
            if (!input.header.contains(name))
                throw new IllegalArgumentException("Missing TSV column: " + name);
    }

    private void writeReport(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("target\tstatus\tdetail\n");
            for (Report row : report)
                out.write(clean(row.target) + "\t" + row.status + "\t" +
                    clean(row.detail) + "\n");
        }
    }

    private long count(String status) {
        return report.stream().filter(row -> row.status.equals(status)).count();
    }
    private static boolean enabled(String value) {
        return "1".equals(value) || "true".equalsIgnoreCase(value) ||
            "yes".equalsIgnoreCase(value);
    }
    private static String clean(String value) {
        return text(value).replace("\\", "\\\\").replace("\t", "\\t")
            .replace("\r", "\\r").replace("\n", "\\n");
    }
    private static String unescape(String value) {
        return text(value).replace("\\t", "\t").replace("\\r", "\r")
            .replace("\\n", "\n").replace("\\\\", "\\");
    }
    private static String text(String value) { return value == null ? "" : value; }
    private static String message(Throwable value) {
        return value.getMessage() == null ? value.getClass().getSimpleName() : value.getMessage();
    }

    private record Field(int offset, int width, String type, String name,
        int evidence, String sources) { }
    private record NodeResult(Structure structure, boolean changed,
        String changeReason) { }
    private record Tsv(List<String> header, List<Map<String, String>> rows) { }
    private record Report(String target, String status, String detail) { }
    private static final class PreserveException extends Exception {
        PreserveException(String message) { super(message); }
    }
}
