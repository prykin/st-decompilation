// Apply type_bootstrap_proposals.tsv produced by STTypeBootstrapAnalyzer.
// The applier creates only layouts whose evidence row remains current.  It never installs
// addresses, enum members, per-function stack offsets, or semantic view aliases.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Apply Heuristic Type Bootstrap

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.CategoryPath;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeComponent;
import ghidra.program.model.data.DataTypeConflictHandler;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.DWordDataType;
import ghidra.program.model.data.EnumDataType;
import ghidra.program.model.data.Enum;
import ghidra.program.model.data.IntegerDataType;
import ghidra.program.model.data.PointerDataType;
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.StructureDataType;
import ghidra.program.model.data.TypeDef;
import ghidra.program.model.data.Undefined;
import ghidra.program.model.data.Union;
import ghidra.program.model.data.UnionDataType;
import ghidra.program.model.data.VoidDataType;
import ghidra.program.model.data.WordDataType;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Function.FunctionUpdateType;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.listing.ParameterImpl;
import ghidra.program.model.listing.ReturnParameterImpl;
import ghidra.program.model.listing.Variable;
import ghidra.program.model.symbol.SourceType;

public class STTypeBootstrapApplier extends GhidraScript {
    private static final CategoryPath ROOT = new CategoryPath("/SubmarineTitans/Recovered");
    private static final String MARKER = "[STTypeBootstrapApplier]";
    private static final String ANCHOR = "[ST_SEMANTIC_ANCHOR]";
    private static final String VIEW = "[ST_VIEW_ONLY]";
    private final List<Report> report = new ArrayList<>();
    private DataTypeManager dataTypes;
    private int pointerSize;

    @Override
    protected void run() throws Exception {
        end(true);
        if (currentProgram == null) {
            printerr("Open the analyzed ST program first.");
            return;
        }
        File file = inputFile();
        if (file == null) return;
        Tsv input = read(file.toPath());
        require(input, "apply", "action", "target", "replacement", "expected", "proposed",
            "evidence_domains", "confidence", "evidence");
        dataTypes = currentProgram.getDataTypeManager();
        pointerSize = currentProgram.getDefaultPointerSize();

        int transaction = currentProgram.startTransaction("Apply heuristic type bootstrap");
        boolean commit = false;
        try {
            for (Map<String, String> row : input.rows) {
                monitor.checkCancelled();
                apply(row);
            }
            commit = true;
        }
        finally {
            currentProgram.endTransaction(transaction, commit);
        }
        Path output = file.toPath().toAbsolutePath().normalize().resolveSibling(
            "type_bootstrap_apply_report.tsv");
        writeReport(output);
        println("Type bootstrap: applied=" + count("applied") + ", unchanged=" +
            count("unchanged") + ", preserved=" + count("preserved") +
            ", conflicts=" + count("conflict") + ", disabled=" + count("disabled"));
        println("Apply report: " + output);
    }

    private void apply(Map<String, String> row) {
        String action = row.get("action");
        String target = unt(row.get("target"));
        if (!enabled(row.get("apply"))) {
            report.add(new Report(action, target, "disabled", "apply=0"));
            return;
        }
        try {
            if (("replace_duplicate".equals(action) || "reconcile_duplicate".equals(action) ||
                    "mark_view_only".equals(action)) &&
                    !typeFingerprint(dataTypes.getDataType(target)).equals(
                        unt(row.get("expected")))) {
                report.add(new Report(action, target, "preserved",
                    "stale type baseline"));
                return;
            }
            if ("reconcile_duplicate".equals(action) &&
                    !typeFingerprint(dataTypes.getDataType(
                        unt(row.get("replacement")))).equals(unt(row.get("proposed")))) {
                report.add(new Report(action, target, "preserved",
                    "stale canonical type baseline"));
                return;
            }
            String status = switch (action) {
                case "ensure_darray" -> ensureDArray();
                case "ensure_message" -> ensureMessage();
                case "canonical_system" -> canonicalSystem();
                case "replace_duplicate" -> replaceDuplicate(target,
                    unt(row.get("replacement")));
                case "reconcile_duplicate" -> reconcileDuplicate(target,
                    unt(row.get("replacement")));
                case "mark_view_only" -> markViewOnly(target);
                case "demote_signature" -> demoteSignature(target,
                    unt(row.get("expected")), unt(row.get("evidence")));
                case "retire_legacy_view_local" -> retireLegacyViewLocal(target,
                    unt(row.get("replacement")), unt(row.get("expected")),
                    unt(row.get("proposed")), unt(row.get("evidence")));
                case "retire_legacy_view_parameters" -> retireLegacyViewParameters(target,
                    unt(row.get("expected")), unt(row.get("proposed")),
                    unt(row.get("evidence")));
                case "retire_curated_identity" -> retireCuratedIdentity(target,
                    unt(row.get("expected")), unt(row.get("proposed")),
                    unt(row.get("evidence")));
                case "normalize_heuristic_provenance" ->
                    normalizeHeuristicProvenance(target, unt(row.get("expected")),
                        unt(row.get("evidence")));
                default -> throw new IllegalArgumentException("Unknown action " + action);
            };
            report.add(new Report(action, target, status, unt(row.get("evidence"))));
        }
        catch (Exception exception) {
            report.add(new Report(action, target, "conflict", message(exception)));
        }
    }

