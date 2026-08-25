#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\scoreai.cpp
   Diagnostic line evidence: 600 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 * __cdecl FUN_00561670(int param_1,int param_2,int param_3,int *param_4,int param_5)

{
  int iVar1;
  short sVar2;
  short sVar3;
  int *piVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  int *piVar7_mg0;
  int iVar8;
  short *psVar9;
  int *piVar10;
  int *piVar11;
  uint *puVar12;
  int iVar13;
  int local_3c;
  uint local_34;
  int local_2c;
  uint local_28;
  int *local_24;
  int local_20;
  int *local_1c;
  int local_18;
  int *local_14;
  int local_10;
  undefined2 *local_c;
  int local_8;

  local_2c = 0;
  if (param_5 < 1) {
    return nullptr;
  }
  puVar5 = Library::DKW::LIB::MemAllocClear(param_2 * param_3 * 2);
  if (puVar5 == nullptr) {
    return nullptr;
  }
  if (0 < param_3) {
    local_28 = param_3;
    puVar12 = puVar5;
    do {
      puVar6 = puVar12;
      iVar8 = param_2;
      if (0 < param_2) {
        do {
          if (*(short *)((param_1 - (int)puVar5) + (int)puVar6) == -1) {
            *(undefined2 *)puVar6 = 0xffff;
          }
          iVar8 = iVar8 + -1;
          puVar6 = (undefined4 *)((int)puVar6 + 2);
        } while (iVar8 != 0);
      }
      puVar12 = (undefined4 *)((int)puVar12 + param_2 * 2);
      local_28 = local_28 + -1;
    } while (local_28 != 0);
  }
  iVar8 = (param_2 + param_3) * 2;
  if (iVar8 < param_5) {
    iVar8 = param_5;
  }
  local_18 = iVar8;
  local_24 = FUN_006bfb70(iVar8 << 4);
  if (local_24 == nullptr) {
LAB_00561bff:
    local_2c = -2;
  }
  else {
    local_14 = local_24 + iVar8 * 2;
    local_20 = 0;
    piVar11 = local_14;
    local_1c = local_24;
    if (0 < param_5) {
      do {
        iVar8 = *param_4;
        if ((((-1 < iVar8) && (iVar8 < param_2)) && (iVar13 = param_4[1], -1 < iVar13)) &&
           (iVar13 < param_3)) {
          *(undefined2 *)((int)puVar5 + (iVar13 * param_2 + iVar8) * 2) = 1;
          *piVar11 = *param_4;
          local_20 = local_20 + 1;
          piVar11[1] = param_4[1];
          piVar11 = piVar11 + 2;
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = param_4 + 2;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_5 = param_5 + -1;
        iVar8 = local_18;
      } while (param_5 != 0);
    }
    while( true ) {
      param_5 = 0;
      local_3c = 0;
      if (local_20 < 1) break;
      local_28 = iVar8 * 8 - 0x400;
      local_34 = iVar8 << 4;
      param_4 = (int *)0x8;
      piVar11 = local_1c;
      do {
        local_8 = local_14[local_3c * 2];
        local_10 = local_14[local_3c * 2 + 1];
        iVar13 = (local_10 * param_2 + local_8) * 2;
        sVar2 = *(short *)(iVar13 + (int)puVar5);
        iVar8 = (int)sVar2;
        local_c = (undefined2 *)(iVar13 + (int)puVar5);
        iVar13 = iVar13 + param_1;
        if (local_18 < (int)param_4) {
          local_34 = local_34 + 0x800;
          local_18 = local_18 + 0x80;
          uVar7 = local_28 + 0x400;
          piVar7_mg0 = FUN_006bfb50(local_24,local_34);
          if (piVar7_mg0 == nullptr) goto LAB_00561bff;
          local_1c = piVar7_mg0 + ((int)local_1c - (int)local_24 >> 3) * 2;
          local_14 = piVar7_mg0 + ((int)local_14 - (int)local_24 >> 3) * 2;
          if (local_1c == piVar7_mg0) {
            local_14 = local_14 + 0x100;
          }
          else {
            local_1c = local_1c + 0x100;
          }
          piVar11 = local_1c + param_5 * 2;
          local_24 = piVar7_mg0;
          Library::MSVCRT::FUN_0072da70
                    ((undefined4 *)(local_28 + 0x800 + (int)piVar7_mg0),
                     (AnonPointee_TLOBaseTy_0607 *)(uVar7 + (int)piVar7_mg0),uVar7);
          local_28 = uVar7;
        }
        piVar4 = local_1c;
        sVar3 = (short)local_8;
        piVar10 = piVar11;
        if ((local_8 < param_2 + -1) &&
           ((local_c[1] == 0 ||
            (STField<short>(iVar13,0x2) + DAT_00803320 + iVar8 < (short)local_c[1])))) {
          piVar10 = piVar11 + 2;
          local_c[1] = STField<short>(iVar13,0x2) + (short)DAT_00803320 + sVar2;
          piVar11[1] = (short)local_10;
          *piVar11 = (short)(sVar3 + 1);
          param_5 = param_5 + 1;
          param_4 = (int *)((int)param_4 + 1);
        }
        piVar11 = piVar10;
        if ((0 < local_10) &&
           ((psVar9 = local_c + -param_2, *psVar9 == 0 ||
            (*(short *)(iVar13 + param_2 * -2) + DAT_00803320 + iVar8 < (int)*psVar9)))) {
          piVar11 = piVar10 + 2;
          *psVar9 = *(short *)(iVar13 + param_2 * -2) + (short)DAT_00803320 + sVar2;
          *piVar10 = (int)sVar3;
          piVar10[1] = (short)((short)local_10 + -1);
          param_5 = param_5 + 1;
          param_4 = (int *)((int)param_4 + 1);
        }
        piVar10 = piVar11;
        if ((0 < local_8) &&
           ((local_c[-1] == 0 ||
            (*(short *)(iVar13 + -2) + DAT_00803320 + iVar8 < (short)local_c[-1])))) {
          piVar10 = piVar11 + 2;
          local_c[-1] = *(short *)(iVar13 + -2) + (short)DAT_00803320 + sVar2;
          piVar11[1] = (short)local_10;
          *piVar11 = (short)(sVar3 + -1);
          param_5 = param_5 + 1;
          param_4 = (int *)((int)param_4 + 1);
        }
        piVar11 = piVar10;
        if ((local_10 < param_3 + -1) &&
           ((local_c[param_2] == 0 ||
            (*(short *)(iVar13 + param_2 * 2) + DAT_00803320 + iVar8 < (short)local_c[param_2])
            ))) {
          piVar11 = piVar10 + 2;
          local_c[param_2] = *(short *)(iVar13 + param_2 * 2) + (short)DAT_00803320 + sVar2;
          *piVar10 = (int)sVar3;
          piVar10[1] = (short)((short)local_10 + 1);
          param_5 = param_5 + 1;
          param_4 = (int *)((int)param_4 + 1);
        }
        if (0 < local_10) {
          piVar10 = piVar11;
          if ((local_8 < param_2 + -1) &&
             ((psVar9 = local_c + (1 - param_2), *psVar9 == 0 ||
              (*(short *)(iVar13 + param_2 * -2 + 2) + DAT_00803324 + iVar8 < (int)*psVar9)))) {
            piVar10 = piVar11 + 2;
            *psVar9 = *(short *)(iVar13 + param_2 * -2 + 2) + (short)DAT_00803324 + sVar2;
            *piVar11 = (short)(sVar3 + 1);
            piVar11[1] = (short)((short)local_10 + -1);
            param_5 = param_5 + 1;
            param_4 = (int *)((int)param_4 + 1);
          }
          piVar11 = piVar10;
          if (0 < local_8) {
            iVar1 = param_2 * 2 + 2;
            psVar9 = (short *)((int)local_c - iVar1);
            if ((*psVar9 == 0) || (*(short *)(iVar13 - iVar1) + DAT_00803324 + iVar8 < (int)*psVar9)
               ) {
              piVar11 = piVar10 + 2;
              *psVar9 = *(short *)(iVar13 - (param_2 * 2 + 2)) + (short)DAT_00803324 + sVar2;
              *piVar10 = (short)(sVar3 + -1);
              piVar10[1] = (short)((short)local_10 + -1);
              param_5 = param_5 + 1;
              param_4 = (int *)((int)param_4 + 1);
            }
          }
        }
        if (local_10 < param_3 + -1) {
          piVar10 = piVar11;
          if ((0 < local_8) &&
             ((local_c[param_2 + -1] == 0 ||
              (*(short *)(iVar13 + -2 + param_2 * 2) + DAT_00803324 + iVar8 <
               (short)local_c[param_2 + -1])))) {
            piVar10 = piVar11 + 2;
            local_c[param_2 + -1] =
                 *(short *)(iVar13 + -2 + param_2 * 2) + (short)DAT_00803324 + sVar2;
            *piVar11 = (short)(sVar3 + -1);
            piVar11[1] = (short)((short)local_10 + 1);
            param_5 = param_5 + 1;
            param_4 = (int *)((int)param_4 + 1);
          }
          piVar11 = piVar10;
          if ((local_8 < param_2 + -1) &&
             ((local_c[param_2 + 1] == 0 ||
              (*(short *)(iVar13 + 2 + param_2 * 2) + DAT_00803324 + iVar8 <
               (short)local_c[param_2 + 1])))) {
            piVar11 = piVar10 + 2;
            local_c[param_2 + 1] =
                 *(short *)(iVar13 + 2 + param_2 * 2) + (short)DAT_00803324 + sVar2;
            *piVar10 = (short)(sVar3 + 1);
            piVar10[1] = (short)((short)local_10 + 1);
            param_5 = param_5 + 1;
            param_4 = (int *)((int)param_4 + 1);
          }
        }
        local_3c = local_3c + 1;
      } while (local_3c < local_20);
      if (param_5 == 0) break;
      local_1c = local_14;
      local_14 = piVar4;
      iVar8 = local_18;
      local_20 = param_5;
    }
  }
  FreeAndNull(&local_24);
  if (local_2c == 0) {
    return puVar5;
  }
  RaiseInternalException
            (local_2c,g_overwriteContext_007ED77C,"E:\\__titans\\scoreai.cpp",600);
  return nullptr;
}

