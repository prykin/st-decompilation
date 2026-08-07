#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/0056.cpp

// 00561240 FUN_00561240
#line 1 "decomp/ST.exe/functions/00561240/decomp.c"

int * st::fn_00561240(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int local_40 [4];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  iVar4 = param_1;
  local_c = 0;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_1 = 0x75300000;
  local_18 = 0x8ad00000;
  local_8 = -0x75300000;
  iVar7 = iVar4 / 2;
  iVar6 = param_2 / 2;
  local_10 = st::fn_006DB640(param_3);
  iVar3 = st::fn_006DB6D0(param_3);
  local_14 = (iVar4 - iVar7) + -1;
  local_28 = local_14 * iVar3;
  local_40[0] = local_10 * iVar6 + local_28;
  local_14 = local_14 * local_10;
  local_18 = iVar3 * iVar6;
  local_40[1] = local_18 - local_14;
  if (local_40[1] < 0x75300000) {
    local_c = 0;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = local_40[1];
  }
  if (-0x75300000 < local_40[1]) {
    local_8 = local_40[1];
  }
  local_40[2] = local_10 * iVar6 - iVar3 * iVar7;
  local_40[3] = local_18 + local_10 * iVar7;
  if (local_40[3] < param_1) {
    local_c = 1;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = local_40[3];
  }
  if (local_8 < local_40[3]) {
    local_8 = local_40[3];
  }
  iVar4 = (param_2 - iVar6) + -1;
  iVar6 = iVar4 * iVar3;
  iVar4 = iVar4 * local_10;
  local_2c = local_10 * iVar7 - iVar6;
  local_30 = -(iVar3 * iVar7 + iVar4);
  if (local_2c < param_1) {
    local_c = 2;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = local_2c;
  }
  if (local_8 < local_2c) {
    local_8 = local_2c;
  }
  local_28 = local_28 - iVar4;
  local_24 = -(iVar6 + local_14);
  if (local_24 < param_1) {
    local_c = 3;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = local_24;
  }
  if (local_8 < local_24) {
    local_8 = local_24;
  }
  iVar4 = param_1 + 0x8000 >> 0x10;
  iVar3 = ((local_8 + 0x8000 >> 0x10) - iVar4) + 1;
  local_10 = iVar4;
  piVar5 = st::fn_006AAC10(iVar3 * 8 + 0x1c);
  local_18 = 2;
  piVar5[4] = iVar3;
  piVar5[3] = iVar4;
  local_20 = local_40[local_c * 2];
  local_1c = local_40[local_c * 2 + 1] + 0x8000 >> 0x10;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_1 = local_c;
  iVar4 = local_1c;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_3 = local_20;
  do {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = param_1 + 1;
    if (3 < param_1) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = 0;
    }
    iVar6 = local_40[param_1 * 2 + 1] + 0x8000 >> 0x10;
    if (iVar4 < iVar6) {
      local_14 = iVar6 - iVar4;
      local_8 = (local_40[param_1 * 2] - param_3) / local_14;
      iVar4 = iVar4 * 8;
      iVar7 = param_3 + 0x8000;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_3 = param_3 + local_14 * local_8;
      do {
        *(int *)(iVar4 + local_10 * -8 + 0x18 + (int)piVar5) = iVar7 >> 0x10;
        iVar7 = iVar7 + local_8;
        iVar4 = iVar4 + 8;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
    }
    piVar5[(iVar6 - local_10) * 2 + 6] = param_3 + 0x8000 >> 0x10;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = local_40[param_1 * 2];
    local_18 = local_18 + -1;
    iVar4 = iVar6;
  } while (local_18 != 0);
  local_14 = 2;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_3 = local_20;
  do {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = local_c + -1;
    if (param_1 < 0) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = 3;
    }
    iVar4 = local_40[param_1 * 2 + 1] + 0x8000 >> 0x10;
    if (local_1c < iVar4) {
      local_18 = iVar4 - local_1c;
      local_8 = (local_40[param_1 * 2] - param_3) / local_18;
      local_1c = local_1c * 8;
      iVar6 = param_3 + 0x8000;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_3 = param_3 + local_18 * local_8;
      do {
        *(int *)(local_1c + local_10 * -8 + 0x14 + (int)piVar5) = iVar6 >> 0x10;
        iVar6 = iVar6 + local_8;
        local_1c = local_1c + 8;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
    }
    piVar5[(iVar4 - local_10) * 2 + 5] = param_3 + 0x8000 >> 0x10;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = local_40[param_1 * 2];
    local_14 = local_14 + -1;
    local_c = param_1;
    local_1c = iVar4;
  } while (local_14 != 0);
  iVar7 = 0;
  *piVar5 = 0;
  iVar4 = 30000;
  iVar6 = -30000;
  if (0 < iVar3) {
    do {
      iVar1 = piVar5[iVar7 * 2 + 5];
      if (iVar1 < iVar4) {
        iVar4 = iVar1;
      }
      iVar2 = piVar5[iVar7 * 2 + 6];
      if (iVar6 < iVar2) {
        iVar6 = iVar2;
      }
      iVar7 = iVar7 + 1;
      *piVar5 = *piVar5 + (iVar2 - iVar1) + 1;
    } while (iVar7 < iVar3);
  }
  piVar5[1] = iVar4;
  piVar5[2] = (iVar6 - iVar4) + 1;
  return piVar5;
}

// 00561DC0 FUN_00561dc0
#line 4 "decomp/ST.exe/functions/00561DC0/decomp.c"
int st::fn_00561DC0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_10;
  undefined4 local_c;

  iVar1 = param_1 * 0x10000;
  iVar2 = param_2 * 0x10000;
  if (param_3 < 1) {
    local_10 = 0xf;
  }
  else {
    local_10 = param_3 + -1;
  }
  iVar8 = (int)(local_10 * 0x168 + (local_10 * 0x168 >> 0x1f & 0xfU)) >> 4;
  iVar3 = st::fn_006DB6D0(iVar8);
  iVar4 = st::fn_006DB640(iVar8);
  local_1c = 0;
  iVar8 = iVar1 + iVar3 * 3;
  local_c = 0;
  iVar7 = iVar2 + iVar4 * -3;
  if (0 < DAT_00803368) {
    do {
      iVar5 = iVar8 >> 0x10;
      iVar6 = iVar7 >> 0x10;
      if ((((iVar5 < 0) || (DAT_008033a4 <= iVar5)) || (iVar6 < 0)) ||
         ((DAT_008033a8 <= iVar6 ||
          (iVar9 = (int)*(short *)(DAT_008033b4 + (DAT_008033a4 * iVar6 + iVar5) * 2), iVar9 < 1))))
      {
        local_1c = local_1c + DAT_00803344;
      }
      else {
        iVar5 = st::fn_004043A9(DAT_00803304,DAT_00803308,iVar5,iVar6);
        local_1c = local_1c + -1 + (iVar9 - iVar5);
      }
      iVar8 = iVar8 + iVar3;
      iVar7 = iVar7 - iVar4;
      local_c = local_c + 1;
    } while (local_c < DAT_00803368);
    if (local_1c < 0) {
      local_1c = 0;
    }
  }
  local_20 = local_10;
  if (param_3 < 0xf) {
    local_10 = param_3 + 1;
  }
  else {
    local_10 = 0;
  }
  iVar8 = (int)(local_10 * 0x168 + (local_10 * 0x168 >> 0x1f & 0xfU)) >> 4;
  iVar4 = st::fn_006DB6D0(iVar8);
  iVar5 = st::fn_006DB640(iVar8);
  iVar3 = 0;
  iVar8 = iVar1 + iVar4 * 3;
  local_c = 0;
  iVar7 = iVar2 + iVar5 * -3;
  if (0 < DAT_00803368) {
    do {
      iVar6 = iVar8 >> 0x10;
      iVar9 = iVar7 >> 0x10;
      if (((iVar6 < 0) || (DAT_008033a4 <= iVar6)) ||
         ((iVar9 < 0 ||
          ((DAT_008033a8 <= iVar9 ||
           (iVar10 = (int)*(short *)(DAT_008033b4 + (DAT_008033a4 * iVar9 + iVar6) * 2), iVar10 < 1)
           ))))) {
        iVar3 = iVar3 + DAT_00803344;
      }
      else {
        iVar6 = st::fn_004043A9(DAT_00803304,DAT_00803308,iVar6,iVar9);
        iVar3 = iVar3 + -1 + (iVar10 - iVar6);
      }
      iVar8 = iVar8 + iVar4;
      iVar7 = iVar7 - iVar5;
      local_c = local_c + 1;
    } while (local_c < DAT_00803368);
    if (iVar3 < 0) {
      iVar3 = 0;
    }
  }
  if (iVar3 < local_1c) {
    local_20 = local_10;
    local_1c = iVar3;
  }
  iVar8 = (int)(param_3 * 0x168 + (param_3 * 0x168 >> 0x1f & 0xfU)) >> 4;
  iVar7 = st::fn_006DB6D0(iVar8);
  iVar3 = st::fn_006DB640(iVar8);
  iVar8 = 0;
  iVar1 = iVar1 + iVar7 * 3;
  local_c = 0;
  iVar2 = iVar2 + iVar3 * -3;
  if (0 < DAT_00803368) {
    do {
      iVar4 = iVar1 >> 0x10;
      iVar5 = iVar2 >> 0x10;
      if ((((iVar4 < 0) || (DAT_008033a4 <= iVar4)) || (iVar5 < 0)) ||
         ((DAT_008033a8 <= iVar5 ||
          (iVar6 = (int)*(short *)(DAT_008033b4 + (DAT_008033a4 * iVar5 + iVar4) * 2), iVar6 < 1))))
      {
        iVar8 = iVar8 + DAT_00803344;
      }
      else {
        iVar4 = st::fn_004043A9(DAT_00803304,DAT_00803308,iVar4,iVar5);
        iVar8 = iVar8 + -1 + (iVar6 - iVar4);
      }
      iVar1 = iVar1 + iVar7;
      iVar2 = iVar2 - iVar3;
      local_c = local_c + 1;
    } while (local_c < DAT_00803368);
  }
  if (local_1c <= iVar8 - DAT_00803338) {
    param_3 = local_20;
  }
  return param_3;
}

// 00562170 FUN_00562170
#line 1 "decomp/ST.exe/functions/00562170/decomp.c"

int st::fn_00562170(int *param_1,int param_2)

