#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::SwitchOptPanel

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STSwitchEnumApplier] Switch target field_0172 uses
   /SubmarineTitans/Recovered/Enums/HelpPanelTy_field_0172State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4 */

void __thiscall HelpPanelTy::SwitchOptPanel(HelpPanelTy *this,int param_1)

{
  HelpPanelTy_field_0172State HVar1;
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
  if (iVar3_mg0 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar3_mg0_2 = ReportDebugMessage("E:\\__titans\\Andrey\\helppan.cpp",0x10f,0,iVar3_mg0,
                                     "%s","HelpPanelTy::SwitchOptPanel");
    if (iVar3_mg0_2 == 0) {
      RaiseInternalException(iVar3_mg0,0,"E:\\__titans\\Andrey\\helppan.cpp",0x10f);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  HVar1 = local_8->field_0172;
  if (HVar1 == CASE_1) {
    if (param_1 != 0) {
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    STPiece<0,2>(iVar2) = local_8->field_0178;
    STPiece<2,2>(iVar2) = local_8->field_017A;
    if (iVar2 != 0) {
      local_8->field_0028 = 0x4202;
      *(undefined2 *)&local_8->field_0x2c = 0;
      *(undefined2 *)&local_8->field_0x2e = 2;
      local_8->field_0030 = (undefined2)iVar2;
      local_8->field_0032 = STPiece<2,2>(iVar2);
      if (g_cursorClass_00802A30 != nullptr) {
        /* ST_CALLSITE[00511EC2]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/CursorClassTy;pointer:/SubmarineTitans/Recovered/STMessage */
        g_cursorClass_00802A30->GetMessage((STMessage *)&local_8->field_0x18);
      }
    }
    /* ST_CALLSITE[00511EC8]: CALL 0x00404fd9; direct=00404FD9 HelpPanelTy::ShiftControls */
    ShiftControls(this_00,0);
  }
  else {
    if (HVar1 == CASE_2) {
      if (param_1 == 0) {
        g_currentExceptionFrame = local_4c.previous;
        return;
      }
      local_8->field_0172 = CASE_3;
      thunk_FUN_005252c0(CASE_AF);
      if (g_cPanel_00801688 == nullptr) {
        g_currentExceptionFrame = local_4c.previous;
        return;
      }
      /* ST_CALLSITE[00511E7B]: CALL 0x00402ed2; direct=00402ED2 CPanelTy::ShiftControls */
      CPanelTy::ShiftControls(g_cPanel_00801688,0);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    if (HVar1 != CASE_3) {
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
  }
  if (param_1 == 0) {
    this_00->field_0172 = CASE_4;
    thunk_FUN_005252c0(CASE_B0);
  }
  g_currentExceptionFrame = local_4c.previous;
  return;
}

