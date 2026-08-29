// Apply reviewed vtable_proposals.tsv and vtable_slots.tsv from STVTableAnalyzer.
// Table rows use layout_apply=1 for a physical layout and apply=1 for a resolved owner.
// Exact this-relative stores may type both primary and secondary owner vptr fields.
// Slot rows use create_apply=1 for boundaries and rename_apply=1 for reviewed names;
// creation never implies renaming.
// Existing user-defined symbols, data layouts, functions, and data types are preserved.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Apply VTables

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
import java.util.Set;
import java.util.TreeMap;
import java.util.TreeSet;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

import ghidra.app.cmd.function.CreateFunctionCmd;
import ghidra.app.cmd.function.CreateThunkFunctionCmd;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSet;
import ghidra.program.model.data.CategoryPath;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeComponent;
import ghidra.program.model.data.DataTypeConflictHandler;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.DataUtilities;
import ghidra.program.model.data.FunctionDefinition;
import ghidra.program.model.data.FunctionDefinitionDataType;
import ghidra.program.model.data.ParameterDefinition;
import ghidra.program.model.data.ParameterDefinitionImpl;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.PointerDataType;
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.StructureDataType;
import ghidra.program.model.data.VoidDataType;
import ghidra.program.model.listing.CommentType;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionTag;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.listing.GhidraClass;
import ghidra.program.model.listing.Listing;
import ghidra.program.model.mem.MemoryAccessException;
import ghidra.program.model.scalar.Scalar;
import ghidra.program.model.symbol.Namespace;
import ghidra.program.model.symbol.RefType;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.Symbol;
import ghidra.program.model.symbol.SymbolTable;

public class STVTableApplier extends GhidraScript {
    private static final CategoryPath RECOVERED =
        new CategoryPath("/SubmarineTitans/Recovered");
    private static final CategoryPath VTABLES =
        new CategoryPath("/SubmarineTitans/Recovered/VTables");
    private static final CategoryPath VFUNCTIONS =
        new CategoryPath("/SubmarineTitans/Recovered/VTableFunctions");
    private static final CategoryPath INDIRECT_FUNCTIONS =
        new CategoryPath("/SubmarineTitans/Recovered/IndirectCallFunctions");
    private static final String FUNCTION_TAG = "RECOVERED_VTABLE_SLOT";
    private static final String VIRTUAL_METHOD_TAG = "RECOVERED_VIRTUAL_METHOD";
    private static final String MESSAGE_HANDLER_TAG = "RECOVERED_MESSAGE_HANDLER";
    private static final String MESSAGE_PATH = "/SubmarineTitans/Recovered/STMessage";
    private static final String COMMENT_MARKER = "[STVTableApplier]";
    private static final String INDIRECT_CALL_MARKER = "[STIndirectCallApplier]";
    private static final String LAYOUT_HASH_MARKER = "; generated_layout_sha256=";
    private static final String SIGNATURE_HASH_MARKER = "; generated_signature_sha256=";
    private static final Pattern SLOT_TARGET = Pattern.compile(
        "(?i)->\\s*([0-9a-f]{8,16})\\b");
    private static final Pattern VTABLE_SOURCE = Pattern.compile(
        "(?i)\\bGenerated from\\s+([0-9a-f]{8,16})\\b");

    private Listing listing;
    private DataTypeManager dataTypes;
    private int pointerSize;
    private final List<ReportRow> report = new ArrayList<>();

    @Override
    protected void run() throws Exception {
        // Explicit per-script transactions must not be nested in GhidraScript's wrapper.
        end(true);
        if (currentProgram == null) {
            printerr("Open the same program that was analyzed.");
            return;
        }
        File selected = inputFile();
        if (selected == null) return;
        File proposalsFile = selected.isDirectory() ?
            new File(selected, "vtable_proposals.tsv") : selected;
        File directory = proposalsFile.getAbsoluteFile().getParentFile();
        File slotsFile = new File(directory, "vtable_slots.tsv");
        if (!proposalsFile.isFile())
            throw new IllegalArgumentException("Missing " + proposalsFile);
        if (!slotsFile.isFile())
            throw new IllegalArgumentException("Missing sibling vtable_slots.tsv: " + slotsFile);

        Tsv proposalsTsv = readTsv(proposalsFile.toPath());
        Tsv slotsTsv = readTsv(slotsFile.toPath());
        requireColumns(proposalsTsv, "apply", "table_address", "proposed_name", "owner",
            "slot_count", "confidence", "reason");
        requireColumns(slotsTsv, "table_address", "slot_index", "slot_offset",
            "pointer_address", "raw_target_address", "raw_target_symbol", "exact_function",
            "interior_target", "proposed_function", "create_apply", "rename_apply");

        Map<String, List<Map<String, String>>> slotsByTable = new LinkedHashMap<>();
        for (Map<String, String> row : slotsTsv.rows) {
            slotsByTable.computeIfAbsent(row.get("table_address"), ignored -> new ArrayList<>())
                .add(row);
        }

        listing = currentProgram.getListing();
        dataTypes = currentProgram.getDataTypeManager();
        pointerSize = currentProgram.getDefaultPointerSize();
        if (pointerSize != 4 && pointerSize != 8)
            throw new IllegalArgumentException("Unsupported pointer size: " + pointerSize);

        int transaction = currentProgram.startTransaction("Apply recovered vtables");
        boolean commit = false;
        int createdFunctions = 0;
        try {
            createdFunctions = applySelectedFunctions(slotsTsv.rows);
            if (createdFunctions == 0) applySelectedTables(proposalsTsv.rows, slotsByTable);
            else deferTables(proposalsTsv.rows);
            commit = true;
        }
        finally {
            currentProgram.endTransaction(transaction, commit);
        }

        Path reportPath = directory.toPath().resolve("vtable_apply_report.tsv");
        writeReport(reportPath);
        long applied = report.stream().filter(row -> row.status.equals("applied")).count();
        long updated = report.stream().filter(row -> row.status.equals("updated")).count();
        long created = report.stream().filter(row -> row.status.equals("created")).count();
        long same = report.stream().filter(row -> row.status.equals("already_present")).count();
        long skipped = report.stream().filter(row -> row.status.equals("skipped")).count();
        long conflicts = report.stream().filter(row -> row.status.equals("conflict") ||
            row.status.equals("failed")).count();
        println("VTables applied: " + applied + ", updated types: " + updated +
            ", functions created/renamed: " + created + ", already present: " + same +
            ", skipped: " + skipped +
            ", conflicts/failed: " + conflicts);
        println("Apply report: " + reportPath.toAbsolutePath().normalize());
        if (createdFunctions > 0)
            println("Function boundaries changed. Re-run STVTableAnalyzer before applying tables.");
    }

