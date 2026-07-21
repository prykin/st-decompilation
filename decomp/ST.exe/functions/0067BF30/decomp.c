
int __fastcall FUN_0067bf30(int param_1)

{
  uint uVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar1 = *(int *)(param_1 + 0xa4) * 0x41c64e6d + 0x3039;
  *(uint *)(param_1 + 0xa4) = uVar1;
  return (uVar1 >> 0x10 & 1) + 1;
}

