#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Grpway3d.cpp
   STGroupBoatC::Way3DGrpDistribTgt */

int STGroupBoatC::Way3DGrpDistribTgt
              (STGroupBoatC *param_1,DArrayTy *param_2,int param_3,int param_4,int param_5)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  ushort uVar5;
  ushort *puVar6;
  STGameObjC *pSVar7;
  int iVar8;
  int iVar6;
  int iVar7;
  uint uVar9;
  InternalExceptionFrame local_50;
  int local_c;
  int local_8;

  iVar7 = 0;
  local_c = 0;
  sVar1 = (short)param_2->count;
  param_1->field_0027 = sVar1;
  if (sVar1 == 0) {
    return 0;
  }
  uVar5 = thunk_FUN_004233c0(param_1);
  DAT_007f4d4c = (uint)uVar5;
  if ((DAT_007f4d4c < 2) && (param_1->field_0027 == 1)) {
    if (param_2->count == 0) {
      puVar6 = nullptr;
    }
    else {
      puVar6 = param_2->data;
    }
    pSVar7 = thunk_FUN_00423e70(param_1,*puVar6);
    if (pSVar7 != nullptr) {
      pSVar7->field_00B7 = 0;
      pSVar7->field_00BB = param_3;
      pSVar7->field_00C7 = param_3;
      pSVar7->field_00BF = param_4;
      pSVar7->field_00CB = param_4;
      pSVar7->field_00C3 = param_5;
      pSVar7->field_00CF = param_5;
    }
    goto LAB_00415472;
  }
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar7 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  if (iVar7 == 0) {
    iVar8 = thunk_FUN_00413af0(param_1,param_2,param_3,param_4,param_5);
    uVar9 = 0;
    if (iVar8 == 0) {
      local_8 = 0;
      if (0 < DAT_007f4d40) {
        do {
          uVar2 = *(uint *)(uVar9 + 0x18 + (int)DAT_007f4d04);
          if (uVar2 < param_2->count) {
            puVar6 = DArrayAt<ushort>(param_2, uVar2);
          }
          else {
            puVar6 = nullptr;
          }
          pSVar7 = thunk_FUN_00423e70(param_1,*puVar6);
          if (pSVar7 != nullptr) {
            iVar8 = *(int *)(uVar9 + 0xc + (int)DAT_007f4d04);
            pSVar7->field_00BB = iVar8;
            pSVar7->field_00C7 = iVar8;
            iVar8 = *(int *)(uVar9 + 0x10 + (int)DAT_007f4d04);
            pSVar7->field_00BF = iVar8;
            pSVar7->field_00CB = iVar8;
            iVar8 = *(int *)(uVar9 + 0x14 + (int)DAT_007f4d04);
            pSVar7->field_00C3 = iVar8;
            pSVar7->field_00CF = iVar8;
          }
          local_8 = local_8 + 1;
          uVar9 = uVar9 + 0x1c;
        } while (local_8 < DAT_007f4d40);
      }
      iVar8 = 0;
      if (0 < DAT_007f4cf8) {
        do {
          if (*(uint *)(DAT_007f4d04 + ((uint)(ushort)param_1->field_0027 - iVar8) * 0xe + -2) <
              param_2->count) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            puVar6 = (ushort *)
                     (param_2->elementSize *
                      *(uint *)(DAT_007f4d04 +
                               ((uint)(ushort)param_1->field_0027 - iVar8) * 0xe + -2) +
                     (int)param_2->data);
          }
          else {
            puVar6 = nullptr;
          }
          pSVar7 = thunk_FUN_00423e70(param_1,*puVar6);
          if (pSVar7 != nullptr) {
            iVar3 = *(int *)(DAT_007f4d04 + ((uint)(ushort)param_1->field_0027 - iVar8) * 0xe + -8);
            pSVar7->field_00BB = iVar3;
            pSVar7->field_00C7 = iVar3;
            iVar3 = *(int *)(DAT_007f4d04 + ((uint)(ushort)param_1->field_0027 - iVar8) * 0xe + -6);
            pSVar7->field_00BF = iVar3;
            pSVar7->field_00CB = iVar3;
            iVar3 = *(int *)(DAT_007f4d04 + ((uint)(ushort)param_1->field_0027 - iVar8) * 0xe + -4);
            pSVar7->field_00C3 = iVar3;
            pSVar7->field_00CF = iVar3;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < DAT_007f4cf8);
        g_currentExceptionFrame = local_50.previous;
        iVar7 = local_c;
        goto LAB_00415467;
      }
    }
    else if (param_1->field_0027 != 0) {
      do {
        if (uVar9 < param_2->count) {
          puVar6 = DArrayAt<ushort>(param_2, uVar9);
        }
        else {
          puVar6 = nullptr;
        }
        pSVar7 = thunk_FUN_00423e70(param_1,*puVar6);
        if (pSVar7 != nullptr) {
          pSVar7->field_00BB = param_3;
          pSVar7->field_00C7 = param_3;
          pSVar7->field_00BF = param_4;
          pSVar7->field_00CB = param_4;
          pSVar7->field_00C3 = param_5;
          pSVar7->field_00CF = param_5;
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)(uint)(ushort)param_1->field_0027);
    }
    g_currentExceptionFrame = local_50.previous;
    iVar7 = local_c;
  }
  else {
    g_currentExceptionFrame = local_50.previous;
    local_c = iVar7;
    iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\Grpway3d.cpp",0xe66,0,iVar7,"%s",
                               "STGroupBoatC::Way3DGrpDistribTgt");
    if (iVar6 != 0) {
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

