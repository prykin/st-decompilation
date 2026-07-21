#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_plr_d.cpp
   Diagnostic line evidence: 291 | 294 | 295 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int __cdecl DelPlrEdit(int param_1,char *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  iVar2 = Library::MSVCRT::__setjmp3(local_48.jumpBuffer,0);
  if (iVar2 == 0) {
    if ((param_1 == 0) || (param_2 == (char *)0x0)) {
      RaiseInternalException
                (-0x34,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_plr_d.cpp",0x123);
    }
    cMf32::RecDel((cMf32 *)param_1,0xc,param_2);
    g_currentExceptionFrame = local_48.previous;
    return 0;
  }
  g_currentExceptionFrame = local_48.previous;
  iVar3 = ReportDebugMessage("E:\\__titans\\ai\\ai_plr_d.cpp",0x126,0,iVar2,"%s",
                             "DelPlrEdit");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar2,0,"E:\\__titans\\ai\\ai_plr_d.cpp",0x127);
  return iVar2;
}

