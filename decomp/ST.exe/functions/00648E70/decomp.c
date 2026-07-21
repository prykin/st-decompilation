#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_creat.cpp
   Diagnostic line evidence: 130 | 141 | 143 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int __cdecl CreateArbiter(int param_1,char *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  InternalExceptionFrame local_4c;
  ushort *local_8;

  local_8 = (ushort *)0x0;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar2 == 0) {
    if ((PTR_00802a38 == (STPlaySystemC *)0x0) || (param_1 == 0)) {
      RaiseInternalException
                (-0x34,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_creat.cpp",0x82);
    }
    if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
      param_2 = PTR_s_AIBOSS_0079d664;
    }
    local_8 = Library::Ourlib::MFAOBJ::mfAObjLoad((cMf32 *)param_1,param_2,1,0);
    if (local_8 == (ushort *)0x0) {
      local_8 = (ushort *)CreateDefaultBossData();
    }
    Library::Ourlib::SAPP::FUN_006e6200
              (PTR_00802a38,0x403,(undefined4 *)0x28,(undefined4 *)0x0,(int *)0x0,local_8,0);
    thunk_FUN_006484f0((int *)&local_8);
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage("E:\\__titans\\ai\\ai_creat.cpp",0x8d,0,iVar2,"%s",
                             "CreateArbiter");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  thunk_FUN_006484f0((int *)&local_8);
  RaiseInternalException(iVar2,0,"E:\\__titans\\ai\\ai_creat.cpp",0x8f);
  return iVar2;
}