    private int applySelectedFunctions(List<Map<String, String>> rows) throws Exception {
        Map<Address, FunctionSelection> selections = new TreeMap<>();
        for (Map<String, String> row : rows) {
            boolean create = enabled(row.get("create_apply"));
            boolean rename = enabled(row.get("rename_apply"));
            if (!create && !rename) continue;
            Address raw = address(row.get("raw_target_address"));
            FunctionSelection selection = selections.computeIfAbsent(raw, FunctionSelection::new);
            selection.rows.add(row);
            selection.create |= create;
            if (rename) selection.renameRows.add(row);
        }
        if (selections.isEmpty()) return 0;

        Set<Address> entryPoints = new TreeSet<>(selections.keySet());
        Map<Address, Address> thunkTargets = new TreeMap<>();
        for (FunctionSelection selection : selections.values()) {
            monitor.checkCancelled();
            if (!hasLivePointer(selection)) {
                selection.error = "all source pointer values changed since analysis";
                continue;
            }
            Function existing = currentProgram.getFunctionManager().getFunctionAt(selection.address);
            if (existing != null) {
                selection.function = existing;
                continue;
            }
            if (!selection.create) {
                selection.error = "rename_apply=1 but no exact function exists; " +
                    "review and set create_apply=1 first";
                continue;
            }
            Function containing = currentProgram.getFunctionManager()
                .getFunctionContaining(selection.address);
            if (containing != null) {
                selection.error = "address is inside " + containing.getName(true) +
                    "; refusing to split a pre-existing function";
                continue;
            }
            if (listing.getInstructionAt(selection.address) == null) {
                selection.error = "no instruction at target";
                continue;
            }
            Address target = CreateThunkFunctionCmd.getThunkedAddr(
                currentProgram, selection.address, true);
            if (target != null && !target.equals(selection.address))
                thunkTargets.put(selection.address, target);
        }

        for (Map.Entry<Address, Address> entry : thunkTargets.entrySet()) {
            FunctionSelection selection = selections.get(entry.getKey());
            if (selection.error != null || selection.function != null) continue;
            AddressSet body = linearThunkBody(selection.address, entry.getValue(), entryPoints);
            if (body == null) continue;
            Function target = currentProgram.getFunctionManager().getFunctionAt(entry.getValue());
            if (target == null)
                target = currentProgram.getFunctionManager().getFunctionContaining(entry.getValue());
            if (target == null) continue;
            try {
                selection.function = currentProgram.getFunctionManager().createThunkFunction(
                    null, currentProgram.getGlobalNamespace(), selection.address, body, target,
                    SourceType.DEFAULT);
                selection.created = selection.function != null;
                selection.recognizedThunk = selection.created;
            }
            catch (Exception exception) {
                // Fall back to a normal function boundary below. The report retains the reason.
                selection.fixupWarning = "thunk creation fallback: " + message(exception);
            }
        }

        // Creating a thunk may also create its target function. Pick those up before
        // constructing the ordinary-function work list so they are not misreported as
        // having been absorbed by a neighbor.
        for (FunctionSelection selection : selections.values()) {
            if (selection.error != null || selection.function != null) continue;
            Function exact = currentProgram.getFunctionManager().getFunctionAt(selection.address);
            if (exact == null) continue;
            selection.function = exact;
            selection.created = true;
        }

        List<FunctionSelection> ordinary = selections.values().stream()
            .filter(selection -> selection.error == null && selection.function == null)
            .sorted(Comparator.comparing((FunctionSelection selection) -> selection.address)
                .reversed()).toList();
        for (FunctionSelection selection : ordinary) {
            monitor.checkCancelled();
            if (currentProgram.getFunctionManager().getFunctionContaining(selection.address) != null) {
                selection.error = "candidate was absorbed by another new function";
                continue;
            }
            ghidra.program.model.listing.Instruction instruction =
                listing.getInstructionAt(selection.address);
            AddressSet body = new AddressSet(instruction.getMinAddress(), instruction.getMaxAddress());
            CreateFunctionCmd command = new CreateFunctionCmd(null, selection.address, body,
                SourceType.DEFAULT);
            if (!command.applyTo(currentProgram, monitor)) {
                selection.error = command.getStatusMsg();
                continue;
            }
            selection.function = currentProgram.getFunctionManager().getFunctionAt(selection.address);
            selection.created = selection.function != null;
        }
        for (FunctionSelection selection : ordinary) {
            if (!selection.created || selection.function == null) continue;
            try {
                CreateFunctionCmd.fixupFunctionBody(currentProgram, selection.function, monitor);
            }
            catch (Exception exception) {
                // The single-instruction boundary is still valid and prevents overlap.
                selection.fixupWarning = message(exception);
            }
        }

        int createdCount = 0;
        for (FunctionSelection selection : selections.values()) {
            monitor.checkCancelled();
            if (selection.error != null || selection.function == null) {
                report.add(new ReportRow("function", addr(selection.address), "conflict", "",
                    selection.error == null ? "function creation returned no function" :
                    selection.error));
                continue;
            }
            boolean renamed = applyReviewedRename(selection);
            if (!hasTag(selection.function, FUNCTION_TAG))
                selection.function.addTag(FUNCTION_TAG);
            addFunctionComments(selection.function, selection.rows);
            if (selection.created) createdCount++;
            String detail = (selection.created ? "created function" : "existing function") +
                (selection.recognizedThunk || selection.function.isThunk() ?
                    "; recognized thunk" : "") +
                (renamed ? "; renamed" : "; name unchanged") +
                (selection.fixupWarning == null ? "" :
                    "; body fixup warning: " + selection.fixupWarning);
            report.add(new ReportRow("function", addr(selection.address),
                selection.created || renamed ? "created" : "already_present",
                selection.function.getName(true), detail));
        }
        return createdCount;
    }

    private boolean hasLivePointer(FunctionSelection selection) {
        for (Map<String, String> row : selection.rows) {
            Address pointer = address(row.get("pointer_address"));
            Address target = readPointer(pointer);
            if (selection.address.equals(target)) return true;
        }
        return false;
    }

    private AddressSet linearThunkBody(Address entry, Address target, Set<Address> entries) {
        AddressSet body = new AddressSet();
        Address cursor = entry;
        for (int count = 0; count < 8; count++) {
            if (!cursor.equals(entry) && entries.contains(cursor)) return null;
            ghidra.program.model.listing.Instruction instruction = listing.getInstructionAt(cursor);
            if (instruction == null) return null;
            body.addRange(instruction.getMinAddress(), instruction.getMaxAddress());
            for (Address flow : instruction.getFlows())
                if (flow.equals(target)) return body;
            if (instruction.getFlowType().isJump() || instruction.getFlowType().isCall() ||
                    instruction.getFlowType().isTerminal()) return null;
            cursor = instruction.getFallThrough();
            if (cursor == null) return null;
        }
        return null;
    }

    private boolean applyReviewedRename(FunctionSelection selection) throws Exception {
        if (selection.renameRows.isEmpty()) return false;
        Set<String> proposedNames = new TreeSet<>();
        for (Map<String, String> row : selection.renameRows) {
            String proposed = unt(row.get("proposed_function"));
            if (!isSynthetic(proposed)) proposedNames.add(proposed);
        }
        if (proposedNames.isEmpty()) return false;
        if (proposedNames.size() > 1) {
            selection.fixupWarning = "conflicting reviewed names: " +
                String.join(" | ", proposedNames);
            return false;
        }
        String proposed = proposedNames.iterator().next();
        Map<String, String> row = selection.renameRows.get(0);
        String expected = unt(row.get("exact_function"));
        if (expected.isBlank()) expected = unt(row.get("raw_target_symbol"));
        if (!safeToRename(selection.function, expected, proposed)) {
            selection.fixupWarning = "manual/current name preserved: " +
                selection.function.getName(true) + "; proposed " + proposed;
            return false;
        }
        setQualifiedName(selection.function, proposed);
        return true;
    }

    private void deferTables(List<Map<String, String>> proposals) {
        for (Map<String, String> row : proposals) {
            if (!enabled(row.get("apply")) && !enabled(row.get("layout_apply"))) continue;
            String name = selectedTableName(row);
            report.add(new ReportRow("table", row.get("table_address"), "deferred",
                name,
                "function boundaries changed; re-run STVTableAnalyzer first"));
        }
    }

