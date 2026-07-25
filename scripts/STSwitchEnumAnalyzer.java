// Recover anonymous enum/state domains from decompiled switch statements and exact
// typed uses of script-generated enums. Read-only: emits switch_enum_proposals.tsv/jsonl.
// New parameter/generated-field targets and existing generated domains can be
// auto-applied; locals/globals remain review-only.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Analyze Switch Enums

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.LinkedHashMap;
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
import ghidra.program.model.data.AbstractIntegerDataType;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeComponent;
import ghidra.program.model.data.Enum;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.TypeDef;
import ghidra.program.model.data.Undefined;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.FunctionTag;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.symbol.SourceType;

public class STSwitchEnumAnalyzer extends GhidraScript {
    private static final String CASE_NAME = "CASE_(?:NEG_)?[0-9A-Fa-f]+";
    private static final String CASE_ATOM =
        "-?(?:0[xX][0-9a-fA-F]+|[0-9]+)|[A-Za-z_][A-Za-z0-9_:]*";
    private static final Pattern CASE = Pattern.compile(
        "\\bcase\\s+((?:" + CASE_ATOM + ")(?:\\s*\\|\\s*(?:" + CASE_ATOM + "))*)\\s*:");
    private static final Pattern POINTER_FIELD = Pattern.compile(
        "^([A-Za-z_][A-Za-z0-9_]*)->([A-Za-z_][A-Za-z0-9_]*)$");
    private static final Pattern POINTER_DECLARATION = Pattern.compile(
        "(?m)^\\s*(?:const\\s+)?(?:struct\\s+|class\\s+)?" +
        "([A-Za-z_][A-Za-z0-9_:]*)\\s*\\*+\\s*([A-Za-z_][A-Za-z0-9_]*)\\s*;");
    private static final Pattern LOCAL_DECLARATION = Pattern.compile(
        "(?m)^\\s*(?:const\\s+)?(?:enum\\s+)?" +
        "([A-Za-z_][A-Za-z0-9_:]*)\\s*(\\*+\\s*)?" +
        "([A-Za-z_][A-Za-z0-9_]*)\\s*(?:\\[[^;\\r\\n]+\\])?\\s*;");
    private static final Pattern FIELD_USE = Pattern.compile(
        "\\b([A-Za-z_][A-Za-z0-9_]*)->([A-Za-z_][A-Za-z0-9_]*)\\b");
    private static final Pattern CAST_TYPE = Pattern.compile(
        "\\(\\s*(?:const\\s+)?([A-Za-z_][A-Za-z0-9_:]*)\\s*\\*?\\s*\\)");
    private static final Pattern CASE_COMPOSITION = Pattern.compile(
        "\\b(" + CASE_NAME + "(?:\\s*\\|\\s*" + CASE_NAME + ")+)\\b");
    private static final Pattern COMPLEMENTED_CASE_COMPOSITION = Pattern.compile(
        "~\\s*\\(\\s*(" + CASE_NAME + "(?:\\s*\\|\\s*" + CASE_NAME + ")+)\\s*\\)");
    private static final Pattern ADDRESS_NAMED_CALL = Pattern.compile(
        "(?i)(?:thunk_)?(?:FUN|sub)_([0-9a-f]{8})$");
    private static final Pattern SIMPLE_LOCAL = Pattern.compile("^[A-Za-z_][A-Za-z0-9_]*$");
    private static final Pattern THIS_OFFSET = Pattern.compile(
        "\\bthis\\s*\\+\\s*(0[xX][0-9a-fA-F]+|[0-9]+)");
    private static final Pattern GLOBAL = Pattern.compile("^(?:_)?DAT_([0-9A-Fa-f]+)$");
    private static final String CLASS_MARKER = "[STClassLayoutApplier]";
    private static final String ENUM_MARKER = "[STSwitchEnumApplier]";

    private DecompInterface decompiler;

