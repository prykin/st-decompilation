// Export a Ghidra program as a compact, address-stable corpus for LLM-assisted decompilation.
// @author OpenAI
// @category SubmarineTitans.Export
// @keybinding
// @menupath Tools.Submarine Titans.Export LLM Corpus
// @toolbar

import java.io.BufferedWriter;
import java.io.File;
import java.io.IOException;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.StandardCopyOption;
import java.security.MessageDigest;
import java.time.Instant;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Comparator;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Set;
import java.util.TreeSet;
import java.util.stream.Stream;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressIterator;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.listing.Bookmark;
import ghidra.program.model.listing.BookmarkManager;
import ghidra.program.model.listing.CodeUnitIterator;
import ghidra.program.model.listing.CommentType;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Listing;
import ghidra.program.model.listing.Variable;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.mem.MemoryBlock;
import ghidra.program.model.symbol.ExternalLocation;
import ghidra.program.model.symbol.ExternalManager;
import ghidra.program.model.symbol.Namespace;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;
import ghidra.program.model.symbol.ReferenceManager;
import ghidra.program.model.symbol.Symbol;
import ghidra.program.model.symbol.SymbolIterator;
import ghidra.program.model.symbol.SymbolTable;
import ghidra.program.util.DefinedStringIterator;

public class STDecompExport extends GhidraScript {
    private static final int DECOMPILE_TIMEOUT_SECONDS = 120;
    private static final int MAX_FILENAME_COMPONENT = 96;
    private Path programRoot;
    private Path functionsRoot;
    private Listing listing;
    private ReferenceManager references;
    private SymbolTable symbols;
    private DecompInterface decompiler;
    private int programFunctionCount;
    private int exportedFunctionCount;
    private int externalFunctionCount;
    private int libraryFunctionCount;
    private int thunkFunctionCount;
    private int bodyFunctionCount;

    @Override
    protected void run() throws Exception {
        if (currentProgram == null) {
            printerr("Open a program before running STDecompExport.");
            return;
        }

        String[] args = getScriptArgs();
        File outputRoot;
        if (args.length > 0 && !args[0].isBlank()) {
            outputRoot = new File(args[0]);
        }
        else if (isRunningHeadless()) {
            throw new IllegalArgumentException("Headless use requires an output directory argument");
        }
        else {
            outputRoot = askDirectory("Select corpus output directory", "Export");
        }

        listing = currentProgram.getListing();
        references = currentProgram.getReferenceManager();
        symbols = currentProgram.getSymbolTable();
        programRoot = outputRoot.toPath().toAbsolutePath().normalize()
            .resolve(safeFileName(currentProgram.getName()));
        functionsRoot = programRoot.resolve("functions");
        Files.createDirectories(functionsRoot);

        decompiler = new DecompInterface();
        decompiler.toggleCCode(true);
        decompiler.toggleSyntaxTree(true);
        if (!decompiler.openProgram(currentProgram)) {
            throw new IOException("Decompiler could not open " + currentProgram.getName());
        }

        try {
            println("Exporting " + currentProgram.getName() + " to " + programRoot);
            exportProgram();
            exportMemoryMap();
            exportImports();
            exportExports();
            exportStrings();
            exportGlobals();
            exportSymbols();
            exportDataTypes();
            exportBookmarks();
            exportFunctions();
            exportManifest();
            println("STDecompExport complete: " + programRoot);
        }
        finally {
            decompiler.dispose();
        }
    }

    private void exportProgram() throws IOException {
        writeJson(programRoot.resolve("program.json"), jsonObject(
            field("schema_version", "1"),
            field("program", currentProgram.getName()),
            field("executable_path", currentProgram.getExecutablePath()),
            field("executable_format", currentProgram.getExecutableFormat()),
            field("language_id", currentProgram.getLanguageID().toString()),
            field("compiler_spec_id", currentProgram.getCompilerSpec().getCompilerSpecID().toString()),
            field("image_base", addr(currentProgram.getImageBase())),
            rawField("pointer_size", Integer.toString(currentProgram.getDefaultPointerSize())),
            field("md5", nullToEmpty(currentProgram.getExecutableMD5())),
            field("sha256", nullToEmpty(currentProgram.getExecutableSHA256()))
        ));
    }

