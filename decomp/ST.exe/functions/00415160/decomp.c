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
  ushort *puVar4;
  STGameObjC *pSVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
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
      puVar4 = nullptr;
    }
    else {
      puVar4 = param_2->data;
    }
    pSVar5 = thunk_FUN_00423e70(param_1,*puVar4);
    if (pSVar5 != nullptr) {
      pSVar5->field_00B7 = 0;
      pSVar5->field_00BB = param_3;
      pSVar5->field_00C7 = param_3;
      pSVar5->field_00BF = param_4;
      pSVar5->field_00CB = param_4;
      pSVar5->field_00C3 = param_5;
      pSVar5->field_00CF = param_5;
    }
    goto LAB_00415472;
  }
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar7 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  if (iVar7 == 0) {
    iVar7 = thunk_FUN_00413af0(param_1,param_2,param_3,param_4,param_5);
    uVar8 = 0;
    if (iVar7 == 0) {
      local_8 = 0;
      if (0 < DAT_007f4d40) {
        do {
          uVar1 = *(uint *)(uVar8 + 0x18 + (int)DAT_007f4d04);
          if (uVar1 < param_2->count) {
            puVar4 = DArrayAt<ushort>(param_2, uVar1);
          }
          else {
            puVar4 = nullptr;
          }
          pSVar5 = thunk_FUN_00423e70(param_1,*puVar4);
          if (pSVar5 != nullptr) {
            iVar7 = *(int *)(uVar8 + 0xc + (int)DAT_007f4d04);
            pSVar5->field_00BB = iVar7;
            pSVar5->field_00C7 = iVar7;
            iVar7 = *(int *)(uVar8 + 0x10 + (int)DAT_007f4d04);
            pSVar5->field_00BF = iVar7;
            pSVar5->field_00CB = iVar7;
            iVar7 = *(int *)(uVar8 + 0x14 + (int)DAT_007f4d04);
            pSVar5->field_00C3 = iVar7;
            pSVar5->field_00CF = iVar7;
          }
          local_8 = local_8 + 1;
          uVar8 = uVar8 + 0x1c;
        } while (local_8 < DAT_007f4d40);
      }
      iVar7 = 0;
      if (0 < DAT_007f4cf8) {
        do {
          if (*(uint *)(DAT_007f4d04 + ((uint)param_1->field_0027 - iVar7) * 0xe + -2) <
              param_2->count) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            puVar4 = (ushort *)
                     (param_2->elementSize *
                      *(uint *)(DAT_007f4d04 + ((uint)param_1->field_0027 - iVar7) * 0xe + -2) +
                     (int)param_2->data);
          }
          else {
            puVar4 = nullptr;
          }
          pSVar5 = thunk_FUN_00423e70(param_1,*puVar4);
          if (pSVar5 != nullptr) {
            iVar6 = *(int *)(DAT_007f4d04 + ((uint)param_1->field_0027 - iVar7) * 0xe + -8);
            pSVar5->field_00BB = iVar6;
            pSVar5->field_00C7 = iVar6;
            iVar6 = *(int *)(DAT_007f4d04 + ((uint)param_1->field_0027 - iVar7) * 0xe + -6);
            pSVar5->field_00BF = iVar6;
            pSVar5->field_00CB = iVar6;
            iVar6 = *(int *)(DAT_007f4d04 + ((uint)param_1->field_0027 - iVar7) * 0xe + -4);
            pSVar5->field_00C3 = iVar6;
            pSVar5->field_00CF = iVar6;
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
          puVar4 = DArrayAt<ushort>(param_2, uVar8);
        }
        else {
          puVar4 = nullptr;
        }
        pSVar5 = thunk_FUN_00423e70(param_1,*puVar4);
        if (pSVar5 != nullptr) {
          pSVar5->field_00BB = param_3;
          pSVar5->field_00C7 = param_3;
          pSVar5->field_00BF = param_4;
          pSVar5->field_00CB = param_4;
          pSVar5->field_00C3 = param_5;
          pSVar5->field_00CF = param_5;
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