    @Override
    protected void run() throws Exception {
        // Read-only script: do not leave GhidraScript's implicit transaction around runScript().
        end(true);
        if (currentProgram == null) {
            printerr("Open the analyzed ST program first.");
            return;
        }
        File selected = outputDirectory();
        if (selected == null) return;
        Path directory = programDirectory(selected);
        Files.createDirectories(directory);
        Path domainStatePath = directory.resolve("switch_enum_domains.tsv");
        Map<String, DomainState> storedDomains = readDomains(domainStatePath);

        decompiler = new DecompInterface();
        decompiler.toggleCCode(true);
        decompiler.toggleSyntaxTree(false);
        decompiler.setSimplificationStyle("decompile");
        if (!decompiler.openProgram(currentProgram))
            throw new IllegalStateException("Could not open decompiler: " +
                decompiler.getLastMessage());

        Map<String, Proposal> grouped = new LinkedHashMap<>();
        Map<String, ObservedEnumDomain> observedEnums = new TreeMap<>();
        int candidateFunctions = 0, decompileRetries = 0, decompileFailures = 0,
            rawSwitches = 0;
        List<DecompileRetry> retries = new ArrayList<>();
        List<DecompileFailure> failures = new ArrayList<>();
        try {
            FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
            while (functions.hasNext()) {
                monitor.checkCancelled();
                Function function = functions.next();
                if (!isCandidate(function)) continue;
                candidateFunctions++;
                DecompileResults results = decompiler.decompileFunction(function, 30, monitor);
                if (!results.decompileCompleted() || results.getDecompiledFunction() == null) {
                    decompileRetries++;
                    String initialReason = decompiler.getLastMessage();
                    results = decompiler.decompileFunction(function, 120, monitor);
                    if (!results.decompileCompleted() || results.getDecompiledFunction() == null) {
                        decompileFailures++;
                        failures.add(new DecompileFailure(function, decompiler.getLastMessage()));
                        retries.add(new DecompileRetry(function, initialReason, "failed"));
                        continue;
                    }
                    retries.add(new DecompileRetry(function, initialReason, "recovered"));
                }
                String decompiled = results.getDecompiledFunction().getC();
                Map<String, String> pointerOwners = pointerOwners(function, decompiled);
                observeGeneratedEnumCompositions(function, decompiled, pointerOwners,
                    observedEnums);
                List<SwitchBlock> switches = switches(decompiled);
                rawSwitches += switches.size();
                for (int index = 0; index < switches.size(); index++) {
                    SwitchBlock block = switches.get(index);
                    Target target = target(function, block.expression, index, pointerOwners);
                    Set<Long> values = block.values(target.type);
                    // Three arms are still required to create a new enum. Once the
                    // target is script-owned, even one new exact arm is enough to
                    // grow its monotonic domain.
                    if (values.size() < 3 && !isGeneratedEnum(target.type)) continue;
                    // A reviewed/semantic enum that already covers every observed arm is a
                    // fixed point, not evidence for another address-derived enum. Generated
                    // switch enums are deliberately excluded so they can still grow when a
                    // later decompilation exposes additional cases.
                    if (semanticEnumCovers(target.type, values)) continue;
                    String key = target.groupKey(function, index);
                    Proposal proposal = grouped.get(key);
                    if (proposal == null) {
                        proposal = proposal(function, target);
                        proposal.values.addAll(generatedEnumValues(target.type));
                        grouped.put(key, proposal);
                    }
                    proposal.values.addAll(values);
                    proposal.expressions.add(block.expression);
                    proposal.switchSites.add(addr(function.getEntryPoint()) + ":" + index);
                    proposal.evidenceFunctions.add(addr(function.getEntryPoint()));
                }
            }
        }
        finally {
            decompiler.dispose();
        }

        List<Proposal> proposals = new ArrayList<>();
        for (Proposal proposal : grouped.values())
            if (proposal.values.size() >= 3) proposals.add(proposal);
        proposals.sort(Comparator.comparing((Proposal p) -> p.functionAddress)
            .thenComparing(p -> p.targetKind).thenComparing(p -> p.targetName));
        makeEnumNamesUnique(proposals);
        mergeObservedEnums(proposals, observedEnums);
        proposals.sort(Comparator.comparing((Proposal p) -> p.functionAddress)
            .thenComparing(p -> p.targetKind).thenComparing(p -> p.targetName));
        for (Proposal proposal : proposals) {
            DomainState stored = storedDomains.get(proposal.enumName);
            if (stored != null && stored.length == proposal.enumLength)
                proposal.values.addAll(stored.values);
            proposal.finish();
        }
        writeDomains(domainStatePath, storedDomains, proposals);

        writeTsv(directory.resolve("switch_enum_proposals.tsv"), proposals);
        writeJson(directory.resolve("switch_enum_proposals.jsonl"), proposals);
        writeRetries(directory.resolve("switch_enum_decompile_retries.tsv"), retries);
        writeFailures(directory.resolve("switch_enum_decompile_failures.tsv"), failures);
        writeSummary(directory.resolve("switch_enum_summary.txt"), proposals,
            candidateFunctions, rawSwitches, decompileRetries, decompileFailures);
        long auto = proposals.stream().filter(proposal -> proposal.apply).count();
        println("Switch-enum analysis complete: " + directory.toAbsolutePath().normalize());
        println("Candidate functions: " + candidateFunctions + ", switches: " + rawSwitches +
            ", proposals: " + proposals.size() + ", auto_apply: " + auto +
            ", decompile retries: " + decompileRetries +
            ", failures: " + decompileFailures);
    }

