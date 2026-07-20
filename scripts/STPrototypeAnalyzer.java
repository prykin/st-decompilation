// Propagate conservative parameter/return types and parameter names across direct calls.
// Read-only: writes prototype_proposals.tsv/jsonl and prototype_summary.txt.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Analyze Prototypes

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.HashMap;
import java.util.HashSet;
import java.util.LinkedHashMap;
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
import ghidra.program.model.data.AbstractFloatDataType;
import ghidra.program.model.data.AbstractIntegerDataType;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeManager;
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
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.SourceType;

public class STPrototypeAnalyzer extends GhidraScript {
    private static final Pattern MEMORY = Pattern.compile(
        "^\\[([A-Z][A-Z0-9]{1,3})(?:([+-])(0X[0-9A-F]+|[0-9]+))?\\]$");
    private static final Pattern REGISTER = Pattern.compile("^[A-Z][A-Z0-9]{1,3}$");
    private static final Pattern GENERIC_PARAMETER = Pattern.compile("(?i)(?:param|arg)_?[0-9]+");
    private static final Pattern APPLIED_TARGET = Pattern.compile(
        "\\[(?:STPrototype|STPrototypeRepair)Applier\\] Propagated " +
        "(return|parameter(?: ([0-9]+))?)\\.");
    private static final String TAG = "RECOVERED_PROTOTYPE";

    private final Map<TargetKey, Evidence> evidence = new TreeMap<>();
    private DataTypeManager dataTypes;
    private int reverseReturnEvidence;

