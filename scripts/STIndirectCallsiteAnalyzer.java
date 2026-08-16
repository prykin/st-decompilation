// Recover exact call-site prototypes for polymorphic slots which lie beyond a physical vtable.
// Read-only: writes indirect_callsite_proposals.tsv and a summary.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Analyze Indirect Call Sites

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Set;
import java.util.TreeMap;
import java.util.TreeSet;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressIterator;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.FunctionDefinition;
import ghidra.program.model.data.DataTypeComponent;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.TypeDef;
import ghidra.program.model.listing.CommentType;
import ghidra.program.model.listing.Function;
import ghidra.program.model.pcode.DataTypeSymbol;
import ghidra.program.model.pcode.HighFunction;
import ghidra.program.model.pcode.HighFunctionDBUtil;
import ghidra.program.model.symbol.Namespace;
import ghidra.program.model.symbol.Symbol;

public class STIndirectCallsiteAnalyzer extends GhidraScript {
    private static final int DECOMPILE_TIMEOUT = 45;
    private static final int MAX_TRACE_DEPTH = 28;
    private static final int MAX_MACHINE_OVERRIDES_PER_FUNCTION = 32;
    private static final String MARKER = "[STIndirectCallsiteApplier]";
    private static final String VTABLE_ROOT = "/SubmarineTitans/Recovered/VTables/";

    private int machineCandidates, functionsDecompiled, exactVtableMatches;
    private int exactReceiverMatches, machineCallableMatches, machineWordReturnMatches,
        retainedMachineOverrides, suppressedMachineOverrides;
    private int conflicts, failures;
    private Map<String, Set<String>> ownersByVtable;
    private final Set<String> suppressedMachineFunctions = new TreeSet<>();

    @Override
    protected void run() throws Exception {
        end(true);
        if (currentProgram == null) {
            printerr("Open the analyzed ST program first.");
            return;
        }
        File selected = outputDirectory();
        if (selected == null) return;
        Path directory = programDirectory(selected);
        Files.createDirectories(directory);
        Path indirect = directory.resolve("indirect_call_proposals.tsv");
        Path sitesPath = directory.resolve("indirect_call_sites.tsv");
        if (!Files.isRegularFile(indirect) || !Files.isRegularFile(sitesPath))
            throw new IllegalArgumentException(
                "Run STIndirectCallAnalyzer before call-site analysis");

        List<DispatchAbi> abis = dispatchAbis(readTsv(indirect));
        ownersByVtable = vtableOwners();
        Map<Integer, List<DispatchAbi>> bySlot = new TreeMap<>();
        for (DispatchAbi abi : abis)
            bySlot.computeIfAbsent(abi.slot, ignored -> new ArrayList<>()).add(abi);

        Map<String, Site> sites = new TreeMap<>();
        Map<String, List<Site>> byFunction = new TreeMap<>();
        for (Map<String, String> row : readTsv(sitesPath)) {
            int slot = integer(row.get("slot_offset"), -1);
            int pushes = integer(row.get("observed_pushes"), -1);
            String ecx = text(row.get("last_ecx_assignment")).trim();
            String receiverRegister = text(row.get("vtable_receiver_register")).trim();
            if (slot < 0 || pushes < 0 || pushes > 16 || ecx.isBlank()) continue;
            Site site = new Site(text(row.get("function_address")),
                text(row.get("function")), text(row.get("call_address")), slot, pushes,
                ecx, receiverRegister);
            sites.put(site.callAddress, site);
            byFunction.computeIfAbsent(site.functionAddress, ignored -> new ArrayList<>())
                .add(site);
        }
        machineCandidates = sites.size();

        Map<String, Row> rows = new TreeMap<>();
        DecompInterface decompiler = new DecompInterface();
        decompiler.toggleCCode(false);
        decompiler.toggleSyntaxTree(true);
        if (!decompiler.openProgram(currentProgram))
            throw new IllegalStateException("Decompiler could not open current program");
        try {
            int cachedFunctions = 0;
            for (Map.Entry<String, List<Site>> entry : byFunction.entrySet()) {
                monitor.checkCancelled();
                Address address = address(entry.getKey());
                Function function = address == null ? null :
                    currentProgram.getFunctionManager().getFunctionAt(address);
                if (function == null) continue;
                analyzeFunction(function, entry.getValue(), bySlot, rows, decompiler);
                // HighFunction graphs are large and none of their object identity is
                // evidence for a later caller.  Keep a small bounded batch: flushing
                // after every function is unnecessarily expensive, while retaining
                // the whole corpus can keep thousands of SSA graphs alive.
                if (++cachedFunctions == 32) {
                    decompiler.flushCache();
                    cachedFunctions = 0;
                }
            }
            if (cachedFunctions != 0) decompiler.flushCache();
        }
        finally { decompiler.dispose(); }

        suppressDenseMachineFallbacks(rows);
        addCleanupRows(rows, sites);
        List<Row> ordered = new ArrayList<>(rows.values());
        ordered.sort(Comparator.comparing((Row row) -> row.functionAddress)
            .thenComparing(row -> row.callAddress));
        writeRows(directory.resolve("indirect_callsite_proposals.tsv"), ordered);
        writeSummary(directory.resolve("indirect_callsite_summary.txt"), ordered, abis.size());
        println("Indirect-callsite analysis complete: " + directory.toAbsolutePath());
        println("Machine candidates=" + machineCandidates + ", proposals=" +
            ordered.size() + ", apply=" + ordered.stream().filter(row -> row.apply).count() +
            ", cleanup=" + ordered.stream().filter(row -> row.action.equals("cleanup")).count() +
            ", failures=" + failures);
    }

