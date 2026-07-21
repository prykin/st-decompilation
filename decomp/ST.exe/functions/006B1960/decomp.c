
undefined4 FUN_006b1960(int param_1)

{
  undefined4 uVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar1 = *(undefined4 *)(param_1 + 0x1d0);
  *(undefined4 *)(param_1 + 0x1d0) = 1;
  return uVar1;
}

