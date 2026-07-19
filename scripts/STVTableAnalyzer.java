// Find C++-style virtual function tables in read-only memory.
// Read-only: writes table/slot proposals for review by STVTableApplier.
// Argument: recovery root directory; output goes to <root>/<program>/vtable_*.{tsv,jsonl,txt}.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Analyze VTables

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
import ghidra.program.model.address.AddressSpace;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionTag;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.Listing;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.mem.MemoryAccessException;
import ghidra.program.model.mem.MemoryBlock;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.Symbol;

public class STVTableAnalyzer extends GhidraScript {
    private static final int MIN_SLOTS = 3;
    private static final int MAX_SLOTS = 128;
    private static final Map<String, String> KNOWN_TABLE_OWNERS = Map.of(
        "0079E188", "SystemClassTy"
    );

    private Listing listing;
    private Memory memory;
    private int pointerSize;
    private AddressSpace addressSpace;

    @Override
    protected void run() throws Exception {
        if (currentProgram == null) {
            printerr("Open the analyzed ST program first.");
            return;
        }
        File root = outputDirectory();
        if (root == null) return;

        listing = currentProgram.getListing();
        memory = currentProgram.getMemory();
        pointerSize = currentProgram.getDefaultPointerSize();
        addressSpace = currentProgram.getAddressFactory().getDefaultAddressSpace();
        if (pointerSize != 4 && pointerSize != 8)
            throw new IllegalArgumentException("Unsupported pointer size: " + pointerSize);

        Map<Address, StartEvidence> starts = findCandidateStarts();
        List<Candidate> candidates = buildCandidates(starts);
        for (Candidate candidate : candidates) classify(candidate);
        candidates.sort(Comparator.comparing(candidate -> candidate.address));
        List<Relation> relations = analyzeRelations(candidates);
        inferRareOverrideOwners(candidates);
        makeProposalNamesUnique(candidates);

        Path dir = root.toPath().toAbsolutePath().normalize()
            .resolve(safe(currentProgram.getName()));
        Files.createDirectories(dir);
        writeProposalsTsv(dir.resolve("vtable_proposals.tsv"), candidates);
        writeProposalsJsonl(dir.resolve("vtable_proposals.jsonl"), candidates);
        writeSlotsTsv(dir.resolve("vtable_slots.tsv"), candidates);
        writeSlotsJsonl(dir.resolve("vtable_slots.jsonl"), candidates);
        writeRelations(dir.resolve("vtable_relations.tsv"), relations);
        writeConflicts(dir.resolve("vtable_conflicts.jsonl"), candidates);
        writeSummary(dir.resolve("vtable_summary.txt"), candidates);

        long high = candidates.stream().filter(candidate -> candidate.apply).count();
        long conflicts = candidates.stream().filter(candidate -> candidate.ownerConflict).count();
        println("VTable analysis complete: " + dir);
        println("Tables: " + candidates.size() + ", high-confidence: " + high +
            ", owner conflicts: " + conflicts);
    }

    private Map<Address, StartEvidence> findCandidateStarts() throws Exception {
        Map<Address, StartEvidence> result = new TreeMap<>();
        for (MemoryBlock block : memory.getBlocks()) {
            monitor.checkCancelled();
            if (!block.isInitialized() || !block.isRead() || block.isWrite() || block.isExecute())
                continue;
            long first = block.getStart().getOffset();
            long aligned = (first + pointerSize - 1) & ~(pointerSize - 1L);
            long last = block.getEnd().getOffset() - (long)(MIN_SLOTS - 1) * pointerSize;
            for (long offset = aligned; offset <= last; offset += pointerSize) {
                if ((offset & 0xfff) == 0) monitor.checkCancelled();
                Address address = addressSpace.getAddress(offset);
                StartEvidence evidence = codeReferences(address);
                if (evidence.hasStrongReference() && hasCallableSlots(address, MIN_SLOTS, true)) {
                    result.put(address, evidence);
                    continue;
                }

                if (!hasCallableSlots(address, MIN_SLOTS, false)) continue;
                Address previous = offset - pointerSize < block.getStart().getOffset() ? null :
                    addressSpace.getAddress(offset - pointerSize);
                boolean runBoundary = previous == null || callableAtPointer(previous, false) == null;
                if (runBoundary) {
                    evidence.runBoundary = true;
                    result.put(address, evidence);
                }
            }
        }
        return result;
    }