    private void applySelectedTables(List<Map<String, String>> proposals,
            Map<String, List<Map<String, String>>> slotsByTable) throws Exception {
        for (Map<String, String> row : proposals) {
            monitor.checkCancelled();
            String addressText = row.get("table_address");
            boolean semanticApply = enabled(row.get("apply"));
            boolean layoutApply = enabled(row.get("layout_apply"));
            String proposedName = selectedTableName(row);
            if (!semanticApply && !layoutApply) {
                report.add(new ReportRow("table", addressText, "skipped", proposedName,
                    "apply=0; layout_apply=0"));
                continue;
            }
            try {
                Map<String, String> effectiveProposal = row;
                if (!semanticApply) {
                    effectiveProposal = new LinkedHashMap<>(row);
                    effectiveProposal.put("owner", "");
                    effectiveProposal.put("proposed_name", proposedName);
                    effectiveProposal.put("confidence", "physical");
                    effectiveProposal.put("reason", "strong_vptr_store_layout_only");
                }
                Address tableAddress = address(addressText);
                int slotCount = Integer.parseInt(row.get("slot_count"));
                List<Map<String, String>> slots = slotsByTable.getOrDefault(addressText, List.of());
                if (slots.size() != slotCount) {
                    report.add(new ReportRow("table", addressText, "conflict", proposedName,
                        "proposal has " + slotCount + " slots but slots file has " + slots.size()));
                    continue;
                }
                if (!tableBytesMatch(slots)) {
                    report.add(new ReportRow("table", addressText, "conflict", proposedName,
                        "one or more pointer values changed since analysis"));
                    continue;
                }
                String symbolConflict = tableSymbolConflict(tableAddress, proposedName);
                if (symbolConflict != null) {
                    report.add(new ReportRow("table", addressText, "conflict", proposedName,
                        symbolConflict));
                    continue;
                }

                // A semantic owner/name can improve while the bytes still denote the same
                // physical table.  Keep the hash-intact live table as the ABI retention
                // source when building a newly named alias; table ownership alone is not
                // evidence for changing inherited slot receivers or other parameters.
                Data liveTable = listing.getDefinedDataContaining(tableAddress);
                Structure physicalRetention = isOwnedTableData(liveTable, addressText) &&
                        liveTable.getDataType() instanceof Structure liveStructure ?
                    liveStructure : null;
                if (!semanticApply && strongerSemanticPhysicalTable(physicalRetention,
                        proposedName)) {
                    report.add(new ReportRow("table", addressText, "already_present",
                        physicalRetention.getName(),
                        "retained stronger semantic table for the same physical bytes; " +
                        "layout-only alias " + proposedName + " suppressed"));
                    continue;
                }
                StructureResolution typeResolution = resolveStructure(proposedName, slots,
                    effectiveProposal, physicalRetention);
                if (typeResolution.error != null) {
                    report.add(new ReportRow("table", addressText, "conflict", proposedName,
                        typeResolution.error));
                    continue;
                }
                Structure structure = typeResolution.structure;
                if (structure.getLength() != slotCount * pointerSize) {
                    report.add(new ReportRow("table", addressText, "conflict", proposedName,
                        "existing structure length is " + structure.getLength() +
                        ", expected " + (slotCount * pointerSize) + "; preserving manual type"));
                    continue;
                }

                Data existing = liveTable;
                DataType replacedOwnedType = isOwnedTableData(existing, addressText) ?
                    existing.getDataType() : null;
                boolean alreadyApplied = existing != null &&
                    existing.getMinAddress().equals(tableAddress) &&
                    existing.getLength() == structure.getLength() &&
                    existing.getDataType().getPathName().equals(structure.getPathName());
                if (!alreadyApplied) {
                    String dataConflict = tableDataConflict(tableAddress, slotCount);
                    if (dataConflict != null) {
                        report.add(new ReportRow("table", addressText, "conflict", proposedName,
                            dataConflict));
                        continue;
                    }
                    DataUtilities.ClearDataMode clearMode = replacedOwnedType == null ?
                        DataUtilities.ClearDataMode.CLEAR_ALL_DEFAULT_CONFLICT_DATA :
                        DataUtilities.ClearDataMode.CLEAR_ALL_CONFLICT_DATA;
                    DataUtilities.createData(currentProgram, tableAddress, structure,
                        structure.getLength(), clearMode);
                }
                installTableLabel(tableAddress, proposedName);
                int materializedReferences = materializeVptrStoreReferences(row, tableAddress);
                addTableComment(tableAddress, effectiveProposal);
                // Migrate the live owner field before considering retirement of the old table
                // type.  Removing it first leaves a /-BAD-/ component and makes the owner hash
                // look manually edited, permanently blocking the repair.
                if (semanticApply) typeOwnerVptr(row, structure);
                boolean retainedPriorType = false;
                if (replacedOwnedType != null &&
                        !replacedOwnedType.getPathName().equals(structure.getPathName())) {
                    if (safeToRemoveGeneratedType(replacedOwnedType))
                        dataTypes.remove(replacedOwnedType);
                    else retainedPriorType = true;
                }
                String status = !alreadyApplied ? "applied" :
                    typeResolution.updated ? "updated" : "already_present";
                report.add(new ReportRow("table", addressText, status, proposedName,
                    typeResolution.detail + " " + structure.getPathName() + "; " +
                    slotCount + " slots; vptr references materialized=" +
                    materializedReferences + (retainedPriorType ?
                    "; retained prior type because it is referenced, modified, or lacks a baseline" : "")));
            }
            catch (Exception exception) {
                report.add(new ReportRow("table", addressText, "failed", proposedName,
                    message(exception)));
            }
        }
    }

    private boolean strongerSemanticPhysicalTable(Structure live, String proposedName) {
        if (live == null || !generatedForTable(live,
                proposedName.replaceFirst("(?i)^VTable_", ""))) return false;
        String owner = generatedOwner(live);
        return !owner.isBlank() && !structuralReceiverOwner(owner);
    }

    private String generatedOwner(Structure table) {
        String description = text(table == null ? null : table.getDescription());
        Matcher matcher = Pattern.compile("(?i)(?:^|;)\\s*owner=([^;]*)")
            .matcher(description);
        return matcher.find() ? matcher.group(1).trim() : "";
    }

    private boolean structuralReceiverOwner(String owner) {
        String value = text(owner);
        return value.startsWith(
            "SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_") ||
            value.startsWith(
                "SubmarineTitans::Recovered::HiddenThis::AnonReceiver_");
    }

    /**
     * Ghidra sometimes decodes MOV [object], imm32 without creating a data reference for
     * the immediate.  The analyzer records only exact object-relative vptr stores.  Recheck
     * the live instruction and immediate here before adding the missing reference; this is
     * what lets the decompiler connect the typed owner field to the typed table symbol.
     */
    private int materializeVptrStoreReferences(Map<String, String> proposal,
            Address tableAddress) {
        String encoded = unt(proposal.get("vptr_store_sites"));
        if (encoded.isBlank()) return 0;
        int added = 0;
        for (String part : encoded.split("\\s*\\|\\s*")) {
            String siteText = part.trim();
            if (siteText.isBlank()) continue;
            Address site;
            try { site = address(siteText); }
            catch (Exception exception) { continue; }
            ghidra.program.model.listing.Instruction instruction =
                listing.getInstructionAt(site);
            if (instruction == null ||
                    !"MOV".equalsIgnoreCase(instruction.getMnemonicString()) ||
                    instruction.getNumOperands() < 2 ||
                    !instruction.getDefaultOperandRepresentation(0).contains("[")) continue;
            Scalar immediate = instruction.getScalar(1);
            if (immediate == null || immediate.getUnsignedValue() !=
                    tableAddress.getOffset()) continue;
            boolean exists = false;
            for (Reference reference : instruction.getReferencesFrom()) {
                if (reference.getOperandIndex() == 1 &&
                        reference.getToAddress().equals(tableAddress)) {
                    exists = true;
                    break;
                }
            }
            if (exists) continue;
            currentProgram.getReferenceManager().addMemoryReference(site, tableAddress,
                RefType.DATA, SourceType.ANALYSIS, 1);
            added++;
        }
        return added;
    }

    private String selectedTableName(Map<String, String> row) {
        if (enabled(row.get("apply"))) return unt(row.get("proposed_name"));
        String layoutName = unt(row.get("layout_name"));
        return layoutName.isBlank() ? unt(row.get("proposed_name")) : layoutName;
    }

    private void typeOwnerVptr(Map<String, String> proposal, Structure vtable) {
        String ownerName = unt(proposal.get("owner"));
        if (ownerName.isBlank()) return;
        String tableAddress = proposal.get("table_address");
        Set<Long> offsets = thisVptrOffsets(proposal);
        if (offsets.isEmpty()) {
            report.add(new ReportRow("owner_vptr", ownerName, "skipped", ownerName,
                "no exact this-relative vptr store offset"));
            return;
        }
        Structure owner = findOwnerStructure(ownerName);
        if (owner == null) {
            report.add(new ReportRow("owner_vptr", ownerName, "skipped", ownerName,
                "owner structure not found for table " + tableAddress));
            return;
        }
        DataType desired = new PointerDataType(vtable, pointerSize, dataTypes);
        String description = owner.getDescription();
        String storedHash = storedLayoutHash(description);
        String currentHash = structureLayoutHash(owner);
        boolean generatedUnchanged = description != null &&
            description.contains("[STClassLayoutApplier]") && storedHash != null &&
            storedHash.equals(currentHash);

        for (long offsetLong : offsets) {
            String reportAddress = ownerName + "+" + String.format("0x%X", offsetLong);
            if (offsetLong < 0 || offsetLong > Integer.MAX_VALUE - pointerSize ||
                    offsetLong + pointerSize > owner.getLength()) {
                report.add(new ReportRow("owner_vptr", reportAddress, "skipped", ownerName,
                    "vptr store lies outside the recovered owner layout"));
                continue;
            }
            int offset = (int)offsetLong;
            DataTypeComponent component = owner.getComponentAt(offset);
            if (component != null && component.getOffset() == offset &&
                    component.getDataType().isEquivalent(desired)) {
                report.add(new ReportRow("owner_vptr", reportAddress, "already_present", ownerName,
                    "owner already points to " + vtable.getPathName()));
                continue;
            }
            boolean brokenGeneratedVptr = brokenGeneratedVptr(component, offset);
            if (!generatedUnchanged && !brokenGeneratedVptr) {
                report.add(new ReportRow("owner_vptr", reportAddress, "skipped", ownerName,
                    "manual or modified owner layout preserved"));
                continue;
            }
            if (!brokenGeneratedVptr &&
                    !replaceableGeneratedVptr(owner, component, offset)) {
                report.add(new ReportRow("owner_vptr", reportAddress, "skipped", ownerName,
                    "offset is not a generated generic vptr field"));
                continue;
            }
            String priorComment = component == null || component.getComment() == null ? "" :
                component.getComment();
            String comment = (priorComment.isBlank() ? "" : priorComment + "\n") +
                COMMENT_MARKER + " vptr for " + ownerName + "; table=" + tableAddress;
            String fieldName = offset == 0 ? "vtable" :
                "vtable_at_" + Integer.toHexString(offset);
            owner.replaceAtOffset(offset, desired, pointerSize, fieldName, comment);
            refreshGeneratedLayoutHash(owner);
            generatedUnchanged = true;
            report.add(new ReportRow("owner_vptr", reportAddress, "updated", ownerName,
                "typed owner offset as " + vtable.getPathName() + " *"));
        }
    }

