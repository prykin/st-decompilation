#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\task_obj.cpp
   MTaskTy::OutGlassBmpProc */

void __thiscall
MTaskTy::OutGlassBmpProc
          (MTaskTy *this,int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
          undefined4 param_6,undefined4 param_7,int *param_8)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  InternalExceptionFrame local_4c;
  int *local_8;

  if (((param_8 != (int *)0x0) && (local_8 = param_8, *param_8 != 0)) && (param_8[1] != 0)) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
    if (iVar2 == 0) {
      iVar2 = *local_8;
      Library::DKW::DDX::FUN_006b48e0
                (param_1,param_4,param_5,iVar2,0,0,0,*(uint *)(iVar2 + 4),*(int *)(iVar2 + 8),
                 local_8[1],0,0x10000ff);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = ReportDebugMessage("E:\\__titans\\Start\\task_obj.cpp",0x27,0,iVar2,"%s",
                               "MTaskTy::OutGlassBmpProc");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar2,0,"E:\\__titans\\Start\\task_obj.cpp",0x27);
  }
  return;
}

