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
import java.util.HashSet;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Set;
import java.util.TreeMap;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.Undefined;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.Symbol;

public class STGlobalAggregateAnalyzer extends GhidraScript {
    private static final Pattern SIB = Pattern.compile(
        "(?i)\\b(?:EAX|EBX|ECX|EDX|ESI|EDI)\\s*\\*\\s*(0x[0-9a-f]+|[0-9]+)\\b");
    private static final Pattern SHIFT = Pattern.compile(
        "(?i)^SHL\\s+(EAX|EBX|ECX|EDX|ESI|EDI)\\s*,\\s*(0x[0-9a-f]+|[0-9]+)$");
    private static final Pattern IMMEDIATE_MULTIPLY = Pattern.compile(
        "(?i)^IMUL\\s+(EAX|EBX|ECX|EDX|ESI|EDI)(?:\\s*,\\s*" +
        "(?:EAX|EBX|ECX|EDX|ESI|EDI))?\\s*,\\s*(0x[0-9a-f]+|[0-9]+)$");
    private static final Pattern REGISTER_MOVE = Pattern.compile(
        "(?i)^MOV\\s+(EAX|EBX|ECX|EDX|ESI|EDI)\\s*,\\s*" +
        "(EAX|EBX|ECX|EDX|ESI|EDI)$");
    private static final Pattern DESTINATION_REGISTER = Pattern.compile(
        "(?i)^[A-Z]+\\s+(EAX|EBX|ECX|EDX|ESI|EDI)(?:\\s*,|$)");
    private final Map<Address, Evidence> indexed = new TreeMap<>();

