// Recover virtual method names, calling conventions, and signatures from reviewed vtables.
// Read-only: consumes current vtable_*.tsv files and writes virtual_method_*.{tsv,jsonl,txt}.
// Select vtable_proposals.tsv in the UI; sibling vtable_slots.tsv and
// vtable_relations.tsv are loaded automatically.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Analyze Virtual Methods

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.HashMap;
import java.util.HashSet;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Set;
import java.util.TreeMap;
import java.util.TreeSet;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionTag;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Listing;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.Symbol;

public class STVirtualMethodAnalyzer extends GhidraScript {
    private static final String TABLE_MARKER = "[STVTableApplier]";
    private static final String[] LIBRARY_TAG_PREFIXES = { "LIBRARY", "LIBRARY_" };

    private Listing listing;
    private DataTypeManager dataTypes;
    private final Map<String, TableInfo> allTables = new TreeMap<>();
    private final Map<String, TableInfo> activeTables = new TreeMap<>();
    private final Map<String, Family> families = new TreeMap<>();
    private final Map<Address, TargetCandidate> candidates = new TreeMap<>();
    private final UnionFind components = new UnionFind();

    @Override
    protected void run() throws Exception {
        if (currentProgram == null) {
            printerr("Open the analyzed ST program first.");
            return;
        }
        File selected = inputFile();
        if (selected == null) return;
        File proposalsFile = resolveProposalsFile(selected);
        File directory = proposalsFile.getAbsoluteFile().getParentFile();
        File slotsFile = new File(directory, "vtable_slots.tsv");
        File relationsFile = new File(directory, "vtable_relations.tsv");
        if (!proposalsFile.isFile())
            throw new IllegalArgumentException("Missing " + proposalsFile);
        if (!slotsFile.isFile())
            throw new IllegalArgumentException("Missing sibling vtable_slots.tsv: " + slotsFile);
        if (!relationsFile.isFile())
            throw new IllegalArgumentException("Missing sibling vtable_relations.tsv: " + relationsFile);

        listing = currentProgram.getListing();
        dataTypes = currentProgram.getDataTypeManager();

        Tsv proposals = readTsv(proposalsFile.toPath());
        Tsv slots = readTsv(slotsFile.toPath());
        Tsv relations = readTsv(relationsFile.toPath());
        requireColumns(proposals, "apply", "table_address", "proposed_name", "owner",
            "slot_count", "confidence", "reason");
        requireColumns(slots, "table_address", "slot_index", "slot_offset",
            "pointer_address", "raw_target_address");
        requireColumns(relations, "left_table", "right_table", "compared_slots",
            "shared_slots", "shared_ratio", "differing_offsets");

        loadTables(proposals.rows);
        loadRelations(relations.rows);
        loadSlots(slots.rows);
        finalizeFamilies();

        List<Proposal> methodProposals = buildMethodProposals();
        List<HierarchyProposal> hierarchy = buildHierarchyProposals(relations.rows);
        Path output = directory.toPath().toAbsolutePath().normalize();
        writeMethodTsv(output.resolve("virtual_method_proposals.tsv"), methodProposals);
        writeMethodJsonl(output.resolve("virtual_method_proposals.jsonl"), methodProposals);
        writeFamilies(output.resolve("virtual_method_families.tsv"));
        writeHierarchy(output.resolve("class_hierarchy_proposals.tsv"), hierarchy);
        writeSummary(output.resolve("virtual_method_summary.txt"), methodProposals, hierarchy);

        long nameApply = methodProposals.stream().filter(p -> p.nameApply).count();
        long conventionApply = methodProposals.stream().filter(p -> p.conventionApply).count();
        long signatureApply = methodProposals.stream().filter(p -> p.signatureApply).count();
        println("Virtual-method analysis complete: " + output);
        println("Active tables: " + activeTables.size() + ", target functions: " +
            methodProposals.size() + ", name_apply: " + nameApply +
            ", convention_apply: " + conventionApply +
            ", signature_apply: " + signatureApply);
    }

    private void loadTables(List<Map<String, String>> rows) {
        for (Map<String, String> row : rows) {
            String addressText = row.get("table_address").toUpperCase(Locale.ROOT);
            components.add(addressText);
            TableInfo table = new TableInfo(addressText, unt(row.get("proposed_name")),
                unt(row.get("owner")), integer(row.get("slot_count")), row);
            allTables.put(addressText, table);
            if (!table.owner.isBlank() && isCurrentTable(table)) {
                table.active = true;
                activeTables.put(addressText, table);
            }
        }
    }

    private boolean isCurrentTable(TableInfo table) {
        Address address = address(table.address);
        Symbol primary = currentProgram.getSymbolTable().getPrimarySymbol(address);
        if (primary != null && (primary.getName().equals(table.proposedName) ||
                primary.getName(true).equals(table.proposedName))) return true;
        Data data = listing.getDefinedDataContaining(address);
        if (data == null || !data.getMinAddress().equals(address)) return false;
        String description = data.getDataType().getDescription();
        return description != null && description.contains(TABLE_MARKER) &&
            description.toUpperCase(Locale.ROOT).contains(
                "GENERATED FROM " + table.address.toUpperCase(Locale.ROOT)) &&
            description.contains("owner=" + table.owner);
    }

    private void loadRelations(List<Map<String, String>> rows) {
        for (Map<String, String> row : rows) {
            String left = row.get("left_table").toUpperCase(Locale.ROOT);
            String right = row.get("right_table").toUpperCase(Locale.ROOT);
            components.add(left);
            components.add(right);
            components.union(left, right);
        }
    }

