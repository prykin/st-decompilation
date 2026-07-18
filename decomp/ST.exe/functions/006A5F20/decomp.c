
undefined4
FUN_006a5f20(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int *param_7)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  byte bVar10;
  byte bVar11;
  uint local_2c;
  int local_18;
  uint local_14;
  
  uVar6 = param_4 - param_1 >> 0x1f;
  iVar8 = (param_4 - param_1 ^ uVar6) - uVar6;
  if (param_1 < param_4) {
    local_2c = 2;
  }
  else {
    local_2c = (uint)(param_4 == param_1);
  }
  uVar6 = param_5 - param_2 >> 0x1f;
  iVar4 = (param_5 - param_2 ^ uVar6) - uVar6;
  if (param_2 < param_5) {
    uVar6 = 2;
  }
  else {
    uVar6 = (uint)(param_5 == param_2);
  }
  uVar7 = param_6 - param_3 >> 0x1f;
  local_18 = (param_6 - param_3 ^ uVar7) - uVar7;
  if (param_3 < param_6) {
    local_14 = 2;
  }
  else {
    local_14 = (uint)(param_6 == param_3);
  }
  bVar1 = iVar4 <= iVar8;
  iVar5 = iVar4;
  uVar7 = uVar6;
  if (!bVar1) {
    iVar5 = iVar8;
    iVar8 = iVar4;
    uVar7 = local_2c;
    local_2c = uVar6;
  }
  iVar4 = iVar5;
  uVar6 = uVar7;
  bVar10 = bVar1;
  bVar2 = 2;
  if (iVar5 < local_18) {
    bVar10 = 2;
    iVar4 = local_18;
    uVar6 = local_14;
    local_18 = iVar5;
    local_14 = uVar7;
    bVar2 = bVar1;
  }
  param_6 = iVar4;
  uVar7 = uVar6;
  bVar11 = bVar10;
  bVar3 = !bVar1;
  if (iVar8 < iVar4) {
    param_6 = iVar8;
    iVar8 = iVar4;
    uVar7 = local_2c;
    local_2c = uVar6;
    bVar11 = !bVar1;
    bVar3 = bVar10;
  }
  if (param_6 * 2 < iVar8) {
    uVar7 = 1;
    local_14 = 1;
    param_6 = iVar8 - param_6;
  }
  else if (local_18 * 2 < param_6) {
    local_14 = 1;
    param_6 = param_6 - local_18;
  }
  else if (local_18 == 0) {
    if (param_6 == 0) {
      param_6 = iVar8;
    }
  }
  else {
    param_6 = local_18;
  }
  uVar6 = local_2c;
  bVar10 = bVar3;
  if (bVar3 < bVar11) {
    uVar6 = uVar7;
    uVar7 = local_2c;
    bVar10 = bVar11;
    bVar11 = bVar3;
  }
  uVar9 = uVar7;
  if (bVar11 < bVar2) {
    uVar9 = local_14;
    local_14 = uVar7;
    bVar11 = bVar2;
  }
  uVar7 = uVar6;
  if (bVar10 < bVar11) {
    uVar7 = uVar9;
    uVar9 = uVar6;
  }
  if (param_7 != (int *)0x0) {
    *param_7 = param_6;
  }
  return *(undefined4 *)(((uVar9 + uVar7 * 3) * 3 + local_14) * 4 + 0x7ed500);
}

