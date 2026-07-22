// Apply reviewed switch enum/state proposals produced by STSwitchEnumAnalyzer.
// Manual enums, parameter types, and class layouts are preserved.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Apply Switch Enums

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
import ghidra.program.model.address.Address;
import ghidra.program.model.data.CategoryPath;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeComponent;
import ghidra.program.model.data.DataTypeConflictHandler;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.Enum;
import ghidra.program.model.data.EnumDataType;
import ghidra.program.model.data.Structure;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.symbol.SourceType;

public class STSwitchEnumApplier extends GhidraScript {
    private static final CategoryPath ENUMS =
        new CategoryPath("/SubmarineTitans/Recovered/Enums");
    private static final String MARKER = "[STSwitchEnumApplier]";
    private static final String ENUM_HASH_MARKER = "; generated_values_sha256=";
    private static final String CLASS_MARKER = "[STClassLayoutApplier]";
    private static final String CLASS_HASH_MARKER = "; generated_layout_sha256=";
    private static final String TAG = "RECOVERED_SWITCH_ENUM";
    private final List<ReportRow> report = new ArrayList<>();
    private DataTypeManager dataTypes;

    @Override
    protected void run() throws Exception {
        // Explicit per-script transactions must not be nested in GhidraScript's wrapper.
        end(true);
        if (currentProgram == null) {
            printerr("Open the same program that was analyzed.");
            return;
        }
        File proposalFile = inputFile();
        if (proposalFile == null) return;
        Tsv tsv = readTsv(proposalFile.toPath());
        requireColumns(tsv, "apply", "function_address", "expected_function",
            "target_kind", "target_name", "target_ordinal", "field_offset",
            "target_container", "expected_target_type", "expected_target_source",
            "enum_name", "enum_length", "values", "reason");
        dataTypes = currentProgram.getDataTypeManager();

        int transaction = currentProgram.startTransaction("Apply recovered switch enums");
        boolean commit = false;
        try {
            for (Map<String, String> row : tsv.rows) {
                monitor.checkCancelled();
                applyRow(row);
            }
            commit = true;
        }
        finally {
            currentProgram.endTransaction(transaction, commit);
        }

        Path reportPath = proposalFile.getAbsoluteFile().getParentFile().toPath()
            .resolve("switch_enum_apply_report.tsv");
        writeReport(reportPath);
        long applied = report.stream().filter(row -> row.status.equals("applied")).count();
        long unchanged = report.stream().filter(row -> row.status.equals("unchanged")).count();
        long preserved = report.stream().filter(row -> row.status.equals("preserved")).count();
        long disabled = report.stream().filter(row -> row.status.equals("disabled")).count();
        long conflicts = report.stream().filter(row -> row.status.equals("conflict")).count();
        println("Switch enums: applied=" + applied + ", unchanged=" + unchanged +
            ", preserved=" + preserved + ", conflicts=" + conflicts +
            ", disabled=" + disabled);
        println("Apply report: " + reportPath.toAbsolutePath().normalize());
    }

    private void applyRow(Map<String, String> row) {
        String functionAddress = row.get("function_address");
        String enumName = row.get("enum_name");
        if (!enabled(row.get("apply"))) {
            report.add(new ReportRow(functionAddress, enumName, "disabled", "apply=0"));
            return;
        }
        try {
            EnumResolution resolution = resolveEnum(row);
            if (resolution.error != null) {
                report.add(new ReportRow(functionAddress, enumName, "conflict", resolution.error));
                return;
            }
            ApplyResult target = switch (row.get("target_kind")) {
                case "parameter" -> applyParameter(row, resolution.type);
                case "class_field" -> applyClassField(row, resolution.type);
                default -> ApplyResult.preserved("unsupported automatic target kind " +
                    row.get("target_kind"));
            };
            if ("class_field".equals(row.get("target_kind")) &&
                    ("applied".equals(target.status) || "unchanged".equals(target.status)))
                annotateEvidenceFunctions(row, resolution.type);
            String detail = resolution.detail + "; " + target.detail;
            report.add(new ReportRow(functionAddress, enumName, target.status, detail));
        }
        catch (Exception exception) {
            report.add(new ReportRow(functionAddress, enumName, "conflict", message(exception)));
        }
    }

