#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_plr_d.cpp
   Diagnostic line evidence: 488 | 491 | 492 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0067E580 parameter used as this of cMf32::RecChk @ 0067E5E8 */

LPSTR __cdecl GetAssistantNameDB(cMf32 *param_1)

{
  code *pcVar1;
  undefined *text;
  int iVar2;
  LPSTR pCVar3;
  int iVar4;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  iVar2 = Library::MSVCRT::__setjmp3(local_48.jumpBuffer,0);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_48.previous;
    iVar4 = ReportDebugMessage(s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x1eb,0,iVar2,&DAT_007a4ccc,
                               s_GetAssistantNameDB_007d30b0);
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar2,0,s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x1ec);
    return (LPSTR)0x0;
  }
  if (param_1 == (cMf32 *)0x0) {
    RaiseInternalException
              (-0x34,g_overwriteContext_007ED77C,s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x1e8);
  }
  text = PTR_s_ASSISTANT_0079d724;
  iVar2 = 0;
  do {
    pCVar3 = FUN_006f2c00(text,3,iVar2);
    iVar4 = cMf32::RecChk(param_1,0xc,pCVar3);
    if (iVar4 != 0) {
      g_currentExceptionFrame = local_48.previous;
      return pCVar3;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x7ffffff0);
  g_currentExceptionFrame = local_48.previous;
  return (LPSTR)0x0;
}

