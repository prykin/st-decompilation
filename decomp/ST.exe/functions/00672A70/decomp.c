
void __thiscall FUN_00672a70(void *this,byte param_1)

{
  uint uVar1;

  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  uVar1 = FUN_006c8950(CONCAT22((short)((uint)this >> 0x10),(undefined2)DAT_007d2d24),0x400,param_1)
  ;
  DAT_007d2d24 = uVar1 & 0xffff;
  return;
}

