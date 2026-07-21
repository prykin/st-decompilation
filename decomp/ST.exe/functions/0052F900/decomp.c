#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::ShiftControls

   [STSwitchEnumApplier] Switch target field_01A4 uses
   /SubmarineTitans/Recovered/Enums/OptPanelTy_field_01A4State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14
    */

void __thiscall OptPanelTy::ShiftControls(OptPanelTy *this,int param_1)

{
  code *pcVar1;
  OptPanelTy *this_00;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  InternalExceptionFrame local_4c;
  OptPanelTy *local_8;

  if (param_1 != this->field_005C) {
    this->field_005C = param_1;
    puVar7 = (undefined4 *)&this->field_0x18;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    sVar2 = (short)this->field_0174;
    this->field_0028 = 0x24;
    if (param_1 == 0) {
      sVar2 = -sVar2;
    }
    this->field_002E = sVar2;
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    iVar5 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
    this_00 = local_8;
    if (iVar5 == 0) {
      iVar5 = 10;
      piVar6 = &local_8->field_01B5;
      do {
        if (*piVar6 != 0) {
          FUN_006e6080(this_00,2,*piVar6,(undefined4 *)&this_00->field_0x18);
        }
        piVar6 = piVar6 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      piVar6 = &this_00->field_01AD;
      iVar5 = 2;
      do {
        if (*piVar6 != 0) {
          FUN_006e6080(this_00,2,*piVar6,(undefined4 *)&this_00->field_0x18);
        }
        piVar6 = piVar6 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      switch(this_00->field_01A4) {
      case CASE_3:
      case CASE_4:
      case CASE_C:
      case CASE_E:
        puVar7 = (undefined4 *)&this_00->field_0x18;
        for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
        if ((param_1 == 0) || (uVar3 = 0x55, DAT_0080734c == '\0')) {
          uVar3 = 0x56;
        }
        this_00->field_0028 = uVar3;
        if (this_00->field_01B5 != 0) {
          FUN_006e6080(this_00,2,this_00->field_01B5,(undefined4 *)&this_00->field_0x18);
        }
      }
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar4 = ReportDebugMessage(s_E____titans_Andrey_optpanel_cpp_007c70a0,0x156,0,iVar5,
                               &DAT_007a4ccc,s_OptPanelTy__ShiftControls_007c7224);
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar5,0,s_E____titans_Andrey_optpanel_cpp_007c70a0,0x156);
  }
  return;
}