    private void exportMemoryMap() throws IOException {
        List<String> rows = new ArrayList<>();
        Memory memory = currentProgram.getMemory();
        for (MemoryBlock block : memory.getBlocks()) {
            checkCancelled();
            rows.add(jsonObject(
                field("name", block.getName()),
                field("start", addr(block.getStart())),
                field("end", addr(block.getEnd())),
                rawField("size", Long.toString(block.getSize())),
                rawField("read", Boolean.toString(block.isRead())),
                rawField("write", Boolean.toString(block.isWrite())),
                rawField("execute", Boolean.toString(block.isExecute())),
                rawField("initialized", Boolean.toString(block.isInitialized())),
                rawField("volatile", Boolean.toString(block.isVolatile())),
                field("source", nullToEmpty(block.getSourceName()))
            ));
        }
        writeJsonArray(programRoot.resolve("memory_map.json"), rows);
    }

    private void exportImports() throws IOException {
        List<String> rows = new ArrayList<>();
        ExternalManager externalManager = currentProgram.getExternalManager();
        for (String library : externalManager.getExternalLibraryNames()) {
            checkCancelled();
            Iterator<ExternalLocation> locations = externalManager.getExternalLocations(library);
            while (locations.hasNext()) {
                ExternalLocation location = locations.next();
                Symbol symbol = location.getSymbol();
                rows.add(jsonObject(
                    field("library", library),
                    field("name", location.getLabel()),
                    field("address", addr(location.getAddress())),
                    field("original_imported_name", nullToEmpty(location.getOriginalImportedName())),
                    rawField("function", Boolean.toString(location.isFunction())),
                    field("source", symbol == null ? "" : symbol.getSource().toString())
                ));
            }
        }
        rows.sort(Comparator.naturalOrder());
        writeJsonArray(programRoot.resolve("imports.json"), rows);
    }

    private void exportExports() throws IOException {
        List<String> rows = new ArrayList<>();
        AddressIterator iterator = symbols.getExternalEntryPointIterator();
        while (iterator.hasNext()) {
            checkCancelled();
            Address address = iterator.next();
            Symbol symbol = symbols.getPrimarySymbol(address);
            rows.add(jsonObject(
                field("address", addr(address)),
                field("name", symbol == null ? "" : symbol.getName(true)),
                field("source", symbol == null ? "" : symbol.getSource().toString())
            ));
        }
        writeJsonArray(programRoot.resolve("exports.json"), rows);
    }

    private void exportStrings() throws IOException {
        Path path = programRoot.resolve("strings.jsonl");
        atomicWrite(path, writer -> {
            for (Data data : DefinedStringIterator.forProgram(currentProgram)) {
                checkCancelled();
                List<String> from = referenceSources(data.getMinAddress());
                writer.write(jsonObject(
                    field("address", addr(data.getMinAddress())),
                    field("type", data.getDataType().getDisplayName()),
                    rawField("length", Integer.toString(data.getLength())),
                    field("value", data.getDefaultValueRepresentation()),
                    rawField("referenced_from", jsonStringArray(from))
                ));
                writer.newLine();
            }
        });
    }

    private void exportSymbols() throws IOException {
        Path path = programRoot.resolve("symbols.jsonl");
        atomicWrite(path, writer -> {
            SymbolIterator iterator = symbols.getAllSymbols(true);
            while (iterator.hasNext()) {
                checkCancelled();
                Symbol symbol = iterator.next();
                writer.write(jsonObject(
                    field("address", addr(symbol.getAddress())),
                    field("name", symbol.getName()),
                    field("qualified_name", symbol.getName(true)),
                    field("type", symbol.getSymbolType().toString()),
                    field("source", symbol.getSource().toString()),
                    field("namespace", namespaceName(symbol.getParentNamespace())),
                    rawField("primary", Boolean.toString(symbol.isPrimary())),
                    rawField("external", Boolean.toString(symbol.isExternal())),
                    rawField("pinned", Boolean.toString(symbol.isPinned()))
                ));
                writer.newLine();
            }
        });
    }

    private void exportGlobals() throws IOException {
        Path path = programRoot.resolve("globals.jsonl");
        atomicWrite(path, writer -> {
            for (Data data : listing.getDefinedData(true)) {
                checkCancelled();
                if (data.hasStringValue()) {
                    continue;
                }
                Symbol symbol = symbols.getPrimarySymbol(data.getMinAddress());
                writer.write(jsonObject(
                    field("address", addr(data.getMinAddress())),
                    field("name", symbol == null ? data.getPathName() : symbol.getName(true)),
                    field("type", data.getDataType().getDisplayName()),
                    rawField("length", Integer.toString(data.getLength())),
                    field("value", data.getDefaultValueRepresentation()),
                    rawField("referenced_from", jsonStringArray(referenceSources(data.getMinAddress())))
                ));
                writer.newLine();
            }
        });
    }

