#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\tsystem.cpp
   Diagnostic line evidence: 177 | 187 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void CreateGameSystem(void)

{
  code *pcVar1;
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
    if (this_00 == (GameSystemC *)0x0) {
      PTR_0081163c = (AnonShape_00577690_10255A81 *)0x0;
    }
    else {
      PTR_0081163c = (AnonShape_00577690_10255A81 *)
                     GameSystemC::GameSystemC(this_00,g_appClass_00806728);
    }
    if ((GameSystemC *)PTR_0081163c == (GameSystemC *)0x0) {
      RaiseInternalException(-1,g_overwriteContext_007ED77C,"E:\\__titans\\tsystem.cpp",0xb1)
      ;
    }
    *(undefined4 *)&PTR_0081163c->field_0x428 = 0;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (*(code *)**(undefined4 **)PTR_0081163c)();
    AppClassTy::AddSystem((AppClassTy *)&DAT_00807620,(int *)PTR_0081163c,0);
    *(undefined4 *)&PTR_0081163c->field_0x428 = 1;
    this = PTR_00802a30;
    iVar2 = PTR_00802a30->field_00C9;
    iVar3 = PTR_00802a30->field_00C5;
    PTR_00802a30->field_0493 = 2;
    this->field_0494 = 0xffff;
    CursorClassTy::SetGCType(this,CASE_0,iVar3,iVar2);
    CursorClassTy::DrawSprite(this,this->field_00C5,this->field_00C9);
    this->field_00D2 = 0;
    this->field_04DF = 0xffffffff;
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

