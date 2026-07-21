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
    if (this == (InterSystemC *)0x0) {
      PTR_00802a28 = (ccFntTy *)0x0;
    }
    else {
      PTR_00802a28 = (ccFntTy *)InterSystemC::InterSystemC(this,g_appClass_00806728);
    }
    *(undefined4 *)&PTR_00802a28->field_0x20 = 0;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (*(code *)**(undefined4 **)PTR_00802a28)();
    AppClassTy::AddChildSystem
              ((AppClassTy *)&DAT_00807620,(SystemClassTy *)PTR_0081163c,
               (SystemClassTy *)PTR_00802a28,0);
    InterSystemC::CreateInterfObjects((InterSystemC *)PTR_00802a28);
    local_14 = 5;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)PTR_00802a28 + 0x20))(local_24);
    *(undefined4 *)&PTR_00802a28->field_0x20 = 1;
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

