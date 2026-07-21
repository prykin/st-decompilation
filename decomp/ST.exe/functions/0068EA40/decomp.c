#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::ClaimRestore */

void __thiscall AiTactClassTy::ClaimRestore(AiTactClassTy *this)

{
  code *pcVar1;
  AiTactClassTy *pAVar2;
  int errorCode;
  DArrayTy *pDVar3;
  int iVar4;
  InternalExceptionFrame local_4c;
  AiTactClassTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pAVar2 = local_8;
  if (errorCode == 0) {
    if ((local_8->field_0130 != 0) && (local_8->field_00BD != (DArrayTy *)0x0)) {
      DArrayDestroy(local_8->field_00BD);
      pDVar3 = (DArrayTy *)FUN_006b0060((uint *)0x0,(uint *)pAVar2->field_0130);
      pAVar2->field_00BD = pDVar3;
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\ai\\ai_tact.cpp",0x17b,0,errorCode,"%s",
                             "AiTactClassTy::ClaimRestore");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\ai\\ai_tact.cpp",0x17c);
  return;
}

