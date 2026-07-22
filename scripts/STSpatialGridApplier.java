// Apply reviewed spatial_grid_proposals.tsv without overwriting manual data or labels.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Apply Spatial Grids

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.CategoryPath;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeConflictHandler;
import ghidra.program.model.data.DataTypeComponent;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.DataUtilities;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.PointerDataType;
import ghidra.program.model.data.ShortDataType;
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.StructureDataType;
import ghidra.program.model.data.Undefined;
import ghidra.program.model.listing.CommentType;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.Listing;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.Symbol;
import ghidra.program.model.symbol.SymbolTable;

public class STSpatialGridApplier extends GhidraScript {
    private static final String MARKER = "[STSpatialGridApplier]";
    private static final CategoryPath CATEGORY =
        new CategoryPath("/SubmarineTitans/Recovered/GlobalRecords");
    private static final String PATHING_TYPE = CATEGORY.getPath() + "/STPathingGrid16";
    private static final String WORLD_TYPE = CATEGORY.getPath() + "/STWorldGrid";
    private static final String WORLD_CELL_TYPE = CATEGORY.getPath() + "/STWorldCell";
    private static final int[] FIELD_OFFSETS = { 0, 2, 4, 6, 8 };
    private final List<ReportRow> report = new ArrayList<>();
    private DataTypeManager dataTypes;
    private Listing listing;
    private SymbolTable symbols;

    @Override
    protected void run() throws Exception {
        // Each grid proposal owns an independent top-level transaction.
        end(true);
        if (currentProgram == null) {
            printerr("Open the analyzed ST program first.");
            return;
        }
        File file = inputFile();
        if (file == null) return;
        if (file.isDirectory()) file = new File(file, "spatial_grid_proposals.tsv");
        Tsv input = readTsv(file.toPath());
        requireColumns(input, "apply", "address", "expected_name",
            "expected_name_source", "expected_layout", "proposed_name", "proposed_type",
            "role", "index_formula", "confidence", "reason");
        dataTypes = currentProgram.getDataTypeManager();
        listing = currentProgram.getListing();
        symbols = currentProgram.getSymbolTable();

        for (Map<String, String> row : input.rows) {
            monitor.checkCancelled();
            applyRow(row);
        }
        Path output = file.toPath().toAbsolutePath().normalize().resolveSibling(
            "spatial_grid_apply_report.tsv");
        writeReport(output);
        println("Spatial grids: applied=" + count("applied") + ", unchanged=" +
            count("unchanged") + ", preserved=" + count("preserved") +
            ", conflicts=" + count("conflict") + ", disabled=" + count("disabled"));
        println("Apply report: " + output);
    }

    private void applyRow(Map<String, String> row) {
        Address base = address(row.get("address"));
        String desiredName = unt(row.get("proposed_name"));
        if (!enabled(row.get("apply"))) {
            report.add(new ReportRow(addr(base), "disabled", desiredName, "apply is 0"));
            return;
        }
        int transaction = currentProgram.startTransaction("Apply spatial grid " + addr(base));
        boolean commit = false;
        try {
            DataType desired = resolveOrCreateType(unt(row.get("proposed_type")));
            if (desired == null || desired.getLength() != 12)
                throw new IllegalArgumentException("Missing/invalid proposed grid type: " +
                    unt(row.get("proposed_type")));
            Data current = listing.getDefinedDataAt(base);
            Symbol primary = symbols.getPrimarySymbol(base);
            boolean sameType = current != null && current.getDataType().isEquivalent(desired);
            boolean sameName = primary != null && primary.getName().equals(desiredName);
            if (sameType && sameName) {
                report.add(new ReportRow(addr(base), "unchanged", desiredName,
                    desired.getPathName()));
                commit = true;
                return;
            }

            String actualLayout = layoutFingerprint(base);
            String expectedLayout = unt(row.get("expected_layout"));
            String expectedName = unt(row.get("expected_name"));
            String expectedSource = unt(row.get("expected_name_source"));
            boolean baseline = actualLayout.equals(expectedLayout) && primary != null &&
                primary.getName().equals(expectedName) &&
                primary.getSource().toString().equals(expectedSource);
            if (!sameType && (!baseline || !replaceableRange(base, desired))) {
                report.add(new ReportRow(addr(base), "preserved", desiredName,
                    "stale baseline or manual/conflicting range; found " + actualLayout));
                commit = true;
                return;
            }
            if (primary != null && !sameName && (primary.getSource() == SourceType.USER_DEFINED ||
                    primary.getSource() == SourceType.IMPORTED)) {
                report.add(new ReportRow(addr(base), "preserved", desiredName,
                    "manual primary symbol: " + primary.getName()));
                commit = true;
                return;
            }
            if (nameCollision(base, desiredName)) {
                report.add(new ReportRow(addr(base), "conflict", desiredName,
                    "global name already exists at another address"));
                commit = true;
                return;
            }

            List<String> changes = new ArrayList<>();
            if (!sameType) {
                DataUtilities.createData(currentProgram, base, desired, desired.getLength(),
                    DataUtilities.ClearDataMode.CLEAR_ALL_CONFLICT_DATA);
                changes.add("type=" + desired.getPathName());
            }
            removeInteriorLabels(base);
            primary = symbols.getPrimarySymbol(base);
            if (primary == null) {
                primary = symbols.createLabel(base, desiredName,
                    currentProgram.getGlobalNamespace(), SourceType.ANALYSIS);
                changes.add("name=" + desiredName);
            }
            else if (!primary.getName().equals(desiredName)) {
                primary.setName(desiredName, SourceType.ANALYSIS);
                changes.add("name=" + desiredName);
            }
            addComment(base, row);
            report.add(new ReportRow(addr(base), "applied", desiredName,
                String.join("; ", changes)));
            commit = true;
        }
        catch (Exception exception) {
            report.add(new ReportRow(addr(base), "conflict", desiredName, message(exception)));
        }
        finally {
            currentProgram.endTransaction(transaction, commit);
        }
    }

