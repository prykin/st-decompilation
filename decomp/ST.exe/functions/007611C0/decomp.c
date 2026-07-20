
void FUN_007611c0(int param_1,int param_2,int *param_3,int *param_4,int param_5)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  AnonShape_007611C0_979BF099 AVar4;
  int iVar5;
  int iVar6;
  AnonShape_007611C0_979BF099 *pAVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int local_a0 [8];
  AnonShape_007611C0_979BF099 local_80 [24];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  AnonShape_007611C0_979BF099 *local_10;
  int local_c;
  int local_8;
  
  piVar9 = *(int **)(param_2 + 0x50);
  local_14 = *(int *)(param_1 + 0x132) + 0x80;
  local_c = 8;
  pAVar7 = local_80;
  piVar2 = param_3 + 0x30;
  do {
    if (local_c != 4) {
      local_20 = piVar2[-0x28];
      local_18 = piVar2[-0x18];
      if (((((local_20 == 0 && local_18 == 0) && piVar2[-8] == 0) && piVar2[8] == 0) &&
          piVar2[-0x20] == 0) && *piVar2 == 0) {
        AVar4 = (AnonShape_007611C0_979BF099)(piVar2[-0x30] * *piVar9 * 4);
        pAVar7[-8] = AVar4;
        *pAVar7 = AVar4;
        pAVar7[8] = AVar4;
        pAVar7[0x10] = AVar4;
      }
      else {
        iVar3 = piVar2[-0x30] * *piVar9 * 0x4000;
        iVar5 = piVar9[0x10] * piVar2[-0x20] * 0x3b21 + piVar9[0x30] * *piVar2 * -0x187e;
        iVar6 = iVar5 + iVar3;
        iVar8 = piVar9[0x38] * piVar2[8];
        local_1c = iVar3 - iVar5;
        iVar3 = piVar9[0x28] * piVar2[-8];
        iVar5 = iVar3 * 0x2e75 + piVar9[0x18] * local_18 * -0x4587 + piVar9[8] * local_20 * 0x21f9 +
                iVar8 * -0x6c2;
        iVar3 = piVar9[8] * local_20 * 0x5203 + piVar9[0x18] * local_18 * 0x1ccd + iVar3 * -0x133e +
                iVar8 * -0x1050;
        pAVar7[-8] = (AnonShape_007611C0_979BF099)(iVar6 + 0x800 + iVar3 >> 0xc);
        pAVar7[0x10] = (AnonShape_007611C0_979BF099)((iVar6 - iVar3) + 0x800 >> 0xc);
        pAVar7[8] = (AnonShape_007611C0_979BF099)((local_1c - iVar5) + 0x800 >> 0xc);
        *pAVar7 = (AnonShape_007611C0_979BF099)(local_1c + 0x800 + iVar5 >> 0xc);
      }
    }
    piVar9 = piVar9 + 1;
    piVar2 = piVar2 + 1;
    pAVar7 = pAVar7 + 1;
    local_c = local_c + -1;
    local_10 = pAVar7;
  } while (0 < local_c);
  piVar2 = local_a0;
  param_3 = param_4;
  local_8 = 4;
  do {
    local_c = piVar2[3];
    iVar6 = piVar2[1];
    local_10 = (AnonShape_007611C0_979BF099 *)(param_5 + *param_3);
    iVar3 = piVar2[7];
    iVar5 = piVar2[5];
    if (((((iVar6 == 0 && piVar2[2] == 0) && local_c == 0) && iVar5 == 0) && piVar2[6] == 0) &&
        iVar3 == 0) {
      uVar1 = *(undefined1 *)((*piVar2 + 0x10 >> 5 & 0x3ffU) + local_14);
      *(undefined1 *)local_10 = uVar1;
      local_10->field_0001 = uVar1;
      local_10->field_0002 = uVar1;
      local_10->field_0003 = uVar1;
    }
    else {
      iVar10 = piVar2[2] * 0x3b21 + piVar2[6] * -0x187e;
      iVar8 = iVar10 + *piVar2 * 0x4000;
      iVar10 = *piVar2 * 0x4000 - iVar10;
      iVar11 = iVar5 * 0x2e75 + local_c * -0x4587 + iVar6 * 0x21f9 + iVar3 * -0x6c2;
      iVar6 = iVar6 * 0x5203 + local_c * 0x1ccd + iVar5 * -0x133e + iVar3 * -0x1050;
      *(undefined1 *)local_10 =
           *(undefined1 *)((iVar8 + 0x40000 + iVar6 >> 0x13 & 0x3ffU) + local_14);
      local_10->field_0003 =
           *(undefined1 *)(((iVar8 - iVar6) + 0x40000 >> 0x13 & 0x3ffU) + local_14);
      local_10->field_0001 =
           *(undefined1 *)((iVar10 + 0x40000 + iVar11 >> 0x13 & 0x3ffU) + local_14);
      local_10->field_0002 =
           *(undefined1 *)(((iVar10 - iVar11) + 0x40000 >> 0x13 & 0x3ffU) + local_14);
    }
    piVar2 = piVar2 + 8;
    param_3 = param_3 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return;
}

