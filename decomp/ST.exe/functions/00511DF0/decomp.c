#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::SwitchOptPanel */

void __thiscall HelpPanelTy::SwitchOptPanel(HelpPanelTy *this,int param_1)

{
  short sVar1;
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
  if (errorCode != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0x10f,0,errorCode,
                               &DAT_007a4ccc,s_HelpPanelTy__SwitchOptPanel_007c3978);
    if (iVar3 == 0) {
      RaiseInternalException(errorCode,0,s_E____titans_Andrey_helppan_cpp_007c383c,0x10f);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  sVar1 = local_8->field_0172;
  if (sVar1 == 1) {
    if (param_1 != 0) {
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    if (local_8->field_0178 != 0) {
      local_8->field_0028 = 0x4202;
      *(undefined2 *)&local_8->field_0x2c = 0;
      local_8->field_002E = 2;
      *(undefined4 *)&local_8->field_0x30 = local_8->field_0178;
      if (PTR_00802a30 != (CursorClassTy *)0x0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (*(code *)**(undefined4 **)PTR_00802a30)(&local_8->field_0x18);
      }
    }
    ShiftControls(this_00,0);
  }
  else {
    if (sVar1 == 2) {
      if (param_1 == 0) {
        g_currentExceptionFrame = local_4c.previous;
        return;
      }
      local_8->field_0172 = 3;
      thunk_FUN_005252c0(CASE_AF);
      if (g_cPanel_00801688 == (CPanelTy *)0x0) {
        g_currentExceptionFrame = local_4c.previous;
        return;
      }
      CPanelTy::ShiftControls(g_cPanel_00801688,0);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    if (sVar1 != 3) {
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
  }
  if (param_1 == 0) {
    this_00->field_0172 = 4;
    thunk_FUN_005252c0(CASE_B0);
  }
  g_currentExceptionFrame = local_4c.previous;
  return;
}