    private List<DispatchAbi> dispatchAbis(List<Map<String, String>> rows) {
        Map<String, Interface> interfaces = new HashMap<>();
        for (Map<String, String> row : rows) {
            if (!"dispatch_interface_audit".equals(row.get("target_kind"))) continue;
            String dispatch = text(row.get("proposed_vtable_type"));
            String physical = stripPointer(text(row.get("receiver_type")));
            String owner = text(row.get("structure_path"));
            if (!dispatch.isBlank() && physical.startsWith(VTABLE_ROOT) &&
                    owner.startsWith("/"))
                interfaces.put(dispatch, new Interface(owner, physical));
        }
        List<DispatchAbi> result = new ArrayList<>();
        for (Map<String, String> row : rows) {
            if (!"dispatch_slot_audit".equals(row.get("target_kind"))) continue;
            String mode = text(row.get("signature_mode"));
            if (!mode.startsWith("synthetic_dispatch_")) continue;
            Interface view = interfaces.get(text(row.get("proposed_vtable_type")));
            if (view == null) continue;
            int slot = integer(row.get("component_offset"), -1);
            int count = integer(row.get("stack_parameter_count"), -1);
            String receiver = text(row.get("receiver_type"));
            String returned = text(row.get("proposed_return_type"));
            String parameters = text(row.get("proposed_parameter_types"));
            if (slot < 0 || count < 0 || receiver.isBlank() || returned.isBlank()) continue;
            String convention = mode.endsWith("thiscall") ? "__thiscall" :
                mode.endsWith("stdcall") ? "__stdcall" : "";
            if (convention.isBlank()) continue;
            result.add(new DispatchAbi(view.owner, view.physicalVtable, slot, convention,
                receiver, count, parameters, returned,
                text(row.get("signature_function_address")),
                text(row.get("signature_function")), text(row.get("evidence"))));
        }
        return result;
    }

