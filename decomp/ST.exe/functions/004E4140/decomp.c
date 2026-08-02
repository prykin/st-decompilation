
undefined4 FUN_004e4140(int param_1)

{
  if (*(int *)&g_packedRecords_A62x8[param_1].field_0x9da != 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    return *(undefined4 *)(*(int *)&g_packedRecords_A62x8[param_1].field_0x9da + 0xc);
  }
  return 0;
}

