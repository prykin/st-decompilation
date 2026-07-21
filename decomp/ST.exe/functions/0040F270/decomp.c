
undefined4
FUN_0040f270(int *param_1,int *param_2,int *param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_30;
  int local_1c;
  int local_14;
  int local_10;
  int local_c;

  iVar1 = *param_1;
  iVar2 = *param_2;
  iVar3 = *param_3;
  iVar7 = DAT_007f4d30 * DAT_007f4d2c;
  local_1c = 30000;
  local_14 = 30000;
  local_10 = -1;
  local_c = 1;
  pcVar4 = DAT_007f4d50;
  if (1 < DAT_007f4d44) {
    do {
      if ((-1 < local_10) && (local_30 < pcVar4[7])) break;
      iVar10 = pcVar4[5] + iVar2;
      iVar9 = pcVar4[4] + iVar1;
      iVar8 = pcVar4[6] + iVar3;
      if ((((-1 < iVar8) &&
           ((((iVar8 < DAT_007f4d34 && (-1 < iVar9)) && (iVar9 < DAT_007f4d2c)) &&
            ((-1 < iVar10 && (iVar10 < DAT_007f4d30)))))) &&
          (uVar5 = iVar8 * iVar7 + iVar9 + DAT_007f4d2c * iVar10,
          *(short *)(DAT_007f4cf0 + uVar5 * 2) == 0)) &&
         (uVar5 = uVar5 ^ 7, (*(byte *)(DAT_007f4cfc + ((int)uVar5 >> 3)) >> (uVar5 & 7) & 1) == 0))
      {
        iVar6 = FUN_006aadd0(iVar9,iVar10,iVar8,param_7,param_8,param_9);
        iVar8 = FUN_006aadd0(iVar9,iVar10,iVar8,param_4,param_5,param_6);
        if ((iVar8 < local_14) || ((iVar8 == local_14 && (iVar6 < local_1c)))) {
          local_10 = local_c;
          local_30 = (int)pcVar4[7];
          local_1c = iVar6;
          local_14 = iVar8;
        }
      }
      local_c = local_c + 1;
      pcVar4 = pcVar4 + 4;
    } while (local_c < DAT_007f4d44);
    if (-1 < local_10) {
      *param_1 = DAT_007f4d50[local_10 * 4] + iVar1;
      *param_2 = DAT_007f4d50[local_10 * 4 + 1] + iVar2;
      *param_3 = DAT_007f4d50[local_10 * 4 + 2] + iVar3;
      return 0;
    }
  }
  return 0xfffffffc;
}

