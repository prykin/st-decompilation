#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tradecen.cpp
   TradePanelTy::ShiftControls */

void __thiscall TradePanelTy::ShiftControls(TradePanelTy *this,int param_1)

{
  code *pcVar1;
  TradePanelTy *this_00;
  short sVar2;
  int errorCode;
  int iVar3;
  InternalExceptionFrame local_4c;
  TradePanelTy *local_8;

  if (param_1 != this->field_005C) {
    local_8 = this;
    SpecPanelTy::ShiftControls((SpecPanelTy *)this,param_1);
    sVar2 = (short)this->field_0174;
    this->field_0028 = 0x24;
    if (param_1 != 0) {
      sVar2 = -sVar2;
    }
    *(short *)&this->field_0x2e = sVar2;
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
    this_00 = local_8;
    if (errorCode == 0) {
      if (local_8->field_01C4 != 0) {
        FUN_006e6080(local_8,2,local_8->field_01C4,(undefined4 *)&local_8->field_0x18);
      }
      if (this_00->field_01C0 != 0) {
        FUN_006e6080(this_00,2,this_00->field_01C0,(undefined4 *)&this_00->field_0x18);
      }
      if (this_00->field_01C8 != 0) {
        FUN_006e6080(this_00,2,this_00->field_01C8,(undefined4 *)&this_00->field_0x18);
      }
      if (this_00->field_01CC != 0) {
        FUN_006e6080(this_00,2,this_00->field_01CC,(undefined4 *)&this_00->field_0x18);
      }
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = ReportDebugMessage("E:\\__titans\\Andrey\\tradecen.cpp",0x91,0,errorCode,
                               "%s","TradePanelTy::ShiftControls");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,"E:\\__titans\\Andrey\\tradecen.cpp",0x91);
  }
  return;
}

