#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::ShiftControls */

void __thiscall HelpPanelTy::ShiftControls(HelpPanelTy *this,int param_1)

{
  code *pcVar1;
  HelpPanelTy *this_00;
  short sVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  InternalExceptionFrame local_4c;
  HelpPanelTy *local_8;

  if (param_1 != this->field_005C) {
    this->field_005C = param_1;
    memset(&this->field_0x18, 0, 0x20); /* compiler bulk-zero initialization */
    sVar2 = (short)this->field_0174;
    this->field_0028 = 0x24;
    if (param_1 == 0) {
      sVar2 = -sVar2;
    }
    this->field_002E = sVar2;
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
    this_00 = local_8;
    if (iVar4 == 0) {
      if (local_8->field_017C != 0) {
        FUN_006e6080(local_8,2,local_8->field_017C,(undefined4 *)&local_8->field_0x18);
      }
      piVar5 = &this_00->field_0180;
      iVar4 = 7;
      do {
        if (*piVar5 != 0) {
          FUN_006e6080(this_00,2,*piVar5,(undefined4 *)&this_00->field_0x18);
        }
        piVar5 = piVar5 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      if (this_00->field_019C != 0) {
        FUN_006e6080(this_00,2,this_00->field_019C,(undefined4 *)&this_00->field_0x18);
        memset(&this_00->field_0x18, 0, 0x20); /* compiler bulk-zero initialization */
      }
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = ReportDebugMessage("E:\\__titans\\Andrey\\helppan.cpp",0xf2,0,iVar4,"%s",
                               "HelpPanelTy::ShiftControls");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\Andrey\\helppan.cpp",0xf2);
  }
  return;
}

