// Apply reviewed unclaimed_code_proposals.tsv from STUnclaimedCodeAnalyzer.
// Exact terminal entries are created before their JMP thunks.  Every row is revalidated against
// its saved bytes and live pointer/CALL/data anchor before the Ghidra database is changed.
// Existing manual functions, symbols, signatures, and overlapping bodies are preserved.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Apply Unclaimed Code

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Set;
import java.util.TreeMap;
import java.util.TreeSet;

import ghidra.app.cmd.disassemble.DisassembleCommand;
import ghidra.app.cmd.function.CreateFunctionCmd;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSet;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.Listing;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.mem.MemoryBlock;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.Symbol;

public class STUnclaimedCodeApplier extends GhidraScript {
    private static final String TAG = "RECOVERED_UNCLAIMED_CODE";
    private static final String MARKER = "[STUnclaimedCodeApplier]";
    private static final int MAX_JUMP_CHAIN = 16;

    private Listing listing;
    private Memory memory;
    private FunctionManager functions;
    private final List<ReportRow> report = new ArrayList<>();

    @Override
    protected void run() throws Exception {
        // Explicit per-script transactions must not be nested in GhidraScript's wrapper.
        end(true);
        if (currentProgram == null) {
            printerr("Open the same program that was analyzed.");
            return;
        }
        File selected = inputFile();
        if (selected == null) return;
        File file = selected.isDirectory() ?
            new File(selected, "unclaimed_code_proposals.tsv") : selected;
        if (!file.isFile()) throw new IllegalArgumentException("Missing " + file);

        Tsv tsv = readTsv(file.toPath());
        requireColumns(tsv, "create_apply", "kind", "entry_address", "target_address",
            "entry_bytes", "anchors", "confidence", "reason");
        listing = currentProgram.getListing();
        memory = currentProgram.getMemory();
        functions = currentProgram.getFunctionManager();

        List<Selection> enabled = new ArrayList<>();
        for (Map<String, String> row : tsv.rows) {
            Selection selection = new Selection(row, address(row.get("entry_address")));
            if (!enabled(row.get("create_apply"))) {
                report.add(new ReportRow(addr(selection.entry), row.get("kind"), "disabled",
                    "create_apply=0"));
                continue;
            }
            String stale = validate(selection);
            if (stale != null) {
                report.add(new ReportRow(addr(selection.entry), row.get("kind"), "conflict", stale));
                continue;
            }
            enabled.add(selection);
        }

        int transaction = currentProgram.startTransaction("Apply recovered unclaimed code");
        boolean commit = false;
        try {
            applyTerminalFunctions(enabled);
            applyThunks(enabled);
            commit = true;
        }
        finally {
            currentProgram.endTransaction(transaction, commit);
        }

        Path output = file.getAbsoluteFile().getParentFile().toPath()
            .resolve("unclaimed_code_apply_report.tsv");
        writeReport(output);
        println("Unclaimed code: created=" + count("created") + ", converted=" +
            count("converted") + ", already present=" + count("already_present") +
            ", preserved=" + count("preserved") + ", conflicts=" + count("conflict") +
            ", disabled=" + count("disabled"));
        println("Apply report: " + output.toAbsolutePath().normalize());
        if (count("created") + count("converted") > 0)
            println("Function boundaries changed. Re-run this analyzer, then vtable/constructor/" +
                "prototype analysis before exporting.");
    }

