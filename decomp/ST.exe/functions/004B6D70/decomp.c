
undefined4 __fastcall FUN_004b6d70(int param_1,undefined4 param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0x24) != *(int *)(param_1 + 0x23d)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    bVar2 = LookupRecordByte((char)*(int *)(param_1 + 0x23d));
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar1 = *(int *)(param_1 + 0x235);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    bVar3 = LookupRecordByte(*(char *)(param_1 + 0x24));
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    param_2 = extraout_EDX;
    if ((&DAT_007e1984)[(uint)bVar3 + (iVar1 * 3 + (uint)bVar2) * 3] == '\0') {
      return 0;
    }
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  thunk_FUN_004b70d0(STReplaceLowByte((uint32_t)(param_2), (uint8_t)(*(undefined1 *)(param_1 + 0x24))),0x28);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(uint *)(param_1 + 0x24) == (uint)*(byte *)(*(int *)(param_1 + 0x10) + 0x112d)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    thunk_FUN_004d8b70((char)*(uint *)(param_1 + 0x24));
  }
  return 0;
}

