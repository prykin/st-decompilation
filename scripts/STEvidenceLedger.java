// Record or verify the semantic Program state and proposal/apply artifacts behind an export.
// Usage: STEvidenceLedger.java record|verify <recovery-root>
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Verify Recovery Evidence

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.security.MessageDigest;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.TreeSet;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressIterator;
import ghidra.program.model.data.Array;
import ghidra.program.model.data.Composite;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeComponent;
import ghidra.program.model.data.Enum;
import ghidra.program.model.data.FunctionDefinition;
import ghidra.program.model.data.ParameterDefinition;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.TypeDef;
import ghidra.program.model.listing.Bookmark;
import ghidra.program.model.listing.CommentType;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.DataIterator;
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
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.Symbol;
import ghidra.program.model.symbol.SymbolIterator;

public class STEvidenceLedger extends GhidraScript {
    private static final String SEMANTIC_FINGERPRINT_SCHEMA = "1";

    @Override
    protected void run() throws Exception {
        end(true);
        if (currentProgram == null) { printerr("Open the analyzed ST program first."); return; }
        String[] args = getScriptArgs();
        if (args.length < 2)
            throw new IllegalArgumentException("Usage: record|verify <recovery-root>");
        String mode = args[0].toLowerCase();
        Path root = Path.of(args[1]).toAbsolutePath().normalize();
        Path directory = root.getFileName() != null &&
            root.getFileName().toString().equals(currentProgram.getName()) ?
            root : root.resolve(currentProgram.getName());
        Files.createDirectories(directory);
        if ("record".equals(mode)) record(directory);
        else if ("verify".equals(mode)) verify(directory);
        else throw new IllegalArgumentException("Mode must be record or verify");
    }

    private void record(Path directory) throws Exception {
        List<Artifact> artifacts = artifacts(directory);
        long modification = currentProgram.getModificationNumber();
        println("Computing semantic Program fingerprint...");
        String semanticFingerprint = semanticFingerprint();
        writeLedger(directory, artifacts, modification, semanticFingerprint);
        println("Evidence ledger recorded: program modification=" + modification +
            ", semantic_sha256=" + semanticFingerprint + ", artifacts=" + artifacts.size());
    }

    private void writeLedger(Path directory, List<Artifact> artifacts, long modification,
            String semanticFingerprint) throws Exception {
        Path state = directory.resolve("automation_state.tsv");
        try (BufferedWriter out = Files.newBufferedWriter(state, StandardCharsets.UTF_8)) {
            out.write("kind\tname\tvalue\tsize\n");
            out.write("program\tname\t" + clean(currentProgram.getName()) + "\t0\n");
            out.write("program\texecutable_sha256\t" +
                clean(currentProgram.getExecutableSHA256()) + "\t0\n");
            out.write("program\tmodification_number\t" + modification + "\t0\n");
            out.write("program\tsemantic_fingerprint_schema\t" +
                SEMANTIC_FINGERPRINT_SCHEMA + "\t0\n");
            out.write("program\tsemantic_sha256\t" + semanticFingerprint + "\t0\n");
            for (Artifact item : artifacts)
                out.write("artifact\t" + clean(item.name) + "\t" + item.hash + "\t" +
                    item.size + "\n");
        }
        List<String> json = new ArrayList<>();
        json.add("{\"kind\":\"program\",\"name\":" + q(currentProgram.getName()) +
            ",\"executable_sha256\":" + q(currentProgram.getExecutableSHA256()) +
            ",\"modification_number\":" + modification +
            ",\"semantic_fingerprint_schema\":" + q(SEMANTIC_FINGERPRINT_SCHEMA) +
            ",\"semantic_sha256\":" + q(semanticFingerprint) + "}");
        for (Artifact item : artifacts)
            json.add("{\"kind\":\"artifact\",\"name\":" + q(item.name) +
                ",\"sha256\":" + q(item.hash) + ",\"size\":" + item.size + "}");
        Files.write(directory.resolve("automation_evidence.jsonl"), json,
            StandardCharsets.UTF_8);
    }