    private void loadSlots(List<Map<String, String>> rows) throws Exception {
        for (Map<String, String> row : rows) {
            monitor.checkCancelled();
            String tableAddress = row.get("table_address").toUpperCase(Locale.ROOT);
            TableInfo table = activeTables.get(tableAddress);
            if (table == null) continue;
            Address entryAddress = address(row.get("raw_target_address"));
            Function entry = currentProgram.getFunctionManager().getFunctionAt(entryAddress);
            if (entry == null) {
                table.missingEntries.add(addr(entryAddress));
                continue;
            }
            Function target = resolveThunk(entry);
            if (target == null || target.isExternal() || isLibraryFunction(target)) continue;
            int slotIndex = integer(row.get("slot_index"));
            String slotOffset = row.get("slot_offset");
            String component = components.find(tableAddress);
            String familyKey = component + ":" + slotIndex;
            Family family = families.computeIfAbsent(familyKey,
                ignored -> new Family(familyKey, component, slotIndex, slotOffset));
            Context context = new Context(table, family, slotIndex, slotOffset,
                entryAddress, entry, target, row);
            family.contexts.add(context);
            table.contexts.add(context);
            TargetCandidate candidate = candidates.computeIfAbsent(target.getEntryPoint(),
                ignored -> new TargetCandidate(target));
            candidate.contexts.add(context);
            context.candidate = candidate;
        }
    }

    private Function resolveThunk(Function entry) {
        Function current = entry;
        Set<Address> seen = new HashSet<>();
        for (int depth = 0; depth < 32 && current != null && current.isThunk(); depth++) {
            if (!seen.add(current.getEntryPoint())) break;
            Function next = current.getThunkedFunction(false);
            if (next == null || next.equals(current)) break;
            current = next;
        }
        return current;
    }

    private void finalizeFamilies() {
        for (Family family : families.values()) {
            Set<Address> seenAnchors = new HashSet<>();
            for (Context context : family.contexts) {
                MethodName method = methodName(context.target);
                if (method != null) {
                    family.namedMethods.add(normalizedMethod(method.method));
                    family.namedOwners.add(method.owner);
                    if ("__thiscall".equals(context.target.getCallingConventionName()))
                        family.hasNamedThiscallAnchor = true;
                }
                if (method == null || !seenAnchors.add(context.target.getEntryPoint())) continue;
                SignatureEvidence signature = signatureEvidence(context.target);
                if (signature.quality >= 3)
                    family.anchors.add(new Anchor(context.target, method, signature));
            }
        }
    }

    private List<Proposal> buildMethodProposals() throws Exception {
        List<Proposal> result = new ArrayList<>();
        for (TargetCandidate candidate : candidates.values()) {
            monitor.checkCancelled();
            result.add(proposal(candidate));
        }
        result.sort(Comparator.comparing(p -> p.targetAddress));
        return result;
    }

