#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_plr_d.cpp
   Diagnostic line evidence: 451 | 455 | 456 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

LPSTR __cdecl GetStrategNameDB(int param_1,int param_2)

{
  char cVar1;
  int iVar3;
  LPSTR pCVar4;
  int iVar5;
  uint uVar6;
  char *pcVar8;
  char *pcVar9;
  char local_88 [64];
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  iVar3 = Library::MSVCRT::__setjmp3(local_48.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_48.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\ai\\ai_plr_d.cpp",0x1c7,0,iVar3,"%s",
                               "GetStrategNameDB");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\ai\\ai_plr_d.cpp",0x1c8);
    return (LPSTR)0x0;
  }
  if (((param_1 == 0) || (param_2 < 0)) || (7 < param_2)) {
    RaiseInternalException
              (-0x34,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_plr_d.cpp",0x1c3);
  }
  pCVar4 = FUN_006f2c00(PTR_s_STRATEG_0079d72c,1,param_2);
  uVar6 = 0xffffffff;
  do {
    pcVar8 = pCVar4;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar8 = pCVar4 + 1;
    cVar1 = *pCVar4;
    pCVar4 = pcVar8;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar8 = pcVar8 + -uVar6;
  pcVar9 = local_88;
  memmove(pcVar9, pcVar8, uVar6); /* compiler REP MOVS byte copy */
  iVar3 = 0;
  do {
    pCVar4 = FUN_006f2c00(local_88,3,iVar3);
    iVar5 = cMf32::RecChk((cMf32 *)param_1,0xc,pCVar4);
    if (iVar5 != 0) {
      g_currentExceptionFrame = local_48.previous;
      return pCVar4;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x7ffffff0);
  g_currentExceptionFrame = local_48.previous;
  return (LPSTR)0x0;
}