    private void analyzeFunction(Function function, List<Site> candidateSites,
            Map<Integer, List<DispatchAbi>> bySlot, Map<String, Row> rows,
            DecompInterface decompiler) {
        try {
            DecompileResults result = decompiler.decompileFunction(function,
                DECOMPILE_TIMEOUT, monitor);
            if (result == null || !result.decompileCompleted()) {
                failures++;
                return;
            }
            functionsDecompiled++;
            Map<String, Site> sites = new HashMap<>();
            for (Site site : candidateSites) sites.put(site.callAddress, site);
            Object high = result.getClass().getMethod("getHighFunction").invoke(result);
            @SuppressWarnings("unchecked")
            Iterator<Object> operations = (Iterator<Object>)high.getClass()
                .getMethod("getPcodeOps").invoke(high);
            while (operations.hasNext()) {
                Object operation = operations.next();
                if (!"CALLIND".equals(mnemonic(operation))) continue;
                String callAddress = site(operation);
                Site site = sites.get(callAddress);
                if (site == null || inputCount(operation) < 1) continue;
                Set<String> vtables = vtablePaths(input(operation, 0), 0, new HashSet<>());
                Set<String> receivers = receiverPaths(operation);
                List<DispatchAbi> matches = new ArrayList<>();
                for (DispatchAbi abi : bySlot.getOrDefault(site.slot, List.of())) {
                    if (abi.stackParameters != site.pushes) continue;
                    boolean exactVtable = vtables.equals(Set.of(abi.physicalVtable));
                    boolean exactReceiver = receivers.equals(Set.of(abi.owner));
                    if (!exactVtable && !exactReceiver) continue;
                    if (exactVtable) exactVtableMatches++;
                    else exactReceiverMatches++;
                    matches.add(abi);
                }
                DispatchAbi agreed = matches.isEmpty() ?
                    machineCallable(operation, site, vtables) : matches.get(0);
                if (agreed == null) continue;
                if (!matches.isEmpty() && matches.stream().anyMatch(value ->
                        !value.signatureKey().equals(agreed.signatureKey()))) {
                    conflicts++;
                    continue;
                }
                Address call = address(callAddress);
                FunctionDefinition existing = existingOverride(function, call);
                String current = fingerprint(existing);
                String desired = agreed.signatureKey();
                boolean marker = hasMarker(call);
                boolean apply = existing == null || desired.equals(current) || marker;
                String reason = "exact CALLIND at physical slot 0x" +
                    Integer.toHexString(site.slot).toUpperCase(Locale.ROOT) +
                    "; observed_pushes=" + site.pushes + "; ECX=" + site.ecx +
                    "; physical_vtable_paths=" + vtables + "; receiver_paths=" + receivers +
                    "; " + agreed.evidence +
                    (apply ? "" : "; foreign call override preserved: " + current);
                rows.put(callAddress, new Row(apply, "apply", site.functionAddress,
                    site.function, callAddress, site.slot,
                    existing == null ? "none" : current, agreed.convention,
                    agreed.receiverType, agreed.stackParameters, agreed.parameterTypes,
                    agreed.returnType, agreed.functionAddress, agreed.function,
                    apply ? "high" : "conflict", reason));
            }
        }
        catch (Exception exception) { failures++; }
    }

    private Set<String> vtablePaths(Object node, int depth, Set<Object> seen) throws Exception {
        Set<String> result = new TreeSet<>();
        if (node == null || depth > MAX_TRACE_DEPTH || !seen.add(node)) return result;
        String direct = structurePath(dataType(node));
        if (vtablePath(direct) && !direct.endsWith("DispatchVTable"))
            result.add(direct);
        Object definition = definition(node);
        if (definition == null) return result;
        String mnemonic = mnemonic(definition);
        if (!Set.of("LOAD", "COPY", "CAST", "INDIRECT", "PTRSUB", "PTRADD",
                "INT_ADD", "MULTIEQUAL", "SUBPIECE").contains(mnemonic)) return result;
        for (int index = 0; index < inputCount(definition); index++)
            result.addAll(vtablePaths(input(definition, index), depth + 1, seen));
        return result;
    }

    private DispatchAbi machineCallable(Object operation, Site site,
            Set<String> vtables) throws Exception {
        if (vtables.size() != 1 || site.receiverRegister.isBlank() ||
                !register(site.ecx).equals(register(site.receiverRegister))) return null;
        String vtable = vtables.iterator().next();
        // A physical function-pointer component is stronger ABI evidence than a
        // single use.  The fallback exists for genuinely raw void*/missing slots;
        // overriding an already callable slot can manufacture synthetic live-ins
        // when the current call use observes only part of its established ABI.
        if (callableVtableSlot(vtable, site.slot)) return null;
        Set<String> owners = ownersByVtable.getOrDefault(vtable, Set.of());
        if (owners.size() != 1) return null;
        String owner = owners.iterator().next();
        int pcodeArguments = inputCount(operation) - 1;
        Set<String> renderedReceivers = receiverPaths(operation);
        boolean explicitReceiver = renderedReceivers.equals(Set.of(owner));
        if (pcodeArguments != site.pushes &&
                !(explicitReceiver && pcodeArguments == site.pushes + 1)) return null;
        String parameters = repeated("/undefined4", site.pushes);
        String returned = machineReturn(operation);
        if (returned.isBlank()) return null;
        machineCallableMatches++;
        return new DispatchAbi(owner, vtable, site.slot, "__thiscall",
            "pointer:" + owner, site.pushes, parameters, returned, "", "",
            "machine callable fallback: exact MOV tableReg,[receiverReg] and " +
                "MOV ECX,receiverReg agree; unique offset-zero owner for " + vtable +
                "; p-code arguments=" + pcodeArguments +
                "; conservative machine-word stack parameters");
    }