    private String ensureDArray() {
        DataType existing = dataTypes.getDataType(ROOT, "DArrayTy");
        if (existing instanceof Structure structure) {
            if (structure.getLength() == 0x20) {
                return ensureDescription(structure, MARKER + " " + ANCHOR +
                    " inferred from DArray helper-family field accesses and runtime stride use.") ?
                    "applied" : "unchanged";
            }
            return "preserved";
        }
        if (existing != null) return "preserved";
        StructureDataType type = new StructureDataType(ROOT, "DArrayTy", 0, dataTypes);
        type.setDescription(MARKER + " " + ANCHOR +
            " inferred descriptor: ownership flags, cursor, element size/count/capacity, " +
            "growth state, callback, and contiguous data pointer.");
        add(type, DWordDataType.dataType, "flags");
        add(type, DWordDataType.dataType, "iteratorIndex");
        add(type, DWordDataType.dataType, "elementSize");
        add(type, DWordDataType.dataType, "count");
        add(type, DWordDataType.dataType, "capacity");
        add(type, DWordDataType.dataType, "growCapacity");
        add(type, pointer(VoidDataType.dataType), "growCallback");
        add(type, pointer(VoidDataType.dataType), "data");
        dataTypes.resolve(type, DataTypeConflictHandler.KEEP_HANDLER);
        return "applied";
    }

    private String ensureMessage() {
        DataType existing = dataTypes.getDataType(ROOT, "STMessage");
        if (existing instanceof Structure structure && structure.getLength() >= 0x20) {
            boolean changed = ensureDescription(structure, MARKER + " " + ANCHOR +
                " common envelope inferred from GetMessage RET 4 and +0x10..+0x1c accesses.");
            changed |= "applied".equals(markViewOnly(
                ROOT.getPath() + "/STMessageArgWords"));
            return changed ? "applied" : "unchanged";
        }
        if (existing != null) return "preserved";

        DataType messageId = dataTypes.getDataType(ROOT, "STMessageId");
        if (messageId == null) {
            EnumDataType empty = new EnumDataType(ROOT, "STMessageId", 4, dataTypes);
            empty.setDescription(MARKER +
                " Empty inferred domain; STMessageIdAnalyzer supplies every observed value.");
            messageId = dataTypes.resolve(empty, DataTypeConflictHandler.KEEP_HANDLER);
        }
        StructureDataType words = new StructureDataType(ROOT, "STMessageArgWords", 0, dataTypes);
        words.setDescription(MARKER + " " + VIEW +
            " neutral 16-bit storage view selected by the message discriminator.");
        add(words, WordDataType.dataType, "low");
        add(words, WordDataType.dataType, "high");
        DataType resolvedWords = dataTypes.resolve(words, DataTypeConflictHandler.KEEP_HANDLER);

        UnionDataType argument = new UnionDataType(ROOT, "STMessageArg", dataTypes);
        argument.setDescription(MARKER + " " + VIEW +
            " discriminator-dependent four-byte message argument slot.");
        argument.add(DWordDataType.dataType, 4, "u32", null);
        argument.add(IntegerDataType.dataType, 4, "i32", null);
        argument.add(pointer(VoidDataType.dataType), pointerSize, "ptr", null);
        argument.add(resolvedWords, 4, "words", null);
        DataType resolvedArgument = dataTypes.resolve(argument,
            DataTypeConflictHandler.KEEP_HANDLER);

        StructureDataType message = new StructureDataType(ROOT, "STMessage", 0, dataTypes);
        message.setDescription(MARKER + " " + ANCHOR +
            " common 0x20-byte GetMessage envelope; argument meaning is selected by id.");
        for (int offset = 0; offset < 0x10; offset += 4)
            add(message, DWordDataType.dataType,
                String.format("unknown_%02x", offset));
        add(message, messageId, "id");
        add(message, resolvedArgument, "arg0");
        add(message, resolvedArgument, "arg1");
        add(message, resolvedArgument, "arg2");
        dataTypes.resolve(message, DataTypeConflictHandler.KEEP_HANDLER);
        return "applied";
    }


