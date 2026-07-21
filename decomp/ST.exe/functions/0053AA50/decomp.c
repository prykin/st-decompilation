#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\playpan.cpp
   PlayPanelTy::ShiftControls */

void __thiscall PlayPanelTy::ShiftControls(PlayPanelTy *this,int param_1)

{
  code *pcVar1;
  PlayPanelTy *this_00;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  InternalExceptionFrame local_54;
  PlayPanelTy *local_10;
  int local_c;
  int *local_8;

  if (param_1 != this->field_005C) {
    this->field_005C = param_1;
    puVar5 = (undefined4 *)&this->field_0x18;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    sVar2 = (short)this->field_0174;
    this->field_0028 = 0x24;
    if (param_1 == 0) {
      sVar2 = -sVar2;
    }
    *(short *)&this->field_0x2e = sVar2;
    local_54.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_54;
    local_10 = this;
    iVar4 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
    this_00 = local_10;
    if (iVar4 == 0) {
      if (local_10->field_017C != 0) {
        FUN_006e6080(local_10,2,local_10->field_017C,(undefined4 *)&local_10->field_0x18);
      }
      piVar6 = &this_00->field_0181;
      local_c = 8;
      do {
        iVar4 = 2;
        local_8 = piVar6;
        do {
          if (*piVar6 != 0) {
            FUN_006e6080(this_00,2,*piVar6,(undefined4 *)&this_00->field_0x18);
          }
          piVar6 = piVar6 + 8;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        piVar6 = local_8 + 1;
        local_c = local_c + -1;
      } while (local_c != 0);
      local_8 = piVar6;
      if (this_00->field_01C5 != 0) {
        FUN_006e6080(this_00,2,this_00->field_01C5,(undefined4 *)&this_00->field_0x18);
      }
      if (this_00->field_01C1 != 0) {
        FUN_006e6080(this_00,2,this_00->field_01C1,(undefined4 *)&this_00->field_0x18);
      }
      g_currentExceptionFrame = local_54.previous;
      return;
    }
    g_currentExceptionFrame = local_54.previous;
    iVar3 = ReportDebugMessage(s_E____titans_Andrey_playpan_cpp_007c7574,0xfe,0,iVar4,&DAT_007a4ccc,
                               s_PlayPanelTy__ShiftControls_007c7668);
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,s_E____titans_Andrey_playpan_cpp_007c7574,0xfe);
  }
  return;
}

