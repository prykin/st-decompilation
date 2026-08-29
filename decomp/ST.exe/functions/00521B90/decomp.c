#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\intercom.cpp
   IntercomPanelTy::DoneIntercomPanel */

void __thiscall IntercomPanelTy::DoneIntercomPanel(IntercomPanelTy *this)

{
  IntercomPanelTy *pIVar2;
  int errorCode;
  int iVar3;
  InternalExceptionFrame local_4c;
  IntercomPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;

  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pIVar2 = local_8;
  if (errorCode == 0) {
    if (local_8->field_0198 != nullptr) {
      FUN_006b5570(local_8->field_0198);
      pIVar2->field_0198 = nullptr;
    }
    if (pIVar2->field_01A0 != 0) {
      StartSystemTy::sub_006E56B0(pIVar2->field_000C,pIVar2->field_01A0);
    }
    pIVar2->field_01A0 = 0;
    g_intercomPanel_0080169C = nullptr;
    if (pIVar2->field_0180 != nullptr) {
      ccFntTy::operator_delete(pIVar2->field_0180);
      pIVar2->field_0180 = nullptr;
    }
    if (pIVar2->field_0184 != nullptr) {
      cMf32::RecMemFree(g_cMf32_00806790,(uint *)&pIVar2->field_0184);
    }
    if (pIVar2->field_019C != nullptr) {
      cMf32::RecMemFree(g_cMf32_00806790,(uint *)&pIVar2->field_019C);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;

  iVar3 = ReportDebugMessage("E:\\__titans\\Andrey\\intercom.cpp",0x4a,0,errorCode,
                             "%s","IntercomPanelTy::DoneIntercomPanel");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\Andrey\\intercom.cpp",0x4a);
  return;
}