    private EnumResolution resolveEnum(Map<String, String> row) {
        String name = row.get("enum_name");
        int length = Integer.parseInt(row.get("enum_length"));
        EnumDataType desired = new EnumDataType(ENUMS, name, length, dataTypes);
        for (EnumValue value : parseValues(unt(row.get("values"))))
            desired.add(value.name, value.value);
        String desiredHash = enumHash(desired);
        desired.setDescription(MARKER + " Generated from numeric switch cases" +
            ENUM_HASH_MARKER + desiredHash);

        DataType existingType = dataTypes.getDataType(ENUMS, name);
        if (existingType == null) {
            Enum created = (Enum)dataTypes.resolve(desired, DataTypeConflictHandler.KEEP_HANDLER);
            return new EnumResolution(created, "created " + created.getPathName(), null);
        }
        if (!(existingType instanceof Enum existing))
            return new EnumResolution(null, "", "existing type is not an enum: " +
                existingType.getPathName());
        if (existing.isEquivalent(desired)) {
            if (existing.getDescription() == null || existing.getDescription().contains(MARKER))
                existing.setDescription(desired.getDescription());
            return new EnumResolution(existing, "used equivalent " + existing.getPathName(), null);
        }
        String description = existing.getDescription();
        if (description == null || !description.contains(MARKER))
            return new EnumResolution(null, "", "manual enum differs; preserving " +
                existing.getPathName());
        String stored = storedHash(description, ENUM_HASH_MARKER);
        String current = enumHash(existing);
        if (stored == null || !stored.equals(current))
            return new EnumResolution(null, "", "manual changes detected in " +
                existing.getPathName());
        existing.replaceWith(desired);
        existing.setDescription(desired.getDescription());
        return new EnumResolution(existing, "updated generated " + existing.getPathName(), null);
    }

    private ApplyResult applyParameter(Map<String, String> row, Enum enumType) throws Exception {
        Address address = address(row.get("function_address"));
        Function function = currentProgram.getFunctionManager().getFunctionAt(address);
        if (function == null) return ApplyResult.conflict("no function at analyzed address");
        if (!function.getName(true).equals(unt(row.get("expected_function"))) &&
                !hasTag(function))
            return ApplyResult.preserved("function name changed since analysis");
        int ordinal = Integer.parseInt(row.get("target_ordinal"));
        String name = unt(row.get("target_name"));
        Parameter parameter = null;
        for (Parameter candidate : function.getParameters()) {
            if (!candidate.isAutoParameter() && candidate.getOrdinal() == ordinal &&
                    candidate.getName().equals(name)) {
                parameter = candidate;
                break;
            }
        }
        if (parameter == null) return ApplyResult.conflict("parameter baseline not found");
        if (parameter.getDataType().getPathName().equals(enumType.getPathName()))
            return ApplyResult.unchanged("parameter already uses enum");
        String expectedType = unt(row.get("expected_target_type"));
        String expectedSource = row.get("expected_target_source");
        if (!parameter.getDataType().getPathName().equals(expectedType) ||
                !parameter.getSource().toString().equals(expectedSource) ||
                parameter.getSource() == SourceType.USER_DEFINED)
            return ApplyResult.preserved("manual/stale parameter type " +
                parameter.getDataType().getPathName() + " [" + parameter.getSource() + "]");
        parameter.setDataType(enumType, SourceType.ANALYSIS);
        function.addTag(TAG);
        addFunctionComment(function, row, enumType);
        return ApplyResult.applied("parameter " + name + " -> " + enumType.getPathName());
    }

    private ApplyResult applyClassField(Map<String, String> row, Enum enumType) {
        String path = unt(row.get("target_container"));
        DataType dataType = dataTypes.getDataType(path);
        if (!(dataType instanceof Structure structure))
            return ApplyResult.conflict("missing class structure " + path);
        String description = structure.getDescription();
        if (description == null || !description.contains(CLASS_MARKER))
            return ApplyResult.preserved("class structure is not owned by layout applier");
        String stored = storedHash(description, CLASS_HASH_MARKER);
        String current = layoutHash(structure);
        if (stored == null || !stored.equals(current))
            return ApplyResult.preserved("class layout has manual/stale changes");
        int offset = Integer.parseInt(row.get("field_offset"));
        DataTypeComponent component = structure.getComponentAt(offset);
        if (component == null || component.getOffset() != offset)
            return ApplyResult.conflict("no field starts at offset " + offset);
        if (component.getDataType().getPathName().equals(enumType.getPathName()))
            return ApplyResult.unchanged("field already uses enum");
        String expectedType = unt(row.get("expected_target_type"));
        if (!component.getDataType().getPathName().equals(expectedType))
            return ApplyResult.preserved("field type changed since analysis: " +
                component.getDataType().getPathName());
        String fieldName = component.getFieldName();
        if (fieldName == null || fieldName.isBlank()) fieldName = unt(row.get("target_name"));
        String comment = component.getComment();
        if (comment == null) comment = "";
        if (!comment.contains(MARKER)) comment = comment + (comment.isBlank() ? "" : " ") +
            MARKER + " enum recovered from switch cases";
        structure.replaceAtOffset(offset, enumType, enumType.getLength(), fieldName, comment);
        refreshClassHash(structure);
        return ApplyResult.applied("field " + fieldName + " -> " + enumType.getPathName());
    }

