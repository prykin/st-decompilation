// Recover exact function entries which Ghidra left outside every function.
// Strong automatic evidence is deliberately limited to CALL/data references to a direct JMP
// entry and raw non-executable pointers to a direct JMP chain.  Direct data targets, SEH
// funclets, jump-only shared tails, and merely code-looking bytes remain review-only.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Analyze Unclaimed Code

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

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Listing;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.mem.MemoryAccessException;
import ghidra.program.model.mem.MemoryBlock;
import ghidra.program.model.symbol.RefType;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;
import ghidra.program.model.symbol.ReferenceManager;
import ghidra.program.model.symbol.Symbol;

public class STUnclaimedCodeAnalyzer extends GhidraScript {
    private static final int MAX_JUMP_CHAIN = 16;
    private static final int FINGERPRINT_BYTES = 8;

    private Listing listing;
    private Memory memory;
    private FunctionManager functions;
    private ReferenceManager references;
    private final Map<Address, Candidate> candidates = new TreeMap<>();
    private int rawExecutablePointers;
    private int rawJumpPointers;
    private int orphanJumpEntries;

    @Override
    protected void run() throws Exception {
        if (currentProgram == null) {
            printerr("Open the analyzed ST program first.");
            return;
        }
        if (currentProgram.getDefaultPointerSize() != 4)
            throw new IllegalArgumentException("This analyzer currently requires 32-bit x86.");

        File selected = outputDirectory();
        if (selected == null) return;
        Path directory = programDirectory(selected);
        Files.createDirectories(directory);

        listing = currentProgram.getListing();
        memory = currentProgram.getMemory();
        functions = currentProgram.getFunctionManager();
        references = currentProgram.getReferenceManager();

        collectReferencedOrphanJumps();
        collectRawNonExecutablePointers();
        finalizeCandidates();
        List<Candidate> rows = candidates.values().stream()
            .sorted(Comparator.comparing((Candidate row) -> row.entry)
                .thenComparing(row -> row.kind)).toList();

        Path tsv = directory.resolve("unclaimed_code_proposals.tsv");
        Path jsonl = directory.resolve("unclaimed_code_proposals.jsonl");
        Path summary = directory.resolve("unclaimed_code_summary.txt");
        writeTsv(tsv, rows);
        writeJsonl(jsonl, rows);
        writeSummary(summary, rows);

        long enabled = rows.stream().filter(row -> row.createApply).count();
        long thunks = rows.stream().filter(row -> row.kind.equals("direct_jump_thunk")).count();
        long targets = rows.stream().filter(row -> row.kind.equals("thunk_target")).count();
        long review = rows.size() - enabled;
        println("Unclaimed-code analysis complete: " + directory.toAbsolutePath().normalize());
        println("Candidates=" + rows.size() + ", direct JMP thunks=" + thunks +
            ", thunk targets=" + targets + ", create_apply=" + enabled +
            ", review-only=" + review);
    }

    private void collectReferencedOrphanJumps() throws Exception {
        InstructionIterator iterator = listing.getInstructions(true);
        while (iterator.hasNext()) {
            monitor.checkCancelled();
            Instruction instruction = iterator.next();
            Address entry = instruction.getAddress();
            if (!isExecutable(entry) || functions.getFunctionContaining(entry) != null) continue;
            DirectJump jump = directJump(entry);
            if (jump == null) continue;

            Evidence evidence = inboundEvidence(entry);
            if (evidence.anchors.isEmpty()) continue;
            orphanJumpEntries++;
            boolean strong = evidence.callReferences > 0 || evidence.dataReferences > 0 ||
                evidence.entryReferences > 0;
            addJumpChain(entry, evidence, strong,
                strong ? "referenced orphan direct-JMP entry" :
                    "orphan direct-JMP entry has only jump/fallthrough evidence");
        }
    }

