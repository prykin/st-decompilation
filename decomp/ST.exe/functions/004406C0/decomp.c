
/* [STUtilityFunctionApplier] indexed_record_byte_lookup: maps a guarded byte-sized index to the
   first byte of a fixed-stride record; return width is owned by the CFG-complete ABI consistency
   pass
   Evidence: body pattern verified */

byte LookupRecordByte(char recordIndex)

{
  if (recordIndex == 0xff) {
    return 0;
  }
  return g_packedRecords_A62x8[recordIndex].field0_0x0;
}