    private String canonicalSystem() {
        DataType type = dataTypes.getDataType("/SystemClassTy");
        if (!(type instanceof Structure structure)) return "preserved";
        boolean changed = ensureDescription(structure, MARKER + " " + ANCHOR +
            " canonical class identity; fields and vptr are refined by class/vtable solvers.");
        changed |= normalizeDerivedFieldComments(structure);
        return changed ? "applied" : "unchanged";
    }

    private boolean normalizeDerivedFieldComments(Structure structure) {
        boolean changed = false;
        for (DataTypeComponent component : structure.getDefinedComponents()) {
            String fieldName = component.getFieldName();
            String derived = derivedPointeeName(component.getDataType());
            String comment = component.getComment();
            if (fieldName == null || derived.isBlank() ||
                    !sameIdentifier(fieldName, derived) || comment == null ||
                    !comment.toLowerCase(java.util.Locale.ROOT).contains(
                        "exact semantic type unresolved")) continue;
            structure.replaceAtOffset(component.getOffset(), component.getDataType(),
                component.getLength(), fieldName, MARKER +
                    " Member name derived mechanically from concrete pointee type " +
                    component.getDataType().getPathName() + ".");
            changed = true;
        }
        return changed;
    }

    private String replaceDuplicate(String oldPath, String replacementPath) throws Exception {
        DataType old = dataTypes.getDataType(oldPath);
        DataType replacement = dataTypes.getDataType(replacementPath);
        if (old == null) return "unchanged";
        if (replacement == null) return "preserved";
        if (old.equals(replacement)) return "unchanged";
        if (!equivalentReplacement(old, replacement)) return "preserved";
        dataTypes.replaceDataType(old, replacement, false);
        DataType remaining = dataTypes.getDataType(oldPath);
        return remaining == null || remaining.equals(replacement) ?
            "applied" : "preserved";
    }

    /**
     * Merge two exact-layout views before retiring the noncanonical one. This is deliberately
     * conservative about names: an unsupported legacy semantic name must not survive merely
     * because it was written into one old structure. A disagreeing name is retained only when
     * it is mechanically derived from the selected concrete pointee type or carries provenance
     * from an active applier; otherwise Ghidra renders the member by its byte offset.
     */
    private String reconcileDuplicate(String duplicatePath, String canonicalPath)
            throws Exception {
        DataType old = dataTypes.getDataType(duplicatePath);
        DataType replacement = dataTypes.getDataType(canonicalPath);
        if (old == null) return "unchanged";
        if (!(old instanceof Structure duplicate) ||
                !(replacement instanceof Structure canonical)) return "preserved";
        if (!mergeCompatible(canonical, duplicate)) return "preserved";

        List<DataTypeComponent> left = List.of(canonical.getDefinedComponents());
        List<DataTypeComponent> right = List.of(duplicate.getDefinedComponents());
        for (int index = 0; index < left.size(); index++) {
            DataTypeComponent current = left.get(index);
            DataTypeComponent alternate = right.get(index);
            DataType selected = selectStorageType(current.getDataType(),
                alternate.getDataType());
            if (selected == null) return "preserved";
            String name = selectFieldName(current, alternate, selected);
            String comment = selectFieldComment(current, alternate, name);
            canonical.replaceAtOffset(current.getOffset(), selected, current.getLength(),
                name, comment);
        }
        ensureDescription(canonical, MARKER + " " + ANCHOR +
            " exact-layout duplicate views reconciled without category preference.");
        dataTypes.replaceDataType(duplicate, canonical, false);
        DataType remaining = dataTypes.getDataType(duplicatePath);
        return remaining == null || remaining.equals(canonical) ? "applied" : "preserved";
    }

    private boolean mergeCompatible(Structure canonical, Structure duplicate) {
        if (canonical.getLength() != duplicate.getLength()) return false;
        DataTypeComponent[] left = canonical.getDefinedComponents();
        DataTypeComponent[] right = duplicate.getDefinedComponents();
        if (left.length != right.length) return false;
        for (int index = 0; index < left.length; index++) {
            if (left[index].getOffset() != right[index].getOffset() ||
                    left[index].getLength() != right[index].getLength() ||
                    selectStorageType(left[index].getDataType(),
                        right[index].getDataType()) == null) return false;
        }
        return true;
    }