    private void exportDataTypes() throws IOException {
        DataTypeManager manager = currentProgram.getDataTypeManager();
        Path path = programRoot.resolve("types.jsonl");
        atomicWrite(path, writer -> {
            Iterator<DataType> iterator = manager.getAllDataTypes();
            while (iterator.hasNext()) {
                checkCancelled();
                DataType type = iterator.next();
                writer.write(jsonObject(
                    field("path", type.getPathName()),
                    field("name", type.getName()),
                    field("display_name", type.getDisplayName()),
                    field("class", type.getClass().getSimpleName()),
                    rawField("length", Integer.toString(type.getLength())),
                    field("description", nullToEmpty(type.getDescription())),
                    rawField("detail", dataTypeDetailJson(type))
                ));
                writer.newLine();
            }
        });
    }

    private void exportBookmarks() throws IOException {
        List<String> rows = new ArrayList<>();
        BookmarkManager manager = currentProgram.getBookmarkManager();
        Iterator<Bookmark> iterator = manager.getBookmarksIterator();
        while (iterator.hasNext()) {
            checkCancelled();
            Bookmark bookmark = iterator.next();
            rows.add(jsonObject(
                field("address", addr(bookmark.getAddress())),
                field("type", bookmark.getTypeString()),
                field("category", bookmark.getCategory()),
                field("comment", bookmark.getComment())
            ));
        }
        writeJsonArray(programRoot.resolve("bookmarks.json"), rows);
    }

