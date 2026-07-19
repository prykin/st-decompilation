// Apply conservatively recovered Submarine Titans data types and selected signatures.
// Names marked unknown_* are deliberately left unresolved; comments record hypotheses.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Apply Recovered Types

import java.util.ArrayList;
import java.util.List;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.CategoryPath;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeConflictHandler;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.EnumDataType;
import ghidra.program.model.data.FunctionDefinitionDataType;
import ghidra.program.model.data.ParameterDefinition;
import ghidra.program.model.data.ParameterDefinitionImpl;
import ghidra.program.model.data.PointerDataType;
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.StructureDataType;
import ghidra.program.model.data.VoidDataType;
import ghidra.program.model.data.DWordDataType;
import ghidra.program.model.data.IntegerDataType;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Function.FunctionUpdateType;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.listing.ParameterImpl;
import ghidra.program.model.listing.ReturnParameterImpl;
import ghidra.program.model.listing.Variable;
import ghidra.program.model.symbol.SourceType;

public class STRecoveredTypesApplier extends GhidraScript {
    private static final CategoryPath ROOT = new CategoryPath("/SubmarineTitans/Recovered");

    private DataTypeManager dtm;
    private DataType voidPtr;
    private DataType int32;
    private DataType uint32;
    private Structure stMessage;
    private Structure dArray;
    private Structure system;
    private Structure systemVtable;

    @Override
    protected void run() throws Exception {
        if (currentProgram == null) {
            printerr("Open the ST program first.");
            return;
        }
        dtm = currentProgram.getDataTypeManager();
        voidPtr = new PointerDataType(VoidDataType.dataType, dtm);
        int32 = IntegerDataType.dataType;
        uint32 = DWordDataType.dataType;

        int tx = currentProgram.startTransaction("Apply recovered ST data types");
        boolean commit = false;
        try {
            createMessageTypes();
            createDArrayType();
            createSystemTypes();
            resolveAll();
            applyKnownSignatures();
            commit = true;
        }
        finally {
            currentProgram.endTransaction(tx, commit);
        }
        println("Recovered ST types and selected signatures applied.");
        println("Category: " + ROOT.getPath());
    }

    private void createMessageTypes() {
        EnumDataType ids = new EnumDataType(ROOT, "STMessageId", 4);
        ids.add("MESS_ID_ALLCREATE", 0x111);
        ids.add("MESS_HITKILL", 0x128);
        DataType messageId = dtm.resolve(ids, DataTypeConflictHandler.REPLACE_HANDLER);

        stMessage = new StructureDataType(ROOT, "STMessage", 0, dtm);
        add(stMessage, uint32, "unknown_00", "Unresolved message header field.");
        add(stMessage, uint32, "unknown_04", "Unresolved message header field.");
        add(stMessage, uint32, "unknown_08", "Unresolved message header field.");
        add(stMessage, uint32, "unknown_0c", "Unresolved message header field.");
        add(stMessage, messageId, "id", "Confirmed: dispatched as message identifier.");
        add(stMessage, voidPtr, "data", "Payload type depends on id.");
    }

    private void createDArrayType() {
        dArray = new StructureDataType(ROOT, "DArrayTy", 0, dtm);
        add(dArray, uint32, "flags", "Bit 0x8 owns descriptor; bit 0x100 enables grow callback.");
        add(dArray, uint32, "iteratorIndex", "Cursor used by DArrayGetNext.");
        add(dArray, uint32, "elementSize", "Element size in bytes.");
        add(dArray, uint32, "count", "Number of populated elements.");
        add(dArray, uint32, "capacity", "Allocated element capacity.");
        add(dArray, uint32, "growCapacity", "Elements added when storage grows.");
        add(dArray, voidPtr, "growCallback",
            "Callback pointer when flags&0x100; observed call arguments: data, oldCapacity, addedCapacity.");
        add(dArray, voidPtr, "data", "Contiguous element storage.");
    }