{
  int iVar1;
  int iVar4;
  int local_EAX_292;
  int iVar2;
  uint uVar1;
  int iVar3;
  int iVar5;
  int *piVar6;
  int iVar7;
  int local_14;
  int *local_10;
  int local_c;
  int local_8;

  iVar3 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = nullptr;
  if (0 < DAT_0080338c) {
    local_14 = 0;
    do {
      iVar1 = st::fn_006DB910(DAT_00803304,DAT_00803308,*(int *)(local_14 + DAT_00803310),
                           *(int *)(local_14 + 4 + DAT_00803310));
      if (0 < param_2) {
        local_c = local_c + param_2;
        iVar5 = param_2;
        piVar6 = param_1;
        do {
          iVar4 = st::fn_006DB910(DAT_00803304,DAT_00803308,*(int *)(DAT_00803300 + *piVar6 * 0x14),
                               *(int *)(DAT_00803300 + 4 + *piVar6 * 0x14));
          uVar1 = iVar4 - iVar1 >> 0x1f;
          iVar3 = (iVar4 - iVar1 ^ uVar1) - uVar1;
          if (0xb4 < iVar3) {
            iVar3 = 0x168 - iVar3;
          }
          piVar6 = piVar6 + 1;
          iVar3 = local_8 + iVar3;
          iVar5 = iVar5 + -1;
          local_8 = iVar3;
        } while (iVar5 != 0);
      }
      local_10 = (int *)((int)local_10 + 1);
      local_14 = local_14 + 0x14;
    } while ((int)local_10 < DAT_0080338c);
  }
  iVar7 = 1;
  iVar5 = *(int *)(DAT_00803300 + 0xc + *param_1 * 0x14);
  local_10 = param_1;
  if (1 < param_2) {
    do {
      local_10 = local_10 + 1;
      iVar3 = *local_10;
      iVar5 = iVar5 + *(int *)(DAT_00803300 + 0xc + iVar3 * 0x14);
      local_EAX_292 =
           st::fn_006DB910(DAT_00803304,DAT_00803308,*(int *)(DAT_00803300 + iVar3 * 0x14),
                        *(int *)(DAT_00803300 + iVar3 * 0x14 + 4));
      if (0 < iVar7) {
        local_c = local_c + iVar7;
        piVar6 = param_1;
        local_14 = iVar7;
        do {
          iVar2 = st::fn_006DB910(DAT_00803304,DAT_00803308,*(int *)(DAT_00803300 + *piVar6 * 0x14),
                               *(int *)(DAT_00803300 + 4 + *piVar6 * 0x14));
          uVar1 = iVar2 - local_EAX_292 >> 0x1f;
          iVar3 = (iVar2 - local_EAX_292 ^ uVar1) - uVar1;
          if (0xb4 < iVar3) {
            iVar3 = 0x168 - iVar3;
          }
          piVar6 = piVar6 + 1;
          local_8 = local_8 + iVar3;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
      }
      iVar7 = iVar7 + 1;
      iVar3 = local_8;
    } while (iVar7 < param_2);
  }
  if (0 < local_c) {
    iVar3 = iVar3 + (DAT_00803328 * iVar3) / local_c;
  }
  return iVar5 + iVar3;
}

// 005623C0 FUN_005623c0
#line 4 "decomp/ST.exe/functions/005623C0/decomp.c"
int st::fn_005623C0(int param_1,int param_2,int param_3,int *param_4,int param_5)

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
  local_EAX_437 = st::fn_004043A9(DAT_00803304,DAT_00803308,local_18,local_14);
  iVar10 = (DAT_00803384 + 2) * DAT_00803320;
  if (local_EAX_437 < iVar10) {
    local_EAX_437 = iVar10;
  }
  iVar18 = (int)(local_EAX_437 * uVar11) / DAT_00803390;
  piVar17 = *(int **)(local_34 + DAT_008033b0);
  iVar9 = st::fn_006DB6D0(iVar3);
  iVar4 = st::fn_006DB640(iVar3);
  iVar10 = param_2 * 0x10000 - DAT_00803354 * -iVar4 >> 0x10;
  iVar7 = param_1 * 0x10000 - DAT_00803354 * iVar9 >> 0x10;
  local_EAX_574 = st::fn_006ACF90(iVar7,iVar10,DAT_00803304,DAT_00803308);
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
    iVar5 = st::fn_004043A9(DAT_00803304,DAT_00803308,local_18,local_14);
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
  local_EAX_1115 = st::fn_004043A9(DAT_00803304,DAT_00803308,local_18,local_14);
  iVar10 = (DAT_00803384 + 2) * DAT_00803320;
  if (local_EAX_1115 < iVar10) {
    local_EAX_1115 = iVar10;
  }
  iVar10 = ((int)piVar14 * local_EAX_1115) / DAT_00803390;
  iVar9 = st::fn_004043A9(DAT_00803304,DAT_00803308,param_1,param_2);
  iVar7 = 0;
  sVar2 = *(short *)(DAT_008033b4 + (DAT_008033a4 * param_2 + param_1) * 2);
  if ((sVar2 != 0) && (sVar2 != -1)) {
    iVar7 = ((DAT_0080339c * DAT_00803320 + (int)sVar2) - iVar9) + -1;
  }
  iVar9 = *piVar17;
  iVar6 = st::fn_00562CD0(param_1,param_2,param_3);
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
        st::fn_0072DA70
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

// 00562CD0 FUN_00562cd0
#line 4 "decomp/ST.exe/functions/00562CD0/decomp.c"
int st::fn_00562CD0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 local_8;

  iVar7 = (int)(param_3 * 0x168 + (param_3 * 0x168 >> 0x1f & 0xfU)) >> 4;
  iVar1 = st::fn_006DB6D0(iVar7);
  iVar2 = st::fn_006DB640(iVar7);
  iVar7 = 0;
  iVar3 = iVar1 * 3 + param_1 * 0x10000;
  iVar5 = iVar2 * -3 + param_2 * 0x10000;
  local_8 = 0;
  if (0 < DAT_00803368) {
    do {
      iVar4 = iVar3 >> 0x10;
      iVar6 = iVar5 >> 0x10;
      if ((((iVar4 < 0) || (DAT_008033a4 <= iVar4)) || (iVar6 < 0)) ||
         ((DAT_008033a8 <= iVar6 ||
          (iVar8 = (int)*(short *)(DAT_008033b4 + (DAT_008033a4 * iVar6 + iVar4) * 2), iVar8 < 1))))
      {
        iVar7 = iVar7 + DAT_00803344;
      }
      else {
        iVar4 = st::fn_004043A9(DAT_00803304,DAT_00803308,iVar4,iVar6);
        iVar7 = iVar7 + -1 + (iVar8 - iVar4);
      }
      iVar3 = iVar3 + iVar1;
      iVar5 = iVar5 - iVar2;
      local_8 = local_8 + 1;
    } while (local_8 < DAT_00803368);
  }
  iVar7 = (DAT_00803368 + iVar7) / (DAT_00803368 * 2);
  if (iVar7 < 0) {
    iVar7 = 0;
  }
  if (DAT_00803344 < iVar7) {
    iVar7 = DAT_00803344;
  }
  return DAT_00803344 - iVar7;
}

// 00562E10 FUN_00562e10
#line 4 "decomp/ST.exe/functions/00562E10/decomp.c"
void st::fn_00562E10(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;

  iVar1 = *(int *)(DAT_00803300 + param_4 * 0x14);
  iVar2 = *(int *)(DAT_00803300 + param_4 * 0x14 + 4);
  iVar3 = DAT_008032ec;
  if (param_4 < DAT_0080337c) {
    iVar3 = DAT_00803378;
  }
  iVar6 = 0;
  if (0 < DAT_0080337c) {
    iVar7 = 0;
    puVar5 = param_3;
    do {
      iVar4 = st::fn_006ACF90(*(int *)(iVar7 + DAT_00803300),*(int *)(iVar7 + 4 + DAT_00803300),iVar1,
                           iVar2);
      if (iVar4 < DAT_00803378 / 2 + iVar3 / 2) {
        *puVar5 = 0xffffffff;
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 0x14;
      puVar5 = puVar5 + 1;
    } while (iVar6 < DAT_0080337c);
  }
  if (iVar6 < DAT_00803398) {
    iVar7 = iVar6 * 0x14;
    puVar5 = param_3 + iVar6;
    do {
      iVar4 = st::fn_006ACF90(*(int *)(iVar7 + DAT_00803300),*(int *)(iVar7 + 4 + DAT_00803300),iVar1,
                           iVar2);
      if (iVar4 < DAT_008032ec / 2 + iVar3 / 2) {
        *puVar5 = 0xffffffff;
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 0x14;
      puVar5 = puVar5 + 1;
    } while (iVar6 < DAT_00803398);
  }
  return;
}

// 00564DD0 FUN_00564dd0
#line 4 "decomp/ST.exe/functions/00564DD0/decomp.c"
void st::fn_00564DD0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;

  iVar1 = *(int *)(DAT_00803300 + (int)param_4 * 0x14);
  iVar2 = *(int *)(DAT_00803300 + (int)param_4 * 0x14 + 4);
  iVar3 = DAT_008032ec;
  if ((int)param_4 < DAT_0080337c) {
    iVar3 = DAT_00803378;
  }
  iVar5 = 0;
  if (0 < DAT_0080337c) {
    iVar6 = 0;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_4 = param_3;
    do {
      iVar4 = st::fn_006ACF90(*(int *)(iVar6 + DAT_00803300),*(int *)(iVar6 + 4 + DAT_00803300),iVar1,
                           iVar2);
      if (iVar4 < DAT_00803378 / 2 + iVar3 / 4) {
        *param_4 = 0xffffffff;
      }
      iVar5 = iVar5 + 1;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_4 = param_4 + 1;
      iVar6 = iVar6 + 0x14;
    } while (iVar5 < DAT_0080337c);
  }
  if (iVar5 < DAT_00803398) {
    iVar6 = iVar5 * 0x14;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = param_3 + iVar5;
    do {
      iVar4 = st::fn_006ACF90(*(int *)(iVar6 + DAT_00803300),*(int *)(iVar6 + 4 + DAT_00803300),iVar1,
                           iVar2);
      if (iVar4 < DAT_008032ec / 2 + iVar3 / 4) {
        *param_3 = 0xffffffff;
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0x14;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_3 = param_3 + 1;
    } while (iVar5 < DAT_00803398);
  }
  return;
}

// 00564F30 FUN_00564f30
#line 4 "decomp/ST.exe/functions/00564F30/decomp.c"
int st::fn_00564F30(int param_1,int param_2,int param_3,int *param_4,int param_5,int param_6)

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
  local_EAX_378 = st::fn_004043A9(DAT_00803304,DAT_00803308,param_1,param_2);
  iVar8 = (DAT_00803384 + 2) * DAT_00803320;
  if (local_EAX_378 < iVar8) {
    local_EAX_378 = iVar8;
  }
  local_8 = (int)(local_EAX_378 * uVar10) / DAT_00803390;
  piVar14 = *(int **)(DAT_008033b0 + param_3 * 4);
  iVar3 = st::fn_006DB6D0(iVar2);
  iVar7 = st::fn_006DB640(iVar2);
  local_28 = param_2 * 0x10000 - DAT_00803354 * -iVar7 >> 0x10;
  iVar8 = param_1 * 0x10000 - DAT_00803354 * iVar3 >> 0x10;
  iVar6 = st::fn_006ACF90(iVar8,local_28,DAT_00803304,DAT_00803308);
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
    local_EAX_737 = st::fn_004043A9(DAT_00803304,DAT_00803308,local_18,local_14);
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
  local_EAX_1016 = st::fn_004043A9(DAT_00803304,DAT_00803308,local_18,local_14);
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
  iVar15 = st::fn_004043A9(DAT_00803304,DAT_00803308,param_1,param_2);
  iVar12 = 0;
  sVar1 = *(short *)(DAT_008033b4 + (DAT_008033a4 * param_2 + param_1) * 2);
  if ((sVar1 != 0) && (sVar1 != -1)) {
    iVar12 = ((DAT_0080339c * DAT_00803320 + (int)sVar1) - iVar15) + -1;
  }
  iVar15 = st::fn_00562CD0(param_1,param_2,param_3);
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
        st::fn_0072DA70
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

// 00566590 CreateSoundManager
#line 4 "decomp/ST.exe/functions/00566590/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA924>00403C97

   [STObjectFactoryApplier] Central object factory for 0x012E (ST_OBJECT_SOUND_MANAGER).
   Evidence: registry[64] at 007CA920 stores type 0x012E and executable pointer 00403C97; allocation
   size 65 uniquely matches /SoundManagerTy */

SoundManagerTy * __cdecl st::fn_00566590(void)

{
  SoundManagerTy *this;

  this = (SoundManagerTy *)st::fn_006B04D0(0x41);
  if (this != nullptr) {
    st::fn_006E5FB0(this);
    this->vtable = &st_global_0079B024;
    this->field_0038 = CASE_0;
    this->field_0024 = 0;
    this->field_0020 = 0;
    this->field_0039 = -1;
    this->field_003D = 0;
    this->field_0028 = 0;
    this->field_002C = 0;
    this->field_0030 = 0;
    this->field_0034 = 0;
    this->field_0018 = nullptr;
    return this;
  }
  return nullptr;
}

// 00566BD0 FUN_00566bd0
#line 4 "decomp/ST.exe/functions/00566BD0/decomp.c"
void __thiscall st::fn_00566BD0(void *this,int param_1)

{
  uint uVar1;

  if ((param_1 != 0) && (g_sT3DSMAPContext_00807598 != nullptr)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar1 = st::fn_006EB310(g_sT3DSMAPContext_00807598,*(uint *)(param_1 + 0x1ed));
    if (uVar1 != 0) {
      STField<undefined4>(this,0x24) = STField<undefined4>(this,0x1c);
    }
  }
  return;
}

// 00566E70 FUN_00566e70
#line 4 "decomp/ST.exe/functions/00566E70/decomp.c"
void __thiscall st::fn_00566E70(void *this,DWORD_PTR param_1)

{
  MCIDEVICEID *dwParam2;
  MCIDEVICEID MVar1;
  int iVar2;

  st::fn_007193F0();
  if ((DAT_00807300 & 0xff) == 2) {
    dwParam2 = (MCIDEVICEID *)((int)this + 0xf8f);
    if (STField<int>(this,0xf8f) != 0) {
      st::fn_00719560((DWORD_PTR)dwParam2);
      st::fn_00719C60((DWORD_PTR)dwParam2);
    }
    MVar1 = st::fn_00719410(0,CASE_3,(int)this + 0x640);
    *dwParam2 = MVar1;
    if (MVar1 != 0) {
      iVar2 = st::fn_00719900(dwParam2);
      if (iVar2 == 0) {
        iVar2 = st::fn_00719BB0(dwParam2);
        if (iVar2 != 0) {
          st::fn_00719960(dwParam2);
          st::fn_007199F0(param_1,1,dwParam2);
        }
      }
    }
  }
  return;
}

// 00566F30 FUN_00566f30
#line 4 "decomp/ST.exe/functions/00566F30/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0056CBD0 -> 00566F30 @ 0056CEF3 | 0056CBD0 -> 00566F30 @ 0056CF15

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_00566F30(void *this,HWND param_1)

{
  MCIDEVICEID *dwParam2;
  MCIDEVICEID MVar1;
  int iVar2;

  st::fn_007193F0();
  if ((DAT_00807300 & 0xff) == 2) {
    dwParam2 = (MCIDEVICEID *)((int)this + 0xf8f);
    if (STField<int>(this,0xf8f) != 0) {
      st::fn_00719560((DWORD_PTR)dwParam2);
      st::fn_00719C60((DWORD_PTR)dwParam2);
    }
    MVar1 = st::fn_00719410(0,CASE_3,(int)this + 0x640);
    *dwParam2 = MVar1;
    if (MVar1 != 0) {
      iVar2 = st::fn_00719900(dwParam2);
      if (iVar2 == 0) {
        iVar2 = st::fn_00719BB0(dwParam2);
        if (iVar2 != 0) {
          st::fn_00719960(dwParam2);
          st::fn_007199F0((DWORD_PTR)param_1,1,dwParam2);
        }
      }
    }
  }
  return;
}

// 00566FF0 FUN_00566ff0
#line 4 "decomp/ST.exe/functions/00566FF0/decomp.c"
void __fastcall st::fn_00566FF0(void *param_1)

{
  uint uVar1;

  st::fn_007193F0();
  uVar1 = DAT_00807300 & 0xff;
  if (uVar1 == 2) {
    if (STField<int>(param_1,0xf8f) != 0) {
      st::fn_00719560((int)param_1 + 0xf8fU);
      st::fn_00719C60((int)param_1 + 0xf8fU);
    }
  }
  else if ((uVar1 == 4) || (uVar1 == 8)) {
    st::fn_00401CDA(param_1,CASE_B);
    return;
  }
  return;
}

// 00567060 FUN_00567060
#line 4 "decomp/ST.exe/functions/00567060/decomp.c"
uint __fastcall st::fn_00567060(int param_1)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  InternalExceptionFrame local_54;
  uint local_10;
  uint local_c;
  uint local_8;

  local_10 = 0;
  st::fn_007193F0();
  uVar3 = DAT_00807300 & 0xff;
  if (uVar3 == 2) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)(param_1 + 0xf8f) != 0) {
      bVar2 = st::fn_00719650((MCIDEVICEID *)(param_1 + 0xf8f));
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      return CONCAT31(extraout_var,bVar2);
    }
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  else if (((uVar3 == 4) || (uVar3 == 8)) && (*(int *)(param_1 + 0xf8b) != 0)) {
    local_c = 0;
    local_8 = local_8 & 0xffffff00;
    do {
      local_54.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_54;
      iVar4 = st::fn_0072D7F0(local_54.jumpBuffer,0);
      if (iVar4 == 0) {
        st::fn_006C1F00(local_8 & 0xff,&local_c,nullptr);
      }
      g_currentExceptionFrame = local_54.previous;
      if (local_c == 1) {
        local_10 = 1;
      }
      bVar1 = (char)local_8 + 1;
      local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar1));
    } while (bVar1 < 2);
    return local_10;
  }
  return 0;
}

