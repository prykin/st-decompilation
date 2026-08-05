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
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.Undefined;
import ghidra.program.model.lang.Register;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Instruction;
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
        addGetObjPtrFamily(rows);
        addReturnedPointerConsumers(rows);
        rows.sort(Comparator.comparing((Row r) -> r.functionAddress)
            .thenComparing(r -> r.targetKind).thenComparingInt(r -> r.ordinal));
        writeGroups(directory.resolve("type_family_groups.tsv"), groupRows);
        writeNamedMatches(directory.resolve("anon_named_type_matches.tsv"), namedMatches);
        writeAnonymousAudit(directory.resolve("anonymous_type_audit.tsv"), anonymousAudit);
        writeContextualPromotions(directory.resolve(
            "contextual_record_promotions.tsv"), contextualPromotions);
        writeRows(directory.resolve("type_family_proposals.tsv"), rows);
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

    private void addGetObjPtrFamily(List<Row> rows) {
        DataType base = currentProgram.getDataTypeManager().getDataType("/STGameObjC");
        if (!(base instanceof Structure structure) || !semanticAnchor(structure)) return;
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            Function function = functions.next();
            if (!"GetObjPtr".equals(function.getName()) ||
                    !function.getName(true).startsWith("STAllPlayersC::")) continue;
            int calls = familyCallers(function);
            if (calls < 16) continue;
            Parameter returned = function.getReturn();
            String current = typeSpec(returned.getDataType());
            boolean generic = current.equals("/uint") || current.equals("/int") ||
                current.equals("/undefined4") || current.equals("/undefined");
            boolean apply = generic;
            rows.add(new Row(apply, addr(function.getEntryPoint()), function.getName(true),
                "return", -1,
                returned.getName(), returned.getVariableStorage().toString(), current,
                returned.getSource().toString(), "pointer:/STGameObjC", true,
                "STGAMEOBJ_BASE_FAMILY",
                "high", "high-fanout STAllPlayersC::GetObjPtr family has " +
                    calls + " direct/thunk-mediated callers and returns the " +
                    "semantic STGameObjC polymorphic base"));
        }
    }

    private int familyCallers(Function function) {
        Function target = function;
        for (int depth = 0; depth < 32 && target.isThunk(); depth++) {
            Function next = target.getThunkedFunction(false);
            if (next == null || next.equals(target)) break;
            target = next;
        }
        int result = 0;
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            Function entry = functions.next();
            Function resolved = entry;
            for (int depth = 0; depth < 32 && resolved.isThunk(); depth++) {
                Function next = resolved.getThunkedFunction(false);
                if (next == null || next.equals(resolved)) break;
                resolved = next;
            }
            if (!resolved.equals(target)) continue;
            ghidra.program.model.symbol.ReferenceIterator references =
                currentProgram.getReferenceManager().getReferencesTo(entry.getEntryPoint());
            while (references.hasNext())
                if (references.next().getReferenceType().isCall()) result++;
        }
        return result;
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
    private record Row(boolean apply, String functionAddress, String function, String targetKind,
        int ordinal, String name, String storage, String expectedType, String source,
        String proposedType, boolean allowManualOverride, String family, String confidence,
        String evidence) {}
}
