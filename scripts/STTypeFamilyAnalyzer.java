// Match anonymous structures to exact named layouts and recover cross-function base types.
// Read-only: writes type_family_proposals.tsv and type_family_groups.tsv.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Analyze Type Families

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.security.MessageDigest;
import java.util.ArrayList;
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

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeComponent;
import ghidra.program.model.data.FunctionDefinition;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.TypeDef;
import ghidra.program.model.data.Undefined;
import ghidra.program.model.lang.Register;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.listing.Variable;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.StackReference;

public class STTypeFamilyAnalyzer extends GhidraScript {
    private static final String POINTER_SHAPES = "/SubmarineTitans/Recovered/PointerShapes/";
    private static final String CLASS_POINTEES = "/SubmarineTitans/Recovered/ClassPointees/";
    private static final String VIEW_MARKER = "[ST_VIEW_ONLY]";
    private static final String ANCHOR_MARKER = "[ST_SEMANTIC_ANCHOR]";
    private static final Pattern AUDIT_POINTER_ARGUMENT = Pattern.compile(
        "^p([0-9]+)=pointer:(/\\S*(?:AnonShape|AnonPointee|AnonReceiver)\\S*)\\b");
    private static final Pattern AUDIT_FIRST_POINTER_ARGUMENT = Pattern.compile(
        "^p0=pointer:(/\\S*(?:AnonShape|AnonPointee|AnonReceiver)\\S*)\\b");
    private static final Pattern ANON_ADDRESS =
        Pattern.compile("(?i)Anon(?:Shape|Receiver)_([0-9a-f]{8})");
    private static final Pattern SOURCE_BASENAME = Pattern.compile(
        "(?i)([A-Za-z0-9_$.-]+)\\.(?:c|cc|cpp|cxx)\\b");
    private Map<String, Integer> receiverOwnerCounts;
    private final List<PolymorphicReceiverCallsite> polymorphicReceiverCallsites =
        new ArrayList<>();
    private final Map<Address, Map<Address, List<Address>>> predecessorCache =
        new HashMap<>();

    @Override
    protected void run() throws Exception {
        // Read-only script: do not leave GhidraScript's implicit transaction around runScript().
        end(true);
        if (currentProgram == null) { printerr("Open the analyzed ST program first."); return; }
        File selected = outputDirectory(); if (selected == null) return;
        Path directory = programDirectory(selected); Files.createDirectories(directory);
        Map<String, List<Structure>> groups = exactGroups();
        List<GroupRow> groupRows = new ArrayList<>();
        List<NamedMatchRow> namedMatches = new ArrayList<>();
        Map<String, String> redirects = new HashMap<>();
        for (Map.Entry<String, List<Structure>> entry : groups.entrySet()) {
            List<Structure> anonymous = entry.getValue().stream()
                .filter(this::anonymousStructure)
                .sorted(Comparator.comparing(DataType::getPathName)).toList();
            List<Structure> named = entry.getValue().stream()
                .filter(this::namedCandidate)
                .sorted(Comparator.comparing(DataType::getPathName)).toList();
            if (anonymous.isEmpty() || anonymous.size() + named.size() < 2) continue;
            Set<Structure> anchorSet = new LinkedHashSet<>(
                named.stream().filter(this::semanticAnchor).toList());
            named.stream().filter(candidate ->
                producerDerivedAnchor(candidate, anonymous)).forEach(anchorSet::add);
            List<Structure> anchors = new ArrayList<>(anchorSet);
            boolean uniqueNamed = named.size() == 1;
            boolean uniqueAnchor = anchors.size() == 1;
            List<Structure> receiverAnchors = anonymous.stream()
                .filter(this::hiddenThisStructure)
                .filter(type -> ownedReceiverFunctions(type) >= 2).toList();
            boolean hiddenThisGroup = named.isEmpty() && anonymous.stream()
                .allMatch(this::hiddenThisStructure);
            boolean uniqueReceiverAnchor = hiddenThisGroup && receiverAnchors.size() == 1;
            Structure canonical = uniqueAnchor ? anchors.get(0) :
                uniqueReceiverAnchor ? receiverAnchors.get(0) : anonymous.get(0);
            int fields = meaningfulFields(canonical);
            int concrete = concreteFields(canonical);
            // Equal offsets and widths alone do not prove type identity.  Earlier versions
            // counted generated field_XXXX labels as semantic names and consequently merged
            // unrelated packet, UI and object records. Automatic consolidation now requires
            // one unambiguous named semantic anchor, except for generated HiddenThis records
            // where one exact member uniquely owns a multi-function receiver namespace.
            boolean apply = uniqueAnchor && concrete >= 2 && fields >= 2 ||
                uniqueReceiverAnchor;
            boolean producerAnchor = uniqueAnchor &&
                producerDerivedAnchor(anchors.get(0), anonymous);
            String id = (uniqueReceiverAnchor ? "EXACT_HIDDEN_THIS_" :
                producerAnchor ? "EXACT_PRODUCER_" : "EXACT_") +
                entry.getKey().substring(0, 12).toUpperCase(Locale.ROOT);
            String evidence = producerAnchor ?
                "exact full producer snapshot matches the generated semantic view which " +
                    "records this sole anonymous source in its provenance; a stored layout " +
                    "hash is verified when present" :
                uniqueAnchor ?
                "exact full layout matches one evidence-qualified semantic anchor; " +
                    "concrete_fields=" + concrete :
                uniqueReceiverAnchor ?
                    "exact generated HiddenThis layout plus one unique namespace-backed " +
                        "receiver family; owned_receiver_functions=" +
                        ownedReceiverFunctions(canonical) :
                uniqueNamed && anchors.isEmpty() ?
                    "the unique named geometry is not a semantic anchor; layout equality alone " +
                        "cannot identify a type" :
                named.isEmpty() ?
                    "anonymous geometry match only; no named semantic anchor" :
                    "exact layout has semantic_anchor_count=" + anchors.size() +
                        " among named structures=" + named.stream()
                            .map(DataType::getPathName).toList();
            for (Structure member : anonymous) {
                groupRows.add(new GroupRow(apply, id, canonical.getPathName(),
                    member.getPathName(), canonical.getLength(), fields,
                    evidence));
                if (apply)
                    redirects.put(member.getPathName(), canonical.getPathName());
                for (Structure candidate : named)
                    namedMatches.add(new NamedMatchRow(apply && candidate.equals(canonical),
                        member.getPathName(), candidate.getPathName(), "exact", member.getLength(),
                        member.getNumDefinedComponents(), concreteFields(member),
                        meaningfulFields(candidate),
                        apply && (semanticAnchor(candidate) ||
                            producerDerivedAnchor(candidate, anonymous)) ?
                            "high" : "review", evidence));
            }
        }
        addCompatibleNamedMatches(namedMatches);
        List<AnonAuditRow> anonymousAudit = anonymousAudit(namedMatches);
        List<ContextualPromotion> contextualPromotions =
            contextualRecordPromotions(redirects);
        contextualPromotions.addAll(flowLinkedRecordPromotions(directory,
            redirects, contextualPromotions));
        contextualPromotions.addAll(sourceFunctionFamilyPromotions(directory,
            redirects, contextualPromotions));
        contextualPromotions.sort(
            Comparator.comparing(row -> row.sourceType));
        for (ContextualPromotion promotion : contextualPromotions)
            redirects.putIfAbsent(promotion.sourceType, promotion.targetType);
        List<Row> rows = variableRows(redirects);
        addPolymorphicCallFamilies(rows, directory);
        addReturnedPointerConsumers(rows);
        rows.sort(Comparator.comparing((Row r) -> r.functionAddress)
            .thenComparing(r -> r.targetKind).thenComparingInt(r -> r.ordinal));
        writeGroups(directory.resolve("type_family_groups.tsv"), groupRows);
        writeNamedMatches(directory.resolve("anon_named_type_matches.tsv"), namedMatches);
        writeAnonymousAudit(directory.resolve("anonymous_type_audit.tsv"), anonymousAudit);
        writeContextualPromotions(directory.resolve(
            "contextual_record_promotions.tsv"), contextualPromotions);
        writeRows(directory.resolve("type_family_proposals.tsv"), rows);
        writePolymorphicReceiverCallsites(directory.resolve(
            "polymorphic_receiver_callsites.tsv"));
        writeSummary(directory.resolve("type_family_summary.txt"), groupRows, namedMatches,
            anonymousAudit, contextualPromotions, rows);
        println("Type-family analysis complete: " + directory.toAbsolutePath().normalize());
        println("Exact groups=" + groupRows.stream().map(row -> row.id).distinct().count() +
            ", target proposals=" + rows.size() + ", apply=" +
            rows.stream().filter(row -> row.apply).count());
    }

    private boolean hiddenThisStructure(Structure structure) {
        return structure.getPathName().startsWith(
            "/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_") &&
            structure.getDescription() != null &&
            structure.getDescription().contains("[STHiddenThisApplier generated]");
    }

    /**
     * A namespace backed by the generated receiver type is provenance which plain
     * layout equality does not provide.  Requiring one unique, multi-function
     * owner keeps unrelated anonymous records with identical geometry separate.
     */
    private int ownedReceiverFunctions(Structure structure) {
        if (receiverOwnerCounts == null) {
            receiverOwnerCounts = new HashMap<>();
            FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
            while (functions.hasNext()) {
                Function function = functions.next();
                String qualified = function.getName(true);
                int separator = qualified.lastIndexOf("::");
                if (separator <= 0) continue;
                String owner = qualified.substring(0, separator);
                int leaf = owner.lastIndexOf("::");
                receiverOwnerCounts.merge(
                    leaf < 0 ? owner : owner.substring(leaf + 2), 1, Integer::sum);
            }
        }
        return receiverOwnerCounts.getOrDefault(structure.getName(), 0);
    }

    private Map<String, List<Structure>> exactGroups() throws Exception {
        Map<String, List<Structure>> groups = new TreeMap<>();
        Iterator<Structure> iterator = currentProgram.getDataTypeManager().getAllStructures();
        while (iterator.hasNext()) {
            monitor.checkCancelled();
            Structure structure = iterator.next();
            if (!anonymousStructure(structure) && !namedCandidate(structure)) continue;
            groups.computeIfAbsent(fingerprint(structure), ignored -> new ArrayList<>()).add(structure);
        }
        return groups;
    }

    private String fingerprint(Structure structure) throws Exception {
        StringBuilder value = new StringBuilder().append(structure.getLength()).append('|');
        for (DataTypeComponent component : structure.getDefinedComponents())
            value.append(component.getOffset()).append(':').append(component.getLength()).append(':')
                .append(typeSpec(component.getDataType())).append('|');
        MessageDigest digest = MessageDigest.getInstance("SHA-256");
        byte[] hash = digest.digest(value.toString().getBytes(StandardCharsets.UTF_8));
        StringBuilder result = new StringBuilder();
        for (byte item : hash) result.append(String.format("%02x", item & 0xff));
        return result.toString();
    }

