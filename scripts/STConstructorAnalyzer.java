// Recover constructor candidates, allocation sizes, and direct base/derived relations from
// vptr stores. Read-only: consumes vtable_proposals.tsv and writes constructor_*.tsv/jsonl.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Analyze Constructors

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
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
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionTag;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Listing;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;
import ghidra.program.model.symbol.SourceType;

public class STConstructorAnalyzer extends GhidraScript {
    private static final Pattern MEMORY = Pattern.compile(
        "^\\[([A-Z][A-Z0-9]{1,3})(?:([+-])(0X[0-9A-F]+|[0-9]+))?\\]$");
    private static final Pattern REGISTER = Pattern.compile(
        "^(?:E(?:AX|BX|CX|DX|SI|DI|BP|SP))$");
    private static final Pattern ADDRESS_PREFIX = Pattern.compile("^([0-9A-Fa-f]{6,16})\\s+");
    private static final String TAG = "RECOVERED_CONSTRUCTOR";

    private Listing listing;

    @Override
    protected void run() throws Exception {
        if (currentProgram == null) {
            printerr("Open the same program used by STVTableAnalyzer.");
            return;
        }
        File selected = inputFile();
        if (selected == null) return;
        File proposalsFile = selected.isDirectory() ?
            new File(selected, "vtable_proposals.tsv") : selected;
        if (!proposalsFile.isFile())
            throw new IllegalArgumentException("Missing " + proposalsFile);

        Tsv tsv = readTsv(proposalsFile.toPath());
        requireColumns(tsv, "table_address", "proposed_name", "owner", "confidence", "apply");
        listing = currentProgram.getListing();

        Map<Address, TableInfo> tables = new TreeMap<>();
        for (Map<String, String> row : tsv.rows) {
            Address address = address(row.get("table_address"));
            tables.put(address, new TableInfo(address, unt(row.get("owner")),
                unt(row.get("proposed_name")), row.get("confidence"), enabled(row.get("apply"))));
        }

        Map<Address, List<RawStore>> storesByFunction = findStores(tables);
        List<ConstructorProposal> constructors = new ArrayList<>();
        List<HierarchyProposal> hierarchy = new ArrayList<>();
        List<AllocationEvidence> allocations = new ArrayList<>();

        for (Map.Entry<Address, List<RawStore>> entry : storesByFunction.entrySet()) {
            monitor.checkCancelled();
            Function function = currentProgram.getFunctionManager().getFunctionAt(entry.getKey());
            if (function == null) continue;
            FlowResult flow = analyzeFlow(function, entry.getValue());
            constructors.addAll(constructorProposals(function, flow));
            hierarchy.addAll(hierarchyProposals(function, flow));
            allocations.addAll(allocationEvidence(function, flow));
        }

        constructors.sort(Comparator.comparing(proposal -> proposal.address));
        hierarchy = deduplicateHierarchy(hierarchy);
        List<ClassSizeProposal> sizes = classSizes(allocations);

        Path directory = proposalsFile.getAbsoluteFile().getParentFile().toPath();
        writeConstructors(directory.resolve("constructor_proposals.tsv"), constructors);
        writeConstructorsJson(directory.resolve("constructor_proposals.jsonl"), constructors);
        writeHierarchy(directory.resolve("constructor_hierarchy.tsv"), hierarchy);
        writeSizes(directory.resolve("constructor_class_sizes.tsv"), sizes);
        writeSummary(directory.resolve("constructor_summary.txt"), constructors, hierarchy, sizes,
            storesByFunction.size());

        long names = constructors.stream().filter(p -> p.nameApply).count();
        long conventions = constructors.stream().filter(p -> p.conventionApply).count();
        long parameters = constructors.stream().filter(p -> p.parameterApply).count();
        println("Constructor analysis complete: " + directory.toAbsolutePath().normalize());
        println("Vptr writers: " + storesByFunction.size() + ", constructor candidates: " +
            constructors.size() + ", name_apply: " + names + ", convention_apply: " +
            conventions + ", parameter_apply: " + parameters + ", hierarchy: " +
            hierarchy.size() + ", class sizes: " + sizes.size());
    }