    private Set<Long> thisVptrOffsets(Map<String, String> proposal) {
        Set<Long> result = new TreeSet<>();
        String encoded = unt(proposal.get("this_vptr_offsets"));
        for (String part : encoded.split("\\s*\\|\\s*")) {
            String value = part.trim();
            if (value.isEmpty() || value.equalsIgnoreCase("unknown")) continue;
            try {
                result.add(value.startsWith("0x") || value.startsWith("0X") ?
                    Long.parseUnsignedLong(value.substring(2), 16) : Long.parseLong(value));
            }
            catch (NumberFormatException ignored) { }
        }
        // Compatibility with proposals produced immediately before this-relative offsets were
        // added: the old primary marker proves offset zero, but nothing about secondary stores.
        if (result.isEmpty() && enabled(proposal.get("primary_vptr_store"))) result.add(0L);
        return result;
    }

    private Structure findOwnerStructure(String ownerName) {
        String leaf = ownerName;
        int separator = leaf.lastIndexOf("::");
        if (separator >= 0) leaf = leaf.substring(separator + 2);
        DataType direct = dataTypes.getDataType("/" + leaf);
        if (direct instanceof Structure structure) return structure;
        List<DataType> matches = new ArrayList<>();
        dataTypes.findDataTypes(leaf, matches);
        for (DataType match : matches) {
            if (match instanceof Structure structure &&
                    !structure.getPathName().startsWith(VTABLES.getPath())) return structure;
        }
        return null;
    }

    private boolean brokenGeneratedVptr(DataTypeComponent component, int baseOffset) {
        if (component == null || component.getOffset() != baseOffset ||
                component.getLength() != pointerSize) return false;
        DataType type = component.getDataType();
        String path = text(type.getPathName());
        String name = text(type.getName()).toLowerCase(Locale.ROOT);
        if (!"/-BAD-".equals(path) && !name.contains("bad")) return false;
        String comment = text(component.getComment());
        return comment.contains("was deleted") &&
            (comment.contains("owner_vtable_pointer") ||
                comment.contains(COMMENT_MARKER) || comment.contains("VTable"));
    }

    private boolean replaceableGeneratedVptr(Structure owner, DataTypeComponent component,
            int baseOffset) {
        if (component != null && component.getOffset() == baseOffset &&
                component.getLength() == pointerSize) {
            DataType type = component.getDataType();
            if (type instanceof Pointer pointer) {
                DataType pointed = pointer.getDataType();
                if (pointed == null || pointed instanceof VoidDataType) return true;
                if ("vtable".equals(component.getFieldName()) &&
                        pointed instanceof Structure priorVtable &&
                        generatedVtableUnchanged(priorVtable)) return true;
                String path = pointed.getPathName();
                String name = pointed.getName().toLowerCase(Locale.ROOT);
                return path.contains("/Recovered/ClassPointees/AnonPointee_") ||
                    name.startsWith("undefined") || name.equals("void");
            }
            String comment = component.getComment();
            String name = type.getName().toLowerCase(Locale.ROOT);
            if (name.startsWith("undefined") &&
                    (comment == null || comment.contains("[STClassLayoutApplier]"))) return true;
        }

        // Some conservative class layouts have no observed read at the store offset, so the vptr
        // range remains four separate undefined bytes.  Replacing that generated padding is
        // safe after the owner-layout hash check above.
        int rangeEnd = baseOffset + pointerSize;
        for (int offset = baseOffset; offset < rangeEnd; offset++) {
            DataTypeComponent part = owner.getComponentAt(offset);
            if (part == null || part.getOffset() < 0 ||
                    part.getOffset() < baseOffset ||
                    part.getOffset() + part.getLength() > rangeEnd) return false;
            String name = part.getDataType().getName().toLowerCase(Locale.ROOT);
            String field = part.getFieldName();
            String comment = part.getComment();
            if (!name.startsWith("undefined") || field != null && !field.isBlank() ||
                    comment != null && !comment.isBlank()) return false;
        }
        return true;
    }

    private boolean generatedVtableUnchanged(Structure structure) {
        if (!structure.getCategoryPath().equals(VTABLES)) return false;
        String description = structure.getDescription();
        if (description == null || !description.contains(COMMENT_MARKER)) return false;
        String stored = storedLayoutHash(description);
        return stored != null && stored.equals(structureLayoutHash(structure));
    }

    private void refreshGeneratedLayoutHash(Structure structure) {
        String description = structure.getDescription();
        if (description == null) description = "";
        int index = description.indexOf(LAYOUT_HASH_MARKER);
        if (index >= 0) description = description.substring(0, index);
        String updated = description + LAYOUT_HASH_MARKER + structureLayoutHash(structure);
        if (!updated.equals(structure.getDescription())) structure.setDescription(updated);
    }

    private StructureResolution resolveStructure(String name, List<Map<String, String>> slots,
            Map<String, String> proposal, Structure physicalRetention) {
        Structure existing = findStructure(name);
        Structure desired = buildStructure(name, slots, proposal,
            existing != null ? existing : physicalRetention);
        String desiredHash = structureLayoutHash(desired);
        desired.setDescription(desired.getDescription() + LAYOUT_HASH_MARKER + desiredHash);

        if (existing == null) {
            DataType sameName = findAnyDataType(name);
            if (sameName != null)
                return StructureResolution.error("existing data type is not a structure: " +
                    sameName.getPathName());
            Structure created = (Structure)dataTypes.resolve(desired,
                DataTypeConflictHandler.KEEP_HANDLER);
            return new StructureResolution(created, "created generated type", null);
        }

        String description = existing.getDescription();
        if (description == null || !description.contains(COMMENT_MARKER))
            return new StructureResolution(existing, "used existing manual type", null);

        String currentHash = structureLayoutHash(existing);
        String storedHash = storedLayoutHash(description);
        if (storedHash == null) {
            if (!currentHash.equals(desiredHash))
                return new StructureResolution(existing,
                    "preserved legacy generated type (layout differs; no safety hash)", null);
            if (!desired.getDescription().equals(existing.getDescription()))
                existing.setDescription(desired.getDescription());
            return new StructureResolution(existing, "adopted legacy generated type", null);
        }
        if (!storedHash.equals(currentHash))
            return new StructureResolution(existing,
                "preserved manually changed generated type (stored " +
                storedHash.substring(0, 12) + ", current " +
                currentHash.substring(0, 12) + ")", null);
        if (currentHash.equals(desiredHash))
            return new StructureResolution(existing, "used unchanged generated type", null);

        existing.replaceWith(desired);
        existing.setDescription(desired.getDescription());
        return new StructureResolution(existing,
            "updated unchanged-since-apply generated type", null, true);
    }

