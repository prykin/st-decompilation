
undefined4 __thiscall thunk_FUN_005fff60(void *this,int param_1,int param_2)

{
  uint *puVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined3 extraout_var;
  int iVar5;
  short sStack_1c;
  short sStack_1a;
  short sStack_18;
  undefined2 uStack_16;
  short sStack_14;
  short sStack_12;
  short asStack_10 [4];
  int iStack_8;
  
  iVar4 = *(int *)((int)this + 0x226);
  iStack_8 = iVar4;
  iVar3 = thunk_FUN_005ff3a0(this,&sStack_1c,&sStack_1a,&sStack_18);
  iVar5 = param_2;
  if (iVar3 == 0) {
    thunk_FUN_005fd940(this,param_1);
    return 0;
  }
  while( true ) {
    if (iVar4 == 0) {
      return 0;
    }
    iVar4 = thunk_FUN_005ff430(this,param_1,param_2,CONCAT22(sStack_1a,sStack_1c),
                               CONCAT22(sStack_18,sStack_1a),CONCAT22(uStack_16,sStack_18),
                               &sStack_14,&sStack_12,asStack_10);
    if (((iVar4 != 0) &&
        (iVar4 = thunk_FUN_005fe360((short *)(*(int *)((int)this + 0x233) + param_1 * 0x52),
                                    (int)sStack_1c,(int)sStack_1a,sStack_18,(int)sStack_14,
                                    (int)sStack_12,asStack_10[0]), -1 < iVar4)) &&
       (bVar2 = thunk_FUN_005fe5d0(this,param_1,&sStack_1c,(int)&sStack_14),
       CONCAT31(extraout_var,bVar2) != 0)) break;
    if ((param_2 != 30000) && (iVar5 = iVar5 + 1, *(int *)((int)this + 0x226) < iVar5)) {
      iVar5 = 0;
    }
    iStack_8 = iStack_8 + -1;
    iVar4 = iStack_8;
  }
  if (param_2 == 30000) {
    return 1;
  }
  iVar4 = *(int *)(*(int *)((int)this + 0x23f) + iVar5 * 4);
  *(uint *)(*(int *)((int)this + 0x23b) + 0xc + iVar4 * 0x18) =
       *(uint *)(*(int *)((int)this + 0x23b) + 0xc + iVar4 * 0x18) >> 1;
  puVar1 = (uint *)(*(int *)((int)this + 0x23b) + 0x10 +
                   *(int *)(*(int *)((int)this + 0x23f) + iVar5 * 4) * 0x18);
  *puVar1 = *puVar1 >> 1;
  return 1;
}

