#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\tsystem.cpp
   Diagnostic line evidence: 79 | 80 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void DestroyBaseSystem(void)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  errorCode = Library::MSVCRT::__setjmp3(local_48.jumpBuffer,0);
  if (errorCode == 0) {
    if (g_baseSystem_00811638 != nullptr) {
      if (g_baseSystem_00811638->field_0020 == 1) {
        FUN_006e4b80(&DAT_00807620,(int)g_baseSystem_00811638);
      }
      g_baseSystem_00811638->vfunc_04();
      Library::MSVCRT::FUN_0072e2b0((HoloTy *)g_baseSystem_00811638);
      g_baseSystem_00811638 = nullptr;
    }
    g_currentExceptionFrame = local_48.previous;
    return;
  }
  g_currentExceptionFrame = local_48.previous;
  iVar2 = ReportDebugMessage("E:\\__titans\\tsystem.cpp",0x4f,0,errorCode,"%s",
                             "DestroyBaseSystem");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\tsystem.cpp",0x50);
  return;
}

