// Apply type_bootstrap_proposals.tsv produced by STTypeBootstrapAnalyzer.
// The applier creates only layouts whose evidence row remains current.  It never installs
// addresses, enum members, per-function stack offsets, or semantic view aliases.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Apply Heuristic Type Bootstrap

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.ArrayDataType;
import ghidra.program.model.data.ByteDataType;
import ghidra.program.model.data.CategoryPath;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeConflictHandler;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.DWordDataType;
import ghidra.program.model.data.EnumDataType;
import ghidra.program.model.data.Enum;
import ghidra.program.model.data.IntegerDataType;
import ghidra.program.model.data.PointerDataType;
import ghidra.program.model.data.ShortDataType;
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.StructureDataType;
import ghidra.program.model.data.Union;
import ghidra.program.model.data.UnionDataType;
import ghidra.program.model.data.VoidDataType;
import ghidra.program.model.data.WordDataType;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.symbol.SourceType;

public class STTypeBootstrapApplier extends GhidraScript {
    private static final CategoryPath ROOT = new CategoryPath("/SubmarineTitans/Recovered");
    private static final CategoryPath RECORDS =
        new CategoryPath("/SubmarineTitans/Recovered/GlobalRecords");
    private static final String MARKER = "[STTypeBootstrapApplier]";
    private static final String ANCHOR = "[ST_SEMANTIC_ANCHOR]";
    private static final String VIEW = "[ST_VIEW_ONLY]";
    private final List<Report> report = new ArrayList<>();
    private DataTypeManager dataTypes;
    private int pointerSize;

    @Override
    protected void run() throws Exception {
        end(true);
        if (currentProgram == null) {
            printerr("Open the analyzed ST program first.");
            return;
        }
        File file = inputFile();
        if (file == null) return;
        Tsv input = read(file.toPath());
        require(input, "apply", "action", "target", "replacement", "expected",
            "evidence_domains", "confidence", "evidence");
        dataTypes = currentProgram.getDataTypeManager();
        pointerSize = currentProgram.getDefaultPointerSize();

        int transaction = currentProgram.startTransaction("Apply heuristic type bootstrap");
        boolean commit = false;
        try {
            for (Map<String, String> row : input.rows) {
                monitor.checkCancelled();
                apply(row);
            }
            commit = true;
        }
        finally {
            currentProgram.endTransaction(transaction, commit);
        }
        Path output = file.toPath().toAbsolutePath().normalize().resolveSibling(
            "type_bootstrap_apply_report.tsv");
        writeReport(output);
        println("Type bootstrap: applied=" + count("applied") + ", unchanged=" +
            count("unchanged") + ", preserved=" + count("preserved") +
            ", conflicts=" + count("conflict") + ", disabled=" + count("disabled"));
        println("Apply report: " + output);
    }

    private void apply(Map<String, String> row) {
        String action = row.get("action");
        String target = unt(row.get("target"));
        if (!enabled(row.get("apply"))) {
            report.add(new Report(action, target, "disabled", "apply=0"));
            return;
        }
        try {
            if (("replace_duplicate".equals(action) || "mark_view_only".equals(action)) &&
                    !typeFingerprint(dataTypes.getDataType(target)).equals(
                        unt(row.get("expected")))) {
                report.add(new Report(action, target, "preserved",
                    "stale type baseline"));
                return;
            }
            String status = switch (action) {
                case "ensure_darray" -> ensureDArray();
                case "ensure_message" -> ensureMessage();
                case "ensure_control_command" -> ensureControlCommand();
                case "ensure_player_temp" -> ensurePlayerTemp();
                case "ensure_spatial_descriptors" -> ensureSpatialDescriptors();
                case "canonical_system" -> canonicalSystem();
                case "replace_duplicate" -> replaceDuplicate(target,
                    unt(row.get("replacement")));
                case "mark_view_only" -> markViewOnly(target);
                case "demote_signature" -> demoteSignature(target,
                    unt(row.get("expected")), unt(row.get("evidence")));
                default -> throw new IllegalArgumentException("Unknown action " + action);
            };
            report.add(new Report(action, target, status, unt(row.get("evidence"))));
        }
        catch (Exception exception) {
            report.add(new Report(action, target, "conflict", message(exception)));
        }
    }