    private void createSystemTypes() throws Exception {
        system = new StructureDataType(ROOT, "SystemClassTy", 0, dtm);
        systemVtable = new StructureDataType(ROOT, "SystemClassTyVTable", 0, dtm);

        DataType systemPtr = new PointerDataType(system, dtm);
        DataType messagePtr = new PointerDataType(stMessage, dtm);
        DataType dArrayPtr = new PointerDataType(dArray, dtm);

        ParameterDefinition thisArg = arg("this", systemPtr);
        FunctionDefinitionDataType init = method("SystemClassTy_InitSystem", int32, thisArg);
        FunctionDefinitionDataType done = method("SystemClassTy_DoneSystem", VoidDataType.dataType,
            arg("this", systemPtr));
        FunctionDefinitionDataType createFull = method("SystemClassTy_CreateObjectFull", int32,
            arg("this", systemPtr), arg("objectType", int32), arg("outObject", voidPtr), arg("outRecord", voidPtr),
            arg("createArgument", int32), arg("objectId", int32));
        FunctionDefinitionDataType create = method("SystemClassTy_CreateObject", VoidDataType.dataType,
            arg("this", systemPtr), arg("objectType", int32), arg("outObject", voidPtr), arg("outRecord", voidPtr),
            arg("objectId", int32));
        FunctionDefinitionDataType createSimple = method("SystemClassTy_CreateObjectSimple",
            VoidDataType.dataType, arg("this", systemPtr), arg("objectType", int32), arg("objectId", int32));
        FunctionDefinitionDataType createSystems = method("SystemClassTy_CreateSystemObjects", int32,
            arg("this", systemPtr));
        FunctionDefinitionDataType send = method("SystemClassTy_SendMessage", int32,
            arg("this", systemPtr), arg("message", messagePtr));
        FunctionDefinitionDataType life = method("SystemClassTy_Life", int32,
            arg("this", systemPtr));
        FunctionDefinitionDataType get = method("SystemClassTy_GetMessage", int32,
            arg("this", systemPtr), arg("message", messagePtr));

        add(systemVtable, ptr(init), "InitSystem", "0079E188 + 0x00");
        add(systemVtable, ptr(done), "DoneSystem", "0079E188 + 0x04");
        add(systemVtable, ptr(createFull), "CreateObjectFull", "0079E188 + 0x08");
        add(systemVtable, ptr(create), "CreateObject", "0079E188 + 0x0c; overload wrapper.");
        add(systemVtable, ptr(createSimple), "CreateObjectSimple", "0079E188 + 0x10; overload wrapper.");
        add(systemVtable, ptr(createSystems), "CreateSystemObjects", "0079E188 + 0x14; pure virtual in base.");
        add(systemVtable, ptr(send), "SendMessage", "0079E188 + 0x18");
        add(systemVtable, ptr(life), "Life", "0079E188 + 0x1c");
        add(systemVtable, ptr(get), "GetMessage", "0079E188 + 0x20");

        add(system, new PointerDataType(systemVtable, dtm), "vtable", "Confirmed vtable at 0079E188.");
        add(system, dArrayPtr, "messages", "Confirmed DArray allocated by InitSystem.");
        add(system, dArrayPtr, "nextMessages", "Confirmed DArray allocated by InitSystem.");
        add(system, voidPtr, "unknown_0c", "Used as synchronization/iteration state; exact type unresolved.");
        add(system, dArrayPtr, "objects", "Confirmed object DArray.");
        add(system, int32, "systemId", "Confirmed system identifier.");
        add(system, voidPtr, "unknown_18", "Constructor argument; exact semantic type unresolved.");
        add(system, systemPtr, "parentSystem", "Assigned by AppClassTy::AddChildSystem.");
    }

    private void resolveAll() {
        stMessage = (Structure)dtm.resolve(stMessage, DataTypeConflictHandler.REPLACE_HANDLER);
        dArray = (Structure)dtm.resolve(dArray, DataTypeConflictHandler.REPLACE_HANDLER);
        systemVtable = (Structure)dtm.resolve(systemVtable, DataTypeConflictHandler.REPLACE_HANDLER);
        system = (Structure)dtm.resolve(system, DataTypeConflictHandler.REPLACE_HANDLER);
    }

    private void applyKnownSignatures() throws Exception {
        DataType messagePtr = new PointerDataType(systemType("STMessage"), dtm);
        DataType systemPtr = new PointerDataType(systemType("SystemClassTy"), dtm);
        applyThiscall("0044EE30", int32,
            parameter("message", messagePtr));
        applyThiscall("006E4960", int32,
            parameter("parentSystem", systemPtr), parameter("childSystem", systemPtr),
            parameter("checkDuplicateId", int32));
    }

    private void applyThiscall(String addressText, DataType returnType, Parameter... parameters)
            throws Exception {
        Address address = currentProgram.getAddressFactory().getAddress(addressText);
        Function function = currentProgram.getFunctionManager().getFunctionAt(address);
        if (function == null) {
            printerr("No function at " + addressText);
            return;
        }
        List<Variable> args = new ArrayList<>();
        for (Parameter parameter : parameters) args.add(parameter);
        function.updateFunction("__thiscall", new ReturnParameterImpl(returnType, currentProgram), args,
            FunctionUpdateType.DYNAMIC_STORAGE_ALL_PARAMS, true, SourceType.USER_DEFINED);
    }

    private DataType systemType(String name) {
        DataType type = dtm.getDataType(ROOT, name);
        if (type == null) throw new IllegalStateException("Missing recovered type " + name);
        return type;
    }

    private Parameter parameter(String name, DataType type) throws Exception {
        return new ParameterImpl(name, type, currentProgram);
    }

    private FunctionDefinitionDataType method(String name, DataType returnType,
            ParameterDefinition... arguments) throws Exception {
        FunctionDefinitionDataType definition = new FunctionDefinitionDataType(ROOT, name, dtm);
        definition.setCallingConvention("__thiscall");
        definition.setReturnType(returnType);
        definition.setArguments(arguments);
        return definition;
    }

    private ParameterDefinition arg(String name, DataType type) {
        return new ParameterDefinitionImpl(name, type, null);
    }

    private DataType ptr(DataType type) {
        return new PointerDataType(type, dtm);
    }

    private void add(Structure structure, DataType type, String name, String comment) {
        structure.add(type, type.getLength(), name, comment);
    }
}
