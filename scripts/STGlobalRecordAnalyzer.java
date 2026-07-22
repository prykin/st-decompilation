// Recover repeated packed global records from x86 stride and range evidence.
// Read-only: emits global_record_proposals.tsv and global_record_field_proposals.tsv.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Analyze Global Records

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.security.MessageDigest;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Set;
import java.util.TreeMap;
import java.util.TreeSet;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSet;
import ghidra.program.model.data.Array;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeComponent;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.Undefined;
import ghidra.program.model.listing.CommentType;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.DataIterator;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.FunctionTag;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Listing;
import ghidra.program.model.scalar.Scalar;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.Symbol;
import ghidra.program.model.symbol.SymbolIterator;
import ghidra.program.model.symbol.SymbolTable;

public class STGlobalRecordAnalyzer extends GhidraScript {
    private static final long PLAYER_BASE = 0x007f4e20L;
    private static final int PLAYER_STRIDE = 0x0a62;
    private static final int PLAYER_TOTAL_SIZE = 0x5310;
    private static final int PLAYER_COUNT = PLAYER_TOTAL_SIZE / PLAYER_STRIDE;
    private static final String RECORD_ID = "player_runtime";
    private static final String RECORD_TYPE =
        "/SubmarineTitans/Recovered/GlobalRecords/STPlayerRuntimeRecord";
    private static final String ARRAY_NAME = "g_playerRuntime";
    private static final String DARRAY_TYPE = "/SubmarineTitans/Recovered/DArrayTy";
    private static final String TEMP_SLOT_TYPE =
        "/SubmarineTitans/Recovered/GlobalRecords/STPlayerTempSlot";
    private static final String AI_PLAYER_TYPE = "/AiPlrClassTy";
    private static final String MARKER = "[STGlobalRecordApplier]";
    private static final String HASH_MARKER = "; generated_layout_sha256=";

    private Listing listing;
    private SymbolTable symbols;
    private DataTypeManager dataTypes;
    private Address base;
    private Address recordEnd;
    private Address arrayEnd;

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

        listing = currentProgram.getListing();
        symbols = currentProgram.getSymbolTable();
        dataTypes = currentProgram.getDataTypeManager();
        base = address(PLAYER_BASE);
        recordEnd = base.add(PLAYER_STRIDE - 1L);
        arrayEnd = base.add(PLAYER_TOTAL_SIZE - 1L);

        Scan scan = scanStrideUsers();
        LayoutState layout = layoutState();
        RangeSafety range = rangeSafety();
        boolean evidenceStrong = scan.strideFunctions.size() >= 5 &&
            scan.fieldSites >= 20 && !scan.totalSizeSites.isEmpty() &&
            !scan.boundarySites.isEmpty() && !scan.baseSites.isEmpty();
        boolean darrayPresent = dataTypes.getDataType(DARRAY_TYPE) instanceof Structure;
        DataType tempSlotDataType = dataTypes.getDataType(TEMP_SLOT_TYPE);
        boolean tempSlotPresent = tempSlotDataType instanceof Structure &&
            tempSlotDataType.getLength() == 0x10;
        boolean apply = evidenceStrong && darrayPresent && tempSlotPresent &&
            range.safe && layout.safe;

        List<FieldProposal> fields = makeFields(scan, layout, apply);
        long typedFields = fields.stream().filter(field -> field.apply &&
            !field.type.startsWith("/undefined")).count();
        long namedFields = fields.stream().filter(field -> field.apply &&
            !field.name.isBlank()).count();
        List<String> reasons = new ArrayList<>();
        reasons.add("stride_0x" + Integer.toHexString(PLAYER_STRIDE).toUpperCase(Locale.ROOT) +
            " in " + scan.strideFunctions.size() + " functions");
        reasons.add("total_0x" + Integer.toHexString(PLAYER_TOTAL_SIZE).toUpperCase(Locale.ROOT) +
            " / stride = " + PLAYER_COUNT + " records");
        reasons.add("exact_end=" + addr(arrayEnd.add(1)));
        reasons.add("first_record_fields=" + fields.size());
        if (!evidenceStrong) reasons.add("insufficient_binary_evidence");
        if (!darrayPresent) reasons.add("missing_type=" + DARRAY_TYPE);
        if (!tempSlotPresent) reasons.add("missing_or_invalid_16_byte_type=" + TEMP_SLOT_TYPE);
        if (!range.safe) reasons.add(range.reason);
        if (!layout.safe) reasons.add(layout.reason);

