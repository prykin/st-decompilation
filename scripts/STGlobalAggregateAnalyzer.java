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
import java.util.TreeSet;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.Undefined;
import ghidra.program.model.listing.CommentType;
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
    private static final Pattern REGISTER_LEA = Pattern.compile(
        "(?i)^LEA\\s+(EAX|EBX|ECX|EDX|ESI|EDI)\\s*,\\s*(\\[.*\\])$");
    private static final Pattern SAME_REGISTER_ADD = Pattern.compile(
        "(?i)^ADD\\s+(EAX|EBX|ECX|EDX|ESI|EDI)\\s*,\\s*\\1$");
    private static final Pattern REGISTER_TERM = Pattern.compile(
        "(?i)\\b(EAX|EBX|ECX|EDX|ESI|EDI)\\b(?:\\s*\\*\\s*" +
        "(0x[0-9a-f]+|[0-9]+))?");
    private static final Pattern IMMEDIATE_REGISTER_MOVE = Pattern.compile(
        "(?i)^MOV\\s+(EAX|ECX|EDI)\\s*,\\s*(0x[0-9a-f]+|[0-9]+)$");
    private static final Pattern DESTINATION_REGISTER = Pattern.compile(
        "(?i)^[A-Z]+\\s+(EAX|EBX|ECX|EDX|ESI|EDI)(?:\\s*,|$)");
    private final Map<Address, Evidence> indexed = new TreeMap<>();
    private final Map<String, InitRange> zeroInitializedRanges = new TreeMap<>();

    @Override
    protected void run() throws Exception {
        // Read-only script: do not leave GhidraScript's implicit transaction around runScript().
        end(true);
        if (currentProgram == null) { printerr("Open the analyzed ST program first."); return; }
        File selected = outputDirectory(); if (selected == null) return;
        Path directory = programDirectory(selected); Files.createDirectories(directory);
        scanIndexedGlobals();
        scanBulkZeroInitialization();
        List<Row> rows = new ArrayList<>();
        rows.addAll(resourceStringBuffers());
        Set<Address> claimedRecordFields = new HashSet<>();
        rows.addAll(bulkInitializedRecordArrays(claimedRecordFields));
        rows.addAll(squareByteMatrices(claimedRecordFields));
        rows.addAll(constantRecordTables(claimedRecordFields));
        Map<Integer, Integer> centeredNames = new HashMap<>();
        for (Map.Entry<Address, Evidence> entry : indexed.entrySet()) {
            if (entry.getValue().sites.size() < 3)
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
                    if (data == null || symbol == null) continue;
                    // A zero-initialized writable char arena is commonly imported by
                    // Ghidra as the one-byte empty string at its base.  It is still the
                    // behavioral LEA destination for LoadStringA and must participate as
                    // a base candidate; string-valued data is never eligible for the
                    // read/write cursor role below.
                    if (data.hasStringValue()) {
                        if ("LEA".equals(mnemonic)) leaBases.add(target);
                        continue;
                    }
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
                if (upper.indexOf('[') >= 0) {
                    for (Map.Entry<String, Integer> derived : derivedScales.entrySet())
                        if (memoryUsesRegister(upper, derived.getKey()))
                            scales.add(derived.getValue());
                    int effective = affineMemoryScale(upper, derivedScales);
                    if (effective >= 2) scales.add(effective);
                }
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
            int prior = scales.getOrDefault(shift.group(1), 1);
            if (amount >= 0 && amount <= 8 && prior <= (0x1000 >> amount))
                scales.put(shift.group(1), prior << amount);
            else scales.remove(shift.group(1));
            return;
        }
        Matcher multiply = IMMEDIATE_MULTIPLY.matcher(text);
        if (multiply.matches()) {
            int scale = integer(multiply.group(2));
            int prior = scales.getOrDefault(multiply.group(1), 1);
            if (scale >= 2 && scale <= 0x1000 && prior <= 0x1000 / scale)
                scales.put(multiply.group(1), prior * scale);
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
        Matcher lea = REGISTER_LEA.matcher(text);
        if (lea.matches()) {
            int scale = affineExpressionScale(lea.group(2), scales);
            if (scale >= 2) scales.put(lea.group(1), scale);
            else scales.remove(lea.group(1));
            return;
        }
        Matcher add = SAME_REGISTER_ADD.matcher(text);
        if (add.matches()) {
            int prior = scales.getOrDefault(add.group(1), 1);
            if (prior <= 0x800) scales.put(add.group(1), prior * 2);
            else scales.remove(add.group(1));
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

    /**
     * Recover the composed coefficient of one logical index.  MSVC commonly
     * emits `lea r,[i+i*8]` followed by `[r+r*8+global]`; the visible SIB scale
     * is eight, but the actual record stride is 9*9=81.  Only expressions whose
     * register terms all derive from one register identity are accepted.
     */
    private int affineMemoryScale(String instruction, Map<String, Integer> scales) {
        int open = instruction.indexOf('['), close = instruction.lastIndexOf(']');
        if (open < 0 || close <= open) return -1;
        return affineExpressionScale(instruction.substring(open, close + 1), scales);
    }

    private int affineExpressionScale(String expression, Map<String, Integer> scales) {
        Matcher matcher = REGISTER_TERM.matcher(expression);
        String identity = null;
        int coefficient = 0;
        while (matcher.find()) {
            String register = matcher.group(1).toUpperCase(Locale.ROOT);
            int baseScale = scales.getOrDefault(register, 1);
            String termText = matcher.group(2);
            int termScale = termText == null ? 1 : integer(termText);
            if (termScale < 1 || baseScale < 1 || baseScale > 0x1000 / termScale)
                return -1;
            // A derived register is its own affine identity for this bounded
            // local analysis. Distinct machine registers in one expression are
            // deliberately rejected; those remain ordinary SIB/matrix evidence.
            String currentIdentity = scales.containsKey(register) ?
                "derived:" + register : register;
            if (identity == null) identity = currentIdentity;
            else if (!identity.equals(currentIdentity)) return -1;
            coefficient += baseScale * termScale;
            if (coefficient > 0x1000) return -1;
        }
        return coefficient >= 2 ? coefficient : -1;
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
        String rendered = instruction.toString().toUpperCase(Locale.ROOT);
        for (Reference reference : instruction.getReferencesFrom()) {
            if (!reference.isMemoryReference()) continue;
            Address target = reference.getToAddress();
            if (target == null || !currentProgram.getMemory().contains(target)) continue;
            Symbol symbol = currentProgram.getSymbolTable().getPrimarySymbol(target);
            boolean generatedAggregate = ownedContaining(target);
            if (!generatedAggregate && (symbol == null || !synthetic(symbol.getName()))) continue;
            Evidence evidence = indexed.computeIfAbsent(target, ignored -> new Evidence());
            evidence.functions.add(function.getEntryPoint());
            evidence.scales.merge(scale, 1, Integer::sum);
            ScaleEvidence scaled = evidence.byScale.computeIfAbsent(scale,
                ignored -> new ScaleEvidence());
            scaled.functions.add(function.getEntryPoint());
            int width = memoryWidth(rendered);
            if (width > 0) {
                evidence.widths.merge(width, 1, Integer::sum);
                scaled.widths.merge(width, 1, Integer::sum);
            }
            String pair = indexPair(rendered, scale);
            if (!pair.isBlank())
                evidence.indexPairs.computeIfAbsent(function.getEntryPoint(),
                    ignored -> new TreeSet<>()).add(pair);
            if ("CMP".equals(mnemonic) && rendered.matches(".*,\\s*(?:0X)?[01]$"))
                evidence.binaryTests++;
            boolean write = reference.getOperandIndex() == 0 &&
                !Set.of("CMP", "TEST", "PUSH", "CALL", "JMP", "LEA")
                    .contains(mnemonic);
            if (write) { evidence.writes++; scaled.writes++; }
            else { evidence.reads++; scaled.reads++; }
            String site = addr(function.getEntryPoint()) + "@" +
                addr(instruction.getAddress()) + " " + instruction;
            if (evidence.sites.size() < 40 && !evidence.sites.contains(site))
                evidence.sites.add(site);
            if (scaled.sites.size() < 40 && !scaled.sites.contains(site))
                scaled.sites.add(site);
        }
    }

    private boolean ownedContaining(Address address) {
        Data data = currentProgram.getListing().getDefinedDataContaining(address);
        return data != null && owned(data.getMinAddress());
    }

    /** Find exact absolute zero-filled ranges emitted through REP STOSD. */
    private void scanBulkZeroInitialization() throws Exception {
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            monitor.checkCancelled();
            Function function = functions.next();
            if (function.isExternal() || function.isThunk()) continue;
            InstructionIterator instructions = currentProgram.getListing()
                .getInstructions(function.getBody(), true);
            while (instructions.hasNext()) {
                Instruction instruction = instructions.next();
                String text = instruction.toString().toUpperCase(Locale.ROOT);
                if (!text.contains("STOSD.REP") && !text.contains("REP STOSD")) continue;
                InitRange found = precedingAbsoluteZeroFill(function, instruction);
                if (found == null) continue;
                String key = addr(found.base) + ":" + found.length;
                InitRange accumulated = zeroInitializedRanges.get(key);
                if (accumulated == null) zeroInitializedRanges.put(key, found);
                else accumulated.sites.addAll(found.sites);
            }
        }
    }

    private InitRange precedingAbsoluteZeroFill(Function function, Instruction stos) {
        Long count = null, destination = null;
        boolean zero = false;
        Set<String> resolved = new HashSet<>();
        Instruction prior = currentProgram.getListing().getInstructionBefore(stos.getAddress());
        for (int scanned = 0; scanned < 12 && prior != null &&
                function.getBody().contains(prior.getAddress()); scanned++) {
            String text = prior.toString().toUpperCase(Locale.ROOT);
            String mnemonic = prior.getMnemonicString().toUpperCase(Locale.ROOT);
            if ("CALL".equals(mnemonic) || mnemonic.startsWith("J") ||
                    prior.getFlowType().isTerminal()) break;
            Matcher destinationRegister = DESTINATION_REGISTER.matcher(text);
            String written = destinationRegister.find() ? destinationRegister.group(1) : "";
            if (!written.isBlank() && !resolved.add(written)) {
                prior = currentProgram.getListing().getInstructionBefore(prior.getAddress());
                continue;
            }
            if ("EAX".equals(written))
                zero = text.matches("(?:XOR|SUB)\\s+EAX\\s*,\\s*EAX") ||
                    text.matches("MOV\\s+EAX\\s*,\\s*(?:0X)?0+");
            else if ("ECX".equals(written)) {
                Matcher immediate = IMMEDIATE_REGISTER_MOVE.matcher(text);
                if (immediate.matches() && "ECX".equals(immediate.group(1)))
                    count = longInteger(immediate.group(2));
            }
            else if ("EDI".equals(written)) {
                Matcher immediate = IMMEDIATE_REGISTER_MOVE.matcher(text);
                if (immediate.matches() && "EDI".equals(immediate.group(1)))
                    destination = longInteger(immediate.group(2));
            }
            if (resolved.containsAll(Set.of("EAX", "ECX", "EDI"))) break;
            prior = currentProgram.getListing().getInstructionBefore(prior.getAddress());
        }
        if (!zero || count == null || destination == null || count < 2 ||
                count > 0x400000L) return null;
        long length = count * 4;
        if (length < 8 || length > 0x1000000L) return null;
        Address base;
        try { base = toAddr(destination); }
        catch (Exception ignored) { return null; }
        if (!currentProgram.getMemory().contains(base) ||
                !currentProgram.getMemory().contains(base.add(length - 1))) return null;
        ghidra.program.model.mem.MemoryBlock block = currentProgram.getMemory().getBlock(base);
        if (block == null || block.isExecute()) return null;
        List<String> sites = new ArrayList<>();
        sites.add(addr(function.getEntryPoint()) + "@" + addr(stos.getAddress()) +
            " zeroes " + hex(length) + " bytes at " + addr(base));
        return new InitRange(base, (int)length, sites);
    }

    private Long longInteger(String text) {
        try { return Long.decode(text); }
        catch (NumberFormatException ignored) { return null; }
    }

    /**
     * Recover a square binary relation table from its complete access contract.
     * The row width N is the x86 SIB scale, both [left+right*N] and its transpose
     * occur in one function, all accesses are bytes, values are tested against
     * zero/one, and the next symbol closes the exact N*N extent. No image address,
     * prior aggregate length, or game-specific semantic name is used.
     */
    private List<Row> squareByteMatrices(Set<Address> claimed) {
        List<MatrixCandidate> candidates = new ArrayList<>();
        for (Map.Entry<Address, Evidence> entry : indexed.entrySet()) {
            Address base = entry.getKey();
            Evidence evidence = entry.getValue();
            for (Map.Entry<Integer, Integer> scaleUse : evidence.scales.entrySet()) {
                int dimension = scaleUse.getKey();
                if (dimension < 2 || dimension > 32 ||
                        scaleUse.getValue() < 4 || evidence.binaryTests < 3 ||
                        evidence.widths.size() != 1 ||
                        !evidence.widths.containsKey(1) ||
                        transposedFunctions(evidence) < 1) continue;
                int length = dimension * dimension;
                Data data = currentProgram.getListing().getDefinedDataAt(base);
                Symbol symbol = currentProgram.getSymbolTable().getPrimarySymbol(base);
                if (data == null || symbol == null) continue;
                Symbol boundary = currentProgram.getSymbolTable()
                    .getPrimarySymbol(base.add(length));
                if (boundary == null) continue;
                candidates.add(new MatrixCandidate(base, evidence, dimension, length,
                    data, symbol, "next primary symbol at exclusive end"));
            }
        }
        candidates.sort(Comparator.comparing(candidate -> candidate.base));
        Map<Integer, Long> counts = new HashMap<>();
        for (MatrixCandidate candidate : candidates)
            counts.merge(candidate.dimension, 1L, Long::sum);
        Map<Integer, Integer> ordinals = new HashMap<>();
        List<Row> result = new ArrayList<>();
        for (MatrixCandidate candidate : candidates) {
            String name = "g_u8SquareMatrix" + candidate.dimension;
            if (counts.getOrDefault(candidate.dimension, 0L) > 1)
                name += "_" + ordinals.merge(
                    candidate.dimension, 1, Integer::sum);
            result.add(new Row(true, addr(candidate.base), candidate.symbol.getName(),
                candidate.symbol.getSource().toString(),
                candidate.data.getDataType().getPathName(), candidate.data.getLength(),
                name, "array:" + candidate.dimension + ":array:" +
                    candidate.dimension + ":/byte", candidate.length,
                "binary_relation_matrix", "high",
                "byte SIB row scale=" + candidate.dimension +
                    "; transposed index functions=" +
                    transposedFunctions(candidate.evidence) +
                    "; binary comparisons=" + candidate.evidence.binaryTests +
                    "; indexed sites=" + candidate.evidence.sites.size() +
                    "; " + candidate.boundaryEvidence));
            claimed.add(candidate.base);
        }
        return result;
    }

    private int transposedFunctions(Evidence evidence) {
        int result = 0;
        for (Set<String> pairs : evidence.indexPairs.values()) {
            boolean transposed = false;
            for (String pair : pairs) {
                int separator = pair.indexOf('>');
                if (separator < 1) continue;
                String reverse = pair.substring(separator + 1) + ">" +
                    pair.substring(0, separator);
                if (pairs.contains(reverse)) { transposed = true; break; }
            }
            if (transposed) result++;
        }
        return result;
    }

    private String indexPair(String instruction, int scale) {
        int open = instruction.indexOf('['), close = instruction.lastIndexOf(']');
        if (open < 0 || close <= open) return "";
        String memory = instruction.substring(open + 1, close);
        Matcher scaled = Pattern.compile("(?i)\\b(EAX|EBX|ECX|EDX|ESI|EDI)\\s*\\*\\s*" +
            "(?:0x)?" + Integer.toHexString(scale) + "\\b").matcher(memory);
        if (!scaled.find()) return "";
        String scaledRegister = scaled.group(1).toUpperCase(Locale.ROOT);
        Matcher registers = Pattern.compile("(?i)\\b(EAX|EBX|ECX|EDX|ESI|EDI)\\b")
            .matcher(memory);
        Set<String> values = new TreeSet<>();
        while (registers.find()) values.add(registers.group(1).toUpperCase(Locale.ROOT));
        values.remove(scaledRegister);
        return values.size() == 1 ? scaledRegister + ">" + values.iterator().next() : "";
    }

    private int memoryWidth(String instruction) {
        if (instruction.contains("QWORD PTR")) return 8;
        if (instruction.contains("DWORD PTR")) return 4;
        if (instruction.contains("WORD PTR")) return 2;
        if (instruction.contains("BYTE PTR")) return 1;
        return -1;
    }

    /**
     * Recover arrays of packed global records from two independent facts: one
     * REP-STOS zero-fill proves the exact base/extent, while composed affine
     * indexing proves the element stride and fixed member offsets.  This avoids
     * address lists and remains valid when the first referenced member is well
     * inside each record rather than at offset zero.
     */
    private List<Row> bulkInitializedRecordArrays(Set<Address> claimed) {
        List<Row> result = new ArrayList<>();
        for (InitRange range : zeroInitializedRanges.values()) {
            RecordArrayCandidate best = null;
            Set<Integer> strides = new TreeSet<>();
            Address end = range.base.add(range.length);
            for (Map.Entry<Address, Evidence> entry : indexed.entrySet()) {
                if (entry.getKey().compareTo(range.base) < 0 ||
                        entry.getKey().compareTo(end) >= 0) continue;
                for (int stride : entry.getValue().scales.keySet())
                    if (stride >= 8 && stride <= 0x1000 &&
                            range.length % stride == 0) strides.add(stride);
            }
            for (int stride : strides) {
                int count = range.length / stride;
                if (count < 2 || count > 64) continue;
                Map<Integer, RecordFieldGroup> grouped = new TreeMap<>();
                Set<Address> functions = new TreeSet<>();
                int sites = 0, reads = 0, writes = 0;
                for (Map.Entry<Address, Evidence> entry : indexed.entrySet()) {
                    long delta = entry.getKey().subtract(range.base);
                    if (delta < 0 || delta >= range.length) continue;
                    ScaleEvidence scaled = entry.getValue().byScale.get(stride);
                    if (scaled == null) continue;
                    int offset = (int)(delta % stride);
                    RecordFieldGroup field = grouped.computeIfAbsent(offset,
                        RecordFieldGroup::new);
                    field.absorb(entry.getKey(), scaled);
                    functions.addAll(scaled.functions);
                    sites += scaled.sites.size();
                    reads += scaled.reads;
                    writes += scaled.writes;
                }
                List<RecordFieldGroup> fields = grouped.values().stream()
                    .filter(field -> field.width() > 0 && field.sites >= 2)
                    .sorted(Comparator.comparingInt(field -> field.offset)).toList();
                if (fields.size() < 3 || functions.size() < 2 || sites < 8 ||
                        reads == 0 || writes == 0 || overlapping(fields, stride)) continue;
                RecordArrayCandidate candidate = new RecordArrayCandidate(range,
                    stride, count, fields, functions, sites, reads, writes);
                if (best == null || candidate.fields.size() > best.fields.size() ||
                        candidate.fields.size() == best.fields.size() &&
                        candidate.sites > best.sites) best = candidate;
            }
            if (best == null) continue;
            Data baseline = currentProgram.getListing().getDefinedDataAt(range.base);
            if (baseline == null)
                baseline = currentProgram.getListing().getDefinedDataContaining(range.base);
            Symbol symbol = currentProgram.getSymbolTable().getPrimarySymbol(range.base);
            Symbol baselineSymbol = baseline == null ? null : currentProgram.getSymbolTable()
                .getPrimarySymbol(baseline.getMinAddress());
            if (baseline == null ||
                    (symbol != null && (symbol.getSource() ==
                        ghidra.program.model.symbol.SourceType.USER_DEFINED ||
                        symbol.getSource() ==
                        ghidra.program.model.symbol.SourceType.IMPORTED)) ||
                    (baselineSymbol != null && (baselineSymbol.getSource() ==
                        ghidra.program.model.symbol.SourceType.USER_DEFINED ||
                        baselineSymbol.getSource() ==
                        ghidra.program.model.symbol.SourceType.IMPORTED)))
                continue;
            String suffix = addr(range.base);
            String typePath = "/SubmarineTitans/Recovered/GlobalAggregates/" +
                "BulkInitializedRecord_" + suffix;
            String record = "record:" + typePath + "@" + best.stride + "{" +
                best.fields.stream().map(this::recordFieldSpec)
                    .reduce((left, right) -> left + "|" + right).orElse("") + "}";
            String evidence = "exact REP-STOS zero range=" + hex(range.length) +
                "; composed affine stride=" + hex(best.stride) +
                "; records=" + best.count + "; fixed fields=" + best.fields.size() +
                "; independent functions=" + best.functions.size() +
                "; indexed sites=" + best.sites + "; reads=" + best.reads +
                "; writes=" + best.writes + "; init sites=" +
                String.join(" | ", range.sites);
            result.add(new Row(true, addr(range.base),
                symbol == null ? "" : symbol.getName(),
                symbol == null ? "" : symbol.getSource().toString(),
                baseline.getDataType().getPathName(),
                baseline.getLength(), "g_bulkInitializedRecords_" + suffix,
                "array:" + best.count + ":" + record, range.length,
                "bulk_initialized_record_array", "high", evidence));
            for (RecordFieldGroup field : best.fields) claimed.addAll(field.addresses);
        }
        return result;
    }

    private boolean overlapping(List<RecordFieldGroup> fields, int stride) {
        int end = 0;
        for (RecordFieldGroup field : fields) {
            int width = field.width();
            if (field.offset < end || field.offset + width > stride) return true;
            end = field.offset + width;
        }
        return false;
    }

    private String recordFieldSpec(RecordFieldGroup field) {
        int width = field.width();
        String type = width == 1 ? "/byte" : width == 2 ? "/ushort" :
            width == 4 ? "/uint" : "/ulonglong";
        return field.offset + "," + String.format("field_%04X", field.offset) +
            "," + type;
    }

    private boolean owned(Address address) {
        String comment = currentProgram.getListing().getComment(CommentType.PLATE, address);
        return comment != null && comment.contains("[STGlobalAggregateApplier]");
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
            out.write("Indexed candidate bases: " + indexed.size() + "\nProposals: " + rows.size() +
                "\nAutomatic: " + rows.stream().filter(row -> row.apply).count() + "\n\n");
            for (Row row : rows) out.write(row.address + " " + row.id + " " + row.confidence +
                " apply=" + (row.apply ? 1 : 0) + " - " + row.evidence + "\n");
        }
    }

    private boolean synthetic(String name) {
        return name != null && name.matches("(?i)_?(?:DAT|PTR|UNK)_[0-9a-f]+");
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
        final Map<Integer, Integer> widths = new HashMap<>();
        final Map<Address, Set<String>> indexPairs = new HashMap<>();
        final Set<Address> functions = new TreeSet<>();
        final Map<Integer, ScaleEvidence> byScale = new TreeMap<>();
        final List<String> sites = new ArrayList<>();
        int reads, writes, binaryTests;
    }
    private static class ScaleEvidence {
        final Map<Integer, Integer> widths = new TreeMap<>();
        final Set<Address> functions = new TreeSet<>();
        final List<String> sites = new ArrayList<>();
        int reads, writes;
    }
    private static class InitRange {
        final Address base;
        final int length;
        final List<String> sites;
        InitRange(Address base, int length, List<String> sites) {
            this.base = base; this.length = length; this.sites = sites;
        }
    }
    private static class RecordFieldGroup {
        final int offset;
        final Map<Integer, Integer> widths = new TreeMap<>();
        final Set<Address> addresses = new TreeSet<>();
        int sites;
        RecordFieldGroup(int offset) { this.offset = offset; }
        void absorb(Address address, ScaleEvidence evidence) {
            addresses.add(address);
            evidence.widths.forEach((width, count) -> widths.merge(width, count, Integer::sum));
            sites += evidence.sites.size();
        }
        int width() {
            return widths.keySet().stream().filter(value ->
                value == 1 || value == 2 || value == 4 || value == 8)
                .mapToInt(Integer::intValue).max().orElse(-1);
        }
    }
    private record RecordArrayCandidate(InitRange range, int stride, int count,
        List<RecordFieldGroup> fields, Set<Address> functions, int sites,
        int reads, int writes) { }
    private record MatrixCandidate(Address base, Evidence evidence, int dimension,
        int length, Data data, Symbol symbol, String boundaryEvidence) { }
    private static class Usage { int reads, writes; }
    private record Row(boolean apply, String address, String expectedName,
        String expectedNameSource, String expectedType, int expectedLength,
        String proposedName, String proposedType, int proposedLength, String id,
        String confidence, String evidence) {}
}
