#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::OutBmpProc */

void __thiscall
StartSystemTy::OutBmpProc
          (StartSystemTy *this,int *param_1,undefined4 param_2,undefined4 param_3,int param_4,
          int param_5,DWORD param_6,DWORD param_7,BITMAPINFO *param_8)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_48;

  if (param_8 != (BITMAPINFO *)0x0) {
    local_48.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_48;
    errorCode = Library::MSVCRT::__setjmp3(local_48.jumpBuffer,0);
    if (errorCode == 0) {
      Library::DKW::DDX::FUN_006b4680
                (param_1,param_4,param_5,param_8,(uint *)0x0,0,0,param_6,param_7,0x10000ff);
      g_currentExceptionFrame = local_48.previous;
      return;
    }
    g_currentExceptionFrame = local_48.previous;
    iVar2 = ReportDebugMessage(s_E____titans_Start_startsys_cpp_007cd718,0x1b7,0,errorCode,
                               &DAT_007a4ccc,s_StartSystemTy__OutBmpProc_007cd110);
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,s_E____titans_Start_startsys_cpp_007cd718,0x1b7);
  }
  return;
}

