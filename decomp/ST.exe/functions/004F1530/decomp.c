#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cp_sup.cpp
   CPanelTy::OutProc */

void __thiscall
CPanelTy::OutProc(CPanelTy *this,int param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 int param_5,undefined4 param_6,undefined4 param_7,int param_8)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  errorCode = Library::MSVCRT::__setjmp3(local_48.jumpBuffer,0);
  if (errorCode == 0) {
    Library::DKW::DDX::FUN_006b48e0
              (param_1,param_4,param_5,param_8,0,0,0,*(uint *)(param_8 + 4),*(int *)(param_8 + 8),
               DAT_008032b4,0,0x10000ff);
    g_currentExceptionFrame = local_48.previous;
    return;
  }
  g_currentExceptionFrame = local_48.previous;
  iVar2 = ReportDebugMessage(s_E____titans_Andrey_cp_sup_cpp_007c1a4c,0x1f,0,errorCode,&DAT_007a4ccc
                             ,s_CPanelTy__OutProc_007c1a70);
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,s_E____titans_Andrey_cp_sup_cpp_007c1a4c,0x1f);
  return;
}

