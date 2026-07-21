#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_event.cpp
   AiEventClassTy::_CreateDest */

int __thiscall
AiEventClassTy::_CreateDest
          (AiEventClassTy *this,short param_1,short param_2,short param_3,short param_4,
          short param_5,char *param_6,char *param_7,undefined4 param_8)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  InternalExceptionFrame local_50;
  int local_c;
  int local_8;

  local_c = -1;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar4 = ReportDebugMessage("E:\\__titans\\ai\\ai_event.cpp",0x13c,0,iVar3,"%s",
                               "AiEventClassTy::_CreateDest");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\ai\\ai_event.cpp",0x13d);
    return iVar3;
  }
  if ((param_1 == 0) || (bVar2 = false, param_1 == 1)) {
    bVar2 = true;
  }
  if (bVar2) {
    iVar3 = thunk_FUN_004961b0(param_3,param_4,param_5);
    if (iVar3 != 0) {
      local_8 = (int)param_3;
      iVar3 = thunk_FUN_006036a0(param_3,param_4,param_5,(int)param_1);
      if (iVar3 != 0) {
        if (param_7 == (char *)0x0) {
          param_7 = &DAT_008016a0;
        }
        if (param_6 == (char *)0x0) {
          param_6 = &DAT_008016a0;
        }
        thunk_FUN_006034e0((short)local_8,param_4,param_5,(int)param_1,(int)param_2,param_6,param_7,
                           param_8);
        g_currentExceptionFrame = local_50.previous;
        return 0;
      }
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return local_c;
}