    private Map<Address, List<RawStore>> findStores(Map<Address, TableInfo> tables) {
        Map<Address, List<RawStore>> result = new TreeMap<>();
        for (TableInfo table : tables.values()) {
            ReferenceIterator references = currentProgram.getReferenceManager()
                .getReferencesTo(table.address);
            while (references.hasNext()) {
                Reference reference = references.next();
                Instruction instruction = listing.getInstructionAt(reference.getFromAddress());
                Function function = listing.getFunctionContaining(reference.getFromAddress());
                if (instruction == null || function == null ||
                        !isVptrStore(instruction, reference)) continue;
                result.computeIfAbsent(function.getEntryPoint(), ignored -> new ArrayList<>())
                    .add(new RawStore(instruction.getAddress(), table));
            }
        }
        for (List<RawStore> stores : result.values())
            stores.sort(Comparator.comparing(store -> store.address));
        return result;
    }

    private boolean isVptrStore(Instruction instruction, Reference reference) {
        if (!"MOV".equalsIgnoreCase(instruction.getMnemonicString()) ||
                reference.getOperandIndex() <= 0) return false;
        String text = instruction.toString();
        int comma = text.indexOf(',');
        if (comma < 0) return false;
        String destination = text.substring(0, comma);
        return destination.contains("[") && destination.contains("]");
    }

    private FlowResult analyzeFlow(Function function, List<RawStore> rawStores) {
        Map<Address, RawStore> byAddress = new HashMap<>();
        for (RawStore store : rawStores) byAddress.put(store.address, store);

        Map<String, Origin> aliases = new HashMap<>();
        aliases.put("ECX", Origin.thisOrigin());
        FlowResult result = new FlowResult();
        int nextCallId = 1;
        List<Long> pushedImmediates = new ArrayList<>();
        int callsSeen = 0;

        InstructionIterator instructions = listing.getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            String text = instruction.toString().toUpperCase(Locale.ROOT);
            String[] operands = splitOperands(text);

            RawStore rawStore = byAddress.get(instruction.getAddress());
            if (rawStore != null && operands.length >= 2) {
                MemoryExpr destination = memoryExpr(operands[0]);
                Origin origin = destination == null ? null : aliases.get(destination.register);
                if (origin != null) {
                    Origin location = origin.add(destination.displacement);
                    if (location.offset == 0) {
                        StoreEvidence store = new StoreEvidence(rawStore, location, callsSeen);
                        result.stores.add(store);
                    }
                }
            }

            if (isMemoryWrite(mnemonic, operands) && operands.length > 0) {
                MemoryExpr destination = memoryExpr(operands[0]);
                Origin origin = destination == null ? null : aliases.get(destination.register);
                if (origin != null) {
                    Origin location = origin.add(destination.displacement);
                    if (location.offset > 0) result.writes.add(new ObjectWrite(
                        instruction.getAddress(), location.id, location.offset));
                }
            }

            if ("PUSH".equals(mnemonic)) {
                Long value = operands.length == 1 ? immediate(operands[0]) : null;
                if (value != null) pushedImmediates.add(value);
                continue;
            }

            if ("CALL".equals(mnemonic)) {
                callsSeen++;
                long allocationSize = pushedImmediates.size() == 1 ? pushedImmediates.get(0) : -1;
                if (allocationSize < 4 || allocationSize > 0x1000000L) allocationSize = -1;
                aliases.put("EAX", Origin.callOrigin(nextCallId++, allocationSize,
                    instruction.getAddress()));
                aliases.remove("ECX");
                aliases.remove("EDX");
                pushedImmediates.clear();
                continue;
            }

            if ("RET".equals(mnemonic)) {
                Origin returned = aliases.get("EAX");
                if (returned != null) result.returnedOrigins.add(returned.id);
                continue;
            }

            updateAliases(mnemonic, operands, aliases);
            if (!"MOV".equals(mnemonic) && !"LEA".equals(mnemonic) &&
                    !"ADD".equals(mnemonic) && !"SUB".equals(mnemonic)) {
                // Argument pushes only describe the immediately following call.
                if (pushedImmediates.size() > 8) pushedImmediates.clear();
            }
        }