    private DataType resolveOrCreateType(String path) {
        DataType existing = dataTypes.getDataType(path);
        if (WORLD_TYPE.equals(path)) return resolveOrCreateWorldType(existing);
        if (!PATHING_TYPE.equals(path)) return existing;
        if (existing != null) {
            if (!(existing instanceof Structure structure) || !validPathingType(structure))
                throw new IllegalArgumentException("Existing STPathingGrid16 was manually changed");
            return existing;
        }
        Structure structure = new StructureDataType(CATEGORY, "STPathingGrid16", 0, dataTypes);
        structure.setDescription("Runtime-sized 3D grid of signed 16-bit pathing flags/costs. " +
            "Linear index is x + sizeX*y + planeStride*z.");
        structure.add(ShortDataType.dataType, 2, "sizeX", "Exclusive X-coordinate bound.");
        structure.add(ShortDataType.dataType, 2, "sizeY", "Exclusive Y-coordinate bound.");
        structure.add(ShortDataType.dataType, 2, "sizeZ", "Exclusive Z-coordinate bound.");
        structure.add(ShortDataType.dataType, 2, "planeStride", "sizeX * sizeY.");
        structure.add(new PointerDataType(ShortDataType.dataType, dataTypes),
            currentProgram.getDefaultPointerSize(), "cells",
            "Signed pathing cell flags/costs consumed by Library::DKW::WAY.");
        return dataTypes.resolve(structure, DataTypeConflictHandler.KEEP_HANDLER);
    }

    private DataType resolveOrCreateWorldType(DataType existing) {
        DataType worldCell = dataTypes.getDataType(WORLD_CELL_TYPE);
        if (worldCell == null)
            throw new IllegalArgumentException("Missing prerequisite type " + WORLD_CELL_TYPE +
                "; run STRecoveredTypesApplier first");
        if (existing != null) {
            if (!(existing instanceof Structure structure) ||
                    !validWorldType(structure, worldCell))
                throw new IllegalArgumentException("Existing STWorldGrid was manually changed");
            return existing;
        }
        Structure structure = new StructureDataType(CATEGORY, "STWorldGrid", 0, dataTypes);
        structure.setDescription("Runtime-sized 3D grid of two STWorldObject pointers per cell. " +
            "Linear index is x + sizeX*y + planeStride*z.");
        structure.add(ShortDataType.dataType, 2, "sizeX", "Exclusive X-coordinate bound.");
        structure.add(ShortDataType.dataType, 2, "sizeY", "Exclusive Y-coordinate bound.");
        structure.add(ShortDataType.dataType, 2, "sizeZ", "Exclusive Z-coordinate bound.");
        structure.add(ShortDataType.dataType, 2, "planeStride", "sizeX * sizeY.");
        structure.add(new PointerDataType(worldCell, dataTypes),
            currentProgram.getDefaultPointerSize(), "cells", "Eight-byte world cells.");
        return dataTypes.resolve(structure, DataTypeConflictHandler.KEEP_HANDLER);
    }

