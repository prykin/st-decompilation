
void FUN_007603b0(int *param_1,int param_2,int *param_3,int *param_4,int param_5)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int local_134 [64];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int *local_14;
  int *local_10;
  int local_c;
  int local_8;
  
  local_14 = *(int **)(param_2 + 0x50);
  iVar6 = *(int *)((int)param_1 + 0x132) + 0x80;
  param_1 = local_134;
  local_2c = iVar6;
  local_10 = param_3;
  local_1c = 8;
  do {
    local_8 = local_10[0x28];
    local_c = local_10[0x18];
    local_30 = local_10[8];
    if ((((((local_30 == 0 && local_10[0x10] == 0) && local_c == 0) && local_10[0x20] == 0) &&
         local_8 == 0) && local_10[0x30] == 0) && local_10[0x38] == 0) {
      iVar3 = *local_10 * *local_14 * 4;
      *param_1 = iVar3;
      param_1[8] = iVar3;
      param_1[0x10] = iVar3;
      param_1[0x18] = iVar3;
      param_1[0x20] = iVar3;
      param_1[0x28] = iVar3;
      param_1[0x30] = iVar3;
      param_1[0x38] = iVar3;
      local_14 = local_14 + 1;
    }
    else {
      iVar6 = (local_14[0x30] * local_10[0x30] + local_14[0x10] * local_10[0x10]) * 0x1151;
      iVar2 = iVar6 + local_14[0x30] * local_10[0x30] * -0x3b21;
      iVar6 = iVar6 + local_14[0x10] * local_10[0x10] * 0x187e;
      iVar10 = local_14[0x20] * local_10[0x20];
      iVar4 = (iVar10 + *local_10 * *local_14) * 0x2000;
      iVar3 = iVar4 + iVar6;
      local_28 = iVar4 - iVar6;
      iVar6 = (*local_10 * *local_14 - iVar10) * 0x2000;
      iVar7 = local_14[0x18] * local_c;
      local_24 = iVar6 + iVar2;
      iVar10 = local_14[0x38] * local_10[0x38];
      local_30 = local_14[8] * local_30;
      local_8 = local_14[0x28] * local_8;
      local_20 = iVar6 - iVar2;
      local_34 = iVar3;
      local_c = (local_30 + local_8 + iVar10 + iVar7) * 0x25a1;
      iVar4 = (iVar10 + local_30) * -0x1ccd;
      iVar6 = (local_8 + iVar7) * -0x5203;
      iVar9 = local_c + (iVar10 + iVar7) * -0x3ec5;
      local_c = local_c + (local_30 + local_8) * -0xc7c;
      iVar10 = iVar10 * 0x98e + iVar4 + iVar9;
      iVar2 = local_8 * 0x41b3 + local_c + iVar6;
      local_8 = iVar7 * 0x6254 + iVar9 + iVar6;
      iVar4 = local_c + local_30 * 0x300b + iVar4;
      *param_1 = iVar3 + 0x400 + iVar4 >> 0xb;
      param_1[0x38] = (iVar3 - iVar4) + 0x400 >> 0xb;
      param_1[0x30] = (local_24 - local_8) + 0x400 >> 0xb;
      param_1[0x28] = (local_20 - iVar2) + 0x400 >> 0xb;
      param_1[0x18] = local_28 + 0x400 + iVar10 >> 0xb;
      param_1[0x10] = local_20 + 0x400 + iVar2 >> 0xb;
      param_1[8] = local_24 + 0x400 + local_8 >> 0xb;
      param_1[0x20] = (local_28 - iVar10) + 0x400 >> 0xb;
      local_14 = local_14 + 1;
      iVar6 = local_2c;
    }
    local_10 = local_10 + 1;
    param_1 = param_1 + 1;
    local_1c = local_1c + -1;
  } while (local_1c != 0);
  piVar8 = local_134;
  local_10 = param_4;
  local_18 = 8;
  do {
    iVar3 = piVar8[7];
    iVar4 = piVar8[2];
    local_14 = (int *)piVar8[5];
    iVar10 = piVar8[4];
    puVar5 = (undefined1 *)(*local_10 + param_5);
    iVar2 = piVar8[6];
    local_1c = piVar8[3];
    iVar7 = piVar8[1];
    if ((((((iVar7 == 0 && iVar4 == 0) && local_1c == 0) && iVar10 == 0) && local_14 == (int *)0x0)
        && iVar2 == 0) && iVar3 == 0) {
      uVar1 = *(undefined1 *)((*piVar8 + 0x10 >> 5 & 0x3ffU) + iVar6);
      *puVar5 = uVar1;
      puVar5[1] = uVar1;
      puVar5[2] = uVar1;
      puVar5[3] = uVar1;
      puVar5[4] = uVar1;
      puVar5[5] = uVar1;
      puVar5[6] = uVar1;
      puVar5[7] = uVar1;
    }
    else {
      iVar6 = (iVar2 + iVar4) * 0x1151;
      iVar2 = iVar6 + iVar2 * -0x3b21;
      iVar6 = iVar6 + iVar4 * 0x187e;
      iVar9 = (*piVar8 + iVar10) * 0x2000;
      local_20 = (*piVar8 - iVar10) * 0x2000;
      iVar4 = iVar9 + iVar6;
      iVar9 = iVar9 - iVar6;
      local_24 = local_20 + iVar2;
      local_20 = local_20 - iVar2;
      local_c = ((int)local_14 + iVar7 + iVar3 + local_1c) * 0x25a1;
      iVar6 = (iVar3 + iVar7) * -0x1ccd;
      local_8 = ((int)local_14 + local_1c) * -0x5203;
      iVar10 = local_c + (iVar3 + local_1c) * -0x3ec5;
      local_c = local_c + ((int)local_14 + iVar7) * -0xc7c;
      local_28 = iVar3 * 0x98e + iVar6 + iVar10;
      iVar3 = (int)local_14 * 0x41b3 + local_c + local_8;
      local_8 = local_1c * 0x6254 + iVar10 + local_8;
      iVar6 = local_c + piVar8[1] * 0x300b + iVar6;
      *puVar5 = *(undefined1 *)((iVar4 + 0x20000 + iVar6 >> 0x12 & 0x3ffU) + local_2c);
      puVar5[7] = *(undefined1 *)(((iVar4 - iVar6) + 0x20000 >> 0x12 & 0x3ffU) + local_2c);
      puVar5[1] = *(undefined1 *)((local_24 + 0x20000 + local_8 >> 0x12 & 0x3ffU) + local_2c);
      puVar5[6] = *(undefined1 *)(((local_24 - local_8) + 0x20000 >> 0x12 & 0x3ffU) + local_2c);
      puVar5[2] = *(undefined1 *)((local_20 + 0x20000 + iVar3 >> 0x12 & 0x3ffU) + local_2c);
      puVar5[5] = *(undefined1 *)(((local_20 - iVar3) + 0x20000 >> 0x12 & 0x3ffU) + local_2c);
      puVar5[3] = *(undefined1 *)((iVar9 + 0x20000 + local_28 >> 0x12 & 0x3ffU) + local_2c);
      puVar5[4] = *(undefined1 *)(((iVar9 - local_28) + 0x20000 >> 0x12 & 0x3ffU) + local_2c);
      iVar6 = local_2c;
    }
    piVar8 = piVar8 + 8;
    local_18 = local_18 + -1;
    local_10 = local_10 + 1;
  } while (local_18 != 0);
  return;
}

