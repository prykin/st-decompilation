
undefined4 * FUN_006c7070(int *param_1,undefined4 *param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined1 *puVar9;
  int *piVar10;
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
    iVar6 = *(int *)((int)piVar2 + 0x2a);
    if (iVar6 == 0) {
      cVar1 = (char)piVar2[4];
      iVar6 = *(int *)((int)piVar2 + 0x12);
    }
    iVar5 = 1 << (cVar1 + 1U & 0x1f);
    iVar7 = 0;
    if (0 < iVar5) {
      puVar9 = (undefined1 *)(iVar6 + 2);
      do {
        *(undefined1 *)((int)param_1 + iVar7 * 4 + 0x2a) = puVar9[-2];
        *(undefined1 *)((int)param_1 + iVar7 * 4 + 0x29) = puVar9[-1];
        *(undefined1 *)(param_1 + iVar7 + 10) = *puVar9;
        iVar7 = iVar7 + 1;
        puVar9 = puVar9 + 3;
      } while (iVar7 < iVar5);
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
  iVar6 = piVar2[2];
  piVar8 = &DAT_007edfc8;
  piVar10 = local_3c;
  for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar10 = *piVar8;
    piVar8 = piVar8 + 1;
    piVar10 = piVar10 + 1;
  }
  local_28 = iVar6 + 3U & 0xfffffffc;
  *(code **)((int)piVar2 + 0x46) = FUN_006c7240;
  *(int **)((int)piVar2 + 0x2e) = local_3c;
  *(int *)((int)piVar2 + 0x3e) = param_3;
  *(int **)((int)piVar2 + 0x3a) = param_1;
  local_3c[1] = iVar6;
  if ((*(byte *)((int)piVar2 + 0x56) & 4) != 0) {
    if (local_c < iVar6 + *piVar2) {
      iVar6 = local_c - *piVar2;
    }
    local_c = iVar6;
    iVar6 = piVar2[3];
    if (local_8 < iVar6 + piVar2[1]) {
      iVar6 = local_8 - piVar2[1];
    }
    FUN_006b4170((int)param_1,param_3,local_10,local_14,local_c,iVar6,
                 *(undefined1 *)((int)piVar2 + 0x11));
  }
  uVar4 = FUN_006c6f10((int)piVar2,FUN_006c72f0,FUN_006c7430);
  if (uVar4 == 0xffffffff) {
    uVar4 = 0;
  }
  *piVar2 = local_10;
  piVar2[1] = local_14;
  if (uVar4 == 0) {
    return param_1;
  }
  if (param_2 == (undefined4 *)0x0) {
    FUN_006ab060(&param_1);
  }
  FUN_006a5e40(uVar4,DAT_007ed77c,0x7edff0,0xbe);
  return (undefined4 *)0x0;
}

