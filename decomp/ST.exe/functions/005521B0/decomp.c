#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tradecen.cpp
   TradePanelTy::Update */

void __thiscall TradePanelTy::Update(TradePanelTy *this)

{
  code *pcVar1;
  TradePanelTy *this_00;
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_5c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  TradePanelTy *local_8;

  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  this_00 = local_8;
  if (errorCode == 0) {
    local_18 = local_8->field_01AB;
    local_14 = local_8->field_01AF;
    local_10 = local_8->field_01B3;
    local_c = local_8->field_01B7;
    STAllPlayersC::GetPanelInfo
              (g_sTAllPlayers_007FA174,10,(AnonShape_0043BEB0_1C00EC12 *)&local_8->field_01AB);
    thunk_FUN_00551b10((AnonShape_00551B10_03263458 *)this_00);
    PaintPanel(this_00);
    g_currentExceptionFrame = local_5c.previous;
    return;
  }
  g_currentExceptionFrame = local_5c.previous;
  iVar2 = ReportDebugMessage(s_E____titans_Andrey_tradecen_cpp_007c8624,300,0,errorCode,
                             &DAT_007a4ccc,s_TradePanelTy__Update_007c875c);
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,s_E____titans_Andrey_tradecen_cpp_007c8624,300);
  return;
}

