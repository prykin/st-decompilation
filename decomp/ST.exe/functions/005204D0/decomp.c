#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\infocen.cpp
   InfocPanelTy::DoneInfocPanel */

void __thiscall InfocPanelTy::DoneInfocPanel(InfocPanelTy *this)

{
  code *pcVar1;
  InfocPanelTy *pIVar2;
  int errorCode;
  int iVar3;
  InternalExceptionFrame local_4c;
  InfocPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pIVar2 = local_8;
  if (errorCode == 0) {
    if (local_8->field_03D0 != 0) {
      StartSystemTy::sub_006E56B0(local_8->field_000C,local_8->field_03D0);
    }
    pIVar2->field_03D0 = 0;
    if (pIVar2->field_03D5 != (ccFntTy *)0x0) {
      ccFntTy::operator_delete((uint *)pIVar2->field_03D5);
      pIVar2->field_03D5 = (ccFntTy *)0x0;
    }
    pIVar2->field_03CC = (ushort *)0x0;
    pIVar2->field_03C8 = (ushort *)0x0;
    pIVar2->field_03C4 = (ushort *)0x0;
    g_infocPanel_00801698 = (InfocPanelTy *)0x0;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage("E:\\__titans\\Andrey\\infocen.cpp",0x4f,0,errorCode,
                             "%s","InfocPanelTy::DoneInfocPanel");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\Andrey\\infocen.cpp",0x4f);
  return;
}

