#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::Question

   [STSwitchEnumApplier] Switch target field_01A4 uses
   /SubmarineTitans/Recovered/Enums/OptPanelTy_field_01A4State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14
    */

void __thiscall OptPanelTy::Question(OptPanelTy *this,char param_1)

{
  OptPanelTy *this_00;
  int iVar2;
  int iVar4;
  int iVar3;
  InternalExceptionFrame local_4c;
  OptPanelTy *local_8;

  if (this->field_0172 != CASE_2) {
    return;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;

  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar2 == 0) {
    if (param_1 == '\x04') {
      if (DAT_008067a0 == '\0') {
        iVar4 = 0x3e84;
      }
      else {
        iVar4 = 0x3e96 - (uint)(g_playSystem_00802A38->field_00E4 -
                                g_playSystem_00802A38->field_0034 < 6000);
      }
      local_8->field_01A5 = iVar4;
    }
    else if (param_1 == '\x05') {
      local_8->field_01A5 = 0x3e85;
    }
    else {
      if (param_1 != '\a') {
        g_currentExceptionFrame = local_4c.previous;
        return;
      }
      local_8->field_01A5 = 0x4272;
    }
    local_8->field_01AB = param_1;
    local_8->field_01A0 = (uint)(param_1 != '\a');
    local_8->field_01A9 = 0;
    local_8->field_01A4 = CASE_5;
    /* ST_CALLSITE[00533954]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
    SetOptControls(local_8);
    /* ST_CALLSITE[00533960]: CALL 0x00405a42; direct=00405A42 OptPanelTy::SwitchOptPanel */
    SwitchOptPanel(this_00,-1);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;

  iVar3 = ReportDebugMessage("E:\\__titans\\Andrey\\optpanel.cpp",0x490,0,iVar2,"%s",
                             "OptPanelTy::Question");
  if (iVar3 == 0) {
    RaiseInternalException(iVar2,0,"E:\\__titans\\Andrey\\optpanel.cpp",0x490);
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

