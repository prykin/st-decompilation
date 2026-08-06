// Apply finite indirect-jump destination overrides produced by
// STJumpTableBoundaryAnalyzer.  Existing manual overrides are preserved.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Apply Jump Table Boundaries

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
import java.util.Set;
import java.util.TreeSet;

import ghidra.app.cmd.function.CreateFunctionCmd;
import ghidra.app.script.GhidraScript;
import ghidra.program.database.symbol.CodeSymbol;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.CommentType;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.pcode.HighFunction;
import ghidra.program.model.pcode.JumpTable;
import ghidra.program.model.scalar.Scalar;
import ghidra.program.model.symbol.Namespace;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.Symbol;
import ghidra.program.model.symbol.SymbolIterator;

public class STJumpTableBoundaryApplier extends GhidraScript {
    private static final String MARKER = "[STJumpTableBoundaryApplier]";
    private final List<Report> report = new ArrayList<>();

    @Override
    protected void run() throws Exception {
        end(true);
        if (currentProgram == null) {
            printerr("Open the analyzed ST program first.");
            return;
        }
        File file = inputFile();
        if (file == null) return;
        Tsv input = readTsv(file.toPath());
        require(input, "apply", "function_address", "jump_address", "table_address",
            "entry_count", "destinations", "first_non_entry", "first_non_entry_word",
            "byte_read_site", "confidence", "reason");

        int transaction = currentProgram.startTransaction("Apply finite jump-table boundaries");
        boolean commit = false;
        try {
            for (Map<String, String> row : input.rows) {
                monitor.checkCancelled();
                apply(row);
            }
            commit = true;
        }
        finally { currentProgram.endTransaction(transaction, commit); }

        Path output = file.toPath().toAbsolutePath().getParent()
            .resolve("jump_table_boundary_apply_report.tsv");
        writeReport(output);
        println("Jump-table boundaries: applied=" + count("applied") +
            ", unchanged=" + count("unchanged") + ", preserved=" +
            count("preserved") + ", conflicts=" + count("conflict") +
            ", disabled=" + count("disabled"));
        println("Apply report: " + output);
    }

    private void apply(Map<String, String> row) {
        String jumpText = row.get("jump_address");
        if (!enabled(row.get("apply"))) {
            report.add(new Report(jumpText, "disabled", "apply=0"));
            return;
        }
        try {
            Address functionAddress = address(row.get("function_address"));
            Address jumpAddress = address(jumpText);
            Function function = functionAddress == null ? null :
                currentProgram.getFunctionManager().getFunctionAt(functionAddress);
            Instruction jump = jumpAddress == null ? null :
                currentProgram.getListing().getInstructionAt(jumpAddress);
            if (function == null || jump == null ||
                    !function.getBody().contains(jumpAddress) ||
                    !jump.getFlowType().isJump() || !jump.getFlowType().isComputed()) {
                conflict(jumpText, "function or computed jump no longer matches");
                return;
            }
            List<Address> destinations = parseAddresses(row.get("destinations"));
            int entryCount = Integer.parseInt(row.get("entry_count"));
            // The override describes the finite destination set, while entry_count describes
            // physical pointer words. Several case values may legitimately share a target.
            if (destinations.size() < 2 || entryCount < destinations.size()) {
                conflict(jumpText, "invalid destination baseline");
                return;
            }
            for (Address destination : destinations) {
                if (currentProgram.getListing().getInstructionAt(destination) == null ||
                        !function.getBody().contains(destination)) {
                    conflict(jumpText, "destination is no longer an instruction in function: " +
                        destination);
                    return;
                }
            }

            Set<Address> existing = existingOverride(function, jumpAddress);
            Set<Address> desired = new TreeSet<>(destinations);
            String stale = staleBaseline(function, jump, desired, entryCount, row);
            if (stale != null) {
                conflict(jumpText, stale);
                return;
            }
            String oldComment = currentProgram.getListing()
                .getComment(CommentType.EOL, jumpAddress);
            boolean owned = oldComment != null && oldComment.contains(MARKER);
            if (!existing.isEmpty()) {
                if (existing.equals(desired)) {
                    ensureComment(jumpAddress, row);
                    report.add(new Report(jumpText, "unchanged",
                        "exact finite override already present"));
                }
                else if (!owned) {
                    report.add(new Report(jumpText, "preserved",
                        "different non-script jump-table override exists"));
                }
                else {
                    install(function, jumpAddress, destinations);
                    ensureComment(jumpAddress, row);
                    report.add(new Report(jumpText, "applied",
                        "updated script-owned finite override"));
                }
                return;
            }
            install(function, jumpAddress, destinations);
            ensureComment(jumpAddress, row);
            report.add(new Report(jumpText, "applied",
                "installed finite override with " + destinations.size() + " destinations"));
        }
        catch (Exception exception) { conflict(jumpText, message(exception)); }
    }