    private Structure buildStructure(String name, List<Map<String, String>> slots,
            Map<String, String> proposal, Structure existing) {
        StructureDataType structure = new StructureDataType(VTABLES, name, 0, dataTypes);
        structure.setDescription(COMMENT_MARKER + " Generated from " +
            proposal.get("table_address") + "; owner=" + unt(proposal.get("owner")) +
            "; confidence=" + proposal.get("confidence") + "; " + unt(proposal.get("reason")));
        Map<String, Integer> fieldCounts = new HashMap<>();
        for (Map<String, String> slot : slots) {
            Address rawAddress = address(slot.get("raw_target_address"));
            Function function = currentProgram.getFunctionManager().getFunctionAt(rawAddress);
            Address resolvedAddress = address(slot.get("resolved_target_address"));
            Function resolved = resolvedAddress == null ? null :
                currentProgram.getFunctionManager().getFunctionAt(resolvedAddress);
            boolean exactThunkTarget = "true".equalsIgnoreCase(slot.get("thunk")) &&
                resolved != null && function != null && !resolved.equals(function);
            Function signatureFunction = exactThunkTarget ? resolved : function;
            DataType fieldType = pointerFor(signatureFunction, rawAddress);
            int slotIndex = Integer.parseInt(slot.get("slot_index"));
            int slotOffset = slotIndex * pointerSize;
            String baseName = fieldName(unt(slot.get("proposed_function")), slotIndex);
            int occurrence = fieldCounts.merge(baseName, 1, Integer::sum);
            String fieldName = occurrence == 1 ? baseName : baseName + "_" + occurrence;
            String comment = "slot " + slot.get("slot_offset") + " -> " +
                slot.get("raw_target_address") + " " + unt(slot.get("raw_target_symbol"));
            DataType retained = retainedIndirectCallType(existing, slotOffset,
                slot.get("raw_target_address"));
            DataType stablePhysical = retainedStablePhysicalSlotType(existing, slotOffset,
                slot.get("raw_target_address"));
            DataType physicalAlias = physicalAliasIndirectType(
                proposal.get("table_address"), slotOffset,
                slot.get("raw_target_address"));
            DataType dominant = dominantIndirectCallType(rawAddress, fieldType,
                signatureFunction);
            // Rebuilding or renaming a physical table is not ABI evidence.  Preserve
            // the hash-intact slot first, then an exact physical alias, and only use
            // recovered target consensus to initialize a slot which has no accepted
            // physical baseline.  STIndirectCallApplier owns later ABI refinements.
            if (retained == null) retained = stablePhysical;
            if (retained == null) retained = physicalAlias;
            if (retained == null)
                retained = dominant;
            boolean retainedPhysicalAbi = retained != null;
            if (retainedPhysicalAbi) {
                fieldType = retained;
                if (stablePhysical != null) {
                    DataTypeComponent prior = existing.getComponentAt(slotOffset);
                    String priorComment = prior == null ? "" : text(prior.getComment());
                    if (!priorComment.isBlank()) comment = priorComment;
                }
                else comment += " " + INDIRECT_CALL_MARKER;
            }
            if (!retainedPhysicalAbi) {
                DataType ownerReceiver = strengthenGenericReceiver(fieldType,
                    unt(proposal.get("owner")), rawAddress);
                if (ownerReceiver != null) fieldType = ownerReceiver;
            }
            structure.add(fieldType, pointerSize, fieldName, comment);
        }
        return structure;
    }

    /**
     * A unique semantic table owner proves the primary receiver when the candidate
     * slot is still void/generic or belongs only to a structural hidden-this view.
     * It never replaces another concrete receiver (which may be a base subobject).
     * Prefer an existing owner-specific generated definition so accepted ABI identity
     * and all prior refinements survive a table-name recovery.
     */
    private DataType strengthenGenericReceiver(DataType candidate, String ownerName,
            Address rawAddress) {
        if (ownerName.isBlank() || structuralReceiverOwner(ownerName) ||
                !(candidate instanceof Pointer pointer) ||
                !(pointer.getDataType() instanceof FunctionDefinition definition) ||
                !"__thiscall".equals(definition.getCallingConventionName()) ||
                definition.getArguments().length == 0 ||
                !genericOrStructuralReceiver(definition.getArguments()[0].getDataType()))
            return null;
        DataType owner = findOwnerStructure(ownerName);
        if (owner == null) return null;
        DataType ownerPointer = new PointerDataType(owner, pointerSize, dataTypes);
        DataType retained = existingOwnerSpecificDefinition(definition, ownerPointer,
            ownerName, rawAddress);
        if (retained != null) return retained;

        String name = "vfunc_" + addr(rawAddress) + "_for_" + sanitize(ownerName);
        FunctionDefinitionDataType desired = new FunctionDefinitionDataType(
            VFUNCTIONS, name, dataTypes);
        try {
            desired.setCallingConvention(definition.getCallingConventionName());
        }
        catch (Exception exception) { return null; }
        desired.setReturnType(definition.getReturnType());
        desired.setVarArgs(definition.hasVarArgs());
        desired.setNoReturn(definition.hasNoReturn());
        ParameterDefinition[] old = definition.getArguments();
        ParameterDefinition[] arguments = new ParameterDefinition[old.length];
        for (int index = 0; index < old.length; index++) {
            DataType type = index == 0 ? ownerPointer : old[index].getDataType();
            arguments[index] = new ParameterDefinitionImpl(old[index].getName(), type,
                old[index].getComment());
        }
        desired.setArguments(arguments);
        String hash = functionSignatureHash(desired);
        desired.setComment(COMMENT_MARKER + " Owner receiver recovered from unique " +
            "physical-table ownership" + SIGNATURE_HASH_MARKER + hash);
        DataType resolved = dataTypes.resolve(desired,
            DataTypeConflictHandler.KEEP_HANDLER);
        return new PointerDataType(resolved, pointerSize, dataTypes);
    }

    private boolean genericOrStructuralReceiver(DataType type) {
        if (!(type instanceof Pointer pointer)) return false;
        DataType pointee = pointer.getDataType();
        if (pointee == null || pointee instanceof VoidDataType ||
                pointee.getName().toLowerCase(Locale.ROOT).startsWith("undefined"))
            return true;
        return pointee.getPathName().startsWith(
            "/SubmarineTitans/Recovered/HiddenThis/") &&
            text(pointee.getDescription()).contains("[STHiddenThisApplier generated]");
    }

    private DataType existingOwnerSpecificDefinition(FunctionDefinition candidate,
            DataType ownerPointer, String ownerName, Address rawAddress) {
        String address = addr(rawAddress).toUpperCase(Locale.ROOT);
        String suffix = "_for_" + sanitize(ownerName);
        DataType agreed = null;
        Iterator<DataType> iterator = dataTypes.getAllDataTypes();
        while (iterator.hasNext()) {
            DataType value = iterator.next();
            if (!(value instanceof FunctionDefinition definition) ||
                    !definition.getName().toUpperCase(Locale.ROOT).contains(address) ||
                    !definition.getName().endsWith(suffix) ||
                    !"__thiscall".equals(definition.getCallingConventionName()) ||
                    definition.getArguments().length != candidate.getArguments().length ||
                    definition.getArguments().length == 0 ||
                    !definition.getArguments()[0].getDataType().isEquivalent(ownerPointer) ||
                    !sameNonReceiverAbi(definition, candidate)) continue;
            DataType pointer = new PointerDataType(definition, pointerSize, dataTypes);
            if (agreed != null && !agreed.isEquivalent(pointer)) return null;
            agreed = pointer;
        }
        return agreed;
    }

    private boolean sameNonReceiverAbi(FunctionDefinition left,
            FunctionDefinition right) {
        if (!text(left.getCallingConventionName()).equals(
                text(right.getCallingConventionName())) ||
                left.hasVarArgs() != right.hasVarArgs() ||
                left.hasNoReturn() != right.hasNoReturn() ||
                !left.getReturnType().isEquivalent(right.getReturnType())) return false;
        ParameterDefinition[] a = left.getArguments();
        ParameterDefinition[] b = right.getArguments();
        if (a.length != b.length) return false;
        for (int index = 1; index < a.length; index++)
            if (!a[index].getDataType().isEquivalent(b[index].getDataType())) return false;
        return true;
    }

    /**
     * STIndirectCallApplier refines a generic slot after this script has established the
     * physical table.  A later structural pass must not erase that independently owned
     * refinement merely because the target function itself is still untrusted.  Retain only
     * exact generated function pointers whose slot and definition both carry its marker and
     * whose raw target still matches this analyzer snapshot.
     */
    private DataType retainedIndirectCallType(Structure existing, int offset,
            String rawTarget) {
        if (existing == null) return null;
        DataTypeComponent component = existing.getComponentAt(offset);
        if (component == null || component.getOffset() != offset ||
                component.getLength() != pointerSize) return null;
        String componentComment = text(component.getComment());
        if (!componentComment.contains(INDIRECT_CALL_MARKER) ||
                !componentComment.toUpperCase(Locale.ROOT).contains(
                    "-> " + unt(rawTarget).toUpperCase(Locale.ROOT))) return null;
        if (!(component.getDataType() instanceof Pointer pointer) ||
                !(pointer.getDataType() instanceof FunctionDefinition definition)) return null;
        String definitionComment = text(definition.getComment());
        return definitionComment.contains(INDIRECT_CALL_MARKER) ||
                definition.getCategoryPath().equals(INDIRECT_FUNCTIONS) ?
            component.getDataType() : null;
    }

