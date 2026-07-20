// Apply reviewed class layouts produced by STClassLayoutAnalyzer.
// Placeholder/script-owned structures are updated in place; manual layouts are preserved.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Apply Class Layouts

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

import ghidra.app.script.GhidraScript;
import ghidra.program.model.data.CategoryPath;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeComponent;
import ghidra.program.model.data.DataTypeConflictHandler;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.Enum;
import ghidra.program.model.data.PointerDataType;
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.StructureDataType;
import ghidra.program.model.data.Undefined;

public class STClassLayoutApplier extends GhidraScript {
    private static final String MARKER = "[STClassLayoutApplier]";
    private static final String HASH_MARKER = "; generated_layout_sha256=";
    private static final String SWITCH_ENUM_MARKER = "[STSwitchEnumApplier]";
    private final List<ReportRow> report = new ArrayList<>();
    private DataTypeManager dataTypes;

    @Override
    protected void run() throws Exception {
        if (currentProgram == null) {
            printerr("Open the same program that was analyzed.");
            return;
        }
        File classFile = inputFile();
        if (classFile == null) return;
        File directory = classFile.getAbsoluteFile().getParentFile();
        File fieldFile = new File(directory, "class_field_proposals.tsv");
        File nestedTypeFile = new File(directory, "class_nested_type_proposals.tsv");
        File nestedFieldFile = new File(directory, "class_nested_field_proposals.tsv");
        if (!fieldFile.isFile())
            throw new IllegalArgumentException("Missing sibling " + fieldFile);

        Tsv classes = readTsv(classFile.toPath());
        Tsv fields = readTsv(fieldFile.toPath());
        Tsv nestedTypes = nestedTypeFile.isFile() ? readTsv(nestedTypeFile.toPath()) :
            new Tsv(List.of(), List.of());
        Tsv nestedFields = nestedFieldFile.isFile() ? readTsv(nestedFieldFile.toPath()) :
            new Tsv(List.of(), List.of());
        if (nestedTypeFile.isFile() != nestedFieldFile.isFile())
            throw new IllegalArgumentException("Both class_nested proposal files are required");
        requireColumns(classes, "apply", "owner", "type_path", "existing_length",
            "proposed_length", "confidence", "reason");
        requireColumns(fields, "apply", "owner", "offset", "size", "proposed_name",
            "proposed_type", "type_apply", "inferred_type", "suggested_name",
            "name_apply", "type_confidence", "name_confidence", "type_evidence",
            "name_evidence", "reads", "writes", "confidence", "reason");
        if (nestedTypeFile.isFile()) {
            requireColumns(nestedTypes, "apply", "owner", "parent_offset", "type_path",
                "length", "field_count", "access_count", "confidence", "reason");
            requireColumns(nestedFields, "apply", "type_path", "offset", "size",
                "proposed_name", "proposed_type", "evidence_count", "reason");
        }
        Map<String, List<Map<String, String>>> fieldsByOwner = new LinkedHashMap<>();
        for (Map<String, String> row : fields.rows)
            fieldsByOwner.computeIfAbsent(unt(row.get("owner")), ignored -> new ArrayList<>())
                .add(row);
        Map<String, List<Map<String, String>>> nestedByType = new LinkedHashMap<>();
        for (Map<String, String> row : nestedFields.rows)
            nestedByType.computeIfAbsent(unt(row.get("type_path")), ignored -> new ArrayList<>())
                .add(row);
        dataTypes = currentProgram.getDataTypeManager();

        int transaction = currentProgram.startTransaction("Apply recovered class layouts");
        boolean commit = false;
        try {
            for (Map<String, String> row : nestedTypes.rows) {
                monitor.checkCancelled();
                applyNestedType(row, nestedByType.getOrDefault(
                    unt(row.get("type_path")), List.of()));
            }
            for (Map<String, String> row : classes.rows) {
                monitor.checkCancelled();
                applyClass(row, fieldsByOwner.getOrDefault(unt(row.get("owner")), List.of()));
            }
            commit = true;
        }
        finally {
            currentProgram.endTransaction(transaction, commit);
        }

        Path reportPath = directory.toPath().resolve("class_layout_apply_report.tsv");
        writeReport(reportPath);
        long applied = report.stream().filter(row -> row.status.equals("applied")).count();
        long updated = report.stream().filter(row -> row.status.equals("updated")).count();
        long unchanged = report.stream().filter(row -> row.status.equals("unchanged")).count();
        long preserved = report.stream().filter(row -> row.status.equals("preserved")).count();
        long disabled = report.stream().filter(row -> row.status.equals("disabled")).count();
        long conflicts = report.stream().filter(row -> row.status.equals("conflict")).count();
        long typed = report.stream().mapToLong(row -> row.typedFields).sum();
        long named = report.stream().mapToLong(row -> row.namedFields).sum();
        println("Class layouts: applied=" + applied + ", updated=" + updated +
            ", unchanged=" + unchanged + ", preserved=" + preserved +
            ", conflicts=" + conflicts + ", disabled=" + disabled +
            ", typed_fields=" + typed + ", named_fields=" + named);
        println("Apply report: " + reportPath.toAbsolutePath().normalize());
    }

