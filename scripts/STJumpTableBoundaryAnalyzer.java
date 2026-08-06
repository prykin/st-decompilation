// Recover finite boundaries for indirect-jump tables which are immediately followed by
// unrelated packed lookup bytes.  Read-only: writes jump_table_boundary_proposals.tsv.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Analyze Jump Table Boundaries

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Set;
import java.util.TreeMap;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSpace;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.CommentType;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.scalar.Scalar;
import ghidra.program.model.symbol.Reference;

public class STJumpTableBoundaryAnalyzer extends GhidraScript {
    private static final int MAX_ENTRIES = 4096;
    private static final int DECOMPILE_TIMEOUT = 60;
    private static final String TRUNCATION_WARNING =
        "Sanity check requires truncation of jumptable";
    private static final String APPLIER_MARKER = "[STJumpTableBoundaryApplier]";

    @Override
    protected void run() throws Exception {
        // This script is machine-only and read-only.  It must run before decompiler-backed
        // analyzers so an over-read lookup table cannot poison every fresh DecompInterface.
        end(true);
        if (currentProgram == null) {
            printerr("Open the analyzed ST program first.");
            return;
        }
        File selected = outputDirectory();
        if (selected == null) return;
        Path directory = programDirectory(selected);
        Files.createDirectories(directory);

        List<Row> rows = new ArrayList<>();
        InstructionIterator instructions = currentProgram.getListing().getInstructions(true);
        while (instructions.hasNext()) {
            monitor.checkCancelled();
            Instruction instruction = instructions.next();
            if (!instruction.getFlowType().isJump() ||
                    !instruction.getFlowType().isComputed()) continue;
            Row row = analyze(instruction);
            if (row != null) rows.add(row);
        }
        int machineCandidates = rows.size();
        rows = qualifyDecompilerOverreads(rows);
        rows.sort(Comparator.comparing((Row row) -> row.functionAddress)
            .thenComparing(row -> row.jumpAddress));
        writeTsv(directory.resolve("jump_table_boundary_proposals.tsv"), rows);
        writeSummary(directory.resolve("jump_table_boundary_summary.txt"), rows);
        println("Jump-table boundary analysis complete: " +
            directory.toAbsolutePath().normalize());
        println("Machine candidates=" + machineCandidates + ", finite tables=" +
            rows.size() + ", apply=" +
            rows.stream().filter(row -> row.apply).count());
    }

    private List<Row> qualifyDecompilerOverreads(List<Row> rows) throws Exception {
        Map<String, Function> functions = new TreeMap<>();
        for (Row row : rows) {
            Address address = currentProgram.getAddressFactory()
                .getAddress(row.functionAddress);
            Function function = address == null ? null :
                currentProgram.getFunctionManager().getFunctionAt(address);
            if (function != null) functions.put(row.functionAddress, function);
        }
        Map<String, Boolean> warnings = new TreeMap<>();
        Map<String, String> failures = new TreeMap<>();
        DecompInterface decompiler = new DecompInterface();
        decompiler.toggleCCode(true);
        decompiler.toggleSyntaxTree(false);
        if (!decompiler.openProgram(currentProgram))
            throw new IllegalStateException("Decompiler could not open the current program");
        try {
            for (Map.Entry<String, Function> entry : functions.entrySet()) {
                monitor.checkCancelled();
                DecompileResults result = decompiler.decompileFunction(entry.getValue(),
                    DECOMPILE_TIMEOUT, monitor);
                if (!result.decompileCompleted() ||
                        result.getDecompiledFunction() == null) {
                    failures.put(entry.getKey(), clean(result.getErrorMessage()));
                    warnings.put(entry.getKey(), false);
                    continue;
                }
                String body = result.getDecompiledFunction().getC();
                warnings.put(entry.getKey(), body != null &&
                    body.contains(TRUNCATION_WARNING));
            }
        }
        finally { decompiler.dispose(); }

        List<Row> qualified = new ArrayList<>();
        for (Row row : rows) {
            Address jump = currentProgram.getAddressFactory().getAddress(row.jumpAddress);
            String comment = jump == null ? null : currentProgram.getListing()
                .getComment(CommentType.EOL, jump);
            boolean owned = comment != null && comment.contains(APPLIER_MARKER);
            boolean warning = warnings.getOrDefault(row.functionAddress, false);
            boolean apply = warning || owned;
            String extra = warning ?
                "fresh_decompiler_reports_jumptable_truncation" : owned ?
                "existing_script_owned_override_requires_revalidation" :
                failures.containsKey(row.functionAddress) ?
                "decompile_failed=" + failures.get(row.functionAddress) :
                "bounded_machine_candidate_without_decompiler_overread";
            qualified.add(new Row(apply, row.functionAddress, row.functionName,
                row.jumpAddress, row.tableAddress, row.entryCount, row.destinations,
                row.firstNonEntry, row.firstNonEntryWord, row.byteReadSite,
                apply ? "high" : "review", row.reason + "; " + extra));
        }
        return qualified;
    }

