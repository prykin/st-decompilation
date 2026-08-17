#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\tsystem.cpp
   Diagnostic line evidence: 56 | 64 | 65 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void CreateBaseSystem(void)

{
  int errorCode;
  BaseSystemC *this;
  int iVar2;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  errorCode = Library::MSVCRT::__setjmp3(local_48.jumpBuffer,0);
  if (errorCode == 0) {
    this = (BaseSystemC *)Library::MSVCRT::FUN_0072e530(0x24);
    if (this == nullptr) {
      g_baseSystem_00811638 = nullptr;
    }
    else {
      /* ST_CALLSITE[00576BF7]: CALL 0x00401348; direct=00401348 BaseSystemC::BaseSystemC */
      g_baseSystem_00811638 = BaseSystemC::BaseSystemC(this,g_app_00806728);
    }
    if (g_baseSystem_00811638 == nullptr) {
      RaiseInternalException(-1,g_overwriteContext_007ED77C,"E:\\__titans\\tsystem.cpp",0x38);
    }
    g_baseSystem_00811638->field_0020 = 0;
    /* ST_CALLSITE[00576C32]: CALL dword ptr [EAX] */
    (*g_baseSystem_00811638->vtable->InitSystem)((SystemClassTy *)g_baseSystem_00811638);
    /* ST_CALLSITE[00576C42]: CALL 0x006e4650; direct=006E4650 AppClassTy::AddSystem */
    AppClassTy::AddSystem((AppClassTy *)&DAT_00807620,(int *)g_baseSystem_00811638,0);
    g_baseSystem_00811638->field_0020 = 1;
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

