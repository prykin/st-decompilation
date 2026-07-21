
void FUN_00760970(int param_1,AnonShape_00760970_DF0E462C *param_2,int *param_3,int *param_4,
                 int param_5)

{
  undefined1 uVar1;
  int *piVar2;
  undefined1 *puVar3;
  AnonNested_00760970_0050_3C80E9C1 *pAVar4;
  int iVar5;
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

  pAVar4 = param_2->field_0050;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar10 = *(int *)(param_1 + 0x132) + 0x80;
  piVar2 = local_128;
  local_28 = iVar10;
  local_10 = (int *)0x8;
  do {
    if ((((param_3[8] == 0) && (param_3[0x10] == 0)) && (param_3[0x18] == 0)) &&
       (((param_3[0x20] == 0 && (param_3[0x28] == 0)) &&
        ((param_3[0x30] == 0 && (param_3[0x38] == 0)))))) {
      iVar11 = *param_3 * pAVar4->field_0000;
      *piVar2 = iVar11;
      piVar2[8] = iVar11;
      piVar2[0x10] = iVar11;
      piVar2[0x18] = iVar11;
      piVar2[0x20] = iVar11;
      piVar2[0x28] = iVar11;
      piVar2[0x30] = iVar11;
      piVar2[0x38] = iVar11;
    }
    else {
      iVar10 = pAVar4->field_0080 * param_3[0x20];
      iVar7 = *param_3 * pAVar4->field_0000;
      iVar11 = pAVar4->field_00C0 * param_3[0x30];
      iVar8 = pAVar4->field_0040 * param_3[0x10];
      iVar9 = iVar10 + iVar7;
      iVar7 = iVar7 - iVar10;
      iVar10 = iVar11 + iVar8;
      iVar12 = ((iVar8 - iVar11) * 0x16a >> 8) - iVar10;
      iVar11 = iVar10 + iVar9;
      local_1c = iVar9 - iVar10;
      iVar8 = iVar7 - iVar12;
      local_24 = iVar12 + iVar7;
      iVar9 = pAVar4->field_0060 * param_3[0x18];
      iVar10 = pAVar4->field_00E0 * param_3[0x38];
      iVar7 = pAVar4->field_00A0 * param_3[0x28];
      local_8 = pAVar4->field_0020 * param_3[8];
      local_14 = iVar9 + iVar7;
      iVar7 = iVar7 - iVar9;
      iVar9 = iVar10 + local_8;
      local_8 = local_8 - iVar10;
      iVar10 = iVar9 + local_14;
      local_c = (local_8 + iVar7) * 0x1d9 >> 8;
      iVar7 = ((iVar7 * -0x29d >> 8) - iVar10) + local_c;
      iVar9 = ((iVar9 - local_14) * 0x16a >> 8) - iVar7;
      local_18 = (int *)(((local_8 * 0x115 >> 8) - local_c) + iVar9);
      *piVar2 = iVar10 + iVar11;
      piVar2[0x38] = iVar11 - iVar10;
      piVar2[0x30] = local_24 - iVar7;
      piVar2[8] = iVar7 + local_24;
      piVar2[0x28] = iVar8 - iVar9;
      piVar2[0x10] = iVar9 + iVar8;
      piVar2[0x20] = (int)local_18 + local_1c;
      piVar2[0x18] = local_1c - (int)local_18;
      iVar10 = local_28;
    }
    param_3 = param_3 + 1;
    pAVar4 = (AnonNested_00760970_0050_3C80E9C1 *)&pAVar4->field_0x4;
    piVar2 = piVar2 + 1;
    local_10 = (int *)((int)local_10 + -1);
  } while (local_10 != (int *)0x0);
  local_18 = local_128;
  local_10 = param_4;
  local_20 = 8;
  do {
    iVar11 = local_18[7];
    iVar9 = local_18[1];
    iVar7 = local_18[6];
    puVar3 = (undefined1 *)(*local_10 + param_5);
    iVar8 = local_18[2];
    iVar12 = local_18[5];
    local_8 = iVar9;
    local_c = iVar12;
    iVar5 = local_18[4];
    local_28 = local_18[3];
    if ((((((iVar9 == 0 && iVar8 == 0) && local_28 == 0) && iVar5 == 0) && iVar12 == 0) &&
        iVar7 == 0) && iVar11 == 0) {
      uVar1 = *(undefined1 *)((*local_18 >> 5 & 0x3ffU) + iVar10);
      *puVar3 = uVar1;
      puVar3[1] = uVar1;
      puVar3[2] = uVar1;
      puVar3[3] = uVar1;
      puVar3[4] = uVar1;
      puVar3[5] = uVar1;
      puVar3[6] = uVar1;
      puVar3[7] = uVar1;
    }
    else {
      local_1c = *local_18 + iVar5;
      iVar5 = *local_18 - iVar5;
      iVar6 = iVar7 + iVar8;
      iVar7 = ((iVar8 - iVar7) * 0x16a >> 8) - iVar6;
      iVar13 = iVar6 + local_1c;
      local_1c = local_1c - iVar6;
      local_24 = iVar7 + iVar5;
      iVar5 = iVar5 - iVar7;
      local_14 = local_28 + iVar12;
      local_8 = iVar9 - iVar11;
      iVar7 = iVar11 + iVar9 + local_14;
      local_c = (local_8 + (iVar12 - local_28)) * 0x1d9 >> 8;
      iVar8 = (((iVar12 - local_28) * -0x29d >> 8) - iVar7) + local_c;
      iVar11 = (((iVar11 + iVar9) - local_14) * 0x16a >> 8) - iVar8;
      iVar9 = ((local_8 * 0x115 >> 8) - local_c) + iVar11;
      *puVar3 = *(undefined1 *)((iVar7 + iVar13 >> 5 & 0x3ffU) + iVar10);
      puVar3[7] = *(undefined1 *)((iVar13 - iVar7 >> 5 & 0x3ffU) + iVar10);
      puVar3[1] = *(undefined1 *)((iVar8 + local_24 >> 5 & 0x3ffU) + iVar10);
      puVar3[6] = *(undefined1 *)((local_24 - iVar8 >> 5 & 0x3ffU) + iVar10);
      puVar3[2] = *(undefined1 *)((iVar11 + iVar5 >> 5 & 0x3ffU) + iVar10);
      puVar3[5] = *(undefined1 *)((iVar5 - iVar11 >> 5 & 0x3ffU) + iVar10);
      puVar3[4] = *(undefined1 *)((iVar9 + local_1c >> 5 & 0x3ffU) + iVar10);
      puVar3[3] = *(undefined1 *)((local_1c - iVar9 >> 5 & 0x3ffU) + iVar10);
    }
    local_18 = local_18 + 8;
    local_20 = local_20 + -1;
    local_10 = local_10 + 1;
  } while (local_20 != 0);
  return;
}

