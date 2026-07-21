#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_plr_d.cpp
   Diagnostic line evidence: 473 | 474 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

LPSTR __cdecl GetStrategName(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  LPSTR pCVar3;
  int iVar4;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  iVar2 = Library::MSVCRT::__setjmp3(local_48.jumpBuffer,0);
  if (iVar2 == 0) {
    iVar2 = 3;
    pCVar3 = FUN_006f2c00(PTR_s_STRATEG_0079d72c,1,param_1);
    pCVar3 = FUN_006f2c00(pCVar3,iVar2,param_2);
    g_currentExceptionFrame = local_48.previous;
    return pCVar3;
  }
  g_currentExceptionFrame = local_48.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\ai\\ai_plr_d.cpp",0x1d9,0,iVar2,"%s",
                             "GetStrategName");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar2,0,"E:\\__titans\\ai\\ai_plr_d.cpp",0x1da);
  return (LPSTR)0x0;
}

