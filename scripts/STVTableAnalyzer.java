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
import java.util.HashMap;
import java.util.LinkedHashMap;
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
    // Unreferenced function-pointer runs need several consecutive entries to avoid treating
    // arbitrary callback constants as vtables.  A table whose address is explicitly stored
    // through an object pointer is already strongly identified and may legitimately contain
    // only one virtual function (AiPlrClassTy is one such class).
    private static final int MIN_RUN_SLOTS = 3;
    private static final int MIN_STRONG_SLOTS = 1;
    private static final int MAX_SLOTS = 128;
    private static final Map<String, String> KNOWN_TABLE_OWNERS = Map.of(
        "007900A0", "STGameObjC",
        // STGroupBoatC::sub_004232A0 installs this table while constructing its
        // STGroupC base.  The derived constructor context must not win the owner vote.
        "00790508", "STGroupC",
        "0079E188", "SystemClassTy"
    );
    private static final Pattern RECOVERED_CONSTRUCTOR_TABLE = Pattern.compile(
        "(?m)^VTable:\\s*([0-9A-Fa-f]{6,16})(?:\\s|$)");
    private static final Pattern MEMORY_OPERAND = Pattern.compile(
        "^\\[([A-Z][A-Z0-9]{1,3})(?:([+-])(0X[0-9A-F]+|[0-9]+))?\\]$");
    private static final Pattern FULL_REGISTER = Pattern.compile(
        "^(?:EAX|EBX|ECX|EDX|ESI|EDI|EBP|ESP)$");
    private static final String CONSTRUCTOR_TAG = "RECOVERED_CONSTRUCTOR";

    private Listing listing;
    private Memory memory;
    private int pointerSize;
    private AddressSpace addressSpace;
    private final Map<Function, Address> finalStrongVptrStore = new LinkedHashMap<>();

    @Override
    protected void run() throws Exception {
        // Read-only script: do not leave GhidraScript's implicit transaction around runScript().
        end(true);
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
        indexFinalStrongVptrStores(candidates);
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
            long last = block.getEnd().getOffset() -
                (long)(MIN_STRONG_SLOTS - 1) * pointerSize;
            long lastRunStart = block.getEnd().getOffset() -
                (long)(MIN_RUN_SLOTS - 1) * pointerSize;
            for (long offset = aligned; offset <= last; offset += pointerSize) {
                if ((offset & 0xfff) == 0) monitor.checkCancelled();
                Address address = addressSpace.getAddress(offset);
                StartEvidence evidence = codeReferences(address);
                if (evidence.hasStrongReference() &&
                        hasCallableSlots(address, MIN_STRONG_SLOTS, true)) {
                    result.put(address, evidence);
                    continue;
                }

                if (offset > lastRunStart ||
                        !hasCallableSlots(address, MIN_RUN_SLOTS, false)) continue;
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
            if (candidate.slots.size() < MIN_STRONG_SLOTS) continue;
            result.add(candidate);
            for (Slot slot : candidate.slots) claimed.add(slot.pointerAddress);
        }

        for (Map.Entry<Address, StartEvidence> entry : starts.entrySet()) {
            monitor.checkCancelled();
            if (entry.getValue().hasStrongReference() || claimed.contains(entry.getKey())) continue;
            Candidate candidate = buildCandidate(entry.getKey(), entry.getValue(), strongStarts, false);
            if (candidate.slots.size() >= MIN_RUN_SLOTS) result.add(candidate);
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
        if (target == null) target = callable.redirectTarget;
        if (target == null) target = callable.containingFunction;
        String entryOwner = ownerOf(entryFunction);
        String targetOwner = ownerOf(target);
        String owner = !entryOwner.isEmpty() ? entryOwner : targetOwner;
        return new Slot(index, pointerAddress, callable.address, entryFunction,
            callable.containingFunction, target, owner, symbolName(callable.address),
            callable.redirectTarget != null);
    }

    private void classify(Candidate candidate) {
        Map<String, Integer> slotVotes = new TreeMap<>();
        Map<String, Integer> constructorVotes = new TreeMap<>();
        Map<String, Integer> writerVotes = new TreeMap<>();
        for (Slot slot : candidate.slots) {
            if (!slot.owner.isEmpty()) slotVotes.merge(slot.owner, 1, Integer::sum);
        }
        for (CodeReference reference : candidate.evidence.references) {
            if (!reference.strong || reference.owner.isEmpty()) continue;
            writerVotes.merge(reference.owner, 1, Integer::sum);
            String constructorOwner = constructorOwner(reference, candidate.address);
            if (!constructorOwner.isEmpty())
                constructorVotes.merge(constructorOwner, 1, Integer::sum);
        }

        candidate.slotOwners.addAll(slotVotes.keySet());
        candidate.constructorOwners.addAll(constructorVotes.keySet());
        candidate.vptrWriterOwners.addAll(writerVotes.keySet());
        String knownOwner = KNOWN_TABLE_OWNERS.get(addr(candidate.address));
        String constructorOwner = uniqueOwner(constructorVotes);
        if (knownOwner != null) {
            candidate.owner = knownOwner;
            candidate.ownerConflict = !constructorVotes.isEmpty() &&
                (constructorVotes.size() != 1 || !constructorVotes.containsKey(knownOwner));
            candidate.reason = candidate.ownerConflict ?
                "confirmed_anchor_conflicts_with_constructor" : "confirmed_recovery_anchor";
            candidate.confidence = candidate.ownerConflict ? "medium" : "high";
            candidate.apply = !candidate.ownerConflict;
        }
        else if (!constructorOwner.isEmpty()) {
            candidate.owner = constructorOwner;
            candidate.reason = "unique_constructor_vptr_anchor";
            // A derived table normally contains inherited methods owned by base classes.
            // Their namespaces support the hierarchy; they do not contradict the exact
            // table installed by this constructor.
            candidate.ownerConflict = false;
            candidate.confidence = "high";
            candidate.apply = true;
        }
        else if (constructorVotes.size() > 1) {
            candidate.owner = "";
            candidate.reason = "multiple_constructor_vptr_anchors";
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
        else if (candidate.slots.size() == 1 && slotVotes.size() == 1 &&
                candidate.hasPrimaryVptrStore() &&
                hasDirectNamedSlotAnchor(candidate, slotVotes.keySet().iterator().next())) {
            candidate.owner = slotVotes.keySet().iterator().next();
            candidate.reason = "single_slot_named_override_and_vptr_store";
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
            candidate.reason = !writerVotes.isEmpty() ? "named_nonconstructor_vptr_writer_review" :
                candidate.evidence.hasStrongReference() ? "unnamed_vptr_store" :
                "function_pointer_run_without_owner";
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

    private void indexFinalStrongVptrStores(List<Candidate> candidates) {
        finalStrongVptrStore.clear();
        for (Candidate candidate : candidates) {
            for (CodeReference reference : candidate.evidence.references) {
                if (!reference.strong) continue;
                Address prior = finalStrongVptrStore.get(reference.function);
                if (prior == null || reference.address.compareTo(prior) > 0)
                    finalStrongVptrStore.put(reference.function, reference.address);
            }
        }
    }

    private String constructorOwner(CodeReference reference, Address tableAddress) {
        Function function = reference.function;
        String owner = reference.owner;
        if (owner.isEmpty() || function == null) return "";

        if (hasTag(function, CONSTRUCTOR_TAG)) {
            String comment = function.getComment();
            if (comment != null) {
                Matcher matcher = RECOVERED_CONSTRUCTOR_TABLE.matcher(comment);
                while (matcher.find())
                    if (addr(tableAddress).equalsIgnoreCase(matcher.group(1))) return owner;
            }
        }

        String ownerLeaf = owner;
        int separator = ownerLeaf.lastIndexOf("::");
        if (separator >= 0) ownerLeaf = ownerLeaf.substring(separator + 2);
        Address finalStore = finalStrongVptrStore.get(function);
        return function.getName().equals(ownerLeaf) && reference.address.equals(finalStore) ?
            owner : "";
    }

    private boolean hasTag(Function function, String tagName) {
        for (FunctionTag tag : function.getTags())
            if (tagName.equals(tag.getName())) return true;
        return false;
    }

    private List<Relation> analyzeRelations(List<Candidate> candidates) {
        List<Relation> result = new ArrayList<>();
        for (int leftIndex = 0; leftIndex < candidates.size(); leftIndex++) {
            Candidate left = candidates.get(leftIndex);
            for (int rightIndex = leftIndex + 1; rightIndex < candidates.size(); rightIndex++) {
                Candidate right = candidates.get(rightIndex);
                int compared = Math.min(left.slots.size(), right.slots.size());
                if (compared < MIN_RUN_SLOTS) continue;
                int shared = 0;
                List<String> differences = new ArrayList<>();
                for (int slotIndex = 0; slotIndex < compared; slotIndex++) {
                    Address leftTarget = left.slots.get(slotIndex).rawTargetAddress;
                    Address rightTarget = right.slots.get(slotIndex).rawTargetAddress;
                    if (leftTarget.equals(rightTarget)) shared++;
                    else differences.add(String.format("0x%X", slotIndex * pointerSize));
                }
                int minimumShared = compared <= 4 ? 2 : MIN_RUN_SLOTS;
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
            "unique_constructor_vptr_anchor".equals(candidate.reason) ||
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

            // Multiple inheritance and embedded polymorphic subobjects legitimately give one
            // class more than one vtable.  Keep the primary table's natural class name and make
            // a proven secondary table readable by naming its exact this-relative offset.
            List<Candidate> primary = group.stream()
                .filter(candidate -> candidate.apply && candidate.hasPrimaryVptrStore()).toList();
            Candidate primaryToKeep = primary.size() == 1 ? primary.get(0) : null;
            for (Candidate candidate : group) {
                if (candidate == primaryToKeep) continue;
                Long offset = candidate.singleKnownThisOffset();
                if (offset != null && offset != 0)
                    candidate.proposedName += "_at_" + String.format("%X", offset);
            }

            Map<String, List<Candidate>> remaining = new LinkedHashMap<>();
            for (Candidate candidate : group)
                remaining.computeIfAbsent(candidate.proposedName, ignored -> new ArrayList<>())
                    .add(candidate);
            for (List<Candidate> duplicates : remaining.values()) {
                if (duplicates.size() < 2) continue;
                long autoApplyCount = duplicates.stream()
                    .filter(candidate -> candidate.apply).count();
                for (Candidate candidate : duplicates) {
                    if (candidate == primaryToKeep || autoApplyCount == 1 && candidate.apply)
                        continue;
                    candidate.proposedName += "_" + addr(candidate.address);
                }
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

    private boolean hasDirectNamedSlotAnchor(Candidate candidate, String owner) {
        for (Slot slot : candidate.slots) {
            Function target = slot.targetFunction;
            if (!owner.equals(slot.owner) || target == null || isDefaultFunction(target)) continue;
            if (target.getSymbol().getSource() == SourceType.USER_DEFINED ||
                    target.getSignatureSource() == SourceType.USER_DEFINED ||
                    hasTag(target, "RECOVERED_DEBUG_NAME") ||
                    hasTag(target, "RECOVERED_CURATED_PROPOSAL") ||
                    hasTag(target, "RECOVERED_VIRTUAL_METHOD")) return true;
        }
        return false;
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
        if (exact != null) return new CallableTarget(target, exact, exact, null);
        Instruction instruction = listing.getInstructionAt(target);
        if (!allowInterior || instruction == null) return null;
        Function redirectTarget = directJumpTarget(instruction);
        return new CallableTarget(target, null, listing.getFunctionContaining(target),
            redirectTarget);
    }

    private Function directJumpTarget(Instruction instruction) {
        // Ghidra may retain a synthetic fall-through for an unclaimed JMP instruction.  The
        // mnemonic plus its single direct flow is the stable discriminator here; indirect JMPs
        // have no concrete flow and are deliberately rejected.
        if (!"JMP".equalsIgnoreCase(instruction.getMnemonicString())) return null;
        Address[] flows = instruction.getFlows();
        if (flows.length != 1) return null;
        Function target = currentProgram.getFunctionManager().getFunctionAt(flows[0]);
        if (target != null) return target;
        return currentProgram.getFunctionManager().getFunctionContaining(flows[0]);
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
                ownerOf(function), strong ? thisStoreOffset(function, instruction) : null));
        }
        return result;
    }

    private Long thisStoreOffset(Function function, Instruction target) {
        Map<String, Long> aliases = new HashMap<>();
        aliases.put("ECX", 0L);
        ghidra.program.model.listing.InstructionIterator iterator =
            listing.getInstructions(function.getBody(), true);
        while (iterator.hasNext()) {
            Instruction instruction = iterator.next();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            String[] operands = splitOperands(instruction.toString());
            if (instruction.getAddress().equals(target.getAddress())) {
                MemoryOperand destination = operands.length == 0 ? null :
                    memoryOperand(operands[0]);
                Long base = destination == null ? null : aliases.get(destination.register);
                return base == null ? null : base + destination.displacement;
            }
            if (instruction.getFlowType().isJump()) {
                aliases.clear();
                continue;
            }
            if ("CALL".equals(mnemonic)) {
                aliases.remove("EAX");
                aliases.remove("ECX");
                aliases.remove("EDX");
                continue;
            }
            updateThisAliases(mnemonic, operands, aliases);
        }
        return null;
    }

    private void updateThisAliases(String mnemonic, String[] operands,
            Map<String, Long> aliases) {
        if (operands.length == 0) return;
        String destination = fullRegister(operands[0]);
        if (destination == null) return;
        if ("MOV".equals(mnemonic) && operands.length >= 2) {
            String source = fullRegister(operands[1]);
            Long value = source == null ? null : aliases.get(source);
            if (value == null) aliases.remove(destination);
            else aliases.put(destination, value);
            return;
        }
        if ("LEA".equals(mnemonic) && operands.length >= 2) {
            MemoryOperand source = memoryOperand(operands[1]);
            Long base = source == null ? null : aliases.get(source.register);
            if (base == null) aliases.remove(destination);
            else aliases.put(destination, base + source.displacement);
            return;
        }
        if (("ADD".equals(mnemonic) || "SUB".equals(mnemonic)) && operands.length >= 2 &&
                aliases.containsKey(destination)) {
            Long value = immediate(operands[1]);
            if (value == null) aliases.remove(destination);
            else aliases.put(destination, aliases.get(destination) +
                ("SUB".equals(mnemonic) ? -value : value));
            return;
        }
        if (!Set.of("CMP", "TEST", "PUSH").contains(mnemonic)) aliases.remove(destination);
    }

    private String[] splitOperands(String instruction) {
        int space = instruction.indexOf(' ');
        if (space < 0) return new String[0];
        String operands = instruction.substring(space + 1).trim();
        return operands.isBlank() ? new String[0] : operands.split("\\s*,\\s*", -1);
    }

    private MemoryOperand memoryOperand(String value) {
        String normalized = value.toUpperCase(Locale.ROOT)
            .replace("DWORD PTR ", "").replace("QWORD PTR ", "")
            .replace("WORD PTR ", "").replace("BYTE PTR ", "")
            .replace(" ", "").replace("+-", "-").replace("-+", "-");
        Matcher matcher = MEMORY_OPERAND.matcher(normalized);
        if (!matcher.matches()) return null;
        long displacement = 0;
        if (matcher.group(3) != null) {
            Long parsed = immediate(matcher.group(3));
            if (parsed == null) return null;
            displacement = "-".equals(matcher.group(2)) ? -parsed : parsed;
        }
        return new MemoryOperand(matcher.group(1), displacement);
    }

    private String fullRegister(String value) {
        String normalized = value.toUpperCase(Locale.ROOT).trim();
        return FULL_REGISTER.matcher(normalized).matches() ? normalized : null;
    }

    private Long immediate(String value) {
        String normalized = value.toUpperCase(Locale.ROOT).trim();
        try {
            if (normalized.startsWith("0X"))
                return Long.parseUnsignedLong(normalized.substring(2), 16);
            if (normalized.matches("[0-9]+")) return Long.parseLong(normalized);
        }
        catch (NumberFormatException ignored) { }
        return null;
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
            out.write("apply\tlayout_apply\tlayout_name\tproposed_name\towner\t" +
                "slot_count\tnamed_slot_count\t" +
                "confidence\treason\tstrong_vptr_refs\tall_code_refs\tslot_owners\t" +
                "constructor_owners\tvptr_writer_owners\tprimary_vptr_store\t" +
                "this_vptr_offsets\trelated_tables\ttable_address\n");
            for (Candidate candidate : candidates) {
                out.write((candidate.apply ? "1" : "0") + "\t" +
                    (candidate.layoutApply() ? "1" : "0") + "\t" +
                    "VTable_" + addr(candidate.address) + "\t" +
                    tsv(candidate.proposedName) + "\t" + tsv(candidate.owner) + "\t" +
                    candidate.slots.size() + "\t" + candidate.namedSlotCount() + "\t" +
                    candidate.confidence + "\t" + candidate.reason + "\t" +
                    tsv(candidate.evidence.referenceText(true)) + "\t" +
                    tsv(candidate.evidence.referenceText(false)) + "\t" +
                    tsv(String.join(" | ", candidate.slotOwners)) + "\t" +
                    tsv(String.join(" | ", candidate.constructorOwners)) + "\t" +
                    tsv(String.join(" | ", candidate.vptrWriterOwners)) + "\t" +
                    (candidate.hasPrimaryVptrStore() ? "1" : "0") + "\t" +
                    tsv(candidate.thisVptrOffsets()) + "\t" +
                    tsv(String.join(" | ", candidate.relatedTables)) + "\t" +
                    addr(candidate.address) + "\n");
            }
        }
    }

    private void writeProposalsJsonl(Path path, List<Candidate> candidates) throws Exception {
        List<String> rows = new ArrayList<>();
        for (Candidate candidate : candidates) {
            rows.add("{\"apply\":" + candidate.apply + ",\"table_address\":" +
                q(addr(candidate.address)) + ",\"layout_apply\":" + candidate.layoutApply() +
                ",\"layout_name\":" + q("VTable_" + addr(candidate.address)) +
                ",\"proposed_name\":" + q(candidate.proposedName) +
                ",\"owner\":" + q(candidate.owner) + ",\"slot_count\":" +
                candidate.slots.size() + ",\"named_slot_count\":" + candidate.namedSlotCount() +
                ",\"confidence\":" + q(candidate.confidence) + ",\"reason\":" +
                q(candidate.reason) + ",\"strong_vptr_refs\":" +
                q(candidate.evidence.referenceText(true)) + ",\"slot_owners\":" +
                q(String.join(" | ", candidate.slotOwners)) + ",\"constructor_owners\":" +
                q(String.join(" | ", candidate.constructorOwners)) +
                ",\"vptr_writer_owners\":" +
                q(String.join(" | ", candidate.vptrWriterOwners)) +
                ",\"primary_vptr_store\":" + candidate.hasPrimaryVptrStore() +
                ",\"this_vptr_offsets\":" + q(candidate.thisVptrOffsets()) +
                ",\"related_tables\":" +
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
                q(String.join(" | ", candidate.constructorOwners)) +
                ",\"vptr_writer_owners\":" +
                q(String.join(" | ", candidate.vptrWriterOwners)) + ",\"reason\":" +
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
        long constructorAnchors = candidates.stream()
            .filter(candidate -> !candidate.constructorOwners.isEmpty()).count();
        long reviewOnlyWriters = candidates.stream()
            .filter(candidate -> candidate.constructorOwners.isEmpty() &&
                !candidate.vptrWriterOwners.isEmpty()).count();
        long slots = candidates.stream().mapToLong(candidate -> candidate.slots.size()).sum();
        long physicalLayouts = candidates.stream().filter(Candidate::layoutApply).count();
        long primaryVptrTables = candidates.stream().filter(Candidate::hasPrimaryVptrStore).count();
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
            "physical_layout_auto_apply=" + physicalLayouts,
            "primary_vptr_store_tables=" + primaryVptrTables,
            "medium=" + medium,
            "low=" + low,
            "owner_conflicts=" + conflicts,
            "constructor_anchored_tables=" + constructorAnchors,
            "review_only_named_vptr_writer_tables=" + reviewOnlyWriters,
            "minimum_unreferenced_run_slots=" + MIN_RUN_SLOTS,
            "minimum_strong_vptr_slots=" + MIN_STRONG_SLOTS,
            "note=Analyzer is read-only. Table apply is conservative; rename_apply is always 0.",
            "note_apply=create_apply=1 creates only missing function boundaries; it never renames them.",
            "note_rename=Set rename_apply=1 only after reviewing proposed_function.",
            "note_interior=interior_target=true usually denotes an adjustor thunk or a missing function boundary.",
            "note_relations=Related layouts help distinguish inherited base slots from the actual table owner.",
            "note_subobjects=Exact this-relative stores distinguish the primary vptr from secondary polymorphic subobjects.",
            "note_constructors=An exact recovered constructor-to-table marker outranks inherited slot namespaces; other named vptr writers remain review-only."),
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
        final Long thisOffset;
        CodeReference(Address address, Function function, String instruction, boolean strong,
                String owner, Long thisOffset) {
            this.address = address;
            this.function = function;
            this.instruction = instruction;
            this.strong = strong;
            this.owner = owner;
            this.thisOffset = thisOffset;
        }
    }
    private static class Candidate {
        final Address address;
        final StartEvidence evidence;
        final List<Slot> slots = new ArrayList<>();
        final Set<String> slotOwners = new TreeSet<>(), constructorOwners = new TreeSet<>(),
            vptrWriterOwners = new TreeSet<>();
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
        boolean layoutApply() { return evidence.hasStrongReference(); }
        boolean hasPrimaryVptrStore() {
            return evidence.references.stream().anyMatch(reference -> reference.strong &&
                reference.thisOffset != null && reference.thisOffset == 0);
        }
        Long singleKnownThisOffset() {
            Set<Long> offsets = new TreeSet<>();
            for (CodeReference reference : evidence.references)
                if (reference.strong && reference.thisOffset != null)
                    offsets.add(reference.thisOffset);
            return offsets.size() == 1 ? offsets.iterator().next() : null;
        }
        String thisVptrOffsets() {
            Set<Long> knownOffsets = new TreeSet<>();
            boolean unknown = false;
            for (CodeReference reference : evidence.references) {
                if (!reference.strong) continue;
                if (reference.thisOffset == null) unknown = true;
                else knownOffsets.add(reference.thisOffset);
            }
            List<String> offsets = new ArrayList<>();
            for (Long offset : knownOffsets) offsets.add(String.format("0x%X", offset));
            if (unknown) offsets.add("unknown");
            return String.join(" | ", offsets);
        }
    }
    private static class MemoryOperand {
        final String register;
        final long displacement;
        MemoryOperand(String register, long displacement) {
            this.register = register;
            this.displacement = displacement;
        }
    }
    private static class CallableTarget {
        final Address address;
        final Function entryFunction, containingFunction, redirectTarget;
        CallableTarget(Address address, Function entryFunction, Function containingFunction,
                Function redirectTarget) {
            this.address = address;
            this.entryFunction = entryFunction;
            this.containingFunction = containingFunction;
            this.redirectTarget = redirectTarget;
        }
    }
    private static class Slot {
        final int index;
        final Address pointerAddress, rawTargetAddress;
        final Function entryFunction, containingFunction, targetFunction;
        final String owner, rawSymbol;
        final boolean redirectResolved;
        String proposedName;
        Slot(int index, Address pointerAddress, Address rawTargetAddress, Function entryFunction,
                Function containingFunction, Function targetFunction, String owner, String rawSymbol,
                boolean redirectResolved) {
            this.index = index;
            this.pointerAddress = pointerAddress;
            this.rawTargetAddress = rawTargetAddress;
            this.entryFunction = entryFunction;
            this.containingFunction = containingFunction;
            this.targetFunction = targetFunction;
            this.owner = owner;
            this.rawSymbol = rawSymbol;
            this.redirectResolved = redirectResolved;
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
            return targetFunction == null || isInterior() && !redirectResolved ? rawTargetAddress :
                targetFunction.getEntryPoint();
        }
        String targetName() {
            return targetFunction == null || isInterior() && !redirectResolved ? rawSymbol :
                targetFunction.getName(true);
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
