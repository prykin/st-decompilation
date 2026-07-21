#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::Notification */

void __thiscall OptPanelTy::Notification(OptPanelTy *this,char param_1,undefined1 param_2)

{
  OptPanelTy_field_0172State OVar1;
  code *pcVar2;
  OptPanelTy *this_00;
  int errorCode;
  int iVar3;
  InternalExceptionFrame local_4c;
  OptPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (errorCode != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = ReportDebugMessage("E:\\__titans\\Andrey\\optpanel.cpp",0x4a6,0,errorCode,
                               "%s","OptPanelTy::Notification");
    if (iVar3 == 0) {
      RaiseInternalException(errorCode,0,"E:\\__titans\\Andrey\\optpanel.cpp",0x4a6);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (param_1 == '\n') {
    local_8->field_01A5 = 0x4271;
    local_8->field_01AC = param_2;
  }
  else if (param_1 == '\v') {
    local_8->field_01A5 = 0x4270;
  }
  else {
    if (param_1 != '\f') {
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    local_8->field_01A5 = 0x4276;
  }
  local_8->field_01AB = param_1;
  local_8->field_01A0 = 0;
  local_8->field_01A9 = 0;
  local_8->field_01A4 = CASE_B;
  SetOptControls(local_8);
  OVar1 = this_00->field_0172;
  if ((OVar1 == CASE_2) || (OVar1 == CASE_4)) {
    SwitchOptPanel(this_00,-1);
  }
  g_currentExceptionFrame = local_4c.previous;
  return;
}

