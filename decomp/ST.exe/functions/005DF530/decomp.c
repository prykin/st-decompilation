#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\task_obj.cpp
   MTaskTy::OutGlassBmpProc */

void __thiscall
MTaskTy::OutGlassBmpProc
          (MTaskTy *this,int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
          undefined4 param_6,undefined4 param_7,int *param_8)

{
  AnonPointee_MReportTy_0073 *pAVar1;
  code *pcVar2;
  int errorCode;
  int iVar3;
  InternalExceptionFrame local_4c;
  int *local_8;

  if (((param_8 != (int *)0x0) && (local_8 = param_8, *param_8 != 0)) && (param_8[1] != 0)) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
    if (errorCode == 0) {
      pAVar1 = (AnonPointee_MReportTy_0073 *)*local_8;
      Library::DKW::DDX::FUN_006b48e0
                (param_1,param_4,param_5,pAVar1,0,0,0,pAVar1->field_0004,pAVar1->field_0008,
                 local_8[1],0,0x10000ff);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = ReportDebugMessage("E:\\__titans\\Start\\task_obj.cpp",0x27,0,errorCode,
                               "%s","MTaskTy::OutGlassBmpProc");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\task_obj.cpp",0x27);
  }
  return;
}