    /**
     * A hash-intact generated structure installed over the same physical table is the
     * accepted ABI baseline for its existing slots.  Recovering a more specific table
     * owner may create a differently named alias, but it must not rewrite inherited
     * receivers (for example Base * to Derived *) or any other slot ABI merely from that
     * owner decision.  Independently refined indirect-call slots are handled above; this
     * fallback retains every other exact target-bound function definition.
     */
    private DataType retainedStablePhysicalSlotType(Structure existing, int offset,
            String rawTarget) {
        if (existing == null) return null;
        String description = text(existing.getDescription());
        String stored = storedLayoutHash(description);
        if (!description.contains(COMMENT_MARKER) || stored == null ||
                !stored.equals(structureLayoutHash(existing))) return null;
        DataTypeComponent component = existing.getComponentAt(offset);
        if (component == null || component.getOffset() != offset ||
                component.getLength() != pointerSize ||
                !text(component.getComment()).toUpperCase(Locale.ROOT).contains(
                    "-> " + unt(rawTarget).toUpperCase(Locale.ROOT)) ||
                !(component.getDataType() instanceof Pointer pointer) ||
                !(pointer.getDataType() instanceof FunctionDefinition)) return null;
        return component.getDataType();
    }

    /**
     * Vtable ownership can improve after a table type has already been generated.  The old and
     * new names may therefore coexist temporarily, but they still describe the same physical
     * bytes.  An independently recovered slot ABI on one exact-address alias is authoritative
     * for that slot on every generated alias.  This is address identity, not layout similarity.
     */
    private DataType physicalAliasIndirectType(String tableAddress, int offset,
            String rawTarget) {
        DataType agreed = null;
        Iterator<Structure> structures = dataTypes.getAllStructures();
        while (structures.hasNext()) {
            Structure structure = structures.next();
            if (!structure.getCategoryPath().equals(VTABLES) ||
                    !generatedForTable(structure, tableAddress)) continue;
            DataTypeComponent component = structure.getComponentAt(offset);
            if (component == null || component.getOffset() != offset ||
                    component.getLength() != pointerSize ||
                    !text(component.getComment()).toUpperCase(Locale.ROOT).contains(
                        "-> " + unt(rawTarget).toUpperCase(Locale.ROOT)) ||
                    !(component.getDataType() instanceof Pointer pointer) ||
                    !(pointer.getDataType() instanceof FunctionDefinition definition) ||
                    !(text(component.getComment()).contains(INDIRECT_CALL_MARKER) ||
                        definition.getCategoryPath().equals(INDIRECT_FUNCTIONS))) continue;
            DataType recovered = component.getDataType();
            if (agreed != null && !agreed.isEquivalent(recovered)) return null;
            agreed = recovered;
        }
        return agreed;
    }

    private boolean generatedForTable(Structure structure, String tableAddress) {
        String description = text(structure.getDescription());
        if (!description.contains(COMMENT_MARKER)) return false;
        Matcher matcher = VTABLE_SOURCE.matcher(description);
        return matcher.find() && matcher.group(1).equalsIgnoreCase(unt(tableAddress));
    }

    /**
     * One implementation address has one machine ABI even when several physical vtables point
     * at it.  A newly discovered owner can cause this script to build a fresh physical table
     * before STIndirectCallAnalyzer sees it.  In that situation, copying the weak target Listing
     * signature would discard an independently recovered slot ABI which is already installed in
     * another table.  Recover the unanimous generated indirect-call family by resolved target.
     *
     * Only marker-owned function pointers participate.  Conflicting recovered families cancel
     * the transfer, and retainIndependentSlotAbi() still refuses the transfer when the target has
     * stronger manual/imported or machine-ABI provenance.  Thus table similarity, slot number,
     * and owner name are never evidence by themselves.
     */
    private DataType dominantIndirectCallType(Address rawAddress, DataType candidate,
            Function entry) {
        Function wanted = resolvedTarget(entry);
        if (rawAddress == null || wanted == null) return null;
        DataType agreed = null;
        Iterator<Structure> structures = dataTypes.getAllStructures();
        while (structures.hasNext()) {
            Structure structure = structures.next();
            if (!structure.getCategoryPath().equals(VTABLES)) continue;
            for (DataTypeComponent component : structure.getDefinedComponents()) {
                if (!(component.getDataType() instanceof Pointer pointer) ||
                        !(pointer.getDataType() instanceof FunctionDefinition definition) ||
                        !text(component.getComment()).contains(INDIRECT_CALL_MARKER) ||
                        !(text(definition.getComment()).contains(INDIRECT_CALL_MARKER) ||
                            definition.getCategoryPath().equals(INDIRECT_FUNCTIONS))) continue;
                Matcher matcher = SLOT_TARGET.matcher(text(component.getComment()));
                if (!matcher.find()) continue;
                Address otherRaw = address(matcher.group(1));
                Function otherEntry = otherRaw == null ? null :
                    currentProgram.getFunctionManager().getFunctionAt(otherRaw);
                Function otherTarget = resolvedTarget(otherEntry);
                if (otherTarget == null || !otherTarget.getEntryPoint().equals(
                        wanted.getEntryPoint())) continue;
                DataType recovered = component.getDataType();
                if (!matchesTrustedTarget(recovered, entry) &&
                        !retainIndependentSlotAbi(candidate, recovered, entry)) continue;
                if (agreed != null && !agreed.isEquivalent(recovered)) return null;
                agreed = recovered;
            }
        }
        return agreed;
    }

    private boolean matchesTrustedTarget(DataType recovered, Function entry) {
        Function trusted = trustedSignatureFunction(entry);
        FunctionDefinition definition = pointedFunction(recovered);
        if (trusted == null || definition == null) return false;
        FunctionDefinitionDataType target = new FunctionDefinitionDataType(
            VFUNCTIONS, "comparison_" + addr(trusted.getEntryPoint()),
            trusted.getSignature(), dataTypes);
        return definition.isEquivalentSignature(target);
    }

    private Function resolvedTarget(Function entry) {
        if (entry == null) return null;
        Function target = entry.isThunk() ? entry.getThunkedFunction(true) : entry;
        return target == null ? entry : target;
    }

    private boolean isVoidPointer(DataType type) {
        return type instanceof Pointer pointer &&
            pointer.getDataType() instanceof VoidDataType;
    }

    /**
     * A virtual-method tag proves structural ownership and a useful name, but by itself it does
     * not prove that the target Listing signature is a better ABI than a slot refined from exact
     * indirect-call evidence.  In particular, a later naming pass must not turn a previously
     * recovered full-word return or narrow source argument back into Ghidra's generic
     * undefined/int defaults.  Strong target provenance (manual/imported ABI, the machine ABI
     * consistency pass, or the exact STMessage envelope) may still replace the generated slot.
     */
    private boolean retainIndependentSlotAbi(DataType candidate, DataType retained,
            Function entry) {
        if (isVoidPointer(candidate)) return true;
        FunctionDefinition candidateDefinition = pointedFunction(candidate);
        FunctionDefinition retainedDefinition = pointedFunction(retained);
        if (candidateDefinition == null || retainedDefinition == null) return true;
        if (candidateDefinition.isEquivalentSignature(retainedDefinition)) return false;

        Function signatureFunction = trustedSignatureFunction(entry);
        return !hasStrongAbiProvenance(signatureFunction);
    }

    private FunctionDefinition pointedFunction(DataType type) {
        if (!(type instanceof Pointer pointer) ||
                !(pointer.getDataType() instanceof FunctionDefinition definition)) return null;
        return definition;
    }

    private boolean hasStrongAbiProvenance(Function function) {
        if (function == null) return false;
        SourceType source = function.getSignatureSource();
        if (source == SourceType.USER_DEFINED || source == SourceType.IMPORTED) return true;
        String comment = function.getComment();
        if (hasTag(function, "RECOVERED_ABI_CONSISTENCY") && comment != null &&
                comment.contains("[STAbiConsistencyApplier] machine_thiscall_arity ")) return true;
        return hasTag(function, MESSAGE_HANDLER_TAG) && isMessageHandlerSignature(function);
    }

    private String structureLayoutHash(Structure structure) {
        StringBuilder layout = new StringBuilder();
        layout.append("length=").append(structure.getLength()).append('\n');
        for (DataTypeComponent component : structure.getDefinedComponents()) {
            layout.append(component.getOffset()).append('|')
                .append(component.getLength()).append('|')
                .append(component.getDataType().getPathName()).append('|')
                .append(component.getFieldName() == null ? "" : component.getFieldName()).append('|')
                .append(component.getComment() == null ? "" : component.getComment()).append('\n');
        }
        return sha256(layout.toString());
    }

    private String sha256(String text) {
        try {
            byte[] digest = MessageDigest.getInstance("SHA-256")
                .digest(text.getBytes(StandardCharsets.UTF_8));
            StringBuilder result = new StringBuilder();
            for (byte value : digest) result.append(String.format("%02x", value & 0xff));
            return result.toString();
        }
        catch (Exception exception) {
            throw new IllegalStateException("SHA-256 unavailable", exception);
        }
    }

    private String storedLayoutHash(String description) {
        return storedHash(description, LAYOUT_HASH_MARKER);
    }

