#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::SwitchOptPanelOff */

void __thiscall OptPanelTy::SwitchOptPanelOff(OptPanelTy *this)

{
  code *pcVar1;
  OptPanelTy *this_00;
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_4c;
  OptPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (errorCode == 0) {
    if ((local_8->field_0172 == CASE_1) || (local_8->field_0172 == CASE_3)) {
      local_8->field_01AA = 0;
      local_8->field_01A9 = 0;
      local_8->field_01A4 = CASE_1;
      SetOptControls(local_8);
      if (this_00->field_0172 == CASE_1) {
        ShiftControls(this_00,0);
      }
      this_00->field_0172 = CASE_4;
      thunk_FUN_005252c0(CASE_B0);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar2 = ReportDebugMessage(s_E____titans_Andrey_optpanel_cpp_007c70a0,0x139,0,errorCode,
                             &DAT_007a4ccc,s_OptPanelTy__SwitchOptPanelOff_007c7200);
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,s_E____titans_Andrey_optpanel_cpp_007c70a0,0x139);
  return;
}