    private Row analyze(Instruction instruction) throws Exception {
        Function function = currentProgram.getFunctionManager()
            .getFunctionContaining(instruction.getAddress());
        if (function == null) return null;

        Set<Address> referencedDestinations = new LinkedHashSet<>();
        List<Address> dataBases = new ArrayList<>();
        for (Reference reference : instruction.getReferencesFrom()) {
            if (reference.getReferenceType().isJump())
                referencedDestinations.add(reference.getToAddress());
            else if (reference.getReferenceType().isData() &&
                    reference.getToAddress().isMemoryAddress())
                dataBases.add(reference.getToAddress());
        }
        // One destination is an ordinary computed branch, not a proven table.  Existing
        // computed-jump references are the independent control-flow boundary proof.
        if (referencedDestinations.size() < 2 || dataBases.isEmpty()) return null;
        dataBases.sort(Address::compareTo);
        for (Address destination : referencedDestinations) {
            Instruction target = currentProgram.getListing().getInstructionAt(destination);
            if (target == null || !function.getBody().contains(destination)) return null;
        }

        Row best = null;
        for (Address tableBase : dataBases) {
            Row candidate = analyzeTable(function, instruction, tableBase,
                referencedDestinations);
            if (candidate != null && (best == null ||
                    candidate.entryCount > best.entryCount)) best = candidate;
        }
        return best;
    }

    private Row analyzeTable(Function function, Instruction instruction, Address tableBase,
            Set<Address> referencedDestinations) throws Exception {
        int pointerSize = currentProgram.getDefaultPointerSize();
        if (pointerSize != 4) return null; // This recovery corpus is 32-bit x86.
        Memory memory = currentProgram.getMemory();
        AddressSpace space = currentProgram.getAddressFactory().getDefaultAddressSpace();
        List<Address> entries = new ArrayList<>();
        Set<Address> observedDestinations = new LinkedHashSet<>();
        Address cursor = tableBase;
        long invalidWord = -1;
        Address invalidAddress = null;

        for (int index = 0; index < MAX_ENTRIES; index++) {
            monitor.checkCancelled();
            Address wordEnd;
            try { wordEnd = cursor.add(3); }
            catch (Exception overflow) { return null; }
            if (!memory.contains(cursor) || !memory.contains(wordEnd)) return null;
            long raw = Integer.toUnsignedLong(memory.getInt(cursor));
            Address destination;
            try { destination = space.getAddress(raw); }
            catch (Exception invalid) { destination = null; }
            boolean exactInstruction = destination != null &&
                currentProgram.getListing().getInstructionAt(destination) != null;
            boolean sameFunction = exactInstruction && function.getBody().contains(destination);
            if (!sameFunction || !referencedDestinations.contains(destination)) {
                // If the next word is executable in this function, existing references may be
                // incomplete; freezing that boundary would hide a real switch destination.
                if (sameFunction) return null;
                invalidWord = raw;
                invalidAddress = cursor;
                break;
            }
            entries.add(destination);
            observedDestinations.add(destination);
            cursor = cursor.add(pointerSize);
        }
        if (invalidAddress == null || entries.size() < 2 ||
                !observedDestinations.equals(referencedDestinations)) return null;

        // The first non-entry must not itself be a defined pointer.  A pointer data item means
        // that the Listing intentionally extends the table and deserves manual review.
        var nextData = currentProgram.getListing().getDataAt(invalidAddress);
        if (nextData != null && nextData.isPointer()) return null;
        Address byteReadSite = independentByteRead(function, invalidAddress);
        if (byteReadSite == null) return null;

        List<String> destinations = referencedDestinations.stream().sorted()
            .map(this::addr).toList();
        String reason = "exact_consecutive_pointer_entries_match_all_computed_jump_refs; " +
            "all_destinations_are_instruction_starts_in_containing_function; " +
            "next_machine_word_is_not_an_executable_target; independent_indexed_byte_read_" +
            "starts_at_first_non_entry; prevents_packed_lookup_bytes_from_being_" +
            "reinterpreted_as_an_extra_jump_address";
        return new Row(true, addr(function.getEntryPoint()), function.getName(true),
            addr(instruction.getAddress()), addr(tableBase), entries.size(),
            String.join(";", destinations), addr(invalidAddress),
            String.format(Locale.ROOT, "%08X", invalidWord), addr(byteReadSite),
            "high", reason);
    }

