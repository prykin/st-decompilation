// Apply discriminator-specific case structures and stack aggregates.
// Only ANALYSIS/script-owned overlapping locals may be replaced.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Apply Discriminated Payloads

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.security.MessageDigest;
import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.TreeMap;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.CategoryPath;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeConflictHandler;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.PointerDataType;
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.StructureDataType;
import ghidra.program.model.data.Union;
import ghidra.program.model.data.UnionDataType;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.StackFrame;
import ghidra.program.model.listing.Variable;
import ghidra.program.model.symbol.SourceType;

public class STDiscriminatedPayloadApplier extends GhidraScript {
    private static final CategoryPath CATEGORY =
        new CategoryPath("/SubmarineTitans/Recovered/DiscriminatedPayloads");
    private static final String MARKER = "[STDiscriminatedPayloadApplier]";
    private static final String ANCHOR = "[ST_SEMANTIC_ANCHOR]";
    private final List<Report> report = new ArrayList<>();
    private DataTypeManager dataTypes;

    @Override
    protected void run() throws Exception {
        end(true);
        if (currentProgram == null) {
            printerr("Open the analyzed ST program first.");
            return;
        }
        File file = inputFile();
        if (file == null) return;
        Path casesPath = file.toPath().toAbsolutePath().normalize();
        Tsv cases = read(casesPath);
        require(cases, "apply", "family_id", "function_address", "expected_function",
            "expected_signature", "case_value", "type_path", "size", "layout",
            "layout_sha256", "confidence", "evidence");
        Path stackPath = casesPath.resolveSibling("discriminated_stack_proposals.tsv");
        Tsv stacks = Files.isRegularFile(stackPath) ? read(stackPath) :
            new Tsv(List.of(), List.of());
        if (!stacks.rows.isEmpty())
            require(stacks, "apply", "family_id", "function_address", "expected_function",
                "expected_signature", "call_address", "stack_offset", "length",
                "case_value", "proposed_type", "expected_overlaps", "confidence", "evidence");
        dataTypes = currentProgram.getDataTypeManager();

        int transaction = currentProgram.startTransaction("Apply discriminated payload recovery");
        boolean commit = false;
        try {
            Map<String, List<DataType>> families = new TreeMap<>();
            for (Map<String, String> row : cases.rows) {
                monitor.checkCancelled();
                DataType type = applyCase(row);
                if (type != null)
                    families.computeIfAbsent(row.get("family_id"), unused -> new ArrayList<>())
                        .add(type);
            }
            for (Map.Entry<String, List<DataType>> family : families.entrySet())
                ensureUnion(family.getKey(), family.getValue());
            for (Map<String, String> row : stacks.rows) {
                monitor.checkCancelled();
                applyStack(row);
            }
            commit = true;
        }
        finally {
            currentProgram.endTransaction(transaction, commit);
        }

        Path output = casesPath.resolveSibling("discriminated_payload_apply_report.tsv");
        writeReport(output);
        println("Discriminated payloads: applied=" + count("applied") +
            ", unchanged=" + count("unchanged") + ", preserved=" + count("preserved") +
            ", conflicts=" + count("conflict") + ", disabled=" + count("disabled"));
        println("Apply report: " + output);
    }

