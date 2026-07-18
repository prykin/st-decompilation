
void FUN_007611c0(int param_1,int param_2,int *param_3,int *param_4,int param_5)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int local_a0 [8];
  int local_80 [24];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int *local_10;
  int local_c;
  int local_8;
  
  piVar8 = *(int **)(param_2 + 0x50);
  local_14 = *(int *)(param_1 + 0x132) + 0x80;
  local_c = 8;
  piVar7 = local_80;
  piVar2 = param_3 + 0x30;
  do {
    if (local_c != 4) {
      local_20 = piVar2[-0x28];
      local_18 = piVar2[-0x18];
      if (((((local_20 == 0 && local_18 == 0) && piVar2[-8] == 0) && piVar2[8] == 0) &&
          piVar2[-0x20] == 0) && *piVar2 == 0) {
        iVar4 = piVar2[-0x30] * *piVar8 * 4;
        piVar7[-8] = iVar4;
        *piVar7 = iVar4;
        piVar7[8] = iVar4;
        piVar7[0x10] = iVar4;
      }
      else {
        iVar3 = piVar2[-0x30] * *piVar8 * 0x4000;
        iVar5 = piVar8[0x10] * piVar2[-0x20] * 0x3b21 + piVar8[0x30] * *piVar2 * -0x187e;
        iVar4 = iVar5 + iVar3;
        iVar6 = piVar8[0x38] * piVar2[8];
        local_1c = iVar3 - iVar5;
        iVar3 = piVar8[0x28] * piVar2[-8];
        iVar5 = iVar3 * 0x2e75 + piVar8[0x18] * local_18 * -0x4587 + piVar8[8] * local_20 * 0x21f9 +
                iVar6 * -0x6c2;
        iVar3 = piVar8[8] * local_20 * 0x5203 + piVar8[0x18] * local_18 * 0x1ccd + iVar3 * -0x133e +
                iVar6 * -0x1050;
        piVar7[-8] = iVar4 + 0x800 + iVar3 >> 0xc;
        piVar7[0x10] = (iVar4 - iVar3) + 0x800 >> 0xc;
        piVar7[8] = (local_1c - iVar5) + 0x800 >> 0xc;
        *piVar7 = local_1c + 0x800 + iVar5 >> 0xc;
      }
    }
    piVar8 = piVar8 + 1;
    piVar2 = piVar2 + 1;
    piVar7 = piVar7 + 1;
    local_c = local_c + -1;
    local_10 = piVar7;
  } while (0 < local_c);
  piVar7 = local_a0;
  param_3 = param_4;
  local_8 = 4;
  do {
    local_c = piVar7[3];
    iVar4 = piVar7[1];
    local_10 = (int *)(param_5 + *param_3);
    iVar3 = piVar7[7];
    iVar5 = piVar7[5];
    if (((((iVar4 == 0 && piVar7[2] == 0) && local_c == 0) && iVar5 == 0) && piVar7[6] == 0) &&
        iVar3 == 0) {
      uVar1 = *(undefined1 *)((*piVar7 + 0x10 >> 5 & 0x3ffU) + local_14);
      *(undefined1 *)local_10 = uVar1;
      *(undefined1 *)((int)local_10 + 1) = uVar1;
      *(undefined1 *)((int)local_10 + 2) = uVar1;
      *(undefined1 *)((int)local_10 + 3) = uVar1;
    }
    else {
      iVar9 = piVar7[2] * 0x3b21 + piVar7[6] * -0x187e;
      iVar6 = iVar9 + *piVar7 * 0x4000;
      iVar9 = *piVar7 * 0x4000 - iVar9;
      iVar10 = iVar5 * 0x2e75 + local_c * -0x4587 + iVar4 * 0x21f9 + iVar3 * -0x6c2;
      iVar4 = iVar4 * 0x5203 + local_c * 0x1ccd + iVar5 * -0x133e + iVar3 * -0x1050;
      *(undefined1 *)local_10 =
           *(undefined1 *)((iVar6 + 0x40000 + iVar4 >> 0x13 & 0x3ffU) + local_14);
      *(undefined1 *)((int)local_10 + 3) =
           *(undefined1 *)(((iVar6 - iVar4) + 0x40000 >> 0x13 & 0x3ffU) + local_14);
      *(undefined1 *)((int)local_10 + 1) =
           *(undefined1 *)((iVar9 + 0x40000 + iVar10 >> 0x13 & 0x3ffU) + local_14);
      *(undefined1 *)((int)local_10 + 2) =
           *(undefined1 *)(((iVar9 - iVar10) + 0x40000 >> 0x13 & 0x3ffU) + local_14);
    }
    piVar7 = piVar7 + 8;
    param_3 = param_3 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return;
}