    private Proposal proposal(TargetCandidate candidate) {
        Function function = candidate.function;
        Set<String> familyKeys = new TreeSet<>();
        Set<String> tableAddresses = new TreeSet<>();
        Set<String> tableNames = new TreeSet<>();
        Set<String> tableOwners = new TreeSet<>();
        Set<String> entryAddresses = new TreeSet<>();
        Set<String> slotOffsets = new TreeSet<>();
        for (Context context : candidate.contexts) {
            familyKeys.add(context.family.key);
            tableAddresses.add(context.table.address);
            tableNames.add(context.table.proposedName);
            tableOwners.add(context.table.owner);
            entryAddresses.add(addr(context.entryAddress));
            slotOffsets.add(context.slotOffset);
        }

        List<String> reasons = new ArrayList<>();
        MethodName currentMethod = methodName(function);
        String owner = currentMethod == null ? "" : currentMethod.owner;
        String method = currentMethod == null ? "" : currentMethod.method;
        Family family = familyKeys.size() == 1 ? families.get(familyKeys.iterator().next()) : null;
        if (familyKeys.size() > 1) reasons.add("target_used_by_multiple_slot_families");

        String familyMethod = "";
        if (family != null && family.namedMethods.size() == 1) {
            familyMethod = family.namedMethods.iterator().next();
            reasons.add("unique_named_method_in_slot_family");
        }
        else if (family != null && family.namedMethods.size() > 1) {
            reasons.add("competing_method_names_in_slot_family");
        }
        else reasons.add("slot_family_has_no_named_method");

        if (currentMethod == null) {
            if (tableOwners.size() == 1) {
                owner = tableOwners.iterator().next();
                reasons.add("unique_owner_for_target");
            }
            else reasons.add("target_shared_by_multiple_owners");
            if (!familyMethod.isBlank()) {
                method = "<destructor>".equals(familyMethod) ?
                    "~" + leafOwner(owner) : familyMethod;
            }
            else if (!owner.isBlank() && slotOffsets.size() == 1) {
                method = "vfunc_" + slotOffsets.iterator().next().replace("0x", "")
                    .replace("0X", "");
            }
        }
        else reasons.add("target_already_has_meaningful_name");

        boolean placeholder = method.startsWith("vfunc_") || method.isBlank() || owner.isBlank();
        String proposedName = owner.isBlank() || method.isBlank() ? "" : owner + "::" + method;
        boolean nameApply = currentMethod == null && !placeholder && family != null &&
            family.namedMethods.size() == 1 && tableOwners.size() == 1 &&
            safeAutomaticName(function);

        AnchorChoice anchorChoice = chooseAnchor(family, familyMethod, function);
        if (anchorChoice.anchor != null)
            reasons.add("signature_anchor=" + anchorChoice.anchor.function.getName(true));
        else if (!anchorChoice.conflict.isBlank()) reasons.add(anchorChoice.conflict);
        String ownerTypePath = owner.isBlank() ? "" : findOwnerTypePath(owner, candidate.contexts);
        if (!owner.isBlank() && ownerTypePath.isBlank()) reasons.add("owner_data_type_not_found");

        SourceType signatureSource = function.getSignatureSource();
        boolean signatureManual = signatureSource == SourceType.USER_DEFINED;
        // A structural fallback is deliberately weaker than a family anchor.
        // Do not use it to bypass evidence that the same slot family has
        // competing, incompatible prototypes.
        StructuralSignature structural = anchorChoice.anchor == null &&
            !anchorChoice.conflict.startsWith("competing_") ?
                receiverOnlyLeafSignature(function) : null;
        boolean anchoredSignatureApply = family != null && anchorChoice.anchor != null &&
            !signatureManual && !owner.isBlank() && !ownerTypePath.isBlank() &&
            !signatureMatches(function, anchorChoice.anchor.function);
        boolean structuralSignatureApply = family != null && structural != null &&
            tableOwners.size() == 1 && !signatureManual && !owner.isBlank() &&
            !ownerTypePath.isBlank() && !structuralSignatureMatches(function, structural);
        boolean signatureApply = anchoredSignatureApply || structuralSignatureApply;
        if (structuralSignatureApply)
            reasons.add("receiver_only_leaf_virtual_signature");
        boolean conventionApply = family != null && family.namedMethods.size() == 1 &&
            family.hasNamedThiscallAnchor && !signatureManual && !owner.isBlank() &&
            !ownerTypePath.isBlank() &&
            !"__thiscall".equals(function.getCallingConventionName()) &&
            (signatureApply || explicitParameters(function).isEmpty());
        if (!"__thiscall".equals(function.getCallingConventionName()) &&
                family != null && family.hasNamedThiscallAnchor && !signatureApply &&
                !explicitParameters(function).isEmpty())
            reasons.add("receiver_parameter_shape_requires_review");
        if (signatureManual) reasons.add("manual_signature_preserved");

        String confidence = nameApply || anchoredSignatureApply ? "high" :
            signatureApply || conventionApply ? "medium" : "low";
        Anchor anchor = anchorChoice.anchor;
        String returnType = anchor != null ? anchor.function.getReturnType().getPathName() :
            structural != null ? structural.returnTypePath : "";
        String parameters = anchor != null ? parameterSpecification(anchor.function) : "";
        String proposedSignature = anchor != null && !proposedName.isBlank() ?
            prototype(proposedName, anchor.function) :
            structural != null && !proposedName.isBlank() ?
                "dword __thiscall " + proposedName + "()" : "";
        return new Proposal(function.getEntryPoint(), function.getName(true),
            function.getSymbol().getSource().toString(),
            function.getSignature().getPrototypeString(true),
            signatureSource.toString(), function.getCallingConventionName(),
            proposedName, owner, method, ownerTypePath,
            join(tableAddresses), join(tableNames), join(tableOwners), join(entryAddresses),
            join(slotOffsets), familyKeys.size() == 1 ? familyKeys.iterator().next() : join(familyKeys),
            anchor == null ? "" : addr(anchor.function.getEntryPoint()),
            anchor == null ? "" : anchor.function.getName(true),
            anchor == null ? "" : anchor.function.getSignature().getPrototypeString(true),
            returnType, parameters, anchor != null && anchor.function.hasVarArgs(),
            anchor != null && anchor.function.hasNoReturn(), proposedSignature,
            nameApply, conventionApply, signatureApply, confidence, String.join("; ", reasons));
    }

