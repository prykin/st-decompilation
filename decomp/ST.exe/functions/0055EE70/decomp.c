
int FUN_0055ee70(undefined1 *param_1,int param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 *puVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  int local_34;
  int local_28;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_0079afb0;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  puVar8 = &stack0xffffffb0;
  pcVar9 = &stack0xffffffb0;
  pcVar10 = &stack0xffffffb0;
  pcVar11 = &stack0xffffffb0;
  puVar6 = &stack0xffffffb0;
  local_8 = 0;
  ExceptionList = &local_14;
  FUN_0072da40();
  iVar4 = 0;
  iVar2 = param_2 * -2 + 3;
  local_28 = 0;
  do {
    iVar7 = local_28;
    iVar5 = param_2;
    *puVar6 = (char)iVar5;
    puVar6[1] = -(char)iVar4;
    local_28 = iVar7 + 1;
    puVar6 = puVar6 + 2;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 6 + iVar4 * 4;
      param_2 = iVar5;
    }
    else {
      iVar2 = iVar2 + 10 + (iVar4 - iVar5) * 4;
      param_2 = iVar5 + -1;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < param_2);
  if ((iVar4 == param_2) && (param_2 != iVar5)) {
    (&stack0xffffffb0)[local_28 * 2] = (char)param_2;
    (&stack0xffffffb1)[local_28 * 2] = -(char)iVar4;
    local_28 = iVar7 + 2;
  }
  if (0 < iVar7) {
    pcVar1 = &stack0xffffffb0 + local_28 * 2;
    pcVar3 = &stack0xffffffb0 + iVar7 * 2;
    local_28 = local_28 + iVar7;
    do {
      *pcVar1 = -pcVar3[1];
      pcVar1[1] = -*pcVar3;
      pcVar1 = pcVar1 + 2;
      pcVar3 = pcVar3 + -2;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  iVar2 = 0;
  iVar4 = 0;
  local_34 = 0;
  puVar6 = param_1;
  do {
    if (iVar4 < 1) {
      *puVar6 = *puVar8;
      puVar6[1] = puVar8[1];
      iVar4 = iVar4 + param_3;
      iVar2 = iVar2 + 1;
      puVar6 = puVar6 + 2;
    }
    iVar4 = iVar4 + -1;
    local_34 = local_34 + 1;
    puVar8 = puVar8 + 2;
  } while (local_34 < local_28);
  iVar5 = 0;
  pcVar1 = param_1 + iVar2 * 2;
  do {
    if (iVar4 < 1) {
      *pcVar1 = pcVar9[1];
      pcVar1[1] = -*pcVar9;
      iVar4 = iVar4 + param_3;
      iVar2 = iVar2 + 1;
      pcVar1 = pcVar1 + 2;
    }
    iVar4 = iVar4 + -1;
    iVar5 = iVar5 + 1;
    pcVar9 = pcVar9 + 2;
  } while (iVar5 < local_28);
  iVar5 = 0;
  pcVar9 = param_1 + iVar2 * 2;
  do {
    if (iVar4 < 1) {
      *pcVar9 = -*pcVar10;
      pcVar9[1] = -pcVar10[1];
      iVar4 = iVar4 + param_3;
      iVar2 = iVar2 + 1;
      pcVar9 = pcVar9 + 2;
    }
    iVar4 = iVar4 + -1;
    iVar5 = iVar5 + 1;
    pcVar10 = pcVar10 + 2;
  } while (iVar5 < local_28);
  iVar5 = 0;
  pcVar9 = param_1 + iVar2 * 2;
  do {
    if (iVar4 < 1) {
      *pcVar9 = -pcVar11[1];
      pcVar9[1] = *pcVar11;
      iVar4 = iVar4 + param_3;
      iVar2 = iVar2 + 1;
      pcVar9 = pcVar9 + 2;
    }
    iVar4 = iVar4 + -1;
    iVar5 = iVar5 + 1;
    pcVar11 = pcVar11 + 2;
  } while (iVar5 < local_28);
  ExceptionList = local_14;
  return iVar2;
}