    private String storedHash(String text, String marker) {
        if (text == null) return null;
        int index = text.indexOf(marker);
        if (index < 0) return null;
        String value = text.substring(index + marker.length()).trim();
        if (value.length() < 64) return null;
        value = value.substring(0, 64);
        return value.matches("[0-9a-fA-F]{64}") ? value.toLowerCase(Locale.ROOT) : null;
    }

    private DataType pointerFor(Function function, Address rawAddress) {
        Function signatureFunction = trustedSignatureFunction(function);
        if (signatureFunction == null)
            return new PointerDataType(VoidDataType.dataType, pointerSize, dataTypes);

        String name = "vfunc_" + addr(rawAddress) + "_" +
            sanitize(signatureFunction.getName());
        FunctionDefinitionDataType desired = new FunctionDefinitionDataType(VFUNCTIONS, name,
            signatureFunction.getSignature(), dataTypes);
        String desiredHash = functionSignatureHash(desired);
        desired.setComment(generatedSignatureComment(rawAddress, signatureFunction, desiredHash));

        DataType existing = dataTypes.getDataType(VFUNCTIONS, name);
        DataType definition = existing;
        if (existing == null) {
            definition = dataTypes.resolve(desired, DataTypeConflictHandler.KEEP_HANDLER);
        }
        else if (existing instanceof FunctionDefinition existingDefinition) {
            updateGeneratedFunctionDefinition(existingDefinition, desired, desiredHash);
        }
        else {
            // A manually created non-function type owns the generated name. Do not replace it.
            return new PointerDataType(VoidDataType.dataType, pointerSize, dataTypes);
        }
        return new PointerDataType(definition, pointerSize, dataTypes);
    }

    private Function trustedSignatureFunction(Function entry) {
        if (entry == null) return null;
        Function target = entry.isThunk() ? entry.getThunkedFunction(true) : entry;
        if (target != null && hasTag(target, MESSAGE_HANDLER_TAG) &&
                isMessageHandlerSignature(target)) {
            // A folded handler body may have a neutral receiver.  The exact thunk envelope is
            // still proven by the tagged target and retains the vtable owner's receiver type.
            if (!entry.equals(target) && isMessageHandlerSignature(entry)) return entry;
            return target;
        }
        if (isTrustedSignature(target)) return target;
        return isTrustedSignature(entry) ? entry : null;
    }

    private boolean isTrustedSignature(Function function) {
        if (function == null) return false;
        if (function.getSignatureSource() == SourceType.USER_DEFINED ||
                hasTag(function, VIRTUAL_METHOD_TAG)) return true;
        String comment = function.getComment();
        if (hasTag(function, "RECOVERED_ABI_CONSISTENCY") && comment != null &&
                comment.contains("[STAbiConsistencyApplier] machine_thiscall_arity "))
            return true;
        return hasTag(function, MESSAGE_HANDLER_TAG) && isMessageHandlerSignature(function);
    }

    private boolean isMessageHandlerSignature(Function function) {
        if (!"__thiscall".equals(function.getCallingConventionName())) return false;
        List<Parameter> explicit = new ArrayList<>();
        for (Parameter parameter : function.getParameters())
            if (!parameter.isAutoParameter()) explicit.add(parameter);
        if (explicit.size() != 1) return false;
        DataType type = explicit.get(0).getDataType();
        return type instanceof Pointer pointer && pointer.getDataType() != null &&
            MESSAGE_PATH.equals(pointer.getDataType().getPathName());
    }

    private boolean hasTag(Function function, String name) {
        for (FunctionTag tag : function.getTags())
            if (name.equals(tag.getName())) return true;
        return false;
    }

    private void updateGeneratedFunctionDefinition(FunctionDefinition existing,
            FunctionDefinitionDataType desired, String desiredHash) {
        String comment = existing.getComment();
        String currentHash = functionSignatureHash(existing);
        String storedHash = storedHash(comment, SIGNATURE_HASH_MARKER);

        if (storedHash == null) {
            // Older versions created these definitions without a safety marker. Adopt only an
            // equivalent definition; a differing legacy type may have been edited by hand.
            if (existing.isEquivalentSignature(desired))
                if (!text(existing.getComment()).equals(desired.getComment()))
                    existing.setComment(desired.getComment());
            return;
        }
        if (!storedHash.equals(currentHash)) return; // Preserves a manual signature edit.
        if (!currentHash.equals(desiredHash)) existing.replaceWith(desired);
        if (!text(existing.getComment()).equals(desired.getComment()))
            existing.setComment(desired.getComment());
    }

    private String generatedSignatureComment(Address rawAddress, Function target,
            String signatureHash) {
        return COMMENT_MARKER + " Generated vtable function type from entry " +
            addr(rawAddress) + "; signature target=" + addr(target.getEntryPoint()) + " " +
            target.getName(true) + SIGNATURE_HASH_MARKER + signatureHash;
    }

    private String functionSignatureHash(FunctionDefinition definition) {
        StringBuilder signature = new StringBuilder();
        signature.append("return=").append(definition.getReturnType().getPathName()).append('\n')
            .append("calling_convention=").append(definition.getCallingConventionName())
            .append('\n')
            .append("varargs=").append(definition.hasVarArgs()).append('\n')
            .append("noreturn=").append(definition.hasNoReturn()).append('\n');
        for (ParameterDefinition parameter : definition.getArguments()) {
            signature.append(parameter.getOrdinal()).append('|')
                .append(parameter.getName() == null ? "" : parameter.getName()).append('|')
                .append(parameter.getDataType().getPathName()).append('|')
                .append(parameter.getComment() == null ? "" : parameter.getComment())
                .append('\n');
        }
        return sha256(signature.toString());
    }

    private Structure findStructure(String name) {
        DataType direct = dataTypes.getDataType(RECOVERED, name);
        if (direct instanceof Structure) return (Structure)direct;
        direct = dataTypes.getDataType(VTABLES, name);
        if (direct instanceof Structure) return (Structure)direct;
        List<DataType> matches = new ArrayList<>();
        dataTypes.findDataTypes(name, matches);
        for (DataType match : matches) if (match instanceof Structure) return (Structure)match;
        return null;
    }

    private DataType findAnyDataType(String name) {
        List<DataType> matches = new ArrayList<>();
        dataTypes.findDataTypes(name, matches);
        return matches.isEmpty() ? null : matches.get(0);
    }

    private boolean tableBytesMatch(List<Map<String, String>> slots) {
        for (Map<String, String> slot : slots) {
            Address pointerAddress = address(slot.get("pointer_address"));
            Address expected = address(slot.get("raw_target_address"));
            Address actual = readPointer(pointerAddress);
            if (actual == null || !actual.equals(expected)) return false;
        }
        return true;
    }

    private String tableSymbolConflict(Address address, String proposedName) {
        Symbol primary = currentProgram.getSymbolTable().getPrimarySymbol(address);
        if (primary == null || primary.isDynamic() ||
                primary.getSource() != SourceType.USER_DEFINED ||
                primary.getName(true).equals(proposedName) ||
                primary.getName().equals(proposedName) || hasOwnedTableComment(address))
            return null;
        return "manual primary symbol is " + primary.getName(true) + "; preserving it";
    }

    private String tableDataConflict(Address start, int slotCount) {
        Data root = listing.getDefinedDataContaining(start);
        if (isOwnedTableData(root, addr(start))) return null;
        for (int index = 0; index < slotCount; index++) {
            Address address = start.add((long)index * pointerSize);
            Data data = listing.getDefinedDataContaining(address);
            if (data == null) continue;
            if (!data.getMinAddress().equals(address) || data.getLength() != pointerSize ||
                    !data.isPointer()) {
                return "non-pointer/manual data overlaps slot " + index + ": " +
                    data.getDataType().getPathName() + " at " + data.getMinAddress();
            }
        }
        return null;
    }

    private void installTableLabel(Address address, String name) throws Exception {
        SymbolTable symbols = currentProgram.getSymbolTable();
        Symbol oldPrimary = symbols.getPrimarySymbol(address);
        for (Symbol symbol : symbols.getSymbols(address)) {
            if (symbol.getName(true).equals(name) || symbol.getName().equals(name)) {
                if (!symbol.equals(oldPrimary)) symbol.setPrimary();
                deleteReplacedOwnedLabel(oldPrimary, symbol, address);
                return;
            }
        }
        Symbol symbol = symbols.createLabel(address, name, SourceType.USER_DEFINED);
        if (!symbol.equals(oldPrimary)) symbol.setPrimary();
        deleteReplacedOwnedLabel(oldPrimary, symbol, address);
    }

