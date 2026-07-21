// Consolidate exact anonymous structure duplicates and recover cross-function base types.
// Read-only: writes type_family_proposals.tsv and type_family_groups.tsv.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Analyze Type Families

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.security.MessageDigest;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.TreeMap;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeComponent;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.Structure;
import ghidra.program.model.lang.Register;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.listing.Variable;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.StackReference;

public class STTypeFamilyAnalyzer extends GhidraScript {
    private static final String POINTER_SHAPES = "/SubmarineTitans/Recovered/PointerShapes/";
    private static final String CLASS_POINTEES = "/SubmarineTitans/Recovered/ClassPointees/";

    @Override
    protected void run() throws Exception {
        if (currentProgram == null) { printerr("Open the analyzed ST program first."); return; }
        File selected = outputDirectory(); if (selected == null) return;
        Path directory = programDirectory(selected); Files.createDirectories(directory);
        Map<String, List<Structure>> groups = exactGroups();
        List<GroupRow> groupRows = new ArrayList<>();
        Map<String, String> redirects = new HashMap<>();
        for (Map.Entry<String, List<Structure>> entry : groups.entrySet()) {
            List<Structure> members = entry.getValue();
            if (members.size() < 2) continue;
            members.sort(Comparator.comparing(DataType::getPathName));
            Structure canonical = members.get(0);
            int fields = namedFields(canonical);
            boolean apply = fields >= 3;
            String id = "EXACT_" + entry.getKey().substring(0, 12).toUpperCase(Locale.ROOT);
            for (Structure member : members) {
                groupRows.add(new GroupRow(apply, id, canonical.getPathName(),
                    member.getPathName(), canonical.getLength(), fields,
                    "exact offset/type/length fingerprint"));
                if (apply && !member.equals(canonical))
                    redirects.put(member.getPathName(), canonical.getPathName());
            }
        }
        List<Row> rows = variableRows(redirects);
        addGetObjPtrFamily(rows);
        addReturnedPointerConsumers(rows);
        rows.sort(Comparator.comparing((Row r) -> r.functionAddress)
            .thenComparing(r -> r.targetKind).thenComparingInt(r -> r.ordinal));
        writeGroups(directory.resolve("type_family_groups.tsv"), groupRows);
        writeRows(directory.resolve("type_family_proposals.tsv"), rows);
        writeSummary(directory.resolve("type_family_summary.txt"), groupRows, rows);
        println("Type-family analysis complete: " + directory.toAbsolutePath().normalize());
        println("Exact groups=" + groupRows.stream().map(row -> row.id).distinct().count() +
            ", target proposals=" + rows.size() + ", apply=" +
            rows.stream().filter(row -> row.apply).count());
    }

    private Map<String, List<Structure>> exactGroups() throws Exception {
        Map<String, List<Structure>> groups = new TreeMap<>();
        Iterator<Structure> iterator = currentProgram.getDataTypeManager().getAllStructures();
        while (iterator.hasNext()) {
            monitor.checkCancelled();
            Structure structure = iterator.next();
            String path = structure.getPathName();
            if (!path.startsWith(POINTER_SHAPES) && !path.startsWith(CLASS_POINTEES)) continue;
            groups.computeIfAbsent(fingerprint(structure), ignored -> new ArrayList<>()).add(structure);
        }
        return groups;
    }

    private String fingerprint(Structure structure) throws Exception {
        StringBuilder value = new StringBuilder().append(structure.getLength()).append('|');
        for (DataTypeComponent component : structure.getDefinedComponents())
            value.append(component.getOffset()).append(':').append(component.getLength()).append(':')
                .append(typeSpec(component.getDataType())).append('|');
        MessageDigest digest = MessageDigest.getInstance("SHA-256");
        byte[] hash = digest.digest(value.toString().getBytes(StandardCharsets.UTF_8));
        StringBuilder result = new StringBuilder();
        for (byte item : hash) result.append(String.format("%02x", item & 0xff));
        return result.toString();
    }

    private int namedFields(Structure structure) {
        int count = 0;
        for (DataTypeComponent component : structure.getDefinedComponents())
            if (component.getFieldName() != null && !component.getFieldName().isBlank()) count++;
        return count;
    }