    private boolean validPathingType(Structure structure) {
        if (structure.getLength() != 12) return false;
        String[] names = { "sizeX", "sizeY", "sizeZ", "planeStride", "cells" };
        for (int index = 0; index < FIELD_OFFSETS.length; index++) {
            DataTypeComponent component = structure.getComponentAt(FIELD_OFFSETS[index]);
            if (component == null || !names[index].equals(component.getFieldName())) return false;
            if (index < 4 && !component.getDataType().isEquivalent(ShortDataType.dataType))
                return false;
            if (index == 4 && !shortPointer(component.getDataType())) return false;
        }
        return true;
    }

    private boolean validWorldType(Structure structure, DataType worldCell) {
        if (structure.getLength() != 12) return false;
        String[] names = { "sizeX", "sizeY", "sizeZ", "planeStride", "cells" };
        for (int index = 0; index < FIELD_OFFSETS.length; index++) {
            DataTypeComponent component = structure.getComponentAt(FIELD_OFFSETS[index]);
            if (component == null || !names[index].equals(component.getFieldName())) return false;
            if (index < 4 && !component.getDataType().isEquivalent(ShortDataType.dataType))
                return false;
            if (index == 4) {
                if (!(component.getDataType() instanceof Pointer pointer) ||
                        pointer.getDataType() == null ||
                        !pointer.getDataType().isEquivalent(worldCell)) return false;
            }
        }
        return true;
    }

    private boolean shortPointer(DataType type) {
        return type instanceof Pointer pointer && pointer.getDataType() != null &&
            pointer.getDataType().isEquivalent(ShortDataType.dataType);
    }

    private boolean replaceableRange(Address base, DataType desired) {
        boolean world = !PATHING_TYPE.equals(desired.getPathName());
        DataType worldCell = dataTypes.getDataType(WORLD_CELL_TYPE);
        for (int offset : FIELD_OFFSETS) {
            Address field = base.add(offset);
            if (listing.getInstructionContaining(field) != null) return false;
            for (Symbol symbol : symbols.getSymbols(field)) {
                if (symbol.getSource() == SourceType.USER_DEFINED ||
                        symbol.getSource() == SourceType.IMPORTED) return false;
                if (symbol.getSource() == SourceType.ANALYSIS &&
                        !syntheticOrKnown(symbol.getName(), offset)) return false;
            }
            Data data = listing.getDefinedDataAt(field);
            if (data == null || Undefined.isUndefined(data.getDataType())) continue;
            if (offset < 8 && data.getLength() == 2 &&
                    data.getDataType().isEquivalent(ShortDataType.dataType)) continue;
            if (offset == 8 && data.getDataType() instanceof Pointer pointer) {
                DataType pointed = pointer.getDataType();
                if (!world && pointed != null && pointed.isEquivalent(ShortDataType.dataType))
                    continue;
                if (world && pointed != null && worldCell != null &&
                        pointed.isEquivalent(worldCell)) continue;
            }
            return false;
        }
        return true;
    }

    private boolean syntheticOrKnown(String name, int offset) {
        if (name == null) return true;
        if (offset == 0 && (name.equals("g_worldGrid") || name.equals("g_pathingGrid") ||
                name.equals("g_pathingScratchGrid"))) return true;
        if (offset == 8 && name.equals("g_worldCells")) return true;
        return name.matches("(?i)_?(?:DAT|PTR|UNK|SHORT)_[0-9a-f]+");
    }

    private void removeInteriorLabels(Address base) {
        for (int offset : new int[] { 2, 4, 6, 8 }) {
            for (Symbol symbol : symbols.getSymbols(base.add(offset))) {
                if ((symbol.getSource() == SourceType.DEFAULT ||
                        symbol.getSource() == SourceType.ANALYSIS) &&
                        syntheticOrKnown(symbol.getName(), offset)) symbol.delete();
            }
        }
    }

    private boolean nameCollision(Address base, String name) {
        for (Symbol symbol : symbols.getGlobalSymbols(name))
            if (!symbol.getAddress().equals(base)) return true;
        return false;
    }