    private int meaningfulFields(Structure structure) {
        int count = 0;
        for (DataTypeComponent component : structure.getDefinedComponents()) {
            String name = component.getFieldName();
            if (name != null && !name.isBlank() &&
                    !generatedFieldName(name)) count++;
        }
        return count;
    }

    private int concreteFields(Structure structure) {
        int count = 0;
        for (DataTypeComponent component : structure.getDefinedComponents())
            if (!Undefined.isUndefined(component.getDataType())) count++;
        return count;
    }

    private boolean anonymousStructure(Structure structure) {
        String path = structure.getPathName();
        return path.startsWith(POINTER_SHAPES) || path.startsWith(CLASS_POINTEES) ||
            path.contains("/Recovered/HiddenThis/") || structure.getName().startsWith("Anon");
    }

    private boolean namedCandidate(Structure structure) {
        String path = structure.getPathName();
        return !anonymousStructure(structure) && !path.contains("/VTables/") &&
            !path.contains("/VTableFunctions/") && structure.getLength() > 0;
    }

    /**
     * A name and an exact byte layout are not semantic evidence.  Bootstrap-generated
     * anchors carry an explicit evidence marker.  Existing root class structures may also
     * qualify when their namespace owns multiple methods and offset zero is a vptr-shaped
     * pointer.  Storage views, packet facets, and imported platform records never qualify.
     */
    private boolean semanticAnchor(Structure structure) {
        String path = structure.getPathName();
        String description = structure.getDescription();
        if (description != null && description.contains(VIEW_MARKER)) return false;
        if (description != null && description.contains(ANCHOR_MARKER)) return true;
        if (!path.matches("/[A-Za-z_][A-Za-z0-9_]*")) return false;
        DataTypeComponent first = structure.getComponentAt(0);
        if (first == null || first.getOffset() != 0 ||
                !(first.getDataType() instanceof Pointer)) return false;
        int methods = 0;
        String prefix = structure.getName() + "::";
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            if (functions.next().getName(true).startsWith(prefix) && ++methods >= 2) return true;
        }
        return false;
    }

    /**
     * Some semantic views are themselves generated from one anonymous layout.
     * That producer edge is stronger than coincidental geometry when the view
     * still has the exact stored layout hash.  It lets the type-family pass
     * redirect the obsolete source view without a curated anchor marker.
     */
    private boolean producerDerivedAnchor(Structure target,
            List<Structure> anonymousSources) {
        String description = target.getDescription();
        if (description == null ||
                !description.contains("[STGlobalDataApplier]") ||
                anonymousSources.size() != 1) return false;
        Structure source = anonymousSources.get(0);
        if (!description.contains(" from " + source.getPathName() + ";")) return false;
        return storedLayoutHashMatches(target, description) ||
            exactProducerSnapshot(target, source);
    }

    private boolean exactProducerSnapshot(Structure target, Structure source) {
        if (target.getLength() != source.getLength()) return false;
        DataTypeComponent[] left = target.getDefinedComponents();
        DataTypeComponent[] right = source.getDefinedComponents();
        if (left.length != right.length) return false;
        for (int index = 0; index < left.length; index++) {
            if (left[index].getOffset() != right[index].getOffset() ||
                    left[index].getLength() != right[index].getLength() ||
                    !left[index].getDataType().isEquivalent(right[index].getDataType()) ||
                    !java.util.Objects.equals(left[index].getFieldName(),
                        right[index].getFieldName()) ||
                    !java.util.Objects.equals(left[index].getComment(),
                        right[index].getComment())) return false;
        }
        return true;
    }

    private boolean storedLayoutHashMatches(Structure structure, String description) {
        String marker = "generated_layout_sha256=";
        int start = description.lastIndexOf(marker);
        if (start < 0) return false;
        start += marker.length();
        int end = start;
        while (end < description.length() &&
                Character.digit(description.charAt(end), 16) >= 0) end++;
        if (end - start != 64) return false;
        return description.substring(start, end).equals(layoutHash(structure));
    }

    private String layoutHash(Structure structure) {
        StringBuilder value = new StringBuilder();
        value.append("length=").append(structure.getLength()).append('\n');
        for (DataTypeComponent component : structure.getDefinedComponents()) {
            value.append(component.getOffset()).append('|').append(component.getLength())
                .append('|').append(component.getDataType().getPathName()).append('|')
                .append(component.getFieldName() == null ? "" : component.getFieldName())
                .append('|').append(component.getComment() == null ? "" :
                    component.getComment()).append('\n');
        }
        try {
            byte[] digest = MessageDigest.getInstance("SHA-256")
                .digest(value.toString().getBytes(StandardCharsets.UTF_8));
            StringBuilder result = new StringBuilder();
            for (byte item : digest) result.append(String.format("%02x", item & 0xff));
            return result.toString();
        }
        catch (Exception exception) {
            throw new IllegalStateException(exception);
        }
    }

    private void addCompatibleNamedMatches(List<NamedMatchRow> rows) {
        Set<String> exact = new HashSet<>();
        for (NamedMatchRow row : rows) exact.add(row.anonymousType + "|" + row.namedType);
        List<Structure> anonymous = new ArrayList<>(), named = new ArrayList<>();
        Iterator<Structure> iterator = currentProgram.getDataTypeManager().getAllStructures();
        while (iterator.hasNext()) {
            Structure structure = iterator.next();
            if (anonymousStructure(structure)) anonymous.add(structure);
            else if (namedCandidate(structure)) named.add(structure);
        }
        for (Structure source : anonymous) {
            DataTypeComponent[] observed = source.getDefinedComponents();
            if (observed.length < 3) continue;
            for (Structure candidate : named) {
                if (candidate.getLength() != source.getLength() ||
                        exact.contains(source.getPathName() + "|" + candidate.getPathName()))
                    continue;
                int concrete = 0, semantic = 0;
                boolean compatible = true;
                for (DataTypeComponent component : observed) {
                    DataTypeComponent target = candidate.getComponentAt(component.getOffset());
                    if (target == null || target.getOffset() != component.getOffset() ||
                            target.getLength() != component.getLength()) {
                        compatible = false; break;
                    }
                    if (!Undefined.isUndefined(component.getDataType())) {
                        concrete++;
                        if (!component.getDataType().isEquivalent(target.getDataType())) {
                            compatible = false; break;
                        }
                        semantic++;
                    }
                    String name = target.getFieldName();
                    if (name != null && !name.isBlank() &&
                            !generatedFieldName(name))
                        semantic++;
                }
                if (compatible && semantic >= 2)
                    rows.add(new NamedMatchRow(false, source.getPathName(),
                        candidate.getPathName(), "compatible_same_length", source.getLength(),
                        observed.length, concrete, semantic, "review",
                        "all observed offsets fit the named layout, but partial geometry does " +
                        "not prove type identity; semantic_anchor=" + semanticAnchor(candidate)));
            }
        }
        rows.sort(Comparator.comparing((NamedMatchRow row) -> row.anonymousType)
            .thenComparing(row -> row.namedType));
    }

    private List<AnonAuditRow> anonymousAudit(List<NamedMatchRow> matches) {
        Map<String, Usage> usage = anonymousUsage();
        Map<String, List<NamedMatchRow>> byType = new TreeMap<>();
        for (NamedMatchRow match : matches)
            byType.computeIfAbsent(match.anonymousType, ignored -> new ArrayList<>()).add(match);

        List<AnonAuditRow> rows = new ArrayList<>();
        Iterator<Structure> iterator = currentProgram.getDataTypeManager().getAllStructures();
        while (iterator.hasNext()) {
            Structure structure = iterator.next();
            if (!anonymousStructure(structure)) continue;
            List<NamedMatchRow> candidates = byType.getOrDefault(
                structure.getPathName(), List.of());
            Set<String> exact = new TreeSet<>(), compatible = new TreeSet<>(),
                automatic = new TreeSet<>();
            for (NamedMatchRow candidate : candidates) {
                if ("exact".equals(candidate.matchKind)) exact.add(candidate.namedType);
                else compatible.add(candidate.namedType);
                if (candidate.apply) automatic.add(candidate.namedType);
            }
            Usage targets = usage.getOrDefault(structure.getPathName(), new Usage());
            String status = !automatic.isEmpty() ? "exact_unique_named_auto" :
                exact.size() > 1 ? "exact_named_ambiguous" :
                exact.size() == 1 ? "exact_named_review" :
                !compatible.isEmpty() ? "partial_named_review" : "no_named_layout_match";
            rows.add(new AnonAuditRow(structure.getPathName(),
                anonymousCategory(structure), structure.getLength(),
                structure.getNumDefinedComponents(), concreteFields(structure),
                meaningfulFields(structure), targets.functions, targets.globals,
                targets.fields,
                String.join(",", exact), String.join(",", compatible),
                String.join(",", automatic), status,
                targets.functions + targets.globals + targets.fields == 0 ?
                    "unreferenced" : "referenced"));
        }
        rows.sort(Comparator.comparing(row -> row.anonymousType));
        return rows;
    }

    private Map<String, Usage> anonymousUsage() {
        Map<String, Usage> result = new TreeMap<>();
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            Function function = functions.next();
            countUsage(result, function.getReturn().getDataType(), true);
            for (Parameter parameter : function.getParameters())
                countUsage(result, parameter.getDataType(), true);
            for (Variable local : function.getLocalVariables())
                countUsage(result, local.getDataType(), true);
        }
        for (Data data : currentProgram.getListing().getDefinedData(true))
            countUsage(result, data.getDataType(), false);
        Iterator<Structure> structures = currentProgram.getDataTypeManager().getAllStructures();
        while (structures.hasNext())
            for (DataTypeComponent component : structures.next().getDefinedComponents())
                countFieldUsage(result, component.getDataType());
        return result;
    }

    private void countUsage(Map<String, Usage> result, DataType type, boolean function) {
        if (!(type instanceof Pointer pointer) || pointer.getDataType() == null ||
                !(pointer.getDataType() instanceof Structure structure) ||
                !anonymousStructure(structure)) return;
        Usage usage = result.computeIfAbsent(structure.getPathName(), ignored -> new Usage());
        if (function) usage.functions++; else usage.globals++;
    }

    private void countFieldUsage(Map<String, Usage> result, DataType type) {
        if (!(type instanceof Pointer pointer) || pointer.getDataType() == null ||
                !(pointer.getDataType() instanceof Structure structure) ||
                !anonymousStructure(structure)) return;
        result.computeIfAbsent(structure.getPathName(), ignored -> new Usage()).fields++;
    }

    private String anonymousCategory(Structure structure) {
        String path = structure.getPathName();
        if (path.startsWith(POINTER_SHAPES)) return "pointer_shape";
        if (path.startsWith(CLASS_POINTEES)) return "class_pointee";
        if (path.contains("/Recovered/HiddenThis/")) return "hidden_this";
        return "other_anon";
    }

    private boolean generatedFieldName(String name) {
        return name.matches(
            "(?i)(?:field|value|unknown|unk)(?:_?(?:0x)?[0-9a-f]+)?");
    }

    private List<Row> variableRows(Map<String, String> redirects) throws Exception {
        List<Row> rows = new ArrayList<>();
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            monitor.checkCancelled(); Function function = functions.next();
            addVariable(rows, redirects, function, function.getReturn(), "return", -1);
            for (Parameter parameter : function.getParameters()) {
                if (parameter.isAutoParameter()) continue;
                addVariable(rows, redirects, function, parameter, "parameter", parameter.getOrdinal());
            }
            int localIndex = 0;
            for (Variable local : function.getLocalVariables())
                addVariable(rows, redirects, function, local, "local", localIndex++);
        }
        return rows;
    }

    private void addVariable(List<Row> rows, Map<String, String> redirects, Function function,
            Variable variable, String kind, int ordinal) {
        DataType type = variable.getDataType();
        if (!(type instanceof Pointer pointer) || pointer.getDataType() == null) return;
        String canonical = redirects.get(pointer.getDataType().getPathName());
        if (canonical == null) return;
        boolean apply = variable.getSource() != SourceType.USER_DEFINED &&
            variable.getSource() != SourceType.IMPORTED;
        boolean sourceFamily = canonical.startsWith(
            POINTER_SHAPES + "RecoveredSourceFamily_");
        boolean contextual = sourceFamily || canonical.startsWith(
            POINTER_SHAPES + "RecoveredRecord_");
        String family = sourceFamily ? "SOURCE_FUNCTION_FAMILY" :
            contextual ? "CONTEXTUAL_GENERATED_RECORD" : "EXACT_NAMED_LAYOUT";
        String evidence = sourceFamily ?
            "one script-owned pointer shape is anchored by one library source basename, " +
                "multiple semantic function names, and exact first-argument call flow" :
            contextual ?
                "one script-owned pointer shape is used only by functions with one unique " +
                "class-owner context; promote its stable machine layout to a generated " +
                "owner-qualified record name" :
                "anonymous structure has an exact full-layout match to one unique named type";
        rows.add(new Row(apply, addr(function.getEntryPoint()), function.getName(true), kind,
            ordinal, variable.getName(), variable.getVariableStorage().toString(), typeSpec(type),
            variable.getSource().toString(), "pointer:" + canonical,
            false, family, "high", evidence));
    }

    /**
     * A complete pointer shape can lack the original source-level noun even when its identity
     * is no longer anonymous: one generated type flows through several function signatures and
     * every owning/calling method belongs to the same class.  Give that record a deterministic,
     * explicitly generated owner-qualified name.  This is not a geometry merge and does not
     * invent field semantics; one source shape remains one type.
     */
    private List<ContextualPromotion> contextualRecordPromotions(
            Map<String, String> existingRedirects) throws Exception {
        Map<String, Usage> usage = anonymousUsage();
        Map<Address, Set<String>> callerOwners = callerOwners();
        Map<String, List<Function>> functionsByType = new TreeMap<>();
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            monitor.checkCancelled();
            Function function = functions.next();
            collectFunctionType(functionsByType, function, function.getReturn().getDataType());
            for (Parameter parameter : function.getParameters())
                collectFunctionType(functionsByType, function, parameter.getDataType());
            for (Variable local : function.getLocalVariables())
                collectFunctionType(functionsByType, function, local.getDataType());
        }

        List<ContextualPromotion> rows = new ArrayList<>();
        Iterator<Structure> structures =
            currentProgram.getDataTypeManager().getAllStructures();
        while (structures.hasNext()) {
            monitor.checkCancelled();
            Structure structure = structures.next();
            String source = structure.getPathName();
            String description = structure.getDescription();
            Usage targets = usage.getOrDefault(source, new Usage());
            if (!source.startsWith(POINTER_SHAPES) ||
                    !structure.getName().startsWith("AnonShape_") ||
                    existingRedirects.containsKey(source) ||
                    structure.getLength() < 2 || structure.getLength() > 0x200 ||
                    concreteFields(structure) < 3 || targets.functions < 2 ||
                    targets.globals != 0 || targets.fields != 0 ||
                    description == null ||
                    !description.contains("[STPointerShapeApplier]") ||
                    !description.contains("generated_layout_sha256="))
                continue;

            List<Function> anchors = functionsByType.getOrDefault(source, List.of());
            Set<String> owners = new TreeSet<>();
            Address anchor = null;
            for (Function function : anchors) {
                String owner = functionOwner(function);
                if (!owner.isBlank()) owners.add(owner);
                else owners.addAll(callerOwners.getOrDefault(
                    resolveThunk(function).getEntryPoint(), Set.of()));
                if (!function.isThunk() && (anchor == null ||
                        function.getEntryPoint().compareTo(anchor) < 0))
                    anchor = function.getEntryPoint();
            }
            if (owners.size() != 1 || anchor == null) continue;
            String owner = owners.iterator().next();
            String target = POINTER_SHAPES + "RecoveredRecord_" +
                sanitizeLeaf(owner) + "_" + addr(anchor);
            DataType existing = currentProgram.getDataTypeManager().getDataType(target);
            if (existing != null && (!(existing instanceof Structure targetStructure) ||
                    !targetStructure.isEquivalent(structure)))
                continue;
            rows.add(new ContextualPromotion(source, target, owner, addr(anchor),
                structure.getLength(), concreteFields(structure), targets.functions,
                "unique owner context across every function-typed use; no global or " +
                "containing-field aliases"));
        }
        rows.sort(Comparator.comparing(row -> row.sourceType));
        return rows;
    }

    /**
     * Two anonymous pointer shapes are the same runtime record when an exact
     * direct call passes one as the other's parameter, their complete layouts
     * match, and every function-typed use belongs to one owner context. This is
     * dataflow identity, not a geometry-only merge. Globals, containing fields,
     * manual types, cross-owner families, and partial layouts remain excluded.
     */
    private List<ContextualPromotion> flowLinkedRecordPromotions(Path directory,
            Map<String, String> redirects,
            List<ContextualPromotion> existingPromotions) throws Exception {
        Path audit = directory.resolve("prototype_callsite_audit.tsv");
        if (!Files.isRegularFile(audit)) return List.of();
        Map<String, Structure> structures = new TreeMap<>();
        Iterator<Structure> iterator =
            currentProgram.getDataTypeManager().getAllStructures();
        while (iterator.hasNext()) {
            Structure structure = iterator.next();
            if (scriptOwnedPointerShape(structure))
                structures.put(structure.getPathName(), structure);
        }
        if (structures.size() < 2) return List.of();

        Map<String, Set<String>> graph = new TreeMap<>();
        for (Map<String, String> row : readTsv(audit)) {
            if (!safeText(row.get("status")).startsWith("exact_address_match"))
                continue;
            Address address = currentProgram.getAddressFactory()
                .getAddress(safeText(row.get("resolved_address")));
            Function target = address == null ? null :
                currentProgram.getFunctionManager().getFunctionAt(address);
            if (target == null) continue;
            for (String argument :
                    safeText(row.get("stack_arguments")).split("\\s*\\|\\s*")) {
                Matcher matcher = AUDIT_POINTER_ARGUMENT.matcher(argument);
                if (!matcher.find()) continue;
                int ordinal = Integer.parseInt(matcher.group(1));
                String source = matcher.group(2);
                Parameter parameter = null;
                for (Parameter candidate : target.getParameters())
                    if (!candidate.isAutoParameter() &&
                            candidate.getOrdinal() == ordinal) {
                        parameter = candidate;
                        break;
                    }
                if (parameter == null || !structures.containsKey(source))
                    continue;
                DataType targetType = parameter.getDataType();
                if (!(targetType instanceof Pointer pointer) ||
                        pointer.getDataType() == null)
                    continue;
                String destination = pointer.getDataType().getPathName();
                if (source.equals(destination) ||
                        !structures.containsKey(destination))
                    continue;
                if (!fingerprint(structures.get(source)).equals(
                        fingerprint(structures.get(destination))))
                    continue;
                graph.computeIfAbsent(source, ignored -> new TreeSet<>())
                    .add(destination);
                graph.computeIfAbsent(destination, ignored -> new TreeSet<>())
                    .add(source);
            }
        }
        if (graph.isEmpty()) return List.of();

        Map<String, Usage> usage = anonymousUsage();
        Map<String, Set<String>> owners = typeOwnerContexts();
        Set<String> already = new TreeSet<>();
        for (ContextualPromotion promotion : existingPromotions)
            already.add(promotion.sourceType);
        List<ContextualPromotion> result = new ArrayList<>();
        Set<String> visited = new TreeSet<>();
        for (String start : graph.keySet()) {
            if (!visited.add(start)) continue;
            Set<String> component = new TreeSet<>();
            List<String> pending = new ArrayList<>();
            pending.add(start);
            while (!pending.isEmpty()) {
                String value = pending.remove(pending.size() - 1);
                component.add(value);
                for (String next : graph.getOrDefault(value, Set.of()))
                    if (visited.add(next)) pending.add(next);
            }
            if (component.size() < 2) continue;
            Set<String> familyOwners = new TreeSet<>();
            boolean safe = true;
            String fingerprint = null;
            int functionTargets = 0;
            for (String source : component) {
                Structure structure = structures.get(source);
                Usage targets = usage.getOrDefault(source, new Usage());
                Set<String> typeOwners =
                    owners.getOrDefault(source, Set.of());
                String currentFingerprint = fingerprint(structure);
                if (redirects.containsKey(source) || already.contains(source) ||
                        targets.globals != 0 || targets.fields != 0 ||
                        targets.functions < 1 || typeOwners.size() != 1 ||
                        concreteFields(structure) < 2 ||
                        (fingerprint != null &&
                            !fingerprint.equals(currentFingerprint))) {
                    safe = false;
                    break;
                }
                fingerprint = currentFingerprint;
                familyOwners.addAll(typeOwners);
                functionTargets += targets.functions;
            }
            if (!safe || familyOwners.size() != 1) continue;
            String owner = familyOwners.iterator().next();
            String anchor = component.stream().map(this::anonymousAddress)
                .filter(value -> !value.isBlank()).min(String::compareTo)
                .orElse(fingerprint.substring(0, 8).toUpperCase(Locale.ROOT));
            String target = POINTER_SHAPES + "RecoveredRecord_" +
                sanitizeLeaf(owner) + "_" + anchor;
            Structure prototype = structures.get(component.iterator().next());
            DataType occupied =
                currentProgram.getDataTypeManager().getDataType(target);
            if (occupied != null && (!(occupied instanceof Structure existing) ||
                    !existing.isEquivalent(prototype)))
                continue;
            for (String source : component) {
                Structure structure = structures.get(source);
                result.add(new ContextualPromotion(source, target, owner,
                    anchor, structure.getLength(), concreteFields(structure),
                    usage.getOrDefault(source, new Usage()).functions,
                    "exact complete layout plus address-authoritative direct-call " +
                        "pointer flow links " + component.size() +
                        " script-owned shapes; every function use has owner " +
                        owner + "; no global or containing-field aliases"));
                redirects.put(source, target);
            }
        }
        return result;
    }

    /**
     * Promote one anonymous identity to a deterministic source-family name when
     * three independent facts agree: a statically linked library function with
     * that exact first parameter names one source basename, several semantically
     * named functions participate in exact p0 call flows, and every destination
     * formal in those flows is the same pointer shape.  No layouts are merged:
     * the generated family is a clone of one already proven script-owned shape.
     *
     * This deliberately does not use caller pseudocode or an address allow-list.
     * A basename collision between two shapes disables both candidates rather
     * than appending an arbitrary address to the public type name.
     */
    private List<ContextualPromotion> sourceFunctionFamilyPromotions(Path directory,
            Map<String, String> redirects,
            List<ContextualPromotion> existingPromotions) throws Exception {
        Path audit = directory.resolve("prototype_callsite_audit.tsv");
        if (!Files.isRegularFile(audit)) return List.of();

        Map<String, Structure> structures = new TreeMap<>();
        Iterator<Structure> iterator =
            currentProgram.getDataTypeManager().getAllStructures();
        while (iterator.hasNext()) {
            Structure structure = iterator.next();
            if (scriptOwnedPointerShape(structure) &&
                    structure.getLength() >= 2 && structure.getLength() <= 0x400 &&
                    concreteFields(structure) >= 3)
                structures.put(structure.getPathName(), structure);
        }
        if (structures.isEmpty()) return List.of();

        Set<String> already = new TreeSet<>();
        for (ContextualPromotion promotion : existingPromotions)
            already.add(promotion.sourceType);
        Map<String, SourceFamilyEvidence> evidence = new TreeMap<>();

        // A source basename is accepted only from a library-owned function whose
        // first explicit formal already has this exact pointer identity.
        FunctionIterator functions =
            currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            monitor.checkCancelled();
            Function function = functions.next();
            Parameter first = firstExplicitParameter(function);
            String source = pointedPath(first == null ? null : first.getDataType());
            if (!structures.containsKey(source) || !libraryFunction(function)) continue;
            for (String basename : sourceBasenames(function))
                evidence.computeIfAbsent(source, ignored -> new SourceFamilyEvidence())
                    .basenames.add(basename);
        }

        for (Map<String, String> row : readTsv(audit)) {
            if (!"exact_address_match".equals(safeText(row.get("status")))) continue;
            String arguments = safeText(row.get("stack_arguments"));
            Matcher firstArgument = AUDIT_FIRST_POINTER_ARGUMENT.matcher(arguments);
            if (!firstArgument.find()) continue;
            String source = firstArgument.group(1);
            if (!structures.containsKey(source)) continue;

            Address targetAddress = currentProgram.getAddressFactory()
                .getAddress(safeText(row.get("resolved_address")));
            Function target = targetAddress == null ? null :
                currentProgram.getFunctionManager().getFunctionAt(targetAddress);
            Parameter targetFirst = target == null ? null : firstExplicitParameter(target);
            if (targetFirst == null ||
                    !source.equals(pointedPath(targetFirst.getDataType()))) continue;

            SourceFamilyEvidence item = evidence.computeIfAbsent(source,
                ignored -> new SourceFamilyEvidence());
            item.exactFlows++;
            item.targets.add(addr(target.getEntryPoint()));
            item.anchorAddresses.add(addr(target.getEntryPoint()));
            if (semanticFunctionName(target)) item.namedFunctions.add(target.getName(true));

            Address callerAddress = currentProgram.getAddressFactory()
                .getAddress(safeText(row.get("caller_address")));
            Function caller = callerAddress == null ? null :
                currentProgram.getFunctionManager().getFunctionAt(callerAddress);
            if (caller != null) {
                item.anchorAddresses.add(addr(caller.getEntryPoint()));
                if (semanticFunctionName(caller))
                    item.namedFunctions.add(caller.getName(true));
            }
        }

        Map<String, List<String>> sourcesByBasename = new TreeMap<>();
        for (Map.Entry<String, SourceFamilyEvidence> entry : evidence.entrySet()) {
            SourceFamilyEvidence item = entry.getValue();
            if (item.basenames.size() == 1 && item.exactFlows >= 3 &&
                    item.targets.size() >= 2 && item.namedFunctions.size() >= 2)
                sourcesByBasename.computeIfAbsent(item.basenames.iterator().next(),
                    ignored -> new ArrayList<>()).add(entry.getKey());
        }

        List<ContextualPromotion> result = new ArrayList<>();
        for (Map.Entry<String, List<String>> family : sourcesByBasename.entrySet()) {
            if (family.getValue().size() != 1) continue;
            String source = family.getValue().get(0);
            if (redirects.containsKey(source) || already.contains(source)) continue;
            Structure structure = structures.get(source);
            SourceFamilyEvidence item = evidence.get(source);
            String basename = family.getKey();
            String target = POINTER_SHAPES + "RecoveredSourceFamily_" +
                sanitizeLeaf(basename);
            DataType occupied =
                currentProgram.getDataTypeManager().getDataType(target);
            if (occupied != null && (!(occupied instanceof Structure existing) ||
                    !existing.isEquivalent(structure))) continue;
            String anchor = item.anchorAddresses.isEmpty() ? "" :
                item.anchorAddresses.iterator().next();
            result.add(new ContextualPromotion(source, target,
                "source:" + basename, anchor, structure.getLength(),
                concreteFields(structure),
                anonymousUsage().getOrDefault(source, new Usage()).functions,
                "library source basename=" + basename +
                    "; exact first-argument flows=" + item.exactFlows +
                    "; distinct destinations=" + item.targets.size() +
                    "; semantic functions=" + String.join("|", item.namedFunctions) +
                    "; one source shape is renamed without geometry merging"));
            redirects.put(source, target);
        }
        return result;
    }

    private Parameter firstExplicitParameter(Function function) {
        if (function == null) return null;
        for (Parameter parameter : function.getParameters())
            if (!parameter.isAutoParameter()) return parameter;
        return null;
    }

    private String pointedPath(DataType type) {
        return type instanceof Pointer pointer && pointer.getDataType() != null ?
            pointer.getDataType().getPathName() : "";
    }

    private boolean libraryFunction(Function function) {
        if (function.getName(true).startsWith("Library::")) return true;
        return function.getTags().stream().anyMatch(tag ->
            "LIBRARY".equals(tag.getName()) || tag.getName().startsWith("LIBRARY_"));
    }

    private Set<String> sourceBasenames(Function function) {
        Set<String> result = new TreeSet<>();
        String comments = safeText(function.getComment()) + "\n" +
            safeText(function.getRepeatableComment());
        Matcher matcher = SOURCE_BASENAME.matcher(comments);
        while (matcher.find())
            result.add(matcher.group(1).toLowerCase(Locale.ROOT));
        return result;
    }

    private boolean semanticFunctionName(Function function) {
        if (function == null || function.isThunk()) return false;
        String name = function.getName();
        return !name.matches("(?i)(?:FUN|sub|thunk_FUN)_[0-9a-f]+") &&
            !name.matches("(?i)(?:LAB|caseD?)_[0-9a-f]+") &&
            !name.isBlank();
    }

    private boolean scriptOwnedPointerShape(Structure structure) {
        String description = structure.getDescription();
        return structure.getPathName().startsWith(POINTER_SHAPES) &&
            structure.getName().startsWith("AnonShape_") &&
            description != null &&
            description.contains("[STPointerShapeApplier]") &&
            description.contains("generated_layout_sha256=");
    }

    private Map<String, Set<String>> typeOwnerContexts() {
        Map<String, Set<String>> result = new TreeMap<>();
        FunctionIterator functions =
            currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            Function function = functions.next();
            String owner = functionOwner(function);
            if (owner.isBlank()) continue;
            addTypeOwner(result, function.getReturn().getDataType(), owner);
            for (Parameter parameter : function.getParameters())
                addTypeOwner(result, parameter.getDataType(), owner);
            for (Variable local : function.getLocalVariables())
                addTypeOwner(result, local.getDataType(), owner);
        }
        return result;
    }

    private void addTypeOwner(Map<String, Set<String>> result, DataType type,
            String owner) {
        if (!(type instanceof Pointer pointer) ||
                pointer.getDataType() == null) return;
        String path = pointer.getDataType().getPathName();
        if (!path.startsWith(POINTER_SHAPES)) return;
        result.computeIfAbsent(path, ignored -> new TreeSet<>()).add(owner);
    }

    private String anonymousAddress(String path) {
        Matcher matcher = ANON_ADDRESS.matcher(path);
        return matcher.find() ? matcher.group(1).toUpperCase(Locale.ROOT) : "";
    }

    private List<Map<String, String>> readTsv(Path path) throws Exception {
        List<String> lines = Files.readAllLines(path, StandardCharsets.UTF_8);
        if (lines.isEmpty()) return List.of();
        String[] header = lines.get(0).split("\\t", -1);
        List<Map<String, String>> result = new ArrayList<>();
        for (int line = 1; line < lines.size(); line++) {
            if (lines.get(line).isBlank()) continue;
            String[] values = lines.get(line).split("\\t", -1);
            if (values.length != header.length) continue;
            Map<String, String> row = new LinkedHashMap<>();
            for (int column = 0; column < header.length; column++)
                row.put(header[column], values[column]);
            result.add(row);
        }
        return result;
    }

    private String safeText(String value) {
        return value == null ? "" : value;
    }

    private void collectFunctionType(Map<String, List<Function>> result,
            Function function, DataType type) {
        if (!(type instanceof Pointer pointer) || pointer.getDataType() == null ||
                !(pointer.getDataType() instanceof Structure structure) ||
                !structure.getName().startsWith("AnonShape_")) return;
        List<Function> values = result.computeIfAbsent(
            structure.getPathName(), ignored -> new ArrayList<>());
        if (!values.contains(function)) values.add(function);
    }

    private Map<Address, Set<String>> callerOwners() throws Exception {
        Map<Address, Set<String>> result = new HashMap<>();
        FunctionIterator callers = currentProgram.getFunctionManager().getFunctions(true);
        while (callers.hasNext()) {
            monitor.checkCancelled();
            Function caller = callers.next();
            String owner = functionOwner(caller);
            if (owner.isBlank()) continue;
            for (Function called : caller.getCalledFunctions(monitor)) {
                Function resolved = resolveThunk(called);
                result.computeIfAbsent(resolved.getEntryPoint(),
                    ignored -> new TreeSet<>()).add(owner);
            }
        }
        return result;
    }

    private Function resolveThunk(Function function) {
        Set<Address> seen = new HashSet<>();
        while (function != null && function.isThunk() &&
                seen.add(function.getEntryPoint())) {
            Function next = function.getThunkedFunction(false);
            if (next == null || next.equals(function)) break;
            function = next;
        }
        return function;
    }

    private String functionOwner(Function function) {
        String qualified = function.getName(true);
        int separator = qualified.lastIndexOf("::");
        if (separator <= 0 || qualified.startsWith("Library::") ||
                qualified.contains("SubmarineTitans::Recovered::HiddenThis::"))
            return "";
        String owner = qualified.substring(0, separator);
        int nested = owner.lastIndexOf("::");
        return nested < 0 ? owner : owner.substring(nested + 2);
    }

    private String sanitizeLeaf(String value) {
        String result = value.replaceAll("[^A-Za-z0-9_$]", "_");
        return result.isBlank() ? "UnknownOwner" : result;
    }

    /**
     * Recover a common polymorphic receiver without naming a game class in the heuristic.
     * One generic parameter must feed several exact machine CALLIND receiver chains.  A base
     * is selected only when every independently named caller class has a physical primary
     * vtable whose slot-owner evidence contains that same base, and the observed slot ABIs
     * agree with its accepted physical table.  This turns heterogeneous object containers
     * into their already recovered common interface while leaving geometry-only relatives
     * and one-caller guesses untouched.
     *
     * The same audit recovers a generic producer return when its exact EAX result is repeatedly
     * used as one already typed physical receiver.  This replaces the former method-name/type
     * special case with an address-independent machine chain.
     */
    private void addPolymorphicCallFamilies(List<Row> rows, Path directory) throws Exception {
        Path vtablePath = directory.resolve("vtable_proposals.tsv");
        Path callPath = directory.resolve("callable_family_audit.tsv");
        Path prototypePath = directory.resolve("prototype_callsite_audit.tsv");
        Path flowPath = directory.resolve("pointer_shape_call_type_edges.tsv");
        if (!Files.isRegularFile(vtablePath) || !Files.isRegularFile(callPath)) return;
        List<Map<String, String>> vtables = readTsv(vtablePath);
        List<Map<String, String>> calls = readTsv(callPath);
        Map<String, Set<String>> directCallerOwners = Files.isRegularFile(prototypePath) ?
            directCallerOwners(readTsv(prototypePath)) : Map.of();
        Map<String, List<IncomingPointerType>> incomingPointerTypes =
            Files.isRegularFile(flowPath) ? incomingPointerTypes(readTsv(flowPath)) : Map.of();
        List<PolymorphicBase> bases = polymorphicBases(vtables);
        if (bases.isEmpty()) return;

        Map<String, List<ReceiverSite>> parameters = new TreeMap<>();
        Map<String, List<ReceiverSite>> producers = new TreeMap<>();
        for (Map<String, String> row : calls) {
            if (!"1".equals(row.get("exact_unadjusted_receiver"))) continue;
            Address functionAddress = currentProgram.getAddressFactory().getAddress(
                safeText(row.get("function_address")));
            Address callAddress = currentProgram.getAddressFactory().getAddress(
                safeText(row.get("call_address")));
            Function function = functionAddress == null ? null :
                currentProgram.getFunctionManager().getFunctionAt(functionAddress);
            if (function == null || callAddress == null) continue;
            int slot = integerValue(row.get("slot_offset"), -1);
            int arity = integerValue(row.get("stack_parameter_count"), -1);
            String receiver = safeText(row.get("receiver_register"));
            if (slot < 0 || arity < 0 || receiver.isBlank()) continue;
            ReceiverSite site = new ReceiverSite(function, callAddress, slot, arity,
                safeText(row.get("machine_return")),
                tokens(row.get("physical_vtable_paths")),
                safeText(row.get("caller_owner")));
            Parameter parameter = receiverParameterOrigin(function, callAddress, receiver);
            if (parameter != null)
                parameters.computeIfAbsent(addr(function.getEntryPoint()) + ":" +
                    parameter.getOrdinal(), ignored -> new ArrayList<>()).add(site);
            Function producer = receiverProducerOrigin(function, callAddress, receiver);
            if (producer != null)
                producers.computeIfAbsent(addr(producer.getEntryPoint()),
                    ignored -> new ArrayList<>()).add(site);
        }

        for (Map.Entry<String, List<ReceiverSite>> entry : parameters.entrySet()) {
            List<ReceiverSite> sites = entry.getValue();
            Function function = sites.get(0).function;
            int ordinal = Integer.parseInt(entry.getKey().substring(
                entry.getKey().lastIndexOf(':') + 1));
            Parameter parameter = explicitParameter(function, ordinal);
            if (parameter == null || !genericPointer(parameter.getDataType()) ||
                    protectedSource(parameter.getSource())) continue;
            Set<Integer> slots = new TreeSet<>();
            for (ReceiverSite site : sites) slots.add(site.slot);
            if (sites.size() < 3 || slots.size() < 2 && sites.size() < 8) continue;
            Set<String> callerOwners = directCallerOwners.getOrDefault(
                addr(function.getEntryPoint()), Set.of());
            List<PolymorphicBase> matches = bases.stream().filter(base ->
                sites.stream().allMatch(site -> compatible(base, site)) &&
                callerOwners.size() >= 2 && callerOwners.stream().allMatch(owner ->
                    ownerCarriesBase(vtables, owner, base.owner))).toList();
            String proof = "";
            boolean comparedWithThis = false;
            if (matches.isEmpty() && "__thiscall".equals(
                    function.getCallingConventionName())) {
                String owner = functionOwner(function);
                comparedWithThis = parameterComparedWithAutoThis(function, parameter);
                if (comparedWithThis) {
                    // A derived object may dispatch slots beyond the recovered base table.
                    // Those extension slots are not contradictory evidence: retain only the
                    // exact subset covered by the named method owner's primary table.
                    matches = bases.stream().filter(base -> base.owner.equals(owner) &&
                        sites.stream().filter(site -> compatible(base, site)).count() >= 8 &&
                        sites.stream().filter(site -> compatible(base, site))
                            .map(site -> site.slot).distinct().count() >= 2).toList();
                }
            }
            List<IncomingPointerType> incoming = incomingPointerTypes.getOrDefault(
                parameterFlowKey(function, parameter), List.of());
            if (matches.isEmpty() && !incoming.isEmpty()) {
                matches = bases.stream().filter(base ->
                    sites.stream().allMatch(site -> compatible(base, site)) &&
                    incoming.stream().allMatch(value -> incomingCarriesBase(
                        value.type, base, vtables))).toList();
                if (matches.size() == 1) {
                    PolymorphicBase base = matches.get(0);
                    proof = "exact interprocedural parameter flow from " +
                        incoming.stream().map(value -> value.functionAddress + ":" +
                            value.storage + "=" + structurePath(value.type))
                            .distinct().sorted().toList() +
                        "; every hash-intact generated partial source is a compatible " +
                        "prefix of the unique physical base " + base.owner;
                }
            }
            if (matches.size() != 1) continue;
            PolymorphicBase base = matches.get(0);
            List<ReceiverSite> acceptedSites = comparedWithThis ? sites.stream()
                .filter(site -> compatible(base, site)).toList() : sites;
            for (ReceiverSite site : acceptedSites)
                polymorphicReceiverCallsites.add(new PolymorphicReceiverCallsite(
                    addr(function.getEntryPoint()), function.getName(true),
                    addr(site.call), site.slot, parameter.getOrdinal(), parameter.getName(),
                    parameter.getVariableStorage().toString(),
                    typeSpec(parameter.getDataType()), parameter.getSource().toString(),
                    base.ownerPath, base.vtablePath));
            rows.add(new Row(false, addr(function.getEntryPoint()), function.getName(true),
                "parameter", parameter.getOrdinal(), parameter.getName(),
                parameter.getVariableStorage().toString(), typeSpec(parameter.getDataType()),
                parameter.getSource().toString(), "pointer:" + base.ownerPath, false,
                "POLYMORPHIC_RECEIVER_FAMILY", "review",
                acceptedSites.size() + " exact unadjusted CALLIND receiver sites across slots " +
                    acceptedSites.stream().map(site -> site.slot).collect(
                        java.util.stream.Collectors.toCollection(TreeSet::new)) +
                    (comparedWithThis ?
                    "; receiver parameter is compared directly with the unadjusted auto-this " +
                    "of named method owner " + base.owner +
                    "; extension slots outside the owner's physical primary table remain raw" :
                    !proof.isBlank() ? "; " + proof :
                    "; independently named caller families=" + callerOwners +
                    "; every caller primary vtable carries base owner " + base.owner) +
                    "; accepted physical base=" + base.vtablePath +
                    "; audit-only parameter family: Ghidra has no recovered inheritance " +
                    "and persistent base-parameter typing can erase derived caller layouts; " +
                    "use exact physical call-site overrides instead"));
        }

        for (Map.Entry<String, List<ReceiverSite>> entry : producers.entrySet()) {
            Address address = currentProgram.getAddressFactory().getAddress(entry.getKey());
            Function function = address == null ? null :
                currentProgram.getFunctionManager().getFunctionAt(address);
            if (function == null || protectedSource(function.getSignatureSource())) continue;
            Parameter returned = function.getReturn();
            if (!genericWordOrPointer(returned.getDataType())) continue;
            List<ReceiverSite> sites = entry.getValue();
            Set<String> callers = new TreeSet<>();
            Set<String> physicalOwners = new TreeSet<>();
            for (ReceiverSite site : sites) {
                callers.add(addr(site.function.getEntryPoint()));
                for (String path : site.vtablePaths) {
                    PolymorphicBase base = bases.stream()
                        .filter(value -> value.vtablePath.equals(path)).findFirst().orElse(null);
                    if (base != null) physicalOwners.add(base.ownerPath);
                }
            }
            if (sites.size() < 16 || callers.size() < 2 || physicalOwners.size() != 1)
                continue;
            String ownerPath = physicalOwners.iterator().next();
            if (!sites.stream().allMatch(site -> sitesPhysicalOwner(site, ownerPath, bases)))
                continue;
            rows.add(new Row(true, addr(function.getEntryPoint()), function.getName(true),
                "return", -1, returned.getName(), returned.getVariableStorage().toString(),
                typeSpec(returned.getDataType()), returned.getSource().toString(),
                "pointer:" + ownerPath, false, "POLYMORPHIC_RETURN_FAMILY", "high",
                sites.size() + " exact direct-return-to-physical-receiver chains across " +
                    callers.size() + " caller functions; unanimous physical owner=" + ownerPath));
        }
    }

    private List<PolymorphicBase> polymorphicBases(List<Map<String, String>> rows) {
        List<PolymorphicBase> result = new ArrayList<>();
        for (Map<String, String> row : rows) {
            if (!"1".equals(row.get("apply")) ||
                    !"1".equals(row.get("primary_vptr_store"))) continue;
            String owner = safeText(row.get("owner"));
            String name = safeText(row.get("proposed_name"));
            int slots = integerValue(row.get("slot_count"), -1);
            DataType ownerType = findNamedType(owner);
            DataType tableType = currentProgram.getDataTypeManager().getDataType(
                "/SubmarineTitans/Recovered/VTables/" + name);
            if (!(ownerType instanceof Structure ownerStructure) ||
                    !(tableType instanceof Structure table) || slots < 1) continue;
            DataTypeComponent vptr = ownerStructure.getComponentAt(0);
            if (vptr == null || vptr.getOffset() != 0 ||
                    !structurePath(vptr.getDataType()).equals(table.getPathName())) continue;
            int related = 0;
            for (Map<String, String> candidate : rows)
                if (integerValue(candidate.get("slot_count"), -1) >= slots &&
                        ownerToken(candidate.get("slot_owners"), owner) &&
                        !safeText(candidate.get("table_address")).equals(
                            safeText(row.get("table_address")))) related++;
            if (related < 2) continue;
            result.add(new PolymorphicBase(owner, ownerStructure.getPathName(),
                table.getPathName(), table, slots, related));
        }
        return result;
    }

    private boolean compatible(PolymorphicBase base, ReceiverSite site) {
        if (site.slot < 0 || site.slot >= base.slots * currentProgram.getDefaultPointerSize())
            return false;
        DataTypeComponent component = base.table.getComponentAt(site.slot);
        DataType value = component == null ? null : unwrapAll(component.getDataType());
        if (component == null || component.getOffset() != site.slot ||
                !(value instanceof FunctionDefinition definition) ||
                !"__thiscall".equals(definition.getCallingConventionName()) ||
                definition.hasVarArgs() || definition.getArguments().length != site.arity + 1)
            return false;
        DataType returned = definition.getReturnType();
        if ("/void".equals(site.machineReturn)) return true;
        if ("/undefined4".equals(site.machineReturn))
            return returned != null && returned.getLength() == currentProgram.getDefaultPointerSize();
        return returned != null && returned.getPathName().equals(site.machineReturn);
    }

    private boolean ownerCarriesBase(List<Map<String, String>> rows, String owner,
            String base) {
        for (Map<String, String> row : rows)
            if (owner.equals(safeText(row.get("owner"))) &&
                    "1".equals(row.get("primary_vptr_store")) &&
                    ownerToken(row.get("slot_owners"), base)) return true;
        return false;
    }

    private boolean ownerToken(String value, String owner) {
        return tokens(value).contains(owner);
    }

    /**
     * Recover the concrete pointer view which reaches one callee parameter without changing
     * either endpoint's persistent type.  The pointer-shape pass already records exact
     * address-stable call edges; resolving both Listing variables here avoids trusting the
     * rendered caller expression or a copied semantic name.
     */
    private Map<String, List<IncomingPointerType>> incomingPointerTypes(
            List<Map<String, String>> rows) {
        Map<String, Map<String, IncomingPointerType>> grouped = new TreeMap<>();
        for (Map<String, String> row : rows) {
            String[] source = safeText(row.get("source_target")).split("\\|", 3);
            String[] destination = safeText(row.get("destination_target")).split("\\|", 3);
            if (source.length != 3 || destination.length != 3 ||
                    !"parameter".equals(source[1]) ||
                    !"parameter".equals(destination[1])) continue;
            Function sourceFunction = functionAt(source[0]);
            Function destinationFunction = functionAt(destination[0]);
            if (sourceFunction == null || destinationFunction == null) continue;
            Parameter sourceParameter = parameterByStorage(sourceFunction, source[2]);
            Parameter destinationParameter = parameterByStorage(destinationFunction,
                destination[2]);
            if (sourceParameter == null || destinationParameter == null ||
                    !(sourceParameter.getDataType() instanceof Pointer)) continue;
            String sourcePath = structurePath(sourceParameter.getDataType());
            if (sourcePath.isBlank()) continue;
            IncomingPointerType value = new IncomingPointerType(
                addr(sourceFunction.getEntryPoint()), sourceFunction.getName(true),
                normalizedStorage(sourceParameter.getVariableStorage().toString()),
                sourceParameter.getDataType());
            String key = parameterFlowKey(destinationFunction, destinationParameter);
            String identity = value.functionAddress + "|" + value.storage + "|" +
                typeSpec(value.type);
            grouped.computeIfAbsent(key, ignored -> new TreeMap<>())
                .putIfAbsent(identity, value);
        }
        Map<String, List<IncomingPointerType>> result = new TreeMap<>();
        for (Map.Entry<String, Map<String, IncomingPointerType>> entry : grouped.entrySet())
            result.put(entry.getKey(), new ArrayList<>(entry.getValue().values()));
        return result;
    }

    private Function functionAt(String value) {
        Address address = currentProgram.getAddressFactory().getAddress(safeText(value));
        return address == null ? null :
            currentProgram.getFunctionManager().getFunctionAt(address);
    }

    private Parameter parameterByStorage(Function function, String storage) {
        String wanted = normalizedStorage(storage);
        for (Parameter parameter : function.getParameters())
            if (normalizedStorage(parameter.getVariableStorage().toString()).equals(wanted))
                return parameter;
        return null;
    }

    private String normalizedStorage(String storage) {
        return safeText(storage).replace(" (auto)", "").replace(" ", "")
            .toUpperCase(Locale.ROOT);
    }

    private String parameterFlowKey(Function function, Parameter parameter) {
        return addr(function.getEntryPoint()) + "|" +
            normalizedStorage(parameter.getVariableStorage().toString());
    }

    /**
     * An incoming named object carries a base only through an independently recovered
     * physical primary-vtable relation.  A generated anonymous source is weaker: it may
     * prove only an address-local view, and only while its stored layout hash is intact,
     * at least two concrete fields agree by exact offset/width, and one polymorphic base
     * is the unique compatible prefix.  No datatype is merged or persistently widened.
     */
    private boolean incomingCarriesBase(DataType incoming, PolymorphicBase base,
            List<Map<String, String>> vtables) {
        DataType value = unwrapAll(incoming);
        if (!(value instanceof Structure structure)) return false;
        if (structure.getPathName().equals(base.ownerPath)) return true;
        if (!anonymousStructure(structure)) {
            String owner = structure.getName();
            return ownerCarriesBase(vtables, owner, base.owner);
        }
        String description = safeText(structure.getDescription());
        if (!scriptOwnedPointerShape(structure) ||
                !storedLayoutHashMatches(structure, description) ||
                concreteFields(structure) < 2 || structure.getLength() < 8)
            return false;
        DataType ownerType = currentProgram.getDataTypeManager()
            .getDataType(base.ownerPath);
        return ownerType instanceof Structure owner && compatiblePrefix(structure, owner);
    }

    private boolean compatiblePrefix(Structure source, Structure target) {
        if (source.getLength() > target.getLength()) return false;
        for (DataTypeComponent component : source.getDefinedComponents()) {
            if (component.getOffset() < 0 ||
                    component.getOffset() + component.getLength() > target.getLength())
                return false;
            DataTypeComponent other = target.getComponentAt(component.getOffset());
            if (other == null || other.getOffset() != component.getOffset() ||
                    other.getLength() != component.getLength() ||
                    !compatibleStorage(component.getDataType(), other.getDataType()))
                return false;
        }
        return true;
    }

    private boolean compatibleStorage(DataType left, DataType right) {
        if (left == null || right == null || left.getLength() != right.getLength())
            return false;
        if (left.isEquivalent(right)) return true;
        DataType leftBase = unwrapAll(left);
        DataType rightBase = unwrapAll(right);
        if (left instanceof Pointer && right instanceof Pointer)
            return genericPointer(left) || genericPointer(right) ||
                structurePath(left).equals(structurePath(right));
        return !(leftBase instanceof Structure) && !(rightBase instanceof Structure) &&
            !(leftBase instanceof FunctionDefinition) &&
            !(rightBase instanceof FunctionDefinition);
    }

    private Set<String> tokens(String value) {
        Set<String> result = new TreeSet<>();
        for (String token : safeText(value).split("\\s*\\|\\s*"))
            if (!token.isBlank()) result.add(token);
        return result;
    }

    private boolean sitesPhysicalOwner(ReceiverSite site, String ownerPath,
            List<PolymorphicBase> bases) {
        if (site.vtablePaths.size() != 1) return false;
        String path = site.vtablePaths.iterator().next();
        return bases.stream().anyMatch(base -> base.ownerPath.equals(ownerPath) &&
            base.vtablePath.equals(path));
    }

    private Map<String, Set<String>> directCallerOwners(List<Map<String, String>> rows) {
        Map<String, Set<String>> result = new TreeMap<>();
        for (Map<String, String> row : rows) {
            String target = safeText(row.get("resolved_address"));
            String owner = qualifiedOwner(row.get("caller"));
            if (!target.isBlank() && !owner.isBlank())
                result.computeIfAbsent(target, ignored -> new TreeSet<>()).add(owner);
        }
        return result;
    }

    private String qualifiedOwner(String qualified) {
        String value = safeText(qualified);
        int split = value.lastIndexOf("::");
        if (split <= 0 || value.startsWith("Library::") ||
                value.contains("SubmarineTitans::Recovered::HiddenThis::")) return "";
        String owner = value.substring(0, split);
        int nested = owner.lastIndexOf("::");
        return nested < 0 ? owner : owner.substring(nested + 2);
    }

    private Parameter receiverParameterOrigin(Function function, Address call,
            String receiverRegister) {
        Origin origin = receiverOrigin(function, call, receiverRegister);
        return origin == null ? null : origin.parameter;
    }

    private Function receiverProducerOrigin(Function function, Address call,
            String receiverRegister) {
        Origin origin = receiverOrigin(function, call, receiverRegister);
        return origin == null ? null : origin.producer;
    }

    /**
     * A generic pointer compared directly with the unadjusted incoming receiver in a named
     * method is an exact common-base relation, not merely matching layout geometry.  This
     * proof is intentionally address-local: it licenses only physical slots already present
     * in the method owner's primary vtable and never persistently retypes the parameter.
     */
    private boolean parameterComparedWithAutoThis(Function function, Parameter parameter) {
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            if (!"CMP".equalsIgnoreCase(instruction.getMnemonicString())) continue;
            String[] operands = splitInstructionOperands(instruction.toString());
            if (operands.length != 2) continue;
            String leftRegister = standaloneRegister(operands[0]);
            String rightRegister = standaloneRegister(operands[1]);
            if (leftRegister.isBlank() || rightRegister.isBlank()) continue;
            Origin left = receiverOrigin(function, instruction.getAddress(), leftRegister);
            Origin right = receiverOrigin(function, instruction.getAddress(), rightRegister);
            if (left == null || right == null) continue;
            if (left.parameter == parameter && right.autoThis ||
                    right.parameter == parameter && left.autoThis) return true;
        }
        return false;
    }

    private Origin receiverOrigin(Function function, Address call, String receiverRegister) {
        String wanted = canonicalRegister(receiverRegister);
        if (wanted.isBlank()) return null;
        Map<Address, List<Address>> predecessors = predecessors(function);
        List<Address> initial = predecessors.getOrDefault(call, List.of());
        if (initial.isEmpty()) return null;

        List<RegisterTrace> work = new ArrayList<>();
        for (Address address : initial) work.add(new RegisterTrace(address, wanted));
        Set<RegisterTrace> visited = new HashSet<>();
        Set<Origin> origins = new HashSet<>();
        boolean invalid = false;
        for (int cursor = 0; cursor < work.size() && work.size() <= 8192; cursor++) {
            RegisterTrace state = work.get(cursor);
            if (!visited.add(state)) continue;
            Instruction instruction = currentProgram.getListing()
                .getInstructionAt(state.address);
            if (instruction == null || !function.getBody().contains(state.address)) {
                invalid = true;
                continue;
            }
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            String[] operands = splitInstructionOperands(instruction.toString());
            if ("CALL".equals(mnemonic)) {
                if ("EAX".equals(state.register)) {
                    Function producer = directCalledFunction(instruction);
                    if (producer == null) invalid = true;
                    else origins.add(new Origin(null, producer, false));
                    continue;
                }
                if (Set.of("EAX", "ECX", "EDX").contains(state.register)) {
                    invalid = true;
                    continue;
                }
            }
            else if (operands.length > 0 && "MOV".equals(mnemonic) &&
                    state.register.equals(canonicalRegister(operands[0]))) {
                if (operands.length < 2) {
                    invalid = true;
                    continue;
                }
                String source = canonicalRegister(operands[1]);
                if (!source.isBlank()) {
                    enqueuePredecessors(predecessors, state.address, source, work);
                    continue;
                }
                Long stack = stackParameterOffset(instruction, operands[1]);
                Parameter parameter = stack == null ? null : parameterAt(function, stack);
                if (parameter == null) invalid = true;
                else origins.add(new Origin(parameter, null, false));
                continue;
            }
            else if (definesRegister(instruction, state.register)) {
                invalid = true;
                continue;
            }

            List<Address> before = predecessors.getOrDefault(state.address, List.of());
            if (before.isEmpty()) {
                if ("ECX".equals(state.register) && "__thiscall".equals(
                        function.getCallingConventionName()))
                    origins.add(new Origin(null, null, true));
                else invalid = true;
            }
            else for (Address address : before)
                work.add(new RegisterTrace(address, state.register));
        }
        if (work.size() > 8192 || invalid || origins.size() != 1) return null;
        return origins.iterator().next();
    }

    /**
     * Build an instruction-level CFG once per function.  Receiver provenance is
     * a reaching-definition question: stopping at the first conditional jump
     * loses the very common VC6 shape `MOV ECX,obj; CMP ...; Jcc; CALL [vptr]`.
     * Every predecessor must converge on the same stack parameter or trusted
     * producer; loops without a competing definition are harmless.
     */
    private Map<Address, List<Address>> predecessors(Function function) {
        return predecessorCache.computeIfAbsent(function.getEntryPoint(), ignored -> {
            Map<Address, List<Address>> result = new HashMap<>();
            InstructionIterator instructions = currentProgram.getListing()
                .getInstructions(function.getBody(), true);
            while (instructions.hasNext()) {
                Instruction instruction = instructions.next();
                Address source = instruction.getAddress();
                Address fallthrough = instruction.getFallThrough();
                if (fallthrough != null && function.getBody().contains(fallthrough) &&
                        currentProgram.getListing().getInstructionAt(fallthrough) != null)
                    result.computeIfAbsent(fallthrough, key -> new ArrayList<>())
                        .add(source);
                if (instruction.getFlowType().isJump())
                    for (Address flow : instruction.getFlows())
                        if (function.getBody().contains(flow) &&
                                currentProgram.getListing().getInstructionAt(flow) != null)
                            result.computeIfAbsent(flow, key -> new ArrayList<>()).add(source);
            }
            for (List<Address> values : result.values())
                values.sort(Address::compareTo);
            return result;
        });
    }

    private void enqueuePredecessors(Map<Address, List<Address>> predecessors,
            Address address, String register, List<RegisterTrace> work) {
        List<Address> before = predecessors.getOrDefault(address, List.of());
        if (before.isEmpty()) return;
        for (Address predecessor : before)
            work.add(new RegisterTrace(predecessor, register));
    }

    private boolean definesRegister(Instruction instruction, String register) {
        for (Object output : instruction.getResultObjects())
            if (output instanceof Register value && register.equals(canonicalRegister(
                    value.getName()))) return true;
        return false;
    }

    private Long stackParameterOffset(Instruction instruction, String operand) {
        for (Reference reference : instruction.getReferencesFrom())
            if (reference instanceof StackReference stack &&
                    stack.getStackOffset() >= 0) return (long)stack.getStackOffset();
        Matcher matcher = Pattern.compile(".*\\[EBP\\+(0X[0-9A-F]+|[0-9]+)\\].*")
            .matcher(operand.toUpperCase(Locale.ROOT).replace(" ", ""));
        if (!matcher.matches()) return null;
        return (long)integerValue(matcher.group(1), -1) -
            currentProgram.getDefaultPointerSize();
    }

    private Parameter parameterAt(Function function, long stackOffset) {
        for (Parameter parameter : function.getParameters())
            if (!parameter.isAutoParameter() && parameter.isStackVariable() &&
                    parameter.getStackOffset() == stackOffset) return parameter;
        return null;
    }

    private Parameter explicitParameter(Function function, int ordinal) {
        for (Parameter parameter : function.getParameters())
            if (!parameter.isAutoParameter() && parameter.getOrdinal() == ordinal)
                return parameter;
        return null;
    }

    private Function directCalledFunction(Instruction instruction) {
        for (Address flow : instruction.getFlows()) {
            Function function = currentProgram.getFunctionManager().getFunctionAt(flow);
            if (function != null) return resolveThunk(function);
        }
        return null;
    }

    private String canonicalRegister(String value) {
        String register = safeText(value).trim().toUpperCase(Locale.ROOT);
        return switch (register) {
            case "AL", "AH", "AX", "EAX" -> "EAX";
            case "BL", "BH", "BX", "EBX" -> "EBX";
            case "CL", "CH", "CX", "ECX" -> "ECX";
            case "DL", "DH", "DX", "EDX" -> "EDX";
            case "SI", "ESI" -> "ESI";
            case "DI", "EDI" -> "EDI";
            case "BP", "EBP" -> "EBP";
            case "SP", "ESP" -> "ESP";
            default -> register.matches("E[A-Z]{2}") ? register : "";
        };
    }

    private String standaloneRegister(String operand) {
        String value = safeText(operand).trim().toUpperCase(Locale.ROOT);
        String register = canonicalRegister(value);
        return register.isBlank() || !value.matches("[A-Z]{2,3}") ? "" : register;
    }

    private String[] splitInstructionOperands(String instruction) {
        int space = instruction.indexOf(' ');
        return space < 0 || space == instruction.length() - 1 ? new String[0] :
            instruction.substring(space + 1).split("\\s*,\\s*");
    }

    private int integerValue(String value, int fallback) {
        String text = safeText(value).trim().toUpperCase(Locale.ROOT);
        try {
            return text.startsWith("0X") ? Integer.parseUnsignedInt(text.substring(2), 16) :
                Integer.parseInt(text);
        }
        catch (NumberFormatException ignored) { return fallback; }
    }

    private DataType unwrapAll(DataType type) {
        Set<DataType> seen = new HashSet<>();
        while (type != null && seen.add(type)) {
            if (type instanceof Pointer pointer) type = pointer.getDataType();
            else if (type instanceof TypeDef alias) type = alias.getBaseDataType();
            else break;
        }
        return type;
    }

    private String structurePath(DataType type) {
        DataType value = unwrapAll(type);
        return value instanceof Structure structure ? structure.getPathName() : "";
    }

    private DataType findNamedType(String name) {
        List<DataType> matches = new ArrayList<>();
        currentProgram.getDataTypeManager().findDataTypes(name, matches);
        matches.sort(Comparator.comparing(DataType::getPathName));
        for (DataType match : matches)
            if (match.getPathName().equals("/" + name)) return match;
        return matches.stream().filter(value -> value instanceof Structure &&
            !value.getPathName().contains("/VTables/")).findFirst().orElse(null);
    }

    private boolean genericPointer(DataType type) {
        if (!(type instanceof Pointer pointer)) return false;
        DataType pointee = unwrapAll(pointer.getDataType());
        if (pointee == null || Undefined.isUndefined(pointee)) return true;
        String name = pointee.getName().toLowerCase(Locale.ROOT);
        return name.equals("void") || name.matches("u?int(?:1|2|4|8)?|dword|word|byte|char|short|long");
    }

    private boolean genericWordOrPointer(DataType type) {
        if (genericPointer(type) || Undefined.isUndefined(unwrapAll(type))) return true;
        String name = type == null ? "" : type.getName().toLowerCase(Locale.ROOT);
        return name.matches("u?int(?:4)?|dword|long");
    }

    private boolean protectedSource(SourceType source) {
        return source == SourceType.USER_DEFINED || source == SourceType.IMPORTED;
    }

    /**
     * Propagate a named pointer return into stack locals that still carry a script-owned
     * anonymous pointer shape.  This is deliberately an instruction-level pass: the
     * decompiler may insert a cast precisely because the stale local type is the thing we
     * are trying to repair.
     */
    private void addReturnedPointerConsumers(List<Row> rows) throws Exception {
        Map<Address, String> producers = new HashMap<>();

        FunctionIterator typed = currentProgram.getFunctionManager().getFunctions(true);
        while (typed.hasNext()) {
            Function function = typed.next();
            DataType type = function.getReturnType();
            if (!(type instanceof Pointer pointer) || pointer.getDataType() == null) continue;
            if (!(pointer.getDataType() instanceof Structure)) continue;
            String base = pointer.getDataType().getPathName();
            if (base.startsWith(POINTER_SHAPES) || base.startsWith(CLASS_POINTEES) ||
                    base.equals("/void") || base.startsWith("/undefined")) continue;
            producers.put(function.getEntryPoint(), typeSpec(type));
        }

        Map<String, Row> unique = new LinkedHashMap<>();
        FunctionIterator callers = currentProgram.getFunctionManager().getFunctions(true);
        while (callers.hasNext()) {
            monitor.checkCancelled();
            Function caller = callers.next();
            for (Instruction instruction : currentProgram.getListing().getInstructions(
                    caller.getBody(), true)) {
                if (!instruction.getFlowType().isCall()) continue;
                String proposed = calledType(instruction, producers);
                if (proposed == null) continue;
                traceReturnedPointer(caller, instruction, proposed, unique);
            }
        }
        rows.addAll(unique.values());
    }

    private String calledType(Instruction instruction, Map<Address, String> producers) {
        for (Reference reference : instruction.getReferencesFrom()) {
            if (!reference.getReferenceType().isCall()) continue;
            String type = producers.get(reference.getToAddress());
            if (type != null) return type;
            Function target = currentProgram.getFunctionManager().getFunctionAt(reference.getToAddress());
            if (target != null) {
                type = producers.get(target.getEntryPoint());
                if (type != null) return type;
            }
        }
        return null;
    }

    private void traceReturnedPointer(Function caller, Instruction call, String proposed,
            Map<String, Row> rows) {
        Map<String, Boolean> carriers = new HashMap<>();
        carriers.put("EAX", Boolean.TRUE);
        Instruction instruction = call.getNext();
        for (int distance = 0; instruction != null && distance < 10 &&
                caller.getBody().contains(instruction.getAddress()); distance++,
                instruction = instruction.getNext()) {
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            if (instruction.getFlowType().isCall() || mnemonic.startsWith("RET") ||
                    instruction.getFlowType().isJump()) break;

            Register destination = instruction.getRegister(0);
            Register source = instruction.getRegister(1);
            boolean sourceCarries = source != null && carriers.containsKey(source.getName().toUpperCase(Locale.ROOT));

            if ("MOV".equals(mnemonic) && sourceCarries) {
                if (destination != null) {
                    carriers.put(destination.getName().toUpperCase(Locale.ROOT), Boolean.TRUE);
                }
                else {
                    for (Reference reference : instruction.getReferencesFrom()) {
                        if (!(reference instanceof StackReference stack) ||
                                reference.getOperandIndex() != 0) continue;
                        Variable local = localAt(caller, stack.getStackOffset());
                        if (local != null) addReturnedPointerConsumer(caller, local, proposed, rows);
                    }
                }
            }
            else if (destination != null && writesDestination(mnemonic)) {
                carriers.remove(destination.getName().toUpperCase(Locale.ROOT));
            }
            if (carriers.isEmpty()) break;
        }
    }

    private boolean writesDestination(String mnemonic) {
        return !mnemonic.startsWith("CMP") && !mnemonic.startsWith("TEST") &&
            !mnemonic.startsWith("PUSH");
    }

    private Variable localAt(Function function, int stackOffset) {
        for (Variable local : function.getLocalVariables()) {
            try {
                if (local.isStackVariable() && local.getStackOffset() == stackOffset) return local;
            }
            catch (RuntimeException ignored) { }
        }
        return null;
    }

    private void addReturnedPointerConsumer(Function function, Variable local, String proposed,
            Map<String, Row> rows) {
        DataType currentType = local.getDataType();
        if (!(currentType instanceof Pointer pointer) || pointer.getDataType() == null) return;
        String base = pointer.getDataType().getPathName();
        String comment = local.getComment();
        boolean anonymous = base.startsWith(POINTER_SHAPES) || base.startsWith(CLASS_POINTEES);
        boolean scriptOwned = comment != null && (comment.contains("[STPointerShapeApplier]") ||
            comment.contains("[STTypeFamilyApplier]") ||
            comment.contains("[STGlobalDataApplier]"));
        if (!anonymous || !scriptOwned || local.getSource() == SourceType.USER_DEFINED ||
                local.getSource() == SourceType.IMPORTED || typeSpec(currentType).equals(proposed)) return;

        int ordinal = 0;
        for (Variable candidate : function.getLocalVariables()) {
            if (candidate == local) break;
            ordinal++;
        }
        Row row = new Row(true, addr(function.getEntryPoint()), function.getName(true), "local",
            ordinal, local.getName(), local.getVariableStorage().toString(), typeSpec(currentType),
            local.getSource().toString(), proposed, false, "RETURN_TO_LOCAL_FAMILY", "high",
            "direct call return copied through registers into this script-owned anonymous stack local");
        rows.put(addr(function.getEntryPoint()) + "|" + local.getVariableStorage(), row);
    }

    private void writeGroups(Path path, List<GroupRow> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\tfamily_id\tcanonical_type\tmember_type\tlength\tnamed_fields\tevidence\n");
            for (GroupRow row : rows) out.write((row.apply ? "1" : "0") + "\t" + row.id +
                "\t" + row.canonical + "\t" + row.member + "\t" + row.length + "\t" +
                row.fields + "\t" + row.evidence + "\n");
        }
    }

    private void writeNamedMatches(Path path, List<NamedMatchRow> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\tanonymous_type\tnamed_type\tmatch_kind\tlength\t" +
                "observed_fields\tconcrete_fields\tsemantic_matches\tconfidence\tevidence\n");
            for (NamedMatchRow row : rows) out.write((row.apply ? "1" : "0") + "\t" +
                row.anonymousType + "\t" + row.namedType + "\t" + row.matchKind + "\t" +
                row.length + "\t" + row.observedFields + "\t" + row.concreteFields + "\t" +
                row.semanticMatches + "\t" + row.confidence + "\t" +
                clean(row.evidence) + "\n");
        }
    }

    private void writeAnonymousAudit(Path path, List<AnonAuditRow> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("anonymous_type\tcategory\tlength\tdefined_components\tconcrete_fields\t" +
                "meaningful_fields\tfunction_targets\tglobal_targets\tfield_targets\t" +
                "exact_named_candidates\tcompatible_named_candidates\tautomatic_named_type\t" +
                "match_status\tusage_status\n");
            for (AnonAuditRow row : rows) out.write(row.anonymousType + "\t" + row.category +
                "\t" + row.length + "\t" + row.definedComponents + "\t" +
                row.concreteFields + "\t" + row.meaningfulFields + "\t" +
                row.functionTargets + "\t" + row.globalTargets + "\t" +
                row.fieldTargets + "\t" +
                clean(row.exactNamedCandidates) + "\t" +
                clean(row.compatibleNamedCandidates) + "\t" +
                clean(row.automaticNamedType) + "\t" + row.matchStatus + "\t" +
                row.usageStatus + "\n");
        }
    }

    private void writeContextualPromotions(Path path,
            List<ContextualPromotion> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("source_type\ttarget_type\towner\tanchor_function\tlength\t" +
                "concrete_fields\tfunction_targets\tevidence\n");
            for (ContextualPromotion row : rows)
                out.write(row.sourceType + "\t" + row.targetType + "\t" +
                    row.owner + "\t" + row.anchorFunction + "\t" + row.length +
                    "\t" + row.concreteFields + "\t" + row.functionTargets +
                    "\t" + clean(row.evidence) + "\n");
        }
    }

    private void writeRows(Path path, List<Row> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\tfunction_address\texpected_function\ttarget_kind\ttarget_ordinal\t" +
                "expected_name\texpected_storage\texpected_type\texpected_source\tproposed_type\t" +
                "allow_manual_override\t" +
                "family_id\tconfidence\tevidence\n");
            for (Row row : rows) out.write((row.apply ? "1" : "0") + "\t" + row.functionAddress +
                "\t" + clean(row.function) + "\t" + row.targetKind + "\t" + row.ordinal +
                "\t" + clean(row.name) + "\t" + clean(row.storage) + "\t" + row.expectedType +
                "\t" + row.source + "\t" + row.proposedType + "\t" +
                (row.allowManualOverride ? "1" : "0") + "\t" + row.family + "\t" +
                row.confidence + "\t" + clean(row.evidence) + "\n");
        }
    }

    private void writePolymorphicReceiverCallsites(Path path) throws Exception {
        polymorphicReceiverCallsites.sort(Comparator
            .comparing((PolymorphicReceiverCallsite row) -> row.functionAddress)
            .thenComparing(row -> row.callAddress));
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("function_address\texpected_function\tcall_address\tslot_offset\t" +
                "parameter_ordinal\texpected_parameter_name\texpected_parameter_storage\t" +
                "expected_parameter_type\texpected_parameter_source\towner_type\t" +
                "physical_vtable\n");
            for (PolymorphicReceiverCallsite row : polymorphicReceiverCallsites)
                out.write(row.functionAddress + "\t" + clean(row.function) + "\t" +
                    row.callAddress + "\t" + row.slot + "\t" + row.parameterOrdinal +
                    "\t" + clean(row.parameterName) + "\t" + clean(row.parameterStorage) +
                    "\t" + row.parameterType + "\t" + row.parameterSource + "\t" +
                    row.ownerType + "\t" + row.physicalVtable + "\n");
        }
    }

    private void writeSummary(Path path, List<GroupRow> groups,
            List<NamedMatchRow> namedMatches, List<AnonAuditRow> anonymousAudit,
            List<ContextualPromotion> contextualPromotions, List<Row> rows)
            throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("ST cross-function type families\n\n");
            out.write("Anonymous types audited: " + anonymousAudit.size() +
                "\nExact family members: " + groups.size() + "\nTargets: " + rows.size() +
                "\nNamed anonymous matches: " + namedMatches.size() +
                "\nAutomatic named matches: " +
                namedMatches.stream().filter(row -> row.apply).count() +
                "\nContextual generated records: " + contextualPromotions.size() +
                "\nAutomatic targets: " + rows.stream().filter(row -> row.apply).count() + "\n" +
                "Note: anonymous-to-anonymous geometry matches are review-only unless one " +
                "generated HiddenThis member uniquely owns a multi-function receiver namespace. " +
                "Generated field_XXXX names are not semantic evidence. Exact named layouts are " +
                "automatic only for evidence-qualified semantic anchors; [ST_VIEW_ONLY] types " +
                "are never anchors. Anonymous pointer shapes may also consolidate when exact " +
                "direct-call dataflow links the same pointer across their boundaries, every " +
                "complete layout agrees, all uses have one owner, and no global/field aliases " +
                "exist.\n");
        }
    }
    private String typeSpec(DataType type) {
        if (type instanceof Pointer pointer && pointer.getDataType() != null)
            return "pointer:" + typeSpec(pointer.getDataType());
        return type == null ? "" : type.getPathName();
    }
    private String addr(Address address) { return address.toString().toUpperCase(Locale.ROOT); }
    private File outputDirectory() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless()) throw new IllegalArgumentException("Recovery directory required");
        return askDirectory("Select recovery output directory", "Select");
    }
    private Path programDirectory(File selected) {
        Path root = selected.toPath().toAbsolutePath().normalize();
        return root.getFileName() != null && root.getFileName().toString().equals(currentProgram.getName()) ?
            root : root.resolve(currentProgram.getName());
    }
    private static String clean(String value) { return value == null ? "" : value.replace('\t',' ').replace('\r',' ').replace('\n',' '); }
    private record GroupRow(boolean apply, String id, String canonical, String member,
        int length, int fields, String evidence) {}
    private record NamedMatchRow(boolean apply, String anonymousType, String namedType,
        String matchKind, int length, int observedFields, int concreteFields,
        int semanticMatches, String confidence, String evidence) {}
    private static class Usage { int functions, globals, fields; }
    private static class SourceFamilyEvidence {
        final Set<String> basenames = new TreeSet<>();
        final Set<String> namedFunctions = new TreeSet<>();
        final Set<String> targets = new TreeSet<>();
        final Set<String> anchorAddresses = new TreeSet<>();
        int exactFlows;
    }
    private record AnonAuditRow(String anonymousType, String category, int length,
        int definedComponents, int concreteFields, int meaningfulFields,
        int functionTargets, int globalTargets, int fieldTargets,
        String exactNamedCandidates, String compatibleNamedCandidates,
        String automaticNamedType, String matchStatus, String usageStatus) {}
    private record ContextualPromotion(String sourceType, String targetType,
        String owner, String anchorFunction, int length, int concreteFields,
        int functionTargets, String evidence) {}
    private record PolymorphicBase(String owner, String ownerPath, String vtablePath,
        Structure table, int slots, int relatedTables) {}
    private record ReceiverSite(Function function, Address call, int slot, int arity,
        String machineReturn, Set<String> vtablePaths, String callerOwner) {}
    private record PolymorphicReceiverCallsite(String functionAddress, String function,
        String callAddress, int slot, int parameterOrdinal, String parameterName,
        String parameterStorage, String parameterType, String parameterSource,
        String ownerType, String physicalVtable) {}
    private record Origin(Parameter parameter, Function producer, boolean autoThis) {}
    private record IncomingPointerType(String functionAddress, String function,
        String storage, DataType type) {}
    private record RegisterTrace(Address address, String register) {}
    private record Row(boolean apply, String functionAddress, String function, String targetKind,
        int ordinal, String name, String storage, String expectedType, String source,
        String proposedType, boolean allowManualOverride, String family, String confidence,
        String evidence) {}
}
