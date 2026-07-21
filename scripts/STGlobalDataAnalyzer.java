// Recover conservative types and structural names for generic global data symbols.
// Evidence comes from use as a typed this receiver or as an argument of a trusted prototype.
// Read-only: writes global_data_*.{tsv,jsonl,txt}.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Analyze Global Data

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
import ghidra.program.model.listing.CommentType;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.DataIterator;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.FunctionTag;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.StackReference;
import ghidra.program.model.symbol.Symbol;

public class STGlobalDataAnalyzer extends GhidraScript {
    private static final Pattern SYNTHETIC = Pattern.compile(
        "(?i)(?:_?(?:DAT|UNK|PTR)_[0-9a-f]+|[0-9a-f]{6,16})");
    private static final String MARKER = "[STGlobalDataApplier]";
    private final Map<Address, Evidence> evidence = new TreeMap<>();
    private DataTypeManager dataTypes;

    @Override
    protected void run() throws Exception {
        if (currentProgram == null) { printerr("Open the analyzed ST program first."); return; }
        File selected = outputDirectory(); if (selected == null) return;
        Path directory = programDirectory(selected); Files.createDirectories(directory);
        dataTypes = currentProgram.getDataTypeManager();
        int functionsSeen = 0, callsSeen = 0;
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            monitor.checkCancelled();
            Function function = functions.next();
            if (function.isThunk() || function.isExternal() || isLibrary(function)) continue;
            functionsSeen++; callsSeen += analyze(function);
        }
        List<Proposal> proposals = makeProposals();
        List<PointerAudit> pointerAudit = pointerAudit(proposals);
        writeTsv(directory.resolve("global_data_proposals.tsv"), proposals);
        writeJson(directory.resolve("global_data_proposals.jsonl"), proposals);
        writePointerAudit(directory.resolve("global_pointer_audit.tsv"), pointerAudit);
        writePointerSummary(directory.resolve("global_pointer_summary.txt"), pointerAudit);
        writeSummary(directory.resolve("global_data_summary.txt"), proposals,
            functionsSeen, callsSeen);
        println("Global-data analysis complete: " + directory.toAbsolutePath().normalize());
        println("Functions: " + functionsSeen + ", calls: " + callsSeen +
            ", proposals: " + proposals.size() + ", type_apply: " +
            proposals.stream().filter(row -> row.typeApply).count() + ", name_apply: " +
            proposals.stream().filter(row -> row.nameApply).count() +
            ", PTR audit: " + pointerAudit.size() + ", zero globals: " +
            pointerAudit.stream().filter(row -> row.classification.equals(
                "zero_initialized_global")).count());
    }

    private int analyze(Function function) {
        Map<String, GlobalValue> registers = new HashMap<>();
        Map<String, TypedValue> typedRegisters = new HashMap<>();
        Map<Integer, TypedValue> typedStack = new HashMap<>();
        String owner = ownerTypePath(function);
        if ("__thiscall".equals(function.getCallingConventionName()) && !owner.isBlank())
            typedRegisters.put("ECX", new TypedValue("pointer:" + owner,
                function.getName(true) + " this"));
        List<GlobalValue> pushes = new ArrayList<>();
        int calls = 0;
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            String[] operands = splitOperands(instruction.toString().toUpperCase(Locale.ROOT));
            collectScalarEvidence(function, instruction, mnemonic, operands);
            if ("PUSH".equals(mnemonic)) {
                pushes.add(globalValue(instruction, 0, operands.length == 0 ? "" : operands[0],
                    registers, false));
                continue;
            }
            if ("CALL".equals(mnemonic)) {
                Function called = calledFunction(instruction);
                if (called != null) {
                    calls++;
                    propagateCall(function, called, registers.get("ECX"), pushes,
                        instruction.getAddress());
                }
                registers.remove("EAX"); registers.remove("ECX"); registers.remove("EDX");
                typedRegisters.remove("EAX"); typedRegisters.remove("ECX");
                typedRegisters.remove("EDX");
                String returnType = called == null ? "" : namedStructurePointer(
                    called.getReturnType());
                if (!returnType.isBlank()) typedRegisters.put("EAX",
                    new TypedValue(returnType, called.getName(true) + " return"));
                pushes.clear(); continue;
            }
            if (instruction.getFlowType().isJump() || instruction.getFlowType().isTerminal()) {
                pushes.clear();
                typedRegisters.clear();
            }
            trackTypedStore(function, instruction, mnemonic, operands,
                typedRegisters, typedStack);
            updateRegisters(instruction, mnemonic, operands, registers);
            if ("MOV".equals(mnemonic) && operands.length >= 2 &&
                    "EBP".equals(cleanRegister(operands[0])) &&
                    "ESP".equals(cleanRegister(operands[1]))) pushes.clear();
        }
        return calls;
    }

    private void trackTypedStore(Function containing, Instruction instruction,
            String mnemonic, String[] operands, Map<String, TypedValue> registers,
            Map<Integer, TypedValue> stack) {
        if (operands.length == 0) return;
        String destination = cleanRegister(operands[0]);
        if ("MOV".equals(mnemonic) && operands.length >= 2) {
            String source = cleanRegister(operands[1]);
            TypedValue value = source == null ? null : registers.get(source);
            Integer sourceStack = stackOffset(instruction, 1);
            if (value == null && sourceStack != null) value = stack.get(sourceStack);
            if (destination != null) {
                if (isFullRegister(operands[0]) && value != null)
                    registers.put(destination, value);
                else registers.remove(destination);
                return;
            }
            Integer destinationStack = stackOffset(instruction, 0);
            if (destinationStack != null) {
                if (value == null) stack.remove(destinationStack);
                else stack.put(destinationStack, value);
                return;
            }
            if (value == null) return;
            GlobalValue global = referencedGlobal(instruction, 0, operands[0], false);
            if (global == null || global.addressOf) return;
            String site = addr(containing.getEntryPoint()) + " stores named pointer from " +
                value.producer + " @ " + addr(instruction.getAddress());
            add(global.address, value.type, "", true, false, site);
            evidence.get(global.address).typedStores++;
            return;
        }
        if (destination != null && !Set.of("CMP", "TEST", "PUSH", "JMP", "RET")
                .contains(mnemonic)) registers.remove(destination);
    }

    private Integer stackOffset(Instruction instruction, int operandIndex) {
        for (Reference reference : instruction.getReferencesFrom())
            if (reference.getOperandIndex() == operandIndex &&
                    reference instanceof StackReference stack)
                return stack.getStackOffset();
        return null;
    }

    private String namedStructurePointer(DataType type) {
        while (type instanceof TypeDef typedef) type = typedef.getBaseDataType();
        if (!(type instanceof Pointer pointer)) return "";
        type = pointer.getDataType();
        while (type instanceof TypeDef typedef) type = typedef.getBaseDataType();
        if (!(type instanceof Structure structure) ||
                structure.getName().startsWith("Anon") ||
                structure.getPathName().contains("/Recovered/PointerShapes/") ||
                structure.getPathName().contains("/Recovered/ClassPointees/") ||
                structure.getPathName().contains("/Recovered/HiddenThis/")) return "";
        return "pointer:" + structure.getPathName();
    }

    private void propagateCall(Function containing, Function called, GlobalValue receiver,
            List<GlobalValue> pushes, Address site) {
        String ownerType = ownerTypePath(called);
        if ("__thiscall".equals(called.getCallingConventionName()) && receiver != null &&
                !ownerType.isBlank()) {
            String type = receiver.addressOf ? ownerType : "pointer:" + ownerType;
            add(receiver.address, type, "",
                true, receiver.addressOf,
                addr(containing.getEntryPoint()) + " used as this of " +
                called.getName(true) + " @ " + addr(site));
        }
        List<Parameter> parameters = explicitParameters(called);
        if (parameters.size() != pushes.size()) return;
        for (int index = 0; index < parameters.size(); index++) {
            GlobalValue value = pushes.get(pushes.size() - 1 - index);
            if (value == null) continue;
            Parameter parameter = parameters.get(index);
            if (!trusted(parameter)) continue;
            String type = meaningfulType(parameter.getDataType());
            if (type.isBlank()) continue;
            boolean addressEvidence = value.addressOf;
            if (addressEvidence) {
                if (!type.startsWith("pointer:")) continue;
                type = type.substring("pointer:".length());
            }
            String name = meaningfulName(parameter.getName()) ? parameter.getName() : "";
            add(value.address, type, name, parameter.getSource() == SourceType.USER_DEFINED ||
                parameter.getSource() == SourceType.IMPORTED, addressEvidence,
                addr(containing.getEntryPoint()) + " passed to " + called.getName(true) +
                " parameter " + parameter.getName() + " @ " + addr(site));
        }
    }

    private void collectScalarEvidence(Function function, Instruction instruction,
            String mnemonic, String[] operands) {
        if (!("MOVZX".equals(mnemonic) || "MOVSX".equals(mnemonic) ||
                "MOVSXD".equals(mnemonic) || mnemonic.startsWith("F"))) return;
        for (int index = 0; index < operands.length; index++) {
            GlobalValue value = referencedGlobal(instruction, index, operands[index], false);
            if (value == null || value.addressOf) continue;
            int width = accessWidth(operands[index]);
            String type = "";
            if ("MOVZX".equals(mnemonic)) type = unsignedType(width);
            else if ("MOVSX".equals(mnemonic) || "MOVSXD".equals(mnemonic))
                type = signedType(width);
            else if (Set.of("FLD", "FST", "FSTP", "FADD", "FSUB", "FSUBR", "FMUL",
                    "FDIV", "FDIVR", "FCOM", "FCOMP").contains(mnemonic))
                type = width == 4 ? "/float" : width == 8 ? "/double" : "";
            if (!type.isBlank()) add(value.address, type, "", false, false,
                addr(function.getEntryPoint()) + " " + mnemonic + " @ " +
                addr(instruction.getAddress()));
        }
    }

    private void add(Address address, String type, String name, boolean strong,
            boolean addressEvidence, String site) {
        if (address == null || type == null || type.isBlank()) return;
        Evidence value = evidence.computeIfAbsent(address, ignored -> new Evidence());
        value.types.merge(type, 1, Integer::sum);
        name = cleanName(name);
        if (!name.isBlank()) value.names.merge(name, 1, Integer::sum);
        if (strong) value.strongCount++;
        if (addressEvidence) value.addressEvidence++;
        value.sites.add(site);
    }

    private List<Proposal> makeProposals() {
        List<Proposal> result = new ArrayList<>();
        for (Map.Entry<Address, Evidence> entry : evidence.entrySet()) {
            Address address = entry.getKey(); Evidence ev = entry.getValue();
            Data data = currentProgram.getListing().getDefinedDataAt(address);
            Symbol symbol = currentProgram.getSymbolTable().getPrimarySymbol(address);
            if (data == null || symbol == null || data.hasStringValue()) continue;
            String currentName = symbol.getName();
            boolean scriptOwned = isOwned(address);
            boolean synthetic = SYNTHETIC.matcher(currentName).matches() || scriptOwned;
            if (!synthetic) continue;
            String proposedType = unique(ev.types);
            String currentType = typeSpecification(data.getDataType());
            boolean typeConflict = ev.types.size() > 1;
            int count = proposedType.isBlank() ? 0 : ev.types.get(proposedType);
            int proposedLength = typeLength(proposedType);
            boolean smallSafeType = proposedLength >= 1 && proposedLength <= 8 &&
                !(resolveBaseType(proposedType) instanceof Structure &&
                    !proposedType.startsWith("pointer:"));
            // Data objects do not have a per-change SourceType.  Preserve arbitrary concrete
            // data, but allow a hash/comment-owned anonymous pointer produced by our earlier
            // shape passes to graduate to a named type when repeated call ABI evidence agrees.
            boolean generatedAnonymous = scriptOwned && anonymousPointer(data.getDataType());
            boolean currentReplaceable = Undefined.isUndefined(data.getDataType()) ||
                generatedAnonymous;
            DataType currentBase = data.getDataType() instanceof Pointer pointer ?
                pointer.getDataType() : null;
            DataType proposedBase = resolveBaseType(proposedType);
            boolean extentCompatible = !generatedAnonymous ||
                currentBase instanceof Structure currentStructure &&
                proposedBase instanceof Structure proposedStructure &&
                proposedStructure.getLength() >= currentStructure.getLength();
            boolean typeChange = !proposedType.isBlank() && !sameType(currentType, proposedType);
            boolean typeApply = !typeConflict && typeChange && smallSafeType &&
                currentReplaceable && extentCompatible && ev.addressEvidence == 0 &&
                (ev.typedStores >= 1 || ev.strongCount >= 2 || count >= 3);
            String proposedName = unique(ev.names);
            if (proposedName.isBlank() && proposedType.startsWith("pointer:"))
                proposedName = structuralName(proposedType.substring("pointer:".length()), address);
            else if (!proposedName.isBlank()) proposedName = "g_" + proposedName + "_" + addr(address);
            boolean nameApply = typeApply && !proposedName.isBlank() &&
                symbol.getSource() != SourceType.USER_DEFINED &&
                symbol.getSource() != SourceType.IMPORTED;
            if (!typeChange && !nameApply) continue;
            List<String> reasons = new ArrayList<>();
            reasons.add("type_evidence=" + ev.types);
            reasons.add("name_evidence=" + ev.names);
            reasons.add("strong_evidence=" + ev.strongCount);
            reasons.add("closed_named_pointer_stores=" + ev.typedStores);
            if (typeConflict) reasons.add("type_conflict");
            if (ev.addressEvidence > 0) reasons.add("address_of_global_requires_review");
            if (generatedAnonymous) reasons.add("script_owned_anonymous_pointer_upgrade");
            if (!extentCompatible) reasons.add("named_type_shorter_than_observed_anonymous_extent");
            if (!currentReplaceable) reasons.add("concrete_existing_data_preserved");
            result.add(new Proposal(address, symbol, data, proposedType, proposedName,
                typeApply, nameApply, typeConflict ? "conflict" :
                    typeApply ? "high" : "review", String.join("; ", reasons), ev.sites));
        }
        result.sort(Comparator.comparing(row -> row.address));
        return result;
    }

    private void updateRegisters(Instruction instruction, String mnemonic, String[] operands,
            Map<String, GlobalValue> registers) {
        if (operands.length == 0) return;
        String destination = cleanRegister(operands[0]);
        if ("MOV".equals(mnemonic) && destination != null && operands.length >= 2) {
            if (!isFullRegister(operands[0])) { registers.remove(destination); return; }
            GlobalValue value = globalValue(instruction, 1, operands[1], registers, false);
            if (value == null) registers.remove(destination); else registers.put(destination, value);
            return;
        }
        if ("LEA".equals(mnemonic) && destination != null && operands.length >= 2) {
            if (!isFullRegister(operands[0])) { registers.remove(destination); return; }
            GlobalValue value = globalValue(instruction, 1, operands[1], registers, true);
            if (value == null) registers.remove(destination); else registers.put(destination, value);
            return;
        }
        if (destination != null && !Set.of("CMP", "TEST", "PUSH", "JMP", "RET")
                .contains(mnemonic)) registers.remove(destination);
    }

    private GlobalValue globalValue(Instruction instruction, int operandIndex, String operand,
            Map<String, GlobalValue> registers, boolean addressOf) {
        String register = cleanRegister(operand);
        if (register != null) return isFullRegister(operand) ? registers.get(register) : null;
        return referencedGlobal(instruction, operandIndex, operand, addressOf);
    }

    private GlobalValue referencedGlobal(Instruction instruction, int operandIndex,
            String operand, boolean addressOf) {
        for (Reference reference : instruction.getReferencesFrom()) {
            if (reference.getOperandIndex() != operandIndex) continue;
            Address address = reference.getToAddress();
            if (address == null || !currentProgram.getMemory().contains(address)) continue;
            Data data = currentProgram.getListing().getDefinedDataAt(address);
            Symbol symbol = currentProgram.getSymbolTable().getPrimarySymbol(address);
            if (data == null || symbol == null || data.hasStringValue() ||
                    !SYNTHETIC.matcher(symbol.getName()).matches() && !isOwned(address)) continue;
            boolean memoryOperand = operand.contains("[") && operand.contains("]");
            return new GlobalValue(address, addressOf || !memoryOperand);
        }
        return null;
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
    private boolean trusted(Parameter parameter) {
        return parameter.getSource() == SourceType.USER_DEFINED ||
            parameter.getSource() == SourceType.IMPORTED || semanticType(parameter.getDataType());
    }
    private boolean meaningfulName(String name) {
        return name != null && !name.matches("(?i)(?:param|arg)_?[0-9]+") &&
            !name.equals("this");
    }

    private String ownerTypePath(Function function) {
        String qualified = function.getName(true);
        int separator = qualified.lastIndexOf("::"); if (separator <= 0) return "";
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

    private String meaningfulType(DataType type) {
        if (type == null || type.getLength() < 1 || Undefined.isUndefined(type)) return "";
        if (type instanceof Pointer pointer) {
            DataType pointed = pointer.getDataType();
            if (pointed == null || Undefined.isUndefined(pointed) ||
                    "/void".equals(pointed.getPathName())) return "";
            return "pointer:" + pointed.getPathName();
        }
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
    private String typeSpecification(DataType type) {
        if (type instanceof Pointer pointer && pointer.getDataType() != null)
            return "pointer:" + pointer.getDataType().getPathName();
        return type == null ? "" : type.getPathName();
    }
    private DataType resolveBaseType(String specification) {
        if (specification == null || specification.isBlank()) return null;
        String path = specification.startsWith("pointer:") ?
            specification.substring("pointer:".length()) : specification;
        return dataTypes.getDataType(path);
    }
    private int typeLength(String specification) {
        if (specification == null || specification.isBlank()) return -1;
        if (specification.startsWith("pointer:")) return currentProgram.getDefaultPointerSize();
        DataType type = dataTypes.getDataType(specification);
        return type == null ? -1 : type.getLength();
    }
    private boolean sameType(String left, String right) { return left.equals(right); }

    private int accessWidth(String operand) {
        String value = operand.toUpperCase(Locale.ROOT);
        if (value.contains("QWORD PTR")) return 8;
        if (value.contains("DWORD PTR")) return 4;
        if (value.contains("WORD PTR")) return 2;
        if (value.contains("BYTE PTR")) return 1;
        return -1;
    }
    private String signedType(int width) {
        return switch (width) { case 1 -> "/char"; case 2 -> "/short";
            case 4 -> "/int"; case 8 -> "/longlong"; default -> ""; };
    }
    private String unsignedType(int width) {
        return switch (width) { case 1 -> "/byte"; case 2 -> "/ushort";
            case 4 -> "/uint"; case 8 -> "/ulonglong"; default -> ""; };
    }
    private String cleanName(String value) {
        if (value == null) return "";
        String result = value.replaceAll("^(?:m_|p_|g_)+", "")
            .replaceAll("[^A-Za-z0-9_]", "_");
        if (result.isBlank() || result.matches("(?i)(?:param|arg)_?[0-9]+") ||
                (!Character.isLetter(result.charAt(0)) && result.charAt(0) != '_')) return "";
        if (Character.isUpperCase(result.charAt(0))) result =
            Character.toLowerCase(result.charAt(0)) + result.substring(1);
        return result;
    }
    private String structuralName(String typePath, Address address) {
        String leaf = typePath.substring(typePath.lastIndexOf('/') + 1)
            .replaceAll("(?i)Ty$", "").replaceAll("C$", "");
        leaf = cleanName(leaf);
        return leaf.isBlank() ? "" : "g_" + leaf + "_" + addr(address);
    }
    private String unique(Map<String, Integer> values) {
        return values.size() == 1 ? values.keySet().iterator().next() : "";
    }

    private String cleanRegister(String operand) {
        String value = operand.trim().toUpperCase(Locale.ROOT);
        return value.matches("[A-Z][A-Z0-9]{1,3}") ? canonicalRegister(value) : null;
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
    private String[] splitOperands(String instruction) {
        int space = instruction.indexOf(' ');
        return space < 0 || space == instruction.length() - 1 ? new String[0] :
            instruction.substring(space + 1).split("\\s*,\\s*");
    }
    private boolean isOwned(Address address) {
        String comment = currentProgram.getListing().getComment(CommentType.PLATE, address);
        return comment != null && (comment.contains(MARKER) ||
            comment.contains("[STPointerShapeApplier]") ||
            comment.contains("[STTypeFamilyApplier]"));
    }
    private boolean anonymousPointer(DataType type) {
        if (!(type instanceof Pointer pointer) || !(pointer.getDataType() instanceof Structure))
            return false;
        String path = pointer.getDataType().getPathName();
        return path.contains("/Recovered/PointerShapes/") ||
            path.contains("/Recovered/ClassPointees/") ||
            path.contains("/Recovered/HiddenThis/") ||
            pointer.getDataType().getName().startsWith("Anon");
    }

    private List<PointerAudit> pointerAudit(List<Proposal> proposals) {
        Map<Address, Proposal> proposed = new HashMap<>();
        for (Proposal row : proposals) proposed.put(row.address, row);
        List<PointerAudit> result = new ArrayList<>();
        DataIterator iterator = currentProgram.getListing().getDefinedData(true);
        while (iterator.hasNext()) {
            Data data = iterator.next();
            Symbol symbol = currentProgram.getSymbolTable().getPrimarySymbol(data.getAddress());
            if (symbol == null || !symbol.getName().startsWith("PTR_") ||
                    !(data.getDataType() instanceof Pointer pointer) ||
                    data.getLength() != currentProgram.getDefaultPointerSize()) continue;
            long raw;
            try {
                raw = currentProgram.getDefaultPointerSize() == 4 ?
                    Integer.toUnsignedLong(currentProgram.getMemory().getInt(data.getAddress())) :
                    currentProgram.getMemory().getLong(data.getAddress());
            }
            catch (Exception exception) { raw = -1; }
            Address target = raw < 0 ? null : currentProgram.getAddressFactory()
                .getDefaultAddressSpace().getAddress(raw);
            Data targetData = target == null ? null :
                currentProgram.getListing().getDefinedDataContaining(target);
            Function targetFunction = target == null ? null :
                currentProgram.getFunctionManager().getFunctionContaining(target);
            Symbol targetSymbol = target == null ? null :
                currentProgram.getSymbolTable().getPrimarySymbol(target);
            String classification;
            if (raw == 0) classification = "zero_initialized_global";
            else if (symbol.getName().matches("(?i)PTR_(?:case|LAB)_.*"))
                classification = "control_flow_table_entry";
            else if (target != null && (targetFunction != null ||
                    currentProgram.getListing().getInstructionContaining(target) != null))
                classification = "code_pointer";
            else if (targetData != null && targetData.hasStringValue())
                classification = "string_pointer";
            else classification = "initialized_data_pointer";
            DataType pointed = pointer.getDataType();
            String pointee = pointed == null ? "" : pointed.getPathName();
            boolean anonymous = pointed instanceof Structure &&
                anonymousPointer(data.getDataType());
            Proposal proposal = proposed.get(data.getAddress());
            Evidence ev = evidence.get(data.getAddress());
            String targetName = targetFunction != null ? targetFunction.getName(true) :
                targetSymbol == null ? "" : targetSymbol.getName(true);
            String targetType = targetData == null ? "" :
                typeSpecification(targetData.getDataType());
            result.add(new PointerAudit(data.getAddress(), symbol.getName(),
                typeSpecification(data.getDataType()), raw < 0 ? "unreadable" :
                    String.format("%08X", raw), classification, targetName, targetType,
                pointee, anonymous, isOwned(data.getAddress()), ev == null ? 0 : ev.sites.size(),
                proposal == null ? "" : proposal.proposedType,
                proposal != null && proposal.typeApply));
        }
        result.sort(Comparator.comparing(row -> row.address));
        return result;
    }
    private boolean isLibrary(Function function) {
        for (FunctionTag tag : function.getTags()) {
            String name = tag.getName().toUpperCase(Locale.ROOT);
            if (name.equals("LIBRARY") || name.startsWith("LIBRARY_")) return true;
        }
        return false;
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
            out.write("type_apply\tname_apply\taddress\texpected_name\t" +
                "expected_name_source\texpected_data_type\texpected_data_length\t" +
                "proposed_name\tproposed_type\tconfidence\tevidence_sites\treason\n");
            for (Proposal p : rows) out.write(bit(p.typeApply) + "\t" + bit(p.nameApply) +
                "\t" + addr(p.address) + "\t" + tsv(p.expectedName) + "\t" +
                p.expectedNameSource + "\t" + tsv(p.expectedType) + "\t" +
                p.expectedLength + "\t" + tsv(p.proposedName) + "\t" +
                tsv(p.proposedType) + "\t" + p.confidence + "\t" +
                tsv(String.join(" | ", p.sites)) + "\t" + tsv(p.reason) + "\n");
        }
    }
    private void writeJson(Path path, List<Proposal> rows) throws Exception {
        List<String> lines = new ArrayList<>();
        for (Proposal p : rows) lines.add("{\"type_apply\":" + p.typeApply +
            ",\"name_apply\":" + p.nameApply + ",\"address\":" + q(addr(p.address)) +
            ",\"proposed_name\":" + q(p.proposedName) + ",\"proposed_type\":" +
            q(p.proposedType) + ",\"confidence\":" + q(p.confidence) +
            ",\"reason\":" + q(p.reason) + "}");
        Files.write(path, lines, StandardCharsets.UTF_8);
    }
    private void writePointerAudit(Path path, List<PointerAudit> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("address\tname\tcurrent_type\traw_target\tclassification\t" +
                "target_name\ttarget_data_type\tpointee\t" +
                "anonymous_pointee\tscript_owned\tevidence_sites\tproposed_type\t" +
                "type_apply\n");
            for (PointerAudit row : rows) out.write(addr(row.address) + "\t" +
                tsv(row.name) + "\t" + tsv(row.currentType) + "\t" + row.rawTarget +
                "\t" + row.classification + "\t" + tsv(row.targetName) + "\t" +
                tsv(row.targetDataType) + "\t" + tsv(row.pointee) + "\t" +
                bit(row.anonymousPointee) + "\t" + bit(row.scriptOwned) + "\t" +
                row.evidenceSites + "\t" + tsv(row.proposedType) + "\t" +
                bit(row.typeApply) + "\n");
        }
    }
    private void writePointerSummary(Path path, List<PointerAudit> rows) throws Exception {
        Map<String, Long> classes = new TreeMap<>();
        for (PointerAudit row : rows)
            classes.merge(row.classification, 1L, Long::sum);
        List<String> lines = new ArrayList<>();
        lines.add("program=" + currentProgram.getName());
        lines.add("ptr_symbols=" + rows.size());
        for (Map.Entry<String, Long> entry : classes.entrySet())
            lines.add(entry.getKey() + "=" + entry.getValue());
        lines.add("zero_global_anonymous_pointees=" + rows.stream().filter(row ->
            row.classification.equals("zero_initialized_global") && row.anonymousPointee).count());
        lines.add("named_upgrade_auto_apply=" + rows.stream().filter(row -> row.typeApply).count());
        lines.add("note=Control-flow, code and string table entries retain PTR_* labels; they are not class instances.");
        Files.write(path, lines, StandardCharsets.UTF_8);
    }
    private void writeSummary(Path path, List<Proposal> rows, int functions, int calls)
            throws Exception {
        Files.write(path, List.of("program=" + currentProgram.getName(),
            "functions_scanned=" + functions, "direct_calls_seen=" + calls,
            "globals_with_evidence=" + evidence.size(), "proposals=" + rows.size(),
            "type_auto_apply=" + rows.stream().filter(r -> r.typeApply).count(),
            "name_auto_apply=" + rows.stream().filter(r -> r.nameApply).count(),
            "conflicts=" + rows.stream().filter(r -> r.confidence.equals("conflict")).count(),
            "note=Automatic types require repeated non-address-of evidence and replace only undefined/script-owned data.",
            "note_names=Automatic names are structural and retain the address suffix.",
            "note_manual=USER_DEFINED symbols and concrete manual data are preserved."),
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
    private static class GlobalValue {
        final Address address; final boolean addressOf;
        GlobalValue(Address address, boolean addressOf) {
            this.address = address; this.addressOf = addressOf;
        }
    }
    private static class Evidence {
        final Map<String, Integer> types = new TreeMap<>(), names = new TreeMap<>();
        final Set<String> sites = new TreeSet<>();
        int strongCount, addressEvidence, typedStores;
    }
    private record TypedValue(String type, String producer) {}
    private static class Proposal {
        final Address address; final String expectedName, expectedNameSource, expectedType,
            proposedName, proposedType, confidence, reason; final int expectedLength;
        final boolean typeApply, nameApply; final Set<String> sites;
        Proposal(Address address, Symbol symbol, Data data, String proposedType,
                String proposedName, boolean typeApply, boolean nameApply, String confidence,
                String reason, Set<String> sites) {
            this.address = address; expectedName = symbol.getName();
            expectedNameSource = symbol.getSource().toString();
            expectedType = data.getDataType() instanceof Pointer pointer &&
                pointer.getDataType() != null ? "pointer:" + pointer.getDataType().getPathName() :
                data.getDataType().getPathName();
            expectedLength = data.getLength(); this.proposedType = proposedType;
            this.proposedName = proposedName; this.typeApply = typeApply;
            this.nameApply = nameApply; this.confidence = confidence; this.reason = reason;
            this.sites = new TreeSet<>(sites);
        }
    }
    private record PointerAudit(Address address, String name, String currentType,
        String rawTarget, String classification, String targetName, String targetDataType,
        String pointee, boolean anonymousPointee, boolean scriptOwned, int evidenceSites,
        String proposedType, boolean typeApply) {}
}