    private void verify(Path directory) throws Exception {
        Path state = directory.resolve("automation_state.tsv");
        if (!Files.isRegularFile(state))
            throw new IllegalStateException("Missing automation_state.tsv; run full recovery first");
        List<String> lines = Files.readAllLines(state, StandardCharsets.UTF_8);
        if (lines.isEmpty() || !lines.get(0).equals("kind\tname\tvalue\tsize"))
            throw new IllegalStateException("Invalid automation_state.tsv");
        Map<String, String> program = new LinkedHashMap<>();
        Map<String, Artifact> expected = new LinkedHashMap<>();
        for (int line = 1; line < lines.size(); line++) {
            String[] values = lines.get(line).split("\\t", -1);
            if (values.length != 4) throw new IllegalStateException(
                "Invalid evidence row " + (line + 1));
            if ("program".equals(values[0])) program.put(values[1], values[2]);
            else if ("artifact".equals(values[0]))
                expected.put(values[1], new Artifact(values[1], values[2],
                    Long.parseLong(values[3])));
        }
        if (!currentProgram.getName().equals(program.get("name")) ||
                !clean(currentProgram.getExecutableSHA256()).equals(
                    program.get("executable_sha256")))
            throw new IllegalStateException("Evidence ledger belongs to another program");
        long recorded = Long.parseLong(program.getOrDefault("modification_number", "-1"));
        long currentModification = currentProgram.getModificationNumber();
        String expectedSemantic = program.getOrDefault("semantic_sha256", "");
        String expectedSchema = program.getOrDefault("semantic_fingerprint_schema", "");
        if (!expectedSemantic.isBlank() &&
                !SEMANTIC_FINGERPRINT_SCHEMA.equals(expectedSchema))
            throw new IllegalStateException("Unsupported semantic fingerprint schema " +
                expectedSchema + "; rerun full recovery");
        println("Computing semantic Program fingerprint...");
        String currentSemantic = semanticFingerprint();
        boolean legacy = expectedSemantic.isBlank();
        if (!legacy && !expectedSemantic.equals(currentSemantic))
            throw new IllegalStateException(
                "Program semantics changed after evidence convergence: recorded=" +
                expectedSemantic + ", current=" + currentSemantic +
                ", modification=" + recorded + "->" + currentModification);
        if (legacy && (recorded < 0 || recorded != currentModification &&
                recorded + 1 != currentModification))
            throw new IllegalStateException(
                "Legacy evidence has no semantic fingerprint and the Program modification " +
                "drift is not the one-step migration case: recorded=" + recorded +
                ", current=" + currentModification + "; rerun full recovery");
        Map<String, Artifact> current = new LinkedHashMap<>();
        for (Artifact item : artifacts(directory)) current.put(item.name, item);
        if (!current.keySet().equals(expected.keySet()))
            throw new IllegalStateException("Recovery artifact set changed after convergence");
        for (String name : expected.keySet()) {
            Artifact left = expected.get(name), right = current.get(name);
            if (!left.hash.equals(right.hash) || left.size != right.size)
                throw new IllegalStateException("Recovery artifact changed: " + name);
        }
        if (legacy) {
            writeLedger(directory, new ArrayList<>(current.values()), currentModification,
                currentSemantic);
            println("Legacy evidence ledger upgraded after one-step modification drift " +
                recorded + "->" + currentModification + "; semantic_sha256=" +
                currentSemantic);
        }
        else if (recorded != currentModification) {
            println("Program modification counter changed " + recorded + "->" +
                currentModification + ", but the semantic fingerprint is unchanged.");
        }
        println("Evidence ledger verified: program modification=" + currentModification +
            ", semantic_sha256=" + currentSemantic + ", artifacts=" + current.size());
    }

