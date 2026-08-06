#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::OutBmpProc

   [STPrototypeApplier] Propagated parameter 8.
   Evidence: 005DBF40 -> 006B48E0 @ 005DBFA7 */

void __thiscall
StartSystemTy::OutBmpProc
          (StartSystemTy *this,int param_1,undefined4 param_2,undefined4 param_3,int param_4,
          int param_5,undefined4 param_6,undefined4 param_7,AnonPointee_MReportTy_0073 *param_8)

{
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_48;

  if (param_8 != nullptr) {
    local_48.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_48;
    errorCode = Library::MSVCRT::__setjmp3(local_48.jumpBuffer,0);
    if (errorCode == 0) {
      Library::DKW::DDX::FUN_006b48e0
                (param_1,param_4,param_5,param_8,0,0,0,param_8->field_0004,param_8->field_0008,
                 (ushort *)&g_startSystem_0081176C->field_0x144,0,0x10000ff);
      g_currentExceptionFrame = local_48.previous;
      return;
    }
    g_currentExceptionFrame = local_48.previous;
    iVar2 = ReportDebugMessage("E:\\__titans\\Start\\startsys.cpp",0x1c2,0,errorCode,
                               "%s","StartSystemTy::OutBmpProc");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\startsys.cpp",0x1c2);
  }
  return;
}

