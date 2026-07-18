
int FUN_006c4630(int param_1,int *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_4a0 [256];
  undefined4 local_a0;
  undefined4 local_9c;
  int local_98;
  undefined4 local_94;
  undefined4 local_58;
  int local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if ((*(uint *)(param_1 + 8) & 0x4000000) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4f0));
  }
  local_a0 = 0x7c;
  local_9c = 0x1006;
  local_58 = 0x20;
  iVar2 = (**(code **)(*param_2 + 0x58))(param_2,&local_a0);
  if (iVar2 != 0) goto LAB_006c4834;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x40);
    param_3[2] = *(undefined4 *)(param_1 + 0x10);
    param_3[3] = *(undefined4 *)(param_1 + 0x14);
    param_3[1] = *(undefined4 *)(param_1 + 0x4c0);
  }
  if (local_4c == 0x10) {
    puVar5 = local_4a0;
    for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    local_10 = *(undefined4 *)(param_1 + 0x20);
    local_20 = *(undefined4 *)(param_1 + 0x4c4);
    local_18 = *(undefined4 *)(param_1 + 0x4c8);
    local_c = *(undefined4 *)(param_1 + 0x4d0);
    local_8 = *(undefined4 *)(param_1 + 0x4cc);
    local_1c = *(undefined4 *)(param_1 + 0x4d8);
    local_14 = *(undefined4 *)(param_1 + 0x4d4);
    *(undefined4 *)(param_1 + 0x20) = 0x10;
    iVar2 = 0;
    *(uint *)(param_1 + 0x4c4) = local_48;
    *(uint *)(param_1 + 0x4c8) = local_44;
    local_24 = local_40;
    *(uint *)(param_1 + 0x4cc) = local_40;
    for (; (local_48 & 0x8000) == 0; local_48 = local_48 << 1) {
      iVar2 = iVar2 + 1;
    }
    iVar4 = 0;
    for (; (local_44 & 0x8000) == 0; local_44 = local_44 << 1) {
      iVar4 = iVar4 + 1;
    }
    iVar3 = 0;
    for (; (local_40 & 0x8000) == 0; local_40 = local_40 << 1) {
      iVar3 = iVar3 + 1;
    }
    *(int *)(param_1 + 0x4d8) = iVar3;
    piVar1 = *(int **)(param_1 + 0x3c);
    *(int *)(param_1 + 0x4d0) = iVar2;
    *(int *)(param_1 + 0x4d4) = iVar4;
    if ((piVar1 != (int *)0x0) &&
       (iVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,0,0,0x100,local_4a0), iVar2 != 0))
    goto LAB_006c4834;
    *(undefined4 *)(param_1 + 0x4c0) = 0;
    iVar2 = FUN_006b0520(param_1,(int)local_4a0,0,0x100);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x4c0) = param_3[1];
      *(undefined4 *)(param_1 + 0x20) = local_10;
      *(undefined4 *)(param_1 + 0x4c4) = local_20;
      *(undefined4 *)(param_1 + 0x4c8) = local_18;
      *(undefined4 *)(param_1 + 0x4cc) = local_8;
      *(undefined4 *)(param_1 + 0x4d0) = local_c;
      *(undefined4 *)(param_1 + 0x4d4) = local_14;
      *(undefined4 *)(param_1 + 0x4d8) = local_1c;
      goto LAB_006c4834;
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = local_94;
  *(int *)(param_1 + 0x1c) = local_98;
  *(undefined4 *)(param_1 + 0x50) = local_94;
  *(int **)(param_1 + 0x40) = param_2;
  *(int *)(param_1 + 0x54) = -local_98;
  *(undefined2 *)(param_1 + 0x5a) = *(undefined2 *)(param_1 + 0x20);
LAB_006c4834:
  if ((*(uint *)(param_1 + 8) & 0x4000000) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4f0));
  }
  if (iVar2 == 0) {
    return 0;
  }
  FUN_006a5e40(iVar2,DAT_007ed77c,0x7edef4,0xae);
  return iVar2;
}