    /**
     * DomainObject.getModificationNumber() is a volatile change/undo/redo counter, not a
     * persistent content identity. Hash the state consumed by STDecompExport instead:
     * memory, disassembly/references/comments, functions, symbols, types, imports/exports,
     * defined data and bookmarks. Collections without a stable address order are sorted.
     */
    private String semanticFingerprint() throws Exception {
        MessageDigest digest = MessageDigest.getInstance("SHA-256");
        value(digest, "schema", SEMANTIC_FINGERPRINT_SCHEMA);
        value(digest, "program", currentProgram.getName(),
            clean(currentProgram.getExecutableSHA256()),
            currentProgram.getLanguageID().toString(),
            currentProgram.getCompilerSpec().getCompilerSpecID().toString(),
            currentProgram.getImageBase().toString(),
            Integer.toString(currentProgram.getDefaultPointerSize()));

        Memory memory = currentProgram.getMemory();
        for (MemoryBlock block : memory.getBlocks()) {
            monitor.checkCancelled();
            value(digest, "memory-block", block.getName(), block.getStart().toString(),
                block.getEnd().toString(), Long.toString(block.getSize()),
                Boolean.toString(block.isRead()), Boolean.toString(block.isWrite()),
                Boolean.toString(block.isExecute()), Boolean.toString(block.isInitialized()),
                Boolean.toString(block.isVolatile()), clean(block.getSourceName()));
            if (!block.isInitialized() || block.getSize() <= 0) continue;
            if (block.getSize() > Integer.MAX_VALUE)
                throw new IllegalStateException(
                    "Memory block too large for semantic fingerprint: " + block.getName());
            byte[] content = new byte[(int)block.getSize()];
            int read = memory.getBytes(block.getStart(), content);
            if (read != content.length)
                throw new IllegalStateException(
                    "Short read while fingerprinting memory block " + block.getName());
            digest.update(content);
        }

        List<String> typeRows = new ArrayList<>();
        Iterator<DataType> types = currentProgram.getDataTypeManager().getAllDataTypes();
        while (types.hasNext()) {
            monitor.checkCancelled();
            typeRows.add(dataTypeState(types.next()));
        }
        typeRows.sort(Comparator.naturalOrder());
        for (String row : typeRows) value(digest, "type", row);

        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            monitor.checkCancelled();
            Function function = functions.next();
            List<String> tags = new ArrayList<>();
            function.getTags().forEach(tag -> tags.add(tag.getName()));
            tags.sort(Comparator.naturalOrder());
            Function thunkTarget = function.isThunk() ?
                function.getThunkedFunction(true) : null;
            value(digest, "function", function.getEntryPoint().toString(),
                function.getBody().toString(), function.getName(true),
                function.getSymbol().getSource().toString(),
                function.getSignature().getPrototypeString(true),
                clean(function.getCallingConventionName()),
                Boolean.toString(function.isThunk()),
                thunkTarget == null ? "" : thunkTarget.getEntryPoint().toString(),
                Boolean.toString(function.isExternal()),
                Boolean.toString(function.isInline()),
                Boolean.toString(function.hasNoReturn()),
                Boolean.toString(function.hasVarArgs()),
                clean(function.getComment()), clean(function.getRepeatableComment()),
                Integer.toString(function.getStackFrame().getFrameSize()),
                String.join("\n", tags),
                variables(function.getParameters()), variables(function.getLocalVariables()));
        }

        Listing listing = currentProgram.getListing();
        InstructionIterator instructions = listing.getInstructions(true);
        while (instructions.hasNext()) {
            monitor.checkCancelled();
            Instruction instruction = instructions.next();
            List<String> referenceRows = new ArrayList<>();
            for (Reference reference : instruction.getReferencesFrom()) {
                referenceRows.add(reference.getFromAddress() + "\t" +
                    reference.getToAddress() + "\t" + reference.getReferenceType() + "\t" +
                    reference.getOperandIndex() + "\t" + reference.getSource() + "\t" +
                    reference.isPrimary());
            }
            referenceRows.sort(Comparator.naturalOrder());
            value(digest, "instruction", instruction.getAddress().toString(),
                instruction.toString(), String.join("\n", referenceRows),
                comments(listing, instruction.getAddress()));
        }

        DataIterator dataItems = listing.getDefinedData(true);
        while (dataItems.hasNext()) {
            monitor.checkCancelled();
            Data data = dataItems.next();
            value(digest, "data", data.getMinAddress().toString(),
                data.getMaxAddress().toString(), data.getDataType().getPathName(),
                Integer.toString(data.getLength()),
                clean(data.getDefaultValueRepresentation()),
                comments(listing, data.getMinAddress()));
        }

