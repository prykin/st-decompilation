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
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Set;
import java.util.TreeMap;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.CategoryPath;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeConflictHandler;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.PointerDataType;
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.StructureDataType;
import ghidra.program.model.data.Undefined;
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
    private static final String UNION_DESCRIPTION = MARKER +
        " Discriminator catalog only: callers receive case-specific stack types.";
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
            Map<String, Set<DataType>> stableCases = new HashMap<>();
            Map<String, Set<String>> familiesByAddress = new HashMap<>();
            for (Map<String, String> row : cases.rows) {
                monitor.checkCancelled();
                DataType type = applyCase(row);
                if (type != null) {
                    families.computeIfAbsent(row.get("family_id"), unused -> new ArrayList<>())
                        .add(type);
                    String address = row.get("function_address").toUpperCase(Locale.ROOT);
                    stableCases.computeIfAbsent(stableCaseKey(address, row.get("case_value")),
                        unused -> new HashSet<>()).add(type);
                    familiesByAddress.computeIfAbsent(address, unused -> new HashSet<>())
                        .add(row.get("family_id"));
                }
            }
            for (Map.Entry<String, List<DataType>> family : families.entrySet())
                ensureUnion(family.getKey(), family.getValue());
            // Stack proposal baselines describe the pre-transaction local identities.
            // Consume them before producer-specific type migration changes those paths.
            for (Map<String, String> row : stacks.rows) {
                monitor.checkCancelled();
                applyStack(row);
            }
            retireObsoleteCaseIdentities(stableCases, familiesByAddress);
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
            if (existing != null && !(existing instanceof Structure)) {
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
                    type = Undefined.getUndefinedDataType(length);
                desired.replaceAtOffset(offset, type, length,
                    String.format("field_%02X", offset),
                    MARKER + " case-local observed access");
            }
            desired.setDescription(MARKER + " " + ANCHOR +
                " discriminator_family=" + row.get("family_id") +
                "; case_value=" + row.get("case_value") +
                "; case_label=" + unt(row.getOrDefault("case_label", "")) +
                "; layout_sha256=" + expectedHash +
                "; evidence=" + unt(row.get("evidence")));

            DataType installed;
            String status;
            if (existing instanceof Structure structure) {
                String description = text(structure.getDescription());
                String storedHash = storedLayoutHash(description);
                String currentHash = caseLayoutHash(structure);
                if (!description.contains(MARKER) || storedHash == null ||
                        !storedHash.equals(currentHash) ||
                        !scriptOwnedCaseFields(structure)) {
                    report.add(new Report("case_type", path, "preserved",
                        "manual or hash-diverged generated layout"));
                    return null;
                }
                if (currentHash.equals(expectedHash)) {
                    installed = structure;
                    status = "unchanged";
                }
                else {
                    structure.replaceWith(desired);
                    structure.setDescription(desired.getDescription());
                    installed = structure;
                    status = "applied";
                }
            }
            else {
                installed = dataTypes.resolve(desired, DataTypeConflictHandler.KEEP_HANDLER);
                status = "applied";
            }
            annotateCaseView(family, row, installed);
            report.add(new Report("case_type", path, status,
                ("unchanged".equals(status) ? "generated layout already current" :
                    "installed generated layout") + "; size=" + size +
                    "; case=" + row.get("case_value")));
            return installed;
        }
        catch (Exception exception) {
            report.add(new Report("case_type", path, "conflict", message(exception)));
            return null;
        }
    }

    /** Retire only exact, hash-intact outputs from an older generated family name.
     * The stable key is observed function address + case value, never layout similarity. */
    private void retireObsoleteCaseIdentities(Map<String, Set<DataType>> stableCases,
            Map<String, Set<String>> familiesByAddress) throws Exception {
        List<DataType> snapshot = new ArrayList<>();
        Iterator<DataType> iterator = dataTypes.getAllDataTypes();
        while (iterator.hasNext()) snapshot.add(iterator.next());
        for (DataType candidate : snapshot) {
            monitor.checkCancelled();
            if (!(candidate instanceof Structure legacy) ||
                    !candidate.getCategoryPath().equals(CATEGORY)) continue;
            String description = text(legacy.getDescription());
            String family = generatedFamily(description);
            String address = generatedFamilyAddress(family);
            String value = generatedCaseValue(description);
            if (!description.contains(MARKER) || family == null || address == null ||
                    value == null || storedLayoutHash(description) == null ||
                    !storedLayoutHash(description).equals(caseLayoutHash(legacy)) ||
                    !scriptOwnedCaseFields(legacy)) continue;
            Function origin = function(address);
            if (libraryOrigin(origin)) {
                String retired = description.replace(ANCHOR, "").trim();
                if (!retired.contains("[ST_VIEW_ONLY]"))
                    retired += " [ST_VIEW_ONLY] Intact generated false-positive from a " +
                        "linked-library discriminator; retire through type lifecycle.";
                if (!retired.equals(description)) {
                    legacy.setDescription(retired);
                    removeObsoleteAnnotation(address, legacy.getPathName());
                    report.add(new Report("case_identity", legacy.getPathName(), "applied",
                        "marked intact linked-library case view for lifecycle"));
                }
                continue;
            }
            Set<DataType> replacements = stableCases.get(stableCaseKey(address, value));
            if (replacements == null || replacements.size() != 1) continue;
            DataType replacement = replacements.iterator().next();
            if (legacy.getPathName().equals(replacement.getPathName())) continue;
            String oldPath = legacy.getPathName();
            dataTypes.replaceDataType(legacy, replacement, false);
            removeObsoleteAnnotation(address, oldPath);
            report.add(new Report("case_identity", oldPath, "applied",
                "migrated exact script-owned predecessor to " + replacement.getPathName()));
        }

        snapshot.clear();
        iterator = dataTypes.getAllDataTypes();
        while (iterator.hasNext()) snapshot.add(iterator.next());
        for (DataType candidate : snapshot) {
            monitor.checkCancelled();
            if (!(candidate instanceof Union union) ||
                    !candidate.getCategoryPath().equals(CATEGORY)) continue;
            String description = text(union.getDescription());
            if (!description.equals(UNION_DESCRIPTION) ||
                    !union.getName().endsWith("_Payload")) continue;
            String family = union.getName().substring(0,
                union.getName().length() - "_Payload".length());
            if (!scriptOwnedUnionMembers(union, family)) continue;
            String address = generatedFamilyAddress(family);
            Function origin = address == null ? null : function(address);
            if (libraryOrigin(origin)) {
                union.setDescription(description.replace(ANCHOR, "").trim() +
                    " [ST_VIEW_ONLY] Intact generated linked-library payload catalog; " +
                    "retire through type lifecycle.");
                report.add(new Report("case_union_identity", union.getPathName(), "applied",
                    "marked linked-library union view for lifecycle"));
                continue;
            }
            Set<String> current = address == null ? null : familiesByAddress.get(address);
            if (current == null || current.size() != 1 || current.contains(family)) continue;
            union.setDescription(description.replace(ANCHOR, "").trim() +
                " [ST_VIEW_ONLY] Obsolete generated discriminator-family catalog; " +
                "retire through STTypeLifecycleApplier after live-use validation.");
            report.add(new Report("case_union_identity", union.getPathName(), "applied",
                "marked obsolete generated union view for lifecycle"));
        }
    }

    private boolean libraryOrigin(Function function) {
        if (function == null) return false;
        if (function.getName(true).startsWith("Library::") ||
                function.getSymbol().getSource() == SourceType.IMPORTED ||
                function.getSignatureSource() == SourceType.IMPORTED) return true;
        for (Variable parameter : function.getParameters())
            if (parameter.getSource() == SourceType.IMPORTED) return true;
        for (var tag : function.getTags()) {
            String name = tag.getName();
            if ("LIBRARY".equals(name) || name.startsWith("LIBRARY_")) return true;
        }
        return false;
    }

    private String stableCaseKey(String address, String value) {
        return address.toUpperCase(Locale.ROOT) + "|" + value;
    }

    private String generatedFamily(String description) {
        Matcher matcher = Pattern.compile("(?:^|\\s)discriminator_family=([^;\\s]+)")
            .matcher(description);
        return matcher.find() ? matcher.group(1) : null;
    }

    private String generatedFamilyAddress(String family) {
        if (family == null) return null;
        Matcher matcher = Pattern.compile("_([0-9a-fA-F]{6,16})$").matcher(family);
        return matcher.find() ? matcher.group(1).toUpperCase(Locale.ROOT) : null;
    }

    private String generatedCaseValue(String description) {
        Matcher matcher = Pattern.compile("(?:^|\\s)case_value=(-?[0-9]+)")
            .matcher(description);
        return matcher.find() ? matcher.group(1) : null;
    }

    private void removeObsoleteAnnotation(String addressText, String oldPath) {
        Function function = function(addressText);
        if (function == null || function.getComment() == null) return;
        String[] paragraphs = function.getComment().split("\n\n", -1);
        List<String> retained = new ArrayList<>();
        for (String paragraph : paragraphs)
            if (!(paragraph.contains(MARKER + " Case-local payload view:") &&
                    paragraph.contains(oldPath))) retained.add(paragraph);
        String current = String.join("\n\n", retained).trim();
        if (!current.equals(function.getComment().trim()))
            function.setComment(current.isBlank() ? null : current);
    }

    private boolean scriptOwnedUnionMembers(Union union, String family) throws Exception {
        if (union.getNumComponents() == 0) return false;
        for (var component : union.getComponents()) {
            String field = text(component.getFieldName());
            if (!(component.getDataType() instanceof Structure member) ||
                    (!("case_" + member.getName()).equals(field) &&
                        !field.startsWith("case_" + family + "_Case_")) ||
                    !text(component.getComment()).isBlank() ||
                    !text(member.getDescription()).contains(MARKER) ||
                    storedLayoutHash(text(member.getDescription())) == null ||
                    !storedLayoutHash(text(member.getDescription())).equals(
                        caseLayoutHash(member)) ||
                    !scriptOwnedCaseFields(member)) return false;
        }
        return true;
    }

    private boolean scriptOwnedCaseFields(Structure structure) {
        for (var component : structure.getDefinedComponents()) {
            String expected = String.format("field_%02X", component.getOffset());
            String comment = text(component.getComment());
            if (!expected.equals(component.getFieldName()) || !comment.contains(MARKER))
                return false;
        }
        return true;
    }

    private String storedLayoutHash(String description) {
        Matcher matcher = Pattern.compile("layout_sha256=([0-9a-fA-F]{64})")
            .matcher(description);
        return matcher.find() ? matcher.group(1).toLowerCase(Locale.ROOT) : null;
    }

    private String caseLayoutHash(Structure structure) throws Exception {
        List<String> fields = new ArrayList<>();
        for (var component : structure.getDefinedComponents())
            fields.add(component.getOffset() + ":" + component.getLength() + ":" +
                typeSpec(component.getDataType()));
        return sha256(structure.getLength() + "|" + String.join(";", fields));
    }

    private String typeSpec(DataType type) {
        if (type instanceof Pointer pointer && pointer.getDataType() != null)
            return "pointer:" + typeSpec(pointer.getDataType());
        return type == null ? "" : type.getPathName();
    }

    private void annotateCaseView(Function function, Map<String, String> row,
            DataType type) {
        if (function == null || type == null) return;
        String discriminator = unt(row.getOrDefault("discriminator_name", ""));
        String label = unt(row.getOrDefault("case_label", ""));
        if (label.isBlank()) label = row.get("case_value");
        String block = MARKER + " Case-local payload view: " +
            discriminator + " == " + label + " uses " +
            type.getPathName() + ". carrier=" +
            unt(row.getOrDefault("carrier_name", "")) + "; The carrier ABI remains " +
            unt(row.getOrDefault("carrier_type", "")) + ".";
        String old = function.getComment();
        if (old == null || old.isBlank()) {
            function.setComment(block);
            return;
        }
        if (old.contains(block)) return;
        String prefix = MARKER + " Case-local payload view: " +
            discriminator + " == " + label + " uses " + type.getPathName() + ".";
        List<String> retained = new ArrayList<>();
        for (String paragraph : old.split("\n\n", -1))
            if (!paragraph.contains(prefix)) retained.add(paragraph);
        retained.add(block);
        function.setComment(String.join("\n\n", retained).trim());
    }

    private void ensureUnion(String family, List<DataType> members) throws Exception {
        String name = family + "_Payload";
        DataType existing = dataTypes.getDataType(CATEGORY, name);
        if (existing instanceof Union union) {
            String description = text(union.getDescription());
            if (!description.equals(UNION_DESCRIPTION) ||
                    !scriptOwnedUnionMembers(union, family)) {
                report.add(new Report("case_union", union.getPathName(), "preserved",
                    "manual or edited generated union"));
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
        union.setDescription(UNION_DESCRIPTION);
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
                if (start == offset && variable.getLength() == length &&
                        variable.getDataType().getPathName().equals(
                            proposed.getPathName())) {
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
        if (specification.startsWith("/undefined")) {
            int size = Integer.parseInt(specification.substring(10));
            return Undefined.getUndefinedDataType(size);
        }
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
    private static String text(String value) { return value == null ? "" : value; }
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
