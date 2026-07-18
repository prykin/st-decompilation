
undefined4 __fastcall FUN_004d7040(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int local_8;
  
  iVar1 = thunk_FUN_004e60d0(param_1[9],0x4e);
  if (3 < iVar1) {
    iVar1 = 3;
  }
  iVar2 = (**(code **)(*param_1 + 0x2c))();
  if ((iVar2 < 0x32) || (iVar2 = (**(code **)(*param_1 + 0x2c))(), 0x73 < iVar2)) {
    iVar2 = (**(code **)(*param_1 + 0x2c))();
    if (iVar2 < 1) {
      return 0;
    }
    iVar2 = (**(code **)(*param_1 + 0x2c))();
    if (0x28 < iVar2) {
      return 0;
    }
    iVar2 = (**(code **)(*param_1 + 0x2c))();
    local_8 = *(int *)(&DAT_007e0a90 + (iVar1 + iVar2 * 4) * 4);
    iVar1 = (**(code **)(*param_1 + 0x2c))();
    iVar1 = *(int *)(&DAT_007e06dc + iVar1 * 4);
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0x2c))();
    local_8 = *(int *)(&DAT_007e3518 + (iVar1 + -200 + iVar2 * 4) * 4);
    iVar1 = (**(code **)(*param_1 + 0x2c))();
    iVar1 = *(int *)(&DAT_007e27ec + iVar1 * 4);
  }
  local_8 = local_8 / 0x5dc;
  if ((local_8 != 0) && (iVar1 != 0)) {
    iVar2 = (**(code **)(*param_1 + 0xc4))();
    if ((iVar2 != 0) && (iVar3 = (**(code **)(*param_1 + 0x7c))(), iVar3 < 100)) {
      iVar3 = thunk_FUN_004e60d0(param_1[9],0x66);
      if (iVar3 != 0) {
        iVar1 = iVar1 + (uint)(iVar1 * 10) / 100;
      }
      lVar5 = FUN_006b12cc(100);
      iVar3 = (int)lVar5;
      lVar5 = FUN_006b12cc(iVar2);
      iVar4 = (int)lVar5;
      lVar5 = FUN_006b12cc(iVar1);
      iVar1 = FUN_006b12bc((int)lVar5,iVar4,iVar3);
      lVar5 = FUN_006b12cc(0x5dc);
      iVar1 = FUN_006b12a8((int)lVar5,iVar1);
      iVar1 = FUN_006b1280(iVar1);
      if ((uint)(*(int *)((int)param_1 + 0x119) + iVar1) < *(uint *)(DAT_00802a38 + 0xe4)) {
        iVar1 = *param_1;
        *(uint *)((int)param_1 + 0x119) = *(uint *)(DAT_00802a38 + 0xe4);
        iVar3 = (**(code **)(iVar1 + 0x78))();
        (**(code **)(iVar1 + 0x80))(iVar3 + local_8);
        (**(code **)(*param_1 + 200))(iVar2 + -1);
      }
    }
    return 0;
  }
  return 0;
}