// 00567180 FUN_00567180
#line 4 "decomp/ST.exe/functions/00567180/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 0056FA60 -> 00567180 @ 0057083B

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_00567180(void *this,HWND param_1)

{
  int iVar1;
  InternalExceptionFrame local_4c;
  void *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar1 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (iVar1 == 0) {
    STField<undefined4>(local_8,0xf8b) = 1;
    st::fn_006C1530(param_1,1);
    st::fn_006C2140(0x41200000);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  STField<undefined4>(local_8,0xf8b) = 0;
  return;
}

// 00567220 FUN_00567220
#line 4 "decomp/ST.exe/functions/00567220/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __fastcall st::fn_00567220(AnonShape_00567220_C9DD1C7D *param_1)

{

  if (param_1->field_0F8B != 0) {
    st::fn_006C1E20();
    memset(&param_1->field_0xe0b, 0, 0x180); /* compiler bulk-zero initialization */
  }
  if ((AnonShape_006C2390_A203A467 *)param_1->field_0DF7 != nullptr) {
    st::fn_006C2390((AnonShape_006C2390_A203A467 *)param_1->field_0DF7);
    param_1->field_0DF7 = 0;
  }
  if (param_1->field_0F8B != 0) {
    st::fn_006C2050();
  }
  param_1->field_0F8B = 0;
  return;
}

// 005672A0 FUN_005672a0
#line 4 "decomp/ST.exe/functions/005672A0/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 0056ADC0 -> 005672A0 @ 0056B359 */

void __thiscall st::fn_005672A0(void *this,HWND param_1)

{
  st::fn_00402F54(this,param_1);
  if (STField<int>(this,0xf8b) != 0) {
    st::fn_00402810((int)this);
  }
  return;
}

// 005672E0 FUN_005672e0
#line 4 "decomp/ST.exe/functions/005672E0/decomp.c"
void __fastcall st::fn_005672E0(AnonShape_005672E0_9A0A2ED1 *param_1)

{
  st::fn_00401393((int)param_1);
  if ((AnonShape_006C2390_A203A467 *)param_1->field_0DF7 != nullptr) {
    st::fn_006C2390((AnonShape_006C2390_A203A467 *)param_1->field_0DF7);
    param_1->field_0DF7 = 0;
  }
  if (param_1->field_0F8B != 0) {
    st::fn_006C2050();
  }
  param_1->field_0F8B = 0;
  return;
}

// 00567330 FUN_00567330
#line 4 "decomp/ST.exe/functions/00567330/decomp.c"
void __fastcall st::fn_00567330(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  char *pcVar10;
  char *pcVar11;
  byte *pbVar12;
  byte local_150 [260];
  InternalExceptionFrame local_4c;
  int local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((*(int *)(param_1 + 0xdef) == 0) || (*(int *)(param_1 + 0xdf3) == 0)) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = param_1;
    iVar4 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
    iVar3 = local_8;
    if (iVar4 == 0) {
      uVar6 = 0xffffffff;
      pcVar10 = (char *)(local_8 + 0x230);
      do {
        pcVar11 = pcVar10;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar11 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar11;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      pbVar9 = (byte *)(pcVar11 + -uVar6);
      pbVar12 = local_150;
      memmove(pbVar12, pbVar9, uVar6); /* compiler REP MOVS byte copy */
      uVar7 = 0;
      uVar6 = 0xffffffff;
      pcVar10 = PTR_s_sounds_0079b028;
      do {
        pcVar11 = pcVar10;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar11 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar11;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar8 = -1;
      pbVar9 = local_150;
      do {
        pbVar12 = pbVar9;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pbVar12 = pbVar9 + 1;
        bVar2 = *pbVar9;
        pbVar9 = pbVar12;
      } while (bVar2 != 0);
      pbVar9 = (byte *)(pcVar11 + -uVar6);
      pbVar12 = pbVar12 + -1;
      memmove(pbVar12, pbVar9, uVar6); /* compiler REP MOVS byte copy */
      puVar4 = st::fn_006F0EC0(0x345,local_150,0,0,0);
      *(undefined4 **)(iVar3 + 0xdef) = puVar4;
      piVar5 = st::fn_0071A5E0((int)puVar4,"SOUNDLIST",0);
      *(int **)(iVar3 + 0xdf3) = piVar5;
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    *(undefined4 *)(local_8 + 0xf8b) = 0;
  }
  return;
}

// 00567490 FUN_00567490
#line 4 "decomp/ST.exe/functions/00567490/decomp.c"
void __fastcall st::fn_00567490(int param_1)

{

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0xf8b) != 0) {
    st::fn_006C1E20();
    memset((void *)(param_1 + 0xe0b), 0, 0x180); /* compiler bulk-zero initialization */
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0xdf3) != 0) {
    st::fn_0071A8D0((int *)(param_1 + 0xdf3));
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(cMf32 **)(param_1 + 0xdef) != nullptr) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_006F1170(*(cMf32 **)(param_1 + 0xdef));
    *(undefined4 *)(param_1 + 0xdef) = 0;
  }
  return;
}