    private DataType selectStorageType(DataType canonical, DataType duplicate) {
        DataType left = unwrap(canonical);
        DataType right = unwrap(duplicate);
        if (left.isEquivalent(right)) return canonical;
        if (!(left instanceof ghidra.program.model.data.Pointer) ||
                !(right instanceof ghidra.program.model.data.Pointer)) return null;
        boolean leftGeneric = genericPointer(left);
        boolean rightGeneric = genericPointer(right);
        if (leftGeneric && !rightGeneric) return duplicate;
        if (!leftGeneric && rightGeneric) return canonical;
        if (leftGeneric) return canonical;
        DataType leftBase = nominalBase(left);
        DataType rightBase = nominalBase(right);
        if (pointerDepth(left) == pointerDepth(right) && leftBase != null &&
                rightBase != null && leftBase.getName().equals(rightBase.getName()) &&
                leftBase.getLength() == rightBase.getLength()) return canonical;
        return null;
    }

    private String selectFieldName(DataTypeComponent canonical,
            DataTypeComponent duplicate, DataType selected) {
        String left = cleanName(canonical.getFieldName());
        String right = cleanName(duplicate.getFieldName());
        if (left.equals(right)) return left.isBlank() ?
            genericFieldName(canonical.getOffset()) : left;
        String derived = derivedPointeeName(selected);
        if (!derived.isBlank()) {
            if (sameIdentifier(left, derived)) return left;
            if (sameIdentifier(right, derived)) return right;
        }
        if (trustedGeneratedName(canonical)) return left.isBlank() ? null : left;
        if (trustedGeneratedName(duplicate)) return right.isBlank() ? null : right;
        return genericFieldName(canonical.getOffset());
    }

    private String selectFieldComment(DataTypeComponent canonical,
            DataTypeComponent duplicate, String selectedName) {
        String left = canonical.getComment() == null ? "" : canonical.getComment().trim();
        String right = duplicate.getComment() == null ? "" : duplicate.getComment().trim();
        if (genericFieldName(canonical.getOffset()).equals(selectedName)) return MARKER +
            " Exact-layout views disagreed on the semantic name; retained as offset-only storage.";
        if (left.contains("[ST") && !left.isBlank()) return left;
        if (!right.isBlank()) return right;
        return left.isBlank() ? null : left;
    }

    private boolean trustedGeneratedName(DataTypeComponent component) {
        String comment = component.getComment();
        return comment != null && comment.matches(
            "(?s).*\\[ST[A-Za-z0-9]+Applier\\].*");
    }

    private String derivedPointeeName(DataType type) {
        type = unwrap(type);
        if (!(type instanceof ghidra.program.model.data.Pointer pointer) ||
                pointer.getDataType() == null) return "";
        DataType pointee = unwrap(pointer.getDataType());
        if (pointee instanceof ghidra.program.model.data.Pointer ||
                pointee instanceof VoidDataType || Undefined.isUndefined(pointee)) return "";
        String name = pointee.getName();
        if (name.endsWith("VTable")) return "vtable";
        for (String suffix : List.of("ClassTy", "ClassC"))
            if (name.endsWith(suffix) && name.length() > suffix.length()) {
                name = name.substring(0, name.length() - suffix.length());
                break;
            }
        if (name.isBlank()) return "";
        return Character.toLowerCase(name.charAt(0)) + name.substring(1);
    }

    private boolean sameIdentifier(String left, String right) {
        return left.replace("_", "").equalsIgnoreCase(right.replace("_", ""));
    }

    private String cleanName(String value) {
        if (value == null || value.matches("(?i)(?:field|unknown)_?(?:0x)?[0-9a-f]+"))
            return "";
        return value;
    }

    private String genericFieldName(int offset) {
        return String.format("field_%04X", offset);
    }

    private boolean genericPointer(DataType type) {
        type = unwrap(type);
        if (!(type instanceof ghidra.program.model.data.Pointer)) return false;
        DataType base = nominalBase(type);
        return base == null || base instanceof VoidDataType || Undefined.isUndefined(base);
    }

    private int pointerDepth(DataType type) {
        int result = 0;
        type = unwrap(type);
        while (type instanceof ghidra.program.model.data.Pointer pointer) {
            result++;
            type = unwrap(pointer.getDataType());
        }
        return result;
    }

