
undefined4
FUN_006a6100(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int *param_7)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  byte bVar9;
  undefined4 local_2c;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar5 = param_4 - param_1 >> 0x1f;
  iVar7 = (param_4 - param_1 ^ uVar5) - uVar5;
  if (param_1 < param_4) {
    local_2c = 2;
  }
  else {
    local_2c = (uint)(param_4 == param_1);
  }
  uVar5 = param_5 - param_2 >> 0x1f;
  iVar3 = (param_5 - param_2 ^ uVar5) - uVar5;
  if (param_2 < param_5) {
    uVar5 = 2;
  }
  else {
    uVar5 = (uint)(param_5 == param_2);
  }
  uVar6 = param_6 - param_3 >> 0x1f;
  local_18 = (param_6 - param_3 ^ uVar6) - uVar6;
  if (param_3 < param_6) {
    local_14 = 2;
  }
  else {
    local_14 = (uint)(param_6 == param_3);
  }
  bVar1 = iVar7 < iVar3;
  iVar4 = iVar3;
  uVar6 = uVar5;
  if ((bool)bVar1) {
    iVar4 = iVar7;
    iVar7 = iVar3;
    uVar6 = local_2c;
    local_2c = uVar5;
  }
  iVar3 = iVar4;
  uVar5 = uVar6;
  bVar8 = !(bool)bVar1;
  bVar2 = 2;
  if (iVar4 < local_18) {
    bVar8 = 2;
    iVar3 = local_18;
    uVar5 = local_14;
    local_18 = iVar4;
    local_14 = uVar6;
    bVar2 = !(bool)bVar1;
  }
  iVar4 = iVar3;
  uVar6 = uVar5;
  bVar9 = bVar8;
  if (iVar7 < iVar3) {
    iVar4 = iVar7;
    iVar7 = iVar3;
    uVar6 = local_2c;
    local_2c = uVar5;
    bVar9 = bVar1;
    bVar1 = bVar8;
  }
  if (iVar7 == 0) {
    return DAT_007ed534;
  }
  if (iVar4 * 2 < iVar7) {
    uVar6 = 1;
    local_14 = 1;
    iVar3 = iVar7 + iVar4 * -2;
  }
  else if (local_18 * 2 < iVar4) {
    local_14 = 1;
    iVar3 = iVar4 + local_18 * -2;
    iVar7 = iVar4 * 2 - iVar7;
    if (iVar7 < iVar3) {
      iVar3 = iVar7 + 1;
    }
  }
  else {
    iVar3 = local_18 * 2 - iVar4;
    iVar7 = iVar4 * 2 - iVar7;
    if (iVar7 < iVar3) {
      iVar3 = iVar7;
    }
    iVar3 = iVar3 + 1;
  }
  uVar5 = uVar6;
  bVar8 = bVar1;
  if (bVar1 < bVar9) {
    uVar5 = local_2c;
    local_2c = uVar6;
    bVar8 = bVar9;
    bVar9 = bVar1;
  }
  uVar6 = uVar5;
  if (bVar9 < bVar2) {
    uVar6 = local_14;
    local_14 = uVar5;
    bVar9 = bVar2;
  }
  uVar5 = uVar6;
  if (bVar8 < bVar9) {
    uVar5 = local_2c;
    local_2c = uVar6;
  }
  if (param_7 != (int *)0x0) {
    *param_7 = iVar3;
  }
  return *(undefined4 *)(((uVar5 + local_2c * 3) * 3 + local_14) * 4 + 0x7ed500);
}