    private boolean callableVtableSlot(String path, int offset) {
        DataType type = currentProgram.getDataTypeManager().getDataType(path);
        type = base(type);
        if (!(type instanceof Structure structure) || offset < 0 ||
                offset >= structure.getLength()) return false;
        DataTypeComponent component = structure.getComponentAt(offset);
        if (component == null || component.getOffset() != offset) return false;
        return base(component.getDataType()) instanceof FunctionDefinition;
    }

    private DataType base(DataType type) {
        Set<DataType> seen = new HashSet<>();
        while (type != null && seen.add(type)) {
            if (type instanceof Pointer pointer) type = pointer.getDataType();
            else if (type instanceof TypeDef alias) type = alias.getBaseDataType();
            else break;
        }
        return type;
    }

    private String machineReturn(Object operation) {
        try {
            Object output = operation.getClass().getMethod("getOutput").invoke(operation);
            if (output == null) return "/void";
            int size = ((Number)output.getClass().getMethod("getSize")
                .invoke(output)).intValue();
            // A CALLIND output which remains in the HighFunction is an exact
            // use of the call-defined return register, not a guess from the
            // rendered C type.  On this 32-bit x86 image a complete four-byte
            // value proves only the machine-word return role.  It does not
            // license signedness, a pointer pointee, or a semantic typedef.
            if (size == currentProgram.getDefaultPointerSize()) {
                machineWordReturnMatches++;
                return "/undefined4";
            }
            return "";
        }
        catch (Exception ignored) { return ""; }
    }

    private Map<String, Set<String>> vtableOwners() {
        Map<String, Set<String>> result = new TreeMap<>();
        Iterator<DataType> iterator = currentProgram.getDataTypeManager().getAllDataTypes();
        while (iterator.hasNext()) {
            DataType value = iterator.next();
            if (!(value instanceof Structure owner) || owner.getLength() <
                    currentProgram.getDefaultPointerSize()) continue;
            DataTypeComponent component = owner.getComponentAt(0);
            if (component == null || !(component.getDataType() instanceof Pointer pointer))
                continue;
            String path = structurePath(pointer);
            if (!vtablePath(path)) continue;
            String field = text(component.getFieldName());
            if (!field.equalsIgnoreCase("vtable") && !field.equalsIgnoreCase("vptr"))
                continue;
            result.computeIfAbsent(path, ignored -> new TreeSet<>())
                .add(owner.getPathName());
        }
        return result;
    }

    private boolean vtablePath(String path) {
        String leaf = path.substring(path.lastIndexOf('/') + 1);
        return !path.isBlank() && leaf.endsWith("VTable");
    }

    private String register(String value) {
        String normalized = text(value).trim().toUpperCase(Locale.ROOT);
        return normalized.matches("[A-Z]{2,3}") ? normalized : "";
    }

    private String repeated(String value, int count) {
        List<String> result = new ArrayList<>();
        for (int index = 0; index < count; index++) result.add(value);
        return String.join(";", result);
    }

    private Set<String> receiverPaths(Object operation) throws Exception {
        Set<String> result = new TreeSet<>();
        for (int index = 1; index < inputCount(operation); index++) {
            String path = structurePath(dataType(input(operation, index)));
            if (!path.isBlank() && !path.startsWith(VTABLE_ROOT)) result.add(path);
        }
        return result;
    }

    private String structurePath(DataType type) {
        Set<DataType> seen = new HashSet<>();
        while (type != null && seen.add(type)) {
            if (type instanceof Pointer pointer) type = pointer.getDataType();
            else if (type instanceof TypeDef alias) type = alias.getBaseDataType();
            else break;
        }
        return type instanceof Structure structure ? structure.getPathName() : "";
    }