    private void addFunctionComment(Function function, Map<String, String> row, Enum type) {
        String block = MARKER + " Switch target " + unt(row.get("target_name")) +
            " uses " + type.getPathName() + ". Cases: " + unt(row.get("values"));
        String old = function.getComment();
        if (old == null || old.isBlank()) function.setComment(block);
        else if (!old.contains(block)) function.setComment(old + "\n\n" + block);
    }

    private void annotateEvidenceFunctions(Map<String, String> row, Enum type) {
        String evidence = unt(row.getOrDefault("evidence_functions",
            row.get("function_address")));
        for (String item : evidence.split("\\s*\\|\\s*")) {
            if (item.isBlank()) continue;
            Address address = currentProgram.getAddressFactory().getAddress(item);
            Function function = address == null ? null :
                currentProgram.getFunctionManager().getFunctionAt(address);
            if (function == null) continue;
            function.addTag(TAG);
            addFunctionComment(function, row, type);
        }
    }

    private boolean hasTag(Function function) {
        return function.getTags().stream().anyMatch(tag -> TAG.equals(tag.getName()));
    }

    private List<EnumValue> parseValues(String specification) {
        List<EnumValue> result = new ArrayList<>();
        for (String item : specification.split(";", -1)) {
            if (item.isBlank()) continue;
            int separator = item.lastIndexOf('=');
            if (separator <= 0) throw new IllegalArgumentException("invalid enum value " + item);
            result.add(new EnumValue(item.substring(0, separator),
                Long.parseLong(item.substring(separator + 1))));
        }
        if (result.size() < 3) throw new IllegalArgumentException("enum has fewer than 3 values");
        return result;
    }

    private String enumHash(Enum type) {
        List<String> rows = new ArrayList<>();
        for (String name : type.getNames()) rows.add(name + "=" + type.getValue(name));
        rows.sort(Comparator.naturalOrder());
        return sha256("length=" + type.getLength() + "\n" + String.join("\n", rows));
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

    private void refreshClassHash(Structure structure) {
        String description = structure.getDescription();
        int index = description.indexOf(CLASS_HASH_MARKER);
        if (index < 0) return;
        int valueStart = index + CLASS_HASH_MARKER.length();
        int valueEnd = Math.min(description.length(), valueStart + 64);
        String updated = description.substring(0, valueStart) + layoutHash(structure) +
            description.substring(valueEnd);
        structure.setDescription(updated);
    }

    private String storedHash(String description, String marker) {
        if (description == null) return null;
        int index = description.indexOf(marker);
        if (index < 0) return null;
        String value = description.substring(index + marker.length()).trim();
        if (value.length() < 64) return null;
        value = value.substring(0, 64);
        return value.matches("[0-9a-fA-F]{64}") ? value.toLowerCase(Locale.ROOT) : null;
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
            throw new IllegalArgumentException("Path to switch_enum_proposals.tsv is required");
        return askFile("Select switch_enum_proposals.tsv", "Apply switch enums");
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
            out.write("function_address\tenum_name\tstatus\tdetail\n");
            for (ReportRow row : report) out.write(row.address + "\t" + row.enumName + "\t" +
                row.status + "\t" + tsv(row.detail) + "\n");
        }
    }

    private Address address(String value) {
        Address result = currentProgram.getAddressFactory().getAddress(value);
        if (result == null) throw new IllegalArgumentException("Invalid address: " + value);
        return result;
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
    private static class EnumValue {
        final String name;
        final long value;
        EnumValue(String name, long value) { this.name = name; this.value = value; }
    }
    private static class EnumResolution {
        final Enum type;
        final String detail, error;
        EnumResolution(Enum type, String detail, String error) {
            this.type = type; this.detail = detail; this.error = error;
        }
    }
    private static class ApplyResult {
        final String status, detail;
        ApplyResult(String status, String detail) { this.status = status; this.detail = detail; }
        static ApplyResult applied(String detail) { return new ApplyResult("applied", detail); }
        static ApplyResult unchanged(String detail) { return new ApplyResult("unchanged", detail); }
        static ApplyResult preserved(String detail) { return new ApplyResult("preserved", detail); }
        static ApplyResult conflict(String detail) { return new ApplyResult("conflict", detail); }
    }
    private static class ReportRow {
        final String address, enumName, status, detail;
        ReportRow(String address, String enumName, String status, String detail) {
            this.address = address; this.enumName = enumName;
            this.status = status; this.detail = detail;
        }
    }
}
