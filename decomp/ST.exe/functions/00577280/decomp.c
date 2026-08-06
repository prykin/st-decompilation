#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\tsystem.cpp
   Diagnostic line evidence: 177 | 187 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void CreateGameSystem(void)

{
  int iVar1;
  int iVar4;
  CursorClassTy *this;
  int iVar2;
  GameSystemC *this_00;
  int iVar3;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  iVar2 = Library::MSVCRT::__setjmp3(local_48.jumpBuffer,0);
  if (iVar2 == 0) {
    this_00 = (GameSystemC *)Library::MSVCRT::FUN_0072e530(0x435);
    if (this_00 == nullptr) {
      g_parentSystem_0081163C = nullptr;
    }
    else {
      g_parentSystem_0081163C = GameSystemC::GameSystemC(this_00,g_app_00806728);
    }
    if (g_parentSystem_0081163C == nullptr) {
      RaiseInternalException(-1,g_overwriteContext_007ED77C,"E:\\__titans\\tsystem.cpp",0xb1);
    }
    g_parentSystem_0081163C->field_0428 = 0;
    g_parentSystem_0081163C->InitSystem();
    AppClassTy::AddSystem((AppClassTy *)&DAT_00807620,(int *)g_parentSystem_0081163C,0);
    g_parentSystem_0081163C->field_0428 = 1;
    this = g_cursorClass_00802A30;
    iVar1 = g_cursorClass_00802A30->field_00C9;
    iVar4 = g_cursorClass_00802A30->field_00C5;
    g_cursorClass_00802A30->field_0493 = 2;
    this->field_0494 = 0xffff;
    CursorClassTy::SetGCType(this,CASE_0,iVar4,iVar1);
    CursorClassTy::DrawSprite(this,this->field_00C5,this->field_00C9);
    this->field_00D2 = 0;
    this->field_04DF = -1;
    g_currentExceptionFrame = local_48.previous;
    return;
  }
  g_currentExceptionFrame = local_48.previous;
  iVar3 = ReportDebugMessage("E:\\__titans\\tsystem.cpp",0xbb,0,iVar2,"%s",
                             "CreateGameSystem");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar2,0,"E:\\__titans\\tsystem.cpp",0xbb);
  return;
}

