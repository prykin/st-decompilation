#include "../../pseudocode_runtime.h"


int FUN_005623c0(int param_1,int param_2,int param_3,int *param_4,int param_5)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar7;
  int local_EAX_437;
  int iVar4;
  int local_EAX_574;
  int iVar8;
  int iVar5;
  int local_EAX_1115;
  int iVar6;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  byte *pbVar15;
  int iVar16;
  int *piVar17;
  int iVar18;
  int *piVar19;
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
    iVar10 = *(int *)(param_3 * 4 + DAT_008032fc);
    DAT_00803398 = DAT_00803314;
  }
  else {
    local_24 = DAT_008032f8;
    iVar10 = *(int *)(param_3 * 4 + DAT_008033b8);
    DAT_00803398 = DAT_0080337c;
  }
  local_34 = param_3 * 4;
  iVar3 = (int)(param_3 * 0x168 + (param_3 * 0x168 >> 0x1f & 0xfU)) >> 4;
  uVar11 = (int)param_4 - param_3 >> 0x1f;
  local_38 = ((int)param_4 - param_3 ^ uVar11) - uVar11;
  if (8 < local_38) {
    local_38 = 0x10 - local_38;
  }
  local_20 = *(int *)(iVar10 + 0xc) + param_2;
  iVar18 = 0;
  uVar11 = 0;
  local_8 = 0;
  int scalar_param_4 = DAT_00803380 + local_20 * DAT_008033a4 * 2; /* split integer lifetime from pointer-typed SSA storage */
  local_18 = 0;
  local_14 = 0;
  if (0 < *(int *)(iVar10 + 0x10)) {
    local_10 = (int *)(iVar10 + 0x14);
    do {
      if ((-1 < local_20) && (local_20 < DAT_008033a8)) {
        iVar9 = *local_10 + param_1;
        if (iVar9 <= local_10[1] + param_1) {
          pbVar15 = (byte *)(scalar_param_4 + iVar9 * 2);
          do {
            if ((-1 < iVar9) && (iVar9 < DAT_008033a4)) {
              bVar1 = *pbVar15;
              if ((bVar1 & 7) < 3) {
                iVar7 = (bVar1 & 7) + (uint)(bVar1 >> 4) * -2;
              }
              else {
                iVar7 = (uint)(bVar1 >> 4) * -2 + 5;
              }
              local_8 = local_8 + iVar7;
              if (uVar11 < pbVar15[1]) {
                uVar11 = (uint)pbVar15[1];
                local_18 = iVar9;
                local_14 = iVar18;
              }
            }
            iVar9 = iVar9 + 1;
            pbVar15 = pbVar15 + 2;
          } while (iVar9 <= local_10[1] + param_1);
        }
      }
      local_10 = local_10 + 2;
      iVar18 = iVar18 + 1;
      local_20 = local_20 + 1;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_4 = (int *)((int)param_4 + DAT_008033a4 * 2);
    } while (iVar18 < *(int *)(iVar10 + 0x10));
  }
  local_EAX_437 = thunk_FUN_0055de60(DAT_00803304,DAT_00803308,local_18,local_14);
  iVar10 = (DAT_00803384 + 2) * DAT_00803320;
  if (local_EAX_437 < iVar10) {
    local_EAX_437 = iVar10;
  }
  iVar18 = (int)(local_EAX_437 * uVar11) / DAT_00803390;
  piVar17 = *(int **)(local_34 + DAT_008033b0);
  iVar9 = FUN_006db6d0(iVar3);
  iVar4 = Library::DKW::STR::FUN_006db640(iVar3);
  iVar10 = param_2 * 0x10000 - DAT_00803354 * -iVar4 >> 0x10;
  iVar7 = param_1 * 0x10000 - DAT_00803354 * iVar9 >> 0x10;
  local_EAX_574 = FUN_006acf90(iVar7,iVar10,DAT_00803304,DAT_00803308);
  if (local_EAX_574 < DAT_00803358) {
    iVar18 = iVar18 * 2;
  }
  else {
    local_10 = nullptr;
    iVar10 = piVar17[3] + iVar10;
    iVar12 = DAT_00803380 + iVar10 * DAT_008033a4 * 2;
    iVar16 = 0;
    if (0 < piVar17[4]) {
      piVar14 = piVar17 + 5;
      do {
        if ((-1 < iVar10) && (iVar10 < DAT_008033a8)) {
          iVar8 = iVar7 + *piVar14;
          if (iVar8 <= piVar14[1] + iVar7) {
            local_28 = (byte *)(iVar12 + 1 + iVar8 * 2);
            do {
              if (((-1 < iVar8) && (iVar8 < DAT_008033a4)) && (local_10 < (uint)*local_28)) {
                local_18 = iVar8;
                local_14 = iVar16;
                local_10 = (int *)(uint)*local_28;
              }
              iVar8 = iVar8 + 1;
              local_28 = local_28 + 2;
            } while (iVar8 <= piVar14[1] + iVar7);
          }
        }
        iVar16 = iVar16 + 1;
        iVar10 = iVar10 + 1;
        iVar12 = iVar12 + DAT_008033a4 * 2;
        piVar14 = piVar14 + 2;
      } while (iVar16 < piVar17[4]);
    }
    iVar5 = thunk_FUN_0055de60(DAT_00803304,DAT_00803308,local_18,local_14);
    iVar10 = (DAT_00803384 + 2) * DAT_00803320;
    if (iVar5 < iVar10) {
      iVar5 = iVar10;
    }
    iVar18 = iVar18 + ((int)local_10 * iVar5) / DAT_00803390;
  }
  local_30 = (DAT_00803354 * -iVar4 + param_2 * 0x10000 >> 0x10) + piVar17[3];
  piVar14 = nullptr;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_4 = (int *)(DAT_00803380 + local_30 * DAT_008033a4 * 2);
  local_10 = nullptr;
  iVar7 = 0;
  iVar10 = DAT_00803354 * iVar9 + param_1 * 0x10000 >> 0x10;
  if (0 < piVar17[4]) {
    piVar19 = piVar17 + 5;
    do {
      if ((-1 < local_30) && (local_30 < DAT_008033a8)) {
        iVar12 = piVar19[1] + iVar10;
        iVar9 = *piVar19 + iVar10;
        if (iVar9 <= iVar12) {
          pbVar15 = (byte *)((int)param_4 + iVar9 * 2 + 1);
          do {
            if ((-1 < iVar9) && (iVar9 < DAT_008033a4)) {
              if (piVar14 < (uint)*pbVar15) {
                local_18 = iVar9;
                local_14 = iVar7;
                local_10 = (int *)(uint)*pbVar15;
              }
              local_8 = local_8 + (uint)(pbVar15[-1] >> 4) * -2;
              piVar14 = local_10;
            }
            iVar9 = iVar9 + 1;
            pbVar15 = pbVar15 + 2;
          } while (iVar9 <= iVar12);
        }
      }
      iVar7 = iVar7 + 1;
      local_30 = local_30 + 1;
      piVar19 = piVar19 + 2;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_4 = (int *)((int)param_4 + DAT_008033a4 * 2);
    } while (iVar7 < piVar17[4]);
  }
  local_EAX_1115 = thunk_FUN_0055de60(DAT_00803304,DAT_00803308,local_18,local_14);
  iVar10 = (DAT_00803384 + 2) * DAT_00803320;
  if (local_EAX_1115 < iVar10) {
    local_EAX_1115 = iVar10;
  }
  iVar10 = ((int)piVar14 * local_EAX_1115) / DAT_00803390;
  iVar9 = thunk_FUN_0055de60(DAT_00803304,DAT_00803308,param_1,param_2);
  iVar7 = 0;
  sVar2 = *(short *)(DAT_008033b4 + (DAT_008033a4 * param_2 + param_1) * 2);
  if ((sVar2 != 0) && (sVar2 != -1)) {
    iVar7 = ((DAT_0080339c * DAT_00803320 + (int)sVar2) - iVar9) + -1;
  }
  iVar9 = *piVar17;
  iVar6 = FUN_00562cd0(param_1,param_2,param_3);
  iVar10 = ((DAT_00803388 * DAT_00803340 - DAT_0080333c * iVar7) - DAT_00803338 * local_38) +
           DAT_00803334 * iVar6 + DAT_00803330 * (iVar18 + iVar10) +
           DAT_0080332c * ((local_8 * 0x19) / iVar9);
  if (iVar10 < 0) {
    iVar10 = 0;
  }
  iVar9 = 0;
  local_34 = 100;
  local_30 = DAT_00803398;
  iVar18 = DAT_00803398;
  if (0 < DAT_00803398) {
    piVar17 = (int *)(local_24 + 0xc);
    do {
      uVar13 = piVar17[-3] - param_1 >> 0x1f;
      uVar11 = piVar17[-3] - param_1 ^ uVar13;
      iVar7 = local_34;
      if ((((uVar11 == uVar13 || (int)(uVar11 - uVar13) < 0) &&
           (uVar13 = piVar17[-2] - param_2 >> 0x1f, uVar11 = piVar17[-2] - param_2 ^ uVar13,
           uVar11 == uVar13 || (int)(uVar11 - uVar13) < 0)) &&
          ((uVar11 = piVar17[-1] - iVar3 >> 0x1f, iVar12 = (piVar17[-1] - iVar3 ^ uVar11) - uVar11,
           iVar12 < 0x18 || (0x150 < iVar12)))) && (iVar7 = iVar9, iVar10 <= *piVar17)) {
        local_30 = 100;
        break;
      }
      local_34 = iVar7;
      iVar7 = iVar9;
      if (((*piVar17 < iVar10) || (iVar7 = local_30, DAT_00803398 == iVar9)) || (local_34 == iVar9))
      {
        local_30 = iVar7;
        iVar9 = iVar9 + 1;
        if (iVar9 < DAT_00803398) {
          piVar17 = (int *)(local_24 + 8 + iVar9 * 0x14);
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_3 = iVar9;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_4 = piVar17;
          do {
            uVar11 = piVar17[-2] - param_1;
            uVar13 = (int)uVar11 >> 0x1f;
            uVar11 = uVar11 ^ uVar13;
            if (((uVar11 == uVar13 || (int)(uVar11 - uVar13) < 0) &&
                (uVar13 = piVar17[-1] - param_2 >> 0x1f, uVar11 = piVar17[-1] - param_2 ^ uVar13,
                uVar11 == uVar13 || (int)(uVar11 - uVar13) < 0)) &&
               ((uVar11 = *piVar17 - iVar3 >> 0x1f, iVar7 = (*piVar17 - iVar3 ^ uVar11) - uVar11,
                iVar7 < 0x18 || (0x150 < iVar7)))) {
              if (iVar9 < iVar18 + -1) {
                piVar14 = param_4 + 3;
                piVar19 = piVar17 + -2;
                for (uVar11 = ((iVar18 - param_3) + -1) * 5 & 0x3fffffff; uVar11 != 0;
                    uVar11 = uVar11 - 1) {
                  *piVar19 = *piVar14;
                  piVar14 = piVar14 + 1;
                  piVar19 = piVar19 + 1;
                }
                for (iVar7 = 0; iVar18 = DAT_00803398, piVar17 = param_4, iVar9 = param_3,
                    iVar7 != 0; iVar7 = iVar7 + -1) {
                  *(char *)piVar19 = (char)*piVar14;
                  piVar14 = (int *)((int)piVar14 + 1);
                  piVar19 = (int *)((int)piVar19 + 1);
                }
              }
              iVar18 = iVar18 + -1;
              DAT_00803398 = iVar18;
            }
            else {
              iVar9 = iVar9 + 1;
              piVar17 = piVar17 + 5;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_3 = iVar9;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_4 = piVar17;
            }
          } while (iVar9 < iVar18);
        }
        break;
      }
      iVar9 = iVar9 + 1;
      piVar17 = piVar17 + 5;
    } while (iVar9 < DAT_00803398);
  }
  iVar9 = local_34;
  if (iVar18 <= local_34) {
    iVar9 = local_30;
  }
  if (iVar9 < 100) {
    if (iVar18 <= local_34) {
      if (99 < iVar18) {
        iVar18 = 99;
        DAT_00803398 = 99;
      }
      if (iVar9 < iVar18) {
        Library::MSVCRT::FUN_0072da70
                  ((undefined4 *)(local_24 + (iVar9 * 5 + 5) * 4),
                   (AnonPointee_TLOBaseTy_0607 *)(iVar9 * 0x14 + local_24),
                   iVar18 * 0x14 + iVar9 * -0x14);
        iVar18 = DAT_00803398;
      }
      DAT_00803398 = iVar18 + 1;
    }
    piVar17 = (int *)(local_24 + iVar9 * 0x14);
    *piVar17 = param_1;
    piVar17[1] = param_2;
    piVar17[2] = iVar3;
    piVar17[3] = iVar10;
    iVar18 = DAT_00803398;
  }
  else {
    iVar10 = -1;
  }
  if (param_5 != DAT_0080330c) {
    DAT_0080337c = iVar18;
    return iVar10;
  }
  DAT_00803314 = iVar18;
  return iVar10;
}

