
undefined4 __thiscall
FUN_00660700(void *this,short param_1,short param_2,short param_3,int param_4,int param_5,
            int param_6)

{
  int *this_00;
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  STGroupBoatC *pSVar4;
  short sVar5;
  undefined2 extraout_var;
  int iVar6;
  undefined4 local_14;
  undefined4 local_10;
  short local_c;
  short sStack_a;
  short local_8;
  short sStack_6;
  
  local_14 = 0;
  *(undefined4 *)((int)this + 0xa7) = 0;
  sVar1 = (short)param_4;
  sVar5 = (short)param_5;
  local_10 = CONCAT22(sVar5,sVar1);
  local_c = (short)param_6;
  sStack_a = param_1;
  sStack_a = param_1;
  local_8 = param_2;
  local_8 = param_2;
  sStack_6 = param_3;
  if (((param_4 < 0) || (param_5 < 0)) || (param_6 < 0)) {
    local_14 = 2;
    iVar2 = param_4;
    iVar6 = param_6;
  }
  else {
    if (sVar1 < 0) {
      return 0xffffffff;
    }
    if (SHORT_007fb240 <= sVar1) {
      return 0xffffffff;
    }
    if (sVar5 < 0) {
      return 0xffffffff;
    }
    if (SHORT_007fb242 <= sVar5) {
      return 0xffffffff;
    }
    if (local_c < 0) {
      return 0xffffffff;
    }
    if (SHORT_007fb244 <= local_c) {
      return 0xffffffff;
    }
    this_00 = *(int **)(DAT_007fb248 +
                       ((int)SHORT_007fb246 * (int)local_c + (int)SHORT_007fb240 * (int)sVar5 +
                       (int)sVar1) * 8);
    if (this_00 == (int *)0x0) {
      return 0xffffffff;
    }
    iVar2 = (**(code **)(*this_00 + 0x2c))();
    if (iVar2 == 0x37) {
      local_14 = 0;
      this_00[0x10c] = (int)sStack_a;
      this_00[0x10d] = (int)local_8;
      this_00[0x10e] = (int)sStack_6;
      this_00[0x10b] = 1;
      iVar2 = (int)sStack_6;
      iVar6 = (int)sStack_a;
    }
    else {
      iVar2 = (**(code **)(*this_00 + 0x2c))();
      if (iVar2 != 0x6c) {
        return 0xffffffff;
      }
      local_14 = 1;
      uVar3 = thunk_FUN_004e9960(this_00,(undefined4 *)&param_1,(undefined4 *)&param_2,
                                 (undefined4 *)&param_3);
      sStack_a = param_1;
      local_8 = param_2;
      sStack_6 = param_3;
      iVar2 = CONCAT22((short)((uint)uVar3 >> 0x10),param_3);
      iVar6 = CONCAT22(extraout_var,param_2);
    }
  }
  if (((*(short *)((int)this + 0x7d) != -2) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) &&
     (pSVar4 = thunk_FUN_0042b760(CONCAT31((int3)((uint)iVar6 >> 8),
                                           *(undefined1 *)((int)this + 0x24)),
                                  CONCAT22((short)((uint)iVar2 >> 0x10),*(short *)((int)this + 0x7d)
                                          )), pSVar4 != (STGroupBoatC *)0x0)) {
    (*pSVar4->vtable->vfunc_08)(0x10,&local_14);
    return 0;
  }
  return 0xffffffff;
}