    private void install(Function function, Address jumpAddress, List<Address> destinations)
            throws Exception {
        ArrayList<Address> ordered = new ArrayList<>(new TreeSet<>(destinations));
        Instruction jump = currentProgram.getListing().getInstructionAt(jumpAddress);
        for (Address destination : ordered) {
            boolean present = false;
            for (var reference : jump.getReferencesFrom())
                if (reference.getReferenceType().isJump() &&
                        reference.getToAddress().equals(destination)) present = true;
            if (!present)
                jump.addOperandReference(0, destination,
                    ghidra.program.model.symbol.RefType.COMPUTED_JUMP, SourceType.ANALYSIS);
        }
        JumpTable override = new JumpTable(jumpAddress, ordered, true, 0);
        override.writeOverride(function);
        CreateFunctionCmd.fixupFunctionBody(currentProgram, function, monitor);
    }

    private String staleBaseline(Function function, Instruction jump,
            Set<Address> desired, int entryCount, Map<String, String> row) throws Exception {
        Set<Address> currentReferences = new TreeSet<>();
        for (var reference : jump.getReferencesFrom())
            if (reference.getReferenceType().isJump())
                currentReferences.add(reference.getToAddress());
        if (!currentReferences.equals(desired))
            return "computed-jump reference set changed";

        Address table = address(row.get("table_address"));
        Address firstNonEntry = address(row.get("first_non_entry"));
        if (table == null || firstNonEntry == null ||
                !table.add((long)entryCount * 4).equals(firstNonEntry))
            return "physical table extent changed";
        Memory memory = currentProgram.getMemory();
        Set<Address> physicalTargets = new TreeSet<>();
        var space = currentProgram.getAddressFactory().getDefaultAddressSpace();
        for (int index = 0; index < entryCount; index++) {
            Address slot = table.add((long)index * 4);
            if (!memory.contains(slot) || !memory.contains(slot.add(3)))
                return "table bytes are no longer mapped";
            Address target = space.getAddress(Integer.toUnsignedLong(memory.getInt(slot)));
            if (!desired.contains(target) ||
                    currentProgram.getListing().getInstructionAt(target) == null ||
                    !function.getBody().contains(target))
                return "physical table target changed at " + slot;
            physicalTargets.add(target);
        }
        if (!physicalTargets.equals(desired))
            return "physical table no longer covers the exact destination set";
        if (!memory.contains(firstNonEntry) || !memory.contains(firstNonEntry.add(3)))
            return "first non-entry word is no longer mapped";
        long nextWord = Integer.toUnsignedLong(memory.getInt(firstNonEntry));
        long expectedWord = Long.parseUnsignedLong(row.get("first_non_entry_word"), 16);
        if (nextWord != expectedWord) return "first non-entry word changed";

        Address byteReadSite = address(row.get("byte_read_site"));
        Instruction byteRead = byteReadSite == null ? null :
            currentProgram.getListing().getInstructionAt(byteReadSite);
        if (byteRead == null || !function.getBody().contains(byteReadSite) ||
                !hasByteOperandRoot(byteRead, firstNonEntry))
            return "independent indexed byte-read proof changed";
        return null;
    }

