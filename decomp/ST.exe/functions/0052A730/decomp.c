
undefined4 __cdecl FUN_0052a730(int param_1)

{
  undefined4 uVar1;

  uVar1 = 7;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(short *)(param_1 + 0x14) == 0) {
    uVar1 = 9;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  else if (*(short *)(param_1 + 0x14) == 2) {
    return 8;
  }
  return uVar1;
}

