
undefined4 __fastcall FUN_00660010(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  int iVar4;
  uint *groupContent;
  undefined2 extraout_var;
  uint uVar5;
  STGroupBoatC *pSVar6;
  undefined4 local_14;
  uint *local_10;
  undefined2 local_c;
  undefined4 local_8;
  
  local_8 = 0;
  sVar1 = *(short *)(param_1 + 0x39);
  *(undefined4 *)(param_1 + 0xa7) = 0;
  if (0 < sVar1) {
    if (sVar1 < 3) {
      iVar4 = 0x33;
      goto LAB_00660050;
    }
    if (sVar1 == 3) {
      iVar4 = 0x62;
      goto LAB_00660050;
    }
  }
  iVar4 = 0;
LAB_00660050:
  groupContent = thunk_FUN_0065fa60(iVar4,(sVar1 != 3) - 1 & 2,(short *)0x0);
  if (groupContent == (uint *)0x0) {
    return 0xfffffffe;
  }
  uVar3 = AiFltClassTy::sub_0065D9C0((AiFltClassTy *)param_1);
  if (CONCAT22(extraout_var,uVar3) == 0) {
    FUN_006ae110((byte *)groupContent);
    return 0xffffffff;
  }
  uVar5 = CONCAT22(extraout_var,*(short *)(param_1 + 0x7d));
  if ((*(short *)(param_1 + 0x7d) != -2) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
    pSVar6 = thunk_FUN_0042b760(CONCAT31((int3)(uVar5 >> 8),*(undefined1 *)(param_1 + 0x24)),uVar5);
    if (pSVar6 != (STGroupBoatC *)0x0) {
      if (*(short *)(param_1 + 0x39) == 3) {
        local_14 = 1;
        local_10 = (uint *)0x0;
        local_c = 0;
        (*pSVar6->vtable->vfunc_08)(0x11,&local_14);
        uVar2 = local_8;
        FUN_006ae110((byte *)groupContent);
        return uVar2;
      }
      local_14 = 0;
      local_10 = groupContent;
      (*pSVar6->vtable->vfunc_08)(4,&local_14);
      uVar2 = local_8;
      FUN_006ae110((byte *)groupContent);
      return uVar2;
    }
  }
  FUN_006ae110((byte *)groupContent);
  return 0xfffffffd;
}