    @Override
    protected void run() throws Exception {
        // Read-only script: do not leave GhidraScript's implicit transaction around runScript().
        end(true);
        if (currentProgram == null) { printerr("Open the analyzed ST program first."); return; }
        File selected = outputDirectory(); if (selected == null) return;
        Path directory = programDirectory(selected); Files.createDirectories(directory);
        scanIndexedGlobals();
        List<Row> rows = new ArrayList<>();
        rows.add(playerRelationMatrix());
        rows.addAll(resourceStringBuffers());
        Set<Address> claimedRecordFields = new HashSet<>();
        rows.addAll(constantRecordTables(claimedRecordFields));
        Map<Integer, Integer> centeredNames = new HashMap<>();
        for (Map.Entry<Address, Evidence> entry : indexed.entrySet()) {
            if (entry.getValue().sites.size() < 3 || entry.getKey().getOffset() == 0x00808a4fL)
                continue;
            if (claimedRecordFields.contains(entry.getKey())) continue;
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

    /**
     * Recognize a Win32 resource-string scratch arena from behavior rather than
     * fixed addresses: an internal wrapper calls LoadStringA, forms a destination
     * from one global base plus one read/write cursor, passes a fixed chunk limit,
     * and bounds the cursor against a larger capacity.
     */
    private List<Row> resourceStringBuffers() throws Exception {
        List<Row> result = new ArrayList<>();
        Set<Address> emitted = new HashSet<>();
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            monitor.checkCancelled();
            Function function = functions.next();
            if (function.isExternal() || function.isThunk() ||
                    !callsNamed(function, "LoadStringA")) continue;
            Map<Address, Usage> globals = new TreeMap<>();
            Set<Address> leaBases = new HashSet<>();
            List<Long> pushedLimits = new ArrayList<>();
            List<Long> comparedBounds = new ArrayList<>();
            InstructionIterator instructions = currentProgram.getListing()
                .getInstructions(function.getBody(), true);
            while (instructions.hasNext()) {
                Instruction instruction = instructions.next();
                String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
                String text = instruction.toString().toUpperCase(Locale.ROOT);
                Long immediate = trailingImmediate(text);
                if ("PUSH".equals(mnemonic) && immediate != null &&
                        immediate >= 0x100 && immediate <= 0x100000)
                    pushedLimits.add(immediate);
                if ("CMP".equals(mnemonic) && immediate != null &&
                        immediate >= 0x100 && immediate <= 0x1000000)
                    comparedBounds.add(immediate);
                for (Reference reference : instruction.getReferencesFrom()) {
                    Address target = reference.getToAddress();
                    if (!reference.isMemoryReference() || target == null ||
                            !currentProgram.getMemory().contains(target)) continue;
                    Data data = currentProgram.getListing().getDefinedDataAt(target);
                    Symbol symbol = currentProgram.getSymbolTable().getPrimarySymbol(target);
                    if (data == null || symbol == null || data.hasStringValue()) continue;
                    Usage usage = globals.computeIfAbsent(target, ignored -> new Usage());
                    boolean write = reference.getOperandIndex() == 0 &&
                        !Set.of("CMP", "TEST", "PUSH", "CALL", "JMP", "LEA")
                            .contains(mnemonic);
                    if (write) usage.writes++; else usage.reads++;
                    if ("LEA".equals(mnemonic)) leaBases.add(target);
                }
            }
            long chunk = pushedLimits.stream().mapToLong(Long::longValue).max().orElse(0);
            long capacity = comparedBounds.stream().mapToLong(Long::longValue)
                .filter(value -> value > chunk).min().orElse(0);
            if (chunk < 0x100 || capacity <= chunk || capacity > 0x100000) continue;
            List<Address> bases = leaBases.stream().filter(address -> {
                Symbol symbol = currentProgram.getSymbolTable().getPrimarySymbol(address);
                return symbol != null && resourceCandidate(symbol.getName(), true);
            }).sorted().toList();
            List<Address> cursors = globals.entrySet().stream().filter(entry -> {
                Data data = currentProgram.getListing().getDefinedDataAt(entry.getKey());
                Symbol symbol = currentProgram.getSymbolTable().getPrimarySymbol(entry.getKey());
                return data != null && data.getLength() == 4 && symbol != null &&
                    resourceCandidate(symbol.getName(), false) &&
                    entry.getValue().reads >= 2 && entry.getValue().writes >= 1;
            }).map(Map.Entry::getKey).sorted().toList();
            if (bases.size() != 1 || cursors.size() != 1) continue;
            Address base = bases.get(0), cursor = cursors.get(0);
            if (base.equals(cursor) || !currentProgram.getMemory()
                    .contains(base.add(capacity - 1))) continue;
            Data baseData = currentProgram.getListing().getDefinedDataAt(base);
            Data cursorData = currentProgram.getListing().getDefinedDataAt(cursor);
            Symbol baseSymbol = currentProgram.getSymbolTable().getPrimarySymbol(base);
            Symbol cursorSymbol = currentProgram.getSymbolTable().getPrimarySymbol(cursor);
            if (baseData == null || cursorData == null ||
                    baseSymbol == null || cursorSymbol == null) continue;
            String evidence = function.getName(true) + " calls LoadStringA with chunk=" +
                hex(chunk) + "; cursor bound=" + hex(capacity) +
                "; destination is global_base+read_write_cursor";
            if (emitted.add(base))
                result.add(new Row(true, addr(base), baseSymbol.getName(),
                    baseSymbol.getSource().toString(), baseData.getDataType().getPathName(),
                    baseData.getLength(), "g_resourceStringBuffer",
                    "array:" + capacity + ":/char", (int)capacity,
                    "win32_resource_string_buffer", "high", evidence));
            if (emitted.add(cursor))
                result.add(new Row(true, addr(cursor), cursorSymbol.getName(),
                    cursorSymbol.getSource().toString(), cursorData.getDataType().getPathName(),
                    cursorData.getLength(), "g_resourceStringBufferOffset", "/uint", 4,
                    "win32_resource_string_cursor", "high", evidence));
        }
        return result;
    }

    private boolean callsNamed(Function containing, String name) {
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(containing.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            if (!"CALL".equalsIgnoreCase(instruction.getMnemonicString())) continue;
            for (Address flow : instruction.getFlows()) {
                Function called = currentProgram.getFunctionManager().getFunctionAt(flow);
                Set<Address> seen = new HashSet<>();
                while (called != null && called.isThunk() &&
                        seen.add(called.getEntryPoint())) {
                    Function target = called.getThunkedFunction(false);
                    if (target == null || target.equals(called)) break;
                    called = target;
                }
                if (called != null && called.getName().equalsIgnoreCase(name)) return true;
            }
        }
        return false;
    }

    private Long trailingImmediate(String instruction) {
        Matcher matcher = Pattern.compile("(?i)(?:^|[, ])(-?0x[0-9a-f]+|-?[0-9]+)$")
            .matcher(instruction.trim());
        if (!matcher.find()) return null;
        try { return Long.decode(matcher.group(1)); }
        catch (NumberFormatException ignored) { return null; }
    }

    private boolean resourceCandidate(String name, boolean buffer) {
        if (synthetic(name)) return true;
        return buffer ? "g_resourceStringBuffer".equals(name) :
            "g_resourceStringBufferOffset".equals(name);
    }

    private String hex(long value) { return String.format("0x%X", value); }

    private void scanIndexedGlobals() throws Exception {
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            monitor.checkCancelled();
            Function function = functions.next();
            if (function.isExternal() || function.isThunk()) continue;
            Map<String, Integer> derivedScales = new HashMap<>();
            InstructionIterator instructions = currentProgram.getListing()
                .getInstructions(function.getBody(), true);
            while (instructions.hasNext()) {
                Instruction instruction = instructions.next();
                String text = instruction.toString();
                String upper = text.toUpperCase(Locale.ROOT);
                Set<Integer> scales = new HashSet<>();
                Matcher matcher = SIB.matcher(instruction.toString());
                while (matcher.find()) {
                    int scale = integer(matcher.group(1));
                    if (powerOfTwoScale(scale)) scales.add(scale);
                }
                if (upper.indexOf('[') >= 0)
                    for (Map.Entry<String, Integer> derived : derivedScales.entrySet())
                        if (memoryUsesRegister(upper, derived.getKey()))
                            scales.add(derived.getValue());
                for (int scale : scales)
                    recordIndexedReferences(function, instruction, scale);
                updateDerivedScales(instruction, upper, derivedScales);
            }
        }
    }

