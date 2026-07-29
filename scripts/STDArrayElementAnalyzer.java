// Recover per-field element records for the otherwise generic DArrayTy container.
// Read-only: emits DArray container, field, and local proposals plus diagnostics.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Analyze DArray Element Types

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
import ghidra.program.model.listing.Parameter;

public class STDArrayElementAnalyzer extends GhidraScript {
    private static final int DECOMPILE_TIMEOUT = 30;
    private static final int MAX_ELEMENT_SIZE = 0x4000;
    private static final long DARRAY_CREATE_ADDRESS = 0x006AE290L;
    private static final String DARRAY_PATH = "/SubmarineTitans/Recovered/DArrayTy";
    private static final String ELEMENT_ROOT =
        "/SubmarineTitans/Recovered/DArrayElements/";
    private static final String DESCRIPTOR_ROOT =
        "/SubmarineTitans/Recovered/DArraySpecializations/";
    private static final String MARKER = "[STDArrayElementApplier]";
    private static final String CLASS_MARKER = "[STClassLayoutApplier]";
    private static final String HASH_MARKER = "; generated_layout_sha256=";

    private static final Pattern FIELD = Pattern.compile(
        "(?:field|value)_(?:0[xX])?([0-9A-Fa-f]+)");
    private static final Pattern OWNER_FIELD = Pattern.compile(
        "([A-Za-z_$][A-Za-z0-9_$]*)\\s*->\\s*" +
        "((?:field|value)_(?:0[xX])?[0-9A-Fa-f]+)");
    private static final Pattern SIMPLE_NAME = Pattern.compile(
        "[A-Za-z_$][A-Za-z0-9_$]*");
    private static final Pattern POINTER_DECLARATION = Pattern.compile(
        "(?m)^\\s*([A-Za-z_$][A-Za-z0-9_$: ]*)\\s*(\\*+)\\s*" +
        "([A-Za-z_$][A-Za-z0-9_$]*)\\s*;");
    private static final Pattern ASSIGNMENT = Pattern.compile(
        "(?m)([A-Za-z_$][A-Za-z0-9_$]*)\\s*=\\s*([^;]{1,700});");
    private static final Pattern RAW_ACCESS = Pattern.compile(
        "\\*\\s*\\(\\s*([^()\\r\\n]{1,80}?)\\s*\\*\\s*\\)\\s*" +
        "\\(\\s*(?:\\(\\s*[^()\\r\\n]{1,40}\\s*\\)\\s*)?" +
        "([A-Za-z_$][A-Za-z0-9_$]*)\\s*\\+\\s*" +
        "(0[xX][0-9A-Fa-f]+|[0-9]+)\\s*\\)");
    private static final Pattern CONSTANT_INDEX = Pattern.compile(
        "(?<![A-Za-z0-9_$:])([A-Za-z_$][A-Za-z0-9_$]*)\\s*" +
        "\\[\\s*(0[xX][0-9A-Fa-f]+|[0-9]+)\\s*\\]");

    private final Map<Key, Evidence> arrays = new TreeMap<>();
    private final Map<Address, Decompiled> decompiled = new LinkedHashMap<>();
    private final Map<Address, List<RenderedCall>> renderedCallCache =
        new HashMap<>();
    private final Map<Address, Map<String, Function>> callTargetCache =
        new HashMap<>();
    private final Map<String, LocalCandidate> localCandidates =
        new LinkedHashMap<>();
    private final List<Failure> failures = new ArrayList<>();
    private DataTypeManager dataTypes;
    private DecompInterface decompiler;
    private int functionsSeen;
    private int creationSites;
    private int elementAliases;
    private int fieldAccesses;

    @Override
    protected void run() throws Exception {
        // Read-only script: do not retain GhidraScript's implicit transaction.
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
        if (!(dataTypes.getDataType(DARRAY_PATH) instanceof Structure))
            throw new IllegalStateException("Missing recovered " + DARRAY_PATH);

        decompiler = new DecompInterface();
        decompiler.toggleCCode(true);
        decompiler.toggleSyntaxTree(true);
        if (!decompiler.openProgram(currentProgram))
            throw new IllegalStateException("Decompiler could not open the current program");
        try {
            decompileCreationFunctions();
            collectCreationEvidence();
            seedOwnedSpecializations();
            decompileCandidateOwnerFunctions();
            collectSourceRecordEvidence();
            collectElementEvidence();
        }
        finally {
            decompiler.dispose();
        }

        Analysis analysis = proposals();
        writeProposals(directory.resolve("darray_element_proposals.tsv"), analysis.rows);
        writeFields(directory.resolve("darray_element_field_proposals.tsv"),
            analysis.fields);
        writeLocals(directory.resolve("darray_element_local_proposals.tsv"),
            analysis.locals);
        writeFailures(directory.resolve("darray_element_decompile_failures.tsv"));
        writeSummary(directory.resolve("darray_element_summary.txt"), analysis);
        println("DArray-element analysis complete: " +
            directory.toAbsolutePath().normalize());
        println("Functions=" + functionsSeen + ", creation_sites=" + creationSites +
            ", containers=" + analysis.rows.size() + ", apply=" +
            analysis.rows.stream().filter(row -> row.apply).count() +
            ", element_aliases=" + elementAliases + ", field_accesses=" +
            fieldAccesses + ", inline_source_records=" +
            arrays.values().stream().filter(value ->
                value.sourceBases.size() == 1).count() +
            ", semantic_fields=" + analysis.fields.stream().filter(row ->
                !row.name.startsWith("field_")).count() +
            ", local_type_apply=" + analysis.locals.stream()
                .filter(row -> row.apply).count() +
            ", local_assignment_sites=" + analysis.locals.stream()
                .filter(row -> !row.assignmentAddress.isBlank()).count() +
            ", local_type_splits=" + analysis.locals.stream()
                .filter(row -> row.apply && row.splitRequired).count() +
            ", failures=" + failures.size());
    }