    private void addCleanupRows(Map<String, Row> rows, Map<String, Site> sites) {
        AddressIterator iterator = currentProgram.getListing().getCommentAddressIterator(
            CommentType.EOL, currentProgram.getMemory(), true);
        while (iterator.hasNext()) {
            Address call = iterator.next();
            if (!hasMarker(call) || rows.containsKey(addr(call))) continue;
            Function function = currentProgram.getFunctionManager().getFunctionContaining(call);
            if (function == null) continue;
            FunctionDefinition existing = existingOverride(function, call);
            Site site = sites.get(addr(call));
            Row retained = retainedMachineOverride(function, call, site, existing);
            if (retained != null) {
                rows.put(addr(call), retained);
                retainedMachineOverrides++;
                continue;
            }
            rows.put(addr(call), new Row(true, "cleanup", addr(function.getEntryPoint()),
                function.getName(true), addr(call), -1,
                existing == null ? "none" : fingerprint(existing), "", "", -1, "", "",
                "", "", "cleanup", "script-owned call-site override no longer has exact " +
                    "physical-vtable/dispatch evidence"));
        }
    }

    private Row retainedMachineOverride(Function function, Address call, Site site,
            FunctionDefinition existing) {
        if (suppressedMachineFunctions.contains(addr(function.getEntryPoint()))) return null;
        if (site == null || existing == null || !"__thiscall".equals(
                existing.getCallingConventionName()) || site.receiverRegister.isBlank() ||
                !register(site.ecx).equals(register(site.receiverRegister)) ||
                !(hasMarkerMode(call, "machine-void") ||
                  hasMarkerMode(call, "machine-word"))) return null;
        String returned = typeSpec(existing.getReturnType());
        if (hasMarkerMode(call, "machine-void") && !"/void".equals(returned)) return null;
        if (hasMarkerMode(call, "machine-word") && !"/undefined4".equals(returned))
            return null;
        ghidra.program.model.data.ParameterDefinition[] arguments = existing.getArguments();
        if (arguments.length != site.pushes + 1) return null;
        String owner = structurePath(arguments[0].getDataType());
        if (owner.isBlank()) return null;
        Set<String> vtables = new TreeSet<>();
        for (Map.Entry<String, Set<String>> entry : ownersByVtable.entrySet())
            if (entry.getValue().equals(Set.of(owner))) vtables.add(entry.getKey());
        if (vtables.size() != 1) return null;
        String vtable = vtables.iterator().next();
        if (callableVtableSlot(vtable, site.slot)) return null;
        List<String> stack = new ArrayList<>();
        for (int index = 1; index < arguments.length; index++)
            stack.add(typeSpec(arguments[index].getDataType()));
        String current = fingerprint(existing);
        return new Row(true, "apply", site.functionAddress, site.function,
            site.callAddress, site.slot, current, "__thiscall",
            typeSpec(arguments[0].getDataType()), site.pushes, String.join(";", stack),
            typeSpec(existing.getReturnType()), "", "", "high",
            "retained script-owned machine callable: exact listing MOV " +
                "tableReg,[receiverReg] and MOV ECX,receiverReg remain; unique " +
                "offset-zero owner " + owner + " for raw slot 0x" +
                Integer.toHexString(site.slot).toUpperCase(Locale.ROOT) + " in " + vtable);
    }

    private void suppressDenseMachineFallbacks(Map<String, Row> rows) {
        Map<String, Integer> counts = new TreeMap<>();
        for (Row row : rows.values()) {
            if (machineFallback(row))
                counts.merge(row.functionAddress, 1, Integer::sum);
        }
        for (Map.Entry<String, Integer> entry : counts.entrySet()) {
            if (entry.getValue() > MAX_MACHINE_OVERRIDES_PER_FUNCTION)
                suppressedMachineFunctions.add(entry.getKey());
        }
        if (suppressedMachineFunctions.isEmpty()) return;
        List<String> remove = new ArrayList<>();
        for (Map.Entry<String, Row> entry : rows.entrySet()) {
            if (suppressedMachineFunctions.contains(entry.getValue().functionAddress) &&
                    machineFallback(entry.getValue())) remove.add(entry.getKey());
        }
        for (String call : remove) rows.remove(call);
        suppressedMachineOverrides += remove.size();
    }

    private boolean machineFallback(Row row) {
        return row.action.equals("apply") && row.signatureAddress.isBlank() &&
            row.evidence.contains("machine callable fallback");
    }

