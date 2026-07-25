// Recover repeated x/y/z/plane-stride descriptors from global-reference geometry.
// Read-only: writes spatial_grid_proposals.{tsv,jsonl} and spatial_grid_summary.txt.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Analyze Spatial Grids

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.HashSet;
import java.util.HashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Set;
import java.util.TreeSet;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.ShortDataType;
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.Undefined;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.Symbol;

public class STSpatialGridAnalyzer extends GhidraScript {
    private static final String PATHING_TYPE =
        "/SubmarineTitans/Recovered/GlobalRecords/STSpatialGrid16";
    private static final String WORLD_TYPE =
        "/SubmarineTitans/Recovered/GlobalRecords/STWorldGrid";
    private static final String WORLD_CELL_TYPE =
        "/SubmarineTitans/Recovered/GlobalRecords/STWorldCell";
    private static final int[] FIELD_OFFSETS = { 0, 2, 4, 6, 8 };
    @Override
    protected void run() throws Exception {
        // Read-only script: do not leave GhidraScript's implicit transaction around runScript().
        end(true);
        if (currentProgram == null) {
            printerr("Open the analyzed ST program first.");
            return;
        }
        File selected = outputDirectory();
        if (selected == null) return;
        Path directory = programDirectory(selected);
        Files.createDirectories(directory);

        List<Proposal> proposals = new ArrayList<>();
        for (GridSpec spec : discoverGrids()) {
            monitor.checkCancelled();
            proposals.add(analyze(spec));
        }
        proposals.sort(Comparator.comparing(row -> row.address));
        writeTsv(directory.resolve("spatial_grid_proposals.tsv"), proposals);
        writeJson(directory.resolve("spatial_grid_proposals.jsonl"), proposals);
        writeSummary(directory.resolve("spatial_grid_summary.txt"), proposals);
        println("Spatial-grid analysis complete: " + directory.toAbsolutePath().normalize());
        println("Descriptors=" + proposals.size() + ", apply=" +
            proposals.stream().filter(row -> row.apply).count() + ", already recovered=" +
            proposals.stream().filter(row -> row.alreadyRecovered).count() +
            ", affected functions=" + proposals.stream()
                .mapToInt(row -> row.functionReferences).sum() + " (non-unique sum)");
    }

    private Proposal analyze(GridSpec spec) {
        Address base = spec.address;
        String expectedLayout = layoutFingerprint(base);
        DataType desired = currentProgram.getDataTypeManager().getDataType(spec.typePath);
        boolean already = desired != null && dataEquivalent(base, desired);
        boolean replaceable = already || replaceableRange(base, spec);
        boolean initEvidence = initializationReferences(base) == FIELD_OFFSETS.length;
        Set<Address> functions = referringFunctions(base);
        Symbol primary = currentProgram.getSymbolTable().getPrimarySymbol(base);
        String expectedName = primary == null ? "" : primary.getName();
        String expectedSource = primary == null ? "" : primary.getSource().toString();
        boolean desiredName = primary != null && spec.name.equals(primary.getName());
        boolean apply = initEvidence && replaceable && (!already || !desiredName);
        String confidence = initEvidence && replaceable ? "high" :
            initEvidence ? "conflict" : "review";
        List<String> reasons = new ArrayList<>();
        reasons.add("one discovered initializer references " + initializationReferences(base) +
            "/5 descriptor fields");
        reasons.add("referenced by " + functions.size() + " functions");
        reasons.add("layout=" + (already ? "already recovered" :
            replaceable ? "replaceable scalar fields" : "manual/conflicting data"));
        reasons.add("index=" + spec.formula);
        if (spec.typePath.equals(PATHING_TYPE))
            reasons.add("the +8 field is typed as a pointer to signed 16-bit cells");
        else reasons.add("the +8 field is typed as a pointer to the recovered world cell");
        return new Proposal(base, apply, already, expectedName, expectedSource, expectedLayout,
            spec.name, spec.typePath, spec.role, spec.formula, confidence,
            String.join("; ", reasons), functions.size(), totalReferences(base));
    }

