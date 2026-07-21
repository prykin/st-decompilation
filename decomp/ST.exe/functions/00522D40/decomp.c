#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\intercom.cpp
   IntercomPanelTy::SwitchIntercomPanel */

void __thiscall IntercomPanelTy::SwitchIntercomPanel(IntercomPanelTy *this,undefined1 param_1)

{
  short sVar1;
  code *pcVar2;
  IntercomPanelTy *pIVar3;
  int errorCode;
  int iVar4;
  Global_sub_005252C0_param_1Enum GVar5;
  InternalExceptionFrame local_4c;
  IntercomPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pIVar3 = local_8;
  if (errorCode != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar4 = ReportDebugMessage("E:\\__titans\\Andrey\\intercom.cpp",0x13b,0,errorCode,
                               "%s","IntercomPanelTy::SwitchIntercomPanel");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,"E:\\__titans\\Andrey\\intercom.cpp",0x13b);
    return;
  }
  sVar1 = local_8->field_0172;
  if (sVar1 != 1) {
    if (sVar1 == 2) {
      local_8->field_0172 = 3;
      local_8->field_01A4 = param_1;
      GVar5 = CASE_AF;
      goto LAB_00522dd6;
    }
    if (sVar1 != 3) {
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
  }
  local_8->field_0172 = 4;
  if (local_8->field_01A0 != 0) {
    StartSystemTy::sub_006E56B0(local_8->field_000C,local_8->field_01A0);
  }
  pIVar3->field_01A0 = 0;
  GVar5 = CASE_B0;
LAB_00522dd6:
  thunk_FUN_005252c0(GVar5);
  g_currentExceptionFrame = local_4c.previous;
  return;
}

