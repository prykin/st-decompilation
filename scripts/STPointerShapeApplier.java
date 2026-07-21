// Apply reviewed pointer-shape proposals produced by STPointerShapeAnalyzer.
// Manual variable types and unowned concrete global data are preserved.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Apply Pointer Shapes

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.security.MessageDigest;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.HashMap;
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
import ghidra.program.model.data.DataUtilities;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.PointerDataType;
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.StructureDataType;
import ghidra.program.model.data.TypeDef;
import ghidra.program.model.data.Undefined;
import ghidra.program.model.listing.CommentType;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.GhidraClass;
import ghidra.program.model.listing.Listing;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.listing.Variable;
import ghidra.program.model.symbol.Namespace;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.SymbolTable;

public class STPointerShapeApplier extends GhidraScript {
    private static final String MARKER = "[STPointerShapeApplier]";
    private static final String HASH_MARKER = "; generated_layout_sha256=";
    private final List<ReportRow> report = new ArrayList<>();
    private DataTypeManager dataTypes;
    private Listing listing;

    @Override
    protected void run() throws Exception {
        if (currentProgram == null) {
            printerr("Open the same program that was analyzed.");
            return;
        }
        File targetFile = inputFile();
        if (targetFile == null) return;
        if (targetFile.isDirectory()) targetFile = new File(targetFile,
            "pointer_shape_target_proposals.tsv");
        File directory = targetFile.getAbsoluteFile().getParentFile();
        File typeFile = new File(directory, "pointer_shape_type_proposals.tsv");
        File fieldFile = new File(directory, "pointer_shape_field_proposals.tsv");
        if (!targetFile.isFile()) throw new IllegalArgumentException("Missing " + targetFile);
        if (!typeFile.isFile()) throw new IllegalArgumentException("Missing sibling " + typeFile);
        if (!fieldFile.isFile()) throw new IllegalArgumentException("Missing sibling " + fieldFile);

        Tsv targets = readTsv(targetFile.toPath());
        Tsv types = readTsv(typeFile.toPath());
        Tsv fields = readTsv(fieldFile.toPath());
        requireColumns(targets, "apply", "function_address", "function_name", "target_kind",
            "target_name", "target_locator", "expected_type", "expected_source",
            "proposed_type", "confidence", "reason");
        requireColumns(types, "apply", "shape_id", "type_path", "length",
            "target_count", "field_count", "confidence", "reason");
        requireColumns(fields, "apply", "shape_id", "offset", "size", "proposed_name",
            "proposed_type", "evidence_count", "reason");

        dataTypes = currentProgram.getDataTypeManager();
        listing = currentProgram.getListing();

        int transaction = currentProgram.startTransaction("Apply recovered pointer shapes");
        boolean commit = false;
        try {
            Map<String, List<Map<String, String>>> byShape = new LinkedHashMap<>();
            for (Map<String, String> row : fields.rows)
                byShape.computeIfAbsent(unt(row.get("shape_id")), ignored -> new ArrayList<>())
                    .add(row);
            for (Map<String, String> row : dependencyOrder(types.rows, byShape)) {
                monitor.checkCancelled();
                applyType(row, byShape.getOrDefault(unt(row.get("shape_id")), List.of()));
            }
            applyTargets(targets.rows);
            commit = true;
        }
        finally {
            currentProgram.endTransaction(transaction, commit);
        }

        Path reportPath = directory.toPath().resolve("pointer_shape_apply_report.tsv");
        writeReport(reportPath);
        println("Pointer shapes: applied=" + count("applied") + ", updated=" +
            count("updated") + ", unchanged=" + count("unchanged") +
            ", preserved=" + count("preserved") + ", conflicts=" + count("conflict") +
            ", disabled=" + count("disabled"));
        println("Apply report: " + reportPath.toAbsolutePath().normalize());
    }

    // Child shapes must exist before a parent field can be resolved as a pointer
    // to them. The analyzer normally names them so lexical order also works, but
    // the dependency walk makes the TSV contract independent of naming.
    private List<Map<String, String>> dependencyOrder(List<Map<String, String>> typeRows,
            Map<String, List<Map<String, String>>> byShape) {
        Map<String, Map<String, String>> byPath = new LinkedHashMap<>();
        for (Map<String, String> row : typeRows)
            byPath.put(unt(row.get("type_path")), row);
        Map<String, Integer> state = new HashMap<>();
        List<Map<String, String>> result = new ArrayList<>();
        for (Map<String, String> row : typeRows)
            visitType(row, byPath, byShape, state, result);
        return result;
    }