    private List<Candidate> buildCandidates(Map<Address, StartEvidence> starts) throws Exception {
        List<Candidate> result = new ArrayList<>();
        Set<Address> strongStarts = new TreeSet<>();
        for (Map.Entry<Address, StartEvidence> entry : starts.entrySet()) {
            if (entry.getValue().hasStrongReference()) strongStarts.add(entry.getKey());
        }

        Set<Address> claimed = new TreeSet<>();
        for (Address start : strongStarts) {
            monitor.checkCancelled();
            Candidate candidate = buildCandidate(start, starts.get(start), strongStarts, true);
            if (candidate.slots.size() < MIN_SLOTS) continue;
            result.add(candidate);
            for (Slot slot : candidate.slots) claimed.add(slot.pointerAddress);
        }

        for (Map.Entry<Address, StartEvidence> entry : starts.entrySet()) {
            monitor.checkCancelled();
            if (entry.getValue().hasStrongReference() || claimed.contains(entry.getKey())) continue;
            Candidate candidate = buildCandidate(entry.getKey(), entry.getValue(), strongStarts, false);
            if (candidate.slots.size() >= MIN_SLOTS) result.add(candidate);
        }
        return result;
    }

    private Candidate buildCandidate(Address start, StartEvidence evidence, Set<Address> strongStarts,
            boolean allowInterior) {
        Candidate candidate = new Candidate(start, evidence);
        for (int index = 0; index < MAX_SLOTS; index++) {
            Address pointerAddress;
            try {
                pointerAddress = candidate.address.add((long)index * pointerSize);
            }
            catch (Exception exception) { break; }
            if (index > 0 && strongStarts.contains(pointerAddress)) break;
            CallableTarget callable = callableAtPointer(pointerAddress, allowInterior);
            if (callable == null) break;
            candidate.slots.add(slot(index, pointerAddress, callable));
        }
        return candidate;
    }

    private Slot slot(int index, Address pointerAddress, CallableTarget callable) {
        Function entryFunction = callable.entryFunction;
        Function target = entryFunction != null && entryFunction.isThunk() ?
            entryFunction.getThunkedFunction(true) : entryFunction;
        if (target == null) target = callable.containingFunction;
        String entryOwner = ownerOf(entryFunction);
        String targetOwner = ownerOf(target);
        String owner = !entryOwner.isEmpty() ? entryOwner : targetOwner;
        return new Slot(index, pointerAddress, callable.address, entryFunction,
            callable.containingFunction, target, owner, symbolName(callable.address));
    }

    private void classify(Candidate candidate) {
        Map<String, Integer> slotVotes = new TreeMap<>();
        Map<String, Integer> constructorVotes = new TreeMap<>();
        for (Slot slot : candidate.slots) {
            if (!slot.owner.isEmpty()) slotVotes.merge(slot.owner, 1, Integer::sum);
        }
        for (CodeReference reference : candidate.evidence.references) {
            if (reference.strong && !reference.owner.isEmpty())
                constructorVotes.merge(reference.owner, 1, Integer::sum);
        }

        candidate.slotOwners.addAll(slotVotes.keySet());
        candidate.constructorOwners.addAll(constructorVotes.keySet());
        String knownOwner = KNOWN_TABLE_OWNERS.get(addr(candidate.address));
        String constructorOwner = uniqueOwner(constructorVotes);
        if (knownOwner != null) {
            candidate.owner = knownOwner;
            candidate.reason = "confirmed_recovery_anchor";
            candidate.ownerConflict = slotVotes.keySet().stream()
                .anyMatch(owner -> !owner.equals(knownOwner));
            candidate.confidence = candidate.ownerConflict ? "medium" : "high";
            candidate.apply = !candidate.ownerConflict;
        }
        else if (!constructorOwner.isEmpty()) {
            candidate.owner = constructorOwner;
            candidate.reason = "unique_named_vptr_writer";
            candidate.ownerConflict = slotVotes.keySet().stream()
                .anyMatch(owner -> !owner.equals(constructorOwner));
            candidate.confidence = candidate.ownerConflict ? "medium" : "high";
            candidate.apply = !candidate.ownerConflict;
        }
        else if (constructorVotes.size() > 1) {
            candidate.owner = "";
            candidate.reason = "multiple_named_vptr_writers";
            candidate.ownerConflict = true;
            candidate.confidence = "low";
        }
        else if (slotVotes.size() == 1 && slotVotes.values().iterator().next() >= 2 &&
                candidate.evidence.hasStrongReference()) {
            candidate.owner = slotVotes.keySet().iterator().next();
            candidate.reason = "unique_slot_owner_and_vptr_store";
            candidate.confidence = "high";
            candidate.apply = true;
        }
        else if (!slotVotes.isEmpty()) {
            candidate.owner = slotVotes.size() == 1 ? slotVotes.keySet().iterator().next() : "";
            candidate.reason = slotVotes.size() == 1 ? "single_named_slot_owner" :
                "competing_slot_owners_left_unresolved";
            candidate.ownerConflict = slotVotes.size() > 1;
            candidate.confidence = candidate.ownerConflict ? "low" : "medium";
        }
        else {
            candidate.reason = candidate.evidence.hasStrongReference() ?
                "unnamed_vptr_store" : "function_pointer_run_without_owner";
            candidate.confidence = candidate.evidence.hasStrongReference() ? "medium" : "low";
        }

        candidate.proposedName = tableName(candidate.owner, candidate.address);
        for (Slot slot : candidate.slots) {
            if (slot.owner.isEmpty() && !candidate.owner.isEmpty() &&
                    slot.entryFunction != null && isDefaultFunction(slot.targetFunction)) {
                slot.proposedName = candidate.owner + "::vfunc_" +
                    String.format("%02X", slot.index * pointerSize);
            }
            else slot.proposedName = slot.targetName();
        }
    }

