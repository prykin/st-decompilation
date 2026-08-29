#include "../../pseudocode_runtime.h"


int FUN_00564f30(int param_1,int param_2,int param_3,int *param_4,int param_5,int param_6)

{
  RuntimeRecord_008032F4_0014 *pRVar1;
  short sVar2;
  int iVar4;
  int local_EAX_378;
  int iVar3;
  int iVar7;
  int iVar6;
  int local_EAX_737;
  int local_EAX_1016;
  int iVar5;
  int iVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  byte *pbVar12;
  int iVar13;
  uint uVar14;
  int *piVar15;
  int iVar16;
  int *piVar17;
  int local_38;
  uint local_30;
  int local_2c;
  int local_28;
  int *local_20;
  RuntimeRecord_008032F4_0014 *local_1c_mg1;
  int local_18;
  int local_14;
  byte *local_c;
  int local_8;

  if (param_5 == DAT_0080330c) {
    local_1c_mg1 = g_runtimeRecords_008032F4;
    iVar9 = PTR_008032fc[param_3];
    DAT_00803398 = DAT_00803314;
  }
  else {
    local_1c_mg1 = (RuntimeRecord_008032F4_0014 *)g_runtimeRecords_008032F8;
    iVar9 = PTR_008033b8[param_3];
    DAT_00803398 = DAT_0080337c;
  }
  iVar4 = (int)(param_3 * 0x168 + (param_3 * 0x168 >> 0x1f & 0xfU)) >> 4;
  uVar11 = (int)param_4 - param_3 >> 0x1f;
  local_38 = ((int)param_4 - param_3 ^ uVar11) - uVar11;
  if (8 < local_38) {
    local_38 = 0x10 - local_38;
  }
  local_8 = STField<int>(iVar9,0xC) + param_2;
  uVar11 = 0;
  local_2c = 0;
  local_18 = 0;
  int scalar_param_4 = PTR_00803380 + local_8 * DAT_008033a4 * 2; /* split integer lifetime from pointer-typed SSA storage */
  iVar16 = 0;
  local_14 = 0;
  if (0 < STField<int>(iVar9,0x10)) {
    local_20 = (int *)(iVar9 + 0x14);
    do {
      if ((-1 < local_8) && (local_8 < DAT_008033a8)) {
        iVar8 = *local_20 + param_1;
        if (iVar8 <= local_20[1] + param_1) {
          pbVar12 = (byte *)(scalar_param_4 + iVar8 * 2);
          do {
            if ((-1 < iVar8) && (iVar8 < DAT_008033a4)) {
              local_2c = local_2c + (*pbVar12 & 7) + (uint)(*pbVar12 >> 4) * -2;
              if (uVar11 < pbVar12[1]) {
                uVar11 = (uint)pbVar12[1];
                local_18 = iVar8;
                local_14 = iVar16;
              }
            }
            iVar8 = iVar8 + 1;
            pbVar12 = pbVar12 + 2;
          } while (iVar8 <= local_20[1] + param_1);
        }
      }
      local_20 = local_20 + 2;
      iVar16 = iVar16 + 1;
      local_8 = local_8 + 1;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_4 = (int *)((int)param_4 + DAT_008033a4 * 2);
    } while (iVar16 < STField<int>(iVar9,0x10));
  }

  local_EAX_378 = thunk_FUN_0055de60(DAT_00803304,DAT_00803308,param_1,param_2);
  iVar9 = (DAT_00803384 + 2) * DAT_00803320;
  if (local_EAX_378 < iVar9) {
    local_EAX_378 = iVar9;
  }
  local_8 = (int)(local_EAX_378 * uVar11) / DAT_00803390;
  piVar15 = (int *)PTR_008033b0[param_3];

  iVar3 = FUN_006db6d0(iVar4);

  iVar7 = Library::DKW::STR::FUN_006db640(iVar4);
  local_28 = param_2 * 0x10000 - DAT_00803354 * -iVar7 >> 0x10;
  iVar9 = param_1 * 0x10000 - DAT_00803354 * iVar3 >> 0x10;

  iVar6 = FUN_006acf90(iVar9,local_28,DAT_00803304,DAT_00803308);
  if (iVar6 < DAT_00803358) {
    local_8 = local_8 * 2;
  }
  else {
    uVar11 = 0;
    local_30 = 0;
    local_28 = local_28 + piVar15[3];
    param_4 = (int *)(PTR_00803380 + local_28 * DAT_008033a4 * 2);
    iVar16 = 0;
    if (0 < piVar15[4]) {
      piVar10 = piVar15 + 5;
      do {
        if ((-1 < local_28) && (local_28 < DAT_008033a8)) {
          iVar8 = iVar9 + *piVar10;
          if (iVar8 <= piVar10[1] + iVar9) {
            local_c = (byte *)((int)param_4 + iVar8 * 2 + 1);
            do {
              if (((-1 < iVar8) && (iVar8 < DAT_008033a4)) &&
                 (uVar14 = (uint)*local_c, uVar11 = local_30, local_30 < uVar14)) {
                uVar11 = uVar14;
                local_30 = uVar14;
                local_18 = iVar8;
                local_14 = iVar16;
              }
              iVar8 = iVar8 + 1;
              local_c = local_c + 2;
            } while (iVar8 <= piVar10[1] + iVar9);
          }
        }
        iVar16 = iVar16 + 1;
        local_28 = local_28 + 1;
        piVar10 = piVar10 + 2;
        param_4 = (int *)((int)param_4 + DAT_008033a4 * 2);
      } while (iVar16 < piVar15[4]);
    }

    local_EAX_737 = thunk_FUN_0055de60(DAT_00803304,DAT_00803308,local_18,local_14);
    iVar9 = (DAT_00803384 + 2) * DAT_00803320;
    if (local_EAX_737 < iVar9) {
      local_EAX_737 = iVar9;
    }
    local_8 = local_8 + (int)(uVar11 * local_EAX_737) / DAT_00803390;
  }
  local_28 = (DAT_00803354 * -iVar7 + param_2 * 0x10000 >> 0x10) + piVar15[3];
  uVar11 = 0;
  iVar9 = DAT_00803354 * iVar3 + param_1 * 0x10000 >> 0x10;
  param_4 = (int *)(PTR_00803380 + local_28 * DAT_008033a4 * 2);
  iVar16 = 0;
  if (0 < piVar15[4]) {
    piVar10 = piVar15 + 5;
    do {
      if ((-1 < local_28) && (local_28 < DAT_008033a8)) {
        iVar8 = iVar9 + *piVar10;
        iVar13 = piVar10[1] + iVar9;
        if (iVar8 <= iVar13) {
          pbVar12 = (byte *)((int)param_4 + iVar8 * 2 + 1);
          do {
            if (((-1 < iVar8) && (iVar8 < DAT_008033a4)) && (uVar11 < *pbVar12)) {
              uVar11 = (uint)*pbVar12;
              local_18 = iVar8;
              local_14 = iVar16;
            }
            iVar8 = iVar8 + 1;
            pbVar12 = pbVar12 + 2;
          } while (iVar8 <= iVar13);
        }
      }
      iVar16 = iVar16 + 1;
      local_28 = local_28 + 1;
      piVar10 = piVar10 + 2;
      param_4 = (int *)((int)param_4 + DAT_008033a4 * 2);
    } while (iVar16 < piVar15[4]);
  }

  local_EAX_1016 = thunk_FUN_0055de60(DAT_00803304,DAT_00803308,local_18,local_14);
  iVar9 = (DAT_00803384 + 2) * DAT_00803320;
  if (local_EAX_1016 < iVar9) {
    local_EAX_1016 = iVar9;
  }
  iVar8 = (int)(uVar11 * local_EAX_1016) / DAT_00803390;
  iVar9 = *piVar15 * 5;
  iVar16 = iVar9 / 3 + ((param_6 - DAT_00803384) * *piVar15 * 5) / 10;
  if (iVar16 < 1) {
    iVar9 = 0;
  }
  else {
    if (iVar9 < iVar16) {
      iVar16 = iVar9;
    }
    uVar11 = local_2c - iVar16 >> 0x1f;
    iVar9 = 100 - (int)(((local_2c - iVar16 ^ uVar11) - uVar11) * 100) / iVar9;
  }

  iVar16 = thunk_FUN_0055de60(DAT_00803304,DAT_00803308,param_1,param_2);
  iVar13 = 0;
  sVar2 = PTR_008033b4[DAT_008033a4 * param_2 + param_1];
  if ((sVar2 != 0) && (sVar2 != -1)) {
    iVar13 = ((DAT_0080339c * DAT_00803320 + (int)sVar2) - iVar16) + -1;
  }

  iVar16 = FUN_00562cd0(param_1,param_2,param_3);
  iVar9 = ((DAT_00803388 * DAT_00803340 - DAT_0080333c * iVar13) - DAT_00803338 * local_38) +
          DAT_00803334 * iVar16 + DAT_00803330 * (local_8 + iVar8) + DAT_0080332c * iVar9;
  if (iVar9 < 0) {
    iVar9 = 0;
  }
  iVar8 = 0;
  auto param_6_after_write = 100; /* compiler stack-slot lifetime split */
  local_2c = DAT_00803398;
  iVar16 = DAT_00803398;
  if (0 < DAT_00803398) {
    piVar15 = &local_1c_mg1->field_000C;
    do {
      uVar11 = ((RuntimeRecord_008032F4_0014 *)(piVar15 + -3))->field_0000 - param_1;
      uVar14 = (int)uVar11 >> 0x1f;
      uVar11 = uVar11 ^ uVar14;
      iVar13 = param_6_after_write;
      if (((uVar11 == uVar14 || (int)(uVar11 - uVar14) < 0) &&
          (uVar14 = piVar15[-2] - param_2 >> 0x1f, uVar11 = piVar15[-2] - param_2 ^ uVar14,
          uVar11 == uVar14 || (int)(uVar11 - uVar14) < 0)) &&
         (((uVar11 = piVar15[-1] - iVar4 >> 0x1f, iVar5 = (piVar15[-1] - iVar4 ^ uVar11) - uVar11,
           iVar5 < 0x18 || (0x150 < iVar5)) && (iVar13 = iVar8, iVar9 <= *piVar15)))) {
        local_2c = 100;
        break;
      }
      param_6_after_write = iVar13;
      iVar13 = iVar8;
      if (((*piVar15 < iVar9) || (iVar13 = local_2c, DAT_00803398 == iVar8)) || (param_6_after_write == iVar8))
      {
        local_2c = iVar13;
        iVar8 = iVar8 + 1;
        if (iVar8 < DAT_00803398) {
          piVar15 = (int *)&local_1c_mg1[iVar8].field_0x8;
          int param_3_after_write = iVar8; /* compiler stack-slot lifetime split */
          param_4 = piVar15;
          do {
            uVar11 = piVar15[-2] - param_1;
            uVar14 = (int)uVar11 >> 0x1f;
            uVar11 = uVar11 ^ uVar14;
            if (((uVar11 == uVar14 || (int)(uVar11 - uVar14) < 0) &&
                (uVar14 = piVar15[-1] - param_2 >> 0x1f, uVar11 = piVar15[-1] - param_2 ^ uVar14,
                uVar11 == uVar14 || (int)(uVar11 - uVar14) < 0)) &&
               ((uVar11 = *piVar15 - iVar4 >> 0x1f, iVar13 = (*piVar15 - iVar4 ^ uVar11) - uVar11,
                iVar13 < 0x18 || (0x150 < iVar13)))) {
              if (iVar8 < iVar16 + -1) {
                piVar10 = param_4 + 3;
                piVar17 = piVar15 + -2;
                for (uVar11 = ((iVar16 - param_3_after_write) + -1) * 5 & 0x3fffffff; uVar11 != 0;
                    uVar11 = uVar11 - 1) {
                  *piVar17 = *piVar10;
                  piVar10 = piVar10 + 1;
                  piVar17 = piVar17 + 1;
                }
                for (iVar13 = 0; iVar16 = DAT_00803398, piVar15 = param_4, iVar8 = param_3_after_write,
                    iVar13 != 0; iVar13 = iVar13 + -1) {
                  *(char *)piVar17 = (char)*piVar10;
                  piVar10 = (int *)((int)piVar10 + 1);
                  piVar17 = (int *)((int)piVar17 + 1);
                }
              }
              iVar16 = iVar16 + -1;
              DAT_00803398 = iVar16;
            }
            else {
              iVar8 = iVar8 + 1;
              piVar15 = piVar15 + 5;
              param_3_after_write = iVar8;
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
  iVar8 = param_6_after_write;
  if (iVar16 <= param_6_after_write) {
    iVar8 = local_2c;
  }
  if (iVar8 < 100) {
    if (iVar16 <= param_6_after_write) {
      if (99 < iVar16) {
        iVar16 = 99;
        DAT_00803398 = 99;
      }
      if (iVar8 < iVar16) {

        Library::MSVCRT::FUN_0072da70
                  ((RecoveredRecord_006BFE70_3123BCE8 *)(local_1c_mg1 + iVar8 + 1),
                   (AnonPointee_TLOBaseTy_0607 *)(local_1c_mg1 + iVar8),
                   iVar16 * 0x14 + iVar8 * -0x14);
        iVar16 = DAT_00803398;
      }
      DAT_00803398 = iVar16 + 1;
    }
    pRVar1 = local_1c_mg1 + iVar8;
    pRVar1->field_0000 = param_1;
    pRVar1->field_0004 = param_2;
    *(int *)&pRVar1->field_0x8 = iVar4;
    pRVar1->field_000C = iVar9;
    iVar16 = DAT_00803398;
  }
  else {
    iVar9 = -1;
  }
  if (param_5 != DAT_0080330c) {
    DAT_0080337c = iVar16;
    return iVar9;
  }
  DAT_00803314 = iVar16;
  return iVar9;
}