    /**
     * x86 frequently materializes a record stride in a register first:
     * SHL ECX,4; MOV EAX,[ECX+global].  There is no SIB scale in the final
     * load, so a text-only SIB scan misses the whole table.
     */
    private void updateDerivedScales(Instruction instruction, String text,
            Map<String, Integer> scales) {
        Matcher shift = SHIFT.matcher(text);
        if (shift.matches()) {
            int amount = integer(shift.group(2));
            if (amount >= 0 && amount <= 8) scales.put(shift.group(1), 1 << amount);
            else scales.remove(shift.group(1));
            return;
        }
        Matcher multiply = IMMEDIATE_MULTIPLY.matcher(text);
        if (multiply.matches()) {
            int scale = integer(multiply.group(2));
            if (powerOfTwoScale(scale)) scales.put(multiply.group(1), scale);
            else scales.remove(multiply.group(1));
            return;
        }
        Matcher move = REGISTER_MOVE.matcher(text);
        if (move.matches()) {
            Integer scale = scales.get(move.group(2));
            if (scale == null) scales.remove(move.group(1));
            else scales.put(move.group(1), scale);
            return;
        }
        Matcher destination = DESTINATION_REGISTER.matcher(text);
        if (destination.find() && !Set.of("CMP", "TEST", "PUSH")
                .contains(instruction.getMnemonicString().toUpperCase(Locale.ROOT)))
            scales.remove(destination.group(1));
        if ("CALL".equalsIgnoreCase(instruction.getMnemonicString()) ||
                instruction.getFlowType().isTerminal() ||
                instruction.getFlowType().isJump())
            scales.clear();
    }