    private void applyTerminalFunctions(List<Selection> rows) throws Exception {
        List<Selection> terminals = rows.stream()
            .filter(row -> !row.kind().equals("direct_jump_thunk"))
            .sorted(Comparator.comparing((Selection row) -> row.entry).reversed()).toList();
        List<CreatedFunction> createdFunctions = new ArrayList<>();
        for (Selection row : terminals) {
            monitor.checkCancelled();
            Function existing = functions.getFunctionAt(row.entry);
            if (existing != null) {
                report.add(new ReportRow(addr(row.entry), row.kind(), "already_present",
                    existing.getName(true)));
                continue;
            }
            Function containing = functions.getFunctionContaining(row.entry);
            if (containing != null) {
                report.add(new ReportRow(addr(row.entry), row.kind(), "conflict",
                    "entry is now inside " + containing.getName(true)));
                continue;
            }
            try {
                Function created = createOrdinaryFunction(row.entry);
                if (created == null) {
                    report.add(new ReportRow(addr(row.entry), row.kind(), "conflict",
                        "function creation returned no function"));
                    continue;
                }
                annotate(created, row.row);
                createdFunctions.add(new CreatedFunction(row, created));
            }
            catch (Exception exception) {
                report.add(new ReportRow(addr(row.entry), row.kind(), "conflict",
                    message(exception)));
            }
        }
        // Seed every exact entry with a one-instruction function before growing any body.  This
        // prevents the first recovered callback from absorbing another independently anchored
        // callback which happens to share a compiler tail.
        for (CreatedFunction created : createdFunctions) {
            String detail = created.function.getName(true);
            try {
                CreateFunctionCmd.fixupFunctionBody(currentProgram, created.function, monitor);
            }
            catch (Exception exception) {
                detail += "; body fixup warning: " + message(exception);
            }
            report.add(new ReportRow(addr(created.selection.entry), created.selection.kind(),
                "created", detail));
        }
    }

    private void applyThunks(List<Selection> rows) throws Exception {
        Map<Address, Selection> pending = new TreeMap<>();
        for (Selection row : rows)
            if (row.kind().equals("direct_jump_thunk")) pending.put(row.entry, row);

        boolean progress;
        do {
            progress = false;
            for (Selection row : new ArrayList<>(pending.values())) {
                monitor.checkCancelled();
                Address targetAddress = optionalAddress(row.row.get("target_address"));
                Function target = targetAddress == null ? null : functions.getFunctionAt(targetAddress);
                if (target == null) continue;
                applyOneThunk(row, target);
                pending.remove(row.entry);
                progress = true;
            }
        }
        while (progress && !pending.isEmpty());

        for (Selection row : pending.values()) {
            Address target = optionalAddress(row.row.get("target_address"));
            report.add(new ReportRow(addr(row.entry), row.kind(), "conflict",
                "target function is missing at " + addr(target)));
        }
    }

    private void applyOneThunk(Selection row, Function target) {
        try {
            Function existing = functions.getFunctionAt(row.entry);
            if (existing != null) {
                if (existing.isThunk()) {
                    Function actual = existing.getThunkedFunction(false);
                    String status = actual != null && actual.getEntryPoint().equals(target.getEntryPoint()) ?
                        "already_present" : "preserved";
                    report.add(new ReportRow(addr(row.entry), row.kind(), status,
                        actual == null ? "existing unresolved thunk" :
                            "existing thunk -> " + actual.getName(true)));
                    return;
                }
                if (!safeToConvert(existing)) {
                    report.add(new ReportRow(addr(row.entry), row.kind(), "preserved",
                        "existing non-synthetic function " + existing.getName(true)));
                    return;
                }
                existing.setThunkedFunction(target);
                annotate(existing, row.row);
                report.add(new ReportRow(addr(row.entry), row.kind(), "converted",
                    existing.getName(true) + " -> " + target.getName(true)));
                return;
            }

            Function containing = functions.getFunctionContaining(row.entry);
            if (containing != null) {
                report.add(new ReportRow(addr(row.entry), row.kind(), "conflict",
                    "entry is now inside " + containing.getName(true)));
                return;
            }
            Instruction instruction = ensureInstruction(row.entry);
            if (instruction == null) {
                report.add(new ReportRow(addr(row.entry), row.kind(), "conflict",
                    "disassembly did not produce an instruction"));
                return;
            }
            AddressSet body = new AddressSet(instruction.getMinAddress(), instruction.getMaxAddress());
            Function thunk = functions.createThunkFunction(null, currentProgram.getGlobalNamespace(),
                row.entry, body, target, SourceType.ANALYSIS);
            if (thunk == null) {
                report.add(new ReportRow(addr(row.entry), row.kind(), "conflict",
                    "thunk creation returned no function"));
                return;
            }
            annotate(thunk, row.row);
            report.add(new ReportRow(addr(row.entry), row.kind(), "created",
                thunk.getName(true) + " -> " + target.getName(true)));
        }
        catch (Exception exception) {
            report.add(new ReportRow(addr(row.entry), row.kind(), "conflict", message(exception)));
        }
    }

