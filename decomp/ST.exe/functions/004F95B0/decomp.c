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
  DArrayTy *local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  errorCode = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  if (errorCode == 0) {
    local_8 = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,1,1);
    thunk_FUN_005411a0(&local_8->flags,param_1,"@ %s@ ");
    OutText(local_c,(int *)&local_8,param_2);
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar2 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel.cpp",0x351,0,errorCode,
                             "%s","CPanelTy::OutText(str, time)");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\Andrey\\cpanel.cpp",0x351);
  return;
}

