#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::IndexBut */

void __thiscall HelpPanelTy::IndexBut(HelpPanelTy *this)

{
  HelpPanelTy_field_01A1State HVar1;
  code *pcVar2;
  HelpPanelTy *this_00;
  int errorCode;
  int iVar3;
  InternalExceptionFrame local_4c;
  HelpPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (errorCode == 0) {
    HVar1 = local_8->field_01A1;
    if (((HVar1 == 0) || (HVar1 == CASE_6)) || (HVar1 == (CASE_8|CASE_2))) {
      local_8->field_01A2 = HVar1;
      local_8->field_01AB = local_8->field_01A3;
    }
    else {
      local_8->field_01A2 = 0;
      local_8->field_01AB = 0;
    }
    local_8->field_01A1 = CASE_8|CASE_2;
    local_8->field_01A3 = 0;
    Library::DKW::WGR::FUN_006b55f0
              ((AnonShape_006B5B10_E0D06CF1 *)local_8->field_0068,0,0x21,0x16,
               (byte *)local_8->field_01DC,0,0x21,0x16,0x1b8,0x118);
    if (this_00->field_0178 != 0) {
      this_00->field_0028 = 0x4202;
      *(undefined2 *)&this_00->field_0x2c = 0;
      this_00->field_002E = 2;
      *(undefined4 *)&this_00->field_0x30 = this_00->field_0178;
      if (g_cursorClass_00802A30 != (CursorClassTy *)0x0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)g_cursorClass_00802A30->field_0000)(&this_00->field_0x18);
      }
    }
    CreateList(this_00);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage("E:\\__titans\\Andrey\\helppan.cpp",0x2c0,0,errorCode,
                             "%s","HelpPanelTy::IndexBut");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\Andrey\\helppan.cpp",0x2c0);
  return;
}

