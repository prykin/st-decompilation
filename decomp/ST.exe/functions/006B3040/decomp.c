
undefined4 FUN_006b3040(int param_1,uint param_2)

{
  undefined4 uVar1;

  uVar1 = 0xffffffff;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (param_2 < *(uint *)(param_1 + 0x1a0)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar1 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1b0) + param_2 * 4) + 0x44);
  }
  return uVar1;
}

