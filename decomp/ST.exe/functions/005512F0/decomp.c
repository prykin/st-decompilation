#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tradecen.cpp
   TradePanelTy::DoneTradePanel */

void __thiscall TradePanelTy::DoneTradePanel(TradePanelTy *this)

{
  TradePanelTy *pTVar2;
  int errorCode;
  int iVar3;
  InternalExceptionFrame local_4c;
  TradePanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pTVar2 = local_8;
  if (errorCode == 0) {
    if (local_8->field_01C0 != 0) {
      StartSystemTy::sub_006E56B0(local_8->field_000C,local_8->field_01C0);
    }
    pTVar2->field_01C0 = 0;
    if (pTVar2->field_01C4 != 0) {
      StartSystemTy::sub_006E56B0(pTVar2->field_000C,pTVar2->field_01C4);
    }
    pTVar2->field_01C4 = 0;
    if (pTVar2->field_01C8 != 0) {
      StartSystemTy::sub_006E56B0(pTVar2->field_000C,pTVar2->field_01C8);
    }
    pTVar2->field_01C8 = 0;
    if (pTVar2->field_01CC != 0) {
      StartSystemTy::sub_006E56B0(pTVar2->field_000C,pTVar2->field_01CC);
    }
    pTVar2->field_01CC = 0;
    if (pTVar2->field_01DD != nullptr) {
      ccFntTy::operator_delete((uint *)pTVar2->field_01DD);
      pTVar2->field_01DD = nullptr;
    }
    pTVar2->field_01D9 = nullptr;
    pTVar2->field_01D5 = nullptr;
    pTVar2->field_01D1 = nullptr;
    g_tradePanel_00802A44 = nullptr;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage("E:\\__titans\\Andrey\\tradecen.cpp",0x67,0,errorCode,
                             "%s","TradePanelTy::DoneTradePanel");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\Andrey\\tradecen.cpp",0x67);
  return;
}