    private String ensureDArray() {
        DataType existing = dataTypes.getDataType(ROOT, "DArrayTy");
        if (existing instanceof Structure structure) {
            if (structure.getLength() == 0x20) {
                return ensureDescription(structure, MARKER + " " + ANCHOR +
                    " inferred from DArray helper-family field accesses and runtime stride use.") ?
                    "applied" : "unchanged";
            }
            return "preserved";
        }
        if (existing != null) return "preserved";
        StructureDataType type = new StructureDataType(ROOT, "DArrayTy", 0, dataTypes);
        type.setDescription(MARKER + " " + ANCHOR +
            " inferred descriptor: ownership flags, cursor, element size/count/capacity, " +
            "growth state, callback, and contiguous data pointer.");
        add(type, DWordDataType.dataType, "flags");
        add(type, DWordDataType.dataType, "iteratorIndex");
        add(type, DWordDataType.dataType, "elementSize");
        add(type, DWordDataType.dataType, "count");
        add(type, DWordDataType.dataType, "capacity");
        add(type, DWordDataType.dataType, "growCapacity");
        add(type, pointer(VoidDataType.dataType), "growCallback");
        add(type, pointer(VoidDataType.dataType), "data");
        dataTypes.resolve(type, DataTypeConflictHandler.KEEP_HANDLER);
        return "applied";
    }

    private String ensureMessage() {
        DataType existing = dataTypes.getDataType(ROOT, "STMessage");
        if (existing instanceof Structure structure && structure.getLength() >= 0x20) {
            boolean changed = ensureDescription(structure, MARKER + " " + ANCHOR +
                " common envelope inferred from GetMessage RET 4 and +0x10..+0x1c accesses.");
            changed |= "applied".equals(markViewOnly(
                ROOT.getPath() + "/STMessageArgWords"));
            return changed ? "applied" : "unchanged";
        }
        if (existing != null) return "preserved";

        DataType messageId = dataTypes.getDataType(ROOT, "STMessageId");
        if (messageId == null) {
            EnumDataType empty = new EnumDataType(ROOT, "STMessageId", 4, dataTypes);
            empty.setDescription(MARKER +
                " Empty inferred domain; STMessageIdAnalyzer supplies every observed value.");
            messageId = dataTypes.resolve(empty, DataTypeConflictHandler.KEEP_HANDLER);
        }
        StructureDataType words = new StructureDataType(ROOT, "STMessageArgWords", 0, dataTypes);
        words.setDescription(MARKER + " " + VIEW +
            " neutral 16-bit storage view selected by the message discriminator.");
        add(words, WordDataType.dataType, "low");
        add(words, WordDataType.dataType, "high");
        DataType resolvedWords = dataTypes.resolve(words, DataTypeConflictHandler.KEEP_HANDLER);

        UnionDataType argument = new UnionDataType(ROOT, "STMessageArg", dataTypes);
        argument.setDescription(MARKER + " " + VIEW +
            " discriminator-dependent four-byte message argument slot.");
        argument.add(DWordDataType.dataType, 4, "u32", null);
        argument.add(IntegerDataType.dataType, 4, "i32", null);
        argument.add(pointer(VoidDataType.dataType), pointerSize, "ptr", null);
        argument.add(resolvedWords, 4, "words", null);
        DataType resolvedArgument = dataTypes.resolve(argument,
            DataTypeConflictHandler.KEEP_HANDLER);

        StructureDataType message = new StructureDataType(ROOT, "STMessage", 0, dataTypes);
        message.setDescription(MARKER + " " + ANCHOR +
            " common 0x20-byte GetMessage envelope; argument meaning is selected by id.");
        for (int offset = 0; offset < 0x10; offset += 4)
            add(message, DWordDataType.dataType,
                String.format("unknown_%02x", offset));
        add(message, messageId, "id");
        add(message, resolvedArgument, "arg0");
        add(message, resolvedArgument, "arg1");
        add(message, resolvedArgument, "arg2");
        dataTypes.resolve(message, DataTypeConflictHandler.KEEP_HANDLER);
        return "applied";
    }

    private String ensureControlCommand() {
        DataType existing = dataTypes.getDataType(ROOT, "STControlCommand");
        if (existing instanceof Structure structure && structure.getLength() >= 0x1b) {
            return ensureDescription(structure, MARKER + " " + ANCHOR +
                " producer/consumer command header; payload remains discriminator-dependent.") ?
                "applied" : "unchanged";
        }
        if (existing != null) return "preserved";
        StructureDataType command = new StructureDataType(ROOT, "STControlCommand", 0, dataTypes);
        command.setDescription(MARKER + " " + ANCHOR +
            " packed producer/consumer command header; payload facets are synthesized by " +
            "STDiscriminatedPayloadAnalyzer.");
        add(command, DWordDataType.dataType, "unknown_00");
        add(command, DWordDataType.dataType, "senderId");
        add(command, ByteDataType.dataType, "playerId");
        add(command, ByteDataType.dataType, "sourcePlayerId");
        add(command, ShortDataType.dataType, "objectId");
        add(command, ShortDataType.dataType, "targetKind");
        add(command, ByteDataType.dataType, "commandType");
        add(command, DWordDataType.dataType, "primaryPayloadSize");
        add(command, DWordDataType.dataType, "secondaryPayloadSize");
        add(command, pointer(VoidDataType.dataType), "payload");
        dataTypes.resolve(command, DataTypeConflictHandler.KEEP_HANDLER);
        return "applied";
    }