    private void collectRawNonExecutablePointers() throws Exception {
        for (MemoryBlock block : memory.getBlocks()) {
            monitor.checkCancelled();
            if (block.isExecute() || !block.isInitialized() || block.getSize() < 4) continue;
            if (block.getSize() > Integer.MAX_VALUE)
                throw new IllegalArgumentException("Memory block too large: " + block.getName());
            byte[] bytes = new byte[(int)block.getSize()];
            int read = memory.getBytes(block.getStart(), bytes);
            if (read != bytes.length)
                throw new MemoryAccessException("Short read in " + block.getName());
            int firstAligned = (int)((4 - (block.getStart().getOffset() & 3)) & 3);
            for (int offset = firstAligned; offset + 4 <= bytes.length; offset += 4) {
                if ((offset & 0x3fff) == 0) monitor.checkCancelled();
                long value = Integer.toUnsignedLong(littleEndianInt(bytes, offset));
                Address entry = addressForOffset(value);
                if (entry == null || !isExecutable(entry) ||
                        functions.getFunctionContaining(entry) != null) continue;
                rawExecutablePointers++;
                Address source = block.getStart().add(offset);
                Evidence evidence = new Evidence();
                evidence.rawPointerSources.add(source);
                evidence.anchors.add("P:" + addr(source) + ">" + addr(entry));
                DirectJump jump = directJump(entry);
                if (jump != null) {
                    rawJumpPointers++;
                    addJumpChain(entry, evidence, true,
                        "aligned non-executable pointer selects a direct-JMP entry");
                }
                else if (looksLikeEntry(entry)) {
                    Candidate candidate = candidate(entry);
                    candidate.kind = looksLikeMsvcExceptionFilter(entry) ?
                        "seh_filter" : "data_referenced_code";
                    candidate.anchors.addAll(evidence.anchors);
                    candidate.rawPointerSources.add(source);
                    candidate.reasons.add(candidate.kind.equals("seh_filter") ?
                        "MSVC exception-filter shape; preserve as review-only funclet" :
                        "aligned non-executable pointer selects plausible code without a thunk");
                }
            }
        }
    }

    private void addJumpChain(Address start, Evidence evidence, boolean strong, String reason)
            throws Exception {
        List<Address> chain = new ArrayList<>();
        Set<Address> seen = new TreeSet<>();
        Address cursor = start;
        String problem = null;
        Function terminal = null;

        for (int depth = 0; depth < MAX_JUMP_CHAIN; depth++) {
            if (!seen.add(cursor)) {
                problem = "direct-JMP cycle";
                break;
            }
            terminal = functions.getFunctionAt(cursor);
            if (terminal != null) break;
            Function containing = functions.getFunctionContaining(cursor);
            if (containing != null) {
                problem = "chain enters the interior of " + containing.getName(true);
                break;
            }
            DirectJump jump = directJump(cursor);
            if (jump == null) break;
            chain.add(cursor);
            cursor = jump.target;
            if (!isExecutable(cursor)) {
                problem = "direct JMP leaves executable memory";
                break;
            }
            if (depth == MAX_JUMP_CHAIN - 1)
                problem = "direct-JMP chain exceeds " + MAX_JUMP_CHAIN + " entries";
        }

        boolean terminalNeedsFunction = terminal == null && problem == null;
        boolean sehContinuation = terminalNeedsFunction && looksLikeMsvcEhContinuation(cursor);
        if (sehContinuation)
            problem = "MSVC EH continuation starts by restoring ESP from [EBP-0x18]";
        Data terminalData = terminalNeedsFunction ? listing.getDefinedDataContaining(cursor) : null;
        if (terminalData != null)
            problem = "terminal entry is defined data " + terminalData.getDataType().getName();
        boolean apply = strong && problem == null;

        for (int index = 0; index < chain.size(); index++) {
            Address entry = chain.get(index);
            Address target = index + 1 < chain.size() ? chain.get(index + 1) : cursor;
            Candidate candidate = candidate(entry);
            candidate.kind = "direct_jump_thunk";
            candidate.target = target;
            candidate.createApply |= apply;
            candidate.anchors.addAll(evidence.anchors);
            candidate.rawPointerSources.addAll(evidence.rawPointerSources);
            candidate.callReferences += evidence.callReferences;
            candidate.jumpReferences += evidence.jumpReferences;
            candidate.dataReferences += evidence.dataReferences;
            candidate.entryReferences += evidence.entryReferences;
            candidate.reasons.add(reason);
            if (problem != null) candidate.reasons.add(problem);
            for (int prior = 0; prior < index; prior++)
                candidate.viaThunks.add(chain.get(prior));
        }

        if (terminalNeedsFunction) {
            Candidate target = candidate(cursor);
            if (!target.kind.equals("direct_jump_thunk"))
                target.kind = sehContinuation ? "seh_funclet" : "thunk_target";
            target.createApply |= apply;
            target.anchors.addAll(evidence.anchors);
            target.rawPointerSources.addAll(evidence.rawPointerSources);
            target.callReferences += evidence.callReferences;
            target.jumpReferences += evidence.jumpReferences;
            target.dataReferences += evidence.dataReferences;
            target.entryReferences += evidence.entryReferences;
            target.viaThunks.addAll(chain);
            target.reasons.add("exact terminal of a referenced direct-JMP chain");
            if (problem != null) target.reasons.add(problem);
        }
    }

