
void FUN_006c3d80(AnonShape_006C3D80_5E5410BE *param_1)

{
  uint uVar1;
  AnonShape_006C3D80_5E5410BE *pAVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  tagRECT local_24;
  int local_8;

  pAVar2 = param_1;
  GetClientRect(*(HWND *)(param_1->field_0028 + 4),&local_24);
  uVar1 = param_1->field_0004;
  uVar3 = uVar1 & 4;
  if (uVar3 == 0) {
    if ((uVar1 & 8) == 0) {
      local_8 = 1;
      param_1 = (AnonShape_006C3D80_5E5410BE *)0x1;
      iVar6 = 1;
      iVar5 = 1;
    }
    else {
      iVar6 = 2;
      iVar5 = 2;
      local_8 = 1;
      param_1 = (AnonShape_006C3D80_5E5410BE *)0x1;
    }
  }
  else {
    iVar5 = param_1->field_0020;
    iVar6 = param_1->field_0024;
    local_8 = param_1->field_0014;
    param_1 = (AnonShape_006C3D80_5E5410BE *)param_1->field_0010;
  }
  if (uVar3 == 0) {
    if ((uVar1 & 8) == 0) {
      iVar4 = pAVar2->field_0010;
      iVar7 = pAVar2->field_0014;
    }
    else {
      iVar4 = pAVar2->field_0010 << 1;
      iVar7 = pAVar2->field_0014 << 1;
    }
  }
  else {
    iVar4 = local_24.right;
    iVar7 = local_24.bottom;
    if ((uVar1 & 0x4000000) != 0) {
      iVar4 = pAVar2->field_0020;
      iVar7 = pAVar2->field_0024;
    }
  }
  if ((uVar1 & 0x4000000) == 0) {
    *(undefined4 *)&pAVar2->field_0x18 = 0;
    *(undefined4 *)&pAVar2->field_0x1c = 0;
    pAVar2->field_0020 = local_24.right;
    pAVar2->field_0024 = local_24.bottom;
  }
  iVar4 = iVar4 - pAVar2->field_0020;
  if (0 < iVar4) {
    iVar5 = (iVar4 * (int)param_1 + -1 + iVar5) / iVar5;
    *(int *)&pAVar2->field_0x8 = *(int *)&pAVar2->field_0x8 + iVar5 / 2;
    pAVar2->field_0010 = pAVar2->field_0010 - iVar5;
  }
  iVar7 = iVar7 - pAVar2->field_0024;
  if (0 < iVar7) {
    iVar6 = (iVar7 * local_8 + -1 + iVar6) / iVar6;
    *(int *)&pAVar2->field_0xc = *(int *)&pAVar2->field_0xc + iVar6 / 2;
    pAVar2->field_0014 = pAVar2->field_0014 - iVar6;
  }
  if ((uVar1 & 0x4000000) != 0) goto LAB_006c3ee7;
  if ((uVar1 & 8) == 0) {
    if (uVar3 == 0) {
      iVar5 = pAVar2->field_0014;
      pAVar2->field_0020 = pAVar2->field_0010;
      goto LAB_006c3eba;
    }
  }
  else {
    pAVar2->field_0020 = pAVar2->field_0010 << 1;
    iVar5 = pAVar2->field_0014 << 1;
LAB_006c3eba:
    pAVar2->field_0024 = iVar5;
  }
  *(int *)&pAVar2->field_0x18 =
       *(int *)&pAVar2->field_0x18 + (local_24.right - pAVar2->field_0020) / 2;
  *(int *)&pAVar2->field_0x1c =
       *(int *)&pAVar2->field_0x1c + (local_24.bottom - pAVar2->field_0024) / 2;
LAB_006c3ee7:
  pAVar2->field_0004 = uVar1 | 0x2000000;
  return;
}