    private boolean memoryUsesRegister(String instruction, String register) {
        int open = instruction.indexOf('['), close = instruction.lastIndexOf(']');
        if (open < 0 || close <= open) return false;
        String memory = instruction.substring(open + 1, close);
        return Pattern.compile("(?i)(?:^|[^A-Z0-9_])" + Pattern.quote(register) +
            "(?:$|[^A-Z0-9_])").matcher(memory).find();
    }

    private boolean powerOfTwoScale(int value) {
        return value >= 2 && value <= 0x100 && (value & value - 1) == 0;
    }

    private int integer(String text) {
        try { return Integer.decode(text); }
        catch (NumberFormatException ignored) { return -1; }
    }

    private void recordIndexedReferences(Function function, Instruction instruction, int scale) {
        String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
        for (Reference reference : instruction.getReferencesFrom()) {
            if (!reference.isMemoryReference()) continue;
            Address target = reference.getToAddress();
            if (target == null || !currentProgram.getMemory().contains(target)) continue;
            Symbol symbol = currentProgram.getSymbolTable().getPrimarySymbol(target);
            if (symbol == null || !synthetic(symbol.getName())) continue;
            Evidence evidence = indexed.computeIfAbsent(target, ignored -> new Evidence());
            evidence.scales.merge(scale, 1, Integer::sum);
            boolean write = reference.getOperandIndex() == 0 &&
                !Set.of("CMP", "TEST", "PUSH", "CALL", "JMP", "LEA")
                    .contains(mnemonic);
            if (write) evidence.writes++; else evidence.reads++;
            String site = addr(function.getEntryPoint()) + "@" +
                addr(instruction.getAddress()) + " " + instruction;
            if (evidence.sites.size() < 40 && !evidence.sites.contains(site))
                evidence.sites.add(site);
        }
    }

    /**
     * Recover constant arrays of records when every dword field is repeatedly
     * addressed through the same derived stride and two zero records provide an
     * exact terminator/padding boundary.  This is deliberately structural: the
     * generic form is useful for other binaries, while the monotone
     * distance/percentage shape earns semantic sound-profile member names.
     */
    private List<Row> constantRecordTables(Set<Address> claimed) throws Exception {
        List<Row> result = new ArrayList<>();
        Set<String> emitted = new HashSet<>();
        for (Map.Entry<Address, Evidence> entry : indexed.entrySet()) {
            Address base = entry.getKey();
            for (int stride : new TreeMap<>(entry.getValue().scales).keySet()) {
                if (stride < 8 || stride > 0x40 || stride % 4 != 0) continue;
                String key = addr(base) + ":" + stride;
                if (!emitted.add(key)) continue;
                int fieldCount = stride / 4;
                List<Evidence> fields = new ArrayList<>();
                boolean complete = true;
                for (int field = 0; field < fieldCount; field++) {
                    Address fieldAddress = base.add((long)field * 4);
                    Evidence fieldEvidence = indexed.get(fieldAddress);
                    Data data = currentProgram.getListing().getDefinedDataAt(fieldAddress);
                    Symbol symbol = currentProgram.getSymbolTable()
                        .getPrimarySymbol(fieldAddress);
                    if (fieldEvidence == null ||
                            fieldEvidence.scales.getOrDefault(stride, 0) < 2 ||
                            fieldEvidence.writes != 0 || data == null ||
                            data.getLength() != 4 ||
                            !Undefined.isUndefined(data.getDataType()) ||
                            symbol == null || !synthetic(symbol.getName())) {
                        complete = false; break;
                    }
                    fields.add(fieldEvidence);
                }
                if (!complete) continue;
                int records = nonZeroRecordsBeforePadding(base, stride);
                if (records < 2) continue;
                int totalSites = fields.stream().mapToInt(value -> value.sites.size()).sum();
                if (totalSites < fieldCount * 3) continue;
                boolean soundProfile = soundDistanceProfile(base, records, fieldCount);
                String recordName = soundProfile ? "SoundDistanceProfile" :
                    "ConstantRecord_" + addr(base);
                String globalName = soundProfile ? "g_soundDistanceProfiles" :
                    "g_constantRecords_" + addr(base);
                String path = "/SubmarineTitans/Recovered/GlobalAggregates/" + recordName;
                String fieldSpec = recordFields(fieldCount, soundProfile);
                String recordSpec = "record:" + path + "{" + fieldSpec + "}";
                Data data = currentProgram.getListing().getDefinedDataAt(base);
                Symbol symbol = currentProgram.getSymbolTable().getPrimarySymbol(base);
                String values = recordValues(base, records, fieldCount);
                result.add(new Row(true, addr(base), symbol.getName(),
                    symbol.getSource().toString(), data.getDataType().getPathName(),
                    data.getLength(), globalName, "array:" + records + ":" + recordSpec,
                    records * stride, soundProfile ? "sound_distance_profiles" :
                    "constant_record_table", "high",
                    "derived x86 record stride=" + hex(stride) + "; fields=" +
                    fieldCount + "; read sites=" + totalSites +
                    "; no writes; exact boundary is two zero records; values=" + values));
                for (int field = 0; field < fieldCount; field++)
                    claimed.add(base.add((long)field * 4));
            }
        }
        return result;
    }

