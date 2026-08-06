#include "../../pseudocode_runtime.h"


int FUN_00564f30(int param_1,int param_2,int param_3,int *param_4,int param_5,int param_6)

{
  short sVar1;
  int iVar2;
  int local_EAX_378;
  int iVar3;
  int iVar7;
  int iVar6;
  int local_EAX_737;
  int local_EAX_1016;
  int iVar4;
  int iVar5;
  int iVar8;
  int *piVar9;
  uint uVar10;
  byte *pbVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  int *piVar16;
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
    iVar8 = *(int *)(DAT_008032fc + param_3 * 4);
    DAT_00803398 = DAT_00803314;
  }
  else {
    local_1c = DAT_008032f8;
    iVar8 = *(int *)(DAT_008033b8 + param_3 * 4);
    DAT_00803398 = DAT_0080337c;
  }
  iVar2 = (int)(param_3 * 0x168 + (param_3 * 0x168 >> 0x1f & 0xfU)) >> 4;
  uVar10 = (int)param_4 - param_3 >> 0x1f;
  local_38 = ((int)param_4 - param_3 ^ uVar10) - uVar10;
  if (8 < local_38) {
    local_38 = 0x10 - local_38;
  }
  local_8 = *(int *)(iVar8 + 0xc) + param_2;
  uVar10 = 0;
  local_2c = 0;
  local_18 = 0;
  int scalar_param_4 = DAT_00803380 + local_8 * DAT_008033a4 * 2; /* split integer lifetime from pointer-typed SSA storage */
  iVar15 = 0;
  local_14 = 0;
  if (0 < *(int *)(iVar8 + 0x10)) {
    local_20 = (int *)(iVar8 + 0x14);
    do {
      if ((-1 < local_8) && (local_8 < DAT_008033a8)) {
        iVar5 = *local_20 + param_1;
        if (iVar5 <= local_20[1] + param_1) {
          pbVar11 = (byte *)(scalar_param_4 + iVar5 * 2);
          do {
            if ((-1 < iVar5) && (iVar5 < DAT_008033a4)) {
              local_2c = local_2c + (*pbVar11 & 7) + (uint)(*pbVar11 >> 4) * -2;
              if (uVar10 < pbVar11[1]) {
                uVar10 = (uint)pbVar11[1];
                local_18 = iVar5;
                local_14 = iVar15;
              }
            }
            iVar5 = iVar5 + 1;
            pbVar11 = pbVar11 + 2;
          } while (iVar5 <= local_20[1] + param_1);
        }
      }
      local_20 = local_20 + 2;
      iVar15 = iVar15 + 1;
      local_8 = local_8 + 1;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_4 = (int *)((int)param_4 + DAT_008033a4 * 2);
    } while (iVar15 < *(int *)(iVar8 + 0x10));
  }
  local_EAX_378 = thunk_FUN_0055de60(DAT_00803304,DAT_00803308,param_1,param_2);
  iVar8 = (DAT_00803384 + 2) * DAT_00803320;
  if (local_EAX_378 < iVar8) {
    local_EAX_378 = iVar8;
  }
  local_8 = (int)(local_EAX_378 * uVar10) / DAT_00803390;
  piVar14 = *(int **)(DAT_008033b0 + param_3 * 4);
  iVar3 = FUN_006db6d0(iVar2);
  iVar7 = Library::DKW::STR::FUN_006db640(iVar2);
  local_28 = param_2 * 0x10000 - DAT_00803354 * -iVar7 >> 0x10;
  iVar8 = param_1 * 0x10000 - DAT_00803354 * iVar3 >> 0x10;
  iVar6 = FUN_006acf90(iVar8,local_28,DAT_00803304,DAT_00803308);
  if (iVar6 < DAT_00803358) {
    local_8 = local_8 * 2;
  }
  else {
    uVar10 = 0;
    local_30 = 0;
    local_28 = local_28 + piVar14[3];
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_4 = (int *)(DAT_00803380 + local_28 * DAT_008033a4 * 2);
    iVar15 = 0;
    if (0 < piVar14[4]) {
      piVar9 = piVar14 + 5;
      do {
        if ((-1 < local_28) && (local_28 < DAT_008033a8)) {
          iVar5 = iVar8 + *piVar9;
          if (iVar5 <= piVar9[1] + iVar8) {
            local_c = (byte *)((int)param_4 + iVar5 * 2 + 1);
            do {
              if (((-1 < iVar5) && (iVar5 < DAT_008033a4)) &&
                 (uVar13 = (uint)*local_c, uVar10 = local_30, local_30 < uVar13)) {
                uVar10 = uVar13;
                local_30 = uVar13;
                local_18 = iVar5;
                local_14 = iVar15;
              }
              iVar5 = iVar5 + 1;
              local_c = local_c + 2;
            } while (iVar5 <= piVar9[1] + iVar8);
          }
        }
        iVar15 = iVar15 + 1;
        local_28 = local_28 + 1;
        piVar9 = piVar9 + 2;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = (int *)((int)param_4 + DAT_008033a4 * 2);
      } while (iVar15 < piVar14[4]);
    }
    local_EAX_737 = thunk_FUN_0055de60(DAT_00803304,DAT_00803308,local_18,local_14);
    iVar8 = (DAT_00803384 + 2) * DAT_00803320;
    if (local_EAX_737 < iVar8) {
      local_EAX_737 = iVar8;
    }
    local_8 = local_8 + (int)(uVar10 * local_EAX_737) / DAT_00803390;
  }
  local_28 = (DAT_00803354 * -iVar7 + param_2 * 0x10000 >> 0x10) + piVar14[3];
  uVar10 = 0;
  iVar8 = DAT_00803354 * iVar3 + param_1 * 0x10000 >> 0x10;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_4 = (int *)(DAT_00803380 + local_28 * DAT_008033a4 * 2);
  iVar15 = 0;
  if (0 < piVar14[4]) {
    piVar9 = piVar14 + 5;
    do {
      if ((-1 < local_28) && (local_28 < DAT_008033a8)) {
        iVar5 = iVar8 + *piVar9;
        iVar12 = piVar9[1] + iVar8;
        if (iVar5 <= iVar12) {
          pbVar11 = (byte *)((int)param_4 + iVar5 * 2 + 1);
          do {
            if (((-1 < iVar5) && (iVar5 < DAT_008033a4)) && (uVar10 < *pbVar11)) {
              uVar10 = (uint)*pbVar11;
              local_18 = iVar5;
              local_14 = iVar15;
            }
            iVar5 = iVar5 + 1;
            pbVar11 = pbVar11 + 2;
          } while (iVar5 <= iVar12);
        }
      }
      iVar15 = iVar15 + 1;
      local_28 = local_28 + 1;
      piVar9 = piVar9 + 2;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_4 = (int *)((int)param_4 + DAT_008033a4 * 2);
    } while (iVar15 < piVar14[4]);
  }
  local_EAX_1016 = thunk_FUN_0055de60(DAT_00803304,DAT_00803308,local_18,local_14);
  iVar8 = (DAT_00803384 + 2) * DAT_00803320;
  if (local_EAX_1016 < iVar8) {
    local_EAX_1016 = iVar8;
  }
  iVar5 = (int)(uVar10 * local_EAX_1016) / DAT_00803390;
  iVar8 = *piVar14 * 5;
  iVar15 = iVar8 / 3 + ((param_6 - DAT_00803384) * *piVar14 * 5) / 10;
  if (iVar15 < 1) {
    iVar8 = 0;
  }
  else {
    if (iVar8 < iVar15) {
      iVar15 = iVar8;
    }
    uVar10 = local_2c - iVar15 >> 0x1f;
    iVar8 = 100 - (int)(((local_2c - iVar15 ^ uVar10) - uVar10) * 100) / iVar8;
  }
  iVar15 = thunk_FUN_0055de60(DAT_00803304,DAT_00803308,param_1,param_2);
  iVar12 = 0;
  sVar1 = *(short *)(DAT_008033b4 + (DAT_008033a4 * param_2 + param_1) * 2);
  if ((sVar1 != 0) && (sVar1 != -1)) {
    iVar12 = ((DAT_0080339c * DAT_00803320 + (int)sVar1) - iVar15) + -1;
  }
  iVar15 = FUN_00562cd0(param_1,param_2,param_3);
  iVar8 = ((DAT_00803388 * DAT_00803340 - DAT_0080333c * iVar12) - DAT_00803338 * local_38) +
          DAT_00803334 * iVar15 + DAT_00803330 * (local_8 + iVar5) + DAT_0080332c * iVar8;
  if (iVar8 < 0) {
    iVar8 = 0;
  }
  iVar5 = 0;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_6 = 100;
  local_2c = DAT_00803398;
  iVar15 = DAT_00803398;
  if (0 < DAT_00803398) {
    piVar14 = (int *)(local_1c + 0xc);
    do {
      uVar13 = piVar14[-3] - param_1 >> 0x1f;
      uVar10 = piVar14[-3] - param_1 ^ uVar13;
      iVar12 = param_6;
      if (((uVar10 == uVar13 || (int)(uVar10 - uVar13) < 0) &&
          (uVar13 = piVar14[-2] - param_2 >> 0x1f, uVar10 = piVar14[-2] - param_2 ^ uVar13,
          uVar10 == uVar13 || (int)(uVar10 - uVar13) < 0)) &&
         (((uVar10 = piVar14[-1] - iVar2 >> 0x1f, iVar4 = (piVar14[-1] - iVar2 ^ uVar10) - uVar10,
           iVar4 < 0x18 || (0x150 < iVar4)) && (iVar12 = iVar5, iVar8 <= *piVar14)))) {
        local_2c = 100;
        break;
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_6 = iVar12;
      iVar12 = iVar5;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      if (((*piVar14 < iVar8) || (iVar12 = local_2c, DAT_00803398 == iVar5)) || (param_6 == iVar5))
      {
        local_2c = iVar12;
        iVar5 = iVar5 + 1;
        if (iVar5 < DAT_00803398) {
          piVar14 = (int *)(local_1c + 8 + iVar5 * 0x14);
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_3 = iVar5;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_4 = piVar14;
          do {
            uVar10 = piVar14[-2] - param_1;
            uVar13 = (int)uVar10 >> 0x1f;
            uVar10 = uVar10 ^ uVar13;
            if (((uVar10 == uVar13 || (int)(uVar10 - uVar13) < 0) &&
                (uVar13 = piVar14[-1] - param_2 >> 0x1f, uVar10 = piVar14[-1] - param_2 ^ uVar13,
                uVar10 == uVar13 || (int)(uVar10 - uVar13) < 0)) &&
               ((uVar10 = *piVar14 - iVar2 >> 0x1f, iVar12 = (*piVar14 - iVar2 ^ uVar10) - uVar10,
                iVar12 < 0x18 || (0x150 < iVar12)))) {
              if (iVar5 < iVar15 + -1) {
                piVar9 = param_4 + 3;
                piVar16 = piVar14 + -2;
                for (uVar10 = ((iVar15 - param_3) + -1) * 5 & 0x3fffffff; uVar10 != 0;
                    uVar10 = uVar10 - 1) {
                  *piVar16 = *piVar9;
                  piVar9 = piVar9 + 1;
                  piVar16 = piVar16 + 1;
                }
                for (iVar12 = 0; iVar15 = DAT_00803398, piVar14 = param_4, iVar5 = param_3,
                    iVar12 != 0; iVar12 = iVar12 + -1) {
                  *(char *)piVar16 = (char)*piVar9;
                  piVar9 = (int *)((int)piVar9 + 1);
                  piVar16 = (int *)((int)piVar16 + 1);
                }
              }
              iVar15 = iVar15 + -1;
              DAT_00803398 = iVar15;
            }
            else {
              iVar5 = iVar5 + 1;
              piVar14 = piVar14 + 5;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_3 = iVar5;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_4 = piVar14;
            }
          } while (iVar5 < iVar15);
        }
        break;
      }
      iVar5 = iVar5 + 1;
      piVar14 = piVar14 + 5;
    } while (iVar5 < DAT_00803398);
  }
  iVar5 = param_6;
  if (iVar15 <= param_6) {
    iVar5 = local_2c;
  }
  if (iVar5 < 100) {
    if (iVar15 <= param_6) {
      if (99 < iVar15) {
        iVar15 = 99;
        DAT_00803398 = 99;
      }
      if (iVar5 < iVar15) {
        Library::MSVCRT::FUN_0072da70
                  ((undefined4 *)(local_1c + (iVar5 * 5 + 5) * 4),
                   (AnonPointee_TLOBaseTy_0607 *)(iVar5 * 0x14 + local_1c),
                   iVar15 * 0x14 + iVar5 * -0x14);
        iVar15 = DAT_00803398;
      }
      DAT_00803398 = iVar15 + 1;
    }
    piVar14 = (int *)(local_1c + iVar5 * 0x14);
    *piVar14 = param_1;
    piVar14[1] = param_2;
    piVar14[2] = iVar2;
    piVar14[3] = iVar8;
    iVar15 = DAT_00803398;
  }
  else {
    iVar8 = -1;
  }
  if (param_5 != DAT_0080330c) {
    DAT_0080337c = iVar15;
    return iVar8;
  }
  DAT_00803314 = iVar15;
  return iVar8;
}

