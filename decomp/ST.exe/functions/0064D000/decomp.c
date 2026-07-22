#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_event.cpp
   AiEventClassTy::PrepareToSave */

undefined4 * __thiscall AiEventClassTy::PrepareToSave(AiEventClassTy *this,uint *param_1)

{
  code *pcVar1;
  AiEventClassTy *pAVar2;
  int errorCode;
  AnonShape_0065CD10_BA40DE58 *pAVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 *puVar6;
  InternalExceptionFrame local_4c;
  AiEventClassTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pAVar2 = local_8;
  if (errorCode == 0) {
    if (local_8 == (AiEventClassTy *)0x0) {
      pAVar3 = (AnonShape_0065CD10_BA40DE58 *)0x0;
    }
    else {
      pAVar3 = (AnonShape_0065CD10_BA40DE58 *)&local_8->field_008C;
    }
    pbVar4 = EventDataPack(pAVar3,param_1);
    *pbVar4 = 1;
    *(uint *)(pbVar4 + 0x4e) = pAVar2->field_0088;
    g_currentExceptionFrame = local_4c.previous;
    return (undefined4 *)pbVar4;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar5 = ReportDebugMessage("E:\\__titans\\ai\\ai_event.cpp",0x66,0,errorCode,"%s",
                             "AiEventClassTy::PrepareToSave");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\ai\\ai_event.cpp",0x67);
  return (undefined4 *)0x0;
}

