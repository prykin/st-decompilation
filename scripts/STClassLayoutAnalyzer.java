// Recover conservative class layouts from ECX/this-derived memory accesses.
// Read-only: writes class_layout_proposals.tsv and class_field_proposals.tsv.
// Run after STConstructorAnalyzer so unique allocation sizes can bound structures.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Analyze Class Layouts

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.HashMap;
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
import ghidra.program.model.data.DataTypeComponent;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.Enum;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.TypeDef;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.FunctionTag;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.symbol.SourceType;

public class STClassLayoutAnalyzer extends GhidraScript {
    private static final Pattern MEMORY = Pattern.compile(
        "^\\[([A-Z][A-Z0-9]{1,3})(?:([+-])(0X[0-9A-F]+|[0-9]+))?\\]$");
    private static final Pattern REGISTER = Pattern.compile("^[A-Z][A-Z0-9]{1,3}$");
    private static final Pattern ACCESSOR = Pattern.compile(
        "^(Get|Set|Is|Has)([A-Z][A-Za-z0-9_]*)$");
    private static final String MARKER = "[STClassLayoutApplier]";
    private static final String SWITCH_ENUM_MARKER = "[STSwitchEnumApplier]";
    private static final long MAX_CLASS_SIZE = 0x1000000L;

    private DataTypeManager dataTypes;

    @Override
    protected void run() throws Exception {
        if (currentProgram == null) {
            printerr("Open the analyzed ST program first.");
            return;
        }
        File selected = outputDirectory();
        if (selected == null) return;
        Path directory = programDirectory(selected);
        Files.createDirectories(directory);
        dataTypes = currentProgram.getDataTypeManager();

        Map<String, Long> exactSizes = readClassSizes(
            directory.resolve("constructor_class_sizes.tsv"));
        Map<String, String> vtableTypes = readVtableTypes(
            directory.resolve("vtable_proposals.tsv"));
        Map<String, ClassEvidence> classes = new TreeMap<>();

        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            monitor.checkCancelled();
            Function function = functions.next();
            String owner = ownerOf(function);
            if (owner.isBlank() || function.isThunk() || function.isExternal() ||
                    isLibrary(function) || !"__thiscall".equals(function.getCallingConventionName()))
                continue;
            ClassEvidence classEvidence = classes.computeIfAbsent(owner, ClassEvidence::new);
            analyzeFunction(function, classEvidence);
        }

        List<ClassProposal> classRows = new ArrayList<>();
        List<FieldProposal> fieldRows = new ArrayList<>();
        for (ClassEvidence evidence : classes.values()) {
            monitor.checkCancelled();
            DataType ownerType = findOwnerType(evidence.owner);
            if (!(ownerType instanceof Structure structure) || evidence.fields.isEmpty()) continue;
            long observedSize = evidence.fields.values().stream()
                .mapToLong(field -> field.offset + field.maximumSize()).max().orElse(1);
            if (vtableTypes.containsKey(evidence.owner)) observedSize = Math.max(observedSize, 4);
            long exactSize = exactSizes.getOrDefault(evidence.owner, -1L);
            long proposedSize = exactSize >= observedSize ? exactSize : observedSize;
            if (proposedSize < 1 || proposedSize > MAX_CLASS_SIZE) continue;

            List<FieldProposal> ownerFields = makeFields(evidence, structure,
                vtableTypes.get(evidence.owner), proposedSize);
            markOverlaps(ownerFields);
            long autoFields = ownerFields.stream().filter(field -> field.apply).count();
            boolean safeStructure = isPlaceholder(structure) || isOwnedUnchangedCandidate(structure);
            boolean hasExactSize = exactSize >= observedSize;
            boolean hasVtable = vtableTypes.containsKey(evidence.owner);
            // A single remote access is too weak to justify materializing a mostly-empty,
            // potentially enormous structure.  Require a second independent offset, an
            // applied vtable type, or a unique constructor allocation size.
            boolean anchoredLayout = autoFields >= 2 || hasVtable || hasExactSize;
            boolean apply = safeStructure && autoFields > 0 && anchoredLayout;
            String reason = exactSize >= observedSize ? "unique_allocation_size_and_this_accesses" :
                "observed_this_access_extent";
            if (!safeStructure) reason = "existing_manual_or_unowned_structure_preserved";
            else if (!anchoredLayout) reason = "insufficient_layout_anchors";
            ClassProposal proposal = new ClassProposal(evidence.owner, structure.getPathName(),
                structure.getLength(), observedSize, exactSize, proposedSize,
                ownerFields.size(), autoFields, apply, apply ? "high" : "manual",
                reason, evidence.functions);
            classRows.add(proposal);
            fieldRows.addAll(ownerFields);
        }
        classRows.sort(Comparator.comparing(row -> row.owner));
        fieldRows.sort(Comparator.comparing((FieldProposal row) -> row.owner)
            .thenComparingLong(row -> row.offset));