// 00567510 FUN_00567510
#line 4 "decomp/ST.exe/functions/00567510/decomp.c"
void __thiscall st::fn_00567510(void *this,int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  float fVar2;
  void *pvVar3;
  int local_EAX_135;
  int iVar5;
  int iVar4;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  InternalExceptionFrame local_b0;
  InternalExceptionFrame local_6c;
  uint local_28;
  int local_24;
  void *local_20;
  int local_1c;
  uint local_18;
  int local_14;
  int *local_10;
  int local_c;
  int local_8;

  if (STField<int>(this,0xf8b) == 0) {
    return;
  }
  local_20 = this;
  if (DAT_00807363 == '\0') {
    if ((((STField<int>(this,0x10d9) == param_1) && (STField<int>(this,0x10dd) == param_2)) &&
        (STField<int>(this,0x10e5) == param_3)) && (STField<int>(this,0x10e1) == param_4)) {
      return;
    }
    STField<int>(this,0x10d9) = param_1;
    STField<int>(this,0x10dd) = param_2;
    STField<int>(this,0x10e5) = param_3;
    STField<int>(this,0x10e1) = param_4;
    if ((param_3 == 0) || (param_3 == 2)) {
      iVar13 = 1;
    }
    else {
      iVar13 = -1;
    }
    STField<int>(this,0x10e9) = iVar13;
    STField<int>(this,0x10ed) = param_2 - iVar13 * param_1;
    local_b0.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_b0;
    iVar4 = st::fn_0072D7F0(local_b0.jumpBuffer,0);
    pvVar3 = local_20;
    if (iVar4 != 0) {
      g_currentExceptionFrame = local_b0.previous;
      return;
    }
    local_8 = 2;
    local_10 = (int *)((int)local_20 + 0xe23);
    do {
      iVar13 = local_8;
      st::fn_006C1F00(local_8,&local_18,nullptr);
      iVar5 = local_8;
      if ((local_18 == 1) &&
         ((((3 < iVar13 && (iVar13 < 0xb)) || ((0x11 < iVar13 && (iVar13 < 0x15)))) ||
          ((10 < iVar13 && (iVar13 < 0x12)))))) {
        iVar9 = STField<int>(pvVar3,0x10e1) * 0x10;
        local_14 = (*(int *)(&DAT_007c9794 + iVar9) * (DAT_0080730e + 4000)) / 100 + -4000;
        local_1c = local_10[1];
        local_24 = *local_10;
        uVar6 = STField<int>(pvVar3,0x10d9) - local_24;
        uVar10 = (int)uVar6 >> 0x1f;
        uVar7 = STField<int>(pvVar3,0x10dd) - local_1c;
        iVar14 = (uVar6 ^ uVar10) - uVar10;
        uVar6 = (int)uVar7 >> 0x1f;
        iVar13 = (uVar7 ^ uVar6) - uVar6;
        iVar11 = iVar14;
        if (iVar14 <= iVar13) {
          iVar11 = iVar13;
        }
        iVar11 = iVar11 + 1;
        STField<int>(pvVar3,0x10f1) = iVar11;
        if (*(int *)(&DAT_007c9788 + iVar9) < iVar11) {
          iVar11 = *(int *)(&DAT_007c9788 + iVar9);
        }
        iVar8 = local_14;
        if (*(int *)(&DAT_007c9790 + iVar9) < iVar11) {
          iVar11 = iVar14;
          if (iVar14 <= iVar13) {
            iVar11 = iVar13;
          }
          iVar11 = iVar11 + 1;
          STField<int>(pvVar3,0x10f1) = iVar11;
          if (*(int *)(&DAT_007c9788 + iVar9) < iVar11) {
            iVar11 = *(int *)(&DAT_007c9788 + iVar9);
          }
          if (*(int *)(&DAT_007c978c + iVar9) < iVar11) {
            uVar6 = local_14 * 2 - 8000;
            uVar7 = (int)uVar6 / 3 + ((int)uVar6 >> 0x1f);
            uVar6 = uVar6 >> 0x1f;
          }
          else {
            if (iVar13 < iVar14) {
              iVar13 = iVar14;
            }
            iVar13 = iVar13 + 1;
            STField<int>(pvVar3,0x10f1) = iVar13;
            local_c = *(int *)(&DAT_007c9788 + iVar9);
            if (iVar13 <= *(int *)(&DAT_007c9788 + iVar9)) {
              local_c = iVar13;
            }
            iVar13 = (4000U - local_14) * 2;
            local_28 = (4000U - local_14 & 0x7fffffff) >> 0x1e;
            uVar6 = local_14 * 2 - 8000;
            uVar7 = uVar6 >> 0x1f;
            uVar6 = (int)uVar6 / 3 + ((int)uVar6 >> 0x1f) +
                    (int)((iVar13 / 3 + (iVar13 >> 0x1f) + local_28 + local_14) *
                         (*(int *)(&DAT_007c978c + iVar9) - local_c)) /
                    (*(int *)(&DAT_007c978c + iVar9) - *(int *)(&DAT_007c9790 + iVar9));
          }
          iVar8 = uVar7 + uVar6;
        }
        st::fn_006C1CE0(local_8,iVar8);
        iVar13 = STField<int>(pvVar3,0x10e9) * local_24 + STField<int>(pvVar3,0x10ed);
        uVar6 = iVar13 - local_1c >> 0x1f;
        iVar11 = (int)(((iVar13 - local_1c ^ uVar6) - uVar6) * 7) / 10;
        iVar14 = STField<int>(pvVar3,0x10e1) * 0x10;
        STField<int>(pvVar3,0x10f1) = iVar11;
        iVar9 = *(int *)(&DAT_007c9788 + iVar14);
        if (iVar11 <= *(int *)(&DAT_007c9788 + iVar14)) {
          iVar9 = iVar11;
        }
        if (iVar9 < *(int *)(&DAT_007c9790 + iVar14)) {
          STField<int>(pvVar3,0x10f1) = iVar11;
          local_c = *(int *)(&DAT_007c9788 + iVar14);
          if (iVar11 <= *(int *)(&DAT_007c9788 + iVar14)) {
            local_c = iVar11;
          }
          iVar11 = (int)(1000 / (longlong)*(int *)(&DAT_007c9790 + iVar14)) * local_c;
        }
        else {
          iVar11 = 1000;
        }
        STField<int>(pvVar3,0x10f1) = iVar13;
        if (iVar13 == local_1c) {
          iVar13 = 0;
        }
        else {
          if ((STField<int>(pvVar3,0x10e5) == 0) || (STField<int>(pvVar3,0x10e5) == 3)) {
            bVar1 = iVar13 <= local_1c;
          }
          else {
            bVar1 = local_1c <= iVar13;
          }
          iVar13 = (bVar1 - 1 & 2) - 1;
        }
        st::fn_006C1D80(iVar5,iVar13 * iVar11);
        iVar13 = iVar5;
      }
      local_8 = iVar13 + 1;
      local_10 = local_10 + 3;
    } while (local_8 < 0x20);
    g_currentExceptionFrame = local_b0.previous;
    return;
  }
  if ((((STField<int>(this,0x10d9) == param_1) && (STField<int>(this,0x10dd) == param_2)) &&
      (STField<int>(this,0x10e5) == param_3)) && (STField<int>(this,0x10e1) == param_4)) {
    return;
  }
  STField<int>(this,0x10e5) = param_3;
  STField<int>(this,0x10d9) = param_1;
  STField<int>(this,0x10dd) = param_2;
  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  local_EAX_135 = st::fn_0072D7F0(local_6c.jumpBuffer,0);
  pvVar3 = local_20;
  if (local_EAX_135 != 0) {
    g_currentExceptionFrame = local_6c.previous;
    return;
  }
  switch(STField<undefined4>(local_20,0x10e5)) {
  case 0:
    local_8 = param_4 * 5 + 5;
    fVar2 = (float)local_8;
    uVar16 = 0xbf350481;
    uVar15 = 0xbf350481;
    break;
  case 1:
    local_8 = param_4 * 5 + 5;
    fVar2 = (float)local_8;
    uVar16 = 0xbf350481;
    uVar15 = 0x3f350481;
    break;
  case 2:
    local_8 = param_4 * 5 + 5;
    fVar2 = (float)local_8;
    uVar16 = 0x3f350481;
    uVar15 = 0x3f350481;
    break;
  case 3:
    local_8 = param_4 * 5 + 5;
    fVar2 = (float)local_8;
    uVar16 = 0x3f350481;
    uVar15 = 0xbf350481;
    break;
  default:
    goto switchD_005675bc_default;
  }
  st::fn_006C2160
            ((float)STField<int>(local_20,0x10d9),(float)STField<int>(local_20,0x10dd),fVar2,
             uVar15,uVar16,0,0,0,0x3f800000);
switchD_005675bc_default:
  if (STField<int>(pvVar3,0x10e1) != param_4) {
    STField<int>(pvVar3,0x10e1) = param_4;
    iVar13 = 2;
    piVar12 = (int *)((int)pvVar3 + 0xe23);
    do {
      st::fn_006C1F00(iVar13,&local_18,nullptr);
      if (local_18 == 1) {
        if (((3 < iVar13) && (iVar13 < 0xb)) || ((0x11 < iVar13 && (iVar13 < 0x15)))) {
          iVar5 = STField<int>(pvVar3,0x10e1) * 0x10;
          st::fn_006C2220
                    (iVar13,(float)*piVar12,(float)piVar12[1],0,
                     (float)*(int *)(&DAT_007c9790 + iVar5),(float)*(int *)(&DAT_007c9788 + iVar5));
        }
        if ((10 < iVar13) && (iVar13 < 0x12)) {
          iVar5 = STField<int>(pvVar3,0x10e1) * 0x10;
          st::fn_006C2220
                    (iVar13,(float)*piVar12,(float)piVar12[1],0,
                     (float)*(int *)(&DAT_007c9790 + iVar5),(float)*(int *)(&DAT_007c978c + iVar5));
        }
      }
      iVar13 = iVar13 + 1;
      piVar12 = piVar12 + 3;
    } while (iVar13 < 0x20);
  }
  g_currentExceptionFrame = local_6c.previous;
  return;
}

// 00567C10 FUN_00567c10
#line 4 "decomp/ST.exe/functions/00567C10/decomp.c"
void __thiscall st::fn_00567C10(void *this,int *param_1)

{
  bool bVar1;
  void *pvVar2;
  int iVar3;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  InternalExceptionFrame local_6c;
  int local_28;
  uint local_24;
  uint local_20;
  void *local_1c;
  int *local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  if (STField<int>(this,0xf8b) != 0) {
    local_6c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_6c;
    local_1c = this;
    iVar3 = st::fn_0072D7F0(local_6c.jumpBuffer,0);
    pvVar2 = local_1c;
    if (iVar3 == 0) {
      local_8 = 2;
      piVar11 = (int *)((int)local_1c + 0xe23);
      do {
        iVar5 = local_8;
        local_18 = piVar11;
        st::fn_006C1F00(local_8,&local_20,nullptr);
        if (((local_20 == 1) &&
            ((((3 < iVar5 && (iVar5 < 0xb)) || ((0x11 < iVar5 && (iVar5 < 0x15)))) ||
             ((10 < iVar5 && (iVar5 < 0x12)))))) && (piVar11[2] == param_1[2])) {
          *piVar11 = *param_1;
          local_14 = param_1[1];
          piVar11[1] = local_14;
          if (DAT_00807363 == '\0') {
            iVar6 = STField<int>(pvVar2,0x10e1) * 0x10;
            local_28 = *piVar11;
            local_c = (*(int *)(&DAT_007c9794 + iVar6) * (DAT_0080730e + 4000)) / 100 + -4000;
            uVar3 = STField<int>(pvVar2,0x10d9) - local_28;
            uVar8 = (int)uVar3 >> 0x1f;
            uVar4 = STField<int>(pvVar2,0x10dd) - local_14;
            iVar10 = (uVar3 ^ uVar8) - uVar8;
            uVar3 = (int)uVar4 >> 0x1f;
            iVar5 = (uVar4 ^ uVar3) - uVar3;
            iVar9 = iVar10;
            if (iVar10 <= iVar5) {
              iVar9 = iVar5;
            }
            iVar9 = iVar9 + 1;
            STField<int>(pvVar2,0x10f1) = iVar9;
            if (*(int *)(&DAT_007c9788 + iVar6) < iVar9) {
              iVar9 = *(int *)(&DAT_007c9788 + iVar6);
            }
            iVar7 = local_c;
            if (*(int *)(&DAT_007c9790 + iVar6) < iVar9) {
              iVar9 = iVar10;
              if (iVar10 <= iVar5) {
                iVar9 = iVar5;
              }
              iVar9 = iVar9 + 1;
              STField<int>(pvVar2,0x10f1) = iVar9;
              if (*(int *)(&DAT_007c9788 + iVar6) < iVar9) {
                iVar9 = *(int *)(&DAT_007c9788 + iVar6);
              }
              if (*(int *)(&DAT_007c978c + iVar6) < iVar9) {
                uVar3 = local_c * 2 - 8000;
                uVar4 = (int)uVar3 / 3 + ((int)uVar3 >> 0x1f);
                uVar3 = uVar3 >> 0x1f;
              }
              else {
                if (iVar5 < iVar10) {
                  iVar5 = iVar10;
                }
                iVar5 = iVar5 + 1;
                STField<int>(pvVar2,0x10f1) = iVar5;
                local_10 = *(int *)(&DAT_007c9788 + iVar6);
                if (iVar5 <= *(int *)(&DAT_007c9788 + iVar6)) {
                  local_10 = iVar5;
                }
                iVar5 = (4000U - local_c) * 2;
                local_24 = (4000U - local_c & 0x7fffffff) >> 0x1e;
                uVar3 = local_c * 2 - 8000;
                uVar4 = uVar3 >> 0x1f;
                uVar3 = (int)uVar3 / 3 + ((int)uVar3 >> 0x1f) +
                        (int)((iVar5 / 3 + (iVar5 >> 0x1f) + local_24 + local_c) *
                             (*(int *)(&DAT_007c978c + iVar6) - local_10)) /
                        (*(int *)(&DAT_007c978c + iVar6) - *(int *)(&DAT_007c9790 + iVar6));
              }
              iVar7 = uVar4 + uVar3;
            }
            st::fn_006C1CE0(local_8,iVar7);
            iVar6 = local_14;
            iVar5 = STField<int>(pvVar2,0x10e9) * local_28 + STField<int>(pvVar2,0x10ed);
            uVar3 = iVar5 - local_14 >> 0x1f;
            iVar9 = (int)(((iVar5 - local_14 ^ uVar3) - uVar3) * 7) / 10;
            iVar7 = STField<int>(pvVar2,0x10e1) * 0x10;
            STField<int>(pvVar2,0x10f1) = iVar9;
            iVar10 = *(int *)(&DAT_007c9788 + iVar7);
            if (iVar9 <= *(int *)(&DAT_007c9788 + iVar7)) {
              iVar10 = iVar9;
            }
            if (iVar10 < *(int *)(&DAT_007c9790 + iVar7)) {
              STField<int>(pvVar2,0x10f1) = iVar9;
              local_14 = *(int *)(&DAT_007c9788 + iVar7);
              if (iVar9 <= *(int *)(&DAT_007c9788 + iVar7)) {
                local_14 = iVar9;
              }
              iVar9 = (int)(1000 / (longlong)*(int *)(&DAT_007c9790 + iVar7)) * local_14;
            }
            else {
              iVar9 = 1000;
            }
            STField<int>(pvVar2,0x10f1) = iVar5;
            if (iVar5 == iVar6) {
              iVar5 = 0;
            }
            else {
              if ((STField<int>(pvVar2,0x10e5) == 0) || (STField<int>(pvVar2,0x10e5) == 3)) {
                bVar1 = iVar5 <= iVar6;
              }
              else {
                bVar1 = iVar6 <= iVar5;
              }
              iVar5 = (bVar1 - 1 & 2) - 1;
            }
            st::fn_006C1D80(local_8,iVar5 * iVar9);
            iVar5 = local_8;
            piVar11 = local_18;
          }
          else {
            st::fn_006C2220(local_8,(float)*piVar11,(float)local_14,0,-1.0,-1.0);
            iVar5 = local_8;
          }
        }
        local_8 = iVar5 + 1;
        piVar11 = piVar11 + 3;
      } while (local_8 < 0x20);
      g_currentExceptionFrame = local_6c.previous;
      return;
    }
    g_currentExceptionFrame = local_6c.previous;
  }
  return;
}

