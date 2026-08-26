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
import ghidra.program.model.lang.Register;
import ghidra.program.model.scalar.Scalar;
import ghidra.program.model.listing.AutoParameterType;
import ghidra.program.model.listing.CommentType;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Listing;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.pcode.DataTypeSymbol;
import ghidra.program.model.pcode.HighFunction;
import ghidra.program.model.pcode.HighFunctionDBUtil;
import ghidra.program.model.symbol.Namespace;
import ghidra.program.model.symbol.Symbol;

public class STIndirectCallsiteAnalyzer extends GhidraScript {
    private static final int DECOMPILE_TIMEOUT = 600;
    private static final int MAX_TRACE_DEPTH = 28;
    private static final int MAX_MACHINE_OVERRIDES_PER_FUNCTION = 32;
    private static final String MARKER = "[STIndirectCallsiteApplier]";
    private static final String VTABLE_ROOT = "/SubmarineTitans/Recovered/VTables/";

    private int machineCandidates, functionsDecompiled, exactVtableMatches;
    private int exactReceiverMatches, machineCallableMatches, machineWordReturnMatches,
        machineFloatReturnMatches, machineWideUseSiteMatches,
        retainedMachineOverrides, suppressedMachineOverrides, densePhysicalSlots,
        cfgRecoveredReceiverSites;
    private int conflicts, failures;
    private final List<String> decompileFailureFunctions = new ArrayList<>();
    private Map<String, Set<String>> ownersByVtable;
    private Map<String, PolymorphicReceiverCallsite> polymorphicReceiverCallsites = Map.of();
    private final Set<String> suppressedMachineFunctions = new TreeSet<>();
    private final Map<String, Integer> exactMachineReceiverSites = new TreeMap<>();
    private final Map<String, DenseSlotEvidence> denseSlotEvidence = new TreeMap<>();
    private final Set<String> stagedSingleArgumentSites = new TreeSet<>();
    private final Map<String, Integer> machineSitePushCounts = new HashMap<>();
    private final Map<String, CallableFamilyAudit> callableFamilyAudits = new TreeMap<>();
    private final Map<String, Boolean> exactReceiverCache = new HashMap<>();
    private final Map<Address, Map<Address, List<Address>>> predecessorCache = new HashMap<>();

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
        Path polymorphicPath = directory.resolve("polymorphic_receiver_callsites.tsv");
        if (Files.isRegularFile(polymorphicPath))
            polymorphicReceiverCallsites = polymorphicReceiverCallsites(
                readTsv(polymorphicPath));

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
            machineSitePushCounts.put(site.callAddress, site.pushes);
            byFunction.computeIfAbsent(site.functionAddress, ignored -> new ArrayList<>())
                .add(site);
        }
        machineCandidates = sites.size();
        recoverStagedSingleArgumentSites(byFunction);

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

        addDensePhysicalSlotRows(rows);
        suppressDenseMachineFallbacks(rows);
        addCleanupRows(rows, sites);
        List<Row> ordered = new ArrayList<>(rows.values());
        ordered.sort(Comparator.comparing((Row row) -> row.functionAddress)
            .thenComparing(row -> row.callAddress));
        writeRows(directory.resolve("indirect_callsite_proposals.tsv"), ordered);
        writeCallableFamilyAudit(directory.resolve("callable_family_audit.tsv"));
        writeSummary(directory.resolve("indirect_callsite_summary.txt"), ordered, abis.size());
        println("Indirect-callsite analysis complete: " + directory.toAbsolutePath());
        println("Machine candidates=" + machineCandidates + ", proposals=" +
            ordered.size() + ", apply=" + ordered.stream().filter(row -> row.apply).count() +
            ", cleanup=" + ordered.stream().filter(row -> row.action.equals("cleanup")).count() +
            ", failures=" + failures);
        if (failures != 0)
            throw new IllegalStateException("Indirect-callsite decompilation remained " +
                "incomplete; failures=" + failures +
                "; see indirect_callsite_summary.txt");
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

    /**
     * Separate one real CALLIND argument from words staged for the following
     * direct call.  MSVC commonly interleaves parser calls with PUSHes for one
     * later cdecl/fastcall invocation.  The raw "pushes since previous CALL"
     * count then overstates the indirect arity.  A block is closed only when the
     * exact direct-call cleanup plus one word per intervening computed call
     * accounts for every PUSH; no arbitrary ESP write or control-flow boundary
     * may occur.  This proves geometry only, never a semantic parameter type.
     */
    private void recoverStagedSingleArgumentSites(
            Map<String, List<Site>> byFunction) {
        Listing listing = currentProgram.getListing();
        for (Map.Entry<String, List<Site>> entry : byFunction.entrySet()) {
            Address functionAddress = address(entry.getKey());
            Function function = functionAddress == null ? null :
                currentProgram.getFunctionManager().getFunctionAt(functionAddress);
            if (function == null) continue;
            Map<String, Site> candidates = new HashMap<>();
            for (Site site : entry.getValue()) candidates.put(site.callAddress, site);
            InstructionIterator iterator = listing.getInstructions(function.getBody(), true);
            while (iterator.hasNext()) {
                Instruction outerCall = iterator.next();
                if (!outerCall.getFlowType().isCall() ||
                        outerCall.getFlowType().isComputed()) continue;
                int outerWords = directStackArgumentWords(outerCall);
                if (outerWords < 0) continue;
                int pushes = 0;
                List<Site> inner = new ArrayList<>();
                boolean closed = true;
                Instruction instruction = listing.getInstructionBefore(
                    outerCall.getAddress());
                for (int count = 0; instruction != null && count < 256; count++) {
                    if (!function.getBody().contains(instruction.getAddress())) {
                        closed = false;
                        break;
                    }
                    if (instruction.getFlowType().isJump() ||
                            instruction.getFlowType().isTerminal()) break;
                    if (instruction.getFlowType().isCall()) {
                        Site site = candidates.get(addr(instruction.getAddress()));
                        if (site == null) break;
                        inner.add(site);
                        instruction = listing.getInstructionBefore(
                            instruction.getAddress());
                        continue;
                    }
                    if ("PUSH".equalsIgnoreCase(instruction.getMnemonicString()))
                        pushes++;
                    else if (writesRegister(instruction, Set.of("ESP"))) {
                        closed = false;
                        break;
                    }
                    instruction = listing.getInstructionBefore(
                        instruction.getAddress());
                }
                if (!closed || inner.isEmpty() || pushes != outerWords + inner.size() ||
                        inner.stream().anyMatch(site -> site.pushes < 1)) continue;
                for (Site site : inner) stagedSingleArgumentSites.add(site.callAddress);
            }
        }
    }

    private int directStackArgumentWords(Instruction call) {
        Instruction next = currentProgram.getListing().getInstructionAfter(
            call.getAddress());
        if (next != null && "ADD".equalsIgnoreCase(next.getMnemonicString()) &&
                next.getNumOperands() >= 2 &&
                "ESP".equals(register(next.getDefaultOperandRepresentation(0)))) {
            Scalar scalar = next.getScalar(1);
            long bytes = scalar == null ? -1 : scalar.getUnsignedValue();
            if (bytes >= 0 && bytes % currentProgram.getDefaultPointerSize() == 0)
                return (int)(bytes / currentProgram.getDefaultPointerSize());
        }
        Address[] flows = call.getFlows();
        Function target = flows.length == 1 ? currentProgram.getFunctionManager()
            .getFunctionAt(flows[0]) : null;
        if (target == null) return -1;
        Function resolved = target.getThunkedFunction(true);
        if (resolved != null) target = resolved;
        int bytes = target.getStackPurgeSize();
        return bytes >= 0 && bytes % currentProgram.getDefaultPointerSize() == 0 ?
            bytes / currentProgram.getDefaultPointerSize() : -1;
    }

    private int effectiveStackParameters(Site site) {
        return stagedSingleArgumentSites.contains(site.callAddress) ? 1 : site.pushes;
    }

    private int sitePushCount(String callAddress) {
        return machineSitePushCounts.getOrDefault(callAddress, -1);
    }

    private void analyzeFunction(Function function, List<Site> candidateSites,
            Map<Integer, List<DispatchAbi>> bySlot, Map<String, Row> rows,
            DecompInterface decompiler) {
        observeMachineDenseSlots(function, candidateSites);
        try {
            DecompileResults result = decompiler.decompileFunction(function,
                DECOMPILE_TIMEOUT, monitor);
            if (result == null || !result.decompileCompleted()) {
                failures++;
                String reason = result == null ? "no_result" :
                    text(result.getErrorMessage());
                decompileFailureFunctions.add(addr(function.getEntryPoint()) + ":" +
                    clean(reason));
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
                recordCallableFamilyAudit(function, site, vtables, receivers);
                observeDensePhysicalSlot(operation, site, vtables);
                DispatchAbi wideUseSite = machineWideUseSite(site, vtables);
                DispatchAbi stagedUseSite = machineStagedUseSite(site, vtables);
                DispatchAbi physicalUseSite = physicalUseSite(function, site, vtables,
                    receivers);
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
                DispatchAbi agreed = wideUseSite != null ? wideUseSite :
                    stagedUseSite != null ? stagedUseSite :
                    !matches.isEmpty() ? matches.get(0) :
                    physicalUseSite != null ? physicalUseSite :
                    machineCallable(function, operation, site, vtables, rows);
                if (agreed == null) continue;
                DispatchAbi selected = agreed;
                if (!matches.isEmpty() && matches.stream().anyMatch(value ->
                        !value.signatureKey().equals(selected.signatureKey()))) {
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

    private DispatchAbi machineCallable(Function function, Object operation, Site site,
            Set<String> vtables, Map<String, Row> rows) throws Exception {
        if (vtables.size() != 1 || site.receiverRegister.isBlank() ||
                !exactMachineReceiver(function, site)) return null;
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
        boolean pcodeAgrees = pcodeArguments == site.pushes ||
            explicitReceiver && pcodeArguments == site.pushes + 1;
        long zeroArgumentSiblings = rows.values().stream().filter(row ->
            row.apply && row.functionAddress.equals(site.functionAddress) &&
            row.slot == site.slot && row.stackParameters == 0 &&
            "__thiscall".equals(row.convention) &&
            ("pointer:" + owner).equals(row.receiverType)).count();
        // High p-code can inherit ghost stack arguments from an earlier lifetime at
        // one branch-local CALLIND.  Do not trust that rendering over the machine:
        // admit the zero-argument ABI only after two earlier calls in the same
        // function independently prove the identical receiver/slot ABI with no
        // pushes.  This is address-independent and cannot widen a one-off call.
        boolean siblingZeroArgumentConsensus = site.pushes == 0 &&
            pcodeArguments > 1 && zeroArgumentSiblings >= 2;
        if (!pcodeAgrees && !siblingZeroArgumentConsensus) return null;
        String parameters = repeated("/undefined4", site.pushes);
        String returned = machineReturn(operation, site.callAddress);
        if (returned.isBlank()) return null;
        machineCallableMatches++;
        return new DispatchAbi(owner, vtable, site.slot, "__thiscall",
            "pointer:" + owner, site.pushes, parameters, returned, "", "",
            "machine callable fallback: exact MOV tableReg,[receiverReg] and " +
                "live ECX=receiverReg agree; unique offset-zero owner for " + vtable +
                "; p-code arguments=" + pcodeArguments +
                (siblingZeroArgumentConsensus ?
                    "; ghost p-code arguments rejected by " + zeroArgumentSiblings +
                    " exact zero-push sibling calls" : "") +
                "; conservative machine-word stack parameters");
    }

    /**
     * Keep a proven common-base view local to one raw CALLIND.  Retyping the
     * containing function parameter makes Ghidra propagate the base pointer
     * backwards into callers and erase derived-class layouts when inheritance
     * is not modelled.  An exact physical slot already supplies the complete
     * receiver-aware ABI, so an address-local override is both stronger and
     * less invasive than changing the transported parameter.
     */
    private DispatchAbi physicalUseSite(Function function, Site site, Set<String> vtables,
            Set<String> receivers) {
        if (site.receiverRegister.isBlank()) return null;
        if (!exactMachineReceiver(function, site)) return null;
        PolymorphicReceiverCallsite family = polymorphicReceiverCallsites.get(
            site.callAddress);
        if (family != null && !currentPolymorphicReceiver(site, family)) return null;
        if (vtables.size() > 1) return null;
        String vtable = family != null ? family.physicalVtable :
            vtables.isEmpty() ? "" : vtables.iterator().next();
        if (vtable.isBlank() || !vtables.isEmpty() && !vtables.contains(vtable)) return null;
        Set<String> owners = ownersByVtable.getOrDefault(vtable, Set.of());
        if (owners.size() != 1) return null;
        String owner = owners.iterator().next();
        if (family != null && (!owner.equals(family.ownerType) ||
                !vtable.equals(family.physicalVtable))) return null;
        if (family == null && receivers.equals(Set.of(owner))) return null;
        FunctionDefinition physical = callableDefinition(vtable, site.slot);
        int stackParameters = effectiveStackParameters(site);
        if (physical == null || physical.hasVarArgs() ||
                !"__thiscall".equals(physical.getCallingConventionName()) ||
                physical.getArguments().length != stackParameters + 1 ||
                !owner.equals(structurePath(
                    physical.getArguments()[0].getDataType()))) return null;
        List<String> parameters = new ArrayList<>();
        for (int index = 1; index < physical.getArguments().length; index++)
            parameters.add(typeSpec(physical.getArguments()[index].getDataType()));
        return new DispatchAbi(owner, vtable, site.slot, "__thiscall",
            "pointer:" + owner, stackParameters, String.join(";", parameters),
            typeSpec(physical.getReturnType()), "", "",
            "exact physical-slot use-site view" +
                (family == null ? "" : "; common receiver family is independently " +
                    "proven at this exact call address") +
                "; raw receiver transport remains " +
                "neutral in the containing function to avoid derived-layout " +
                "back-propagation without recovered inheritance");
    }

    private Map<String, PolymorphicReceiverCallsite> polymorphicReceiverCallsites(
            List<Map<String, String>> rows) {
        Map<String, PolymorphicReceiverCallsite> result = new TreeMap<>();
        for (Map<String, String> row : rows) {
            String call = text(row.get("call_address")).toUpperCase(Locale.ROOT);
            int slot = integer(row.get("slot_offset"), -1);
            int ordinal = integer(row.get("parameter_ordinal"), -1);
            if (call.isBlank() || slot < 0 || ordinal < 0) continue;
            PolymorphicReceiverCallsite candidate = new PolymorphicReceiverCallsite(
                text(row.get("function_address")).toUpperCase(Locale.ROOT),
                text(row.get("expected_function")), call, slot, ordinal,
                text(row.get("expected_parameter_name")),
                text(row.get("expected_parameter_storage")),
                text(row.get("expected_parameter_type")),
                text(row.get("expected_parameter_source")),
                text(row.get("owner_type")), text(row.get("physical_vtable")));
            if (!candidate.ownerType.startsWith("/") ||
                    !candidate.physicalVtable.startsWith(VTABLE_ROOT)) continue;
            result.put(call, candidate);
        }
        return result;
    }

    private boolean currentPolymorphicReceiver(Site site,
            PolymorphicReceiverCallsite candidate) {
        if (!site.functionAddress.equals(candidate.functionAddress) ||
                !site.function.equals(candidate.function) ||
                !site.callAddress.equals(candidate.callAddress) ||
                site.slot != candidate.slot) return false;
        Address functionAddress = address(candidate.functionAddress);
        Function function = functionAddress == null ? null :
            currentProgram.getFunctionManager().getFunctionAt(functionAddress);
        if (function == null || !function.getName(true).equals(candidate.function)) return false;
        Parameter parameter = null;
        for (Parameter value : function.getParameters())
            if (!value.isAutoParameter() && value.getOrdinal() == candidate.parameterOrdinal) {
                parameter = value;
                break;
            }
        return parameter != null && parameter.getName().equals(candidate.parameterName) &&
            parameter.getVariableStorage().toString().equals(candidate.parameterStorage) &&
            typeSpec(parameter.getDataType()).equals(candidate.parameterType) &&
            parameter.getSource().toString().equals(candidate.parameterSource);
    }

    /**
     * Keep a rare EDX:EAX result at the exact use site instead of widening the
     * shared physical slot.  A global eight-byte return makes Ghidra pull words
     * already staged for an enclosing call into unrelated variadic CALLINDs.
     * This proof is closed: the previous indirect EAX is staged first, exactly
     * one different word is passed to this call, and the following direct
     * fastcall consumes EDX while EAX becomes its next stack argument.
     */
    private DispatchAbi machineWideUseSite(Site site, Set<String> vtables) {
        if (!machineWideSingleStackArgument(site) || vtables.size() != 1) return null;
        String vtable = vtables.iterator().next();
        Set<String> owners = ownersByVtable.getOrDefault(vtable, Set.of());
        if (owners.size() != 1) return null;
        String owner = owners.iterator().next();
        machineWideUseSiteMatches++;
        return new DispatchAbi(owner, vtable, site.slot, "__thiscall",
            "pointer:" + owner, 1, "/undefined4", "/ulonglong", "", "",
            "exact use-site EDX:EAX transport; previous indirect EAX is staged " +
                "for the enclosing call, one distinct stack word belongs to this " +
                "CALLIND, and the next direct __fastcall consumes EDX plus pushed EAX");
    }

    private DispatchAbi machineStagedUseSite(Site site, Set<String> vtables) {
        if (!stagedSingleArgumentSites.contains(site.callAddress) ||
                vtables.size() != 1) return null;
        String vtable = vtables.iterator().next();
        Set<String> owners = ownersByVtable.getOrDefault(vtable, Set.of());
        FunctionDefinition physical = callableDefinition(vtable, site.slot);
        if (owners.size() != 1 || physical == null || !physical.hasVarArgs() ||
                !text(physical.getComment()).contains(MARKER)) return null;
        String owner = owners.iterator().next();
        return new DispatchAbi(owner, vtable, site.slot, "__thiscall",
            "pointer:" + owner, 1, "/undefined4",
            typeSpec(physical.getReturnType()), "", "",
            "closed staged-argument bundle: exact following direct-call stack " +
                "cleanup accounts for every other PUSH, leaving one neutral " +
                "machine word for this CALLIND");
    }

    private boolean machineWideSingleStackArgument(Site site) {
        if (site.pushes != 2 || !machineWideReturn(site)) return false;
        Address call = address(site.callAddress);
        if (call == null) return false;
        List<String> pushes = new ArrayList<>();
        Instruction instruction = currentProgram.getListing().getInstructionBefore(call);
        Instruction previousCall = null;
        for (int count = 0; instruction != null && count < 16; count++) {
            if (instruction.getFlowType().isCall()) {
                previousCall = instruction;
                break;
            }
            if (instruction.getFlowType().isJump() ||
                    instruction.getFlowType().isTerminal()) return false;
            if ("PUSH".equalsIgnoreCase(instruction.getMnemonicString()) &&
                    instruction.getNumOperands() == 1) {
                pushes.add(0, instruction.getDefaultOperandRepresentation(0)
                    .trim().toUpperCase(Locale.ROOT));
            }
            else if (writesRegister(instruction, Set.of("ESP"))) return false;
            instruction = currentProgram.getListing().getInstructionBefore(
                instruction.getAddress());
        }
        return previousCall != null && previousCall.getFlowType().isComputed() &&
            pushes.size() == 2 && "EAX".equals(register(pushes.get(0))) &&
            !"EAX".equals(register(pushes.get(1)));
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

    private String machineReturn(Object operation, String callAddress) {
        try {
            Object output = operation.getClass().getMethod("getOutput").invoke(operation);
            if (output == null) {
                // Once a correct scalar x87 override is installed, Ghidra can model
                // the ST0/FSTP chain without attaching a High output varnode to the
                // CALLIND itself.  The immutable machine consumer still proves the
                // return and must outrank that presentation detail.
                String stored = x87StoredType(callAddress);
                if (hasMarkerMode(address(callAddress), "machine-float") &&
                        !stored.isBlank()) {
                    machineFloatReturnMatches++;
                    return stored;
                }
                return "/void";
            }
            int size = ((Number)output.getClass().getMethod("getSize")
                .invoke(output)).intValue();
            String concrete = typeSpec(dataType(output));
            if (Set.of("/float", "/double").contains(concrete)) {
                machineFloatReturnMatches++;
                return concrete;
            }
            // A CALLIND output which remains in the HighFunction is an exact
            // use of the call-defined return register, not a guess from the
            // rendered C type.  On this 32-bit x86 image a complete four-byte
            // value proves only the machine-word return role.  It does not
            // license signedness, a pointer pointee, or a semantic typedef.
            if (size == currentProgram.getDefaultPointerSize()) {
                machineWordReturnMatches++;
                return "/undefined4";
            }
            // Ghidra represents the live x87 register as a ten-byte High value, but
            // that is not the source return type.  The first bounded FST/FSTP consumer
            // supplies the actual storage width (float or double).  Without that
            // consumer the source width is unresolved and no override is emitted.
            if (size == 10) {
                String stored = x87StoredType(callAddress);
                if (!stored.isBlank()) {
                    machineFloatReturnMatches++;
                    return stored;
                }
            }
            return "";
        }
        catch (Exception ignored) { return ""; }
    }

    private String x87StoredType(String callAddress) {
        Address call = address(callAddress);
        if (call == null) return "";
        Instruction instruction = currentProgram.getListing().getInstructionAfter(call);
        for (int count = 0; instruction != null && count < 6; count++) {
            String mnemonic = text(instruction.getMnemonicString())
                .toUpperCase(Locale.ROOT);
            String rendered = instruction.toString().toLowerCase(Locale.ROOT);
            if (mnemonic.equals("FST") || mnemonic.equals("FSTP")) {
                if (rendered.contains("float ptr")) return "/float";
                if (rendered.contains("double ptr")) return "/double";
                return "";
            }
            if (mnemonic.startsWith("CALL") || mnemonic.startsWith("J") ||
                    mnemonic.startsWith("RET") || mnemonic.startsWith("F")) return "";
            instruction = currentProgram.getListing().getInstructionAfter(
                instruction.getAddress());
        }
        return "";
    }

    /**
     * Record use evidence for a raw physical slot before considering per-call overrides.
     * A dense family is promoted at the field itself only when the same uniquely owned
     * vtable path and unadjusted ECX receiver are repeated.  This is deliberately more
     * restrictive than the use-site fallback: the resulting datatype affects every call.
     */
    private void observeDensePhysicalSlot(Object operation, Site site,
            Set<String> vtables) {
        try {
            Address entry = address(site.functionAddress);
            Function function = entry == null ? null :
                currentProgram.getFunctionManager().getFunctionAt(entry);
            if (vtables.size() != 1 || site.receiverRegister.isBlank() ||
                    !exactMachineReceiver(function, site)) return;
            String vtable = vtables.iterator().next();
            if (callableVtableSlot(vtable, site.slot)) return;
            Set<String> owners = ownersByVtable.getOrDefault(vtable, Set.of());
            if (owners.size() != 1) return;
            DenseSlotEvidence evidence = denseSlotEvidence.computeIfAbsent(
                vtable + "@" + site.slot,
                ignored -> new DenseSlotEvidence(vtable, owners.iterator().next(), site.slot));
            Object output = operation.getClass().getMethod("getOutput").invoke(operation);
            String returned;
            if (output == null) {
                String stored = x87StoredType(site.callAddress);
                returned = stored.isBlank() ? "/void" : stored;
            }
            else {
                int size = ((Number)output.getClass().getMethod("getSize")
                    .invoke(output)).intValue();
                String concrete = typeSpec(dataType(output));
                if (Set.of("/float", "/double").contains(concrete)) returned = concrete;
                else if (size == currentProgram.getDefaultPointerSize()) returned = "/undefined4";
                else if (size == 10) {
                    String stored = x87StoredType(site.callAddress);
                    returned = stored;
                }
                else returned = "";
            }
            recordDenseEvidence(evidence, site, returned);
        }
        catch (Exception ignored) { }
    }

    /**
     * A decompile timeout must not hide a large, otherwise exact physical-slot
     * family. Recover only an unadjusted method receiver which was spilled from
     * incoming ECX and reloaded into one callee-saved register without any other
     * full-register definition before the call. The site inventory independently
     * proves the table load, live ECX receiver, slot and push count.
     */
    private void observeMachineDenseSlots(Function function, List<Site> sites) {
        String owner = autoThisOwner(function);
        if (owner.isBlank()) return;
        List<String> vtables = new ArrayList<>();
        for (Map.Entry<String, Set<String>> entry : ownersByVtable.entrySet())
            if (entry.getValue().equals(Set.of(owner))) vtables.add(entry.getKey());
        if (vtables.size() != 1) return;
        String vtable = vtables.get(0);
        String spill = incomingThisSpill(function);
        if (spill.isBlank()) return;
        for (Site site : sites) {
            if (!exactMachineReceiver(function, site) ||
                    !machineReceiverIsSavedThis(function, site, spill)) continue;
            // Count the complete machine family before consulting the mutable
            // physical datatype.  Otherwise promoting its busiest slots on pass
            // one can make the residual fallback family fall below the density
            // limit on pass two and install dozens of SSA-perturbing overrides.
            // Density is a property of the function's dispatch pattern, not of
            // which slots happen to have been typed by an earlier fixpoint pass.
            exactMachineReceiverSites.merge(site.functionAddress, 1, Integer::sum);
            boolean callable = callableVtableSlot(vtable, site.slot);
            if (callable) {
                FunctionDefinition definition = callableDefinition(vtable, site.slot);
                boolean generatedWide = definition != null &&
                    "/ulonglong".equals(typeSpec(definition.getReturnType())) &&
                    text(definition.getComment()).contains(MARKER) &&
                    machineWideSingleStackArgument(site);
                boolean generatedVariadic = definition != null &&
                    definition.hasVarArgs() &&
                    text(definition.getComment()).contains(MARKER);
                if (!generatedWide && !generatedVariadic) continue;
            }
            DenseSlotEvidence evidence = denseSlotEvidence.computeIfAbsent(
                vtable + "@" + site.slot,
                ignored -> new DenseSlotEvidence(vtable, owner, site.slot));
            FunctionDefinition definition = callable ?
                callableDefinition(vtable, site.slot) : null;
            recordDenseEvidence(evidence, site, callable && definition != null ?
                typeSpec(definition.getReturnType()) : machineCallReturn(site));
        }
    }

    private FunctionDefinition callableDefinition(String path, int offset) {
        DataType type = currentProgram.getDataTypeManager().getDataType(path);
        type = base(type);
        if (!(type instanceof Structure structure) || offset < 0 ||
                offset >= structure.getLength()) return null;
        DataTypeComponent component = structure.getComponentAt(offset);
        if (component == null || component.getOffset() != offset) return null;
        DataType value = base(component.getDataType());
        return value instanceof FunctionDefinition definition ? definition : null;
    }

    private String autoThisOwner(Function function) {
        if (!"__thiscall".equals(function.getCallingConventionName())) return "";
        for (Parameter parameter : function.getParameters())
            if (parameter.isAutoParameter() &&
                    parameter.getAutoParameterType() == AutoParameterType.THIS)
                return structurePath(parameter.getDataType());
        return "";
    }

    private String incomingThisSpill(Function function) {
        Set<String> spills = new TreeSet<>();
        InstructionIterator iterator = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (iterator.hasNext()) {
            Instruction instruction = iterator.next();
            if (instruction.getFlowType().isCall()) break;
            if (!"MOV".equalsIgnoreCase(instruction.getMnemonicString()) ||
                    instruction.getNumOperands() < 2 ||
                    !"ECX".equals(register(
                        instruction.getDefaultOperandRepresentation(1)))) continue;
            String destination = stackOperand(
                instruction.getDefaultOperandRepresentation(0));
            if (!destination.isBlank()) spills.add(destination);
        }
        return spills.size() == 1 ? spills.iterator().next() : "";
    }

    private boolean machineReceiverIsSavedThis(Function function, Site site, String spill) {
        String receiver = register(site.receiverRegister);
        if (!Set.of("EBX", "ESI", "EDI").contains(receiver)) return false;
        Address call = address(site.callAddress);
        if (call == null) return false;
        boolean loaded = false;
        InstructionIterator iterator = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (iterator.hasNext()) {
            Instruction instruction = iterator.next();
            if (instruction.getAddress().compareTo(call) >= 0) break;
            if (!definesStandaloneRegister(instruction, receiver)) continue;
            if ("POP".equalsIgnoreCase(instruction.getMnemonicString())) continue;
            boolean exactLoad = "MOV".equalsIgnoreCase(instruction.getMnemonicString()) &&
                instruction.getNumOperands() >= 2 && spill.equals(stackOperand(
                    instruction.getDefaultOperandRepresentation(1)));
            if (!exactLoad) return false;
            loaded = true;
        }
        return loaded;
    }

    private boolean definesStandaloneRegister(Instruction instruction,
            String receiverRegister) {
        if (instruction.getNumOperands() < 1 || !receiverRegister.equals(register(
                instruction.getDefaultOperandRepresentation(0)))) return false;
        for (Object output : instruction.getResultObjects())
            if (output instanceof Register value && receiverRegister.equals(
                    value.getName().toUpperCase(Locale.ROOT))) return true;
        return false;
    }

    private String stackOperand(String operand) {
        String value = text(operand).toUpperCase(Locale.ROOT)
            .replace("DWORD PTR", "").replace(" ", "");
        return value.matches("\\[EBP\\+[+-]?(?:0X)?[0-9A-F]+\\]") ? value : "";
    }

    private String machineCallReturn(Site site) {
        if (machineWideReturn(site)) return "/ulonglong";
        String stored = x87StoredType(site.callAddress);
        if (!stored.isBlank()) return stored;
        Address call = address(site.callAddress);
        Instruction instruction = call == null ? null :
            currentProgram.getListing().getInstructionAfter(call);
        for (int count = 0; instruction != null && count < 12; count++) {
            if (readsAccumulator(instruction)) return "/undefined4";
            if (writesAccumulator(instruction) || instruction.getFlowType().isCall())
                return "/void";
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            if (mnemonic.startsWith("RET")) return "/undefined4";
            if (instruction.getFlowType().isJump() || instruction.getFlowType().isTerminal())
                return "";
            instruction = currentProgram.getListing().getInstructionAfter(
                instruction.getAddress());
        }
        return "/void";
    }

    /**
     * MSVC returns an eight-byte integer-like scalar in EDX:EAX.  Recover that
     * neutral ABI only from a closed bridge into a direct fastcall: the low word
     * is consumed before it can be redefined, EDX is not redefined after the
     * indirect call, and the next direct callee has an exact EDX parameter.
     */
    private boolean machineWideReturn(Site site) {
        Address call = address(site.callAddress);
        if (call == null) return false;
        boolean lowConsumed = false;
        Instruction instruction = currentProgram.getListing().getInstructionAfter(call);
        for (int count = 0; instruction != null && count < 8; count++) {
            if (instruction.getFlowType().isCall()) {
                Address[] flows = instruction.getFlows();
                Function target = flows.length == 1 ? currentProgram.getFunctionManager()
                    .getFunctionAt(flows[0]) : null;
                return lowConsumed && target != null &&
                    "__fastcall".equals(target.getCallingConventionName()) &&
                    hasExactRegisterParameter(target, "EDX:4");
            }
            if (writesRegister(instruction, Set.of("EDX", "DX", "DL", "DH")))
                return false;
            if (readsFullAccumulator(instruction)) lowConsumed = true;
            if (!lowConsumed && writesRegister(instruction,
                    Set.of("EAX", "AX", "AL", "AH"))) return false;
            if (instruction.getFlowType().isJump() ||
                    instruction.getFlowType().isTerminal()) return false;
            instruction = currentProgram.getListing().getInstructionAfter(
                instruction.getAddress());
        }
        return false;
    }

    private boolean hasExactRegisterParameter(Function function, String storage) {
        for (Parameter parameter : function.getParameters())
            if (!parameter.isAutoParameter() && storage.equalsIgnoreCase(
                    parameter.getVariableStorage().toString())) return true;
        return false;
    }

    private boolean readsFullAccumulator(Instruction instruction) {
        for (Object input : instruction.getInputObjects())
            if (input instanceof Register register && "EAX".equalsIgnoreCase(
                    register.getName())) return true;
        return false;
    }

    private boolean writesRegister(Instruction instruction, Set<String> names) {
        for (Object output : instruction.getResultObjects())
            if (output instanceof Register register && names.contains(
                    register.getName().toUpperCase(Locale.ROOT))) return true;
        return false;
    }

    private boolean readsAccumulator(Instruction instruction) {
        for (Object input : instruction.getInputObjects())
            if (input instanceof Register register && accumulator(register)) return true;
        return false;
    }

    private boolean writesAccumulator(Instruction instruction) {
        for (Object output : instruction.getResultObjects())
            if (output instanceof Register register && accumulator(register)) return true;
        return false;
    }

    private boolean accumulator(Register register) {
        return Set.of("EAX", "AX", "AL", "AH").contains(
            register.getName().toUpperCase(Locale.ROOT));
    }

    private void recordDenseEvidence(DenseSlotEvidence evidence, Site site,
            String returned) {
        if (returned.isBlank() || !evidence.calls.add(site.callAddress)) return;
        evidence.functions.add(site.functionAddress);
        evidence.arities.add(effectiveStackParameters(site));
        if (returned.equals("/undefined4")) evidence.wordReturns++;
        else if (returned.equals("/ulonglong")) evidence.wideReturns++;
        else if (Set.of("/float", "/double").contains(returned)) {
            evidence.floatReturns++;
            evidence.floatReturnTypes.add(returned);
        }
        else if (returned.equals("/void")) evidence.unusedReturns++;
        else evidence.otherReturns++;
    }

    private void addDensePhysicalSlotRows(Map<String, Row> rows) {
        for (DenseSlotEvidence evidence : denseSlotEvidence.values()) {
            boolean varyingArity = evidence.arities.size() >= 2;
            boolean variadicProof = varyingArity && evidence.calls.size() >= 8 &&
                evidence.functions.size() >= 2;
            boolean concreteX87Family = evidence.floatReturns == evidence.calls.size() &&
                evidence.floatReturnTypes.size() == 1;
            boolean fixedProof = evidence.arities.size() == 1 &&
                (evidence.functions.size() >= 2 &&
                    (evidence.calls.size() >= 3 ||
                        concreteX87Family && evidence.calls.size() >= 2) ||
                 // One dense interpreter can be the complete observed use family
                 // for a raw physical slot.  Eight exact unadjusted calls are
                 // stronger than duplicating the same evidence across two
                 // wrappers and avoid installing many address-local overrides.
                 evidence.calls.size() >= 8);
            boolean wideReturnRepair = evidence.wideReturns >= 3;
            Structure vtable = structure(evidence.vtable);
            if (vtable == null) continue;
            DataTypeComponent component = vtable.getComponentAt(evidence.slot);
            if (component == null || component.getOffset() != evidence.slot) continue;
            DataType raw = component.getDataType();
            DataType callableBase = base(raw);
            boolean rawVoid = raw instanceof Pointer && "/void".equals(typeSpec(callableBase));
            FunctionDefinition existing = callableBase instanceof FunctionDefinition value ?
                value : null;
            boolean generatedCallable = existing != null &&
                text(existing.getComment()).contains(MARKER) &&
                text(component.getComment()).contains(MARKER);
            boolean generatedArityRepair = generatedCallable &&
                existing.hasVarArgs() && evidence.calls.size() >= 8 &&
                evidence.arities.equals(Set.of(1)) &&
                evidence.calls.stream().allMatch(call ->
                    stagedSingleArgumentSites.contains(call) ||
                    sitePushCount(call) == 1);
            boolean generatedReturnRepair = existing != null && wideReturnRepair &&
                "/ulonglong".equals(typeSpec(existing.getReturnType())) &&
                generatedCallable;
            if (!variadicProof && !fixedProof && !wideReturnRepair &&
                    !generatedArityRepair) continue;
            if (evidence.otherReturns != 0 || evidence.floatReturnTypes.size() > 1 ||
                    evidence.floatReturns != 0 &&
                        (evidence.wordReturns != 0 || evidence.wideReturns != 0) ||
                    evidence.wideReturns > 0 && !wideReturnRepair) continue;
            String returned = generatedArityRepair ?
                typeSpec(existing.getReturnType()) :
                evidence.wideReturns != 0 ? "/undefined4" :
                evidence.wordReturns != 0 ? "/undefined4" :
                evidence.floatReturns != 0 ? evidence.floatReturnTypes.iterator().next() :
                    "/void";
            if (!rawVoid && !generatedReturnRepair && !generatedArityRepair) continue;
            boolean variadic = generatedArityRepair ? false :
                generatedReturnRepair ? existing.hasVarArgs() : variadicProof;
            int count = generatedArityRepair ? 1 :
                generatedReturnRepair ? existing.getArguments().length - 1 :
                variadic ? 0 : evidence.arities.iterator().next();
            if (count < 0) continue;
            String parameters = generatedArityRepair ? "/undefined4" :
                generatedReturnRepair ? parameterTypes(existing, 1) :
                repeated("/undefined4", count);
            String receiver = generatedCallable ?
                typeSpec(existing.getArguments()[0].getDataType()) :
                "pointer:" + evidence.owner;
            String action = variadic ? "vtable_slot_variadic" : "vtable_slot_fixed";
            String reason = "physical raw slot recovered from exact CALLIND family; calls=" +
                evidence.calls.size() + "; functions=" + evidence.functions.size() +
                "; observed_push_counts=" + evidence.arities +
                "; full_word_returns=" + evidence.wordReturns +
                "; wide_EDX_EAX_returns=" + evidence.wideReturns +
                "; x87_returns=" + evidence.floatReturns +
                "; unused_returns=" + evidence.unusedReturns +
                (generatedReturnRepair ?
                    "; shared script-owned return narrowed back to one machine word; " +
                    "exact EDX:EAX bridges remain address-local call overrides" : "") +
                (generatedArityRepair ?
                    "; closed outer-call stack balance proves one real CALLIND word " +
                    "at every inflated site; shared variadic fallback narrowed to fixed arity" : "") +
                (variadicProof ?
                    "; differing exact machine push families require a variadic ABI view" :
                    "; unanimous machine push count proves the fixed stack arity");
            Row row = new Row(true, action, evidence.vtable, evidence.owner, "",
                evidence.slot, typeSpec(raw), "__thiscall",
                receiver, count, parameters,
                returned, "", "", "high", reason);
            rows.put("physical:" + evidence.vtable + "@" + evidence.slot, row);
            // The physical field now carries this exact consensus.  Per-call
            // fallbacks for the same evidence would be redundant and can perturb
            // High SSA even though every individual override is correct.
            for (String call : evidence.calls) {
                Row useSite = rows.get(call);
                if (useSite != null && machineFallback(useSite)) rows.remove(call);
            }
            densePhysicalSlots++;
        }
    }

    private String parameterTypes(FunctionDefinition definition, int first) {
        List<String> result = new ArrayList<>();
        ghidra.program.model.data.ParameterDefinition[] arguments =
            definition.getArguments();
        for (int index = first; index < arguments.length; index++)
            result.add(typeSpec(arguments[index].getDataType()));
        return String.join(";", result);
    }

    private Structure structure(String path) {
        DataType type = currentProgram.getDataTypeManager().getDataType(path);
        return type instanceof Structure structure ? structure : null;
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

    /**
     * Preserve address-stable ownership evidence even when no call override is safe.  The
     * virtual-method pass consumes only exact unadjusted receiver rows, and still has to match
     * them to one physical table relation component.  This audit is intentionally broader than
     * the proposal TSV: it partitions unresolved object dispatch without mutating a local,
     * class vptr, or synthetic dispatch interface.
     */
    private void recordCallableFamilyAudit(Function function, Site site,
            Set<String> vtables, Set<String> receivers) {
        boolean exactMachineReceiver = exactMachineReceiver(function, site);
        Set<String> resolvedVtables = new TreeSet<>(vtables);
        if (resolvedVtables.isEmpty() && receivers.size() == 1) {
            String fromReceiver = receiverVtablePath(receivers.iterator().next());
            if (!fromReceiver.isBlank()) resolvedVtables.add(fromReceiver);
        }
        Set<String> owners = new TreeSet<>();
        for (String vtable : resolvedVtables)
            owners.addAll(ownersByVtable.getOrDefault(vtable, Set.of()));
        String classification;
        if (!exactMachineReceiver) classification = "ambiguous_receiver_transport";
        else if (resolvedVtables.size() == 1 && owners.size() == 1)
            classification = "physical_vtable";
        else if (!receivers.isEmpty()) classification = "typed_external_or_secondary_interface";
        else classification = "unresolved_object_dispatch";
        String qualified = function.getName(true);
        if (qualified.startsWith("Library::") || qualified.toUpperCase(Locale.ROOT)
                .contains(".DLL::")) classification = "linked_library_runtime";
        callableFamilyAudits.put(site.callAddress, new CallableFamilyAudit(
            site.functionAddress, site.function, site.callAddress, site.slot,
            effectiveStackParameters(site), site.ecx, site.receiverRegister,
            exactMachineReceiver, String.join(" | ", resolvedVtables),
            String.join(" | ", receivers), String.join(" | ", owners),
            callerOwner(function), machineCallReturn(site), classification));
    }

    private boolean isDirectLoadedValue(String value) {
        String text = text(value).trim().toUpperCase(Locale.ROOT);
        return text.matches("(?:BYTE|WORD|DWORD|QWORD) PTR \\[.+\\]");
    }

    /**
     * Prove the MSVC receiver transport at the actual call instruction.  The old linear
     * inventory forgot a MOV ECX,receiver as soon as it crossed a conditional branch, even
     * when every predecessor retained that definition.  Walk the instruction CFG backwards
     * and accept only paths which all reach the same exact register copy before any CALL,
     * competing ECX definition, or receiver-register definition.  This is equality of the
     * machine value at one site; it does not infer a source-level owner.
     */
    private boolean exactMachineReceiver(Function function, Site site) {
        if (function == null || site == null) return false;
        String receiver = register(site.receiverRegister);
        if (receiver.isBlank()) return false;
        if (register(site.ecx).equals(receiver) ||
                "ECX".equals(receiver) && isDirectLoadedValue(site.ecx)) return true;
        String key = site.functionAddress + ":" + site.callAddress + ":" + receiver;
        Boolean cached = exactReceiverCache.get(key);
        if (cached != null) return cached;
        boolean recovered = cfgExactReceiver(function, site, receiver);
        exactReceiverCache.put(key, recovered);
        if (recovered) cfgRecoveredReceiverSites++;
        return recovered;
    }

    private boolean cfgExactReceiver(Function function, Site site, String receiver) {
        Address call = address(site.callAddress);
        if (call == null || "ECX".equals(receiver)) return false;
        Map<Address, List<Address>> predecessors = predecessors(function);
        List<Address> work = new ArrayList<>(predecessors.getOrDefault(call, List.of()));
        if (work.isEmpty()) return false;
        Set<Address> visited = new HashSet<>();
        int resolvedPaths = 0;
        for (int cursor = 0; cursor < work.size() && work.size() <= 8192; cursor++) {
            Address address = work.get(cursor);
            if (!visited.add(address)) continue;
            Instruction instruction = currentProgram.getListing().getInstructionAt(address);
            if (instruction == null || !function.getBody().contains(address)) return false;
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            if (instruction.getFlowType().isCall()) return false;

            if (definesStandaloneRegister(instruction, "ECX")) {
                if (!"MOV".equals(mnemonic) || instruction.getNumOperands() < 2 ||
                        !receiver.equals(register(
                            instruction.getDefaultOperandRepresentation(1)))) return false;
                resolvedPaths++;
                continue;
            }
            if (definesStandaloneRegister(instruction, receiver)) return false;

            List<Address> before = predecessors.getOrDefault(address, List.of());
            if (before.isEmpty()) return false;
            work.addAll(before);
        }
        return work.size() <= 8192 && resolvedPaths > 0;
    }

    private Map<Address, List<Address>> predecessors(Function function) {
        return predecessorCache.computeIfAbsent(function.getEntryPoint(), ignored -> {
            Map<Address, List<Address>> result = new HashMap<>();
            InstructionIterator iterator = currentProgram.getListing()
                .getInstructions(function.getBody(), true);
            while (iterator.hasNext()) {
                Instruction instruction = iterator.next();
                Address source = instruction.getAddress();
                Address fallthrough = instruction.getFallThrough();
                if (fallthrough != null && function.getBody().contains(fallthrough) &&
                        currentProgram.getListing().getInstructionAt(fallthrough) != null)
                    result.computeIfAbsent(fallthrough,
                        key -> new ArrayList<>()).add(source);
                if (instruction.getFlowType().isJump())
                    for (Address flow : instruction.getFlows())
                        if (function.getBody().contains(flow) &&
                                currentProgram.getListing().getInstructionAt(flow) != null)
                            result.computeIfAbsent(flow,
                                key -> new ArrayList<>()).add(source);
            }
            for (List<Address> values : result.values())
                values.sort(Address::compareTo);
            return result;
        });
    }

    private String receiverVtablePath(String receiverPath) {
        DataType value = currentProgram.getDataTypeManager().getDataType(receiverPath);
        value = base(value);
        if (!(value instanceof Structure structure) || structure.getLength() <
                currentProgram.getDefaultPointerSize()) return "";
        DataTypeComponent component = structure.getComponentAt(0);
        if (component == null || component.getOffset() != 0) return "";
        String path = structurePath(component.getDataType());
        return vtablePath(path) ? path : "";
    }

    private String callerOwner(Function function) {
        String qualified = function == null ? "" : function.getName(true);
        int separator = qualified.lastIndexOf("::");
        if (separator <= 0 || qualified.startsWith("Library::") ||
                qualified.contains("SubmarineTitans::Recovered::HiddenThis::")) return "";
        String owner = qualified.substring(0, separator);
        int nested = owner.lastIndexOf("::");
        return nested < 0 ? owner : owner.substring(nested + 2);
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
                !exactMachineReceiver(function, site) ||
                !(hasMarkerMode(call, "machine-void") ||
                  hasMarkerMode(call, "machine-word") ||
                  hasMarkerMode(call, "machine-float"))) return null;
        String returned = typeSpec(existing.getReturnType());
        if (hasMarkerMode(call, "machine-void") && !"/void".equals(returned)) return null;
        if (hasMarkerMode(call, "machine-word") && !"/undefined4".equals(returned))
            return null;
        String retainedReturn = returned;
        if (hasMarkerMode(call, "machine-float")) {
            retainedReturn = x87StoredType(site.callAddress);
            if (!Set.of("/float", "/double").contains(retainedReturn)) return null;
        }
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
            retainedReturn, "", "", "high",
            "retained script-owned machine callable: exact listing MOV " +
                "tableReg,[receiverReg] and live ECX=receiverReg remain; unique " +
                "offset-zero owner " + owner + " for raw slot 0x" +
                Integer.toHexString(site.slot).toUpperCase(Locale.ROOT) + " in " + vtable +
                (retainedReturn.equals(returned) ? "" :
                    "; x87 source width repaired from the bounded FST/FSTP consumer"));
    }

    private void suppressDenseMachineFallbacks(Map<String, Row> rows) {
        // Count the overrides which would actually remain after physical-slot
        // promotion, not every dispatch in the containing function.  The latter
        // used to suppress a small residual family merely because the same
        // interpreter also contained many already recovered physical slots.
        // addDensePhysicalSlotRows() runs before this method, so one analysis pass
        // sees the stable post-promotion set and does not depend on a prior apply.
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

    private void writeCallableFamilyAudit(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("function_address\tfunction_name\tcall_address\tslot_offset\t" +
                "stack_parameter_count\tlast_ecx_assignment\treceiver_register\t" +
                "exact_unadjusted_receiver\tphysical_vtable_paths\treceiver_paths\t" +
                "physical_owners\tcaller_owner\tmachine_return\tclassification\n");
            for (CallableFamilyAudit row : callableFamilyAudits.values())
                out.write(row.functionAddress + "\t" + clean(row.function) + "\t" +
                    row.callAddress + "\t" + row.slot + "\t" + row.stackParameters + "\t" +
                    clean(row.ecx) + "\t" + row.receiverRegister + "\t" +
                    bit(row.exactUnadjustedReceiver) + "\t" +
                    clean(row.physicalVtables) + "\t" + clean(row.receiverPaths) + "\t" +
                    clean(row.physicalOwners) + "\t" + clean(row.callerOwner) + "\t" +
                    row.machineReturn + "\t" + row.classification + "\n");
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
            "cfg_recovered_receiver_sites=" + cfgRecoveredReceiverSites,
            "machine_word_return_matches=" + machineWordReturnMatches,
            "machine_float_return_matches=" + machineFloatReturnMatches,
            "machine_wide_use_site_matches=" + machineWideUseSiteMatches,
            "dense_physical_slots=" + densePhysicalSlots,
            "retained_machine_overrides=" + retainedMachineOverrides,
            "suppressed_dense_machine_functions=" + suppressedMachineFunctions.size(),
            "suppressed_dense_machine_overrides=" + suppressedMachineOverrides,
            "exact_machine_receiver_sites=" + exactMachineReceiverSites.values().stream()
                .mapToInt(Integer::intValue).sum(),
            "callable_family_audit_sites=" + callableFamilyAudits.size(),
            "callable_family_physical_sites=" + callableFamilyAudits.values().stream()
                .filter(row -> row.classification.equals("physical_vtable")).count(),
            "staged_single_argument_sites=" + stagedSingleArgumentSites.size(),
            "proposals=" + rows.size(),
            "auto_apply=" + rows.stream().filter(row -> row.apply).count(),
            "cleanup=" + rows.stream().filter(row -> row.action.equals("cleanup")).count(),
            "conflicts=" + conflicts,
            "decompile_failures=" + failures,
            "decompile_failure_functions=" +
                String.join(",", decompileFailureFunctions),
            "policy=An override requires either exact physical dispatch consensus or an " +
                "exact machine MOV tableReg,[receiverReg] plus an all-predecessor live " +
                "ECX=receiverReg proof, one unique offset-zero vtable owner, and matching " +
                "p-code/machine arity. Without target-family evidence the return is void " +
                "only when unused, or " +
                "neutral undefined4 when the CALLIND owns one complete 32-bit output. " +
                "An EDX:EAX bridge is address-local when one staged argument word and " +
                "the following direct __fastcall close the machine chain.",
            "policy_density=Machine-only fallback is disabled when one function would " +
                "receive more than " + MAX_MACHINE_OVERRIDES_PER_FUNCTION + " overrides. " +
                "A dense set of use-only prototypes is not independent ABI evidence and " +
                "can perturb whole-function SSA/register liveness; previously installed " +
                "script-owned overrides in that function are removed.",
            "policy_dense_slot=A raw physical slot may replace void* only when its vtable " +
                "has one unique offset-zero owner, every retained site has the exact live " +
                "ECX receiver, and either at least three calls in two functions or eight " +
                "calls in one complete dense family agree on one fixed arity. At least " +
                "eight calls in two functions may instead prove multiple arities; that " +
                "case becomes a conservative receiver-aware variadic slot.",
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
    private record PolymorphicReceiverCallsite(String functionAddress, String function,
        String callAddress, int slot, int parameterOrdinal, String parameterName,
        String parameterStorage, String parameterType, String parameterSource,
        String ownerType, String physicalVtable) { }
    private record Row(boolean apply, String action, String functionAddress, String function,
        String callAddress, int slot, String expectedOverride, String convention,
        String receiverType, int stackParameters, String parameterTypes, String returnType,
        String signatureAddress, String signatureFunction, String confidence, String evidence) { }
    private record CallableFamilyAudit(String functionAddress, String function,
        String callAddress, int slot, int stackParameters, String ecx,
        String receiverRegister, boolean exactUnadjustedReceiver, String physicalVtables,
        String receiverPaths, String physicalOwners, String callerOwner,
        String machineReturn, String classification) { }

    private static final class DenseSlotEvidence {
        final String vtable;
        final String owner;
        final int slot;
        final Set<String> calls = new TreeSet<>();
        final Set<String> functions = new TreeSet<>();
        final Set<Integer> arities = new TreeSet<>();
        final Set<String> floatReturnTypes = new TreeSet<>();
        int wordReturns;
        int wideReturns;
        int floatReturns;
        int otherReturns;
        int unusedReturns;

        DenseSlotEvidence(String vtable, String owner, int slot) {
            this.vtable = vtable;
            this.owner = owner;
            this.slot = slot;
        }
    }
}
