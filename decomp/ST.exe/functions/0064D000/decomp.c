#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_event.cpp
   AiEventClassTy::PrepareToSave */

undefined4 * __thiscall AiEventClassTy::PrepareToSave(AiEventClassTy *this,uint *param_1)

{
  code *pcVar1;
  AiEventClassTy *pAVar2;
  int errorCode;
  AllocationRecord_0065CD10 *pAVar3;
  int iVar4;
  undefined4 *puVar5;
  InternalExceptionFrame local_4c;
  AiEventClassTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pAVar2 = local_8;
  if (errorCode == 0) {
    if (local_8 == nullptr) {
      pAVar3 = nullptr;
    }
    else {
      pAVar3 = (AllocationRecord_0065CD10 *)&local_8->field_008C;
    }
    pAVar3 = EventDataPack(pAVar3,param_1);
    *(undefined1 *)pAVar3 = 1;
    *(uint *)&pAVar3->field_0x4e = pAVar2->field_0088;
    g_currentExceptionFrame = local_4c.previous;
    return (undefined4 *)pAVar3;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\ai\\ai_event.cpp",0x66,0,errorCode,"%s",
                             "AiEventClassTy::PrepareToSave");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\ai\\ai_event.cpp",0x67);
  return nullptr;
}

