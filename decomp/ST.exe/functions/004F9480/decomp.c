#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel.cpp
   CPanelTy::OutText */

void __thiscall CPanelTy::OutText(CPanelTy *this,int param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  InternalExceptionFrame local_50;
  CPanelTy *local_c;
  uint *local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  if (iVar2 == 0) {
    local_8 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
    iVar2 = param_1 + param_2;
    if (param_2 < 1) {
      iVar2 = PTR_0080c4c7->field_0008;
    }
    for (; param_1 < iVar2; param_1 = param_1 + 1) {
      if (param_1 < (int)PTR_0080c4c7->field_0008) {
        pcVar3 = *(char **)(PTR_0080c4c7->field_0014 + param_1 * 4);
      }
      else {
        pcVar3 = (char *)0x0;
      }
      thunk_FUN_005411a0(local_8,pcVar3,"@ %s@ ");
    }
    OutText(local_c,(int *)&local_8,param_3);
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel.cpp",0x342,0,iVar2,"%s",
                             "CPanelTy::OutText(first, num, time)");
  if (iVar4 == 0) {
    RaiseInternalException(iVar2,0,"E:\\__titans\\Andrey\\cpanel.cpp",0x342);
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

