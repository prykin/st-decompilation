
int FUN_00564f30(int param_1,int param_2,int param_3,int *param_4,int param_5,int param_6)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int local_38;
  uint local_30;
  int local_2c;
  int local_28;
  int *local_20;
  int local_1c;
  int local_18;
  int local_14;
  byte *local_c;
  int local_8;
  
  if (param_5 == DAT_0080330c) {
    local_1c = DAT_008032f4;
    iVar3 = *(int *)(DAT_008032fc + param_3 * 4);
    DAT_00803398 = DAT_00803314;
  }
  else {
    local_1c = DAT_008032f8;
    iVar3 = *(int *)(DAT_008033b8 + param_3 * 4);
    DAT_00803398 = DAT_0080337c;
  }
  iVar2 = (int)(param_3 * 0x168 + (param_3 * 0x168 >> 0x1f & 0xfU)) >> 4;
  uVar7 = (int)param_4 - param_3 >> 0x1f;
  local_38 = ((int)param_4 - param_3 ^ uVar7) - uVar7;
  if (8 < local_38) {
    local_38 = 0x10 - local_38;
  }
  local_8 = *(int *)(iVar3 + 0xc) + param_2;
  uVar7 = 0;
  local_2c = 0;
  local_18 = 0;
  param_4 = (int *)(DAT_00803380 + local_8 * DAT_008033a4 * 2);
  iVar11 = 0;
  local_14 = 0;
  if (0 < *(int *)(iVar3 + 0x10)) {
    local_20 = (int *)(iVar3 + 0x14);
    do {
      if ((-1 < local_8) && (local_8 < DAT_008033a8)) {
        iVar5 = *local_20 + param_1;
        if (iVar5 <= local_20[1] + param_1) {
          pbVar8 = (byte *)((int)param_4 + iVar5 * 2);
          do {
            if ((-1 < iVar5) && (iVar5 < DAT_008033a4)) {
              local_2c = local_2c + (*pbVar8 & 7) + (uint)(*pbVar8 >> 4) * -2;
              if (uVar7 < pbVar8[1]) {
                uVar7 = (uint)pbVar8[1];
                local_18 = iVar5;
                local_14 = iVar11;
              }
            }
            iVar5 = iVar5 + 1;
            pbVar8 = pbVar8 + 2;
          } while (iVar5 <= local_20[1] + param_1);
        }
      }
      local_20 = local_20 + 2;
      iVar11 = iVar11 + 1;
      local_8 = local_8 + 1;
      param_4 = (int *)((int)param_4 + DAT_008033a4 * 2);
    } while (iVar11 < *(int *)(iVar3 + 0x10));
  }
  iVar3 = thunk_FUN_0055de60(DAT_00803304,DAT_00803308,param_1,param_2);
  iVar11 = (DAT_00803384 + 2) * DAT_00803320;
  if (iVar3 < iVar11) {
    iVar3 = iVar11;
  }
  local_8 = (int)(iVar3 * uVar7) / DAT_00803390;
  piVar10 = *(int **)(DAT_008033b0 + param_3 * 4);
  iVar3 = FUN_006db6d0(iVar2);
  iVar11 = FUN_006db640(iVar2);
  local_28 = param_2 * 0x10000 - DAT_00803354 * -iVar11 >> 0x10;
  iVar12 = param_1 * 0x10000 - DAT_00803354 * iVar3 >> 0x10;
  iVar5 = FUN_006acf90(iVar12,local_28,DAT_00803304,DAT_00803308);
  if (iVar5 < DAT_00803358) {
    local_8 = local_8 * 2;
  }
  else {
    uVar7 = 0;
    local_30 = 0;
    local_28 = local_28 + piVar10[3];
    param_4 = (int *)(DAT_00803380 + local_28 * DAT_008033a4 * 2);
    iVar5 = 0;
    if (0 < piVar10[4]) {
      piVar6 = piVar10 + 5;
      do {
        if ((-1 < local_28) && (local_28 < DAT_008033a8)) {
          iVar4 = iVar12 + *piVar6;
          if (iVar4 <= piVar6[1] + iVar12) {
            local_c = (byte *)((int)param_4 + iVar4 * 2 + 1);
            do {
              if (((-1 < iVar4) && (iVar4 < DAT_008033a4)) &&
                 (uVar9 = (uint)*local_c, uVar7 = local_30, local_30 < uVar9)) {
                uVar7 = uVar9;
                local_30 = uVar9;
                local_18 = iVar4;
                local_14 = iVar5;
              }
              iVar4 = iVar4 + 1;
              local_c = local_c + 2;
            } while (iVar4 <= piVar6[1] + iVar12);
          }
        }
        iVar5 = iVar5 + 1;
        local_28 = local_28 + 1;
        piVar6 = piVar6 + 2;
        param_4 = (int *)((int)param_4 + DAT_008033a4 * 2);
      } while (iVar5 < piVar10[4]);
    }
    iVar5 = thunk_FUN_0055de60(DAT_00803304,DAT_00803308,local_18,local_14);
    iVar12 = (DAT_00803384 + 2) * DAT_00803320;
    if (iVar5 < iVar12) {
      iVar5 = iVar12;
    }
    local_8 = local_8 + (int)(uVar7 * iVar5) / DAT_00803390;
  }
  local_28 = (DAT_00803354 * -iVar11 + param_2 * 0x10000 >> 0x10) + piVar10[3];
  uVar7 = 0;
  iVar3 = DAT_00803354 * iVar3 + param_1 * 0x10000 >> 0x10;
  param_4 = (int *)(DAT_00803380 + local_28 * DAT_008033a4 * 2);
  iVar11 = 0;
  if (0 < piVar10[4]) {
    piVar6 = piVar10 + 5;
    do {
      if ((-1 < local_28) && (local_28 < DAT_008033a8)) {
        iVar5 = iVar3 + *piVar6;
        iVar12 = piVar6[1] + iVar3;
        if (iVar5 <= iVar12) {
          pbVar8 = (byte *)((int)param_4 + iVar5 * 2 + 1);
          do {
            if (((-1 < iVar5) && (iVar5 < DAT_008033a4)) && (uVar7 < *pbVar8)) {
              uVar7 = (uint)*pbVar8;
              local_18 = iVar5;
              local_14 = iVar11;
            }
            iVar5 = iVar5 + 1;
            pbVar8 = pbVar8 + 2;
          } while (iVar5 <= iVar12);
        }
      }
      iVar11 = iVar11 + 1;
      local_28 = local_28 + 1;
      piVar6 = piVar6 + 2;
      param_4 = (int *)((int)param_4 + DAT_008033a4 * 2);
    } while (iVar11 < piVar10[4]);
  }
  iVar3 = thunk_FUN_0055de60(DAT_00803304,DAT_00803308,local_18,local_14);
  iVar11 = (DAT_00803384 + 2) * DAT_00803320;
  if (iVar3 < iVar11) {
    iVar3 = iVar11;
  }
  iVar5 = (int)(uVar7 * iVar3) / DAT_00803390;
  iVar3 = *piVar10 * 5;
  iVar11 = iVar3 / 3 + ((param_6 - DAT_00803384) * *piVar10 * 5) / 10;
  if (iVar11 < 1) {
    iVar3 = 0;
  }
  else {
    if (iVar3 < iVar11) {
      iVar11 = iVar3;
    }
    uVar7 = local_2c - iVar11 >> 0x1f;
    iVar3 = 100 - (int)(((local_2c - iVar11 ^ uVar7) - uVar7) * 100) / iVar3;
  }
  iVar11 = thunk_FUN_0055de60(DAT_00803304,DAT_00803308,param_1,param_2);
  iVar12 = 0;
  sVar1 = *(short *)(DAT_008033b4 + (DAT_008033a4 * param_2 + param_1) * 2);
  if ((sVar1 != 0) && (sVar1 != -1)) {
    iVar12 = ((DAT_0080339c * DAT_00803320 + (int)sVar1) - iVar11) + -1;
  }
  iVar11 = FUN_00562cd0(param_1,param_2,param_3);
  iVar3 = ((DAT_00803388 * DAT_00803340 - DAT_0080333c * iVar12) - DAT_00803338 * local_38) +
          DAT_00803334 * iVar11 + DAT_00803330 * (local_8 + iVar5) + DAT_0080332c * iVar3;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  iVar5 = 0;
  param_6 = 100;
  local_2c = DAT_00803398;
  iVar11 = DAT_00803398;
  if (0 < DAT_00803398) {
    piVar10 = (int *)(local_1c + 0xc);
    do {
      uVar9 = piVar10[-3] - param_1 >> 0x1f;
      uVar7 = piVar10[-3] - param_1 ^ uVar9;
      iVar12 = param_6;
      if (((uVar7 == uVar9 || (int)(uVar7 - uVar9) < 0) &&
          (uVar9 = piVar10[-2] - param_2 >> 0x1f, uVar7 = piVar10[-2] - param_2 ^ uVar9,
          uVar7 == uVar9 || (int)(uVar7 - uVar9) < 0)) &&
         (((uVar7 = piVar10[-1] - iVar2 >> 0x1f, iVar4 = (piVar10[-1] - iVar2 ^ uVar7) - uVar7,
           iVar4 < 0x18 || (0x150 < iVar4)) && (iVar12 = iVar5, iVar3 <= *piVar10)))) {
        local_2c = 100;
        break;
      }
      param_6 = iVar12;
      iVar12 = iVar5;
      if (((*piVar10 < iVar3) || (iVar12 = local_2c, DAT_00803398 == iVar5)) || (param_6 == iVar5))
      {
        local_2c = iVar12;
        iVar5 = iVar5 + 1;
        if (iVar5 < DAT_00803398) {
          piVar10 = (int *)(local_1c + 8 + iVar5 * 0x14);
          param_3 = iVar5;
          param_4 = piVar10;
          do {
            uVar7 = piVar10[-2] - param_1;
            uVar9 = (int)uVar7 >> 0x1f;
            uVar7 = uVar7 ^ uVar9;
            if (((uVar7 == uVar9 || (int)(uVar7 - uVar9) < 0) &&
                (uVar9 = piVar10[-1] - param_2 >> 0x1f, uVar7 = piVar10[-1] - param_2 ^ uVar9,
                uVar7 == uVar9 || (int)(uVar7 - uVar9) < 0)) &&
               ((uVar7 = *piVar10 - iVar2 >> 0x1f, iVar12 = (*piVar10 - iVar2 ^ uVar7) - uVar7,
                iVar12 < 0x18 || (0x150 < iVar12)))) {
              if (iVar5 < iVar11 + -1) {
                piVar6 = param_4 + 3;
                piVar13 = piVar10 + -2;
                for (uVar7 = ((iVar11 - param_3) + -1) * 5 & 0x3fffffff; uVar7 != 0;
                    uVar7 = uVar7 - 1) {
                  *piVar13 = *piVar6;
                  piVar6 = piVar6 + 1;
                  piVar13 = piVar13 + 1;
                }
                for (iVar12 = 0; iVar11 = DAT_00803398, piVar10 = param_4, iVar5 = param_3,
                    iVar12 != 0; iVar12 = iVar12 + -1) {
                  *(char *)piVar13 = (char)*piVar6;
                  piVar6 = (int *)((int)piVar6 + 1);
                  piVar13 = (int *)((int)piVar13 + 1);
                }
              }
              iVar11 = iVar11 + -1;
              DAT_00803398 = iVar11;
            }
            else {
              iVar5 = iVar5 + 1;
              piVar10 = piVar10 + 5;
              param_3 = iVar5;
              param_4 = piVar10;
            }
          } while (iVar5 < iVar11);
        }
        break;
      }
      iVar5 = iVar5 + 1;
      piVar10 = piVar10 + 5;
    } while (iVar5 < DAT_00803398);
  }
  iVar5 = param_6;
  if (iVar11 <= param_6) {
    iVar5 = local_2c;
  }
  if (iVar5 < 100) {
    if (iVar11 <= param_6) {
      if (99 < iVar11) {
        iVar11 = 99;
        DAT_00803398 = 99;
      }
      if (iVar5 < iVar11) {
        FUN_0072da70((undefined4 *)(local_1c + (iVar5 * 5 + 5) * 4),
                     (undefined4 *)(iVar5 * 0x14 + local_1c),iVar11 * 0x14 + iVar5 * -0x14);
        iVar11 = DAT_00803398;
      }
      DAT_00803398 = iVar11 + 1;
    }
    piVar10 = (int *)(local_1c + iVar5 * 0x14);
    *piVar10 = param_1;
    piVar10[1] = param_2;
    piVar10[2] = iVar2;
    piVar10[3] = iVar3;
    iVar11 = DAT_00803398;
  }
  else {
    iVar3 = -1;
  }
  if (param_5 != DAT_0080330c) {
    DAT_0080337c = iVar11;
    return iVar3;
  }
  DAT_00803314 = iVar11;
  return iVar3;
}