    private List<Relation> analyzeRelations(List<Candidate> candidates) {
        List<Relation> result = new ArrayList<>();
        for (int leftIndex = 0; leftIndex < candidates.size(); leftIndex++) {
            Candidate left = candidates.get(leftIndex);
            for (int rightIndex = leftIndex + 1; rightIndex < candidates.size(); rightIndex++) {
                Candidate right = candidates.get(rightIndex);
                int compared = Math.min(left.slots.size(), right.slots.size());
                if (compared < MIN_SLOTS) continue;
                int shared = 0;
                List<String> differences = new ArrayList<>();
                for (int slotIndex = 0; slotIndex < compared; slotIndex++) {
                    Address leftTarget = left.slots.get(slotIndex).rawTargetAddress;
                    Address rightTarget = right.slots.get(slotIndex).rawTargetAddress;
                    if (leftTarget.equals(rightTarget)) shared++;
                    else differences.add(String.format("0x%X", slotIndex * pointerSize));
                }
                int minimumShared = compared <= 4 ? 2 : MIN_SLOTS;
                if (shared < minimumShared || shared * 2 < compared) continue;
                Relation relation = new Relation(left, right, compared, shared,
                    String.join(" | ", differences));
                result.add(relation);
                left.relatedTables.add(addr(right.address));
                right.relatedTables.add(addr(left.address));
            }
        }

        // Inherited virtual functions can make a derived table look exactly like its base owner.
        // Without a named constructor, that is not safe enough for automatic application.
        for (Relation relation : result) {
            inferDerivedOwner(relation.left, relation.right);
            inferDerivedOwner(relation.right, relation.left);
        }
        for (Relation relation : result) {
            demoteInheritedOwnerGuess(relation.left, relation.right);
            demoteInheritedOwnerGuess(relation.right, relation.left);
        }
        return result;
    }

    private void inferDerivedOwner(Candidate candidate, Candidate possibleBase) {
        if (!isReliableBase(possibleBase) ||
                !candidate.owner.isEmpty() || !candidate.evidence.hasStrongReference() ||
                !candidate.slotOwners.contains(possibleBase.owner) ||
                candidate.slotOwners.size() != 2) return;
        String derivedOwner = candidate.slotOwners.stream()
            .filter(owner -> !owner.equals(possibleBase.owner)).findFirst().orElse("");
        if (derivedOwner.isEmpty()) return;
        candidate.owner = derivedOwner;
        candidate.proposedName = tableName(derivedOwner, candidate.address);
        candidate.ownerConflict = false;
        candidate.confidence = "high";
        candidate.apply = true;
        candidate.reason = "derived_owner_from_nonbase_override";
    }

