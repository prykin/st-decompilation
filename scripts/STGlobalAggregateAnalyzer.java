// Recover global arrays/matrices that are still represented by overlapping DAT labels.
// Read-only: writes global_aggregate_proposals.tsv and a SIB-index candidate audit.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Analyze Global Aggregates

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.HashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.TreeMap;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.Symbol;

public class STGlobalAggregateAnalyzer extends GhidraScript {
    private static final Pattern SIB = Pattern.compile(
        "(?i)\\b(?:EAX|EBX|ECX|EDX|ESI|EDI)\\s*\\*\\s*(?:0x)?(2|4|8)\\b");
    private final Map<Address, Evidence> indexed = new TreeMap<>();

    @Override
    protected void run() throws Exception {
        if (currentProgram == null) { printerr("Open the analyzed ST program first."); return; }
        File selected = outputDirectory(); if (selected == null) return;
        Path directory = programDirectory(selected); Files.createDirectories(directory);
        scanIndexedGlobals();
        List<Row> rows = new ArrayList<>();
        rows.add(playerRelationMatrix());
        Map<Integer, Integer> centeredNames = new HashMap<>();
        for (Map.Entry<Address, Evidence> entry : indexed.entrySet()) {
            if (entry.getValue().sites.size() < 3 || entry.getKey().getOffset() == 0x00808a4fL)
                continue;
            Data data = currentProgram.getListing().getDefinedDataAt(entry.getKey());
            Symbol symbol = currentProgram.getSymbolTable().getPrimarySymbol(entry.getKey());
            if (data == null || symbol == null) continue;
            int centeredCount = centeredOffsetCount(entry.getKey());
            if (centeredCount > 0 && entry.getValue().scales.keySet().equals(
                    java.util.Set.of(4))) {
                int ordinal = centeredNames.merge(centeredCount, 1, Integer::sum);
                String proposedName = "g_centeredOffsets" + centeredCount +
                    (ordinal == 1 ? "" : "_" + addr(entry.getKey()));
                rows.add(new Row(true, addr(entry.getKey()), symbol.getName(),
                    symbol.getSource().toString(), data.getDataType().getPathName(),
                    data.getLength(), proposedName, "array:" + centeredCount + ":/int",
                    centeredCount * 4, "centered_offset_lookup", "high",
                    "dword SIB lookup; exact centered sequence " +
                    centeredSequence(centeredCount) + "; indexed sites=" +
                    entry.getValue().sites.size()));
                continue;
            }
            rows.add(new Row(false, addr(entry.getKey()), symbol.getName(),
                symbol.getSource().toString(), data.getDataType().getPathName(), data.getLength(),
                "", "", 0, "indexed_global_candidate", "review",
                "SIB scales=" + entry.getValue().scales + "; sites=" +
                    String.join(" | ", entry.getValue().sites.stream().limit(12).toList())));
        }
        rows.sort(Comparator.comparing(row -> row.address));
        writeTsv(directory.resolve("global_aggregate_proposals.tsv"), rows);
        writeSummary(directory.resolve("global_aggregate_summary.txt"), rows);
        println("Global-aggregate analysis complete: " + directory.toAbsolutePath().normalize());
        println("Indexed candidates=" + indexed.size() + ", proposals=" + rows.size() +
            ", apply=" + rows.stream().filter(row -> row.apply).count());
    }

