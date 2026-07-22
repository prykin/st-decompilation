#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_boss.cpp
   AiBossClassTy::InitData */

int __thiscall AiBossClassTy::InitData(AiBossClassTy *this,undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  InternalExceptionFrame local_4c;
  AiBossClassTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar2 == 0) {
    if (local_8 == (AiBossClassTy *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)&local_8->field_0x5d3;
    }
    puVar4 = param_1;
    for (iVar2 = 0x21; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
    local_8->field_05D8 = 1;
    AiEventClassTy::InitData
              ((AiEventClassTy *)&local_8->vtable_at_1c,
               (int *)(local_8->field_0619 + 0x84 + (int)param_1));
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  thunk_FUN_00647ed0(local_8);
  iVar3 = ReportDebugMessage("E:\\__titans\\ai\\ai_boss.cpp",0x29,0,iVar2,"%s",
                             "AiBossClassTy::InitData");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar2,0,"E:\\__titans\\ai\\ai_boss.cpp",0x2a);
  return iVar2;
}

