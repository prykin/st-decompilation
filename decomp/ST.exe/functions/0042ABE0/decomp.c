#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetGObjFromZone2

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall
STAllPlayersC::GetGObjFromZone2
          (STAllPlayersC *this,char param_1,int param_2,int param_3,int param_4,int param_5,
          int *param_6,int *param_7,int *param_8,int *param_9,int *param_10,int *param_11,
          int *param_12,int *param_13,int *param_14,int *param_15,int *param_16,int *param_17)

{
  uint uVar1;
  int iVar3;
  DArrayTy *pDVar3;
  int iVar4;
  int *piVar5;
  int iVar5;
  int iVar6;
  int *piVar7;
  InternalExceptionFrame local_54;
  int local_10;
  short *local_c;
  int local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  iVar3 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_54.previous;
    if (iVar3 != -0x5001fff7) {
      iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x10e,0,iVar3,
                                 "%s","STAllPlayersC::GetGObjFromZone2");
      if (iVar5 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException(iVar3,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x10f);
    }
    return;
  }
  if (((((param_6 == nullptr) && (param_7 == nullptr)) && (param_8 == nullptr)) &&
      ((((param_9 == nullptr && (param_10 == nullptr)) &&
        ((param_11 == nullptr && ((param_12 == nullptr && (param_13 == nullptr)))))) &&
       (param_14 == nullptr)))) &&
     (((param_15 == nullptr && (param_16 == nullptr)) && (param_17 == nullptr)))) {
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",0xb7
              );
  }
  if ((param_6 != nullptr) && (*param_6 == 0)) {
    pDVar3 = Library::DKW::TBL::DArrayCreate(nullptr,0,2,5);
    *param_6 = (int)pDVar3;
  }
  if ((param_7 != nullptr) && (*param_7 == 0)) {
    pDVar3 = Library::DKW::TBL::DArrayCreate(nullptr,0,2,5);
    *param_7 = (int)pDVar3;
  }
  if ((param_8 != nullptr) && (*param_8 == 0)) {
    pDVar3 = Library::DKW::TBL::DArrayCreate(nullptr,0,2,5);
    *param_8 = (int)pDVar3;
  }
  if ((param_9 != nullptr) && (*param_9 == 0)) {
    pDVar3 = Library::DKW::TBL::DArrayCreate(nullptr,0,2,5);
    *param_9 = (int)pDVar3;
  }
  if ((param_10 != nullptr) && (*param_10 == 0)) {
    pDVar3 = Library::DKW::TBL::DArrayCreate(nullptr,0,2,5);
    *param_10 = (int)pDVar3;
  }
  if ((param_11 != nullptr) && (*param_11 == 0)) {
    pDVar3 = Library::DKW::TBL::DArrayCreate(nullptr,0,2,5);
    *param_11 = (int)pDVar3;
  }
  if ((param_12 != nullptr) && (*param_12 == 0)) {
    pDVar3 = Library::DKW::TBL::DArrayCreate(nullptr,0,2,5);
    *param_12 = (int)pDVar3;
  }
  if ((param_13 != nullptr) && (*param_13 == 0)) {
    pDVar3 = Library::DKW::TBL::DArrayCreate(nullptr,0,2,5);
    *param_13 = (int)pDVar3;
  }
  if ((param_14 != nullptr) && (*param_14 == 0)) {
    pDVar3 = Library::DKW::TBL::DArrayCreate(nullptr,0,2,5);
    *param_14 = (int)pDVar3;
  }
  if ((param_15 != nullptr) && (*param_15 == 0)) {
    pDVar3 = Library::DKW::TBL::DArrayCreate(nullptr,0,2,5);
    *param_15 = (int)pDVar3;
  }
  if ((param_16 != nullptr) && (*param_16 == 0)) {
    pDVar3 = Library::DKW::TBL::DArrayCreate(nullptr,0,2,5);
    *param_16 = (int)pDVar3;
  }
  if ((param_17 != nullptr) && (*param_17 == 0)) {
    pDVar3 = Library::DKW::TBL::DArrayCreate(nullptr,0,2,5);
    *param_17 = (int)pDVar3;
  }
  Library::Ourlib::ST3DSPR::FUN_006ead90
            (g_sT3DSMAPContext_00807598,param_2,param_3,param_4,param_5,&local_c,&local_8);
  iVar6 = 0;
  if (0 < local_8) {
    local_10 = 0;
    do {
      piVar7 = *(int **)(iVar6 + 4 + (int)local_c);
      uVar1 = piVar7[8];
      if (uVar1 < 0x1a5) {
        if (uVar1 == 0x1a4) {
          /* ST_CALLSITE[0042AF10]: CALL dword ptr [EDX + 0xec] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          if ((param_16 != nullptr) && (iVar4 = (**(code **)(*piVar7 + 0xec))(), iVar4 == 1)) {
            piVar7 = (int *)((int)piVar7 + 0x32);
            piVar5 = param_16;
LAB_0042b01f:
            pDVar3 = (DArrayTy *)*piVar5;
            goto cf_common_join_0042B022;
          }
        }
        else if (uVar1 == 0x14) {
          /* ST_CALLSITE[0042AEA5]: CALL dword ptr [EAX + 0xec] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          iVar4 = (**(code **)(*piVar7 + 0xec))();
          if (iVar4 == 1) {
            if (piVar7[9] != (int)param_1) {
              piVar5 = param_8;
              if (param_7 != nullptr) {
                Library::DKW::TBL::DArrayAppend((DArrayTy *)*param_7,(void *)((int)piVar7 + 0x32));
              }
              goto joined_r0x0042b01c;
            }
            if (param_6 != nullptr) {
              piVar7 = (int *)((int)piVar7 + 0x32);
              pDVar3 = (DArrayTy *)*param_6;
              goto cf_common_join_0042B022;
            }
          }
        }
        else if (uVar1 == 0x5a) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          if (((param_14 != nullptr) &&
              (*(int *)(iVar6 + (int)local_c) == STField<int>(piVar7,0x1ed))) &&
             /* ST_CALLSITE[0042AE83]: CALL dword ptr [EAX + 0xec] */
             (iVar4 = (**(code **)(*piVar7 + 0xec))(), iVar4 == 1)) {
            piVar7 = (int *)((int)piVar7 + 0x32);
            pDVar3 = (DArrayTy *)*param_14;
            goto cf_common_join_0042B022;
          }
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        else if (((uVar1 == 0x172) && (param_15 != nullptr)) &&
                /* ST_CALLSITE[0042AE48]: CALL dword ptr [EDX + 0xec] */
                (iVar4 = (**(code **)(*piVar7 + 0xec))(), iVar4 == 1)) {
          piVar7 = (int *)((int)piVar7 + 0x32);
          piVar5 = param_15;
          goto LAB_0042b01f;
        }
      }
      else if (uVar1 < 0x1b9) {
        if (uVar1 == 0x1b8) {
          /* ST_CALLSITE[0042AFAE]: CALL dword ptr [EAX + 0xec] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          if ((param_17 != nullptr) && (iVar4 = (**(code **)(*piVar7 + 0xec))(), iVar4 == 1)) {
            piVar7 = (int *)((int)piVar7 + 0x32);
            pDVar3 = (DArrayTy *)*param_17;
            goto cf_common_join_0042B022;
          }
        }
        else if (uVar1 == 0x1ae) {
          if (piVar7[9] == (int)param_1) {
            /* ST_CALLSITE[0042AF5B]: CALL dword ptr [EAX + 0xec] */
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
            if ((param_12 != nullptr) && (iVar4 = (**(code **)(*piVar7 + 0xec))(), iVar4 == 1)) {
              piVar7 = (int *)((int)piVar7 + 0x32);
              pDVar3 = (DArrayTy *)*param_12;
cf_common_join_0042B022:
              Library::DKW::TBL::DArrayAppend(pDVar3,piVar7);
            }
          }
          /* ST_CALLSITE[0042AF88]: CALL dword ptr [EAX + 0xec] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          else if ((param_13 != nullptr) && (iVar4 = (**(code **)(*piVar7 + 0xec))(), iVar4 == 1)
                  ) {
            piVar7 = (int *)((int)piVar7 + 0x32);
            pDVar3 = (DArrayTy *)*param_13;
            goto cf_common_join_0042B022;
          }
        }
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      else if (((999 < uVar1) && (uVar1 < 0x3ea)) &&
              /* ST_CALLSITE[0042AFD7]: CALL dword ptr [EAX + 0xec] */
              (iVar4 = (**(code **)(*piVar7 + 0xec))(), iVar4 == 1)) {
        if (piVar7[9] == (int)param_1) {
          if (param_9 != nullptr) {
            piVar7 = (int *)((int)piVar7 + 0x32);
            pDVar3 = (DArrayTy *)*param_9;
            goto cf_common_join_0042B022;
          }
        }
        else {
          piVar5 = param_11;
          if (param_10 != nullptr) {
            Library::DKW::TBL::DArrayAppend((DArrayTy *)*param_10,(void *)((int)piVar7 + 0x32));
          }
joined_r0x0042b01c:
          piVar7 = piVar7 + 9;
          if (piVar5 != nullptr) goto LAB_0042b01f;
        }
      }
      local_10 = local_10 + 1;
      iVar6 = iVar6 + 0x14;
    } while (local_10 < local_8);
    FUN_006a5e90(local_c);
  }
  g_currentExceptionFrame = local_54.previous;
  return;
}

