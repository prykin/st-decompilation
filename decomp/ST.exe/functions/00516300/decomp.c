#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::MObjProc

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0), and
   decompilation contains no value return */

void __thiscall HelpPanelTy::MObjProc(HelpPanelTy *this)

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
    STPiece<0,2>(iVar2) = local_8->field_0178;
    STPiece<2,2>(iVar2) = local_8->field_017A;
    local_8->field_01A1 = CASE_7;
    local_8->field_01A7 = 0;
    local_8->field_01A3 = nullptr;
    local_8->field_01AF = 0;
    local_8->field_01B1 = 0;
    if (iVar2 != 0) {
      local_8->field_0028 = 0x4202;
      *(undefined2 *)&local_8->field_0x2c = 0;
      *(undefined2 *)&local_8->field_0x2e = 2;
      local_8->field_0030 = (undefined2)iVar2;
      local_8->field_0032 = STPiece<2,2>(iVar2);
      if (g_cursorClass_00802A30 != nullptr) {
        /* ST_CALLSITE[005163B9]: CALL dword ptr [EDX] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)g_cursorClass_00802A30->field_0000)(&local_8->field_0x18);
      }
    }
    if (this_00->field_019C != 0) {
      StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_019C);
    }
    /* ST_CALLSITE[005163D7]: CALL 0x00402194; direct=00402194 HelpPanelTy::sub_00512BE0 */
    sub_00512BE0(this_00,(int)this_00->field_01D3);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3_mg0_2 = ReportDebugMessage("E:\\__titans\\Andrey\\helppan.cpp",0x46e,0,iVar3_mg0,
                                   "%s","HelpPanelTy::MObjProc");
  if (iVar3_mg0_2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3_mg0,0,"E:\\__titans\\Andrey\\helppan.cpp",0x46e);
  return;
}

