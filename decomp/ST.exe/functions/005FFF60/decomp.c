
undefined4 __thiscall FUN_005fff60(void *this,int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short local_1c;
  short sStack_1a;
  short sStack_18;
  undefined2 uStack_16;
  short local_14;
  short local_12;
  short local_10 [4];
  int local_8;

  iVar3 = *(int *)((int)this + 0x226);
  local_8 = iVar3;
  iVar2 = thunk_FUN_005ff3a0(this,&local_1c,&sStack_1a,&sStack_18);
  iVar4 = param_2;
  if (iVar2 == 0) {
    thunk_FUN_005fd940(this,param_1);
    return 0;
  }
  while( true ) {
    if (iVar3 == 0) {
      return 0;
    }
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    iVar3 = thunk_FUN_005ff430(this,param_1,param_2,CONCAT22(sStack_1a,local_1c),
                               CONCAT22(sStack_18,sStack_1a),CONCAT22(uStack_16,sStack_18),&local_14
                               ,&local_12,local_10);
    if (((iVar3 != 0) &&
        (iVar3 = thunk_FUN_005fe360((short *)(*(int *)((int)this + 0x233) + param_1 * 0x52),
                                    (int)local_1c,(int)sStack_1a,sStack_18,(int)local_14,local_12,
                                    local_10[0]), -1 < iVar3)) &&
       (iVar3 = thunk_FUN_005fe5d0(this,param_1,&local_1c,(int)&local_14), iVar3 != 0)) break;
    if ((param_2 != 30000) && (iVar4 = iVar4 + 1, *(int *)((int)this + 0x226) < iVar4)) {
      iVar4 = 0;
    }
    local_8 = local_8 + -1;
    iVar3 = local_8;
  }
  if (param_2 == 30000) {
    return 1;
  }
  iVar3 = *(int *)(*(int *)((int)this + 0x23f) + iVar4 * 4);
  *(uint *)(*(int *)((int)this + 0x23b) + 0xc + iVar3 * 0x18) =
       *(uint *)(*(int *)((int)this + 0x23b) + 0xc + iVar3 * 0x18) >> 1;
  puVar1 = (uint *)(*(int *)((int)this + 0x23b) + 0x10 +
                   *(int *)(*(int *)((int)this + 0x23f) + iVar4 * 4) * 0x18);
  *puVar1 = *puVar1 >> 1;
  return 1;
}

