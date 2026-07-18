
void FUN_006c3d80(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  tagRECT local_24;
  int local_8;
  
  iVar2 = param_1;
  GetClientRect(*(HWND *)(*(int *)(param_1 + 0x28) + 4),&local_24);
  uVar1 = *(uint *)(param_1 + 4);
  uVar3 = uVar1 & 4;
  if (uVar3 == 0) {
    if ((uVar1 & 8) == 0) {
      local_8 = 1;
      param_1 = 1;
      iVar6 = 1;
      iVar5 = 1;
    }
    else {
      iVar6 = 2;
      iVar5 = 2;
      local_8 = 1;
      param_1 = 1;
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0x20);
    iVar6 = *(int *)(param_1 + 0x24);
    local_8 = *(int *)(param_1 + 0x14);
    param_1 = *(int *)(param_1 + 0x10);
  }
  if (uVar3 == 0) {
    if ((uVar1 & 8) == 0) {
      iVar4 = *(int *)(iVar2 + 0x10);
      iVar7 = *(int *)(iVar2 + 0x14);
    }
    else {
      iVar4 = *(int *)(iVar2 + 0x10) << 1;
      iVar7 = *(int *)(iVar2 + 0x14) << 1;
    }
  }
  else {
    iVar4 = local_24.right;
    iVar7 = local_24.bottom;
    if ((uVar1 & 0x4000000) != 0) {
      iVar4 = *(int *)(iVar2 + 0x20);
      iVar7 = *(int *)(iVar2 + 0x24);
    }
  }
  if ((uVar1 & 0x4000000) == 0) {
    *(undefined4 *)(iVar2 + 0x18) = 0;
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    *(LONG *)(iVar2 + 0x20) = local_24.right;
    *(LONG *)(iVar2 + 0x24) = local_24.bottom;
  }
  iVar4 = iVar4 - *(int *)(iVar2 + 0x20);
  if (0 < iVar4) {
    iVar5 = (iVar4 * param_1 + -1 + iVar5) / iVar5;
    *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + iVar5 / 2;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) - iVar5;
  }
  iVar7 = iVar7 - *(int *)(iVar2 + 0x24);
  if (0 < iVar7) {
    iVar6 = (iVar7 * local_8 + -1 + iVar6) / iVar6;
    *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + iVar6 / 2;
    *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) - iVar6;
  }
  if ((uVar1 & 0x4000000) != 0) goto LAB_006c3ee7;
  if ((uVar1 & 8) == 0) {
    if (uVar3 == 0) {
      iVar5 = *(int *)(iVar2 + 0x14);
      *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(iVar2 + 0x10);
      goto LAB_006c3eba;
    }
  }
  else {
    *(int *)(iVar2 + 0x20) = *(int *)(iVar2 + 0x10) << 1;
    iVar5 = *(int *)(iVar2 + 0x14) << 1;
LAB_006c3eba:
    *(int *)(iVar2 + 0x24) = iVar5;
  }
  *(int *)(iVar2 + 0x18) = *(int *)(iVar2 + 0x18) + (local_24.right - *(int *)(iVar2 + 0x20)) / 2;
  *(int *)(iVar2 + 0x1c) = *(int *)(iVar2 + 0x1c) + (local_24.bottom - *(int *)(iVar2 + 0x24)) / 2;
LAB_006c3ee7:
  *(uint *)(iVar2 + 4) = uVar1 | 0x2000000;
  return;
}