    private FunctionDefinition existingOverride(Function function, Address call) {
        if (function == null || call == null) return null;
        Namespace root = HighFunction.findOverrideSpace(function);
        if (root == null) return null;
        Symbol[] symbols = currentProgram.getSymbolTable().getSymbols(call);
        FunctionDefinition agreed = null;
        for (Symbol symbol : symbols) {
            if (!root.equals(symbol.getParentNamespace())) continue;
            DataTypeSymbol value = HighFunctionDBUtil.readOverride(symbol);
            if (value == null || !(value.getDataType() instanceof FunctionDefinition definition))
                continue;
            if (agreed != null && !fingerprint(agreed).equals(fingerprint(definition)))
                return null;
            agreed = definition;
        }
        return agreed;
    }

    private String fingerprint(FunctionDefinition definition) {
        if (definition == null) return "";
        List<String> parts = new ArrayList<>();
        parts.add(text(definition.getCallingConventionName()));
        parts.add(typeSpec(definition.getReturnType()));
        for (ghidra.program.model.data.ParameterDefinition argument : definition.getArguments())
            parts.add(typeSpec(argument.getDataType()));
        return String.join(";", parts);
    }

    private boolean hasMarker(Address address) {
        String comment = address == null ? null :
            currentProgram.getListing().getComment(CommentType.EOL, address);
        return text(comment).contains(MARKER);
    }

    private boolean hasMarkerMode(Address address, String mode) {
        String comment = address == null ? null :
            currentProgram.getListing().getComment(CommentType.EOL, address);
        return text(comment).contains(MARKER) &&
            text(comment).contains("mode=" + mode);
    }

    private Object definition(Object node) {
        try { return node.getClass().getMethod("getDef").invoke(node); }
        catch (Exception ignored) { return null; }
    }
    private Object input(Object operation, int index) throws Exception {
        return operation.getClass().getMethod("getInput", int.class).invoke(operation, index);
    }
    private int inputCount(Object operation) throws Exception {
        return ((Number)operation.getClass().getMethod("getNumInputs").invoke(operation)).intValue();
    }
    private String mnemonic(Object operation) throws Exception {
        return String.valueOf(operation.getClass().getMethod("getMnemonic").invoke(operation));
    }
    private String site(Object operation) {
        try {
            Object sequence = operation.getClass().getMethod("getSeqnum").invoke(operation);
            return addr((Address)sequence.getClass().getMethod("getTarget").invoke(sequence));
        }
        catch (Exception ignored) { return ""; }
    }
    private DataType dataType(Object node) {
        try {
            Object high = node.getClass().getMethod("getHigh").invoke(node);
            return high == null ? null :
                (DataType)high.getClass().getMethod("getDataType").invoke(high);
        }
        catch (Exception ignored) { return null; }
    }

    private List<Map<String, String>> readTsv(Path path) throws Exception {
        List<String> lines = Files.readAllLines(path, StandardCharsets.UTF_8);
        if (lines.isEmpty()) return List.of();
        String[] header = lines.get(0).split("\\t", -1);
        List<Map<String, String>> result = new ArrayList<>();
        for (int line = 1; line < lines.size(); line++) {
            if (lines.get(line).isBlank()) continue;
            String[] values = lines.get(line).split("\\t", -1);
            if (values.length != header.length) continue;
            Map<String, String> row = new LinkedHashMap<>();
            for (int column = 0; column < header.length; column++)
                row.put(header[column], values[column]);
            result.add(row);
        }
        return result;
    }

