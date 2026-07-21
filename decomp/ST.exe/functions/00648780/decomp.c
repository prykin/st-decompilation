#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_boss_d.cpp
   Diagnostic line evidence: 127 | 134 | 136 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 * __cdecl LoadBossEdit(int param_1,char *param_2)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  undefined4 *puVar3;
  InternalExceptionFrame local_50;
  undefined4 *local_c;
  ushort *local_8;

  local_c = (undefined4 *)0x0;
  local_8 = (ushort *)0x0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  errorCode = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  if (errorCode == 0) {
    if ((param_1 == 0) || (param_2 == (char *)0x0)) {
      RaiseInternalException
                (-0x34,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_boss_d.cpp",0x7f);
    }
    local_8 = Library::Ourlib::MFAOBJ::mfAObjLoad((cMf32 *)param_1,param_2,1,0);
    if (local_8 != (ushort *)0x0) {
      local_c = thunk_FUN_00648530(local_8);
      thunk_FUN_006484f0((int *)&local_8);
    }
    g_currentExceptionFrame = local_50.previous;
    return local_c;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar2 = ReportDebugMessage("E:\\__titans\\ai\\ai_boss_d.cpp",0x86,0,errorCode,"%s",
                             "LoadBossEdit");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  thunk_FUN_006484f0((int *)&local_8);
  thunk_FUN_006484f0((int *)&local_c);
  RaiseInternalException(errorCode,0,"E:\\__titans\\ai\\ai_boss_d.cpp",0x88);
  return (undefined4 *)0x0;
}