// 00568010 FUN_00568010
#line 4 "decomp/ST.exe/functions/00568010/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00568010_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_4=4;CASE_8=8 */

void __thiscall st::fn_00568010(void *this,Global_sub_00568010_param_1Enum param_1)

{
  SoundClassTy *this_00;
  int iVar1;
  undefined4 *puVar2;
  InternalExceptionFrame local_50;
  SoundClassTy *local_c;
  uint local_8;

  if (STField<int>(this,0xf8b) != 0) {
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    local_c = this;
    iVar1 = st::fn_0072D7F0(local_50.jumpBuffer,0);
    this_00 = local_c;
    if (iVar1 == 0) {
      switch(param_1) {
      case CASE_1:
        iVar1 = 2;
        puVar2 = (undefined4 *)&local_c->field_0xe23;
        do {
          if ((((0x1a < iVar1) && (iVar1 < 0x1e)) || ((0x11 < iVar1 && (iVar1 < 0x15)))) &&
             (st::fn_006C1F00(iVar1,&local_8,nullptr), local_8 == 1)) {
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2[2] = 0;
            st::fn_006C1BA0(iVar1);
          }
          iVar1 = iVar1 + 1;
          puVar2 = puVar2 + 3;
        } while (iVar1 < 0x20);
        g_currentExceptionFrame = local_50.previous;
        return;
      case CASE_2:
        iVar1 = 4;
        puVar2 = (undefined4 *)&local_c->field_0xe3b;
        do {
          st::fn_006C1F00(iVar1,&local_8,nullptr);
          if (local_8 == 1) {
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2[2] = 0;
            st::fn_006C1BA0(iVar1);
          }
          iVar1 = iVar1 + 1;
          puVar2 = puVar2 + 3;
        } while (iVar1 < 0xb);
        g_currentExceptionFrame = local_50.previous;
        return;
      case CASE_4:
        iVar1 = 2;
        do {
          if (((((1 < iVar1) && (iVar1 < 4)) || ((0x1d < iVar1 && (iVar1 < 0x20)))) ||
              ((10 < iVar1 && (iVar1 < 0x12)))) &&
             (st::fn_006C1F00(iVar1,&local_8,nullptr), local_8 == 1)) {
            *(undefined4 *)(&this_00->field_0xe0b + iVar1 * 0xc) = 0;
            *(undefined4 *)(&this_00->field_0xe0f + iVar1 * 0xc) = 0;
            *(undefined4 *)(&this_00->field_0xe13 + iVar1 * 0xc) = 0;
            st::fn_006C1BA0(iVar1);
            if (iVar1 == 2) {
              st::fn_00404BD8(this_00,SOUND_MODE_1,nullptr,0x4b7,nullptr,0);
            }
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < 0x20);
        g_currentExceptionFrame = local_50.previous;
        return;
      case CASE_8:
        iVar1 = 0x15;
        puVar2 = (undefined4 *)&local_c->field_0xf07;
        do {
          st::fn_006C1F00(iVar1,&local_8,nullptr);
          if (local_8 == 1) {
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2[2] = 0;
            st::fn_006C1BA0(iVar1);
          }
          iVar1 = iVar1 + 1;
          puVar2 = puVar2 + 3;
        } while (iVar1 < 0x1a);
      }
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    g_currentExceptionFrame = local_50.previous;
  }
  return;
}

// 005682C0 FUN_005682c0
#line 4 "decomp/ST.exe/functions/005682C0/decomp.c"
void __thiscall st::fn_005682C0(void *this,int param_1)

{
  bool bVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  InternalExceptionFrame local_6c;
  int local_28;
  uint local_24;
  uint local_20;
  void *local_1c;
  int *local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  if (STField<int>(this,0xf8b) != 0) {
    local_6c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_6c;
    local_1c = this;
    iVar4 = st::fn_0072D7F0(local_6c.jumpBuffer,0);
    pvVar2 = local_1c;
    if (iVar4 == 0) {
      if (DAT_00807363 == '\0') {
        local_14 = 2;
        piVar12 = (int *)((int)local_1c + 0xe27);
        do {
          iVar11 = local_14;
          local_18 = piVar12;
          st::fn_006C1F00(local_14,&local_20,nullptr);
          iVar3 = local_14;
          if (local_20 == 1) {
            if ((((iVar11 < 4) || (10 < iVar11)) && ((iVar11 < 0x12 || (0x14 < iVar11)))) &&
               ((iVar11 < 0xb || (0x11 < iVar11)))) {
              st::fn_006C1CE0(iVar11,param_1);
            }
            else {
              iVar8 = STField<int>(pvVar2,0x10e1) * 0x10;
              local_28 = piVar12[-1];
              local_10 = *piVar12;
              local_8 = (*(int *)(&DAT_007c9794 + iVar8) * (param_1 + 4000)) / 100 + -4000;
              uVar4 = STField<int>(pvVar2,0x10dd) - local_10;
              uVar9 = (int)uVar4 >> 0x1f;
              uVar5 = STField<int>(pvVar2,0x10d9) - local_28;
              iVar11 = (uVar4 ^ uVar9) - uVar9;
              uVar4 = (int)uVar5 >> 0x1f;
              iVar6 = (uVar5 ^ uVar4) - uVar4;
              iVar10 = iVar6;
              if (iVar6 <= iVar11) {
                iVar10 = iVar11;
              }
              iVar10 = iVar10 + 1;
              STField<int>(pvVar2,0x10f1) = iVar10;
              if (*(int *)(&DAT_007c9788 + iVar8) < iVar10) {
                iVar10 = *(int *)(&DAT_007c9788 + iVar8);
              }
              iVar7 = local_8;
              if (*(int *)(&DAT_007c9790 + iVar8) < iVar10) {
                iVar10 = iVar6;
                if (iVar6 <= iVar11) {
                  iVar10 = iVar11;
                }
                iVar10 = iVar10 + 1;
                STField<int>(pvVar2,0x10f1) = iVar10;
                if (*(int *)(&DAT_007c9788 + iVar8) < iVar10) {
                  iVar10 = *(int *)(&DAT_007c9788 + iVar8);
                }
                if (*(int *)(&DAT_007c978c + iVar8) < iVar10) {
                  uVar4 = local_8 * 2 - 8000;
                  uVar5 = (int)uVar4 / 3 + ((int)uVar4 >> 0x1f);
                  uVar4 = uVar4 >> 0x1f;
                }
                else {
                  if (iVar11 < iVar6) {
                    iVar11 = iVar6;
                  }
                  iVar11 = iVar11 + 1;
                  STField<int>(pvVar2,0x10f1) = iVar11;
                  local_c = *(int *)(&DAT_007c9788 + iVar8);
                  if (iVar11 <= *(int *)(&DAT_007c9788 + iVar8)) {
                    local_c = iVar11;
                  }
                  iVar11 = (4000U - local_8) * 2;
                  local_24 = (4000U - local_8 & 0x7fffffff) >> 0x1e;
                  uVar4 = local_8 * 2 - 8000;
                  uVar5 = uVar4 >> 0x1f;
                  uVar4 = (int)uVar4 / 3 + ((int)uVar4 >> 0x1f) +
                          (int)((iVar11 / 3 + (iVar11 >> 0x1f) + local_24 + local_8) *
                               (*(int *)(&DAT_007c978c + iVar8) - local_c)) /
                          (*(int *)(&DAT_007c978c + iVar8) - *(int *)(&DAT_007c9790 + iVar8));
                }
                iVar7 = uVar5 + uVar4;
              }
              st::fn_006C1CE0(local_14,iVar7);
              iVar10 = STField<int>(pvVar2,0x10e9) * local_28 + STField<int>(pvVar2,0x10ed);
              uVar4 = iVar10 - local_10 >> 0x1f;
              iVar11 = (int)(((iVar10 - local_10 ^ uVar4) - uVar4) * 7) / 10;
              iVar8 = STField<int>(pvVar2,0x10e1) * 0x10;
              STField<int>(pvVar2,0x10f1) = iVar11;
              iVar6 = *(int *)(&DAT_007c9788 + iVar8);
              if (iVar11 <= *(int *)(&DAT_007c9788 + iVar8)) {
                iVar6 = iVar11;
              }
              if (iVar6 < *(int *)(&DAT_007c9790 + iVar8)) {
                STField<int>(pvVar2,0x10f1) = iVar11;
                local_c = *(int *)(&DAT_007c9788 + iVar8);
                if (iVar11 <= *(int *)(&DAT_007c9788 + iVar8)) {
                  local_c = iVar11;
                }
                iVar6 = (int)(1000 / (longlong)*(int *)(&DAT_007c9790 + iVar8)) * local_c;
              }
              else {
                iVar6 = 1000;
              }
              STField<int>(pvVar2,0x10f1) = iVar10;
              iVar11 = iVar3;
              if (iVar10 == local_10) {
                st::fn_006C1D80(iVar3,0);
                piVar12 = local_18;
              }
              else {
                if ((STField<int>(pvVar2,0x10e5) == 0) || (STField<int>(pvVar2,0x10e5) == 3))
                {
                  bVar1 = iVar10 <= local_10;
                }
                else {
                  bVar1 = local_10 <= iVar10;
                }
                st::fn_006C1D80(iVar3,((bVar1 - 1 & 2) - 1) * iVar6);
                piVar12 = local_18;
              }
            }
          }
          local_14 = iVar11 + 1;
          piVar12 = piVar12 + 3;
        } while (local_14 < 0x20);
        g_currentExceptionFrame = local_6c.previous;
        return;
      }
      iVar11 = 2;
      do {
        st::fn_006C1CE0(iVar11,param_1);
        iVar11 = iVar11 + 1;
      } while (iVar11 < 0x20);
      g_currentExceptionFrame = local_6c.previous;
      return;
    }
    g_currentExceptionFrame = local_6c.previous;
  }
  return;
}

// 005686C0 FUN_005686c0
#line 4 "decomp/ST.exe/functions/005686C0/decomp.c"
void __thiscall st::fn_005686C0(void *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  InternalExceptionFrame local_4c;
  uint local_8;

  if (STField<int>(this,0xf8b) != 0) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    iVar1 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
    if (iVar1 == 0) {
      iVar1 = 0;
      iVar2 = 2;
      do {
        st::fn_006C1F00(iVar1,&local_8,nullptr);
        if (local_8 == 1) {
          st::fn_006C1CE0(iVar1,param_1);
        }
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
  }
  return;
}

// 00568780 FUN_00568780
#line 4 "decomp/ST.exe/functions/00568780/decomp.c"
undefined4 __thiscall st::fn_00568780(void *this,int param_1,int param_2)

{
  int iVar1;
  InternalExceptionFrame local_50;
  uint local_c;
  undefined4 local_8;

  local_8 = 0;
  if (STField<int>(this,0xf8b) == 0) {
    return 0;
  }
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar1 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  if (iVar1 == 0) {
    for (; param_1 <= param_2; param_1 = param_1 + 1) {
      st::fn_006C1F00(param_1,&local_c,nullptr);
      if (local_c == 0) {
        local_8 = 1;
      }
    }
    g_currentExceptionFrame = local_50.previous;
    return local_8;
  }
  g_currentExceptionFrame = local_50.previous;
  return local_8;
}

// 00568850 FUN_00568850
#line 4 "decomp/ST.exe/functions/00568850/decomp.c"
void __thiscall st::fn_00568850(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  InternalExceptionFrame local_50;
  uint local_c;
  void *local_8;

  if (STField<int>(this,0xf8b) != 0) {
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    local_8 = this;
    iVar1 = st::fn_0072D7F0(local_50.jumpBuffer,0);
    if (iVar1 == 0) {
      iVar1 = 2;
      piVar2 = (int *)((int)local_8 + 0xe2b);
      do {
        st::fn_006C1F00(iVar1,&local_c,nullptr);
        if (((local_c == 1) &&
            ((((3 < iVar1 && (iVar1 < 0xb)) || ((0x11 < iVar1 && (iVar1 < 0x15)))) ||
             ((10 < iVar1 && (iVar1 < 0x12)))))) && (*piVar2 == *(int *)(param_1 + 8))) {
          st::fn_006C1BA0(iVar1);
        }
        iVar1 = iVar1 + 1;
        piVar2 = piVar2 + 3;
      } while (iVar1 < 0x20);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    g_currentExceptionFrame = local_50.previous;
  }
  return;
}

// 00568940 FUN_00568940
#line 4 "decomp/ST.exe/functions/00568940/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00568940_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_B=11;CASE_C=12 */

void __thiscall st::fn_00568940(void *this,Global_sub_00568940_param_1Enum param_1)

{
  void *this_00;
  int iVar1;
  InternalExceptionFrame local_4c;
  void *local_8;

  if (STField<int>(this,0xf8b) != 0) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    iVar1 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
    this_00 = local_8;
    if (iVar1 == 0) {
      switch(param_1) {
      case CASE_1:
      case CASE_8:
        iVar1 = 2;
        do {
          st::fn_0040329C(this_00,iVar1);
          iVar1 = iVar1 + 1;
        } while (iVar1 < 4);
        g_currentExceptionFrame = local_4c.previous;
        return;
      case CASE_2:
        iVar1 = 4;
        do {
          st::fn_0040329C(this_00,iVar1);
          iVar1 = iVar1 + 1;
        } while (iVar1 < 0xb);
        g_currentExceptionFrame = local_4c.previous;
        return;
      case CASE_3:
        iVar1 = 0xb;
        do {
          st::fn_0040329C(this_00,iVar1);
          iVar1 = iVar1 + 1;
        } while (iVar1 < 0x12);
        g_currentExceptionFrame = local_4c.previous;
        return;
      case CASE_4:
        iVar1 = 0x12;
        do {
          st::fn_0040329C(this_00,iVar1);
          iVar1 = iVar1 + 1;
        } while (iVar1 < 0x15);
        g_currentExceptionFrame = local_4c.previous;
        return;
      case CASE_5:
        iVar1 = 0x15;
        do {
          st::fn_0040329C(this_00,iVar1);
          iVar1 = iVar1 + 1;
        } while (iVar1 < 0x1a);
        g_currentExceptionFrame = local_4c.previous;
        return;
      case CASE_6:
        iVar1 = 0x1b;
        do {
          st::fn_0040329C(this_00,iVar1);
          iVar1 = iVar1 + 1;
        } while (iVar1 < 0x1e);
        g_currentExceptionFrame = local_4c.previous;
        return;
      case CASE_7:
        iVar1 = 0x1e;
        do {
          st::fn_0040329C(this_00,iVar1);
          iVar1 = iVar1 + 1;
        } while (iVar1 < 0x20);
        g_currentExceptionFrame = local_4c.previous;
        return;
      case CASE_B:
        iVar1 = 0;
        do {
          st::fn_0040329C(this_00,iVar1);
          iVar1 = iVar1 + 1;
        } while (iVar1 < 2);
        STField<undefined4>(this_00,0xe03) = 0xffffffff;
        STField<undefined4>(this_00,0xe07) = 0xffffffff;
        g_currentExceptionFrame = local_4c.previous;
        return;
      case CASE_C:
        st::fn_0040329C(local_8,0x1a);
      }
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
  }
  return;
}

// 00568BC0 FUN_00568bc0
#line 4 "decomp/ST.exe/functions/00568BC0/decomp.c"
void __thiscall st::fn_00568BC0(void *this,int param_1)

{
  int iVar1;
  InternalExceptionFrame local_4c;
  uint local_8;

  if (STField<int>(this,0xf8b) != 0) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    iVar1 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
    if (iVar1 == 0) {
      st::fn_006C1F00(param_1,&local_8,nullptr);
      if (local_8 == 1) {
        st::fn_006C1BA0(param_1);
      }
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
  }
  return;
}

// 0056A130 FUN_0056a130
#line 4 "decomp/ST.exe/functions/0056A130/decomp.c"
void __thiscall st::fn_0056A130(void *this,uint param_1,char param_2,int param_3,uint *param_4)

{
  int iVar1;
  uint uVar1;
  int iVar2;
  InternalExceptionFrame local_4c;
  void *local_8;

  if (STField<int>(this,0xf8b) == 0) {
    return;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar1 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (iVar1 == 0) {
    if (param_4 == nullptr) {
      param_4 = st::fn_0071A990(STField<AnonShape_0071A990_7656000F *>(local_8,0xdf3),
                             (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f),-1,
                             nullptr);
    }
    iVar2 = param_3;
    if (param_2 == '\x01') {
      if (param_4 == nullptr) {
        g_currentExceptionFrame = local_4c.previous;
        return;
      }
      if (param_3 < 0) {
        param_3 = 0;
        iVar2 = 0xf;
      }
      uVar1 = 2;
    }
    else if (param_2 == '\x02') {
      if (param_4 == nullptr) {
        g_currentExceptionFrame = local_4c.previous;
        return;
      }
      if (param_3 < 0) {
        param_3 = 0;
        uVar1 = 9;
        iVar2 = 0xf;
      }
      else {
        uVar1 = 9;
      }
    }
    else {
      if (param_4 == nullptr) {
        g_currentExceptionFrame = local_4c.previous;
        return;
      }
      if (param_3 < 0) {
        param_3 = 0x10;
        uVar1 = 0;
        iVar2 = 0x1f;
      }
      else {
        uVar1 = 0;
      }
    }
    st::fn_006C1390(param_4,0,uVar1,DAT_0080730e,0,param_3,iVar2);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  return;
}

// 0056A2A0 FUN_0056a2a0
#line 4 "decomp/ST.exe/functions/0056A2A0/decomp.c"
undefined4 __thiscall
st::fn_0056A2A0(void *this,cMf32 *param_1,char *param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  uint *puVar4;
  DWORD DVar5;
  undefined4 uVar6;
  InternalExceptionFrame local_4c;
  void *local_8;

  if (((STField<int>(this,0xf8b) != 0) && (param_2 != nullptr)) && (param_1 != nullptr))
  {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
    if (iVar3 == 0) {
      if ((*(uint *)(*(int *)(param_1->field_0000 + 4) + 8) & 0x100000) == 0) {
        puVar4 = (uint *)st::fn_00719D00(param_1,param_2,0,nullptr);
      }
      else {
        puVar4 = (uint *)st::fn_006F1B70(param_1,2,param_2,0);
      }
      pvVar2 = local_8;
      if (puVar4 != nullptr) {
        if (param_3 < 1) {
          iVar3 = STField<int>(local_8,0xe07);
          uVar1 = param_1->field_0000;
          if (iVar3 < 0) {
            if ((*(uint *)(*(int *)(uVar1 + 4) + 8) & 0x100000) == 0) {
              iVar3 = st::fn_006C1390(puVar4,0,0x48,DAT_0080730a,0,0,1);
              STField<int>(pvVar2,0xe07) = iVar3;
            }
            else {
              iVar3 = st::fn_006C2530(uVar1,(DWORD)puVar4,0,0x48,DAT_0080730a,0,0,1);
              STField<int>(pvVar2,0xe07) = iVar3;
            }
          }
          else if ((*(uint *)(*(int *)(uVar1 + 4) + 8) & 0x100000) == 0) {
            st::fn_006C1390(puVar4,0,0x48,DAT_0080730a,0,iVar3,iVar3);
          }
          else {
            st::fn_006C2530(uVar1,(DWORD)puVar4,0,0x48,DAT_0080730a,0,iVar3,iVar3);
          }
        }
        else {
          STField<int>(local_8,0xdfb) = param_3;
          STField<undefined4>(local_8,0xe03) = STField<undefined4>(local_8,0xe07);
          if ((*(uint *)(*(int *)(param_1->field_0000 + 4) + 8) & 0x100000) == 0) {
            iVar3 = st::fn_006C1390(puVar4,0,0,DAT_0080730a,0,0,1);
          }
          else {
            iVar3 = st::fn_006C2530
                              (param_1->field_0000,(DWORD)puVar4,0,0,DAT_0080730a,0,0,1);
          }
          STField<int>(pvVar2,0xe07) = iVar3;
          DVar5 = st::external_000000DA();
          STField<DWORD>(pvVar2,0xdff) = DVar5;
        }
        if (param_4 != nullptr) {
          uVar6 = st::fn_006C23F0((short *)puVar4);
          *param_4 = uVar6;
        }
      }
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
    g_currentExceptionFrame = local_4c.previous;
  }
  return 0xffffffff;
}

// 0056A4D0 FUN_0056a4d0
#line 4 "decomp/ST.exe/functions/0056A4D0/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 0056A4D0 returns zeroed full register at 0056A4DA @ 0056A4DC */

uint __fastcall st::fn_0056A4D0(int param_1)

{
  uint uVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0xe07) < 0) {
    return 0;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar1 = st::fn_006C1F90(*(int *)(param_1 + 0xe07));
  return uVar1;
}

// 0056A500 FUN_0056a500
#line 4 "decomp/ST.exe/functions/0056A500/decomp.c"
undefined4 st::fn_0056A500(void)

{
  DWORD DVar1;
  char local_2c [2];
  undefined1 local_2a;
  undefined1 local_20;
  undefined4 local_1e;

  if (DAT_00808783 == '\x03') {
    DVar1 = st::external_000000DA();
    if (499 < DVar1 - DAT_00806720) {
      local_2a = 5;
      DAT_00806720 = DVar1;
      if (DAT_0080877e != '\0') {
        local_20 = DAT_0080733b;
        local_1e = DAT_00808754;
        st::fn_00715360(g_int_00811764,0,'\x1a',local_2c,0x26,0,0xffffffff);
        return 0;
      }
      st::fn_00715360(g_int_00811764,1,'\x1a',local_2c,0x26,0,0xffffffff);
    }
  }
  return 0;
}

// 0056A5C0 FUN_0056a5c0
#line 1 "decomp/ST.exe/functions/0056A5C0/decomp.c"

/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=0056ADC0 @ 0056AE04
   -> TEST TEST EAX,EAX */

int st::fn_0056A5C0(void)

{
  st::external_00000053(&DAT_0085e000);
  return (uint)(0 < DAT_0085e000);
}

// 0056A820 FUN_0056a820
#line 4 "decomp/ST.exe/functions/0056A820/decomp.c"
void __fastcall st::fn_0056A820(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0056a822. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*param_1 + 4))();
  return;
}

// 0056A840 FUN_0056a840
#line 4 "decomp/ST.exe/functions/0056A840/decomp.c"
void __thiscall st::fn_0056A840(void *this,byte param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int local_8;

  puVar1 = nullptr;
  puVar2 = (undefined1 *)((int)this + (uint)param_1 * 8 + 0x142f);
  puVar3 = (undefined1 *)(param_1 + 0x142f + (int)this);
  local_8 = 8;
  do {
    *puVar2 = 0;
    *puVar3 = 0;
    if ((g_visibleClass_00802A88 != nullptr) &&
       (param_1 == STField<byte>(this,0x112d))) {
      st::fn_00405F15(g_visibleClass_00802A88,0,puVar1);
    }
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 8;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return;
}

// 0056A8D0 FUN_0056a8d0
#line 4 "decomp/ST.exe/functions/0056A8D0/decomp.c"
/* [STAbiConsistencyApplier] stack_parameter_width target=parameter:1: parameter=/byte Evidence:
   entry-use width=/byte; unmasked_dword_reads=0; evidence=0056A8D3 MOV EAX,dword ptr [EBP + 0x8];
   first-use mask */

void __thiscall st::fn_0056A8D0(void *this,byte param_1,byte param_2,char param_3)

{
  undefined *puVar1;

  puVar1 = (undefined *)(uint)param_1;
  *(char *)((int)this + (int)puVar1 * 8 + param_2 + 0x142f) = param_3;
  if ((g_visibleClass_00802A88 != nullptr) &&
     (param_2 == STField<byte>(this,0x112d))) {
    if (param_3 == '\0') {
      st::fn_00405F15(g_visibleClass_00802A88,0,puVar1);
      return;
    }
    if (STField<char>(this,0x1474) != '\0') {
      st::fn_00405F15(g_visibleClass_00802A88,1,puVar1);
    }
  }
  return;
}

// 0056A960 FUN_0056a960
#line 4 "decomp/ST.exe/functions/0056A960/decomp.c"
/* [STAbiConsistencyApplier] stack_parameter_width target=parameter:1: parameter=/byte Evidence:
   entry-use width=/byte; unmasked_dword_reads=0; evidence=0056A965 MOV EDX,dword ptr [EBP + 0x8];
   first-use mask

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STReturnSemanticsApplier] repair_unsafe_eax_rollback.
   Evidence: restore the earlier evidence-backed void type after an unsafe automated rollback;
   post-CALL EAX reads alone do not prove a source-level return value; machine CFG audit: used=1,
   ignored=2, unknown=0 */

void __thiscall st::fn_0056A960(void *this,byte param_1,byte param_2)

{
  undefined *puVar1;
  char cVar2;

  puVar1 = (undefined *)(uint)param_1;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  cVar2 = '\x01' - *(char *)((int)this + (int)puVar1 * 8 + param_2 + 0x142f);
  *(char *)((int)this + (int)puVar1 * 8 + param_2 + 0x142f) = cVar2;
  if ((g_visibleClass_00802A88 != nullptr) &&
     (param_2 == STField<byte>(this,0x112d))) {
    if (cVar2 == '\0') {
      st::fn_00405F15(g_visibleClass_00802A88,0,puVar1);
      return;
    }
    if (STField<char>(this,0x1474) != '\0') {
      st::fn_00405F15(g_visibleClass_00802A88,1,puVar1);
    }
  }
  return;
}

// 0056AA00 FUN_0056aa00
#line 4 "decomp/ST.exe/functions/0056AA00/decomp.c"
void __thiscall st::fn_0056AA00(void *this,byte param_1,char param_2)

{
  char *pcVar1;
  VisibleClassTy *this_00;
  byte bVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *local_8;

  if (STField<char>(this,0x146f) != '\0') {
    puVar4 = (undefined *)(uint)param_1;
    pcVar1 = (char *)((int)puVar4 * 0x51 + 0x11ca + (int)this);
    if (*pcVar1 != param_2) {
      if (g_visibleClass_00802A88 != nullptr) {
        if (param_1 == STField<byte>(this,0x112d)) {
          bVar2 = 0;
          local_8 = nullptr;
          pcVar3 = (char *)((int)this + 0x11ca);
          do {
            if (((pcVar3[-1] != -1) && (bVar2 != param_1)) && (*pcVar1 == *pcVar3)) {
              st::fn_00405F15(g_visibleClass_00802A88,0,local_8);
            }
            bVar2 = bVar2 + 1;
            local_8 = local_8 + 1;
            pcVar3 = pcVar3 + 0x51;
          } while (bVar2 < 8);
        }
        else if (*pcVar1 ==
                 *(char *)((uint)STField<byte>(this,0x112d) * 0x51 + 0x11ca + (int)this)) {
          st::fn_00405F15(g_visibleClass_00802A88,0,puVar4);
        }
      }
      *pcVar1 = param_2;
      if ((g_visibleClass_00802A88 != nullptr) &&
         (STField<char>(this,0x1474) != '\0')) {
        if (param_1 == STField<byte>(this,0x112d)) {
          bVar2 = 0;
          puVar4 = nullptr;
          pcVar3 = (char *)((int)this + 0x11ca);
          this_00 = g_visibleClass_00802A88;
          do {
            if (((pcVar3[-1] != -1) && (bVar2 != param_1)) && (*pcVar1 == *pcVar3)) {
              st::fn_00405F15(this_00,1,puVar4);
              this_00 = g_visibleClass_00802A88;
            }
            bVar2 = bVar2 + 1;
            puVar4 = puVar4 + 1;
            pcVar3 = pcVar3 + 0x51;
          } while (bVar2 < 8);
          return;
        }
        if (param_2 == *(char *)((uint)STField<byte>(this,0x112d) * 0x51 + 0x11ca + (int)this)) {
          st::fn_00405F15(g_visibleClass_00802A88,1,puVar4);
        }
      }
    }
  }
  return;
}

// 0056ABC0 FUN_0056abc0
#line 4 "decomp/ST.exe/functions/0056ABC0/decomp.c"
void __thiscall st::fn_0056ABC0(void *this,char *param_1)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  undefined *puVar5;
  byte *pbVar6;
  char *pcVar7;
  bool bVar8;

  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_1 == nullptr) {
    if (STField<char>(this,0x1474) != '\0') {
      if (g_visibleClass_00802A88 != nullptr) {
        bVar4 = 0;
        puVar5 = nullptr;
        pcVar7 = (char *)((int)this + 0x11c9);
        do {
          if ((*pcVar7 != -1) && (bVar4 != STField<byte>(this,0x112d))) {
            st::fn_00405F15(g_visibleClass_00802A88,0,puVar5);
          }
          bVar4 = bVar4 + 1;
          puVar5 = puVar5 + 1;
          pcVar7 = pcVar7 + 0x51;
        } while (bVar4 < 8);
      }
      STField<undefined1>(this,0x1474) = 0;
    }
  }
  else if ((STField<char>(this,0x1474) == '\0') &&
          (STField<undefined1>(this,0x1474) = 1, g_visibleClass_00802A88 != nullptr
          )) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (char *)((int)this + 0x11c9);
    bVar3 = 0;
    puVar5 = nullptr;
    pbVar6 = &g_bulkInitializedRecords_008087C7[0].field_0023;
    bVar4 = DAT_0080874d;
    do {
      if ((*param_1 != -1) && (bVar3 != STField<byte>(this,0x112d))) {
        if (DAT_00808a8f == '\0') {
          if (bVar4 == bVar3) {
LAB_0056acb1:
            iVar2 = 0;
          }
          else {
            cVar1 = puVar5[(int)(g_playerRelationMatrix + bVar4)];
            if ((cVar1 == '\0') && (g_playerRelationMatrix[(int)puVar5][bVar4] == 0)) {
              iVar2 = -2;
            }
            else if ((cVar1 == '\x01') && (g_playerRelationMatrix[(int)puVar5][bVar4] == 0)) {
              iVar2 = -1;
            }
            else if ((cVar1 == '\0') && (g_playerRelationMatrix[(int)puVar5][bVar4] == 1)) {
              iVar2 = 1;
            }
            else {
              if ((cVar1 != '\x01') || (g_playerRelationMatrix[(int)puVar5][bVar4] != 1))
              goto LAB_0056acb1;
              iVar2 = 2;
            }
          }
          bVar8 = iVar2 < 0;
        }
        else {
          bVar8 = *pbVar6 != g_bulkInitializedRecords_008087C7[bVar4].field_0023;
          bVar4 = DAT_0080874d;
        }
        if (!bVar8) {
          st::fn_00405F15(g_visibleClass_00802A88,1,puVar5);
          bVar4 = DAT_0080874d;
        }
      }
      bVar3 = bVar3 + 1;
      puVar5 = puVar5 + 1;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = param_1 + 0x51;
      pbVar6 = pbVar6 + 0x51;
      if (7 < bVar3) {
        return;
      }
    } while( true );
  }
  return;
}

// 0056F250 FUN_0056f250
#line 4 "decomp/ST.exe/functions/0056F250/decomp.c"
void __thiscall st::fn_0056F250(void *this,char param_1,byte param_2,char *param_3)

{
  byte bVar1;
  void *pvVar2;
  int local_EAX_309;
  int iVar3;
  int uVar4;
  uint uVar3;
  uint uVar5;
  byte *pbVar6;
  cMf32 *pcVar7;
  byte *pbVar8;
  char *pcVar9;
  char *pcVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  char cVar13;
  ushort *puVar14;
  int iVar15;
  uint *puVar16;
  byte local_1a8 [260];
  InternalExceptionFrame local_a4;
  InternalExceptionFrame local_60;
  byte local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined4 local_19;
  cMf32 *local_14;
  void *local_10;
  AnonShape_006B5050_99986F91 *local_c;
  uint local_8;
  char *pcVar9_mg0;

  local_8 = 0x88000016;
  local_1a8[0] = 0;
  local_10 = this;
  if (param_2 == 0) {
    if (STField<int>(this,0x1178) != 0) {
      st::external_00000080((LPSTR)local_1a8,"%s%s%s\\%s",(int)this + 0x60,PTR_s_SAVEGAME__0079b02c,
                &CHAR_00h_00807ddd,PTR_s_SAVE_QUICKSAVE_0079b044);
      STField<undefined4>(this,0x1178) = 0;
      goto LAB_0056f325;
    }
    if (param_1 == '\x03') goto LAB_0056f325;
    param_3 = (char *)((int)this + 0x7a02);
  }
  else if (param_3 == nullptr) {
    st::external_00000080((LPSTR)local_1a8,"%s%s%s\\%sDEBUG%u",(int)this + 0x60,PTR_s_SAVEGAME__0079b02c
              ,&CHAR_00h_00807ddd,PTR_DAT_0079b050,param_2);
    goto LAB_0056f325;
  }
  uVar3 = 0xffffffff;
  do {
    pcVar9_mg0 = param_3;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar9_mg0 = param_3 + 1;
    cVar13 = *param_3;
    param_3 = pcVar9_mg0;
  } while (cVar13 != '\0');
  uVar3 = ~uVar3;
  pbVar6 = (byte *)(pcVar9_mg0 + -uVar3);
  pbVar8 = local_1a8;
  memmove(pbVar8, pbVar6, uVar3); /* compiler REP MOVS byte copy */
  uVar5 = 0;
LAB_0056f325:
  if ((param_1 != '\0') || (local_1a8[0] != 0)) {
    cVar13 = STField<char>(this,0x1163);
    if (cVar13 == '\x01') {
      local_8 = local_8 | 0x100;
    }
    else if (cVar13 == '\x02') {
      local_8 = local_8 | 0x200;
    }
    else if (cVar13 == '\x03') {
      local_8 = local_8 | 0x500;
    }
    local_a4.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_a4;
    local_EAX_309 = st::fn_0072D7F0(local_a4.jumpBuffer,0);
    if (local_EAX_309 == 0) {
      if ((param_1 == '\0') || (param_1 == '\x03')) {
        local_14 = (cMf32 *)st::fn_006F0EC0(0x345,local_1a8,1,0,0);
      }
      pcVar7 = local_14;
      if ((param_1 == '\0') || (param_1 == '\x03')) {
        st::fn_006EFDB0(PTR_00806750,(int)local_14,"3D_MAP",'\x01');
        pvVar2 = local_10;
        st::fn_0071ADB0
                  (STField<byte *>(local_10,0x7d12),STField<uint>(local_10,0x7d16),(int)pcVar7,
                   PTR_s_TEXTURE_0079b07c,'\x01');
        st::fn_00405849(g_playSystem_00802A38,pcVar7);
        st::fn_006F13F0(pcVar7,0xc,PTR_s_RND_INIT_0079b05c,(byte *)((int)pvVar2 + 0x1134),4,
                      nullptr,'\0',nullptr);
        st::fn_006F13F0(pcVar7,0,PTR_s_DESCRIPTOR_0079b080,(byte *)((int)pvVar2 + 0x1196),0x1999,
                      nullptr,'\0',nullptr);
        st::fn_006F13F0(pcVar7,0xc,PTR_s_TITLE_MISSION_0079b070,(byte *)((int)pvVar2 + 0x4da3),0x104,
                      nullptr,'\0',nullptr);
        local_60.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_60;
        iVar3 = st::fn_0072D7F0(local_60.jumpBuffer,0);
        pvVar2 = local_10;
        pcVar7 = local_14;
        if ((iVar3 == 0) && (STField<uint *>(local_10,0x4ea7) != nullptr)) {
          st::fn_0071AB30
                    (STField<uint *>(local_10,0x4ea7),(int)local_14,PTR_s_DESCRIPTION_0079b074,
                     '\x01');
        }
        g_currentExceptionFrame = local_60.previous;
        if (STField<uint *>(pvVar2,0x4eab) != nullptr) {
          st::fn_0071AB30
                    (STField<uint *>(pvVar2,0x4eab),(int)pcVar7,PTR_s_OBJECTIVES_0079b078,'\x01');
        }
        if (g_sT3DSMAPContext_00807598 != nullptr) {
          iVar15 = 1;
          puVar14 = PTR_0080679c + 0x14;
          uVar4 = st::fn_006B4FE0((int)PTR_0080679c);
          local_c = (AnonShape_006B5050_99986F91 *)
                    st::fn_006B50C0(0x8b,0x8b,(uint)PTR_0080679c[7],uVar4,(undefined4 *)puVar14,iVar15);
          if (local_c != nullptr) {
            st::fn_006B4170((RecoveredSourceFamily_dibcopy *)local_c,0,0,0,local_c->field_0004,
                         local_c->field_0008,0);
            st::fn_006E6FB0
                      (g_sT3DSMAPContext_00807598,(RecoveredSourceFamily_dibcopy *)local_c,0,0,1);
            puVar16 = nullptr;
            cVar13 = '\0';
            puVar12 = nullptr;
            uVar3 = st::fn_006B5050(local_c);
            st::fn_006F13F0(pcVar7,0xc,PTR_s_SMALL_MAP_0079b084,(byte *)local_c,uVar3,puVar12,cVar13,
                          puVar16);
            st::fn_006AB060(&local_c);
          }
        }
        st::fn_006F13F0(pcVar7,0xc,PTR_s_TYPE_START_0079b08c,(byte *)((int)pvVar2 + 0x1180),1,
                      nullptr,'\0',nullptr);
        st::fn_006F13F0(pcVar7,0,PTR_s_ORIG_DB_0079b088,(byte *)((int)pvVar2 + 0x78fe),0x104,
                      nullptr,'\0',nullptr);
        st::fn_006F13F0(pcVar7,0,PTR_s_REPORT_0079b090,(byte *)((int)pvVar2 + 0x4f02),0x27f0,
                      nullptr,'\0',nullptr);
        local_1b = STField<undefined1>(pvVar2,0x112e);
        local_1a = STField<undefined1>(pvVar2,0x112f);
        local_1c = STField<byte>(pvVar2,0x112d);
        local_19 = STField<undefined4>(pvVar2,0x1130);
        st::fn_006F13F0(pcVar7,0x80,PTR_s_SAVE_PLAYER_0079b058,&local_1c,7,nullptr,'\0',
                      nullptr);
        st::fn_006F13F0(pcVar7,0,PTR_s_RESTART_GAME_0079b060,(byte *)((int)pvVar2 + 0x2b2f),0x2274,
                      nullptr,'\0',nullptr);
        st::fn_006F13F0(pcVar7,0xc,PTR_s_AUTOSAVETIME_GAME_0079b068,(byte *)((int)pvVar2 + 0x4eaf),4,
                      nullptr,'\0',nullptr);
        st::fn_006F13F0(pcVar7,0xc,PTR_s_STATETIMER_GAME_0079b064,(byte *)((int)pvVar2 + 0x4eb3),4,
                      nullptr,'\0',nullptr);
        if (STField<short>(pvVar2,0x4ed7) == 1) {
          st::fn_006F13F0(pcVar7,0xc,PTR_s_BRIEFING_GAME_0079b06c,(byte *)((int)pvVar2 + 0x4eb7),0x20,
                        nullptr,'\0',nullptr);
        }
        st::fn_006F13F0(pcVar7,0x80,PTR_s_SAVE_DESC_0079b054,(byte *)&local_8,4,nullptr,'\0'
                      ,nullptr);
      }
      st::fn_006F1170(pcVar7);
      g_currentExceptionFrame = local_a4.previous;
      return;
    }
    g_currentExceptionFrame = local_a4.previous;
    pbVar6 = (byte *)((int)local_10 + 0x7d1a);
    uVar3 = 0xffffffff;
    pbVar8 = local_1a8;
    do {
      pbVar11 = pbVar8;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pbVar11 = pbVar8 + 1;
      bVar1 = *pbVar8;
      pbVar8 = pbVar11;
    } while (bVar1 != 0);
    uVar3 = ~uVar3;
    pbVar8 = pbVar11 + -uVar3;
    pbVar11 = pbVar6;
    memmove(pbVar11, pbVar8, uVar3); /* compiler REP MOVS byte copy */
    uVar5 = 0;
    uVar3 = 0xffffffff;
    pcVar9 = PTR_CHAR___0079b034;
    do {
      pcVar10 = pcVar9;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar10 = pcVar9 + 1;
      cVar13 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar13 != '\0');
    uVar3 = ~uVar3;
    iVar15 = -1;
    pbVar8 = pbVar6;
    do {
      pbVar11 = pbVar8;
      if (iVar15 == 0) break;
      iVar15 = iVar15 + -1;
      pbVar11 = pbVar8 + 1;
      bVar1 = *pbVar8;
      pbVar8 = pbVar11;
    } while (bVar1 != 0);
    pbVar8 = (byte *)(pcVar10 + -uVar3);
    pbVar11 = pbVar11 + -1;
    memmove(pbVar11, pbVar8, uVar3); /* compiler REP MOVS byte copy */
    uVar5 = 0;
    st::external_0000006F((LPCSTR)pbVar6);
    uVar3 = 0xffffffff;
    pbVar8 = local_1a8;
    do {
      pbVar11 = pbVar8;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pbVar11 = pbVar8 + 1;
      bVar1 = *pbVar8;
      pbVar8 = pbVar11;
    } while (bVar1 != 0);
    uVar3 = ~uVar3;
    pbVar8 = pbVar11 + -uVar3;
    pbVar11 = pbVar6;
    memmove(pbVar11, pbVar8, uVar3); /* compiler REP MOVS byte copy */
    uVar5 = 0;
    uVar3 = 0xffffffff;
    pcVar9 = PTR_CHAR___0079b038;
    do {
      pcVar10 = pcVar9;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar10 = pcVar9 + 1;
      cVar13 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar13 != '\0');
    uVar3 = ~uVar3;
    iVar15 = -1;
    pbVar8 = pbVar6;
    do {
      pbVar11 = pbVar8;
      if (iVar15 == 0) break;
      iVar15 = iVar15 + -1;
      pbVar11 = pbVar8 + 1;
      bVar1 = *pbVar8;
      pbVar8 = pbVar11;
    } while (bVar1 != 0);
    pbVar8 = (byte *)(pcVar10 + -uVar3);
    pbVar11 = pbVar11 + -1;
    memmove(pbVar11, pbVar8, uVar3); /* compiler REP MOVS byte copy */
    st::external_0000006F((LPCSTR)pbVar6);
    if (g_optPanel_008016DC != nullptr) {
      st::fn_00405EF7(g_optPanel_008016DC,'\f',0);
    }
  }
  return;
}

// 0056F930 FUN_0056f930
#line 4 "decomp/ST.exe/functions/0056F930/decomp.c"
undefined4 __fastcall st::fn_0056F930(AnonShape_0056F930_C6277D80 *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  UINT resourceId;
  undefined *puVar6;

  if ((((DAT_00807364 == '\0') &&
       (((cVar1 = param_1->field_112E, cVar1 == '\x01' || (cVar1 == '\x02')) || (cVar1 == '\x03'))))
      && ((*(int *)&param_1[4].field_0x8fa + 1U < 100 && (param_1->field_1163 == '\x01')))) &&
     ((param_1->field_1180 == '\b' || (param_1->field_1180 == '\t')))) {
    if (cVar1 == '\x01') {
      resourceId = 0x2688;
    }
    else {
      resourceId = (cVar1 != '\x02') + 0x2689;
    }
    puVar6 = PTR_CHAR___0079b034;
    pcVar2 = st::fn_006B0140(0x268b,g_hINSTANCE_00807618);
    iVar5 = *(int *)&param_1[4].field_0x8fa + 1;
    pcVar3 = st::fn_006B0140(resourceId,g_hINSTANCE_00807618);
    pcVar4 = st::fn_006B0140(0x2687,g_hINSTANCE_00807618);
    st::external_00000080(&param_1[6].field_0x10ea,"%s%s%s\\%s%s%s%02d%s%s",&param_1->field_0x60,
              PTR_s_SAVEGAME__0079b02c,&param_1->field_0x7bd,PTR_DAT_0079b050,pcVar4,pcVar3,iVar5,
              pcVar2,puVar6);
    return 1;
  }
  return 0;
}