        List<String> symbolRows = new ArrayList<>();
        SymbolIterator symbols = currentProgram.getSymbolTable().getAllSymbols(true);
        while (symbols.hasNext()) {
            monitor.checkCancelled();
            Symbol symbol = symbols.next();
            symbolRows.add(symbol.getAddress() + "\t" + symbol.getName(true) + "\t" +
                symbol.getSymbolType() + "\t" + symbol.getSource() + "\t" +
                symbol.isPrimary() + "\t" + symbol.isExternal() + "\t" +
                symbol.isPinned());
        }
        symbolRows.sort(Comparator.naturalOrder());
        for (String row : symbolRows) value(digest, "symbol", row);

        ExternalManager externalManager = currentProgram.getExternalManager();
        List<String> externalRows = new ArrayList<>();
        for (String library : externalManager.getExternalLibraryNames()) {
            Iterator<ExternalLocation> locations =
                externalManager.getExternalLocations(library);
            while (locations.hasNext()) {
                monitor.checkCancelled();
                ExternalLocation location = locations.next();
                Symbol symbol = location.getSymbol();
                externalRows.add(library + "\t" + clean(location.getLabel()) + "\t" +
                    location.getAddress() + "\t" +
                    clean(location.getOriginalImportedName()) + "\t" +
                    location.isFunction() + "\t" +
                    (symbol == null ? "" : symbol.getSource().toString()));
            }
        }
        externalRows.sort(Comparator.naturalOrder());
        for (String row : externalRows) value(digest, "external", row);

        AddressIterator entries =
            currentProgram.getSymbolTable().getExternalEntryPointIterator();
        while (entries.hasNext()) {
            Address address = entries.next();
            Symbol symbol = currentProgram.getSymbolTable().getPrimarySymbol(address);
            value(digest, "entry", address.toString(),
                symbol == null ? "" : symbol.getName(true),
                symbol == null ? "" : symbol.getSource().toString());
        }

