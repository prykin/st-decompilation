#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::PrepareToSave */

undefined4 * __thiscall AiTactClassTy::PrepareToSave(AiTactClassTy *this,uint *param_1)

{
  code *pcVar1;
  AiTactClassTy *pAVar2;
  int errorCode;
  undefined4 *puVar3;
  int iVar4;
  InternalExceptionFrame local_4c;
  AiTactClassTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pAVar2 = local_8;
  if (errorCode == 0) {
    if (local_8 == (AiTactClassTy *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = &local_8->field_0020;
    }
    puVar3 = TactDataPack(puVar3,param_1);
    *puVar3 = 0x38e;
    puVar3[3] = 1;
    *(undefined4 *)((int)puVar3 + 0x5e) = pAVar2->field_001C;
    *(undefined2 *)((int)puVar3 + 0x105) = 0;
    g_currentExceptionFrame = local_4c.previous;
    return puVar3;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage(s_E____titans_ai_ai_tact_cpp_007d56e0,0x81,0,errorCode,&DAT_007a4ccc,
                             s_AiTactClassTy__PrepareToSave_007d5730);
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,s_E____titans_ai_ai_tact_cpp_007d56e0,0x82);
  return (undefined4 *)0x0;
}

