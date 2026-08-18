// Recover recursive linked-node structures rooted in one generated owner field.
// Read-only: emits recursive_pointee_proposals.tsv and diagnostics.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Analyze Recursive Pointees

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.security.MessageDigest;
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

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeComponent;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.TypeDef;
import ghidra.program.model.data.Undefined;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.pcode.PcodeOp;
import ghidra.program.model.lang.OperandType;
import ghidra.program.model.scalar.Scalar;

public class STRecursivePointeeAnalyzer extends GhidraScript {
    private static final int DECOMPILE_TIMEOUT = 600;
    private static final int MAX_NODE_SIZE = 0x4000;
    private static final String ROOT =
        "/SubmarineTitans/Recovered/RecursivePointees/";
    private static final String MARKER = "[STRecursivePointeeApplier]";
    private static final String HASH_MARKER = "; generated_layout_sha256=";
    private static final Set<String> OWNER_MARKERS = Set.of(
        "[STClassLayoutApplier]", "[STGlobalDataApplier]",
        "[STPointerShapeApplier]", "[STTypeFamilyApplier]");
    private static final Set<String> VIEW_MARKERS = Set.of(
        "[STPointerShapeApplier]", "[STTypeFamilyApplier]", MARKER);

    private static final String IDENT = "[A-Za-z_$][A-Za-z0-9_$]*";
    private static final String TYPE = "[A-Za-z_$][A-Za-z0-9_$:]*";
    private static final Pattern CAST_ROOT = Pattern.compile(
        "(?<![A-Za-z0-9_$])(" + IDENT + ")\\s*=\\s*\\*\\s*\\(\\s*(" +
        TYPE + ")\\s*\\*\\s*\\*\\s*\\)\\s*&?\\s*(" + IDENT +
        ")\\s*->\\s*(" + IDENT + ")");
    private static final Pattern DIRECT_ROOT = Pattern.compile(
        "(?<![A-Za-z0-9_$])(" + IDENT + ")\\s*=\\s*(?:\\(\\s*(" + TYPE +
        ")\\s*\\*\\s*\\)\\s*)?(" + IDENT + ")\\s*->\\s*(" + IDENT + ")");
    private static final Pattern LOCAL_DECLARATION = Pattern.compile(
        "(?m)^\\s*(" + TYPE + ")\\s+(?:\\*+\\s*)?(" + IDENT + ")\\s*;");
    private static final String DIRECT_SCALAR_TYPE =
        "byte|char|short|ushort|int|uint|float|double|undefined1|undefined2|undefined4|undefined8";
    private static final Pattern STORED_HASH = Pattern.compile(
        "generated_layout_sha256=([0-9a-fA-F]{64})");

    private final Map<String, Evidence> evidence = new LinkedHashMap<>();
    private final List<Failure> failures = new ArrayList<>();
    private DataTypeManager dataTypes;
    private int candidateFunctions;
    private int ownerFunctions;
    private int machineLoopFunctions;
    private int machineRootOffsetFunctions;
    private int decompiledFunctions;
    private int rootLoads;
    private int traversalSites;

    @Override
    protected void run() throws Exception {
        end(true);
        if (currentProgram == null) {
            printerr("Open the analyzed ST program first.");
            return;
        }
        File selected = outputDirectory();
        if (selected == null) return;
        Path directory = programDirectory(selected);
        Files.createDirectories(directory);
        dataTypes = currentProgram.getDataTypeManager();
        Address only = onlyFunction();

        DecompInterface decompiler = new DecompInterface();
        decompiler.toggleCCode(true);
        decompiler.toggleSyntaxTree(false);
        if (!decompiler.openProgram(currentProgram))
            throw new IllegalStateException("Decompiler could not open current program");
        try {
            FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
            while (functions.hasNext()) {
                monitor.checkCancelled();
                Function function = functions.next();
                if (only != null && !function.getEntryPoint().equals(only)) continue;
                Map<String, Structure> owners = ownerVariables(function);
                if (owners.isEmpty()) continue;
                ownerFunctions++;
                if (!machineCandidate(function, owners.values())) continue;
                candidateFunctions++;
                analyze(function, owners, decompiler);
            }
        }
        finally {
            decompiler.dispose();
        }

        List<Row> rows = proposals();
        writeRows(directory.resolve("recursive_pointee_proposals.tsv"), rows);
        writeAudit(directory.resolve("recursive_pointee_audit.tsv"));
        writeFailures(directory.resolve("recursive_pointee_failures.tsv"));
        writeSummary(directory.resolve("recursive_pointee_summary.txt"), rows);
        println("Recursive-pointee analysis complete: " + directory.toAbsolutePath());
        println("Owner functions=" + ownerFunctions + ", loop functions=" +
            machineLoopFunctions + ", root-offset functions=" +
            machineRootOffsetFunctions + ", candidates=" + candidateFunctions +
            ", decompiled=" +
            decompiledFunctions + ", roots=" + evidence.size() +
            ", root loads=" + rootLoads + ", traversal sites=" + traversalSites +
            ", proposals=" + rows.size() + ", apply=" +
            rows.stream().filter(row -> row.apply).count() +
            ", failures=" + failures.size());
    }

