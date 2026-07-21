
void FUN_0040f4d0(undefined4 *param_1,uint param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  char cVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  int local_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  puStack_c = &DAT_00790050;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  pcVar10 = &stack0xffffffbc;
  pcVar11 = &stack0xffffffbc;
  local_8 = 0;
  ExceptionList = &local_14;
  Library::MSVCRT::FUN_0072da40();
  local_8 = 0xffffffff;
  puVar7 = param_1;
  puVar8 = (undefined4 *)&stack0xffffffbc;
  for (uVar4 = param_2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  for (uVar4 = param_2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  cVar1 = (char)param_2;
  if (param_4 == 0) {
    local_24 = param_3 / 2;
    iVar2 = 0;
    if (0 < param_3) {
      do {
        if ((&stack0xffffffbc)[iVar2] != '\0') {
          local_24 = local_24 + 1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_3);
    }
    uVar4 = 0;
    if (0 < param_3) {
      do {
        if (pcVar11[param_3] != '\0') {
          local_24 = local_24 + 1;
        }
        cVar6 = (char)local_24;
        if (*pcVar11 != '\0') {
          cVar6 = cVar6 + cVar1;
        }
        pcVar11[(int)param_1 - (int)&stack0xffffffbc] = cVar6;
        if ((uVar4 & 1) != 0) {
          local_24 = local_24 + -1;
        }
        uVar4 = uVar4 + 1;
        pcVar11 = pcVar11 + 1;
      } while ((int)uVar4 < param_3);
    }
    if ((int)uVar4 < (int)(param_2 - param_3)) {
      pcVar11 = &stack0xffffffbc + uVar4;
      do {
        if (pcVar11[param_3] != '\0') {
          local_24 = local_24 + 1;
        }
        cVar6 = (char)local_24;
        if (*pcVar11 != '\0') {
          cVar6 = cVar6 + cVar1;
        }
        pcVar11[(int)param_1 - (int)&stack0xffffffbc] = cVar6;
        if ((&stack0xffffffbc)[uVar4 - param_3] != '\0') {
          local_24 = local_24 + -1;
        }
        uVar4 = uVar4 + 1;
        pcVar11 = pcVar11 + 1;
      } while ((int)uVar4 < (int)(param_2 - param_3));
    }
    if ((int)uVar4 < (int)param_2) {
      pcVar11 = (char *)(uVar4 + (int)param_1);
      uVar3 = param_2 - uVar4;
      do {
        if ((uVar3 & 1) == 0) {
          local_24 = local_24 + 1;
        }
        cVar6 = (char)local_24;
        if (pcVar11[(int)(&stack0xffffffbc + -(int)param_1)] != '\0') {
          cVar6 = cVar1 + cVar6;
        }
        *pcVar11 = cVar6;
        if ((&stack0xffffffbc)[uVar4 - param_3] != '\0') {
          local_24 = local_24 + -1;
        }
        uVar4 = uVar4 + 1;
        uVar3 = uVar3 - 1;
        pcVar11 = pcVar11 + 1;
      } while ((int)uVar4 < (int)param_2);
    }
  }
  else {
    cVar6 = '\0';
    iVar9 = param_2 - param_3;
    for (iVar2 = iVar9; iVar2 < (int)param_2; iVar2 = iVar2 + 1) {
      if ((&stack0xffffffbc)[iVar2] != '\0') {
        cVar6 = cVar6 + '\x01';
      }
    }
    iVar2 = 0;
    if (0 < param_3) {
      do {
        if ((&stack0xffffffbc)[iVar2] != '\0') {
          cVar6 = cVar6 + '\x01';
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_3);
    }
    iVar2 = 0;
    if (0 < param_3) {
      do {
        if (pcVar10[param_3] != '\0') {
          cVar6 = cVar6 + '\x01';
        }
        cVar5 = cVar6;
        if (*pcVar10 != '\0') {
          cVar5 = cVar1 + cVar6;
        }
        pcVar10[(int)param_1 - (int)&stack0xffffffbc] = cVar5;
        if ((&stack0xffffffbc)[param_2 + (iVar2 - param_3)] != '\0') {
          cVar6 = cVar6 + -1;
        }
        iVar2 = iVar2 + 1;
        pcVar10 = pcVar10 + 1;
      } while (iVar2 < param_3);
    }
    if (iVar2 < iVar9) {
      pcVar11 = &stack0xffffffbc + iVar2;
      do {
        if (pcVar11[param_3] != '\0') {
          cVar6 = cVar6 + '\x01';
        }
        cVar5 = cVar6;
        if (*pcVar11 != '\0') {
          cVar5 = cVar1 + cVar6;
        }
        pcVar11[(int)param_1 - (int)&stack0xffffffbc] = cVar5;
        if ((&stack0xffffffbc)[iVar2 - param_3] != '\0') {
          cVar6 = cVar6 + -1;
        }
        iVar2 = iVar2 + 1;
        pcVar11 = pcVar11 + 1;
      } while (iVar2 < iVar9);
    }
    if (iVar2 < (int)param_2) {
      pcVar11 = (char *)(iVar2 + (int)param_1);
      do {
        if ((&stack0xffffffbc)[param_3 + (iVar2 - param_2)] != '\0') {
          cVar6 = cVar6 + '\x01';
        }
        cVar5 = cVar6;
        if (pcVar11[(int)(&stack0xffffffbc + -(int)param_1)] != '\0') {
          cVar5 = cVar6 + cVar1;
        }
        *pcVar11 = cVar5;
        if ((&stack0xffffffbc)[iVar2 - param_3] != '\0') {
          cVar6 = cVar6 + -1;
        }
        iVar2 = iVar2 + 1;
        pcVar11 = pcVar11 + 1;
      } while (iVar2 < (int)param_2);
    }
  }
  ExceptionList = local_14;
  return;
}

