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
import ghidra.program.model.data.ByteDataType;
import ghidra.program.model.data.CharDataType;
import ghidra.program.model.data.Array;
import ghidra.program.model.data.ArrayDataType;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeComponent;
import ghidra.program.model.data.DataTypeConflictHandler;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.DataUtilities;
import ghidra.program.model.data.EnumDataType;
import ghidra.program.model.data.Enum;
import ghidra.program.model.data.FunctionDefinitionDataType;
import ghidra.program.model.data.ParameterDefinition;
import ghidra.program.model.data.ParameterDefinitionImpl;
import ghidra.program.model.data.PointerDataType;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.ShortDataType;
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.StructureDataType;
import ghidra.program.model.data.Undefined;
import ghidra.program.model.data.Union;
import ghidra.program.model.data.UnionDataType;
import ghidra.program.model.data.VoidDataType;
import ghidra.program.model.data.DWordDataType;
import ghidra.program.model.data.IntegerDataType;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Function.FunctionUpdateType;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.listing.ParameterImpl;
import ghidra.program.model.listing.ReturnParameterImpl;
import ghidra.program.model.listing.StackFrame;
import ghidra.program.model.listing.Variable;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.Symbol;

public class STRecoveredTypesApplier extends GhidraScript {
    private static final CategoryPath ROOT = new CategoryPath("/SubmarineTitans/Recovered");
    private static final CategoryPath GLOBAL_RECORDS =
        new CategoryPath("/SubmarineTitans/Recovered/GlobalRecords");
    private static final CategoryPath ENUMS =
        new CategoryPath("/SubmarineTitans/Recovered/Enums");
    private static final String SCRIPT_MARKER = "[STRecoveredTypesApplier]";

