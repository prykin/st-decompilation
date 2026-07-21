#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_plr_d.cpp
   Diagnostic line evidence: 363 | 366 | 368 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

uint * __cdecl CreateAssistantList(int param_1,int param_2,uint param_3)

{
  code *pcVar1;
  int errorCode;
  uint *puVar2;
  int iVar3;
  InternalExceptionFrame local_4c;
  DArrayTy *local_8;

  local_8 = (DArrayTy *)0x0;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (errorCode == 0) {
    if (param_1 == 0) {
      RaiseInternalException
                (-0x34,g_overwriteContext_007ED77C,s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x16b);
    }
    puVar2 = _CreateStgListByRoot((cMf32 *)param_1,param_2,PTR_s_ASSISTANT_0079d724,param_3);
    g_currentExceptionFrame = local_4c.previous;
    return puVar2;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage(s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x16e,0,errorCode,&DAT_007a4ccc,
                             s_CreateAssistantList_007d3024);
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  DArrayDestroy(local_8);
  RaiseInternalException(errorCode,0,s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x170);
  return (uint *)0x0;
}

