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
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Comparator;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
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
import ghidra.program.model.listing.Parameter;
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
    private static final java.util.regex.Pattern SIMPLE_MEMORY = java.util.regex.Pattern.compile(
        "^\\[([A-Z][A-Z0-9]{1,3})(?:([+-])([+-]?)(0X[0-9A-F]+|[0-9]+))?\\]$");
    private static final Pattern INT3_ASSIGNMENT = Pattern.compile(
        "^(\\s*)([A-Za-z_][A-Za-z0-9_]*)\\s*=\\s*\\(code \\*\\)swi\\(3\\);\\s*$");
    private static final Pattern ASSIGNED_INDIRECT_CALL = Pattern.compile(
        "^(\\s*)([A-Za-z_][A-Za-z0-9_]*)\\s*=\\s*" +
        "(?:\\([^()]+\\)\\s*)?\\(\\*([A-Za-z_][A-Za-z0-9_]*)\\)\\(\\);\\s*$");
    private static final Pattern PLAIN_INDIRECT_CALL = Pattern.compile(
        "^(\\s*)\\(\\*([A-Za-z_][A-Za-z0-9_]*)\\)\\(\\);\\s*$");
    private static final Pattern BULK_ZERO_SIMPLE = Pattern.compile(
        "(?m)^(?<indent>[ \\t]*)(?<pointer>[A-Za-z_][A-Za-z0-9_]*)[ \\t]*=[ \\t]*" +
        "(?<target>[^;\\r\\n]+);[ \\t]*\\R" +
        "\\k<indent>for[ \\t]*\\((?<counter>[A-Za-z_][A-Za-z0-9_]*)[ \\t]*=[ \\t]*" +
        "(?<count>0x[0-9A-Fa-f]+|[0-9]+);[ \\t]*\\k<counter>[ \\t]*!=[ \\t]*0;[ \\t]*" +
        "\\k<counter>[ \\t]*=[ \\t]*\\k<counter>[ \\t]*\\+[ \\t]*-1\\)[ \\t]*\\{[ \\t]*\\R" +
        "[ \\t]+\\*\\k<pointer>[ \\t]*=[ \\t]*0;[ \\t]*\\R" +
        "[ \\t]+\\k<pointer>[ \\t]*=[ \\t]*\\k<pointer>[ \\t]*\\+[ \\t]*1;[ \\t]*\\R" +
        "\\k<indent>\\}(?:[ \\t]*\\R\\k<indent>\\*\\(undefined(?<tail>[1248])[ \\t]*\\*\\)" +
        "\\k<pointer>[ \\t]*=[ \\t]*0;)?");
    private static final Pattern BULK_ZERO_NULL_SELECT = Pattern.compile(
        "(?m)^(?<indent>[ \\t]*)if[ \\t]*\\([^\\r\\n]+==[ \\t]*\\([^\\r\\n]+\\)0x0\\)[ \\t]*\\{[ \\t]*\\R" +
        "[ \\t]+(?<pointer>[A-Za-z_][A-Za-z0-9_]*)[ \\t]*=[ \\t]*\\(undefined4[ \\t]*\\*\\)0x0;[ \\t]*\\R" +
        "\\k<indent>\\}[ \\t]*\\R\\k<indent>else[ \\t]*\\{[ \\t]*\\R" +
        "[ \\t]+\\k<pointer>[ \\t]*=[ \\t]*(?<target>[^;\\r\\n]+);[ \\t]*\\R" +
        "\\k<indent>\\}[ \\t]*\\R" +
        "\\k<indent>for[ \\t]*\\((?<counter>[A-Za-z_][A-Za-z0-9_]*)[ \\t]*=[ \\t]*" +
        "(?<count>0x[0-9A-Fa-f]+|[0-9]+);[ \\t]*\\k<counter>[ \\t]*!=[ \\t]*0;[ \\t]*" +
        "\\k<counter>[ \\t]*=[ \\t]*\\k<counter>[ \\t]*\\+[ \\t]*-1\\)[ \\t]*\\{[ \\t]*\\R" +
        "[ \\t]+\\*\\k<pointer>[ \\t]*=[ \\t]*0;[ \\t]*\\R" +
        "[ \\t]+\\k<pointer>[ \\t]*=[ \\t]*\\k<pointer>[ \\t]*\\+[ \\t]*1;[ \\t]*\\R" +
        "\\k<indent>\\}(?:[ \\t]*\\R\\k<indent>\\*\\(undefined(?<tail>[1248])[ \\t]*\\*\\)" +
        "\\k<pointer>[ \\t]*=[ \\t]*0;)?");
    private static final String BULK_ZERO_MARKER =
        "/* compiler bulk-zero initialization */";
    private static final Pattern HEX_ADDRESS = Pattern.compile("0x([0-9A-Fa-f]{6,8})");
    private static final Pattern RAW_INDIRECT_CALL = Pattern.compile(
        "\\(\\*\\*?\\(code \\*\\*?\\)|\\(\\*\\(code \\*\\)");
    private static final Pattern RAW_OFFSET_DEREFERENCE = Pattern.compile(
        "\\*\\([^)]*\\*\\)\\([^;]*(?:param_|local_|->)[^;]*[+-]\\s*0x[0-9A-Fa-f]+");
    private static final Pattern PACKED_PIECE = Pattern.compile(
        "(?:\\._[0-9]+_[0-9]+_|\\.\\*[0-9]+_[0-9]+\\*|" +
        "(?:->|\\.)packed\\b|&\\([^)]*packed)");
    private static final Pattern DARRAY_ELEMENT_ADDRESS = Pattern.compile(
        "\\b([A-Za-z_][A-Za-z0-9_]*)->elementSize\\s*\\*\\s*([^+;]+?)\\s*\\+\\s*" +
        "(?:\\(int\\)\\s*)?\\1->data\\b");
    private static final Pattern RESIDUAL_STRING_SYMBOL = Pattern.compile(
        "\\bs_[A-Za-z0-9_$]*_[0-9A-Fa-f]{8}\\b");
    private static final Pattern RESIDUAL_CASTED_FIELD = Pattern.compile(
        "\\*\\s*\\(\\s*(?:undefined(?:[1248])?|u?int|u?long|u?short|char|byte|" +
        "float|double|void)[^()\\r\\n]{0,48}?\\*\\s*\\)\\s*&?[^;\\r\\n]*?" +
        "(?:->|\\.)field_(?:0x)?[0-9A-Fa-f]+\\b");
    private static final Pattern RESIDUAL_GENERIC_FIELD = Pattern.compile(
        "(?:->|\\.)field_(?:0x)?[0-9A-Fa-f]+\\b");
    private static final Pattern RESIDUAL_GLOBAL_AGGREGATE = Pattern.compile(
        "\\b(?:PTR|DAT)_[0-9A-Fa-f]{8}(?:->|\\.)field_(?:0x)?[0-9A-Fa-f]+\\b");
    private static final Pattern RESIDUAL_ANONYMOUS_SHAPE = Pattern.compile(
        "\\bAnon(?:Shape|Nested|Receiver)_[A-Za-z0-9_$]+\\b");
    private static final Pattern RESIDUAL_GENERIC_DATA = Pattern.compile(
        "(?<![A-Za-z0-9_$])_?(?:DAT|PTR|UNK)_[0-9A-Fa-f]{8}\\b");
    private static final Pattern RESIDUAL_UNDEFINED_TYPE = Pattern.compile(
        "\\bundefined(?:[1248])?\\b");
    private static final Pattern RESIDUAL_CONTROL_FLOW = Pattern.compile(
        "\\b(?:goto|LAB_[0-9A-Fa-f]+)\\b");
    private static final String PSEUDOCODE_COMMENT_MARKER = "/* ST_PSEUDO[";
    private static final String PSEUDOCODE_RUNTIME_INCLUDE =
        "#include \"../../pseudocode_runtime.h\"";
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
    private int pseudocodeNormalizationCount;
    private int fingerprintCfgFallbackCount;
    private final List<String> fingerprintCfgFallbackFunctions = new ArrayList<>();
    private final List<String> pseudocodeIdiomRows = new ArrayList<>();
    private final Set<String> pseudocodeIdiomFunctions = new HashSet<>();
    private final List<String> qualityIssueRows = new ArrayList<>();
    private final Set<String> qualityIssueFunctions = new HashSet<>();
    private final Map<String, QualityAggregate> qualityAggregates = new TreeMap<>();

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
        pseudocodeNormalizationCount = 0;
        pseudocodeIdiomRows.clear();
        pseudocodeIdiomFunctions.clear();
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
                if (bodyExported) normalizeAndCatalog(function, dir.resolve("decomp.c"));
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
                cCode = literalizeReferencedStrings(function, cCode);
                NormalizedCode normalized = normalizePseudocode(cCode);
                cCode = annotatePseudocode(normalized.code);
                writeText(dir.resolve("decomp.c"), cCode);
                catalogPseudocodeIdioms(function, cCode);
                catalogQualityIssues(function, cCode);
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
        writePseudocodeArtifacts();
        pruneStaleFunctionDirectories(liveFunctionIds);
        println("Functions reused without decompilation: " + reused + "/" + total);
        if (fingerprintCfgFallbackCount > 0)
            println("Fingerprint CFG fallbacks: " + fingerprintCfgFallbackCount +
                " (first: " + String.join(", ", fingerprintCfgFallbackFunctions) + ")");
    }

    private void normalizeAndCatalog(Function function, Path path) throws IOException {
        String original = Files.readString(path, StandardCharsets.UTF_8);
        String literalized = literalizeReferencedStrings(function, original);
        NormalizedCode normalized = normalizePseudocode(literalized);
        String annotated = annotatePseudocode(normalized.code);
        if (!annotated.equals(original)) writeText(path, annotated);
        catalogPseudocodeIdioms(function, annotated);
        catalogQualityIssues(function, annotated);
    }

    /**
     * Ghidra renders a terminal x86 INT3 as a call through the value returned by
     * swi(3).  That is not a real indirect call.  In this corpus there is no
     * attached debugger and continuation is deliberately unsupported, so expose
     * the intended standalone behavior as a noreturn helper.
     */
    private NormalizedCode normalizePseudocode(String code) {
        if (code == null || code.isEmpty()) return new NormalizedCode("", 0);
        NormalizedCode bulkZero = normalizeBulkZeroLoops(code);
        code = bulkZero.code;
        String[] lines = code.split("\\R", -1);
        List<String> output = new ArrayList<>();
        int replacements = bulkZero.replacements;
        for (int index = 0; index < lines.length; index++) {
            Matcher assignment = INT3_ASSIGNMENT.matcher(lines[index]);
            if (!assignment.matches() || index + 1 >= lines.length) {
                output.add(lines[index]);
                continue;
            }
            String variable = assignment.group(2);
            Matcher assignedCall = ASSIGNED_INDIRECT_CALL.matcher(lines[index + 1]);
            Matcher plainCall = PLAIN_INDIRECT_CALL.matcher(lines[index + 1]);
            String returnedVariable = "";
            boolean matched = false;
            if (assignedCall.matches() && variable.equals(assignedCall.group(3))) {
                returnedVariable = assignedCall.group(2);
                matched = true;
            }
            else if (plainCall.matches() && variable.equals(plainCall.group(2))) matched = true;
            if (!matched) {
                output.add(lines[index]);
                continue;
            }
            output.add(assignment.group(1) +
                "STDebugBreak(); /* noreturn in standalone pseudocode */");
            replacements++;
            index++;
            if (index + 1 < lines.length) {
                String next = lines[index + 1].trim();
                if ((!returnedVariable.isBlank() && next.equals("return " + returnedVariable + ";")) ||
                        (returnedVariable.isBlank() && next.equals("return;"))) index++;
            }
        }
        String normalized = String.join(System.lineSeparator(), output);
        return new NormalizedCode(normalized, replacements);
    }

    /**
     * MSVC emits REP STOSD followed by an optional STOSB for many aggregate and
     * object-tail initializers.  Ghidra expands that instruction pair into an
     * undefined4-pointer loop and an undefined1 tail store.  The widths describe
     * the transfer instructions, not the logical fields being initialized.  Fold
     * only the exact zero-fill loop so independently recovered fields can remain
     * represented in the structure without inventing an overlapping array.
     */
    private NormalizedCode normalizeBulkZeroLoops(String code) {
        Set<String> candidates = new LinkedHashSet<>();
        NormalizedCode selected = normalizeBulkZeroPattern(
            code, BULK_ZERO_NULL_SELECT, candidates, true);
        NormalizedCode simple = normalizeBulkZeroPattern(
            selected.code, BULK_ZERO_SIMPLE, candidates, false);
        String normalized = removeDeadBulkZeroLocals(simple.code, candidates);
        return new NormalizedCode(normalized,
            selected.replacements + simple.replacements);
    }

    private NormalizedCode normalizeBulkZeroPattern(String code, Pattern pattern,
            Set<String> candidates, boolean nullSelect) {
        Matcher matcher = pattern.matcher(code);
        StringBuffer output = new StringBuffer();
        int replacements = 0;
        while (matcher.find()) {
            long count;
            try {
                String countText = matcher.group("count");
                count = countText.regionMatches(true, 0, "0x", 0, 2) ?
                    Long.parseUnsignedLong(countText.substring(2), 16) :
                    Long.parseLong(countText);
            }
            catch (RuntimeException exception) {
                matcher.appendReplacement(output, Matcher.quoteReplacement(matcher.group()));
                continue;
            }
            long tail = 0;
            String tailText = matcher.group("tail");
            if (tailText != null) tail = Long.parseLong(tailText);
            long bytes;
            try {
                bytes = Math.addExact(Math.multiplyExact(count, 4L), tail);
            }
            catch (ArithmeticException exception) {
                matcher.appendReplacement(output, Matcher.quoteReplacement(matcher.group()));
                continue;
            }
            if (bytes <= 0 || bytes > 0x1000000L) {
                matcher.appendReplacement(output, Matcher.quoteReplacement(matcher.group()));
                continue;
            }

            String indent = matcher.group("indent");
            String pointer = matcher.group("pointer");
            String counter = matcher.group("counter");
            String rawTarget = matcher.group("target").trim();
            String target = bulkZeroTarget(rawTarget);
            boolean pointerLiveAfter = identifierValueLiveAfter(
                code, pointer, matcher.end(), indent.length());
            boolean counterLiveAfter = identifierValueLiveAfter(
                code, counter, matcher.end(), indent.length());
            StringBuilder replacement = new StringBuilder();
            if (pointerLiveAfter) {
                if (nullSelect) {
                    // Preserve the explicit nullable selection if later code uses
                    // the advanced temporary.  Constructors normally take the
                    // cleaner target-only path below because `this` cannot be null.
                    String prefix = matcher.group().substring(0,
                        matcher.group().indexOf(indent + "for"));
                    replacement.append(prefix);
                }
                else {
                    replacement.append(indent).append(pointer).append(" = ")
                        .append(rawTarget).append(';').append(System.lineSeparator());
                }
                replacement.append(indent).append("memset(").append(pointer)
                    .append(", 0, ").append(hexLiteral(bytes)).append("); ")
                    .append(BULK_ZERO_MARKER).append(System.lineSeparator());
                replacement.append(indent).append(pointer)
                    .append(" = (undefined4 *)((byte *)").append(pointer)
                    .append(" + ").append(hexLiteral(count * 4L)).append(");");
            }
            else {
                replacement.append(indent).append("memset(").append(target)
                    .append(", 0, ").append(hexLiteral(bytes)).append("); ")
                    .append(BULK_ZERO_MARKER);
                candidates.add(pointer);
            }
            if (counterLiveAfter) {
                replacement.append(System.lineSeparator()).append(indent)
                    .append(counter).append(" = 0;");
            }
            else candidates.add(counter);
            matcher.appendReplacement(output, Matcher.quoteReplacement(replacement.toString()));
            replacements++;
        }
        matcher.appendTail(output);
        return new NormalizedCode(output.toString(), replacements);
    }

    private boolean identifierOccurs(String text, String identifier, int start, int end) {
        Matcher matcher = Pattern.compile("(?<![A-Za-z0-9_$])" +
            Pattern.quote(identifier) + "(?![A-Za-z0-9_$])").matcher(text);
        matcher.region(Math.max(0, start), Math.min(text.length(), end));
        return matcher.find();
    }

    private boolean identifierValueLiveAfter(String text, String identifier, int start,
            int sourceIndent) {
        Pattern token = Pattern.compile("(?<![A-Za-z0-9_$])" +
            Pattern.quote(identifier) + "(?![A-Za-z0-9_$])");
        Matcher occurrence = token.matcher(text);
        occurrence.region(Math.max(0, start), text.length());
        if (!occurrence.find()) return false;
        String intervening = text.substring(Math.max(0, start), occurrence.start());
        for (String line : intervening.split("\\R", -1)) {
            String stripped = line.stripLeading();
            int indent = line.length() - stripped.length();
            if (indent <= sourceIndent && stripped.matches("return(?:\\s+[^;]*)?;\\s*"))
                return false;
        }
        int lineStart = text.lastIndexOf('\n', occurrence.start()) + 1;
        int lineEnd = text.indexOf('\n', occurrence.end());
        if (lineEnd < 0) lineEnd = text.length();
        String line = text.substring(lineStart, lineEnd);
        Matcher assignment = Pattern.compile("^[ \\t]*" + Pattern.quote(identifier) +
            "[ \\t]*=(?!=)").matcher(line);
        if (!assignment.find()) return true;
        // A plain later definition kills the value left by the zeroing loop.  If
        // the right-hand side mentions the temporary, it is still a live read.
        return token.matcher(line.substring(assignment.end())).find();
    }

    private String removeDeadBulkZeroLocals(String code, Set<String> candidates) {
        String result = code;
        for (String candidate : candidates) {
            Pattern declaration = Pattern.compile(
                "(?m)^[ \\t]+(?:int|uint|long|ulong|undefined4)[ \\t]+\\*?[ \\t]*" +
                Pattern.quote(candidate) + "[ \\t]*;[ \\t]*(?:\\R|$)");
            Matcher matcher = declaration.matcher(result);
            if (!matcher.find()) continue;
            String withoutDeclaration = result.substring(0, matcher.start()) +
                result.substring(matcher.end());
            if (!identifierOccurs(withoutDeclaration, candidate, 0, withoutDeclaration.length()))
                result = withoutDeclaration;
        }
        return result;
    }

    private String bulkZeroTarget(String target) {
        Matcher address = Pattern.compile(
            "^\\(undefined4[ \\t]*\\*\\)[ \\t]*&(.+)$").matcher(target);
        if (address.matches()) return "&" + address.group(1).trim();
        Matcher cast = Pattern.compile(
            "^\\(undefined4[ \\t]*\\*\\)[ \\t]*(.+)$").matcher(target);
        if (cast.matches()) return "(void *)" + cast.group(1).trim();
        return target;
    }

    private String hexLiteral(long value) {
        return "0x" + Long.toHexString(value);
    }

    /**
     * Ghidra deliberately emits a symbol instead of a quoted string when the PE
     * memory block is writable, even if the bytes are defined as a string and flow
     * to a char pointer.  ST stores immutable diagnostics in such a block beside
     * genuinely mutable globals, so changing the block permissions would corrupt
     * analysis.  For the text corpus, inline every referenced, NUL-terminated string
     * which has no write reference.  Address-stable metadata retains the symbol.
     *
     * Very short printf formats (notably "%s" at 007A4CCC) are accepted before the
     * debug-string applier has retyped them.  Replacements are lexical: comments,
     * existing string/character literals, and larger identifiers are untouched.
     */
    private String literalizeReferencedStrings(Function function, String code) {
        if (code == null || code.isEmpty()) return code;
        Map<String, String> literals = referencedStringLiterals(function);
        if (literals.isEmpty()) return code;
        StringBuilder output = new StringBuilder();
        boolean string = false, character = false, lineComment = false;
        boolean blockComment = false, escaped = false;
        for (int index = 0; index < code.length();) {
            char ch = code.charAt(index);
            char next = index + 1 < code.length() ? code.charAt(index + 1) : '\0';
            if (lineComment) {
                output.append(ch); index++;
                if (ch == '\n') lineComment = false;
                continue;
            }
            if (blockComment) {
                output.append(ch); index++;
                if (ch == '*' && next == '/') {
                    output.append('/'); index++; blockComment = false;
                }
                continue;
            }
            if (string || character) {
                output.append(ch); index++;
                if (escaped) escaped = false;
                else if (ch == '\\') escaped = true;
                else if (string && ch == '"') string = false;
                else if (character && ch == '\'') character = false;
                continue;
            }
            if (ch == '/' && next == '/') {
                output.append("//"); index += 2; lineComment = true; continue;
            }
            if (ch == '/' && next == '*') {
                output.append("/*"); index += 2; blockComment = true; continue;
            }
            if (ch == '"') { output.append(ch); index++; string = true; continue; }
            if (ch == '\'') { output.append(ch); index++; character = true; continue; }

            int ampersand = ch == '&' ? index : -1;
            int start = ampersand >= 0 ? index + 1 : index;
            while (ampersand >= 0 && start < code.length() &&
                    Character.isWhitespace(code.charAt(start))) start++;
            if (start < code.length() && identifierStart(code.charAt(start))) {
                int end = qualifiedIdentifierEnd(code, start);
                String literal = literals.get(code.substring(start, end));
                if (literal != null) {
                    output.append(literal); index = end; continue;
                }
                if (ampersand < 0) {
                    output.append(code, start, end); index = end; continue;
                }
            }
            output.append(ch); index++;
        }
        return output.toString();
    }

    private Map<String, String> referencedStringLiterals(Function function) {
        Map<String, String> result = new LinkedHashMap<>();
        CodeUnitIterator units = listing.getCodeUnits(function.getBody(), true);
        while (units.hasNext()) {
            Address from = units.next().getMinAddress();
            for (Reference reference : references.getReferencesFrom(from)) {
                Address to = reference.getToAddress();
                if (to == null || !to.isMemoryAddress()) continue;
                Data data = listing.getDataContaining(to);
                if (data == null || !to.equals(data.getMinAddress())) continue;
                String value = data.hasStringValue() && data.getValue() instanceof String ?
                    (String)data.getValue() : asciiCString(data.getMinAddress(), 128);
                if (value == null || value.isEmpty()) continue;
                if (!data.hasStringValue() && !value.contains("%")) continue;
                if (hasWriteReference(data)) continue;
                Symbol symbol = symbols.getPrimarySymbol(data.getMinAddress());
                if (symbol == null) continue;
                String literal = cString(value);
                putLiteralName(result, symbol.getName(), literal);
                putLiteralName(result, symbol.getName(true), literal);
                putLiteralName(result, decompilerIdentifier(symbol.getName()), literal);
                putLiteralName(result, decompilerIdentifier(symbol.getName(true)), literal);
            }
        }
        result.values().removeIf(value -> value == null);
        return result;
    }

    private void putLiteralName(Map<String, String> literals, String name, String literal) {
        if (name == null || name.isBlank()) return;
        String old = literals.get(name);
        if (old == null && !literals.containsKey(name)) literals.put(name, literal);
        else if (!literal.equals(old)) literals.put(name, null); // ambiguous unqualified name
    }

    private boolean hasWriteReference(Data data) {
        int length = Math.max(1, data.getLength());
        for (int offset = 0; offset < length; offset++) {
            ReferenceIterator iterator = references.getReferencesTo(data.getMinAddress().add(offset));
            while (iterator.hasNext())
                if (iterator.next().getReferenceType().isWrite()) return true;
        }
        return false;
    }

    private boolean identifierStart(char value) {
        return Character.isLetter(value) || value == '_' || value == '$';
    }

    private boolean identifierPart(char value) {
        return Character.isLetterOrDigit(value) || value == '_' || value == '$';
    }

    private int qualifiedIdentifierEnd(String text, int start) {
        int end = start + 1;
        while (true) {
            while (end < text.length() && identifierPart(text.charAt(end))) end++;
            if (end + 2 >= text.length() || text.charAt(end) != ':' ||
                    text.charAt(end + 1) != ':' || !identifierStart(text.charAt(end + 2)))
                return end;
            end += 3;
        }
    }

    private String decompilerIdentifier(String value) {
        StringBuilder result = new StringBuilder();
        for (int index = 0; index < value.length(); index++) {
            char ch = value.charAt(index);
            result.append(Character.isLetterOrDigit(ch) || ch == '_' || ch == '$' ? ch : '_');
        }
        return result.toString();
    }

    private String asciiCString(Address address, int maximum) {
        StringBuilder value = new StringBuilder();
        try {
            for (int index = 0; index < maximum; index++) {
                int item = currentProgram.getMemory().getByte(address.add(index)) & 0xff;
                if (item == 0) return value.toString();
                if (item < 0x20 || item > 0x7e) return null;
                value.append((char)item);
            }
        }
        catch (Exception ignored) { }
        return null;
    }

    private String cString(String value) {
        StringBuilder result = new StringBuilder("\"");
        for (int index = 0; index < value.length(); index++) {
            char ch = value.charAt(index);
            switch (ch) {
                case '\\' -> result.append("\\\\");
                case '"' -> result.append("\\\"");
                case '\n' -> result.append("\\n");
                case '\r' -> result.append("\\r");
                case '\t' -> result.append("\\t");
                default -> {
                    if (ch < 0x20 || ch == 0x7f)
                        result.append(String.format("\\x%02X", (int)ch));
                    else result.append(ch);
                }
            }
        }
        return result.append('"').toString();
    }

    private String annotatePseudocode(String code) {
        if (code == null || code.isEmpty()) return "";
        String[] lines = code.split("\\R", -1);
        List<String> clean = new ArrayList<>();
        boolean needsRuntime = code.contains("STDebugBreak()") ||
            code.contains(BULK_ZERO_MARKER);
        boolean hasRuntimeInclude = false;
        for (String line : lines) {
            if (line.contains(PSEUDOCODE_COMMENT_MARKER)) continue;
            if (line.strip().equals(PSEUDOCODE_RUNTIME_INCLUDE)) {
                if (needsRuntime) {
                    clean.add(PSEUDOCODE_RUNTIME_INCLUDE);
                    hasRuntimeInclude = true;
                }
                continue;
            }
            clean.add(line.stripTrailing());
        }
        List<String> output = new ArrayList<>();
        int coveredUntil = -1;
        for (int index = 0; index < clean.size(); index++) {
            String line = clean.get(index);
            String stripped = line.stripLeading();
            if (stripped.isBlank() || stripped.startsWith("/*") || stripped.startsWith("*") ||
                    stripped.startsWith("//") || stripped.startsWith("#")) {
                output.add(line);
                continue;
            }
            // Export-owned hints are regenerated from the current logical C
            // statement.  A bounded forward window catches expressions which
            // Ghidra wrapped across several physical lines.
            StatementWindow statement = statementWindow(clean, index);
            List<String> kinds = index <= coveredUntil ? new ArrayList<>() :
                lineIdiomKinds(statement.text);
            kinds.remove("terminal_debug_trap");
            if (!kinds.isEmpty()) {
                String indent = line.substring(0, line.length() - line.stripLeading().length());
                List<String> suggestions = new ArrayList<>();
                for (String kind : kinds) suggestions.add(inlineTransform(kind, statement.text));
                output.add(indent + PSEUDOCODE_COMMENT_MARKER + String.join(",", kinds) +
                    "]: " + String.join("; ", suggestions) + " */");
                coveredUntil = statement.endIndex;
            }
            output.add(line);
        }
        if (needsRuntime && !hasRuntimeInclude) {
            output.add(0, "");
            output.add(0, PSEUDOCODE_RUNTIME_INCLUDE);
        }
        return String.join(System.lineSeparator(), output);
    }

    private void catalogPseudocodeIdioms(Function function, String code) {
        Map<String, IdiomEvidence> evidence = new LinkedHashMap<>();
        String[] lines = code == null ? new String[0] : code.split("\\R", -1);
        List<String> finalLines = List.of(lines);
        for (int index = 0; index < lines.length; index++) {
            String line = lines[index];
            if (line.contains(PSEUDOCODE_COMMENT_MARKER)) {
                int start = line.indexOf(PSEUDOCODE_COMMENT_MARKER) +
                    PSEUDOCODE_COMMENT_MARKER.length();
                int end = line.indexOf("]:", start);
                if (end > start && index + 1 < lines.length) {
                    StatementWindow statement = statementWindow(finalLines, index + 1);
                    for (String kind : line.substring(start, end).split(",", -1))
                        if (!kind.isBlank())
                            addIdiom(evidence, kind, index + 2, statement.text);
                }
                continue;
            }
            if (line.contains("STDebugBreak()"))
                addIdiom(evidence, "terminal_debug_trap", index + 1, line);
            if (line.contains(BULK_ZERO_MARKER))
                addIdiom(evidence, "bulk_zero_initialization", index + 1, line);
        }

        // The instruction listing is authoritative even when an older reused body
        // was already normalized by a previous export.
        List<String> int3Addresses = int3Addresses(function);
        if (!int3Addresses.isEmpty() && !evidence.containsKey("terminal_debug_trap"))
            addIdiom(evidence, "terminal_debug_trap", 0,
                "machine code contains terminal INT3; no decompiler body was available");

        if (evidence.isEmpty()) return;
        pseudocodeIdiomFunctions.add(addr(function.getEntryPoint()));
        for (Map.Entry<String, IdiomEvidence> item : evidence.entrySet()) {
            String kind = item.getKey();
            IdiomEvidence value = item.getValue();
            boolean normalizedSite =
                (kind.equals("terminal_debug_trap") && code != null &&
                    code.contains("STDebugBreak()")) ||
                (kind.equals("bulk_zero_initialization") && code != null &&
                    code.contains(BULK_ZERO_MARKER));
            if (normalizedSite) pseudocodeNormalizationCount += value.occurrences;
            String status = normalizedSite ? "normalized" : "catalogued";
            List<String> hints = new TreeSet<>(value.addressHints).stream().toList();
            if (kind.equals("terminal_debug_trap")) hints = int3Addresses;
            pseudocodeIdiomRows.add(jsonObject(
                field("function_address", addr(function.getEntryPoint())),
                field("function_name", function.getName(true)),
                field("source_file", "functions/" + addr(function.getEntryPoint()) + "/decomp.c"),
                field("kind", kind),
                field("status", status),
                rawField("occurrences", Integer.toString(value.occurrences)),
                rawField("lines", integerArray(value.lines)),
                rawField("excerpts", jsonStringArray(value.excerpts)),
                field("intended_transform", intendedTransform(kind)),
                rawField("metadata", jsonObject(
                    rawField("address_hints", jsonStringArray(hints)),
                    field("detector", detector(kind))
                ))
            ));
        }
    }

    /**
     * Produce a corpus-wide quality inventory independently of the narrower
     * pseudocode-idiom catalogue.  These records deliberately include unresolved
     * naming/type debt (field_*, DAT_*, AnonShape_*) which is valid C but still poor
     * decompilation.  One JSONL row represents one issue kind in one function.
     */
    private void catalogQualityIssues(Function function, String code) {
        Map<String, QualityEvidence> evidence = new LinkedHashMap<>();
        String[] lines = code == null ? new String[0] : code.split("\\R", -1);
        for (int index = 0; index < lines.length; index++) {
            String line = lines[index];
            String stripped = line.stripLeading();
            if (line.contains(PSEUDOCODE_COMMENT_MARKER) || stripped.startsWith("/*") ||
                    stripped.startsWith("*") || stripped.startsWith("*/") ||
                    stripped.startsWith("//") || stripped.startsWith("#")) continue;
            addQualityMatches(evidence, "unexpanded_string_symbol",
                RESIDUAL_STRING_SYMBOL, line, index + 1);
            addQualityMatches(evidence, "casted_generic_field",
                RESIDUAL_CASTED_FIELD, line, index + 1);
            addQualityMatches(evidence, "generic_global_aggregate",
                RESIDUAL_GLOBAL_AGGREGATE, line, index + 1);
            addQualityMatches(evidence, "generic_field_name",
                RESIDUAL_GENERIC_FIELD, line, index + 1);
            addQualityMatches(evidence, "anonymous_shape_type",
                RESIDUAL_ANONYMOUS_SHAPE, line, index + 1);
            addQualityMatches(evidence, "generic_data_symbol",
                RESIDUAL_GENERIC_DATA, line, index + 1);
            addQualityMatches(evidence, "undefined_type",
                RESIDUAL_UNDEFINED_TYPE, line, index + 1);
            addQualityMatches(evidence, "control_flow_label",
                RESIDUAL_CONTROL_FLOW, line, index + 1);
            addQualityMatches(evidence, "raw_indirect_call",
                RAW_INDIRECT_CALL, line, index + 1);
            addQualityMatches(evidence, "packed_or_unaligned_piece",
                PACKED_PIECE, line, index + 1);
            addQualityMatches(evidence, "raw_pointer_offset",
                RAW_OFFSET_DEREFERENCE, line, index + 1);
            if (line.matches(".*\\b(?:unaff_|in_)[A-Za-z0-9_]+.*"))
                addQuality(evidence, "unresolved_register_input", 1, index + 1, line);
            if (line.matches(".*\\bextraout_[A-Za-z0-9_]+.*"))
                addQuality(evidence, "return_width_artifact", 1, index + 1, line);
            if ((line.contains("->elementSize") || line.contains(".elementSize")) &&
                    (line.contains("->data") || line.contains(".data")))
                addQuality(evidence, "dynamic_array_indexing", 1, index + 1, line);
            if (line.toLowerCase(Locale.ROOT).contains("0xa62"))
                addQuality(evidence, "flattened_global_record_array", 1, index + 1, line);
        }
        if (evidence.isEmpty()) return;
        String functionAddress = addr(function.getEntryPoint());
        qualityIssueFunctions.add(functionAddress);
        for (Map.Entry<String, QualityEvidence> item : evidence.entrySet()) {
            String kind = item.getKey();
            QualityEvidence value = item.getValue();
            qualityIssueRows.add(jsonObject(
                field("function_address", functionAddress),
                field("function_name", function.getName(true)),
                field("source_file", "functions/" + functionAddress + "/decomp.c"),
                field("kind", kind),
                field("severity", qualitySeverity(kind)),
                rawField("occurrences", Integer.toString(value.occurrences)),
                rawField("lines", integerArray(value.lines)),
                rawField("excerpts", jsonStringArray(value.excerpts)),
                field("recommended_resolution", qualityResolution(kind))
            ));
            QualityAggregate aggregate = qualityAggregates.computeIfAbsent(kind,
                ignored -> new QualityAggregate());
            aggregate.functions++;
            aggregate.occurrences += value.occurrences;
        }
    }

    private void addQualityMatches(Map<String, QualityEvidence> evidence, String kind,
            Pattern pattern, String line, int lineNumber) {
        Matcher matcher = pattern.matcher(line);
        int count = 0;
        while (matcher.find()) count++;
        if (count > 0) addQuality(evidence, kind, count, lineNumber, line);
    }

    private void addQuality(Map<String, QualityEvidence> evidence, String kind, int count,
            int lineNumber, String excerpt) {
        QualityEvidence value = evidence.computeIfAbsent(kind,
            ignored -> new QualityEvidence());
        value.occurrences += count;
        if (value.lines.size() < 24) value.lines.add(lineNumber);
        if (value.excerpts.size() < 6) value.excerpts.add(oneLine(excerpt));
    }

    private String qualitySeverity(String kind) {
        return switch (kind) {
            case "unexpanded_string_symbol", "casted_generic_field", "raw_indirect_call",
                 "unresolved_register_input", "return_width_artifact" -> "high";
            case "raw_pointer_offset", "packed_or_unaligned_piece",
                 "generic_global_aggregate", "undefined_type",
                 "flattened_global_record_array", "dynamic_array_indexing" -> "medium";
            default -> "low";
        };
    }

    private String qualityResolution(String kind) {
        return switch (kind) {
            case "unexpanded_string_symbol" ->
                "define the immutable NUL-terminated data and let the exporter inline it; writable buffers stay symbolic";
            case "casted_generic_field" ->
                "repair receiver/pointer-family ownership, then make the field width and signedness match the machine access";
            case "generic_global_aggregate" ->
                "recover the singleton or aggregate structure behind the global pointer and name stable semantic fields";
            case "generic_field_name" ->
                "layout is partly recovered; infer semantic name from accessors, callees, comparisons, and neighboring fields";
            case "anonymous_shape_type" ->
                "merge compatible cross-function shapes into a named type family after offset/type agreement";
            case "generic_data_symbol" ->
                "classify as scalar, string, singleton pointer, array, table, or record before assigning a semantic name";
            case "undefined_type" ->
                "recover width, signedness, pointer target, enum, or function prototype from definitions and consumers";
            case "control_flow_label" ->
                "restructure only after CFG/post-dominator proof; optimized shared tails may legitimately require a label";
            case "raw_indirect_call" ->
                "apply a callback or vtable-slot FunctionDefinition with the correct receiver and calling convention";
            case "packed_or_unaligned_piece" ->
                "model a packed field when proven; otherwise emit an explicit unaligned load/store helper";
            case "raw_pointer_offset" ->
                "propagate a compatible structure through the pointer family and materialize the fixed-offset field";
            case "unresolved_register_input" ->
                "repair function boundary, ABI, or SEH/setjmp live-in register semantics";
            case "return_width_artifact" ->
                "repair the callee return width/register model and propagate it to callers";
            case "dynamic_array_indexing" ->
                "recover element type or render DArrayAt<T>; runtime elementSize is not a native C array stride";
            case "flattened_global_record_array" ->
                "apply STPlayerRuntimeRecord and its nested arrays after base/stride proof";
            default -> "review machine-code evidence before changing the Ghidra database";
        };
    }

    private List<String> lineIdiomKinds(String line) {
        List<String> kinds = new ArrayList<>();
        if (line.contains("STDebugBreak()")) kinds.add("terminal_debug_trap");
        if (line.matches(".*\\b(?:unaff_|in_)[A-Za-z0-9_]+.*"))
            kinds.add("unresolved_register_input");
        boolean extraout = line.matches(".*\\bextraout_[A-Za-z0-9_]+.*");
        boolean concat = line.matches(".*\\bCONCAT[0-9]+\\s*\\(.*");
        if (extraout)
            kinds.add("return_width_artifact");
        if ((line.contains("->elementSize") || line.contains(".elementSize")) &&
                (line.contains("->data") || line.contains(".data")))
            kinds.add("dynamic_array_indexing");
        if (line.toLowerCase(Locale.ROOT).contains("0xa62"))
            kinds.add("flattened_global_record_array");
        if (RAW_INDIRECT_CALL.matcher(line).find()) kinds.add("raw_indirect_call");
        if (PACKED_PIECE.matcher(line).find() || (concat && !extraout))
            kinds.add("packed_or_unaligned_piece");
        // Prefer a more specific diagnosis over an additional generic offset hint.
        if (RAW_OFFSET_DEREFERENCE.matcher(line).find() &&
                !kinds.contains("dynamic_array_indexing") &&
                !kinds.contains("flattened_global_record_array") &&
                !kinds.contains("raw_indirect_call") &&
                !kinds.contains("packed_or_unaligned_piece"))
            kinds.add("raw_pointer_offset");
        return kinds;
    }

    private StatementWindow statementWindow(List<String> lines, int startIndex) {
        StringBuilder text = new StringBuilder();
        int endIndex = startIndex;
        for (int index = startIndex; index < lines.size() && index < startIndex + 12; index++) {
            String line = lines.get(index);
            if (line.contains(PSEUDOCODE_COMMENT_MARKER)) continue;
            if (text.length() > 0) text.append(' ');
            text.append(line.strip());
            endIndex = index;
            String trimmed = line.stripTrailing();
            if (trimmed.contains(";") || trimmed.endsWith("{") ||
                    trimmed.stripLeading().equals("}")) break;
        }
        return new StatementWindow(text.toString(), endIndex);
    }

    private String inlineTransform(String kind, String line) {
        return switch (kind) {
            case "unresolved_register_input" ->
                "candidate live-in register: verify boundary, SEH/setjmp ABI, or convention";
            case "return_width_artifact" ->
                "candidate call-output artifact: verify return width, clobbers, or x87 state";
            case "dynamic_array_indexing" -> darrayInlineTransform(line);
            case "flattened_global_record_array" ->
                line.toLowerCase(Locale.ROOT).contains("0x7f4fdd") ?
                    "expected g_playerRuntime[(char)param_1].tempSlots[param_2][param_3].objectIds" :
                    "expected g_playerRuntime[player].field[index...] after base/stride proof";
            case "raw_indirect_call" ->
                "expected typed vtable/callback call with explicit __thiscall receiver";
            case "packed_or_unaligned_piece" ->
                "expected named packed member, bit extract/compose, or unaligned load";
            case "raw_pointer_offset" ->
                "candidate structure field after proof; otherwise retain buffer arithmetic";
            default -> intendedTransform(kind);
        };
    }

    private String darrayInlineTransform(String line) {
        Matcher matcher = DARRAY_ELEMENT_ADDRESS.matcher(line);
        if (matcher.find())
            return "expected DArrayAt<T>(" + matcher.group(1) + ", " +
                oneLine(matcher.group(2)) + ") (runtime stride)";
        return "expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array)";
    }

    private void addIdiom(Map<String, IdiomEvidence> evidence, String kind, int lineNumber,
            String excerpt) {
        IdiomEvidence value = evidence.computeIfAbsent(kind, ignored -> new IdiomEvidence());
        value.occurrences++;
        if (lineNumber > 0 && value.lines.size() < 16) value.lines.add(lineNumber);
        if (value.excerpts.size() < 4) value.excerpts.add(oneLine(excerpt));
        if (!kind.equals("terminal_debug_trap")) value.addressHints.addAll(addressHints(excerpt));
    }

    private List<String> int3Addresses(Function function) {
        List<String> result = new ArrayList<>();
        InstructionIterator instructions = listing.getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            try {
                byte[] bytes = instruction.getBytes();
                if (bytes.length > 0 && (bytes[0] & 0xff) == 0xcc)
                    result.add(addr(instruction.getAddress()));
            }
            catch (ghidra.program.model.mem.MemoryAccessException ignored) { }
        }
        return result;
    }

    private List<String> addressHints(String line) {
        List<String> result = new ArrayList<>();
        Matcher matcher = HEX_ADDRESS.matcher(line == null ? "" : line);
        while (matcher.find() && result.size() < 8) {
            try {
                long offset = Long.parseUnsignedLong(matcher.group(1), 16);
                Address address = currentProgram.getAddressFactory().getDefaultAddressSpace()
                    .getAddress(offset);
                Symbol symbol = symbols.getPrimarySymbol(address);
                if (symbol != null) result.add(addr(address) + " " + symbol.getName(true));
                else {
                    Data data = listing.getDefinedDataContaining(address);
                    result.add(addr(address) + (data == null ? "" :
                        " inside " + data.getPathName() + " @ " + addr(data.getMinAddress())));
                }
            }
            catch (Exception ignored) { }
        }
        return result;
    }

    private String intendedTransform(String kind) {
        return switch (kind) {
            case "terminal_debug_trap" ->
                "replace swi(3) plus synthetic indirect call/return with noreturn STDebugBreak()";
            case "bulk_zero_initialization" ->
                "replace the REP STOSD/STOSB decompiler loop with memset(destination, 0, byte_count)";
            case "unresolved_register_input" ->
                "verify function boundary, calling convention, and SEH/setjmp live-in state before replacing unaff_/in_";
            case "return_width_artifact" ->
                "repair the proven call output: return width, register clobber, x87 stack state, or split high variable";
            case "dynamic_array_indexing" ->
                "render DArrayGet(array, index) or typed array->data[index]; runtime elementSize prevents a static C array type";
            case "flattened_global_record_array" ->
                "recompose as g_playerRuntime[player].field[index...] using the 0xA62 record stride and data-component metadata";
            case "raw_indirect_call" ->
                "apply a function-pointer or vtable-slot prototype, including explicit __thiscall receiver";
            case "packed_or_unaligned_piece" ->
                "replace piece syntax with a named packed field, bit extract/compose, memcpy, or explicit unaligned load";
            case "raw_pointer_offset" ->
                "propagate a compatible structure type across the pointer family and render a named field access";
            default -> "review and express the machine operation as typed, compilable source";
        };
    }

    private String detector(String kind) {
        return switch (kind) {
            case "terminal_debug_trap" -> "x86 opcode CC plus decompiler swi(3) call idiom";
            case "bulk_zero_initialization" ->
                "exact decrementing undefined4 zero loop with an optional undefined1/2/4/8 tail store";
            case "unresolved_register_input" -> "unaff_*/in_* high-variable name";
            case "return_width_artifact" ->
                "extraout_* high variable, possibly consumed by CONCAT*";
            case "dynamic_array_indexing" -> "same expression uses DArrayTy.elementSize and .data";
            case "flattened_global_record_array" -> "literal 0xA62 STPlayerRuntimeRecord stride";
            case "raw_indirect_call" -> "cast to code* or code** at call site";
            case "packed_or_unaligned_piece" ->
                "Ghidra piece/CONCAT syntax or packed member arithmetic";
            case "raw_pointer_offset" -> "typed dereference over param/local plus constant offset";
            default -> "text pattern";
        };
    }

    private String integerArray(Collection<Integer> values) {
        List<String> strings = new ArrayList<>();
        for (Integer value : values) strings.add(Integer.toString(value));
        return "[" + String.join(",", strings) + "]";
    }

    private void writePseudocodeArtifacts() throws IOException {
        pseudocodeIdiomRows.sort(Comparator.naturalOrder());
        atomicWrite(programRoot.resolve("pseudocode_idioms.jsonl"), writer -> {
            for (String row : pseudocodeIdiomRows) {
                writer.write(row);
                writer.newLine();
            }
        });
        qualityIssueRows.sort(Comparator.naturalOrder());
        atomicWrite(programRoot.resolve("decomp_quality_issues.jsonl"), writer -> {
            for (String row : qualityIssueRows) {
                writer.write(row);
                writer.newLine();
            }
        });
        List<String> categories = new ArrayList<>();
        for (Map.Entry<String, QualityAggregate> item : qualityAggregates.entrySet()) {
            categories.add(jsonObject(
                field("kind", item.getKey()),
                field("severity", qualitySeverity(item.getKey())),
                rawField("functions", Integer.toString(item.getValue().functions)),
                rawField("occurrences", Integer.toString(item.getValue().occurrences)),
                field("recommended_resolution", qualityResolution(item.getKey()))
            ));
        }
        writeJson(programRoot.resolve("decomp_quality_summary.json"), jsonObject(
            field("schema", "st-decomp-quality-summary"),
            rawField("schema_version", "1"),
            field("scope", "all exported functions/**/decomp.c bodies"),
            rawField("body_function_count", Integer.toString(bodyFunctionCount)),
            rawField("functions_with_issues", Integer.toString(qualityIssueFunctions.size())),
            rawField("issue_record_count", Integer.toString(qualityIssueRows.size())),
            rawField("categories", "[" + String.join(",", categories) + "]")
        ));
        writeText(programRoot.resolve("pseudocode_runtime.h"),
            "#ifndef ST_PSEUDOCODE_RUNTIME_H\n" +
            "#define ST_PSEUDOCODE_RUNTIME_H\n\n" +
            "/* Standalone corpus code has no debugger continuation path. */\n" +
            "#include <stdlib.h>\n" +
            "#include <string.h>\n" +
            "#if defined(_MSC_VER)\n" +
            "__declspec(noreturn) static __inline void STDebugBreak(void) { abort(); }\n" +
            "#else\n" +
            "static inline __attribute__((noreturn)) void STDebugBreak(void) { abort(); }\n" +
            "#endif\n\n" +
            "#endif\n");
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
        Set<String> related = new TreeSet<>();
        collectTypeIdentity(function.getReturnType(), related);
        for (Variable variable : function.getParameters()) collectTypeIdentity(variable.getDataType(), related);
        for (Variable variable : function.getLocalVariables()) collectTypeIdentity(variable.getDataType(), related);
        for (Function callee : calledFunctions) {
            collectTypeIdentity(callee.getReturnType(), related);
            for (Variable variable : callee.getParameters())
                collectTypeIdentity(variable.getDataType(), related);
        }
        collectReferencedDataTypes(function, related);
        collectAccessedCompositeFields(function, related);
        MessageDigest digest = MessageDigest.getInstance("SHA-256");
        for (String item : related) updateDigest(digest, item);
        StringBuilder hex = new StringBuilder();
        for (byte value : digest.digest()) hex.append(String.format("%02x", value & 0xff));
        return hex.toString();
    }

    private void collectTypeIdentity(DataType type, Set<String> result) {
        if (type == null) return;
        String key = "type\u0000" + type.getPathName();
        if (!result.add(key)) return;
        // Structure layouts are dependency-scoped below. A union is different: member
        // order and every overlapping alternative can change which expression the
        // decompiler selects for the same byte offset, so its complete ordered layout is
        // a real per-function dependency whenever the union type is referenced.
        if (type instanceof ghidra.program.model.data.Union union) {
            result.add(key + "\u0000" + type.getLength() + "\u0000" +
                nullToEmpty(type.getDescription()) + "\u0000" + dataTypeDetailJson(type));
            for (ghidra.program.model.data.DataTypeComponent component : union.getComponents())
                collectTypeIdentity(component.getDataType(), result);
            return;
        }
        // A structure's full layout is intentionally excluded here. Only components
        // actually addressed by this function are added below.
        if (type instanceof ghidra.program.model.data.Structure) return;
        result.add(key + "\u0000" + type.getLength() + "\u0000" +
            nullToEmpty(type.getDescription()) + "\u0000" + dataTypeDetailJson(type));
        if (type instanceof ghidra.program.model.data.Pointer pointer) {
            collectTypeIdentity(pointer.getDataType(), result);
        }
        else if (type instanceof ghidra.program.model.data.TypeDef typedef) {
            collectTypeIdentity(typedef.getBaseDataType(), result);
        }
        else if (type instanceof ghidra.program.model.data.Array array) {
            collectTypeIdentity(array.getDataType(), result);
        }
        else if (type instanceof ghidra.program.model.data.FunctionDefinition definition) {
            collectTypeIdentity(definition.getReturnType(), result);
            for (ghidra.program.model.data.ParameterDefinition argument : definition.getArguments())
                collectTypeIdentity(argument.getDataType(), result);
        }
    }

    private void collectReferencedDataTypes(Function function, Set<String> result)
            throws IOException {
        InstructionIterator instructions = listing.getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            checkCancelled();
            Instruction instruction = instructions.next();
            for (Reference reference : references.getReferencesFrom(instruction.getAddress())) {
                Address target = reference.getToAddress();
                if (target == null || !target.isMemoryAddress()) continue;
                Data data = listing.getDefinedDataContaining(target);
                if (data == null) continue;
                DataType type = data.getDataType();
                collectTypeIdentity(type, result);
                if (type instanceof ghidra.program.model.data.Structure structure) {
                    long offset = target.subtract(data.getMinAddress());
                    addAccessedComponent(new TypedAccess(structure, 0), offset, result);
                }
            }
        }
    }

    private void collectAccessedCompositeFields(Function function, Set<String> result)
            throws IOException {
        List<FingerprintBlock> blocks = fingerprintBlocks(function);
        if (blocks.isEmpty()) return;
        FingerprintBlock entryBlock = blocks.stream()
            .filter(block -> block.start.equals(function.getEntryPoint()))
            .findFirst().orElse(blocks.get(0));
        FingerprintState entry = fingerprintEntryState(function);
        Map<FingerprintBlock, FingerprintState> inputs = new LinkedHashMap<>();
        Map<FingerprintBlock, FingerprintState> outputs = new LinkedHashMap<>();
        Map<FingerprintBlock, Set<String>> dependencies = new LinkedHashMap<>();
        Set<String> observedDependencies = new TreeSet<>();
        ArrayDeque<FingerprintBlock> work = new ArrayDeque<>();
        Set<FingerprintBlock> queued = new HashSet<>();
        inputs.put(entryBlock, entry.copy());
        work.add(entryBlock);
        queued.add(entryBlock);

        // Re-evaluate only successors whose joined input actually changed.  The
        // previous whole-function sweeps processed every block at least twice and
        // became the dominant cost even when 99% of functions were cache hits.
        int processed = 0;
        int processLimit = Math.max(128, blocks.size() * 16);
        boolean fallback = false;
        while (!work.isEmpty()) {
            checkCancelled();
            if (++processed > processLimit) {
                fallback = true;
                break;
            }
            FingerprintBlock block = work.removeFirst();
            queued.remove(block);
            FingerprintState input = inputs.get(block);
            if (input == null) continue;
            Set<String> blockDependencies = new TreeSet<>();
            FingerprintState output = transferFingerprintBlock(block, input, blockDependencies);
            dependencies.put(block, blockDependencies);
            observedDependencies.addAll(blockDependencies);
            if (output.equals(outputs.get(block))) continue;
            outputs.put(block, output);
            for (FingerprintBlock successor : block.successors) {
                if (successor == entryBlock) continue;
                List<FingerprintState> predecessors = new ArrayList<>();
                for (FingerprintBlock predecessor : successor.predecessors) {
                    FingerprintState state = outputs.get(predecessor);
                    if (state != null) predecessors.add(state);
                }
                if (predecessors.isEmpty()) continue;
                FingerprintState joined = joinFingerprintStates(predecessors);
                if (joined.equals(inputs.get(successor))) continue;
                inputs.put(successor, joined);
                if (queued.add(successor)) work.addLast(successor);
            }
        }

        if (fallback) {
            // A malformed/irreducible CFG must never stall a full export.  Every
            // dependency seen before widening is retained, which may invalidate
            // a few extra cached bodies but cannot reuse a body after a known
            // relevant type change.
            result.addAll(observedDependencies);
            fingerprintCfgFallbackCount++;
            if (fingerprintCfgFallbackFunctions.size() < 32)
                fingerprintCfgFallbackFunctions.add(addr(function.getEntryPoint()));
        }
        else {
            // Each block's dependency set is replaced whenever its input changes,
            // so the final union corresponds to the converged states without a
            // second full instruction pass.
            for (Set<String> blockDependencies : dependencies.values())
                result.addAll(blockDependencies);
        }
    }

    private FingerprintState fingerprintEntryState(Function function) {
        FingerprintState state = new FingerprintState();
        long frameBias = currentProgram.getDefaultPointerSize();
        for (Parameter parameter : function.getParameters()) {
            TypedAccess value = typedPointer(parameter.getDataType());
            if (value == null) continue;
            if (parameter.isAutoParameter() && "ECX".equalsIgnoreCase(
                    parameter.getRegister() == null ? "" : parameter.getRegister().getName())) {
                state.registers.put("ECX", value);
            }
            else if (parameter.isStackVariable()) {
                state.stack.put((long)parameter.getStackOffset() + frameBias, value);
            }
        }
        return state;
    }

    private List<FingerprintBlock> fingerprintBlocks(Function function) throws IOException {
        List<Instruction> instructions = new ArrayList<>();
        InstructionIterator iterator = listing.getInstructions(function.getBody(), true);
        while (iterator.hasNext()) instructions.add(iterator.next());
        if (instructions.isEmpty()) return List.of();

        Set<Address> starts = new HashSet<>();
        starts.add(instructions.get(0).getAddress());
        for (int index = 0; index < instructions.size(); index++) {
            Instruction instruction = instructions.get(index);
            boolean call = instruction.getFlowType().isCall();
            if (!call) {
                for (Address flow : instruction.getFlows())
                    if (function.getBody().contains(flow)) starts.add(flow);
                for (Reference reference : instruction.getReferencesFrom()) {
                    Address target = reference.getToAddress();
                    if (reference.getReferenceType().isFlow() && target != null &&
                            function.getBody().contains(target)) starts.add(target);
                }
            }
            if (index + 1 < instructions.size() &&
                    (instruction.getFlowType().isJump() ||
                     instruction.getFlowType().isTerminal() ||
                     instruction.getFallThrough() == null ||
                     !instruction.getFallThrough().equals(instructions.get(index + 1).getAddress())))
                starts.add(instructions.get(index + 1).getAddress());
        }

        List<FingerprintBlock> blocks = new ArrayList<>();
        FingerprintBlock current = null;
        for (Instruction instruction : instructions) {
            if (current == null || starts.contains(instruction.getAddress())) {
                current = new FingerprintBlock(instruction.getAddress());
                blocks.add(current);
            }
            current.instructions.add(instruction);
        }
        Map<Address, FingerprintBlock> byStart = new HashMap<>();
        for (FingerprintBlock block : blocks) byStart.put(block.start, block);
        for (FingerprintBlock block : blocks) {
            Instruction last = block.instructions.get(block.instructions.size() - 1);
            Set<Address> destinations = new LinkedHashSet<>();
            if (!last.getFlowType().isCall()) {
                for (Address flow : last.getFlows()) destinations.add(flow);
                for (Reference reference : last.getReferencesFrom())
                    if (reference.getReferenceType().isFlow())
                        destinations.add(reference.getToAddress());
            }
            Address fallThrough = last.getFallThrough();
            if (fallThrough != null) destinations.add(fallThrough);
            for (Address destination : destinations) {
                FingerprintBlock successor = byStart.get(destination);
                if (successor == null) continue;
                block.successors.add(successor);
                successor.predecessors.add(block);
            }
        }
        return blocks;
    }

    private FingerprintState joinFingerprintStates(List<FingerprintState> states) {
        FingerprintState result = new FingerprintState();
        Set<String> registerKeys = new HashSet<>();
        Set<Long> stackKeys = new HashSet<>();
        for (FingerprintState state : states) {
            registerKeys.addAll(state.registers.keySet());
            stackKeys.addAll(state.stack.keySet());
        }
        for (String key : registerKeys) {
            TypedAccess value = consistentFingerprintValue(states, key, false);
            if (value != null) result.registers.put(key, value);
        }
        for (Long key : stackKeys) {
            TypedAccess value = consistentFingerprintValue(states, key, true);
            if (value != null) result.stack.put(key, value);
        }
        return result;
    }

    private TypedAccess consistentFingerprintValue(List<FingerprintState> states,
            Object key, boolean stack) {
        TypedAccess result = null;
        for (FingerprintState state : states) {
            TypedAccess candidate = stack ? state.stack.get((Long)key) :
                state.registers.get((String)key);
            // A fact is valid after a join only when every currently reachable
            // predecessor carries the same value.  Ignoring an absent value made
            // loop headers alternate between present/absent facts indefinitely.
            if (candidate == null) return null;
            if (result == null) result = candidate;
            else if (!result.equals(candidate)) return null;
        }
        return result;
    }

    private FingerprintState transferFingerprintBlock(FingerprintBlock block,
            FingerprintState input, Set<String> result) throws IOException {
        FingerprintState state = input.copy();
        for (Instruction instruction : block.instructions) {
            checkCancelled();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            String[] operands = fingerprintOperands(instruction.toString().toUpperCase(Locale.ROOT));
            if (result != null) {
                for (String operand : operands) {
                    FingerprintMemory memory = fingerprintMemory(operand);
                    TypedAccess base = memory == null ? null :
                        state.registers.get(memory.register);
                    if (base != null) addAccessedComponent(base, memory.displacement, result);
                }
            }
            if ("CALL".equals(mnemonic)) {
                Function called = fingerprintCalledFunction(instruction);
                state.registers.remove("EAX"); state.registers.remove("ECX");
                state.registers.remove("EDX");
                if (called != null) {
                    TypedAccess returned = typedPointer(called.getReturnType());
                    if (returned != null) state.registers.put("EAX", returned);
                }
                continue;
            }
            updateFingerprintState(instruction, mnemonic, operands, state);
        }
        return state;
    }

    private void updateFingerprintState(Instruction instruction, String mnemonic,
            String[] operands, FingerprintState state) {
        if (operands.length == 0) return;
        if ("MOV".equals(mnemonic) && operands.length >= 2) {
            FingerprintMemory destinationMemory = fingerprintMemory(operands[0]);
            if (destinationMemory != null && "EBP".equals(destinationMemory.register)) {
                String sourceRegister = fingerprintRegister(operands[1]);
                TypedAccess source = sourceRegister != null &&
                    fingerprintFullRegister(operands[1]) ?
                    state.registers.get(sourceRegister) : null;
                if (source == null) state.stack.remove(destinationMemory.displacement);
                else state.stack.put(destinationMemory.displacement, source);
                return;
            }
        }
        String destination = fingerprintRegister(operands[0]);
        if (destination == null) return;
        if (!fingerprintFullRegister(operands[0])) {
            state.registers.remove(destination); return;
        }
        if ("MOV".equals(mnemonic) && operands.length >= 2) {
            TypedAccess source = null;
            String sourceRegister = fingerprintRegister(operands[1]);
            if (sourceRegister != null && fingerprintFullRegister(operands[1]))
                source = state.registers.get(sourceRegister);
            FingerprintMemory memory = fingerprintMemory(operands[1]);
            if (source == null && memory != null && "EBP".equals(memory.register))
                source = state.stack.get(memory.displacement);
            if (source == null && memory != null) {
                TypedAccess base = state.registers.get(memory.register);
                if (base != null) source = loadedCompositeField(base, memory.displacement);
            }
            if (source == null) source = referencedTypedPointer(instruction, 1);
            if (source == null) state.registers.remove(destination);
            else state.registers.put(destination, source);
            return;
        }
        if ("LEA".equals(mnemonic) && operands.length >= 2) {
            FingerprintMemory memory = fingerprintMemory(operands[1]);
            TypedAccess base = memory == null ? null : state.registers.get(memory.register);
            if (base == null) state.registers.remove(destination);
            else state.registers.put(destination,
                new TypedAccess(base.structure, base.offset + memory.displacement));
            return;
        }
        if (("ADD".equals(mnemonic) || "SUB".equals(mnemonic)) && operands.length >= 2 &&
                state.registers.containsKey(destination)) {
            Long value = fingerprintImmediate(operands[1]);
            if (value == null) state.registers.remove(destination);
            else {
                TypedAccess old = state.registers.get(destination);
                state.registers.put(destination, new TypedAccess(old.structure, old.offset +
                    ("SUB".equals(mnemonic) ? -value : value)));
            }
            return;
        }
        if (!Set.of("CMP", "TEST", "PUSH", "JMP", "RET").contains(mnemonic))
            state.registers.remove(destination);
    }

    private void addAccessedComponent(TypedAccess base, long displacement, Set<String> result) {
        long offset = base.offset + displacement;
        ghidra.program.model.data.Structure structure = base.structure;
        if (offset < 0 || offset > Integer.MAX_VALUE || offset >= structure.getLength()) {
            result.add("field\u0000" + structure.getPathName() + "\u0000out_of_range\u0000" +
                offset + "\u0000" + structure.getLength());
            return;
        }
        List<ghidra.program.model.data.DataTypeComponent> components =
            structure.getComponentsContaining((int)offset);
        if (components.isEmpty()) {
            ghidra.program.model.data.DataTypeComponent component =
                structure.getComponentContaining((int)offset);
            if (component != null) components = List.of(component);
        }
        for (ghidra.program.model.data.DataTypeComponent component : components) {
            DataType type = component.getDataType();
            result.add("field\u0000" + structure.getPathName() + "\u0000" +
                component.getOffset() + "\u0000" + component.getLength() + "\u0000" +
                nullToEmpty(component.getFieldName()) + "\u0000" + type.getPathName() +
                "\u0000" + nullToEmpty(component.getComment()));
            collectTypeIdentity(type, result);
        }
    }

    private TypedAccess loadedCompositeField(TypedAccess base, long displacement) {
        long offset = base.offset + displacement;
        if (offset < 0 || offset > Integer.MAX_VALUE || offset >= base.structure.getLength())
            return null;
        ghidra.program.model.data.DataTypeComponent component =
            base.structure.getComponentContaining((int)offset);
        return component == null ? null : typedPointer(component.getDataType());
    }

    private TypedAccess referencedTypedPointer(Instruction instruction, int operandIndex) {
        for (Reference reference : instruction.getReferencesFrom()) {
            if (reference.getOperandIndex() != operandIndex) continue;
            Data data = listing.getDefinedDataContaining(reference.getToAddress());
            if (data == null) continue;
            TypedAccess value = typedPointer(data.getDataType());
            if (value != null) return value;
        }
        return null;
    }

    private TypedAccess typedPointer(DataType type) {
        DataType current = type;
        Set<String> seen = new HashSet<>();
        while (current instanceof ghidra.program.model.data.TypeDef typedef &&
                seen.add(current.getPathName())) current = typedef.getBaseDataType();
        if (!(current instanceof ghidra.program.model.data.Pointer pointer)) return null;
        current = pointer.getDataType();
        while (current instanceof ghidra.program.model.data.TypeDef typedef &&
                seen.add(current.getPathName())) current = typedef.getBaseDataType();
        return current instanceof ghidra.program.model.data.Structure structure ?
            new TypedAccess(structure, 0) : null;
    }

    private Function fingerprintCalledFunction(Instruction instruction) {
        for (Address flow : instruction.getFlows()) {
            Function function = currentProgram.getFunctionManager().getFunctionAt(flow);
            if (function == null) continue;
            Set<Address> seen = new HashSet<>();
            while (function.isThunk() && seen.add(function.getEntryPoint())) {
                Function target = function.getThunkedFunction(false);
                if (target == null || target.equals(function)) break;
                function = target;
            }
            return function;
        }
        return null;
    }

    private String[] fingerprintOperands(String instruction) {
        int space = instruction.indexOf(' ');
        return space < 0 || space == instruction.length() - 1 ? new String[0] :
            instruction.substring(space + 1).split("\\s*,\\s*");
    }
    private FingerprintMemory fingerprintMemory(String operand) {
        int open = operand.indexOf('['), close = operand.lastIndexOf(']');
        if (open < 0 || close <= open) return null;
        String value = operand.substring(open, close + 1)
            .replace(" ", "").toUpperCase(Locale.ROOT);
        java.util.regex.Matcher matcher = SIMPLE_MEMORY.matcher(value);
        if (!matcher.matches()) return null;
        long displacement = 0;
        if (matcher.group(4) != null) {
            Long parsed = fingerprintImmediate(matcher.group(4)); if (parsed == null) return null;
            boolean negative = "-".equals(matcher.group(2)) ^ "-".equals(matcher.group(3));
            displacement = negative ? -parsed : parsed;
            if (!negative && currentProgram.getDefaultPointerSize() == 4 &&
                    displacement >= 0x80000000L && displacement <= 0xffffffffL)
                displacement -= 0x100000000L;
        }
        return new FingerprintMemory(fingerprintCanonicalRegister(matcher.group(1)), displacement);
    }
    private String fingerprintRegister(String operand) {
        String value = operand.trim().toUpperCase(Locale.ROOT);
        return value.matches("[A-Z][A-Z0-9]{1,3}") ?
            fingerprintCanonicalRegister(value) : null;
    }
    private String fingerprintCanonicalRegister(String register) {
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
    private boolean fingerprintFullRegister(String operand) {
        return Set.of("EAX", "EBX", "ECX", "EDX", "ESI", "EDI", "EBP", "ESP",
            "RAX", "RBX", "RCX", "RDX", "RSI", "RDI", "RBP", "RSP")
            .contains(operand.trim().toUpperCase(Locale.ROOT));
    }
    private Long fingerprintImmediate(String operand) {
        String value = operand.trim().toUpperCase(Locale.ROOT).replace("+", "");
        try {
            if (value.startsWith("0X")) return Long.parseUnsignedLong(value.substring(2), 16);
            if (value.matches("[0-9]+")) return Long.parseLong(value);
        }
        catch (NumberFormatException ignored) { }
        return null;
    }

    private static class TypedAccess {
        final ghidra.program.model.data.Structure structure; final long offset;
        TypedAccess(ghidra.program.model.data.Structure structure, long offset) {
            this.structure = structure; this.offset = offset;
        }
        @Override public boolean equals(Object other) {
            if (!(other instanceof TypedAccess value)) return false;
            return offset == value.offset &&
                structure.getPathName().equals(value.structure.getPathName());
        }
        @Override public int hashCode() {
            return 31 * structure.getPathName().hashCode() + Long.hashCode(offset);
        }
    }
    private static class FingerprintState {
        final Map<String, TypedAccess> registers = new HashMap<>();
        final Map<Long, TypedAccess> stack = new HashMap<>();
        FingerprintState copy() {
            FingerprintState result = new FingerprintState();
            result.registers.putAll(registers);
            result.stack.putAll(stack);
            return result;
        }
        @Override public boolean equals(Object other) {
            if (!(other instanceof FingerprintState value)) return false;
            return registers.equals(value.registers) && stack.equals(value.stack);
        }
        @Override public int hashCode() { return 31 * registers.hashCode() + stack.hashCode(); }
    }
    private static class FingerprintBlock {
        final Address start;
        final List<Instruction> instructions = new ArrayList<>();
        final Set<FingerprintBlock> predecessors = new LinkedHashSet<>();
        final Set<FingerprintBlock> successors = new LinkedHashSet<>();
        FingerprintBlock(Address start) { this.start = start; }
    }
    private static class FingerprintMemory {
        final String register; final long displacement;
        FingerprintMemory(String register, long displacement) {
            this.register = register; this.displacement = displacement;
        }
    }
    private static class IdiomEvidence {
        int occurrences;
        final List<Integer> lines = new ArrayList<>();
        final List<String> excerpts = new ArrayList<>();
        final Set<String> addressHints = new TreeSet<>();
    }
    private static class QualityEvidence {
        int occurrences;
        final List<Integer> lines = new ArrayList<>();
        final List<String> excerpts = new ArrayList<>();
    }
    private static class QualityAggregate {
        int functions;
        int occurrences;
    }
    private record NormalizedCode(String code, int replacements) { }
    private record StatementWindow(String text, int endIndex) { }

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
            rawField("pseudocode_normalized_site_count",
                Integer.toString(pseudocodeNormalizationCount)),
            rawField("fingerprint_cfg_fallback_count",
                Integer.toString(fingerprintCfgFallbackCount)),
            rawField("fingerprint_cfg_fallback_functions",
                jsonStringArray(fingerprintCfgFallbackFunctions)),
            rawField("pseudocode_idiom_function_count",
                Integer.toString(pseudocodeIdiomFunctions.size())),
            rawField("pseudocode_idiom_record_count",
                Integer.toString(pseudocodeIdiomRows.size())),
            rawField("decomp_quality_function_count",
                Integer.toString(qualityIssueFunctions.size())),
            rawField("decomp_quality_record_count",
                Integer.toString(qualityIssueRows.size())),
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
