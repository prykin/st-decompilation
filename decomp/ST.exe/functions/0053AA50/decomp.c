#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\playpan.cpp
   PlayPanelTy::ShiftControls

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall PlayPanelTy::ShiftControls(PlayPanelTy *this,int param_1)

{
  PlayPanelTy *this_00;
  short sVar2;
  int iVar4;
  int iVar3;
  int iVar5;
  int *piVar7;
  InternalExceptionFrame local_54;
  PlayPanelTy *local_10;
  int local_c;
  int *local_8;

  if (param_1 != this->field_005C) {
    this->field_005C = param_1;
    memset(&this->field_0x18, 0, 0x20); /* compiler bulk-zero initialization */
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
      piVar7 = &this_00->field_0181;
      local_c = 8;
      do {
        iVar5 = 2;
        local_8 = piVar7;
        do {
          if (*piVar7 != 0) {
            FUN_006e6080(this_00,2,*piVar7,(undefined4 *)&this_00->field_0x18);
          }
          piVar7 = piVar7 + 8;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        piVar7 = local_8 + 1;
        local_c = local_c + -1;
      } while (local_c != 0);
      local_8 = piVar7;
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
    iVar3 = ReportDebugMessage("E:\\__titans\\Andrey\\playpan.cpp",0xfe,0,iVar4,"%s",
                               "PlayPanelTy::ShiftControls");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\Andrey\\playpan.cpp",0xfe);
  }
  return;
}