    private void exportFunctions() throws Exception {
        List<String> indexRows = new ArrayList<>();
        List<String> libraryRows = new ArrayList<>();
        List<String> thunkRows = new ArrayList<>();
        List<String> graphRows = new ArrayList<>();
        programFunctionCount = currentProgram.getFunctionManager().getFunctionCount();
        exportedFunctionCount = 0;
        FunctionIterator counter = currentProgram.getFunctionManager().getFunctions(true);
        while (counter.hasNext()) {
            counter.next();
            exportedFunctionCount++;
        }
        externalFunctionCount = Math.max(0, programFunctionCount - exportedFunctionCount);
        libraryFunctionCount = 0;
        thunkFunctionCount = 0;
        bodyFunctionCount = 0;
        FunctionIterator iterator = currentProgram.getFunctionManager().getFunctions(true);
        int total = exportedFunctionCount;
        int number = 0;
        int reused = 0;
        Set<String> liveFunctionIds = new TreeSet<>();

        while (iterator.hasNext()) {
            checkCancelled();
            Function function = iterator.next();
            number++;
            monitor.setMessage("Exporting function " + number + "/" + total + ": " + function.getName());
            monitor.setMaximum(total);
            monitor.setProgress(number);

            String id = addr(function.getEntryPoint());
            liveFunctionIds.add(id);
            Path dir = functionsRoot.resolve(id);
            Files.createDirectories(dir);

            List<String> tags = new ArrayList<>();
            function.getTags().forEach(tag -> tags.add(tag.getName()));
            tags.sort(Comparator.naturalOrder());
            boolean library = tags.contains("LIBRARY");
            boolean thunk = function.isThunk();
            Function thunkTarget = thunk ? function.getThunkedFunction(true) : null;
            boolean bodyExported = !library && !thunk;
            if (library) libraryFunctionCount++;
            if (thunk) thunkFunctionCount++;
            if (bodyExported) bodyFunctionCount++;
            if (!bodyExported) {
                Files.deleteIfExists(dir.resolve("decomp.c"));
                Files.deleteIfExists(dir.resolve("listing.asm"));
            }

            Set<Function> callingFunctions = function.getCallingFunctions(monitor);
            Set<Function> calledFunctions = new HashSet<>(function.getCalledFunctions(monitor));
            if (thunkTarget != null && !thunkTarget.equals(function)) calledFunctions.add(thunkTarget);
            List<String> callers = functionSet(callingFunctions);
            List<String> callees = functionSet(calledFunctions);
            List<String> stringsUsed = new ArrayList<>();
            List<String> globalsUsed = new ArrayList<>();
            collectReferencedData(function, stringsUsed, globalsUsed);
            List<String> comments = collectComments(function);
            String fingerprint = functionFingerprint(function, tags, callers, callees,
                stringsUsed, globalsUsed, comments, calledFunctions);
            Path fingerprintPath = dir.resolve("fingerprint.sha256");
            Path metaPath = dir.resolve("meta.json");
            String storedFingerprint = Files.exists(fingerprintPath) ?
                Files.readString(fingerprintPath, StandardCharsets.UTF_8).trim() : "";
            boolean reusable = Files.exists(metaPath) && fingerprint.equals(storedFingerprint) &&
                (!bodyExported ||
                    (Files.exists(dir.resolve("decomp.c")) && Files.exists(dir.resolve("listing.asm"))));

            if (reusable) {
                String meta = Files.readString(metaPath, StandardCharsets.UTF_8).trim();
                indexRows.add(meta);
                if (library) libraryRows.add(meta);
                if (thunk) thunkRows.add(meta);
                for (String callee : callees) {
                    graphRows.add(jsonObject(field("from", functionId(function)), field("to", callee)));
                }
                reused++;
                continue;
            }

            String status;
            if (library) {
                status = "skipped_library";
            }
            else if (thunk) {
                status = "skipped_thunk";
            }
            else {
                DecompileResults result = decompiler.decompileFunction(
                    function, DECOMPILE_TIMEOUT_SECONDS, monitor);
                String cCode = "";
                if (result != null && result.decompileCompleted() && result.getDecompiledFunction() != null) {
                    status = "ok";
                    cCode = result.getDecompiledFunction().getC();
                }
                else {
                    status = result == null ? "no_result" : nullToEmpty(result.getErrorMessage());
                }
                writeText(dir.resolve("decomp.c"), cCode);
                writeFunctionListing(function, dir.resolve("listing.asm"));
            }

            String meta = jsonObject(
                field("id", id),
                field("program", currentProgram.getName()),
                field("address", addr(function.getEntryPoint())),
                field("name", function.getName()),
                field("qualified_name", function.getName(true)),
                field("namespace", namespaceName(function.getParentNamespace())),
                field("source", function.getSymbol().getSource().toString()),
                rawField("size", Long.toString(function.getBody().getNumAddresses())),
                field("signature", function.getSignature().getPrototypeString(true)),
                field("calling_convention", nullToEmpty(function.getCallingConventionName())),
                rawField("parameter_count", Integer.toString(function.getParameterCount())),
                rawField("local_variable_count", Integer.toString(function.getLocalVariables().length)),
                rawField("stack_frame_size", Integer.toString(function.getStackFrame().getFrameSize())),
                rawField("thunk", Boolean.toString(thunk)),
                field("thunk_target", thunkTarget == null ? "" : functionId(thunkTarget)),
                rawField("external", Boolean.toString(function.isExternal())),
                rawField("inline", Boolean.toString(function.isInline())),
                rawField("noreturn", Boolean.toString(function.hasNoReturn())),
                rawField("varargs", Boolean.toString(function.hasVarArgs())),
                rawField("library", Boolean.toString(library)),
                rawField("body_exported", Boolean.toString(bodyExported)),
                field("decompile_status", status),
                rawField("tags", jsonStringArray(tags)),
                rawField("callers", jsonStringArray(callers)),
                rawField("callees", jsonStringArray(callees)),
                rawField("referenced_strings", jsonStringArray(stringsUsed)),
                rawField("referenced_globals", jsonStringArray(globalsUsed)),
                rawField("comments", jsonStringArray(comments)),
                rawField("parameters", variablesJson(function.getParameters())),
                rawField("locals", variablesJson(function.getLocalVariables()))
            );
            writeJson(metaPath, meta);
            writeText(fingerprintPath, fingerprint + System.lineSeparator());
            indexRows.add(meta);
            if (library) libraryRows.add(meta);
            if (thunk) thunkRows.add(meta);

            for (String callee : callees) {
                graphRows.add(jsonObject(
                    field("from", functionId(function)),
                    field("to", callee)
                ));
            }
        }

        writeJsonArray(programRoot.resolve("functions.json"), indexRows);
        writeJsonArray(programRoot.resolve("library_functions.json"), libraryRows);
        writeJsonArray(programRoot.resolve("thunk_functions.json"), thunkRows);
        writeJsonArray(programRoot.resolve("callgraph.json"), graphRows);
        pruneStaleFunctionDirectories(liveFunctionIds);
        println("Functions reused without decompilation: " + reused + "/" + total);
    }

