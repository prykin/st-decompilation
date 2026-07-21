#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\paltool.cpp
   Diagnostic line evidence: 75 | 77 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0055DCD0 parameter used as this of cMf32::RecGet @ 0055DD1E | 0055DCD0 parameter used
   as this of cMf32::RecMemFree @ 0055DD5D */

void __cdecl
SetPalette(undefined4 *param_1,int *param_2,cMf32 *param_3,char *param_4,int param_5,int param_6)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  undefined4 local_44c [256];
  InternalExceptionFrame local_4c;
  ushort *local_8;

  local_8 = (ushort *)0x0;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (errorCode == 0) {
    Library::DKW::DDX::FUN_006bd740(param_2);
    local_8 = cMf32::RecGet(param_3,1,param_4,(int *)0x0,1);
    FUN_006bc360(local_8,local_44c,(int *)0x0);
    Library::Ourlib::PALETTE::FUN_00719080(param_1,local_44c,0,0x100,param_5,param_6);
    cMf32::RecMemFree(param_3,(uint *)&local_8);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar2 = ReportDebugMessage("E:\\__titans\\paltool.cpp",0x4b,0,errorCode,"%s",
                             "SetPalette");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\paltool.cpp",0x4d);
  return;
}