    private boolean isReliableBase(Candidate candidate) {
        return "confirmed_recovery_anchor".equals(candidate.reason) ||
            (candidate.apply && "unique_slot_owner_and_vptr_store".equals(candidate.reason));
    }

    private void inferRareOverrideOwners(List<Candidate> candidates) {
        Map<String, Integer> tableFrequency = new TreeMap<>();
        for (Candidate candidate : candidates) {
            for (String owner : candidate.slotOwners) tableFrequency.merge(owner, 1, Integer::sum);
        }
        for (Candidate candidate : candidates) {
            if (!candidate.owner.isEmpty() || !candidate.evidence.hasStrongReference() ||
                    candidate.slotOwners.size() != 2) continue;
            List<String> owners = new ArrayList<>(candidate.slotOwners);
            owners.sort(Comparator.comparingInt(owner -> tableFrequency.getOrDefault(owner, 0)));
            int rareCount = tableFrequency.getOrDefault(owners.get(0), 0);
            int commonCount = tableFrequency.getOrDefault(owners.get(1), 0);
            if (rareCount != 1 || commonCount < 2) continue;
            candidate.owner = owners.get(0);
            candidate.proposedName = tableName(candidate.owner, candidate.address);
            candidate.ownerConflict = false;
            candidate.confidence = "medium";
            candidate.reason = "derived_owner_from_rare_override";
        }
    }

    private void demoteInheritedOwnerGuess(Candidate candidate, Candidate related) {
        if (!candidate.apply || !"unique_slot_owner_and_vptr_store".equals(candidate.reason) ||
                candidate.owner.isEmpty() || !related.evidence.hasStrongReference()) return;
        if (!related.slotOwners.contains(candidate.owner) && !candidate.owner.equals(related.owner)) return;
        int candidateReferences = candidate.evidence.strongReferenceCount();
        int relatedReferences = related.evidence.strongReferenceCount();
        if (candidateReferences > relatedReferences) return;
        if (candidateReferences == relatedReferences) {
            int constructionOrder = compareSharedWriterOrder(candidate, related);
            if (constructionOrder < 0) return;
        }
        candidate.apply = false;
        candidate.ownerConflict = true;
        candidate.confidence = "medium";
        candidate.reason = "slot_owner_may_be_inherited_from_related_table";
        candidate.owner = "";
        candidate.proposedName = "VTable_" + addr(candidate.address);
        for (Slot slot : candidate.slots) slot.proposedName = slot.targetName();
    }

    private int compareSharedWriterOrder(Candidate candidate, Candidate related) {
        for (CodeReference left : candidate.evidence.references) {
            if (!left.strong) continue;
            for (CodeReference right : related.evidence.references) {
                if (!right.strong || !left.function.equals(right.function)) continue;
                return left.address.compareTo(right.address);
            }
        }
        return 0;
    }

    private void makeProposalNamesUnique(List<Candidate> candidates) {
        Map<String, List<Candidate>> groups = new LinkedHashMap<>();
        for (Candidate candidate : candidates)
            groups.computeIfAbsent(candidate.proposedName, ignored -> new ArrayList<>()).add(candidate);
        for (List<Candidate> group : groups.values()) {
            if (group.size() < 2) continue;
            long autoApplyCount = group.stream().filter(candidate -> candidate.apply).count();
            for (Candidate candidate : group) {
                if (autoApplyCount == 1 && candidate.apply) continue;
                candidate.proposedName += "_" + addr(candidate.address);
            }
        }
    }

    private String uniqueOwner(Map<String, Integer> votes) {
        return votes.size() == 1 ? votes.keySet().iterator().next() : "";
    }

    private String ownerOf(Function function) {
        if (function == null || function.isExternal() || isLibraryFunction(function)) return "";
        String qualified = function.getName(true);
        int separator = qualified.lastIndexOf("::");
        if (separator > 0) {
            String owner = qualified.substring(0, separator);
            String upper = owner.toUpperCase(Locale.ROOT);
            if (!owner.equals("Global") && !owner.startsWith("Library::") &&
                    !upper.endsWith(".DLL") && !upper.contains(".DLL::")) return owner;
        }
        if (function.getCallingConventionName() != null &&
                function.getCallingConventionName().equals("__thiscall") &&
                function.getParameterCount() > 0) {
            Parameter parameter = function.getParameter(0);
            String typeOwner = pointedTypeName(parameter.getDataType());
            if (!typeOwner.isEmpty()) return typeOwner;
        }
        return "";
    }

