#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\intercom.cpp
   IntercomPanelTy::PreInitIntercomPanel */

void __thiscall IntercomPanelTy::PreInitIntercomPanel(IntercomPanelTy *this)

{
  code *pcVar1;
  IntercomPanelTy *pIVar2;
  int iVar3;
  int iVar4;
  InternalExceptionFrame local_4c;
  IntercomPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pIVar2 = local_8;
  if (iVar3 == 0) {
    FUN_006b1a50(DAT_008075a8,3,(undefined4 *)0x0,(undefined4 *)&local_8->field_0x188);
    iVar3 = pIVar2->field_018C - pIVar2->field_0048;
    pIVar2->field_0044 = iVar3;
    pIVar2->field_0174 = iVar3 + pIVar2->field_0048;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage(s_E____titans_Andrey_intercom_cpp_007c401c,0x22,0,iVar3,&DAT_007a4ccc,
                             s_IntercomPanelTy__PreInitIntercom_007c4044);
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,s_E____titans_Andrey_intercom_cpp_007c401c,0x22);
  return;
}

