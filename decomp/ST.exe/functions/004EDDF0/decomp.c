#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\behpanel.cpp
   BehPanelTy::DoneBehPanel */

void __thiscall BehPanelTy::DoneBehPanel(BehPanelTy *this)

{
  code *pcVar1;
  BehPanelTy *pBVar2;
  int errorCode;
  int iVar3;
  InternalExceptionFrame local_4c;
  BehPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pBVar2 = local_8;
  if (errorCode == 0) {
    if (local_8->field_01BE != 0) {
      StartSystemTy::sub_006E56B0(local_8->field_000C,local_8->field_01BE);
    }
    pBVar2->field_01BE = 0;
    if (pBVar2->field_01C2 != 0) {
      StartSystemTy::sub_006E56B0(pBVar2->field_000C,pBVar2->field_01C2);
    }
    pBVar2->field_01C2 = 0;
    if (pBVar2->field_01C6 != 0) {
      StartSystemTy::sub_006E56B0(pBVar2->field_000C,pBVar2->field_01C6);
    }
    pBVar2->field_01C6 = 0;
    if (pBVar2->field_01CA != 0) {
      StartSystemTy::sub_006E56B0(pBVar2->field_000C,pBVar2->field_01CA);
    }
    pBVar2->field_01CA = 0;
    pBVar2->field_02B8 = 0;
    DAT_00801678 = 0;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage("E:\\__titans\\Andrey\\behpanel.cpp",0x77,0,errorCode,
                             "%s","BehPanelTy::DoneBehPanel");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\Andrey\\behpanel.cpp",0x77);
  return;
}

