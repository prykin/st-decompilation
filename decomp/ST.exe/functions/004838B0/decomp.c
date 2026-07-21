
undefined4 __fastcall FUN_004838b0(int param_1)

{
  undefined4 uVar1;

  uVar1 = 1;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((*(int *)(param_1 + 0x455) == 1) || (*(int *)(param_1 + 0x2c0) == 1)) {
    uVar1 = 0;
  }
  return uVar1;
}

