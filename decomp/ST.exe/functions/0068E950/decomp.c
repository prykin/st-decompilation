#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::ClaimSave */

void __thiscall AiTactClassTy::ClaimSave(AiTactClassTy *this)

{
  void **value;
  code *pcVar1;
  AiTactClassTy *pAVar2;
  int errorCode;
  void *pvVar3;
  int iVar4;
  InternalExceptionFrame local_50;
  int local_c;
  AiTactClassTy *local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  pAVar2 = local_8;
  if (errorCode == 0) {
    value = &local_8->field_0130;
    if (local_8->field_0130 != nullptr) {
      FreeAndNull(value);
    }
    if (pAVar2->field_00BD != nullptr) {
      pvVar3 = (void *)FUN_006b0020(&pAVar2->field_00BD->flags,&local_c);
      *value = pvVar3;
    }
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\ai\\ai_tact.cpp",0x16d,0,errorCode,"%s",
                             "AiTactClassTy::ClaimSave");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\ai\\ai_tact.cpp",0x16e);
  return;
}