    private DataType applyCase(Map<String, String> row) {
        String path = row.get("type_path");
        if (!enabled(row.get("apply"))) {
            report.add(new Report("case_type", path, "disabled", "apply=0"));
            return null;
        }
        try {
            Function family = function(row.get("function_address"));
            if (family == null || !family.getName(true).equals(unt(row.get("expected_function"))) ||
                    !family.getPrototypeString(true, true).equals(
                        unt(row.get("expected_signature")))) {
                report.add(new Report("case_type", path, "preserved",
                    "stale discriminator-family baseline"));
                return null;
            }
            int size = Integer.parseInt(row.get("size"));
            String layout = row.get("layout");
            String expectedHash = row.get("layout_sha256");
            if (!expectedHash.equals(sha256(size + "|" + layout)))
                throw new IllegalArgumentException("layout hash mismatch");
            DataType existing = dataTypes.getDataType(path);
            if (existing instanceof Structure structure) {
                String description = structure.getDescription();
                if (description != null && description.contains(MARKER) &&
                        description.contains("layout_sha256=" + expectedHash)) {
                    report.add(new Report("case_type", path, "unchanged",
                        "generated layout already current"));
                    return structure;
                }
                report.add(new Report("case_type", path, "preserved",
                    "type name occupied by a different/manual layout"));
                return null;
            }
            if (existing != null) {
                report.add(new Report("case_type", path, "preserved",
                    "type name occupied by a non-structure"));
                return null;
            }
            String name = path.substring(path.lastIndexOf('/') + 1);
            StructureDataType desired = new StructureDataType(CATEGORY, name, 0, dataTypes);
            desired.growStructure(size);
            for (String item : split(layout)) {
                String[] parts = item.split(":", 3);
                if (parts.length != 3) throw new IllegalArgumentException("invalid field " + item);
                int offset = Integer.parseInt(parts[0]);
                int length = Integer.parseInt(parts[1]);
                DataType type = requireType(parts[2]);
                if (type.getLength() != length && !(type instanceof PointerDataType))
                    type = dataTypes.getDataType("/undefined" + length);
                desired.replaceAtOffset(offset, type, length,
                    String.format("field_%02X", offset),
                    MARKER + " case-local observed access");
            }
            desired.setDescription(MARKER + " " + ANCHOR +
                " discriminator_family=" + row.get("family_id") +
                "; case_value=" + row.get("case_value") +
                "; layout_sha256=" + expectedHash +
                "; evidence=" + unt(row.get("evidence")));
            DataType installed = dataTypes.resolve(desired, DataTypeConflictHandler.KEEP_HANDLER);
            report.add(new Report("case_type", path, "applied",
                "size=" + size + "; case=" + row.get("case_value")));
            return installed;
        }
        catch (Exception exception) {
            report.add(new Report("case_type", path, "conflict", message(exception)));
            return null;
        }
    }

    private void ensureUnion(String family, List<DataType> members) {
        String name = family + "_Payload";
        DataType existing = dataTypes.getDataType(CATEGORY, name);
        if (existing instanceof Union union) {
            String description = union.getDescription();
            if (description == null || !description.contains(MARKER)) {
                report.add(new Report("case_union", union.getPathName(), "preserved",
                    "manual union"));
                return;
            }
            int added = 0;
            for (DataType member : members) {
                boolean present = false;
                for (var component : union.getComponents())
                    if (component.getDataType().isEquivalent(member)) { present = true; break; }
                if (!present) {
                    union.add(member, member.getLength(),
                        "case_" + member.getName(), null);
                    added++;
                }
            }
            report.add(new Report("case_union", union.getPathName(),
                added == 0 ? "unchanged" : "applied",
                added == 0 ? "union already current" : "added_members=" + added));
            return;
        }
        if (existing != null) {
            report.add(new Report("case_union", existing.getPathName(), "preserved",
                "union name is occupied"));
            return;
        }
        UnionDataType union = new UnionDataType(CATEGORY, name, dataTypes);
        union.setDescription(MARKER +
            " Discriminator catalog only: callers receive case-specific stack types.");
        for (DataType member : members)
            union.add(member, member.getLength(), "case_" + member.getName(), null);
        DataType installed = dataTypes.resolve(union, DataTypeConflictHandler.KEEP_HANDLER);
        report.add(new Report("case_union", installed.getPathName(), "applied",
            "members=" + members.size()));
    }

    private void applyStack(Map<String, String> row) {
        String target = row.get("function_address") + ":Stack[" + row.get("stack_offset") + "]";
        if (!enabled(row.get("apply"))) {
            report.add(new Report("stack_aggregate", target, "disabled", "apply=0"));
            return;
        }
        try {
            Function function = function(row.get("function_address"));
            if (function == null || !function.getName(true).equals(
                    unt(row.get("expected_function"))) ||
                    !function.getPrototypeString(true, true).equals(
                        unt(row.get("expected_signature")))) {
                report.add(new Report("stack_aggregate", target, "preserved",
                    "stale caller baseline"));
                return;
            }
            int offset = Integer.parseInt(row.get("stack_offset"));
            int length = Integer.parseInt(row.get("length"));
            DataType proposed = dataTypes.getDataType(row.get("proposed_type"));
            if (proposed == null || proposed.getLength() != length)
                throw new IllegalArgumentException("missing/incompatible proposed type");
            int end = offset + length;
            List<Variable> overlaps = new ArrayList<>();
            for (Variable variable : function.getLocalVariables()) {
                if (!variable.isStackVariable()) continue;
                int start = variable.getStackOffset();
                if (start >= end || start + variable.getLength() <= offset) continue;
                if (start == offset && variable.getDataType().isEquivalent(proposed)) {
                    report.add(new Report("stack_aggregate", target, "unchanged",
                        proposed.getPathName()));
                    return;
                }
                String comment = variable.getComment();
                boolean owned = comment != null &&
                    (comment.contains("[STRecoveredTypesApplier]") ||
                     comment.contains(MARKER));
                if ((variable.getSource() == SourceType.USER_DEFINED ||
                        variable.getSource() == SourceType.IMPORTED) && !owned) {
                    report.add(new Report("stack_aggregate", target, "preserved",
                        "manual overlapping local " + variable.getName()));
                    return;
                }
                overlaps.add(variable);
            }
            String current = overlapFingerprint(function, offset, length);
            if (!current.equals(unt(row.get("expected_overlaps")))) {
                report.add(new Report("stack_aggregate", target, "preserved",
                    "stale overlap baseline"));
                return;
            }
            for (Variable variable : overlaps) function.removeVariable(variable);
            StackFrame frame = function.getStackFrame();
            Variable created = frame.createVariable(
                "payload_case_" + Long.toHexString(Long.parseLong(row.get("case_value")))
                    .replace("-", "neg_"),
                offset, proposed, SourceType.ANALYSIS);
            created.setComment(MARKER + " family=" + row.get("family_id") +
                "; call=" + row.get("call_address") + "; " + unt(row.get("evidence")));
            report.add(new Report("stack_aggregate", target, "applied",
                proposed.getPathName()));
        }
        catch (Exception exception) {
            report.add(new Report("stack_aggregate", target, "conflict", message(exception)));
        }
    }