    private int nonZeroRecordsBeforePadding(Address base, int stride) {
        try {
            int count = 0;
            for (; count < 64; count++) {
                Address row = base.add((long)count * stride);
                if (zeroRecord(row, stride)) {
                    if (zeroRecord(row.add(stride), stride)) return count;
                    return 0;
                }
            }
        }
        catch (Exception ignored) {}
        return 0;
    }

    private boolean zeroRecord(Address address, int stride) throws Exception {
        if (!currentProgram.getMemory().contains(address) ||
                !currentProgram.getMemory().contains(address.add(stride - 1))) return false;
        for (int offset = 0; offset < stride; offset += 4)
            if (currentProgram.getMemory().getInt(address.add(offset)) != 0) return false;
        return true;
    }

    private boolean soundDistanceProfile(Address base, int records, int fields) {
        if (fields != 4 || records < 3 || records > 8) return false;
        try {
            int[] previous = null;
            for (int row = 0; row < records; row++) {
                int[] value = new int[4];
                for (int field = 0; field < 4; field++)
                    value[field] = currentProgram.getMemory().getInt(
                        base.add((long)row * 16 + field * 4));
                if (!(value[0] > value[1] && value[1] > value[2] &&
                        value[2] > 0 && value[3] > 0 && value[3] <= 100))
                    return false;
                if (previous != null && !(value[0] >= previous[0] &&
                        value[1] >= previous[1] && value[2] >= previous[2] &&
                        value[3] <= previous[3])) return false;
                previous = value;
            }
            return true;
        }
        catch (Exception ignored) { return false; }
    }

    private String recordFields(int count, boolean soundProfile) {
        String[] sound = {"maxDistance", "farDistance", "nearDistance", "volumePercent"};
        List<String> result = new ArrayList<>();
        for (int field = 0; field < count; field++)
            result.add((field * 4) + "," +
                (soundProfile ? sound[field] : String.format("value_%02X", field * 4)) +
                ",/int");
        return String.join("|", result);
    }

    private String recordValues(Address base, int records, int fields) {
        List<String> rows = new ArrayList<>();
        try {
            for (int row = 0; row < records; row++) {
                List<String> values = new ArrayList<>();
                for (int field = 0; field < fields; field++)
                    values.add(Integer.toString(currentProgram.getMemory().getInt(
                        base.add((long)row * fields * 4 + field * 4))));
                rows.add("{" + String.join(",", values) + "}");
            }
        }
        catch (Exception ignored) { return "<unreadable>"; }
        return String.join(",", rows);
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
        int reads, writes;
    }
    private static class Usage { int reads, writes; }
    private record Row(boolean apply, String address, String expectedName,
        String expectedNameSource, String expectedType, int expectedLength,
        String proposedName, String proposedType, int proposedLength, String id,
        String confidence, String evidence) {}
}
