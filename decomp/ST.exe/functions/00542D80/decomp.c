#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Andrey\tintersys.cpp
   Diagnostic line evidence: 202 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void CreateInterSystem(void)

{
  code *pcVar1;
  int errorCode;
  InterSystemC *this;
  int iVar2;
  InternalExceptionFrame local_68;
  undefined1 local_24 [16];
  undefined4 local_14;

  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  errorCode = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0);
  if (errorCode == 0) {
    this = (InterSystemC *)Library::MSVCRT::FUN_0072e530(0x34);
    if (this == nullptr) {
      g_interSystem_00802A28 = nullptr;
    }
    else {
      g_interSystem_00802A28 = InterSystemC::InterSystemC(this,g_appClass_00806728);
    }
    g_interSystem_00802A28->field_0020 = 0;
    (*g_interSystem_00802A28->vtable->InitSystem)((SystemClassTy *)g_interSystem_00802A28);
    AppClassTy::AddChildSystem
              ((AppClassTy *)&DAT_00807620,(SystemClassTy *)g_parentSystem_0081163C,
               (SystemClassTy *)g_interSystem_00802A28,0);
    InterSystemC::CreateInterfObjects(g_interSystem_00802A28);
    local_14 = 5;
    g_interSystem_00802A28->GetMessage((int)local_24);
    g_interSystem_00802A28->field_0020 = 1;
    g_currentExceptionFrame = local_68.previous;
    return;
  }
  g_currentExceptionFrame = local_68.previous;
  iVar2 = ReportDebugMessage("E:\\__titans\\Andrey\\tintersys.cpp",0xca,0,errorCode,
                             "%s","CreateInterSystem");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\Andrey\\tintersys.cpp",0xca);
  return;
}