    private String ensurePlayerTemp() {
        DataType existing = dataTypes.getDataType(RECORDS, "STPlayerTempSlot");
        if (existing instanceof Structure structure && structure.getLength() == 0x10) {
            return ensureDescription(structure, MARKER + " " + ANCHOR +
                " inferred from the Add/Del/Save/Restore temporary-object family.") ?
                "applied" : "unchanged";
        }
        if (existing != null) return "preserved";
        DataType darray = dataTypes.getDataType(ROOT, "DArrayTy");
        if (!(darray instanceof Structure)) return "preserved";
        StructureDataType slot = new StructureDataType(RECORDS, "STPlayerTempSlot", 0, dataTypes);
        slot.setDescription(MARKER + " " + ANCHOR +
            " packed 16-byte record inferred from the temporary-object helper family.");
        add(slot, IntegerDataType.dataType, "objectType");
        add(slot, IntegerDataType.dataType, "playerId");
        add(slot, ShortDataType.dataType, "objectId");
        add(slot, pointer(darray), "objectIds");
        add(slot, ShortDataType.dataType, "activityCount");
        dataTypes.resolve(slot, DataTypeConflictHandler.KEEP_HANDLER);
        return "applied";
    }

    private String ensureSpatialDescriptors() {
        boolean changed = false;
        DataType gameObject = dataTypes.getDataType("/STGameObjC");
        DataType objectPointer = pointer(gameObject == null ? VoidDataType.dataType : gameObject);
        DataType cell = dataTypes.getDataType(RECORDS, "STWorldCell");
        if (cell == null) {
            StructureDataType desired = new StructureDataType(RECORDS, "STWorldCell", 0, dataTypes);
            desired.setDescription(MARKER + " " + ANCHOR +
                " repeated two-pointer spatial cell inferred from indexed cell accesses.");
            desired.add(new ArrayDataType(objectPointer, 2, pointerSize), 2 * pointerSize,
                "objects", null);
            cell = dataTypes.resolve(desired, DataTypeConflictHandler.KEEP_HANDLER);
            changed = true;
        }
        else changed |= ensureDescription(cell, MARKER + " " + ANCHOR +
            " repeated two-pointer spatial cell inferred from indexed cell accesses.");
        if (dataTypes.getDataType(RECORDS, "STSpatialGrid16") == null) {
            createGrid("STSpatialGrid16", pointer(ShortDataType.dataType),
                "16-bit cell grid inferred from repeated descriptor geometry.");
            changed = true;
        }
        else changed |= ensureDescription(dataTypes.getDataType(RECORDS, "STSpatialGrid16"),
            MARKER + " " + ANCHOR +
                " 16-bit cell grid inferred from repeated descriptor geometry.");
        if (dataTypes.getDataType(RECORDS, "STWorldGrid") == null) {
            createGrid("STWorldGrid", pointer(cell),
                "two-object-pointer cell grid inferred from repeated descriptor geometry.");
            changed = true;
        }
        else changed |= ensureDescription(dataTypes.getDataType(RECORDS, "STWorldGrid"),
            MARKER + " " + ANCHOR +
                " world-cell grid inferred from repeated descriptor geometry.");
        return changed ? "applied" : "unchanged";
    }

    private void createGrid(String name, DataType cells, String detail) {
        StructureDataType grid = new StructureDataType(RECORDS, name, 0, dataTypes);
        grid.setDescription(MARKER + " " + ANCHOR + " " + detail +
            " Index is x + sizeX*y + planeStride*z.");
        add(grid, ShortDataType.dataType, "sizeX");
        add(grid, ShortDataType.dataType, "sizeY");
        add(grid, ShortDataType.dataType, "sizeZ");
        add(grid, ShortDataType.dataType, "planeStride");
        add(grid, cells, "cells");
        dataTypes.resolve(grid, DataTypeConflictHandler.KEEP_HANDLER);
    }

    private String canonicalSystem() {
        DataType type = dataTypes.getDataType("/SystemClassTy");
        if (!(type instanceof Structure structure)) return "preserved";
        return ensureDescription(structure, MARKER + " " + ANCHOR +
            " canonical class identity; fields and vptr are refined by class/vtable solvers.") ?
            "applied" : "unchanged";
    }

    private String replaceDuplicate(String oldPath, String replacementPath) throws Exception {
        DataType old = dataTypes.getDataType(oldPath);
        DataType replacement = dataTypes.getDataType(replacementPath);
        if (old == null) return "unchanged";
        if (replacement == null) return "preserved";
        if (old.equals(replacement)) return "unchanged";
        if (!equivalentReplacement(old, replacement)) return "preserved";
        dataTypes.replaceDataType(old, replacement, false);
        DataType remaining = dataTypes.getDataType(oldPath);
        return remaining == null || remaining.equals(replacement) ?
            "applied" : "preserved";
    }