    private void scanIndexedGlobals() throws Exception {
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            monitor.checkCancelled();
            Function function = functions.next();
            if (function.isExternal() || function.isThunk()) continue;
            InstructionIterator instructions = currentProgram.getListing()
                .getInstructions(function.getBody(), true);
            while (instructions.hasNext()) {
                Instruction instruction = instructions.next();
                Matcher matcher = SIB.matcher(instruction.toString());
                if (!matcher.find()) continue;
                int scale = Integer.parseInt(matcher.group(1));
                for (Reference reference : instruction.getReferencesFrom()) {
                    if (!reference.isMemoryReference()) continue;
                    Address target = reference.getToAddress();
                    if (target == null || !currentProgram.getMemory().contains(target)) continue;
                    Symbol symbol = currentProgram.getSymbolTable().getPrimarySymbol(target);
                    if (symbol == null || !synthetic(symbol.getName())) continue;
                    Evidence evidence = indexed.computeIfAbsent(target, ignored -> new Evidence());
                    evidence.scales.merge(scale, 1, Integer::sum);
                    if (evidence.sites.size() < 40)
                        evidence.sites.add(addr(function.getEntryPoint()) + "@" +
                            addr(instruction.getAddress()) + " " + instruction);
                }
            }
        }
    }

    /** Recognize compiler-emitted {-n..n} neighbourhood lookup tables. */
    private int centeredOffsetCount(Address base) {
        try {
            int radius = currentProgram.getMemory().getInt(base);
            if (radius < 1 || radius > 64) return 0;
            int count = radius * 2 + 1;
            if (!currentProgram.getMemory().contains(base.add((long)count * 4 - 1))) return 0;
            for (int index = 0; index < count; index++)
                if (currentProgram.getMemory().getInt(base.add((long)index * 4)) != radius - index)
                    return 0;
            return count;
        }
        catch (Exception ignored) { return 0; }
    }

    private String centeredSequence(int count) {
        int radius = count / 2;
        return "{" + radius + "..0.." + (-radius) + "}";
    }

    private Row playerRelationMatrix() {
        Address base = address(0x00808a4fL);
        Address end = address(0x00808a8fL);
        Data data = currentProgram.getListing().getDefinedDataAt(base);
        Symbol symbol = currentProgram.getSymbolTable().getPrimarySymbol(base);
        Symbol next = currentProgram.getSymbolTable().getPrimarySymbol(end);
        Evidence evidence = indexed.get(base);
        boolean verified = data != null && symbol != null && next != null &&
            currentProgram.getMemory().contains(base.add(63)) &&
            evidence != null && evidence.sites.size() >= 3;
        String reason = "64-byte range ends at next primary symbol " +
            (next == null ? "<missing>" : next.getName()) +
            "; x86 uses player*8+player indexing; indexed sites=" +
            (evidence == null ? 0 : evidence.sites.size());
        return new Row(verified, addr(base), symbol == null ? "" : symbol.getName(),
            symbol == null ? "" : symbol.getSource().toString(),
            data == null ? "" : data.getDataType().getPathName(), data == null ? 0 : data.getLength(),
            "g_playerRelationMatrix", "array:8:array:8:/byte", 64,
            "player_relation_matrix", verified ? "high" : "review", reason);
    }

    private void writeTsv(Path path, List<Row> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\taddress\texpected_name\texpected_name_source\texpected_type\t" +
                "expected_length\tproposed_name\tproposed_type\tproposed_length\taggregate_id\t" +
                "confidence\tevidence\n");
            for (Row row : rows) out.write((row.apply ? "1" : "0") + "\t" + row.address +
                "\t" + row.expectedName + "\t" + row.expectedNameSource + "\t" +
                row.expectedType + "\t" + row.expectedLength + "\t" + row.proposedName +
                "\t" + row.proposedType + "\t" + row.proposedLength + "\t" + row.id +
                "\t" + row.confidence + "\t" + clean(row.evidence) + "\n");
        }
    }

    private void writeSummary(Path path, List<Row> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("ST global aggregate recovery\n\n");
            out.write("Indexed synthetic bases: " + indexed.size() + "\nProposals: " + rows.size() +
                "\nAutomatic: " + rows.stream().filter(row -> row.apply).count() + "\n\n");
            for (Row row : rows) out.write(row.address + " " + row.id + " " + row.confidence +
                " apply=" + (row.apply ? 1 : 0) + " - " + row.evidence + "\n");
        }
    }

    private boolean synthetic(String name) {
        return name != null && name.matches("(?i)_?(?:DAT|PTR|UNK)_[0-9a-f]+");
    }
    private Address address(long offset) {
        return currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(offset);
    }
    private String addr(Address address) { return address.toString().toUpperCase(Locale.ROOT); }
    private File outputDirectory() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless()) throw new IllegalArgumentException("Recovery directory required");
        return askDirectory("Select recovery output directory", "Select");
    }
    private Path programDirectory(File selected) {
        Path root = selected.toPath().toAbsolutePath().normalize();
        return root.getFileName() != null && root.getFileName().toString().equals(currentProgram.getName()) ?
            root : root.resolve(currentProgram.getName());
    }
    private static String clean(String value) {
        return value == null ? "" : value.replace('\t', ' ').replace('\r', ' ').replace('\n', ' ');
    }
    private static class Evidence {
        final Map<Integer, Integer> scales = new HashMap<>();
        final List<String> sites = new ArrayList<>();
    }
    private record Row(boolean apply, String address, String expectedName,
        String expectedNameSource, String expectedType, int expectedLength,
        String proposedName, String proposedType, int proposedLength, String id,
        String confidence, String evidence) {}
}
