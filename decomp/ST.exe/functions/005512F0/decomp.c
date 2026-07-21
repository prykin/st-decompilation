#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tradecen.cpp
   TradePanelTy::DoneTradePanel */

void __thiscall TradePanelTy::DoneTradePanel(TradePanelTy *this)

{
  code *pcVar1;
  TradePanelTy *pTVar2;
  int errorCode;
  int iVar3;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ccFntTy *extraout_ECX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ccFntTy *extraout_ECX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ccFntTy *extraout_ECX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ccFntTy *extraout_ECX_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ccFntTy *extraout_ECX_03;
  ccFntTy *this_00;
  InternalExceptionFrame local_4c;
  TradePanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pTVar2 = local_8;
  if (errorCode == 0) {
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    this_00 = extraout_ECX;
    if (local_8->field_01C0 != 0) {
      StartSystemTy::sub_006E56B0(local_8->field_000C,local_8->field_01C0);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      this_00 = extraout_ECX_00;
    }
    pTVar2->field_01C0 = 0;
    if (pTVar2->field_01C4 != 0) {
      StartSystemTy::sub_006E56B0(pTVar2->field_000C,pTVar2->field_01C4);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      this_00 = extraout_ECX_01;
    }
    pTVar2->field_01C4 = 0;
    if (pTVar2->field_01C8 != 0) {
      StartSystemTy::sub_006E56B0(pTVar2->field_000C,pTVar2->field_01C8);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      this_00 = extraout_ECX_02;
    }
    pTVar2->field_01C8 = 0;
    if (pTVar2->field_01CC != 0) {
      StartSystemTy::sub_006E56B0(pTVar2->field_000C,pTVar2->field_01CC);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      this_00 = extraout_ECX_03;
    }
    pTVar2->field_01CC = 0;
    if (pTVar2->field_01DD != (ccFntTy *)0x0) {
      ccFntTy::operator(this_00,(uint *)pTVar2->field_01DD);
      pTVar2->field_01DD = (ccFntTy *)0x0;
    }
    pTVar2->field_01D9 = 0;
    pTVar2->field_01D5 = 0;
    pTVar2->field_01D1 = 0;
    DAT_00802a44 = 0;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage(s_E____titans_Andrey_tradecen_cpp_007c8624,0x67,0,errorCode,
                             &DAT_007a4ccc,s_TradePanelTy__DoneTradePanel_007c8694);
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,s_E____titans_Andrey_tradecen_cpp_007c8624,0x67);
  return;
}

