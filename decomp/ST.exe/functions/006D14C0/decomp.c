
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void FUN_006d14c0(ushort *param_1,int param_2,int param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  uint local_18;
  uint local_14;
  uint local_10;
  int local_c;
  int local_8;

  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_4 == nullptr) {
    local_10 = 0x1f;
    local_18 = 0x7c00;
    local_14 = 0x3e0;
  }
  else {
    local_18 = *param_4;
    local_14 = param_4[1];
    local_10 = param_4[2];
  }
  iVar2 = -1;
  local_8 = -1;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_4 = (uint *)0xffffffff;
  local_c = -1;
  if (local_18 == 0xf800) {
    local_8 = 0;
  }
  else if (local_18 == 0x7c00) {
    local_8 = 1;
  }
  if (local_14 == 0x7e0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_4 = (uint *)0x5;
  }
  else if (local_14 == 0x3e0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_4 = (uint *)0x6;
  }
  if (local_10 == 0x1f) {
    iVar2 = 0xb;
    local_c = 0xb;
  }
  if (local_8 == -1) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_8._0_1_ = 0;
    for (uVar1 = local_18; (uVar1 & 0x8000) == 0; uVar1 = uVar1 << 1) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_8._0_1_ = (byte)local_8 + 1;
    }
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_4 == (uint *)0xffffffff) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    param_4._0_1_ = 0;
    for (uVar1 = local_14; (uVar1 & 0x8000) == 0; uVar1 = uVar1 << 1) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_4._0_1_ = (byte)param_4 + 1;
    }
  }
  if (iVar2 == -1) {
    iVar2 = 0;
    for (uVar1 = local_10; local_c = iVar2, (uVar1 & 0x8000) == 0; uVar1 = uVar1 << 1) {
      iVar2 = iVar2 + 1;
    }
  }
  if (0 < param_3) {
    pbVar3 = (byte *)(param_2 + 2);
    do {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_3 = param_3 + -1;
      *param_1 = (ushort)((int)((uint)pbVar3[-2] << 8) >> ((byte)iVar2 & 0x1f)) & (ushort)local_10 |
                 (ushort)((int)((uint)pbVar3[-1] << 8) >> ((byte)param_4 & 0x1f)) & (ushort)local_14
                 | (ushort)((int)((uint)*pbVar3 << 8) >> ((byte)local_8 & 0x1f)) & (ushort)local_18;
      iVar2 = local_c;
      pbVar3 = pbVar3 + 4;
      param_1 = param_1 + 1;
    } while (param_3 != 0);
  }
  return;
}