        for (StoreEvidence store : result.stores) {
            for (ObjectWrite write : result.writes) {
                if (write.originId == store.origin.id && write.address.compareTo(store.raw.address) > 0)
                    store.postFieldWrites++;
            }
        }
        return result;
    }

    private void updateAliases(String mnemonic, String[] operands, Map<String, Origin> aliases) {
        if (operands.length == 0) return;
        String destination = cleanRegister(operands[0]);
        if ("MOV".equals(mnemonic) && destination != null && operands.length >= 2) {
            if (!isFullRegister(operands[0])) { aliases.remove(destination); return; }
            String sourceRegister = cleanRegister(operands[1]);
            Origin source = sourceRegister == null || !isFullRegister(operands[1]) ? null :
                aliases.get(sourceRegister);
            if (source == null) aliases.remove(destination);
            else aliases.put(destination, source);
            return;
        }
        if ("LEA".equals(mnemonic) && destination != null && operands.length >= 2) {
            if (!isFullRegister(operands[0])) { aliases.remove(destination); return; }
            MemoryExpr sourceMemory = memoryExpr(operands[1]);
            Origin source = sourceMemory == null ? null : aliases.get(sourceMemory.register);
            if (source == null) aliases.remove(destination);
            else aliases.put(destination, source.add(sourceMemory.displacement));
            return;
        }
        if (("ADD".equals(mnemonic) || "SUB".equals(mnemonic)) && destination != null &&
                operands.length >= 2 && aliases.containsKey(destination)) {
            Long value = immediate(operands[1]);
            if (value == null) aliases.remove(destination);
            else aliases.put(destination, aliases.get(destination).add(
                "SUB".equals(mnemonic) ? -value : value));
            return;
        }
        if (destination != null && writesRegister(mnemonic)) aliases.remove(destination);
    }

    private boolean writesRegister(String mnemonic) {
        return !Set.of("CMP", "TEST", "PUSH", "CALL", "JMP", "RET").contains(mnemonic);
    }

    private boolean isMemoryWrite(String mnemonic, String[] operands) {
        if (operands.length == 0 || memoryExpr(operands[0]) == null) return false;
        return !Set.of("CMP", "TEST", "PUSH", "CALL", "JMP", "LEA").contains(mnemonic);
    }

    private List<ConstructorProposal> constructorProposals(Function function, FlowResult flow) {
        List<ConstructorProposal> result = new ArrayList<>();
        Map<Integer, List<StoreEvidence>> byOrigin = storesByOrigin(flow.stores);
        List<StoreEvidence> thisStores = byOrigin.getOrDefault(Origin.THIS_ID, List.of());
        if (thisStores.isEmpty()) return result;
        StoreEvidence finalStore = thisStores.get(thisStores.size() - 1);
        String owner = finalStore.raw.table.owner;
        if (owner.isBlank()) return result;

        boolean returnsThis = flow.returnedOrigins.contains(Origin.THIS_ID);
        boolean strongTable = finalStore.raw.table.apply ||
            "high".equals(finalStore.raw.table.confidence);
        boolean constructorShape = finalStore.callsBefore > 0 || finalStore.postFieldWrites > 0;
        boolean high = strongTable && returnsThis && constructorShape;
        String expectedName = function.getName(true);
        boolean synthetic = isSynthetic(expectedName);
        boolean alreadyApplied = expectedName.equals(owner + "::" + leafOwner(owner)) &&
            hasTag(function, TAG);
        boolean signatureManual = function.getSignatureSource() == SourceType.USER_DEFINED &&
            !hasTag(function, TAG);
        boolean nameApply = high && synthetic;
        int edxUses = incomingEdxUses(function);
        int stackParameterUses = incomingStackParameterUses(function);
        boolean receiverOnlyFastcall = receiverOnlyFastcallSignature(function);
        boolean staleAppliedReceiver = alreadyApplied &&
            "__thiscall".equals(function.getCallingConventionName()) &&
            !explicitParameters(function).isEmpty();
        boolean parameterApply = (high || alreadyApplied) && !signatureManual &&
            edxUses == 0 && stackParameterUses == 0 &&
            (receiverOnlyFastcall || staleAppliedReceiver);
        boolean conventionApply = high && !signatureManual &&
            !"__thiscall".equals(function.getCallingConventionName()) && parameterApply;
        String reason = "final_vptr=" + addr(finalStore.raw.table.address) +
            "; returns_this=" + returnsThis + "; calls_before=" + finalStore.callsBefore +
            "; field_writes_after=" + finalStore.postFieldWrites +
            "; incoming_edx_uses=" + edxUses +
            "; incoming_stack_parameter_uses=" + stackParameterUses +
            "; table_confidence=" + finalStore.raw.table.confidence;
        result.add(new ConstructorProposal(function.getEntryPoint(), expectedName,
            function.getSymbol().getSource().toString(),
            function.getSignature().getPrototypeString(true),
            function.getSignatureSource().toString(), owner, owner + "::" + leafOwner(owner),
            finalStore.raw.table.address, finalStore.raw.address, returnsThis,
            nameApply, conventionApply, parameterApply, edxUses, stackParameterUses,
            alreadyApplied ? "high" : high ? "high" : "medium",
            alreadyApplied ? reason + "; previously_applied" : reason));
        return result;
    }

    private boolean receiverOnlyFastcallSignature(Function function) {
        if (!"__fastcall".equals(function.getCallingConventionName())) return false;
        List<Parameter> parameters = explicitParameters(function);
        if (parameters.size() != 1) return false;
        Parameter parameter = parameters.get(0);
        return parameter.isRegisterVariable() && parameter.getRegister() != null &&
            "ECX".equals(canonicalRegister(parameter.getRegister().getName()));
    }

    private List<Parameter> explicitParameters(Function function) {
        List<Parameter> result = new ArrayList<>();
        for (Parameter parameter : function.getParameters())
            if (!parameter.isAutoParameter()) result.add(parameter);
        return result;
    }

    private int incomingEdxUses(Function function) {
        boolean live = true;
        int uses = 0, seen = 0;
        InstructionIterator instructions = listing.getInstructions(function.getBody(), true);
        while (instructions.hasNext() && seen++ < 64 && live) {
            Instruction instruction = instructions.next();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            String[] operands = splitOperands(instruction.toString().toUpperCase(Locale.ROOT));
            for (int index = 0; index < operands.length; index++) {
                String register = cleanRegister(operands[index]);
                MemoryExpr memory = memoryExpr(operands[index]);
                boolean mentionsEdx = "EDX".equals(register) ||
                    memory != null && "EDX".equals(memory.register);
                if (!mentionsEdx) continue;
                boolean pureOverwrite = index == 0 && "EDX".equals(register) &&
                    Set.of("MOV", "LEA", "POP").contains(mnemonic);
                if (pureOverwrite) live = false;
                else uses++;
            }
            if ("XOR".equals(mnemonic) && operands.length >= 2 &&
                    "EDX".equals(cleanRegister(operands[0])) &&
                    "EDX".equals(cleanRegister(operands[1]))) live = false;
            if ("CALL".equals(mnemonic)) live = false;
        }
        return uses;
    }

    private int incomingStackParameterUses(Function function) {
        int uses = 0;
        InstructionIterator instructions = listing.getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            String[] operands = splitOperands(instruction.toString().toUpperCase(Locale.ROOT));
            for (String operand : operands) {
                MemoryExpr memory = memoryExpr(operand);
                if (memory == null) continue;
                if ("EBP".equals(memory.register) && memory.displacement >= 8 ||
                        "ESP".equals(memory.register) && memory.displacement >= 4) uses++;
            }
        }
        return uses;
    }

    private List<HierarchyProposal> hierarchyProposals(Function function, FlowResult flow) {
        List<HierarchyProposal> result = new ArrayList<>();
        for (List<StoreEvidence> stores : storesByOrigin(flow.stores).values()) {
            String prior = "";
            Address priorTable = null;
            for (StoreEvidence store : stores) {
                String owner = store.raw.table.owner;
                if (owner.isBlank()) continue;
                if (!prior.isBlank() && !owner.equals(prior)) {
                    boolean high = store.raw.table.apply && priorTable != null;
                    result.add(new HierarchyProposal(prior, owner, priorTable,
                        store.raw.table.address, function.getEntryPoint(), high,
                        "same_object_vptr_store_order"));
                }
                prior = owner;
                priorTable = store.raw.table.address;
            }
        }
        return result;
    }

    private List<AllocationEvidence> allocationEvidence(Function function, FlowResult flow) {
        List<AllocationEvidence> result = new ArrayList<>();
        for (List<StoreEvidence> stores : storesByOrigin(flow.stores).values()) {
            if (stores.isEmpty()) continue;
            StoreEvidence last = stores.get(stores.size() - 1);
            if (last.origin.kind != OriginKind.CALL || last.origin.allocationSize < 4 ||
                    last.raw.table.owner.isBlank()) continue;
            boolean returned = flow.returnedOrigins.contains(last.origin.id);
            if (!returned) continue;
            result.add(new AllocationEvidence(last.raw.table.owner,
                last.origin.allocationSize, function.getEntryPoint(), last.raw.table.address,
                last.origin.callAddress));
        }
        return result;
    }

    private Map<Integer, List<StoreEvidence>> storesByOrigin(List<StoreEvidence> stores) {
        Map<Integer, List<StoreEvidence>> result = new LinkedHashMap<>();
        for (StoreEvidence store : stores)
            result.computeIfAbsent(store.origin.id, ignored -> new ArrayList<>()).add(store);
        return result;
    }

    private List<HierarchyProposal> deduplicateHierarchy(List<HierarchyProposal> input) {
        Map<String, HierarchyProposal> result = new LinkedHashMap<>();
        for (HierarchyProposal proposal : input) {
            String key = proposal.baseOwner + "\u0000" + proposal.derivedOwner;
            HierarchyProposal existing = result.get(key);
            if (existing == null) result.put(key, proposal);
            else {
                existing.evidenceFunctions.addAll(proposal.evidenceFunctions);
                existing.apply |= proposal.apply;
            }
        }
        List<HierarchyProposal> rows = new ArrayList<>(result.values());
        rows.sort(Comparator.comparing((HierarchyProposal p) -> p.baseOwner)
            .thenComparing(p -> p.derivedOwner));
        return rows;
    }

    private List<ClassSizeProposal> classSizes(List<AllocationEvidence> evidence) {
        Map<String, Map<Long, List<AllocationEvidence>>> grouped = new TreeMap<>();
        for (AllocationEvidence item : evidence)
            grouped.computeIfAbsent(item.owner, ignored -> new TreeMap<>())
                .computeIfAbsent(item.size, ignored -> new ArrayList<>()).add(item);
        List<ClassSizeProposal> result = new ArrayList<>();
        for (Map.Entry<String, Map<Long, List<AllocationEvidence>>> ownerEntry : grouped.entrySet()) {
            boolean unique = ownerEntry.getValue().size() == 1;
            for (Map.Entry<Long, List<AllocationEvidence>> sizeEntry : ownerEntry.getValue().entrySet()) {
                Set<String> functions = new TreeSet<>(), tables = new TreeSet<>(), calls = new TreeSet<>();
                for (AllocationEvidence item : sizeEntry.getValue()) {
                    functions.add(addr(item.function));
                    tables.add(addr(item.table));
                    calls.add(addr(item.allocationCall));
                }
                result.add(new ClassSizeProposal(ownerEntry.getKey(), sizeEntry.getKey(), unique,
                    unique ? "unique_returned_allocation_size" : "conflicting_allocation_sizes",
                    String.join(" | ", functions), String.join(" | ", tables),
                    String.join(" | ", calls)));
            }
        }
        return result;
    }

    private void writeConstructors(Path path, List<ConstructorProposal> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("name_apply\tconvention_apply\tparameter_apply\tfunction_address\texpected_name\t" +
                "expected_name_source\texpected_signature\texpected_signature_source\towner\t" +
                "proposed_name\ttable_address\tstore_address\treturns_this\t" +
                "incoming_edx_uses\tincoming_stack_parameter_uses\tconfidence\treason\n");
            for (ConstructorProposal p : rows) {
                out.write(bit(p.nameApply) + "\t" + bit(p.conventionApply) + "\t" +
                    bit(p.parameterApply) + "\t" + addr(p.address) +
                    "\t" + tsv(p.expectedName) + "\t" + p.expectedNameSource + "\t" +
                    tsv(p.expectedSignature) + "\t" + p.expectedSignatureSource + "\t" +
                    tsv(p.owner) + "\t" + tsv(p.proposedName) + "\t" + addr(p.tableAddress) +
                    "\t" + addr(p.storeAddress) + "\t" + p.returnsThis + "\t" +
                    p.incomingEdxUses + "\t" + p.incomingStackParameterUses + "\t" +
                    p.confidence + "\t" + tsv(p.reason) + "\n");
            }
        }
    }

    private void writeConstructorsJson(Path path, List<ConstructorProposal> rows) throws Exception {
        List<String> output = new ArrayList<>();
        for (ConstructorProposal p : rows) output.add("{\"name_apply\":" + p.nameApply +
            ",\"convention_apply\":" + p.conventionApply + ",\"function_address\":" +
            q(addr(p.address)) + ",\"parameter_apply\":" + p.parameterApply +
            ",\"expected_name\":" + q(p.expectedName) +
            ",\"owner\":" + q(p.owner) + ",\"proposed_name\":" + q(p.proposedName) +
            ",\"table_address\":" + q(addr(p.tableAddress)) + ",\"store_address\":" +
            q(addr(p.storeAddress)) + ",\"returns_this\":" + p.returnsThis +
            ",\"confidence\":" + q(p.confidence) + ",\"reason\":" + q(p.reason) + "}");
        Files.write(path, output, StandardCharsets.UTF_8);
    }

    private void writeHierarchy(Path path, List<HierarchyProposal> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\tbase_owner\tderived_owner\tbase_table\tderived_table\t" +
                "evidence_functions\tconfidence\treason\n");
            for (HierarchyProposal p : rows) out.write(bit(p.apply) + "\t" + tsv(p.baseOwner) +
                "\t" + tsv(p.derivedOwner) + "\t" + addr(p.baseTable) + "\t" +
                addr(p.derivedTable) + "\t" + tsv(String.join(" | ", p.evidenceFunctions)) +
                "\t" + (p.apply ? "high" : "medium") + "\t" + p.reason + "\n");
        }
    }

    private void writeSizes(Path path, List<ClassSizeProposal> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\towner\tsize\tsize_hex\tconfidence\treason\tevidence_functions\t" +
                "table_addresses\tallocation_calls\n");
            for (ClassSizeProposal p : rows) out.write(bit(p.apply) + "\t" + tsv(p.owner) +
                "\t" + p.size + "\t" + String.format("0x%X", p.size) + "\t" +
                (p.apply ? "high" : "conflict") + "\t" + p.reason + "\t" +
                tsv(p.functions) + "\t" + tsv(p.tables) + "\t" + tsv(p.calls) + "\n");
        }
    }

    private void writeSummary(Path path, List<ConstructorProposal> constructors,
            List<HierarchyProposal> hierarchy, List<ClassSizeProposal> sizes, int writers)
            throws Exception {
        Files.write(path, List.of("program=" + currentProgram.getName(),
            "vptr_writer_functions=" + writers,
            "constructor_candidates=" + constructors.size(),
            "constructor_name_auto_apply=" + constructors.stream().filter(p -> p.nameApply).count(),
            "constructor_convention_auto_apply=" + constructors.stream()
                .filter(p -> p.conventionApply).count(),
            "constructor_parameter_auto_apply=" + constructors.stream()
                .filter(p -> p.parameterApply).count(),
            "direct_hierarchy_relations=" + hierarchy.size(),
            "high_class_sizes=" + sizes.stream().filter(p -> p.apply).count(),
            "note=Constructor naming requires an ECX-derived vptr store, returned this, and " +
                "initialization evidence. Apply flags are independent.",
            "note_sizes=Sizes come only from returned allocation results with a unique observed " +
                "size per owner; STClassLayoutAnalyzer consumes this file."),
            StandardCharsets.UTF_8);
    }

    private File inputFile() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException("Path to vtable_proposals.tsv is required");
        return askFile("Select vtable_proposals.tsv", "Analyze constructors");
    }

    private Tsv readTsv(Path path) throws Exception {
        List<String> lines = Files.readAllLines(path, StandardCharsets.UTF_8);
        if (lines.isEmpty()) throw new IllegalArgumentException("Empty TSV: " + path);
        String[] header = lines.get(0).split("\\t", -1);
        List<Map<String, String>> rows = new ArrayList<>();
        for (int line = 1; line < lines.size(); line++) {
            if (lines.get(line).isBlank()) continue;
            String[] values = lines.get(line).split("\\t", -1);
            if (values.length != header.length)
                throw new IllegalArgumentException(path.getFileName() + " line " + (line + 1) +
                    " has " + values.length + " columns; expected " + header.length);
            Map<String, String> row = new LinkedHashMap<>();
            for (int column = 0; column < header.length; column++)
                row.put(header[column], values[column]);
            rows.add(row);
        }
        return new Tsv(List.of(header), rows);
    }

    private void requireColumns(Tsv tsv, String... columns) {
        for (String column : columns)
            if (!tsv.header.contains(column))
                throw new IllegalArgumentException("Missing TSV column: " + column);
    }

    private String[] splitOperands(String text) {
        int space = text.indexOf(' ');
        if (space < 0) return new String[0];
        String operands = text.substring(space + 1).trim();
        if (operands.isEmpty()) return new String[0];
        return operands.split("\\s*,\\s*", -1);
    }

    private MemoryExpr memoryExpr(String operand) {
        int open = operand.indexOf('['), close = operand.lastIndexOf(']');
        if (open < 0 || close <= open) return null;
        String expression = operand.substring(open, close + 1).replace(" ", "");
        Matcher matcher = MEMORY.matcher(expression);
        if (!matcher.matches()) return null;
        long displacement = 0;
        if (matcher.group(3) != null) {
            Long parsed = immediate(matcher.group(3));
            if (parsed == null) return null;
            displacement = "-".equals(matcher.group(2)) ? -parsed : signed32(parsed);
        }
        return new MemoryExpr(canonicalRegister(matcher.group(1)), displacement);
    }

    private String cleanRegister(String operand) {
        String value = operand.trim().toUpperCase(Locale.ROOT);
        return REGISTER.matcher(value).matches() ? canonicalRegister(value) : null;
    }
    private String canonicalRegister(String register) {
        return switch (register.toUpperCase(Locale.ROOT)) {
            case "AL", "AH", "AX", "EAX", "RAX" -> "EAX";
            case "BL", "BH", "BX", "EBX", "RBX" -> "EBX";
            case "CL", "CH", "CX", "ECX", "RCX" -> "ECX";
            case "DL", "DH", "DX", "EDX", "RDX" -> "EDX";
            case "SI", "ESI", "RSI" -> "ESI"; case "DI", "EDI", "RDI" -> "EDI";
            case "BP", "EBP", "RBP" -> "EBP"; case "SP", "ESP", "RSP" -> "ESP";
            default -> register.toUpperCase(Locale.ROOT);
        };
    }
    private boolean isFullRegister(String operand) {
        return Set.of("EAX", "EBX", "ECX", "EDX", "ESI", "EDI", "EBP", "ESP",
            "RAX", "RBX", "RCX", "RDX", "RSI", "RDI", "RBP", "RSP")
            .contains(operand.trim().toUpperCase(Locale.ROOT));
    }

    private Long immediate(String operand) {
        String value = operand.trim().toUpperCase(Locale.ROOT);
        try {
            if (value.startsWith("0X")) return Long.parseUnsignedLong(value.substring(2), 16);
            if (value.matches("[0-9]+")) return Long.parseLong(value);
        }
        catch (NumberFormatException exception) { return null; }
        return null;
    }

    private long signed32(long value) {
        return value <= 0xffffffffL && (value & 0x80000000L) != 0 ? value - 0x100000000L : value;
    }

    private boolean isSynthetic(String name) {
        int separator = name.lastIndexOf("::");
        String leaf = separator < 0 ? name : name.substring(separator + 2);
        return leaf.startsWith("FUN_") || leaf.startsWith("thunk_FUN_") ||
            leaf.startsWith("SUB_") || leaf.startsWith("LAB_");
    }

    private boolean hasTag(Function function, String tagName) {
        for (FunctionTag tag : function.getTags()) if (tagName.equals(tag.getName())) return true;
        return false;
    }

    private String leafOwner(String owner) {
        int separator = owner.lastIndexOf("::");
        return separator < 0 ? owner : owner.substring(separator + 2);
    }

    private Address address(String value) {
        Address result = currentProgram.getAddressFactory().getAddress(value);
        if (result == null) throw new IllegalArgumentException("Invalid address: " + value);
        return result;
    }

    private static boolean enabled(String value) {
        return "1".equals(value) || "true".equalsIgnoreCase(value) ||
            "yes".equalsIgnoreCase(value);
    }
    private static String bit(boolean value) { return value ? "1" : "0"; }
    private static String addr(Address value) {
        return value == null ? "" : value.toString().toUpperCase(Locale.ROOT);
    }
    private static String tsv(String value) {
        return value.replace("\\", "\\\\").replace("\t", "\\t")
            .replace("\r", "\\r").replace("\n", "\\n");
    }
    private static String unt(String value) {
        if (value == null) return "";
        StringBuilder result = new StringBuilder();
        boolean escaped = false;
        for (char ch : value.toCharArray()) {
            if (!escaped && ch == '\\') { escaped = true; continue; }
            if (escaped) {
                if (ch == 't') result.append('\t');
                else if (ch == 'r') result.append('\r');
                else if (ch == 'n') result.append('\n');
                else result.append(ch);
                escaped = false;
            }
            else result.append(ch);
        }
        if (escaped) result.append('\\');
        return result.toString();
    }
    private static String q(String value) {
        return "\"" + value.replace("\\", "\\\\").replace("\"", "\\\"")
            .replace("\r", "\\r").replace("\n", "\\n") + "\"";
    }

    private static class Tsv {
        final List<String> header;
        final List<Map<String, String>> rows;
        Tsv(List<String> header, List<Map<String, String>> rows) {
            this.header = header; this.rows = rows;
        }
    }
    private static class TableInfo {
        final Address address;
        final String owner, name, confidence;
        final boolean apply;
        TableInfo(Address address, String owner, String name, String confidence, boolean apply) {
            this.address = address; this.owner = owner; this.name = name;
            this.confidence = confidence; this.apply = apply;
        }
    }
    private static class RawStore {
        final Address address;
        final TableInfo table;
        RawStore(Address address, TableInfo table) { this.address = address; this.table = table; }
    }
    private enum OriginKind { THIS, CALL }
    private static class Origin {
        static final int THIS_ID = 0;
        final int id;
        final OriginKind kind;
        final long offset, allocationSize;
        final Address callAddress;
        Origin(int id, OriginKind kind, long offset, long allocationSize, Address callAddress) {
            this.id = id; this.kind = kind; this.offset = offset;
            this.allocationSize = allocationSize; this.callAddress = callAddress;
        }
        static Origin thisOrigin() { return new Origin(THIS_ID, OriginKind.THIS, 0, -1, null); }
        static Origin callOrigin(int id, long size, Address call) {
            return new Origin(id, OriginKind.CALL, 0, size, call);
        }
        Origin add(long amount) {
            return new Origin(id, kind, offset + amount, allocationSize, callAddress);
        }
    }
    private static class MemoryExpr {
        final String register;
        final long displacement;
        MemoryExpr(String register, long displacement) {
            this.register = register; this.displacement = displacement;
        }
    }
    private static class StoreEvidence {
        final RawStore raw;
        final Origin origin;
        final int callsBefore;
        int postFieldWrites;
        StoreEvidence(RawStore raw, Origin origin, int callsBefore) {
            this.raw = raw; this.origin = origin; this.callsBefore = callsBefore;
        }
    }
    private static class ObjectWrite {
        final Address address;
        final int originId;
        final long offset;
        ObjectWrite(Address address, int originId, long offset) {
            this.address = address; this.originId = originId; this.offset = offset;
        }
    }
    private static class FlowResult {
        final List<StoreEvidence> stores = new ArrayList<>();
        final List<ObjectWrite> writes = new ArrayList<>();
        final Set<Integer> returnedOrigins = new TreeSet<>();
    }
    private static class ConstructorProposal {
        final Address address, tableAddress, storeAddress;
        final String expectedName, expectedNameSource, expectedSignature,
            expectedSignatureSource, owner, proposedName, confidence, reason;
        final boolean returnsThis, nameApply, conventionApply, parameterApply;
        final int incomingEdxUses, incomingStackParameterUses;
        ConstructorProposal(Address address, String expectedName, String expectedNameSource,
                String expectedSignature, String expectedSignatureSource, String owner,
                String proposedName, Address tableAddress, Address storeAddress,
                boolean returnsThis, boolean nameApply, boolean conventionApply,
                boolean parameterApply, int incomingEdxUses, int incomingStackParameterUses,
                String confidence, String reason) {
            this.address = address; this.expectedName = expectedName;
            this.expectedNameSource = expectedNameSource; this.expectedSignature = expectedSignature;
            this.expectedSignatureSource = expectedSignatureSource; this.owner = owner;
            this.proposedName = proposedName; this.tableAddress = tableAddress;
            this.storeAddress = storeAddress; this.returnsThis = returnsThis;
            this.nameApply = nameApply; this.conventionApply = conventionApply;
            this.parameterApply = parameterApply; this.incomingEdxUses = incomingEdxUses;
            this.incomingStackParameterUses = incomingStackParameterUses;
            this.confidence = confidence; this.reason = reason;
        }
    }
    private static class HierarchyProposal {
        final String baseOwner, derivedOwner, reason;
        final Address baseTable, derivedTable;
        final Set<String> evidenceFunctions = new TreeSet<>();
        boolean apply;
        HierarchyProposal(String baseOwner, String derivedOwner, Address baseTable,
                Address derivedTable, Address function, boolean apply, String reason) {
            this.baseOwner = baseOwner; this.derivedOwner = derivedOwner;
            this.baseTable = baseTable; this.derivedTable = derivedTable;
            this.apply = apply; this.reason = reason; this.evidenceFunctions.add(addr(function));
        }
    }
    private static class AllocationEvidence {
        final String owner;
        final long size;
        final Address function, table, allocationCall;
        AllocationEvidence(String owner, long size, Address function, Address table,
                Address allocationCall) {
            this.owner = owner; this.size = size; this.function = function;
            this.table = table; this.allocationCall = allocationCall;
        }
    }
    private static class ClassSizeProposal {
        final String owner, reason, functions, tables, calls;
        final long size;
        final boolean apply;
        ClassSizeProposal(String owner, long size, boolean apply, String reason,
                String functions, String tables, String calls) {
            this.owner = owner; this.size = size; this.apply = apply; this.reason = reason;
            this.functions = functions; this.tables = tables; this.calls = calls;
        }
    }
}