    private String functionFingerprint(Function function, List<String> tags, List<String> callers,
            List<String> callees, List<String> stringsUsed, List<String> globalsUsed,
            List<String> comments, Set<Function> calledFunctions) throws Exception {
        MessageDigest digest = MessageDigest.getInstance("SHA-256");
        updateDigest(digest, functionDataTypesFingerprint(function, calledFunctions));
        updateDigest(digest, function.getName(true));
        updateDigest(digest, function.getSignature().getPrototypeString(true));
        updateDigest(digest, nullToEmpty(function.getCallingConventionName()));
        updateDigest(digest, Boolean.toString(function.isThunk()));
        if (function.isThunk()) {
            Function target = function.getThunkedFunction(true);
            updateDigest(digest, target == null ? "" : functionId(target));
        }
        updateDigest(digest, Boolean.toString(function.hasNoReturn()));
        updateDigest(digest, Boolean.toString(function.hasVarArgs()));
        updateDigest(digest, nullToEmpty(function.getComment()));
        updateDigest(digest, nullToEmpty(function.getRepeatableComment()));
        updateDigest(digest, variablesJson(function.getParameters()));
        updateDigest(digest, variablesJson(function.getLocalVariables()));
        updateDigest(digest, String.join("\n", tags));
        updateDigest(digest, String.join("\n", callers));
        updateDigest(digest, String.join("\n", callees));
        List<String> calleeSignatures = new ArrayList<>();
        for (Function callee : calledFunctions) {
            calleeSignatures.add(functionId(callee) + "\u0000" +
                callee.getSignature().getPrototypeString(true) + "\u0000" +
                nullToEmpty(callee.getCallingConventionName()));
        }
        calleeSignatures.sort(Comparator.naturalOrder());
        updateDigest(digest, String.join("\n", calleeSignatures));
        updateDigest(digest, String.join("\n", stringsUsed));
        updateDigest(digest, String.join("\n", globalsUsed));
        updateDigest(digest, String.join("\n", comments));
        updateDigest(digest, functionSymbolsFingerprint(function));
        InstructionIterator instructions = listing.getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            checkCancelled();
            Instruction instruction = instructions.next();
            updateDigest(digest, addr(instruction.getAddress()));
            try {
                digest.update(instruction.getBytes());
            }
            catch (ghidra.program.model.mem.MemoryAccessException exception) {
                updateDigest(digest, instruction.toString());
            }
        }
        StringBuilder hex = new StringBuilder();
        for (byte value : digest.digest()) hex.append(String.format("%02x", value & 0xff));
        return hex.toString();
    }

    private String functionSymbolsFingerprint(Function function) {
        Set<String> related = new TreeSet<>();
        InstructionIterator instructions = listing.getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            Symbol local = symbols.getPrimarySymbol(instruction.getAddress());
            if (local != null) related.add(addr(local.getAddress()) + " " + local.getName(true));
            for (Reference reference : references.getReferencesFrom(instruction.getAddress())) {
                Symbol target = symbols.getPrimarySymbol(reference.getToAddress());
                if (target != null)
                    related.add(addr(target.getAddress()) + " " + target.getName(true));
            }
        }
        return String.join("\n", related);
    }

    private void pruneStaleFunctionDirectories(Set<String> liveIds) throws IOException {
        if (!Files.isDirectory(functionsRoot)) return;
        try (Stream<Path> entries = Files.list(functionsRoot)) {
            for (Path entry : entries.toList()) {
                String name = entry.getFileName().toString();
                if (!Files.isDirectory(entry) || !name.matches("[0-9A-Fa-f]{8,16}") ||
                        liveIds.contains(name.toUpperCase(Locale.ROOT))) continue;
                try (Stream<Path> tree = Files.walk(entry)) {
                    for (Path path : tree.sorted(Comparator.reverseOrder()).toList())
                        Files.deleteIfExists(path);
                }
            }
        }
    }

    private String functionDataTypesFingerprint(Function function, Set<Function> calledFunctions)
            throws Exception {
        Map<String, DataType> related = new java.util.TreeMap<>();
        collectRelatedDataType(function.getReturnType(), related);
        for (Variable variable : function.getParameters())
            collectRelatedDataType(variable.getDataType(), related);
        for (Variable variable : function.getLocalVariables())
            collectRelatedDataType(variable.getDataType(), related);
        for (Function callee : calledFunctions) {
            collectRelatedDataType(callee.getReturnType(), related);
            for (Variable variable : callee.getParameters())
                collectRelatedDataType(variable.getDataType(), related);
        }
        InstructionIterator instructions = listing.getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            for (Reference reference : references.getReferencesFrom(instruction.getAddress())) {
                Data data = listing.getDefinedDataAt(reference.getToAddress());
                if (data != null) collectRelatedDataType(data.getDataType(), related);
            }
        }
        MessageDigest digest = MessageDigest.getInstance("SHA-256");
        for (DataType type : related.values()) {
            updateDigest(digest, type.getPathName() + "\u0000" + type.getLength() + "\u0000" +
                nullToEmpty(type.getDescription()) + "\u0000" + dataTypeDetailJson(type));
        }
        StringBuilder hex = new StringBuilder();
        for (byte value : digest.digest()) hex.append(String.format("%02x", value & 0xff));
        return hex.toString();
    }

    private void collectRelatedDataType(DataType type, Map<String, DataType> result) {
        if (type == null || result.putIfAbsent(type.getPathName(), type) != null) return;
        if (type instanceof ghidra.program.model.data.Pointer pointer) {
            collectRelatedDataType(pointer.getDataType(), result);
        }
        else if (type instanceof ghidra.program.model.data.TypeDef typedef) {
            collectRelatedDataType(typedef.getBaseDataType(), result);
        }
        else if (type instanceof ghidra.program.model.data.Array array) {
            collectRelatedDataType(array.getDataType(), result);
        }
        else if (type instanceof ghidra.program.model.data.Composite composite) {
            for (ghidra.program.model.data.DataTypeComponent component : composite.getComponents())
                collectRelatedDataType(component.getDataType(), result);
        }
        else if (type instanceof ghidra.program.model.data.FunctionDefinition definition) {
            collectRelatedDataType(definition.getReturnType(), result);
            for (ghidra.program.model.data.ParameterDefinition argument : definition.getArguments())
                collectRelatedDataType(argument.getDataType(), result);
        }
    }

    private static void updateDigest(MessageDigest digest, String value) {
        digest.update(value.getBytes(StandardCharsets.UTF_8));
        digest.update((byte)0);
    }

    private void writeFunctionListing(Function function, Path path) throws IOException {
        atomicWrite(path, writer -> {
            InstructionIterator instructions = listing.getInstructions(function.getBody(), true);
            while (instructions.hasNext()) {
                checkCancelled();
                Instruction instruction = instructions.next();
                String label = "";
                Symbol primary = symbols.getPrimarySymbol(instruction.getAddress());
                if (primary != null) {
                    label = primary.getName(true) + ":\n";
                }
                if (!label.isEmpty()) {
                    writer.write(label);
                }
                writer.write(String.format("%s  %-24s  %s",
                    addr(instruction.getAddress()), instructionBytes(instruction), instruction.toString()));
                String eol = listing.getComment(CommentType.EOL, instruction.getAddress());
                if (eol != null && !eol.isBlank()) {
                    writer.write("  ; " + oneLine(eol));
                }
                writer.newLine();
            }
        });
    }

    private void collectReferencedData(Function function, List<String> stringsUsed,
            List<String> globalsUsed) throws IOException {
        Set<String> stringSet = new TreeSet<>();
        Set<String> globalSet = new TreeSet<>();
        CodeUnitIterator units = listing.getCodeUnits(function.getBody(), true);
        while (units.hasNext()) {
            checkCancelled();
            Address from = units.next().getMinAddress();
            for (Reference reference : references.getReferencesFrom(from)) {
                Address to = reference.getToAddress();
                if (to == null || !to.isMemoryAddress()) {
                    continue;
                }
                Data data = listing.getDataContaining(to);
                if (data == null) {
                    continue;
                }
                String item = addr(data.getMinAddress()) + " " + data.getPathName() + " = " +
                    oneLine(data.getDefaultValueRepresentation());
                if (data.hasStringValue()) {
                    stringSet.add(item);
                }
                else {
                    globalSet.add(item);
                }
            }
        }
        stringsUsed.addAll(stringSet);
        globalsUsed.addAll(globalSet);
    }

    private List<String> collectComments(Function function) throws IOException {
        List<String> result = new ArrayList<>();
        CodeUnitIterator units = listing.getCodeUnits(function.getBody(), true);
        while (units.hasNext()) {
            checkCancelled();
            Address address = units.next().getMinAddress();
            addComment(result, address, "plate", listing.getComment(CommentType.PLATE, address));
            addComment(result, address, "pre", listing.getComment(CommentType.PRE, address));
            addComment(result, address, "eol", listing.getComment(CommentType.EOL, address));
            addComment(result, address, "post", listing.getComment(CommentType.POST, address));
            addComment(result, address, "repeatable", listing.getComment(CommentType.REPEATABLE, address));
        }
        return result;
    }

    private void addComment(List<String> out, Address address, String kind, String text) {
        if (text != null && !text.isBlank()) {
            out.add(addr(address) + " [" + kind + "] " + oneLine(text));
        }
    }

    private List<String> functionSet(Set<Function> functions) {
        List<String> result = new ArrayList<>();
        for (Function function : functions) {
            result.add(functionId(function));
        }
        result.sort(Comparator.naturalOrder());
        return result;
    }

    private String functionId(Function function) {
        return addr(function.getEntryPoint()) + " " + function.getName(true);
    }

    private List<String> referenceSources(Address address) throws IOException {
        Set<String> result = new TreeSet<>();
        ReferenceIterator iterator = references.getReferencesTo(address);
        while (iterator.hasNext()) {
            Reference reference = iterator.next();
            Function source = listing.getFunctionContaining(reference.getFromAddress());
            result.add(source == null ? addr(reference.getFromAddress()) : functionId(source));
        }
        return new ArrayList<>(result);
    }

    private String dataTypeDetailJson(DataType type) {
        if (type instanceof ghidra.program.model.data.FunctionDefinition definition) {
            List<String> arguments = new ArrayList<>();
            for (ghidra.program.model.data.ParameterDefinition argument : definition.getArguments()) {
                arguments.add(jsonObject(
                    field("name", nullToEmpty(argument.getName())),
                    field("type", argument.getDataType().getPathName()),
                    field("comment", nullToEmpty(argument.getComment()))
                ));
            }
            return jsonObject(
                field("calling_convention", nullToEmpty(definition.getCallingConventionName())),
                field("return_type", definition.getReturnType().getPathName()),
                rawField("varargs", Boolean.toString(definition.hasVarArgs())),
                rawField("noreturn", Boolean.toString(definition.hasNoReturn())),
                rawField("arguments", "[" + String.join(",", arguments) + "]")
            );
        }
        if (type instanceof ghidra.program.model.data.Composite composite) {
            List<String> components = new ArrayList<>();
            for (ghidra.program.model.data.DataTypeComponent component : composite.getComponents()) {
                components.add(jsonObject(
                    rawField("ordinal", Integer.toString(component.getOrdinal())),
                    rawField("offset", Integer.toString(component.getOffset())),
                    rawField("length", Integer.toString(component.getLength())),
                    field("field_name", nullToEmpty(component.getFieldName())),
                    field("type", component.getDataType().getPathName()),
                    field("comment", nullToEmpty(component.getComment()))
                ));
            }
            return jsonObject(rawField("components", "[" + String.join(",", components) + "]"));
        }
        if (type instanceof ghidra.program.model.data.Enum enumType) {
            List<String> values = new ArrayList<>();
            for (String name : enumType.getNames()) {
                values.add(jsonObject(field("name", name),
                    rawField("value", Long.toString(enumType.getValue(name)))));
            }
            return jsonObject(rawField("values", "[" + String.join(",", values) + "]"));
        }
        if (type instanceof ghidra.program.model.data.TypeDef typedef) {
            return jsonObject(field("base_type", typedef.getBaseDataType().getPathName()));
        }
        if (type instanceof ghidra.program.model.data.Array array) {
            return jsonObject(
                field("element_type", array.getDataType().getPathName()),
                rawField("element_count", Integer.toString(array.getNumElements())),
                rawField("element_length", Integer.toString(array.getElementLength()))
            );
        }
        if (type instanceof ghidra.program.model.data.Pointer pointer) {
            DataType pointedTo = pointer.getDataType();
            return jsonObject(field("points_to", pointedTo == null ? "" : pointedTo.getPathName()));
        }
        return "{}";
    }

    private String variablesJson(Variable[] variables) {
        List<String> rows = new ArrayList<>();
        for (Variable variable : variables) {
            String storage;
            try {
                storage = variable.getVariableStorage().toString();
            }
            catch (Exception exception) {
                storage = "";
            }
            rows.add(jsonObject(
                field("name", variable.getName()),
                field("type", variable.getDataType().getDisplayName()),
                rawField("length", Integer.toString(variable.getLength())),
                field("storage", storage),
                field("comment", nullToEmpty(variable.getComment())),
                field("source", variable.getSource().toString())
            ));
        }
        return "[" + String.join(",", rows) + "]";
    }

    private void exportManifest() throws IOException {
        writeJson(programRoot.resolve("manifest.json"), jsonObject(
            field("schema", "st-decomp-corpus"),
            rawField("schema_version", "1"),
            field("generated_at_utc", Instant.now().toString()),
            field("ghidra_version", applicationVersion()),
            field("program", currentProgram.getName()),
            rawField("function_count", Integer.toString(exportedFunctionCount)),
            rawField("program_function_count", Integer.toString(programFunctionCount)),
            rawField("exported_function_count", Integer.toString(exportedFunctionCount)),
            rawField("external_function_count", Integer.toString(externalFunctionCount)),
            rawField("library_function_count", Integer.toString(libraryFunctionCount)),
            rawField("thunk_function_count", Integer.toString(thunkFunctionCount)),
            rawField("body_function_count", Integer.toString(bodyFunctionCount)),
            field("primary_key", "program + function entry address")
        ));
    }

    private String applicationVersion() {
        try {
            return ghidra.framework.Application.getApplicationVersion();
        }
        catch (Exception exception) {
            return "unknown";
        }
    }

    private static String namespaceName(Namespace namespace) {
        return namespace == null ? "" : namespace.getName(true);
    }

    private static String addr(Address address) {
        return address == null ? "" : address.toString().toUpperCase(Locale.ROOT);
    }

    private static String bytes(byte[] values) {
        StringBuilder result = new StringBuilder();
        for (byte value : values) {
            if (result.length() > 0) {
                result.append(' ');
            }
            result.append(String.format("%02X", value & 0xff));
        }
        return result.toString();
    }

    private static String instructionBytes(Instruction instruction) {
        try {
            return bytes(instruction.getBytes());
        }
        catch (ghidra.program.model.mem.MemoryAccessException exception) {
            return "<memory-error>";
        }
    }

    private static String safeFileName(String value) {
        String safe = value == null ? "unnamed" : value.replaceAll("[^A-Za-z0-9._-]+", "_");
        safe = safe.replaceAll("_+", "_");
        if (safe.length() > MAX_FILENAME_COMPONENT) {
            safe = safe.substring(0, MAX_FILENAME_COMPONENT);
        }
        return safe.isBlank() ? "unnamed" : safe;
    }

    private static String oneLine(String value) {
        return nullToEmpty(value).replace('\r', ' ').replace('\n', ' ').replaceAll("\\s+", " ").trim();
    }

    private static String nullToEmpty(String value) {
        return value == null ? "" : value;
    }

    private void checkCancelled() throws IOException {
        if (monitor.isCancelled()) {
            throw new IOException("Export cancelled by user");
        }
    }

    private static String field(String name, String value) {
        return quote(name) + ":" + quote(nullToEmpty(value));
    }

    private static String rawField(String name, String jsonValue) {
        return quote(name) + ":" + jsonValue;
    }

    private static String jsonObject(String... fields) {
        return "{" + String.join(",", fields) + "}";
    }

    private static String jsonStringArray(Collection<String> values) {
        List<String> quoted = new ArrayList<>();
        for (String value : values) {
            quoted.add(quote(value));
        }
        return "[" + String.join(",", quoted) + "]";
    }

    private static String quote(String value) {
        StringBuilder out = new StringBuilder("\"");
        for (int i = 0; i < value.length(); i++) {
            char c = value.charAt(i);
            switch (c) {
                case '\\': out.append("\\\\"); break;
                case '\"': out.append("\\\""); break;
                case '\b': out.append("\\b"); break;
                case '\f': out.append("\\f"); break;
                case '\n': out.append("\\n"); break;
                case '\r': out.append("\\r"); break;
                case '\t': out.append("\\t"); break;
                default:
                    if (c < 0x20) {
                        out.append(String.format("\\u%04x", (int)c));
                    }
                    else {
                        out.append(c);
                    }
            }
        }
        return out.append('\"').toString();
    }

    private void writeJson(Path path, String json) throws IOException {
        writeText(path, json + System.lineSeparator());
    }

    private void writeJsonArray(Path path, List<String> rows) throws IOException {
        atomicWrite(path, writer -> {
            writer.write("[\n");
            for (int i = 0; i < rows.size(); i++) {
                writer.write("  " + rows.get(i));
                writer.write(i + 1 == rows.size() ? "\n" : ",\n");
            }
            writer.write("]\n");
        });
    }

    private void writeText(Path path, String text) throws IOException {
        atomicWrite(path, writer -> writer.write(text));
    }

    private void atomicWrite(Path path, WriterAction action) throws IOException {
        Files.createDirectories(path.getParent());
        Path temporary = path.resolveSibling(path.getFileName().toString() + ".tmp");
        try (BufferedWriter writer = Files.newBufferedWriter(
                temporary, StandardCharsets.UTF_8)) {
            action.write(writer);
        }
        try {
            Files.move(temporary, path, StandardCopyOption.REPLACE_EXISTING,
                StandardCopyOption.ATOMIC_MOVE);
        }
        catch (java.nio.file.AtomicMoveNotSupportedException exception) {
            Files.move(temporary, path, StandardCopyOption.REPLACE_EXISTING);
        }
    }

    @FunctionalInterface
    private interface WriterAction {
        void write(BufferedWriter writer) throws IOException;
    }
}
