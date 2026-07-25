// Recover prototypes for vtable and callback calls that still decompile as code** expressions.
// Read-only: writes indirect_call_proposals.tsv and indirect_call_sites.tsv.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Analyze Indirect Calls

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;
import java.util.Set;
import java.util.TreeSet;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeComponent;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.VoidDataType;
import ghidra.program.model.lang.Register;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.FunctionTag;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.scalar.Scalar;
import ghidra.program.model.symbol.SourceType;

public class STIndirectCallAnalyzer extends GhidraScript {
    private static final String VTABLE_ROOT = "/SubmarineTitans/Recovered/VTables/";
    private static final Pattern TARGET = Pattern.compile("(?i)->\\s*([0-9a-f]{8,16})\\b");
    private static final Pattern SLOT = Pattern.compile(
        "(?i)CALL\\s+(?:dword ptr )?\\[([A-Z]{2,3})(?:\\s*\\+\\s*(0x[0-9a-f]+|[0-9a-f]+h?))?\\]");
    private final List<Site> sites = new ArrayList<>();

    @Override
    protected void run() throws Exception {
        // Read-only script: do not leave GhidraScript's implicit transaction around runScript().
        end(true);
        if (currentProgram == null) { printerr("Open the analyzed ST program first."); return; }
        File selected = outputDirectory(); if (selected == null) return;
        Path directory = programDirectory(selected); Files.createDirectories(directory);
        List<Row> rows = new ArrayList<>();
        collectSites();
        addExistingVtableSlots(rows);
        rows.sort(Comparator.comparing((Row row) -> row.structurePath)
            .thenComparingInt(row -> row.offset));
        writeRows(directory.resolve("indirect_call_proposals.tsv"), rows);
        writeSites(directory.resolve("indirect_call_sites.tsv"));
        writeSummary(directory.resolve("indirect_call_summary.txt"), rows);
        println("Indirect-call analysis complete: " + directory.toAbsolutePath().normalize());
        println("Sites=" + sites.size() + ", proposals=" + rows.size() + ", apply=" +
            rows.stream().filter(row -> row.apply).count());
    }

    private void addExistingVtableSlots(List<Row> rows) throws Exception {
        Iterator<Structure> structures = currentProgram.getDataTypeManager().getAllStructures();
        while (structures.hasNext()) {
            monitor.checkCancelled(); Structure structure = structures.next();
            if (!structure.getPathName().startsWith(VTABLE_ROOT)) continue;
            for (DataTypeComponent component : structure.getDefinedComponents()) {
                if (!(component.getDataType() instanceof Pointer pointer) ||
                        !(pointer.getDataType() instanceof VoidDataType)) continue;
                Matcher matcher = TARGET.matcher(text(component.getComment()));
                if (!matcher.find()) continue;
                Address raw = currentProgram.getAddressFactory().getAddress(matcher.group(1));
                Function entry = raw == null ? null : currentProgram.getFunctionManager().getFunctionAt(raw);
                Function target = resolveThunk(entry);
                boolean trusted = trusted(target);
                Synthetic synthetic = trusted ? null : syntheticSignature(target, structure);
                boolean apply = trusted || synthetic != null;
                rows.add(new Row(apply, "vtable_slot", structure.getPathName(),
                    component.getOffset(), name(component), typeSpec(component.getDataType()),
                    text(component.getComment()), structure.getPathName(), name(component), 0, 0,
                    target == null ? "" : addr(target.getEntryPoint()),
                    target == null ? "" : target.getName(true),
                    trusted ? "target" : synthetic == null ? "" : "synthetic_thiscall",
                    synthetic == null ? "" : synthetic.receiverType,
                    synthetic == null ? -1 : synthetic.stackParameters,
                    synthetic == null ? "" : synthetic.returnType,
                    trusted ? "high" : synthetic == null ? "review" : "layout",
                    trusted ? "slot target has a reviewed function signature" :
                        synthetic == null ? "slot target lacks consistent thiscall ABI evidence" :
                        synthetic.evidence));
            }
        }
    }