    private DataType nominalBase(DataType type) {
        type = unwrap(type);
        while (type instanceof ghidra.program.model.data.Pointer pointer)
            type = unwrap(pointer.getDataType());
        return type;
    }

    private DataType unwrap(DataType type) {
        while (type instanceof TypeDef definition) type = definition.getBaseDataType();
        return type;
    }

    private boolean equivalentReplacement(DataType old, DataType replacement) {
        if (old instanceof Enum left && replacement instanceof Enum right) {
            if (left.getLength() != right.getLength()) return false;
            java.util.Set<Long> a = new java.util.TreeSet<>();
            java.util.Set<Long> b = new java.util.TreeSet<>();
            for (String name : left.getNames()) a.add(left.getValue(name));
            for (String name : right.getNames()) b.add(right.getValue(name));
            return a.size() >= 3 && a.equals(b);
        }
        return old.isEquivalent(replacement);
    }

    private String markViewOnly(String path) {
        DataType type = dataTypes.getDataType(path);
        if (type == null) return "unchanged";
        String description = type.getDescription() == null ? "" : type.getDescription();
        String retired = description.replace(ANCHOR, "").replaceAll("\\s+", " ").trim();
        boolean changed = !retired.equals(description.trim());
        if (!retired.contains(MARKER)) {
            retired = MARKER + (retired.isBlank() ? "" : " " + retired);
            changed = true;
        }
        if (!retired.contains(VIEW)) {
            retired = (retired.isBlank() ? "" : retired + " ") + VIEW +
                " Noncanonical storage view; excluded from semantic matching.";
            changed = true;
        }
        if (!changed) return "unchanged";
        type.setDescription(retired);
        return "applied";
    }

    private String demoteSignature(String addressText, String expected, String evidence)
            throws Exception {
        Address address = currentProgram.getAddressFactory().getAddress(addressText);
        Function function = address == null ? null :
            currentProgram.getFunctionManager().getFunctionAt(address);
        if (function == null) return "conflict";
        if (!function.getPrototypeString(true, true).equals(expected)) return "preserved";
        if (function.getSignatureSource() == SourceType.ANALYSIS) return "unchanged";
        if (function.getSignatureSource() == SourceType.IMPORTED ||
                function.getReturn().getSource() == SourceType.IMPORTED)
            return "preserved";
        for (Parameter parameter : function.getParameters())
            if (parameter.getSource() == SourceType.IMPORTED) return "preserved";
        rebuildAnalysisSignature(function, Map.of());
        function.addTag("RECOVERED_HEURISTIC_SIGNATURE");
        String line = MARKER + " Signature provenance changed from legacy USER_DEFINED to " +
            "ANALYSIS. Evidence: " + evidence;
        String old = function.getComment();
        if (old == null || old.isBlank()) function.setComment(line);
        else if (!old.contains(line)) function.setComment(old + "\n" + line);
        return "applied";
    }

    private String retireLegacyViewLocal(String addressText, String expectedName,
            String expected, String locator, String evidence) throws Exception {
        Address address = currentProgram.getAddressFactory().getAddress(addressText);
        Function function = address == null ? null :
            currentProgram.getFunctionManager().getFunctionAt(address);
        if (function == null) return "conflict";
        Variable target = null;
        List<Variable> storageMatches = new ArrayList<>();
        for (Variable variable : function.getLocalVariables()) {
            if (!variable.isValid() || variable.getVariableStorage() == null ||
                    !variable.getVariableStorage().toString().equals(locator)) continue;
            if (variable.getName().equals(expectedName)) target = variable;
            storageMatches.add(variable);
        }
        if (target == null && storageMatches.size() == 1) target = storageMatches.get(0);
        if (target == null) return "preserved";
        String comment = target.getComment() == null ? "" : target.getComment();
        if (!localFingerprint(target).equals(expected) || !target.isStackVariable() ||
                target.getSource() == SourceType.USER_DEFINED ||
                target.getSource() == SourceType.IMPORTED ||
                !comment.contains("[STRecoveredTypesApplier]") ||
                !viewOnlyType(target.getDataType())) return "preserved";

        function.removeVariable(target);
        function.addTag("RECOVERED_LEGACY_VIEW_LOCAL_RETIRED");
        String line = MARKER + " Removed legacy noncanonical stack view at " + locator +
            " so SSA can recover independent lifetimes. Evidence: " + evidence;
        String old = function.getComment();
        if (old == null || old.isBlank()) function.setComment(line);
        else if (!old.contains(line)) function.setComment(old + "\n" + line);
        return "applied";
    }

