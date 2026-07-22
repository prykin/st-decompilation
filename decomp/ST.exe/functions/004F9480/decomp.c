#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel.cpp
   CPanelTy::OutText */

void __thiscall CPanelTy::OutText(CPanelTy *this,int param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  int errorCode;
  char *pcVar2;
  int iVar3;
  dword dVar4;
  InternalExceptionFrame local_50;
  CPanelTy *local_c;
  DArrayTy *local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  errorCode = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  if (errorCode == 0) {
    local_8 = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,10,10);
    dVar4 = param_1 + param_2;
    if (param_2 < 1) {
      dVar4 = g_dArray_0080C4C7->elementSize;
    }
    for (; param_1 < (int)dVar4; param_1 = param_1 + 1) {
      if (param_1 < (int)g_dArray_0080C4C7->elementSize) {
        pcVar2 = *(char **)(g_dArray_0080C4C7->growCapacity + param_1 * 4);
      }
      else {
        pcVar2 = (char *)0x0;
      }
      thunk_FUN_005411a0(local_8,pcVar2,"@ %s@ ");
    }
    OutText(local_c,(int *)&local_8,param_3);
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar3 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel.cpp",0x342,0,errorCode,
                             "%s","CPanelTy::OutText(first, num, time)");
  if (iVar3 == 0) {
    RaiseInternalException(errorCode,0,"E:\\__titans\\Andrey\\cpanel.cpp",0x342);
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