    private boolean hasByteOperandRoot(Instruction instruction, Address base) {
        String text = instruction.toString().toLowerCase(Locale.ROOT);
        if (!text.contains("byte ptr") || !text.contains("[")) return false;
        for (int operand = 0; operand < instruction.getNumOperands(); operand++) {
            for (Object object : instruction.getOpObjects(operand)) {
                if (object instanceof Address address && address.equals(base)) return true;
                if (object instanceof Scalar scalar &&
                        scalar.getUnsignedValue() == base.getOffset()) return true;
            }
        }
        return false;
    }

    private Set<Address> existingOverride(Function function, Address jumpAddress) {
        Set<Address> result = new TreeSet<>();
        Namespace root = HighFunction.findOverrideSpace(function);
        if (root == null) return result;
        Namespace space = HighFunction.findNamespace(currentProgram.getSymbolTable(), root,
            "jmp_" + jumpAddress);
        if (space == null) return result;
        SymbolIterator symbols = currentProgram.getSymbolTable().getSymbols(space);
        boolean switchMarker = false;
        while (symbols.hasNext()) {
            Symbol symbol = symbols.next();
            if (!(symbol instanceof CodeSymbol)) continue;
            if (symbol.getName().equals("switch") && symbol.getAddress().equals(jumpAddress))
                switchMarker = true;
            else if (symbol.getName().startsWith("case_")) result.add(symbol.getAddress());
        }
        if (!switchMarker) result.clear();
        return result;
    }

    private void ensureComment(Address jumpAddress, Map<String, String> row) {
        String line = MARKER + " finite jump table at " + row.get("table_address") +
            ": " + row.get("entry_count") + " destinations; first non-entry " +
            row.get("first_non_entry") + " contains 0x" + row.get("first_non_entry_word") +
            " and is independently read as bytes at " + row.get("byte_read_site");
        String old = currentProgram.getListing().getComment(CommentType.EOL, jumpAddress);
        List<String> kept = new ArrayList<>();
        if (old != null) for (String item : old.split("\\R"))
            if (!item.contains(MARKER) && !item.isBlank()) kept.add(item);
        kept.add(line);
        String replacement = String.join("\n", kept);
        if (!replacement.equals(old))
            currentProgram.getListing().setComment(jumpAddress, CommentType.EOL, replacement);
    }

    private List<Address> parseAddresses(String value) {
        List<Address> result = new ArrayList<>();
        if (value == null || value.isBlank()) return result;
        for (String part : value.split(";")) {
            Address address = address(part);
            if (address != null) result.add(address);
        }
        return result;
    }
    private Address address(String value) {
        return value == null || value.isBlank() ? null :
            currentProgram.getAddressFactory().getAddress(value.trim());
    }
    private void conflict(String jump, String detail) {
        report.add(new Report(jump, "conflict", detail));
    }
    private long count(String status) {
        return report.stream().filter(row -> row.status.equals(status)).count();
    }

    private void writeReport(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("jump_address\tstatus\tdetail\n");
            for (Report row : report)
                out.write(row.jumpAddress + "\t" + row.status + "\t" +
                    clean(row.detail) + "\n");
        }
    }

    private File inputFile() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException(
                "Path to jump_table_boundary_proposals.tsv is required");
        return askFile("Select jump_table_boundary_proposals.tsv", "Apply");
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
                throw new IllegalArgumentException("Invalid TSV row " + (line + 1));
            Map<String, String> row = new LinkedHashMap<>();
            for (int column = 0; column < header.length; column++)
                row.put(header[column], values[column]);
            rows.add(row);
        }
        return new Tsv(Set.of(header), rows);
    }
    private void require(Tsv tsv, String... columns) {
        for (String column : columns)
            if (!tsv.columns.contains(column))
                throw new IllegalArgumentException("Missing TSV column: " + column);
    }
    private boolean enabled(String value) {
        return "1".equals(value) || "true".equalsIgnoreCase(value);
    }
    private static String clean(String value) {
        return value == null ? "" : value.replace('\t', ' ').replace('\r', ' ')
            .replace('\n', ' ').trim();
    }
    private String message(Throwable throwable) {
        String value = throwable.getMessage();
        return value == null || value.isBlank() ? throwable.getClass().getSimpleName() : value;
    }

    private record Tsv(Set<String> columns, List<Map<String, String>> rows) {}
    private record Report(String jumpAddress, String status, String detail) {}
}