        writeClasses(directory.resolve("class_layout_proposals.tsv"), classRows);
        writeFields(directory.resolve("class_field_proposals.tsv"), fieldRows);
        writeSummary(directory.resolve("class_layout_summary.txt"), classRows, fieldRows);
        long applicable = classRows.stream().filter(row -> row.apply).count();
        long fields = fieldRows.stream().filter(row -> row.apply).count();
        Set<String> applicableOwners = new TreeSet<>();
        for (ClassProposal row : classRows) if (row.apply) applicableOwners.add(row.owner);
        long semanticTypes = fieldRows.stream().filter(row -> row.typeApply &&
            applicableOwners.contains(row.owner)).count();
        long suggestedNames = fieldRows.stream().filter(row -> !row.suggestedName.isBlank() &&
            row.apply && applicableOwners.contains(row.owner)).count();
        println("Class-layout analysis complete: " + directory.toAbsolutePath().normalize());
        println("Classes: " + classRows.size() + ", class_apply: " + applicable +
            ", fields: " + fieldRows.size() + ", field_apply: " + fields +
            ", semantic_type_apply: " + semanticTypes +
            ", review_name_suggestions: " + suggestedNames);
    }

    private void analyzeFunction(Function function, ClassEvidence owner) {
        Map<String, RegisterValue> registers = new HashMap<>();
        registers.put("ECX", RegisterValue.thisAddress(0));
        Map<Long, RegisterValue> stackValues = new HashMap<>();
        seedStackParameters(function, stackValues);
        Map<Long, FunctionFieldAccess> functionFields = new TreeMap<>();
        List<PushEvidence> pendingPushes = new ArrayList<>();
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            String text = instruction.toString().toUpperCase(Locale.ROOT);
            String[] operands = splitOperands(text);

            if (!"LEA".equals(mnemonic)) {
                int size = accessSize(text, operands);
                for (int operandIndex = 0; operandIndex < operands.length; operandIndex++) {
                    MemoryExpr memory = memoryExpr(operands[operandIndex]);
                    RegisterValue base = memory == null ? null : registers.get(memory.register);
                    if (base == null || base.kind != ValueKind.THIS_ADDRESS) continue;
                    long offset = base.offset + memory.displacement;
                    if (offset < 0 || offset >= MAX_CLASS_SIZE || size <= 0 || size > 8) continue;
                    FieldEvidence field = field(owner, offset);
                    field.sizes.merge(size, 1, Integer::sum);
                    boolean write = operandIndex == 0 && isWriteMnemonic(mnemonic);
                    if (write) field.writes++;
                    else field.reads++;
                    FunctionFieldAccess local = functionFields.computeIfAbsent(offset,
                        ignored -> new FunctionFieldAccess());
                    if (write) local.writes++;
                    else local.reads++;
                    inferInstructionType(field, instruction, mnemonic, size);
                    field.functions.add(function.getEntryPoint().toString().toUpperCase(Locale.ROOT));
                    owner.functions.add(function.getEntryPoint().toString().toUpperCase(Locale.ROOT));
                }
            }

            if ("CALL".equals(mnemonic)) {
                Function called = calledFunction(instruction);
                if (called != null) {
                    inferThisReceiver(owner, function, called, registers.get("ECX"));
                    inferStackArguments(owner, function, called, pendingPushes);
                }
                registers.remove("EAX");
                registers.remove("ECX");
                registers.remove("EDX");
                pendingPushes.clear();
                String returnType = called == null || !trusted(called.getSignatureSource()) ? "" :
                    meaningfulTypeSpecification(called.getReturnType());
                if (!returnType.isBlank()) {
                    registers.put("EAX", RegisterValue.typedValue(returnType,
                        producedName(called), addr(function.getEntryPoint()) +
                        " return from " + called.getName(true)));
                }
                continue;
            }
            if ("PUSH".equals(mnemonic)) {
                pendingPushes.add(pushEvidence(operands, registers));
            }
            if ("MOV".equals(mnemonic) && operands.length >= 2 &&
                    "EBP".equals(cleanRegister(operands[0])) &&
                    "ESP".equals(cleanRegister(operands[1]))) {
                pendingPushes.clear(); // Discard callee-save pushes from the function prologue.
            }
            if (instruction.getFlowType().isJump() || instruction.getFlowType().isTerminal()) {
                pendingPushes.clear();
            }
            updateRegisters(owner, function, mnemonic, operands, registers, stackValues);
        }
        inferAccessorName(function, owner, functionFields);
    }

    private FieldEvidence field(ClassEvidence owner, long offset) {
        return owner.fields.computeIfAbsent(offset, ignored -> new FieldEvidence(offset));
    }

    private void inferThisReceiver(ClassEvidence owner, Function containing, Function called,
            RegisterValue receiver) {
        if (receiver == null || receiver.kind != ValueKind.FIELD_VALUE ||
                !"__thiscall".equals(called.getCallingConventionName())) return;
        String calledOwner = ownerOf(called);
        DataType ownerType = findOwnerType(calledOwner);
        if (!(ownerType instanceof Structure)) return;
        String specification = "pointer:" + ownerType.getPathName();
        field(owner, receiver.offset).addType(specification,
            addr(containing.getEntryPoint()) + " [this+" + hex(receiver.offset) +
            "] used as receiver of " + called.getName(true));
    }

    private void inferStackArguments(ClassEvidence owner, Function containing, Function called,
            List<PushEvidence> pushes) {
        String convention = called.getCallingConventionName();
        if (!("__cdecl".equals(convention) || "__stdcall".equals(convention) ||
                "__thiscall".equals(convention))) return;
        List<Parameter> parameters = new ArrayList<>();
        for (Parameter parameter : called.getParameters()) {
            if (!parameter.isAutoParameter()) parameters.add(parameter);
        }
        if (parameters.isEmpty() || parameters.size() != pushes.size()) return;
        for (int index = 0; index < parameters.size(); index++) {
            Parameter parameter = parameters.get(index);
            PushEvidence pushed = pushes.get(pushes.size() - 1 - index);
            if (pushed == null || pushed.kind != ValueKind.FIELD_VALUE) continue;
            boolean trusted = trusted(parameter.getSource());
            String inferredType = trusted ?
                meaningfulTypeSpecification(parameter.getDataType()) : "";
            if (inferredType.isBlank() &&
                    !(trusted && meaningfulParameterName(parameter.getName()))) continue;
            FieldEvidence field = field(owner, pushed.offset);
            String evidence = addr(containing.getEntryPoint()) + " [this+" +
                hex(pushed.offset) + "] passed to " + called.getName(true) + " parameter " +
                parameter.getName();
            if (!inferredType.isBlank()) field.addType(inferredType, evidence);
            if (meaningfulParameterName(parameter.getName())) {
                field.addName(cleanFieldName(parameter.getName()), evidence);
            }
        }
    }

    private Function calledFunction(Instruction instruction) {
        for (Address flow : instruction.getFlows()) {
            Function function = currentProgram.getFunctionManager().getFunctionAt(flow);
            if (function == null) continue;
            if (function.isThunk()) {
                Function target = function.getThunkedFunction(true);
                if (target != null) function = target;
            }
            return function;
        }
        return null;
    }

    private String meaningfulTypeSpecification(DataType type) {
        if (type == null || type.getLength() < 1) return "";
        if (type instanceof Pointer pointer) {
            DataType pointed = pointer.getDataType();
            if (pointed == null || pointed.getPathName().matches(
                    "/undefined(?:1|2|4|8)?")) return "";
            return "pointer:" + pointed.getPathName();
        }
        if (type.getPathName().matches("/undefined(?:1|2|4|8)?") ||
                "/void".equals(type.getPathName())) return "";
        if (type instanceof Enum || type instanceof TypeDef ||
                type instanceof AbstractIntegerDataType ||
                type instanceof AbstractFloatDataType) return type.getPathName();
        return "";
    }

    private void seedStackParameters(Function function, Map<Long, RegisterValue> stackValues) {
        // Ghidra stack parameters are relative to ESP at entry.  After the standard
        // PUSH EBP / MOV EBP,ESP prologue the same slot is one pointer-size higher.
        long frameBias = currentProgram.getDefaultPointerSize();
        for (Parameter parameter : function.getParameters()) {
            if (parameter.isAutoParameter() || !parameter.isStackVariable()) continue;
            boolean trusted = trusted(parameter.getSource());
            String type = trusted ? meaningfulTypeSpecification(parameter.getDataType()) : "";
            String name = trusted && meaningfulParameterName(parameter.getName()) ?
                cleanFieldName(parameter.getName()) : "";
            if (type.isBlank() && name.isBlank()) continue;
            String evidence = addr(function.getEntryPoint()) + " incoming parameter " +
                parameter.getName();
            stackValues.put((long)parameter.getStackOffset() + frameBias,
                RegisterValue.typedValue(type, name, evidence));
        }
    }

    private boolean trusted(SourceType source) {
        return source == SourceType.USER_DEFINED || source == SourceType.IMPORTED;
    }

    private void inferInstructionType(FieldEvidence field, Instruction instruction,
            String mnemonic, int size) {
        String type = "";
        if (Set.of("FLD", "FST", "FSTP", "FADD", "FSUB", "FSUBR", "FMUL",
                "FDIV", "FDIVR", "FCOM", "FCOMP").contains(mnemonic)) {
            if (size == 4) type = "/float";
            else if (size == 8) type = "/double";
        }
        else if (Set.of("FILD", "FIST", "FISTP", "FICOM", "FICOMP")
                .contains(mnemonic)) {
            type = signedIntegerType(size);
        }
        else if ("MOVSX".equals(mnemonic) || "MOVSXD".equals(mnemonic)) {
            type = signedIntegerType(size);
        }
        else if ("MOVZX".equals(mnemonic)) {
            type = unsignedIntegerType(size);
        }
        if (!type.isBlank()) field.addType(type, addr(instruction.getAddress()) + " " +
            mnemonic + " establishes " + type);
    }

    private String signedIntegerType(int size) {
        return switch (size) {
            case 1 -> "/char";
            case 2 -> "/short";
            case 4 -> "/int";
            case 8 -> "/longlong";
            default -> "";
        };
    }

    private String unsignedIntegerType(int size) {
        return switch (size) {
            case 1 -> "/byte";
            case 2 -> "/ushort";
            case 4 -> "/uint";
            case 8 -> "/ulonglong";
            default -> "";
        };
    }

    private void inferAccessorName(Function function, ClassEvidence owner,
            Map<Long, FunctionFieldAccess> fields) {
        Matcher matcher = ACCESSOR.matcher(function.getName());
        if (!matcher.matches()) return;
        boolean setter = "Set".equals(matcher.group(1));
        List<Long> candidates = fields.entrySet().stream()
            .filter(entry -> entry.getKey() != 0)
            .filter(entry -> setter ? entry.getValue().writes > 0 : entry.getValue().reads > 0)
            .map(Map.Entry::getKey).toList();
        if (candidates.size() != 1) return;
        String name = cleanFieldName(matcher.group(2));
        if (name.isBlank()) return;
        long offset = candidates.get(0);
        field(owner, offset).addName(name, addr(function.getEntryPoint()) + " unique " +
            matcher.group(1).toLowerCase(Locale.ROOT) + " field in " +
            function.getName(true));
    }

    private String producedName(Function called) {
        String name = called.getName();
        Matcher accessor = Pattern.compile(
            "^(?:Get|Find|Create|Make|New|Alloc|Open|Load)([A-Z][A-Za-z0-9_]*)$")
            .matcher(name);
        return accessor.matches() ? cleanFieldName(accessor.group(1)) : "";
    }

    private String cleanFieldName(String value) {
        if (value == null) return "";
        String result = value.trim().replaceAll("^(?:m_|p_)+", "")
            .replaceAll("[^A-Za-z0-9_]", "_");
        if (result.isBlank() || !Character.isLetter(result.charAt(0)) && result.charAt(0) != '_')
            return "";
        result = lowerCamel(result);
        return meaningfulParameterName(result) ? result : "";
    }

    private String lowerCamel(String value) {
        if (value.isBlank() || Character.isLowerCase(value.charAt(0))) return value;
        int firstLower = -1;
        for (int index = 0; index < value.length(); index++) {
            if (Character.isLowerCase(value.charAt(index))) {
                firstLower = index;
                break;
            }
        }
        if (firstLower < 0) return value.toLowerCase(Locale.ROOT);
        int prefix = Math.max(1, firstLower - 1);
        return value.substring(0, prefix).toLowerCase(Locale.ROOT) +
            value.substring(prefix);
    }

    private PushEvidence pushEvidence(String[] operands, Map<String, RegisterValue> registers) {
        if (operands.length < 1) return PushEvidence.unknown();
        String register = cleanRegister(operands[0]);
        if (register != null)
            return PushEvidence.from(isFullRegister(operands[0]) ? registers.get(register) : null);
        MemoryExpr memory = memoryExpr(operands[0]);
        RegisterValue base = memory == null ? null : registers.get(memory.register);
        if (base != null && base.kind == ValueKind.THIS_ADDRESS) {
            return new PushEvidence(ValueKind.FIELD_VALUE, base.offset + memory.displacement);
        }
        return PushEvidence.unknown();
    }

    private List<FieldProposal> makeFields(ClassEvidence evidence, Structure structure,
            String vtableType, long proposedSize) {
        List<FieldProposal> result = new ArrayList<>();
        Map<String, Integer> inferredTypeCounts = new HashMap<>();
        for (FieldEvidence field : evidence.fields.values()) {
            String inferred = field.uniqueType();
            if (!inferred.isBlank()) inferredTypeCounts.merge(inferred, 1, Integer::sum);
        }
        boolean hasOffsetZero = false;
        for (FieldEvidence field : evidence.fields.values()) {
            if (field.offset == 0) hasOffsetZero = true;
            int size = field.dominantSize();
            boolean consistent = field.sizes.size() == 1;
            String name = field.offset == 0 && vtableType != null ? "vtable" :
                String.format("field_%04X", field.offset);
            String type = field.offset == 0 && vtableType != null ? "pointer:" + vtableType :
                "/undefined" + size;
            String inferredType = field.uniqueType();
            boolean typeApply = !inferredType.isBlank() && typeLength(inferredType) == size;
            String suggestedName = field.uniqueName();
            if (suggestedName.isBlank() && !inferredType.isBlank() &&
                    inferredTypeCounts.getOrDefault(inferredType, 0) == 1)
                suggestedName = typeBasedName(inferredType);
            String nameConfidence = suggestedName.isBlank() ? "none" :
                field.nameCount(suggestedName) >= 2 ? "high" : "medium";
            // Names remain review-only.  A reviewer can change name_apply to 1 without
            // enabling or disabling the independently controlled type proposal.
            boolean nameApply = false;
            DataTypeComponent existing = field.offset <= Integer.MAX_VALUE ?
                structure.getComponentAt((int)field.offset) : null;
            boolean existingConcreteType = false;
            if (existing != null && existing.getOffset() == field.offset &&
                    existing.getDataType() instanceof Enum && existing.getLength() == size &&
                    existing.getComment() != null &&
                    existing.getComment().contains(SWITCH_ENUM_MARKER)) {
                type = existing.getDataType().getPathName();
                if (existing.getFieldName() != null) name = existing.getFieldName();
                existingConcreteType = true;
            }
            else if (existing != null && existing.getOffset() == field.offset &&
                    existing.getLength() == size && existing.getComment() != null &&
                    existing.getComment().contains(MARKER) &&
                    !isUndefined(existing.getDataType())) {
                type = typeSpecification(existing.getDataType());
                if (existing.getFieldName() != null) name = existing.getFieldName();
                existingConcreteType = true;
            }
            if (existingConcreteType) typeApply = false;
            if (!genericFieldName(name)) suggestedName = "";
            boolean apply = consistent && field.offset + size <= proposedSize;
            if (!apply) typeApply = false;
            String reason = !consistent ? "conflicting_access_widths=" + field.sizeText() :
                field.offset == 0 && vtableType != null ? "owner_vtable_pointer" :
                "consistent_this_relative_access";
            if (field.inferredTypes.size() > 1)
                reason += "; inferred_type_conflict=" + String.join("|", field.inferredTypes.keySet());
            else if (existingConcreteType && !inferredType.isBlank() &&
                    !inferredType.equals(type))
                reason += "; existing_concrete_type_preserved=" + type +
                    "; rejected_inference=" + inferredType;
            else if (existingConcreteType) reason += "; concrete_type_already_present";
            else if (typeApply) reason += "; unique_semantic_type_evidence";
            result.add(new FieldProposal(evidence.owner, field.offset, size, name, type,
                inferredType, typeApply, suggestedName, nameApply, field.typeEvidenceText(),
                field.nameEvidenceText(), typeApply ? "high" :
                    field.inferredTypes.size() > 1 ? "conflict" :
                    existingConcreteType ? "existing" : "none", nameConfidence,
                field.reads, field.writes, field.functions, apply,
                apply ? "high" : "conflict", reason));
        }
        disableDuplicateSuggestedNames(result);
        // A high-confidence owner vtable is direct layout evidence even when none of the
        // currently named methods happens to dereference [this] itself.
        if (!hasOffsetZero && vtableType != null && proposedSize >= 4) {
            result.add(new FieldProposal(evidence.owner, 0, 4, "vtable",
                "pointer:" + vtableType, "", false, "", false, "", "",
                "existing", "none", 0, 0, Set.of(), true, "high",
                "owner_vtable_pointer"));
        }
        result.sort(Comparator.comparingLong(field -> field.offset));
        return result;
    }

    private void disableDuplicateSuggestedNames(List<FieldProposal> fields) {
        Map<String, Integer> counts = new HashMap<>();
        for (FieldProposal field : fields) {
            if (!field.suggestedName.isBlank())
                counts.merge(field.suggestedName, 1, Integer::sum);
        }
        for (FieldProposal field : fields) {
            if (!field.suggestedName.isBlank() &&
                    counts.getOrDefault(field.suggestedName, 0) > 1) {
                field.nameApply = false;
                field.suggestedName = "";
                field.nameConfidence = "conflict";
                field.reason += "; duplicate_suggested_field_name";
            }
        }
    }

    private int typeLength(String specification) {
        if (specification.startsWith("pointer:")) return currentProgram.getDefaultPointerSize();
        DataType type = dataTypes.getDataType(specification);
        return type == null ? -1 : type.getLength();
    }

    private String typeBasedName(String specification) {
        String path = specification.startsWith("pointer:") ?
            specification.substring("pointer:".length()) : specification;
        String leaf = path.substring(path.lastIndexOf('/') + 1);
        if (path.matches("(?i).*(?:windef|winnt|windows)\\.h/.*") ||
                leaf.matches("[A-Z0-9_]+")) return "";
        if (Set.of("char", "byte", "short", "ushort", "int", "uint", "longlong",
                "ulonglong", "float", "double", "void").contains(leaf)) return "";
        leaf = leaf.replaceFirst("(?i)Ty$", "").replaceFirst("C$", "");
        return cleanFieldName(leaf);
    }

    private boolean genericFieldName(String value) {
        return value == null || value.isBlank() || value.equals("vtable") ||
            value.matches("(?i)field_[0-9a-f]+");
    }

    private boolean isUndefined(DataType type) {
        return type.getPathName().matches("/undefined(?:1|2|4|8)?");
    }

    private String typeSpecification(DataType type) {
        if (type instanceof Pointer pointer && pointer.getDataType() != null)
            return "pointer:" + pointer.getDataType().getPathName();
        return type.getPathName();
    }

    private void markOverlaps(List<FieldProposal> fields) {
        for (int left = 0; left < fields.size(); left++) {
            FieldProposal a = fields.get(left);
            if (!a.apply) continue;
            for (int right = left + 1; right < fields.size(); right++) {
                FieldProposal b = fields.get(right);
                if (b.offset >= a.offset + a.size) break;
                if (!b.apply || a.offset == b.offset) continue;
                a.apply = false;
                b.apply = false;
                a.typeApply = false;
                b.typeApply = false;
                a.nameApply = false;
                b.nameApply = false;
                a.typeConfidence = b.typeConfidence = "conflict";
                a.confidence = b.confidence = "conflict";
                a.reason = "overlaps_field_" + String.format("%04X", b.offset);
                b.reason = "overlaps_field_" + String.format("%04X", a.offset);
            }
        }
    }

    private Map<String, Long> readClassSizes(Path path) throws Exception {
        Map<String, Long> result = new TreeMap<>();
        if (!Files.isRegularFile(path)) return result;
        Tsv tsv = readTsv(path);
        if (!tsv.header.contains("owner") || !tsv.header.contains("size")) return result;
        for (Map<String, String> row : tsv.rows) {
            if (!enabled(row.get("apply"))) continue;
            result.put(unt(row.get("owner")), Long.parseLong(row.get("size")));
        }
        return result;
    }

    private Map<String, String> readVtableTypes(Path path) throws Exception {
        Map<String, String> result = new TreeMap<>();
        if (!Files.isRegularFile(path)) return result;
        Tsv tsv = readTsv(path);
        if (!tsv.header.contains("owner") || !tsv.header.contains("proposed_name")) return result;
        for (Map<String, String> row : tsv.rows) {
            String owner = unt(row.get("owner")), name = unt(row.get("proposed_name"));
            if (owner.isBlank() || name.isBlank()) continue;
            DataType type = dataTypes.getDataType(
                "/SubmarineTitans/Recovered/VTables/" + name);
            if (type != null) result.putIfAbsent(owner, type.getPathName());
        }
        return result;
    }

    private String ownerOf(Function function) {
        String qualified = function.getName(true);
        int separator = qualified.lastIndexOf("::");
        if (separator > 0) {
            String owner = qualified.substring(0, separator);
            String upper = owner.toUpperCase(Locale.ROOT);
            if (!owner.equals("Global") && !owner.startsWith("Library::") &&
                    !upper.contains(".DLL")) return owner;
        }
        for (Parameter parameter : function.getParameters()) {
            if (!parameter.isAutoParameter() || !(parameter.getDataType() instanceof Pointer pointer))
                continue;
            DataType pointed = pointer.getDataType();
            if (pointed != null && pointed instanceof Structure) return pointed.getName();
        }
        return "";
    }

    private boolean isLibrary(Function function) {
        for (FunctionTag tag : function.getTags()) {
            String name = tag.getName();
            if ("LIBRARY".equals(name) || name.startsWith("LIBRARY_")) return true;
        }
        return false;
    }

    private DataType findOwnerType(String owner) {
        String name = leaf(owner);
        DataType direct = dataTypes.getDataType("/" + name);
        if (direct instanceof Structure) return direct;
        List<DataType> matches = new ArrayList<>();
        dataTypes.findDataTypes(name, matches);
        for (DataType match : matches) {
            if (match instanceof Structure &&
                    !match.getPathName().contains("/Recovered/VTables/")) return match;
        }
        return null;
    }

    private boolean isPlaceholder(Structure structure) {
        String description = structure.getDescription();
        return structure.getLength() <= 1 && structure.getNumDefinedComponents() == 0 &&
            (description == null || description.isBlank() ||
                description.contains("PlaceHolder Class Structure"));
    }

    private boolean isOwnedUnchangedCandidate(Structure structure) {
        String description = structure.getDescription();
        return description != null && description.contains(MARKER) &&
            description.contains("generated_layout_sha256=");
    }

    private void updateRegisters(ClassEvidence owner, Function function, String mnemonic,
            String[] operands, Map<String, RegisterValue> registers,
            Map<Long, RegisterValue> stackValues) {
        if (operands.length == 0) return;
        String destination = cleanRegister(operands[0]);
        if ("MOV".equals(mnemonic) && destination != null && operands.length >= 2) {
            if (!isFullRegister(operands[0])) { registers.remove(destination); return; }
            String sourceRegister = cleanRegister(operands[1]);
            if (sourceRegister != null) {
                RegisterValue source = isFullRegister(operands[1]) ?
                    registers.get(sourceRegister) : null;
                if (source == null) registers.remove(destination);
                else registers.put(destination, source);
                return;
            }
            MemoryExpr sourceMemory = memoryExpr(operands[1]);
            RegisterValue base = sourceMemory == null ? null : registers.get(sourceMemory.register);
            if (base != null && base.kind == ValueKind.THIS_ADDRESS) {
                registers.put(destination, RegisterValue.fieldValue(
                    base.offset + sourceMemory.displacement));
            }
            else if (sourceMemory != null && "EBP".equals(sourceMemory.register)) {
                RegisterValue source = stackValues.get(sourceMemory.displacement);
                if (source == null) registers.remove(destination);
                else registers.put(destination, source);
            }
            else registers.remove(destination);
            return;
        }
        if ("MOV".equals(mnemonic) && destination == null && operands.length >= 2) {
            MemoryExpr destinationMemory = memoryExpr(operands[0]);
            RegisterValue base = destinationMemory == null ? null :
                registers.get(destinationMemory.register);
            String sourceRegister = cleanRegister(operands[1]);
            RegisterValue source = sourceRegister == null || !isFullRegister(operands[1]) ? null :
                registers.get(sourceRegister);
            if (destinationMemory != null && "EBP".equals(destinationMemory.register)) {
                if (source == null) stackValues.remove(destinationMemory.displacement);
                else stackValues.put(destinationMemory.displacement, source);
                return;
            }
            if (base != null && base.kind == ValueKind.THIS_ADDRESS && source != null &&
                    source.kind == ValueKind.TYPED_VALUE) {
                long offset = base.offset + destinationMemory.displacement;
                FieldEvidence target = field(owner, offset);
                String evidence = addr(function.getEntryPoint()) + " [this+" + hex(offset) +
                    "] assigned " + source.evidence;
                if (!source.type.isBlank()) target.addType(source.type, evidence);
                if (!source.name.isBlank()) target.addName(source.name, evidence);
            }
            return;
        }
        if ("LEA".equals(mnemonic) && destination != null && operands.length >= 2) {
            if (!isFullRegister(operands[0])) { registers.remove(destination); return; }
            MemoryExpr sourceMemory = memoryExpr(operands[1]);
            RegisterValue source = sourceMemory == null ? null : registers.get(sourceMemory.register);
            if (source == null || source.kind != ValueKind.THIS_ADDRESS)
                registers.remove(destination);
            else registers.put(destination,
                RegisterValue.thisAddress(source.offset + sourceMemory.displacement));
            return;
        }
        if (("ADD".equals(mnemonic) || "SUB".equals(mnemonic)) && destination != null &&
                registers.containsKey(destination) && operands.length >= 2) {
            RegisterValue original = registers.get(destination);
            Long value = immediate(operands[1]);
            if (value == null || original.kind != ValueKind.THIS_ADDRESS)
                registers.remove(destination);
            else registers.put(destination, RegisterValue.thisAddress(original.offset +
                ("SUB".equals(mnemonic) ? -value : value)));
            return;
        }
        if (destination != null && !Set.of("CMP", "TEST", "PUSH", "JMP", "RET")
                .contains(mnemonic)) registers.remove(destination);
    }

    private boolean meaningfulParameterName(String value) {
        if (value == null || value.isBlank()) return false;
        return value.matches("[A-Za-z_][A-Za-z0-9_]*") &&
            !value.matches("(?i)(?:this|param_?\\d+|arg_?\\d+|unknown_?.*|value|data|ptr|p)");
    }

    private static String addr(Address address) {
        return address.toString().toUpperCase(Locale.ROOT);
    }

    private static String hex(long value) {
        return String.format("0x%X", value);
    }

    private boolean isWriteMnemonic(String mnemonic) {
        return !Set.of("CMP", "TEST", "PUSH", "CALL", "JMP", "LEA").contains(mnemonic);
    }

    private int accessSize(String text, String[] operands) {
        if (text.contains("QWORD PTR")) return 8;
        if (text.contains("DWORD PTR")) return 4;
        if (text.contains("WORD PTR")) return 2;
        if (text.contains("BYTE PTR")) return 1;
        for (String operand : operands) {
            String register = operand.trim().toUpperCase(Locale.ROOT);
            if (!REGISTER.matcher(register).matches()) continue;
            if (Set.of("AL", "AH", "BL", "BH", "CL", "CH", "DL", "DH").contains(register))
                return 1;
            if (Set.of("AX", "BX", "CX", "DX", "SI", "DI", "BP", "SP").contains(register))
                return 2;
            if (register.startsWith("E")) return 4;
            if (register.startsWith("R")) return 8;
        }
        return 4;
    }

    private String[] splitOperands(String text) {
        int space = text.indexOf(' ');
        if (space < 0) return new String[0];
        String value = text.substring(space + 1).trim();
        return value.isEmpty() ? new String[0] : value.split("\\s*,\\s*", -1);
    }

    private MemoryExpr memoryExpr(String operand) {
        int open = operand.indexOf('['), close = operand.lastIndexOf(']');
        if (open < 0 || close <= open) return null;
        String expression = operand.substring(open, close + 1).replace(" ", "")
            .replace("+-", "-").replace("-+", "-");
        Matcher matcher = MEMORY.matcher(expression);
        if (!matcher.matches()) return null; // Indexed accesses are deliberately excluded.
        long displacement = 0;
        if (matcher.group(3) != null) {
            Long parsed = immediate(matcher.group(3));
            if (parsed == null) return null;
            displacement = "-".equals(matcher.group(2)) ? -parsed : signed32(parsed);
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
            case "SI", "ESI", "RSI" -> "ESI"; case "DI", "EDI", "RDI" -> "EDI";
            case "BP", "EBP", "RBP" -> "EBP"; case "SP", "ESP", "RSP" -> "ESP";
            default -> register.toUpperCase(Locale.ROOT);
        };
    }
    private boolean isFullRegister(String operand) {
        return Set.of("EAX", "EBX", "ECX", "EDX", "ESI", "EDI", "EBP", "ESP",
            "RAX", "RBX", "RCX", "RDX", "RSI", "RDI", "RBP", "RSP")
            .contains(operand.trim().toUpperCase(Locale.ROOT));
    }

    private Long immediate(String operand) {
        String value = operand.trim().toUpperCase(Locale.ROOT);
        try {
            if (value.startsWith("0X")) return Long.parseUnsignedLong(value.substring(2), 16);
            if (value.matches("[0-9]+")) return Long.parseLong(value);
        }
        catch (NumberFormatException exception) { return null; }
        return null;
    }

    private long signed32(long value) {
        return value <= 0xffffffffL && (value & 0x80000000L) != 0 ? value - 0x100000000L : value;
    }

    private Path programDirectory(File selected) {
        Path path = selected.toPath().toAbsolutePath().normalize();
        if (Files.isRegularFile(path.resolve("vtable_proposals.tsv")) ||
                Files.isRegularFile(path.resolve("constructor_class_sizes.tsv"))) return path;
        return path.resolve(safe(currentProgram.getName()));
    }

    private File outputDirectory() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless()) throw new IllegalArgumentException("Recovery directory required");
        return askDirectory("Select recovery output directory", "Analyze class layouts");
    }

    private void writeClasses(Path path, List<ClassProposal> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\towner\ttype_path\texisting_length\tobserved_min_size\t" +
                "exact_allocation_size\tproposed_length\tfield_count\tauto_field_count\t" +
                "confidence\treason\tevidence_functions\n");
            for (ClassProposal row : rows) out.write(bit(row.apply) + "\t" + tsv(row.owner) +
                "\t" + tsv(row.typePath) + "\t" + row.existingLength + "\t" +
                row.observedSize + "\t" + (row.exactSize < 0 ? "" : row.exactSize) + "\t" +
                row.proposedLength + "\t" + row.fieldCount + "\t" + row.autoFieldCount +
                "\t" + row.confidence + "\t" + row.reason + "\t" +
                tsv(String.join(" | ", row.functions)) + "\n");
        }
    }

    private void writeFields(Path path, List<FieldProposal> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\towner\toffset\toffset_hex\tsize\tproposed_name\t" +
                "proposed_type\ttype_apply\tinferred_type\tsuggested_name\tname_apply\t" +
                "type_confidence\tname_confidence\ttype_evidence\tname_evidence\t" +
                "reads\twrites\tconfidence\treason\t" +
                "evidence_functions\n");
            for (FieldProposal row : rows) out.write(bit(row.apply) + "\t" + tsv(row.owner) +
                "\t" + row.offset + "\t" + String.format("0x%X", row.offset) + "\t" +
                row.size + "\t" + row.name + "\t" + tsv(row.type) + "\t" +
                bit(row.typeApply) + "\t" + tsv(row.inferredType) + "\t" +
                tsv(row.suggestedName) + "\t" + bit(row.nameApply) + "\t" +
                row.typeConfidence + "\t" + row.nameConfidence + "\t" +
                tsv(row.typeEvidence) + "\t" + tsv(row.nameEvidence) + "\t" + row.reads +
                "\t" + row.writes + "\t" + row.confidence + "\t" + row.reason + "\t" +
                tsv(String.join(" | ", row.functions)) + "\n");
        }
    }

    private void writeSummary(Path path, List<ClassProposal> classes, List<FieldProposal> fields)
            throws Exception {
        Set<String> applicableOwners = new TreeSet<>();
        for (ClassProposal row : classes) if (row.apply) applicableOwners.add(row.owner);
        Files.write(path, List.of("program=" + currentProgram.getName(),
            "classes_with_this_accesses=" + classes.size(),
            "class_auto_apply=" + classes.stream().filter(row -> row.apply).count(),
            "field_proposals=" + fields.size(),
            "field_auto_apply=" + fields.stream().filter(row -> row.apply).count(),
            "field_effective_auto_apply=" + fields.stream()
                .filter(row -> row.apply && applicableOwners.contains(row.owner)).count(),
            "field_conflicts=" + fields.stream().filter(row -> !row.apply).count(),
            "field_type_auto_apply=" + fields.stream()
                .filter(row -> row.typeApply && applicableOwners.contains(row.owner)).count(),
            "field_name_auto_apply=" + fields.stream().filter(row -> row.nameApply).count(),
            "field_name_suggestions=" + fields.stream()
                .filter(row -> !row.suggestedName.isBlank()).count(),
            "field_name_applicable_suggestions=" + fields.stream()
                .filter(row -> !row.suggestedName.isBlank() && row.apply &&
                    applicableOwners.contains(row.owner)).count(),
            "field_scalar_type_auto_apply=" + fields.stream()
                .filter(row -> row.typeApply && applicableOwners.contains(row.owner) &&
                    !row.inferredType.startsWith("pointer:"))
                .count(),
            "field_pointer_type_auto_apply=" + fields.stream()
                .filter(row -> row.typeApply && applicableOwners.contains(row.owner) &&
                    row.inferredType.startsWith("pointer:"))
                .count(),
            "field_type_conflicts=" + fields.stream()
                .filter(row -> row.reason.contains("inferred_type_conflict")).count(),
            "field_existing_type_conflicts=" + fields.stream()
                .filter(row -> row.reason.contains("rejected_inference=")).count(),
            "note=Only exact register-plus-constant accesses derived from incoming ECX are used.",
            "note_types=Types require one unambiguous typed receiver/argument/return, " +
                "sign-extension, or x87 memory-use flow with an exactly matching width.",
            "note_names=Names are review-only (name_apply=0); suggestions come from typed " +
                "parameters, unique accessors/producers, or a unique user-defined field type.",
            "note_manual=Non-placeholder structures and generated structures whose current layout " +
                "cannot be verified are never auto-applied."), StandardCharsets.UTF_8);
    }

    private Tsv readTsv(Path path) throws Exception {
        List<String> lines = Files.readAllLines(path, StandardCharsets.UTF_8);
        if (lines.isEmpty()) throw new IllegalArgumentException("Empty TSV: " + path);
        String[] header = lines.get(0).split("\\t", -1);
        List<Map<String, String>> rows = new ArrayList<>();
        for (int line = 1; line < lines.size(); line++) {
            if (lines.get(line).isBlank()) continue;
            String[] values = lines.get(line).split("\\t", -1);
            if (values.length != header.length) continue;
            Map<String, String> row = new LinkedHashMap<>();
            for (int column = 0; column < header.length; column++)
                row.put(header[column], values[column]);
            rows.add(row);
        }
        return new Tsv(List.of(header), rows);
    }

    private static String leaf(String owner) {
        int separator = owner.lastIndexOf("::");
        return separator < 0 ? owner : owner.substring(separator + 2);
    }
    private static boolean enabled(String value) {
        return "1".equals(value) || "true".equalsIgnoreCase(value) ||
            "yes".equalsIgnoreCase(value);
    }
    private static String bit(boolean value) { return value ? "1" : "0"; }
    private static String safe(String value) {
        return value.replaceAll("[^A-Za-z0-9._-]+", "_");
    }
    private static String tsv(String value) {
        return value.replace("\\", "\\\\").replace("\t", "\\t")
            .replace("\r", "\\r").replace("\n", "\\n");
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

    private static class Tsv {
        final List<String> header;
        final List<Map<String, String>> rows;
        Tsv(List<String> header, List<Map<String, String>> rows) {
            this.header = header; this.rows = rows;
        }
    }
    private static class MemoryExpr {
        final String register;
        final long displacement;
        MemoryExpr(String register, long displacement) {
            this.register = register; this.displacement = displacement;
        }
    }
    private enum ValueKind { THIS_ADDRESS, FIELD_VALUE, TYPED_VALUE, UNKNOWN }
    private static class RegisterValue {
        final ValueKind kind;
        final long offset;
        final String type, name, evidence;
        RegisterValue(ValueKind kind, long offset, String type, String name, String evidence) {
            this.kind = kind; this.offset = offset; this.type = type; this.name = name;
            this.evidence = evidence;
        }
        static RegisterValue thisAddress(long offset) {
            return new RegisterValue(ValueKind.THIS_ADDRESS, offset, "", "", "");
        }
        static RegisterValue fieldValue(long offset) {
            return new RegisterValue(ValueKind.FIELD_VALUE, offset, "", "", "");
        }
        static RegisterValue typedValue(String type, String name, String evidence) {
            return new RegisterValue(ValueKind.TYPED_VALUE, 0, type, name, evidence);
        }
    }
    private static class PushEvidence {
        final ValueKind kind;
        final long offset;
        PushEvidence(ValueKind kind, long offset) { this.kind = kind; this.offset = offset; }
        static PushEvidence from(RegisterValue value) {
            return value == null ? unknown() : new PushEvidence(value.kind, value.offset);
        }
        static PushEvidence unknown() { return new PushEvidence(ValueKind.UNKNOWN, 0); }
    }
    private static class ClassEvidence {
        final String owner;
        final Map<Long, FieldEvidence> fields = new TreeMap<>();
        final Set<String> functions = new TreeSet<>();
        ClassEvidence(String owner) { this.owner = owner; }
    }
    private static class FunctionFieldAccess {
        int reads, writes;
    }
    private static class FieldEvidence {
        final long offset;
        final Map<Integer, Integer> sizes = new TreeMap<>();
        final Set<String> functions = new TreeSet<>();
        final Map<String, Set<String>> inferredTypes = new TreeMap<>();
        final Map<String, Set<String>> inferredNames = new TreeMap<>();
        int reads, writes;
        FieldEvidence(long offset) { this.offset = offset; }
        void addType(String type, String evidence) {
            inferredTypes.computeIfAbsent(type, ignored -> new TreeSet<>()).add(evidence);
        }
        void addName(String name, String evidence) {
            inferredNames.computeIfAbsent(name, ignored -> new TreeSet<>()).add(evidence);
        }
        String uniqueType() {
            return inferredTypes.size() == 1 ? inferredTypes.keySet().iterator().next() : "";
        }
        String uniqueName() {
            return inferredNames.size() == 1 ? inferredNames.keySet().iterator().next() : "";
        }
        int nameCount(String name) {
            return inferredNames.getOrDefault(name, Set.of()).size();
        }
        String typeEvidenceText() { return evidenceText(inferredTypes); }
        String nameEvidenceText() { return evidenceText(inferredNames); }
        private String evidenceText(Map<String, Set<String>> values) {
            List<String> result = new ArrayList<>();
            for (Map.Entry<String, Set<String>> entry : values.entrySet())
                result.add(entry.getKey() + " <= " + String.join("; ", entry.getValue()));
            return String.join(" | ", result);
        }
        int dominantSize() {
            return sizes.entrySet().stream().max(Comparator
                .<Map.Entry<Integer, Integer>>comparingInt(Map.Entry::getValue)
                .thenComparingInt(Map.Entry::getKey)).map(Map.Entry::getKey).orElse(1);
        }
        int maximumSize() { return sizes.keySet().stream().mapToInt(Integer::intValue).max().orElse(1); }
        String sizeText() {
            List<String> result = new ArrayList<>();
            for (Map.Entry<Integer, Integer> entry : sizes.entrySet())
                result.add(entry.getKey() + "x" + entry.getValue());
            return String.join("|", result);
        }
    }
    private static class ClassProposal {
        final String owner, typePath, confidence, reason;
        final long existingLength, observedSize, exactSize, proposedLength, fieldCount,
            autoFieldCount;
        final boolean apply;
        final Set<String> functions;
        ClassProposal(String owner, String typePath, long existingLength, long observedSize,
                long exactSize, long proposedLength, long fieldCount, long autoFieldCount,
                boolean apply, String confidence, String reason, Set<String> functions) {
            this.owner = owner; this.typePath = typePath; this.existingLength = existingLength;
            this.observedSize = observedSize; this.exactSize = exactSize;
            this.proposedLength = proposedLength; this.fieldCount = fieldCount;
            this.autoFieldCount = autoFieldCount; this.apply = apply;
            this.confidence = confidence; this.reason = reason;
            this.functions = new TreeSet<>(functions);
        }
    }
    private static class FieldProposal {
        final String owner, name, type, inferredType, typeEvidence, nameEvidence;
        String suggestedName, typeConfidence, nameConfidence;
        final long offset;
        final int size, reads, writes;
        final Set<String> functions;
        boolean apply, typeApply, nameApply;
        String confidence, reason;
        FieldProposal(String owner, long offset, int size, String name, String type,
                String inferredType, boolean typeApply, String suggestedName,
                boolean nameApply, String typeEvidence, String nameEvidence,
                String typeConfidence, String nameConfidence, int reads, int writes,
                Set<String> functions, boolean apply, String confidence, String reason) {
            this.owner = owner; this.offset = offset; this.size = size; this.name = name;
            this.type = type; this.inferredType = inferredType; this.typeApply = typeApply;
            this.suggestedName = suggestedName; this.nameApply = nameApply;
            this.typeEvidence = typeEvidence; this.nameEvidence = nameEvidence;
            this.typeConfidence = typeConfidence; this.nameConfidence = nameConfidence;
            this.reads = reads; this.writes = writes;
            this.functions = new TreeSet<>(functions); this.apply = apply;
            this.confidence = confidence; this.reason = reason;
        }
    }
}