    private String localFingerprint(Variable variable) {
        return variable.getName() + "|storage=" + variable.getVariableStorage() +
            "|type=" + variable.getDataType().getPathName() +
            "|source=" + variable.getSource() +
            "|comment=" + (variable.getComment() == null ? "" : variable.getComment());
    }

    private String retireLegacyViewParameters(String addressText, String expected,
            String ordinalText, String evidence) throws Exception {
        Address address = currentProgram.getAddressFactory().getAddress(addressText);
        Function function = address == null ? null :
            currentProgram.getFunctionManager().getFunctionAt(address);
        if (function == null) return "conflict";
        if (!functionFingerprint(function).equals(expected)) return "preserved";
        if (function.getSymbol().getSource() == SourceType.IMPORTED ||
                function.getSignatureSource() == SourceType.IMPORTED ||
                function.getReturn().getSource() == SourceType.IMPORTED)
            return "preserved";
        for (Parameter parameter : function.getParameters())
            if (parameter.getSource() == SourceType.IMPORTED) return "preserved";

        List<Parameter> targets = new ArrayList<>();
        for (String token : ordinalText.split(",")) {
            if (token.isBlank()) continue;
            int ordinal = Integer.parseInt(token.trim());
            Parameter target = null;
            for (Parameter parameter : function.getParameters())
                if (parameter.getOrdinal() == ordinal) {
                    target = parameter;
                    break;
                }
            if (target == null || target.isAutoParameter() ||
                    target.getSource() != SourceType.USER_DEFINED ||
                    !(target.getDataType() instanceof ghidra.program.model.data.Pointer pointer) ||
                    !legacyScriptView(pointer.getDataType())) return "preserved";
            if (!targets.contains(target)) targets.add(target);
        }
        if (targets.isEmpty()) return "conflict";

        Map<Integer, DataType> replacements = new LinkedHashMap<>();
        for (Parameter parameter : targets)
            replacements.put(parameter.getOrdinal(), pointer(VoidDataType.dataType));
        rebuildAnalysisSignature(function, replacements);
        function.addTag("RECOVERED_LEGACY_VIEW_RETIRED");
        String line = MARKER + " Replaced legacy noncanonical view parameters with " +
            "neutral pointers for shape recovery. Evidence: " + evidence;
        String old = function.getComment();
        if (old == null || old.isBlank()) function.setComment(line);
        else if (!old.contains(line)) function.setComment(old + "\n" + line);
        return "applied";
    }

    private boolean viewOnlyType(DataType type) {
        if (type == null) return false;
        String description = type.getDescription() == null ? "" : type.getDescription();
        return description.contains(VIEW) && !description.contains(ANCHOR);
    }

    private boolean legacyScriptView(DataType type) {
        if (!viewOnlyType(type)) return false;
        String description = type.getDescription() == null ? "" : type.getDescription();
        return description.contains("[STTypeBootstrapApplier]") ||
            description.contains("[STRecoveredTypesApplier]");
    }

    private String retireCuratedIdentity(String addressText, String expected,
            String proposedLeaf, String evidence) throws Exception {
        Address address = currentProgram.getAddressFactory().getAddress(addressText);
        Function function = address == null ? null :
            currentProgram.getFunctionManager().getFunctionAt(address);
        if (function == null) return "conflict";
        if (!hasTag(function, "RECOVERED_CURATED_PROPOSAL")) return "unchanged";
        if (!functionFingerprint(function).equals(expected)) return "preserved";
        if (function.getSymbol().getSource() == SourceType.IMPORTED ||
                function.getSignatureSource() == SourceType.IMPORTED ||
                function.getReturn().getSource() == SourceType.IMPORTED)
            return "preserved";
        for (Parameter parameter : function.getParameters())
            if (parameter.getSource() == SourceType.IMPORTED) return "preserved";
        if (proposedLeaf.isBlank() || proposedLeaf.contains("::")) return "conflict";

        rebuildAnalysisSignature(function, Map.of());
        // Rename last so a rejected signature provenance update cannot leave a half-retired
        // identity behind while the legacy tag remains installed.
        function.setName(proposedLeaf, SourceType.ANALYSIS);
        function.removeTag("RECOVERED_CURATED_PROPOSAL");
        function.addTag("RECOVERED_HEURISTIC_IDENTITY");
        String line = MARKER + " Retired legacy curated identity; name=" +
            function.getName(true) + ". Evidence: " + evidence;
        String old = function.getComment();
        if (old == null || old.isBlank()) function.setComment(line);
        else if (!old.contains(line)) function.setComment(old + "\n" + line);
        return "applied";
    }