    private boolean isLibraryFunction(Function function) {
        for (FunctionTag tag : function.getTags()) {
            String name = tag.getName();
            if ("LIBRARY".equals(name) || name.startsWith("LIBRARY_")) return true;
        }
        return false;
    }

    private String tableName(String owner, Address address) {
        if (owner == null || owner.isEmpty()) return "VTable_" + addr(address);
        String clean = owner.replace("::", "_").replaceAll("[^A-Za-z0-9_]", "_")
            .replaceAll("_+", "_");
        return clean + "VTable";
    }

    private String pointedTypeName(DataType type) {
        if (!(type instanceof Pointer pointer)) return "";
        DataType pointed = pointer.getDataType();
        if (pointed == null) return "";
        String name = pointed.getName();
        String lower = name.toLowerCase(Locale.ROOT);
        if (lower.equals("void") || lower.startsWith("undefined") || lower.equals("char") ||
                lower.equals("byte") || lower.equals("word") || lower.equals("dword")) return "";
        return name;
    }

    private boolean isDefaultFunction(Function function) {
        if (function == null) return false;
        return function.getSymbol().getSource() == SourceType.DEFAULT ||
            function.getName().startsWith("FUN_") || function.getName().startsWith("thunk_FUN_");
    }

    private boolean hasCallableSlots(Address address, int count, boolean allowInterior) {
        for (int index = 0; index < count; index++) {
            try {
                if (callableAtPointer(address.add((long)index * pointerSize), allowInterior) == null)
                    return false;
            }
            catch (Exception exception) { return false; }
        }
        return true;
    }

    private CallableTarget callableAtPointer(Address pointerAddress, boolean allowInterior) {
        Address target = readPointer(pointerAddress);
        if (target == null) return null;
        Function exact = currentProgram.getFunctionManager().getFunctionAt(target);
        if (exact != null) return new CallableTarget(target, exact, exact);
        if (!allowInterior || listing.getInstructionAt(target) == null) return null;
        return new CallableTarget(target, null, listing.getFunctionContaining(target));
    }

    private String symbolName(Address address) {
        Symbol symbol = currentProgram.getSymbolTable().getPrimarySymbol(address);
        return symbol == null ? "LAB_" + addr(address) : symbol.getName(true);
    }

    private Address readPointer(Address address) {
        try {
            long value = pointerSize == 4 ? memory.getInt(address) & 0xffffffffL : memory.getLong(address);
            return addressSpace.getAddress(value);
        }
        catch (MemoryAccessException | IllegalArgumentException exception) { return null; }
    }

    private StartEvidence codeReferences(Address address) {
        StartEvidence result = new StartEvidence();
        ReferenceIterator iterator = currentProgram.getReferenceManager().getReferencesTo(address);
        while (iterator.hasNext()) {
            Reference reference = iterator.next();
            Address from = reference.getFromAddress();
            Instruction instruction = listing.getInstructionAt(from);
            Function function = listing.getFunctionContaining(from);
            if (instruction == null || function == null) continue;
            boolean strong = isVptrStore(instruction, reference);
            result.references.add(new CodeReference(from, function, instruction.toString(), strong,
                ownerOf(function)));
        }
        return result;
    }

    private boolean isVptrStore(Instruction instruction, Reference reference) {
        if (!"MOV".equalsIgnoreCase(instruction.getMnemonicString()) ||
                reference.getOperandIndex() <= 0) return false;
        String text = instruction.toString();
        int comma = text.indexOf(',');
        if (comma < 0) return false;
        String destination = text.substring(0, comma);
        return destination.indexOf('[') >= 0 && destination.indexOf(']') >= 0;
    }

