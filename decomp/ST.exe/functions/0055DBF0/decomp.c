#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\paltool.cpp
   Diagnostic line evidence: 29 | 31 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void __cdecl DarkScreen(undefined4 *param_1,int param_2,int param_3)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  undefined4 local_448 [256];
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  errorCode = Library::MSVCRT::__setjmp3(local_48.jumpBuffer,0);
  if (errorCode == 0) {
    FUN_006b0ba0((int)param_1,local_448,0,0x100);
    Library::Ourlib::PALETTE::FUN_007192d0(param_1,local_448,0,0x100,param_2,param_3);
    g_currentExceptionFrame = local_48.previous;
    return;
  }
  g_currentExceptionFrame = local_48.previous;
  iVar2 = ReportDebugMessage("E:\\__titans\\paltool.cpp",0x1d,0,errorCode,"%s",
                             "DarkScreen");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\paltool.cpp",0x1f);
  return;
}

