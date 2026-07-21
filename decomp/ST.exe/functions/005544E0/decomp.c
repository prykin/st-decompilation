#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\grig\loading.cpp
   cLoadingTy::delete */

void __thiscall cLoadingTy::delete(cLoadingTy *this,uint *param_1)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  ccFntTy *this_00;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  errorCode = Library::MSVCRT::__setjmp3(local_48.jumpBuffer,0);
  if (errorCode == 0) {
    if (param_1 != (uint *)0x0) {
      cMf32::RecMemFree(g_cMf32_00806780,param_1);
      if ((uint *)param_1[2] != (uint *)0x0) {
        ccFntTy::operator(this_00,(uint *)param_1[2]);
      }
      thunk_FUN_00555650((int)param_1);
      FUN_006a5e90((short *)param_1);
    }
    g_currentExceptionFrame = local_48.previous;
    return;
  }
  g_currentExceptionFrame = local_48.previous;
  iVar2 = ReportDebugMessage("E:\\__titans\\grig\\loading.cpp",0x52,0,errorCode,"%s",
                             "cLoadingTy::delete");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\grig\\loading.cpp",0x53);
  return;
}

