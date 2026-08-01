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
import java.util.Base64;
import java.util.Arrays;
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
import java.util.UUID;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import java.util.stream.Stream;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressIterator;
import ghidra.program.model.address.AddressSet;
import ghidra.program.model.address.AddressSetView;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeComponent;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.Enum;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.TypeDef;
import ghidra.program.model.lang.OperandType;
import ghidra.program.model.lang.Register;
import ghidra.program.model.listing.Bookmark;
import ghidra.program.model.listing.BookmarkManager;
import ghidra.program.model.listing.CodeUnitIterator;
import ghidra.program.model.listing.CommentType;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.DataIterator;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Listing;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.listing.Variable;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.mem.MemoryBlock;
import ghidra.program.model.scalar.Scalar;
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
    private static final int COVERAGE_PADDING_RUN = 16;
    private static final int COVERAGE_MAX_RANGE = 0x10000;
    private static final String FUNCTION_ANALYSIS_CACHE_SCHEMA = "1";
    private static final Pattern INT3_ASSIGNMENT = Pattern.compile(
        "^(\\s*)([A-Za-z_][A-Za-z0-9_]*)\\s*=\\s*\\(code \\*\\)swi\\(3\\);\\s*$");
    private static final Pattern ASSIGNED_INDIRECT_CALL = Pattern.compile(
        "^(\\s*)([A-Za-z_][A-Za-z0-9_]*)\\s*=\\s*" +
        "(?:\\([^()]+\\)\\s*)?\\(\\*([A-Za-z_][A-Za-z0-9_]*)\\)\\(\\);\\s*$");
    private static final Pattern PLAIN_INDIRECT_CALL = Pattern.compile(
        "^(\\s*)\\(\\*([A-Za-z_][A-Za-z0-9_]*)\\)\\(\\);\\s*$");
    private static final Pattern EXPLICIT_THIS_VIRTUAL_CALL = Pattern.compile(
        "\\(\\*([A-Za-z_][A-Za-z0-9_]*)->vtable->" +
        "([A-Za-z_][A-Za-z0-9_]*)\\)\\s*\\(");
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
    private static final Pattern BULK_COPY_WORD_HEADER = Pattern.compile(
        "^(?<indent>[ \\t]*)for[ \\t]*\\((?<counter>[A-Za-z_$][A-Za-z0-9_$]*)" +
        "[ \\t]*=[ \\t]*(?:\\(uint\\)[ \\t]*)?(?<bytes>[A-Za-z_$][A-Za-z0-9_$]*)" +
        "[ \\t]*>>[ \\t]*2;[ \\t]*\\k<counter>[ \\t]*!=[ \\t]*0;[ \\t]*" +
        "\\k<counter>[ \\t]*=[ \\t]*\\k<counter>[ \\t]*-[ \\t]*1\\)[ \\t]*\\{[ \\t]*$");
    private static final Pattern BULK_COPY_TAIL_HEADER = Pattern.compile(
        "^(?<indent>[ \\t]*)for[ \\t]*\\((?<counter>[A-Za-z_$][A-Za-z0-9_$]*)" +
        "[ \\t]*=[ \\t]*(?<bytes>[A-Za-z_$][A-Za-z0-9_$]*)[ \\t]*&[ \\t]*3;" +
        "[ \\t]*\\k<counter>" +
        "[ \\t]*!=[ \\t]*0;[ \\t]*\\k<counter>[ \\t]*=[ \\t]*\\k<counter>" +
        "[ \\t]*-[ \\t]*1\\)[ \\t]*\\{[ \\t]*$");
    private static final Pattern BULK_COPY_FIXED_HEADER = Pattern.compile(
        "^(?<indent>[ \\t]*)for[ \\t]*\\((?<counter>[A-Za-z_$][A-Za-z0-9_$]*)" +
        "[ \\t]*=[ \\t]*(?<count>0x[0-9A-Fa-f]+|[0-9]+);[ \\t]*" +
        "\\k<counter>[ \\t]*!=[ \\t]*0;[ \\t]*\\k<counter>[ \\t]*=[ \\t]*" +
        "\\k<counter>[ \\t]*(?:\\+[ \\t]*-1|-[ \\t]*1)\\)[ \\t]*\\{[ \\t]*$");
    private static final Pattern POINTER_INCREMENT = Pattern.compile(
        "^(?<name>[A-Za-z_$][A-Za-z0-9_$]*)[ \\t]*=[ \\t]*\\k<name>" +
        "[ \\t]*\\+[ \\t]*1;$");
    private static final Pattern BYTE_POINTER_INCREMENT = Pattern.compile(
        "^(?<name>[A-Za-z_$][A-Za-z0-9_$]*)[ \\t]*=[ \\t]*" +
        "\\([^;]+\\)[ \\t]*\\(\\(int\\)[ \\t]*\\k<name>[ \\t]*\\+[ \\t]*1\\);$");
    private static final Pattern BYTE_POINTER_INCREMENT_FOUR = Pattern.compile(
        "^(?<name>[A-Za-z_$][A-Za-z0-9_$]*)[ \\t]*=[ \\t]*\\k<name>" +
        "[ \\t]*\\+[ \\t]*4;$");
    private static final Pattern BYTE_ZERO_ELEMENT = Pattern.compile(
        "^(?<name>[A-Za-z_$][A-Za-z0-9_$]*)\\[(?<index>[0-3])\\]" +
        "[ \\t]*=[ \\t]*(?:\\([^)]*\\)[ \\t]*)?0;$");
    private static final String BULK_COPY_MARKER =
        "/* compiler REP MOVS byte copy */";
    private static final Pattern LEGACY_BULK_COPY = Pattern.compile(
        "^(?<indent>[ \\t]*)memmove\\(" +
        "(?<destination>[A-Za-z_$][A-Za-z0-9_$]*),[ \\t]*" +
        "(?<source>[A-Za-z_$][A-Za-z0-9_$]*),[ \\t]*" +
        "(?<bytes>0x[0-9A-Fa-f]+|[0-9]+)\\);[ \\t]*" +
        Pattern.quote(BULK_COPY_MARKER) + "$");
    private static final Pattern AFFINE_SELF_CANCELLATION = Pattern.compile(
        "(?<cast>\\([A-Za-z_$][A-Za-z0-9_$: ]*\\s*\\*+\\))\\s*" +
        "\\(\\s*\\(int\\)\\s*\\(\\s*(?<base>[A-Za-z_$][A-Za-z0-9_$]*)\\s*" +
        "\\+\\s*(?<index>0x[0-9A-Fa-f]+|[0-9]+)\\s*\\)\\s*\\+\\s*" +
        "\\(\\s*-(?<bytes>0x[0-9A-Fa-f]+|[0-9]+)\\s*-\\s*" +
        "\\(int\\)\\s*\\k<base>\\s*\\)\\s*\\)");
    private static final Pattern PARTIAL_AL_ZERO_RETURN = Pattern.compile(
        "(?m)^(?<indent>[ \\t]*)return\\s+\\(uint\\)\\(uint3\\)" +
        "\\([^;\\r\\n]+>>\\s*(?:7|0x7)\\s*\\)\\s*<<\\s*(?:8|0x8)\\s*;[ \\t]*$");
    private static final Pattern HEX_ADDRESS = Pattern.compile("0x([0-9A-Fa-f]{6,8})");
    private static final Pattern INTEGER_LITERAL = Pattern.compile(
        "(?i)(?<![A-Za-z0-9_])(?:0x([0-9a-f]+)|(\\d+))(?![A-Za-z0-9_])");
    private static final Pattern RAW_INDIRECT_CALL = Pattern.compile(
        "\\(\\*\\*?\\(code \\*\\*?\\)|\\(\\*\\(code \\*\\)");
    private static final Pattern RAW_OFFSET_DEREFERENCE = Pattern.compile(
        "\\*\\([^)]*\\*\\)\\([^;]*(?:param_|local_|->)[^;]*[+-]\\s*0x[0-9A-Fa-f]+");
    private static final Pattern PACKED_PIECE = Pattern.compile(
        "(?:\\._[0-9]+_[0-9]+_|\\.\\*[0-9]+_[0-9]+\\*|" +
        "(?:->|\\.)packed\\b|&\\([^)]*packed)");
    private static final Pattern TAGGED_24_COMPOSE = Pattern.compile(
        "CONCAT22\\s*\\(\\s*CONCAT11\\s*\\(\\s*([^,]+?)\\s*,\\s*" +
        "\\(char\\)\\s*\\(\\s*([A-Za-z_$][A-Za-z0-9_$]*" +
        "(?:(?:->|\\.)[A-Za-z_$][A-Za-z0-9_$]*)+)\\s*>>\\s*" +
        "(?:0x10|16)\\s*\\)\\s*\\)\\s*,\\s*\\(short\\)\\s*\\2\\s*\\)");
    private static final Pattern DARRAY_ELEMENT_ADDRESS = Pattern.compile(
        "\\b([A-Za-z_][A-Za-z0-9_]*)->elementSize\\s*\\*\\s*([^+;]+?)\\s*\\+\\s*" +
        "(?:\\(int\\)\\s*)?\\1->data\\b");
    private static final Pattern SIMPLE_POINTER_DECLARATION = Pattern.compile(
        "(?m)^(?<indent>[ \\t]*)(?<type>[A-Za-z_$][A-Za-z0-9_$: ]*)" +
        "\\s*(?<stars>\\*+)\\s*(?<name>[A-Za-z_$][A-Za-z0-9_$]*)\\s*;$");
    private static final Pattern SIMPLE_POINTER_PARAMETER = Pattern.compile(
        "(?:\\(|,)\\s*(?<type>[A-Za-z_$][A-Za-z0-9_$: ]*)" +
        "\\s*(?<stars>\\*+)\\s*(?<name>[A-Za-z_$][A-Za-z0-9_$]*)" +
        "(?=\\s*[,\\)])");
    private static final Pattern DARRAY_DESCRIPTOR_DECLARATION = Pattern.compile(
        "(?m)^\\s*(?<type>[A-Za-z_$][A-Za-z0-9_$:]*DArray)\\s*\\*+\\s*" +
        "(?<name>[A-Za-z_$][A-Za-z0-9_$]*)\\s*;$");
    private static final Pattern SIMPLE_IDENTIFIER = Pattern.compile(
        "[A-Za-z_$][A-Za-z0-9_$]*");
    private static final String DARRAY_DESCRIPTOR_MARKER =
        "[STDArrayElementApplier] Generated DArray descriptor specialization";
    private static final Pattern RESIDUAL_STRING_SYMBOL = Pattern.compile(
        "\\bs_[A-Za-z0-9_$]*_[0-9A-Fa-f]{8}\\b");
    private static final Pattern STRING_BASED_AGGREGATE = Pattern.compile(
        "(?:\\bs_[A-Za-z0-9_$]*_[0-9A-Fa-f]{8}\\b\\s*[+-]|" +
        "[+-]\\s*\\bs_[A-Za-z0-9_$]*_[0-9A-Fa-f]{8}\\b)");
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
    private static final Pattern GENERATED_ENUM_COMPOSITION = Pattern.compile(
        "\\bCASE_(?:NEG_)?[0-9A-Fa-f]+\\s*\\|\\s*CASE_(?:NEG_)?[0-9A-Fa-f]+\\b");
    private static final Pattern PARAMETER_ASSIGNMENT = Pattern.compile(
        "\\b(_?param_[0-9]+)\\s*(?:[+\\-*/&|^]?=)");
    private static final String GENERATED_ENUM_MARKER = "[STSwitchEnumApplier]";
    private static final String CASE_NAME = "CASE_(?:NEG_)?[0-9A-Fa-f]+";
    private static final Pattern FULL_ENUM_COMPOSITION = Pattern.compile(
        "\\b(" + CASE_NAME + "(?:\\s*\\|\\s*" + CASE_NAME + ")+)\\b");
    private static final Pattern ENUM_LOCAL_DECLARATION = Pattern.compile(
        "(?m)^\\s*(?:const\\s+)?(?:enum\\s+)?" +
        "([A-Za-z_][A-Za-z0-9_:]*)\\s*(?:\\*+\\s*)?" +
        "([A-Za-z_][A-Za-z0-9_]*)\\s*(?:\\[[^;\\r\\n]+\\])?\\s*;");
    private static final Pattern ENUM_POINTER_DECLARATION = Pattern.compile(
        "(?m)^\\s*(?:const\\s+)?(?:struct\\s+|class\\s+)?" +
        "([A-Za-z_][A-Za-z0-9_:]*)\\s*\\*+\\s*([A-Za-z_][A-Za-z0-9_]*)\\s*;");
    private static final Pattern ENUM_FIELD_USE = Pattern.compile(
        "\\b([A-Za-z_][A-Za-z0-9_]*)->([A-Za-z_][A-Za-z0-9_]*)\\b");
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
    private long executableByteCount;
    private long coveredExecutableByteCount;
    private long unclaimedExecutableByteCount;
    private long unclaimedPaddingByteCount;
    private long unclaimedMeaningfulByteCount;
    private int unclaimedRangeCount;
    private int exportedUnclaimedRangeCount;
    private final List<String> fingerprintCfgFallbackFunctions = new ArrayList<>();
    private final List<String> pseudocodeIdiomRows = new ArrayList<>();
    private final Set<String> pseudocodeIdiomFunctions = new HashSet<>();
    private final Map<Address, Set<String>> stackSlotReuseCache = new HashMap<>();
    private final List<String> qualityIssueRows = new ArrayList<>();
    private final Set<String> qualityIssueFunctions = new HashSet<>();
    private final Map<String, QualityAggregate> qualityAggregates = new TreeMap<>();
    private Map<String, DArrayDescriptor> darrayDescriptors = Map.of();
    private Set<Long> globalRecordStrides = Set.of();
    private String functionAnalysisSourceHash = "";

    @Override
    protected void run() throws Exception {
        // Read-only script: do not leave GhidraScript's implicit transaction around runScript().
        end(true);
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
        functionAnalysisSourceHash = fileSha256(Path.of(
            getSourceFile().getAbsolutePath()).toAbsolutePath().normalize());
        darrayDescriptors = recoveredDArrayDescriptors();
        globalRecordStrides = recoveredGlobalRecordStrides();
        Path outputDirectory = outputRoot.toPath().toAbsolutePath().normalize();
        Path finalProgramRoot =
            outputDirectory.resolve(safeFileName(currentProgram.getName()));
        Path stagingProgramRoot = outputDirectory.resolve("." +
            safeFileName(currentProgram.getName()) + ".export-" +
            UUID.randomUUID());
        prepareStagingCorpus(finalProgramRoot, stagingProgramRoot);
        programRoot = stagingProgramRoot;
        functionsRoot = programRoot.resolve("functions");
        Files.createDirectories(functionsRoot);

        decompiler = new DecompInterface();
        decompiler.toggleCCode(true);
        decompiler.toggleSyntaxTree(true);
        boolean promoted = false;
        try {
            if (!decompiler.openProgram(currentProgram))
                throw new IOException(
                    "Decompiler could not open " + currentProgram.getName());
            println("Exporting " + currentProgram.getName() + " to " +
                finalProgramRoot + " via transactional staging");
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
            exportCoverage();
            exportManifest();
            promoteStagingCorpus(stagingProgramRoot, finalProgramRoot);
            promoted = true;
            programRoot = finalProgramRoot;
            functionsRoot = programRoot.resolve("functions");
            println("STDecompExport complete: " + finalProgramRoot);
        }
        finally {
            decompiler.dispose();
            if (!promoted) {
                try {
                    deleteTree(stagingProgramRoot);
                }
                catch (IOException cleanup) {
                    printerr("Could not remove failed export staging tree " +
                        stagingProgramRoot + ": " + cleanup.getMessage());
                }
            }
        }
    }

    /**
     * A function-by-function export may run for hours. Per-file atomic writes
     * are not sufficient: an exception near the end otherwise leaves a corpus
     * containing a mixture of old and new Program states. Seed a sibling
     * staging tree with hard links to the accepted corpus so unchanged
     * fingerprints remain reusable without duplicating its disk footprint.
     * Exporter writes replace paths atomically and therefore never mutate a
     * linked source file in place. Fall back to a copy when links are not
     * supported by the filesystem.
     */
    private void prepareStagingCorpus(Path source, Path staging)
            throws IOException {
        deleteTree(staging);
        Files.createDirectories(staging);
        if (!Files.isDirectory(source)) return;
        try (Stream<Path> stream = Files.walk(source)) {
            for (Path item : stream.toList()) {
                Path destination = staging.resolve(source.relativize(item));
                if (Files.isDirectory(item)) {
                    Files.createDirectories(destination);
                    continue;
                }
                if (!Files.isRegularFile(item)) continue;
                Files.createDirectories(destination.getParent());
                try {
                    Files.createLink(destination, item);
                }
                catch (UnsupportedOperationException | IOException exception) {
                    Files.copy(item, destination,
                        StandardCopyOption.REPLACE_EXISTING,
                        StandardCopyOption.COPY_ATTRIBUTES);
                }
            }
        }
    }

    /**
     * Promote a complete staging tree only after every corpus artifact has
     * been written. If the second rename fails, restore the preceding corpus.
     */
    private void promoteStagingCorpus(Path staging, Path destination)
            throws IOException {
        Path backup = destination.resolveSibling("." +
            destination.getFileName() + ".previous-" + UUID.randomUUID());
        boolean hadDestination = Files.exists(destination);
        if (hadDestination) movePath(destination, backup);
        try {
            movePath(staging, destination);
        }
        catch (IOException exception) {
            if (hadDestination && !Files.exists(destination) &&
                    Files.exists(backup)) {
                try {
                    movePath(backup, destination);
                }
                catch (IOException restore) {
                    exception.addSuppressed(restore);
                }
            }
            throw exception;
        }
        if (hadDestination) {
            try {
                deleteTree(backup);
            }
            catch (IOException cleanup) {
                printerr("Export succeeded, but the preceding corpus backup " +
                    backup + " could not be removed: " + cleanup.getMessage());
            }
        }
    }

    private void movePath(Path source, Path destination) throws IOException {
        try {
            Files.move(source, destination, StandardCopyOption.ATOMIC_MOVE);
        }
        catch (java.nio.file.AtomicMoveNotSupportedException exception) {
            Files.move(source, destination);
        }
    }

    private void deleteTree(Path root) throws IOException {
        if (root == null || !Files.exists(root)) return;
        try (Stream<Path> stream = Files.walk(root)) {
            for (Path item : stream.sorted(Comparator.reverseOrder()).toList())
                Files.deleteIfExists(item);
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
        List<String> callRelationRows = new ArrayList<>();
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
        qualityIssueRows.clear();
        qualityIssueFunctions.clear();
        qualityAggregates.clear();
        Map<String, CachedFunctionAnalysis> cachedFunctionAnalysis =
            readFunctionAnalysisCache();
        Map<String, CachedFunctionAnalysis> currentFunctionAnalysis = new TreeMap<>();
        int analysisCacheHits = 0;

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
            callRelationRows.addAll(functionCallRelations(function));
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
                if (bodyExported) {
                    CachedFunctionAnalysis cached = cachedFunctionAnalysis.get(id);
                    if (cached != null && cached.fingerprint.equals(fingerprint)) {
                        replayFunctionAnalysis(function, cached);
                        currentFunctionAnalysis.put(id, cached);
                        analysisCacheHits++;
                    }
                    else normalizeAndCatalog(function, dir.resolve("decomp.c"), fingerprint,
                        currentFunctionAnalysis);
                }
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
                NormalizedCode machineNormalized =
                    normalizeMachinePseudocode(function, normalized.code);
                NormalizedCode enumNormalized =
                    normalizeKnownEnumCompositions(function, machineNormalized.code);
                cCode = annotatePseudocode(function, enumNormalized.code);
                writeText(dir.resolve("decomp.c"), cCode);
                catalogAndCache(function, cCode, fingerprint, currentFunctionAnalysis);
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
        atomicWrite(programRoot.resolve("call_relations.jsonl"), writer -> {
            for (String row : callRelationRows) {
                writer.write(row);
                writer.newLine();
            }
        });
        writePseudocodeArtifacts();
        writeFunctionAnalysisCache(currentFunctionAnalysis);
        pruneStaleFunctionDirectories(liveFunctionIds);
        println("Functions reused without decompilation: " + reused + "/" + total);
        println("Function quality/idiom analyses reused: " + analysisCacheHits + "/" +
            bodyFunctionCount);
        if (fingerprintCfgFallbackCount > 0)
            println("Fingerprint CFG fallbacks: " + fingerprintCfgFallbackCount +
                " (first: " + String.join(", ", fingerprintCfgFallbackFunctions) + ")");
    }

    private void normalizeAndCatalog(Function function, Path path, String fingerprint,
            Map<String, CachedFunctionAnalysis> cache) throws IOException {
        String original = Files.readString(path, StandardCharsets.UTF_8);
        String literalized = literalizeReferencedStrings(function, original);
        NormalizedCode normalized = normalizePseudocode(literalized);
        NormalizedCode machineNormalized =
            normalizeMachinePseudocode(function, normalized.code);
        NormalizedCode enumNormalized =
            normalizeKnownEnumCompositions(function, machineNormalized.code);
        String annotated = annotatePseudocode(function, enumNormalized.code);
        if (!annotated.equals(original)) writeText(path, annotated);
        catalogAndCache(function, annotated, fingerprint, cache);
    }

    private void catalogAndCache(Function function, String code, String fingerprint,
            Map<String, CachedFunctionAnalysis> cache) {
        int pseudocodeStart = pseudocodeIdiomRows.size();
        int qualityStart = qualityIssueRows.size();
        int normalizationStart = pseudocodeNormalizationCount;
        catalogPseudocodeIdioms(function, code);
        catalogQualityIssues(function, code);
        List<String> pseudocodeRows = List.copyOf(
            pseudocodeIdiomRows.subList(pseudocodeStart, pseudocodeIdiomRows.size()));
        List<String> qualityRows = List.copyOf(
            qualityIssueRows.subList(qualityStart, qualityIssueRows.size()));
        cache.put(addr(function.getEntryPoint()), new CachedFunctionAnalysis(
            fingerprint, pseudocodeNormalizationCount - normalizationStart,
            pseudocodeRows, qualityRows, cachedQualityAggregates(qualityRows)));
    }

    private void replayFunctionAnalysis(Function function, CachedFunctionAnalysis cached) {
        String functionAddress = addr(function.getEntryPoint());
        pseudocodeNormalizationCount += cached.normalizationCount;
        pseudocodeIdiomRows.addAll(cached.pseudocodeRows);
        qualityIssueRows.addAll(cached.qualityRows);
        if (!cached.pseudocodeRows.isEmpty()) pseudocodeIdiomFunctions.add(functionAddress);
        if (!cached.qualityRows.isEmpty()) qualityIssueFunctions.add(functionAddress);
        for (Map.Entry<String, Integer> item : cached.qualityOccurrences.entrySet()) {
            QualityAggregate aggregate = qualityAggregates.computeIfAbsent(item.getKey(),
                ignored -> new QualityAggregate());
            aggregate.functions++;
            aggregate.occurrences += item.getValue();
        }
    }

    private Map<String, Integer> cachedQualityAggregates(List<String> rows) {
        Map<String, Integer> result = new TreeMap<>();
        for (String row : rows) {
            String kind = jsonStringMember(row, "kind");
            int occurrences = jsonIntegerMember(row, "occurrences");
            if (!kind.isBlank() && occurrences >= 0)
                result.merge(kind, occurrences, Integer::sum);
        }
        return result;
    }

    private String jsonStringMember(String json, String name) {
        String prefix = "\"" + name + "\":\"";
        int start = json.indexOf(prefix);
        if (start < 0) return "";
        start += prefix.length();
        int end = json.indexOf('"', start);
        return end < 0 ? "" : json.substring(start, end);
    }

    private int jsonIntegerMember(String json, String name) {
        String prefix = "\"" + name + "\":";
        int start = json.indexOf(prefix);
        if (start < 0) return -1;
        start += prefix.length();
        int end = start;
        while (end < json.length() && Character.isDigit(json.charAt(end))) end++;
        try { return Integer.parseInt(json.substring(start, end)); }
        catch (RuntimeException exception) { return -1; }
    }

    private Map<String, CachedFunctionAnalysis> readFunctionAnalysisCache()
            throws IOException {
        Map<String, CachedFunctionAnalysis> result = new HashMap<>();
        Path path = programRoot.resolve(".function_analysis_cache.tsv");
        if (!Files.isRegularFile(path)) return result;
        List<String> lines = Files.readAllLines(path, StandardCharsets.UTF_8);
        String header = "schema_version\tfunction_address\tfingerprint\t" +
            "analysis_source_sha256\tnormalization_count\t" +
            "pseudocode_rows_b64\tquality_rows_b64\tquality_aggregates_b64";
        if (lines.isEmpty() || !header.equals(lines.get(0))) return result;
        int rejected = 0;
        for (int line = 1; line < lines.size(); line++) {
            if (lines.get(line).isBlank()) continue;
            try {
                String[] fields = lines.get(line).split("\t", -1);
                if (fields.length != 8 ||
                        !FUNCTION_ANALYSIS_CACHE_SCHEMA.equals(fields[0]) ||
                        !fields[1].matches("[0-9A-Fa-f]{8,16}") ||
                        !fields[2].matches("[0-9a-f]{64}") ||
                        !functionAnalysisSourceHash.equals(fields[3])) {
                    rejected++;
                    continue;
                }
                int normalizationCount = Integer.parseInt(fields[4]);
                if (normalizationCount < 0) throw new IllegalArgumentException(
                    "negative normalization count");
                List<String> pseudocodeRows = decodeCacheRows(fields[5]);
                List<String> qualityRows = decodeCacheRows(fields[6]);
                Map<String, Integer> aggregates = decodeCacheAggregates(fields[7]);
                if (!aggregates.equals(cachedQualityAggregates(qualityRows))) {
                    rejected++;
                    continue;
                }
                result.put(fields[1].toUpperCase(Locale.ROOT),
                    new CachedFunctionAnalysis(fields[2], normalizationCount,
                        pseudocodeRows, qualityRows, aggregates));
            }
            catch (RuntimeException exception) { rejected++; }
        }
        if (rejected > 0)
            println("Ignored malformed function-analysis cache rows: " + rejected);
        return result;
    }

    private void writeFunctionAnalysisCache(Map<String, CachedFunctionAnalysis> cache)
            throws IOException {
        Path path = programRoot.resolve(".function_analysis_cache.tsv");
        atomicWrite(path, writer -> {
            writer.write("schema_version\tfunction_address\tfingerprint\t" +
                "analysis_source_sha256\tnormalization_count\t" +
                "pseudocode_rows_b64\tquality_rows_b64\tquality_aggregates_b64\n");
            for (Map.Entry<String, CachedFunctionAnalysis> item : cache.entrySet()) {
                CachedFunctionAnalysis value = item.getValue();
                writer.write(FUNCTION_ANALYSIS_CACHE_SCHEMA + "\t" + item.getKey() +
                    "\t" + value.fingerprint + "\t" + functionAnalysisSourceHash +
                    "\t" + value.normalizationCount + "\t" +
                    encodeCacheRows(value.pseudocodeRows) + "\t" +
                    encodeCacheRows(value.qualityRows) + "\t" +
                    encodeCacheAggregates(value.qualityOccurrences) + "\n");
            }
        });
    }

    private String encodeCacheRows(List<String> rows) {
        return Base64.getEncoder().encodeToString(
            String.join("\n", rows).getBytes(StandardCharsets.UTF_8));
    }

    private List<String> decodeCacheRows(String encoded) {
        if (encoded.isBlank()) return List.of();
        String decoded = new String(Base64.getDecoder().decode(encoded),
            StandardCharsets.UTF_8);
        return decoded.isEmpty() ? List.of() : List.of(decoded.split("\n", -1));
    }

    private String encodeCacheAggregates(Map<String, Integer> values) {
        List<String> rows = new ArrayList<>();
        for (Map.Entry<String, Integer> item : values.entrySet())
            rows.add(item.getKey() + "=" + item.getValue());
        return Base64.getEncoder().encodeToString(
            String.join("\n", rows).getBytes(StandardCharsets.UTF_8));
    }

    private Map<String, Integer> decodeCacheAggregates(String encoded) {
        Map<String, Integer> result = new TreeMap<>();
        for (String row : decodeCacheRows(encoded)) {
            int separator = row.lastIndexOf('=');
            if (separator <= 0) throw new IllegalArgumentException("invalid aggregate");
            result.put(row.substring(0, separator),
                Integer.parseInt(row.substring(separator + 1)));
        }
        return result;
    }

    /**
     * Ghidra renders a terminal x86 INT3 as a call through the value returned by
     * swi(3).  That is not a real indirect call.  In this corpus there is no
     * attached debugger and continuation is deliberately unsupported, so expose
     * the intended standalone behavior as a noreturn helper.
     */
    private NormalizedCode normalizePseudocode(String code) {
        if (code == null || code.isEmpty()) return new NormalizedCode("", 0);
        NormalizedCode legacyBulkCopy =
            normalizeLegacyBulkCopyLiveouts(code);
        NormalizedCode bulkZero = normalizeBulkZeroLoops(legacyBulkCopy.code);
        NormalizedCode bulkCopy = normalizeBulkCopyLoops(bulkZero.code);
        NormalizedCode darrayAliases = normalizeDArrayElementAliases(bulkCopy.code);
        NormalizedCode virtualCalls =
            normalizeExplicitThisVirtualCalls(darrayAliases.code);
        NormalizedCode affineCancellation =
            normalizeAffineSelfCancellation(virtualCalls.code);
        code = affineCancellation.code;
        String[] lines = code.split("\\R", -1);
        List<String> output = new ArrayList<>();
        int replacements = legacyBulkCopy.replacements +
            bulkZero.replacements + bulkCopy.replacements +
            darrayAliases.replacements + virtualCalls.replacements +
            affineCancellation.replacements;
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
        NormalizedCode semicolons = normalizeDetachedSemicolons(normalized);
        return new NormalizedCode(semicolons.code,
            replacements + semicolons.replacements);
    }

    /**
     * Fold only an exact same-base cancellation:
     *
     *   (T *)((int)(p + N) + (-BYTES - (int)p))
     *
     * when N*sizeof(*p) == BYTES.  Similar expressions involving two distinct
     * pointers encode relative offsets and must remain intact.
     */
    private NormalizedCode normalizeAffineSelfCancellation(String code) {
        Map<String, PointerDeclaration> declarations = pointerDeclarations(code);
        if (declarations.isEmpty()) return new NormalizedCode(code, 0);
        Matcher matcher = AFFINE_SELF_CANCELLATION.matcher(code);
        StringBuffer output = new StringBuffer();
        int replacements = 0;
        while (matcher.find()) {
            PointerDeclaration declaration = declarations.get(matcher.group("base"));
            Long index = fingerprintImmediate(matcher.group("index"));
            Long bytes = fingerprintImmediate(matcher.group("bytes"));
            if (declaration == null || declaration.width <= 0 ||
                    index == null || bytes == null ||
                    index > Long.MAX_VALUE / declaration.width ||
                    index * declaration.width != bytes) {
                matcher.appendReplacement(output, Matcher.quoteReplacement(matcher.group()));
                continue;
            }
            matcher.appendReplacement(output,
                Matcher.quoteReplacement(matcher.group("cast") + "0x0"));
            replacements++;
        }
        matcher.appendTail(output);
        return new NormalizedCode(output.toString(), replacements);
    }

    /**
     * Ghidra represents an x86 `xor al,al` return while preserving the upper
     * EAX bytes as a uint3 shift.  Under an immediately preceding `cmp eax,0xff`
     * guard those upper bytes are proven zero.  Require the exact machine-code
     * pattern before replacing the presentation artifact with `return 0`.
     */
    private NormalizedCode normalizeMachinePseudocode(Function function, String code) {
        if (function == null || code == null || code.isEmpty() ||
                !code.contains("(uint3)") ||
                !hasGuardedPartialAlZeroReturn(function))
            return new NormalizedCode(code, 0);
        Matcher matcher = PARTIAL_AL_ZERO_RETURN.matcher(code);
        int candidates = 0;
        while (matcher.find()) candidates++;
        if (candidates != 1) return new NormalizedCode(code, 0);
        matcher.reset();
        StringBuffer output = new StringBuffer();
        int replacements = 0;
        while (matcher.find()) {
            matcher.appendReplacement(output, Matcher.quoteReplacement(
                matcher.group("indent") +
                "return 0; /* cmp eax,0xff; xor al,al */"));
            replacements++;
        }
        matcher.appendTail(output);
        return new NormalizedCode(output.toString(), replacements);
    }

    private boolean hasGuardedPartialAlZeroReturn(Function function) {
        InstructionIterator instructions = listing.getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction compare = instructions.next();
            if (!"CMP".equalsIgnoreCase(compare.getMnemonicString()) ||
                    compare.getNumOperands() < 2 ||
                    !"EAX".equalsIgnoreCase(
                        compare.getDefaultOperandRepresentation(0).trim()))
                continue;
            Long immediate = fingerprintImmediate(
                compare.getDefaultOperandRepresentation(1));
            if (immediate == null || immediate != 0xffL) continue;
            Instruction branch = listing.getInstructionAfter(compare.getAddress());
            if (branch == null || !branch.getFlowType().isConditional()) continue;
            Instruction clear = listing.getInstructionAfter(branch.getAddress());
            if (clear == null || !"XOR".equalsIgnoreCase(clear.getMnemonicString()) ||
                    clear.getNumOperands() < 2 ||
                    !"AL".equalsIgnoreCase(
                        clear.getDefaultOperandRepresentation(0).trim()) ||
                    !"AL".equalsIgnoreCase(
                        clear.getDefaultOperandRepresentation(1).trim()))
                continue;
            Instruction next = listing.getInstructionAfter(clear.getAddress());
            for (int count = 0; count < 4 && next != null &&
                    function.getBody().contains(next.getAddress()); count++) {
                String mnemonic = next.getMnemonicString().toUpperCase(Locale.ROOT);
                if (mnemonic.startsWith("RET")) return true;
                if ("CALL".equals(mnemonic) || next.getFlowType().isJump() ||
                        accumulatorResultWidth(next) > 0) break;
                next = listing.getInstructionAfter(next.getAddress());
            }
        }
        return false;
    }

    private int accumulatorResultWidth(Instruction instruction) {
        int width = 0;
        for (Object object : instruction.getResultObjects()) {
            if (!(object instanceof Register register)) continue;
            String name = register.getName().toUpperCase(Locale.ROOT);
            if (Set.of("EAX", "RAX").contains(name)) width = Math.max(width, 4);
            else if ("AX".equals(name)) width = Math.max(width, 2);
            else if (Set.of("AL", "AH").contains(name)) width = Math.max(width, 1);
        }
        return width;
    }

    /**
     * Ghidra occasionally wraps a completed call before its terminating
     * semicolon.  Later identifier/type substitutions preserve that legal but
     * very misleading spelling as a standalone empty-looking statement.
     * Joining the semicolon to the preceding non-empty line is semantics
     * preserving, including for an intentionally empty while/for body.
     */
    private NormalizedCode normalizeDetachedSemicolons(String code) {
        String[] lines = code.split("\\R", -1);
        List<String> output = new ArrayList<>();
        int replacements = 0;
        for (String line : lines) {
            if (line.trim().equals(";")) {
                int previous = output.size() - 1;
                while (previous >= 0 && output.get(previous).trim().isEmpty())
                    previous--;
                if (previous >= 0 && output.get(previous).stripTrailing().endsWith(")")) {
                    output.set(previous, output.get(previous).stripTrailing() + ";");
                    replacements++;
                    continue;
                }
            }
            output.add(line);
        }
        return new NormalizedCode(
            String.join(System.lineSeparator(), output), replacements);
    }

    /**
     * A recovered descriptor specialization gives Ghidra the correct type for
     * array->data, but the decompiler can still materialize the result of the
     * runtime-stride expression in a primitive SSA temporary:
     *
     *     undefined4 *puVar;
     *     puVar = (undefined4 *)(array->elementSize * i + (int)array->data);
     *
     * Listing cannot type one SSA lifetime independently when the same stack or
     * register variable is reused later.  Keep the original variable for those
     * other lifetimes and introduce an export-only typed alias for the bounded
     * interval ending at its next non-DArray definition.  Only exact descriptor
     * and element structures installed by STDArrayElementApplier participate.
     */
    private NormalizedCode normalizeDArrayElementAliases(String code) {
        if (code == null || code.isEmpty() || darrayDescriptors.isEmpty() ||
                !code.contains("->elementSize") || !code.contains("->data"))
            return new NormalizedCode(code, 0);

        Map<String, PointerDeclaration> pointers = pointerDeclarations(code);
        Map<String, DArrayDescriptor> descriptorVariables =
            darrayDescriptorVariables(code);
        if (pointers.isEmpty() || descriptorVariables.isEmpty())
            return new NormalizedCode(code, 0);

        Set<String> usedNames = new HashSet<>();
        Matcher words = SIMPLE_IDENTIFIER.matcher(code);
        while (words.find()) usedNames.add(words.group());

        String normalized = code;
        int replacements = 0;
        for (Map.Entry<String, PointerDeclaration> pointer : pointers.entrySet()) {
            DArrayAliasNormalization result = normalizeDArrayAlias(normalized,
                pointer.getKey(), pointer.getValue(), descriptorVariables, usedNames);
            normalized = result.code;
            replacements += result.replacements;
        }
        return new NormalizedCode(normalized, replacements);
    }

    private Map<String, PointerDeclaration> pointerDeclarations(String code) {
        Map<String, PointerDeclaration> result = new LinkedHashMap<>();
        Matcher matcher = SIMPLE_POINTER_DECLARATION.matcher(code);
        while (matcher.find()) {
            String name = matcher.group("name");
            String type = matcher.group("type").trim();
            int stars = matcher.group("stars").length();
            int width = pointerArithmeticWidth(type, stars);
            if (width > 0 && !result.containsKey(name))
                result.put(name, new PointerDeclaration(type,
                    matcher.group("indent"), stars, width));
        }
        int body = code.indexOf('{');
        String signature = body < 0 ? code : code.substring(0, body);
        matcher = SIMPLE_POINTER_PARAMETER.matcher(signature);
        while (matcher.find()) {
            String name = matcher.group("name");
            String type = matcher.group("type").trim();
            int stars = matcher.group("stars").length();
            int width = pointerArithmeticWidth(type, stars);
            if (width > 0 && !result.containsKey(name))
                result.put(name, new PointerDeclaration(type, "", stars, width));
        }
        return result;
    }

    private Map<String, DArrayDescriptor> darrayDescriptorVariables(String code) {
        Map<String, DArrayDescriptor> result = new LinkedHashMap<>();
        Matcher matcher = DARRAY_DESCRIPTOR_DECLARATION.matcher(code);
        while (matcher.find()) {
            DArrayDescriptor descriptor = darrayDescriptors.get(matcher.group("type"));
            if (descriptor != null) result.put(matcher.group("name"), descriptor);
        }
        return result;
    }

    private DArrayAliasNormalization normalizeDArrayAlias(String code, String alias,
            PointerDeclaration declaration,
            Map<String, DArrayDescriptor> descriptorVariables, Set<String> usedNames) {
        List<AliasAssignment> assignments = aliasAssignments(code, alias);
        if (assignments.isEmpty()) return new DArrayAliasNormalization(code, 0);

        List<DArrayAliasSegment> segments = new ArrayList<>();
        int ordinal = 1;
        for (int index = 0; index < assignments.size();) {
            AliasAssignment assignment = assignments.get(index);
            DArrayAccess access = "=".equals(assignment.operator) ?
                darrayAccess(assignment.expression, descriptorVariables) : null;
            if (access == null) { index++; continue; }
            int end = code.length();
            int next = index + 1;
            while (next < assignments.size()) {
                AliasAssignment candidate = assignments.get(next);
                DArrayAccess nextAccess = "=".equals(candidate.operator) ?
                    darrayAccess(candidate.expression, descriptorVariables) : null;
                if (nextAccess != null &&
                        nextAccess.descriptor.elementName.equals(
                            access.descriptor.elementName)) {
                    next++;
                    continue;
                }
                if ("=".equals(candidate.operator) &&
                        nullPointerExpression(candidate.expression)) {
                    next++;
                    continue;
                }
                end = candidate.start;
                break;
            }
            String interval = code.substring(assignment.start, end);
            int controlBoundary = firstRawControlBoundary(interval);
            int lastUse = lastIdentifierEnd(interval, alias);
            if (controlBoundary >= 0 && controlBoundary < lastUse) {
                index = Math.max(index + 1, next);
                continue;
            }
            if (controlBoundary >= 0) {
                end = assignment.start + controlBoundary;
                interval = code.substring(assignment.start, end);
            }
            String baseName = darrayElementAliasName(access.descriptor);
            String typedName = uniqueIdentifier(baseName, ordinal++, usedNames);
            segments.add(new DArrayAliasSegment(assignment.start, end, typedName,
                access.descriptor));
            index = Math.max(index + 1, next);
        }
        if (segments.isEmpty()) return new DArrayAliasNormalization(code, 0);

        String normalized = code;
        int replacements = 0;
        List<TypedAlias> typedAliases = new ArrayList<>();
        for (int index = segments.size() - 1; index >= 0; index--) {
            DArrayAliasSegment segment = segments.get(index);
            String interval = normalized.substring(segment.start, segment.end);
            interval = replaceIdentifier(interval, alias, segment.typedName);
            DArrayIntervalNormalization rewritten = normalizeDArrayInterval(interval,
                segment.typedName, declaration, segment.descriptor, descriptorVariables);
            if (rewritten.replacements == 0) continue;
            normalized = normalized.substring(0, segment.start) + rewritten.code +
                normalized.substring(segment.end);
            replacements += rewritten.replacements;
            typedAliases.add(new TypedAlias(segment.typedName,
                segment.descriptor.elementName));
        }
        if (typedAliases.isEmpty()) return new DArrayAliasNormalization(code, 0);

        typedAliases.sort(Comparator.comparing(aliasValue -> aliasValue.name));
        String declarations = typedAliases.stream()
            .map(value -> declaration.indent + value.elementName + " *" + value.name + ";")
            .reduce((left, right) -> left + System.lineSeparator() + right).orElse("");
        Pattern declarationLine = Pattern.compile("(?m)^" +
            Pattern.quote(declaration.indent) +
            Pattern.quote(declaration.type) + "\\s*\\*+\\s*" +
            Pattern.quote(alias) + "\\s*;$");
        Matcher declarationMatcher = declarationLine.matcher(normalized);
        if (!declarationMatcher.find())
            return new DArrayAliasNormalization(code, 0);
        int remainingUses = identifierOccurrences(normalized, alias);
        String replacement = remainingUses == 1 ? declarations :
            declarationMatcher.group() + System.lineSeparator() + declarations;
        normalized = declarationMatcher.replaceFirst(Matcher.quoteReplacement(replacement));
        return new DArrayAliasNormalization(normalized, replacements + 1);
    }

    private String darrayElementAliasName(DArrayDescriptor descriptor) {
        Matcher ownerField = Pattern.compile(
            "_field_([0-9A-Fa-f]+)Element$").matcher(descriptor.elementName);
        if (ownerField.find())
            return "element_" + ownerField.group(1).toLowerCase(Locale.ROOT);
        return "element";
    }

    private int firstRawControlBoundary(String text) {
        Matcher matcher = Pattern.compile(
            "(?m)^\\s*(?:goto\\s+LAB_[0-9A-Fa-f]+\\s*;|LAB_[0-9A-Fa-f]+:)").matcher(text);
        return matcher.find() ? matcher.start() : -1;
    }

    private int lastIdentifierEnd(String text, String name) {
        Matcher matcher = Pattern.compile("(?<![A-Za-z0-9_$])" +
            Pattern.quote(name) + "(?![A-Za-z0-9_$])").matcher(text);
        int result = -1;
        while (matcher.find()) result = matcher.end();
        return result;
    }

    private List<AliasAssignment> aliasAssignments(String code, String alias) {
        Pattern pattern = Pattern.compile("(?s)(?<![A-Za-z0-9_$.>])" +
            Pattern.quote(alias) + "\\s*" +
            "(?<operator>(?:<<|>>|[+\\-*/&|^])?=)(?!=)\\s*" +
            "(?<expression>[^;]{0,700});");
        Matcher matcher = pattern.matcher(code);
        List<AliasAssignment> result = new ArrayList<>();
        while (matcher.find())
            result.add(new AliasAssignment(matcher.start(), matcher.end(),
                matcher.group("operator"), matcher.group("expression").trim()));
        return result;
    }

    private DArrayIntervalNormalization normalizeDArrayInterval(String interval,
            String alias, PointerDeclaration declaration, DArrayDescriptor descriptor,
            Map<String, DArrayDescriptor> descriptorVariables) {
        Pattern assignments = Pattern.compile("(?s)(?<![A-Za-z0-9_$.>])" +
            Pattern.quote(alias) + "\\s*=(?!=)\\s*(?<expression>[^;]{0,700});");
        Matcher matcher = assignments.matcher(interval);
        StringBuffer assignmentsOut = new StringBuffer();
        int replacements = 0;
        while (matcher.find()) {
            String expression = matcher.group("expression").trim();
            DArrayAccess access = darrayAccess(expression, descriptorVariables);
            String replacement = matcher.group();
            if (access != null &&
                    access.descriptor.elementName.equals(descriptor.elementName)) {
                replacement = alias + " = DArrayAt<" + descriptor.elementName + ">(" +
                    access.base + ", " + access.index + ");";
                replacements++;
            }
            else if (nullPointerExpression(expression)) {
                replacement = alias + " = (" + descriptor.elementName + " *)0x0;";
                replacements++;
            }
            matcher.appendReplacement(assignmentsOut, Matcher.quoteReplacement(replacement));
        }
        matcher.appendTail(assignmentsOut);
        FieldRewrite fields = rewriteDArrayFields(assignmentsOut.toString(), alias,
            declaration, descriptor);
        return new DArrayIntervalNormalization(fields.code,
            replacements + fields.replacements);
    }

    private FieldRewrite rewriteDArrayFields(String code, String alias,
            PointerDeclaration declaration, DArrayDescriptor descriptor) {
        RewriteAccumulator result = new RewriteAccumulator(code);
        int pointerWidth = declaration.width;

        Pattern bare = Pattern.compile("(?<![A-Za-z0-9_$*])\\*\\s*" +
            Pattern.quote(alias) +
            "(?![A-Za-z0-9_$]|->|\\s*\\[)");
        result.replace(bare, matcher -> {
            DArrayElementField field = descriptor.field(0, pointerWidth);
            return field == null ? null : alias + "->" + field.name;
        });

        Pattern raw = Pattern.compile("\\*\\s*\\(\\s*" +
            "(?<type>[^()\\r\\n]{1,80}?)\\s*\\*\\s*\\)\\s*\\(\\s*" +
            "(?<bytecast>\\(\\s*int\\s*\\)\\s*)?" + Pattern.quote(alias) +
            "\\s*\\+\\s*(?<offset>0[xX][0-9A-Fa-f]+|[0-9]+)\\s*\\)");
        result.replace(raw, matcher -> {
            int width = renderedTypeWidth(matcher.group("type"));
            long offset = unsignedNumber(matcher.group("offset"));
            if (matcher.group("bytecast") == null) offset *= pointerWidth;
            DArrayElementField field = descriptor.field(offset, width);
            return field == null ? null : alias + "->" + field.name;
        });

        Pattern index = Pattern.compile("(?<![A-Za-z0-9_$:])" +
            Pattern.quote(alias) + "\\s*\\[\\s*" +
            "(?<index>0[xX][0-9A-Fa-f]+|[0-9]+)\\s*\\]");
        result.replace(index, matcher -> {
            long offset = unsignedNumber(matcher.group("index")) * pointerWidth;
            DArrayElementField field = descriptor.field(offset, pointerWidth);
            return field == null ? null : alias + "->" + field.name;
        });

        Pattern nullRight = Pattern.compile("(?<![A-Za-z0-9_$])" +
            Pattern.quote(alias) + "\\s*(?<operator>==|!=)\\s*\\(\\s*" +
            Pattern.quote(declaration.type) + "\\s*\\*+\\s*\\)\\s*0x0");
        result.replace(nullRight, matcher -> alias + " " + matcher.group("operator") +
            " (" + descriptor.elementName + " *)0x0");
        Pattern nullLeft = Pattern.compile("\\(\\s*" +
            Pattern.quote(declaration.type) + "\\s*\\*+\\s*\\)\\s*0x0\\s*" +
            "(?<operator>==|!=)\\s*" + Pattern.quote(alias) +
            "(?![A-Za-z0-9_$])");
        result.replace(nullLeft, matcher -> "(" + descriptor.elementName + " *)0x0 " +
            matcher.group("operator") + " " + alias);

        // Do not rewrite arbitrary casts from the primitive lifetime: only the
        // exact null comparisons tied to this alias are type-neutral.
        return new FieldRewrite(result.code, result.replacements);
    }

    private DArrayAccess darrayAccess(String expression,
            Map<String, DArrayDescriptor> descriptorVariables) {
        for (Map.Entry<String, DArrayDescriptor> entry : descriptorVariables.entrySet()) {
            String base = entry.getKey();
            if (!expression.contains(base + "->elementSize") ||
                    !expression.contains(base + "->data")) continue;
            String value = stripExpressionWrappers(expression);
            List<String> terms = splitTopLevel(value, '+');
            if (terms.size() != 2) continue;
            String data = null, index = null;
            for (String term : terms) {
                if (darrayDataTerm(term, base, entry.getValue())) data = term;
                String candidate = darrayStrideIndex(term, base);
                if (candidate != null) index = candidate;
            }
            if (data != null && index != null && !index.isBlank())
                return new DArrayAccess(base, index, entry.getValue());
        }
        return null;
    }

    private boolean darrayDataTerm(String expression, String base,
            DArrayDescriptor descriptor) {
        String value = stripExpressionWrappers(expression);
        while (true) {
            String stripped = stripLeadingCast(value);
            if (stripped.equals(value)) break;
            value = stripExpressionWrappers(stripped);
        }
        value = value.replaceAll("\\s+", "");
        if (value.equals(base + "->data") ||
            value.equals("&" + base + "->data->field_0000") ||
            value.equals("&(" + base + "->data->field_0000).field_0x0"))
            return true;
        // Once the element record itself is typed, Ghidra often canonicalizes
        // the same byte address through its first named component:
        //
        //   (T *)((int)&array->data->firstMember + array->elementSize * index)
        //
        // This is still the address of the complete element iff firstMember is
        // the exact offset-zero component.  Accept its generated/current name
        // instead of regressing to the primitive pointer chosen for that member.
        DArrayElementField first = descriptor.fields.get(0L);
        return first != null &&
            value.equals("&" + base + "->data->" + first.name);
    }

    private String darrayStrideIndex(String expression, String base) {
        String value = stripOuterParentheses(expression).trim();
        String token = base + "->elementSize";
        if (value.startsWith(token)) {
            String rest = value.substring(token.length()).stripLeading();
            if (!rest.startsWith("*")) return null;
            return stripOuterParentheses(rest.substring(1)).trim();
        }
        if (value.endsWith(token)) {
            String rest = value.substring(0, value.length() - token.length()).stripTrailing();
            if (!rest.endsWith("*")) return null;
            return stripOuterParentheses(rest.substring(0, rest.length() - 1)).trim();
        }
        return null;
    }

    private String stripOuterParentheses(String expression) {
        String result = expression == null ? "" : expression.trim();
        while (result.startsWith("(")) {
            int close = matchingParen(result, 0);
            if (close != result.length() - 1) break;
            result = result.substring(1, close).trim();
        }
        return result;
    }

    private String stripExpressionWrappers(String expression) {
        String result = expression == null ? "" : expression.trim();
        boolean changed;
        do {
            changed = false;
            String castless = stripLeadingCast(result);
            if (!castless.equals(result)) {
                result = castless.trim();
                changed = true;
            }
            if (result.startsWith("(")) {
                int close = matchingParen(result, 0);
                if (close == result.length() - 1) {
                    result = result.substring(1, close).trim();
                    changed = true;
                }
            }
        } while (changed && !result.isEmpty());
        return result;
    }

    private String stripLeadingCast(String expression) {
        String value = expression.trim();
        if (!value.startsWith("(")) return value;
        int close = matchingParen(value, 0);
        if (close < 1 || close == value.length() - 1) return value;
        String inside = value.substring(1, close).trim();
        if (!inside.matches("(?:const\\s+)?[A-Za-z_$][A-Za-z0-9_$: ]*(?:\\s*\\*+)?"))
            return value;
        return value.substring(close + 1).trim();
    }

    private List<String> splitTopLevel(String expression, char separator) {
        List<String> result = new ArrayList<>();
        int depth = 0, start = 0;
        boolean string = false, character = false, escaped = false;
        for (int index = 0; index < expression.length(); index++) {
            char ch = expression.charAt(index);
            if (string || character) {
                if (escaped) { escaped = false; continue; }
                if (ch == '\\') { escaped = true; continue; }
                if (string && ch == '"') string = false;
                else if (character && ch == '\'') character = false;
                continue;
            }
            if (ch == '"') { string = true; continue; }
            if (ch == '\'') { character = true; continue; }
            if (ch == '(' || ch == '[' || ch == '{') depth++;
            else if (ch == ')' || ch == ']' || ch == '}') depth--;
            else if (ch == separator && depth == 0) {
                result.add(expression.substring(start, index).trim());
                start = index + 1;
            }
        }
        result.add(expression.substring(start).trim());
        return result;
    }

    private boolean nullPointerExpression(String expression) {
        String value = stripExpressionWrappers(expression);
        while (true) {
            String stripped = stripLeadingCast(value);
            if (stripped.equals(value)) break;
            value = stripExpressionWrappers(stripped);
        }
        return Set.of("0", "0x0", "NULL", "nullptr").contains(value.trim());
    }

    private String replaceIdentifier(String text, String oldName, String newName) {
        return Pattern.compile("(?<![A-Za-z0-9_$])" + Pattern.quote(oldName) +
            "(?![A-Za-z0-9_$])").matcher(text)
            .replaceAll(Matcher.quoteReplacement(newName));
    }

    private int identifierOccurrences(String text, String name) {
        Matcher matcher = Pattern.compile("(?<![A-Za-z0-9_$])" +
            Pattern.quote(name) + "(?![A-Za-z0-9_$])").matcher(text);
        int result = 0;
        while (matcher.find()) result++;
        return result;
    }

    private String uniqueIdentifier(String base, int ordinal, Set<String> used) {
        String candidate = ordinal <= 1 ? base : base + "_" + ordinal;
        int suffix = Math.max(2, ordinal);
        while (used.contains(candidate)) candidate = base + "_" + suffix++;
        used.add(candidate);
        return candidate;
    }

    private int pointerArithmeticWidth(String type, int stars) {
        if (stars != 1)
            return currentProgram == null ? -1 :
                currentProgram.getDefaultPointerSize();
        return renderedTypeWidth(type);
    }

    private int renderedTypeWidth(String rendered) {
        String value = rendered == null ? "" :
            rendered.replaceAll("\\b(?:const|volatile|signed|unsigned)\\b", "")
                .replaceAll("\\s+", " ").trim();
        if (value.contains("*"))
            return currentProgram == null ? 4 :
                currentProgram.getDefaultPointerSize();
        if (Set.of("char", "byte", "undefined", "undefined1", "bool").contains(value))
            return 1;
        if (Set.of("short", "ushort", "word", "undefined2").contains(value))
            return 2;
        if (Set.of("int", "uint", "long", "ulong", "dword", "float",
                "undefined4").contains(value)) return 4;
        if (Set.of("long long", "ulonglong", "qword", "double",
                "undefined8").contains(value)) return 8;
        if (currentProgram == null) return -1;
        List<DataType> matches = new ArrayList<>();
        currentProgram.getDataTypeManager().findDataTypes(value, matches);
        int result = -1;
        for (DataType match : matches) {
            int length = match.getLength();
            if (length < 1) continue;
            if (result >= 0 && result != length) return -1;
            result = length;
        }
        return result;
    }

    private long unsignedNumber(String value) {
        try {
            String text = value.trim();
            return text.startsWith("0x") || text.startsWith("0X") ?
                Long.parseUnsignedLong(text.substring(2), 16) :
                Long.parseLong(text);
        }
        catch (Exception ignored) { return Long.MIN_VALUE; }
    }

    private Map<String, DArrayDescriptor> recoveredDArrayDescriptors() {
        Map<String, DArrayDescriptor> result = new LinkedHashMap<>();
        Set<String> ambiguous = new HashSet<>();
        Iterator<DataType> iterator =
            currentProgram.getDataTypeManager().getAllDataTypes();
        while (iterator.hasNext()) {
            DataType type = iterator.next();
            if (!(type instanceof Structure descriptor) ||
                    !nullToEmpty(descriptor.getDescription())
                        .startsWith(DARRAY_DESCRIPTOR_MARKER))
                continue;
            DataTypeComponent data = descriptor.getComponentAt(0x1c);
            if (data == null || data.getOffset() != 0x1c ||
                    !"data".equals(data.getFieldName())) continue;
            DataType pointed = data.getDataType();
            while (pointed instanceof TypeDef typedef)
                pointed = typedef.getBaseDataType();
            if (!(pointed instanceof Pointer pointer)) continue;
            pointed = pointer.getDataType();
            while (pointed instanceof TypeDef typedef)
                pointed = typedef.getBaseDataType();
            if (!(pointed instanceof Structure element)) continue;
            Map<Long, DArrayElementField> fields = new TreeMap<>();
            for (DataTypeComponent component : element.getDefinedComponents()) {
                String name = nullToEmpty(component.getFieldName());
                if (name.isBlank()) continue;
                fields.put((long)component.getOffset(), new DArrayElementField(
                    component.getOffset(), component.getLength(), name));
            }
            DArrayDescriptor value = new DArrayDescriptor(descriptor.getName(),
                element.getName(), fields);
            DArrayDescriptor old = result.putIfAbsent(descriptor.getName(), value);
            if (old != null && !old.elementName.equals(value.elementName))
                ambiguous.add(descriptor.getName());
        }
        for (String name : ambiguous) result.remove(name);
        return result;
    }

    private Set<Long> recoveredGlobalRecordStrides() {
        Set<Long> result = new TreeSet<>();
        Iterator<DataType> iterator =
            currentProgram.getDataTypeManager().getAllDataTypes();
        while (iterator.hasNext()) {
            DataType type = iterator.next();
            String description = nullToEmpty(type.getDescription());
            if (!(type instanceof Structure structure) ||
                    !description.contains(
                        "[STGlobalRecordApplier] Generated packed global record"))
                continue;
            int length = structure.getLength();
            if (length >= 0x40) result.add((long)length);
        }
        return Set.copyOf(result);
    }

    private boolean containsRecoveredGlobalRecordStride(String line) {
        if (line == null || globalRecordStrides.isEmpty()) return false;
        Matcher matcher = INTEGER_LITERAL.matcher(line);
        while (matcher.find()) {
            try {
                String hex = matcher.group(1);
                long value = hex == null ?
                    Long.parseLong(matcher.group(2)) :
                    Long.parseUnsignedLong(hex, 16);
                if (globalRecordStrides.contains(value)) return true;
            }
            catch (NumberFormatException ignored) { }
        }
        return false;
    }

    /**
     * A typed Ghidra vtable slot is still rendered as a C function-pointer call:
     *
     *     (*object->vtable->method)(object, arg)
     *
     * For the future C++ source projection, the exact duplicated receiver is
     * safely equivalent to object->method(arg).  Fold only a simple receiver
     * identifier whose first top-level argument is the same identifier.  Calls
     * with a missing, cast, adjusted, or different receiver remain untouched
     * because they may represent bad prototypes or secondary-base dispatch.
     */
    private NormalizedCode normalizeExplicitThisVirtualCalls(String code) {
        Matcher matcher = EXPLICIT_THIS_VIRTUAL_CALL.matcher(code);
        StringBuilder output = new StringBuilder(code.length());
        int cursor = 0;
        int search = 0;
        int replacements = 0;
        while (matcher.find(search)) {
            int open = matcher.end() - 1;
            int close = matchingParen(code, open);
            if (close < 0) break;
            String receiver = matcher.group(1);
            String arguments = code.substring(open + 1, close);
            int separator = topLevelComma(arguments);
            String first = (separator < 0 ? arguments :
                arguments.substring(0, separator)).trim();
            if (!receiver.equals(first)) {
                search = matcher.end();
                continue;
            }
            String remaining = separator < 0 ? "" :
                arguments.substring(separator + 1).stripLeading();
            output.append(code, cursor, matcher.start());
            output.append(receiver).append("->").append(matcher.group(2))
                .append("(").append(remaining).append(")");
            cursor = close + 1;
            search = cursor;
            replacements++;
        }
        if (replacements == 0) return new NormalizedCode(code, 0);
        output.append(code, cursor, code.length());
        return new NormalizedCode(output.toString(), replacements);
    }

    private int matchingParen(String text, int open) {
        int depth = 0;
        boolean string = false, character = false, escaped = false;
        boolean lineComment = false, blockComment = false;
        for (int index = open; index < text.length(); index++) {
            char ch = text.charAt(index);
            char next = index + 1 < text.length() ? text.charAt(index + 1) : '\0';
            if (lineComment) {
                if (ch == '\n') lineComment = false;
                continue;
            }
            if (blockComment) {
                if (ch == '*' && next == '/') { blockComment = false; index++; }
                continue;
            }
            if (string || character) {
                if (escaped) { escaped = false; continue; }
                if (ch == '\\') { escaped = true; continue; }
                if (string && ch == '"') string = false;
                else if (character && ch == '\'') character = false;
                continue;
            }
            if (ch == '/' && next == '/') { lineComment = true; index++; continue; }
            if (ch == '/' && next == '*') { blockComment = true; index++; continue; }
            if (ch == '"') { string = true; continue; }
            if (ch == '\'') { character = true; continue; }
            if (ch == '(') depth++;
            else if (ch == ')' && --depth == 0) return index;
        }
        return -1;
    }

    private int topLevelComma(String text) {
        int parentheses = 0, brackets = 0, braces = 0;
        boolean string = false, character = false, escaped = false;
        for (int index = 0; index < text.length(); index++) {
            char ch = text.charAt(index);
            if (string || character) {
                if (escaped) { escaped = false; continue; }
                if (ch == '\\') { escaped = true; continue; }
                if (string && ch == '"') string = false;
                else if (character && ch == '\'') character = false;
                continue;
            }
            if (ch == '"') { string = true; continue; }
            if (ch == '\'') { character = true; continue; }
            if (ch == '(') parentheses++;
            else if (ch == ')') parentheses--;
            else if (ch == '[') brackets++;
            else if (ch == ']') brackets--;
            else if (ch == '{') braces++;
            else if (ch == '}') braces--;
            else if (ch == ',' && parentheses == 0 && brackets == 0 && braces == 0)
                return index;
        }
        return -1;
    }

    /**
     * Ghidra may prefer a flags-style spelling such as CASE_4|CASE_1 even
     * after the same generated enum contains the exact CASE_5 member.  Fold
     * only that proven presentation artifact.  Missing values, ambiguous
     * operand types, semantic/manual enums, and mixed-enum expressions remain
     * untouched so the strict quality gate can still reject them.
     */
    private NormalizedCode normalizeKnownEnumCompositions(Function function, String code) {
        if (code == null || code.isEmpty()) return new NormalizedCode("", 0);
        Map<String, Enum> variables = new LinkedHashMap<>();
        for (Parameter parameter : function.getParameters()) {
            Enum type = generatedExportEnum(parameter.getDataType());
            if (type != null) variables.put(parameter.getName(), type);
        }
        Matcher declaration = ENUM_LOCAL_DECLARATION.matcher(code);
        while (declaration.find()) {
            Enum type = generatedExportEnumNamed(declaration.group(1));
            if (type != null) variables.put(declaration.group(2), type);
        }
        Map<String, String> pointerOwners = exportPointerOwners(function, code);

        int replacements = 0;
        String[] lines = code.split("\\R", -1);
        List<String> output = new ArrayList<>();
        for (String line : lines) {
            Matcher composition = FULL_ENUM_COMPOSITION.matcher(line);
            StringBuilder rewritten = new StringBuilder();
            int cursor = 0;
            while (composition.find()) {
                rewritten.append(line, cursor, composition.start());
                String exact = exactEnumCompositionName(line, composition.group(1),
                    variables, pointerOwners);
                if (exact == null) rewritten.append(composition.group());
                else {
                    rewritten.append(exact);
                    replacements++;
                }
                cursor = composition.end();
            }
            rewritten.append(line, cursor, line.length());
            output.add(rewritten.toString());
        }
        return new NormalizedCode(String.join(System.lineSeparator(), output), replacements);
    }

    private String exactEnumCompositionName(String line, String expression,
            Map<String, Enum> variables, Map<String, String> pointerOwners) {
        Map<String, Enum> candidates = new LinkedHashMap<>();
        for (Map.Entry<String, Enum> entry : variables.entrySet())
            if (containsExportIdentifier(line, entry.getKey()))
                candidates.put(entry.getValue().getPathName(), entry.getValue());

        Matcher field = ENUM_FIELD_USE.matcher(line);
        while (field.find()) {
            Structure structure = exportOwnerStructure(pointerOwners.get(field.group(1)));
            if (structure == null) continue;
            for (DataTypeComponent component : structure.getDefinedComponents()) {
                if (!field.group(2).equals(component.getFieldName())) continue;
                Enum type = generatedExportEnum(component.getDataType());
                if (type != null) candidates.put(type.getPathName(), type);
                break;
            }
        }

        Set<String> exactNames = new TreeSet<>();
        for (Enum candidate : candidates.values()) {
            String exact = exactEnumValueName(candidate, expression);
            if (exact != null) exactNames.add(exact);
        }
        return exactNames.size() == 1 ? exactNames.iterator().next() : null;
    }

    private String exactEnumValueName(Enum type, String expression) {
        Set<String> names = Set.of(type.getNames());
        long value = 0;
        boolean found = false;
        for (String item : expression.split("\\s*\\|\\s*")) {
            int separator = item.lastIndexOf("::");
            String name = separator < 0 ? item : item.substring(separator + 2);
            if (!names.contains(name)) return null;
            value |= type.getValue(name);
            found = true;
        }
        if (!found) return null;
        String preferred = value < 0 ?
            "CASE_NEG_" + Long.toHexString(-value).toUpperCase(Locale.ROOT) :
            "CASE_" + Long.toHexString(value).toUpperCase(Locale.ROOT);
        return names.contains(preferred) && type.getValue(preferred) == value ?
            preferred : null;
    }

    private Map<String, String> exportPointerOwners(Function function, String code) {
        Map<String, String> result = new LinkedHashMap<>();
        String owner = exportFunctionOwner(function);
        if (!owner.isBlank()) result.put("this", owner);
        for (Parameter parameter : function.getParameters()) {
            String pointed = pointedExportOwner(parameter.getDataType());
            if (pointed != null) result.put(parameter.getName(), pointed);
        }
        Matcher declaration = ENUM_POINTER_DECLARATION.matcher(code);
        while (declaration.find()) {
            String declared = declaration.group(1);
            if (exportOwnerStructure(declared) != null)
                result.put(declaration.group(2), declared);
        }
        return result;
    }

    private String pointedExportOwner(DataType type) {
        while (type instanceof TypeDef value) type = value.getBaseDataType();
        if (!(type instanceof Pointer pointer)) return null;
        DataType pointed = pointer.getDataType();
        while (pointed instanceof TypeDef value) pointed = value.getBaseDataType();
        return pointed instanceof Structure ? pointed.getName() : null;
    }

    private Enum generatedExportEnum(DataType type) {
        while (type instanceof TypeDef value) type = value.getBaseDataType();
        if (type instanceof Pointer pointer) {
            type = pointer.getDataType();
            while (type instanceof TypeDef value) type = value.getBaseDataType();
        }
        if (!(type instanceof Enum value)) return null;
        String description = value.getDescription();
        return description != null && description.contains(GENERATED_ENUM_MARKER) ?
            value : null;
    }

    private Enum generatedExportEnumNamed(String name) {
        String simple = exportLeaf(name);
        List<DataType> matches = new ArrayList<>();
        currentProgram.getDataTypeManager().findDataTypes(simple, matches);
        for (DataType match : matches) {
            Enum type = generatedExportEnum(match);
            if (type != null && type.getName().equals(simple)) return type;
        }
        return null;
    }

    private Structure exportOwnerStructure(String owner) {
        if (owner == null || owner.isBlank()) return null;
        String name = exportLeaf(owner);
        DataType direct = currentProgram.getDataTypeManager().getDataType("/" + name);
        if (direct instanceof Structure) return (Structure)direct;
        List<DataType> matches = new ArrayList<>();
        currentProgram.getDataTypeManager().findDataTypes(name, matches);
        for (DataType match : matches)
            if (match instanceof Structure && !match.getPathName().contains("/VTables/"))
                return (Structure)match;
        return null;
    }

    private String exportFunctionOwner(Function function) {
        String qualified = function.getName(true);
        int separator = qualified.lastIndexOf("::");
        if (separator <= 0) return "";
        String owner = qualified.substring(0, separator);
        return owner.equals("Global") || owner.startsWith("Library::") ? "" : owner;
    }

    private String exportLeaf(String owner) {
        int separator = owner.lastIndexOf("::");
        return separator < 0 ? owner : owner.substring(separator + 2);
    }

    private boolean containsExportIdentifier(String text, String name) {
        int index = -1;
        while ((index = text.indexOf(name, index + 1)) >= 0) {
            boolean before = index == 0 ||
                !Character.isJavaIdentifierPart(text.charAt(index - 1));
            int afterIndex = index + name.length();
            boolean after = afterIndex >= text.length() ||
                !Character.isJavaIdentifierPart(text.charAt(afterIndex));
            if (before && after) return true;
        }
        return false;
    }

    /**
     * Migrate cached output produced by older exporter revisions.  Those
     * revisions sometimes folded the REP MOVSD loop but retained its artificial
     * pointer live-outs and the final one-to-three byte copy:
     *
     *   memmove(dst, src, 0x40);
     *   dst = (T *)((byte *)dst + 0x40);
     *   src = (T *)((byte *)src + 0x40);
     *   *(short *)dst = (short)*src;
     *   *((byte *)dst + 2) = *((byte *)src + 2);
     *
     * Reused function bodies are normalized again without being decompiled, so
     * recognize that exporter-owned representation and extend the memmove over
     * the exact contiguous tail.  The marker byte count from some intermediate
     * revisions already includes a prefix of the tail; therefore the new size
     * is the maximum of that count and advance+tail, never their sum.
     */
    private NormalizedCode normalizeLegacyBulkCopyLiveouts(String code) {
        if (code == null || code.isEmpty() ||
                !code.contains(BULK_COPY_MARKER) ||
                !code.contains("((byte *)"))
            return new NormalizedCode(code, 0);
        String[] lines = code.split("\\R", -1);
        Map<String, PointerDeclaration> declarations = pointerDeclarations(code);
        List<String> output = new ArrayList<>();
        int replacements = 0;
        for (int index = 0; index < lines.length; index++) {
            Matcher copy = LEGACY_BULK_COPY.matcher(lines[index]);
            if (!copy.matches() || index + 3 >= lines.length) {
                output.add(lines[index]);
                continue;
            }
            String indent = copy.group("indent");
            String destinationName = copy.group("destination");
            String sourceName = copy.group("source");
            Long copiedBytes = unsignedLiteral(copy.group("bytes"));
            Long destinationAdvance = legacyPointerAdvanceBytes(
                lines[index + 1], indent, destinationName);
            Long sourceAdvance = legacyPointerAdvanceBytes(
                lines[index + 2], indent, sourceName);
            if (copiedBytes == null || destinationAdvance == null ||
                    sourceAdvance == null ||
                    copiedBytes <= 0 || copiedBytes > 0x1000000L ||
                    destinationAdvance <= 0 ||
                    destinationAdvance > 0x1000000L ||
                    !destinationAdvance.equals(sourceAdvance) ||
                    copiedBytes < destinationAdvance ||
                    copiedBytes - destinationAdvance > 3) {
                output.add(lines[index]);
                continue;
            }

            CopyBody body = new CopyBody(destinationName, sourceName);
            long coveredTail = copiedBytes - destinationAdvance;
            int cursor = index + 3;
            List<String> interstitial = new ArrayList<>();
            while (cursor < lines.length && interstitial.size() < 4 &&
                    safeLegacyCopyInterstitial(lines[cursor], indent,
                        destinationName, sourceName)) {
                interstitial.add(lines[cursor]);
                cursor++;
            }
            int lastTail = cursor - 1;
            boolean consumedTail = false;
            while (cursor < lines.length && coveredTail < 3) {
                String line = lines[cursor];
                String stripped = line.stripLeading();
                String tailIndent =
                    line.substring(0, line.length() - stripped.length());
                if (!tailIndent.equals(indent)) break;
                TailCopy tail = fixedTailCopy(stripped, body, declarations);
                if (tail == null || tail.offset != coveredTail ||
                        coveredTail + tail.width > 3)
                    break;
                coveredTail += tail.width;
                lastTail = cursor++;
                consumedTail = true;
            }
            if (!consumedTail) {
                output.add(lines[index]);
                continue;
            }

            String after = String.join(System.lineSeparator(),
                Arrays.copyOfRange(lines, lastTail + 1, lines.length));
            boolean destinationLive = identifierValueLiveAfter(after,
                destinationName, 0, indent.length());
            boolean sourceLive = identifierValueLiveAfter(after,
                sourceName, 0, indent.length());
            PointerDeclaration destination = declarations.get(destinationName);
            PointerDeclaration source = declarations.get(sourceName);
            if ((destinationLive && destination == null) ||
                    (sourceLive && source == null)) {
                output.add(lines[index]);
                continue;
            }

            long totalBytes = Math.max(copiedBytes,
                destinationAdvance + coveredTail);
            output.add(indent + "memmove(" + destinationName + ", " +
                sourceName + ", " + hexLiteral(totalBytes) + "); " +
                BULK_COPY_MARKER);
            if (destinationLive)
                output.add(pointerAdvance(indent, destinationName, destination,
                    hexLiteral(destinationAdvance)));
            if (sourceLive)
                output.add(pointerAdvance(indent, sourceName, source,
                    hexLiteral(sourceAdvance)));
            output.addAll(interstitial);
            index = lastTail;
            replacements++;
        }
        return replacements == 0 ? new NormalizedCode(code, 0) :
            new NormalizedCode(
                String.join(System.lineSeparator(), output), replacements);
    }

    private Long legacyPointerAdvanceBytes(String line, String indent,
            String name) {
        String literal = "(?<bytes>0x[0-9A-Fa-f]+|[0-9]+)";
        Pattern pattern = Pattern.compile("^" + Pattern.quote(indent) +
            Pattern.quote(name) + "[ \\t]*=[ \\t]*\\([^;]+\\)[ \\t]*" +
            "\\(\\(byte[ \\t]*\\*\\)[ \\t]*" + Pattern.quote(name) +
            "[ \\t]*\\+[ \\t]*" + literal + "\\);[ \\t]*$");
        Matcher matcher = pattern.matcher(line);
        return matcher.matches() ? unsignedLiteral(matcher.group("bytes")) :
            null;
    }

    private boolean safeLegacyCopyInterstitial(String line, String indent,
            String destination, String source) {
        if (!line.startsWith(indent)) return false;
        String statement = line.substring(indent.length());
        if (!statement.matches(
                "[A-Za-z_$][A-Za-z0-9_$]*(?:\\[[^]]+\\])?[ \\t]*=" +
                "[ \\t]*[^;]+;[ \\t]*"))
            return false;
        if (statement.contains("*") || statement.contains("(") ||
                statement.contains("->") ||
                containsExportIdentifier(statement, destination) ||
                containsExportIdentifier(statement, source))
            return false;
        return true;
    }

    /**
     * MSVC lowers many fixed-direction byte copies to REP MOVSD followed by
     * REP MOVSB.  Ghidra expands those two instructions into a pair of source
     * loops whose counters are byte_count >> 2 and byte_count & 3.  Those
     * counters are not source-level array indices and their undefined4/
     * undefined1 pointer spelling creates a large amount of false type debt.
     *
     * Fold only the exact two-loop form with one copy plus the matching source
     * and destination increments in each body.  If an advanced pointer or
     * exhausted counter remains live, reproduce that exact live-out state after
     * the memmove.  This admits row/pitch copy loops without silently changing
     * later pointer arithmetic.  memmove is deliberately used instead of
     * memcpy: the DArray erase helper copies an overlapping tail toward a lower
     * address.
     */
    private NormalizedCode normalizeBulkCopyLoops(String code) {
        if (code == null || code.isEmpty())
            return new NormalizedCode(code, 0);
        boolean dynamicCandidate =
            code.contains(">> 2") && code.contains("& 3");
        String[] lines = code.split("\\R", -1);
        Map<String, PointerDeclaration> declarations = pointerDeclarations(code);
        List<String> output = new ArrayList<>();
        Set<String> bytePointers = new LinkedHashSet<>();
        Set<String> deadLocals = new LinkedHashSet<>();
        int replacements = 0;
        for (int index = 0; index < lines.length; index++) {
            Matcher words = BULK_COPY_WORD_HEADER.matcher(lines[index]);
            if (!dynamicCandidate || !words.matches() ||
                    index + 9 >= lines.length) {
                output.add(lines[index]);
                continue;
            }
            String indent = words.group("indent");
            String wordCounter = words.group("counter");
            String byteCounter = words.group("bytes");
            CopyBody wordBody = copyBody(lines, index + 1, 4, declarations, false);
            int wordClose = index + 4;
            int tailHeaderIndex = index + 5;
            Matcher tail = BULK_COPY_TAIL_HEADER.matcher(lines[tailHeaderIndex]);
            CopyBody byteBody = copyBody(lines, tailHeaderIndex + 1, 1,
                declarations, true);
            int tailClose = tailHeaderIndex + 4;
            boolean exact = wordBody != null && byteBody != null &&
                !wordCounter.equals(byteCounter) &&
                lines[wordClose].equals(indent + "}") &&
                tail.matches() && tail.group("indent").equals(indent) &&
                tail.group("bytes").equals(byteCounter) &&
                lines[tailClose].equals(indent + "}") &&
                wordBody.destination.equals(byteBody.destination) &&
                wordBody.source.equals(byteBody.source);
            if (!exact) {
                output.add(lines[index]);
                continue;
            }
            String tailCounter = tail.group("counter");
            String after = String.join(System.lineSeparator(),
                Arrays.copyOfRange(lines, tailClose + 1, lines.length));
            boolean wordCounterLive = identifierValueLiveAfter(after,
                wordCounter, 0, indent.length());
            boolean tailCounterLive = identifierValueLiveAfter(after,
                tailCounter, 0, indent.length());
            boolean destinationLive = identifierValueLiveAfter(after,
                wordBody.destination, 0, indent.length());
            boolean sourceLive = identifierValueLiveAfter(after,
                wordBody.source, 0, indent.length());
            PointerDeclaration destination =
                declarations.get(wordBody.destination);
            PointerDeclaration source = declarations.get(wordBody.source);
            if ((destinationLive && destination == null) ||
                    (sourceLive && source == null)) {
                output.add(lines[index]);
                continue;
            }
            output.add(indent + "memmove(" + wordBody.destination + ", " +
                wordBody.source + ", " + byteCounter + "); " + BULK_COPY_MARKER);
            if (destinationLive)
                output.add(pointerAdvance(indent, wordBody.destination,
                    destination, byteCounter));
            if (sourceLive)
                output.add(pointerAdvance(indent, wordBody.source, source,
                    byteCounter));
            if (wordCounterLive)
                output.add(indent + wordCounter + " = 0;");
            else deadLocals.add(wordCounter);
            if (!tailCounter.equals(wordCounter)) {
                if (tailCounterLive)
                    output.add(indent + tailCounter + " = 0;");
                else if (!tailCounter.equals(byteCounter))
                    deadLocals.add(tailCounter);
            }
            if (!destinationLive && destination != null &&
                    destination.width == 4 &&
                    destination.type.trim().equals("undefined4"))
                bytePointers.add(wordBody.destination);
            if (!sourceLive && source != null && source.width == 4 &&
                    source.type.trim().equals("undefined4"))
                bytePointers.add(wordBody.source);
            index = tailClose;
            replacements++;
        }
        String normalized = replacements == 0 ? code :
            String.join(System.lineSeparator(), output);
        for (String pointer : bytePointers)
            normalized = normalizeBulkCopyBytePointer(normalized, pointer);
        NormalizedCode fixed =
            normalizeFixedBulkCopyLoops(normalized, deadLocals);
        normalized = removeDeadBulkZeroLocals(fixed.code, deadLocals);
        return new NormalizedCode(normalized,
            replacements + fixed.replacements);
    }

    /**
     * A constant-size REP MOVSD followed by one non-dword tail transfer is the
     * fixed-size sibling of the dynamic two-loop form.  The exact loop body,
     * optional equal-width source/destination tail, and dead temporaries make
     * the byte count provable without assigning an artificial undefined4 array.
     */
    private NormalizedCode normalizeFixedBulkCopyLoops(String code,
            Set<String> deadLocals) {
        String[] lines = code.split("\\R", -1);
        Map<String, PointerDeclaration> declarations = pointerDeclarations(code);
        List<String> output = new ArrayList<>();
        Set<String> bytePointers = new LinkedHashSet<>();
        int replacements = 0;
        for (int index = 0; index < lines.length; index++) {
            Matcher header = BULK_COPY_FIXED_HEADER.matcher(lines[index]);
            if (!header.matches() || index + 4 >= lines.length) {
                output.add(lines[index]);
                continue;
            }
            CopyBody body = copyBody(lines, index + 1, 4,
                declarations, false);
            String indent = header.group("indent");
            int close = index + 4;
            if (body == null || !lines[close].equals(indent + "}")) {
                output.add(lines[index]);
                continue;
            }
            long tailWidth = 0;
            int end = close;
            while (end + 1 < lines.length && tailWidth < 3) {
                String tailLine = lines[end + 1];
                String stripped = tailLine.stripLeading();
                String tailIndent = tailLine.substring(
                    0, tailLine.length() - stripped.length());
                if (!tailIndent.equals(indent)) break;
                TailCopy tail = fixedTailCopy(stripped, body, declarations);
                if (tail == null || tail.offset != tailWidth ||
                        tailWidth + tail.width > 3)
                    break;
                tailWidth += tail.width;
                end++;
            }
            long count;
            try {
                String value = header.group("count");
                count = value.regionMatches(true, 0, "0x", 0, 2) ?
                    Long.parseUnsignedLong(value.substring(2), 16) :
                    Long.parseLong(value);
            }
            catch (RuntimeException exception) {
                output.add(lines[index]);
                continue;
            }
            long bytes;
            try {
                bytes = Math.addExact(Math.multiplyExact(count, 4L),
                    tailWidth);
            }
            catch (ArithmeticException exception) {
                output.add(lines[index]);
                continue;
            }
            if (bytes <= 0 || bytes > 0x1000000L) {
                output.add(lines[index]);
                continue;
            }
            String after = String.join(System.lineSeparator(),
                Arrays.copyOfRange(lines, end + 1, lines.length));
            String counter = header.group("counter");
            boolean counterLive = identifierValueLiveAfter(after, counter, 0,
                indent.length());
            boolean destinationLive = identifierValueLiveAfter(after,
                body.destination, 0, indent.length());
            boolean sourceLive = identifierValueLiveAfter(after, body.source,
                0, indent.length());
            PointerDeclaration destination =
                declarations.get(body.destination);
            PointerDeclaration source = declarations.get(body.source);
            if ((destinationLive && destination == null) ||
                    (sourceLive && source == null)) {
                output.add(lines[index]);
                continue;
            }
            output.add(indent + "memmove(" + body.destination + ", " +
                body.source + ", " + hexLiteral(bytes) + "); " +
                BULK_COPY_MARKER);
            long advancedBytes = count * 4L;
            if (destinationLive)
                output.add(pointerAdvance(indent, body.destination,
                    destination, hexLiteral(advancedBytes)));
            if (sourceLive)
                output.add(pointerAdvance(indent, body.source, source,
                    hexLiteral(advancedBytes)));
            if (counterLive)
                output.add(indent + counter + " = 0;");
            else deadLocals.add(counter);
            if (!destinationLive && destination != null &&
                    destination.width == 4 &&
                    destination.type.trim().equals("undefined4"))
                bytePointers.add(body.destination);
            if (!sourceLive && source != null && source.width == 4 &&
                    source.type.trim().equals("undefined4"))
                bytePointers.add(body.source);
            index = end;
            replacements++;
        }
        if (replacements == 0) return new NormalizedCode(code, 0);
        String normalized = String.join(System.lineSeparator(), output);
        for (String pointer : bytePointers)
            normalized = normalizeBulkCopyBytePointer(normalized, pointer);
        return new NormalizedCode(normalized, replacements);
    }

    private String pointerAdvance(String indent, String name,
            PointerDeclaration declaration, String byteCount) {
        Long bytes = unsignedLiteral(byteCount);
        if (bytes != null && declaration.width > 0 &&
                bytes % declaration.width == 0) {
            long elements = bytes / declaration.width;
            return indent + name + " = " + name + " + " +
                hexLiteral(elements) + ";";
        }
        String stars = "*".repeat(Math.max(1, declaration.stars));
        return indent + name + " = (" + declaration.type + " " + stars +
            ")((byte *)" + name + " + " + byteCount + ");";
    }

    /**
     * MSVC's fixed REP MOVSD expansion commonly leaves a two-byte and/or
     * one-byte tail after the dword loop. Ghidra spells those accesses through
     * the already advanced source/destination temporaries. Treat a contiguous
     * exact tail as part of the same byte copy so the export does not invent
     * otherwise dead live-out pointer arithmetic.
     */
    private TailCopy fixedTailCopy(String statement, CopyBody body,
            Map<String, PointerDeclaration> declarations) {
        Matcher assignment =
            Pattern.compile("^(.+?)[ \\t]*=[ \\t]*(.+);$").matcher(statement);
        if (!assignment.matches()) return null;
        for (int width : List.of(2, 1)) {
            TailAccess destination =
                fixedTailAccess(assignment.group(1), width, declarations);
            TailAccess source =
                fixedTailAccess(assignment.group(2), width, declarations);
            if (destination == null || source == null ||
                    destination.offset != source.offset ||
                    !destination.pointer.equals(body.destination) ||
                    !source.pointer.equals(body.source))
                continue;
            return new TailCopy(destination.offset, width);
        }
        return null;
    }

    private TailAccess fixedTailAccess(String expression, int width,
            Map<String, PointerDeclaration> declarations) {
        String value = expression.trim();
        boolean explicitlyNarrowed = false;
        Matcher narrowed = Pattern.compile(
            "^\\((char|byte|undefined1|short|ushort|undefined2)\\)" +
            "[ \\t]*(.+)$").matcher(value);
        if (narrowed.matches()) {
            if (renderedTypeWidth(narrowed.group(1)) != width) return null;
            value = narrowed.group(2).trim();
            explicitlyNarrowed = true;
        }
        Matcher cast = Pattern.compile(
            "^\\*\\(([^)]+)\\*\\)[ \\t]*(.+)$").matcher(value);
        if (cast.matches()) {
            if (pointerArithmeticWidth(cast.group(1).trim(), 1) != width)
                return null;
            return fixedTailAddress(cast.group(2));
        }
        Matcher direct = Pattern.compile(
            "^\\*([A-Za-z_$][A-Za-z0-9_$]*)$").matcher(value);
        if (direct.matches()) {
            PointerDeclaration declaration = declarations.get(direct.group(1));
            return explicitlyNarrowed ||
                    (declaration != null && declaration.width == width) ?
                new TailAccess(direct.group(1), 0) : null;
        }
        Matcher indexed = Pattern.compile(
            "^([A-Za-z_$][A-Za-z0-9_$]*)\\[" +
            "(0x[0-9A-Fa-f]+|[0-9]+)\\]$").matcher(value);
        if (!indexed.matches()) return null;
        PointerDeclaration declaration = declarations.get(indexed.group(1));
        Long element = unsignedLiteral(indexed.group(2));
        if (declaration == null || declaration.width != width ||
                element == null || element > 3)
            return null;
        long offset = element * declaration.width;
        return offset <= 3 ?
            new TailAccess(indexed.group(1), (int)offset) : null;
    }

    private TailAccess fixedTailAddress(String expression) {
        String value = expression.trim();
        Matcher direct = Pattern.compile(
            "^([A-Za-z_$][A-Za-z0-9_$]*)$").matcher(value);
        if (direct.matches()) return new TailAccess(direct.group(1), 0);
        Matcher offset = Pattern.compile(
            "^\\(\\(int\\)[ \\t]*(?<name>[A-Za-z_$][A-Za-z0-9_$]*)" +
            "[ \\t]*\\+[ \\t]*(?<offset>0x[0-9A-Fa-f]+|[0-9]+)\\)$")
            .matcher(value);
        if (!offset.matches()) return null;
        Long amount = unsignedLiteral(offset.group("offset"));
        return amount != null && amount <= 3 ?
            new TailAccess(offset.group("name"), amount.intValue()) : null;
    }

    private Long unsignedLiteral(String value) {
        if (value == null) return null;
        String text = value.trim();
        try {
            if (text.regionMatches(true, 0, "0x", 0, 2))
                return Long.parseUnsignedLong(text.substring(2), 16);
            if (text.matches("[0-9]+")) return Long.parseLong(text);
            return null;
        }
        catch (NumberFormatException ignored) {
            return null;
        }
    }

    private CopyBody copyBody(String[] lines, int start, int width,
            Map<String, PointerDeclaration> declarations, boolean byteIncrements) {
        if (start < 0 || start + 2 >= lines.length) return null;
        CopyBody copy = null;
        Set<String> increments = new LinkedHashSet<>();
        for (int index = start; index < start + 3; index++) {
            String statement = lines[index].trim();
            String increment = incrementedPointer(statement, width,
                declarations, byteIncrements);
            if (increment != null) {
                increments.add(increment);
                continue;
            }
            CopyBody found = copyStatement(statement, width, declarations);
            if (found == null || copy != null) return null;
            copy = found;
        }
        if (copy == null || increments.size() != 2 ||
                !increments.contains(copy.destination) ||
                !increments.contains(copy.source))
            return null;
        return copy;
    }

    private String incrementedPointer(String statement, int transferWidth,
            Map<String, PointerDeclaration> declarations,
            boolean allowByteCast) {
        String direct = incrementedPointer(statement, allowByteCast);
        if (direct != null) return direct;
        if (transferWidth <= 1) return null;
        Matcher bytes = Pattern.compile(
            "^(?<name>[A-Za-z_$][A-Za-z0-9_$]*)[ \\t]*=[ \\t]*\\k<name>" +
            "[ \\t]*\\+[ \\t]*" + transferWidth + ";$").matcher(statement);
        if (!bytes.matches()) return null;
        PointerDeclaration declaration = declarations.get(bytes.group("name"));
        return declaration != null && declaration.width == 1 ?
            bytes.group("name") : null;
    }

    private String incrementedPointer(String statement,
            boolean allowByteCast) {
        if (allowByteCast) {
            Matcher cast = BYTE_POINTER_INCREMENT.matcher(statement);
            if (cast.matches()) return cast.group("name");
        }
        Matcher direct = POINTER_INCREMENT.matcher(statement);
        return direct.matches() ? direct.group("name") : null;
    }

    private CopyBody copyStatement(String statement, int width,
            Map<String, PointerDeclaration> declarations) {
        Matcher assignment =
            Pattern.compile("^(.+?)[ \\t]*=[ \\t]*(.+);$").matcher(statement);
        if (!assignment.matches()) return null;
        String destination =
            dereferencedVariable(assignment.group(1), width, declarations);
        String source =
            dereferencedVariable(assignment.group(2), width, declarations);
        return destination == null || source == null ?
            null : new CopyBody(destination, source);
    }

    private String dereferencedVariable(String expression, int width,
            Map<String, PointerDeclaration> declarations) {
        String value = expression.trim();
        Matcher direct = Pattern.compile(
            "^\\*([A-Za-z_$][A-Za-z0-9_$]*)$").matcher(value);
        if (direct.matches()) {
            PointerDeclaration declaration = declarations.get(direct.group(1));
            return declaration != null && declaration.width == width ?
                direct.group(1) : null;
        }
        Matcher cast = Pattern.compile(
            "^\\*\\(([^)]+)\\*\\)[ \\t]*([A-Za-z_$][A-Za-z0-9_$]*)$")
            .matcher(value);
        if (cast.matches())
            return pointerArithmeticWidth(cast.group(1).trim(), 1) == width ?
                cast.group(2) : null;
        if (width == 1) {
            Matcher narrowed = Pattern.compile(
                "^\\((?:char|byte|undefined1)\\)[ \\t]*" +
                "\\*([A-Za-z_$][A-Za-z0-9_$]*)$").matcher(value);
            if (narrowed.matches()) return narrowed.group(1);
        }
        return null;
    }

    private String normalizeBulkCopyBytePointer(String code, String pointer) {
        Pattern declaration = Pattern.compile(
            "(?m)^(?<indent>[ \\t]*)undefined4[ \\t]*\\*[ \\t]*" +
            Pattern.quote(pointer) + "[ \\t]*;$");
        Matcher declared = declaration.matcher(code);
        if (!declared.find()) return code;
        String normalized = declared.replaceFirst(
            Matcher.quoteReplacement(declared.group("indent") +
                "byte *" + pointer + ";"));
        Pattern assignmentCast = Pattern.compile(
            "(?m)^(?<prefix>[ \\t]*" + Pattern.quote(pointer) +
            "[ \\t]*=[ \\t]*)\\(undefined4[ \\t]*\\*\\)");
        Matcher cast = assignmentCast.matcher(normalized);
        normalized = cast.replaceAll(match ->
            Matcher.quoteReplacement(match.group("prefix") + "(byte *)"));
        Pattern directAssignment = Pattern.compile(
            "(?m)^(?<prefix>[ \\t]*" + Pattern.quote(pointer) +
            "[ \\t]*=[ \\t]*)(?<value>[^;\\r\\n]+);$");
        Matcher direct = directAssignment.matcher(normalized);
        return direct.replaceAll(match -> {
            String value = match.group("value").trim();
            if (value.matches("^\\(byte[ \\t]*\\*\\).*"))
                return Matcher.quoteReplacement(match.group());
            return Matcher.quoteReplacement(match.group("prefix") +
                "(byte *)(" + value + ");");
        });
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
        NormalizedCode dynamic =
            normalizeDynamicBulkZeroLoops(simple.code, candidates);
        String normalized = removeDeadBulkZeroLocals(dynamic.code, candidates);
        return new NormalizedCode(normalized,
            selected.replacements + simple.replacements +
                dynamic.replacements);
    }

    /**
     * Dynamic allocation sizes produce the same REP STOSD/REP STOSB pair as
     * fixed object tails, but the fill length is a variable.  Fold only the
     * exact two-loop form.  When the advanced pointer or exhausted counters are
     * live, reproduce their exact post-loop values after memset.
     */
    private NormalizedCode normalizeDynamicBulkZeroLoops(String code,
            Set<String> deadLocals) {
        if (code == null || code.isEmpty() || !code.contains(">> 2") ||
                !code.contains("& 3"))
            return new NormalizedCode(code, 0);
        String[] lines = code.split("\\R", -1);
        Map<String, PointerDeclaration> declarations = pointerDeclarations(code);
        List<String> output = new ArrayList<>();
        Set<String> bytePointers = new LinkedHashSet<>();
        int replacements = 0;
        for (int index = 0; index < lines.length; index++) {
            Matcher words = BULK_COPY_WORD_HEADER.matcher(lines[index]);
            if (!words.matches() || index + 7 >= lines.length) {
                output.add(lines[index]);
                continue;
            }
            String indent = words.group("indent");
            String wordCounter = words.group("counter");
            String byteCount = words.group("bytes");
            ZeroLoopBody wordBody = zeroBody(lines, index + 1, 4,
                declarations, false);
            if (wordBody == null) {
                output.add(lines[index]);
                continue;
            }
            String pointer = wordBody.pointer;
            int wordClose = index + wordBody.lineCount + 1;
            int tailHeaderIndex = wordClose + 1;
            if (tailHeaderIndex >= lines.length) {
                output.add(lines[index]);
                continue;
            }
            Matcher tail =
                BULK_COPY_TAIL_HEADER.matcher(lines[tailHeaderIndex]);
            ZeroLoopBody tailBody = zeroBody(lines, tailHeaderIndex + 1, 1,
                declarations, true);
            if (tailBody == null) {
                output.add(lines[index]);
                continue;
            }
            String bytePointer = tailBody.pointer;
            int tailClose = tailHeaderIndex + tailBody.lineCount + 1;
            boolean exact = tailClose < lines.length &&
                !wordCounter.equals(byteCount) &&
                pointer.equals(bytePointer) &&
                lines[wordClose].equals(indent + "}") &&
                tail.matches() && tail.group("indent").equals(indent) &&
                tail.group("bytes").equals(byteCount) &&
                lines[tailClose].equals(indent + "}");
            if (!exact) {
                output.add(lines[index]);
                continue;
            }
            String tailCounter = tail.group("counter");
            String after = String.join(System.lineSeparator(),
                Arrays.copyOfRange(lines, tailClose + 1, lines.length));
            boolean pointerLive = identifierValueLiveAfter(after, pointer, 0,
                indent.length());
            boolean wordCounterLive = identifierValueLiveAfter(after,
                wordCounter, 0, indent.length());
            boolean tailCounterLive = identifierValueLiveAfter(after,
                tailCounter, 0, indent.length());
            PointerDeclaration declaration = declarations.get(pointer);
            if (pointerLive && declaration == null) {
                output.add(lines[index]);
                continue;
            }
            output.add(indent + "memset(" + pointer + ", 0, " +
                byteCount + "); " + BULK_ZERO_MARKER);
            if (pointerLive)
                output.add(pointerAdvance(indent, pointer, declaration,
                    byteCount));
            if (wordCounterLive)
                output.add(indent + wordCounter + " = 0;");
            else deadLocals.add(wordCounter);
            if (!tailCounter.equals(wordCounter)) {
                if (tailCounterLive)
                    output.add(indent + tailCounter + " = 0;");
                else if (!tailCounter.equals(byteCount))
                    deadLocals.add(tailCounter);
            }
            if (!pointerLive && declaration != null &&
                    declaration.width == 4 &&
                    declaration.type.trim().equals("undefined4"))
                bytePointers.add(pointer);
            index = tailClose;
            replacements++;
        }
        if (replacements == 0) return new NormalizedCode(code, 0);
        String normalized = String.join(System.lineSeparator(), output);
        for (String pointer : bytePointers)
            normalized = normalizeBulkCopyBytePointer(normalized, pointer);
        return new NormalizedCode(normalized, replacements);
    }

    private ZeroLoopBody zeroBody(String[] lines, int start, int width,
            Map<String, PointerDeclaration> declarations,
            boolean byteIncrement) {
        if (start < 0 || start + 1 >= lines.length) return null;
        String pointer = zeroStatement(lines[start].trim(), width,
            declarations);
        String increment = incrementedPointer(lines[start + 1].trim(),
            byteIncrement);
        if (pointer != null && pointer.equals(increment))
            return new ZeroLoopBody(pointer, 2);
        if (width != 4 || start + 4 >= lines.length) return null;

        String bytePointer = null;
        for (int offset = 0; offset < 4; offset++) {
            Matcher store =
                BYTE_ZERO_ELEMENT.matcher(lines[start + offset].trim());
            if (!store.matches() ||
                    Integer.parseInt(store.group("index")) != offset ||
                    (bytePointer != null &&
                        !bytePointer.equals(store.group("name"))))
                return null;
            bytePointer = store.group("name");
        }
        Matcher advance = BYTE_POINTER_INCREMENT_FOUR.matcher(
            lines[start + 4].trim());
        PointerDeclaration declaration = declarations.get(bytePointer);
        return bytePointer != null && advance.matches() &&
            advance.group("name").equals(bytePointer) &&
            declaration != null && declaration.width == 1 ?
                new ZeroLoopBody(bytePointer, 5) : null;
    }

    private String zeroStatement(String statement, int width,
            Map<String, PointerDeclaration> declarations) {
        Matcher assignment = Pattern.compile(
            "^(.+?)[ \\t]*=[ \\t]*(?:\\([^)]*\\)[ \\t]*)?0;$")
            .matcher(statement);
        return assignment.matches() ?
            dereferencedVariable(assignment.group(1), width, declarations) :
            null;
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
     * Very short printf formats are accepted before the
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

    private String annotatePseudocode(Function function, String code) {
        if (code == null || code.isEmpty()) return "";
        Set<String> reusedParameters = reusedParameterNames(function);
        String[] lines = code.split("\\R", -1);
        List<String> clean = new ArrayList<>();
        boolean needsRuntime = code.contains("STDebugBreak()") ||
            code.contains(BULK_ZERO_MARKER) ||
            code.contains(BULK_COPY_MARKER) || code.contains("DArrayAt<");
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
                lineIdiomKinds(statement.text, reusedParameters);
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
            if (line.contains(BULK_COPY_MARKER))
                addIdiom(evidence, "bulk_byte_copy", index + 1, line);
            if (line.contains("DArrayAt<"))
                addIdiom(evidence, "dynamic_array_indexing", index + 1, line);
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
                    code.contains(BULK_ZERO_MARKER)) ||
                (kind.equals("bulk_byte_copy") && code != null &&
                    code.contains(BULK_COPY_MARKER)) ||
                (kind.equals("dynamic_array_indexing") && code != null &&
                    code.contains("DArrayAt<"));
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
        Set<String> reusedParameters = reusedParameterNames(function);
        String[] lines = code == null ? new String[0] : code.split("\\R", -1);
        for (int index = 0; index < lines.length; index++) {
            String line = lines[index];
            String stripped = line.stripLeading();
            if (line.contains(PSEUDOCODE_COMMENT_MARKER) || stripped.startsWith("/*") ||
                    stripped.startsWith("*") || stripped.startsWith("*/") ||
                    stripped.startsWith("//") || stripped.startsWith("#")) continue;
            if (STRING_BASED_AGGREGATE.matcher(line).find())
                addQualityMatches(evidence, "string_based_aggregate_address",
                    RESIDUAL_STRING_SYMBOL, line, index + 1);
            else addQualityMatches(evidence, "unexpanded_string_symbol",
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
            addQualityMatches(evidence, "generated_enum_bitwise_composition",
                GENERATED_ENUM_COMPOSITION, line, index + 1);
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
            if (containsRecoveredGlobalRecordStride(line))
                addQuality(evidence, "flattened_global_record_array", 1, index + 1, line);
            Matcher assignment = PARAMETER_ASSIGNMENT.matcher(line);
            while (assignment.find()) {
                String name = assignment.group(1).replaceFirst("^_", "");
                if (reusedParameters.contains(name)) {
                    addQuality(evidence, "stack_slot_reuse", 1, index + 1, line);
                    break;
                }
            }
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
                field("quality_stage", qualityStage(kind)),
                field("regression_policy", qualityRegressionPolicy(kind)),
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
                 "unresolved_register_input", "return_width_artifact",
                 "generated_enum_bitwise_composition" -> "high";
            case "raw_pointer_offset", "packed_or_unaligned_piece",
                 "generic_global_aggregate", "undefined_type",
                 "flattened_global_record_array", "dynamic_array_indexing",
                 "string_based_aggregate_address", "stack_slot_reuse" -> "medium";
            default -> "low";
        };
    }

    private String qualityStage(String kind) {
        return switch (kind) {
            case "return_width_artifact", "unresolved_register_input" -> "abi_recovery";
            case "stack_slot_reuse" -> "ssa_lifetime_presentation";
            case "raw_indirect_call" -> "call_signature_recovery";
            case "raw_pointer_offset", "anonymous_shape_type" -> "layout_recovery";
            case "casted_generic_field", "packed_or_unaligned_piece",
                 "dynamic_array_indexing" -> "field_type_refinement";
            case "generic_field_name" -> "semantic_naming_after_layout";
            case "generated_enum_bitwise_composition" -> "enum_domain_recovery";
            case "control_flow_label" -> "control_flow_presentation";
            case "generic_global_aggregate", "flattened_global_record_array",
                 "string_based_aggregate_address" -> "aggregate_recovery";
            default -> "general_type_recovery";
        };
    }

    private String qualityRegressionPolicy(String kind) {
        return switch (kind) {
            case "generated_enum_bitwise_composition" -> "strict_zero";
            case "generic_field_name", "casted_generic_field", "anonymous_shape_type",
                 "generic_data_symbol" -> "stage_transition";
            case "control_flow_label" -> "informational";
            default -> "nonincreasing";
        };
    }

    private long qualityOccurrencesForPolicy(String policy) {
        long result = 0;
        for (Map.Entry<String, QualityAggregate> item : qualityAggregates.entrySet())
            if (policy.equals(qualityRegressionPolicy(item.getKey())))
                result += item.getValue().occurrences;
        return result;
    }

    private String qualityResolution(String kind) {
        return switch (kind) {
            case "unexpanded_string_symbol" ->
                "define the immutable NUL-terminated data and let the exporter inline it; writable buffers stay symbolic";
            case "string_based_aggregate_address" ->
                "recover the adjacent record table and its index bias; the decompiler folded the table base onto a neighboring string symbol";
            case "casted_generic_field" ->
                "repair receiver/pointer-family ownership, then make the field width and signedness match the machine access";
            case "generated_enum_bitwise_composition" ->
                "grow the generated enum domain from the exact OR-composed value before applying it again";
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
                "apply the inferred packed record and its nested arrays after base/stride proof";
            case "stack_slot_reuse" ->
                "retain the ABI parameter type, but split the post-overwrite stack-slot lifetime into a source-level local";
            default -> "review machine-code evidence before changing the Ghidra database";
        };
    }

    private List<String> lineIdiomKinds(String line, Set<String> reusedParameters) {
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
        if (containsRecoveredGlobalRecordStride(line))
            kinds.add("flattened_global_record_array");
        if (RAW_INDIRECT_CALL.matcher(line).find()) kinds.add("raw_indirect_call");
        Matcher parameterAssignment = PARAMETER_ASSIGNMENT.matcher(line);
        while (parameterAssignment.find()) {
            String name = parameterAssignment.group(1).replaceFirst("^_", "");
            if (reusedParameters.contains(name)) {
                kinds.add("stack_slot_reuse");
                break;
            }
        }
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

    /**
     * Identify physical incoming stack slots which MSVC turns into scratch locals
     * after their original value dies.  This is presentation evidence only: the
     * exporter does not mutate the Listing variable or pretend the two SSA
     * lifetimes have one source-level type.
     */
    private Set<String> reusedParameterNames(Function function) {
        if (function == null) return Set.of();
        Set<String> cached = stackSlotReuseCache.get(function.getEntryPoint());
        if (cached != null) return cached;
        long frameBias = currentProgram.getDefaultPointerSize();
        Map<Long, StackSlotLifetime> slots = new HashMap<>();
        List<Parameter> parameters = Arrays.stream(function.getParameters())
            .filter(parameter -> !parameter.isAutoParameter())
            .sorted(Comparator.comparingInt(Parameter::getOrdinal)).toList();
        long abiOffset = frameBias * 2;
        for (Parameter parameter : parameters) {
            if (parameter.isAutoParameter() || !parameter.hasStackStorage()) continue;
            StackSlotLifetime lifetime = new StackSlotLifetime(parameter.getName());
            slots.putIfAbsent((long)parameter.getStackOffset() + frameBias, lifetime);
            if (frameBias == 4) slots.putIfAbsent(abiOffset, lifetime);
            int length = Math.max((int)frameBias,
                Math.max(parameter.getLength(), parameter.getFormalDataType().getLength()));
            abiOffset += (length + frameBias - 1) / frameBias * frameBias;
        }
        InstructionIterator instructions = listing.getInstructions(
            function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            String mnemonic = instruction.getMnemonicString()
                .toUpperCase(Locale.ROOT);
            for (int operandIndex = 0;
                    operandIndex < instruction.getNumOperands(); operandIndex++) {
                Long offset = ebpStackOffset(instruction, operandIndex);
                StackSlotLifetime slot = offset == null ? null : slots.get(offset);
                if (slot == null) continue;
                boolean write = operandIndex == 0 &&
                    instructionWritesFirstOperand(mnemonic);
                boolean read = !write || instructionReadsFirstOperand(mnemonic);
                if (read) {
                    if (slot.written) slot.readAfterWrite = true;
                    else slot.readBeforeWrite = true;
                }
                if (write && slot.readBeforeWrite) slot.written = true;
            }
        }
        Set<String> result = new TreeSet<>();
        for (StackSlotLifetime slot : slots.values())
            if (slot.readBeforeWrite && slot.written && slot.readAfterWrite)
                result.add(slot.parameterName);
        Set<String> immutable = Set.copyOf(result);
        stackSlotReuseCache.put(function.getEntryPoint(), immutable);
        return immutable;
    }

    private Long ebpStackOffset(String operand) {
        if (operand == null) return null;
        String value = operand.toUpperCase(Locale.ROOT).replace("BYTE PTR", "")
            .replace("WORD PTR", "").replace("DWORD PTR", "")
            .replace("QWORD PTR", "").replace(" ", "");
        Matcher matcher = Pattern.compile(
            "^\\[EBP(?:([+-])(0X[0-9A-F]+|[0-9]+))?\\]$").matcher(value);
        if (!matcher.matches()) return null;
        if (matcher.group(2) == null) return 0L;
        try {
            long parsed = matcher.group(2).startsWith("0X") ?
                Long.parseUnsignedLong(matcher.group(2).substring(2), 16) :
                Long.parseLong(matcher.group(2));
            return "-".equals(matcher.group(1)) ? -parsed : parsed;
        }
        catch (NumberFormatException ignored) { return null; }
    }

    private Long ebpStackOffset(Instruction instruction, int operandIndex) {
        if (instruction == null || operandIndex < 0 ||
                operandIndex >= instruction.getNumOperands()) return null;
        String representation =
            instruction.getDefaultOperandRepresentation(operandIndex);
        Long rendered = ebpStackOffset(representation);
        if (rendered != null) return rendered;
        String instructionText = instruction.toString();
        int separator = instructionText.indexOf(' ');
        if (separator >= 0) {
            String[] listingOperands =
                instructionText.substring(separator + 1).split("\\s*,\\s*");
            if (operandIndex < listingOperands.length) {
                rendered = ebpStackOffset(listingOperands[operandIndex]);
                if (rendered != null) return rendered;
            }
        }
        int operandType = instruction.getOperandType(operandIndex);
        if (!OperandType.isIndirect(operandType) &&
                (representation == null || !representation.contains("["))) return null;
        boolean ebp = false;
        long displacement = 0;
        int scalars = 0;
        for (Object object : instruction.getOpObjects(operandIndex)) {
            if (object instanceof Register register) {
                String name = register.getName().toUpperCase(Locale.ROOT);
                if (!"EBP".equals(name) && !"RBP".equals(name) && !"BP".equals(name))
                    return null;
                ebp = true;
            }
            else if (object instanceof Scalar scalar) {
                displacement += scalar.getSignedValue();
                scalars++;
            }
        }
        return ebp && scalars <= 1 ? displacement : null;
    }

    private boolean instructionWritesFirstOperand(String mnemonic) {
        return Set.of("MOV", "MOVSX", "MOVZX", "LEA", "POP", "XOR", "SUB", "SBB",
            "ADD", "ADC", "AND", "OR", "IMUL", "SHL", "SHR", "SAR", "SAL", "INC",
            "DEC", "NEG", "NOT").contains(mnemonic);
    }

    private boolean instructionReadsFirstOperand(String mnemonic) {
        return Set.of("XOR", "SUB", "SBB", "ADD", "ADC", "AND", "OR", "IMUL",
            "SHL", "SHR", "SAR", "SAL", "INC", "DEC", "NEG", "NOT").contains(mnemonic);
    }

    private String inlineTransform(String kind, String line) {
        return switch (kind) {
            case "unresolved_register_input" ->
                "candidate live-in register: verify boundary, SEH/setjmp ABI, or convention";
            case "return_width_artifact" ->
                "candidate call-output artifact: verify return width, clobbers, or x87 state";
            case "dynamic_array_indexing" -> darrayInlineTransform(line);
            case "flattened_global_record_array" ->
                "expected typedRecordArray[index].field after inferred base/stride proof";
            case "raw_indirect_call" ->
                "expected typed vtable/callback call with explicit __thiscall receiver";
            case "packed_or_unaligned_piece" -> packedInlineTransform(line);
            case "raw_pointer_offset" ->
                "candidate structure field after proof; otherwise retain buffer arithmetic";
            case "stack_slot_reuse" ->
                "compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable";
            default -> intendedTransform(kind);
        };
    }

    private String packedInlineTransform(String line) {
        Matcher tagged = TAGGED_24_COMPOSE.matcher(line);
        if (tagged.find()) {
            String tag = oneLine(tagged.group(1));
            String value = tagged.group(2);
            return "expected STPackTagged24(" + tag + ", " + value +
                ") == (((uint32_t)(" + value + ") & 0x00ffffffu) | " +
                "((uint32_t)(" + tag + ") << 24))";
        }
        return "expected named packed member, bit extract/compose, or unaligned load";
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
            case "bulk_byte_copy" ->
                "replace the exact dead REP MOVSD/MOVSB decompiler loops with overlap-safe memmove(destination, source, byte_count)";
            case "unresolved_register_input" ->
                "verify function boundary, calling convention, and SEH/setjmp live-in state before replacing unaff_/in_";
            case "return_width_artifact" ->
                "repair the proven call output: return width, register clobber, x87 stack state, or split high variable";
            case "dynamic_array_indexing" ->
                "render DArrayGet(array, index) or typed array->data[index]; runtime elementSize prevents a static C array type";
            case "flattened_global_record_array" ->
                "recompose as typedRecordArray[index].field using the inferred record stride and component metadata";
            case "raw_indirect_call" ->
                "apply a function-pointer or vtable-slot prototype, including explicit __thiscall receiver";
            case "packed_or_unaligned_piece" ->
                "replace piece syntax with a named packed field, bit extract/compose, memcpy, or explicit unaligned load";
            case "raw_pointer_offset" ->
                "propagate a compatible structure type across the pointer family and render a named field access";
            case "stack_slot_reuse" ->
                "split the optimized physical argument-slot reuse into the original parameter and a distinct local variable";
            default -> "review and express the machine operation as typed, compilable source";
        };
    }

    private String detector(String kind) {
        return switch (kind) {
            case "terminal_debug_trap" -> "x86 opcode CC plus decompiler swi(3) call idiom";
            case "bulk_zero_initialization" ->
                "exact decrementing undefined4 zero loop with an optional undefined1/2/4/8 tail store";
            case "bulk_byte_copy" ->
                "exact paired REP MOVSD/REP MOVSB copy loops with dead advanced pointers and counters";
            case "unresolved_register_input" -> "unaff_*/in_* high-variable name";
            case "return_width_artifact" ->
                "extraout_* high variable, possibly consumed by CONCAT*";
            case "dynamic_array_indexing" -> "same expression uses DArrayTy.elementSize and .data";
            case "flattened_global_record_array" -> "literal matching an inferred packed-record stride";
            case "raw_indirect_call" -> "cast to code* or code** at call site";
            case "packed_or_unaligned_piece" ->
                "Ghidra piece/CONCAT syntax or packed member arithmetic";
            case "raw_pointer_offset" -> "typed dereference over param/local plus constant offset";
            case "stack_slot_reuse" ->
                "machine reads an incoming EBP argument slot, later overwrites it, and reads the post-write lifetime";
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
                field("quality_stage", qualityStage(item.getKey())),
                field("regression_policy", qualityRegressionPolicy(item.getKey())),
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
            rawField("strict_zero_occurrence_count",
                Long.toString(qualityOccurrencesForPolicy("strict_zero"))),
            rawField("nonincreasing_occurrence_count",
                Long.toString(qualityOccurrencesForPolicy("nonincreasing"))),
            rawField("stage_transition_occurrence_count",
                Long.toString(qualityOccurrencesForPolicy("stage_transition"))),
            rawField("informational_occurrence_count",
                Long.toString(qualityOccurrencesForPolicy("informational"))),
            rawField("categories", "[" + String.join(",", categories) + "]")
        ));
        writeText(programRoot.resolve("pseudocode_runtime.h"),
            "#ifndef ST_PSEUDOCODE_RUNTIME_H\n" +
            "#define ST_PSEUDOCODE_RUNTIME_H\n\n" +
            "/* Standalone corpus code has no debugger continuation path. */\n" +
            "#include <stdint.h>\n" +
            "#include <stdlib.h>\n" +
            "#include <string.h>\n" +
            "static inline uint32_t STPackTagged24(uint32_t tag, uint32_t value) {\n" +
            "    return (value & 0x00ffffffu) | ((tag & 0xffu) << 24);\n" +
            "}\n" +
            "#if defined(__cplusplus)\n" +
            "template <typename Element, typename Array>\n" +
            "static inline Element *DArrayAt(Array *array, uint32_t index) {\n" +
            "    return reinterpret_cast<Element *>(\n" +
            "        reinterpret_cast<uint8_t *>(array->data) + array->elementSize * index);\n" +
            "}\n" +
            "#endif\n" +
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
        // actually addressed by this function are added below.  A specialized
        // DArray descriptor is the deliberate exception: element accesses use the
        // runtime elementSize/data pair, so instruction-level field tracking cannot
        // see which components of the pointed record the decompiler will render.
        // Include that one descriptor and its element layout only for functions
        // whose own signature/locals already reference the specialization.
        if (type instanceof ghidra.program.model.data.Structure structure) {
            if (nullToEmpty(structure.getDescription())
                    .startsWith(DARRAY_DESCRIPTOR_MARKER))
                collectDArrayDescriptorLayoutIdentity(structure, result);
            return;
        }
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

    private void collectDArrayDescriptorLayoutIdentity(
            ghidra.program.model.data.Structure descriptor, Set<String> result) {
        collectStructureLayoutIdentity("darray_descriptor", descriptor, result);
        ghidra.program.model.data.DataTypeComponent data =
            descriptor.getComponentAt(0x1c);
        if (data == null || data.getOffset() != 0x1c) return;
        DataType element = data.getDataType();
        while (element instanceof ghidra.program.model.data.TypeDef typedef)
            element = typedef.getBaseDataType();
        if (element instanceof ghidra.program.model.data.Pointer pointer)
            element = pointer.getDataType();
        while (element instanceof ghidra.program.model.data.TypeDef typedef)
            element = typedef.getBaseDataType();
        if (element instanceof ghidra.program.model.data.Structure structure)
            collectStructureLayoutIdentity("darray_element", structure, result);
    }

    private void collectStructureLayoutIdentity(String kind,
            ghidra.program.model.data.Structure structure, Set<String> result) {
        String prefix = kind + "\u0000" + structure.getPathName();
        result.add(prefix + "\u0000length=" + structure.getLength() +
            "\u0000description=" + nullToEmpty(structure.getDescription()));
        for (ghidra.program.model.data.DataTypeComponent component :
                structure.getDefinedComponents()) {
            result.add(prefix + "\u0000component=" + component.getOffset() +
                "\u0000length=" + component.getLength() +
                "\u0000name=" + nullToEmpty(component.getFieldName()) +
                "\u0000type=" + component.getDataType().getPathName() +
                "\u0000comment=" + nullToEmpty(component.getComment()));
            collectTypeIdentity(component.getDataType(), result);
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
        String expression = operand.substring(open + 1, close)
            .replace(" ", "").toUpperCase(Locale.ROOT);
        while (expression.contains("+-") || expression.contains("-+") ||
                expression.contains("--")) {
            expression = expression.replace("+-", "-")
                .replace("-+", "-").replace("--", "+");
        }
        Matcher term = Pattern.compile("([+-]?)([^+-]+)").matcher(expression);
        String baseRegister = null;
        long displacement = 0;
        int cursor = 0;
        while (term.find()) {
            if (term.start() != cursor) return null;
            cursor = term.end();
            String sign = term.group(1);
            String value = term.group(2);
            String register = fingerprintRegister(value);
            if (register != null) {
                if ("-".equals(sign) || baseRegister != null) return null;
                baseRegister = register;
                continue;
            }
            if (value.matches("[A-Z][A-Z0-9]{1,3}\\*(?:0X[0-9A-F]+|[0-9]+)"))
                continue; // index*scale does not change the member displacement
            Long parsed = fingerprintImmediate(value);
            if (parsed == null) return null;
            displacement += "-".equals(sign) ? -parsed : parsed;
        }
        if (cursor != expression.length() || baseRegister == null) return null;
        if (currentProgram.getDefaultPointerSize() == 4 &&
                displacement >= 0x80000000L && displacement <= 0xffffffffL)
            displacement -= 0x100000000L;
        return new FingerprintMemory(baseRegister, displacement);
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
    private static class DArrayDescriptor {
        final String descriptorName, elementName;
        final Map<Long, DArrayElementField> fields;
        DArrayDescriptor(String descriptorName, String elementName,
                Map<Long, DArrayElementField> fields) {
            this.descriptorName = descriptorName;
            this.elementName = elementName;
            this.fields = fields;
        }
        DArrayElementField field(long offset, int width) {
            if (offset < 0 || width < 1) return null;
            DArrayElementField field = fields.get(offset);
            return field != null && field.width == width ? field : null;
        }
    }
    private static class RewriteAccumulator {
        String code;
        int replacements;
        RewriteAccumulator(String code) { this.code = code; }
        void replace(Pattern pattern, ReplacementFunction function) {
            Matcher matcher = pattern.matcher(code);
            StringBuffer output = new StringBuffer();
            boolean changed = false;
            while (matcher.find()) {
                String replacement = function.replacement(matcher);
                if (replacement == null || replacement.equals(matcher.group())) {
                    matcher.appendReplacement(output,
                        Matcher.quoteReplacement(matcher.group()));
                    continue;
                }
                matcher.appendReplacement(output, Matcher.quoteReplacement(replacement));
                replacements++;
                changed = true;
            }
            if (!changed) return;
            matcher.appendTail(output);
            code = output.toString();
        }
    }
    private static class BlockCoverage {
        final String name;
        final Address start, end;
        long totalBytes, coveredBytes;
        int rangeCount;
        BlockCoverage(MemoryBlock block) {
            name = block.getName(); start = block.getStart(); end = block.getEnd();
        }
    }
    private static class CoverageRange {
        final String block, baseKind;
        final Address start, end;
        final long length;
        final byte[] bytes;
        final List<String> pointerTargets = new ArrayList<>();
        final List<String> rawInboundPointerSources = new ArrayList<>();
        final List<String> rawPointerLinkedControlFlowSources = new ArrayList<>();
        final Set<Long> rawInboundOffsets = new TreeSet<>();
        String classification;
        int printableBytes, nonPaddingBytes, executablePointers;
        int validRelativeCalls, returnOpcodes, importThunkEntries, rawInboundPointers;
        int rawPointerLinkedControlFlowEntries;
        CoverageRange(String block, Address start, Address end, String baseKind, byte[] bytes) {
            this.block = block; this.start = start; this.end = end;
            this.baseKind = baseKind; this.bytes = bytes; length = bytes.length;
        }
    }
    private record NormalizedCode(String code, int replacements) { }
    private record PointerDeclaration(String type, String indent, int stars,
        int width) { }
    private record CopyBody(String destination, String source) { }
    private record TailAccess(String pointer, int offset) { }
    private record TailCopy(int offset, int width) { }
    private record ZeroLoopBody(String pointer, int lineCount) { }
    private record AliasAssignment(int start, int end, String operator,
        String expression) { }
    private record DArrayAccess(String base, String index,
        DArrayDescriptor descriptor) { }
    private record DArrayAliasSegment(int start, int end, String typedName,
        DArrayDescriptor descriptor) { }
    private record DArrayAliasNormalization(String code, int replacements) { }
    private record DArrayIntervalNormalization(String code, int replacements) { }
    private record DArrayElementField(long offset, int width, String name) { }
    private record TypedAlias(String name, String elementName) { }
    private record FieldRewrite(String code, int replacements) { }
    private record StatementWindow(String text, int endIndex) { }

    @FunctionalInterface
    private interface ReplacementFunction {
        String replacement(Matcher matcher);
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

    private List<String> functionCallRelations(Function caller) {
        List<String> result = new ArrayList<>();
        InstructionIterator instructions = listing.getInstructions(caller.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            if (!"CALL".equalsIgnoreCase(instruction.getMnemonicString())) continue;
            Function direct = null;
            for (Address flow : instruction.getFlows()) {
                direct = currentProgram.getFunctionManager().getFunctionAt(flow);
                if (direct != null) break;
            }
            if (direct == null) continue;
            List<String> chain = new ArrayList<>();
            Set<Address> seen = new TreeSet<>();
            Function resolved = direct;
            while (resolved != null && seen.add(resolved.getEntryPoint())) {
                chain.add(functionId(resolved));
                if (!resolved.isThunk()) break;
                Function target = resolved.getThunkedFunction(false);
                if (target == null || target.equals(resolved)) break;
                resolved = target;
            }
            result.add(jsonObject(
                field("caller", functionId(caller)), field("call_site", addr(instruction.getAddress())),
                field("direct", functionId(direct)), rawField("direct_is_thunk",
                    Boolean.toString(direct.isThunk())),
                rawField("thunk_chain", jsonStringArray(chain)),
                field("resolved_target", resolved == null ? "" : functionId(resolved)),
                field("resolved_signature", resolved == null ? "" :
                    resolved.getSignature().getPrototypeString(true))));
        }
        return result;
    }

    private void exportCoverage() throws IOException {
        Memory memory = currentProgram.getMemory();
        AddressSet claimed = new AddressSet();
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            Function function = functions.next();
            if (!function.isExternal()) claimed.add(function.getBody());
        }

        AddressSet orphanInstructions = new AddressSet();
        InstructionIterator instructions = listing.getInstructions(true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            MemoryBlock block = memory.getBlock(instruction.getAddress());
            if (block != null && block.isExecute() && !claimed.contains(instruction.getAddress()))
                orphanInstructions.addRange(instruction.getMinAddress(), instruction.getMaxAddress());
        }
        AddressSet orphanData = new AddressSet();
        DataIterator dataItems = listing.getDefinedData(true);
        while (dataItems.hasNext()) {
            Data data = dataItems.next();
            MemoryBlock block = memory.getBlock(data.getAddress());
            if (block != null && block.isExecute() && !claimed.contains(data.getAddress()))
                orphanData.addRange(data.getMinAddress(), data.getMaxAddress());
        }

        List<CoverageRange> ranges = new ArrayList<>();
        List<BlockCoverage> blocks = new ArrayList<>();
        for (MemoryBlock block : memory.getBlocks()) {
            checkCancelled();
            if (!block.isExecute() || !block.isInitialized() || block.getSize() <= 0) continue;
            if (block.getSize() > Integer.MAX_VALUE)
                throw new IOException("Executable block too large for coverage audit: " + block.getName());
            byte[] content = new byte[(int)block.getSize()];
            try {
                int read = memory.getBytes(block.getStart(), content);
                if (read != content.length)
                    throw new IOException("Short read in executable block " + block.getName());
            }
            catch (ghidra.program.model.mem.MemoryAccessException exception) {
                throw new IOException("Cannot read executable block " + block.getName(), exception);
            }

            BlockCoverage blockCoverage = new BlockCoverage(block);
            long index = 0;
            while (index < content.length) {
                checkCancelled();
                Address address = block.getStart().add(index);
                if (claimed.contains(address)) {
                    blockCoverage.coveredBytes++;
                    index++;
                    continue;
                }
                String baseKind = orphanInstructions.contains(address) ? "orphan_instruction" :
                    orphanData.contains(address) ? "defined_data" : "raw";
                long end = index + 1;
                while (end < content.length && end - index < COVERAGE_MAX_RANGE) {
                    Address next = block.getStart().add(end);
                    if (claimed.contains(next)) break;
                    String nextKind = orphanInstructions.contains(next) ? "orphan_instruction" :
                        orphanData.contains(next) ? "defined_data" : "raw";
                    if (!baseKind.equals(nextKind)) break;
                    end++;
                }
                if ("raw".equals(baseKind))
                    splitRawCoverage(block, content, (int)index, (int)end, ranges, blockCoverage);
                else addCoverageRange(block, content, (int)index, (int)end,
                    baseKind, ranges, blockCoverage);
                index = end;
            }
            blockCoverage.totalBytes = content.length;
            blocks.add(blockCoverage);
        }

        collectRawNonExecutablePointers(ranges);

        executableByteCount = blocks.stream().mapToLong(row -> row.totalBytes).sum();
        coveredExecutableByteCount = blocks.stream().mapToLong(row -> row.coveredBytes).sum();
        unclaimedExecutableByteCount = ranges.stream().mapToLong(row -> row.length).sum();
        unclaimedPaddingByteCount = ranges.stream()
            .filter(row -> row.classification.equals("padding"))
            .mapToLong(row -> row.length).sum();
        unclaimedMeaningfulByteCount = unclaimedExecutableByteCount - unclaimedPaddingByteCount;
        unclaimedRangeCount = ranges.size();

        Path root = programRoot.resolve("unclaimed");
        Files.createDirectories(root);
        Set<String> liveDirectories = new TreeSet<>();
        for (CoverageRange range : ranges) {
            boolean export = !range.classification.equals("padding") &&
                (range.length >= 4 || range.baseKind.equals("orphan_instruction") ||
                    range.baseKind.equals("defined_data"));
            if (!export) continue;
            String directoryName = addr(range.start) + "_" + addr(range.end);
            liveDirectories.add(directoryName);
            exportCoverageRange(range, root.resolve(directoryName));
        }
        exportedUnclaimedRangeCount = liveDirectories.size();
        pruneStaleCoverageDirectories(root, liveDirectories);

        atomicWrite(programRoot.resolve("unclaimed_ranges.jsonl"), writer -> {
            for (CoverageRange range : ranges) {
                writer.write(coverageRangeJson(range));
                writer.newLine();
            }
        });
        Map<String, Long> classificationBytes = new TreeMap<>();
        Map<String, Integer> classificationRanges = new TreeMap<>();
        for (CoverageRange range : ranges) {
            classificationBytes.merge(range.classification, range.length, Long::sum);
            classificationRanges.merge(range.classification, 1, Integer::sum);
        }
        List<String> classificationRows = new ArrayList<>();
        for (String classification : classificationBytes.keySet())
            classificationRows.add(jsonObject(field("classification", classification),
                rawField("ranges", Integer.toString(classificationRanges.get(classification))),
                rawField("bytes", Long.toString(classificationBytes.get(classification)))));
        List<String> blockRows = new ArrayList<>();
        for (BlockCoverage block : blocks) blockRows.add(jsonObject(
            field("name", block.name), field("start", addr(block.start)),
            field("end", addr(block.end)), rawField("size", Long.toString(block.totalBytes)),
            rawField("covered_bytes", Long.toString(block.coveredBytes)),
            rawField("unclaimed_bytes", Long.toString(block.totalBytes - block.coveredBytes)),
            rawField("unclaimed_ranges", Integer.toString(block.rangeCount))));
        writeJson(programRoot.resolve("coverage_summary.json"), jsonObject(
            rawField("executable_bytes", Long.toString(executableByteCount)),
            rawField("function_covered_bytes", Long.toString(coveredExecutableByteCount)),
            rawField("unclaimed_bytes", Long.toString(unclaimedExecutableByteCount)),
            rawField("unclaimed_padding_bytes", Long.toString(unclaimedPaddingByteCount)),
            rawField("unclaimed_meaningful_bytes", Long.toString(unclaimedMeaningfulByteCount)),
            rawField("unclaimed_ranges", Integer.toString(unclaimedRangeCount)),
            rawField("exported_meaningful_ranges", Integer.toString(exportedUnclaimedRangeCount)),
            rawField("raw_nonexec_pointer_references", Long.toString(ranges.stream()
                .mapToLong(row -> row.rawInboundPointers).sum())),
            rawField("ranges_with_raw_nonexec_pointers", Long.toString(ranges.stream()
                .filter(row -> row.rawInboundPointers > 0).count())),
            rawField("raw_pointer_linked_control_flow_entries", Long.toString(ranges.stream()
                .mapToLong(row -> row.rawPointerLinkedControlFlowEntries).sum())),
            rawField("ranges_with_raw_pointer_linked_control_flow", Long.toString(ranges.stream()
                .filter(row -> row.rawPointerLinkedControlFlowEntries > 0).count())),
            rawField("classifications", "[" + String.join(",", classificationRows) + "]"),
            rawField("blocks", "[" + String.join(",", blockRows) + "]")));
    }

    private void splitRawCoverage(MemoryBlock block, byte[] content, int start, int end,
            List<CoverageRange> ranges, BlockCoverage coverage) {
        int cursor = start;
        int index = start;
        while (index < end) {
            if (!isPaddingByte(content[index])) { index++; continue; }
            int runEnd = index + 1;
            while (runEnd < end && isPaddingByte(content[runEnd])) runEnd++;
            if (runEnd - index >= COVERAGE_PADDING_RUN) {
                if (cursor < index)
                    addCoverageRange(block, content, cursor, index, "raw", ranges, coverage);
                addCoverageRange(block, content, index, runEnd, "padding", ranges, coverage);
                cursor = runEnd;
            }
            index = runEnd;
        }
        if (cursor < end) addCoverageRange(block, content, cursor, end, "raw", ranges, coverage);
    }

    private void addCoverageRange(MemoryBlock block, byte[] content, int start, int end,
            String baseKind, List<CoverageRange> ranges, BlockCoverage coverage) {
        if (start >= end) return;
        byte[] values = new byte[end - start];
        System.arraycopy(content, start, values, 0, values.length);
        Address address = block.getStart().add(start);
        CoverageRange range = new CoverageRange(block.getName(), address,
            block.getStart().add(end - 1), baseKind, values);
        classifyCoverageRange(range);
        ranges.add(range);
        coverage.rangeCount++;
    }

    private void classifyCoverageRange(CoverageRange range) {
        int printable = 0, nonPadding = 0;
        for (byte value : range.bytes) {
            int unsigned = value & 0xff;
            if (unsigned >= 0x20 && unsigned <= 0x7e) printable++;
            if (!isPaddingByte(value)) nonPadding++;
        }
        range.printableBytes = printable;
        range.nonPaddingBytes = nonPadding;
        int firstAligned = (int)((4 - (range.start.getOffset() & 3)) & 3);
        for (int index = firstAligned; index + 4 <= range.bytes.length; index += 4) {
            long value = (range.bytes[index] & 0xffL) |
                ((range.bytes[index + 1] & 0xffL) << 8) |
                ((range.bytes[index + 2] & 0xffL) << 16) |
                ((range.bytes[index + 3] & 0xffL) << 24);
            Address target;
            try { target = toAddr(value); }
            catch (Exception exception) { continue; }
            MemoryBlock targetBlock = currentProgram.getMemory().getBlock(target);
            if (targetBlock == null || !targetBlock.isExecute()) continue;
            range.executablePointers++;
            if (range.pointerTargets.size() < 64)
                range.pointerTargets.add(addr(range.start.add(index)) + " -> " + addr(target));
        }
        for (int index = 0; index < range.bytes.length; index++) {
            int opcode = range.bytes[index] & 0xff;
            if (opcode == 0xc3 || opcode == 0xcb ||
                    (opcode == 0xc2 || opcode == 0xca) && index + 2 < range.bytes.length)
                range.returnOpcodes++;
            if (opcode == 0xe8 && index + 4 < range.bytes.length) {
                int displacement = littleEndianInt(range.bytes, index + 1);
                Address target;
                try { target = range.start.add(index + 5L + displacement); }
                catch (Exception exception) { continue; }
                MemoryBlock targetBlock = currentProgram.getMemory().getBlock(target);
                if (targetBlock != null && targetBlock.isExecute()) range.validRelativeCalls++;
            }
            if (opcode == 0xff && index + 5 < range.bytes.length &&
                    (range.bytes[index + 1] & 0xff) == 0x25) {
                long pointerAddress = Integer.toUnsignedLong(littleEndianInt(range.bytes, index + 2));
                try {
                    if (currentProgram.getMemory().getBlock(toAddr(pointerAddress)) != null)
                        range.importThunkEntries++;
                }
                catch (Exception ignored) { }
            }
        }
        boolean commonPrologue = range.bytes.length >= 2 && (
            range.bytes[0] == 0x55 && (range.bytes[1] & 0xff) == 0x8b ||
            Set.of(0x53, 0x56, 0x57).contains(range.bytes[0] & 0xff) &&
                Set.of(0x53, 0x56, 0x57, 0x8b, 0x68).contains(range.bytes[1] & 0xff));
        boolean denseNonPadding = range.nonPaddingBytes * 4L >= range.length * 3L;
        boolean probableCode = range.length >= 8 && range.returnOpcodes > 0 &&
            (commonPrologue || denseNonPadding &&
                (range.validRelativeCalls > 0 || range.returnOpcodes >= 3));
        boolean importThunkTable = range.importThunkEntries >= 3 &&
            range.importThunkEntries * 24L >= range.length * 3L;
        if (range.baseKind.equals("orphan_instruction")) range.classification = "orphan_code";
        else if (range.baseKind.equals("defined_data")) range.classification = "defined_data";
        else if (range.baseKind.equals("padding")) range.classification = "padding";
        else if (range.executablePointers >= 3 &&
                range.executablePointers * 8L >= range.length)
            range.classification = "address_table";
        else if (importThunkTable) range.classification = "import_thunk_table";
        else if (probableCode) range.classification = "probable_code";
        else if (range.length >= 4 && printable * 4L >= range.length * 3L)
            range.classification = "text_or_string";
        else range.classification = "unknown_nonpadding";
    }

    private void collectRawNonExecutablePointers(List<CoverageRange> ranges) throws IOException {
        TreeMap<Long, CoverageRange> byStart = new TreeMap<>();
        for (CoverageRange range : ranges) byStart.put(range.start.getOffset(), range);
        Memory memory = currentProgram.getMemory();
        for (MemoryBlock block : memory.getBlocks()) {
            checkCancelled();
            if (block.isExecute() || !block.isInitialized() || block.getSize() < 4) continue;
            if (block.getSize() > Integer.MAX_VALUE)
                throw new IOException("Non-executable block too large for pointer audit: " +
                    block.getName());
            byte[] content = new byte[(int)block.getSize()];
            try {
                int read = memory.getBytes(block.getStart(), content);
                if (read != content.length)
                    throw new IOException("Short read in non-executable block " + block.getName());
            }
            catch (ghidra.program.model.mem.MemoryAccessException exception) {
                throw new IOException("Cannot read non-executable block " + block.getName(), exception);
            }
            int firstAligned = (int)((4 - (block.getStart().getOffset() & 3)) & 3);
            for (int index = firstAligned; index + 4 <= content.length; index += 4) {
                long value = Integer.toUnsignedLong(littleEndianInt(content, index));
                Map.Entry<Long, CoverageRange> entry = byStart.floorEntry(value);
                if (entry == null) continue;
                CoverageRange target = entry.getValue();
                if (value > target.end.getOffset()) continue;
                target.rawInboundPointers++;
                target.rawInboundOffsets.add(value - target.start.getOffset());
                if (target.rawInboundPointerSources.size() < 256) {
                    Address source = block.getStart().add(index);
                    target.rawInboundPointerSources.add(addr(source) + " -> " +
                        String.format("%08X", value) + " " + block.getName());
                }
            }
        }
        linkRawPointerControlFlow(ranges, byStart);
        for (CoverageRange range : ranges) {
            if (!"probable_code".equals(range.classification) ||
                    range.rawInboundPointers == 0 &&
                        range.rawPointerLinkedControlFlowEntries == 0)
                continue;
            if (looksLikeMsvcExceptionFilterCluster(range))
                range.classification = "seh_funclet_cluster";
            else if (range.rawPointerLinkedControlFlowEntries > 0)
                range.classification = "table_callback_target";
            else range.classification = "data_referenced_code";
        }
    }

    private void linkRawPointerControlFlow(List<CoverageRange> ranges,
            TreeMap<Long, CoverageRange> byStart) {
        for (CoverageRange source : ranges) {
            for (long relativeOffset : source.rawInboundOffsets) {
                if (relativeOffset < 0 || relativeOffset + 5 > source.bytes.length) continue;
                int index = (int)relativeOffset;
                if ((source.bytes[index] & 0xff) != 0xe9) continue;
                int displacement = littleEndianInt(source.bytes, index + 1);
                long sourceAddress = source.start.getOffset() + relativeOffset;
                long targetAddress = sourceAddress + 5L + displacement;
                Map.Entry<Long, CoverageRange> entry = byStart.floorEntry(targetAddress);
                if (entry == null) continue;
                CoverageRange target = entry.getValue();
                if (targetAddress < target.start.getOffset() ||
                        targetAddress > target.end.getOffset()) continue;
                target.rawPointerLinkedControlFlowEntries++;
                if (target.rawPointerLinkedControlFlowSources.size() < 256)
                    target.rawPointerLinkedControlFlowSources.add(String.format(
                        "%08X JMP -> %08X; entry address is stored in non-executable data",
                        sourceAddress, targetAddress));
            }
        }
    }

    private boolean looksLikeMsvcExceptionFilterCluster(CoverageRange range) {
        return range.bytes.length >= 6 && range.rawInboundPointers >= 2 &&
            range.rawInboundOffsets.contains(0L) && range.rawInboundOffsets.contains(6L) &&
            (range.bytes[0] & 0xff) == 0xb8 && (range.bytes[1] & 0xff) == 1 &&
            range.bytes[2] == 0 && range.bytes[3] == 0 && range.bytes[4] == 0 &&
            (range.bytes[5] & 0xff) == 0xc3;
    }

    private static int littleEndianInt(byte[] bytes, int index) {
        return (bytes[index] & 0xff) | ((bytes[index + 1] & 0xff) << 8) |
            ((bytes[index + 2] & 0xff) << 16) | (bytes[index + 3] << 24);
    }

    private void exportCoverageRange(CoverageRange range, Path directory) throws IOException {
        Files.createDirectories(directory);
        Set<String> inbound = new TreeSet<>();
        for (Address address = range.start; address.compareTo(range.end) <= 0;
                address = address.next()) {
            ReferenceIterator iterator = references.getReferencesTo(address);
            while (iterator.hasNext() && inbound.size() < 256) {
                Reference reference = iterator.next();
                inbound.add(addr(reference.getFromAddress()) + " -> " + addr(address) +
                    " " + reference.getReferenceType());
            }
            if (address.equals(range.end)) break;
        }
        writeJson(directory.resolve("meta.json"), jsonObject(
            field("start", addr(range.start)), field("end", addr(range.end)),
            rawField("length", Long.toString(range.length)), field("block", range.block),
            field("classification", range.classification), field("base_kind", range.baseKind),
            rawField("printable_bytes", Integer.toString(range.printableBytes)),
            rawField("non_padding_bytes", Integer.toString(range.nonPaddingBytes)),
            rawField("executable_pointer_count", Integer.toString(range.executablePointers)),
            rawField("valid_relative_call_count", Integer.toString(range.validRelativeCalls)),
            rawField("return_opcode_count", Integer.toString(range.returnOpcodes)),
            rawField("import_thunk_entry_count", Integer.toString(range.importThunkEntries)),
            rawField("pointer_targets", jsonStringArray(range.pointerTargets)),
            rawField("raw_inbound_pointer_count", Integer.toString(range.rawInboundPointers)),
            rawField("raw_inbound_pointer_sources",
                jsonStringArray(range.rawInboundPointerSources)),
            rawField("raw_pointer_linked_control_flow_entries",
                Integer.toString(range.rawPointerLinkedControlFlowEntries)),
            rawField("raw_pointer_linked_control_flow_sources",
                jsonStringArray(range.rawPointerLinkedControlFlowSources)),
            rawField("inbound_references", jsonStringArray(inbound))));
        atomicWrite(directory.resolve("bytes.txt"), writer -> {
            for (int offset = 0; offset < range.bytes.length; offset += 16) {
                int count = Math.min(16, range.bytes.length - offset);
                StringBuilder hex = new StringBuilder(), ascii = new StringBuilder();
                for (int index = 0; index < 16; index++) {
                    if (index < count) {
                        int value = range.bytes[offset + index] & 0xff;
                        hex.append(String.format("%02X ", value));
                        ascii.append(value >= 0x20 && value <= 0x7e ? (char)value : '.');
                    }
                    else hex.append("   ");
                }
                writer.write(String.format("%s  %s |%s|", addr(range.start.add(offset)),
                    hex, ascii));
                writer.newLine();
            }
        });
        writeCoverageListing(range, directory.resolve("listing.asm"));
    }

    private void writeCoverageListing(CoverageRange range, Path path) throws IOException {
        AddressSetView addresses = new AddressSet(range.start, range.end);
        atomicWrite(path, writer -> {
            boolean wrote = false;
            InstructionIterator instructions = listing.getInstructions(addresses, true);
            while (instructions.hasNext()) {
                Instruction instruction = instructions.next();
                writer.write(String.format("%s  %-24s  %s", addr(instruction.getAddress()),
                    instructionBytes(instruction), instruction));
                writer.newLine();
                wrote = true;
            }
            DataIterator data = listing.getDefinedData(addresses, true);
            while (data.hasNext()) {
                Data item = data.next();
                writer.write(addr(item.getAddress()) + "  " + item.getDataType().getDisplayName() +
                    "  " + oneLine(item.getDefaultValueRepresentation()));
                writer.newLine();
                wrote = true;
            }
            if (!wrote) writer.write("; no instructions or defined data in Ghidra; see bytes.txt\n");
        });
    }

    private void pruneStaleCoverageDirectories(Path root, Set<String> live) throws IOException {
        if (!Files.isDirectory(root)) return;
        try (Stream<Path> entries = Files.list(root)) {
            for (Path entry : entries.toList()) {
                if (!Files.isDirectory(entry) || live.contains(entry.getFileName().toString())) continue;
                try (Stream<Path> tree = Files.walk(entry)) {
                    for (Path path : tree.sorted(Comparator.reverseOrder()).toList())
                        Files.deleteIfExists(path);
                }
            }
        }
    }

    private String coverageRangeJson(CoverageRange range) {
        return jsonObject(field("start", addr(range.start)), field("end", addr(range.end)),
            rawField("length", Long.toString(range.length)), field("block", range.block),
            field("classification", range.classification), field("base_kind", range.baseKind),
            rawField("printable_bytes", Integer.toString(range.printableBytes)),
            rawField("non_padding_bytes", Integer.toString(range.nonPaddingBytes)),
            rawField("executable_pointer_count", Integer.toString(range.executablePointers)),
            rawField("valid_relative_call_count", Integer.toString(range.validRelativeCalls)),
            rawField("return_opcode_count", Integer.toString(range.returnOpcodes)),
            rawField("import_thunk_entry_count", Integer.toString(range.importThunkEntries)),
            rawField("raw_inbound_pointer_count", Integer.toString(range.rawInboundPointers)),
            rawField("raw_inbound_pointer_sources",
                jsonStringArray(range.rawInboundPointerSources)),
            rawField("raw_pointer_linked_control_flow_entries",
                Integer.toString(range.rawPointerLinkedControlFlowEntries)),
            rawField("raw_pointer_linked_control_flow_sources",
                jsonStringArray(range.rawPointerLinkedControlFlowSources)),
            rawField("exported", Boolean.toString(!range.classification.equals("padding") &&
                (range.length >= 4 || range.baseKind.equals("orphan_instruction") ||
                    range.baseKind.equals("defined_data")))));
    }

    private static boolean isPaddingByte(byte value) {
        int unsigned = value & 0xff;
        return unsigned == 0 || unsigned == 0x90 || unsigned == 0xcc;
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
            rawField("decomp_quality_strict_zero_occurrence_count",
                Long.toString(qualityOccurrencesForPolicy("strict_zero"))),
            rawField("decomp_quality_nonincreasing_occurrence_count",
                Long.toString(qualityOccurrencesForPolicy("nonincreasing"))),
            rawField("decomp_quality_stage_transition_occurrence_count",
                Long.toString(qualityOccurrencesForPolicy("stage_transition"))),
            rawField("executable_byte_count", Long.toString(executableByteCount)),
            rawField("function_covered_executable_byte_count",
                Long.toString(coveredExecutableByteCount)),
            rawField("unclaimed_executable_byte_count",
                Long.toString(unclaimedExecutableByteCount)),
            rawField("unclaimed_padding_byte_count",
                Long.toString(unclaimedPaddingByteCount)),
            rawField("unclaimed_meaningful_byte_count",
                Long.toString(unclaimedMeaningfulByteCount)),
            rawField("unclaimed_range_count", Integer.toString(unclaimedRangeCount)),
            rawField("exported_unclaimed_range_count",
                Integer.toString(exportedUnclaimedRangeCount)),
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

    private String fileSha256(Path path) throws Exception {
        MessageDigest digest = MessageDigest.getInstance("SHA-256");
        try (java.io.InputStream input = Files.newInputStream(path)) {
            byte[] buffer = new byte[65536];
            int count;
            while ((count = input.read(buffer)) >= 0)
                if (count > 0) digest.update(buffer, 0, count);
        }
        StringBuilder result = new StringBuilder();
        for (byte value : digest.digest())
            result.append(String.format("%02x", value & 0xff));
        return result.toString();
    }

    private record CachedFunctionAnalysis(String fingerprint, int normalizationCount,
        List<String> pseudocodeRows, List<String> qualityRows,
        Map<String, Integer> qualityOccurrences) { }

    private static class StackSlotLifetime {
        final String parameterName;
        boolean readBeforeWrite;
        boolean written;
        boolean readAfterWrite;
        StackSlotLifetime(String parameterName) {
            this.parameterName = parameterName;
        }
    }

    @FunctionalInterface
    private interface WriterAction {
        void write(BufferedWriter writer) throws IOException;
    }
}