    private List<Row> variableRows(Map<String, String> redirects) throws Exception {
        List<Row> rows = new ArrayList<>();
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            monitor.checkCancelled(); Function function = functions.next();
            addVariable(rows, redirects, function, function.getReturn(), "return", -1);
            for (Parameter parameter : function.getParameters()) {
                if (parameter.isAutoParameter()) continue;
                addVariable(rows, redirects, function, parameter, "parameter", parameter.getOrdinal());
            }
            int localIndex = 0;
            for (Variable local : function.getLocalVariables())
                addVariable(rows, redirects, function, local, "local", localIndex++);
        }
        return rows;
    }

    private void addVariable(List<Row> rows, Map<String, String> redirects, Function function,
            Variable variable, String kind, int ordinal) {
        DataType type = variable.getDataType();
        if (!(type instanceof Pointer pointer) || pointer.getDataType() == null) return;
        String canonical = redirects.get(pointer.getDataType().getPathName());
        if (canonical == null) return;
        boolean apply = variable.getSource() != SourceType.USER_DEFINED &&
            variable.getSource() != SourceType.IMPORTED;
        rows.add(new Row(apply, addr(function.getEntryPoint()), function.getName(true), kind,
            ordinal, variable.getName(), variable.getVariableStorage().toString(), typeSpec(type),
            variable.getSource().toString(), "pointer:" + canonical,
            false, "EXACT_ANONYMOUS_LAYOUT", "high",
            "exact anonymous structure fingerprint shared across functions"));
    }

    private void addGetObjPtrFamily(List<Row> rows) {
        for (long offset : new long[] { 0x0042b620L, 0x004028baL }) {
            Address address = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(offset);
            Function function = currentProgram.getFunctionManager().getFunctionAt(address);
            if (function == null) continue;
            Parameter returned = function.getReturn();
            String current = typeSpec(returned.getDataType());
            boolean generic = current.equals("/uint") || current.equals("/int") ||
                current.equals("/undefined4") || current.equals("/undefined");
            boolean apply = generic &&
                currentProgram.getDataTypeManager().getDataType("/STGameObjC") != null;
            rows.add(new Row(apply, addr(address), function.getName(true), "return", -1,
                returned.getName(), returned.getVariableStorage().toString(), current,
                returned.getSource().toString(), "pointer:/STGameObjC", true,
                "STGAMEOBJ_BASE_FAMILY",
                "high", "GetObjPtr dispatches among STGameObjC-derived object tables; its " +
                    "result is null-checked and then used through the shared polymorphic vtable"));
        }
    }

    /**
     * Propagate a named pointer return into stack locals that still carry a script-owned
     * anonymous pointer shape.  This is deliberately an instruction-level pass: the
     * decompiler may insert a cast precisely because the stale local type is the thing we
     * are trying to repair.
     */
    private void addReturnedPointerConsumers(List<Row> rows) throws Exception {
        Map<Address, String> producers = new HashMap<>();
        addKnownProducer(producers, 0x0042b620L, "pointer:/STGameObjC");
        addKnownProducer(producers, 0x004028baL, "pointer:/STGameObjC");

        FunctionIterator typed = currentProgram.getFunctionManager().getFunctions(true);
        while (typed.hasNext()) {
            Function function = typed.next();
            DataType type = function.getReturnType();
            if (!(type instanceof Pointer pointer) || pointer.getDataType() == null) continue;
            if (!(pointer.getDataType() instanceof Structure)) continue;
            String base = pointer.getDataType().getPathName();
            if (base.startsWith(POINTER_SHAPES) || base.startsWith(CLASS_POINTEES) ||
                    base.equals("/void") || base.startsWith("/undefined")) continue;
            producers.put(function.getEntryPoint(), typeSpec(type));
        }

        Map<String, Row> unique = new LinkedHashMap<>();
        FunctionIterator callers = currentProgram.getFunctionManager().getFunctions(true);
        while (callers.hasNext()) {
            monitor.checkCancelled();
            Function caller = callers.next();
            for (Instruction instruction : currentProgram.getListing().getInstructions(
                    caller.getBody(), true)) {
                if (!instruction.getFlowType().isCall()) continue;
                String proposed = calledType(instruction, producers);
                if (proposed == null) continue;
                traceReturnedPointer(caller, instruction, proposed, unique);
            }
        }
        rows.addAll(unique.values());
    }

    private void addKnownProducer(Map<Address, String> producers, long offset, String type) {
        Address address = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(offset);
        if (address != null) producers.put(address, type);
    }

    private String calledType(Instruction instruction, Map<Address, String> producers) {
        for (Reference reference : instruction.getReferencesFrom()) {
            if (!reference.getReferenceType().isCall()) continue;
            String type = producers.get(reference.getToAddress());
            if (type != null) return type;
            Function target = currentProgram.getFunctionManager().getFunctionAt(reference.getToAddress());
            if (target != null) {
                type = producers.get(target.getEntryPoint());
                if (type != null) return type;
            }
        }
        return null;
    }

    private void traceReturnedPointer(Function caller, Instruction call, String proposed,
            Map<String, Row> rows) {
        Map<String, Boolean> carriers = new HashMap<>();
        carriers.put("EAX", Boolean.TRUE);
        Instruction instruction = call.getNext();
        for (int distance = 0; instruction != null && distance < 10 &&
                caller.getBody().contains(instruction.getAddress()); distance++,
                instruction = instruction.getNext()) {
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            if (instruction.getFlowType().isCall() || mnemonic.startsWith("RET") ||
                    instruction.getFlowType().isJump()) break;

            Register destination = instruction.getRegister(0);
            Register source = instruction.getRegister(1);
            boolean sourceCarries = source != null && carriers.containsKey(source.getName().toUpperCase(Locale.ROOT));

            if ("MOV".equals(mnemonic) && sourceCarries) {
                if (destination != null) {
                    carriers.put(destination.getName().toUpperCase(Locale.ROOT), Boolean.TRUE);
                }
                else {
                    for (Reference reference : instruction.getReferencesFrom()) {
                        if (!(reference instanceof StackReference stack) ||
                                reference.getOperandIndex() != 0) continue;
                        Variable local = localAt(caller, stack.getStackOffset());
                        if (local != null) addReturnedPointerConsumer(caller, local, proposed, rows);
                    }
                }
            }
            else if (destination != null && writesDestination(mnemonic)) {
                carriers.remove(destination.getName().toUpperCase(Locale.ROOT));
            }
            if (carriers.isEmpty()) break;
        }
    }

    private boolean writesDestination(String mnemonic) {
        return !mnemonic.startsWith("CMP") && !mnemonic.startsWith("TEST") &&
            !mnemonic.startsWith("PUSH");
    }

    private Variable localAt(Function function, int stackOffset) {
        for (Variable local : function.getLocalVariables()) {
            try {
                if (local.isStackVariable() && local.getStackOffset() == stackOffset) return local;
            }
            catch (RuntimeException ignored) { }
        }
        return null;
    }

    private void addReturnedPointerConsumer(Function function, Variable local, String proposed,
            Map<String, Row> rows) {
        DataType currentType = local.getDataType();
        if (!(currentType instanceof Pointer pointer) || pointer.getDataType() == null) return;
        String base = pointer.getDataType().getPathName();
        String comment = local.getComment();
        boolean anonymous = base.startsWith(POINTER_SHAPES) || base.startsWith(CLASS_POINTEES);
        boolean scriptOwned = comment != null && comment.contains("[STPointerShapeApplier]");
        if (!anonymous || !scriptOwned || local.getSource() == SourceType.USER_DEFINED ||
                local.getSource() == SourceType.IMPORTED || typeSpec(currentType).equals(proposed)) return;

        int ordinal = 0;
        for (Variable candidate : function.getLocalVariables()) {
            if (candidate == local) break;
            ordinal++;
        }
        Row row = new Row(true, addr(function.getEntryPoint()), function.getName(true), "local",
            ordinal, local.getName(), local.getVariableStorage().toString(), typeSpec(currentType),
            local.getSource().toString(), proposed, false, "RETURN_TO_LOCAL_FAMILY", "high",
            "direct call return copied through registers into this script-owned anonymous stack local");
        rows.put(addr(function.getEntryPoint()) + "|" + local.getVariableStorage(), row);
    }

    private void writeGroups(Path path, List<GroupRow> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\tfamily_id\tcanonical_type\tmember_type\tlength\tnamed_fields\tevidence\n");
            for (GroupRow row : rows) out.write((row.apply ? "1" : "0") + "\t" + row.id +
                "\t" + row.canonical + "\t" + row.member + "\t" + row.length + "\t" +
                row.fields + "\t" + row.evidence + "\n");
        }
    }

    private void writeRows(Path path, List<Row> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\tfunction_address\texpected_function\ttarget_kind\ttarget_ordinal\t" +
                "expected_name\texpected_storage\texpected_type\texpected_source\tproposed_type\t" +
                "allow_manual_override\t" +
                "family_id\tconfidence\tevidence\n");
            for (Row row : rows) out.write((row.apply ? "1" : "0") + "\t" + row.functionAddress +
                "\t" + clean(row.function) + "\t" + row.targetKind + "\t" + row.ordinal +
                "\t" + clean(row.name) + "\t" + clean(row.storage) + "\t" + row.expectedType +
                "\t" + row.source + "\t" + row.proposedType + "\t" +
                (row.allowManualOverride ? "1" : "0") + "\t" + row.family + "\t" +
                row.confidence + "\t" + clean(row.evidence) + "\n");
        }
    }

    private void writeSummary(Path path, List<GroupRow> groups, List<Row> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("ST cross-function type families\n\n");
            out.write("Exact family members: " + groups.size() + "\nTargets: " + rows.size() +
                "\nAutomatic targets: " + rows.stream().filter(row -> row.apply).count() + "\n");
        }
    }
    private String typeSpec(DataType type) {
        if (type instanceof Pointer pointer && pointer.getDataType() != null)
            return "pointer:" + typeSpec(pointer.getDataType());
        return type == null ? "" : type.getPathName();
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
    private static String clean(String value) { return value == null ? "" : value.replace('\t',' ').replace('\r',' ').replace('\n',' '); }
    private record GroupRow(boolean apply, String id, String canonical, String member,
        int length, int fields, String evidence) {}
    private record Row(boolean apply, String functionAddress, String function, String targetKind,
        int ordinal, String name, String storage, String expectedType, String source,
        String proposedType, boolean allowManualOverride, String family, String confidence,
        String evidence) {}
}
