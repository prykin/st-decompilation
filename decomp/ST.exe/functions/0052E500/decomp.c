#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::PreInitOptPanel */

void __thiscall OptPanelTy::PreInitOptPanel(OptPanelTy *this)

{
  code *pcVar1;
  OptPanelTy *pOVar2;
  int errorCode;
  int iVar3;
  InternalExceptionFrame local_4c;
  OptPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pOVar2 = local_8;
  if (errorCode == 0) {
    FUN_006b1a50(DAT_008075a8,3,(undefined4 *)0x0,(undefined4 *)&local_8->field_0x4c);
    pOVar2->field_0044 = pOVar2->field_0050 - pOVar2->field_0048;
    pOVar2->field_0174 = pOVar2->field_0048 + pOVar2->field_0050;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage(s_E____titans_Andrey_optpanel_cpp_007c70a0,0x37,0,errorCode,
                             &DAT_007a4ccc,s_OptPanelTy__PreInitOptPanel_007c70c8);
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,s_E____titans_Andrey_optpanel_cpp_007c70a0,0x37);
  return;
}