    private boolean isCandidate(Function function) {
        if (function.isThunk() || function.isExternal() || isExcludedLibrary(function)) return false;
        for (Parameter parameter : function.getParameters())
            if (generatedEnum(parameter.getDataType()) != null) return true;
        Structure owner = ownerStructure(functionOwner(function));
        if (owner != null) {
            for (DataTypeComponent component : owner.getDefinedComponents())
                if (generatedEnum(component.getDataType()) != null) return true;
        }
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            if (instruction.getFlowType().isComputed() && instruction.getFlowType().isJump())
                return true;
            if (!instruction.getFlowType().isCall()) continue;
            for (Address flow : instruction.getFlows()) {
                Function callee = currentProgram.getFunctionManager().getFunctionAt(flow);
                if (callee == null) continue;
                if (callee.isThunk() && callee.getThunkedFunction(true) != null)
                    callee = callee.getThunkedFunction(true);
                for (Parameter parameter : callee.getParameters())
                    if (generatedEnum(parameter.getDataType()) != null) return true;
            }
        }
        return false;
    }

    private List<SwitchBlock> switches(String c) {
        List<SwitchBlock> result = new ArrayList<>();
        int cursor = 0;
        while (cursor < c.length()) {
            int word = wordAt(c, "switch", cursor);
            if (word < 0) break;
            int open = c.indexOf('(', word + 6);
            if (open < 0) break;
            int close = matching(c, open, '(', ')');
            if (close < 0) break;
            int brace = c.indexOf('{', close + 1);
            if (brace < 0) { cursor = close + 1; continue; }
            int end = matching(c, brace, '{', '}');
            if (end < 0) break;
            String expression = c.substring(open + 1, close).trim();
            result.add(new SwitchBlock(expression, new TreeSet<>(), brace, end));
            // Do not jump to the closing brace: nested switches are independent
            // evidence sources and must be discovered as well.
            cursor = word + 6;
        }
        Matcher matcher = CASE.matcher(c);
        while (matcher.find()) {
            SwitchBlock owner = null;
            for (SwitchBlock candidate : result) {
                if (matcher.start() <= candidate.bodyStart ||
                        matcher.start() >= candidate.bodyEnd) continue;
                if (owner == null ||
                        candidate.bodyEnd - candidate.bodyStart <
                            owner.bodyEnd - owner.bodyStart)
                    owner = candidate;
            }
            // A case belongs to the innermost switch body that contains it.
            if (owner != null) owner.cases.add(matcher.group(1));
        }
        return result;
    }

    private Target target(Function function, String expression, int switchIndex,
            Map<String, String> pointerOwners) {
        String normalized = normalize(expression);
        for (Parameter parameter : function.getParameters()) {
            if (parameter.isAutoParameter()) continue;
            if (normalized.equals(parameter.getName())) {
                return new Target("parameter", parameter.getName(), parameter.getOrdinal(), -1,
                    "", parameter.getDataType(), parameter.getSource(), functionOwner(function),
                    "exact_parameter_switch_expression");
            }
        }

        String owner = functionOwner(function);
        Structure ownerType = ownerStructure(owner);
        Matcher fieldMatcher = POINTER_FIELD.matcher(normalized);
        if (fieldMatcher.matches()) {
            String pointerName = fieldMatcher.group(1);
            String fieldOwner = pointerOwners.get(pointerName);
            Structure fieldOwnerType = ownerStructure(fieldOwner);
            String fieldName = fieldMatcher.group(2);
            if (fieldOwnerType != null) for (DataTypeComponent component :
                    fieldOwnerType.getDefinedComponents()) {
                if (!fieldName.equals(component.getFieldName())) continue;
                return new Target("class_field", fieldName, -1, component.getOffset(),
                    fieldOwnerType.getPathName(), component.getDataType(), SourceType.ANALYSIS,
                    fieldOwner, "typed_pointer_field_switch_expression:" + pointerName);
            }
        }
        Matcher offsetMatcher = THIS_OFFSET.matcher(expression);
        if (ownerType != null && offsetMatcher.find()) {
            Long offset = number(offsetMatcher.group(1));
            if (offset != null && offset >= 0 && offset <= Integer.MAX_VALUE) {
                DataTypeComponent component = ownerType.getComponentAt(offset.intValue());
                if (component != null && component.getOffset() == offset.intValue()) {
                    return new Target("class_field",
                        component.getFieldName() == null ? String.format("field_%04X", offset) :
                            component.getFieldName(), -1, offset, ownerType.getPathName(),
                        component.getDataType(), SourceType.ANALYSIS, owner,
                        "this_offset_switch_expression");
                }
            }
        }

        Matcher globalMatcher = GLOBAL.matcher(normalized);
        if (globalMatcher.matches()) {
            Address address = currentProgram.getAddressFactory().getAddress(globalMatcher.group(1));
            Data data = address == null ? null : currentProgram.getListing().getDefinedDataAt(address);
            return new Target("global", normalized, -1, -1,
                address == null ? "" : address.toString().toUpperCase(Locale.ROOT),
                data == null ? null : data.getDataType(), SourceType.DEFAULT, owner,
                "global_switch_expression_review_required");
        }
        String localName = SIMPLE_LOCAL.matcher(normalized).matches() ? normalized :
            "switch_" + switchIndex;
        String localReason = SIMPLE_LOCAL.matcher(normalized).matches() ?
            "decompiler_local_switch_expression_review_required" :
            "local_or_complex_switch_expression_review_required";
        return new Target("local", localName, -1, -1, "", null,
            SourceType.DEFAULT, owner, localReason);
    }

    private Map<String, String> pointerOwners(Function function, String decompiled) {
        Map<String, String> result = new LinkedHashMap<>();
        String owner = functionOwner(function);
        if (!owner.isBlank()) result.put("this", owner);
        for (Parameter parameter : function.getParameters()) {
            String pointed = pointedOwner(parameter.getDataType());
            if (pointed != null) result.put(parameter.getName(), pointed);
        }
        Matcher declaration = POINTER_DECLARATION.matcher(decompiled);
        while (declaration.find()) {
            String declaredType = declaration.group(1);
            if (ownerStructure(declaredType) != null)
                result.put(declaration.group(2), declaredType);
        }
        return result;
    }

    /**
     * Mine exact values that Ghidra renders as CASE_A|CASE_B from variables,
     * fields, casts, and direct call arguments whose data type is already an
     * enum owned by this script.  This never creates a semantic/manual enum and
     * never changes a non-generated target: it only grows an existing generated
     * domain from a value that the decompiler itself typed as that enum.
     */
    private void observeGeneratedEnumCompositions(Function function, String decompiled,
            Map<String, String> pointerOwners,
            Map<String, ObservedEnumDomain> observed) {
        Map<String, Enum> variables = new LinkedHashMap<>();
        for (Parameter parameter : function.getParameters()) {
            Enum type = generatedEnum(parameter.getDataType());
            if (type != null) variables.put(parameter.getName(), type);
        }
        Matcher declaration = LOCAL_DECLARATION.matcher(decompiled);
        while (declaration.find()) {
            Enum type = generatedEnumNamed(declaration.group(1));
            if (type != null) variables.put(declaration.group(3), type);
        }

        String[] lines = decompiled.split("\\R", -1);
        for (String line : lines) {
            List<Composition> compositions = compositions(line);
            if (compositions.isEmpty()) continue;
            for (Composition composition : compositions) {
                Map<String, Enum> candidates = new LinkedHashMap<>();
                for (Map.Entry<String, Enum> entry : variables.entrySet())
                    if (containsIdentifier(line, entry.getKey()))
                        candidates.put(entry.getValue().getPathName(), entry.getValue());

                Matcher field = FIELD_USE.matcher(line);
                while (field.find()) {
                    Structure structure = ownerStructure(pointerOwners.get(field.group(1)));
                    if (structure == null) continue;
                    for (DataTypeComponent component : structure.getDefinedComponents()) {
                        if (!field.group(2).equals(component.getFieldName())) continue;
                        Enum type = generatedEnum(component.getDataType());
                        if (type != null) candidates.put(type.getPathName(), type);
                        break;
                    }
                }

                Matcher cast = CAST_TYPE.matcher(line);
                while (cast.find()) {
                    Enum type = generatedEnumNamed(cast.group(1));
                    if (type != null) candidates.put(type.getPathName(), type);
                }
                Enum called = calledParameterEnum(line, composition.start);
                if (called != null) candidates.put(called.getPathName(), called);

                List<EnumValueCandidate> exact = new ArrayList<>();
                for (Enum candidate : candidates.values()) {
                    Long value = typedCompositionValue(composition.expression, candidate);
                    if (value == null) continue;
                    if (composition.complemented)
                        value = complementedValue(candidate, value);
                    if (fits(candidate, value))
                        exact.add(new EnumValueCandidate(candidate, value));
                }
                if (exact.size() != 1) continue;
                EnumValueCandidate value = exact.get(0);
                ObservedEnumDomain domain = observed.computeIfAbsent(
                    value.type.getPathName(), ignored -> new ObservedEnumDomain(value.type));
                domain.values.add(value.value);
                domain.expressions.add((composition.complemented ? "~(" : "") +
                    composition.expression + (composition.complemented ? ")" : ""));
                domain.evidenceFunctions.add(addr(function.getEntryPoint()));
                if (domain.functionAddress == null) {
                    domain.functionAddress = function.getEntryPoint();
                    domain.expectedFunction = function.getName(true);
                    domain.expectedSignature =
                        function.getSignature().getPrototypeString(true);
                }
            }
        }
    }

    private List<Composition> compositions(String line) {
        List<Composition> result = new ArrayList<>();
        List<int[]> complementedRanges = new ArrayList<>();
        Matcher complemented = COMPLEMENTED_CASE_COMPOSITION.matcher(line);
        while (complemented.find()) {
            result.add(new Composition(complemented.start(), complemented.end(),
                complemented.group(1), true));
            complementedRanges.add(new int[] { complemented.start(), complemented.end() });
        }
        Matcher direct = CASE_COMPOSITION.matcher(line);
        while (direct.find()) {
            boolean insideComplement = false;
            for (int[] range : complementedRanges)
                if (direct.start() >= range[0] && direct.end() <= range[1]) {
                    insideComplement = true;
                    break;
                }
            if (!insideComplement)
                result.add(new Composition(direct.start(), direct.end(),
                    direct.group(1), false));
        }
        return result;
    }

    private Long typedCompositionValue(String expression, Enum type) {
        Set<String> names = Set.of(type.getNames());
        long result = 0;
        boolean found = false;
        for (String item : expression.split("\\s*\\|\\s*")) {
            int separator = item.lastIndexOf("::");
            String name = separator < 0 ? item : item.substring(separator + 2);
            if (!names.contains(name)) return null;
            result |= type.getValue(name);
            found = true;
        }
        return found ? result : null;
    }

    private long complementedValue(Enum type, long value) {
        int bits = type.getLength() * 8;
        if (bits >= 64) return ~value;
        long mask = (1L << bits) - 1;
        return (~value) & mask;
    }

    private Enum calledParameterEnum(String line, int expressionStart) {
        for (int open = expressionStart - 1; open >= 0; open--) {
            if (line.charAt(open) != '(') continue;
            int close = matching(line, open, '(', ')');
            if (close < expressionStart) continue;
            String prefix = line.substring(0, open).stripTrailing();
            int start = prefix.length();
            while (start > 0) {
                char ch = prefix.charAt(start - 1);
                if (!Character.isJavaIdentifierPart(ch) && ch != ':') break;
                start--;
            }
            if (start == prefix.length()) continue;
            String callName = prefix.substring(start);
            Matcher addressName = ADDRESS_NAMED_CALL.matcher(callName);
            if (!addressName.find()) continue;
            Address address = currentProgram.getAddressFactory().getAddress(addressName.group(1));
            Function callee = address == null ? null :
                currentProgram.getFunctionManager().getFunctionAt(address);
            if (callee == null) continue;
            if (callee.isThunk() && callee.getThunkedFunction(true) != null)
                callee = callee.getThunkedFunction(true);
            int argument = argumentIndex(line, open + 1, expressionStart);
            Parameter[] parameters = callee.getParameters();
            if (argument < 0 || argument >= parameters.length) continue;
            Enum type = generatedEnum(parameters[argument].getDataType());
            if (type != null) return type;
        }
        return null;
    }

    private int argumentIndex(String line, int start, int end) {
        int index = 0, parentheses = 0, brackets = 0, braces = 0;
        for (int cursor = start; cursor < end; cursor++) {
            char ch = line.charAt(cursor);
            if (ch == '(') parentheses++;
            else if (ch == ')') parentheses--;
            else if (ch == '[') brackets++;
            else if (ch == ']') brackets--;
            else if (ch == '{') braces++;
            else if (ch == '}') braces--;
            else if (ch == ',' && parentheses == 0 && brackets == 0 && braces == 0) index++;
        }
        return index;
    }

    private boolean containsIdentifier(String text, String name) {
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

    private Enum generatedEnumNamed(String name) {
        String simple = leaf(name);
        List<DataType> matches = new ArrayList<>();
        currentProgram.getDataTypeManager().findDataTypes(simple, matches);
        for (DataType match : matches) {
            Enum type = generatedEnum(match);
            if (type != null && type.getName().equals(simple)) return type;
        }
        return null;
    }

    private Enum generatedEnum(DataType type) {
        while (type instanceof TypeDef value) type = value.getBaseDataType();
        if (type instanceof Pointer pointer) {
            type = pointer.getDataType();
            while (type instanceof TypeDef value) type = value.getBaseDataType();
        }
        if (!(type instanceof Enum value)) return null;
        String description = value.getDescription();
        return description != null && description.contains(ENUM_MARKER) ? value : null;
    }

    private boolean isGeneratedEnum(DataType type) {
        return generatedEnum(type) != null;
    }

    private boolean fits(Enum type, long value) {
        int bits = type.getLength() * 8;
        if (bits >= 64) return true;
        long signedMinimum = -(1L << (bits - 1));
        long unsignedMaximum = (1L << bits) - 1;
        return value >= signedMinimum && value <= unsignedMaximum;
    }

    private void mergeObservedEnums(List<Proposal> proposals,
            Map<String, ObservedEnumDomain> observed) {
        for (ObservedEnumDomain domain : observed.values()) {
            Proposal proposal = null;
            for (Proposal candidate : proposals) {
                if (candidate.expectedTargetType.equals(domain.type.getPathName()) ||
                        candidate.enumName.equals(domain.type.getName())) {
                    proposal = candidate;
                    break;
                }
            }
            if (proposal == null) {
                proposal = new Proposal(domain.functionAddress, domain.expectedFunction,
                    domain.expectedSignature, "generated_enum", domain.type.getName(),
                    -1, -1, domain.type.getPathName(), "", domain.type.getPathName(),
                    SourceType.ANALYSIS.toString(), domain.type.getName(),
                    domain.type.getLength(), true, "high",
                    "exact_typed_generated_enum_composition; script_owned_domain_growth");
                for (String name : domain.type.getNames())
                    proposal.values.add(domain.type.getValue(name));
                proposals.add(proposal);
            }
            proposal.values.addAll(domain.values);
            proposal.expressions.addAll(domain.expressions);
            proposal.evidenceFunctions.addAll(domain.evidenceFunctions);
            for (String address : domain.evidenceFunctions)
                proposal.switchSites.add(address + ":typed_enum_use");
        }
    }

    private String pointedOwner(DataType type) {
        while (type instanceof TypeDef value) type = value.getBaseDataType();
        if (!(type instanceof Pointer pointer)) return null;
        DataType pointed = pointer.getDataType();
        while (pointed instanceof TypeDef value) pointed = value.getBaseDataType();
        if (!(pointed instanceof Structure)) return null;
        return pointed.getName();
    }

    private Proposal proposal(Function function, Target target) {
        String owner = target.owner.isBlank() ? "Global" : target.owner;
        String method = isSynthetic(function.getName()) ? "sub_" + addr(function.getEntryPoint()) :
            function.getName();
        String targetPart = target.targetName.isBlank() ? "state" : target.targetName;
        String enumName = "class_field".equals(target.kind) ?
            sanitize(owner + "_" + targetPart + "State") :
            sanitize(owner + "_" + method + "_" + targetPart + "Enum");
        int length = target.type == null || target.type.getLength() < 1 ||
            target.type.getLength() > 4 ? 4 : target.type.getLength();
        boolean generatedField = "class_field".equals(target.kind) &&
            target.containerPath != null && !target.containerPath.isBlank() &&
            isGeneratedClass(target.containerPath);
        boolean apply = target.type != null && isSafeScalarType(target.type) &&
            (("parameter".equals(target.kind) && target.source != SourceType.USER_DEFINED) ||
                generatedField);
        String confidence = apply ? "high" : "review";
        String reason = target.reason + (apply ? "; integral_generated_or_nonmanual_target" :
            "; target_not_safe_for_automatic_type_change");
        return new Proposal(function.getEntryPoint(), function.getName(true),
            function.getSignature().getPrototypeString(true), target.kind, target.targetName,
            target.ordinal, target.offset, target.containerPath, owner,
            target.type == null ? "" : target.type.getPathName(), target.source.toString(),
            enumName, length, apply, confidence, reason);
    }

    private boolean isGeneratedClass(String path) {
        DataType type = currentProgram.getDataTypeManager().getDataType(path);
        if (!(type instanceof Structure structure)) return false;
        String description = structure.getDescription();
        return description != null && description.contains(CLASS_MARKER);
    }

    private boolean isIntegral(DataType type) {
        if (type instanceof Enum || type instanceof Pointer) return false;
        return (type instanceof AbstractIntegerDataType || Undefined.isUndefined(type)) &&
            type.getLength() >= 1 && type.getLength() <= 4;
    }

    private boolean isSafeScalarType(DataType type) {
        if (isIntegral(type)) return true;
        if (!(type instanceof Enum value)) return false;
        String description = value.getDescription();
        return description != null && description.contains(ENUM_MARKER) &&
            value.getLength() >= 1 && value.getLength() <= 4;
    }

    private boolean semanticEnumCovers(DataType type, Set<Long> values) {
        if (!(type instanceof Enum current)) return false;
        String description = current.getDescription();
        if (description != null && description.contains(ENUM_MARKER)) return false;
        Set<Long> defined = new TreeSet<>();
        for (String name : current.getNames()) defined.add(current.getValue(name));
        return defined.containsAll(values);
    }

    private Set<Long> generatedEnumValues(DataType type) {
        if (!(type instanceof Enum current)) return Set.of();
        String description = current.getDescription();
        if (description == null || !description.contains(ENUM_MARKER)) return Set.of();
        Set<Long> result = new TreeSet<>();
        for (String name : current.getNames()) result.add(current.getValue(name));
        return result;
    }

    private Structure ownerStructure(String owner) {
        if (owner == null || owner.isBlank()) return null;
        String name = leaf(owner);
        DataType direct = currentProgram.getDataTypeManager().getDataType("/" + name);
        if (direct instanceof Structure) return (Structure)direct;
        List<DataType> matches = new ArrayList<>();
        currentProgram.getDataTypeManager().findDataTypes(name, matches);
        for (DataType match : matches)
            if (match instanceof Structure && !match.getPathName().contains("/VTables/"))
                return (Structure)match;
        return null;
    }

    private String functionOwner(Function function) {
        String qualified = function.getName(true);
        int separator = qualified.lastIndexOf("::");
        if (separator <= 0) return "";
        String owner = qualified.substring(0, separator);
        return owner.equals("Global") || owner.startsWith("Library::") ? "" : owner;
    }

    private String normalize(String expression) {
        String value = expression.trim().replaceAll("\\s+", " ");
        boolean changed;
        do {
            changed = false;
            if (value.startsWith("(") && matching(value, 0, '(', ')') == value.length() - 1) {
                value = value.substring(1, value.length() - 1).trim();
                changed = true;
            }
            Matcher cast = Pattern.compile(
                "^\\((?:unsigned|signed|const|struct|class|enum|[A-Za-z_][A-Za-z0-9_:]*|\\s|\\*)+\\)\\s*(.+)$")
                .matcher(value);
            if (cast.matches()) {
                value = cast.group(1).trim();
                changed = true;
            }
        } while (changed);
        return value;
    }

    private int wordAt(String text, String word, int from) {
        int index = from;
        while ((index = text.indexOf(word, index)) >= 0) {
            boolean before = index == 0 || !Character.isJavaIdentifierPart(text.charAt(index - 1));
            int afterIndex = index + word.length();
            boolean after = afterIndex >= text.length() ||
                !Character.isJavaIdentifierPart(text.charAt(afterIndex));
            if (before && after) return index;
            index = afterIndex;
        }
        return -1;
    }

    private int matching(String text, int open, char openChar, char closeChar) {
        int depth = 0;
        for (int index = open; index < text.length(); index++) {
            char ch = text.charAt(index);
            if (ch == openChar) depth++;
            else if (ch == closeChar && --depth == 0) return index;
        }
        return -1;
    }

    private Long number(String value) {
        try {
            boolean negative = value.startsWith("-");
            String digits = negative ? value.substring(1) : value;
            long result = digits.startsWith("0x") || digits.startsWith("0X") ?
                Long.parseUnsignedLong(digits.substring(2), 16) : Long.parseLong(digits);
            return negative ? -result : result;
        }
        catch (Exception exception) { return null; }
    }

    private void makeEnumNamesUnique(List<Proposal> proposals) {
        Map<String, List<Proposal>> groups = new TreeMap<>();
        for (Proposal proposal : proposals)
            groups.computeIfAbsent(proposal.enumName, ignored -> new ArrayList<>()).add(proposal);
        for (List<Proposal> group : groups.values()) {
            if (group.size() < 2) continue;
            for (Proposal proposal : group)
                proposal.enumName += "_" + addr(proposal.functionAddress);
        }
    }

    private Map<String, DomainState> readDomains(Path path) throws Exception {
        Map<String, DomainState> result = new TreeMap<>();
        if (!Files.isRegularFile(path)) return result;
        List<String> lines = Files.readAllLines(path, StandardCharsets.UTF_8);
        if (lines.isEmpty() || !"enum_name\tenum_length\tvalues".equals(lines.get(0)))
            throw new IllegalStateException("Invalid switch enum domain state: " + path);
        for (int line = 1; line < lines.size(); line++) {
            if (lines.get(line).isBlank()) continue;
            String[] fields = lines.get(line).split("\t", -1);
            if (fields.length != 3)
                throw new IllegalStateException("Invalid switch enum domain row " + (line + 1));
            int length = Integer.parseInt(fields[1]);
            Set<Long> values = new TreeSet<>();
            for (String item : fields[2].split(";", -1)) {
                if (item.isBlank()) continue;
                int separator = item.lastIndexOf("=");
                if (separator <= 0)
                    throw new IllegalStateException("Invalid switch enum domain value " + item);
                values.add(Long.parseLong(item.substring(separator + 1)));
            }
            result.put(fields[0], new DomainState(length, values));
        }
        return result;
    }

    private void writeDomains(Path path, Map<String, DomainState> stored,
            List<Proposal> proposals) throws Exception {
        Map<String, DomainState> merged = new TreeMap<>();
        for (Map.Entry<String, DomainState> entry : stored.entrySet())
            merged.put(entry.getKey(), new DomainState(entry.getValue().length,
                new TreeSet<>(entry.getValue().values)));
        for (Proposal proposal : proposals) {
            DomainState state = merged.get(proposal.enumName);
            if (state == null || state.length != proposal.enumLength) {
                state = new DomainState(proposal.enumLength, new TreeSet<>());
                merged.put(proposal.enumName, state);
            }
            state.values.addAll(proposal.values);
        }
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("enum_name\tenum_length\tvalues\n");
            for (Map.Entry<String, DomainState> entry : merged.entrySet())
                out.write(entry.getKey() + "\t" + entry.getValue().length + "\t" +
                    entry.getValue().valueText() + "\n");
        }
    }

    private void writeTsv(Path path, List<Proposal> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\tfunction_address\texpected_function\texpected_signature\t" +
                "evidence_functions\tswitch_indexes\texpressions\ttarget_kind\ttarget_name\ttarget_ordinal\t" +
                "field_offset\ttarget_container\towner\texpected_target_type\t" +
                "expected_target_source\tenum_name\tenum_length\tvalues\tconfidence\treason\n");
            for (Proposal p : rows) out.write(bit(p.apply) + "\t" + addr(p.functionAddress) +
                "\t" + tsv(p.expectedFunction) + "\t" + tsv(p.expectedSignature) + "\t" +
                tsv(String.join(" | ", p.evidenceFunctions)) + "\t" +
                tsv(p.indexText()) + "\t" + tsv(String.join(" | ", p.expressions)) + "\t" +
                p.targetKind + "\t" + tsv(p.targetName) + "\t" +
                (p.targetOrdinal < 0 ? "" : p.targetOrdinal) + "\t" +
                (p.fieldOffset < 0 ? "" : p.fieldOffset) + "\t" + tsv(p.targetContainer) +
                "\t" + tsv(p.owner) + "\t" + tsv(p.expectedTargetType) + "\t" +
                p.expectedTargetSource + "\t" + p.enumName + "\t" + p.enumLength + "\t" +
                tsv(p.valueText()) + "\t" + p.confidence + "\t" + tsv(p.reason) + "\n");
        }
    }

    private void writeJson(Path path, List<Proposal> rows) throws Exception {
        List<String> output = new ArrayList<>();
        for (Proposal p : rows) output.add("{\"apply\":" + p.apply +
            ",\"function_address\":" + q(addr(p.functionAddress)) +
            ",\"evidence_functions\":" + q(String.join(" | ", p.evidenceFunctions)) +
            ",\"target_kind\":" + q(p.targetKind) + ",\"target_name\":" + q(p.targetName) +
            ",\"owner\":" + q(p.owner) + ",\"enum_name\":" + q(p.enumName) +
            ",\"enum_length\":" + p.enumLength + ",\"values\":" + q(p.valueText()) +
            ",\"confidence\":" + q(p.confidence) + ",\"reason\":" + q(p.reason) + "}");
        Files.write(path, output, StandardCharsets.UTF_8);
    }

    private void writeFailures(Path path, List<DecompileFailure> failures) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("function_address\tfunction\treason\n");
            for (DecompileFailure failure : failures)
                out.write(addr(failure.function.getEntryPoint()) + "\t" +
                    tsv(failure.function.getName(true)) + "\t" +
                    tsv(failure.reason) + "\n");
        }
    }

    private void writeRetries(Path path, List<DecompileRetry> retries) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("function_address\tfunction\tinitial_reason\tstatus\n");
            for (DecompileRetry retry : retries)
                out.write(addr(retry.function.getEntryPoint()) + "\t" +
                    tsv(retry.function.getName(true)) + "\t" +
                    tsv(retry.initialReason) + "\t" + retry.status + "\n");
        }
    }

    private void writeSummary(Path path, List<Proposal> rows, int functions, int switches,
            int retries, int failures) throws Exception {
        Map<String, Long> kinds = new TreeMap<>();
        for (Proposal row : rows) kinds.merge(row.targetKind, 1L, Long::sum);
        Files.write(path, List.of("program=" + currentProgram.getName(),
            "candidate_functions=" + functions, "switches_seen=" + switches,
            "decompile_retries=" + retries, "decompile_failures=" + failures,
            "proposals=" + rows.size(),
            "auto_apply=" + rows.stream().filter(row -> row.apply).count(),
            "target_kinds=" + kinds,
            "note=At least three numeric case values are required to create a new enum; an existing script-owned enum can grow from one exact typed value.",
            "note_nested_switches=Case labels are assigned to their innermost switch; nested switches are analyzed independently.",
            "note_compositions=Exact CASE_A|CASE_B and ~(CASE_A|CASE_B) values grow only an already script-owned enum when the typed operand is unambiguous.",
            "note_grouping=Switches over the same generated class field are merged across functions.",
            "note_aliases=Typed pointer aliases from decompiled declarations are resolved before field grouping.",
            "note_local_grouping=Repeated simple local expressions are merged only within one function and remain review-only.",
            "note_apply=Only non-manual integral parameters, fields owned by " +
                "STClassLayoutApplier, and provenance-owned generated-enum growth are " +
                "enabled automatically."), StandardCharsets.UTF_8);
    }

    private boolean isExcludedLibrary(Function function) {
        boolean library = false, ourlib = false;
        for (FunctionTag tag : function.getTags()) {
            String name = tag.getName();
            if ("LIBRARY".equals(name) || name.startsWith("LIBRARY_")) library = true;
            if (name.startsWith("LIBRARY_OURLIB_")) ourlib = true;
        }
        // Internal Ourlib code is excluded from the final decompilation corpus, but its
        // state domains are part of the recovered game API and must remain discoverable
        // on later analyzer reruns.  Only third-party/runtime library switches are noise.
        return library && !ourlib;
    }

    private Path programDirectory(File selected) {
        Path path = selected.toPath().toAbsolutePath().normalize();
        if (Files.isRegularFile(path.resolve("vtable_proposals.tsv")) ||
                Files.isRegularFile(path.resolve("class_layout_proposals.tsv"))) return path;
        return path.resolve(safe(currentProgram.getName()));
    }

    private File outputDirectory() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless()) throw new IllegalArgumentException("Recovery directory required");
        return askDirectory("Select recovery output directory", "Analyze switch enums");
    }

    private boolean isSynthetic(String name) {
        return name.startsWith("FUN_") || name.startsWith("thunk_FUN_") ||
            name.startsWith("SUB_") || name.startsWith("LAB_");
    }
    private static String leaf(String owner) {
        int separator = owner.lastIndexOf("::");
        return separator < 0 ? owner : owner.substring(separator + 2);
    }
    private static String addr(Address value) {
        return value == null ? "" : value.toString().toUpperCase(Locale.ROOT);
    }
    private static String sanitize(String value) {
        String result = value.replace("::", "_").replaceAll("[^A-Za-z0-9_]", "_")
            .replaceAll("_+", "_");
        if (!result.isEmpty() && Character.isDigit(result.charAt(0))) result = "_" + result;
        return result;
    }
    private static String safe(String value) {
        return value.replaceAll("[^A-Za-z0-9._-]+", "_");
    }
    private static String bit(boolean value) { return value ? "1" : "0"; }
    private static String tsv(String value) {
        return value.replace("\\", "\\\\").replace("\t", "\\t")
            .replace("\r", "\\r").replace("\n", "\\n");
    }
    private static String q(String value) {
        return "\"" + value.replace("\\", "\\\\").replace("\"", "\\\"")
            .replace("\r", "\\r").replace("\n", "\\n") + "\"";
    }

    private static class DecompileRetry {
        final Function function;
        final String initialReason, status;
        DecompileRetry(Function function, String initialReason, String status) {
            this.function = function;
            this.initialReason = initialReason == null ? "" : initialReason;
            this.status = status;
        }
    }

    private static class DecompileFailure {
        final Function function;
        final String reason;
        DecompileFailure(Function function, String reason) {
            this.function = function;
            this.reason = reason == null ? "" : reason;
        }
    }

    private static class SwitchBlock {
        final String expression;
        final Set<String> cases;
        final int bodyStart, bodyEnd;
        SwitchBlock(String expression, Set<String> cases, int bodyStart, int bodyEnd) {
            this.expression = expression; this.cases = cases;
            this.bodyStart = bodyStart; this.bodyEnd = bodyEnd;
        }
        Set<Long> values(DataType targetType) {
            Set<Long> result = new TreeSet<>();
            Enum targetEnum = targetType instanceof Enum ? (Enum)targetType : null;
            Set<String> enumNames = targetEnum == null ? Set.of() :
                Set.of(targetEnum.getNames());
            for (String item : cases) {
                Long value = valueExpression(item, targetEnum, enumNames);
                if (value != null) result.add(value);
            }
            return result;
        }
        private static Long valueExpression(String expression, Enum targetEnum,
                Set<String> enumNames) {
            long result = 0;
            boolean found = false;
            for (String item : expression.split("\\s*\\|\\s*")) {
                Long value = numberStatic(item);
                if (value == null && targetEnum != null) {
                    int separator = item.lastIndexOf("::");
                    String name = separator < 0 ? item : item.substring(separator + 2);
                    if (enumNames.contains(name)) value = targetEnum.getValue(name);
                }
                if (value == null) return null;
                result |= value;
                found = true;
            }
            return found ? result : null;
        }
        private static Long numberStatic(String value) {
            try {
                if (value.startsWith("CASE_NEG_"))
                    return -Long.parseUnsignedLong(value.substring("CASE_NEG_".length()), 16);
                if (value.startsWith("CASE_"))
                    return Long.parseUnsignedLong(value.substring("CASE_".length()), 16);
                boolean negative = value.startsWith("-");
                String digits = negative ? value.substring(1) : value;
                if (!digits.matches("(?:0[xX][0-9a-fA-F]+|[0-9]+)")) return null;
                long result = digits.startsWith("0x") || digits.startsWith("0X") ?
                    Long.parseUnsignedLong(digits.substring(2), 16) : Long.parseLong(digits);
                return negative ? -result : result;
            }
            catch (Exception exception) { return null; }
        }
    }
    private static class Composition {
        final int start, end;
        final String expression;
        final boolean complemented;
        Composition(int start, int end, String expression, boolean complemented) {
            this.start = start; this.end = end; this.expression = expression;
            this.complemented = complemented;
        }
    }
    private static class EnumValueCandidate {
        final Enum type;
        final long value;
        EnumValueCandidate(Enum type, long value) {
            this.type = type; this.value = value;
        }
    }
    private static class ObservedEnumDomain {
        final Enum type;
        Address functionAddress;
        String expectedFunction = "", expectedSignature = "";
        final Set<Long> values = new TreeSet<>();
        final Set<String> expressions = new TreeSet<>();
        final Set<String> evidenceFunctions = new TreeSet<>();
        ObservedEnumDomain(Enum type) { this.type = type; }
    }
    private static class Target {
        final String kind, targetName, containerPath, owner, reason;
        final int ordinal;
        final long offset;
        final DataType type;
        final SourceType source;
        Target(String kind, String targetName, int ordinal, long offset, String containerPath,
                DataType type, SourceType source, String owner, String reason) {
            this.kind = kind; this.targetName = targetName; this.ordinal = ordinal;
            this.offset = offset; this.containerPath = containerPath; this.type = type;
            this.source = source; this.owner = owner; this.reason = reason;
        }
        String groupKey(Function function, int index) {
            String identity = switch (kind) {
                case "parameter" -> Integer.toString(ordinal);
                case "class_field" -> containerPath + ":" + offset;
                case "global" -> containerPath;
                case "local" -> targetName.startsWith("switch_") ?
                    Integer.toString(index) : targetName;
                default -> Integer.toString(index);
            };
            String scope = "class_field".equals(kind) || "global".equals(kind) ?
                "shared" : function.getEntryPoint().toString();
            return scope + "\u0000" + kind + "\u0000" + identity;
        }
    }
    private static class DomainState {
        final int length;
        final Set<Long> values;
        DomainState(int length, Set<Long> values) {
            this.length = length;
            this.values = values;
        }
        String valueText() {
            List<String> result = new ArrayList<>();
            for (Long value : values) result.add(valueName(value) + "=" + value);
            return String.join(";", result);
        }
        private String valueName(long value) {
            if (value < 0)
                return "CASE_NEG_" + Long.toHexString(-value).toUpperCase(Locale.ROOT);
            return "CASE_" + Long.toHexString(value).toUpperCase(Locale.ROOT);
        }
    }

    private static class Proposal {
        final Address functionAddress;
        final String expectedFunction, expectedSignature, targetKind, targetName,
            targetContainer, owner, expectedTargetType, expectedTargetSource;
        String confidence, reason;
        final int targetOrdinal, enumLength;
        final long fieldOffset;
        String enumName;
        boolean apply;
        final Set<Long> values = new TreeSet<>();
        final Set<String> expressions = new TreeSet<>();
        final Set<String> switchSites = new TreeSet<>();
        final Set<String> evidenceFunctions = new TreeSet<>();
        Proposal(Address functionAddress, String expectedFunction, String expectedSignature,
                String targetKind, String targetName, int targetOrdinal, long fieldOffset,
                String targetContainer, String owner, String expectedTargetType,
                String expectedTargetSource, String enumName, int enumLength, boolean apply,
                String confidence, String reason) {
            this.functionAddress = functionAddress; this.expectedFunction = expectedFunction;
            this.expectedSignature = expectedSignature; this.targetKind = targetKind;
            this.targetName = targetName; this.targetOrdinal = targetOrdinal;
            this.fieldOffset = fieldOffset; this.targetContainer = targetContainer;
            this.owner = owner; this.expectedTargetType = expectedTargetType;
            this.expectedTargetSource = expectedTargetSource; this.enumName = enumName;
            this.enumLength = enumLength; this.apply = apply;
            this.confidence = confidence; this.reason = reason;
        }
        void finish() {
            if (values.size() > 512) {
                apply = false;
                confidence = "review";
                reason += "; more_than_512_values_review_required";
            }
        }
        String indexText() {
            return String.join(" | ", switchSites);
        }
        String valueText() {
            List<String> result = new ArrayList<>();
            for (Long value : values) result.add(valueName(value) + "=" + value);
            return String.join(";", result);
        }
        private String valueName(long value) {
            if (value < 0) return "CASE_NEG_" + Long.toHexString(-value).toUpperCase(Locale.ROOT);
            return "CASE_" + Long.toHexString(value).toUpperCase(Locale.ROOT);
        }
    }
}