    private File outputDirectory() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless()) throw new IllegalArgumentException("Output directory is required");
        return askDirectory("Select recovery output directory", "Analyze");
    }

    private void writeProposalsTsv(Path path, List<Candidate> candidates) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\ttable_address\tproposed_name\towner\tslot_count\tnamed_slot_count\t" +
                "confidence\treason\tstrong_vptr_refs\tall_code_refs\tslot_owners\t" +
                "constructor_owners\trelated_tables\n");
            for (Candidate candidate : candidates) {
                out.write((candidate.apply ? "1" : "0") + "\t" + addr(candidate.address) + "\t" +
                    tsv(candidate.proposedName) + "\t" + tsv(candidate.owner) + "\t" +
                    candidate.slots.size() + "\t" + candidate.namedSlotCount() + "\t" +
                    candidate.confidence + "\t" + candidate.reason + "\t" +
                    tsv(candidate.evidence.referenceText(true)) + "\t" +
                    tsv(candidate.evidence.referenceText(false)) + "\t" +
                    tsv(String.join(" | ", candidate.slotOwners)) + "\t" +
                    tsv(String.join(" | ", candidate.constructorOwners)) + "\t" +
                    tsv(String.join(" | ", candidate.relatedTables)) + "\n");
            }
        }
    }

    private void writeProposalsJsonl(Path path, List<Candidate> candidates) throws Exception {
        List<String> rows = new ArrayList<>();
        for (Candidate candidate : candidates) {
            rows.add("{\"apply\":" + candidate.apply + ",\"table_address\":" +
                q(addr(candidate.address)) + ",\"proposed_name\":" + q(candidate.proposedName) +
                ",\"owner\":" + q(candidate.owner) + ",\"slot_count\":" +
                candidate.slots.size() + ",\"named_slot_count\":" + candidate.namedSlotCount() +
                ",\"confidence\":" + q(candidate.confidence) + ",\"reason\":" +
                q(candidate.reason) + ",\"strong_vptr_refs\":" +
                q(candidate.evidence.referenceText(true)) + ",\"slot_owners\":" +
                q(String.join(" | ", candidate.slotOwners)) + ",\"constructor_owners\":" +
                q(String.join(" | ", candidate.constructorOwners)) + ",\"related_tables\":" +
                q(String.join(" | ", candidate.relatedTables)) + "}");
        }
        Files.write(path, rows, StandardCharsets.UTF_8);
    }

    private void writeSlotsTsv(Path path, List<Candidate> candidates) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("table_address\towner\tslot_index\tslot_offset\tpointer_address\t" +
                "raw_target_address\traw_target_symbol\texact_function_entry\texact_function\t" +
                "interior_target\tcreate_function_candidate\tcontaining_function_entry\t" +
                "containing_function\tthunk\t" +
                "resolved_target_address\tresolved_target_function\tslot_owner\t" +
                "proposed_function\tcreate_apply\trename_apply\n");
            for (Candidate candidate : candidates) {
                for (Slot slot : candidate.slots) {
                    out.write(addr(candidate.address) + "\t" + tsv(candidate.owner) + "\t" +
                        slot.index + "\t" + String.format("0x%X", slot.index * pointerSize) + "\t" +
                        addr(slot.pointerAddress) + "\t" + addr(slot.rawTargetAddress) + "\t" +
                        tsv(slot.rawSymbol) + "\t" + addr(slot.functionEntry()) + "\t" +
                        tsv(slot.functionName()) + "\t" + slot.isInterior() + "\t" +
                        slot.isInterior() + "\t" +
                        addr(slot.containingEntry()) + "\t" + tsv(slot.containingName()) + "\t" +
                        slot.isThunk() + "\t" + addr(slot.resolvedAddress()) + "\t" +
                        tsv(slot.targetName()) + "\t" + tsv(slot.owner) + "\t" +
                        tsv(slot.proposedName) + "\t" +
                        (candidate.createApply(slot) ? "1" : "0") + "\t0\n");
                }
            }
        }
    }

    private void writeSlotsJsonl(Path path, List<Candidate> candidates) throws Exception {
        List<String> rows = new ArrayList<>();
        for (Candidate candidate : candidates) {
            for (Slot slot : candidate.slots) {
                rows.add("{\"table_address\":" + q(addr(candidate.address)) + ",\"owner\":" +
                    q(candidate.owner) + ",\"slot_index\":" + slot.index +
                    ",\"slot_offset\":" + q(String.format("0x%X", slot.index * pointerSize)) +
                    ",\"pointer_address\":" + q(addr(slot.pointerAddress)) +
                    ",\"raw_target_address\":" + q(addr(slot.rawTargetAddress)) +
                    ",\"raw_target_symbol\":" + q(slot.rawSymbol) +
                    ",\"exact_function_entry\":" + q(addr(slot.functionEntry())) +
                    ",\"exact_function\":" + q(slot.functionName()) +
                    ",\"interior_target\":" + slot.isInterior() +
                    ",\"create_function_candidate\":" + slot.isInterior() +
                    ",\"containing_function_entry\":" + q(addr(slot.containingEntry())) +
                    ",\"containing_function\":" + q(slot.containingName()) +
                    ",\"thunk\":" + slot.isThunk() + ",\"resolved_target_address\":" +
                    q(addr(slot.resolvedAddress())) + ",\"resolved_target_function\":" +
                    q(slot.targetName()) + ",\"slot_owner\":" + q(slot.owner) +
                    ",\"proposed_function\":" + q(slot.proposedName) +
                    ",\"create_apply\":" + candidate.createApply(slot) +
                    ",\"rename_apply\":false}");
            }
        }
        Files.write(path, rows, StandardCharsets.UTF_8);
    }

    private void writeRelations(Path path, List<Relation> relations) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("left_table\tleft_owner\tright_table\tright_owner\tcompared_slots\t" +
                "shared_slots\tshared_ratio\tdiffering_offsets\n");
            for (Relation relation : relations) {
                out.write(addr(relation.left.address) + "\t" + tsv(relation.left.owner) + "\t" +
                    addr(relation.right.address) + "\t" + tsv(relation.right.owner) + "\t" +
                    relation.compared + "\t" + relation.shared + "\t" +
                    String.format(Locale.ROOT, "%.3f", relation.shared / (double)relation.compared) +
                    "\t" + tsv(relation.differingOffsets) + "\n");
            }
        }
    }

    private void writeConflicts(Path path, List<Candidate> candidates) throws Exception {
        List<String> rows = new ArrayList<>();
        for (Candidate candidate : candidates) {
            if (!candidate.ownerConflict) continue;
            rows.add("{\"table_address\":" + q(addr(candidate.address)) +
                ",\"selected_owner\":" + q(candidate.owner) + ",\"slot_owners\":" +
                q(String.join(" | ", candidate.slotOwners)) + ",\"constructor_owners\":" +
                q(String.join(" | ", candidate.constructorOwners)) + ",\"reason\":" +
                q(candidate.reason) + ",\"related_tables\":" +
                q(String.join(" | ", candidate.relatedTables)) + "}");
        }
        Files.write(path, rows, StandardCharsets.UTF_8);
    }

    private void writeSummary(Path path, List<Candidate> candidates) throws Exception {
        long high = candidates.stream().filter(candidate -> candidate.apply).count();
        long medium = candidates.stream().filter(candidate -> "medium".equals(candidate.confidence)).count();
        long low = candidates.stream().filter(candidate -> "low".equals(candidate.confidence)).count();
        long conflicts = candidates.stream().filter(candidate -> candidate.ownerConflict).count();
        long slots = candidates.stream().mapToLong(candidate -> candidate.slots.size()).sum();
        long interiorSlots = candidates.stream().flatMap(candidate -> candidate.slots.stream())
            .filter(Slot::isInterior).count();
        Set<Address> createTargets = new TreeSet<>();
        for (Candidate candidate : candidates)
            for (Slot slot : candidate.slots)
                if (candidate.createApply(slot)) createTargets.add(slot.rawTargetAddress);
        Files.write(path, List.of(
            "program=" + currentProgram.getName(),
            "candidate_tables=" + candidates.size(),
            "candidate_slots=" + slots,
            "interior_code_slots=" + interiorSlots,
            "auto_create_function_targets=" + createTargets.size(),
            "high_auto_apply=" + high,
            "medium=" + medium,
            "low=" + low,
            "owner_conflicts=" + conflicts,
            "minimum_slots=" + MIN_SLOTS,
            "note=Analyzer is read-only. Table apply is conservative; rename_apply is always 0.",
            "note_apply=create_apply=1 creates only missing function boundaries; it never renames them.",
            "note_rename=Set rename_apply=1 only after reviewing proposed_function.",
            "note_interior=interior_target=true usually denotes an adjustor thunk or a missing function boundary.",
            "note_relations=Related layouts help distinguish inherited base slots from the actual table owner."),
            StandardCharsets.UTF_8);
    }

    private static String addr(Address address) {
        return address == null ? "" : address.toString().toUpperCase(Locale.ROOT);
    }
    private static String safe(String value) { return value.replaceAll("[^A-Za-z0-9._-]+", "_"); }
    private static String tsv(String value) { return value.replace("\\", "\\\\").replace("\t", "\\t").replace("\r", "\\r").replace("\n", "\\n"); }
    private static String q(String value) { return "\"" + value.replace("\\", "\\\\").replace("\"", "\\\"").replace("\r", "\\r").replace("\n", "\\n") + "\""; }

    private static class StartEvidence {
        final List<CodeReference> references = new ArrayList<>();
        boolean runBoundary;
        boolean hasStrongReference() {
            return references.stream().anyMatch(reference -> reference.strong);
        }
        int strongReferenceCount() {
            return (int)references.stream().filter(reference -> reference.strong).count();
        }
        String referenceText(boolean strongOnly) {
            List<String> result = new ArrayList<>();
            for (CodeReference reference : references) {
                if (strongOnly && !reference.strong) continue;
                result.add(addr(reference.address) + " " + reference.function.getName(true) +
                    " [" + (reference.strong ? "vptr-store" : "code-ref") + "] " + reference.instruction);
            }
            return String.join(" | ", result);
        }
    }
    private static class CodeReference {
        final Address address;
        final Function function;
        final String instruction;
        final boolean strong;
        final String owner;
        CodeReference(Address address, Function function, String instruction, boolean strong,
                String owner) {
            this.address = address;
            this.function = function;
            this.instruction = instruction;
            this.strong = strong;
            this.owner = owner;
        }
    }
    private static class Candidate {
        final Address address;
        final StartEvidence evidence;
        final List<Slot> slots = new ArrayList<>();
        final Set<String> slotOwners = new TreeSet<>(), constructorOwners = new TreeSet<>();
        final Set<String> relatedTables = new TreeSet<>();
        String owner = "", proposedName = "", confidence = "low", reason = "";
        boolean apply, ownerConflict;
        Candidate(Address address, StartEvidence evidence) {
            this.address = address;
            this.evidence = evidence;
        }
        int namedSlotCount() {
            int count = 0;
            for (Slot slot : slots) if (!slot.owner.isEmpty()) count++;
            return count;
        }
        boolean createApply(Slot slot) {
            return evidence.hasStrongReference() && slot.isInterior() &&
                slot.containingFunction == null;
        }
    }
    private static class CallableTarget {
        final Address address;
        final Function entryFunction, containingFunction;
        CallableTarget(Address address, Function entryFunction, Function containingFunction) {
            this.address = address;
            this.entryFunction = entryFunction;
            this.containingFunction = containingFunction;
        }
    }
    private static class Slot {
        final int index;
        final Address pointerAddress, rawTargetAddress;
        final Function entryFunction, containingFunction, targetFunction;
        final String owner, rawSymbol;
        String proposedName;
        Slot(int index, Address pointerAddress, Address rawTargetAddress, Function entryFunction,
                Function containingFunction, Function targetFunction, String owner, String rawSymbol) {
            this.index = index;
            this.pointerAddress = pointerAddress;
            this.rawTargetAddress = rawTargetAddress;
            this.entryFunction = entryFunction;
            this.containingFunction = containingFunction;
            this.targetFunction = targetFunction;
            this.owner = owner;
            this.rawSymbol = rawSymbol;
        }
        boolean isInterior() { return entryFunction == null; }
        boolean isThunk() { return entryFunction != null && entryFunction.isThunk(); }
        Address functionEntry() {
            return entryFunction == null ? null : entryFunction.getEntryPoint();
        }
        String functionName() { return entryFunction == null ? "" : entryFunction.getName(true); }
        Address containingEntry() {
            return containingFunction == null ? null : containingFunction.getEntryPoint();
        }
        String containingName() {
            return containingFunction == null ? "" : containingFunction.getName(true);
        }
        Address resolvedAddress() {
            return targetFunction == null || isInterior() ? rawTargetAddress :
                targetFunction.getEntryPoint();
        }
        String targetName() {
            return targetFunction == null || isInterior() ? rawSymbol : targetFunction.getName(true);
        }
    }
    private static class Relation {
        final Candidate left, right;
        final int compared, shared;
        final String differingOffsets;
        Relation(Candidate left, Candidate right, int compared, int shared,
                String differingOffsets) {
            this.left = left;
            this.right = right;
            this.compared = compared;
            this.shared = shared;
            this.differingOffsets = differingOffsets;
        }
    }
}