    private Function createOrdinaryFunction(Address entry) throws Exception {
        Instruction instruction = ensureInstruction(entry);
        if (instruction == null) return null;
        AddressSet body = new AddressSet(instruction.getMinAddress(), instruction.getMaxAddress());
        CreateFunctionCmd command = new CreateFunctionCmd(null, entry, body, SourceType.ANALYSIS);
        if (!command.applyTo(currentProgram, monitor))
            throw new IllegalStateException(command.getStatusMsg());
        return functions.getFunctionAt(entry);
    }

    private Instruction ensureInstruction(Address entry) {
        Instruction instruction = listing.getInstructionAt(entry);
        if (instruction != null) return instruction;
        Data data = listing.getDefinedDataContaining(entry);
        if (data != null) return null;
        MemoryBlock block = memory.getBlock(entry);
        if (block == null || !block.isExecute() || !block.isInitialized()) return null;
        AddressSet restriction = new AddressSet(block.getStart(), block.getEnd());
        DisassembleCommand command = new DisassembleCommand(entry, restriction, true);
        command.enableCodeAnalysis(false);
        if (!command.applyTo(currentProgram, monitor)) return null;
        return listing.getInstructionAt(entry);
    }

    private boolean safeToConvert(Function function) {
        Symbol symbol = currentProgram.getSymbolTable().getPrimarySymbol(function.getEntryPoint());
        if (symbol != null && (symbol.getSource() == SourceType.USER_DEFINED ||
                symbol.getSource() == SourceType.IMPORTED)) return false;
        String name = function.getName();
        if (!(name.matches("(?i)(FUN|sub)_[0-9a-f]+") ||
                name.matches("(?i)thunk_(FUN|sub)_[0-9a-f]+"))) return false;
        Instruction instruction = listing.getInstructionAt(function.getEntryPoint());
        return instruction != null && "JMP".equalsIgnoreCase(instruction.getMnemonicString()) &&
            function.getBody().getNumAddresses() == instruction.getLength();
    }

    private void annotate(Function function, Map<String, String> row) {
        function.addTag(TAG);
        String block = MARKER + " Exact function entry recovered from " + row.get("kind") +
            ".\nEvidence: " + unt(row.get("anchors"));
        String old = function.getComment();
        if (old == null || old.isBlank()) function.setComment(block);
        else if (!old.contains(MARKER)) function.setComment(old + "\n\n" + block);
    }

    private String validate(Selection row) {
        if (!entryBytes(row.entry).equalsIgnoreCase(unt(row.row.get("entry_bytes"))))
            return "entry bytes changed since analysis";
        if (!hasLiveAnchorPath(row)) return "no saved pointer/reference anchor still reaches entry";
        if (row.kind().equals("direct_jump_thunk")) {
            Address expected = optionalAddress(row.row.get("target_address"));
            Address actual = directJumpTarget(row.entry);
            if (expected == null || actual == null || !expected.equals(actual))
                return "direct-JMP target changed";
        }
        return null;
    }

    private boolean hasLiveAnchorPath(Selection row) {
        for (String encoded : unt(row.row.get("anchors")).split("\\s*\\|\\s*")) {
            if (encoded.isBlank() || encoded.length() < 3 || encoded.charAt(1) != ':') continue;
            int arrow = encoded.indexOf('>', 2);
            if (arrow < 0) continue;
            Address source = optionalAddress(encoded.substring(2, arrow));
            Address selected = optionalAddress(encoded.substring(arrow + 1));
            if (source == null || selected == null || !anchorIsLive(encoded.charAt(0), source, selected))
                continue;
            if (directJumpPathContains(selected, row.entry)) return true;
        }
        return false;
    }

