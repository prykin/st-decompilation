
void FUN_00760970(int param_1,int param_2,int *param_3,int *param_4,int param_5)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int local_128 [8];
  int local_108 [8];
  int local_e8 [8];
  int local_c8 [8];
  int local_a8 [8];
  int local_88 [8];
  int local_68 [8];
  int local_48 [8];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int *local_18;
  int local_14;
  int *local_10;
  int local_c;
  int local_8;
  
  piVar5 = *(int **)(param_2 + 0x50);
  iVar11 = *(int *)(param_1 + 0x132) + 0x80;
  piVar3 = local_128;
  local_28 = iVar11;
  local_10 = (int *)0x8;
  do {
    if ((((param_3[8] == 0) && (param_3[0x10] == 0)) && (param_3[0x18] == 0)) &&
       (((param_3[0x20] == 0 && (param_3[0x28] == 0)) &&
        ((param_3[0x30] == 0 && (param_3[0x38] == 0)))))) {
      iVar12 = *param_3 * *piVar5;
      *piVar3 = iVar12;
      piVar3[8] = iVar12;
      piVar3[0x10] = iVar12;
      piVar3[0x18] = iVar12;
      piVar3[0x20] = iVar12;
      piVar3[0x28] = iVar12;
      piVar3[0x30] = iVar12;
      piVar3[0x38] = iVar12;
    }
    else {
      iVar12 = piVar5[0x20] * param_3[0x20] + *param_3 * *piVar5;
      iVar8 = *param_3 * *piVar5 - piVar5[0x20] * param_3[0x20];
      iVar11 = piVar5[0x30] * param_3[0x30] + piVar5[0x10] * param_3[0x10];
      iVar9 = ((piVar5[0x10] * param_3[0x10] - piVar5[0x30] * param_3[0x30]) * 0x16a >> 8) - iVar11;
      iVar10 = iVar11 + iVar12;
      local_1c = iVar12 - iVar11;
      iVar12 = iVar8 - iVar9;
      local_24 = iVar9 + iVar8;
      local_14 = piVar5[0x18] * param_3[0x18] + piVar5[0x28] * param_3[0x28];
      iVar9 = piVar5[0x28] * param_3[0x28] - piVar5[0x18] * param_3[0x18];
      iVar11 = piVar5[0x38] * param_3[0x38] + piVar5[8] * param_3[8];
      local_8 = piVar5[8] * param_3[8] - piVar5[0x38] * param_3[0x38];
      iVar8 = iVar11 + local_14;
      local_c = (local_8 + iVar9) * 0x1d9 >> 8;
      iVar9 = ((iVar9 * -0x29d >> 8) - iVar8) + local_c;
      iVar11 = ((iVar11 - local_14) * 0x16a >> 8) - iVar9;
      local_18 = (int *)(((local_8 * 0x115 >> 8) - local_c) + iVar11);
      *piVar3 = iVar8 + iVar10;
      piVar3[0x38] = iVar10 - iVar8;
      piVar3[0x30] = local_24 - iVar9;
      piVar3[8] = iVar9 + local_24;
      piVar3[0x28] = iVar12 - iVar11;
      piVar3[0x10] = iVar11 + iVar12;
      piVar3[0x20] = (int)local_18 + local_1c;
      piVar3[0x18] = local_1c - (int)local_18;
      iVar11 = local_28;
    }
    param_3 = param_3 + 1;
    piVar5 = piVar5 + 1;
    piVar3 = piVar3 + 1;
    local_10 = (int *)((int)local_10 + -1);
  } while (local_10 != (int *)0x0);
  local_18 = local_128;
  local_10 = param_4;
  local_20 = 8;
  do {
    iVar12 = local_18[7];
    iVar10 = local_18[1];
    iVar8 = local_18[6];
    puVar4 = (undefined1 *)(*local_10 + param_5);
    iVar9 = local_18[2];
    iVar2 = local_18[5];
    local_8 = iVar10;
    local_c = iVar2;
    iVar6 = local_18[4];
    local_28 = local_18[3];
    if ((((((iVar10 == 0 && iVar9 == 0) && local_28 == 0) && iVar6 == 0) && iVar2 == 0) &&
        iVar8 == 0) && iVar12 == 0) {
      uVar1 = *(undefined1 *)((*local_18 >> 5 & 0x3ffU) + iVar11);
      *puVar4 = uVar1;
      puVar4[1] = uVar1;
      puVar4[2] = uVar1;
      puVar4[3] = uVar1;
      puVar4[4] = uVar1;
      puVar4[5] = uVar1;
      puVar4[6] = uVar1;
      puVar4[7] = uVar1;
    }
    else {
      local_1c = *local_18 + iVar6;
      iVar6 = *local_18 - iVar6;
      iVar7 = iVar8 + iVar9;
      iVar8 = ((iVar9 - iVar8) * 0x16a >> 8) - iVar7;
      iVar13 = iVar7 + local_1c;
      local_1c = local_1c - iVar7;
      local_24 = iVar8 + iVar6;
      iVar6 = iVar6 - iVar8;
      local_14 = local_28 + iVar2;
      local_8 = iVar10 - iVar12;
      iVar8 = iVar12 + iVar10 + local_14;
      local_c = (local_8 + (iVar2 - local_28)) * 0x1d9 >> 8;
      iVar9 = (((iVar2 - local_28) * -0x29d >> 8) - iVar8) + local_c;
      iVar12 = (((iVar12 + iVar10) - local_14) * 0x16a >> 8) - iVar9;
      iVar10 = ((local_8 * 0x115 >> 8) - local_c) + iVar12;
      *puVar4 = *(undefined1 *)((iVar8 + iVar13 >> 5 & 0x3ffU) + iVar11);
      puVar4[7] = *(undefined1 *)((iVar13 - iVar8 >> 5 & 0x3ffU) + iVar11);
      puVar4[1] = *(undefined1 *)((iVar9 + local_24 >> 5 & 0x3ffU) + iVar11);
      puVar4[6] = *(undefined1 *)((local_24 - iVar9 >> 5 & 0x3ffU) + iVar11);
      puVar4[2] = *(undefined1 *)((iVar12 + iVar6 >> 5 & 0x3ffU) + iVar11);
      puVar4[5] = *(undefined1 *)((iVar6 - iVar12 >> 5 & 0x3ffU) + iVar11);
      puVar4[4] = *(undefined1 *)((iVar10 + local_1c >> 5 & 0x3ffU) + iVar11);
      puVar4[3] = *(undefined1 *)((local_1c - iVar10 >> 5 & 0x3ffU) + iVar11);
    }
    local_18 = local_18 + 8;
    local_20 = local_20 + -1;
    local_10 = local_10 + 1;
  } while (local_20 != 0);
  return;
}