    private void applyNestedType(Map<String, String> row,
            List<Map<String, String>> fieldRows) {
        String owner = unt(row.get("owner"));
        String path = unt(row.get("type_path"));
        if (!enabled(row.get("apply"))) {
            report.add(new ReportRow(owner + "::pointee", path, "disabled", "apply=0"));
            return;
        }
        try {
            int length = Integer.parseInt(row.get("length"));
            if (length < 1) throw new IllegalArgumentException("invalid nested length " + length);
            DataType current = dataTypes.getDataType(path);
            if (current != null && !(current instanceof Structure))
                throw new IllegalArgumentException("nested path is not a structure");
            Structure existing = (Structure)current;
            if (existing != null) {
                Safety safety = safety(existing);
                if (!safety.safe) {
                    report.add(new ReportRow(owner + "::pointee", path, "preserved",
                        safety.reason));
                    return;
                }
            }
            StructureDataType desired = new StructureDataType(category(path), leaf(path),
                length, dataTypes);
            long previousEnd = -1;
            List<Map<String, String>> selected = fieldRows.stream()
                .filter(field -> enabled(field.get("apply")))
                .sorted(Comparator.comparingLong(field ->
                    Long.parseLong(field.get("offset")))).toList();
            for (Map<String, String> field : selected) {
                int offset = Integer.parseInt(field.get("offset"));
                int size = Integer.parseInt(field.get("size"));
                if (offset < previousEnd || offset < 0 || size < 1 || offset + size > length)
                    throw new IllegalArgumentException("invalid/overlapping nested field " + offset);
                DataType fieldType = resolveType(unt(field.get("proposed_type")), size);
                String comment = MARKER + " nested evidence_count=" +
                    field.get("evidence_count") + "; " + unt(field.get("reason"));
                desired.replaceAtOffset(offset, fieldType, size,
                    unt(field.get("proposed_name")), comment);
                previousEnd = (long)offset + size;
            }
            String desiredHash = layoutHash(desired);
            desired.setDescription(MARKER + " Generated nested class-field pointee; source=" +
                unt(row.get("reason")) + HASH_MARKER + desiredHash);
            if (existing == null) {
                DataType installed = dataTypes.resolve(desired,
                    DataTypeConflictHandler.KEEP_HANDLER);
                if (!(installed instanceof Structure structure) ||
                        !structure.getPathName().equals(path))
                    throw new IllegalStateException("could not create exact nested type " + path);
                structure.setDescription(desired.getDescription());
                report.add(new ReportRow(owner + "::pointee", path, "applied",
                    selected.size() + " fields; length=" + length));
                return;
            }
            if (layoutHash(existing).equals(desiredHash)) {
                existing.setDescription(desired.getDescription());
                report.add(new ReportRow(owner + "::pointee", path, "unchanged",
                    selected.size() + " fields; length=" + length));
                return;
            }
            existing.replaceWith(desired);
            existing.setDescription(desired.getDescription());
            report.add(new ReportRow(owner + "::pointee", path, "updated",
                selected.size() + " fields; length=" + length));
        }
        catch (Exception exception) {
            report.add(new ReportRow(owner + "::pointee", path, "conflict",
                message(exception)));
        }
    }

