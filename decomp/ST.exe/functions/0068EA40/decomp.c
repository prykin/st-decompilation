#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::ClaimRestore */

void __thiscall AiTactClassTy::ClaimRestore(AiTactClassTy *this)

{
  AiTactClassTy *pAVar2;
  int errorCode;
  DArrayTy *pAVar3;
  int iVar3;
  InternalExceptionFrame local_4c;
  AiTactClassTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;

  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pAVar2 = local_8;
  if (errorCode == 0) {
    if ((local_8->field_0130 != nullptr) &&
       (local_8->field_00BD != nullptr)) {
      DArrayDestroy((DArrayTy *)local_8->field_00BD);
      /* ST_CALLSITE[0068EA95]: CALL 0x006b0060; direct=006B0060 FUN_006b0060; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArraySpecializations/AiTactClassTy_field_00BDDArray; source view only; no Ghidra override */
      pAVar3 = FUN_006b0060(nullptr,pAVar2->field_0130);
      pAVar2->field_00BD = (AiTactClassTy_field_00BDDArray *)pAVar3;
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;

  iVar3 = ReportDebugMessage("E:\\__titans\\ai\\ai_tact.cpp",0x17b,0,errorCode,"%s",
                             "AiTactClassTy::ClaimRestore");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\ai\\ai_tact.cpp",0x17c);
  return;
}