    @Override
    protected void run() throws Exception {
        if (currentProgram == null) { printerr("Open the analyzed ST program first."); return; }
        File selected = outputDirectory(); if (selected == null) return;
        Path directory = programDirectory(selected); Files.createDirectories(directory);
        dataTypes = currentProgram.getDataTypeManager();
        int functionsSeen = 0, callSites = 0;
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            monitor.checkCancelled();
            Function function = functions.next();
            if (function.isThunk() || function.isExternal() || isLibrary(function)) continue;
            functionsSeen++;
            callSites += analyze(function);
        }
        seedPreviouslyAppliedTargets();
        List<Proposal> proposals = makeProposals();
        writeTsv(directory.resolve("prototype_proposals.tsv"), proposals);
        writeJson(directory.resolve("prototype_proposals.jsonl"), proposals);
        writeSummary(directory.resolve("prototype_summary.txt"), proposals,
            functionsSeen, callSites);
        println("Prototype analysis complete: " + directory.toAbsolutePath().normalize());
        println("Functions: " + functionsSeen + ", direct calls: " + callSites +
            ", proposals: " + proposals.size() + ", type_apply: " +
            proposals.stream().filter(row -> row.typeApply).count() + ", name_apply: " +
            proposals.stream().filter(row -> row.nameApply).count() + ", repair: " +
            proposals.stream().filter(row -> row.repair).count());
    }

    private int analyze(Function caller) {
        Map<String, Value> registers = new HashMap<>();
        Map<Long, Value> stackParameters = seedParameters(caller);
        seedThis(caller, registers);
        List<Value> pushes = new ArrayList<>();
        Set<Address> blockStarts = basicBlockStarts(caller);
        boolean wrapper = caller.getBody().getNumAddresses() <= 64 && directCalls(caller).size() == 1;
        int calls = 0;
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(caller.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            if (!instruction.getAddress().equals(caller.getEntryPoint()) &&
                    blockStarts.contains(instruction.getAddress())) {
                // This intentionally does not merge register values from predecessor blocks.
                // A missing proposal is preferable to carrying an EAX/ECX value through an
                // unrelated branch and manufacturing a false prototype.
                registers.clear();
                pushes.clear();
            }
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            String[] operands = splitOperands(instruction.toString().toUpperCase(Locale.ROOT));
            if ("PUSH".equals(mnemonic)) {
                pushes.add(sourceValue(instruction, 0, operands.length == 0 ? "" : operands[0],
                    registers, stackParameters, false));
                continue;
            }
            if ("CALL".equals(mnemonic)) {
                Function called = calledFunction(instruction);
                if (called != null) {
                    calls++;
                    propagateCall(caller, called, registers.get("ECX"), pushes,
                        instruction.getAddress(), wrapper);
                    String returnedType = scriptAppliedTarget(called, "return", -1) ? "" :
                        meaningfulType(called.getReturnType());
                    String returnedName = producedName(called);
                    registers.put("EAX", new Value(-1, returnedType, returnedName,
                        trustedReturn(called), "return of " + called.getName(true), called));
                }
                else registers.remove("EAX");
                registers.remove("ECX"); registers.remove("EDX"); pushes.clear();
                continue;
            }
            if ("RET".equals(mnemonic)) {
                Value returned = registers.get("EAX");
                if (returned != null) {
                    if (wrapper && !returned.type.isBlank())
                        addReturnEvidence(caller, returned, instruction.getAddress(), wrapper);
                    if (returned.producer != null && !returned.producer.equals(caller) &&
                            !scriptAppliedTarget(caller, "return", -1)) {
                        String callerType = meaningfulType(caller.getReturnType());
                        boolean trusted = trustedReturn(caller);
                        if (trusted || wrapper)
                            addProducedReturnEvidence(returned.producer, callerType, trusted,
                                instruction.getAddress(), "forwarded through return of " +
                                caller.getName(true));
                    }
                }
                pushes.clear();
                continue;
            }
            if (instruction.getFlowType().isJump()) pushes.clear();
            if ("MOV".equals(mnemonic) && operands.length >= 2)
                observeProducedStore(instruction, operands, registers);
            updateRegisters(instruction, mnemonic, operands, registers, stackParameters);
            if ("MOV".equals(mnemonic) && operands.length >= 2 &&
                    "EBP".equals(cleanRegister(operands[0])) &&
                    "ESP".equals(cleanRegister(operands[1]))) pushes.clear();
        }
        return calls;
    }

    private void propagateCall(Function caller, Function called, Value receiver,
            List<Value> pushes, Address site, boolean wrapper) {
        List<Parameter> calledParameters = explicitParameters(called);
        if (calledParameters.size() == pushes.size()) {
            for (int index = 0; index < calledParameters.size(); index++) {
                Parameter target = calledParameters.get(index);
                Value value = pushes.get(pushes.size() - 1 - index);
                if (value == null) continue;
                String siteText = addr(caller.getEntryPoint()) + " -> " +
                    addr(called.getEntryPoint()) + " @ " + addr(site);
                if (!value.type.isBlank()) addParameterEvidence(called, target,
                    value.type, value.name, value.trusted, siteText);
                if (value.producer != null && trustedProducerTarget(called, target)) {
                    addProducedReturnEvidence(value.producer,
                        meaningfulType(target.getDataType()), true, site,
                        "used as parameter " + target.getOrdinal() + " of " +
                        called.getName(true));
                }
                if (value.parameterOrdinal >= 0) {
                    Parameter source = explicitParameter(caller, value.parameterOrdinal);
                    if (source != null) {
                        String type = trustedParameter(called, target) ?
                            meaningfulType(target.getDataType()) : "";
                        String name = trustedParameterName(target) ? target.getName() : "";
                        if (!type.isBlank() || !name.isBlank()) addParameterEvidence(caller,
                            source, type, name, wrapper || target.getSource() == SourceType.USER_DEFINED ||
                            target.getSource() == SourceType.IMPORTED, siteText);
                    }
                }
            }
        }
        if ("__thiscall".equals(called.getCallingConventionName()) && receiver != null) {
            String ownerType = ownerTypePath(called);
            if (receiver.parameterOrdinal >= 0) {
                Parameter source = explicitParameter(caller, receiver.parameterOrdinal);
                if (source != null && !ownerType.isBlank()) addParameterEvidence(caller, source,
                    "pointer:" + ownerType, receiver.name, true,
                    addr(caller.getEntryPoint()) + " parameter used as this of " +
                    called.getName(true) + " @ " + addr(site));
            }
            if (receiver.producer != null && !ownerType.isBlank())
                addProducedReturnEvidence(receiver.producer, "pointer:" + ownerType, true,
                    site, "used as this of " + called.getName(true));
        }
    }

    private void addParameterEvidence(Function function, Parameter parameter, String type,
            String name, boolean strong, String site) {
        if (parameter.isAutoParameter()) return;
        TargetKey key = new TargetKey(function.getEntryPoint(), "parameter",
            parameter.getOrdinal());
        Evidence value = evidence.computeIfAbsent(key, ignored -> new Evidence());
        if (!type.isBlank()) value.types.merge(type, 1, Integer::sum);
        name = cleanParameterName(name);
        if (!name.isBlank()) value.names.merge(name, 1, Integer::sum);
        if (strong) value.strongCount++;
        value.sites.add(site);
    }

    private void addReturnEvidence(Function function, Value returned, Address site,
            boolean wrapper) {
        if (returned.type.isBlank()) return;
        TargetKey key = new TargetKey(function.getEntryPoint(), "return", -1);
        Evidence value = evidence.computeIfAbsent(key, ignored -> new Evidence());
        value.types.merge(returned.type, 1, Integer::sum);
        if (returned.trusted || wrapper) value.strongCount++;
        value.sites.add(addr(function.getEntryPoint()) + " returns " + returned.evidence +
            " @ " + addr(site));
    }

    private void addProducedReturnEvidence(Function producer, String type, boolean strong,
            Address site, String relation) {
        if (producer == null || producer.isExternal() || isLibrary(producer) || type.isBlank()) return;
        addReturnEvidence(producer, new Value(-1, type, "", strong, relation), site, false);
        reverseReturnEvidence++;
    }

    private void observeProducedStore(Instruction instruction, String[] operands,
            Map<String, Value> registers) {
        String sourceRegister = cleanRegister(operands[1]);
        if (sourceRegister == null || !isFullRegister(operands[1])) return;
        Value source = registers.get(sourceRegister);
        if (source == null || source.producer == null) return;
        StoreType target = storedType(instruction, operands[0], registers);
        if (target == null || target.type.isBlank()) return;
        addProducedReturnEvidence(source.producer, target.type, target.strong,
            instruction.getAddress(), "stored into " + target.evidence);
    }

    private StoreType storedType(Instruction instruction, String operand,
            Map<String, Value> registers) {
        if (!operand.contains("[") || !operand.contains("]")) return null;
        for (Reference reference : instruction.getReferencesFrom()) {
            if (reference.getOperandIndex() != 0) continue;
            Data data = currentProgram.getListing().getDefinedDataContaining(reference.getToAddress());
            if (data == null) continue;
            String type = meaningfulType(data.getDataType());
            if (!type.isBlank()) return new StoreType(type, semanticType(data.getDataType()),
                "global " + addr(data.getMinAddress()));
        }
        MemoryExpr memory = memoryExpr(operand);
        Value base = memory == null ? null : registers.get(memory.register);
        if (base == null || !base.type.startsWith("pointer:") || memory.displacement < 0 ||
                memory.displacement > Integer.MAX_VALUE) return null;
        DataType owner = dataTypes.getDataType(base.type.substring("pointer:".length()));
        if (!(owner instanceof Structure structure) || memory.displacement >= structure.getLength())
            return null;
        ghidra.program.model.data.DataTypeComponent component =
            structure.getComponentContaining((int)memory.displacement);
        if (component == null) return null;
        String type = meaningfulType(component.getDataType());
        return type.isBlank() ? null : new StoreType(type, true,
            structure.getPathName() + "+0x" + Long.toHexString(memory.displacement));
    }

    private List<Proposal> makeProposals() {
        List<Proposal> result = new ArrayList<>();
        for (Map.Entry<TargetKey, Evidence> entry : evidence.entrySet()) {
            TargetKey key = entry.getKey(); Evidence ev = entry.getValue();
            Function function = currentProgram.getFunctionManager().getFunctionAt(key.address);
            if (function == null) continue;
            Parameter target = "return".equals(key.kind) ? function.getReturn() :
                explicitParameter(function, key.ordinal);
            if (target == null) continue;
            String proposedType = unique(ev.types);
            String proposedName = "parameter".equals(key.kind) ? unique(ev.names) : "";
            String currentType = typeSpecification(target.getDataType());
            String currentName = target.getName() == null ? "" : target.getName();
            boolean manual = protectedSource(target.getSource());
            boolean scriptOwned = scriptAppliedTarget(function, key.kind, key.ordinal);
            boolean typeConflict = ev.types.size() > 1;
            boolean nameConflict = ev.names.size() > 1;
            int typeCount = proposedType.isBlank() ? 0 : ev.types.get(proposedType);
            int nameCount = proposedName.isBlank() ? 0 : ev.names.get(proposedName);
            boolean compatible = !proposedType.isBlank() && typeLength(proposedType) ==
                effectiveLength(target.getDataType());
            boolean typeChange = compatible && !sameType(currentType, proposedType) &&
                (safeToRefine(target.getDataType(), proposedType) || scriptOwned);
            boolean enoughTypeEvidence = "return".equals(key.kind) ? ev.strongCount > 0 :
                ev.strongCount > 0 || typeCount >= 2;
            boolean typeApply = !manual && !typeConflict && typeChange &&
                enoughTypeEvidence;
            boolean invalidThisName = "parameter".equals(key.kind) &&
                "this".equals(currentName) && scriptOwned;
            if (invalidThisName && proposedName.isBlank())
                proposedName = genericParameterName(function, target);
            boolean genericName = GENERIC_PARAMETER.matcher(currentName).matches() ||
                invalidThisName;
            boolean duplicateName = !proposedName.isBlank() &&
                !uniqueParameterName(function, key, target, proposedName);
            boolean nameApply = "parameter".equals(key.kind) && !manual && !nameConflict &&
                genericName && !proposedName.isBlank() && !duplicateName &&
                (invalidThisName || ev.strongCount > 0 && nameCount >= 1 || nameCount >= 2);
            if (!typeChange && !nameApply) continue;
            String confidence = typeConflict || nameConflict ? "conflict" :
                typeApply || nameApply ? "high" : "review";
            List<String> reasons = new ArrayList<>();
            reasons.add("type_evidence=" + ev.types);
            reasons.add("name_evidence=" + ev.names);
            reasons.add("strong_evidence=" + ev.strongCount);
            if (!compatible && !proposedType.isBlank()) reasons.add("storage_width_mismatch");
            if (manual) reasons.add("manual_target_preserved");
            if (scriptOwned) reasons.add("script_target_repair");
            if (invalidThisName) reasons.add("explicit_parameter_named_this");
            if (duplicateName) reasons.add("duplicate_parameter_name");
            if (typeConflict) reasons.add("type_conflict");
            if (nameConflict) reasons.add("name_conflict");
            result.add(new Proposal(function, target, key.kind, key.ordinal, currentType,
                currentName, proposedType, proposedName, typeApply, nameApply, scriptOwned,
                confidence, String.join("; ", reasons), ev.sites));
        }
        result.sort(Comparator.comparing((Proposal row) -> row.address)
            .thenComparing(row -> row.kind).thenComparingInt(row -> row.ordinal));
        return result;
    }

    private void updateRegisters(Instruction instruction, String mnemonic, String[] operands,
            Map<String, Value> registers, Map<Long, Value> stackParameters) {
        if (operands.length == 0) return;
        String destination = cleanRegister(operands[0]);
        boolean fullDestination = isFullRegister(operands[0]);
        if ("MOV".equals(mnemonic) && destination != null && operands.length >= 2) {
            if (!fullDestination) {
                registers.put(destination, partialScalarValue(operands[0], instruction));
                return;
            }
            Value value = sourceValue(instruction, 1, operands[1], registers,
                stackParameters, false);
            if (value == null) registers.remove(destination); else registers.put(destination, value);
            return;
        }
        if ("LEA".equals(mnemonic) && destination != null && operands.length >= 2) {
            if (!fullDestination) { registers.remove(destination); return; }
            Value value = sourceValue(instruction, 1, operands[1], registers,
                stackParameters, true);
            if (value == null) registers.remove(destination); else registers.put(destination, value);
            return;
        }
        if (destination != null && !Set.of("CMP", "TEST", "PUSH", "JMP", "RET")
                .contains(mnemonic)) registers.remove(destination);
    }

    private Value sourceValue(Instruction instruction, int operandIndex, String operand,
            Map<String, Value> registers, Map<Long, Value> stackParameters, boolean addressOf) {
        String register = cleanRegister(operand);
        if (register != null) return isFullRegister(operand) ? registers.get(register) : null;
        MemoryExpr memory = memoryExpr(operand);
        if (memory != null && "EBP".equals(memory.register)) {
            Value parameter = stackParameters.get(memory.displacement);
            if (parameter == null) return null;
            if (!addressOf) return parameter;
            String pointed = parameter.type.isBlank() || parameter.type.startsWith("pointer:") ?
                "" : "pointer:" + parameter.type;
            return new Value(parameter.parameterOrdinal, pointed, parameter.name,
                parameter.trusted, "address of " + parameter.evidence);
        }
        for (Reference reference : instruction.getReferencesFrom()) {
            if (reference.getOperandIndex() != operandIndex) continue;
            Data data = currentProgram.getListing().getDefinedDataContaining(reference.getToAddress());
            if (data == null) continue;
            if (data.hasStringValue()) return new Value(-1, "pointer:/char", "text",
                true, "string at " + addr(reference.getToAddress()));
            String type = meaningfulType(data.getDataType());
            if (type.isBlank()) continue;
            boolean memoryOperand = operand.contains("[") && operand.contains("]");
            if (addressOf || !memoryOperand) {
                // Nested pointer specifications are intentionally not inferred here.  The
                // proposal format resolves one pointer layer and guessing a T** as T* is
                // worse than emitting no evidence.
                if (type.startsWith("pointer:")) continue;
                type = "pointer:" + type;
            }
            return new Value(-1, type, "", semanticType(data.getDataType()),
                "data at " + addr(data.getMinAddress()));
        }
        return null;
    }

    private Map<Long, Value> seedParameters(Function function) {
        Map<Long, Value> result = new HashMap<>();
        long frameBias = currentProgram.getDefaultPointerSize();
        for (Parameter parameter : function.getParameters()) {
            if (parameter.isAutoParameter() || !parameter.isStackVariable()) continue;
            boolean trusted = trustedParameter(function, parameter);
            boolean scriptOwned = scriptAppliedTarget(function, "parameter",
                parameter.getOrdinal());
            String type = scriptOwned ? "" : meaningfulType(parameter.getDataType());
            String name = scriptOwned ? "" : trustedParameterName(parameter) ?
                parameter.getName() : "";
            if (scriptOwned) trusted = false;
            result.put((long)parameter.getStackOffset() + frameBias,
                new Value(parameter.getOrdinal(), type, name, trusted,
                    function.getName(true) + " parameter " + parameter.getName()));
        }
        return result;
    }

    private void seedThis(Function function, Map<String, Value> registers) {
        if (!"__thiscall".equals(function.getCallingConventionName())) return;
        String typePath = ownerTypePath(function);
        if (!typePath.isBlank()) registers.put("ECX", new Value(-1, "pointer:" + typePath,
            "this", true, function.getName(true) + " this"));
    }

    private Set<Function> directCalls(Function function) {
        Set<Function> result = new HashSet<>();
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            if (!"CALL".equalsIgnoreCase(instruction.getMnemonicString())) continue;
            Function called = calledFunction(instruction); if (called != null) result.add(called);
        }
        return result;
    }

    private Set<Address> basicBlockStarts(Function function) {
        Set<Address> result = new HashSet<>();
        result.add(function.getEntryPoint());
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            if (!instruction.getFlowType().isJump()) continue;
            for (Address flow : instruction.getFlows())
                if (function.getBody().contains(flow)) result.add(flow);
            Address fallThrough = instruction.getFallThrough();
            if (fallThrough != null && function.getBody().contains(fallThrough))
                result.add(fallThrough);
        }
        return result;
    }

    private Function calledFunction(Instruction instruction) {
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

    private List<Parameter> explicitParameters(Function function) {
        List<Parameter> result = new ArrayList<>();
        for (Parameter parameter : function.getParameters())
            if (!parameter.isAutoParameter()) result.add(parameter);
        return result;
    }
    private Parameter explicitParameter(Function function, int ordinal) {
        for (Parameter parameter : function.getParameters())
            if (!parameter.isAutoParameter() && parameter.getOrdinal() == ordinal) return parameter;
        return null;
    }

    private boolean trustedParameter(Function function, Parameter parameter) {
        if (scriptAppliedTarget(function, "parameter", parameter.getOrdinal())) return false;
        return parameter.getSource() == SourceType.USER_DEFINED ||
            parameter.getSource() == SourceType.IMPORTED || semanticType(parameter.getDataType()) ||
            hasTag(function, TAG);
    }
    private boolean trustedParameterName(Parameter parameter) {
        return (parameter.getSource() == SourceType.USER_DEFINED ||
            parameter.getSource() == SourceType.IMPORTED) &&
            !GENERIC_PARAMETER.matcher(parameter.getName()).matches() &&
            !"this".equals(parameter.getName());
    }
    private boolean trustedProducerTarget(Function function, Parameter parameter) {
        if (!trustedParameter(function, parameter)) return false;
        String path = parameter.getDataType().getPathName();
        // Switch recovery deliberately creates provisional enums.  They are useful for
        // arguments and fields, but are not authoritative enough to redefine the return
        // type of the function that happened to produce a switch value.
        return !path.contains("/Recovered/Enums/");
    }
    private boolean trustedReturn(Function function) {
        if (scriptAppliedTarget(function, "return", -1)) return false;
        return function.getSignatureSource() == SourceType.USER_DEFINED ||
            function.getSignatureSource() == SourceType.IMPORTED ||
            semanticType(function.getReturnType()) || hasTag(function, TAG);
    }

    private String meaningfulType(DataType type) {
        if (type == null || type.getLength() < 1 || Undefined.isUndefined(type)) return "";
        if (type instanceof Pointer pointer) {
            DataType pointed = pointer.getDataType();
            if (pointed == null || Undefined.isUndefined(pointed) || "/void".equals(pointed.getPathName()))
                return "";
            return "pointer:" + pointed.getPathName();
        }
        if ("/void".equals(type.getPathName())) return "";
        if (type instanceof Enum || type instanceof TypeDef || type instanceof Structure ||
                type instanceof AbstractIntegerDataType || type instanceof AbstractFloatDataType)
            return type.getPathName();
        return "";
    }

    private boolean semanticType(DataType type) {
        if (type instanceof Enum || type instanceof TypeDef || type instanceof Structure) return true;
        if (type instanceof Pointer pointer) {
            DataType pointed = pointer.getDataType();
            return pointed != null && !Undefined.isUndefined(pointed) &&
                !"/void".equals(pointed.getPathName());
        }
        return false;
    }

    private void seedPreviouslyAppliedTargets() {
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            Function function = functions.next();
            String comment = function.getComment();
            if (comment == null || comment.isBlank()) continue;
            Matcher matcher = APPLIED_TARGET.matcher(comment);
            while (matcher.find()) {
                String kind = matcher.group(1).startsWith("parameter") ? "parameter" : "return";
                int ordinal = "return".equals(kind) ? -1 : Integer.parseInt(matcher.group(2));
                evidence.computeIfAbsent(new TargetKey(function.getEntryPoint(), kind, ordinal),
                    ignored -> new Evidence());
            }
        }
    }

    private boolean scriptAppliedTarget(Function function, String kind, int ordinal) {
        String comment = function.getComment();
        if (comment == null || comment.isBlank()) return false;
        Matcher matcher = APPLIED_TARGET.matcher(comment);
        while (matcher.find()) {
            String foundKind = matcher.group(1).startsWith("parameter") ? "parameter" : "return";
            int foundOrdinal = "return".equals(foundKind) ? -1 :
                Integer.parseInt(matcher.group(2));
            if (kind.equals(foundKind) && ordinal == foundOrdinal) return true;
        }
        return false;
    }

    private String genericParameterName(Function function, Parameter target) {
        List<Parameter> parameters = explicitParameters(function);
        int index = parameters.indexOf(target);
        return "param_" + (index < 0 ? target.getOrdinal() : index + 1);
    }

    private boolean uniqueParameterName(Function function, TargetKey key, Parameter target,
            String proposed) {
        for (Parameter parameter : explicitParameters(function)) {
            if (parameter.equals(target)) continue;
            String current = parameter.getName() == null ? "" : parameter.getName();
            if (proposed.equals(current)) return false;
        }
        for (Map.Entry<TargetKey, Evidence> entry : evidence.entrySet()) {
            TargetKey other = entry.getKey();
            if (!other.address.equals(key.address) || !"parameter".equals(other.kind) ||
                    other.ordinal == key.ordinal) continue;
            if (proposed.equals(unique(entry.getValue().names))) return false;
        }
        return true;
    }

    private boolean safeToRefine(DataType current, String proposed) {
        if (Undefined.isUndefined(current)) return true;
        if (current instanceof Pointer pointer) {
            DataType pointed = pointer.getDataType();
            return proposed.startsWith("pointer:") && (pointed == null ||
                Undefined.isUndefined(pointed) || "/void".equals(pointed.getPathName()));
        }
        return current instanceof AbstractIntegerDataType && semanticSpecification(proposed);
    }
    private boolean semanticSpecification(String specification) {
        if (specification.startsWith("pointer:")) return true;
        DataType type = dataTypes.getDataType(specification);
        return type instanceof Enum || type instanceof TypeDef || type instanceof Structure;
    }
    private int typeLength(String specification) {
        if (specification.startsWith("pointer:")) return currentProgram.getDefaultPointerSize();
        DataType type = dataTypes.getDataType(specification);
        return type == null ? -1 : type.getLength();
    }
    private int effectiveLength(DataType type) {
        int length = type == null ? -1 : type.getLength();
        return length < 1 ? currentProgram.getDefaultPointerSize() : length;
    }
    private String typeSpecification(DataType type) {
        if (type instanceof Pointer pointer && pointer.getDataType() != null)
            return "pointer:" + pointer.getDataType().getPathName();
        return type == null ? "" : type.getPathName();
    }
    private boolean sameType(String left, String right) { return left.equals(right); }
    private String ownerTypePath(Function function) {
        String qualified = function.getName(true);
        int separator = qualified.lastIndexOf("::");
        if (separator <= 0) return "";
        String owner = qualified.substring(0, separator);
        if (owner.startsWith("Library::")) return "";
        int ownerSeparator = owner.lastIndexOf("::");
        String leaf = ownerSeparator < 0 ? owner : owner.substring(ownerSeparator + 2);
        DataType direct = dataTypes.getDataType("/" + leaf);
        if (direct instanceof Structure) return direct.getPathName();
        List<DataType> matches = new ArrayList<>(); dataTypes.findDataTypes(leaf, matches);
        for (DataType match : matches)
            if (match instanceof Structure && !match.getPathName().contains("/VTables/"))
                return match.getPathName();
        return "";
    }

    private String producedName(Function called) {
        Matcher matcher = Pattern.compile("^(?:Get|Find|Create|Make|New|Alloc|Open|Load)([A-Z].*)$")
            .matcher(called.getName());
        return matcher.matches() ? cleanParameterName(matcher.group(1)) : "";
    }
    private String cleanParameterName(String value) {
        if (value == null) return "";
        String result = value.trim().replaceAll("^(?:m_|p_)+", "")
            .replaceAll("[^A-Za-z0-9_]", "_");
        result = result.replaceFirst("^_+", "");
        if (result.isBlank() || "this".equalsIgnoreCase(result) ||
                GENERIC_PARAMETER.matcher(result).matches() ||
                (!Character.isLetter(result.charAt(0)) && result.charAt(0) != '_')) return "";
        if (Character.isUpperCase(result.charAt(0))) result =
            Character.toLowerCase(result.charAt(0)) + result.substring(1);
        return result;
    }
    private String unique(Map<String, Integer> values) {
        return values.size() == 1 ? values.keySet().iterator().next() : "";
    }

    private MemoryExpr memoryExpr(String operand) {
        int open = operand.indexOf('['), close = operand.lastIndexOf(']');
        if (open < 0 || close <= open) return null;
        String value = operand.substring(open, close + 1)
            .replace(" ", "").toUpperCase(Locale.ROOT);
        Matcher matcher = MEMORY.matcher(value); if (!matcher.matches()) return null;
        long displacement = 0;
        if (matcher.group(3) != null) {
            Long parsed = immediate(matcher.group(3)); if (parsed == null) return null;
            displacement = "-".equals(matcher.group(2)) ? -parsed : parsed;
        }
        return new MemoryExpr(canonicalRegister(matcher.group(1)), displacement);
    }
    private String cleanRegister(String operand) {
        String value = operand.trim().toUpperCase(Locale.ROOT);
        return REGISTER.matcher(value).matches() ? canonicalRegister(value) : null;
    }
    private String canonicalRegister(String register) {
        return switch (register.toUpperCase(Locale.ROOT)) {
            case "AL", "AH", "AX", "EAX", "RAX" -> "EAX";
            case "BL", "BH", "BX", "EBX", "RBX" -> "EBX";
            case "CL", "CH", "CX", "ECX", "RCX" -> "ECX";
            case "DL", "DH", "DX", "EDX", "RDX" -> "EDX";
            case "SI", "ESI", "RSI" -> "ESI";
            case "DI", "EDI", "RDI" -> "EDI";
            case "BP", "EBP", "RBP" -> "EBP";
            case "SP", "ESP", "RSP" -> "ESP";
            default -> register.toUpperCase(Locale.ROOT);
        };
    }
    private boolean isFullRegister(String operand) {
        String value = operand.trim().toUpperCase(Locale.ROOT);
        return Set.of("EAX", "EBX", "ECX", "EDX", "ESI", "EDI", "EBP", "ESP",
            "RAX", "RBX", "RCX", "RDX", "RSI", "RDI", "RBP", "RSP").contains(value);
    }
    private Value partialScalarValue(String operand, Instruction instruction) {
        return new Value(-1, "/uint", "", false, "partial register write at " +
            addr(instruction.getAddress()));
    }
    private Long immediate(String operand) {
        String value = operand.trim().toUpperCase(Locale.ROOT).replace("+", "");
        try {
            if (value.startsWith("0X")) return Long.parseUnsignedLong(value.substring(2), 16);
            if (value.matches("[0-9A-F]+H"))
                return Long.parseUnsignedLong(value.substring(0, value.length() - 1), 16);
            if (value.matches("[0-9]+")) return Long.parseLong(value);
        }
        catch (NumberFormatException ignored) { }
        return null;
    }
    private String[] splitOperands(String instruction) {
        int space = instruction.indexOf(' ');
        return space < 0 || space == instruction.length() - 1 ? new String[0] :
            instruction.substring(space + 1).split("\\s*,\\s*");
    }

    private boolean isLibrary(Function function) {
        for (FunctionTag tag : function.getTags()) {
            String name = tag.getName().toUpperCase(Locale.ROOT);
            if (name.equals("LIBRARY") || name.startsWith("LIBRARY_")) return true;
        }
        return false;
    }
    private boolean hasTag(Function function, String name) {
        for (FunctionTag tag : function.getTags()) if (name.equals(tag.getName())) return true;
        return false;
    }
    private boolean protectedSource(SourceType source) {
        return source == SourceType.USER_DEFINED || source == SourceType.IMPORTED;
    }
    private File outputDirectory() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless()) throw new IllegalArgumentException("Recovery output directory required");
        return askDirectory("Select recovery output directory", "Select");
    }
    private Path programDirectory(File selected) {
        return selected.getName().equals(currentProgram.getName()) ? selected.toPath() :
            selected.toPath().resolve(currentProgram.getName());
    }

    private void writeTsv(Path path, List<Proposal> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("type_apply\tname_apply\trepair\tfunction_address\texpected_function\t" +
                "target_kind\ttarget_ordinal\texpected_target_name\texpected_target_type\t" +
                "expected_target_source\tproposed_name\tproposed_type\tconfidence\t" +
                "evidence_sites\treason\n");
            for (Proposal p : rows) out.write(bit(p.typeApply) + "\t" + bit(p.nameApply) +
                "\t" + bit(p.repair) + "\t" + addr(p.address) + "\t" +
                tsv(p.expectedFunction) + "\t" +
                p.kind + "\t" + (p.ordinal < 0 ? "" : p.ordinal) + "\t" +
                tsv(p.expectedTargetName) + "\t" + tsv(p.expectedTargetType) + "\t" +
                p.expectedTargetSource + "\t" + tsv(p.proposedName) + "\t" +
                tsv(p.proposedType) + "\t" + p.confidence + "\t" +
                tsv(String.join(" | ", p.sites)) + "\t" + tsv(p.reason) + "\n");
        }
    }
    private void writeJson(Path path, List<Proposal> rows) throws Exception {
        List<String> lines = new ArrayList<>();
        for (Proposal p : rows) lines.add("{\"type_apply\":" + p.typeApply +
            ",\"name_apply\":" + p.nameApply + ",\"repair\":" + p.repair +
            ",\"function_address\":" +
            q(addr(p.address)) + ",\"target_kind\":" + q(p.kind) +
            ",\"target_ordinal\":" + p.ordinal + ",\"proposed_name\":" +
            q(p.proposedName) + ",\"proposed_type\":" + q(p.proposedType) +
            ",\"confidence\":" + q(p.confidence) + ",\"reason\":" + q(p.reason) + "}");
        Files.write(path, lines, StandardCharsets.UTF_8);
    }
    private void writeSummary(Path path, List<Proposal> rows, int functions, int calls)
            throws Exception {
        Files.write(path, List.of("program=" + currentProgram.getName(),
            "functions_scanned=" + functions, "direct_calls_seen=" + calls,
            "proposals=" + rows.size(),
            "parameter_proposals=" + rows.stream().filter(r -> r.kind.equals("parameter")).count(),
            "return_proposals=" + rows.stream().filter(r -> r.kind.equals("return")).count(),
            "type_auto_apply=" + rows.stream().filter(r -> r.typeApply).count(),
            "name_auto_apply=" + rows.stream().filter(r -> r.nameApply).count(),
            "reverse_return_evidence=" + reverseReturnEvidence,
            "repair_proposals=" + rows.stream().filter(r -> r.repair).count(),
            "repair_auto_apply=" + rows.stream().filter(r -> r.repair &&
                (r.typeApply || r.nameApply)).count(),
            "repair_review_only=" + rows.stream().filter(r -> r.repair &&
                !r.typeApply && !r.nameApply).count(),
            "conflicts=" + rows.stream().filter(r -> r.confidence.equals("conflict")).count(),
            "note=Direct calls with an exact explicit argument count propagate parameters.",
            "note_returns=Unknown EAX producers are traced into trusted arguments, this receivers, typed stores, and return-forwarding wrappers.",
            "note_manual=USER_DEFINED targets are never auto-applied.",
            "note_iteration=Rerun after applying method owners, globals, or class fields to reach a conservative fixed point."),
            StandardCharsets.UTF_8);
    }

    private static String addr(Address value) {
        return value == null ? "" : value.toString().toUpperCase(Locale.ROOT);
    }
    private static String bit(boolean value) { return value ? "1" : "0"; }
    private static String tsv(String value) {
        if (value == null) return "";
        return value.replace("\\", "\\\\").replace("\t", "\\t")
            .replace("\r", "\\r").replace("\n", "\\n");
    }
    private static String q(String value) {
        if (value == null) return "null";
        return "\"" + value.replace("\\", "\\\\").replace("\"", "\\\"")
            .replace("\r", "\\r").replace("\n", "\\n").replace("\t", "\\t") + "\"";
    }

    private static class Value {
        final int parameterOrdinal; final String type, name, evidence; final boolean trusted;
        final Function producer;
        Value(int parameterOrdinal, String type, String name, boolean trusted, String evidence) {
            this(parameterOrdinal, type, name, trusted, evidence, null);
        }
        Value(int parameterOrdinal, String type, String name, boolean trusted, String evidence,
                Function producer) {
            this.parameterOrdinal = parameterOrdinal; this.type = type == null ? "" : type;
            this.name = name == null ? "" : name; this.trusted = trusted;
            this.evidence = evidence == null ? "" : evidence;
            this.producer = producer;
        }
    }
    private static class StoreType {
        final String type, evidence; final boolean strong;
        StoreType(String type, boolean strong, String evidence) {
            this.type = type; this.strong = strong; this.evidence = evidence;
        }
    }
    private static class MemoryExpr {
        final String register; final long displacement;
        MemoryExpr(String register, long displacement) {
            this.register = register; this.displacement = displacement;
        }
    }
    private static class TargetKey implements Comparable<TargetKey> {
        final Address address; final String kind; final int ordinal;
        TargetKey(Address address, String kind, int ordinal) {
            this.address = address; this.kind = kind; this.ordinal = ordinal;
        }
        @Override public int compareTo(TargetKey other) {
            int result = address.compareTo(other.address);
            if (result != 0) return result;
            result = kind.compareTo(other.kind);
            return result != 0 ? result : Integer.compare(ordinal, other.ordinal);
        }
    }
    private static class Evidence {
        final Map<String, Integer> types = new TreeMap<>(), names = new TreeMap<>();
        final Set<String> sites = new TreeSet<>(); int strongCount;
    }
    private static class Proposal {
        final Address address; final String expectedFunction, kind, expectedTargetName,
            expectedTargetType, expectedTargetSource, proposedName, proposedType,
            confidence, reason; final int ordinal;
        final boolean typeApply, nameApply, repair;
        final Set<String> sites;
        Proposal(Function function, Parameter target, String kind, int ordinal,
                String expectedTargetType, String expectedTargetName, String proposedType,
                String proposedName, boolean typeApply, boolean nameApply, boolean repair,
                String confidence, String reason, Set<String> sites) {
            address = function.getEntryPoint(); expectedFunction = function.getName(true);
            this.kind = kind; this.ordinal = ordinal;
            this.expectedTargetName = expectedTargetName;
            this.expectedTargetType = expectedTargetType;
            expectedTargetSource = target.getSource().toString();
            this.proposedName = proposedName; this.proposedType = proposedType;
            this.typeApply = typeApply; this.nameApply = nameApply;
            this.repair = repair;
            this.confidence = confidence; this.reason = reason;
            this.sites = new TreeSet<>(sites);
        }
    }
}