    private String normalizeHeuristicProvenance(String addressText, String expected,
            String evidence) throws Exception {
        Address address = currentProgram.getAddressFactory().getAddress(addressText);
        Function function = address == null ? null :
            currentProgram.getFunctionManager().getFunctionAt(address);
        if (function == null) return "conflict";
        if (!hasTag(function, "RECOVERED_HEURISTIC_IDENTITY") ||
                !functionFingerprint(function).equals(expected)) return "preserved";
        if (function.getSymbol().getSource() == SourceType.IMPORTED ||
                function.getSignatureSource() == SourceType.IMPORTED ||
                function.getReturn().getSource() == SourceType.IMPORTED)
            return "preserved";
        for (Parameter parameter : function.getParameters())
            if (parameter.getSource() == SourceType.IMPORTED) return "preserved";
        boolean current = function.getSignatureSource() == SourceType.ANALYSIS &&
            function.getReturn().getSource() == SourceType.ANALYSIS;
        for (Parameter parameter : function.getParameters())
            if (!parameter.isAutoParameter() &&
                    parameter.getSource() != SourceType.ANALYSIS) current = false;
        if (current) return "unchanged";
        rebuildAnalysisSignature(function, Map.of());
        String line = MARKER + " Normalized signature, return, and explicit parameter " +
            "provenance to ANALYSIS after heuristic identity retirement. Evidence: " + evidence;
        String old = function.getComment();
        if (old == null || old.isBlank()) function.setComment(line);
        else if (!old.contains(line)) function.setComment(old + "\n" + line);
        return "applied";
    }

    /** Rebuild the whole formal signature so Ghidra cannot retain USER_DEFINED
     * source priority on individual parameters after a legacy-view migration. */
    private void rebuildAnalysisSignature(Function function,
            Map<Integer, DataType> replacements) throws Exception {
        boolean custom = function.hasCustomVariableStorage();
        boolean varargs = function.hasVarArgs();
        boolean noreturn = function.hasNoReturn();
        List<Variable> rebuilt = new ArrayList<>();
        List<String> comments = new ArrayList<>();
        for (Parameter parameter : function.getParameters()) {
            if (parameter.isAutoParameter()) continue;
            DataType type = replacements.getOrDefault(parameter.getOrdinal(),
                parameter.getFormalDataType());
            rebuilt.add(custom ?
                new ParameterImpl(parameter.getName(), type,
                    parameter.getVariableStorage(), currentProgram, SourceType.ANALYSIS) :
                new ParameterImpl(parameter.getName(), type,
                    currentProgram, SourceType.ANALYSIS));
            comments.add(parameter.getComment());
        }
        ReturnParameterImpl returned = custom ?
            new ReturnParameterImpl(function.getReturnType(),
                function.getReturn().getVariableStorage(), true, currentProgram) :
            new ReturnParameterImpl(function.getReturnType(), currentProgram);
        function.updateFunction(function.getCallingConventionName(), returned, rebuilt,
            custom ? FunctionUpdateType.CUSTOM_STORAGE :
                FunctionUpdateType.DYNAMIC_STORAGE_FORMAL_PARAMS,
            true, SourceType.ANALYSIS);
        function.setVarArgs(varargs);
        function.setNoReturn(noreturn);
        function.setSignatureSource(SourceType.ANALYSIS);

        int index = 0;
        for (Parameter parameter : function.getParameters()) {
            if (parameter.isAutoParameter()) continue;
            String comment = comments.get(index++);
            if (comment != null && !comment.isBlank()) parameter.setComment(comment);
            if (parameter.getSource() != SourceType.ANALYSIS)
                throw new IllegalStateException("parameter provenance remained " +
                    parameter.getSource() + " for " + parameter.getName());
        }
        if (function.getReturn().getSource() != SourceType.ANALYSIS)
            throw new IllegalStateException("return provenance remained " +
                function.getReturn().getSource());
        if (function.getSignatureSource() != SourceType.ANALYSIS)
            throw new IllegalStateException("signature provenance remained " +
                function.getSignatureSource());
    }

