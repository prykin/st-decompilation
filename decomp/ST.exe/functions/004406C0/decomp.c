
/* [STUtilityFunctionApplier] indexed_record_byte_lookup: maps a guarded byte-sized index to the
   first byte of a fixed-stride record; the explicit 0xff guard clears AL and returns zero
   Evidence: body pattern verified */

int LookupRecordByte(char recordIndex)

{
  if (recordIndex == 0xff) {
    return 0; /* cmp eax,0xff; xor al,al */
  }
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  return CONCAT31(recordIndex >> 7,g_packedRecords_A62x8[recordIndex].field0_0x0);
}