    private void addComment(Address base, Map<String, String> row) {
        String block = MARKER + " Recovered " + unt(row.get("role")) + " descriptor.\n" +
            "Layout: short sizeX, sizeY, sizeZ, planeStride; pointer cells.\n" +
            "Index: " + unt(row.get("index_formula")) + ".\nEvidence: " +
            unt(row.get("reason"));
        String old = listing.getComment(CommentType.PLATE, base);
        if (old == null || old.isBlank()) listing.setComment(base, CommentType.PLATE, block);
        else if (!old.contains(MARKER))
            listing.setComment(base, CommentType.PLATE, old + "\n\n" + block);
    }

    private String layoutFingerprint(Address base) {
        Data containing = listing.getDefinedDataAt(base);
        if (containing != null && containing.getDataType() instanceof Structure &&
                containing.getLength() >= 12) {
            Symbol primary = symbols.getPrimarySymbol(base);
            return "struct=" + typeSpec(containing.getDataType()) + ":" + containing.getLength() +
                ",symbol=" + symbolSpec(primary);
        }
        List<String> parts = new ArrayList<>();
        for (int offset : FIELD_OFFSETS) {
            Address address = base.add(offset);
            Data data = listing.getDefinedDataAt(address);
            Symbol symbol = symbols.getPrimarySymbol(address);
            parts.add(String.format(Locale.ROOT, "%02X", offset) + "=" +
                (data == null ? "none" : typeSpec(data.getDataType()) + ":" + data.getLength()) +
                "," + symbolSpec(symbol));
        }
        return String.join("|", parts);
    }

    private String typeSpec(DataType type) {
        if (type instanceof Pointer pointer && pointer.getDataType() != null)
            return "pointer:" + pointer.getDataType().getPathName();
        return type == null ? "" : type.getPathName();
    }
    private String symbolSpec(Symbol symbol) {
        return symbol == null ? "none" : symbol.getName() + ":" + symbol.getSource();
    }

    private File inputFile() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException("Path to spatial_grid_proposals.tsv is required");
        return askFile("Select spatial_grid_proposals.tsv or its directory", "Apply spatial grids");
    }

    private Tsv readTsv(Path path) throws Exception {
        List<String> lines = Files.readAllLines(path, StandardCharsets.UTF_8);
        if (lines.isEmpty()) throw new IllegalArgumentException("Empty TSV: " + path);
        String[] header = lines.get(0).split("\t", -1);
        List<Map<String, String>> rows = new ArrayList<>();
        for (int line = 1; line < lines.size(); line++) {
            if (lines.get(line).isBlank()) continue;
            String[] values = lines.get(line).split("\t", -1);
            if (values.length != header.length)
                throw new IllegalArgumentException("Invalid TSV row " + (line + 1));
            Map<String, String> row = new LinkedHashMap<>();
            for (int column = 0; column < header.length; column++)
                row.put(header[column], values[column]);
            rows.add(row);
        }
        return new Tsv(List.of(header), rows);
    }

    private void requireColumns(Tsv input, String... names) {
        for (String name : names) if (!input.header.contains(name))
            throw new IllegalArgumentException("Missing TSV column: " + name);
    }

    private void writeReport(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("address\tstatus\tproposed_name\tdetail\n");
            for (ReportRow row : report) out.write(row.address + "\t" + row.status + "\t" +
                tsv(row.name) + "\t" + tsv(row.detail) + "\n");
        }
    }

    private long count(String status) {
        return report.stream().filter(row -> row.status.equals(status)).count();
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
    private static String addr(Address value) {
        return value == null ? "" : value.toString().toUpperCase(Locale.ROOT);
    }
    private static String tsv(String value) {
        if (value == null) return "";
        return value.replace("\\", "\\\\").replace("\t", "\\t")
            .replace("\r", "\\r").replace("\n", "\\n");
    }
    private static String unt(String value) {
        if (value == null) return "";
        StringBuilder out = new StringBuilder();
        boolean escaped = false;
        for (char ch : value.toCharArray()) {
            if (!escaped && ch == '\\') { escaped = true; continue; }
            if (escaped) {
                if (ch == 't') out.append('\t');
                else if (ch == 'r') out.append('\r');
                else if (ch == 'n') out.append('\n');
                else out.append(ch);
                escaped = false;
            }
            else out.append(ch);
        }
        if (escaped) out.append('\\');
        return out.toString();
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
    private static class ReportRow {
        final String address, status, name, detail;
        ReportRow(String address, String status, String name, String detail) {
            this.address = address; this.status = status; this.name = name; this.detail = detail;
        }
    }
}