    private boolean anchorIsLive(char kind, Address source, Address target) {
        try {
            if (kind == 'P') {
                long value = Integer.toUnsignedLong(memory.getInt(source, false));
                return target.getOffset() == value;
            }
            if (kind == 'E') return true;
            for (Reference reference : referencesFrom(source)) {
                if (!target.equals(reference.getToAddress())) continue;
                if (kind == 'C' && reference.getReferenceType().isCall()) return true;
                if (kind == 'D' && (reference.getReferenceType().isData() ||
                        !reference.getReferenceType().isFlow())) return true;
                if (kind == 'J' && reference.getReferenceType().isJump()) return true;
            }
        }
        catch (Exception ignored) { }
        return false;
    }

    private Reference[] referencesFrom(Address source) {
        return currentProgram.getReferenceManager().getReferencesFrom(source);
    }

    private boolean directJumpPathContains(Address start, Address desired) {
        Address cursor = start;
        Set<Address> seen = new TreeSet<>();
        for (int depth = 0; depth <= MAX_JUMP_CHAIN && seen.add(cursor); depth++) {
            if (cursor.equals(desired)) return true;
            Address target = directJumpTarget(cursor);
            if (target == null) return false;
            cursor = target;
        }
        return false;
    }

    private Address directJumpTarget(Address entry) {
        try {
            Instruction instruction = listing.getInstructionAt(entry);
            if (instruction != null) {
                if ("JMP".equalsIgnoreCase(instruction.getMnemonicString()) &&
                        instruction.getFlowType().isJump() &&
                        instruction.getFlowType().isUnConditional()) {
                    Address[] flows = instruction.getFlows();
                    if (flows.length == 1) return flows[0];
                }
                // Keep the analyzer's raw E9 fallback.  Missing Ghidra flow metadata must not
                // make a byte-identical, live-anchored proposal appear stale.
            }
            if ((memory.getByte(entry) & 0xff) != 0xe9) return null;
            return entry.add(5L + memory.getInt(entry.add(1), false));
        }
        catch (Exception exception) {
            return null;
        }
    }

    private String entryBytes(Address entry) {
        try {
            MemoryBlock block = memory.getBlock(entry);
            if (block == null || !block.isInitialized()) return "";
            int count = (int)Math.min(8, block.getEnd().subtract(entry) + 1);
            byte[] bytes = new byte[count];
            if (memory.getBytes(entry, bytes) != count) return "";
            StringBuilder result = new StringBuilder();
            for (byte value : bytes) result.append(String.format("%02X", value & 0xff));
            return result.toString();
        }
        catch (Exception exception) {
            return "";
        }
    }

    private File inputFile() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException("Path to unclaimed_code_proposals.tsv is required");
        return askFile("Select unclaimed_code_proposals.tsv", "Apply");
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
        return new Tsv(List.of(header), rows);
    }

    private void requireColumns(Tsv tsv, String... names) {
        for (String name : names) if (!tsv.header.contains(name))
            throw new IllegalArgumentException("Missing TSV column: " + name);
    }

    private void writeReport(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("entry_address\tkind\tstatus\tdetail\n");
            for (ReportRow row : report)
                out.write(row.address + "\t" + row.kind + "\t" + row.status + "\t" +
                    tsv(row.detail) + "\n");
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

    private Address optionalAddress(String value) {
        String text = unt(value);
        if (text.isBlank()) return null;
        return currentProgram.getAddressFactory().getAddress(text);
    }

    private static boolean enabled(String value) {
        return "1".equals(value) || "true".equalsIgnoreCase(value) ||
            "yes".equalsIgnoreCase(value);
    }

    private static String unt(String value) {
        return value == null ? "" : value.trim();
    }

    private static String tsv(String value) {
        return value == null ? "" : value.replace('\t', ' ').replace('\r', ' ')
            .replace('\n', ' ');
    }

    private static String addr(Address address) {
        return address == null ? "" : address.toString().toUpperCase(Locale.ROOT);
    }

    private static String message(Exception exception) {
        String value = exception.getMessage();
        return value == null || value.isBlank() ? exception.getClass().getSimpleName() : value;
    }

    private record Selection(Map<String, String> row, Address entry) {
        String kind() { return row.get("kind"); }
    }
    private record CreatedFunction(Selection selection, Function function) { }
    private record ReportRow(String address, String kind, String status, String detail) { }
    private record Tsv(List<String> header, List<Map<String, String>> rows) { }
}
