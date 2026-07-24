// Apply object-factory registry proposals produced by STObjectFactoryAnalyzer.
// Creates exact registry function entries, installs the cdecl factory ABI, concrete result
// pointers where proven, STObjectTypeId, and the typed registry array.  Manual/stale work wins.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Apply Object Factories

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.security.MessageDigest;
import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Set;
import java.util.TreeSet;

import ghidra.app.cmd.disassemble.DisassembleCommand;
import ghidra.app.cmd.function.CreateFunctionCmd;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSet;
import ghidra.program.model.data.ArrayDataType;
import ghidra.program.model.data.CategoryPath;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeConflictHandler;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.Enum;
import ghidra.program.model.data.EnumDataType;
import ghidra.program.model.data.FunctionDefinition;
import ghidra.program.model.data.FunctionDefinitionDataType;
import ghidra.program.model.data.ParameterDefinition;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.PointerDataType;
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.StructureDataType;
import ghidra.program.model.data.VoidDataType;
import ghidra.program.model.listing.CommentType;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Function.FunctionUpdateType;
import ghidra.program.model.listing.FunctionTag;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.Listing;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.listing.ReturnParameterImpl;
import ghidra.program.model.listing.Variable;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.mem.MemoryBlock;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.Symbol;
import ghidra.program.model.symbol.SymbolTable;
import ghidra.program.model.util.CodeUnitInsertionException;
import ghidra.program.model.data.DataUtilities;

public class STObjectFactoryApplier extends GhidraScript {
    private static final CategoryPath ROOT =
        new CategoryPath("/SubmarineTitans/Recovered/ObjectFactories");
    private static final CategoryPath ENUMS =
        new CategoryPath("/SubmarineTitans/Recovered/Enums");
    private static final String MARKER = "[STObjectFactoryApplier]";
    private static final String ENUM_HASH_MARKER = "; generated_values_sha256=";
    private static final String STRUCT_HASH_MARKER = "; generated_layout_sha256=";
    private static final String FUNCTION_HASH_MARKER = "; generated_signature_sha256=";
    private static final String TAG = "RECOVERED_OBJECT_FACTORY";

    private DataTypeManager dataTypes;
    private Listing listing;
    private Memory memory;
    private SymbolTable symbols;
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
        File proposalFile = selected.isDirectory() ?
            new File(selected, "object_factory_proposals.tsv") : selected;
        if (!proposalFile.isFile())
            throw new IllegalArgumentException("Missing " + proposalFile);
        Path directory = proposalFile.getAbsoluteFile().getParentFile().toPath();
        Path registryPath = directory.resolve("object_factory_registry.tsv");
        Path consumersPath = directory.resolve("object_type_consumer_proposals.tsv");
        if (!Files.isRegularFile(registryPath))
            throw new IllegalArgumentException("Missing " + registryPath);

        Tsv factories = readTsv(proposalFile.toPath());
        requireColumns(factories, "create_apply", "signature_apply", "name_apply",
            "record_index", "record_address", "type_id", "enum_value_name",
            "raw_factory_address", "target_address", "entry_bytes", "current_name",
            "current_name_source", "current_signature", "current_signature_source",
            "proposed_name", "proposed_return_type", "owner", "confidence", "reason");
        Tsv registry = readTsv(registryPath);
        requireColumns(registry, "apply", "table_address", "sentinel_address", "record_count",
            "record_size", "enum_name", "record_type", "array_name", "evidence");
        Tsv consumers = Files.isRegularFile(consumersPath) ? readTsv(consumersPath) :
            new Tsv(List.of(), List.of());

        dataTypes = currentProgram.getDataTypeManager();
        listing = currentProgram.getListing();
        memory = currentProgram.getMemory();
        symbols = currentProgram.getSymbolTable();

        int transaction = currentProgram.startTransaction("Apply recovered object factories");
        boolean commit = false;
        try {
            Enum enumType = resolveEnum(factories);
            FunctionDefinition factoryDefinition = resolveFactoryDefinition();
            Structure entryType = enumType == null || factoryDefinition == null ? null :
                resolveEntryType(enumType, factoryDefinition);
            applyFactories(factories);
            if (enumType != null && !consumers.header.isEmpty())
                applyConsumers(consumers, enumType);
            if (enumType != null && entryType != null)
                applyRegistry(registry, factories, entryType);
            commit = true;
        }
        finally {
            currentProgram.endTransaction(transaction, commit);
        }

