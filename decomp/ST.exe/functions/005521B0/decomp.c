#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tradecen.cpp
   TradePanelTy::Update */

void __thiscall TradePanelTy::Update(TradePanelTy *this)

{
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
    local_18 = *(undefined4 *)&local_8->field_0x1ab;
    local_14 = local_8->field_01AF;
    local_10 = local_8->field_01B3;
    local_c = local_8->field_01B7;
    /* ST_CALLSITE[0055220A]: CALL 0x004035bc; direct=004035BC STAllPlayersC::GetPanelInfo */
    STAllPlayersC::GetPanelInfo
              (g_allPlayers_007FA174,10,(AnonShape_0043BEB0_1C00EC12 *)&local_8->field_0x1ab);
    /* ST_CALLSITE[00552211]: CALL 0x00404f9d; direct=00404F9D TradePanelTy::sub_00551B10 */
    sub_00551B10(this_00);
    /* ST_CALLSITE[00552218]: CALL 0x0040391d; direct=0040391D TradePanelTy::PaintPanel */
    PaintPanel(this_00);
    g_currentExceptionFrame = local_5c.previous;
    return;
  }
  g_currentExceptionFrame = local_5c.previous;
  iVar2 = ReportDebugMessage("E:\\__titans\\Andrey\\tradecen.cpp",300,0,errorCode,
                             "%s","TradePanelTy::Update");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\Andrey\\tradecen.cpp",300);
  return;
}

