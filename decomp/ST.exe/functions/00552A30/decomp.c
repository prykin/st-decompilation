#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\upginfo.cpp
   UpgPanelTy::DoneUpgPanel */

void __thiscall UpgPanelTy::DoneUpgPanel(UpgPanelTy *this)

{
  code *pcVar1;
  InternalExceptionFrame *pIVar2;
  int errorCode;
  int iVar3;
  int local_48 [16];
  UpgPanelTy *local_8;

  pIVar2 = g_currentExceptionFrame;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_48,0);
  if (errorCode == 0) {
    local_8->field_03F3 = (ushort *)0x0;
    local_8->field_03EF = (ushort *)0x0;
    local_8->field_03EB = (ushort *)0x0;
    g_upgPanel_00802A48 = (UpgPanelTy *)0x0;
    g_currentExceptionFrame = pIVar2;
    return;
  }
  g_currentExceptionFrame = pIVar2;
  iVar3 = ReportDebugMessage("E:\\__titans\\Andrey\\upginfo.cpp",0x2a,0,errorCode,
                             "%s","UpgPanelTy::DoneUpgPanel");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\Andrey\\upginfo.cpp",0x2a);
  return;
}