    private Map<String, Structure> ownerVariables(Function function) {
        Map<String, Structure> result = new LinkedHashMap<>();
        for (Parameter parameter : function.getParameters()) {
            Structure structure = pointedStructure(parameter.getDataType());
            if (eligibleOwner(structure)) result.put(parameter.getName(), structure);
        }
        Parameter auto = function.getParameter(0);
        if (auto != null) {
            Structure structure = pointedStructure(auto.getDataType());
            if (eligibleOwner(structure)) {
                result.put(auto.getName(), structure);
                if (auto.isAutoParameter()) result.put("this", structure);
            }
        }
        return result;
    }

    private boolean eligibleOwner(Structure structure) {
        if (structure == null) return false;
        String description = text(structure.getDescription());
        if (OWNER_MARKERS.stream().noneMatch(description::contains)) return false;
        for (DataTypeComponent component : structure.getDefinedComponents())
            if (component.getLength() == currentProgram.getDefaultPointerSize() &&
                    rootFieldCandidate(component.getDataType())) return true;
        return description.contains(MARKER);
    }

    private boolean machineCandidate(Function function,
            Iterable<Structure> owners) {
        if (function.isExternal() || function.isThunk()) return false;
        Set<Long> rootOffsets = new LinkedHashSet<>();
        for (Structure owner : owners)
            for (DataTypeComponent component : owner.getDefinedComponents())
                if (component.getOffset() > 0 &&
                        component.getLength() == currentProgram.getDefaultPointerSize() &&
                        rootFieldCandidate(component.getDataType()))
                    rootOffsets.add((long)component.getOffset());
        if (rootOffsets.isEmpty()) return false;
        int loads = 0;
        boolean backwardFlow = false;
        boolean rootDisplacement = false;
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            for (int operand = 0; operand < instruction.getNumOperands(); operand++) {
                String representation = instruction.getDefaultOperandRepresentation(operand);
                if (!OperandType.isIndirect(instruction.getOperandType(operand)) &&
                        !representation.contains("[")) continue;
                Scalar scalar = instruction.getScalar(operand);
                if (scalar != null && rootOffsets.contains(scalar.getUnsignedValue()))
                    rootDisplacement = true;
                for (long offset : rootOffsets)
                    if (Pattern.compile("(?i)(?<![0-9a-f])0x" +
                            Long.toHexString(offset) + "(?![0-9a-f])")
                            .matcher(representation).find()) {
                        rootDisplacement = true;
                        break;
                    }
            }
            for (PcodeOp operation : instruction.getPcode())
                if (operation.getOpcode() == PcodeOp.LOAD) loads++;
            for (Address flow : instruction.getFlows())
                if (flow.compareTo(instruction.getAddress()) < 0) backwardFlow = true;
        }
        if (loads >= 3 && backwardFlow) machineLoopFunctions++;
        if (rootDisplacement) machineRootOffsetFunctions++;
        return loads >= 3 && backwardFlow && rootDisplacement;
    }

    private void analyze(Function function, Map<String, Structure> owners,
            DecompInterface decompiler) {
        try {
            DecompileResults result = decompiler.decompileFunction(function,
                DECOMPILE_TIMEOUT, monitor);
            if (result == null || !result.decompileCompleted()) {
                failures.add(new Failure(addr(function.getEntryPoint()),
                    function.getName(true), result == null ? "no result" :
                    text(result.getErrorMessage())));
                return;
            }
            decompiledFunctions++;
            String code = result.getDecompiledFunction().getC();
            Map<String, Structure> localViews = localViews(code);
            collectRoots(function, code, owners, localViews, CAST_ROOT, true);
            collectRoots(function, code, owners, localViews, DIRECT_ROOT, false);
        }
        catch (Exception exception) {
            failures.add(new Failure(addr(function.getEntryPoint()),
                function.getName(true), message(exception)));
        }
    }

    private void collectRoots(Function function, String code,
            Map<String, Structure> owners, Map<String, Structure> localViews,
            Pattern pattern, boolean castRoot) {
        Matcher matcher = pattern.matcher(code);
        while (matcher.find()) {
            String variable = matcher.group(1);
            String viewName = matcher.group(2);
            String base = matcher.group(3);
            String fieldName = matcher.group(4);
            Structure owner = owners.get(base);
            if (owner == null) continue;
            DataTypeComponent component = namedComponent(owner, fieldName);
            if (component == null || component.getLength() !=
                    currentProgram.getDefaultPointerSize()) continue;
            Structure currentNode = pointedStructure(component.getDataType());
            if (!genericRootType(component.getDataType(), currentNode)) continue;
            int traversals = traversalCount(code, variable);
            if (traversals == 0 || !nullChecked(code, variable)) continue;
            String key = owner.getPathName() + "+" + component.getOffset();
            Evidence item = evidence.computeIfAbsent(key,
                ignored -> new Evidence(owner, component.getOffset(),
                    component.getFieldName(), typeSpec(component.getDataType()),
                    text(component.getComment()), layoutHash(owner)));
            item.functions.add(addr(function.getEntryPoint()) + " " +
                function.getName(true));
            item.variables.add(addr(function.getEntryPoint()) + ":" + variable);
            item.rootLoads++;
            item.traversals += traversals;
            rootLoads++;
            traversalSites += traversals;

            Structure view = castRoot ? resolveStructure(viewName) : null;
            if (viewName != null && !viewName.isBlank()) item.castTypes.add(viewName);
            if (view == null) view = localViews.get(variable);
            if (view != null) item.castTypes.add(view.getName());
            if (view == null && currentNode != null && eligibleView(currentNode))
                view = currentNode;
            if (view != null && eligibleView(view)) {
                if (!provenanceViews(item, view))
                    item.views.put(view.getPathName(), view);
            }
            collectDirectFields(function, code, item, currentNode, localViews);
        }
    }

    /**
     * Once one owner field and its recursive node identity are proven, an exact
     * scalar access through a generated field spelling is additional layout
     * evidence for that same node. Only a direct &node->field_OFFSET cast with a
     * fixed primitive width is accepted; computed offsets remain review-only.
     */
    private void collectDirectFields(Function function, String code, Evidence item,
            Structure currentNode, Map<String, Structure> localViews) {
        if (currentNode == null || !eligibleView(currentNode)) return;
        for (Map.Entry<String, Structure> local : localViews.entrySet()) {
            if (!local.getValue().getPathName().equals(currentNode.getPathName())) continue;
            String variable = local.getKey();
            Pattern access = Pattern.compile("\\*\\s*\\(\\s*(" +
                DIRECT_SCALAR_TYPE + ")\\s*\\*\\s*\\)\\s*&\\s*" +
                Pattern.quote(variable) +
                "\\s*->\\s*field_(0[xX][0-9A-Fa-f]+|[0-9A-Fa-f]+)");
            Matcher matcher = access.matcher(code);
            while (matcher.find()) {
                String token = matcher.group(1).toLowerCase(Locale.ROOT);
                int width = scalarWidth(token);
                int offset;
                try {
                    String value = matcher.group(2);
                    offset = Integer.parseUnsignedInt(
                        value.regionMatches(true, 0, "0x", 0, 2) ?
                            value.substring(2) : value, 16);
                }
                catch (RuntimeException exception) { continue; }
                if (width < 1 || offset <= 0 || offset + width > MAX_NODE_SIZE) continue;
                String type = scalarType(token);
                String key = offset + ":" + width + ":" + type;
                DirectField field = item.directFields.computeIfAbsent(key,
                    ignored -> new DirectField(offset, width, type));
                field.sources.add(addr(function.getEntryPoint()) + ":" + variable);
            }
        }
    }

    private int scalarWidth(String token) {
        return switch (token) {
            case "byte", "char", "undefined1" -> 1;
            case "short", "ushort", "undefined2" -> 2;
            case "int", "uint", "float", "undefined4" -> 4;
            case "double", "undefined8" -> 8;
            default -> 0;
        };
    }

    private String scalarType(String token) { return "/" + token; }

    private boolean provenanceViews(Evidence item, Structure view) {
        String description = text(view.getDescription());
        if (!description.contains(MARKER)) return false;
        int start = description.indexOf("source_views=");
        int end = description.indexOf(HASH_MARKER, start);
        if (start < 0 || end < 0) return false;
        String serialized = description.substring(start + "source_views=".length(), end);
        if (serialized.endsWith("; ")) serialized = serialized.substring(0,
            serialized.length() - 2);
        else if (serialized.endsWith(";")) serialized = serialized.substring(0,
            serialized.length() - 1);
        int accepted = 0;
        for (String source : serialized.split("\\|")) {
            int separator = source.lastIndexOf('=');
            if (separator <= 0) continue;
            Structure structure = structure(source.substring(0, separator));
            if (structure == null || !eligibleView(structure) ||
                    !layoutHash(structure).equals(source.substring(separator + 1))) continue;
            item.views.put(structure.getPathName(), structure);
            accepted++;
        }
        return accepted >= 2;
    }

    private Map<String, Structure> localViews(String code) {
        Map<String, Structure> result = new HashMap<>();
        Matcher matcher = LOCAL_DECLARATION.matcher(code);
        while (matcher.find()) {
            Structure view = resolveStructure(matcher.group(1));
            if (view != null) result.put(matcher.group(2), view);
        }
        return result;
    }

    private int traversalCount(String code, String variable) {
        String value = Pattern.quote(variable);
        List<Pattern> patterns = List.of(
            Pattern.compile("(?<![A-Za-z0-9_$])" + value +
                "\\s*=\\s*\\*\\s*\\([^;\\r\\n]{0,100}?\\*\\s*\\*\\s*\\)\\s*" +
                value + "(?![A-Za-z0-9_$])"),
            Pattern.compile("(?<![A-Za-z0-9_$])" + value +
                "\\s*=\\s*\\([^;\\r\\n]{0,100}?\\*\\s*\\)\\s*\\*\\s*" +
                value + "(?![A-Za-z0-9_$])"),
            Pattern.compile("(?<![A-Za-z0-9_$])" + value +
                "\\s*=\\s*" + value + "\\s*->\\s*(?:next|field_(?:0[xX])?0+)(?![A-Za-z0-9_$])"));
        int count = 0;
        for (Pattern pattern : patterns) {
            Matcher matcher = pattern.matcher(code);
            while (matcher.find()) count++;
        }
        return count;
    }

    private boolean nullChecked(String code, String variable) {
        String value = Pattern.quote(variable);
        return Pattern.compile("(?<![A-Za-z0-9_$])" + value +
            "\\s*(?:!=|==)\\s*(?:nullptr|0x0|0|\\([^()]*\\)0x0)")
            .matcher(code).find();
    }

    private List<Row> proposals() {
        List<Row> result = new ArrayList<>();
        for (Evidence item : evidence.values()) {
            Layout layout = mergedLayout(item);
            String ownerDescription = text(item.owner.getDescription());
            String stored = storedHash(ownerDescription);
            boolean ownerSafe = stored != null && stored.equals(item.ownerHash);
            String nodePath = ROOT + "RecursiveNode_" + safeName(item.owner.getName()) +
                "_" + String.format("%04X", item.offset) + "_" +
                sha256(item.owner.getPathName()).substring(0, 8).toUpperCase(Locale.ROOT);
            String proposed = "pointer:" + nodePath;
            boolean rootCompatible = genericRootType(
                item.owner.getComponentAt(item.offset).getDataType(),
                structure(nodePath));
            boolean enough = item.rootLoads >= 2 && item.traversals >= 2 &&
                item.views.size() >= 2 && layout.nonzeroFields >= 3;
            boolean apply = ownerSafe && rootCompatible && enough && layout.safe;
            String reason = "root_identity=" + item.owner.getPathName() + "+0x" +
                Long.toHexString(item.offset).toUpperCase(Locale.ROOT) +
                "; root_loads=" + item.rootLoads + "; recursive_traversals=" +
                item.traversals + "; source_views=" + item.views.size() +
                "; exact_direct_fields=" + item.directFields.size() +
                "; nonzero_fields=" + layout.nonzeroFields +
                (ownerSafe ? "" : "; owner layout is manual/stale") +
                (rootCompatible ? "" : "; root field is concrete/incompatible") +
                (enough ? "" : "; insufficient independent geometry/traversal evidence") +
                (layout.safe ? "" : "; conflicting overlapping field geometry");
            result.add(new Row(apply, item.owner.getPathName(), item.ownerHash,
                item.offset, item.fieldName, item.expectedType, item.fieldComment,
                nodePath, layout.length, layout.serializedFields, layout.hash(nodePath),
                item.rootLoads, item.traversals, item.views.size(), layout.nonzeroFields,
                sourceViewHashes(item), String.join(" | ", item.functions),
                String.join(" | ", item.variables), apply ? "high" : "review", reason));
        }
        result.sort(Comparator.comparing((Row row) -> row.ownerPath)
            .thenComparingLong(row -> row.fieldOffset));
        return result;
    }

    private Layout mergedLayout(Evidence item) {
        TreeMap<Integer, Field> fields = new TreeMap<>();
        int pointerSize = currentProgram.getDefaultPointerSize();
        fields.put(0, new Field(0, pointerSize, "self", "next", 0,
            "recursive traversal"));
        boolean safe = true;
        int length = pointerSize;
        for (Structure view : item.views.values()) {
            length = Math.max(length, view.getLength());
            for (DataTypeComponent component : view.getDefinedComponents()) {
                if (component.getOffset() == 0) continue;
                int offset = component.getOffset();
                int width = component.getLength();
                if (offset < 0 || width < 1 || offset + width > MAX_NODE_SIZE) {
                    safe = false;
                    continue;
                }
                for (Field prior : fields.values())
                    if (overlap(offset, width, prior.offset, prior.width) &&
                            offset != prior.offset) safe = false;
                String type = typeSpec(component.getDataType());
                String name = semanticName(component.getFieldName()) ?
                    component.getFieldName() : String.format("field_%04X", offset);
                Field prior = fields.get(offset);
                if (prior == null) {
                    fields.put(offset, new Field(offset, width, type, name, 1,
                        view.getPathName()));
                }
                else if (prior.width != width) safe = false;
                else {
                    String merged = mergeType(prior.type, type, width);
                    fields.put(offset, new Field(offset, width, merged,
                        mergeName(prior.name, name, offset), prior.evidence + 1,
                        prior.sources + "|" + view.getPathName()));
                }
                length = Math.max(length, offset + width);
            }
        }
        for (DirectField direct : item.directFields.values()) {
            int offset = direct.offset;
            int width = direct.width;
            if (offset <= 0 || width < 1 || offset + width > MAX_NODE_SIZE) {
                safe = false;
                continue;
            }
            for (Field prior : fields.values())
                if (overlap(offset, width, prior.offset, prior.width) &&
                        offset != prior.offset) safe = false;
            Field prior = fields.get(offset);
            String sources = "direct:" + String.join("|", direct.sources);
            if (prior == null) {
                fields.put(offset, new Field(offset, width, direct.type,
                    String.format("field_%04X", offset), direct.sources.size(), sources));
            }
            else if (prior.width != width) safe = false;
            else {
                fields.put(offset, new Field(offset, width,
                    mergeType(prior.type, direct.type, width), prior.name,
                    prior.evidence + direct.sources.size(), prior.sources + "|" + sources));
            }
            length = Math.max(length, offset + width);
        }
        List<Field> selected = new ArrayList<>(fields.values());
        String serialized = serialize(selected);
        int nonzero = (int)selected.stream().filter(field -> field.offset != 0).count();
        return new Layout(safe && length <= MAX_NODE_SIZE, length, nonzero,
            serialized);
    }

    private String mergeType(String left, String right, int width) {
        if (left.equals(right)) return left;
        if (left.startsWith("/undefined")) return right;
        if (right.startsWith("/undefined")) return left;
        return "/undefined" + width;
    }

    private String mergeName(String left, String right, int offset) {
        if (left.equals(right)) return left;
        if (semanticName(left) && !semanticName(right)) return left;
        if (semanticName(right) && !semanticName(left)) return right;
        return String.format("field_%04X", offset);
    }

    private String sourceViewHashes(Evidence item) {
        List<String> values = new ArrayList<>();
        for (Structure view : item.views.values())
            values.add(view.getPathName() + "=" + layoutHash(view));
        return String.join("|", values);
    }

    private DataTypeComponent namedComponent(Structure structure, String name) {
        for (DataTypeComponent component : structure.getDefinedComponents())
            if (name.equals(component.getFieldName())) return component;
        return null;
    }

    private Structure resolveStructure(String name) {
        if (name == null || name.isBlank()) return null;
        int namespace = name.lastIndexOf("::");
        String simple = namespace < 0 ? name : name.substring(namespace + 2);
        List<DataType> matches = new ArrayList<>();
        dataTypes.findDataTypes(simple, matches);
        Structure unique = null;
        for (DataType match : matches) {
            DataType value = untypedef(match);
            if (!(value instanceof Structure structure) || !eligibleView(structure)) continue;
            if (unique != null && !unique.getPathName().equals(structure.getPathName()))
                return null;
            unique = structure;
        }
        return unique;
    }

    private boolean eligibleView(Structure structure) {
        String description = text(structure.getDescription());
        return VIEW_MARKERS.stream().anyMatch(description::contains) &&
            (structure.getName().startsWith("AnonShape_") ||
             structure.getPathName().contains("/PointerShapes/") ||
             description.contains(MARKER));
    }

    private boolean genericRootType(DataType type, Structure proposed) {
        type = untypedef(type);
        if (type instanceof Undefined) return type.getLength() ==
            currentProgram.getDefaultPointerSize();
        if (!(type instanceof Pointer pointer)) return false;
        DataType pointed = untypedef(pointer.getDataType());
        if (proposed != null && pointed instanceof Structure structure &&
                structure.getPathName().equals(proposed.getPathName())) return true;
        if (pointed == null || pointed instanceof Undefined) return true;
        return Set.of("/void", "/byte", "/char", "/undefined")
            .contains(pointed.getPathName());
    }

    private boolean rootFieldCandidate(DataType type) {
        type = untypedef(type);
        if (!(type instanceof Pointer pointer)) return false;
        DataType pointed = untypedef(pointer.getDataType());
        if (pointed instanceof Structure structure)
            return text(structure.getDescription()).contains(MARKER);
        if (pointed == null || pointed instanceof Undefined) return true;
        return Set.of("/void", "/byte", "/char", "/undefined")
            .contains(pointed.getPathName());
    }

    private Structure pointedStructure(DataType type) {
        type = untypedef(type);
        if (!(type instanceof Pointer pointer)) return null;
        DataType pointed = untypedef(pointer.getDataType());
        return pointed instanceof Structure structure ? structure : null;
    }

    private Structure structure(String path) {
        DataType type = dataTypes.getDataType(path);
        return type instanceof Structure structure ? structure : null;
    }

    private DataType untypedef(DataType type) {
        while (type instanceof TypeDef definition) type = definition.getBaseDataType();
        return type;
    }

    private String typeSpec(DataType type) {
        type = untypedef(type);
        if (type instanceof Pointer pointer)
            return "pointer:" + typeSpec(pointer.getDataType());
        return type == null ? "" : type.getPathName();
    }

    private String layoutHash(Structure structure) {
        StringBuilder value = new StringBuilder("length=")
            .append(structure.getLength()).append('\n');
        for (DataTypeComponent component : structure.getDefinedComponents())
            value.append(component.getOffset()).append('|').append(component.getLength())
                .append('|').append(component.getDataType().getPathName()).append('|')
                .append(text(component.getFieldName())).append('|')
                .append(text(component.getComment())).append('\n');
        return sha256(value.toString());
    }

    private String storedHash(String description) {
        Matcher matcher = STORED_HASH.matcher(description);
        return matcher.find() ? matcher.group(1).toLowerCase(Locale.ROOT) : null;
    }

    private String serialize(List<Field> fields) {
        List<String> values = new ArrayList<>();
        for (Field field : fields)
            values.add(field.offset + "~" + field.width + "~" + field.type + "~" +
                field.name + "~" + field.evidence + "~" + field.sources);
        return String.join(";", values);
    }

    private boolean overlap(int left, int leftWidth, int right, int rightWidth) {
        return left < right + rightWidth && right < left + leftWidth;
    }

    private boolean semanticName(String name) {
        return name != null && !name.isBlank() &&
            !name.matches("(?:field|value)_(?:0[xX])?[0-9A-Fa-f]+");
    }

    private String safeName(String value) {
        String result = value.replaceAll("[^A-Za-z0-9_$]", "_");
        return result.isBlank() ? "Owner" : result;
    }

    private String sha256(String value) {
        try {
            byte[] digest = MessageDigest.getInstance("SHA-256")
                .digest(value.getBytes(StandardCharsets.UTF_8));
            StringBuilder result = new StringBuilder();
            for (byte item : digest) result.append(String.format("%02x", item & 0xff));
            return result.toString();
        }
        catch (Exception exception) {
            throw new IllegalStateException(exception);
        }
    }

    private void writeRows(Path path, List<Row> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\towner_path\texpected_owner_hash\tfield_offset\t" +
                "expected_field_name\texpected_field_type\texpected_field_comment\t" +
                "node_path\tnode_length\tfield_layout\tnode_layout_sha256\t" +
                "root_loads\ttraversal_sites\tsource_view_count\tnonzero_field_count\t" +
                "source_view_hashes\tevidence_functions\tevidence_variables\t" +
                "confidence\treason\n");
            for (Row row : rows)
                out.write((row.apply ? "1" : "0") + "\t" + clean(row.ownerPath) +
                    "\t" + row.ownerHash + "\t" + row.fieldOffset + "\t" +
                    clean(row.fieldName) + "\t" + clean(row.expectedType) + "\t" +
                    clean(row.fieldComment) + "\t" + clean(row.nodePath) + "\t" +
                    row.nodeLength + "\t" + clean(row.fieldLayout) + "\t" +
                    row.nodeHash + "\t" + row.rootLoads + "\t" + row.traversalSites +
                    "\t" + row.sourceViewCount + "\t" + row.nonzeroFieldCount +
                    "\t" + clean(row.sourceViewHashes) + "\t" +
                    clean(row.evidenceFunctions) + "\t" +
                    clean(row.evidenceVariables) + "\t" + row.confidence + "\t" +
                    clean(row.reason) + "\n");
        }
    }

    private void writeAudit(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("owner_path\tfield_offset\troot_loads\ttraversal_sites\t" +
                "observed_cast_types\tsource_views\tevidence_functions\n");
            for (Evidence item : evidence.values())
                out.write(clean(item.owner.getPathName()) + "\t" + item.offset + "\t" +
                    item.rootLoads + "\t" + item.traversals + "\t" +
                    clean(String.join("|", item.castTypes)) + "\t" +
                    clean(String.join("|", item.views.keySet())) + "\t" +
                    clean(String.join(" | ", item.functions)) + "\n");
        }
    }

    private void writeFailures(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("function_address\tfunction_name\treason\n");
            for (Failure failure : failures)
                out.write(failure.address + "\t" + clean(failure.name) + "\t" +
                    clean(failure.reason) + "\n");
        }
    }

    private void writeSummary(Path path, List<Row> rows) throws Exception {
        long apply = rows.stream().filter(row -> row.apply).count();
        Files.writeString(path,
            "owner_functions=" + ownerFunctions + "\n" +
            "machine_loop_functions=" + machineLoopFunctions + "\n" +
            "machine_root_offset_functions=" + machineRootOffsetFunctions + "\n" +
            "candidate_functions=" + candidateFunctions + "\n" +
            "decompiled_functions=" + decompiledFunctions + "\n" +
            "root_fields=" + evidence.size() + "\n" +
            "root_loads=" + rootLoads + "\n" +
            "recursive_traversal_sites=" + traversalSites + "\n" +
            "proposals=" + rows.size() + "\n" +
            "auto_apply=" + apply + "\n" +
            "review_only=" + (rows.size() - apply) + "\n" +
            "decompile_failures=" + failures.size() + "\n",
            StandardCharsets.UTF_8);
    }

    private File outputDirectory() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException("Recovery output directory is required");
        return askDirectory("Choose recovery output directory", "Choose");
    }

    private Address onlyFunction() {
        String[] args = getScriptArgs();
        if (args.length < 2 || args[1].isBlank()) return null;
        Address address = currentProgram.getAddressFactory().getAddress(args[1]);
        if (address == null) throw new IllegalArgumentException(
            "Invalid optional function address: " + args[1]);
        return address;
    }

    private Path programDirectory(File selected) {
        Path path = selected.toPath().toAbsolutePath().normalize();
        return path.getFileName() != null &&
            path.getFileName().toString().equals(currentProgram.getName()) ? path :
            path.resolve(currentProgram.getName());
    }

    private String addr(Address address) {
        return address == null ? "" : address.toString().toUpperCase(Locale.ROOT);
    }

    private static String clean(String value) {
        return text(value).replace("\\", "\\\\").replace("\t", "\\t")
            .replace("\r", "\\r").replace("\n", "\\n");
    }
    private static String text(String value) { return value == null ? "" : value; }
    private static String message(Throwable value) {
        return value.getMessage() == null ? value.getClass().getSimpleName() : value.getMessage();
    }

    private static final class Evidence {
        final Structure owner;
        final int offset;
        final String fieldName;
        final String expectedType;
        final String fieldComment;
        final String ownerHash;
        final Map<String, Structure> views = new TreeMap<>();
        final Set<String> functions = new LinkedHashSet<>();
        final Set<String> variables = new LinkedHashSet<>();
        final Set<String> castTypes = new LinkedHashSet<>();
        final Map<String, DirectField> directFields = new TreeMap<>();
        int rootLoads;
        int traversals;
        Evidence(Structure owner, int offset, String fieldName, String expectedType,
                String fieldComment, String ownerHash) {
            this.owner = owner;
            this.offset = offset;
            this.fieldName = text(fieldName);
            this.expectedType = expectedType;
            this.fieldComment = fieldComment;
            this.ownerHash = ownerHash;
        }
    }
    private static final class DirectField {
        final int offset;
        final int width;
        final String type;
        final Set<String> sources = new TreeSet<>();
        DirectField(int offset, int width, String type) {
            this.offset = offset;
            this.width = width;
            this.type = type;
        }
    }
    private record Field(int offset, int width, String type, String name,
        int evidence, String sources) { }
    private record Layout(boolean safe, int length, int nonzeroFields,
        String serializedFields) {
        String hash(String path) { return staticSha(path + "|" + serializedFields); }
        private static String staticSha(String value) {
            try {
                byte[] digest = MessageDigest.getInstance("SHA-256")
                    .digest(value.getBytes(StandardCharsets.UTF_8));
                StringBuilder result = new StringBuilder();
                for (byte item : digest)
                    result.append(String.format("%02x", item & 0xff));
                return result.toString();
            }
            catch (Exception exception) { throw new IllegalStateException(exception); }
        }
    }
    private record Row(boolean apply, String ownerPath, String ownerHash,
        long fieldOffset, String fieldName, String expectedType, String fieldComment,
        String nodePath, int nodeLength, String fieldLayout, String nodeHash,
        int rootLoads, int traversalSites, int sourceViewCount, int nonzeroFieldCount,
        String sourceViewHashes, String evidenceFunctions, String evidenceVariables,
        String confidence, String reason) { }
    private record Failure(String address, String name, String reason) { }
}