    private DataTypeManager dtm;
    private DataType voidPtr;
    private DataType int32;
    private DataType uint32;
    private Structure stMessage;
    private Structure controlCommandPayload;
    private Union controlCommandPayloadUnion;
    private Structure controlCommand;
    private Structure commandPosition32Payload;
    private Structure commandPosition16Payload;
    private Structure packedValueBytes;
    private Structure packedValueWords;
    private Union packedValue32;
    private Structure position16;
    private Structure position32;
    private Structure groupBoatOrderData1;
    private Structure groupBoatOrderData2;
    private Structure groupBoatOrderData4;
    private Structure groupBoatOrderData5;
    private Structure groupBoatOrderData6;
    private Structure groupBoatOrderData9;
    private Structure groupBoatOrderData10;
    private Structure groupBoatOrderData11;
    private Structure groupBoatOrderDataD;
    private Structure groupBoatOrderDataE;
    private Structure groupBoatOrderDataF;
    private Enum groupBoatOrderType;
    private Structure dArray;
    private Structure worldObject;
    private Structure worldObjectVtable;
    private Structure worldCell;
    private Structure worldGrid;
    private Structure playerTempSlot;
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
            createPositionTypes();
            createPackedValueTypes();
            createControlCommandTypes();
            createDArrayType();
            createGroupBoatOrderTypes();
            createWorldCellType();
            createPlayerTempSlotType();
            createSystemTypes();
            resolveAll();
            migrateControlCommandPayloadView();
            ensureControlCommandPayloadMembers();
            migrateControlCommandPayload();
            applyKnownGlobalTypes();
            applyKnownSignatures();
            applyKnownStackAggregates();
            commit = true;
        }
        finally {
            currentProgram.endTransaction(tx, commit);
        }
        println("Recovered ST types and selected signatures applied.");
        println("Category: " + ROOT.getPath());
    }

    private void createPositionTypes() {
        DataType existing16 = dtm.getDataType(ROOT, "STPosition16");
        if (existing16 instanceof Structure) position16 = (Structure)existing16;
        else {
            position16 = new StructureDataType(ROOT, "STPosition16", 0, dtm);
            position16.setDescription(
                "Three signed 16-bit world/grid coordinates; recovered from group-order payloads.");
            add(position16, ShortDataType.dataType, "x", "First coordinate.");
            add(position16, ShortDataType.dataType, "y", "Second coordinate.");
            add(position16, ShortDataType.dataType, "z", "Third coordinate.");
        }

        DataType existing32 = dtm.getDataType(ROOT, "STPosition32");
        if (existing32 instanceof Structure) position32 = (Structure)existing32;
        else {
            position32 = new StructureDataType(ROOT, "STPosition32", 0, dtm);
            position32.setDescription(
                "Three signed 32-bit values carrying a position through control-command type 0x14; " +
                "consumers use their low 16 bits as coordinates.");
            add(position32, int32, "x", "First coordinate; low 16 bits consumed.");
            add(position32, int32, "y", "Second coordinate; low 16 bits consumed.");
            add(position32, int32, "z", "Third coordinate; low 16 bits consumed.");
        }

        DataType existingOrder = dtm.getDataType(ROOT, "STGroupBoatOrderData1");
        if (existingOrder instanceof Structure) groupBoatOrderData1 = (Structure)existingOrder;
        else {
            groupBoatOrderData1 = new StructureDataType(ROOT, "STGroupBoatOrderData1", 0, dtm);
            groupBoatOrderData1.setDescription(
                "Ten-byte payload copied by STGroupBoatC vfunc_08 discriminator 1. " +
                "The leading position is confirmed; the final two shorts remain unresolved.");
            add(groupBoatOrderData1, position16, "position", "Target or group-center position.");
            add(groupBoatOrderData1, ShortDataType.dataType, "unknown_06",
                "Discriminator-1 payload field; meaning unresolved.");
            add(groupBoatOrderData1, ShortDataType.dataType, "unknown_08",
                "Discriminator-1 payload field; meaning unresolved.");
        }
    }

    private void createPackedValueTypes() {
        DataType existingBytes = dtm.getDataType(ROOT, "STPackedValue32Bytes");
        if (existingBytes instanceof Structure) packedValueBytes = (Structure)existingBytes;
        else {
            packedValueBytes = new StructureDataType(ROOT, "STPackedValue32Bytes", 0, dtm);
            packedValueBytes.setDescription(
                "Byte-addressable view of a four-byte packed command value.");
            add(packedValueBytes, ByteDataType.dataType, "byte0", "Byte at +0.");
            add(packedValueBytes, ByteDataType.dataType, "byte1", "Byte at +1.");
            add(packedValueBytes, ByteDataType.dataType, "byte2", "Byte at +2.");
            add(packedValueBytes, ByteDataType.dataType, "byte3", "Byte at +3.");
        }

        DataType existingWords = dtm.getDataType(ROOT, "STPackedValue32Words");
        if (existingWords instanceof Structure) packedValueWords = (Structure)existingWords;
        else {
            packedValueWords = new StructureDataType(ROOT, "STPackedValue32Words", 0, dtm);
            packedValueWords.setDescription(
                "Word-addressable view of a four-byte packed command value.");
            add(packedValueWords, ShortDataType.dataType, "low", "Signed/unsigned low word.");
            add(packedValueWords, ShortDataType.dataType, "high", "Signed/unsigned high word.");
        }

        DataType existingValue = dtm.getDataType(ROOT, "STPackedValue32");
        if (existingValue instanceof Union) packedValue32 = (Union)existingValue;
        else {
            packedValue32 = new UnionDataType(ROOT, "STPackedValue32", dtm);
            packedValue32.setDescription(
                "Four packed bytes interpreted as a whole dword, two words, or four bytes. " +
                "The active interpretation depends on the surrounding command discriminator.");
            packedValue32.add(uint32, uint32.getLength(), "whole", "Whole 32-bit view.");
            packedValue32.add(packedValueWords, packedValueWords.getLength(), "words",
                "Two 16-bit views.");
            packedValue32.add(packedValueBytes, packedValueBytes.getLength(), "bytes",
                "Four byte views.");
        }
    }

    private void createMessageTypes() {
        DataType existingIds = dtm.getDataType(ROOT, "STMessageId");
        Enum ids;
        if (existingIds instanceof Enum) {
            ids = (Enum)existingIds;
        }
        else {
            ids = (Enum)dtm.resolve(new EnumDataType(ROOT, "STMessageId", 4),
                DataTypeConflictHandler.KEEP_HANDLER);
        }
        ensureEnumValue(ids, "MESS_ID_ALLCREATE", 0x111);
        ensureEnumValue(ids, "MESS_HITKILL", 0x128);
        DataType messageId = ids;

        DataType existingMessage = dtm.getDataType(ROOT, "STMessage");
        if (existingMessage instanceof Structure) {
            stMessage = (Structure)existingMessage;
            return;
        }
        stMessage = new StructureDataType(ROOT, "STMessage", 0, dtm);
        add(stMessage, uint32, "unknown_00", "Unresolved message header field.");
        add(stMessage, uint32, "unknown_04", "Unresolved message header field.");
        add(stMessage, uint32, "unknown_08", "Unresolved message header field.");
        add(stMessage, uint32, "unknown_0c", "Unresolved message header field.");
        add(stMessage, messageId, "id", "Confirmed: dispatched as message identifier.");
        add(stMessage, voidPtr, "data", "Payload type depends on id.");
    }

    private void createDArrayType() {
        DataType existing = dtm.getDataType(ROOT, "DArrayTy");
        if (existing instanceof Structure) {
            dArray = (Structure)existing;
            return;
        }
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

    private void createControlCommandTypes() {
        DataType existingPosition32Payload = dtm.getDataType(
            ROOT, "STControlCommandPosition32Payload");
        if (existingPosition32Payload instanceof Structure)
            commandPosition32Payload = (Structure)existingPosition32Payload;
        else {
            commandPosition32Payload = new StructureDataType(
                ROOT, "STControlCommandPosition32Payload", 0, dtm);
            commandPosition32Payload.setDescription(
                "Control-command variant byte followed by three unaligned 32-bit coordinates.");
            add(commandPosition32Payload, ByteDataType.dataType, "variant",
                "Payload sub-discriminator.");
            add(commandPosition32Payload, int32, "x", "Coordinate at payload +0x01.");
            add(commandPosition32Payload, int32, "y", "Coordinate at payload +0x05.");
            add(commandPosition32Payload, int32, "z", "Coordinate at payload +0x09.");
        }

        DataType existingPosition16Payload = dtm.getDataType(
            ROOT, "STControlCommandPosition16Payload");
        if (existingPosition16Payload instanceof Structure)
            commandPosition16Payload = (Structure)existingPosition16Payload;
        else {
            commandPosition16Payload = new StructureDataType(
                ROOT, "STControlCommandPosition16Payload", 0, dtm);
            commandPosition16Payload.setDescription(
                "Control-command variant byte followed by three short coordinates at " +
                "dword strides (+0x01, +0x05, +0x09).");
            add(commandPosition16Payload, ByteDataType.dataType, "variant",
                "Payload sub-discriminator.");
            add(commandPosition16Payload, ShortDataType.dataType, "x",
                "Low word of coordinate slot 0.");
            commandPosition16Payload.growStructure(2);
            add(commandPosition16Payload, ShortDataType.dataType, "y",
                "Low word of coordinate slot 1.");
            commandPosition16Payload.growStructure(2);
            add(commandPosition16Payload, ShortDataType.dataType, "z",
                "Low word of coordinate slot 2.");
            commandPosition16Payload.growStructure(2);
        }

        DataType existingPayload = dtm.getDataType(ROOT, "STControlCommandPayloadView");
        if (existingPayload instanceof Structure) {
            controlCommandPayload = (Structure)existingPayload;
        }
        else {
            controlCommandPayload = new StructureDataType(
                ROOT, "STControlCommandPayloadView", 0, dtm);
            controlCommandPayload.setDescription(
                "Conservative common view of the discriminated payload used by " +
                "STPlaySystemC::SetCtrlCmd and STAllPlayersC::CmdToPlsObj. " +
                "Fields deliberately keep neutral names because their meanings depend on commandType.");
            add(controlCommandPayload, ByteDataType.dataType, "variant",
                "Payload discriminator used by several command families.");
            add(controlCommandPayload, packedValue32, "value_01",
                "Variant-dependent value at +0x01; narrower short/byte views also occur.");
            add(controlCommandPayload, packedValue32, "value_05",
                "Variant-dependent value at +0x05; narrower short/byte views also occur.");
            add(controlCommandPayload, packedValue32, "value_09",
                "Variant-dependent value at +0x09; narrower short/byte views also occur.");
            add(controlCommandPayload, packedValue32, "value_0d",
                "Variant-dependent 32-bit value at +0x0d.");
            add(controlCommandPayload, ByteDataType.dataType, "value_11",
                "Variant-dependent byte at +0x11.");
            // Keep the observed +0x1d access representable without claiming that all
            // payload variants have the same intervening layout.
            controlCommandPayload.growStructure(0x1d - controlCommandPayload.getLength());
            add(controlCommandPayload, int32, "value_1d",
                "Variant-dependent 32-bit value at +0x1d.");
        }

        DataType existingUnion = dtm.getDataType(ROOT, "STControlCommandPayload");
        if (existingUnion instanceof Union) controlCommandPayloadUnion = (Union)existingUnion;
        else {
            controlCommandPayloadUnion = new UnionDataType(
                ROOT, "STControlCommandPayload", dtm);
            controlCommandPayloadUnion.setDescription(
                "Discriminated payload selected by STControlCommand.commandType. " +
                "The packed view covers byte-oriented variants; position32 is the confirmed " +
                "three-dword layout used by command type 0x14.");
            controlCommandPayloadUnion.add(controlCommandPayload,
                controlCommandPayload.getLength(), "packed",
                "Byte-packed common view for command-dependent variants.");
            controlCommandPayloadUnion.add(commandPosition32Payload,
                commandPosition32Payload.getLength(), "position32",
                "Variant byte plus three adjacent signed 32-bit position values.");
            controlCommandPayloadUnion.add(commandPosition16Payload,
                commandPosition16Payload.getLength(), "position16",
                "Variant byte plus three short coordinates stored at dword strides.");
        }

        DataType existingCommand = dtm.getDataType(ROOT, "STControlCommand");
        if (existingCommand instanceof Structure) {
            controlCommand = (Structure)existingCommand;
            return;
        }
        controlCommand = new StructureDataType(ROOT, "STControlCommand", 0, dtm);
        controlCommand.setDescription(
            "Packed 0x1b-byte control-command header produced by " +
            "STPlaySystemC::SetCtrlCmd and consumed by STAllPlayersC::CmdToPlsObj; " +
            "variable-length payload bytes follow the header.");
        add(controlCommand, uint32, "unknown_00",
            "Header field not initialized by SetCtrlCmd; exact meaning unresolved.");
        add(controlCommand, uint32, "senderId",
            "Copied from STPlaySystemC state at +0xe4.");
        add(controlCommand, ByteDataType.dataType, "playerId",
            "Player whose object/group receives the command.");
        add(controlCommand, ByteDataType.dataType, "sourcePlayerId",
            "Copied from the active-player state; exact network semantics unresolved.");
        add(controlCommand, ShortDataType.dataType, "objectId",
            "Low 16 bits of SetCtrlCmd object selector.");
        add(controlCommand, ShortDataType.dataType, "targetKind",
            "High 16 bits of SetCtrlCmd object selector; CmdToPlsObj dispatches 0, 1, and 2.");
        add(controlCommand, ByteDataType.dataType, "commandType",
            "CMDTY_* discriminator used by CmdToPlsObj.");
        add(controlCommand, uint32, "primaryPayloadSize",
            "Bytes copied from the primary payload.");
        add(controlCommand, uint32, "secondaryPayloadSize",
            "Bytes appended from the secondary payload.");
        add(controlCommand, new PointerDataType(controlCommandPayloadUnion, dtm), "payload",
            "Points to the inline bytes immediately after this 0x1b-byte header.");
    }

    private void createPlayerTempSlotType() {
        DataType existing = dtm.getDataType(GLOBAL_RECORDS, "STPlayerTempSlot");
        if (existing instanceof Structure) {
            playerTempSlot = (Structure)existing;
            return;
        }
        playerTempSlot = new StructureDataType(GLOBAL_RECORDS, "STPlayerTempSlot", 0, dtm);
        playerTempSlot.setDescription(
            "Packed 16-byte STAllPlayersC temporary-object slot; recovered from " +
            "AddObjToTmp/AddObjToTmp2/DelObjFromTmps/SaveTmp/RestoreTmp.");
        add(playerTempSlot, int32, "objectType",
            "Object type selector; zero denotes an unused slot.");
        add(playerTempSlot, int32, "playerId",
            "Owning player identifier; some consumers use only the low byte.");
        add(playerTempSlot, ShortDataType.dataType, "objectId",
            "Primary object identifier used by single-object temporary slots.");
        add(playerTempSlot, new PointerDataType(dArray, dtm), "objectIds",
            "Unaligned pointer to a DArray of 16-bit object identifiers.");
        add(playerTempSlot, ShortDataType.dataType, "activityCount",
            "Incremented/decremented by AddObjToTmp/DelObjFromTmps.");
    }

    private void createGroupBoatOrderTypes() {
        DataType existingOrderType = dtm.getDataType(ENUMS, "STGroupBoatOrderType");
        if (existingOrderType instanceof Enum) {
            groupBoatOrderType = (Enum)existingOrderType;
            String description = groupBoatOrderType.getDescription();
            if (description == null || !description.contains(SCRIPT_MARKER)) {
                println("Preserving manually defined STGroupBoatOrderType.");
            }
            else {
                ensureGroupBoatOrderValues();
            }
        }
        else if (existingOrderType == null) {
            groupBoatOrderType = (Enum)dtm.resolve(
                new EnumDataType(ENUMS, "STGroupBoatOrderType", 4, dtm),
                DataTypeConflictHandler.KEEP_HANDLER);
            groupBoatOrderType.setDescription(SCRIPT_MARKER +
                " Discriminator accepted by STGroupBoatC::SetOrderData. Numeric names are " +
                "intentional: the binary proves the domain but not every order's meaning.");
            ensureGroupBoatOrderValues();
        }
        else {
            println("Preserving non-enum data type named STGroupBoatOrderType.");
        }

        DataType existing = dtm.getDataType(ROOT, "STGroupBoatOrderData6");
        if (existing instanceof Structure) groupBoatOrderData6 = (Structure)existing;
        else {
            groupBoatOrderData6 = new StructureDataType(ROOT, "STGroupBoatOrderData6", 0, dtm);
            groupBoatOrderData6.setDescription(
                "Eight-byte payload consumed by STGroupBoatC vfunc_08 discriminator 6; " +
                "the receiver deep-copies the position array.");
            add(groupBoatOrderData6, new PointerDataType(dArray, dtm), "positions",
                "DArray of six-byte STPosition16 elements.");
            add(groupBoatOrderData6, int32, "mode",
                "Observed values 0 and 1; exact semantic name unresolved.");
        }

        DataType existing4 = dtm.getDataType(ROOT, "STGroupBoatOrderData4");
        if (existing4 instanceof Structure) groupBoatOrderData4 = (Structure)existing4;
        else {
            groupBoatOrderData4 = new StructureDataType(ROOT, "STGroupBoatOrderData4", 0, dtm);
            groupBoatOrderData4.setDescription(
                "Eight-byte payload copied by vfunc_08 discriminator 4.");
            add(groupBoatOrderData4, int32, "mode", "Observed leading selector/value.");
            add(groupBoatOrderData4, new PointerDataType(dArray, dtm), "objectIds",
                "DArray pointer prepared by CmdToPlsObj.");
        }

        DataType existing2 = dtm.getDataType(ROOT, "STGroupBoatOrderData2");
        if (existing2 instanceof Structure) groupBoatOrderData2 = (Structure)existing2;
        else {
            groupBoatOrderData2 = new StructureDataType(ROOT, "STGroupBoatOrderData2", 0, dtm);
            groupBoatOrderData2.setDescription(
                "Twenty-four-byte payload copied by vfunc_08 discriminator 2. Only the " +
                "leading selector, flag, and DArray pointer are initialized at known callers.");
            add(groupBoatOrderData2, int32, "mode", "Leading selector; observed value 0.");
            add(groupBoatOrderData2, uint32, "flag", "Boolean/variant-derived flag.");
            add(groupBoatOrderData2, new PointerDataType(dArray, dtm), "items",
                "DArray of four-byte elements.");
            add(groupBoatOrderData2, new ArrayDataType(ByteDataType.dataType, 12, 1),
                "unknown_0c", "Copied tail not initialized by the currently known callers.");
        }

        DataType existing5 = dtm.getDataType(ROOT, "STGroupBoatOrderData5");
        if (existing5 instanceof Structure) groupBoatOrderData5 = (Structure)existing5;
        else {
            groupBoatOrderData5 = new StructureDataType(ROOT, "STGroupBoatOrderData5", 0, dtm);
            groupBoatOrderData5.setDescription(
                "Twenty-byte payload copied by vfunc_08 discriminator 5. Only the leading " +
                "selector and DArray pointer are initialized at known callers.");
            add(groupBoatOrderData5, int32, "mode", "Leading selector; observed value 0.");
            add(groupBoatOrderData5, new PointerDataType(dArray, dtm), "items",
                "DArray of two-byte elements.");
            add(groupBoatOrderData5, new ArrayDataType(ByteDataType.dataType, 12, 1),
                "unknown_08", "Copied tail not initialized by the currently known callers.");
        }

        DataType existing9 = dtm.getDataType(ROOT, "STGroupBoatOrderData9");
        if (existing9 instanceof Structure) groupBoatOrderData9 = (Structure)existing9;
        else {
            groupBoatOrderData9 = new StructureDataType(ROOT, "STGroupBoatOrderData9", 0, dtm);
            groupBoatOrderData9.setDescription(
                "Thirty-one-byte packed payload copied by vfunc_08 discriminator 9.");
            add(groupBoatOrderData9, position16, "position", "Three-short position.");
            add(groupBoatOrderData9, int32, "value_06", "Unaligned 32-bit payload value.");
            add(groupBoatOrderData9, uint32, "playerId", "Player id widened to 32 bits.");
            add(groupBoatOrderData9, ByteDataType.dataType, "value_0e",
                "Observed zero-valued byte.");
            add(groupBoatOrderData9, new ArrayDataType(ByteDataType.dataType, 14, 1),
                "unknown_0f", "Unresolved packed middle region.");
            add(groupBoatOrderData9, ShortDataType.dataType, "value_1d",
                "Observed 0xffff sentinel.");
        }

        DataType existing10 = dtm.getDataType(ROOT, "STGroupBoatOrderData10");
        if (existing10 instanceof Structure) groupBoatOrderData10 = (Structure)existing10;
        else {
            groupBoatOrderData10 = new StructureDataType(ROOT, "STGroupBoatOrderData10", 0, dtm);
            groupBoatOrderData10.setDescription(
                "Sixteen-byte payload copied by vfunc_08 discriminator 0x10.");
            add(groupBoatOrderData10, int32, "mode",
                "Leading value selected by control-command variant.");
            add(groupBoatOrderData10, position16, "sourcePosition",
                "First three-short position.");
            add(groupBoatOrderData10, position16, "targetPosition",
                "Second three-short position.");
        }

        DataType existing11 = dtm.getDataType(ROOT, "STGroupBoatOrderData11");
        if (existing11 instanceof Structure) groupBoatOrderData11 = (Structure)existing11;
        else {
            groupBoatOrderData11 = new StructureDataType(ROOT, "STGroupBoatOrderData11", 0, dtm);
            groupBoatOrderData11.setDescription(
                "Ten-byte payload copied by vfunc_08 discriminator 0x11.");
            add(groupBoatOrderData11, int32, "mode",
                "Leading boolean/selector value; exact meaning unresolved.");
            add(groupBoatOrderData11, position16, "position", "Three-short position.");
        }

        DataType existingD = dtm.getDataType(ROOT, "STGroupBoatOrderDataD");
        if (existingD instanceof Structure) groupBoatOrderDataD = (Structure)existingD;
        else {
            groupBoatOrderDataD = new StructureDataType(ROOT, "STGroupBoatOrderDataD", 0, dtm);
            groupBoatOrderDataD.setDescription(
                "Ten-byte payload copied by vfunc_08 discriminator 0x0d.");
            add(groupBoatOrderDataD, position16, "position", "Three-short position.");
            add(groupBoatOrderDataD, int32, "value_06",
                "Trailing 32-bit value; semantic meaning unresolved.");
        }

        DataType existingE = dtm.getDataType(ROOT, "STGroupBoatOrderDataE");
        if (existingE instanceof Structure) groupBoatOrderDataE = (Structure)existingE;
        else {
            groupBoatOrderDataE = new StructureDataType(ROOT, "STGroupBoatOrderDataE", 0, dtm);
            groupBoatOrderDataE.setDescription(
                "Six-byte payload copied by vfunc_08 discriminator 0x0e; three input bytes " +
                "are widened into unsigned 16-bit fields.");
            add(groupBoatOrderDataE, ShortDataType.dataType, "value_00", "Widened byte 0.");
            add(groupBoatOrderDataE, ShortDataType.dataType, "value_02", "Widened byte 1.");
            add(groupBoatOrderDataE, ShortDataType.dataType, "value_04", "Widened byte 2.");
        }

        DataType existingF = dtm.getDataType(ROOT, "STGroupBoatOrderDataF");
        if (existingF instanceof Structure) groupBoatOrderDataF = (Structure)existingF;
        else {
            groupBoatOrderDataF = new StructureDataType(ROOT, "STGroupBoatOrderDataF", 0, dtm);
            groupBoatOrderDataF.setDescription(
                "Seven-byte packed payload copied by vfunc_08 discriminator 0x0f.");
            add(groupBoatOrderDataF, ByteDataType.dataType, "value_00",
                "Leading byte; semantic meaning unresolved.");
            add(groupBoatOrderDataF, ShortDataType.dataType, "value_01",
                "Unaligned 16-bit value.");
            add(groupBoatOrderDataF, uint32, "value_03", "Unaligned 32-bit value.");
        }
    }

    private void ensureGroupBoatOrderValues() {
        if (groupBoatOrderType == null) return;
        for (int value = 1; value <= 0x15; value++)
            ensureEnumValue(groupBoatOrderType,
                String.format("GROUP_BOAT_ORDER_%02X", value), value);
        for (int value = 0x65; value <= 0x6a; value++)
            ensureEnumValue(groupBoatOrderType,
                String.format("GROUP_BOAT_ORDER_%02X", value), value);
    }

    private void createWorldCellType() throws Exception {
        DataType existing = dtm.getDataType(GLOBAL_RECORDS, "STWorldCell");
        if (existing instanceof Structure) {
            worldCell = (Structure)existing;
            return;
        }

        DataType existingObject = dtm.getDataType(GLOBAL_RECORDS, "STWorldObject");
        DataType existingVtable = dtm.getDataType(GLOBAL_RECORDS, "STWorldObjectVTable");
        if (existingObject instanceof Structure && existingVtable instanceof Structure) {
            worldObject = (Structure)existingObject;
            worldObjectVtable = (Structure)existingVtable;
        }
        else {
            worldObject = new StructureDataType(GLOBAL_RECORDS, "STWorldObject", 0, dtm);
            worldObjectVtable = new StructureDataType(
                GLOBAL_RECORDS, "STWorldObjectVTable", 0, dtm);
            DataType objectPtr = new PointerDataType(worldObject, dtm);
            FunctionDefinitionDataType getType = method(
                "STWorldObject_GetObjectTypeId", int32, arg("this", objectPtr));
            add(worldObjectVtable, new ArrayDataType(voidPtr, 11, voidPtr.getLength()),
                "slots_00_28", "Virtual slots not yet named by shared world-grid evidence.");
            add(worldObjectVtable, new PointerDataType(getType, dtm), "GetObjectTypeId",
                "Slot +0x2c. Implementations are receiver-only leaf getters and callers compare " +
                "the result with object-type constants.");
            add(worldObject, new PointerDataType(worldObjectVtable, dtm), "vtable",
                "Polymorphic world-object interface.");
            worldObject.growStructure(0x20 - worldObject.getLength());
            add(worldObject, int32, "value_20",
                "Frequently compared with 1000; exact semantic name remains unresolved.");
        }

        worldCell = new StructureDataType(GLOBAL_RECORDS, "STWorldCell", 0, dtm);
        worldCell.setDescription(
            "Eight-byte world-grid cell allocated as two object-pointer slots per voxel. " +
            "Indexing evidence uses (voxelIndex * 2 + layer) * 4 with layer 0 or 1.");
        DataType objectPtr = new PointerDataType(worldObject, dtm);
        add(worldCell, new ArrayDataType(objectPtr, 2, objectPtr.getLength()), "objects",
            "Two polymorphic game/world-object pointers for the cell.");

        DataType existingGrid = dtm.getDataType(GLOBAL_RECORDS, "STWorldGrid");
        if (existingGrid instanceof Structure) worldGrid = (Structure)existingGrid;
        else {
            worldGrid = new StructureDataType(GLOBAL_RECORDS, "STWorldGrid", 0, dtm);
            worldGrid.setDescription(
                "World-grid globals at 007FB240. Linear cell index is " +
                "z * planeStride + y * sizeX + x; planeStride is sizeX * sizeY.");
            add(worldGrid, ShortDataType.dataType, "sizeX", "Exclusive X-coordinate bound.");
            add(worldGrid, ShortDataType.dataType, "sizeY", "Exclusive Y-coordinate bound.");
            add(worldGrid, ShortDataType.dataType, "sizeZ", "Exclusive Z-coordinate bound.");
            add(worldGrid, ShortDataType.dataType, "planeStride",
                "Number of cells in one Z plane; observed as sizeX * sizeY.");
            add(worldGrid, new PointerDataType(worldCell, dtm), "cells",
                "Linear array indexed as z * planeStride + y * sizeX + x.");
        }
    }

    private void createSystemTypes() throws Exception {
        DataType existingSystem = dtm.getDataType(ROOT, "SystemClassTy");
        DataType existingVtable = dtm.getDataType(ROOT, "SystemClassTyVTable");
        if (existingSystem instanceof Structure && existingVtable instanceof Structure) {
            system = (Structure)existingSystem;
            systemVtable = (Structure)existingVtable;
            return;
        }
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
        stMessage = (Structure)dtm.resolve(stMessage, DataTypeConflictHandler.KEEP_HANDLER);
        packedValueBytes = (Structure)dtm.resolve(packedValueBytes,
            DataTypeConflictHandler.KEEP_HANDLER);
        packedValueWords = (Structure)dtm.resolve(packedValueWords,
            DataTypeConflictHandler.KEEP_HANDLER);
        packedValue32 = (Union)dtm.resolve(packedValue32,
            DataTypeConflictHandler.KEEP_HANDLER);
        position16 = (Structure)dtm.resolve(position16, DataTypeConflictHandler.KEEP_HANDLER);
        position32 = (Structure)dtm.resolve(position32, DataTypeConflictHandler.KEEP_HANDLER);
        commandPosition32Payload = (Structure)dtm.resolve(commandPosition32Payload,
            DataTypeConflictHandler.KEEP_HANDLER);
        commandPosition16Payload = (Structure)dtm.resolve(commandPosition16Payload,
            DataTypeConflictHandler.KEEP_HANDLER);
        dArray = (Structure)dtm.resolve(dArray, DataTypeConflictHandler.KEEP_HANDLER);
        groupBoatOrderData1 = (Structure)dtm.resolve(groupBoatOrderData1,
            DataTypeConflictHandler.KEEP_HANDLER);
        groupBoatOrderData2 = (Structure)dtm.resolve(groupBoatOrderData2,
            DataTypeConflictHandler.KEEP_HANDLER);
        groupBoatOrderData4 = (Structure)dtm.resolve(groupBoatOrderData4,
            DataTypeConflictHandler.KEEP_HANDLER);
        groupBoatOrderData5 = (Structure)dtm.resolve(groupBoatOrderData5,
            DataTypeConflictHandler.KEEP_HANDLER);
        groupBoatOrderData6 = (Structure)dtm.resolve(groupBoatOrderData6,
            DataTypeConflictHandler.KEEP_HANDLER);
        groupBoatOrderData9 = (Structure)dtm.resolve(groupBoatOrderData9,
            DataTypeConflictHandler.KEEP_HANDLER);
        groupBoatOrderData10 = (Structure)dtm.resolve(groupBoatOrderData10,
            DataTypeConflictHandler.KEEP_HANDLER);
        groupBoatOrderData11 = (Structure)dtm.resolve(groupBoatOrderData11,
            DataTypeConflictHandler.KEEP_HANDLER);
        groupBoatOrderDataD = (Structure)dtm.resolve(groupBoatOrderDataD,
            DataTypeConflictHandler.KEEP_HANDLER);
        groupBoatOrderDataE = (Structure)dtm.resolve(groupBoatOrderDataE,
            DataTypeConflictHandler.KEEP_HANDLER);
        groupBoatOrderDataF = (Structure)dtm.resolve(groupBoatOrderDataF,
            DataTypeConflictHandler.KEEP_HANDLER);
        controlCommandPayload = (Structure)dtm.resolve(controlCommandPayload,
            DataTypeConflictHandler.KEEP_HANDLER);
        controlCommandPayloadUnion = (Union)dtm.resolve(controlCommandPayloadUnion,
            DataTypeConflictHandler.KEEP_HANDLER);
        controlCommand = (Structure)dtm.resolve(controlCommand,
            DataTypeConflictHandler.KEEP_HANDLER);
        playerTempSlot = (Structure)dtm.resolve(playerTempSlot,
            DataTypeConflictHandler.KEEP_HANDLER);
        if (worldObjectVtable != null)
            worldObjectVtable = (Structure)dtm.resolve(worldObjectVtable,
                DataTypeConflictHandler.KEEP_HANDLER);
        if (worldObject != null)
            worldObject = (Structure)dtm.resolve(worldObject,
                DataTypeConflictHandler.KEEP_HANDLER);
        if (worldCell != null)
            worldCell = (Structure)dtm.resolve(worldCell,
                DataTypeConflictHandler.KEEP_HANDLER);
        if (worldGrid != null)
            worldGrid = (Structure)dtm.resolve(worldGrid,
                DataTypeConflictHandler.KEEP_HANDLER);
        systemVtable = (Structure)dtm.resolve(systemVtable, DataTypeConflictHandler.KEEP_HANDLER);
        system = (Structure)dtm.resolve(system, DataTypeConflictHandler.KEEP_HANDLER);
    }

    private void migrateControlCommandPayloadView() {
        int[] offsets = { 0x01, 0x05, 0x09, 0x0d };
        String[] names = { "value_01", "value_05", "value_09", "value_0d" };
        boolean changed = false;
        for (int index = 0; index < offsets.length; index++) {
            DataTypeComponent field = controlCommandPayload.getComponentAt(offsets[index]);
            if (field == null || !names[index].equals(field.getFieldName())) {
                println("Preserving STControlCommandPayloadView: field +" +
                    Integer.toHexString(offsets[index]) + " was manually changed.");
                return;
            }
            DataType type = field.getDataType();
            if (type.getPathName().equals(packedValue32.getPathName())) continue;
            if (!type.getPathName().equals(uint32.getPathName()) || type.getLength() != 4) {
                println("Preserving manually refined STControlCommandPayloadView." + names[index] +
                    " type: " + type.getDisplayName());
                return;
            }
        }
        for (int index = 0; index < offsets.length; index++) {
            DataTypeComponent field = controlCommandPayload.getComponentAt(offsets[index]);
            if (field.getDataType().getPathName().equals(packedValue32.getPathName())) continue;
            controlCommandPayload.replaceAtOffset(offsets[index], packedValue32,
                packedValue32.getLength(), names[index],
                "Variant-dependent packed dword/word/byte views. " + SCRIPT_MARKER);
            changed = true;
        }
        if (changed)
            println("Migrated packed control-command values to explicit dword/word/byte unions.");
    }

    private void ensureControlCommandPayloadMembers() {
        ensureUnionMember(controlCommandPayloadUnion, controlCommandPayload, "packed",
            "Byte-packed common view for command-dependent variants.", "");
        ensureUnionMember(controlCommandPayloadUnion, commandPosition32Payload, "position32",
            "Variant byte plus three adjacent signed 32-bit position values.",
            position32.getPathName());
        ensureUnionMember(controlCommandPayloadUnion, commandPosition16Payload, "position16",
            "Variant byte plus three short coordinates stored at dword strides.",
            ROOT.getPath() + "/STPosition16In32");
    }

    private void ensureUnionMember(Union union, DataType type, String name, String comment,
            String legacyTypePath) {
        for (DataTypeComponent component : union.getComponents()) {
            if (!name.equals(component.getFieldName())) continue;
            if (component.getDataType().getPathName().equals(type.getPathName())) return;
            if (!legacyTypePath.isBlank() &&
                    component.getDataType().getPathName().equals(legacyTypePath)) {
                int ordinal = component.getOrdinal();
                union.delete(ordinal);
                union.insert(ordinal, type, type.getLength(), name,
                    comment + " " + SCRIPT_MARKER);
                println("Migrated union member " + union.getName() + "." + name +
                    " to include its leading variant byte.");
                return;
            }
            println("Preserving manually changed union member " + union.getName() + "." + name +
                ": " + component.getDataType().getDisplayName());
            return;
        }
        union.add(type, type.getLength(), name, comment + " " + SCRIPT_MARKER);
    }

    private void applyKnownGlobalTypes() throws Exception {
        if (worldGrid == null) return;
        Address base = currentProgram.getAddressFactory().getAddress("007FB240");
        Data current = currentProgram.getListing().getDefinedDataAt(base);
        if (current == null || !current.getDataType().isEquivalent(worldGrid)) {
            if (!replaceableWorldGridRange(base)) {
                println("Preserving manually refined world-grid globals at 007FB240.");
                return;
            }
            DataUtilities.createData(currentProgram, base, worldGrid, worldGrid.getLength(),
                DataUtilities.ClearDataMode.CLEAR_ALL_CONFLICT_DATA);
            println("Applied STWorldGrid at 007FB240.");
        }

        // The previous script revision created this interior ANALYSIS label.  Remove only
        // that exact script-owned name so references can render as g_worldGrid.cells.
        Address oldCells = base.add(8);
        for (Symbol symbol : currentProgram.getSymbolTable().getSymbols(oldCells)) {
            if ("g_worldCells".equals(symbol.getName()) &&
                    symbol.getSource() == SourceType.ANALYSIS) symbol.delete();
        }
        Symbol symbol = currentProgram.getSymbolTable().getPrimarySymbol(base);
        if (symbol != null && !"g_worldGrid".equals(symbol.getName()) &&
                (symbol.getSource() == SourceType.DEFAULT ||
                    symbol.getSource() == SourceType.ANALYSIS) &&
                symbol.getName().matches("(?:DAT|PTR|UNK|SHORT)_[0-9A-Fa-f]+")) {
            symbol.setName("g_worldGrid", SourceType.ANALYSIS);
            println("Renamed 007FB240 to g_worldGrid.");
        }
    }

    private boolean replaceableWorldGridRange(Address base) {
        for (int offset : new int[] { 0, 2, 4, 6, 8 }) {
            Address address = base.add(offset);
            for (Symbol symbol : currentProgram.getSymbolTable().getSymbols(address)) {
                if (symbol.getSource() == SourceType.USER_DEFINED ||
                        symbol.getSource() == SourceType.IMPORTED) return false;
                if (symbol.getSource() == SourceType.ANALYSIS &&
                        !(offset == 8 && "g_worldCells".equals(symbol.getName())) &&
                        !(offset == 0 && "g_worldGrid".equals(symbol.getName()))) return false;
            }
            Data data = currentProgram.getListing().getDefinedDataAt(address);
            if (data == null || Undefined.isUndefined(data.getDataType())) continue;
            if (offset < 8 && data.getLength() == 2 &&
                    data.getDataType().isEquivalent(ShortDataType.dataType)) continue;
            if (offset == 8 && data.getDataType() instanceof Pointer) {
                DataType pointed = ((Pointer)data.getDataType()).getDataType();
                if (pointed != null && pointed.isEquivalent(worldCell)) continue;
            }
            return false;
        }
        return true;
    }

    private void migrateControlCommandPayload() {
        DataTypeComponent field = controlCommand.getComponentAt(0x17);
        if (field == null || !"payload".equals(field.getFieldName())) {
            println("Preserving STControlCommand: no recognized payload field at +0x17.");
            return;
        }
        DataType current = field.getDataType();
        DataType pointed = current instanceof Pointer ? ((Pointer)current).getDataType() : null;
        if (pointed != null && pointed.getPathName().equals(controlCommandPayloadUnion.getPathName()))
            return;
        if (pointed == null || !pointed.getPathName().equals(controlCommandPayload.getPathName())) {
            println("Preserving manually changed STControlCommand.payload type: " +
                current.getDisplayName());
            return;
        }
        controlCommand.replaceAtOffset(0x17,
            new PointerDataType(controlCommandPayloadUnion, dtm),
            currentProgram.getDefaultPointerSize(), "payload",
            "Points to commandType-discriminated inline bytes after the 0x1b-byte header. " +
            SCRIPT_MARKER);
        println("Migrated STControlCommand.payload from the flat view to the payload union.");
    }

    private void ensureEnumValue(Enum enumType, String name, long value) {
        for (String existingName : enumType.getNames()) {
            if (!existingName.equals(name)) continue;
            if (enumType.getValue(existingName) != value) {
                printerr(name + " already exists with a different value; keeping existing definition.");
            }
            return;
        }
        enumType.add(name, value);
    }

    private void applyKnownSignatures() throws Exception {
        DataType messagePtr = new PointerDataType(systemType("STMessage"), dtm);
        DataType systemPtr = new PointerDataType(systemType("SystemClassTy"), dtm);
        DataType commandPtr = new PointerDataType(systemType("STControlCommand"), dtm);
        DataType dArrayPtr = new PointerDataType(systemType("DArrayTy"), dtm);
        applyThiscall("0044EE30", int32,
            parameter("message", messagePtr));

        // The four AI player subsystems expose GetMessage as their one-slot primary vtable.
        // Each implementation dereferences mess->id and emits the same embedded diagnostic.
        // Older recovery passes sometimes left the pointer as int or an anonymous shape.
        applyThiscall("00648030", int32, parameter("message", messagePtr));
        applyThiscall("00667D90", int32, parameter("message", messagePtr));
        applyThiscall("0067C7E0", int32, parameter("message", messagePtr));
        applyThiscall("00690B90", int32, parameter("message", messagePtr));

        applyThiscall("006E4960", int32,
            parameter("parentSystem", systemPtr), parameter("childSystem", systemPtr),
            parameter("checkDuplicateId", int32));
        applyThiscall("00436F20", VoidDataType.dataType,
            parameter("command", commandPtr));
        applyThiscall("00404EBC", VoidDataType.dataType,
            parameter("command", commandPtr));
        applyThiscall("005501D0", VoidDataType.dataType,
            parameter("command", commandPtr));

        // vfunc_08 is a discriminator-driven copy/normalization routine.  Its
        // second explicit argument changes layout for every switch arm; treating
        // it as DArrayTy * (from calls made in only some arms) corrupts the whole
        // decompilation.  Keep the carrier opaque and type each discriminated
        // payload separately at its callers.
        DataType orderKind = groupBoatOrderType;
        if (orderKind == null) orderKind = int32;
        applyThiscall("00498D20", VoidDataType.dataType,
            parameter("orderType", orderKind), parameter("data", voidPtr));

        // The first parameter is sign-extended in machine code and the function
        // pops six 4-byte argument slots (RET 0x18). Narrow logical types are safe
        // with Ghidra's dynamic __stdcall storage assignment.
        applyStdcall("0044AB90", int32,
            parameter("playerId", CharDataType.dataType),
            parameter("tempGroup", uint32),
            parameter("objectType", int32),
            parameter("ownerPlayerId", CharDataType.dataType),
            parameter("objectIds", dArrayPtr),
            parameter("objectId", ShortDataType.dataType));

        DataType aiPlayer = dtm.getDataType("/AiPlrClassTy");
        if (aiPlayer != null) {
            DataType aiPlayerPtr = new PointerDataType(aiPlayer, dtm);
            applyStdcall("004357B0", int32,
                parameter("playerId", CharDataType.dataType),
                parameter("aiPlayer", aiPlayerPtr));
            applyStdcall("00402DEC", int32,
                parameter("playerId", CharDataType.dataType),
                parameter("aiPlayer", aiPlayerPtr));
            applyStdcall("004357F0", aiPlayerPtr,
                parameter("playerId", CharDataType.dataType));
            applyStdcall("00401DC5", aiPlayerPtr,
                parameter("playerId", CharDataType.dataType));
        }
        else {
            println("AiPlrClassTy is not present yet; preserving its accessor signatures.");
        }
    }

    private void applyKnownStackAggregates() throws Exception {
        // In CmdToPlsObj the compiler allocated adjacent scalar stack slots for
        // source-level aggregates.  Without an aggregate type Ghidra renders the
        // writes as local._0_2_ / local._2_2_.  These two ranges are confirmed by
        // the six-byte DArray element and the ten-byte vfunc_08 case-1 copy.
        applyStackAggregate("00436F20", -0x14, position16,
            "targetPosition", "Six-byte position appended to the order-position DArray.");
        applyStackAggregate("00436F20", -0x4c, groupBoatOrderData1,
            "orderData", "Ten-byte payload consumed by STGroupBoatC vfunc_08 order type 1.");
        applyStackAggregate("00436F20", -0x5c, groupBoatOrderData10,
            "orderData10", "Sixteen-byte payload consumed by vfunc_08 order type 0x10.");
        applyStackAggregate("00436F20", -0x98, groupBoatOrderData11,
            "orderData11", "Ten-byte payload consumed by vfunc_08 order type 0x11.");
        applyStackAggregate("00436F20", -0xa0, position16,
            "orderPosition12", "Six-byte position consumed by vfunc_08 order type 0x12.");
        applyStackAggregate("00436F20", -0xa8, position16,
            "orderPosition13", "Six-byte position consumed by vfunc_08 order type 0x13.");
        applyStackAggregate("00436F20", -0xb0, groupBoatOrderDataE,
            "orderDataE", "Three widened words consumed by vfunc_08 order type 0x0e.");
        applyStackAggregate("00436F20", -0xb8, position16,
            "orderPosition14", "Six-byte position consumed by vfunc_08 order type 0x14.");
        applyStackAggregate("00436F20", -0xc0, position16,
            "orderPositionA", "Six-byte position consumed by vfunc_08 order type 0x0a.");
        applyStackAggregate("00436F20", -0xc8, position16,
            "orderPositionC", "Six-byte position consumed by vfunc_08 order type 0x0c.");
        applyStackAggregate("00436F20", -0xd0, groupBoatOrderData4,
            "orderData4", "Eight-byte payload consumed by vfunc_08 order type 4.");
        applyStackAggregate("00436F20", -0xdc, groupBoatOrderData6,
            "orderData6", "DArray plus mode consumed by STGroupBoatC vfunc_08 order type 6.");
        applyStackAggregate("00436F20", -0xe4, groupBoatOrderDataF,
            "orderDataF", "Seven-byte packed payload consumed by vfunc_08 order type 0x0f.");
        applyStackAggregate("00436F20", -0x124, groupBoatOrderDataD,
            "orderDataD", "Ten-byte payload consumed by vfunc_08 order type 0x0d.");
        applyStackAggregate("00436F20", -0x138, groupBoatOrderData5,
            "orderData5", "Twenty-byte payload consumed by vfunc_08 order type 5.");
        applyStackAggregate("00436F20", -0x150, groupBoatOrderData2,
            "orderData2", "Twenty-four-byte payload consumed by vfunc_08 order type 2.");
        applyStackAggregate("00436F20", -0x174, groupBoatOrderData9,
            "orderData9", "Thirty-one-byte packed payload consumed by vfunc_08 order type 9.");
    }

    private void applyStackAggregate(String addressText, int stackOffset, DataType type,
            String name, String detail) throws Exception {
        Address address = currentProgram.getAddressFactory().getAddress(addressText);
        Function function = currentProgram.getFunctionManager().getFunctionAt(address);
        if (function == null) {
            printerr("No function at " + addressText + " for stack aggregate " + name);
            return;
        }
        int end = stackOffset + type.getLength();
        List<Variable> overlaps = new ArrayList<>();
        for (Variable variable : function.getLocalVariables()) {
            if (!variable.isStackVariable()) continue;
            int variableStart = variable.getStackOffset();
            int variableEnd = variableStart + variable.getLength();
            if (stackOffset >= variableEnd || variableStart >= end) continue;
            if (variableStart == stackOffset &&
                    variable.getDataType().getPathName().equals(type.getPathName())) return;
            String comment = variable.getComment() == null ? "" : variable.getComment();
            boolean generatedName = variable.getName() != null &&
                variable.getName().matches("(?:local|uStack)_[0-9A-Fa-f]+") ||
                comment.contains(SCRIPT_MARKER);
            boolean weakSource = variable.getSource() != SourceType.USER_DEFINED &&
                variable.getSource() != SourceType.IMPORTED;
            boolean compatibleComponent = matchesAggregateComponent(
                type, stackOffset, variable);
            if (!generatedName || !weakSource ||
                    (!isWeakGeneratedType(variable.getDataType()) && !compatibleComponent)) {
                println("Preserving manually refined stack variable overlapping " +
                    addressText + " " + name + ": " + variable.getName() + " " +
                    variable.getDataType().getDisplayName());
                return;
            }
            overlaps.add(variable);
        }
        for (Variable variable : overlaps) function.removeVariable(variable);
        StackFrame frame = function.getStackFrame();
        Variable created = frame.createVariable(name, stackOffset, type, SourceType.ANALYSIS);
        created.setComment(SCRIPT_MARKER + " " + detail);
        println("Applied stack aggregate " + addressText + " Stack[" +
            String.format("%#x", stackOffset) + "] " + name + ": " + type.getName());
    }

    private boolean matchesAggregateComponent(DataType aggregate, int aggregateOffset,
            Variable variable) {
        if (!(aggregate instanceof Structure)) return false;
        int relative = variable.getStackOffset() - aggregateOffset;
        DataTypeComponent component = ((Structure)aggregate).getComponentAt(relative);
        return component != null && component.getOffset() == relative &&
            component.getLength() == variable.getLength() &&
            component.getDataType().isEquivalent(variable.getDataType());
    }

    private boolean isUndefinedLike(DataType type) {
        if (Undefined.isUndefined(type)) return true;
        if (type instanceof Array) return isUndefinedLike(((Array)type).getDataType());
        return false;
    }

    private boolean isWeakGeneratedType(DataType type) {
        if (isUndefinedLike(type)) return true;
        if (type instanceof Pointer) {
            DataType pointed = ((Pointer)type).getDataType();
            return pointed == null || !(pointed instanceof Structure) &&
                !(pointed instanceof Union);
        }
        String path = type.getPathName();
        return path.matches("/(?:u?int|u?short|u?char|byte|word|dword|undefined[1-8]?)");
    }

    private void applyThiscall(String addressText, DataType returnType, Parameter... parameters)
            throws Exception {
        applySignature(addressText, "__thiscall", returnType, parameters);
    }

    private void applyStdcall(String addressText, DataType returnType, Parameter... parameters)
            throws Exception {
        applySignature(addressText, "__stdcall", returnType, parameters);
    }

    private void applySignature(String addressText, String convention, DataType returnType,
            Parameter... parameters) throws Exception {
        Address address = currentProgram.getAddressFactory().getAddress(addressText);
        Function function = currentProgram.getFunctionManager().getFunctionAt(address);
        if (function == null) {
            printerr("No function at " + addressText);
            return;
        }
        if (function.getSignatureSource() == SourceType.USER_DEFINED && hasNamedParameters(function)) {
            println("Preserving manually refined signature at " + addressText + ": " +
                function.getSignature().getPrototypeString(true));
            return;
        }
        List<Variable> args = new ArrayList<>();
        for (Parameter parameter : parameters) args.add(parameter);
        function.updateFunction(convention, new ReturnParameterImpl(returnType, currentProgram), args,
            FunctionUpdateType.DYNAMIC_STORAGE_ALL_PARAMS, true, SourceType.USER_DEFINED);
    }

    private boolean hasNamedParameters(Function function) {
        for (Parameter parameter : function.getParameters()) {
            String name = parameter.getName();
            if ("this".equals(name)) continue;
            if (name == null || !name.matches("param_\\d+")) return true;
        }
        return false;
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
