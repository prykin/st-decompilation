
undefined4 __fastcall FUN_004cba30(int param_1)

{
  uint uVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar1 = GetPlayerRaceId(*(char *)(param_1 + 0x23d));
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(&DAT_00790d30 + ((uVar1 & 0xff) + *(int *)(param_1 + 0x235) * 3) * 4) != 0) {
    if (DAT_0080732c != 0) {
      thunk_FUN_004ad0e0((void *)(param_1 + 0x1d5),0xc);
      thunk_FUN_004ad0e0((void *)(param_1 + 0x1d5),7);
      return 0;
    }
    thunk_FUN_004ad070((void *)(param_1 + 0x1d5),0xc);
    thunk_FUN_004ad070((void *)(param_1 + 0x1d5),7);
  }
  return 0;
}