    private void applyClass(Map<String, String> row, List<Map<String, String>> fieldRows) {
        String owner = unt(row.get("owner"));
        String path = unt(row.get("type_path"));
        if (!enabled(row.get("apply"))) {
            report.add(new ReportRow(owner, path, "disabled", "apply=0"));
            return;
        }
        try {
            DataType type = dataTypes.getDataType(path);
            if (!(type instanceof Structure existing)) {
                report.add(new ReportRow(owner, path, "conflict",
                    "type is missing or is not a structure"));
                return;
            }
            Safety safety = safety(existing);
            if (!safety.safe) {
                report.add(new ReportRow(owner, path, "preserved", safety.reason));
                return;
            }

            int length = Integer.parseInt(row.get("proposed_length"));
            if (length < 1) throw new IllegalArgumentException("invalid proposed length " + length);
            StructureDataType desired = new StructureDataType(existing.getCategoryPath(),
                existing.getName(), length, dataTypes);
            List<Map<String, String>> selected = fieldRows.stream()
                .filter(field -> enabled(field.get("apply")))
                .sorted(Comparator.comparingLong(field -> Long.parseLong(field.get("offset"))))
                .toList();
            int installed = 0, typed = 0, named = 0;
            for (Map<String, String> field : selected) {
                int offset = Integer.parseInt(field.get("offset"));
                int size = Integer.parseInt(field.get("size"));
                if (offset < 0 || size < 1 || offset + size > length)
                    throw new IllegalArgumentException("field outside structure: " + offset + "+" + size);
                boolean typeApply = enabled(field.get("type_apply"));
                String inferredType = unt(field.get("inferred_type"));
                String typeSpecification = typeApply && !inferredType.isBlank() ? inferredType :
                    unt(field.get("proposed_type"));
                DataType fieldType = resolveType(typeSpecification, size);
                String comment = MARKER + " reads=" + field.get("reads") + ", writes=" +
                    field.get("writes") + "; type_confidence=" +
                    field.get("type_confidence") + "; name_confidence=" +
                    field.get("name_confidence") + "; " + unt(field.get("reason"));
                String fieldName = unt(field.get("proposed_name"));
                boolean nameApply = enabled(field.get("name_apply"));
                String suggestedName = unt(field.get("suggested_name"));
                if (nameApply && !suggestedName.isBlank()) fieldName = suggestedName;
                String typeEvidence = unt(field.get("type_evidence"));
                String nameEvidence = unt(field.get("name_evidence"));
                if (!typeEvidence.isBlank()) comment += "; type_evidence=" + typeEvidence;
                if (!nameEvidence.isBlank()) comment += "; name_evidence=" + nameEvidence;
                DataTypeComponent enriched = existing.getComponentAt(offset);
                if (enriched != null && enriched.getOffset() == offset &&
                        enriched.getDataType() instanceof Enum && enriched.getLength() == size &&
                        enriched.getComment() != null &&
                        enriched.getComment().contains(SWITCH_ENUM_MARKER)) {
                    fieldType = enriched.getDataType();
                    if (enriched.getFieldName() != null) fieldName = enriched.getFieldName();
                    comment = enriched.getComment();
                }
                desired.replaceAtOffset(offset, fieldType, size, fieldName, comment);
                installed++;
                if (typeApply && !inferredType.isBlank()) typed++;
                if (nameApply && !suggestedName.isBlank()) named++;
            }
            String desiredHash = layoutHash(desired);
            String description = MARKER + " Generated conservative layout for " + owner +
                "; source=" + unt(row.get("reason")) + HASH_MARKER + desiredHash;
            String constructorEvidence = constructorEvidence(existing.getDescription());
            if (!constructorEvidence.isBlank()) description += "\n" + constructorEvidence;
            desired.setDescription(description);

            String currentHash = layoutHash(existing);
            if (!safety.placeholder && currentHash.equals(desiredHash)) {
                existing.setDescription(desired.getDescription());
                report.add(new ReportRow(owner, path, "unchanged", installed +
                    " fields; length=" + length, typed, named));
                return;
            }
            existing.replaceWith(desired);
            existing.setDescription(desired.getDescription());
            report.add(new ReportRow(owner, path, safety.placeholder ? "applied" : "updated",
                installed + " fields; length=" + length + "; " + safety.reason, typed, named));
        }
        catch (Exception exception) {
            report.add(new ReportRow(owner, path, "conflict", message(exception)));
        }
    }

    private DataType resolveType(String specification, int size) {
        if (specification.startsWith("pointer:")) {
            String path = specification.substring("pointer:".length());
            DataType pointed = dataTypes.getDataType(path);
            if (pointed == null) throw new IllegalArgumentException("missing pointed type " + path);
            return new PointerDataType(pointed, currentProgram.getDefaultPointerSize(), dataTypes);
        }
        if (specification.startsWith("/undefined")) return Undefined.getUndefinedDataType(size);
        DataType type = dataTypes.getDataType(specification);
        if (type == null) throw new IllegalArgumentException("missing data type " + specification);
        return type;
    }

    private Safety safety(Structure structure) {
        String description = structure.getDescription();
        boolean placeholder = structure.getLength() <= 1 &&
            structure.getNumDefinedComponents() == 0 &&
            (description == null || description.isBlank() ||
                description.contains("PlaceHolder Class Structure"));
        if (placeholder) return new Safety(true, true, "replaced placeholder structure");
        if (description == null || !description.contains(MARKER))
            return new Safety(false, false, "existing manual/unowned structure");
        String stored = storedHash(description);
        if (stored == null)
            return new Safety(false, false, "generated structure lacks safety hash");
        String current = layoutHash(structure);
        if (!stored.equals(current))
            return new Safety(false, false, "manual changes detected (stored " +
                stored.substring(0, 12) + ", current " + current.substring(0, 12) + ")");
        return new Safety(true, false, "updated unchanged generated structure");
    }