    private Evidence inboundEvidence(Address entry) {
        Evidence result = new Evidence();
        ReferenceIterator iterator = references.getReferencesTo(entry);
        while (iterator.hasNext()) {
            Reference reference = iterator.next();
            Address from = reference.getFromAddress();
            RefType type = reference.getReferenceType();
            if (reference.isEntryPointReference()) {
                result.entryReferences++;
                result.anchors.add("E:" + addr(from) + ">" + addr(entry));
            }
            else if (type.isCall()) {
                result.callReferences++;
                result.anchors.add("C:" + addr(from) + ">" + addr(entry));
            }
            else if (type.isData() || !type.isFlow()) {
                result.dataReferences++;
                result.anchors.add("D:" + addr(from) + ">" + addr(entry));
            }
            else {
                result.jumpReferences++;
                result.anchors.add("J:" + addr(from) + ">" + addr(entry));
            }
        }
        return result;
    }

    private DirectJump directJump(Address entry) {
        try {
            Instruction instruction = listing.getInstructionAt(entry);
            if (instruction != null) {
                if ("JMP".equalsIgnoreCase(instruction.getMnemonicString()) &&
                        instruction.getFlowType().isJump() &&
                        instruction.getFlowType().isUnConditional()) {
                    Address[] flows = instruction.getFlows();
                    if (flows.length == 1 && isExecutable(flows[0]))
                        return new DirectJump(flows[0], instruction.getLength(), true);
                }
                // Some orphan ILT entries are disassembled and labelled LAB_*, yet have no
                // usable flow reference after surrounding function bodies were rebuilt.  The
                // E9 rel32 encoding is itself exact on this explicitly 32-bit x86 analyzer, so
                // fall through to byte decoding instead of losing the table-linked thunk.
            }
            MemoryBlock block = memory.getBlock(entry);
            if (block == null || !block.isExecute() || !block.isInitialized() ||
                    entry.add(4).compareTo(block.getEnd()) > 0 ||
                    (memory.getByte(entry) & 0xff) != 0xe9) return null;
            int displacement = memory.getInt(entry.add(1), false);
            Address target = entry.add(5L + displacement);
            return isExecutable(target) ? new DirectJump(target, 5, false) : null;
        }
        catch (Exception exception) {
            return null;
        }
    }

    private boolean looksLikeEntry(Address address) {
        try {
            if (listing.getInstructionAt(address) != null) return true;
            byte first = memory.getByte(address);
            byte second = memory.getByte(address.add(1));
            int a = first & 0xff, b = second & 0xff;
            return a == 0x55 && b == 0x8b ||
                Set.of(0x53, 0x56, 0x57).contains(a) &&
                    Set.of(0x53, 0x56, 0x57, 0x8b, 0x68).contains(b) ||
                looksLikeMsvcExceptionFilter(address);
        }
        catch (Exception exception) {
            return false;
        }
    }

    private boolean looksLikeMsvcExceptionFilter(Address address) {
        try {
            return (memory.getByte(address) & 0xff) == 0xb8 &&
                memory.getInt(address.add(1), false) == 1 &&
                (memory.getByte(address.add(5)) & 0xff) == 0xc3;
        }
        catch (Exception exception) {
            return false;
        }
    }

    private boolean looksLikeMsvcEhContinuation(Address address) {
        try {
            // VC6 EH continuations resume inside their owner's established EBP frame.  Treating
            // this alternate entry as an ordinary standalone function produces unaff_EBP and a
            // false source-level prototype.
            return (memory.getByte(address) & 0xff) == 0x8b &&
                (memory.getByte(address.add(1)) & 0xff) == 0x65 &&
                (memory.getByte(address.add(2)) & 0xff) == 0xe8;
        }
        catch (Exception exception) {
            return false;
        }
    }

