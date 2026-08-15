
int FUN_005623c0(int param_1,int param_2,int param_3,int *param_4,int param_5)

{
  RuntimeRecord_008032F4_0014 *pRVar1;
  byte bVar2;
  short sVar3;
  int iVar7;
  int iVar8;
  int local_EAX_437;
  int iVar4;
  int local_EAX_574;
  int iVar9;
  int iVar5;
  int local_EAX_1115;
  int iVar6;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int *piVar15;
  byte *pbVar16;
  int iVar17;
  int *piVar18;
  int iVar19;
  int *piVar20;
  int local_38;
  int local_34;
  int local_30;
  byte *local_28;
  RuntimeRecord_008032F4_0014 *local_24_mg1;
  int local_20;
  int local_18;
  int local_14;
  int *local_10;
  int local_8;

  if (param_5 == DAT_0080330c) {
    local_24_mg1 = g_runtimeRecords_008032F4;
    iVar11 = *(int *)(param_3 * 4 + (int)PTR_008032fc);
    DAT_00803398 = DAT_00803314;
  }
  else {
    local_24_mg1 = (RuntimeRecord_008032F4_0014 *)g_runtimeRecords_008032F8;
    iVar11 = *(int *)(param_3 * 4 + (int)PTR_008033b8);
    DAT_00803398 = DAT_0080337c;
  }
  local_34 = param_3 * 4;
  iVar7 = (int)(param_3 * 0x168 + (param_3 * 0x168 >> 0x1f & 0xfU)) >> 4;
  uVar12 = (int)param_4 - param_3 >> 0x1f;
  local_38 = ((int)param_4 - param_3 ^ uVar12) - uVar12;
  if (8 < local_38) {
    local_38 = 0x10 - local_38;
  }
  local_20 = *(int *)(iVar11 + 0xc) + param_2;
  iVar19 = 0;
  uVar12 = 0;
  local_8 = 0;
  int scalar_param_4 = DAT_00803380 + local_20 * DAT_008033a4 * 2; /* split integer lifetime from pointer-typed SSA storage */
  local_18 = 0;
  local_14 = 0;
  if (0 < *(int *)(iVar11 + 0x10)) {
    local_10 = (int *)(iVar11 + 0x14);
    do {
      if ((-1 < local_20) && (local_20 < DAT_008033a8)) {
        iVar10 = *local_10 + param_1;
        if (iVar10 <= local_10[1] + param_1) {
          pbVar16 = (byte *)(scalar_param_4 + iVar10 * 2);
          do {
            if ((-1 < iVar10) && (iVar10 < DAT_008033a4)) {
              bVar2 = *pbVar16;
              if ((bVar2 & 7) < 3) {
                iVar8 = (bVar2 & 7) + (uint)(bVar2 >> 4) * -2;
              }
              else {
                iVar8 = (uint)(bVar2 >> 4) * -2 + 5;
              }
              local_8 = local_8 + iVar8;
              if (uVar12 < pbVar16[1]) {
                uVar12 = (uint)pbVar16[1];
                local_18 = iVar10;
                local_14 = iVar19;
              }
            }
            iVar10 = iVar10 + 1;
            pbVar16 = pbVar16 + 2;
          } while (iVar10 <= local_10[1] + param_1);
        }
      }
      local_10 = local_10 + 2;
      iVar19 = iVar19 + 1;
      local_20 = local_20 + 1;
      param_4 = (int *)((int)param_4 + DAT_008033a4 * 2);
    } while (iVar19 < *(int *)(iVar11 + 0x10));
  }
  local_EAX_437 = thunk_FUN_0055de60(DAT_00803304,DAT_00803308,local_18,local_14);
  iVar11 = (DAT_00803384 + 2) * DAT_00803320;
  if (local_EAX_437 < iVar11) {
    local_EAX_437 = iVar11;
  }
  iVar19 = (int)(local_EAX_437 * uVar12) / DAT_00803390;
  piVar18 = *(int **)(local_34 + (int)PTR_008033b0);
  iVar10 = FUN_006db6d0(iVar7);
  iVar4 = Library::DKW::STR::FUN_006db640(iVar7);
  iVar11 = param_2 * 0x10000 - DAT_00803354 * -iVar4 >> 0x10;
  iVar8 = param_1 * 0x10000 - DAT_00803354 * iVar10 >> 0x10;
  local_EAX_574 = FUN_006acf90(iVar8,iVar11,DAT_00803304,DAT_00803308);
  if (local_EAX_574 < DAT_00803358) {
    iVar19 = iVar19 * 2;
  }
  else {
    local_10 = nullptr;
    iVar11 = piVar18[3] + iVar11;
    iVar13 = DAT_00803380 + iVar11 * DAT_008033a4 * 2;
    iVar17 = 0;
    if (0 < piVar18[4]) {
      piVar15 = piVar18 + 5;
      do {
        if ((-1 < iVar11) && (iVar11 < DAT_008033a8)) {
          iVar9 = iVar8 + *piVar15;
          if (iVar9 <= piVar15[1] + iVar8) {
            local_28 = (byte *)(iVar13 + 1 + iVar9 * 2);
            do {
              if (((-1 < iVar9) && (iVar9 < DAT_008033a4)) && (local_10 < (uint)*local_28)) {
                local_18 = iVar9;
                local_14 = iVar17;
                local_10 = (int *)(uint)*local_28;
              }
              iVar9 = iVar9 + 1;
              local_28 = local_28 + 2;
            } while (iVar9 <= piVar15[1] + iVar8);
          }
        }
        iVar17 = iVar17 + 1;
        iVar11 = iVar11 + 1;
        iVar13 = iVar13 + DAT_008033a4 * 2;
        piVar15 = piVar15 + 2;
      } while (iVar17 < piVar18[4]);
    }
    iVar5 = thunk_FUN_0055de60(DAT_00803304,DAT_00803308,local_18,local_14);
    iVar11 = (DAT_00803384 + 2) * DAT_00803320;
    if (iVar5 < iVar11) {
      iVar5 = iVar11;
    }
    iVar19 = iVar19 + ((int)local_10 * iVar5) / DAT_00803390;
  }
  local_30 = (DAT_00803354 * -iVar4 + param_2 * 0x10000 >> 0x10) + piVar18[3];
  piVar15 = nullptr;
  param_4 = (int *)(DAT_00803380 + local_30 * DAT_008033a4 * 2);
  local_10 = nullptr;
  iVar8 = 0;
  iVar11 = DAT_00803354 * iVar10 + param_1 * 0x10000 >> 0x10;
  if (0 < piVar18[4]) {
    piVar20 = piVar18 + 5;
    do {
      if ((-1 < local_30) && (local_30 < DAT_008033a8)) {
        iVar13 = piVar20[1] + iVar11;
        iVar10 = *piVar20 + iVar11;
        if (iVar10 <= iVar13) {
          pbVar16 = (byte *)((int)param_4 + iVar10 * 2 + 1);
          do {
            if ((-1 < iVar10) && (iVar10 < DAT_008033a4)) {
              if (piVar15 < (uint)*pbVar16) {
                local_18 = iVar10;
                local_14 = iVar8;
                local_10 = (int *)(uint)*pbVar16;
              }
              local_8 = local_8 + (uint)(pbVar16[-1] >> 4) * -2;
              piVar15 = local_10;
            }
            iVar10 = iVar10 + 1;
            pbVar16 = pbVar16 + 2;
          } while (iVar10 <= iVar13);
        }
      }
      iVar8 = iVar8 + 1;
      local_30 = local_30 + 1;
      piVar20 = piVar20 + 2;
      param_4 = (int *)((int)param_4 + DAT_008033a4 * 2);
    } while (iVar8 < piVar18[4]);
  }
  local_EAX_1115 = thunk_FUN_0055de60(DAT_00803304,DAT_00803308,local_18,local_14);
  iVar11 = (DAT_00803384 + 2) * DAT_00803320;
  if (local_EAX_1115 < iVar11) {
    local_EAX_1115 = iVar11;
  }
  iVar11 = ((int)piVar15 * local_EAX_1115) / DAT_00803390;
  iVar10 = thunk_FUN_0055de60(DAT_00803304,DAT_00803308,param_1,param_2);
  iVar8 = 0;
  sVar3 = *(short *)((int)PTR_008033b4 + (DAT_008033a4 * param_2 + param_1) * 2);
  if ((sVar3 != 0) && (sVar3 != -1)) {
    iVar8 = ((DAT_0080339c * DAT_00803320 + (int)sVar3) - iVar10) + -1;
  }
  iVar10 = *piVar18;
  iVar6 = FUN_00562cd0(param_1,param_2,param_3);
  iVar11 = ((DAT_00803388 * DAT_00803340 - DAT_0080333c * iVar8) - DAT_00803338 * local_38) +
           DAT_00803334 * iVar6 + DAT_00803330 * (iVar19 + iVar11) +
           DAT_0080332c * ((local_8 * 0x19) / iVar10);
  if (iVar11 < 0) {
    iVar11 = 0;
  }
  iVar10 = 0;
  local_34 = 100;
  local_30 = DAT_00803398;
  iVar19 = DAT_00803398;
  if (0 < DAT_00803398) {
    piVar18 = &local_24_mg1->field_000C;
    do {
      uVar12 = ((RuntimeRecord_008032F4_0014 *)(piVar18 + -3))->field_0000 - param_1;
      uVar14 = (int)uVar12 >> 0x1f;
      uVar12 = uVar12 ^ uVar14;
      iVar8 = local_34;
      if ((((uVar12 == uVar14 || (int)(uVar12 - uVar14) < 0) &&
           (uVar14 = piVar18[-2] - param_2 >> 0x1f, uVar12 = piVar18[-2] - param_2 ^ uVar14,
           uVar12 == uVar14 || (int)(uVar12 - uVar14) < 0)) &&
          ((uVar12 = piVar18[-1] - iVar7 >> 0x1f, iVar13 = (piVar18[-1] - iVar7 ^ uVar12) - uVar12,
           iVar13 < 0x18 || (0x150 < iVar13)))) && (iVar8 = iVar10, iVar11 <= *piVar18)) {
        local_30 = 100;
        break;
      }
      local_34 = iVar8;
      iVar8 = iVar10;
      if (((*piVar18 < iVar11) || (iVar8 = local_30, DAT_00803398 == iVar10)) ||
         (local_34 == iVar10)) {
        local_30 = iVar8;
        iVar10 = iVar10 + 1;
        if (iVar10 < DAT_00803398) {
          piVar18 = (int *)&local_24_mg1[iVar10].field_0x8;
          param_3 = iVar10;
          param_4 = piVar18;
          do {
            uVar12 = piVar18[-2] - param_1;
            uVar14 = (int)uVar12 >> 0x1f;
            uVar12 = uVar12 ^ uVar14;
            if (((uVar12 == uVar14 || (int)(uVar12 - uVar14) < 0) &&
                (uVar14 = piVar18[-1] - param_2 >> 0x1f, uVar12 = piVar18[-1] - param_2 ^ uVar14,
                uVar12 == uVar14 || (int)(uVar12 - uVar14) < 0)) &&
               ((uVar12 = *piVar18 - iVar7 >> 0x1f, iVar8 = (*piVar18 - iVar7 ^ uVar12) - uVar12,
                iVar8 < 0x18 || (0x150 < iVar8)))) {
              if (iVar10 < iVar19 + -1) {
                piVar15 = param_4 + 3;
                piVar20 = piVar18 + -2;
                for (uVar12 = ((iVar19 - param_3) + -1) * 5 & 0x3fffffff; uVar12 != 0;
                    uVar12 = uVar12 - 1) {
                  *piVar20 = *piVar15;
                  piVar15 = piVar15 + 1;
                  piVar20 = piVar20 + 1;
                }
                for (iVar8 = 0; iVar19 = DAT_00803398, piVar18 = param_4, iVar10 = param_3,
                    iVar8 != 0; iVar8 = iVar8 + -1) {
                  *(char *)piVar20 = (char)*piVar15;
                  piVar15 = (int *)((int)piVar15 + 1);
                  piVar20 = (int *)((int)piVar20 + 1);
                }
              }
              iVar19 = iVar19 + -1;
              DAT_00803398 = iVar19;
            }
            else {
              iVar10 = iVar10 + 1;
              piVar18 = piVar18 + 5;
              param_3 = iVar10;
              param_4 = piVar18;
            }
          } while (iVar10 < iVar19);
        }
        break;
      }
      iVar10 = iVar10 + 1;
      piVar18 = piVar18 + 5;
    } while (iVar10 < DAT_00803398);
  }
  iVar10 = local_34;
  if (iVar19 <= local_34) {
    iVar10 = local_30;
  }
  if (iVar10 < 100) {
    if (iVar19 <= local_34) {
      if (99 < iVar19) {
        iVar19 = 99;
        DAT_00803398 = 99;
      }
      if (iVar10 < iVar19) {
        Library::MSVCRT::FUN_0072da70
                  (&local_24_mg1[iVar10 + 1].field_0000,
                   (AnonPointee_TLOBaseTy_0607 *)(local_24_mg1 + iVar10),
                   iVar19 * 0x14 + iVar10 * -0x14);
        iVar19 = DAT_00803398;
      }
      DAT_00803398 = iVar19 + 1;
    }
    pRVar1 = local_24_mg1 + iVar10;
    pRVar1->field_0000 = param_1;
    pRVar1->field_0004 = param_2;
    *(int *)&pRVar1->field_0x8 = iVar7;
    pRVar1->field_000C = iVar11;
    iVar19 = DAT_00803398;
  }
  else {
    iVar11 = -1;
  }
  if (param_5 != DAT_0080330c) {
    DAT_0080337c = iVar19;
    return iVar11;
  }
  DAT_00803314 = iVar19;
  return iVar11;
}

