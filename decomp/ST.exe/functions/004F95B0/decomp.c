#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel.cpp
   CPanelTy::OutText */

void __thiscall CPanelTy::OutText(CPanelTy *this,char *param_1,undefined4 param_2)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_50;
  CPanelTy *local_c;
  uint *local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  errorCode = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  if (errorCode == 0) {
    local_8 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,1);
    thunk_FUN_005411a0(local_8,param_1,s____s__007c221c);
    OutText(local_c,(int *)&local_8,param_2);
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar2 = ReportDebugMessage(s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x351,0,errorCode,
                             &DAT_007a4ccc,s_CPanelTy__OutText_str__time__007c2224);
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x351);
  return;
}

