
undefined4 * FUN_006c7070(int *param_1,undefined4 *param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint exceptionCode;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined1 *puVar8;
  int *piVar9;
  int local_3c [5];
  uint local_28;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  puVar3 = param_2;
  piVar2 = param_1;
  local_10 = *param_1;
  local_14 = param_1[1];
  if (param_2 == (undefined4 *)0x0) {
    local_8 = param_1[3];
    local_c = param_1[2];
    param_1[1] = 0;
    *param_1 = 0;
    param_1 = FUN_006d10f0(local_c,local_8,8,0x100,1);
    if (param_1 == (int *)0x0) {
      return (undefined4 *)0x0;
    }
    param_3 = FUN_006b4fa0((int)param_1);
    cVar1 = *(char *)((int)piVar2 + 0x19);
    iVar5 = *(int *)((int)piVar2 + 0x2a);
    if (iVar5 == 0) {
      cVar1 = (char)piVar2[4];
      iVar5 = *(int *)((int)piVar2 + 0x12);
    }
    iVar4 = 1 << (cVar1 + 1U & 0x1f);
    iVar6 = 0;
    if (0 < iVar4) {
      puVar8 = (undefined1 *)(iVar5 + 2);
      do {
        *(undefined1 *)((int)param_1 + iVar6 * 4 + 0x2a) = puVar8[-2];
        *(undefined1 *)((int)param_1 + iVar6 * 4 + 0x29) = puVar8[-1];
        *(undefined1 *)(param_1 + iVar6 + 10) = *puVar8;
        iVar6 = iVar6 + 1;
        puVar8 = puVar8 + 3;
      } while (iVar6 < iVar4);
    }
  }
  else {
    local_8 = param_2[2];
    local_c = param_2[1];
    if (local_8 < 0) {
      local_8 = -local_8;
    }
    FUN_006c6a90(param_1,local_c,local_8);
    param_1 = puVar3;
  }
  iVar5 = piVar2[2];
  piVar7 = &DAT_007edfc8;
  piVar9 = local_3c;
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar9 = *piVar7;
    piVar7 = piVar7 + 1;
    piVar9 = piVar9 + 1;
  }
  local_28 = iVar5 + 3U & 0xfffffffc;
  *(code **)((int)piVar2 + 0x46) = FUN_006c7240;
  *(int **)((int)piVar2 + 0x2e) = local_3c;
  *(int *)((int)piVar2 + 0x3e) = param_3;
  *(int **)((int)piVar2 + 0x3a) = param_1;
  local_3c[1] = iVar5;
  if ((*(byte *)((int)piVar2 + 0x56) & 4) != 0) {
    if (local_c < iVar5 + *piVar2) {
      iVar5 = local_c - *piVar2;
    }
    local_c = iVar5;
    iVar5 = piVar2[3];
    if (local_8 < iVar5 + piVar2[1]) {
      iVar5 = local_8 - piVar2[1];
    }
    FUN_006b4170((int)param_1,param_3,local_10,local_14,local_c,iVar5,
                 *(undefined1 *)((int)piVar2 + 0x11));
  }
  exceptionCode = FUN_006c6f10((int)piVar2,FUN_006c72f0,FUN_006c7430);
  if (exceptionCode == 0xffffffff) {
    exceptionCode = 0;
  }
  *piVar2 = local_10;
  piVar2[1] = local_14;
  if (exceptionCode == 0) {
    return param_1;
  }
  if (param_2 == (undefined4 *)0x0) {
    FUN_006ab060(&param_1);
  }
  RaiseInternalException(exceptionCode,DAT_007ed77c,s_E__DKW_GPC_C_giftodib_c_007edff0,0xbe);
  return (undefined4 *)0x0;
}