    private void finalizeCandidates() {
        for (Candidate row : candidates.values()) {
            row.entryBytes = entryBytes(row.entry);
            row.instructionState = listing.getInstructionAt(row.entry) == null ?
                "raw_bytes" : "instruction";
            Symbol symbol = currentProgram.getSymbolTable().getPrimarySymbol(row.entry);
            row.currentSymbol = symbol == null ? "" : symbol.getName(true);
            row.proposedName = row.kind.equals("direct_jump_thunk") && row.target != null ?
                "thunk_FUN_" + addr(row.target) : "FUN_" + addr(row.entry);
            if (row.kind.equals("seh_filter") || row.kind.equals("seh_funclet") ||
                    row.kind.equals("data_referenced_code"))
                row.createApply = false;
            row.confidence = row.createApply ? "exact_control_flow" : "review";
        }
    }

    private Candidate candidate(Address entry) {
        return candidates.computeIfAbsent(entry, Candidate::new);
    }

    private boolean isExecutable(Address address) {
        if (address == null) return false;
        MemoryBlock block = memory.getBlock(address);
        return block != null && block.isExecute() && block.isInitialized();
    }

    private Address addressForOffset(long value) {
        try {
            return currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(value);
        }
        catch (Exception exception) {
            return null;
        }
    }

    private String entryBytes(Address entry) {
        try {
            MemoryBlock block = memory.getBlock(entry);
            if (block == null || !block.isInitialized()) return "";
            int count = (int)Math.min(FINGERPRINT_BYTES,
                block.getEnd().subtract(entry) + 1);
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

    private void writeTsv(Path path, List<Candidate> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("create_apply\tkind\tentry_address\ttarget_address\tcurrent_symbol\t" +
                "proposed_name\tentry_bytes\tinstruction_state\tinbound_call_refs\t" +
                "inbound_jump_refs\tinbound_data_refs\tinbound_entry_refs\t" +
                "raw_pointer_sources\tvia_thunks\tanchors\tconfidence\treason\n");
            for (Candidate row : rows) {
                out.write((row.createApply ? "1" : "0") + "\t" + row.kind + "\t" +
                    addr(row.entry) + "\t" + (row.target == null ? "" : addr(row.target)) +
                    "\t" + tsv(row.currentSymbol) + "\t" + tsv(row.proposedName) + "\t" +
                    row.entryBytes + "\t" + row.instructionState + "\t" +
                    row.callReferences + "\t" + row.jumpReferences + "\t" +
                    row.dataReferences + "\t" + row.entryReferences + "\t" +
                    addresses(row.rawPointerSources) + "\t" + addresses(row.viaThunks) +
                    "\t" + tsv(String.join(" | ", row.anchors)) + "\t" + row.confidence +
                    "\t" + tsv(String.join("; ", row.reasons)) + "\n");
            }
        }
    }

    private void writeJsonl(Path path, List<Candidate> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            for (Candidate row : rows) {
                out.write("{\"create_apply\":" + row.createApply +
                    ",\"kind\":" + json(row.kind) +
                    ",\"entry_address\":" + json(addr(row.entry)) +
                    ",\"target_address\":" + json(row.target == null ? "" : addr(row.target)) +
                    ",\"current_symbol\":" + json(row.currentSymbol) +
                    ",\"proposed_name\":" + json(row.proposedName) +
                    ",\"entry_bytes\":" + json(row.entryBytes) +
                    ",\"inbound_call_refs\":" + row.callReferences +
                    ",\"inbound_jump_refs\":" + row.jumpReferences +
                    ",\"inbound_data_refs\":" + row.dataReferences +
                    ",\"raw_pointer_sources\":" + jsonArray(row.rawPointerSources) +
                    ",\"via_thunks\":" + jsonArray(row.viaThunks) +
                    ",\"anchors\":" + jsonArrayStrings(row.anchors) +
                    ",\"confidence\":" + json(row.confidence) +
                    ",\"reason\":" + json(String.join("; ", row.reasons)) + "}\n");
            }
        }
    }