    private void visitType(Map<String, String> row,
            Map<String, Map<String, String>> byPath,
            Map<String, List<Map<String, String>>> byShape, Map<String, Integer> state,
            List<Map<String, String>> result) {
        String path = unt(row.get("type_path"));
        int current = state.getOrDefault(path, 0);
        if (current == 2) return;
        if (current == 1) return; // recursive pointers are left for normal conflict reporting
        state.put(path, 1);
        String shapeId = unt(row.get("shape_id"));
        for (Map<String, String> field : byShape.getOrDefault(shapeId, List.of())) {
            if (!enabled(field.get("apply"))) continue;
            String specification = unt(field.get("proposed_type"));
            if (!specification.startsWith("pointer:")) continue;
            Map<String, String> dependency = byPath.get(
                specification.substring("pointer:".length()));
            if (dependency != null) visitType(dependency, byPath, byShape, state, result);
        }
        state.put(path, 2);
        result.add(row);
    }

    private void applyType(Map<String, String> row, List<Map<String, String>> fieldRows) {
        String id = unt(row.get("shape_id"));
        String path = unt(row.get("type_path"));
        if (!enabled(row.get("apply"))) {
            report.add(new ReportRow("type", id, path, "disabled", "apply=0"));
            return;
        }
        try {
            int length = positive(row.get("length"), "shape length");
            Structure existing = existingStructure(path);
            Safety safety = structureSafety(existing);
            if (!safety.safe) {
                report.add(new ReportRow("type", id, path, "preserved", safety.reason));
                return;
            }
            StructureDataType desired = new StructureDataType(category(path), leaf(path),
                length, dataTypes);
            long previousEnd = -1;
            List<Map<String, String>> selected = fieldRows.stream()
                .filter(field -> enabled(field.get("apply")))
                .sorted(Comparator.comparingLong(field -> Long.parseLong(field.get("offset"))))
                .toList();
            for (Map<String, String> field : selected) {
                int offset = nonnegative(field.get("offset"), "field offset");
                int size = positive(field.get("size"), "field size");
                if (offset < previousEnd || offset + size > length)
                    throw new IllegalArgumentException("overlapping/out-of-range field at " + offset);
                DataType type = resolveFieldType(unt(field.get("proposed_type")), size);
                String name = unt(field.get("proposed_name"));
                String comment = MARKER + " evidence_count=" + field.get("evidence_count") +
                    "; " + unt(field.get("reason"));
                desired.replaceAtOffset(offset, type, size, name.isBlank() ? null : name, comment);
                previousEnd = (long)offset + size;
            }
            String desiredHash = layoutHash(desired);
            desired.setDescription(MARKER + " Generated anonymous fixed-offset pointer shape" +
                HASH_MARKER + desiredHash);
            if (existing == null) {
                DataType installed = dataTypes.resolve(desired, DataTypeConflictHandler.KEEP_HANDLER);
                if (!(installed instanceof Structure structure) ||
                        !structure.getPathName().equals(path))
                    throw new IllegalStateException("could not create exact type " + path);
                structure.setDescription(desired.getDescription());
                report.add(new ReportRow("type", id, path, "applied",
                    "length=" + length + "; fields=" + selected.size()));
                return;
            }
            String currentHash = layoutHash(existing);
            if (currentHash.equals(desiredHash)) {
                existing.setDescription(desired.getDescription());
                report.add(new ReportRow("type", id, path, "unchanged",
                    "length=" + length + "; fields=" + selected.size()));
                return;
            }
            existing.replaceWith(desired);
            existing.setDescription(desired.getDescription());
            report.add(new ReportRow("type", id, path, "updated",
                "length=" + length + "; fields=" + selected.size()));
        }
        catch (Exception exception) {
            report.add(new ReportRow("type", id, path, "conflict", message(exception)));
        }
    }