    private void writeRows(Path path, List<Row> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\taction\tfunction_address\tfunction_name\tcall_address\t" +
                "slot_offset\texpected_override\tproposed_calling_convention\t" +
                "receiver_type\tstack_parameter_count\tproposed_parameter_types\t" +
                "proposed_return_type\tsignature_function_address\tsignature_function\t" +
                "confidence\tevidence\n");
            for (Row row : rows)
                out.write(bit(row.apply) + "\t" + row.action + "\t" + row.functionAddress +
                    "\t" + clean(row.function) + "\t" + row.callAddress + "\t" +
                    (row.slot < 0 ? "" : row.slot) + "\t" + row.expectedOverride + "\t" +
                    row.convention + "\t" + row.receiverType + "\t" +
                    (row.stackParameters < 0 ? "" : row.stackParameters) + "\t" +
                    row.parameterTypes + "\t" + row.returnType + "\t" +
                    row.signatureAddress + "\t" + clean(row.signatureFunction) + "\t" +
                    row.confidence + "\t" + clean(row.evidence) + "\n");
        }
    }

    private void writeSummary(Path path, List<Row> rows, int abiCount) throws Exception {
        Files.write(path, List.of(
            "program=" + currentProgram.getName(),
            "dispatch_abis=" + abiCount,
            "machine_candidates=" + machineCandidates,
            "functions_decompiled=" + functionsDecompiled,
            "exact_vtable_matches=" + exactVtableMatches,
            "exact_receiver_matches=" + exactReceiverMatches,
            "machine_callable_matches=" + machineCallableMatches,
            "machine_word_return_matches=" + machineWordReturnMatches,
            "retained_machine_overrides=" + retainedMachineOverrides,
            "suppressed_dense_machine_functions=" + suppressedMachineFunctions.size(),
            "suppressed_dense_machine_overrides=" + suppressedMachineOverrides,
            "proposals=" + rows.size(),
            "auto_apply=" + rows.stream().filter(row -> row.apply).count(),
            "cleanup=" + rows.stream().filter(row -> row.action.equals("cleanup")).count(),
            "conflicts=" + conflicts,
            "decompile_failures=" + failures,
            "policy=An override requires either exact physical dispatch consensus or an " +
                "exact machine MOV tableReg,[receiverReg] plus MOV ECX,receiverReg chain, " +
                "one unique offset-zero vtable owner, and matching p-code/machine arity. " +
                "Without target-family evidence the return is void only when unused, or " +
                "neutral undefined4 when the CALLIND owns one complete 32-bit output.",
            "policy_density=Machine-only fallback is disabled when one function would " +
                "receive more than " + MAX_MACHINE_OVERRIDES_PER_FUNCTION + " overrides. " +
                "A dense set of use-only prototypes is not independent ABI evidence and " +
                "can perturb whole-function SSA/register liveness; previously installed " +
                "script-owned overrides in that function are removed.",
            "policy_layout=The override types one call instruction only; it never widens a " +
                "physical class vptr or mutates a synthetic dispatch table."
        ), StandardCharsets.UTF_8);
    }

    private File outputDirectory() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless()) throw new IllegalArgumentException("Recovery directory required");
        return askDirectory("Select recovery output directory", "Select");
    }
    private Path programDirectory(File selected) {
        Path path = selected.toPath().toAbsolutePath().normalize();
        return path.getFileName() != null && path.getFileName().toString()
            .equals(currentProgram.getName()) ? path : path.resolve(currentProgram.getName());
    }
    private String typeSpec(DataType type) {
        if (type instanceof Pointer pointer && pointer.getDataType() != null)
            return "pointer:" + typeSpec(pointer.getDataType());
        return type == null ? "" : type.getPathName();
    }
    private String stripPointer(String value) {
        while (value.startsWith("pointer:")) value = value.substring("pointer:".length());
        return value;
    }
    private int integer(String value, int fallback) {
        try { return Integer.parseInt(text(value).trim()); }
        catch (NumberFormatException ignored) { return fallback; }
    }
    private Address address(String value) {
        try { return currentProgram.getAddressFactory().getAddress(value); }
        catch (Exception ignored) { return null; }
    }
    private String addr(Address address) {
        return address == null ? "" : address.toString().toUpperCase(Locale.ROOT);
    }
    private static String bit(boolean value) { return value ? "1" : "0"; }
    private static String text(String value) { return value == null ? "" : value; }
    private static String clean(String value) {
        return text(value).replace('\t', ' ').replace('\r', ' ').replace('\n', ' ');
    }

    private record Interface(String owner, String physicalVtable) { }
    private record DispatchAbi(String owner, String physicalVtable, int slot,
        String convention, String receiverType, int stackParameters, String parameterTypes,
        String returnType, String functionAddress, String function, String evidence) {
        String signatureKey() {
            List<String> parts = new ArrayList<>();
            parts.add(convention);
            parts.add(returnType);
            if ("__thiscall".equals(convention)) parts.add(receiverType);
            if (!parameterTypes.isBlank())
                for (String parameter : parameterTypes.split(";", -1)) parts.add(parameter);
            return String.join(";", parts);
        }
    }
    private record Site(String functionAddress, String function, String callAddress,
        int slot, int pushes, String ecx, String receiverRegister) { }
    private record Row(boolean apply, String action, String functionAddress, String function,
        String callAddress, int slot, String expectedOverride, String convention,
        String receiverType, int stackParameters, String parameterTypes, String returnType,
        String signatureAddress, String signatureFunction, String confidence, String evidence) { }
}
