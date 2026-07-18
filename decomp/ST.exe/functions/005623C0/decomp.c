
int FUN_005623c0(int param_1,int param_2,int param_3,int *param_4,int param_5)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  byte *pbVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  int *piVar17;
  int local_38;
  int local_34;
  int local_30;
  byte *local_28;
  int local_24;
  int local_20;
  int local_18;
  int local_14;
  int *local_10;
  int local_8;
  
  if (param_5 == DAT_0080330c) {
    local_24 = DAT_008032f4;
    iVar5 = *(int *)(param_3 * 4 + DAT_008032fc);
    DAT_00803398 = DAT_00803314;
  }
  else {
    local_24 = DAT_008032f8;
    iVar5 = *(int *)(param_3 * 4 + DAT_008033b8);
    DAT_00803398 = DAT_0080337c;
  }
  local_34 = param_3 * 4;
  iVar3 = (int)(param_3 * 0x168 + (param_3 * 0x168 >> 0x1f & 0xfU)) >> 4;
  uVar9 = (int)param_4 - param_3 >> 0x1f;
  local_38 = ((int)param_4 - param_3 ^ uVar9) - uVar9;
  if (8 < local_38) {
    local_38 = 0x10 - local_38;
  }
  local_20 = *(int *)(iVar5 + 0xc) + param_2;
  iVar16 = 0;
  uVar9 = 0;
  local_8 = 0;
  param_4 = (int *)(DAT_00803380 + local_20 * DAT_008033a4 * 2);
  local_18 = 0;
  local_14 = 0;
  if (0 < *(int *)(iVar5 + 0x10)) {
    local_10 = (int *)(iVar5 + 0x14);
    do {
      if ((-1 < local_20) && (local_20 < DAT_008033a8)) {
        iVar8 = *local_10 + param_1;
        if (iVar8 <= local_10[1] + param_1) {
          pbVar13 = (byte *)((int)param_4 + iVar8 * 2);
          do {
            if ((-1 < iVar8) && (iVar8 < DAT_008033a4)) {
              bVar1 = *pbVar13;
              if ((bVar1 & 7) < 3) {
                iVar4 = (bVar1 & 7) + (uint)(bVar1 >> 4) * -2;
              }
              else {
                iVar4 = (uint)(bVar1 >> 4) * -2 + 5;
              }
              local_8 = local_8 + iVar4;
              if (uVar9 < pbVar13[1]) {
                uVar9 = (uint)pbVar13[1];
                local_18 = iVar8;
                local_14 = iVar16;
              }
            }
            iVar8 = iVar8 + 1;
            pbVar13 = pbVar13 + 2;
          } while (iVar8 <= local_10[1] + param_1);
        }
      }
      local_10 = local_10 + 2;
      iVar16 = iVar16 + 1;
      local_20 = local_20 + 1;
      param_4 = (int *)((int)param_4 + DAT_008033a4 * 2);
    } while (iVar16 < *(int *)(iVar5 + 0x10));
  }
  iVar5 = thunk_FUN_0055de60(DAT_00803304,DAT_00803308,local_18,local_14);
  iVar16 = (DAT_00803384 + 2) * DAT_00803320;
  if (iVar5 < iVar16) {
    iVar5 = iVar16;
  }
  iVar16 = (int)(iVar5 * uVar9) / DAT_00803390;
  piVar15 = *(int **)(local_34 + DAT_008033b0);
  iVar8 = FUN_006db6d0(iVar3);
  iVar4 = FUN_006db640(iVar3);
  iVar5 = param_2 * 0x10000 - DAT_00803354 * -iVar4 >> 0x10;
  iVar11 = param_1 * 0x10000 - DAT_00803354 * iVar8 >> 0x10;
  iVar6 = FUN_006acf90(iVar11,iVar5,DAT_00803304,DAT_00803308);
  if (iVar6 < DAT_00803358) {
    iVar16 = iVar16 * 2;
  }
  else {
    local_10 = (int *)0x0;
    iVar5 = piVar15[3] + iVar5;
    iVar6 = DAT_00803380 + iVar5 * DAT_008033a4 * 2;
    iVar14 = 0;
    if (0 < piVar15[4]) {
      piVar12 = piVar15 + 5;
      do {
        if ((-1 < iVar5) && (iVar5 < DAT_008033a8)) {
          iVar7 = iVar11 + *piVar12;
          if (iVar7 <= piVar12[1] + iVar11) {
            local_28 = (byte *)(iVar6 + 1 + iVar7 * 2);
            do {
              if (((-1 < iVar7) && (iVar7 < DAT_008033a4)) && (local_10 < (uint)*local_28)) {
                local_18 = iVar7;
                local_14 = iVar14;
                local_10 = (int *)(uint)*local_28;
              }
              iVar7 = iVar7 + 1;
              local_28 = local_28 + 2;
            } while (iVar7 <= piVar12[1] + iVar11);
          }
        }
        iVar14 = iVar14 + 1;
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + DAT_008033a4 * 2;
        piVar12 = piVar12 + 2;
      } while (iVar14 < piVar15[4]);
    }
    iVar5 = thunk_FUN_0055de60(DAT_00803304,DAT_00803308,local_18,local_14);
    iVar6 = (DAT_00803384 + 2) * DAT_00803320;
    if (iVar5 < iVar6) {
      iVar5 = iVar6;
    }
    iVar16 = iVar16 + ((int)local_10 * iVar5) / DAT_00803390;
  }
  local_30 = (DAT_00803354 * -iVar4 + param_2 * 0x10000 >> 0x10) + piVar15[3];
  piVar12 = (int *)0x0;
  param_4 = (int *)(DAT_00803380 + local_30 * DAT_008033a4 * 2);
  local_10 = (int *)0x0;
  iVar4 = 0;
  iVar5 = DAT_00803354 * iVar8 + param_1 * 0x10000 >> 0x10;
  if (0 < piVar15[4]) {
    piVar17 = piVar15 + 5;
    do {
      if ((-1 < local_30) && (local_30 < DAT_008033a8)) {
        iVar6 = piVar17[1] + iVar5;
        iVar8 = *piVar17 + iVar5;
        if (iVar8 <= iVar6) {
          pbVar13 = (byte *)((int)param_4 + iVar8 * 2 + 1);
          do {
            if ((-1 < iVar8) && (iVar8 < DAT_008033a4)) {
              if (piVar12 < (uint)*pbVar13) {
                local_18 = iVar8;
                local_14 = iVar4;
                local_10 = (int *)(uint)*pbVar13;
              }
              local_8 = local_8 + (uint)(pbVar13[-1] >> 4) * -2;
              piVar12 = local_10;
            }
            iVar8 = iVar8 + 1;
            pbVar13 = pbVar13 + 2;
          } while (iVar8 <= iVar6);
        }
      }
      iVar4 = iVar4 + 1;
      local_30 = local_30 + 1;
      piVar17 = piVar17 + 2;
      param_4 = (int *)((int)param_4 + DAT_008033a4 * 2);
    } while (iVar4 < piVar15[4]);
  }
  iVar5 = thunk_FUN_0055de60(DAT_00803304,DAT_00803308,local_18,local_14);
  iVar8 = (DAT_00803384 + 2) * DAT_00803320;
  if (iVar5 < iVar8) {
    iVar5 = iVar8;
  }
  iVar5 = ((int)piVar12 * iVar5) / DAT_00803390;
  iVar8 = thunk_FUN_0055de60(DAT_00803304,DAT_00803308,param_1,param_2);
  iVar4 = 0;
  sVar2 = *(short *)(DAT_008033b4 + (DAT_008033a4 * param_2 + param_1) * 2);
  if ((sVar2 != 0) && (sVar2 != -1)) {
    iVar4 = ((DAT_0080339c * DAT_00803320 + (int)sVar2) - iVar8) + -1;
  }
  iVar8 = *piVar15;
  iVar6 = FUN_00562cd0(param_1,param_2,param_3);
  iVar5 = ((DAT_00803388 * DAT_00803340 - DAT_0080333c * iVar4) - DAT_00803338 * local_38) +
          DAT_00803334 * iVar6 + DAT_00803330 * (iVar16 + iVar5) +
          DAT_0080332c * ((local_8 * 0x19) / iVar8);
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  iVar8 = 0;
  local_34 = 100;
  local_30 = DAT_00803398;
  iVar16 = DAT_00803398;
  if (0 < DAT_00803398) {
    piVar15 = (int *)(local_24 + 0xc);
    do {
      uVar10 = piVar15[-3] - param_1 >> 0x1f;
      uVar9 = piVar15[-3] - param_1 ^ uVar10;
      iVar4 = local_34;
      if ((((uVar9 == uVar10 || (int)(uVar9 - uVar10) < 0) &&
           (uVar10 = piVar15[-2] - param_2 >> 0x1f, uVar9 = piVar15[-2] - param_2 ^ uVar10,
           uVar9 == uVar10 || (int)(uVar9 - uVar10) < 0)) &&
          ((uVar9 = piVar15[-1] - iVar3 >> 0x1f, iVar6 = (piVar15[-1] - iVar3 ^ uVar9) - uVar9,
           iVar6 < 0x18 || (0x150 < iVar6)))) && (iVar4 = iVar8, iVar5 <= *piVar15)) {
        local_30 = 100;
        break;
      }
      local_34 = iVar4;
      iVar4 = iVar8;
      if (((*piVar15 < iVar5) || (iVar4 = local_30, DAT_00803398 == iVar8)) || (local_34 == iVar8))
      {
        local_30 = iVar4;
        iVar8 = iVar8 + 1;
        if (iVar8 < DAT_00803398) {
          piVar15 = (int *)(local_24 + 8 + iVar8 * 0x14);
          param_3 = iVar8;
          param_4 = piVar15;
          do {
            uVar9 = piVar15[-2] - param_1;
            uVar10 = (int)uVar9 >> 0x1f;
            uVar9 = uVar9 ^ uVar10;
            if (((uVar9 == uVar10 || (int)(uVar9 - uVar10) < 0) &&
                (uVar10 = piVar15[-1] - param_2 >> 0x1f, uVar9 = piVar15[-1] - param_2 ^ uVar10,
                uVar9 == uVar10 || (int)(uVar9 - uVar10) < 0)) &&
               ((uVar9 = *piVar15 - iVar3 >> 0x1f, iVar4 = (*piVar15 - iVar3 ^ uVar9) - uVar9,
                iVar4 < 0x18 || (0x150 < iVar4)))) {
              if (iVar8 < iVar16 + -1) {
                piVar12 = param_4 + 3;
                piVar17 = piVar15 + -2;
                for (uVar9 = ((iVar16 - param_3) + -1) * 5 & 0x3fffffff; uVar9 != 0;
                    uVar9 = uVar9 - 1) {
                  *piVar17 = *piVar12;
                  piVar12 = piVar12 + 1;
                  piVar17 = piVar17 + 1;
                }
                for (iVar4 = 0; iVar16 = DAT_00803398, piVar15 = param_4, iVar8 = param_3,
                    iVar4 != 0; iVar4 = iVar4 + -1) {
                  *(char *)piVar17 = (char)*piVar12;
                  piVar12 = (int *)((int)piVar12 + 1);
                  piVar17 = (int *)((int)piVar17 + 1);
                }
              }
              iVar16 = iVar16 + -1;
              DAT_00803398 = iVar16;
            }
            else {
              iVar8 = iVar8 + 1;
              piVar15 = piVar15 + 5;
              param_3 = iVar8;
              param_4 = piVar15;
            }
          } while (iVar8 < iVar16);
        }
        break;
      }
      iVar8 = iVar8 + 1;
      piVar15 = piVar15 + 5;
    } while (iVar8 < DAT_00803398);
  }
  iVar8 = local_34;
  if (iVar16 <= local_34) {
    iVar8 = local_30;
  }
  if (iVar8 < 100) {
    if (iVar16 <= local_34) {
      if (99 < iVar16) {
        iVar16 = 99;
        DAT_00803398 = 99;
      }
      if (iVar8 < iVar16) {
        FUN_0072da70((undefined4 *)(local_24 + (iVar8 * 5 + 5) * 4),
                     (undefined4 *)(iVar8 * 0x14 + local_24),iVar16 * 0x14 + iVar8 * -0x14);
        iVar16 = DAT_00803398;
      }
      DAT_00803398 = iVar16 + 1;
    }
    piVar15 = (int *)(local_24 + iVar8 * 0x14);
    *piVar15 = param_1;
    piVar15[1] = param_2;
    piVar15[2] = iVar3;
    piVar15[3] = iVar5;
    iVar16 = DAT_00803398;
  }
  else {
    iVar5 = -1;
  }
  if (param_5 != DAT_0080330c) {
    DAT_0080337c = iVar16;
    return iVar5;
  }
  DAT_00803314 = iVar16;
  return iVar5;
}