    private void deleteReplacedOwnedLabel(Symbol oldSymbol, Symbol newSymbol, Address address) {
        if (oldSymbol == null || oldSymbol.equals(newSymbol) || oldSymbol.isDynamic() ||
                oldSymbol.getSource() != SourceType.USER_DEFINED || !hasOwnedTableComment(address))
            return;
        oldSymbol.delete();
    }

    private boolean hasOwnedTableComment(Address address) {
        String comment = listing.getComment(CommentType.PLATE, address);
        return comment != null && comment.contains(COMMENT_MARKER);
    }

    private boolean isOwnedTableData(Data data, String addressText) {
        if (data == null || !(data.getDataType() instanceof Structure) ||
                !data.getMinAddress().toString().equalsIgnoreCase(addressText)) return false;
        String description = data.getDataType().getDescription();
        return description != null && description.contains(COMMENT_MARKER + " Generated from " +
            addressText.toUpperCase(Locale.ROOT));
    }

    private boolean safeToRemoveGeneratedType(DataType type) {
        if (!(type instanceof Structure structure)) return false;
        String description = structure.getDescription();
        if (description == null || !description.contains(COMMENT_MARKER)) return false;
        String storedHash = storedLayoutHash(description);
        return storedHash != null && storedHash.equals(structureLayoutHash(structure)) &&
            type.getParents().isEmpty();
    }

    private boolean safeToRename(Function function, String expected, String proposed) {
        if (function.getName(true).equals(proposed)) return true;
        if (function.getSymbol().getSource() != SourceType.USER_DEFINED) return true;
        return !expected.isBlank() && function.getName(true).equals(expected);
    }

    private void setQualifiedName(Function function, String qualified) throws Exception {
        int separator = qualified.lastIndexOf("::");
        if (separator < 0) {
            function.setName(qualified, SourceType.USER_DEFINED);
            return;
        }
        String owner = qualified.substring(0, separator);
        String method = qualified.substring(separator + 2);
        function.setParentNamespace(getOrCreateOwner(owner));
        function.setName(method, SourceType.USER_DEFINED);
    }

    private Namespace getOrCreateOwner(String owner) throws Exception {
        SymbolTable table = currentProgram.getSymbolTable();
        Namespace parent = currentProgram.getGlobalNamespace();
        String[] parts = owner.split("::");
        for (int index = 0; index < parts.length; index++) {
            String part = parts[index];
            Namespace existing = table.getNamespace(part, parent);
            if (existing == null) {
                existing = index == parts.length - 1 ?
                    table.createClass(parent, part, SourceType.USER_DEFINED) :
                    table.getOrCreateNameSpace(parent, part, SourceType.USER_DEFINED);
            }
            else if (index == parts.length - 1 && !(existing instanceof GhidraClass)) {
                existing = table.convertNamespaceToClass(existing);
            }
            parent = existing;
        }
        return parent;
    }

    private void addTableComment(Address address, Map<String, String> proposal) {
        String block = COMMENT_MARKER + " Recovered virtual function table.\nOwner: " +
            unt(proposal.get("owner")) + "\nSlots: " + proposal.get("slot_count") +
            "\nConfidence: " + proposal.get("confidence") + " (" +
            unt(proposal.get("reason")) + ")";
        String old = listing.getComment(CommentType.PLATE, address);
        String updated = old;
        if (old == null || old.isBlank()) updated = block;
        else if (!old.contains(COMMENT_MARKER))
            updated = old + "\n\n" + block;
        else if (old.startsWith(COMMENT_MARKER)) {
            int end = old.length();
            int newline = -1;
            for (int count = 0; count < 4; count++) {
                newline = old.indexOf('\n', newline + 1);
                if (newline < 0) break;
            }
            if (newline >= 0) end = newline;
            updated = block + old.substring(end);
        }
        if (!text(old).equals(text(updated)))
            listing.setComment(address, CommentType.PLATE, updated);
    }

    private void addFunctionComments(Function function, List<Map<String, String>> slots) {
        String old = function.getComment();
        StringBuilder updated = new StringBuilder(old == null ? "" : old);
        Set<String> markers = new TreeSet<>();
        for (Map<String, String> slot : slots)
            markers.add(COMMENT_MARKER + " Virtual slot " + slot.get("table_address") + "+" +
                slot.get("slot_offset"));
        for (String marker : markers) {
            if (updated.indexOf(marker) >= 0) continue;
            if (updated.length() > 0) updated.append("\n\n");
            updated.append(marker);
        }
        if (!text(old).equals(updated.toString()))
            function.setComment(updated.toString());
    }

    private Address readPointer(Address address) {
        try {
            long value = pointerSize == 4 ?
                currentProgram.getMemory().getInt(address) & 0xffffffffL :
                currentProgram.getMemory().getLong(address);
            return currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(value);
        }
        catch (MemoryAccessException | IllegalArgumentException exception) {
            return null;
        }
    }

    private Address address(String value) {
        Address address = currentProgram.getAddressFactory().getAddress(value);
        if (address == null) throw new IllegalArgumentException("Invalid address: " + value);
        return address;
    }

    private String fieldName(String proposed, int index) {
        int separator = proposed.lastIndexOf("::");
        String name = separator < 0 ? proposed : proposed.substring(separator + 2);
        if (isSynthetic(name)) name = String.format("slot_%02X", index * pointerSize);
        name = sanitize(name);
        return name.isBlank() ? String.format("slot_%02X", index * pointerSize) : name;
    }

    private boolean isSynthetic(String name) {
        if (name == null || name.isBlank()) return true;
        int separator = name.lastIndexOf("::");
        String leaf = separator < 0 ? name : name.substring(separator + 2);
        return leaf.startsWith("FUN_") || leaf.startsWith("LAB_") ||
            leaf.startsWith("SUB_") || leaf.startsWith("thunk_FUN_") ||
            leaf.matches("vfunc_[0-9A-Fa-f]+_FUN_.*");
    }

    private static String sanitize(String value) {
        String result = value.replaceAll("[^A-Za-z0-9_]", "_")
            .replaceAll("_+", "_");
        if (!result.isEmpty() && Character.isDigit(result.charAt(0))) result = "_" + result;
        return result;
    }

    private File inputFile() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException(
                "Path to vtable_proposals.tsv or its directory required");
        return askFile("Select reviewed vtable_proposals.tsv", "Apply");
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
        for (String name : names) {
            if (!tsv.header.contains(name))
                throw new IllegalArgumentException("Missing TSV column: " + name);
        }
    }

    private void writeReport(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("kind\taddress\tstatus\tname\tdetail\n");
            for (ReportRow row : report) {
                out.write(tsv(row.kind) + "\t" + tsv(row.address) + "\t" + tsv(row.status) +
                    "\t" + tsv(row.name) + "\t" +
                    tsv(row.detail == null ? "" : row.detail) + "\n");
            }
        }
    }

    private static boolean enabled(String value) {
        return "1".equals(value) || "true".equalsIgnoreCase(value) ||
            "yes".equalsIgnoreCase(value);
    }

    private static String addr(Address address) {
        return address == null ? "" : address.toString().toUpperCase(Locale.ROOT);
    }

    private static String tsv(String value) {
        return value.replace("\\", "\\\\").replace("\t", "\\t")
            .replace("\r", "\\r").replace("\n", "\\n");
    }

    private static String text(String value) { return value == null ? "" : value; }

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

    private static String message(Exception exception) {
        String value = exception.getMessage();
        return value == null || value.isBlank() ? exception.getClass().getSimpleName() : value;
    }

    private static class Tsv {
        final List<String> header;
        final List<Map<String, String>> rows;
        Tsv(List<String> header, List<Map<String, String>> rows) {
            this.header = header;
            this.rows = rows;
        }
    }

    private static class FunctionSelection {
        final Address address;
        final List<Map<String, String>> rows = new ArrayList<>();
        final List<Map<String, String>> renameRows = new ArrayList<>();
        Function function;
        boolean create, created, recognizedThunk;
        String error, fixupWarning;
        FunctionSelection(Address address) { this.address = address; }
    }

    private static class StructureResolution {
        final Structure structure;
        final String detail, error;
        final boolean updated;
        StructureResolution(Structure structure, String detail, String error) {
            this(structure, detail, error, false);
        }
        StructureResolution(Structure structure, String detail, String error, boolean updated) {
            this.structure = structure;
            this.detail = detail;
            this.error = error;
            this.updated = updated;
        }
        static StructureResolution error(String error) {
            return new StructureResolution(null, "", error);
        }
    }

    private static class ReportRow {
        final String kind, address, status, name, detail;
        ReportRow(String kind, String address, String status, String name, String detail) {
            this.kind = kind;
            this.address = address;
            this.status = status;
            this.name = name;
            this.detail = detail;
        }
    }
}