    private void applyTargets(List<Map<String, String>> rows) throws Exception {
        Map<String, List<Map<String, String>>> localsByFunction = new LinkedHashMap<>();
        for (Map<String, String> row : rows) {
            if (!enabled(row.get("apply"))) {
                report.add(new ReportRow("target", unt(row.get("function_address")),
                    unt(row.get("target_locator")), "disabled", "apply=0"));
                continue;
            }
            String kind = unt(row.get("target_kind"));
            if (kind.equals("global")) applyGlobal(row);
            else localsByFunction.computeIfAbsent(unt(row.get("function_address")),
                ignored -> new ArrayList<>()).add(row);
        }
        for (Map.Entry<String, List<Map<String, String>>> entry : localsByFunction.entrySet()) {
            monitor.checkCancelled();
            applyFunctionTargets(entry.getKey(), entry.getValue());
        }
    }

    private void applyFunctionTargets(String functionAddress,
            List<Map<String, String>> rows) {
        Address address;
        try { address = address(functionAddress); }
        catch (Exception exception) {
            for (Map<String, String> row : rows) report.add(targetReport(row, "conflict",
                message(exception)));
            return;
        }
        Function function = currentProgram.getFunctionManager().getFunctionAt(address);
        if (function == null) {
            for (Map<String, String> row : rows) report.add(targetReport(row, "conflict",
                "function is missing"));
            return;
        }
        for (Map<String, String> row : rows) {
            Variable variable = findVariable(function, row);
            if (variable == null) {
                report.add(targetReport(row, "conflict",
                    "persistent variable baseline is stale/ambiguous"));
                continue;
            }
            applyLocal(row, function, variable);
        }
    }

    private Variable findVariable(Function function, Map<String, String> row) {
        boolean parameter = unt(row.get("target_kind")).equals("parameter");
        Variable[] candidates = parameter ? function.getParameters() : function.getLocalVariables();
        String locator = unt(row.get("target_locator"));
        String name = unt(row.get("target_name"));
        List<Variable> storageMatches = new ArrayList<>();
        for (Variable candidate : candidates) {
            if (!candidate.isValid() || candidate.getVariableStorage() == null ||
                    !candidate.getVariableStorage().toString().equals(locator)) continue;
            if (candidate.getName().equals(name)) return candidate;
            storageMatches.add(candidate);
        }
        return storageMatches.size() == 1 ? storageMatches.get(0) : null;
    }

    private void applyLocal(Map<String, String> row, Function function, Variable variable) {
        try {
            DataType proposed = resolvePointer(unt(row.get("proposed_type")));
            if (proposed == null) throw new IllegalArgumentException("proposed type is missing");
            String currentType = typeSpecification(variable.getDataType());
            String proposedType = typeSpecification(proposed);
            SourceType source = variable.getSource();
            boolean owned = scriptOwnedPointer(variable.getComment());
            if (currentType.equals(proposedType) || proposed.isEquivalent(variable.getDataType())) {
                addVariableComment(variable, row);
                report.add(targetReport(row, "unchanged", "type already applied"));
                return;
            }
            if ((source == SourceType.USER_DEFINED || source == SourceType.IMPORTED) && !owned) {
                report.add(targetReport(row, "preserved", "manual/imported variable type"));
                return;
            }
            String expected = unt(row.get("expected_type"));
            if (!owned && !currentType.equals(expected)) {
                report.add(targetReport(row, "preserved", "stale variable baseline: " +
                    currentType + " != " + expected));
                return;
            }
            if (!owned && !replaceable(variable.getDataType())) {
                report.add(targetReport(row, "preserved", "concrete non-generic variable type"));
                return;
            }
            if (variable instanceof Parameter parameter && parameter.isAutoParameter()) {
                variable = applyAutoThis(function, proposed);
            }
            else variable.setDataType(proposed, SourceType.ANALYSIS);
            addVariableComment(variable, row);
            report.add(targetReport(row, "applied", currentType + " -> " +
                typeSpecification(proposed)));
        }
        catch (Exception exception) {
            report.add(targetReport(row, "conflict", message(exception)));
        }
    }

