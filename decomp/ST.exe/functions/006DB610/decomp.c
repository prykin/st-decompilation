
undefined4 FUN_006db610(int param_1,int param_2)

{
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  return (int)(CONCAT44(param_1 >> 0x10,param_1 << 0x10) / (longlong)param_2);
}

