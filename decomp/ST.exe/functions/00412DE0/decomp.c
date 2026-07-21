
undefined4 FUN_00412de0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int local_18;
  int local_10;
  int local_c;
  int local_8;

  iVar1 = param_1 * 4 + 2;
  iVar2 = param_2 * 4 + 2;
  iVar5 = DAT_007f4d30 * DAT_007f4d2c;
  iVar8 = 0;
  iVar3 = param_3 * 4 + 2;
  local_18 = 0;
  if (0 < DAT_007f4d20) {
    do {
      local_c = (*(int *)(iVar8 + DAT_007f4d3c) * DAT_007f4d38 + 0x8000 +
                 DAT_007f4d28 * *(int *)(iVar8 + 4 + DAT_007f4d3c) >> 0x10) + iVar1 >> 2;
      local_10 = ((DAT_007f4d38 * *(int *)(iVar8 + 4 + DAT_007f4d3c) -
                  *(int *)(iVar8 + DAT_007f4d3c) * DAT_007f4d28) + 0x8000 >> 0x10) + iVar2 >> 2;
      local_8 = *(int *)(iVar8 + 8 + DAT_007f4d3c) + iVar3 >> 2;
      if (local_8 < 0) {
        local_8 = 0;
      }
      else if (DAT_007f4d34 <= local_8) {
        local_8 = DAT_007f4d34 + -1;
      }
      if (((((local_c < 0) || (DAT_007f4d2c <= local_c)) || (local_10 < 0)) ||
          (((DAT_007f4d30 <= local_10 ||
            (uVar7 = local_c + DAT_007f4d2c * local_10 + local_8 * iVar5,
            *(short *)(DAT_007f4cf0 + uVar7 * 2) != 0)) ||
           (uVar7 = uVar7 ^ 7, (*(byte *)(DAT_007f4cfc + ((int)uVar7 >> 3)) >> (uVar7 & 7) & 1) != 0
           )))) && (iVar6 = FUN_0040f270(&local_c,&local_10,&local_8,DAT_007f4d0c >> 2,
                                         DAT_007f4d10 >> 2,DAT_007f4d1c >> 2,iVar1 >> 2,iVar2 >> 2,
                                         iVar3 >> 2), iVar6 != 0)) {
        return 0xfffffffc;
      }
      uVar7 = local_8 * iVar5 + local_c + DAT_007f4d2c * local_10 ^ 7;
      pbVar4 = (byte *)(DAT_007f4cfc + ((int)uVar7 >> 3));
      *pbVar4 = *pbVar4 | '\x01' << (uVar7 & 7);
      *(int *)(iVar8 + DAT_007f4d3c) = local_c;
      *(int *)(iVar8 + 4 + DAT_007f4d3c) = local_10;
      *(int *)(iVar8 + 8 + DAT_007f4d3c) = local_8;
      local_18 = local_18 + 1;
      iVar8 = iVar8 + 0x14;
    } while (local_18 < DAT_007f4d20);
  }
  return 0;
}