        List<String> bookmarkRows = new ArrayList<>();
        Iterator<Bookmark> bookmarks =
            currentProgram.getBookmarkManager().getBookmarksIterator();
        while (bookmarks.hasNext()) {
            Bookmark bookmark = bookmarks.next();
            bookmarkRows.add(bookmark.getAddress() + "\t" + bookmark.getTypeString() +
                "\t" + clean(bookmark.getCategory()) + "\t" +
                clean(bookmark.getComment()));
        }
        bookmarkRows.sort(Comparator.naturalOrder());
        for (String row : bookmarkRows) value(digest, "bookmark", row);
        return hex(digest.digest());
    }

    private String dataTypeState(DataType type) {
        StringBuilder out = new StringBuilder();
        token(out, type.getPathName());
        token(out, type.getName());
        token(out, type.getDisplayName());
        token(out, type.getClass().getSimpleName());
        token(out, Integer.toString(type.getLength()));
        token(out, clean(type.getDescription()));
        if (type instanceof FunctionDefinition definition) {
            token(out, "function");
            token(out, clean(definition.getCallingConventionName()));
            token(out, definition.getReturnType().getPathName());
            token(out, Boolean.toString(definition.hasVarArgs()));
            token(out, Boolean.toString(definition.hasNoReturn()));
            for (ParameterDefinition argument : definition.getArguments()) {
                token(out, clean(argument.getName()));
                token(out, argument.getDataType().getPathName());
                token(out, clean(argument.getComment()));
            }
        }
        else if (type instanceof Composite composite) {
            token(out, "composite");
            for (DataTypeComponent component : composite.getComponents()) {
                token(out, Integer.toString(component.getOrdinal()));
                token(out, Integer.toString(component.getOffset()));
                token(out, Integer.toString(component.getLength()));
                token(out, clean(component.getFieldName()));
                token(out, component.getDataType().getPathName());
                token(out, clean(component.getComment()));
            }
        }
        else if (type instanceof Enum enumType) {
            token(out, "enum");
            for (String name : new TreeSet<>(List.of(enumType.getNames()))) {
                token(out, name);
                token(out, Long.toString(enumType.getValue(name)));
            }
        }
        else if (type instanceof TypeDef typedef) {
            token(out, "typedef");
            token(out, typedef.getBaseDataType().getPathName());
        }
        else if (type instanceof Array array) {
            token(out, "array");
            token(out, array.getDataType().getPathName());
            token(out, Integer.toString(array.getNumElements()));
            token(out, Integer.toString(array.getElementLength()));
        }
        else if (type instanceof Pointer pointer) {
            token(out, "pointer");
            DataType pointedTo = pointer.getDataType();
            token(out, pointedTo == null ? "" : pointedTo.getPathName());
        }
        return out.toString();
    }

    private String variables(Variable[] variables) {
        StringBuilder out = new StringBuilder();
        for (Variable variable : variables) {
            token(out, variable.getName());
            token(out, variable.getDataType().getPathName());
            token(out, Integer.toString(variable.getLength()));
            try {
                token(out, variable.getVariableStorage().toString());
            }
            catch (Exception exception) {
                token(out, "");
            }
            token(out, clean(variable.getComment()));
            token(out, variable.getSource().toString());
        }
        return out.toString();
    }

    private String comments(Listing listing, Address address) {
        StringBuilder out = new StringBuilder();
        token(out, clean(listing.getComment(CommentType.PLATE, address)));
        token(out, clean(listing.getComment(CommentType.PRE, address)));
        token(out, clean(listing.getComment(CommentType.EOL, address)));
        token(out, clean(listing.getComment(CommentType.POST, address)));
        token(out, clean(listing.getComment(CommentType.REPEATABLE, address)));
        return out.toString();
    }

    private void value(MessageDigest digest, String... values) {
        for (String item : values) {
            byte[] bytes = (item == null ? "" : item).getBytes(StandardCharsets.UTF_8);
            digest.update((byte)(bytes.length >>> 24));
            digest.update((byte)(bytes.length >>> 16));
            digest.update((byte)(bytes.length >>> 8));
            digest.update((byte)bytes.length);
            digest.update(bytes);
        }
    }

    private void token(StringBuilder out, String value) {
        String item = value == null ? "" : value;
        out.append(item.length()).append(':').append(item);
    }

    private String hex(byte[] bytes) {
        StringBuilder out = new StringBuilder();
        for (byte value : bytes) out.append(String.format("%02x", value & 0xff));
        return out.toString();
    }

    private List<Artifact> artifacts(Path directory) throws Exception {
        List<Artifact> result = new ArrayList<>();
        try (java.util.stream.Stream<Path> files = Files.list(directory)) {
            for (Path path : files.filter(Files::isRegularFile).toList()) {
                String name = path.getFileName().toString();
                if (!(name.endsWith("_proposals.tsv") ||
                        name.endsWith("_apply_report.tsv") ||
                        name.equals("switch_enum_domains.tsv"))) continue;
                result.add(new Artifact(name, sha256(path), Files.size(path)));
            }
        }
        result.sort(Comparator.comparing(item -> item.name));
        return result;
    }
    private String sha256(Path path) throws Exception {
        MessageDigest digest = MessageDigest.getInstance("SHA-256");
        try (java.io.InputStream input = Files.newInputStream(path)) {
            byte[] buffer = new byte[65536];
            int count;
            while ((count = input.read(buffer)) >= 0)
                if (count > 0) digest.update(buffer, 0, count);
        }
        StringBuilder result = new StringBuilder();
        for (byte value : digest.digest()) result.append(String.format("%02x", value & 0xff));
        return result.toString();
    }
    private static String clean(String value) {
        return value == null ? "" : value.replace('\t', ' ')
            .replace('\r', ' ').replace('\n', ' ');
    }
    private static String q(String value) {
        return "\"" + clean(value).replace("\\", "\\\\").replace("\"", "\\\"") + "\"";
    }
    private record Artifact(String name, String hash, long size) { }
}
