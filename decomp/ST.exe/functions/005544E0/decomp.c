#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\grig\loading.cpp
   cLoadingTy::delete

   [STCallsiteConventionApplier] __cdecl inferred from all-caller stack cleanup. Evidence: all 2
   callers reclaim stack arguments [4] matching the explicit parameter width; no explicit ECX
   pointer receiver setup observed

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __cdecl cLoadingTy::delete(uint *param_1)

{
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;

  errorCode = Library::MSVCRT::__setjmp3(local_48.jumpBuffer,0);
  if (errorCode == 0) {
    if (param_1 != nullptr) {
      cMf32::RecMemFree(g_cMf32_00806780,param_1);
      if ((uint *)param_1[2] != nullptr) {
        ccFntTy::operator_delete((uint *)param_1[2]);
      }
      thunk_FUN_00555650((RecoveredRecord_00555650_8E7D0F7D *)param_1);
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

