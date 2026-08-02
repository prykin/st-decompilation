#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   SpecPanelTy::DonePanel */

void __thiscall SpecPanelTy::DonePanel(SpecPanelTy *this)

{
  code *pcVar1;
  SpecPanelTy *pSVar2;
  int errorCode;
  int iVar3;
  InternalExceptionFrame local_4c;
  SpecPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pSVar2 = local_8;
  if (errorCode == 0) {
    if (local_8->field_017C != 0) {
      StartSystemTy::sub_006E56B0(local_8->field_000C,local_8->field_017C);
    }
    pSVar2->field_017C = 0;
    if (pSVar2->field_0189 != nullptr) {
      ccFntTy::operator_delete((uint *)pSVar2->field_0189);
      pSVar2->field_0189 = nullptr;
    }
    if (pSVar2->field_0185 != nullptr) {
      cMf32::RecMemFree(g_cMf32_00806790,(uint *)&pSVar2->field_0185);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage("E:\\__titans\\Andrey\\specpan.cpp",0xfa,0,errorCode,
                             "%s","SpecPanelTy::DonePanel");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\Andrey\\specpan.cpp",0xfa);
  return;
}

