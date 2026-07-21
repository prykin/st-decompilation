#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_flt.cpp
   AiFltClassTy::PrepareToSave */

undefined4 * __thiscall AiFltClassTy::PrepareToSave(AiFltClassTy *this,uint *param_1)

{
  code *pcVar1;
  AiFltClassTy *pAVar2;
  int errorCode;
  AnonShape_GLOBAL_008489C4_F7BABFAC *pAVar3;
  undefined4 *puVar4;
  int iVar5;
  InternalExceptionFrame local_4c;
  AiFltClassTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pAVar2 = local_8;
  if (errorCode == 0) {
    if (local_8 == (AiFltClassTy *)0x0) {
      pAVar3 = (AnonShape_GLOBAL_008489C4_F7BABFAC *)0x0;
    }
    else {
      pAVar3 = (AnonShape_GLOBAL_008489C4_F7BABFAC *)&local_8->field_0020;
    }
    puVar4 = FltDataPack(pAVar3,param_1);
    *puVar4 = 900;
    puVar4[3] = 1;
    *(undefined4 *)((int)puVar4 + 0x66) = pAVar2->field_001C;
    g_currentExceptionFrame = local_4c.previous;
    return puVar4;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar5 = ReportDebugMessage(s_E____titans_ai_ai_flt_cpp_007d2b80,0x4f,0,errorCode,&DAT_007a4ccc,
                             s_AiFltClassTy__PrepareToSave_007d2bbc);
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,s_E____titans_ai_ai_flt_cpp_007d2b80,0x50);
  return (undefined4 *)0x0;
}

