#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\panel.cpp
   UPanelTy::OutProc */

void __thiscall
UPanelTy::OutProc(UPanelTy *this,int *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 int param_5,undefined4 param_6,undefined4 param_7,BITMAPINFO *param_8)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  errorCode = Library::MSVCRT::__setjmp3(local_48.jumpBuffer,0);
  if (errorCode == 0) {
    FUN_006b48a0(param_1,param_4,param_5,param_8,(uint *)0x0,0xff);
    g_currentExceptionFrame = local_48.previous;
    return;
  }
  g_currentExceptionFrame = local_48.previous;
  iVar2 = ReportDebugMessage(s_E____titans_Andrey_panel_cpp_007c7390,0x5c,0,errorCode,&DAT_007a4ccc,
                             s_UPanelTy__OutProc_007c73fc);
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,s_E____titans_Andrey_panel_cpp_007c7390,0x5c);
  return;
}