    private Synthetic syntheticSignature(Function target, Structure vtable) {
        if (target == null || !usesIncomingEcx(target)) return null;
        Set<Long> pops = returnPops(target);
        if (pops.size() != 1) return null;
        long bytes = pops.iterator().next();
        if (bytes < 0 || bytes > 0x100 || bytes % currentProgram.getDefaultPointerSize() != 0)
            return null;
        int parameters = (int)(bytes / currentProgram.getDefaultPointerSize());
        String returned = definitelyVoid(target) ? "/void" : "/undefined4";
        return new Synthetic(receiverType(vtable), parameters, returned,
            "vtable membership, incoming ECX use, and every RET agrees on callee cleanup " +
            bytes + " byte(s); neutral stack parameters=" + parameters +
            "; return=" + returned);
    }

    private Set<Long> returnPops(Function function) {
        Set<Long> result = new TreeSet<>();
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            if (!mnemonic.equals("RET") && !mnemonic.equals("RETF")) continue;
            Scalar scalar = instruction.getScalar(0);
            result.add(scalar == null ? 0L : scalar.getUnsignedValue());
        }
        return result;
    }

    private boolean usesIncomingEcx(Function function) {
        boolean live = true;
        int count = 0;
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext() && count++ < 256 && live) {
            Instruction instruction = instructions.next();
            for (Object input : instruction.getInputObjects())
                if (input instanceof Register register &&
                        "ECX".equals(register.getName().toUpperCase(Locale.ROOT))) return true;
            for (Object output : instruction.getResultObjects())
                if (output instanceof Register register &&
                        "ECX".equals(register.getName().toUpperCase(Locale.ROOT))) live = false;
        }
        return false;
    }

    private boolean definitelyVoid(Function function) {
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            if (instruction.getFlowType().isCall()) return false;
            for (Object output : instruction.getResultObjects()) {
                if (!(output instanceof Register register)) continue;
                String name = register.getName().toUpperCase(Locale.ROOT);
                if (Set.of("EAX", "AX", "AL", "AH").contains(name)) return false;
            }
        }
        return true;
    }

    private String receiverType(Structure vtable) {
        String owner = vtable.getName().replaceFirst("(?i)VTable(?:_at_[0-9A-F]+)?$", "");
        DataType direct = currentProgram.getDataTypeManager().getDataType("/" + owner);
        if (direct instanceof Structure) return "pointer:" + direct.getPathName();
        List<DataType> matches = new ArrayList<>();
        currentProgram.getDataTypeManager().findDataTypes(owner, matches);
        Structure found = null;
        for (DataType match : matches) {
            if (!(match instanceof Structure structure) ||
                    structure.getPathName().contains("/VTables/")) continue;
            if (found != null && !found.getPathName().equals(structure.getPathName()))
                return "pointer:/void";
            found = structure;
        }
        return found == null ? "pointer:/void" : "pointer:" + found.getPathName();
    }

    private void collectSites() throws Exception {
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            monitor.checkCancelled(); Function function = functions.next();
            if (function.isExternal()) continue;
            int pushes = 0; String ecx = "";
            InstructionIterator iterator = currentProgram.getListing().getInstructions(function.getBody(), true);
            while (iterator.hasNext()) {
                Instruction instruction = iterator.next();
                String text = instruction.toString().toUpperCase(Locale.ROOT);
                String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
                if ("PUSH".equals(mnemonic)) pushes++;
                if ("MOV".equals(mnemonic) && text.startsWith("MOV ECX,")) ecx = text.substring(8).trim();
                if ("CALL".equals(mnemonic)) {
                    Matcher matcher = SLOT.matcher(text);
                    if (matcher.find()) sites.add(new Site(addr(function.getEntryPoint()),
                        function.getName(true), addr(instruction.getAddress()), matcher.group(1),
                        slotValue(matcher.group(2)), pushes, ecx, instruction.toString()));
                    pushes = 0;
                }
                if (instruction.getFlowType().isJump() || instruction.getFlowType().isTerminal()) {
                    pushes = 0; ecx = "";
                }
            }
        }
    }

    private int slotValue(String value) {
        if (value == null || value.isBlank()) return 0;
        value = value.toLowerCase(Locale.ROOT).replace("h", "");
        try { return value.startsWith("0x") ? Integer.parseInt(value.substring(2), 16) :
            Integer.parseInt(value, 16); }
        catch (Exception ignored) { return -1; }
    }
    private boolean trusted(Function function) {
        if (function == null) return false;
        if (function.getSignatureSource() == SourceType.IMPORTED) return true;
        for (FunctionTag tag : function.getTags()) {
            String name = tag.getName();
            if (name.equals("RECOVERED_VIRTUAL_METHOD") ||
                    name.equals("RECOVERED_DEBUG_NAME") ||
                    name.equals("RECOVERED_ABI_CONSISTENCY") ||
                    name.equals("RECOVERED_CALLSITE_CONVENTION") ||
                    name.equals("RECOVERED_MESSAGE_HANDLER") ||
                    name.equals("RECOVERED_HEURISTIC_SIGNATURE") ||
                    name.equals("RECOVERED_CONSTRUCTOR") ||
                    name.equals("RECOVERED_DESTRUCTOR")) return true;
        }
        // USER_DEFINED is not evidence by itself: older bootstrap scripts used that source
        // for speculative signatures.  It becomes trusted only with independent provenance.
        return false;
    }
    private Function resolveThunk(Function function) {
        Function current = function;
        for (int depth = 0; depth < 32 && current != null && current.isThunk(); depth++) {
            Function next = current.getThunkedFunction(false);
            if (next == null || next.equals(current)) break;
            current = next;
        }
        return current;
    }
    private void writeRows(Path path, List<Row> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\ttarget_kind\tstructure_path\tcomponent_offset\texpected_field_name\t" +
                "expected_component_type\texpected_comment\tproposed_vtable_type\tproposed_field_name\t" +
                "table_address\tslot_count\tsignature_function_address\tsignature_function\t" +
                "signature_mode\treceiver_type\tstack_parameter_count\tproposed_return_type\t" +
                "confidence\tevidence\n");
            for (Row row : rows) out.write((row.apply ? "1" : "0") + "\t" + row.kind +
                "\t" + row.structurePath + "\t" + row.offset + "\t" + clean(row.expectedName) +
                "\t" + row.expectedType + "\t" + clean(row.expectedComment) + "\t" +
                row.proposedVtable + "\t" + clean(row.proposedName) + "\t" +
                (row.tableAddress == 0 ? "" : String.format("%08X", row.tableAddress)) + "\t" +
                row.slotCount + "\t" + row.functionAddress + "\t" + clean(row.function) +
                "\t" + row.signatureMode + "\t" + row.receiverType + "\t" +
                (row.stackParameters < 0 ? "" : row.stackParameters) + "\t" + row.returnType +
                "\t" + row.confidence + "\t" + clean(row.evidence) + "\n");
        }
    }
    private void writeSites(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("function_address\tfunction\tcall_address\ttable_register\tslot_offset\t" +
                "observed_pushes\tlast_ecx_assignment\tinstruction\n");
            for (Site row : sites) out.write(row.functionAddress + "\t" + clean(row.function) +
                "\t" + row.callAddress + "\t" + row.register + "\t" + row.slot + "\t" +
                row.pushes + "\t" + clean(row.ecx) + "\t" + clean(row.instruction) + "\n");
        }
    }
    private void writeSummary(Path path, List<Row> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("ST indirect-call prototypes\n\nIndirect call sites: " + sites.size() +
                "\nProposals: " + rows.size() + "\nAutomatic: " +
                rows.stream().filter(row -> row.apply).count() +
                "\nSynthetic ABI prototypes: " + rows.stream().filter(row ->
                    "synthetic_thiscall".equals(row.signatureMode)).count() + "\n");
        }
    }
    private String typeSpec(DataType type) {
        if (type instanceof Pointer pointer && pointer.getDataType() != null)
            return "pointer:" + typeSpec(pointer.getDataType());
        return type == null ? "" : type.getPathName();
    }
    private static String name(DataTypeComponent component) {
        return component.getFieldName() == null ? "" : component.getFieldName();
    }
    private static String text(String value) { return value == null ? "" : value; }
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
    private static String clean(String value) { return value == null ? "" : value.replace('\t',' ').replace('\r',' ').replace('\n',' '); }
    private record Row(boolean apply, String kind, String structurePath, int offset,
        String expectedName, String expectedType, String expectedComment, String proposedVtable,
        String proposedName, long tableAddress, int slotCount, String functionAddress,
        String function, String signatureMode, String receiverType, int stackParameters,
        String returnType, String confidence, String evidence) {}
    private record Synthetic(String receiverType, int stackParameters, String returnType,
        String evidence) {}
    private record Site(String functionAddress, String function, String callAddress,
        String register, int slot, int pushes, String ecx, String instruction) {}
}