    private String layoutHash(Structure structure) {
        StringBuilder layout = new StringBuilder();
        layout.append("length=").append(structure.getLength()).append('\n');
        for (DataTypeComponent component : structure.getDefinedComponents()) {
            layout.append(component.getOffset()).append('|').append(component.getLength()).append('|')
                .append(component.getDataType().getPathName()).append('|')
                .append(component.getFieldName() == null ? "" : component.getFieldName()).append('|')
                .append(component.getComment() == null ? "" : component.getComment()).append('\n');
        }
        return sha256(layout.toString());
    }

    private String storedHash(String description) {
        int index = description.indexOf(HASH_MARKER);
        if (index < 0) return null;
        String value = description.substring(index + HASH_MARKER.length()).trim();
        if (value.length() < 64) return null;
        value = value.substring(0, 64);
        return value.matches("[0-9a-fA-F]{64}") ? value.toLowerCase(Locale.ROOT) : null;
    }

    private String constructorEvidence(String description) {
        if (description == null || description.isBlank()) return "";
        List<String> result = new ArrayList<>();
        for (String line : description.split("\\R"))
            if (line.contains("[STConstructorApplier]")) result.add(line);
        return String.join("\n", result);
    }

    private CategoryPath category(String path) {
        int separator = path.lastIndexOf('/');
        return new CategoryPath(separator <= 0 ? "/" : path.substring(0, separator));
    }

    private String leaf(String path) {
        int separator = path.lastIndexOf('/');
        return separator < 0 ? path : path.substring(separator + 1);
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

    private File inputFile() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException("Path to class_layout_proposals.tsv is required");
        return askFile("Select class_layout_proposals.tsv", "Apply class layouts");
    }

    private Tsv readTsv(Path path) throws Exception {
        List<String> lines = Files.readAllLines(path, StandardCharsets.UTF_8);
        if (lines.isEmpty()) throw new IllegalArgumentException("Empty TSV: " + path);
        String[] header = lines.get(0).split("\\t", -1);
        List<Map<String, String>> rows = new ArrayList<>();
        for (int line = 1; line < lines.size(); line++) {
            if (lines.get(line).isBlank()) continue;
            String[] values = lines.get(line).split("\\t", -1);
            if (values.length != header.length)
                throw new IllegalArgumentException(path.getFileName() + " line " + (line + 1) +
                    " has " + values.length + " columns; expected " + header.length);
            Map<String, String> row = new LinkedHashMap<>();
            for (int column = 0; column < header.length; column++)
                row.put(header[column], values[column]);
            rows.add(row);
        }
        return new Tsv(List.of(header), rows);
    }

    private void requireColumns(Tsv tsv, String... names) {
        for (String name : names)
            if (!tsv.header.contains(name))
                throw new IllegalArgumentException("Missing TSV column: " + name);
    }

    private void writeReport(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("owner\ttype_path\tstatus\ttyped_fields\tnamed_fields\tdetail\n");
            for (ReportRow row : report) out.write(tsv(row.owner) + "\t" + tsv(row.path) +
                "\t" + row.status + "\t" + row.typedFields + "\t" + row.namedFields +
                "\t" + tsv(row.detail) + "\n");
        }
    }

    private static boolean enabled(String value) {
        return "1".equals(value) || "true".equalsIgnoreCase(value) ||
            "yes".equalsIgnoreCase(value);
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
    private static String message(Exception exception) {
        String value = exception.getMessage();
        return value == null || value.isBlank() ? exception.getClass().getSimpleName() : value;
    }

    private static class Tsv {
        final List<String> header;
        final List<Map<String, String>> rows;
        Tsv(List<String> header, List<Map<String, String>> rows) {
            this.header = header; this.rows = rows;
        }
    }
    private static class Safety {
        final boolean safe, placeholder;
        final String reason;
        Safety(boolean safe, boolean placeholder, String reason) {
            this.safe = safe; this.placeholder = placeholder; this.reason = reason;
        }
    }
    private static class ReportRow {
        final String owner, path, status, detail;
        final int typedFields, namedFields;
        ReportRow(String owner, String path, String status, String detail) {
            this(owner, path, status, detail, 0, 0);
        }
        ReportRow(String owner, String path, String status, String detail,
                int typedFields, int namedFields) {
            this.owner = owner; this.path = path; this.status = status; this.detail = detail;
            this.typedFields = typedFields; this.namedFields = namedFields;
        }
    }
}