        Path reportPath = directory.resolve("object_factory_apply_report.tsv");
        writeReport(reportPath);
        println("Object factories: applied=" + count("applied") + ", created=" +
            count("created") + ", partial=" + count("partial") + ", unchanged=" +
            count("unchanged") + ", preserved=" + count("preserved") +
            ", conflicts=" + count("conflict") + ", disabled=" + count("disabled"));
        println("Apply report: " + reportPath.toAbsolutePath().normalize());
        if (count("created") > 0)
            println("New exact factory entries were created. Re-run STObjectFactoryAnalyzer and " +
                "this applier once more so their bodies can contribute class evidence.");
    }

    private Enum resolveEnum(Tsv factories) {
        try {
            EnumDataType desired = new EnumDataType(ENUMS, "STObjectTypeId", 4, dataTypes);
            desired.add("ST_OBJECT_TYPE_END", 0);
            for (Map<String, String> row : factories.rows)
                desired.add(row.get("enum_value_name"), Long.parseUnsignedLong(row.get("type_id")));
            String desiredHash = enumHash(desired);
            desired.setDescription(MARKER + " Values recovered from the central object factory " +
                "registry" + ENUM_HASH_MARKER + desiredHash);
            DataType current = dataTypes.getDataType(ENUMS, desired.getName());
            if (current == null) {
                Enum created = (Enum)dataTypes.resolve(desired,
                    DataTypeConflictHandler.KEEP_HANDLER);
                report.add(new ReportRow("enum", created.getPathName(), "created",
                    created.getName(), "created from " + factories.rows.size() + " records"));
                return created;
            }
            if (!(current instanceof Enum existing)) {
                report.add(new ReportRow("enum", current.getPathName(), "conflict",
                    desired.getName(), "existing type is not an enum"));
                return null;
            }
            if (existing.isEquivalent(desired)) {
                if (text(existing.getDescription()).contains(MARKER) &&
                        !text(existing.getDescription()).equals(desired.getDescription()))
                    existing.setDescription(desired.getDescription());
                report.add(new ReportRow("enum", existing.getPathName(), "unchanged",
                    existing.getName(), "equivalent enum already present"));
                return existing;
            }
            String description = text(existing.getDescription());
            String stored = storedHash(description, ENUM_HASH_MARKER);
            if (!description.contains(MARKER) || stored == null ||
                    !stored.equals(enumHash(existing))) {
                report.add(new ReportRow("enum", existing.getPathName(), "preserved",
                    existing.getName(), "manual or modified enum differs"));
                return null;
            }
            existing.replaceWith(desired);
            existing.setDescription(desired.getDescription());
            report.add(new ReportRow("enum", existing.getPathName(), "applied",
                existing.getName(), "updated generated registry values"));
            return existing;
        }
        catch (Exception exception) {
            report.add(new ReportRow("enum", "", "conflict", "STObjectTypeId",
                message(exception)));
            return null;
        }
    }

    private FunctionDefinition resolveFactoryDefinition() {
        try {
            FunctionDefinitionDataType desired = new FunctionDefinitionDataType(ROOT,
                "STObjectFactoryFn", dataTypes);
            desired.setCallingConvention("__cdecl");
            desired.setReturnType(new PointerDataType(VoidDataType.dataType,
                currentProgram.getDefaultPointerSize(), dataTypes));
            desired.setArguments(new ParameterDefinition[0]);
            String hash = functionHash(desired);
            desired.setComment(MARKER + " Exact registry ABI: void * __cdecl factory(void)" +
                FUNCTION_HASH_MARKER + hash);
            DataType current = dataTypes.getDataType(ROOT, desired.getName());
            if (current == null) {
                FunctionDefinition created = (FunctionDefinition)dataTypes.resolve(desired,
                    DataTypeConflictHandler.KEEP_HANDLER);
                report.add(new ReportRow("type", created.getPathName(), "created",
                    created.getName(), "factory function definition"));
                return created;
            }
            if (!(current instanceof FunctionDefinition existing)) {
                report.add(new ReportRow("type", current.getPathName(), "conflict",
                    desired.getName(), "existing type is not a function definition"));
                return null;
            }
            if (existing.isEquivalentSignature(desired)) {
                if (text(existing.getComment()).contains(MARKER) &&
                        !text(existing.getComment()).equals(desired.getComment()))
                    existing.setComment(desired.getComment());
                return existing;
            }
            String comment = text(existing.getComment());
            String stored = storedHash(comment, FUNCTION_HASH_MARKER);
            if (!comment.contains(MARKER) || stored == null ||
                    !stored.equals(functionHash(existing))) {
                report.add(new ReportRow("type", existing.getPathName(), "preserved",
                    existing.getName(), "manual or modified function definition differs"));
                return null;
            }
            existing.replaceWith(desired);
            existing.setComment(desired.getComment());
            report.add(new ReportRow("type", existing.getPathName(), "applied",
                existing.getName(), "updated generated factory signature"));
            return existing;
        }
        catch (Exception exception) {
            report.add(new ReportRow("type", "", "conflict", "STObjectFactoryFn",
                message(exception)));
            return null;
        }
    }

    private Structure resolveEntryType(Enum enumType, FunctionDefinition factoryDefinition) {
        try {
            StructureDataType desired = new StructureDataType(ROOT, "STObjectFactoryEntry", 0,
                dataTypes);
            desired.add(enumType, 4, "typeId", "Object discriminator used by CreateObject");
            DataType pointer = new PointerDataType(factoryDefinition,
                currentProgram.getDefaultPointerSize(), dataTypes);
            desired.add(pointer, currentProgram.getDefaultPointerSize(), "factory",
                "No-argument cdecl object factory");
            String hash = structureHash(desired);
            desired.setDescription(MARKER + " Central object registry record" +
                STRUCT_HASH_MARKER + hash);
            DataType current = dataTypes.getDataType(ROOT, desired.getName());
            if (current == null) {
                Structure created = (Structure)dataTypes.resolve(desired,
                    DataTypeConflictHandler.KEEP_HANDLER);
                report.add(new ReportRow("type", created.getPathName(), "created",
                    created.getName(), "8-byte registry record"));
                return created;
            }
            if (!(current instanceof Structure existing)) {
                report.add(new ReportRow("type", current.getPathName(), "conflict",
                    desired.getName(), "existing type is not a structure"));
                return null;
            }
            if (existing.isEquivalent(desired)) {
                if (text(existing.getDescription()).contains(MARKER) &&
                        !text(existing.getDescription()).equals(desired.getDescription()))
                    existing.setDescription(desired.getDescription());
                return existing;
            }
            String description = text(existing.getDescription());
            String stored = storedHash(description, STRUCT_HASH_MARKER);
            if (!description.contains(MARKER) || stored == null ||
                    !stored.equals(structureHash(existing))) {
                report.add(new ReportRow("type", existing.getPathName(), "preserved",
                    existing.getName(), "manual or modified structure differs"));
                return null;
            }
            existing.replaceWith(desired);
            existing.setDescription(desired.getDescription());
            report.add(new ReportRow("type", existing.getPathName(), "applied",
                existing.getName(), "updated generated registry record"));
            return existing;
        }
        catch (Exception exception) {
            report.add(new ReportRow("type", "", "conflict", "STObjectFactoryEntry",
                message(exception)));
            return null;
        }
    }

    private void applyFactories(Tsv factories) throws Exception {
        Set<Address> processed = new TreeSet<>();
        for (Map<String, String> row : factories.rows) {
            monitor.checkCancelled();
            boolean createApply = enabled(row.get("create_apply"));
            boolean signatureApply = enabled(row.get("signature_apply"));
            boolean nameApply = enabled(row.get("name_apply"));
            if (!createApply && !signatureApply && !nameApply) {
                report.add(new ReportRow("factory", row.get("target_address"), "disabled",
                    unt(row.get("proposed_name")), "all apply flags are 0"));
                continue;
            }
            Address target = address(row.get("target_address"));
            if (!processed.add(target)) continue;
            try {
                Function function = currentProgram.getFunctionManager().getFunctionAt(target);
                boolean created = false;
                if (function == null && createApply) {
                    String stale = validateEntryBytes(address(row.get("raw_factory_address")),
                        row.get("entry_bytes"));
                    if (stale != null) {
                        report.add(new ReportRow("factory", addr(target), "conflict",
                            unt(row.get("proposed_name")), stale));
                        continue;
                    }
                    function = createFunction(target);
                    created = function != null;
                    if (created) function.addTag(TAG);
                }
                if (function == null) {
                    report.add(new ReportRow("factory", addr(target), "conflict",
                        unt(row.get("proposed_name")), "no function at registry target"));
                    continue;
                }
                ApplyState state = applyFactory(function, row, signatureApply, nameApply);
                String status = created && !state.conflict ? "created" : state.status();
                report.add(new ReportRow("factory", addr(target), status,
                    unt(row.get("proposed_name")), String.join("; ", state.details)));
            }
            catch (Exception exception) {
                report.add(new ReportRow("factory", addr(target), "conflict",
                    unt(row.get("proposed_name")), message(exception)));
            }
        }
    }

    private ApplyState applyFactory(Function function, Map<String, String> row,
            boolean signatureApply, boolean nameApply) throws Exception {
        ApplyState state = new ApplyState();
        String initialName = function.getName(true);
        SourceType initialNameSource = function.getSymbol().getSource();
        String initialSignature = function.getSignature().getPrototypeString(true);
        SourceType initialSignatureSource = function.getSignatureSource();
        boolean owned = hasTag(function, TAG);

        if (signatureApply) {
            DataType returnType = proposedReturnType(unt(row.get("owner")), function);
            if (factorySignatureMatches(function, returnType)) state.details.add("signature=unchanged");
            else if ((initialSignatureSource == SourceType.USER_DEFINED ||
                    initialSignatureSource == SourceType.IMPORTED) && !owned) {
                state.preserved = true;
                state.details.add("signature=preserved(" + initialSignatureSource + ")");
            }
            else if (!owned && (!initialSignature.equals(unt(row.get("current_signature"))) ||
                    !initialSignatureSource.toString().equals(row.get("current_signature_source")))) {
                state.preserved = true;
                state.details.add("signature=preserved(stale baseline)");
            }
            else {
                function.updateFunction("__cdecl", new ReturnParameterImpl(returnType,
                    currentProgram), List.<Variable>of(),
                    FunctionUpdateType.DYNAMIC_STORAGE_FORMAL_PARAMS, true, SourceType.ANALYSIS);
                function.setVarArgs(false);
                function.setSignatureSource(SourceType.ANALYSIS);
                state.changed = true;
                state.details.add("signature=applied(" + returnType.getDisplayName() +
                    " __cdecl(void))");
            }
        }

        if (nameApply) {
            String proposed = unt(row.get("proposed_name"));
            if (function.getName().equals(proposed)) state.details.add("name=unchanged");
            else if ((initialNameSource == SourceType.USER_DEFINED ||
                    initialNameSource == SourceType.IMPORTED) && !owned) {
                state.preserved = true;
                state.details.add("name=preserved(" + initialNameSource + ")");
            }
            else if (!owned && (!initialName.equals(unt(row.get("current_name"))) ||
                    !initialNameSource.toString().equals(row.get("current_name_source")))) {
                state.preserved = true;
                state.details.add("name=preserved(stale baseline)");
            }
            else {
                try {
                    function.setName(proposed, SourceType.ANALYSIS);
                    state.changed = true;
                    state.details.add("name=applied(" + proposed + ")");
                }
                catch (Exception exception) {
                    state.conflict = true;
                    state.details.add("name=conflict(" + message(exception) + ")");
                }
            }
        }
        if (state.changed) {
            function.addTag(TAG);
            addFunctionComment(function, row);
        }
        return state;
    }

    private DataType proposedReturnType(String owner, Function function) {
        if (!owner.isBlank()) {
            Structure structure = findClassType(owner);
            if (structure != null) return new PointerDataType(structure,
                currentProgram.getDefaultPointerSize(), dataTypes);
        }
        DataType current = function.getReturnType();
        if (current instanceof Pointer pointer) {
            String base = pointer.getDataType().getName().toLowerCase(Locale.ROOT);
            if (!base.equals("void") && !base.startsWith("undefined")) return current;
        }
        return new PointerDataType(VoidDataType.dataType,
            currentProgram.getDefaultPointerSize(), dataTypes);
    }

    private Structure findClassType(String owner) {
        String name = leaf(owner);
        DataType direct = dataTypes.getDataType("/" + name);
        if (direct instanceof Structure structure && !vtableType(structure)) return structure;
        List<DataType> matches = new ArrayList<>();
        dataTypes.findDataTypes(name, matches);
        for (DataType match : matches)
            if (match instanceof Structure structure && !vtableType(structure)) return structure;
        return null;
    }

    private boolean vtableType(Structure structure) {
        return structure.getPathName().contains("/VTables/") ||
            structure.getName().endsWith("VTable");
    }

    private boolean factorySignatureMatches(Function function, DataType returnType) {
        if (!"__cdecl".equals(function.getCallingConventionName()) || function.hasVarArgs())
            return false;
        for (Parameter parameter : function.getParameters())
            if (!parameter.isAutoParameter()) return false;
        return function.getReturnType().isEquivalent(returnType);
    }

    private Function createFunction(Address entry) throws Exception {
        Function containing = currentProgram.getFunctionManager().getFunctionContaining(entry);
        if (containing != null)
            throw new IllegalStateException("entry is inside " + containing.getName(true));
        Instruction instruction = ensureInstruction(entry);
        if (instruction == null) throw new IllegalStateException("could not disassemble entry");
        AddressSet body = new AddressSet(instruction.getMinAddress(), instruction.getMaxAddress());
        CreateFunctionCmd command = new CreateFunctionCmd(null, entry, body, SourceType.ANALYSIS);
        if (!command.applyTo(currentProgram, monitor))
            throw new IllegalStateException(command.getStatusMsg());
        Function function = currentProgram.getFunctionManager().getFunctionAt(entry);
        if (function == null) throw new IllegalStateException("function creation returned null");
        try { CreateFunctionCmd.fixupFunctionBody(currentProgram, function, monitor); }
        catch (Exception exception) {
            function.setComment(MARKER + " Body fixup warning: " + message(exception));
        }
        return function;
    }

    private Instruction ensureInstruction(Address entry) {
        Instruction instruction = listing.getInstructionAt(entry);
        if (instruction != null) return instruction;
        Data data = listing.getDefinedDataContaining(entry);
        if (data != null) return null;
        MemoryBlock block = memory.getBlock(entry);
        if (block == null || !block.isExecute() || !block.isInitialized()) return null;
        DisassembleCommand command = new DisassembleCommand(entry,
            new AddressSet(block.getStart(), block.getEnd()), true);
        command.enableCodeAnalysis(false);
        return command.applyTo(currentProgram, monitor) ? listing.getInstructionAt(entry) : null;
    }

    private String validateEntryBytes(Address entry, String expected) {
        try {
            if (expected == null || expected.isBlank()) return "missing analyzed byte fingerprint";
            byte[] bytes = new byte[expected.length() / 2];
            if (memory.getBytes(entry, bytes) != bytes.length) return "cannot read live entry bytes";
            StringBuilder live = new StringBuilder();
            for (byte value : bytes) live.append(String.format("%02X", value & 0xff));
            return live.toString().equalsIgnoreCase(expected) ? null :
                "entry bytes changed since analysis";
        }
        catch (Exception exception) { return message(exception); }
    }

    private void applyConsumers(Tsv consumers, Enum enumType) throws Exception {
        requireColumns(consumers, "apply", "kind", "function_address", "expected_function",
            "expected_signature", "expected_signature_source", "target_ordinal", "target_name",
            "expected_type", "expected_source", "proposed_type", "evidence");
        for (Map<String, String> row : consumers.rows) {
            monitor.checkCancelled();
            if (!enabled(row.get("apply"))) {
                report.add(new ReportRow("consumer", row.get("function_address"), "disabled",
                    row.get("target_name"), "apply=0"));
                continue;
            }
            try {
                Function function = currentProgram.getFunctionManager().getFunctionAt(
                    address(row.get("function_address")));
                if (function == null) throw new IllegalStateException("function is missing");
                String status;
                String detail;
                if ("parameter".equals(row.get("kind"))) {
                    Parameter parameter = explicitParameter(function,
                        Integer.parseInt(row.get("target_ordinal")), unt(row.get("target_name")));
                    if (parameter == null) throw new IllegalStateException("parameter baseline missing");
                    if (parameter.getDataType().getPathName().equals(enumType.getPathName())) {
                        status = "unchanged"; detail = "parameter already uses enum";
                    }
                    else if (!parameter.getDataType().getPathName().equals(
                            unt(row.get("expected_type"))) ||
                            !parameter.getSource().toString().equals(row.get("expected_source")) ||
                            parameter.getSource() == SourceType.USER_DEFINED ||
                            parameter.getSource() == SourceType.IMPORTED) {
                        status = "preserved"; detail = "manual/stale parameter type";
                    }
                    else {
                        parameter.setDataType(enumType, SourceType.ANALYSIS);
                        function.addTag(TAG);
                        status = "applied"; detail = "parameter -> " + enumType.getPathName();
                    }
                }
                else if ("return".equals(row.get("kind"))) {
                    if (function.getReturnType().getPathName().equals(enumType.getPathName())) {
                        status = "unchanged"; detail = "return already uses enum";
                    }
                    else if (!function.getReturnType().getPathName().equals(
                            unt(row.get("expected_type"))) ||
                            !function.getSignatureSource().toString().equals(row.get("expected_source")) ||
                            function.getSignatureSource() == SourceType.USER_DEFINED ||
                            function.getSignatureSource() == SourceType.IMPORTED) {
                        status = "preserved"; detail = "manual/stale return type";
                    }
                    else {
                        function.setReturnType(enumType, SourceType.ANALYSIS);
                        function.addTag(TAG);
                        status = "applied"; detail = "return -> " + enumType.getPathName();
                    }
                }
                else { status = "conflict"; detail = "unknown target kind"; }
                report.add(new ReportRow("consumer", row.get("function_address"), status,
                    row.get("target_name"), detail));
            }
            catch (Exception exception) {
                report.add(new ReportRow("consumer", row.get("function_address"), "conflict",
                    row.get("target_name"), message(exception)));
            }
        }
    }

    private Parameter explicitParameter(Function function, int ordinal, String name) {
        for (Parameter parameter : function.getParameters())
            if (!parameter.isAutoParameter() && parameter.getOrdinal() == ordinal &&
                    parameter.getName().equals(name)) return parameter;
        return null;
    }

    private void applyRegistry(Tsv registry, Tsv factories, Structure entryType) {
        for (Map<String, String> row : registry.rows) {
            if (!enabled(row.get("apply"))) {
                report.add(new ReportRow("registry", row.get("table_address"), "disabled",
                    row.get("array_name"), "apply=0"));
                continue;
            }
            try {
                Address base = address(row.get("table_address"));
                int count = Integer.parseInt(row.get("record_count"));
                if (count != factories.rows.size())
                    throw new IllegalStateException("record count differs from factory TSV");
                String stale = validateRegistryBytes(base, factories);
                if (stale != null) throw new IllegalStateException(stale);
                ArrayDataType array = new ArrayDataType(entryType, count + 1,
                    entryType.getLength(), dataTypes);
                Data current = listing.getDefinedDataAt(base);
                boolean equivalent = current != null && current.getLength() == array.getLength() &&
                    current.getDataType().isEquivalent(array);
                if (!equivalent) {
                    String conflict = registryRangeConflict(base, array.getLength());
                    if (conflict != null) {
                        report.add(new ReportRow("registry", addr(base), "preserved",
                            row.get("array_name"), conflict));
                        continue;
                    }
                    DataUtilities.createData(currentProgram, base, array, array.getLength(),
                        DataUtilities.ClearDataMode.CLEAR_ALL_DEFAULT_CONFLICT_DATA);
                }
                Symbol primary = symbols.getPrimarySymbol(base);
                if (primary == null) primary = symbols.createLabel(base, row.get("array_name"),
                    SourceType.ANALYSIS);
                else if (!primary.getName().equals(row.get("array_name")) &&
                        primary.getSource() != SourceType.USER_DEFINED &&
                        primary.getSource() != SourceType.IMPORTED)
                    primary.setName(row.get("array_name"), SourceType.ANALYSIS);
                addRegistryComment(base, row, count);
                report.add(new ReportRow("registry", addr(base),
                    equivalent ? "unchanged" : "applied", row.get("array_name"),
                    (count + 1) + " typed records including sentinel"));
            }
            catch (Exception exception) {
                report.add(new ReportRow("registry", row.get("table_address"), "conflict",
                    row.get("array_name"), message(exception)));
            }
        }
    }

    private String validateRegistryBytes(Address base, Tsv factories) {
        try {
            for (Map<String, String> row : factories.rows) {
                int index = Integer.parseInt(row.get("record_index"));
                Address record = base.add((long)index * 8);
                long id = Integer.toUnsignedLong(memory.getInt(record));
                long pointer = Integer.toUnsignedLong(memory.getInt(record.add(4)));
                if (id != Long.parseUnsignedLong(row.get("type_id")) ||
                        pointer != address(row.get("raw_factory_address")).getOffset())
                    return "live registry record " + index + " differs from proposal";
            }
            Address sentinel = base.add((long)factories.rows.size() * 8);
            if (memory.getInt(sentinel) != 0 || memory.getInt(sentinel.add(4)) != 0)
                return "registry sentinel is no longer zero";
            return null;
        }
        catch (Exception exception) { return message(exception); }
    }

    private String registryRangeConflict(Address base, int length) {
        for (int offset = 0; offset < length; offset++) {
            Address address = base.add(offset);
            if (!memory.contains(address) || listing.getInstructionContaining(address) != null)
                return "range is not entirely non-code memory";
            Symbol symbol = symbols.getPrimarySymbol(address);
            if (symbol != null && offset != 0 &&
                    (symbol.getSource() == SourceType.USER_DEFINED ||
                     symbol.getSource() == SourceType.IMPORTED))
                return "manual interior symbol at " + addr(address);
        }
        Symbol primary = symbols.getPrimarySymbol(base);
        if (primary != null && !primary.getName().equals("g_objectFactoryRegistry") &&
                (primary.getSource() == SourceType.USER_DEFINED ||
                 primary.getSource() == SourceType.IMPORTED))
            return "manual primary symbol " + primary.getName();
        return null;
    }

    private void addFunctionComment(Function function, Map<String, String> row) {
        String block = MARKER + " Central object factory for " + row.get("type_id_hex") +
            " (" + row.get("enum_value_name") + ").\nEvidence: " + unt(row.get("reason"));
        String old = function.getComment();
        if (old == null || old.isBlank()) function.setComment(block);
        else if (!old.contains(MARKER)) function.setComment(old + "\n\n" + block);
    }

    private void addRegistryComment(Address base, Map<String, String> row, int count) {
        String block = MARKER + " " + count + " object factories plus zero sentinel.\n" +
            unt(row.get("evidence"));
        String old = listing.getComment(CommentType.PLATE, base);
        if (old == null || old.isBlank()) listing.setComment(base, CommentType.PLATE, block);
        else if (!old.contains(MARKER))
            listing.setComment(base, CommentType.PLATE, old + "\n\n" + block);
    }

    private boolean hasTag(Function function, String name) {
        for (FunctionTag tag : function.getTags()) if (name.equals(tag.getName())) return true;
        return false;
    }

    private String enumHash(Enum type) {
        StringBuilder value = new StringBuilder("length=").append(type.getLength()).append('\n');
        String[] names = type.getNames();
        java.util.Arrays.sort(names);
        for (String name : names) value.append(name).append('=').append(type.getValue(name))
            .append('\n');
        return sha256(value.toString());
    }

    private String structureHash(Structure structure) {
        StringBuilder value = new StringBuilder("length=").append(structure.getLength()).append('\n');
        for (ghidra.program.model.data.DataTypeComponent component :
                structure.getDefinedComponents())
            value.append(component.getOffset()).append('|').append(component.getLength()).append('|')
                .append(component.getDataType().getPathName()).append('|')
                .append(text(component.getFieldName())).append('|')
                .append(text(component.getComment())).append('\n');
        return sha256(value.toString());
    }

    private String functionHash(FunctionDefinition function) {
        StringBuilder value = new StringBuilder(text(function.getCallingConventionName())).append('|')
            .append(function.getReturnType().getPathName()).append('|')
            .append(function.hasVarArgs()).append('\n');
        for (ParameterDefinition parameter : function.getArguments())
            value.append(parameter.getName()).append('|')
                .append(parameter.getDataType().getPathName()).append('\n');
        return sha256(value.toString());
    }

    private String sha256(String value) {
        try {
            byte[] digest = MessageDigest.getInstance("SHA-256")
                .digest(value.getBytes(StandardCharsets.UTF_8));
            StringBuilder result = new StringBuilder();
            for (byte item : digest) result.append(String.format("%02x", item & 0xff));
            return result.toString();
        }
        catch (Exception exception) { throw new IllegalStateException(exception); }
    }

    private String storedHash(String value, String marker) {
        int index = value.indexOf(marker);
        if (index < 0) return null;
        String hash = value.substring(index + marker.length()).trim();
        int end = hash.indexOf(' ');
        return end < 0 ? hash : hash.substring(0, end);
    }

    private File inputFile() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException("Path to object_factory_proposals.tsv is required");
        return askFile("Select object_factory_proposals.tsv (or its directory)",
            "Apply object factories");
    }

    private Tsv readTsv(Path path) throws Exception {
        List<String> lines = Files.readAllLines(path, StandardCharsets.UTF_8);
        if (lines.isEmpty()) throw new IllegalArgumentException("Empty TSV: " + path);
        String[] header = lines.get(0).split("\t", -1);
        List<Map<String, String>> rows = new ArrayList<>();
        for (int line = 1; line < lines.size(); line++) {
            if (lines.get(line).isBlank()) continue;
            String[] values = lines.get(line).split("\t", -1);
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

    private void requireColumns(Tsv tsv, String... names) {
        for (String name : names)
            if (!tsv.header.contains(name))
                throw new IllegalArgumentException("Missing TSV column: " + name);
    }

    private void writeReport(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("kind\taddress\tstatus\tname\tdetail\n");
            for (ReportRow row : report) out.write(tsv(row.kind) + "\t" + tsv(row.address) +
                "\t" + row.status + "\t" + tsv(row.name) + "\t" + tsv(row.detail) + "\n");
        }
    }

    private long count(String status) {
        return report.stream().filter(row -> row.status.equals(status)).count();
    }

    private Address address(String value) {
        Address result = currentProgram.getAddressFactory().getAddress(value);
        if (result == null) throw new IllegalArgumentException("Invalid address: " + value);
        return result;
    }

    private static String leaf(String owner) {
        int index = owner.lastIndexOf("::");
        return index < 0 ? owner : owner.substring(index + 2);
    }

    private static boolean enabled(String value) {
        return "1".equals(value) || "true".equalsIgnoreCase(value) ||
            "yes".equalsIgnoreCase(value);
    }

    private static String addr(Address address) {
        return address == null ? "" : address.toString().toUpperCase(Locale.ROOT);
    }

    private static String text(String value) { return value == null ? "" : value; }

    private static String tsv(String value) {
        return text(value).replace("\\", "\\\\").replace("\t", "\\t")
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

    private static String message(Throwable throwable) {
        String value = throwable.getMessage();
        return value == null || value.isBlank() ? throwable.getClass().getSimpleName() : value;
    }

    private static class Tsv {
        final List<String> header;
        final List<Map<String, String>> rows;
        Tsv(List<String> header, List<Map<String, String>> rows) {
            this.header = header; this.rows = rows;
        }
    }

    private static class ApplyState {
        boolean changed, preserved, conflict;
        final List<String> details = new ArrayList<>();
        String status() {
            if (changed && (preserved || conflict)) return "partial";
            if (changed) return "applied";
            if (conflict) return "conflict";
            if (preserved) return "preserved";
            return "unchanged";
        }
    }

    private record ReportRow(String kind, String address, String status, String name,
        String detail) { }
}