    /**
     * Ghidra synthesizes the this parameter from a function's class namespace;
     * calling Variable.setDataType on that auto-parameter always throws.  A
     * unique high-confidence pointer-shape target therefore attaches an
     * otherwise global helper to the matching class and lets Ghidra regenerate
     * the receiver type through its normal __thiscall model.
     */
    private Parameter applyAutoThis(Function function, DataType proposed)
            throws Exception {
        DataType type = proposed;
        while (type instanceof TypeDef typedef) type = typedef.getBaseDataType();
        if (!(type instanceof Pointer pointer))
            throw new IllegalArgumentException("auto this proposal is not a pointer");
        type = pointer.getDataType();
        while (type instanceof TypeDef typedef) type = typedef.getBaseDataType();
        if (!(type instanceof Structure structure))
            throw new IllegalArgumentException("auto this proposal has no class structure");
        if (structure.getPathName().contains("/Recovered/PointerShapes/") ||
                structure.getPathName().contains("/Recovered/ClassPointees/") ||
                structure.getPathName().contains("/Recovered/HiddenThis/"))
            throw new IllegalArgumentException(
                "anonymous auto-this ownership must be handled by STHiddenThisAnalyzer");

        SymbolTable symbols = currentProgram.getSymbolTable();
        Namespace global = currentProgram.getGlobalNamespace();
        Namespace current = function.getParentNamespace();
        Namespace target = symbols.getNamespace(structure.getName(), global);
        if (target == null)
            target = symbols.createClass(global, structure.getName(), SourceType.ANALYSIS);
        if (!(target instanceof GhidraClass))
            throw new IllegalArgumentException("matching namespace is not a class: " +
                target.getName(true));
        if (!current.equals(global) && !current.equals(target))
            throw new IllegalArgumentException("function already belongs to " +
                current.getName(true));
        if (!function.getCallingConventionName().equals("__thiscall"))
            throw new IllegalArgumentException("auto this target is not __thiscall");
        if (!current.equals(target)) function.setParentNamespace(target);

        Parameter refreshed = null;
        for (Parameter candidate : function.getParameters())
            if (candidate.isAutoParameter()) { refreshed = candidate; break; }
        if (refreshed == null || !(refreshed.getDataType() instanceof Pointer actual) ||
                !structure.isEquivalent(actual.getDataType()))
            throw new IllegalStateException("class namespace did not regenerate the this type");
        return refreshed;
    }

    private void applyGlobal(Map<String, String> row) {
        try {
            Address address = address(unt(row.get("target_locator")));
            Data data = listing.getDefinedDataAt(address);
            if (data == null || data.getLength() != currentProgram.getDefaultPointerSize())
                throw new IllegalArgumentException("missing exact pointer-sized data");
            DataType proposed = resolvePointer(unt(row.get("proposed_type")));
            if (proposed == null) throw new IllegalArgumentException("proposed type is missing");
            String currentType = typeSpecification(data.getDataType());
            String proposedType = typeSpecification(proposed);
            boolean owned = owned(address);
            if (currentType.equals(proposedType) || proposed.isEquivalent(data.getDataType())) {
                addGlobalComment(address, row);
                report.add(targetReport(row, "unchanged", "type already applied"));
                return;
            }
            if (!owned && !currentType.equals(unt(row.get("expected_type")))) {
                report.add(targetReport(row, "preserved", "stale global baseline"));
                return;
            }
            // Data has no SourceType. Preserve every concrete unowned definition; only
            // undefined data or a previous run of this applier may be replaced safely.
            if (!owned && !Undefined.isUndefined(data.getDataType())) {
                report.add(targetReport(row, "preserved", "unowned concrete global data"));
                return;
            }
            if (listing.getInstructionContaining(address) != null)
                throw new IllegalArgumentException("global target overlaps code");
            DataUtilities.createData(currentProgram, address, proposed, proposed.getLength(),
                owned ? DataUtilities.ClearDataMode.CLEAR_ALL_CONFLICT_DATA :
                    DataUtilities.ClearDataMode.CLEAR_ALL_UNDEFINED_CONFLICT_DATA);
            addGlobalComment(address, row);
            report.add(targetReport(row, "applied", currentType + " -> " +
                typeSpecification(proposed)));
        }
        catch (Exception exception) {
            report.add(targetReport(row, "conflict", message(exception)));
        }
    }