    private void decompileCreationFunctions() throws Exception {
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            monitor.checkCancelled();
            Function function = functions.next();
            if (function.isExternal() || function.isThunk() || library(function)) continue;
            Structure owner = ownerStructure(function);
            if (owner == null || !callsDArrayCreate(function)) continue;
            decompile(function, owner);
        }
    }

    private void decompileCandidateOwnerFunctions() throws Exception {
        Set<String> owners = new HashSet<>();
        for (Key key : arrays.keySet()) owners.add(key.ownerPath);
        if (owners.isEmpty()) return;
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            monitor.checkCancelled();
            Function function = functions.next();
            if (function.isExternal() || function.isThunk() || library(function) ||
                    decompiled.containsKey(function.getEntryPoint())) continue;
            Structure owner = ownerStructure(function);
            if (owner == null || !owners.contains(owner.getPathName())) continue;
            decompile(function, owner);
        }
    }

    private void decompile(Function function, Structure owner) throws Exception {
        functionsSeen++;
        DecompileResults result =
            decompiler.decompileFunction(function, DECOMPILE_TIMEOUT, monitor);
        if (!result.decompileCompleted() || result.getDecompiledFunction() == null) {
            failures.add(new Failure(function, result == null ? "no result" :
                result.getErrorMessage()));
            return;
        }
        decompiled.put(function.getEntryPoint(),
            new Decompiled(function, owner, result.getDecompiledFunction().getC(),
                result));
    }

    private boolean callsDArrayCreate(Function function) throws Exception {
        for (Function called : function.getCalledFunctions(monitor)) {
            Set<Address> seen = new HashSet<>();
            while (called != null && called.isThunk() &&
                    seen.add(called.getEntryPoint())) {
                Function next = called.getThunkedFunction(false);
                if (next == null || next.equals(called)) break;
                called = next;
            }
            if (called != null &&
                    called.getEntryPoint().getOffset() == DARRAY_CREATE_ADDRESS)
                return true;
        }
        return false;
    }

    private void collectCreationEvidence() throws Exception {
        for (Decompiled unit : decompiled.values()) {
            monitor.checkCancelled();
            if (unit.owner == null || unit.c.indexOf("DArrayCreate") < 0) continue;
            Set<String> ownerAliases = ownerAliases(unit.owner, unit.c);
            int cursor = 0;
            while ((cursor = unit.c.indexOf("DArrayCreate", cursor)) >= 0) {
                int open = unit.c.indexOf('(', cursor);
                int close = matching(unit.c, open, '(', ')');
                if (open < 0 || close < 0) break;
                List<String> arguments =
                    splitArguments(unit.c.substring(open + 1, close));
                int elementSize = arguments.size() > 2 ?
                    constant(arguments.get(2)) : -1;
                String assigned = assignmentLeft(unit.c, cursor);
                FieldTarget target = fieldTarget(assigned, ownerAliases);
                if (target == null && SIMPLE_NAME.matcher(assigned).matches())
                    target = assignedField(unit.c, close + 1, assigned, ownerAliases);
                if (target != null && elementSize > 0 &&
                        elementSize <= MAX_ELEMENT_SIZE) {
                    DataTypeComponent component =
                        unit.owner.getComponentAt((int)target.offset);
                    if (component != null && component.getOffset() == target.offset &&
                            darrayPointer(component.getDataType())) {
                        Key key = new Key(unit.owner.getPathName(), target.offset);
                        Evidence evidence = arrays.computeIfAbsent(key,
                            ignored -> new Evidence(key, component.getFieldName(),
                                typeSpecification(component.getDataType())));
                        evidence.elementSizes.merge(elementSize, 1, Integer::sum);
                        evidence.creationSites.add(addr(unit.function.getEntryPoint()) +
                            " DArrayCreate elementSize=" + hex(elementSize));
                        evidence.creationFunctions.add(unit.function.getEntryPoint());
                        creationSites++;
                    }
                }
                cursor = close + 1;
            }
        }
    }

    private void seedOwnedSpecializations() {
        for (Evidence evidence : arrays.values()) {
            Structure owner = structure(evidence.key.ownerPath);
            if (owner == null) continue;
            DataTypeComponent field = owner.getComponentAt((int)evidence.key.offset);
            if (field == null || field.getOffset() != evidence.key.offset) continue;
            Structure descriptor = pointedStructure(field.getDataType());
            if (descriptor == null || !owned(descriptor) ||
                    !descriptor.getPathName().startsWith(DESCRIPTOR_ROOT)) continue;
            DataTypeComponent data = descriptor.getComponentAt(0x1c);
            if (data == null || data.getOffset() != 0x1c) continue;
            Structure element = pointedStructure(data.getDataType());
            if (element == null || !owned(element) ||
                    !element.getPathName().startsWith(ELEMENT_ROOT)) continue;
            evidence.existingElementPath = element.getPathName();
            evidence.existingDescriptorPath = descriptor.getPathName();
            for (DataTypeComponent component : element.getDefinedComponents()) {
                FieldEvidence value = evidence.fields.computeIfAbsent(
                    (long)component.getOffset(), FieldEvidence::new);
                value.widths.merge(component.getLength(), 1, Integer::sum);
                value.types.merge(typeSpecification(component.getDataType()), 1,
                    Integer::sum);
                value.sites.add("existing generated baseline " +
                    element.getPathName());
            }
        }
    }

    private void collectElementEvidence() throws Exception {
        for (Decompiled unit : decompiled.values()) {
            monitor.checkCancelled();
            if (unit.owner == null) continue;
            List<Evidence> candidates = arrays.values().stream()
                .filter(value -> value.key.ownerPath.equals(unit.owner.getPathName()))
                .toList();
            if (candidates.isEmpty()) continue;
            Set<String> ownerAliases = ownerAliases(unit.owner, unit.c);
            Map<String, PointerDeclaration> declarations = pointerDeclarations(unit.c);
            for (Evidence evidence : candidates) {
                Set<String> arrayBases = arrayBases(unit.c, ownerAliases, evidence);
                if (arrayBases.isEmpty()) continue;
                Map<String, PointerDeclaration> elements =
                    elementAliases(unit.c, arrayBases, declarations);
                elementAliases += elements.size();
                for (Map.Entry<String, PointerDeclaration> entry : elements.entrySet()) {
                    boolean stable =
                        stableElementAlias(unit.c, entry.getKey(), arrayBases);
                    String assignmentAddress =
                        darrayAssignmentAddress(unit, entry.getKey(), arrayBases);
                    LocalCandidate candidate = new LocalCandidate(
                        unit.function.getEntryPoint(), evidence.key,
                        entry.getKey(), assignmentAddress,
                        entry.getValue().elementType, !stable);
                    localCandidates.putIfAbsent(
                        addr(candidate.function) + "|" +
                            candidate.key.ownerPath + "|" +
                            candidate.key.offset + "|" + candidate.alias,
                        candidate);
                    collectElementFields(unit, evidence, entry.getKey(), entry.getValue());
                }
            }
        }
    }

    private boolean stableElementAlias(String c, String alias,
            Set<String> arrayBases) {
        Matcher assignments = ASSIGNMENT.matcher(c);
        int darray = 0;
        while (assignments.find()) {
            if (!assignments.group(1).equals(alias)) continue;
            String expression = assignments.group(2).trim();
            if (expression.matches(
                    "(?:\\([^()]{1,80}\\)\\s*)*(?:0|0[xX]0+|NULL|null)"))
                continue;
            boolean matched = false;
            for (String base : arrayBases) {
                if (expression.contains(base + "->elementSize") &&
                        expression.contains(base + "->data")) {
                    matched = true;
                    darray++;
                    break;
                }
            }
            if (!matched) return false;
        }
        return darray > 0;
    }

    /**
     * Preserve an instruction-address identity for the defining DArray
     * assignment.  Decompiler local names are presentation details and may
     * change after a generated layout or an earlier dynamic local is installed.
     */
    private String darrayAssignmentAddress(Decompiled unit, String alias,
            Set<String> arrayBases) {
        try {
            Object markup = unit.results.getClass()
                .getMethod("getCCodeMarkup").invoke(unit.results);
            @SuppressWarnings("unchecked")
            Iterator<Object> iterator = (Iterator<Object>)markup.getClass()
                .getMethod("tokenIterator", boolean.class).invoke(markup, true);
            List<Object> tokens = new ArrayList<>();
            List<String> text = new ArrayList<>();
            while (iterator.hasNext()) {
                Object token = iterator.next();
                tokens.add(token);
                text.add((String)token.getClass().getMethod("getText").invoke(token));
            }
            Set<String> sites = new LinkedHashSet<>();
            for (int index = 0; index < tokens.size(); index++) {
                if (!alias.equals(text.get(index))) continue;
                int equals = nextNonBlank(text, index + 1);
                if (equals < 0 || !"=".equals(text.get(equals))) continue;
                StringBuilder statement = new StringBuilder(alias).append('=');
                for (int end = equals + 1;
                        end < tokens.size() && end < equals + 800; end++) {
                    String item = text.get(end);
                    statement.append(item);
                    if (";".equals(item)) break;
                }
                boolean matches = false;
                for (String base : arrayBases) {
                    if (statement.indexOf(base + "->elementSize") >= 0 &&
                            statement.indexOf(base + "->data") >= 0) {
                        matches = true;
                        break;
                    }
                }
                if (!matches) continue;
                Address site = tokenAddress(tokens.get(index));
                if (site != null) sites.add(addr(site));
            }
            return sites.size() == 1 ? sites.iterator().next() : "";
        }
        catch (Exception ignored) {
            return "";
        }
    }

    private int nextNonBlank(List<String> tokens, int start) {
        for (int index = start; index < tokens.size(); index++)
            if (!tokens.get(index).isBlank()) return index;
        return -1;
    }

    private Address tokenAddress(Object token) {
        try {
            Object op = token.getClass().getMethod("getPcodeOp").invoke(token);
            if (op != null) {
                Object sequence = op.getClass().getMethod("getSeqnum").invoke(op);
                Address result = (Address)sequence.getClass()
                    .getMethod("getTarget").invoke(sequence);
                if (result != null) return result;
            }
        }
        catch (Exception ignored) {
            // Fall through to the defining varnode/token address.
        }
        try {
            Object varnode = token.getClass().getMethod("getVarnode").invoke(token);
            if (varnode != null) {
                Address result = (Address)varnode.getClass()
                    .getMethod("getPCAddress").invoke(varnode);
                if (result != null) return result;
            }
        }
        catch (Exception ignored) {
            // Fall through to the markup address.
        }
        try {
            return (Address)token.getClass().getMethod("getMinAddress").invoke(token);
        }
        catch (Exception ignored) {
            return null;
        }
    }

    /**
     * Recover the very common compiler shape where an owner keeps one live
     * record inline, then appends a byte-for-byte snapshot of that record to a
     * DArray.  The call site is strong evidence when it passes &owner->field_X
     * and another owner field closes the exact DArray element extent.
     *
     * This deliberately does not depend on an ST class or method name.  It
     * propagates the already observed owner layout and lets the ordinary
     * expression-role pass below improve generic member names.
     */
    private void collectSourceRecordEvidence() throws Exception {
        for (Evidence evidence : arrays.values()) {
            int elementSize = uniqueElementSize(evidence);
            if (elementSize < 1 || evidence.creationFunctions.isEmpty()) continue;
            Structure owner = structure(evidence.key.ownerPath);
            if (owner == null) continue;
            for (Decompiled caller : decompiled.values()) {
                monitor.checkCancelled();
                if (!caller.owner.getPathName().equals(evidence.key.ownerPath))
                    continue;
                Set<String> aliases = ownerAliases(owner, caller.c);
                for (Address creatorAddress : evidence.creationFunctions) {
                    Function creator =
                        currentProgram.getFunctionManager().getFunctionAt(creatorAddress);
                    if (creator == null) continue;
                    for (RenderedCall call : renderedCalls(caller)) {
                        if (!calleeMatches(call.name, creator)) continue;
                        SourceRecord source =
                            sourceRecord(call, aliases, owner, elementSize, creator);
                        if (source == null) continue;
                        evidence.sourceBases.add(source.baseOffset);
                        evidence.sourceSites.add(addr(caller.function.getEntryPoint()) +
                            " " + call.name + "(&owner+" + hex(source.baseOffset) +
                            ") spans exact element size " + hex(elementSize));
                    }
                }
            }
            if (evidence.sourceBases.size() != 1) continue;
            long base = evidence.sourceBases.iterator().next();
            for (DataTypeComponent component : owner.getDefinedComponents()) {
                long relative = component.getOffset() - base;
                if (relative < 0 || relative + component.getLength() > elementSize)
                    continue;
                FieldEvidence field = evidence.fields.computeIfAbsent(relative,
                    FieldEvidence::new);
                // The exact byte-for-byte source extent is stronger than a
                // decompiler cast or one consumer prototype: it is the actual
                // stored representation copied into the DArray element.
                field.widths.merge(component.getLength(), 4, Integer::sum);
                field.types.merge(typeSpecification(component.getDataType()), 4,
                    Integer::sum);
                String sourceName = component.getFieldName();
                if (semanticFieldName(sourceName))
                    field.sourceNames.merge(sourceName, 4, Integer::sum);
                field.sites.add("inline source record " + owner.getPathName() +
                    "+" + hex(component.getOffset()));
            }
            for (Decompiled unit : decompiled.values()) {
                if (!unit.owner.getPathName().equals(evidence.key.ownerPath)) continue;
                Set<String> aliases = ownerAliases(owner, unit.c);
                for (FieldEvidence field : evidence.fields.values()) {
                    DataTypeComponent component =
                        owner.getComponentAt((int)(base + field.offset));
                    if (component == null ||
                            component.getOffset() != base + field.offset) continue;
                    for (String alias : aliases)
                        observeExpressionSemantics(unit, evidence, field,
                            alias + "->" + component.getFieldName());
                }
            }
        }
    }

    private SourceRecord sourceRecord(RenderedCall call, Set<String> ownerAliases,
            Structure owner, int elementSize, Function creator) {
        Decompiled creatorUnit = decompiled.get(creator.getEntryPoint());
        if (creatorUnit == null) return null;
        for (int argumentIndex = 0;
                argumentIndex < call.arguments.size(); argumentIndex++) {
            String argument = call.arguments.get(argumentIndex);
            Matcher start = Pattern.compile("^\\s*(?:\\([^)]*\\)\\s*)*&\\s*" +
                "([A-Za-z_$][A-Za-z0-9_$]*)" +
                "\\s*->\\s*((?:field|value)_(?:0[xX])?[0-9A-Fa-f]+)\\s*$")
                .matcher(argument);
            if (!start.matches() || !ownerAliases.contains(start.group(1))) continue;
            Parameter pointerParameter = renderedParameter(creator, argumentIndex,
                call.arguments.size());
            if (pointerParameter != null &&
                    !(untypedef(pointerParameter.getDataType()) instanceof Pointer))
                continue;
            long base = fieldOffset(start.group(2));
            if (base < 0) continue;
            for (int tailIndex = 0;
                    tailIndex < call.arguments.size(); tailIndex++) {
                String tailArgument = call.arguments.get(tailIndex);
                Matcher tail = Pattern.compile("^\\s*(?:\\([^)]*\\)\\s*)*" +
                    Pattern.quote(start.group(1)) + "\\s*->\\s*" +
                    "((?:field|value)_(?:0[xX])?[0-9A-Fa-f]+)\\s*$")
                    .matcher(tailArgument);
                if (!tail.matches()) continue;
                Parameter tailParameter = renderedParameter(creator, tailIndex,
                    call.arguments.size());
                long tailOffset = fieldOffset(tail.group(1));
                DataTypeComponent component =
                    owner.getComponentAt((int)tailOffset);
                if (component != null && component.getOffset() == tailOffset &&
                        (tailParameter == null ||
                            tailParameter.getDataType().getLength() ==
                                component.getLength()) &&
                        tailOffset > base &&
                        tailOffset - base + component.getLength() == elementSize)
                    return new SourceRecord(base);
            }
        }
        return null;
    }

    private Parameter renderedParameter(Function function, int argumentIndex,
            int renderedArgumentCount) {
        Parameter[] parameters = function.getParameters();
        if (argumentIndex < 0) return null;
        if (parameters.length == renderedArgumentCount)
            return argumentIndex < parameters.length ? parameters[argumentIndex] : null;
        int auto = function.getAutoParameterCount();
        if (parameters.length - auto == renderedArgumentCount) {
            int parameterIndex = argumentIndex + auto;
            return parameterIndex < parameters.length ?
                parameters[parameterIndex] : null;
        }
        // The rendered call may explicitly contain a hidden receiver while the
        // Function API exposes only formal parameters (or vice versa).  A
        // missing mapping is not negative evidence: the exact owner-member
        // extent check below remains the proof for this source-record shape.
        return null;
    }

    private Set<String> arrayBases(String c, Set<String> ownerAliases,
            Evidence evidence) {
        Set<String> result = new LinkedHashSet<>();
        String member = evidence.fieldName;
        if (member == null || member.isBlank())
            member = "field_" + String.format("%04X", evidence.key.offset);
        for (String owner : ownerAliases) {
            String expression = owner + "->" + member;
            result.add(expression);
            Pattern assigned = Pattern.compile(
                "(?m)([A-Za-z_$][A-Za-z0-9_$]*)\\s*=\\s*" +
                Pattern.quote(expression) + "\\s*;");
            Matcher matcher = assigned.matcher(c);
            while (matcher.find()) result.add(matcher.group(1));
        }
        return result;
    }

    private Map<String, PointerDeclaration> elementAliases(String c,
            Set<String> arrayBases, Map<String, PointerDeclaration> declarations) {
        Map<String, PointerDeclaration> result = new LinkedHashMap<>();
        Matcher assignment = ASSIGNMENT.matcher(c);
        while (assignment.find()) {
            String alias = assignment.group(1);
            String expression = assignment.group(2);
            String base = null;
            for (String candidate : arrayBases) {
                if (expression.contains(candidate + "->elementSize") &&
                        expression.contains(candidate + "->data")) {
                    base = candidate;
                    break;
                }
            }
            if (base == null) continue;
            PointerDeclaration declaration = declarations.get(alias);
            if (declaration == null) declaration = leadingPointerCast(expression);
            if (declaration == null) continue;
            result.put(alias, declaration);
        }
        return result;
    }

    private void collectElementFields(Decompiled unit, Evidence evidence,
            String name, PointerDeclaration declaration) throws Exception {
        Set<String> seen = new HashSet<>();
        Structure existingElement = evidence.existingElementPath.isBlank() ? null :
            structure(evidence.existingElementPath);
        if (existingElement != null) {
            Matcher member = Pattern.compile("(?<![A-Za-z0-9_$])" +
                Pattern.quote(name) +
                "\\s*->\\s*([A-Za-z_$][A-Za-z0-9_$]*)").matcher(unit.c);
            while (member.find()) {
                DataTypeComponent component =
                    componentByName(existingElement, member.group(1));
                if (component == null) continue;
                String key = member.start() + ":" + component.getOffset() + ":" +
                    component.getLength();
                if (!seen.add(key)) continue;
                recordField(unit, evidence, component.getOffset(),
                    component.getLength(),
                    typeSpecification(component.getDataType()),
                    name + "->" + member.group(1), member.group());
            }
        }
        Matcher raw = RAW_ACCESS.matcher(unit.c);
        while (raw.find()) {
            if (!raw.group(2).equals(name)) continue;
            int width = accessWidth(raw.group(1));
            long writtenOffset = unsigned(raw.group(3));
            long offset = integerCastBefore(raw.group(), name) ?
                writtenOffset : writtenOffset * declaration.elementWidth;
            String key = raw.start() + ":" + offset + ":" + width;
            if (!seen.add(key)) continue;
            recordField(unit, evidence, offset, width,
                valueTypeSpecification(raw.group(1), width),
                name + "+0x" + Long.toHexString(offset).toUpperCase(Locale.ROOT),
                raw.group());
        }

        Matcher index = CONSTANT_INDEX.matcher(unit.c);
        while (index.find()) {
            if (!index.group(1).equals(name)) continue;
            long item = unsigned(index.group(2));
            long offset = item * declaration.elementWidth;
            String key = index.start() + ":" + offset + ":" + declaration.elementWidth;
            if (!seen.add(key)) continue;
            recordField(unit, evidence, offset, declaration.elementWidth,
                declaration.elementType, name + "[" + item + "]", index.group());
        }

        Pattern bare = Pattern.compile("(?<![A-Za-z0-9_$:])\\*\\s*" +
            Pattern.quote(name) + "(?![A-Za-z0-9_$])");
        Matcher dereference = bare.matcher(unit.c);
        while (dereference.find()) {
            String key = dereference.start() + ":0:" + declaration.elementWidth;
            if (!seen.add(key)) continue;
            recordField(unit, evidence, 0, declaration.elementWidth,
                declaration.elementType, "*" + name, dereference.group());
        }
        for (FieldEvidence field : evidence.fields.values()) {
            for (String expression :
                    field.expressions.getOrDefault(unit.function.getEntryPoint(), Set.of()))
                observeExpressionSemantics(unit, evidence, field, expression);
        }
    }

    private DataTypeComponent componentByName(Structure structure, String name) {
        for (DataTypeComponent component : structure.getDefinedComponents()) {
            if (name.equals(component.getFieldName())) return component;
        }
        return null;
    }

    private void recordField(Decompiled unit, Evidence evidence, long offset,
            int width, String type, String detail, String expression) {
        int elementSize = uniqueElementSize(evidence);
        if (elementSize < 1 || offset < 0 || width < 1 || width > 16 ||
                offset + width > elementSize) return;
        FieldEvidence field = evidence.fields.computeIfAbsent(offset,
            FieldEvidence::new);
        field.widths.merge(width, 1, Integer::sum);
        if (type != null && !type.isBlank())
            field.types.merge(type, 1, Integer::sum);
        field.sites.add(addr(unit.function.getEntryPoint()) + " " + detail);
        field.expressions.computeIfAbsent(unit.function.getEntryPoint(),
            ignored -> new LinkedHashSet<>()).add(expression);
        evidence.accessCount++;
        evidence.functions.add(addr(unit.function.getEntryPoint()));
        fieldAccesses++;
    }

    private void observeExpressionSemantics(Decompiled unit, Evidence evidence,
            FieldEvidence field, String expression) throws Exception {
        if (expression == null || expression.isBlank() ||
                !unit.c.contains(expression)) return;
        List<SubjectRegion> subjects = new ArrayList<>();
        subjects.add(new SubjectRegion(expression, 0, unit.c.length()));
        Matcher alias = Pattern.compile("(?m)\\b([A-Za-z_$][A-Za-z0-9_$]*)\\s*=\\s*" +
            Pattern.quote(expression) + "\\s*;").matcher(unit.c);
        while (alias.find()) {
            String name = alias.group(1);
            int end = nextAssignment(unit.c, name, alias.end());
            subjects.add(new SubjectRegion(name, alias.end(), end));
        }

        Set<Long> assigned = new TreeSet<>();
        Set<Long> compared = new TreeSet<>();
        int assignedOccurrences = 0;
        int comparedOccurrences = 0;
        boolean incremented = false;
        boolean indexed = false;
        for (SubjectRegion region : subjects) {
            String subject = region.subject;
            String text = unit.c.substring(region.start, region.end);
            String quoted = Pattern.quote(subject);
            Matcher write = Pattern.compile(quoted +
                "\\s*=\\s*(-?(?:0[xX][0-9A-Fa-f]+|[0-9]+))\\b")
                .matcher(text);
            while (write.find()) {
                assigned.add(signedConstant(write.group(1)));
                assignedOccurrences++;
            }
            Matcher compareRight = Pattern.compile(quoted +
                "\\s*(?:==|!=)\\s*" +
                "(-?(?:0[xX][0-9A-Fa-f]+|[0-9]+))\\b").matcher(text);
            while (compareRight.find()) {
                compared.add(signedConstant(compareRight.group(1)));
                comparedOccurrences++;
            }
            Matcher compareLeft = Pattern.compile(
                "(-?(?:0[xX][0-9A-Fa-f]+|[0-9]+))\\s*" +
                "(?:==|!=)\\s*" + quoted).matcher(text);
            while (compareLeft.find()) {
                compared.add(signedConstant(compareLeft.group(1)));
                comparedOccurrences++;
            }
            if (Pattern.compile(quoted + "\\s*=\\s*" + quoted +
                    "\\s*[+-]\\s*1\\b|" + quoted + "\\s*(?:\\+\\+|--)")
                    .matcher(text).find())
                incremented = true;
            if (Pattern.compile("\\[\\s*" + quoted + "\\s*\\]")
                    .matcher(text).find())
                indexed = true;
        }

        Set<Long> domain = new TreeSet<>(assigned);
        domain.addAll(compared);
        long nonBoolean = domain.stream().filter(value -> value != 0 && value != 1)
            .count();
        if (!assigned.isEmpty() && domain.size() >= 2 && domain.size() <= 16 &&
                domain.stream().allMatch(value -> value >= -1 && value <= 0xffff)) {
            addRole(field, "state", 3,
                addr(unit.function.getEntryPoint()) + " small assigned/compared domain=" +
                domain);
            addIntegerType(field);
        }
        else if (domain.contains(0L) && nonBoolean == 0 &&
                assigned.contains(0L) && compared.contains(0L) &&
                assignedOccurrences + comparedOccurrences >= 2) {
            addRole(field, "statusFlag", 2,
                addr(unit.function.getEntryPoint()) + " boolean zero/nonzero use");
            addIntegerType(field);
        }
        if (indexed && incremented) {
            addRole(field, "index", 2,
                addr(unit.function.getEntryPoint()) +
                " incremented value used as an array index");
            addUnsignedType(field);
        }

        for (SubjectRegion region : subjects) {
            Decompiled scoped = new Decompiled(unit.function, unit.owner,
                unit.c.substring(region.start, region.end), unit.results);
            for (RenderedCall call : parseRenderedCalls(scoped.c)) {
                for (int argumentIndex = 0;
                        argumentIndex < call.arguments.size(); argumentIndex++) {
                    String argument = call.arguments.get(argumentIndex);
                    if (!argument.contains(region.subject)) continue;
                    inferCallRole(field, call, argumentIndex, argument,
                        region.subject, unit.function.getEntryPoint());
                    propagateParameterType(unit, field, call, argumentIndex);
                }
            }
        }
    }

    private int nextAssignment(String text, String name, int start) {
        Matcher matcher = Pattern.compile("(?m)(?<![A-Za-z0-9_$])" +
            Pattern.quote(name) + "\\s*(?:[+\\-*/&|^]?=|\\+\\+|--)")
            .matcher(text);
        return matcher.find(start) ? matcher.start() : text.length();
    }

    private void inferCallRole(FieldEvidence field, RenderedCall call,
            int argumentIndex, String argument, String expression, Address site) {
        String leaf = leafName(call.name);
        String lower = leaf.toLowerCase(Locale.ROOT);
        if (lower.startsWith("spr") && argumentIndex == 1 &&
                (lower.contains("close") || lower.contains("show") ||
                 lower.contains("move") || lower.contains("set"))) {
            addRole(field, "spriteHandle", 3,
                addr(site) + " argument " + argumentIndex + " to " + call.name);
            return;
        }
        if (lower.contains("setmask") && argumentIndex == 2) {
            addRole(field, "maskIndex", 3,
                addr(site) + " indexes mask argument to " + call.name);
            addUnsignedType(field);
            return;
        }
        if ((lower.endsWith("close") || lower.endsWith("release") ||
                lower.endsWith("destroy")) && !argument.trim().startsWith("&")) {
            addRole(field, "handle", 2,
                addr(site) + " lifetime-ending argument to " + call.name);
        }
        if (lower.endsWith("move") && call.arguments.size() >= 5) {
            int coordinate = argumentIndex - (call.arguments.size() - 3);
            if (coordinate >= 0 && coordinate < 3)
                addRole(field, coordinate == 0 ? "positionX" :
                    coordinate == 1 ? "positionY" : "positionZ", 3,
                    addr(site) + " coordinate argument to " + call.name);
        }
    }

    private void propagateParameterType(Decompiled unit, FieldEvidence field,
            RenderedCall call, int argumentIndex) throws Exception {
        Function target = callTarget(unit.function, call.name);
        if (target == null) return;
        Parameter[] parameters = target.getParameters();
        int parameterIndex = argumentIndex;
        if (parameterIndex < 0 || parameterIndex >= parameters.length) return;
        DataType type = parameters[parameterIndex].getDataType();
        if (type == null || type.getLength() != selectedObservedWidth(field) ||
                Undefined.isUndefined(type)) return;
        field.types.merge(typeSpecification(type), 2, Integer::sum);
        String parameterName = parameters[parameterIndex].getName();
        if (semanticParameterName(parameterName))
            field.sourceNames.merge(parameterName, 2, Integer::sum);
        Decompiled targetUnit = decompiled.get(target.getEntryPoint());
        if (targetUnit != null)
            propagateParameterRole(field, targetUnit, parameters[parameterIndex]);
    }

    private void propagateParameterRole(FieldEvidence field, Decompiled target,
            Parameter parameter) {
        String name = parameter.getName();
        if (name == null || name.isBlank()) return;
        String quoted = Pattern.quote(name);
        Set<Long> assigned = constants(target.c, Pattern.compile(quoted +
            "\\s*=\\s*(-?(?:0[xX][0-9A-Fa-f]+|[0-9]+))\\b"));
        Set<Long> compared = constants(target.c, Pattern.compile(quoted +
            "\\s*(?:==|!=)\\s*" +
            "(-?(?:0[xX][0-9A-Fa-f]+|[0-9]+))\\b"));
        compared.addAll(constants(target.c, Pattern.compile(
            "(-?(?:0[xX][0-9A-Fa-f]+|[0-9]+))\\s*" +
            "(?:==|!=)\\s*" + quoted)));
        if (assigned.isEmpty() && compared.size() >= 2 && compared.size() <= 16 &&
                compared.stream().allMatch(value -> value >= -1 && value <= 0xffff))
            addRole(field, "variant", 2,
                addr(target.function.getEntryPoint()) + " callee parameter " +
                name + " selects constant domain " + compared);
        if (Pattern.compile("\\[\\s*" + quoted + "\\s*\\]")
                .matcher(target.c).find())
            addRole(field, "index", 2,
                addr(target.function.getEntryPoint()) + " callee parameter " +
                name + " indexes an aggregate");
    }

    private Set<Long> constants(String text, Pattern pattern) {
        Set<Long> result = new TreeSet<>();
        Matcher matcher = pattern.matcher(text);
        while (matcher.find()) {
            long value = signedConstant(matcher.group(1));
            if (value != Long.MIN_VALUE) result.add(value);
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

    private boolean calleeMatches(String rendered, Function function) {
        if (function == null) return false;
        String leaf = leafName(rendered);
        return rendered.equals(function.getName(true)) ||
            leaf.equals(function.getName()) ||
            leaf.equals(function.getName().replaceFirst("^thunk_", ""));
    }

    private Function callTarget(Function caller, String renderedName)
            throws Exception {
        Map<String, Function> targets = callTargetCache.get(caller.getEntryPoint());
        if (targets == null) {
            targets = new HashMap<>();
            Set<String> ambiguous = new HashSet<>();
            for (Function direct : caller.getCalledFunctions(monitor)) {
                Function resolved = resolveThunk(direct);
                Function target = resolved == null ? direct : resolved;
                for (String alias : List.of(direct.getName(),
                        direct.getName(true), target.getName(), target.getName(true))) {
                    Function old = targets.putIfAbsent(alias, target);
                    if (old != null &&
                            !old.getEntryPoint().equals(target.getEntryPoint()))
                        ambiguous.add(alias);
                }
            }
            for (String alias : ambiguous) targets.remove(alias);
            callTargetCache.put(caller.getEntryPoint(), targets);
        }
        Function exact = targets.get(renderedName);
        if (exact != null) return exact;
        String leaf = leafName(renderedName);
        return targets.get(leaf);
    }

    private String leafName(String qualified) {
        int separator = qualified.lastIndexOf("::");
        return separator < 0 ? qualified : qualified.substring(separator + 2);
    }

    private List<RenderedCall> renderedCalls(Decompiled unit) {
        return renderedCallCache.computeIfAbsent(unit.function.getEntryPoint(),
            ignored -> parseRenderedCalls(unit.c));
    }

    private List<RenderedCall> parseRenderedCalls(String c) {
        List<RenderedCall> result = new ArrayList<>();
        Matcher matcher = Pattern.compile(
            "(?<![A-Za-z0-9_$])([A-Za-z_$][A-Za-z0-9_$]*(?:::[A-Za-z_$][A-Za-z0-9_$]*)*)\\s*\\(")
            .matcher(c);
        while (matcher.find()) {
            String name = matcher.group(1);
            if (Set.of("if", "for", "while", "switch", "sizeof", "return")
                    .contains(name)) continue;
            int open = c.indexOf('(', matcher.start(1) + name.length());
            int close = matching(c, open, '(', ')');
            if (open < 0 || close < 0) continue;
            result.add(new RenderedCall(name,
                splitArguments(c.substring(open + 1, close))));
        }
        return result;
    }

    private void addRole(FieldEvidence field, String role, int weight,
            String evidence) {
        field.roles.merge(role, weight, Integer::sum);
        field.roleSites.add(evidence);
    }

    private void addIntegerType(FieldEvidence field) {
        int width = selectedObservedWidth(field);
        if (width == 1) field.types.merge("/byte", 2, Integer::sum);
        else if (width == 2) field.types.merge("/short", 2, Integer::sum);
        else if (width == 4) field.types.merge("/int", 2, Integer::sum);
    }

    private void addUnsignedType(FieldEvidence field) {
        int width = selectedObservedWidth(field);
        if (width == 1) field.types.merge("/byte", 2, Integer::sum);
        else if (width == 2) field.types.merge("/ushort", 2, Integer::sum);
        else if (width == 4) field.types.merge("/uint", 2, Integer::sum);
    }

    private int selectedObservedWidth(FieldEvidence field) {
        return field.widths.entrySet().stream()
            .max(Comparator.<Map.Entry<Integer, Integer>>comparingInt(
                Map.Entry::getValue).thenComparingInt(Map.Entry::getKey))
            .map(Map.Entry::getKey).orElse(-1);
    }

    private long signedConstant(String value) {
        try {
            boolean negative = value.startsWith("-");
            String body = negative ? value.substring(1) : value;
            long decoded = Long.decode(body);
            return negative ? -decoded : decoded;
        }
        catch (NumberFormatException ignored) { return Long.MIN_VALUE; }
    }

    private boolean semanticFieldName(String name) {
        return name != null && !name.isBlank() &&
            !name.matches("(?:field|value)_(?:0[xX])?[0-9A-Fa-f]+");
    }

    private boolean semanticParameterName(String name) {
        return name != null && !name.isBlank() &&
            !name.matches("(?:param|arg)_?[0-9]+|this");
    }

    private Analysis proposals() {
        List<Row> rows = new ArrayList<>();
        List<FieldRow> fields = new ArrayList<>();
        List<LocalRow> locals = new ArrayList<>();
        for (Evidence evidence : arrays.values()) {
            int elementSize = uniqueElementSize(evidence);
            List<FieldEvidence> selected = selectedFields(evidence);
            String stem = leaf(evidence.key.ownerPath) + "_field_" +
                String.format("%04X", evidence.key.offset);
            String elementPath = evidence.existingElementPath.isBlank() ?
                ELEMENT_ROOT + stem + "Element" : evidence.existingElementPath;
            String descriptorPath = evidence.existingDescriptorPath.isBlank() ?
                DESCRIPTOR_ROOT + stem + "DArray" : evidence.existingDescriptorPath;
            Structure owner = structure(evidence.key.ownerPath);
            DataTypeComponent component = owner == null ? null :
                owner.getComponentAt((int)evidence.key.offset);
            boolean classSafe = owner != null && classSafe(owner);
            boolean sizeSafe = elementSize >= 8 && elementSize <= MAX_ELEMENT_SIZE;
            boolean retainedOwnedLayout = !evidence.existingElementPath.isBlank();
            boolean layoutSafe = selected.size() >= 2 &&
                (evidence.accessCount >= 3 || retainedOwnedLayout) &&
                selected.stream().allMatch(field ->
                    field.offset + selectedWidth(evidence, field) <= elementSize);
            boolean currentSafe = component != null &&
                component.getOffset() == evidence.key.offset &&
                darrayPointer(component.getDataType());
            boolean apply = classSafe && sizeSafe && layoutSafe && currentSafe;
            String confidence = apply ? "high" :
                evidence.elementSizes.size() != 1 ? "conflict" : "review";
            String reason = "DArrayCreate element_size=" +
                (elementSize < 0 ? evidence.elementSizes.toString() : hex(elementSize)) +
                "; access_functions=" + evidence.functions.size() +
                "; field_accesses=" + evidence.accessCount +
                "; selected_fields=" + selected.size() +
                "; inline_source_bases=" + evidence.sourceBases +
                "; semantic_fields=" + selected.stream().filter(field ->
                    !proposedFieldName(field).startsWith("field_")).count();
            if (!classSafe) reason += "; owner layout is manual/hash-diverged";
            if (!sizeSafe) reason += "; primitive/invalid element size";
            if (!layoutSafe) reason += "; insufficient non-overlapping element evidence";
            if (!currentSafe) reason += "; class field is no longer DArray-compatible";
            rows.add(new Row(apply, evidence, elementSize, elementPath,
                descriptorPath, selected.size(), confidence, reason));
            Map<String, Integer> proposedNameCounts = new HashMap<>();
            for (FieldEvidence field : selected) {
                String proposed = proposedFieldName(field);
                proposedNameCounts.merge(proposed, 1, Integer::sum);
            }
            for (FieldEvidence field : selected) {
                int width = selectedWidth(evidence, field);
                String type = selectedType(field, width);
                if (type.isBlank() || typeLength(type) != width)
                    type = "/undefined" + width;
                String proposedName = proposedFieldName(field);
                if (proposedNameCounts.getOrDefault(proposedName, 0) != 1)
                    proposedName = proposedName + "_" +
                        String.format("%04X", field.offset);
                fields.add(new FieldRow(apply, elementPath, field.offset, width,
                    proposedName, type,
                    field.sites.size(), "observed_types=" + field.types +
                    "; semantic_roles=" + field.roles +
                    "; role_sites=" + String.join(" | ", field.roleSites) +
                    "; source_names=" + field.sourceNames +
                    "; sites=" + String.join(" | ", field.sites)));
            }
            for (LocalCandidate candidate : localCandidates.values()) {
                if (!candidate.key.equals(evidence.key)) continue;
                locals.add(new LocalRow(apply, addr(candidate.function),
                    leaf(evidence.key.ownerPath), evidence.key.offset,
                    candidate.alias, candidate.assignmentAddress,
                    "pointer:" + candidate.expectedAliasType,
                    elementPath, descriptorPath, candidate.splitRequired,
                    confidence, candidate.splitRequired ?
                        "rendered local has other roles; split only the merge group " +
                            "whose defining assignment is the matching DArray address" :
                        "one SSA alias lifetime contains only matching DArray element " +
                            "addresses and null assignments"));
            }
        }
        rows.sort(Comparator.comparing((Row row) -> row.ownerPath)
            .thenComparingLong(row -> row.fieldOffset));
        fields.sort(Comparator.comparing((FieldRow row) -> row.elementTypePath)
            .thenComparingLong(row -> row.offset));
        locals.sort(Comparator.comparing((LocalRow row) -> row.functionAddress)
            .thenComparingLong(row -> row.fieldOffset)
            .thenComparing(row -> row.renderedAlias));
        return new Analysis(rows, fields, locals);
    }

    private String proposedFieldName(FieldEvidence field) {
        String role = dominant(field.roles, 2);
        if (!role.isBlank()) return role;
        // One weakly named callee parameter is not enough to rename persistent
        // storage: optimized local reuse and provisional prototypes routinely
        // make a single propagated name misleading.
        String source = dominant(field.sourceNames, 4);
        return source.isBlank() ?
            "field_" + String.format("%04X", field.offset) : source;
    }

    private String dominant(Map<String, Integer> values, int minimum) {
        if (values.isEmpty()) return "";
        List<Map.Entry<String, Integer>> ranked =
            new ArrayList<>(values.entrySet());
        ranked.sort(Comparator
            .<Map.Entry<String, Integer>>comparingInt(Map.Entry::getValue).reversed()
            .thenComparing(Map.Entry::getKey));
        if (ranked.get(0).getValue() < minimum) return "";
        if (ranked.size() > 1 &&
                ranked.get(0).getValue().equals(ranked.get(1).getValue()))
            return "";
        return ranked.get(0).getKey();
    }

    private List<FieldEvidence> selectedFields(Evidence evidence) {
        List<FieldEvidence> candidates = evidence.fields.values().stream()
            .filter(field -> selectedWidth(evidence, field) > 0)
            .sorted(Comparator.<FieldEvidence>comparingInt(this::fieldEvidence).reversed()
                .thenComparingLong(field -> field.offset))
            .toList();
        List<FieldEvidence> result = new ArrayList<>();
        for (FieldEvidence candidate : candidates) {
            long start = candidate.offset;
            long end = start + selectedWidth(evidence, candidate);
            boolean overlaps = result.stream().anyMatch(field -> {
                long other = field.offset;
                return start < other + selectedWidth(evidence, field) && other < end;
            });
            if (!overlaps) result.add(candidate);
        }
        result.sort(Comparator.comparingLong(field -> field.offset));
        return result;
    }

    private int fieldEvidence(FieldEvidence field) {
        return field.widths.values().stream().mapToInt(Integer::intValue).sum();
    }

    private int selectedWidth(Evidence evidence, FieldEvidence field) {
        if (field.widths.size() == 1)
            return field.widths.keySet().iterator().next();
        int maximum = field.widths.keySet().stream().mapToInt(Integer::intValue)
            .max().orElse(-1);
        Long next = evidence.fields.higherKey(field.offset);
        if (next != null && next > field.offset && next < field.offset + maximum) {
            int gap = (int)(next - field.offset);
            int packed = field.widths.keySet().stream()
                .filter(width -> width <= gap &&
                    field.widths.getOrDefault(width, 0) >= 2)
                .mapToInt(Integer::intValue).max().orElse(-1);
            if (packed > 0) return packed;
        }
        List<Map.Entry<Integer, Integer>> ranked =
            new ArrayList<>(field.widths.entrySet());
        ranked.sort(Comparator
            .<Map.Entry<Integer, Integer>>comparingInt(Map.Entry::getValue).reversed()
            .thenComparingInt(Map.Entry::getKey));
        Map.Entry<Integer, Integer> first = ranked.get(0);
        Map.Entry<Integer, Integer> second = ranked.get(1);
        return first.getValue() >= 2 &&
            first.getValue() >= second.getValue() * 2 ? first.getKey() : -1;
    }

    private String selectedType(FieldEvidence field, int width) {
        List<String> concrete = field.types.keySet().stream()
            .filter(type -> typeLength(type) == width)
            .filter(type -> !type.matches("/undefined(?:1|2|4|8)?"))
            .toList();
        if (concrete.size() == 1) return concrete.get(0);
        if (concrete.isEmpty()) return "";
        List<String> ranked = new ArrayList<>(concrete);
        ranked.sort(Comparator
            .<String>comparingInt(type -> field.types.getOrDefault(type, 0)).reversed()
            .thenComparing(type -> type));
        int first = field.types.getOrDefault(ranked.get(0), 0);
        int second = field.types.getOrDefault(ranked.get(1), 0);
        return first >= 2 && first >= second * 2 ? ranked.get(0) : "";
    }

    private Set<String> ownerAliases(Structure owner, String c) {
        Set<String> result = new LinkedHashSet<>();
        result.add("this");
        String name = Pattern.quote(owner.getName());
        Matcher matcher = Pattern.compile("(?m)\\b" + name +
            "\\s*\\*\\s*([A-Za-z_$][A-Za-z0-9_$]*)\\b").matcher(c);
        while (matcher.find()) result.add(matcher.group(1));
        return result;
    }

    private Map<String, PointerDeclaration> pointerDeclarations(String c) {
        Map<String, PointerDeclaration> result = new HashMap<>();
        Matcher matcher = POINTER_DECLARATION.matcher(c);
        while (matcher.find()) {
            String base = matcher.group(1).trim();
            int depth = matcher.group(2).length();
            if (depth < 1) continue;
            int width = accessWidth(base);
            if (width < 1 && base.equalsIgnoreCase("void")) width = 1;
            if (width < 1) continue;
            result.put(matcher.group(3), new PointerDeclaration(
                valueTypeSpecification(base, width), width));
        }
        return result;
    }

    private PointerDeclaration leadingPointerCast(String expression) {
        String value = expression.stripLeading();
        if (!value.startsWith("(")) return null;
        int close = matching(value, 0, '(', ')');
        if (close < 0) return null;
        String cast = value.substring(1, close).trim();
        if (!cast.endsWith("*")) return null;
        String base = cast.substring(0, cast.length() - 1).trim();
        int width = accessWidth(base);
        if (width < 1 && base.equalsIgnoreCase("void")) width = 1;
        return width < 1 ? null :
            new PointerDeclaration(valueTypeSpecification(base, width), width);
    }

    private FieldTarget assignedField(String c, int start, String local,
            Set<String> ownerAliases) {
        int end = Math.min(c.length(), start + 1600);
        Pattern pattern = Pattern.compile(
            "([A-Za-z_$][A-Za-z0-9_$]*)\\s*->\\s*" +
            "((?:field|value)_(?:0[xX])?[0-9A-Fa-f]+)\\s*=\\s*" +
            Pattern.quote(local) + "\\s*;");
        Matcher matcher = pattern.matcher(c.substring(start, end));
        while (matcher.find()) {
            if (!ownerAliases.contains(matcher.group(1))) continue;
            long offset = fieldOffset(matcher.group(2));
            if (offset >= 0) return new FieldTarget(offset);
        }
        return null;
    }

    private FieldTarget fieldTarget(String expression, Set<String> ownerAliases) {
        Matcher matcher = OWNER_FIELD.matcher(expression.trim());
        if (!matcher.matches() || !ownerAliases.contains(matcher.group(1))) return null;
        long offset = fieldOffset(matcher.group(2));
        return offset < 0 ? null : new FieldTarget(offset);
    }

    private String assignmentLeft(String c, int callStart) {
        int boundary = Math.max(c.lastIndexOf(';', callStart),
            Math.max(c.lastIndexOf('{', callStart), c.lastIndexOf('}', callStart)));
        String prefix = c.substring(boundary + 1, callStart);
        int equals = prefix.lastIndexOf('=');
        if (equals < 0) return "";
        return prefix.substring(0, equals).trim();
    }

    private List<String> splitArguments(String text) {
        List<String> result = new ArrayList<>();
        int start = 0, parens = 0, brackets = 0, braces = 0;
        char quote = 0;
        boolean escaped = false;
        for (int index = 0; index < text.length(); index++) {
            char ch = text.charAt(index);
            if (quote != 0) {
                if (escaped) escaped = false;
                else if (ch == '\\') escaped = true;
                else if (ch == quote) quote = 0;
                continue;
            }
            if (ch == '\'' || ch == '"') { quote = ch; continue; }
            if (ch == '(') parens++;
            else if (ch == ')') parens--;
            else if (ch == '[') brackets++;
            else if (ch == ']') brackets--;
            else if (ch == '{') braces++;
            else if (ch == '}') braces--;
            else if (ch == ',' && parens == 0 && brackets == 0 && braces == 0) {
                result.add(text.substring(start, index).trim());
                start = index + 1;
            }
        }
        result.add(text.substring(start).trim());
        return result;
    }

    private int matching(String text, int start, char open, char close) {
        if (start < 0 || start >= text.length() || text.charAt(start) != open) return -1;
        int depth = 0;
        char quote = 0;
        boolean escaped = false;
        for (int index = start; index < text.length(); index++) {
            char ch = text.charAt(index);
            if (quote != 0) {
                if (escaped) escaped = false;
                else if (ch == '\\') escaped = true;
                else if (ch == quote) quote = 0;
                continue;
            }
            if (ch == '\'' || ch == '"') { quote = ch; continue; }
            if (ch == open) depth++;
            else if (ch == close && --depth == 0) return index;
        }
        return -1;
    }

    private int constant(String expression) {
        String value = expression.trim();
        for (int pass = 0; pass < 8 && value.startsWith("("); pass++) {
            int close = matching(value, 0, '(', ')');
            if (close < 0 || close == value.length() - 1) break;
            value = value.substring(close + 1).trim();
        }
        try { return Integer.decode(value); }
        catch (NumberFormatException ignored) { return -1; }
    }

    private long fieldOffset(String name) {
        Matcher matcher = FIELD.matcher(name);
        if (!matcher.matches()) return -1;
        try { return Long.parseUnsignedLong(matcher.group(1), 16); }
        catch (NumberFormatException ignored) { return -1; }
    }

    private boolean integerCastBefore(String expression, String name) {
        return Pattern.compile("(?i)\\(\\s*(?:u?int|long|ulong|dword|word|qword)\\s*\\)\\s*" +
            Pattern.quote(name) + "\\b").matcher(expression).find();
    }

    private int uniqueElementSize(Evidence evidence) {
        return evidence.elementSizes.size() == 1 ?
            evidence.elementSizes.keySet().iterator().next() : -1;
    }

    private boolean darrayPointer(DataType type) {
        Structure pointed = pointedStructure(type);
        if (pointed == null) return false;
        if (pointed.getPathName().equals(DARRAY_PATH)) return true;
        return pointed.getPathName().startsWith(DESCRIPTOR_ROOT) && owned(pointed);
    }

    private boolean classSafe(Structure structure) {
        String description = structure.getDescription();
        String stored = storedHash(description);
        return description != null && description.contains(CLASS_MARKER) &&
            stored != null && stored.equals(layoutHash(structure));
    }

    private boolean owned(Structure structure) {
        String description = structure.getDescription();
        String stored = storedHash(description);
        return description != null && description.contains(MARKER) &&
            stored != null && stored.equals(layoutHash(structure));
    }

    private Structure ownerStructure(Function function) {
        String qualified = function.getName(true);
        int separator = qualified.lastIndexOf("::");
        if (separator <= 0 || qualified.startsWith("Library::")) return null;
        String owner = qualified.substring(0, separator);
        int nested = owner.lastIndexOf("::");
        String name = nested < 0 ? owner : owner.substring(nested + 2);
        DataType direct = dataTypes.getDataType("/" + name);
        if (direct instanceof Structure structure) return structure;
        List<DataType> matches = new ArrayList<>();
        dataTypes.findDataTypes(name, matches);
        Structure result = null;
        for (DataType match : matches) {
            if (!(match instanceof Structure structure) ||
                    structure.getPathName().contains("/VTables/")) continue;
            if (result != null && !result.getPathName().equals(structure.getPathName()))
                return null;
            result = structure;
        }
        return result;
    }

    private Structure structure(String path) {
        DataType type = dataTypes.getDataType(path);
        return type instanceof Structure structure ? structure : null;
    }

    private Structure pointedStructure(DataType type) {
        type = untypedef(type);
        if (!(type instanceof Pointer pointer)) return null;
        type = untypedef(pointer.getDataType());
        return type instanceof Structure structure ? structure : null;
    }

    private DataType untypedef(DataType type) {
        while (type instanceof TypeDef typedef) type = typedef.getBaseDataType();
        return type;
    }

    private int accessWidth(String rendered) {
        String type = rendered.replaceAll(
            "\\b(?:const|volatile|struct|class|enum)\\b", "")
            .trim().replaceAll("\\s+", " ");
        if (type.contains("*")) return currentProgram.getDefaultPointerSize();
        String lower = type.toLowerCase(Locale.ROOT);
        if (lower.matches("(?:bool|byte|char|uchar|undefined|undefined1|int8|uint8)"))
            return 1;
        if (lower.matches("(?:short|ushort|word|undefined2|int16|uint16)"))
            return 2;
        if (lower.matches("(?:int|uint|long|ulong|dword|undefined4|float|int32|uint32)"))
            return 4;
        if (lower.matches("(?:longlong|ulonglong|qword|undefined8|double|int64|uint64)"))
            return 8;
        DataType found = findType(type);
        return found == null ? -1 : found.getLength();
    }

    private String valueTypeSpecification(String rendered, int width) {
        String type = rendered.replaceAll(
            "\\b(?:const|volatile|struct|class|enum)\\b", "")
            .trim().replaceAll("\\s+", " ");
        if (type.endsWith("*")) {
            String base = type.substring(0, type.length() - 1).trim();
            DataType pointed = findType(base);
            return pointed == null ? "/undefined" + width :
                "pointer:" + pointed.getPathName();
        }
        DataType found = findType(type);
        return found == null || found.getLength() != width ?
            "/undefined" + width : found.getPathName();
    }

    private DataType findType(String name) {
        if (name == null || name.isBlank()) return null;
        DataType direct = dataTypes.getDataType(name.startsWith("/") ? name : "/" + name);
        if (direct != null) return direct;
        List<DataType> matches = new ArrayList<>();
        dataTypes.findDataTypes(name, matches);
        DataType result = null;
        for (DataType candidate : matches) {
            if (!candidate.getName().equals(name) &&
                    !candidate.getDisplayName().equals(name)) continue;
            if (result != null && !result.isEquivalent(candidate)) return null;
            result = candidate;
        }
        return result;
    }

    private int typeLength(String specification) {
        if (specification.startsWith("pointer:"))
            return currentProgram.getDefaultPointerSize();
        DataType type = dataTypes.getDataType(specification);
        return type == null ? -1 : type.getLength();
    }

    private String typeSpecification(DataType type) {
        type = untypedef(type);
        if (type instanceof Pointer pointer && pointer.getDataType() != null)
            return "pointer:" + typeSpecification(pointer.getDataType());
        return type == null ? "" : type.getPathName();
    }

    private boolean library(Function function) {
        return function.getTags().stream().anyMatch(tag -> tag.getName().equals("LIBRARY"));
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
        return sha256(value.toString());
    }

    private String storedHash(String description) {
        if (description == null) return null;
        int index = description.indexOf(HASH_MARKER);
        if (index < 0) return null;
        String value = description.substring(index + HASH_MARKER.length()).trim();
        if (value.length() < 64) return null;
        value = value.substring(0, 64);
        return value.matches("[0-9a-fA-F]{64}") ?
            value.toLowerCase(Locale.ROOT) : null;
    }

    private String sha256(String value) {
        try {
            byte[] digest = MessageDigest.getInstance("SHA-256")
                .digest(value.getBytes(StandardCharsets.UTF_8));
            StringBuilder result = new StringBuilder();
            for (byte item : digest)
                result.append(String.format("%02x", item & 0xff));
            return result.toString();
        }
        catch (Exception exception) {
            throw new IllegalStateException(exception);
        }
    }

    private File outputDirectory() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        return askDirectory("Select recovery output directory", "Select");
    }

    private Path programDirectory(File selected) {
        Path path = selected.toPath().toAbsolutePath().normalize();
        return path.getFileName() != null &&
            path.getFileName().toString().equals(currentProgram.getName()) ?
            path : path.resolve(currentProgram.getName());
    }

    private void writeProposals(Path path, List<Row> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\towner\towner_type_path\tfield_offset\tfield_name\t" +
                "expected_field_type\telement_size\telement_type_path\t" +
                "descriptor_type_path\tfield_count\taccess_count\tcreation_sites\t" +
                "source_records\tconfidence\treason\n");
            for (Row row : rows) out.write(bit(row.apply) + "\t" + row.owner +
                "\t" + row.ownerPath + "\t" + row.fieldOffset + "\t" +
                tsv(row.fieldName) + "\t" + row.expectedFieldType + "\t" +
                row.elementSize + "\t" + row.elementTypePath + "\t" +
                row.descriptorTypePath + "\t" + row.fieldCount + "\t" +
                row.accessCount + "\t" + tsv(row.creationSites) + "\t" +
                tsv(row.sourceRecords) + "\t" + row.confidence + "\t" +
                tsv(row.reason) + "\n");
        }
    }

    private void writeFields(Path path, List<FieldRow> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\telement_type_path\toffset\tsize\tproposed_name\t" +
                "proposed_type\tevidence_count\treason\n");
            for (FieldRow row : rows) out.write(bit(row.apply) + "\t" +
                row.elementTypePath + "\t" + row.offset + "\t" + row.size +
                "\t" + row.name + "\t" + row.type + "\t" + row.evidenceCount +
                "\t" + tsv(row.reason) + "\n");
        }
    }

    private void writeLocals(Path path, List<LocalRow> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\tfunction_address\towner\tfield_offset\t" +
                "rendered_alias\tassignment_address\texpected_alias_type\t" +
                "element_type_path\t" +
                "descriptor_type_path\tsplit_required\tconfidence\treason\n");
            for (LocalRow row : rows)
                out.write(bit(row.apply) + "\t" + row.functionAddress + "\t" +
                    row.owner + "\t" + row.fieldOffset + "\t" +
                    row.renderedAlias + "\t" + row.assignmentAddress + "\t" +
                    row.expectedAliasType + "\t" +
                    row.elementTypePath + "\t" + row.descriptorTypePath + "\t" +
                    bit(row.splitRequired) + "\t" + row.confidence + "\t" +
                    tsv(row.reason) + "\n");
        }
    }

    private void writeFailures(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("function_address\tfunction_name\treason\n");
            for (Failure failure : failures)
                out.write(addr(failure.function.getEntryPoint()) + "\t" +
                    tsv(failure.function.getName(true)) + "\t" +
                    tsv(failure.reason) + "\n");
        }
    }

    private void writeSummary(Path path, Analysis analysis) throws Exception {
        Files.write(path, List.of(
            "program=" + currentProgram.getName(),
            "functions_seen=" + functionsSeen,
            "creation_sites=" + creationSites,
            "containers=" + analysis.rows.size(),
            "apply=" + analysis.rows.stream().filter(row -> row.apply).count(),
            "element_aliases=" + elementAliases,
            "field_accesses=" + fieldAccesses,
            "inline_source_records=" + arrays.values().stream()
                .filter(value -> value.sourceBases.size() == 1).count(),
            "semantic_field_names=" + analysis.fields.stream()
                .filter(row -> !row.name.startsWith("field_")).count(),
            "local_type_proposals=" + analysis.locals.size(),
            "local_type_apply=" + analysis.locals.stream()
                .filter(row -> row.apply).count(),
            "local_assignment_sites=" + analysis.locals.stream()
                .filter(row -> !row.assignmentAddress.isBlank()).count(),
            "local_type_split_required=" + analysis.locals.stream()
                .filter(row -> row.apply && row.splitRequired).count(),
            "decompile_failures=" + failures.size(),
            "policy=exact DArrayCreate elementSize plus at least two non-overlapping " +
                "element fields and three accesses; exact inline source-record spans " +
                "and consumer roles may enrich the same specialization",
            "abi_safety=the generic DArrayTy ABI is retained; only its data member is " +
                "specialized to a recovered element pointer",
            "manual_safety=only hash-unchanged STClassLayoutApplier classes and " +
                "STDArrayElementApplier-owned specializations can mutate"
        ), StandardCharsets.UTF_8);
    }

    private static String addr(Address address) {
        return address == null ? "" :
            address.toString().toUpperCase(Locale.ROOT);
    }
    private static String leaf(String path) {
        return path.substring(path.lastIndexOf('/') + 1);
    }
    private static long unsigned(String value) {
        try { return Long.decode(value); }
        catch (NumberFormatException ignored) { return -1; }
    }
    private static String hex(long value) {
        return String.format("0x%X", value);
    }
    private static int bit(boolean value) { return value ? 1 : 0; }
    private static String tsv(String value) {
        if (value == null) return "";
        return value.replace("\\", "\\\\").replace("\t", "\\t")
            .replace("\r", "\\r").replace("\n", "\\n");
    }

    private record Key(String ownerPath, long offset) implements Comparable<Key> {
        @Override public int compareTo(Key other) {
            int owner = ownerPath.compareTo(other.ownerPath);
            return owner != 0 ? owner : Long.compare(offset, other.offset);
        }
    }
    private static class Evidence {
        final Key key;
        final String fieldName, expectedFieldType;
        final Map<Integer, Integer> elementSizes = new TreeMap<>();
        final TreeMap<Long, FieldEvidence> fields = new TreeMap<>();
        final Set<String> creationSites = new TreeSet<>();
        final Set<Address> creationFunctions = new TreeSet<>();
        final Set<String> functions = new TreeSet<>();
        final Set<Long> sourceBases = new TreeSet<>();
        final Set<String> sourceSites = new TreeSet<>();
        String existingElementPath = "", existingDescriptorPath = "";
        int accessCount;
        Evidence(Key key, String fieldName, String expectedFieldType) {
            this.key = key;
            this.fieldName = fieldName == null ? "" : fieldName;
            this.expectedFieldType = expectedFieldType;
        }
    }
    private static class FieldEvidence {
        final long offset;
        final Map<Integer, Integer> widths = new TreeMap<>();
        final Map<String, Integer> types = new TreeMap<>();
        final Map<String, Integer> roles = new TreeMap<>();
        final Map<String, Integer> sourceNames = new TreeMap<>();
        final Map<Address, Set<String>> expressions = new TreeMap<>();
        final Set<String> sites = new TreeSet<>();
        final Set<String> roleSites = new TreeSet<>();
        FieldEvidence(long offset) { this.offset = offset; }
    }
    private record Decompiled(Function function, Structure owner, String c,
        DecompileResults results) {}
    private record FieldTarget(long offset) {}
    private record PointerDeclaration(String elementType, int elementWidth) {}
    private record LocalCandidate(Address function, Key key, String alias,
        String assignmentAddress, String expectedAliasType,
        boolean splitRequired) {}
    private record SourceRecord(long baseOffset) {}
    private record SubjectRegion(String subject, int start, int end) {}
    private record RenderedCall(String name, List<String> arguments) {}
    private static class Row {
        final boolean apply;
        final String owner, ownerPath, fieldName, expectedFieldType,
            elementTypePath, descriptorTypePath, creationSites, sourceRecords,
            confidence, reason;
        final long fieldOffset;
        final int elementSize, fieldCount, accessCount;
        Row(boolean apply, Evidence evidence, int elementSize, String elementTypePath,
                String descriptorTypePath, int fieldCount, String confidence,
                String reason) {
            this.apply = apply;
            this.owner = leaf(evidence.key.ownerPath);
            this.ownerPath = evidence.key.ownerPath;
            this.fieldOffset = evidence.key.offset;
            this.fieldName = evidence.fieldName;
            this.expectedFieldType = evidence.expectedFieldType;
            this.elementSize = elementSize;
            this.elementTypePath = elementTypePath;
            this.descriptorTypePath = descriptorTypePath;
            this.fieldCount = fieldCount;
            this.accessCount = evidence.accessCount;
            this.creationSites = String.join(" | ", evidence.creationSites);
            this.sourceRecords = String.join(" | ", evidence.sourceSites);
            this.confidence = confidence;
            this.reason = reason;
        }
    }
    private record FieldRow(boolean apply, String elementTypePath, long offset,
        int size, String name, String type, int evidenceCount, String reason) {}
    private record LocalRow(boolean apply, String functionAddress, String owner,
        long fieldOffset, String renderedAlias, String assignmentAddress,
        String expectedAliasType,
        String elementTypePath, String descriptorTypePath, boolean splitRequired,
        String confidence, String reason) {}
    private record Failure(Function function, String reason) {}
    private record Analysis(List<Row> rows, List<FieldRow> fields,
        List<LocalRow> locals) {}
}
