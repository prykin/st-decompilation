#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::ClaimSave */

void __thiscall AiTactClassTy::ClaimSave(AiTactClassTy *this)

{
  undefined4 *value;
  code *pcVar1;
  AiTactClassTy *pAVar2;
  int errorCode;
  undefined4 uVar3;
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
    if (local_8->field_0130 != 0) {
      FreeAndNull((void **)value);
    }
    if (pAVar2->field_00BD != (DArrayTy *)0x0) {
      uVar3 = FUN_006b0020(&pAVar2->field_00BD->flags,&local_c);
      *value = uVar3;
    }
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar4 = ReportDebugMessage(s_E____titans_ai_ai_tact_cpp_007d56e0,0x16d,0,errorCode,&DAT_007a4ccc,
                             s_AiTactClassTy__ClaimSave_007d5754);
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,s_E____titans_ai_ai_tact_cpp_007d56e0,0x16e);
  return;
}