    private StructuralSignature receiverOnlyLeafSignature(Function function) {
        if (function == null || function.isThunk() || function.getBody().getNumAddresses() > 48)
            return null;
        InstructionIterator instructions = listing.getInstructions(function.getBody(), true);
        int count = 0;
        boolean readsEcx = false;
        boolean writesEax = false;
        Instruction last = null;
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            if (++count > 8) return null;
            last = instruction;
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            String rendered = instruction.toString().toUpperCase(Locale.ROOT);
            if (mnemonic.equals("CALL") || mnemonic.startsWith("J")) return null;
            if (rendered.matches(".*\\bECX\\b.*")) readsEcx = true;
            if (rendered.matches(
                    "(?:MOV|MOVZX|MOVSX|LEA|XOR|SUB|AND)\\s+EAX\\s*,.*"))
                writesEax = true;
        }
        if (last == null || !"RET".equalsIgnoreCase(last.getMnemonicString()) ||
                last.getNumOperands() != 0 || !readsEcx || !writesEax) return null;
        return new StructuralSignature("/dword");
    }

    private boolean structuralSignatureMatches(Function function, StructuralSignature signature) {
        if (!"__thiscall".equals(function.getCallingConventionName()) ||
                !explicitParameters(function).isEmpty() || function.hasVarArgs() ||
                function.hasNoReturn()) return false;
        DataType expected = dataTypes.getDataType(signature.returnTypePath);
        return expected != null && expected.isEquivalent(function.getReturnType());
    }

    private AnchorChoice chooseAnchor(Family family, String familyMethod, Function target) {
        if (family == null || familyMethod.isBlank()) return new AnchorChoice(null, "");
        Map<String, List<Anchor>> byShape = new TreeMap<>();
        for (Anchor anchor : family.anchors) {
            if (anchor.function.equals(target) ||
                    !normalizedMethod(anchor.method.method).equals(familyMethod)) continue;
            byShape.computeIfAbsent(anchor.signature.shape, ignored -> new ArrayList<>()).add(anchor);
        }
        if (byShape.isEmpty()) return new AnchorChoice(null, "no_qualified_signature_anchor");
        if (byShape.size() > 1)
            return new AnchorChoice(null, "competing_signature_shapes_in_slot_family");
        List<Anchor> anchors = byShape.values().iterator().next();
        anchors.sort(Comparator.comparingInt((Anchor a) -> a.signature.quality).reversed()
            .thenComparing(a -> a.function.getEntryPoint()));
        return new AnchorChoice(anchors.get(0), "");
    }

    private SignatureEvidence signatureEvidence(Function function) {
        int quality = 0;
        if (function.getSignatureSource() == SourceType.USER_DEFINED) quality++;
        if ("__thiscall".equals(function.getCallingConventionName())) quality++;
        int semanticTypes = semanticType(function.getReturnType()) ? 1 : 0;
        int meaningfulParameterNames = 0;
        for (Parameter parameter : explicitParameters(function)) {
            if (semanticType(parameter.getFormalDataType())) semanticTypes++;
            if (!parameter.getName().matches("param_[0-9]+")) meaningfulParameterNames++;
        }
        if (semanticTypes > 0) quality += 2;
        if (meaningfulParameterNames > 0) quality++;
        for (FunctionTag tag : function.getTags()) {
            if ("RECOVERED_CURATED_PROPOSAL".equals(tag.getName())) quality += 4;
        }
        return new SignatureEvidence(signatureShape(function), quality);
    }

    private String signatureShape(Function function) {
        StringBuilder out = new StringBuilder();
        out.append(function.getReturnType().getPathName()).append('(');
        boolean first = true;
        for (Parameter parameter : explicitParameters(function)) {
            if (!first) out.append(',');
            first = false;
            out.append(parameter.getFormalDataType().getPathName());
        }
        return out.append(") varargs=").append(function.hasVarArgs())
            .append(" noreturn=").append(function.hasNoReturn()).toString();
    }

    private boolean signatureMatches(Function target, Function anchor) {
        if (!"__thiscall".equals(target.getCallingConventionName())) return false;
        if (!target.getReturnType().isEquivalent(anchor.getReturnType())) return false;
        List<Parameter> left = explicitParameters(target);
        List<Parameter> right = explicitParameters(anchor);
        if (left.size() != right.size() || target.hasVarArgs() != anchor.hasVarArgs() ||
                target.hasNoReturn() != anchor.hasNoReturn()) return false;
        for (int index = 0; index < left.size(); index++) {
            if (!left.get(index).getFormalDataType().isEquivalent(
                    right.get(index).getFormalDataType())) return false;
        }
        return true;
    }

    private List<Parameter> explicitParameters(Function function) {
        List<Parameter> result = new ArrayList<>();
        for (Parameter parameter : function.getParameters())
            if (!parameter.isAutoParameter()) result.add(parameter);
        return result;
    }

    private String parameterSpecification(Function function) {
        List<String> result = new ArrayList<>();
        int index = 1;
        for (Parameter parameter : explicitParameters(function)) {
            String name = parameter.getName();
            if (name == null || name.isBlank()) name = "param_" + index;
            result.add(name + "=" + parameter.getFormalDataType().getPathName());
            index++;
        }
        return String.join(";", result);
    }

    private String prototype(String qualified, Function anchor) {
        StringBuilder out = new StringBuilder(anchor.getReturnType().getDisplayName())
            .append(" __thiscall ").append(qualified).append('(');
        boolean first = true;
        for (Parameter parameter : explicitParameters(anchor)) {
            if (!first) out.append(", ");
            first = false;
            out.append(parameter.getFormalDataType().getDisplayName()).append(' ')
                .append(parameter.getName());
        }
        if (anchor.hasVarArgs()) {
            if (!first) out.append(", ");
            out.append("...");
        }
        return out.append(')').toString();
    }

    private boolean semanticType(DataType type) {
        String name = type.getName().toLowerCase(Locale.ROOT);
        if (name.startsWith("undefined") || name.equals("void")) return false;
        if (type instanceof Pointer pointer) return semanticType(pointer.getDataType());
        return true;
    }

    private String findOwnerTypePath(String owner, List<Context> contexts) {
        for (Context context : contexts) {
            for (Context familyContext : context.family.contexts) {
                MethodName method = methodName(familyContext.target);
                if (method == null || !method.owner.equals(owner)) continue;
                for (Parameter parameter : familyContext.target.getParameters()) {
                    if (!parameter.isAutoParameter() || !(parameter.getDataType() instanceof Pointer pointer))
                        continue;
                    DataType pointed = pointer.getDataType();
                    if (pointed != null && leafOwner(pointed.getName()).equals(leafOwner(owner)))
                        return pointed.getPathName();
                }
            }
        }
        String leaf = leafOwner(owner);
        List<DataType> matches = new ArrayList<>();
        dataTypes.findDataTypes(leaf, matches);
        matches.sort(Comparator.comparing(DataType::getPathName));
        for (DataType match : matches)
            if (match.getPathName().equals("/" + leaf)) return match.getPathName();
        for (DataType match : matches)
            if (!match.getPathName().contains("/VTables/") &&
                    !match.getPathName().contains("/VTableFunctions/")) return match.getPathName();
        return "";
    }

    private MethodName methodName(Function function) {
        if (function == null || function.isExternal() || isLibraryFunction(function)) return null;
        String qualified = function.getName(true);
        int separator = qualified.lastIndexOf("::");
        if (separator <= 0) return null;
        String owner = qualified.substring(0, separator);
        String method = qualified.substring(separator + 2);
        String upper = owner.toUpperCase(Locale.ROOT);
        if (owner.equals("Global") || owner.startsWith("Library::") ||
                upper.endsWith(".DLL") || upper.contains(".DLL::") || synthetic(method)) return null;
        return new MethodName(owner, method);
    }

    private boolean safeAutomaticName(Function function) {
        SourceType source = function.getSymbol().getSource();
        return source == SourceType.DEFAULT || source == SourceType.ANALYSIS ||
            hasTag(function, "RECOVERED_VIRTUAL_METHOD");
    }

    private boolean isLibraryFunction(Function function) {
        if (function == null || function.isExternal()) return true;
        for (FunctionTag tag : function.getTags()) {
            for (String prefix : LIBRARY_TAG_PREFIXES) {
                if (tag.getName().equals(prefix) || tag.getName().startsWith(prefix)) return true;
            }
        }
        String name = function.getName(true).toUpperCase(Locale.ROOT);
        return name.startsWith("LIBRARY::") || name.contains(".DLL::");
    }

    private boolean hasTag(Function function, String name) {
        for (FunctionTag tag : function.getTags()) if (name.equals(tag.getName())) return true;
        return false;
    }

    private boolean synthetic(String name) {
        return name == null || name.isBlank() || name.startsWith("FUN_") ||
            name.startsWith("LAB_") || name.startsWith("SUB_") ||
            name.startsWith("thunk_FUN_") || name.matches("vfunc_[0-9A-Fa-f]+.*");
    }

    private static String normalizedMethod(String method) {
        return method.startsWith("~") ? "<destructor>" : method;
    }

    private List<HierarchyProposal> buildHierarchyProposals(List<Map<String, String>> rows) {
        Map<String, HierarchyProposal> result = new TreeMap<>();
        for (Map<String, String> row : rows) {
            TableInfo left = activeTables.get(row.get("left_table").toUpperCase(Locale.ROOT));
            TableInfo right = activeTables.get(row.get("right_table").toUpperCase(Locale.ROOT));
            if (left == null || right == null || left.owner.equals(right.owner)) continue;
            int leftInRight = ownedMethods(right, left.owner);
            int rightInLeft = ownedMethods(left, right.owner);
            TableInfo base = null, derived = null;
            int evidence = 0;
            if (leftInRight >= 2 && rightInLeft == 0) {
                base = left; derived = right; evidence = leftInRight;
            }
            else if (rightInLeft >= 2 && leftInRight == 0) {
                base = right; derived = left; evidence = rightInLeft;
            }
            if (base == null) continue;
            String key = base.owner + "->" + derived.owner;
            double ratio = decimal(row.get("shared_ratio"));
            String confidence = evidence >= 3 && ratio >= 0.75 ? "high" : "medium";
            HierarchyProposal proposal = new HierarchyProposal(base.owner, derived.owner,
                base.address, derived.address, confidence,
                "derived table reuses " + evidence + " named " + base.owner +
                " methods; shared_ratio=" + row.get("shared_ratio"));
            HierarchyProposal old = result.get(key);
            if (old == null || proposal.score() > old.score()) result.put(key, proposal);
        }
        return new ArrayList<>(result.values());
    }

    private int ownedMethods(TableInfo table, String owner) {
        Set<Address> functions = new HashSet<>();
        for (Context context : table.contexts) {
            MethodName method = methodName(context.target);
            if (method != null && method.owner.equals(owner))
                functions.add(context.target.getEntryPoint());
        }
        return functions.size();
    }

    private void writeMethodTsv(Path path, List<Proposal> proposals) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("name_apply\tconvention_apply\tsignature_apply\ttarget_address\t" +
                "expected_name\texpected_name_source\texpected_signature\t" +
                "expected_signature_source\texpected_calling_convention\t" +
                "proposed_calling_convention\tproposed_name\t" +
                "owner\tmethod\towner_type_path\ttable_addresses\ttable_names\ttable_owners\t" +
                "entry_addresses\tslot_offsets\tfamily\tanchor_address\tanchor_name\t" +
                "anchor_signature\treturn_type_path\tparameters\tvarargs\tnoreturn\t" +
                "proposed_signature\tconfidence\treason\n");
            for (Proposal p : proposals) {
                out.write(flag(p.nameApply) + "\t" + flag(p.conventionApply) + "\t" +
                    flag(p.signatureApply) + "\t" + addr(p.targetAddress) + "\t" +
                    tsv(p.expectedName) + "\t" + p.expectedNameSource + "\t" +
                    tsv(p.expectedSignature) + "\t" + p.expectedSignatureSource + "\t" +
                    tsv(p.expectedCallingConvention) + "\t__thiscall\t" +
                    tsv(p.proposedName) + "\t" +
                    tsv(p.owner) + "\t" + tsv(p.method) + "\t" + tsv(p.ownerTypePath) + "\t" +
                    tsv(p.tableAddresses) + "\t" + tsv(p.tableNames) + "\t" +
                    tsv(p.tableOwners) + "\t" + tsv(p.entryAddresses) + "\t" +
                    tsv(p.slotOffsets) + "\t" + tsv(p.family) + "\t" +
                    p.anchorAddress + "\t" + tsv(p.anchorName) + "\t" +
                    tsv(p.anchorSignature) + "\t" + tsv(p.returnTypePath) + "\t" +
                    tsv(p.parameters) + "\t" + p.varargs + "\t" + p.noreturn + "\t" +
                    tsv(p.proposedSignature) + "\t" + p.confidence + "\t" +
                    tsv(p.reason) + "\n");
            }
        }
    }

    private void writeMethodJsonl(Path path, List<Proposal> proposals) throws Exception {
        List<String> rows = new ArrayList<>();
        for (Proposal p : proposals) {
            rows.add("{\"name_apply\":" + p.nameApply +
                ",\"convention_apply\":" + p.conventionApply +
                ",\"signature_apply\":" + p.signatureApply +
                ",\"target_address\":" + q(addr(p.targetAddress)) +
                ",\"expected_name\":" + q(p.expectedName) +
                ",\"expected_signature\":" + q(p.expectedSignature) +
                ",\"proposed_calling_convention\":\"__thiscall\"" +
                ",\"proposed_name\":" + q(p.proposedName) +
                ",\"owner\":" + q(p.owner) + ",\"method\":" + q(p.method) +
                ",\"owner_type_path\":" + q(p.ownerTypePath) +
                ",\"table_addresses\":" + q(p.tableAddresses) +
                ",\"entry_addresses\":" + q(p.entryAddresses) +
                ",\"slot_offsets\":" + q(p.slotOffsets) +
                ",\"family\":" + q(p.family) +
                ",\"anchor_address\":" + q(p.anchorAddress) +
                ",\"anchor_name\":" + q(p.anchorName) +
                ",\"anchor_signature\":" + q(p.anchorSignature) +
                ",\"return_type_path\":" + q(p.returnTypePath) +
                ",\"parameters\":" + q(p.parameters) +
                ",\"varargs\":" + p.varargs + ",\"noreturn\":" + p.noreturn +
                ",\"proposed_signature\":" + q(p.proposedSignature) +
                ",\"confidence\":" + q(p.confidence) +
                ",\"reason\":" + q(p.reason) + "}");
        }
        Files.write(path, rows, StandardCharsets.UTF_8);
    }

    private void writeFamilies(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("family\tcomponent\tslot_index\tslot_offset\ttables\towners\t" +
                "unique_targets\tnamed_methods\tnamed_owners\tsignature_shapes\n");
            for (Family family : families.values()) {
                Set<String> tables = new TreeSet<>(), owners = new TreeSet<>(), targets = new TreeSet<>();
                Set<String> shapes = new TreeSet<>();
                for (Context context : family.contexts) {
                    tables.add(context.table.address);
                    owners.add(context.table.owner);
                    targets.add(addr(context.target.getEntryPoint()));
                }
                for (Anchor anchor : family.anchors) shapes.add(anchor.signature.shape);
                out.write(tsv(family.key) + "\t" + family.component + "\t" + family.slotIndex +
                    "\t" + family.slotOffset + "\t" + tsv(join(tables)) + "\t" +
                    tsv(join(owners)) + "\t" + targets.size() + "\t" +
                    tsv(join(family.namedMethods)) + "\t" + tsv(join(family.namedOwners)) +
                    "\t" + tsv(join(shapes)) + "\n");
            }
        }
    }

    private void writeHierarchy(Path path, List<HierarchyProposal> proposals) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\tbase_owner\tderived_owner\tbase_table\tderived_table\t" +
                "confidence\treason\n");
            for (HierarchyProposal p : proposals)
                out.write("0\t" + tsv(p.baseOwner) + "\t" + tsv(p.derivedOwner) + "\t" +
                    p.baseTable + "\t" + p.derivedTable + "\t" + p.confidence + "\t" +
                    tsv(p.reason) + "\n");
        }
    }

    private void writeSummary(Path path, List<Proposal> proposals,
            List<HierarchyProposal> hierarchy) throws Exception {
        long names = proposals.stream().filter(p -> p.nameApply).count();
        long conventions = proposals.stream().filter(p -> p.conventionApply).count();
        long signatures = proposals.stream().filter(p -> p.signatureApply).count();
        long placeholders = proposals.stream().filter(p -> p.proposedName.contains("::vfunc_")).count();
        long multiOwner = proposals.stream().filter(p -> p.reason.contains(
            "target_shared_by_multiple_owners")).count();
        long missingEntries = activeTables.values().stream()
            .mapToLong(table -> table.missingEntries.size()).sum();
        Files.write(path, List.of(
            "program=" + currentProgram.getName(),
            "active_vtables=" + activeTables.size(),
            "slot_families=" + families.size(),
            "target_functions=" + proposals.size(),
            "name_auto_apply=" + names,
            "convention_auto_apply=" + conventions,
            "signature_auto_apply=" + signatures,
            "placeholder_names_for_review=" + placeholders,
            "multi_owner_targets_left_unresolved=" + multiOwner,
            "missing_slot_function_entries=" + missingEntries,
            "class_hierarchy_proposals=" + hierarchy.size(),
            "note=Analyzer is read-only. Apply flags are independent.",
            "note_names=Only synthetic ANALYSIS/DEFAULT targets with one owner and one anchored " +
                "slot-family method are auto-named.",
            "note_signatures=Signatures come only from one agreed, meaningful USER_DEFINED anchor " +
                "shape, or from a branch-free receiver-only leaf getter with no stack arguments; " +
                "auto this types must already exist.",
            "note_leaf_getters=Structural leaf recovery applies __thiscall dword() but does not " +
                "invent a semantic method name or a narrower return type.",
            "note_conventions=Convention-only conversion requires one owner type and no explicit " +
                "parameters; anchored signature replacement may safely rebuild parameters.",
            "note_thunks=Names and signatures target the final thunk destination; adjustor thunk " +
                "entries remain linked and inherit display names from Ghidra."),
            StandardCharsets.UTF_8);
    }

    private File inputFile() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException("Path to vtable_proposals.tsv is required");
        return askFile("Select current vtable_proposals.tsv", "Analyze");
    }

    private File resolveProposalsFile(File selected) {
        if (!selected.isDirectory()) return selected;
        File direct = new File(selected, "vtable_proposals.tsv");
        if (direct.isFile()) return direct;
        return new File(new File(selected, safe(currentProgram.getName())),
            "vtable_proposals.tsv");
    }

    private Tsv readTsv(Path path) throws Exception {
        List<String> lines = Files.readAllLines(path, StandardCharsets.UTF_8);
        if (lines.isEmpty()) throw new IllegalArgumentException("Empty TSV: " + path);
        String[] header = lines.get(0).split("\t", -1);
        List<Map<String, String>> rows = new ArrayList<>();
        for (int lineIndex = 1; lineIndex < lines.size(); lineIndex++) {
            if (lines.get(lineIndex).isBlank()) continue;
            String[] values = lines.get(lineIndex).split("\t", -1);
            if (values.length != header.length)
                throw new IllegalArgumentException(path.getFileName() + " line " +
                    (lineIndex + 1) + " has " + values.length + " columns; expected " +
                    header.length);
            Map<String, String> row = new LinkedHashMap<>();
            for (int column = 0; column < header.length; column++)
                row.put(header[column], values[column]);
            rows.add(row);
        }
        return new Tsv(List.of(header), rows);
    }

    private void requireColumns(Tsv tsv, String... names) {
        for (String name : names)
            if (!tsv.header.contains(name))
                throw new IllegalArgumentException("Missing TSV column: " + name);
    }

    private Address address(String value) {
        Address result = currentProgram.getAddressFactory().getAddress(value);
        if (result == null) throw new IllegalArgumentException("Invalid address: " + value);
        return result;
    }

    private static int integer(String value) {
        return Integer.parseInt(value);
    }

    private static double decimal(String value) {
        try { return Double.parseDouble(value); }
        catch (Exception exception) { return 0; }
    }

    private static String leafOwner(String owner) {
        int separator = owner.lastIndexOf("::");
        return separator < 0 ? owner : owner.substring(separator + 2);
    }

    private static String join(Iterable<String> values) {
        List<String> result = new ArrayList<>();
        for (String value : values) if (value != null && !value.isBlank()) result.add(value);
        return String.join(" | ", result);
    }

    private static String flag(boolean value) { return value ? "1" : "0"; }
    private static String addr(Address address) {
        return address == null ? "" : address.toString().toUpperCase(Locale.ROOT);
    }
    private static String safe(String value) {
        return value.replaceAll("[^A-Za-z0-9._-]+", "_");
    }
    private static String tsv(String value) {
        if (value == null) return "";
        return value.replace("\\", "\\\\").replace("\t", "\\t")
            .replace("\r", "\\r").replace("\n", "\\n");
    }
    private static String q(String value) {
        if (value == null) value = "";
        return "\"" + value.replace("\\", "\\\\").replace("\"", "\\\"")
            .replace("\r", "\\r").replace("\n", "\\n") + "\"";
    }
    private static String unt(String value) {
        if (value == null) return "";
        StringBuilder out = new StringBuilder();
        boolean escaped = false;
        for (int index = 0; index < value.length(); index++) {
            char ch = value.charAt(index);
            if (!escaped && ch == '\\') { escaped = true; continue; }
            if (escaped) {
                if (ch == 't') out.append('\t');
                else if (ch == 'r') out.append('\r');
                else if (ch == 'n') out.append('\n');
                else out.append(ch);
                escaped = false;
            }
            else out.append(ch);
        }
        if (escaped) out.append('\\');
        return out.toString();
    }

    private static class Tsv {
        final List<String> header;
        final List<Map<String, String>> rows;
        Tsv(List<String> header, List<Map<String, String>> rows) {
            this.header = header;
            this.rows = rows;
        }
    }

    private static class TableInfo {
        final String address, proposedName, owner;
        final int slotCount;
        final Map<String, String> row;
        final List<Context> contexts = new ArrayList<>();
        final Set<String> missingEntries = new TreeSet<>();
        boolean active;
        TableInfo(String address, String proposedName, String owner, int slotCount,
                Map<String, String> row) {
            this.address = address;
            this.proposedName = proposedName;
            this.owner = owner;
            this.slotCount = slotCount;
            this.row = row;
        }
    }

    private static class Family {
        final String key, component, slotOffset;
        final int slotIndex;
        final List<Context> contexts = new ArrayList<>();
        final List<Anchor> anchors = new ArrayList<>();
        final Set<String> namedMethods = new TreeSet<>(), namedOwners = new TreeSet<>();
        boolean hasNamedThiscallAnchor;
        Family(String key, String component, int slotIndex, String slotOffset) {
            this.key = key;
            this.component = component;
            this.slotIndex = slotIndex;
            this.slotOffset = slotOffset;
        }
    }

    private static class Context {
        final TableInfo table;
        final Family family;
        final int slotIndex;
        final String slotOffset;
        final Address entryAddress;
        final Function entry, target;
        final Map<String, String> row;
        TargetCandidate candidate;
        Context(TableInfo table, Family family, int slotIndex, String slotOffset,
                Address entryAddress, Function entry, Function target, Map<String, String> row) {
            this.table = table;
            this.family = family;
            this.slotIndex = slotIndex;
            this.slotOffset = slotOffset;
            this.entryAddress = entryAddress;
            this.entry = entry;
            this.target = target;
            this.row = row;
        }
    }

    private static class TargetCandidate {
        final Function function;
        final List<Context> contexts = new ArrayList<>();
        TargetCandidate(Function function) { this.function = function; }
    }

    private static class MethodName {
        final String owner, method;
        MethodName(String owner, String method) { this.owner = owner; this.method = method; }
    }

    private static class SignatureEvidence {
        final String shape;
        final int quality;
        SignatureEvidence(String shape, int quality) { this.shape = shape; this.quality = quality; }
    }

    private static class Anchor {
        final Function function;
        final MethodName method;
        final SignatureEvidence signature;
        Anchor(Function function, MethodName method, SignatureEvidence signature) {
            this.function = function;
            this.method = method;
            this.signature = signature;
        }
    }

    private static class AnchorChoice {
        final Anchor anchor;
        final String conflict;
        AnchorChoice(Anchor anchor, String conflict) { this.anchor = anchor; this.conflict = conflict; }
    }

    private static class StructuralSignature {
        final String returnTypePath;
        StructuralSignature(String returnTypePath) { this.returnTypePath = returnTypePath; }
    }

    private static class Proposal {
        final Address targetAddress;
        final String expectedName, expectedNameSource, expectedSignature,
            expectedSignatureSource, expectedCallingConvention, proposedName, owner, method,
            ownerTypePath, tableAddresses, tableNames, tableOwners, entryAddresses, slotOffsets,
            family, anchorAddress, anchorName, anchorSignature, returnTypePath, parameters,
            proposedSignature, confidence, reason;
        final boolean varargs, noreturn, nameApply, conventionApply, signatureApply;
        Proposal(Address targetAddress, String expectedName, String expectedNameSource,
                String expectedSignature, String expectedSignatureSource,
                String expectedCallingConvention, String proposedName, String owner,
                String method, String ownerTypePath, String tableAddresses, String tableNames,
                String tableOwners, String entryAddresses, String slotOffsets, String family,
                String anchorAddress, String anchorName, String anchorSignature,
                String returnTypePath, String parameters, boolean varargs, boolean noreturn,
                String proposedSignature, boolean nameApply, boolean conventionApply,
                boolean signatureApply, String confidence, String reason) {
            this.targetAddress = targetAddress;
            this.expectedName = expectedName;
            this.expectedNameSource = expectedNameSource;
            this.expectedSignature = expectedSignature;
            this.expectedSignatureSource = expectedSignatureSource;
            this.expectedCallingConvention = expectedCallingConvention;
            this.proposedName = proposedName;
            this.owner = owner;
            this.method = method;
            this.ownerTypePath = ownerTypePath;
            this.tableAddresses = tableAddresses;
            this.tableNames = tableNames;
            this.tableOwners = tableOwners;
            this.entryAddresses = entryAddresses;
            this.slotOffsets = slotOffsets;
            this.family = family;
            this.anchorAddress = anchorAddress;
            this.anchorName = anchorName;
            this.anchorSignature = anchorSignature;
            this.returnTypePath = returnTypePath;
            this.parameters = parameters;
            this.varargs = varargs;
            this.noreturn = noreturn;
            this.proposedSignature = proposedSignature;
            this.nameApply = nameApply;
            this.conventionApply = conventionApply;
            this.signatureApply = signatureApply;
            this.confidence = confidence;
            this.reason = reason;
        }
    }

    private static class HierarchyProposal {
        final String baseOwner, derivedOwner, baseTable, derivedTable, confidence, reason;
        HierarchyProposal(String baseOwner, String derivedOwner, String baseTable,
                String derivedTable, String confidence, String reason) {
            this.baseOwner = baseOwner;
            this.derivedOwner = derivedOwner;
            this.baseTable = baseTable;
            this.derivedTable = derivedTable;
            this.confidence = confidence;
            this.reason = reason;
        }
        int score() { return "high".equals(confidence) ? 2 : 1; }
    }

    private static class UnionFind {
        private final Map<String, String> parent = new HashMap<>();
        void add(String value) { parent.putIfAbsent(value, value); }
        String find(String value) {
            add(value);
            String root = parent.get(value);
            if (!root.equals(value)) {
                root = find(root);
                parent.put(value, root);
            }
            return root;
        }
        void union(String left, String right) {
            String a = find(left), b = find(right);
            if (a.equals(b)) return;
            if (a.compareTo(b) < 0) parent.put(b, a);
            else parent.put(a, b);
        }
    }
}
