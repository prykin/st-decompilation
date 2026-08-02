#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\task_obj.cpp
   MTaskTy::OutGlassTxtProc

   [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

void __thiscall
MTaskTy::OutGlassTxtProc
          (MTaskTy *this,int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,
          undefined4 param_6,undefined4 param_7,DArrayTy *param_8)

{
  uint uVar1;
  AnonPointee_MReportTy_0073 *pAVar2;
  code *pcVar3;
  int errorCode;
  int iVar4;
  uint uVar5;
  InternalExceptionFrame local_4c;
  int *local_8;

  if (param_8 != nullptr) {
    uVar1 = param_8->count;
    uVar5 = 0;
    if (uVar1 != 0) {
      if (uVar1 == 0) {
        local_8 = nullptr;
        goto LAB_005df673;
      }
      do {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(param_8, uVar5) (runtime stride) */
        local_8 = (int *)(param_8->elementSize * uVar5 + (int)param_8->data);
LAB_005df673:
      } while ((*local_8 != param_2) && (uVar5 = uVar5 + 1, uVar5 < uVar1));
    }
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
    if (errorCode == 0) {
      if (local_8[0xb] != 0) {
        pAVar2 = (AnonPointee_MReportTy_0073 *)local_8[local_8[4] + 1];
        Library::DKW::DDX::FUN_006b48e0
                  ((int)param_1,param_4,param_5,pAVar2,0,0,0,pAVar2->field_0004,pAVar2->field_0008,
                   local_8[0xb],0,0x10000ff);
        g_currentExceptionFrame = local_4c.previous;
        return;
      }
      FUN_006b48a0(param_1,param_4,param_5,(BITMAPINFO *)local_8[local_8[4] + 1],nullptr,
                   0x10000ff);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar4 = ReportDebugMessage("E:\\__titans\\Start\\task_obj.cpp",0x3a,0,errorCode,
                               "%s","MTaskTy::OutGlassTxtProc");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\task_obj.cpp",0x3a);
  }
  return;
}