    private List<GridSpec> discoverGrids() {
        Map<Address, Map<Address, Set<Integer>>> evidence = new HashMap<>();
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            Function function = functions.next();
            if (function.isExternal() || function.isThunk()) continue;
            InstructionIterator instructions = currentProgram.getListing()
                .getInstructions(function.getBody(), true);
            while (instructions.hasNext()) {
                Instruction instruction = instructions.next();
                for (Reference reference : instruction.getReferencesFrom()) {
                    Address target = reference.getToAddress();
                    if (target == null || !currentProgram.getMemory().contains(target) ||
                            currentProgram.getMemory().getBlock(target).isExecute()) continue;
                    for (int offset : FIELD_OFFSETS) {
                        Address base;
                        try { base = target.subtract(offset); }
                        catch (Exception ignored) { continue; }
                        evidence.computeIfAbsent(base, unused -> new HashMap<>())
                            .computeIfAbsent(function.getEntryPoint(),
                                unused -> new TreeSet<>()).add(offset);
                    }
                }
            }
        }
        List<GridSpec> result = new ArrayList<>();
        for (Map.Entry<Address, Map<Address, Set<Integer>>> item : evidence.entrySet()) {
            boolean complete = item.getValue().values().stream()
                .anyMatch(offsets -> offsets.containsAll(Set.of(0, 2, 4, 6, 8)));
            if (!complete || item.getValue().size() < 2) continue;
            String type = classify(item.getKey());
            if (type.isBlank()) continue;
            Symbol symbol = currentProgram.getSymbolTable().getPrimarySymbol(item.getKey());
            String name = symbol != null && !symbol.getName().matches(
                "(?i)_?(?:DAT|PTR|UNK|SHORT)_[0-9a-f]+") ?
                symbol.getName() : "g_spatialGrid_" + addr(item.getKey());
            String role = type.equals(WORLD_TYPE) ? "world-object grid" :
                "16-bit spatial grid";
            result.add(new GridSpec(item.getKey(), name, type, role,
                "x + sizeX * y + planeStride * z"));
        }
        return result;
    }

    private String classify(Address base) {
        Data aggregate = currentProgram.getListing().getDefinedDataAt(base);
        if (aggregate != null && aggregate.getDataType() instanceof Structure structure) {
            if (structure.getPathName().equals(WORLD_TYPE)) return WORLD_TYPE;
            if (structure.getPathName().equals(PATHING_TYPE) ||
                    structure.getName().equals("STPathingGrid16")) return PATHING_TYPE;
        }
        Data cells = currentProgram.getListing().getDefinedDataAt(base.add(8));
        if (cells == null || !(cells.getDataType() instanceof Pointer pointer) ||
                pointer.getDataType() == null) return "";
        if (pointer.getDataType().isEquivalent(ShortDataType.dataType)) return PATHING_TYPE;
        DataType worldCell = currentProgram.getDataTypeManager().getDataType(WORLD_CELL_TYPE);
        return worldCell != null && pointer.getDataType().isEquivalent(worldCell) ?
            WORLD_TYPE : "";
    }

    private boolean replaceableRange(Address base, GridSpec spec) {
        for (int offset : FIELD_OFFSETS) {
            Address field = base.add(offset);
            if (currentProgram.getListing().getInstructionContaining(field) != null) return false;
            for (Symbol symbol : currentProgram.getSymbolTable().getSymbols(field)) {
                if (symbol.getSource() == SourceType.USER_DEFINED ||
                        symbol.getSource() == SourceType.IMPORTED) return false;
                if (symbol.getSource() == SourceType.ANALYSIS &&
                        !syntheticOrKnown(symbol.getName(), spec, offset)) return false;
            }
            Data data = currentProgram.getListing().getDefinedDataAt(field);
            if (data == null || Undefined.isUndefined(data.getDataType())) continue;
            if (offset < 8 && data.getLength() == 2 &&
                    data.getDataType().isEquivalent(ShortDataType.dataType)) continue;
            if (offset == 8 && acceptablePointer(data.getDataType(), spec)) continue;
            return false;
        }
        return true;
    }

    private boolean acceptablePointer(DataType type, GridSpec spec) {
        if (!(type instanceof Pointer pointer)) return false;
        DataType pointed = pointer.getDataType();
        if (spec.typePath.equals(PATHING_TYPE))
            return pointed != null && pointed.isEquivalent(ShortDataType.dataType);
        DataType worldCell = currentProgram.getDataTypeManager().getDataType(WORLD_CELL_TYPE);
        return pointed != null && worldCell != null && pointed.isEquivalent(worldCell);
    }

    private boolean syntheticOrKnown(String name, GridSpec spec, int offset) {
        if (name == null) return true;
        if (offset == 0 && name.equals(spec.name)) return true;
        if (offset == 8 && name.equals("g_worldCells")) return true;
        return name.matches("(?i)_?(?:DAT|PTR|UNK|SHORT)_[0-9a-f]+");
    }

    private boolean dataEquivalent(Address base, DataType desired) {
        Data data = currentProgram.getListing().getDefinedDataAt(base);
        return data != null && data.getDataType().isEquivalent(desired);
    }

    private int initializationReferences(Address base) {
        Map<Address, Set<Integer>> byFunction = new HashMap<>();
        for (int offset : FIELD_OFFSETS) {
            ReferenceIterator iterator = currentProgram.getReferenceManager()
                .getReferencesTo(base.add(offset));
            while (iterator.hasNext()) {
                Function function = currentProgram.getFunctionManager()
                    .getFunctionContaining(iterator.next().getFromAddress());
                if (function != null) byFunction.computeIfAbsent(function.getEntryPoint(),
                    unused -> new TreeSet<>()).add(offset);
            }
        }
        return byFunction.values().stream().mapToInt(Set::size).max().orElse(0);
    }

    private Set<Address> referringFunctions(Address base) {
        Set<Address> result = new TreeSet<>();
        for (int offset : FIELD_OFFSETS) {
            ReferenceIterator iterator = currentProgram.getReferenceManager()
                .getReferencesTo(base.add(offset));
            while (iterator.hasNext()) {
                Function function = currentProgram.getFunctionManager()
                    .getFunctionContaining(iterator.next().getFromAddress());
                if (function != null) result.add(function.getEntryPoint());
            }
        }
        return result;
    }

    private int totalReferences(Address base) {
        Set<String> sites = new HashSet<>();
        for (int offset : FIELD_OFFSETS) {
            ReferenceIterator iterator = currentProgram.getReferenceManager()
                .getReferencesTo(base.add(offset));
            while (iterator.hasNext()) sites.add(iterator.next().getFromAddress().toString());
        }
        return sites.size();
    }

    private String layoutFingerprint(Address base) {
        List<String> parts = new ArrayList<>();
        Data containing = currentProgram.getListing().getDefinedDataAt(base);
        if (containing != null && containing.getDataType() instanceof Structure &&
                containing.getLength() >= 12) {
            Symbol primary = currentProgram.getSymbolTable().getPrimarySymbol(base);
            return "struct=" + typeSpec(containing.getDataType()) + ":" + containing.getLength() +
                ",symbol=" + symbolSpec(primary);
        }
        for (int offset : FIELD_OFFSETS) {
            Address address = base.add(offset);
            Data data = currentProgram.getListing().getDefinedDataAt(address);
            Symbol symbol = currentProgram.getSymbolTable().getPrimarySymbol(address);
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

    private File outputDirectory() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException("Recovery output directory required");
        return askDirectory("Select recovery output directory", "Select");
    }

    private Path programDirectory(File selected) {
        return selected.getName().equals(currentProgram.getName()) ? selected.toPath() :
            selected.toPath().resolve(currentProgram.getName());
    }

    private void writeTsv(Path path, List<Proposal> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\taddress\texpected_name\texpected_name_source\texpected_layout\t" +
                "proposed_name\tproposed_type\trole\tindex_formula\tconfidence\t" +
                "function_references\treference_sites\treason\n");
            for (Proposal row : rows) {
                out.write(bit(row.apply) + "\t" + addr(row.address) + "\t" +
                    tsv(row.expectedName) + "\t" + row.expectedNameSource + "\t" +
                    tsv(row.expectedLayout) + "\t" + tsv(row.proposedName) + "\t" +
                    tsv(row.proposedType) + "\t" + tsv(row.role) + "\t" +
                    tsv(row.formula) + "\t" + row.confidence + "\t" +
                    row.functionReferences + "\t" + row.referenceSites + "\t" +
                    tsv(row.reason) + "\n");
            }
        }
    }

    private void writeJson(Path path, List<Proposal> rows) throws Exception {
        List<String> lines = new ArrayList<>();
        for (Proposal row : rows) lines.add("{\"apply\":" + row.apply +
            ",\"address\":" + q(addr(row.address)) + ",\"proposed_name\":" +
            q(row.proposedName) + ",\"proposed_type\":" + q(row.proposedType) +
            ",\"role\":" + q(row.role) + ",\"index_formula\":" + q(row.formula) +
            ",\"confidence\":" + q(row.confidence) +
            ",\"function_references\":" + row.functionReferences +
            ",\"reference_sites\":" + row.referenceSites +
            ",\"reason\":" + q(row.reason) + "}");
        Files.write(path, lines, StandardCharsets.UTF_8);
    }

    private void writeSummary(Path path, List<Proposal> rows) throws Exception {
        List<String> lines = new ArrayList<>();
        lines.add("program=" + currentProgram.getName());
        lines.add("descriptors=" + rows.size());
        lines.add("auto_apply=" + rows.stream().filter(row -> row.apply).count());
        lines.add("already_recovered=" + rows.stream()
            .filter(row -> row.alreadyRecovered).count());
        lines.add("non_unique_affected_function_sum=" + rows.stream()
            .mapToInt(row -> row.functionReferences).sum());
        for (Proposal row : rows) lines.add(addr(row.address) + " " + row.proposedName +
            " functions=" + row.functionReferences + " refs=" + row.referenceSites +
            " apply=" + bit(row.apply) + " confidence=" + row.confidence);
        lines.add("note=The repeated descriptor layout is {short sizeX,sizeY,sizeZ,planeStride; pointer cells}.");
        lines.add("note_index=All three grids use x + sizeX*y + planeStride*z; planeStride is sizeX*sizeY.");
        lines.add("note_scope=This pass improves shared spatial-grid expressions; it does not rewrite control flow.");
        Files.write(path, lines, StandardCharsets.UTF_8);
    }

    private static String addr(Address value) {
        return value == null ? "" : value.toString().toUpperCase(Locale.ROOT);
    }
    private static String bit(boolean value) { return value ? "1" : "0"; }
    private static String tsv(String value) {
        if (value == null) return "";
        return value.replace("\\", "\\\\").replace("\t", "\\t")
            .replace("\r", "\\r").replace("\n", "\\n");
    }
    private static String q(String value) {
        if (value == null) return "null";
        return "\"" + value.replace("\\", "\\\\").replace("\"", "\\\"")
            .replace("\r", "\\r").replace("\n", "\\n").replace("\t", "\\t") + "\"";
    }

    private static class GridSpec {
        final Address address;
        final String name, typePath, role, formula;
        GridSpec(Address address, String name, String typePath, String role, String formula) {
            this.address = address; this.name = name; this.typePath = typePath;
            this.role = role; this.formula = formula;
        }
    }

    private static class Proposal {
        final Address address;
        final boolean apply, alreadyRecovered;
        final String expectedName, expectedNameSource, expectedLayout, proposedName,
            proposedType, role, formula, confidence, reason;
        final int functionReferences, referenceSites;
        Proposal(Address address, boolean apply, boolean alreadyRecovered, String expectedName,
                String expectedNameSource, String expectedLayout, String proposedName,
                String proposedType, String role, String formula, String confidence,
                String reason, int functionReferences, int referenceSites) {
            this.address = address; this.apply = apply; this.alreadyRecovered = alreadyRecovered;
            this.expectedName = expectedName; this.expectedNameSource = expectedNameSource;
            this.expectedLayout = expectedLayout; this.proposedName = proposedName;
            this.proposedType = proposedType; this.role = role; this.formula = formula;
            this.confidence = confidence; this.reason = reason;
            this.functionReferences = functionReferences; this.referenceSites = referenceSites;
        }
    }
}
