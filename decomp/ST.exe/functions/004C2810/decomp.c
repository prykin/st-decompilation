
undefined4 __fastcall FUN_004c2810(int param_1)

{
  undefined4 uVar1;

  uVar1 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0x265) != 0) {
    uVar1 = 100;
  }
  return uVar1;
}

