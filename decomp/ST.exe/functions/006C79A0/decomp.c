
undefined4 * FUN_006c79a0(int *param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  int *piVar7;
  int *piVar8;
  int local_34 [5];
  uint local_20;
  int local_c;
  int local_8;
  
  puVar2 = param_2;
  piVar1 = param_1;
  local_8 = *param_1;
  local_c = param_1[1];
  if (param_2 == (undefined4 *)0x0) {
    uVar4 = *(uint *)((int)param_1 + 0x1a);
    param_1[1] = 0;
    *param_1 = 0;
    param_1 = FUN_006d10f0(param_1[2],param_1[3],8,uVar4,1);
    if (param_1 == (int *)0x0) {
      return (undefined4 *)0x0;
    }
    param_3 = FUN_006b4fa0((int)param_1);
    if (uVar4 == 2) {
      *(undefined1 *)((int)param_1 + 0x2b) = 0;
      *(undefined1 *)(param_1 + 10) = 0;
      *(undefined1 *)((int)param_1 + 0x29) = 0;
      *(undefined1 *)((int)param_1 + 0x2a) = 0;
      *(undefined1 *)(param_1 + 0xb) = 0xff;
      *(undefined1 *)((int)param_1 + 0x2d) = 0xff;
      *(undefined1 *)((int)param_1 + 0x2e) = 0xff;
      *(undefined1 *)((int)param_1 + 0x2f) = 0;
    }
    else {
      iVar3 = 0;
      if (0 < (int)uVar4) {
        puVar6 = (undefined1 *)(*(int *)((int)piVar1 + 0x1e) + 2);
        do {
          *(undefined1 *)((int)param_1 + iVar3 * 4 + 0x2a) = puVar6[-2];
          *(undefined1 *)((int)param_1 + iVar3 * 4 + 0x29) = puVar6[-1];
          *(undefined1 *)(param_1 + iVar3 + 10) = *puVar6;
          *(undefined1 *)((int)param_1 + iVar3 * 4 + 0x2b) = 0;
          iVar3 = iVar3 + 1;
          puVar6 = puVar6 + 3;
        } while (iVar3 < (int)uVar4);
      }
    }
  }
  else {
    iVar3 = param_2[2];
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    FUN_006c76b0(param_1,param_2[1],iVar3);
    param_1 = puVar2;
  }
  iVar3 = piVar1[2];
  piVar7 = &DAT_007ee008;
  piVar8 = local_34;
  for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar8 = *piVar7;
    piVar7 = piVar7 + 1;
    piVar8 = piVar8 + 1;
  }
  local_20 = iVar3 + 3U & 0xfffffffc;
  *(int **)((int)piVar1 + 0x22) = local_34;
  *(code **)((int)piVar1 + 0x3a) = FUN_006c7b20;
  *(int **)((int)piVar1 + 0x2e) = param_1;
  *(int *)((int)piVar1 + 0x32) = param_3;
  local_34[1] = iVar3;
  uVar4 = FUN_006d8120((int)piVar1);
  *piVar1 = local_8;
  piVar1[1] = local_c;
  if (uVar4 != 0) {
    if (param_2 == (undefined4 *)0x0) {
      FUN_006ab060(&param_1);
    }
    FUN_006a5e40(uVar4,DAT_007ed77c,0x7ee030,0x7c);
    return (undefined4 *)0x0;
  }
  return param_1;
}

