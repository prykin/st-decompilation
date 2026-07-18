
void FUN_006c3340(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  tagRECT local_18;
  
  iVar2 = param_1;
  GetClientRect(*(HWND *)(*(int *)(param_1 + 4) + 4),&local_18);
  piVar1 = (int *)(param_1 + 4);
  iVar6 = *(int *)(*piVar1 + 0x18);
  param_1 = local_18.bottom;
  if (iVar6 < local_18.right) {
    local_18.right = iVar6;
  }
  iVar6 = *(int *)(*piVar1 + 0x1c);
  if (iVar6 < local_18.bottom) {
    param_1 = iVar6;
  }
  iVar3 = *(int *)(iVar2 + 0x40);
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(undefined4 *)(iVar2 + 0x20) = 0;
  iVar6 = *(int *)(iVar2 + 0x3c);
  uVar5 = *(uint *)(iVar2 + 8) & 0x4000000;
  *(int *)(iVar2 + 0x24) = iVar6;
  *(int *)(iVar2 + 0x28) = iVar3;
  if (uVar5 == 0) {
    iVar4 = param_1;
    iVar7 = local_18.right;
    if ((*(uint *)(iVar2 + 8) & 4) != 0) goto LAB_006c33bb;
  }
  else {
    iVar6 = *(int *)(iVar2 + 0x14);
    iVar3 = *(int *)(iVar2 + 0x18);
  }
  iVar4 = iVar3;
  iVar7 = iVar6;
LAB_006c33bb:
  if (uVar5 == 0) {
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(LONG *)(iVar2 + 0x14) = local_18.right;
    *(int *)(iVar2 + 0x18) = param_1;
  }
  else {
    iVar6 = *(int *)(iVar2 + 0x14);
    if (local_18.right < iVar6) {
      *(LONG *)(iVar2 + 0x14) = local_18.right;
      *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + (iVar6 - local_18.right) / 2;
    }
    else if (param_1 < *(int *)(iVar2 + 0x18)) {
      *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + (*(int *)(iVar2 + 0x18) - param_1) / 2;
      *(int *)(iVar2 + 0x18) = param_1;
    }
  }
  iVar6 = *(int *)(iVar2 + 0x14);
  if (iVar6 < iVar7) {
    *(int *)(iVar2 + 0x24) = iVar6;
    *(int *)(iVar2 + 0x1c) = (iVar7 - iVar6) / 2;
  }
  iVar6 = *(int *)(iVar2 + 0x18);
  if (iVar6 < iVar4) {
    *(int *)(iVar2 + 0x28) = iVar6;
    *(int *)(iVar2 + 0x20) = (iVar4 - iVar6) / 2;
  }
  if ((*(byte *)(iVar2 + 8) & 4) == 0) {
    iVar6 = *(int *)(iVar2 + 0x24);
    if (iVar7 < iVar6) {
      *(int *)(iVar2 + 0x24) = iVar7;
      *(int *)(iVar2 + 0x1c) = *(int *)(iVar2 + 0x1c) + (iVar6 - iVar7) / 2;
    }
    iVar6 = *(int *)(iVar2 + 0x28);
    if (iVar4 < iVar6) {
      *(int *)(iVar2 + 0x28) = iVar4;
      *(int *)(iVar2 + 0x20) = *(int *)(iVar2 + 0x20) + (iVar6 - iVar4) / 2;
    }
  }
  return;
}