    private String functionFingerprint(Function function) {
        StringBuilder result = new StringBuilder(function.getName(true))
            .append("|name_source=").append(function.getSymbol().getSource())
            .append("|prototype=").append(function.getPrototypeString(true, true))
            .append("|signature_source=").append(function.getSignatureSource())
            .append("|return_source=").append(function.getReturn().getSource());
        for (Parameter parameter : function.getParameters())
            result.append("|param_").append(parameter.getOrdinal()).append("_source=")
                .append(parameter.getSource());
        return result.toString();
    }

    private boolean hasTag(Function function, String name) {
        for (var tag : function.getTags())
            if (name.equals(tag.getName())) return true;
        return false;
    }

    private boolean ensureDescription(DataType type, String marker) {
        String current = type.getDescription();
        if (current == null || current.isBlank()) {
            type.setDescription(marker);
            return true;
        }
        if (!current.contains(MARKER)) {
            type.setDescription(current + " " + marker);
            return true;
        }
        return false;
    }

    private String typeFingerprint(DataType type) {
        if (type == null) return "missing";
        if (type instanceof Enum value) {
            StringBuilder result = new StringBuilder(type.getPathName())
                .append(':').append(type.getLength());
            for (String name : value.getNames())
                result.append('|').append(name).append('=').append(value.getValue(name));
            return result.append("|description=").append(
                type.getDescription() == null ? "" : type.getDescription()).toString();
        }
        if (!(type instanceof Structure structure))
            return type.getPathName() + ":" + type.getLength() + "|description=" +
                (type.getDescription() == null ? "" : type.getDescription());
        StringBuilder result = new StringBuilder(structure.getPathName())
            .append(':').append(structure.getLength());
        for (var component : structure.getDefinedComponents())
            result.append('|').append(component.getOffset()).append(':')
                .append(component.getLength()).append(':')
                .append(component.getDataType().getPathName()).append(':')
                .append(component.getFieldName() == null ? "" : component.getFieldName())
                .append(':').append(component.getComment() == null ? "" :
                    component.getComment());
        return result.append("|description=").append(
            type.getDescription() == null ? "" : type.getDescription()).toString();
    }

    private DataType pointer(DataType type) {
        return new PointerDataType(type, pointerSize, dataTypes);
    }
    private void add(Structure structure, DataType type, String name) {
        structure.add(type, type.getLength(), name, MARKER + " inferred field");
    }

    private File inputFile() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException("Path to type_bootstrap_proposals.tsv is required");
        return askFile("Select type_bootstrap_proposals.tsv", "Apply bootstrap");
    }
    private Tsv read(Path path) throws Exception {
        List<String> lines = Files.readAllLines(path, StandardCharsets.UTF_8);
        if (lines.isEmpty()) throw new IllegalArgumentException("Empty TSV: " + path);
        String[] header = lines.get(0).split("\\t", -1);
        List<Map<String, String>> rows = new ArrayList<>();
        for (int line = 1; line < lines.size(); line++) {
            if (lines.get(line).isBlank()) continue;
            String[] values = lines.get(line).split("\\t", -1);
            if (values.length != header.length)
                throw new IllegalArgumentException("Invalid TSV row " + (line + 1));
            Map<String, String> row = new LinkedHashMap<>();
            for (int column = 0; column < header.length; column++)
                row.put(header[column], values[column]);
            rows.add(row);
        }
        return new Tsv(List.of(header), rows);
    }
    private void require(Tsv input, String... columns) {
        for (String column : columns) if (!input.header.contains(column))
            throw new IllegalArgumentException("Missing TSV column: " + column);
    }
    private void writeReport(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("action\ttarget\tstatus\tdetail\n");
            for (Report row : report) out.write(row.action + "\t" + clean(row.target) +
                "\t" + row.status + "\t" + clean(row.detail) + "\n");
        }
    }
    private long count(String status) {
        return report.stream().filter(row -> row.status.equals(status)).count();
    }
    private static boolean enabled(String value) {
        return "1".equals(value) || "true".equalsIgnoreCase(value) ||
            "yes".equalsIgnoreCase(value);
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
    private static String clean(String value) {
        return value == null ? "" : value.replace('\t', ' ')
            .replace('\r', ' ').replace('\n', ' ');
    }
    private static String message(Exception exception) {
        String value = exception.getMessage();
        return value == null || value.isBlank() ? exception.getClass().getSimpleName() : value;
    }
    private record Tsv(List<String> header, List<Map<String, String>> rows) { }
    private record Report(String action, String target, String status, String detail) { }
}
