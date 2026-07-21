#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\tsystem.cpp
   Diagnostic line evidence: 56 | 64 | 65 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void CreateBaseSystem(void)

{
  code *pcVar1;
  int errorCode;
  BaseSystemC *this;
  int iVar2;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  errorCode = Library::MSVCRT::__setjmp3(local_48.jumpBuffer,0);
  if (errorCode == 0) {
    this = (BaseSystemC *)Library::MSVCRT::FUN_0072e530(0x24);
    if (this == (BaseSystemC *)0x0) {
      DAT_00811638 = (BaseSystemC *)0x0;
    }
    else {
      DAT_00811638 = BaseSystemC::BaseSystemC(this,g_appClass_00806728);
    }
    if (DAT_00811638 == (BaseSystemC *)0x0) {
      RaiseInternalException(-1,g_overwriteContext_007ED77C,"E:\\__titans\\tsystem.cpp",0x38)
      ;
    }
    DAT_00811638[8].vtable = (BaseSystemCVTable *)0x0;
    (*DAT_00811638->vtable->InitSystem)((SystemClassTy *)DAT_00811638);
    AppClassTy::AddSystem((AppClassTy *)&DAT_00807620,(int *)DAT_00811638,0);
    DAT_00811638[8].vtable = (BaseSystemCVTable *)0x1;
    g_currentExceptionFrame = local_48.previous;
    return;
  }
  g_currentExceptionFrame = local_48.previous;
  iVar2 = ReportDebugMessage("E:\\__titans\\tsystem.cpp",0x40,0,errorCode,"%s",
                             "CreateBaseSystem");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\tsystem.cpp",0x41);
  return;
}