    private void addVariableComment(Variable variable, Map<String, String> row) {
        String block = MARKER + " " + unt(row.get("proposed_type")) + "; " +
            unt(row.get("reason"));
        String old = variable.getComment();
        if (old == null || old.isBlank()) variable.setComment(block);
        else if (!old.contains(MARKER)) variable.setComment(old + "\n" + block);
        else variable.setComment(old.substring(0, old.indexOf(MARKER)).stripTrailing() +
            (old.substring(0, old.indexOf(MARKER)).isBlank() ? "" : "\n") + block);
    }

    private void addGlobalComment(Address address, Map<String, String> row) {
        String block = MARKER + " Recovered global pointer type.\nType: " +
            unt(row.get("proposed_type")) + "\nEvidence: " + unt(row.get("reason"));
        String old = listing.getComment(CommentType.PLATE, address);
        if (old == null || old.isBlank()) listing.setComment(address, CommentType.PLATE, block);
        else if (!old.contains(MARKER)) listing.setComment(address, CommentType.PLATE,
            old + "\n\n" + block);
        else {
            int start = old.indexOf(MARKER);
            String prefix = old.substring(0, start).stripTrailing();
            listing.setComment(address, CommentType.PLATE,
                prefix.isBlank() ? block : prefix + "\n\n" + block);
        }
    }

    private Structure existingStructure(String path) {
        DataType type = dataTypes.getDataType(path);
        if (type == null) return null;
        if (!(type instanceof Structure structure))
            throw new IllegalArgumentException("target path is not a structure: " + path);
        return structure;
    }

    private Safety structureSafety(Structure structure) {
        if (structure == null) return new Safety(true, "new script-owned type");
        String description = structure.getDescription();
        if (description == null || !description.contains(MARKER))
            return new Safety(false, "existing manual/unowned structure");
        String stored = storedHash(description);
        if (stored == null) return new Safety(false, "generated structure lacks safety hash");
        if (!stored.equals(layoutHash(structure)))
            return new Safety(false, "manual changes detected; structure preserved");
        return new Safety(true, "unchanged script-owned structure");
    }

    private DataType resolvePointer(String specification) {
        if (!specification.startsWith("pointer:")) return null;
        String path = specification.substring("pointer:".length());
        DataType pointed;
        if (path.matches("/undefined(?:1|2|4|8)?")) {
            String suffix = path.substring("/undefined".length());
            int size = suffix.isBlank() ? 1 : Integer.parseInt(suffix);
            pointed = Undefined.getUndefinedDataType(size);
        }
        else pointed = dataTypes.getDataType(path);
        return pointed == null ? null : new PointerDataType(pointed,
            currentProgram.getDefaultPointerSize(), dataTypes);
    }

    private DataType resolveFieldType(String specification, int size) {
        if (specification.startsWith("pointer:")) {
            DataType pointer = resolvePointer(specification);
            if (pointer == null) throw new IllegalArgumentException("missing type " + specification);
            return pointer;
        }
        if (specification.startsWith("/undefined"))
            return Undefined.getUndefinedDataType(size);
        DataType type = dataTypes.getDataType(specification);
        if (type == null) throw new IllegalArgumentException("missing type " + specification);
        if (type.getLength() > 0 && type.getLength() != size)
            throw new IllegalArgumentException("field type length mismatch for " + specification);
        return type;
    }

    private boolean replaceable(DataType type) {
        type = untypedef(type);
        if (Undefined.isUndefined(type)) return true;
        if (!(type instanceof Pointer pointer)) {
            String name = type.getName().toLowerCase(Locale.ROOT);
            return name.matches("(?:u?int|long|ulong|dword|word|qword|undefined[1248]?)");
        }
        DataType pointed = untypedef(pointer.getDataType());
        if (pointed instanceof Structure) return false;
        String name = pointed.getName().toLowerCase(Locale.ROOT);
        return name.matches("(?:void|byte|char|uchar|u?int|long|ulong|undefined[1248]?)");
    }

    private DataType untypedef(DataType type) {
        while (type instanceof TypeDef typedef) type = typedef.getBaseDataType();
        return type;
    }

    private String typeSpecification(DataType type) {
        type = untypedef(type);
        if (type instanceof Pointer pointer && pointer.getDataType() != null)
            return "pointer:" + untypedef(pointer.getDataType()).getPathName();
        return type == null ? "" : type.getPathName();
    }

