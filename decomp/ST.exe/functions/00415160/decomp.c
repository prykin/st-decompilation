#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Grpway3d.cpp
   STGroupBoatC::Way3DGrpDistribTgt */

int STGroupBoatC::Way3DGrpDistribTgt
              (STGroupBoatC *param_1,DArrayTy *param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  code *pcVar2;
  ushort uVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  InternalExceptionFrame local_50;
  int local_c;
  int local_8;

  iVar7 = 0;
  local_c = 0;
  uVar3 = (ushort)param_2->count;
  param_1->field_0027 = uVar3;
  if (uVar3 == 0) {
    return 0;
  }
  uVar3 = thunk_FUN_004233c0(param_1);
  DAT_007f4d4c = (uint)uVar3;
  if ((DAT_007f4d4c < 2) && (param_1->field_0027 == 1)) {
    if (param_2->count == 0) {
      puVar4 = (undefined2 *)0x0;
    }
    else {
      puVar4 = param_2->data;
    }
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    iVar5 = thunk_FUN_00423e70(param_1,CONCAT22((short)((uint)puVar4 >> 0x10),*puVar4));
    if (iVar5 != 0) {
      *(undefined4 *)(iVar5 + 0xb7) = 0;
      *(int *)(iVar5 + 0xbb) = param_3;
      *(int *)(iVar5 + 199) = param_3;
      *(int *)(iVar5 + 0xbf) = param_4;
      *(int *)(iVar5 + 0xcb) = param_4;
      *(int *)(iVar5 + 0xc3) = param_5;
      *(int *)(iVar5 + 0xcf) = param_5;
    }
    goto LAB_00415472;
  }
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar7 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  if (iVar7 == 0) {
    uVar9 = thunk_FUN_00413af0(param_1,param_2,param_3,param_4,param_5);
    uVar6 = (undefined4)((ulonglong)uVar9 >> 0x20);
    uVar8 = 0;
    if ((int)uVar9 == 0) {
      local_8 = 0;
      if (0 < DAT_007f4d40) {
        do {
          uVar1 = *(uint *)(uVar8 + 0x18 + (int)DAT_007f4d04);
          if (uVar1 < param_2->count) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(param_2, uVar1) (runtime stride) */
            puVar4 = (undefined2 *)(param_2->elementSize * uVar1 + (int)param_2->data);
          }
          else {
            puVar4 = (undefined2 *)0x0;
          }
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          iVar7 = thunk_FUN_00423e70(param_1,CONCAT22((short)((uint)puVar4 >> 0x10),*puVar4));
          if (iVar7 != 0) {
            uVar6 = *(undefined4 *)(uVar8 + 0xc + (int)DAT_007f4d04);
            *(undefined4 *)(iVar7 + 0xbb) = uVar6;
            *(undefined4 *)(iVar7 + 199) = uVar6;
            uVar6 = *(undefined4 *)(uVar8 + 0x10 + (int)DAT_007f4d04);
            *(undefined4 *)(iVar7 + 0xbf) = uVar6;
            *(undefined4 *)(iVar7 + 0xcb) = uVar6;
            uVar6 = *(undefined4 *)(uVar8 + 0x14 + (int)DAT_007f4d04);
            *(undefined4 *)(iVar7 + 0xc3) = uVar6;
            *(undefined4 *)(iVar7 + 0xcf) = uVar6;
          }
          local_8 = local_8 + 1;
          uVar8 = uVar8 + 0x1c;
        } while (local_8 < DAT_007f4d40);
      }
      iVar7 = 0;
      if (0 < DAT_007f4cf8) {
        do {
          uVar8 = *(uint *)(DAT_007f4d04 + ((uint)param_1->field_0027 - iVar7) * 0xe + -2);
          if (uVar8 < param_2->count) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(param_2, uVar8) (runtime stride) */
            puVar4 = (undefined2 *)(param_2->elementSize * uVar8 + (int)param_2->data);
          }
          else {
            puVar4 = (undefined2 *)0x0;
          }
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          iVar5 = thunk_FUN_00423e70(param_1,CONCAT22((short)(uVar8 >> 0x10),*puVar4));
          if (iVar5 != 0) {
            uVar6 = *(undefined4 *)(DAT_007f4d04 + ((uint)param_1->field_0027 - iVar7) * 0xe + -8);
            *(undefined4 *)(iVar5 + 0xbb) = uVar6;
            *(undefined4 *)(iVar5 + 199) = uVar6;
            uVar6 = *(undefined4 *)(DAT_007f4d04 + ((uint)param_1->field_0027 - iVar7) * 0xe + -6);
            *(undefined4 *)(iVar5 + 0xbf) = uVar6;
            *(undefined4 *)(iVar5 + 0xcb) = uVar6;
            uVar6 = *(undefined4 *)(DAT_007f4d04 + ((uint)param_1->field_0027 - iVar7) * 0xe + -4);
            *(undefined4 *)(iVar5 + 0xc3) = uVar6;
            *(undefined4 *)(iVar5 + 0xcf) = uVar6;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < DAT_007f4cf8);
        g_currentExceptionFrame = local_50.previous;
        iVar7 = local_c;
        goto LAB_00415467;
      }
    }
    else if (param_1->field_0027 != 0) {
      do {
        if (uVar8 < param_2->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(param_2, uVar8) (runtime stride) */
          puVar4 = (undefined2 *)(param_2->elementSize * uVar8 + (int)param_2->data);
        }
        else {
          puVar4 = (undefined2 *)0x0;
        }
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        uVar9 = thunk_FUN_00423e70(param_1,CONCAT22((short)((uint)uVar6 >> 0x10),*puVar4));
        uVar6 = (undefined4)((ulonglong)uVar9 >> 0x20);
        iVar7 = (int)uVar9;
        if (iVar7 != 0) {
          *(int *)(iVar7 + 0xbb) = param_3;
          *(int *)(iVar7 + 199) = param_3;
          *(int *)(iVar7 + 0xbf) = param_4;
          *(int *)(iVar7 + 0xcb) = param_4;
          *(int *)(iVar7 + 0xc3) = param_5;
          *(int *)(iVar7 + 0xcf) = param_5;
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)(uint)param_1->field_0027);
    }
    g_currentExceptionFrame = local_50.previous;
    iVar7 = local_c;
  }
  else {
    g_currentExceptionFrame = local_50.previous;
    local_c = iVar7;
    iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\Grpway3d.cpp",0xe66,0,iVar7,"%s",
                               "STGroupBoatC::Way3DGrpDistribTgt");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
LAB_00415467:
  FUN_006a5e90(DAT_007f4d04);
LAB_00415472:
  if (iVar7 == 0) {
    return 0;
  }
  RaiseInternalException
            (iVar7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\Grpway3d.cpp",0xe6d);
  return iVar7;
}