    private String overlapFingerprint(Function function, int offset, int length) {
        int end = offset + length;
        List<String> result = new ArrayList<>();
        for (Variable variable : function.getLocalVariables()) {
            if (!variable.isStackVariable()) continue;
            int start = variable.getStackOffset();
            if (start >= end || start + variable.getLength() <= offset) continue;
            result.add(variable.getVariableStorage() + ":" + variable.getName() + ":" +
                typeSpec(variable.getDataType()) + ":" + variable.getSource());
        }
        return String.join(" | ", result);
    }

    private DataType requireType(String specification) {
        if (specification.startsWith("pointer:"))
            return new PointerDataType(requireType(specification.substring(8)),
                currentProgram.getDefaultPointerSize(), dataTypes);
        DataType type = dataTypes.getDataType(specification);
        if (type == null) throw new IllegalArgumentException("missing type " + specification);
        return type;
    }
    private Function function(String addressText) {
        Address address = currentProgram.getAddressFactory().getAddress(addressText);
        return address == null ? null :
            currentProgram.getFunctionManager().getFunctionAt(address);
    }
    private String typeSpec(DataType type) {
        if (type instanceof ghidra.program.model.data.Pointer pointer &&
                pointer.getDataType() != null)
            return "pointer:" + typeSpec(pointer.getDataType());
        return type == null ? "" : type.getPathName();
    }
    private String sha256(String value) throws Exception {
        byte[] digest = MessageDigest.getInstance("SHA-256")
            .digest(value.getBytes(StandardCharsets.UTF_8));
        StringBuilder result = new StringBuilder();
        for (byte item : digest) result.append(String.format("%02x", item & 0xff));
        return result.toString();
    }
    private File inputFile() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException(
                "Path to discriminated_payload_proposals.tsv is required");
        return askFile("Select discriminated_payload_proposals.tsv", "Apply payloads");
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
                row.put(header[column], values[column]);
            rows.add(row);
        }
        return new Tsv(List.of(header), rows);
    }
    private void require(Tsv input, String... columns) {
        for (String column : columns) if (!input.header.contains(column))
            throw new IllegalArgumentException("Missing TSV column: " + column);
    }
    private void writeReport(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("kind\ttarget\tstatus\tdetail\n");
            for (Report row : report) out.write(row.kind + "\t" + clean(row.target) +
                "\t" + row.status + "\t" + clean(row.detail) + "\n");
        }
    }
    private long count(String status) {
        return report.stream().filter(row -> row.status.equals(status)).count();
    }
    private static String[] split(String value) {
        return value == null || value.isBlank() ? new String[0] : value.split(";", -1);
    }
    private static boolean enabled(String value) {
        return "1".equals(value) || "true".equalsIgnoreCase(value) ||
            "yes".equalsIgnoreCase(value);
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
    private static String clean(String value) {
        return value == null ? "" : value.replace('\t', ' ')
            .replace('\r', ' ').replace('\n', ' ');
    }
    private static String message(Exception exception) {
        String value = exception.getMessage();
        return value == null || value.isBlank() ? exception.getClass().getSimpleName() : value;
    }
    private record Tsv(List<String> header, List<Map<String, String>> rows) { }
    private record Report(String kind, String target, String status, String detail) { }
}
