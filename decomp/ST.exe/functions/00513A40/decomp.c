#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::IndexBut */

void __thiscall HelpPanelTy::IndexBut(HelpPanelTy *this)

{
  HelpPanelTy_field_01A1State HVar1;
  int iVar2;
  HelpPanelTy *this_00;
  int iVar3_mg0;
  int iVar3_mg0_2;
  InternalExceptionFrame local_4c;
  HelpPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3_mg0 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar3_mg0 == 0) {
    HVar1 = local_8->field_01A1;
    if (((HVar1 == 0) || (HVar1 == CASE_6)) || (HVar1 == CASE_A)) {
      local_8->field_01A2 = HVar1;
      local_8->field_01AB = local_8->field_01A3;
    }
    else {
      local_8->field_01A2 = 0;
      local_8->field_01AB = 0;
    }
    local_8->field_01A1 = CASE_A;
    local_8->field_01A3 = nullptr;
    Library::DKW::WGR::FUN_006b55f0
              ((RecoveredSourceFamily_dibcopy *)local_8->field_0068,0,0x21,0x16,
               (byte *)local_8->field_01DC,0,0x21,0x16,0x1b8,0x118);
    STPiece<0,2>(iVar2) = this_00->field_0178;
    STPiece<2,2>(iVar2) = this_00->field_017A;
    if (iVar2 != 0) {
      this_00->field_0028 = 0x4202;
      *(undefined2 *)&this_00->field_0x2c = 0;
      *(undefined2 *)&this_00->field_0x2e = 2;
      this_00->field_0030 = (undefined2)iVar2;
      this_00->field_0032 = STPiece<2,2>(iVar2);
      if (g_cursorClass_00802A30 != nullptr) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)g_cursorClass_00802A30->field_0000)(&this_00->field_0x18);
      }
    }
    CreateList(this_00);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3_mg0_2 = ReportDebugMessage("E:\\__titans\\Andrey\\helppan.cpp",0x2c0,0,iVar3_mg0,
                                   "%s","HelpPanelTy::IndexBut");
  if (iVar3_mg0_2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3_mg0,0,"E:\\__titans\\Andrey\\helppan.cpp",0x2c0);
  return;
}