    private boolean equivalentReplacement(DataType old, DataType replacement) {
        if (old instanceof Enum left && replacement instanceof Enum right) {
            if (left.getLength() != right.getLength()) return false;
            java.util.Set<Long> a = new java.util.TreeSet<>();
            java.util.Set<Long> b = new java.util.TreeSet<>();
            for (String name : left.getNames()) a.add(left.getValue(name));
            for (String name : right.getNames()) b.add(right.getValue(name));
            return a.size() >= 3 && a.equals(b);
        }
        return old.isEquivalent(replacement);
    }

    private String markViewOnly(String path) {
        DataType type = dataTypes.getDataType(path);
        if (type == null) return "unchanged";
        String description = type.getDescription();
        if (description != null && description.contains(VIEW)) return "unchanged";
        type.setDescription((description == null || description.isBlank() ? "" :
            description + " ") + VIEW + " Noncanonical storage view; excluded from semantic matching.");
        return "applied";
    }

    private String demoteSignature(String addressText, String expected, String evidence)
            throws Exception {
        Address address = currentProgram.getAddressFactory().getAddress(addressText);
        Function function = address == null ? null :
            currentProgram.getFunctionManager().getFunctionAt(address);
        if (function == null) return "conflict";
        if (!function.getPrototypeString(true, true).equals(expected)) return "preserved";
        if (function.getSignatureSource() == SourceType.ANALYSIS) return "unchanged";
        if (function.getSignatureSource() == SourceType.IMPORTED) return "preserved";
        for (Parameter parameter : function.getParameters())
            if (parameter.getSource() == SourceType.IMPORTED) return "preserved";
        function.setSignatureSource(SourceType.ANALYSIS);
        if (function.getSignatureSource() != SourceType.ANALYSIS)
            return "preserved";
        function.setReturnType(function.getReturnType(), SourceType.ANALYSIS);
        for (Parameter parameter : function.getParameters())
            parameter.setDataType(parameter.getDataType(), SourceType.ANALYSIS);
        function.setSignatureSource(SourceType.ANALYSIS);
        if (function.getSignatureSource() != SourceType.ANALYSIS)
            return "preserved";
        function.addTag("RECOVERED_HEURISTIC_SIGNATURE");
        String line = MARKER + " Signature provenance changed from legacy USER_DEFINED to " +
            "ANALYSIS. Evidence: " + evidence;
        String old = function.getComment();
        if (old == null || old.isBlank()) function.setComment(line);
        else if (!old.contains(line)) function.setComment(old + "\n" + line);
        return "applied";
    }

    private boolean ensureDescription(DataType type, String marker) {
        String current = type.getDescription();
        if (current == null || current.isBlank()) {
            type.setDescription(marker);
            return true;
        }
        if (!current.contains(MARKER)) {
            type.setDescription(current + " " + marker);
            return true;
        }
        return false;
    }

    private String typeFingerprint(DataType type) {
        if (type == null) return "missing";
        if (type instanceof Enum value) {
            StringBuilder result = new StringBuilder(type.getPathName())
                .append(':').append(type.getLength());
            for (String name : value.getNames())
                result.append('|').append(name).append('=').append(value.getValue(name));
            return result.append("|description=").append(
                type.getDescription() == null ? "" : type.getDescription()).toString();
        }
        if (!(type instanceof Structure structure))
            return type.getPathName() + ":" + type.getLength() + "|description=" +
                (type.getDescription() == null ? "" : type.getDescription());
        StringBuilder result = new StringBuilder(structure.getPathName())
            .append(':').append(structure.getLength());
        for (var component : structure.getDefinedComponents())
            result.append('|').append(component.getOffset()).append(':')
                .append(component.getLength()).append(':')
                .append(component.getDataType().getPathName());
        return result.append("|description=").append(
            type.getDescription() == null ? "" : type.getDescription()).toString();
    }

    private DataType pointer(DataType type) {
        return new PointerDataType(type, pointerSize, dataTypes);
    }
    private void add(Structure structure, DataType type, String name) {
        structure.add(type, type.getLength(), name, MARKER + " inferred field");
    }

    private File inputFile() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException("Path to type_bootstrap_proposals.tsv is required");
        return askFile("Select type_bootstrap_proposals.tsv", "Apply bootstrap");
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
            out.write("action\ttarget\tstatus\tdetail\n");
            for (Report row : report) out.write(row.action + "\t" + clean(row.target) +
                "\t" + row.status + "\t" + clean(row.detail) + "\n");
        }
    }
    private long count(String status) {
        return report.stream().filter(row -> row.status.equals(status)).count();
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
    private record Report(String action, String target, String status, String detail) { }
}