    /**
     * Prove that the first rejected dword belongs to a separately indexed byte table.  A raw
     * immediate in an instruction is not enough: the machine instruction must actually render
     * a byte-sized memory operand rooted at that exact address.
     */
    private Address independentByteRead(Function function, Address base) {
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            String text = instruction.toString().toLowerCase(Locale.ROOT);
            if (!text.contains("byte ptr") || !text.contains("[")) continue;
            for (int operand = 0; operand < instruction.getNumOperands(); operand++) {
                for (Object object : instruction.getOpObjects(operand)) {
                    if (object instanceof Address address && address.equals(base))
                        return instruction.getAddress();
                    if (object instanceof Scalar scalar &&
                            scalar.getUnsignedValue() == base.getOffset())
                        return instruction.getAddress();
                }
            }
        }
        return null;
    }

    private void writeTsv(Path path, List<Row> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\tfunction_address\tfunction_name\tjump_address\ttable_address\t" +
                "entry_count\tdestinations\tfirst_non_entry\tfirst_non_entry_word\t" +
                "byte_read_site\t" +
                "confidence\treason\n");
            for (Row row : rows) {
                out.write((row.apply ? "1" : "0") + "\t" + row.functionAddress + "\t" +
                    clean(row.functionName) + "\t" + row.jumpAddress + "\t" +
                    row.tableAddress + "\t" + row.entryCount + "\t" +
                    row.destinations + "\t" + row.firstNonEntry + "\t" +
                    row.firstNonEntryWord + "\t" + row.byteReadSite + "\t" +
                    row.confidence + "\t" +
                    clean(row.reason) + "\n");
            }
        }
    }

    private void writeSummary(Path path, List<Row> rows) throws Exception {
        String text = "Jump-table boundary recovery\n" +
            "finite_tables=" + rows.size() + "\n" +
            "apply=" + rows.stream().filter(row -> row.apply).count() + "\n" +
            "functions_with_truncation_warning=" + rows.stream()
                .filter(row -> row.reason.contains(
                    "fresh_decompiler_reports_jumptable_truncation"))
                .map(row -> row.functionAddress).distinct().count() + "\n" +
            "proof=existing computed-jump references plus an exact consecutive pointer table; " +
            "the first following word is not executable and has an independent indexed byte " +
            "read; automatic application additionally requires a fresh decompiler truncation " +
            "warning or an existing script-owned override\n";
        Files.writeString(path, text, StandardCharsets.UTF_8);
    }

    private File outputDirectory() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException("Recovery output directory is required");
        return askDirectory("Select recovery output directory", "Select");
    }

    private Path programDirectory(File selected) {
        Path base = selected.toPath().toAbsolutePath().normalize();
        return base.getFileName() != null &&
            base.getFileName().toString().equals(currentProgram.getName()) ? base :
            base.resolve(currentProgram.getName());
    }

    private String addr(Address address) {
        return address == null ? "" : address.toString().toUpperCase(Locale.ROOT);
    }
    private static String clean(String value) {
        return value == null ? "" : value.replace('\t', ' ').replace('\r', ' ')
            .replace('\n', ' ').trim();
    }

    private record Row(boolean apply, String functionAddress, String functionName,
            String jumpAddress, String tableAddress, int entryCount, String destinations,
            String firstNonEntry, String firstNonEntryWord, String byteReadSite,
            String confidence,
            String reason) {}
}
