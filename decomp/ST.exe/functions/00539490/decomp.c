#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\pause.cpp
   PausePanelTy::DonePausePanel */

void __thiscall PausePanelTy::DonePausePanel(PausePanelTy *this)

{
  code *pcVar1;
  PausePanelTy *pPVar2;
  int errorCode;
  int iVar3;
  InternalExceptionFrame local_4c;
  PausePanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pPVar2 = local_8;
  if (errorCode == 0) {
    if (local_8->field_0184 != 0) {
      StartSystemTy::sub_006E56B0(local_8->field_000C,local_8->field_0184);
    }
    pPVar2->field_0184 = 0;
    g_pausePanel_008016E0 = nullptr;
    if (pPVar2->field_017C != nullptr) {
      ccFntTy::operator_delete((uint *)pPVar2->field_017C);
      pPVar2->field_017C = nullptr;
    }
    if (pPVar2->field_0180 != nullptr) {
      cMf32::RecMemFree(g_cMf32_00806790,(uint *)&pPVar2->field_0180);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage("E:\\__titans\\Andrey\\pause.cpp",0x3b,0,errorCode,"%s",
                             "PausePanelTy::DonePausePanel");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\Andrey\\pause.cpp",0x3b);
  return;
}