        RecordProposal record = new RecordProposal(apply, rangeSignature(),
            scan.strideFunctions.size(), scan.fieldSites, fields.size(), typedFields,
            namedFields, apply ? "high" : "review", String.join("; ", reasons));
        writeRecords(directory.resolve("global_record_proposals.tsv"), List.of(record));
        writeRecordJson(directory.resolve("global_record_proposals.jsonl"), List.of(record));
        writeFields(directory.resolve("global_record_field_proposals.tsv"), fields);
        writeFieldJson(directory.resolve("global_record_field_proposals.jsonl"), fields);
        writeEvidence(directory.resolve("global_record_evidence.tsv"), scan);
        writeSummary(directory.resolve("global_record_summary.txt"), record, scan,
            layout, range, evidenceStrong, darrayPresent, tempSlotPresent);

        println("Global-record analysis complete: " + directory.toAbsolutePath().normalize());
        println("Records: 1, apply=" + bit(apply) + ", stride functions=" +
            scan.strideFunctions.size() + ", fields=" + fields.size() +
            ", typed=" + typedFields + ", named=" + namedFields);
    }

    private Scan scanStrideUsers() throws Exception {
        Scan result = new Scan();
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            monitor.checkCancelled();
            Function function = functions.next();
            if (function.isExternal() || function.isThunk() || isLibrary(function)) continue;
            List<Instruction> instructions = new ArrayList<>();
            boolean hasStride = false;
            InstructionIterator iterator = listing.getInstructions(function.getBody(), true);
            while (iterator.hasNext()) {
                Instruction instruction = iterator.next();
                instructions.add(instruction);
                if (hasScalar(instruction, PLAYER_STRIDE)) hasStride = true;
            }
            if (!hasStride) continue;
            String functionSite = addr(function.getEntryPoint()) + " " + function.getName(true);
            result.strideFunctions.add(functionSite);
            for (Instruction instruction : instructions) {
                if (hasScalar(instruction, PLAYER_TOTAL_SIZE))
                    result.totalSizeSites.add(functionSite + " @ " + addr(instruction.getAddress()));
                if (hasScalar(instruction, PLAYER_COUNT))
                    result.countSites.add(functionSite + " @ " + addr(instruction.getAddress()));
                String[] operands = splitOperands(instruction.toString().toUpperCase(Locale.ROOT));
                for (Reference reference : instruction.getReferencesFrom()) {
                    Address target = reference.getToAddress();
                    if (target == null || !currentProgram.getMemory().contains(target)) continue;
                    if (target.equals(base))
                        result.baseSites.add(functionSite + " @ " + addr(instruction.getAddress()));
                    if (target.equals(arrayEnd.add(1)))
                        result.boundarySites.add(functionSite + " @ " + addr(instruction.getAddress()));
                    if (target.compareTo(base) < 0 || target.compareTo(recordEnd) > 0) continue;
                    int operandIndex = reference.getOperandIndex();
                    if (operandIndex < 0 || operandIndex >= operands.length) continue;
                    String operand = operands[operandIndex];
                    if (!operand.contains("[") || !operand.contains("]")) continue;
                    int width = accessWidth(operand);
                    if (width < 1 || width > 8) continue;
                    long offset = target.subtract(base);
                    if (offset < 0 || offset + width > PLAYER_STRIDE) continue;
                    FieldEvidence field = result.fields.computeIfAbsent(offset,
                        FieldEvidence::new);
                    field.sizes.merge(width, 1, Integer::sum);
                    String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
                    if (operandIndex == 0 && writesOperandZero(mnemonic)) field.writes++;
                    else field.reads++;
                    String inferred = inferredScalarType(mnemonic, width);
                    if (!inferred.isBlank()) field.types.merge(inferred, 1, Integer::sum);
                    String site = functionSite + " @ " + addr(instruction.getAddress()) +
                        " " + instruction;
                    field.sites.add(site);
                    result.fieldSites++;
                }
            }
        }
        return result;
    }

    private List<FieldProposal> makeFields(Scan scan, LayoutState layout, boolean parentApply) {
        List<FieldCandidate> candidates = new ArrayList<>();
        if (layout.structure != null) {
            for (DataTypeComponent component : layout.structure.getDefinedComponents()) {
                String name = component.getFieldName() == null ? "" : component.getFieldName();
                String reason = generatedFieldReason(component.getComment());
                candidates.add(new FieldCandidate(component.getOffset(), component.getLength(),
                    name, typeSpecification(component.getDataType()), 50, 0, 0,
                    Set.of("existing script-owned record layout"), reason));
            }
        }
        else {
            DataIterator data = listing.getDefinedData(new AddressSet(base, recordEnd), true);
            while (data.hasNext()) {
                Data item = data.next();
                if (item.getMinAddress().compareTo(base) < 0 || item.hasStringValue()) continue;
                long offset = item.getMinAddress().subtract(base);
                if (offset < 0 || offset + item.getLength() > PLAYER_STRIDE) continue;
                candidates.add(new FieldCandidate(offset, item.getLength(), "",
                    typeSpecification(item.getDataType()),
                    Undefined.isUndefined(item.getDataType()) ? 20 : 40, 0, 0,
                    Set.of("existing listing data at " + addr(item.getMinAddress())),
                    "existing_first_record_data"));
            }
        }
        for (FieldEvidence evidence : scan.fields.values()) {
            int size = best(evidence.sizes);
            String type = unique(evidence.types);
            if (type.isBlank()) type = "/undefined" + size;
            int priority = evidence.types.isEmpty() ? 60 : evidence.types.size() == 1 ? 70 : 55;
            candidates.add(new FieldCandidate(evidence.offset, size, "", type, priority,
                evidence.reads, evidence.writes, evidence.sites,
                evidence.types.size() > 1 ? "conflicting_scalar_types=" + evidence.types :
                    "stride_relative_memory_access"));
        }

        addCurated(candidates, 0x000, 1, "raceId", "/byte",
            "byte value selects one of three race tables and is compared with 1..3");
        if (dataTypes.getDataType(AI_PLAYER_TYPE) instanceof Structure) {
            addCurated(candidates, 0x001, 4, "aiPlayer", "pointer:" + AI_PLAYER_TYPE,
                "AiPlrClassTy::GetMessage stores this through FUN_004357b0; " +
                "CmdToPlsObj and FUN_004357f0 read the same packed field");
        }
        addCurated(candidates, 0x005, 4, "groups", "pointer:" + DARRAY_TYPE,
            "DArray used by RegisterGroup/UnRegisterGroup and group iteration");
        addCurated(candidates, 0x009, 4, "objects", "pointer:" + DARRAY_TYPE,
            "DArray used by RegisterObject/GetObjPtr/UnRegisterObject");
        addCurated(candidates, 0x163, 0x0a0, "tempSlots",
            "array:2:array:5:" + TEMP_SLOT_TYPE,
            "two adjacent groups of five packed 16-byte temporary-object slots; " +
            "field meanings are shared by AddObjToTmp/AddObjToTmp2/DelObjFromTmps/" +
            "ResetActivityFromTmp/SaveTmp/RestoreTmp");
        for (long offset = 0x9ce; offset <= 0xa06; offset += 4) {
            String name = offset == 0x9f6 ? "pgPairs" : "";
            String reason = offset == 0x9f6 ?
                "DArray of 12-byte triples used by RegisterPGPair" :
                "value is created, indexed, appended to, or destroyed by recovered DArray helpers";
            addCurated(candidates, offset, 4, name, "pointer:" + DARRAY_TYPE, reason);
        }

        candidates.sort(Comparator.comparingInt((FieldCandidate item) -> item.priority).reversed()
            .thenComparingLong(item -> item.offset));
        List<FieldCandidate> selected = new ArrayList<>();
        for (FieldCandidate candidate : candidates) {
            if (candidate.offset < 0 || candidate.size < 1 ||
                    candidate.offset + candidate.size > PLAYER_STRIDE) continue;
            boolean overlaps = selected.stream().anyMatch(existing -> overlaps(candidate, existing));
            if (!overlaps) selected.add(candidate);
        }
        selected.sort(Comparator.comparingLong(item -> item.offset));
        List<FieldProposal> result = new ArrayList<>();
        for (FieldCandidate field : selected) {
            boolean semantic = !field.type.startsWith("/undefined");
            String typeConfidence = field.priority >= 100 ? "high" :
                semantic ? "medium" : "layout";
            String nameConfidence = field.name.isBlank() ? "none" :
                field.priority >= 100 ? "high" : "existing";
            result.add(new FieldProposal(parentApply, field.offset, field.size, field.name,
                field.type, typeConfidence, nameConfidence, field.reads, field.writes,
                field.sites, field.reason));
        }
        return result;
    }

    private String generatedFieldReason(String comment) {
        if (comment == null || !comment.startsWith(MARKER)) return "preserve_generated_field";
        int first = comment.indexOf("; ");
        if (first < 0) return "preserve_generated_field";
        int second = comment.indexOf("; ", first + 2);
        return second < 0 ? "preserve_generated_field" : comment.substring(second + 2);
    }

    private void addCurated(List<FieldCandidate> fields, long offset, int size, String name,
            String type, String reason) {
        fields.add(new FieldCandidate(offset, size, name, type, 100, 0, 0,
            Set.of("curated semantic evidence: " + reason), reason));
    }

    private boolean overlaps(FieldCandidate left, FieldCandidate right) {
        return left.offset < right.offset + right.size && right.offset < left.offset + left.size;
    }

    private LayoutState layoutState() {
        DataType type = dataTypes.getDataType(RECORD_TYPE);
        if (type == null) return new LayoutState(true, "record type does not exist yet", null);
        if (!(type instanceof Structure structure))
            return new LayoutState(false, "target record path is not a structure", null);
        String description = structure.getDescription();
        if (description == null || !description.contains(MARKER))
            return new LayoutState(false, "existing manual/unowned record structure preserved",
                structure);
        String stored = storedHash(description);
        if (stored == null)
            return new LayoutState(false, "generated record structure lacks safety hash", structure);
        String current = layoutHash(structure);
        if (!stored.equals(current))
            return new LayoutState(false, "manual record-layout changes detected", structure);
        return new LayoutState(true, "unchanged script-owned record structure", structure);
    }

    private RangeSafety rangeSafety() {
        if (listing.getInstructions(new AddressSet(base, arrayEnd), true).hasNext())
            return new RangeSafety(false, "record range contains instructions");
        Data root = listing.getDefinedDataAt(base);
        if (root != null && root.getDataType() instanceof Array array &&
                array.getDataType() instanceof Structure structure &&
                structure.getPathName().equals(RECORD_TYPE) && owned(base))
            return new RangeSafety(true, "existing script-owned record array");
        DataIterator data = listing.getDefinedData(new AddressSet(base, arrayEnd), true);
        while (data.hasNext()) {
            Data item = data.next();
            if (!Undefined.isUndefined(item.getDataType()))
                return new RangeSafety(false, "concrete data preserved at " +
                    addr(item.getMinAddress()) + " type=" + item.getDataType().getPathName());
        }
        return new RangeSafety(true, "range contains only undefined data");
    }

    private String rangeSignature() {
        StringBuilder value = new StringBuilder();
        value.append(addr(base)).append('|').append(addr(arrayEnd)).append('\n');
        DataIterator data = listing.getDefinedData(new AddressSet(base, arrayEnd), true);
        while (data.hasNext()) {
            Data item = data.next();
            value.append("D|").append(addr(item.getMinAddress())).append('|')
                .append(item.getLength()).append('|')
                .append(item.getDataType().getPathName()).append('\n');
        }
        SymbolIterator iterator = symbols.getAllSymbols(true);
        while (iterator.hasNext()) {
            Symbol symbol = iterator.next();
            if (symbol.getAddress().compareTo(base) < 0 ||
                    symbol.getAddress().compareTo(arrayEnd) > 0) continue;
            value.append("S|").append(addr(symbol.getAddress())).append('|')
                .append(symbol.getName(true)).append('|').append(symbol.getSource()).append('|')
                .append(symbol.isPrimary()).append('\n');
        }
        return sha256(value.toString());
    }

    private boolean hasScalar(Instruction instruction, long expected) {
        for (int index = 0; index < instruction.getNumOperands(); index++) {
            Scalar scalar = instruction.getScalar(index);
            if (scalar != null && scalar.getUnsignedValue() == expected) return true;
        }
        return false;
    }

    private int accessWidth(String operand) {
        if (operand.contains("QWORD PTR")) return 8;
        if (operand.contains("DWORD PTR")) return 4;
        if (operand.contains("WORD PTR")) return 2;
        if (operand.contains("BYTE PTR")) return 1;
        return -1;
    }

    private String inferredScalarType(String mnemonic, int width) {
        if ("MOVZX".equals(mnemonic)) return unsignedType(width);
        if ("MOVSX".equals(mnemonic) || "MOVSXD".equals(mnemonic)) return signedType(width);
        if (Set.of("FLD", "FST", "FSTP", "FADD", "FSUB", "FSUBR", "FMUL",
                "FDIV", "FDIVR", "FCOM", "FCOMP").contains(mnemonic))
            return width == 4 ? "/float" : width == 8 ? "/double" : "";
        return "";
    }

    private String signedType(int width) {
        return switch (width) {
            case 1 -> "/char"; case 2 -> "/short"; case 4 -> "/int";
            case 8 -> "/longlong"; default -> "";
        };
    }

    private String unsignedType(int width) {
        return switch (width) {
            case 1 -> "/byte"; case 2 -> "/ushort"; case 4 -> "/uint";
            case 8 -> "/ulonglong"; default -> "";
        };
    }

    private boolean writesOperandZero(String mnemonic) {
        return Set.of("MOV", "MOVZX", "MOVSX", "MOVSXD", "LEA", "POP", "ADD", "ADC",
            "SUB", "SBB", "AND", "OR", "XOR", "INC", "DEC", "NEG", "NOT", "FST",
            "FSTP").contains(mnemonic);
    }

    private String typeSpecification(DataType type) {
        if (type instanceof Array array)
            return "array:" + array.getNumElements() + ":" +
                typeSpecification(array.getDataType());
        if (type instanceof Pointer pointer && pointer.getDataType() != null)
            return "pointer:" + pointer.getDataType().getPathName();
        if (Undefined.isUndefined(type)) return "/undefined" + Math.max(1, type.getLength());
        return type == null ? "" : type.getPathName();
    }

    private int best(Map<Integer, Integer> sizes) {
        return sizes.entrySet().stream().max(Comparator
            .comparingInt((Map.Entry<Integer, Integer> entry) -> entry.getValue())
            .thenComparingInt(Map.Entry::getKey)).map(Map.Entry::getKey).orElse(1);
    }

    private String unique(Map<String, Integer> values) {
        return values.size() == 1 ? values.keySet().iterator().next() : "";
    }

    private boolean owned(Address address) {
        String comment = listing.getComment(CommentType.PLATE, address);
        return comment != null && comment.contains(MARKER);
    }

    private boolean isLibrary(Function function) {
        for (FunctionTag tag : function.getTags()) {
            String name = tag.getName().toUpperCase(Locale.ROOT);
            if (name.equals("LIBRARY") || name.startsWith("LIBRARY_")) return true;
        }
        return false;
    }

    private String[] splitOperands(String instruction) {
        int space = instruction.indexOf(' ');
        return space < 0 || space == instruction.length() - 1 ? new String[0] :
            instruction.substring(space + 1).split("\\s*,\\s*", -1);
    }

    private String layoutHash(Structure structure) {
        StringBuilder layout = new StringBuilder();
        layout.append("length=").append(structure.getLength()).append('\n');
        for (DataTypeComponent component : structure.getDefinedComponents()) {
            layout.append(component.getOffset()).append('|').append(component.getLength()).append('|')
                .append(component.getDataType().getPathName()).append('|')
                .append(component.getFieldName() == null ? "" : component.getFieldName()).append('|')
                .append(component.getComment() == null ? "" : component.getComment()).append('\n');
        }
        return sha256(layout.toString());
    }

    private String storedHash(String description) {
        int index = description.indexOf(HASH_MARKER);
        if (index < 0) return null;
        String value = description.substring(index + HASH_MARKER.length()).trim();
        if (value.length() < 64) return null;
        value = value.substring(0, 64);
        return value.matches("[0-9a-fA-F]{64}") ? value.toLowerCase(Locale.ROOT) : null;
    }

    private String sha256(String value) {
        try {
            byte[] digest = MessageDigest.getInstance("SHA-256")
                .digest(value.getBytes(StandardCharsets.UTF_8));
            StringBuilder result = new StringBuilder();
            for (byte item : digest) result.append(String.format("%02x", item & 0xff));
            return result.toString();
        }
        catch (Exception exception) {
            throw new IllegalStateException("SHA-256 unavailable", exception);
        }
    }

    private Address address(long value) {
        return currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(value);
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

    private void writeRecords(Path path, List<RecordProposal> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\trecord_id\tbase_address\tstride\tcount\ttotal_size\tend_address\t" +
                "type_path\tarray_name\texpected_range_sha256\tobserved_functions\t" +
                "observed_field_sites\tfields\ttyped_fields\tnamed_fields\tconfidence\treason\n");
            for (RecordProposal row : rows) out.write(bit(row.apply) + "\t" + RECORD_ID +
                "\t" + addr(base) + "\t" + PLAYER_STRIDE + "\t" + PLAYER_COUNT + "\t" +
                PLAYER_TOTAL_SIZE + "\t" + addr(arrayEnd.add(1)) + "\t" + RECORD_TYPE +
                "\t" + ARRAY_NAME + "\t" + row.rangeHash + "\t" + row.functions + "\t" +
                row.fieldSites + "\t" + row.fields + "\t" + row.typedFields + "\t" +
                row.namedFields + "\t" + row.confidence + "\t" + tsv(row.reason) + "\n");
        }
    }

    private void writeRecordJson(Path path, List<RecordProposal> rows) throws Exception {
        List<String> lines = new ArrayList<>();
        for (RecordProposal row : rows) lines.add("{\"apply\":" + row.apply +
            ",\"record_id\":" + q(RECORD_ID) + ",\"base_address\":" + q(addr(base)) +
            ",\"stride\":" + PLAYER_STRIDE + ",\"count\":" + PLAYER_COUNT +
            ",\"type_path\":" + q(RECORD_TYPE) + ",\"array_name\":" + q(ARRAY_NAME) +
            ",\"confidence\":" + q(row.confidence) + ",\"reason\":" + q(row.reason) + "}");
        Files.write(path, lines, StandardCharsets.UTF_8);
    }

    private void writeFields(Path path, List<FieldProposal> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\trecord_id\toffset\toffset_hex\tsize\tproposed_name\t" +
                "proposed_type\ttype_confidence\tname_confidence\treads\twrites\tevidence\treason\n");
            for (FieldProposal row : rows) out.write(bit(row.apply) + "\t" + RECORD_ID +
                "\t" + row.offset + "\t0x" + Long.toHexString(row.offset).toUpperCase(Locale.ROOT) +
                "\t" + row.size + "\t" + tsv(row.name) + "\t" + tsv(row.type) + "\t" +
                row.typeConfidence + "\t" + row.nameConfidence + "\t" + row.reads + "\t" +
                row.writes + "\t" + tsv(String.join(" | ", row.sites)) + "\t" +
                tsv(row.reason) + "\n");
        }
    }

    private void writeFieldJson(Path path, List<FieldProposal> rows) throws Exception {
        List<String> lines = new ArrayList<>();
        for (FieldProposal row : rows) lines.add("{\"apply\":" + row.apply +
            ",\"record_id\":" + q(RECORD_ID) + ",\"offset\":" + row.offset +
            ",\"size\":" + row.size + ",\"proposed_name\":" + q(row.name) +
            ",\"proposed_type\":" + q(row.type) + ",\"type_confidence\":" +
            q(row.typeConfidence) + ",\"reason\":" + q(row.reason) + "}");
        Files.write(path, lines, StandardCharsets.UTF_8);
    }

    private void writeEvidence(Path path, Scan scan) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("kind\tsite\n");
            for (String site : scan.strideFunctions) out.write("stride_function\t" + tsv(site) + "\n");
            for (String site : scan.totalSizeSites) out.write("total_size\t" + tsv(site) + "\n");
            for (String site : scan.boundarySites) out.write("end_boundary\t" + tsv(site) + "\n");
            for (String site : scan.baseSites) out.write("base_reference\t" + tsv(site) + "\n");
            for (String site : scan.countSites) out.write("count_constant\t" + tsv(site) + "\n");
        }
    }

    private void writeSummary(Path path, RecordProposal record, Scan scan,
            LayoutState layout, RangeSafety range, boolean evidenceStrong,
            boolean darrayPresent, boolean tempSlotPresent) throws Exception {
        Files.write(path, List.of("program=" + currentProgram.getName(),
            "record_id=" + RECORD_ID, "base=" + addr(base),
            "stride=0x" + Integer.toHexString(PLAYER_STRIDE).toUpperCase(Locale.ROOT),
            "total_size=0x" + Integer.toHexString(PLAYER_TOTAL_SIZE).toUpperCase(Locale.ROOT),
            "count=" + PLAYER_COUNT, "exclusive_end=" + addr(arrayEnd.add(1)),
            "stride_functions=" + scan.strideFunctions.size(),
            "field_access_sites=" + scan.fieldSites,
            "total_size_sites=" + scan.totalSizeSites.size(),
            "boundary_sites=" + scan.boundarySites.size(),
            "fields=" + record.fields, "typed_fields=" + record.typedFields,
            "named_fields=" + record.namedFields, "binary_evidence_strong=" + evidenceStrong,
            "darray_type_present=" + darrayPresent, "range_safe=" + range.safe,
            "temp_slot_type_present=" + tempSlotPresent,
            "range_reason=" + range.reason, "layout_safe=" + layout.safe,
            "layout_reason=" + layout.reason, "auto_apply=" + record.apply,
            "note=The record is packed: stride and structure length are exactly 0xA62."),
            StandardCharsets.UTF_8);
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

    private static class Scan {
        final Map<Long, FieldEvidence> fields = new TreeMap<>();
        final Set<String> strideFunctions = new TreeSet<>(), totalSizeSites = new TreeSet<>(),
            boundarySites = new TreeSet<>(), baseSites = new TreeSet<>(),
            countSites = new TreeSet<>();
        int fieldSites;
    }
    private static class FieldEvidence {
        final long offset; final Map<Integer, Integer> sizes = new TreeMap<>();
        final Map<String, Integer> types = new TreeMap<>();
        final Set<String> sites = new TreeSet<>(); int reads, writes;
        FieldEvidence(long offset) { this.offset = offset; }
    }
    private static class FieldCandidate {
        final long offset; final int size, priority, reads, writes;
        final String name, type, reason; final Set<String> sites;
        FieldCandidate(long offset, int size, String name, String type, int priority,
                int reads, int writes, Set<String> sites, String reason) {
            this.offset = offset; this.size = size; this.name = name; this.type = type;
            this.priority = priority; this.reads = reads; this.writes = writes;
            this.sites = new TreeSet<>(sites); this.reason = reason;
        }
    }
    private static class FieldProposal {
        final boolean apply; final long offset; final int size, reads, writes;
        final String name, type, typeConfidence, nameConfidence, reason;
        final Set<String> sites;
        FieldProposal(boolean apply, long offset, int size, String name, String type,
                String typeConfidence, String nameConfidence, int reads, int writes,
                Set<String> sites, String reason) {
            this.apply = apply; this.offset = offset; this.size = size; this.name = name;
            this.type = type; this.typeConfidence = typeConfidence;
            this.nameConfidence = nameConfidence; this.reads = reads; this.writes = writes;
            this.sites = new TreeSet<>(sites); this.reason = reason;
        }
    }
    private static class RecordProposal {
        final boolean apply; final String rangeHash, confidence, reason;
        final long functions, fieldSites, fields, typedFields, namedFields;
        RecordProposal(boolean apply, String rangeHash, long functions, long fieldSites,
                long fields, long typedFields, long namedFields, String confidence, String reason) {
            this.apply = apply; this.rangeHash = rangeHash; this.functions = functions;
            this.fieldSites = fieldSites; this.fields = fields; this.typedFields = typedFields;
            this.namedFields = namedFields; this.confidence = confidence; this.reason = reason;
        }
    }
    private static class LayoutState {
        final boolean safe; final String reason; final Structure structure;
        LayoutState(boolean safe, String reason, Structure structure) {
            this.safe = safe; this.reason = reason; this.structure = structure;
        }
    }
    private static class RangeSafety {
        final boolean safe; final String reason;
        RangeSafety(boolean safe, String reason) { this.safe = safe; this.reason = reason; }
    }
}