    private boolean owned(Address address) {
        String comment = listing.getComment(CommentType.PLATE, address);
        return scriptOwnedPointer(comment);
    }

    private boolean scriptOwnedPointer(String comment) {
        return comment != null && (comment.contains(MARKER) ||
            comment.contains("[STTypeFamilyApplier]") ||
            comment.contains("[STGlobalDataApplier]"));
    }

    private String layoutHash(Structure structure) {
        StringBuilder value = new StringBuilder();
        value.append("length=").append(structure.getLength()).append('\n');
        for (DataTypeComponent component : structure.getDefinedComponents()) {
            value.append(component.getOffset()).append('|').append(component.getLength())
                .append('|').append(component.getDataType().getPathName()).append('|')
                .append(component.getFieldName() == null ? "" : component.getFieldName())
                .append('|').append(component.getComment() == null ? "" : component.getComment())
                .append('\n');
        }
        return sha256(value.toString());
    }

    private String storedHash(String description) {
        int index = description.indexOf(HASH_MARKER);
        if (index < 0) return null;
        String value = description.substring(index + HASH_MARKER.length()).trim();
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
        catch (Exception exception) { throw new IllegalStateException(exception); }
    }

    private CategoryPath category(String path) {
        int separator = path.lastIndexOf('/');
        return new CategoryPath(separator <= 0 ? "/" : path.substring(0, separator));
    }
    private String leaf(String path) {
        int separator = path.lastIndexOf('/');
        return separator < 0 ? path : path.substring(separator + 1);
    }

    private File inputFile() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless()) throw new IllegalArgumentException(
            "Path to pointer_shape_target_proposals.tsv is required");
        return askFile("Select pointer_shape_target_proposals.tsv or its directory",
            "Apply pointer shapes");
    }

    private Tsv readTsv(Path path) throws Exception {
        List<String> lines = Files.readAllLines(path, StandardCharsets.UTF_8);
        if (lines.isEmpty()) throw new IllegalArgumentException("Empty TSV: " + path);
        String[] header = lines.get(0).split("\t", -1);
        List<Map<String, String>> rows = new ArrayList<>();
        for (int line = 1; line < lines.size(); line++) {
            if (lines.get(line).isBlank()) continue;
            String[] values = lines.get(line).split("\t", -1);
            if (values.length != header.length) throw new IllegalArgumentException(
                path.getFileName() + " line " + (line + 1) + " has " + values.length +
                " columns; expected " + header.length);
            Map<String, String> row = new LinkedHashMap<>();
            for (int column = 0; column < header.length; column++)
                row.put(header[column], values[column]);
            rows.add(row);
        }
        return new Tsv(List.of(header), rows);
    }

    private void requireColumns(Tsv tsv, String... names) {
        for (String name : names) if (!tsv.header.contains(name))
            throw new IllegalArgumentException("Missing TSV column: " + name);
    }

    private void writeReport(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("item_kind\titem_id\tlocator\tstatus\tdetail\n");
            for (ReportRow row : report) out.write(row.kind + "\t" + tsv(row.id) + "\t" +
                tsv(row.locator) + "\t" + row.status + "\t" + tsv(row.detail) + "\n");
        }
    }

    private ReportRow targetReport(Map<String, String> row, String status, String detail) {
        String id = unt(row.get("function_address"));
        if (id.isBlank()) id = "global";
        return new ReportRow("target", id + ":" + unt(row.get("target_name")),
            unt(row.get("target_locator")), status, detail);
    }

    private long count(String status) {
        return report.stream().filter(row -> row.status.equals(status)).count();
    }

    private int positive(String value, String label) {
        int result = Integer.parseInt(value);
        if (result < 1) throw new IllegalArgumentException("invalid " + label + ": " + value);
        return result;
    }
    private int nonnegative(String value, String label) {
        int result = Integer.parseInt(value);
        if (result < 0) throw new IllegalArgumentException("invalid " + label + ": " + value);
        return result;
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
        if (value == null) return "";
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

    private record Tsv(List<String> header, List<Map<String, String>> rows) {}
    private record Safety(boolean safe, String reason) {}
    private record ReportRow(String kind, String id, String locator, String status,
        String detail) {}
}