    private void writeSummary(Path path, List<Candidate> rows) throws Exception {
        Map<String, Long> kinds = new TreeMap<>();
        for (Candidate row : rows) kinds.merge(row.kind, 1L, Long::sum);
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("Program: " + currentProgram.getName() + "\n");
            out.write("Candidates: " + rows.size() + "\n");
            out.write("create_apply: " + rows.stream().filter(row -> row.createApply).count() + "\n");
            out.write("review_only: " + rows.stream().filter(row -> !row.createApply).count() + "\n");
            out.write("orphan_direct_jump_entries_seen: " + orphanJumpEntries + "\n");
            out.write("raw_nonexec_executable_pointer_values: " + rawExecutablePointers + "\n");
            out.write("raw_nonexec_direct_jump_pointer_values: " + rawJumpPointers + "\n");
            for (Map.Entry<String, Long> entry : kinds.entrySet())
                out.write(entry.getKey() + ": " + entry.getValue() + "\n");
            out.write("\nSafety boundary:\n");
            out.write("  create_apply=1 requires an exact referenced direct-JMP chain.\n");
            out.write("  Raw direct targets, MSVC EH filters/funclets, jump-only tails, and\n");
            out.write("  merely plausible instruction bytes remain review-only.\n");
        }
    }

    private Path programDirectory(File selected) {
        Path path = selected.toPath().toAbsolutePath().normalize();
        String program = safe(currentProgram.getName());
        Path leaf = path.getFileName();
        return leaf != null && leaf.toString().equals(program) ? path : path.resolve(program);
    }

    private File outputDirectory() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException("Recovery output directory is required");
        return askDirectory("Select recovery output directory", "Analyze");
    }

    private static int littleEndianInt(byte[] bytes, int index) {
        return (bytes[index] & 0xff) | ((bytes[index + 1] & 0xff) << 8) |
            ((bytes[index + 2] & 0xff) << 16) | (bytes[index + 3] << 24);
    }

    private static String addresses(Iterable<Address> values) {
        List<String> result = new ArrayList<>();
        for (Address value : values) result.add(addr(value));
        return String.join(" | ", result);
    }

    private static String jsonArray(Iterable<Address> values) {
        List<String> result = new ArrayList<>();
        for (Address value : values) result.add(json(addr(value)));
        return "[" + String.join(",", result) + "]";
    }

    private static String jsonArrayStrings(Iterable<String> values) {
        List<String> result = new ArrayList<>();
        for (String value : values) result.add(json(value));
        return "[" + String.join(",", result) + "]";
    }

    private static String json(String value) {
        if (value == null) return "null";
        StringBuilder result = new StringBuilder("\"");
        for (int index = 0; index < value.length(); index++) {
            char c = value.charAt(index);
            switch (c) {
                case '\\' -> result.append("\\\\");
                case '"' -> result.append("\\\"");
                case '\n' -> result.append("\\n");
                case '\r' -> result.append("\\r");
                case '\t' -> result.append("\\t");
                default -> {
                    if (c < 0x20) result.append(String.format("\\u%04x", (int)c));
                    else result.append(c);
                }
            }
        }
        return result.append('"').toString();
    }

    private static String tsv(String value) {
        return value == null ? "" : value.replace('\t', ' ').replace('\r', ' ')
            .replace('\n', ' ');
    }

    private static String safe(String value) {
        String result = value.replaceAll("[^A-Za-z0-9._-]+", "_");
        return result.isBlank() ? "program" : result;
    }

    private static String addr(Address address) {
        return address == null ? "" : address.toString().toUpperCase(Locale.ROOT);
    }

    private static class Candidate {
        final Address entry;
        String kind = "data_referenced_code";
        Address target;
        boolean createApply;
        String currentSymbol = "", proposedName = "", entryBytes = "";
        String instructionState = "", confidence = "review";
        int callReferences, jumpReferences, dataReferences, entryReferences;
        final Set<Address> rawPointerSources = new TreeSet<>();
        final Set<Address> viaThunks = new TreeSet<>();
        final Set<String> anchors = new TreeSet<>();
        final Set<String> reasons = new TreeSet<>();
        Candidate(Address entry) { this.entry = entry; }
    }

    private static class Evidence {
        int callReferences, jumpReferences, dataReferences, entryReferences;
        final Set<Address> rawPointerSources = new TreeSet<>();
        final Set<String> anchors = new TreeSet<>();
    }

    private record DirectJump(Address target, int length, boolean disassembled) { }
}
