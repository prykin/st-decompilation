#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel.cpp
   CPanelTy::ShiftControls

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=6, used=0), and
   decompilation contains no value return */

void __thiscall CPanelTy::ShiftControls(CPanelTy *this,int param_1,int param_2)

{
  CPanelTy *this_00;
  short sVar2;
  int iVar4;
  int iVar3;
  int iVar5;
  uint *puVar7;
  uint uVar8;
  InternalExceptionFrame local_50;
  uint local_c;
  CPanelTy *local_8;

  local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)(param_1 == 0));
  if (param_1 == 0) {
    if (param_2 == this->field_0138) {
      return;
    }
    this->field_0138 = param_2;
  }
  else {
    if (param_2 == this->field_0134) {
      return;
    }
    this->field_0134 = param_2;
  }
  memset(&this->field_0x18, 0, 0x20); /* compiler bulk-zero initialization */
  this->field_0028 = 0x24;
  if (param_2 == 0) {
    sVar2 = this->field_0241;
  }
  else {
    sVar2 = -this->field_0241;
  }
  *(short *)&this->field_0x2e = sVar2;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  this_00 = local_8;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar3 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel.cpp",0x452,0,iVar4,"%s",
                               "CPanelTy::ShiftControls");
    if (iVar3 == 0) {
      RaiseInternalException(iVar4,0,"E:\\__titans\\Andrey\\cpanel.cpp",0x452);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (param_1 == 0) {
    if (local_8->field_09D0 != 0) {
      FUN_006e6080(local_8,2,local_8->field_09D0,(undefined4 *)&local_8->field_0x18);
    }
    puVar7 = this_00->field_0A15;
    iVar5 = 6;
    do {
      if (*puVar7 != 0) {
        FUN_006e6080(this_00,2,*puVar7,(undefined4 *)&this_00->field_0x18);
      }
      puVar7 = puVar7 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    puVar7 = this_00->field_0B1F;
    iVar5 = 6;
    do {
      if (*puVar7 != 0) {
        FUN_006e6080(this_00,2,*puVar7,(undefined4 *)&this_00->field_0x18);
      }
      puVar7 = puVar7 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    iVar5 = this_00->field_0B37;
  }
  else {
    if (local_8->field_095C != 0) {
      FUN_006e6080(local_8,2,local_8->field_095C,(undefined4 *)&local_8->field_0x18);
    }
    puVar7 = this_00->field_0960;
    iVar5 = 4;
    do {
      if (*puVar7 != 0) {
        FUN_006e6080(this_00,2,*puVar7,(undefined4 *)&this_00->field_0x18);
      }
      puVar7 = puVar7 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    iVar5 = this_00->field_0970;
  }
  if (iVar5 != 0) {
    FUN_006e6080(this_00,2,iVar5,(undefined4 *)&this_00->field_0x18);
  }
  uVar8 = local_c & 0xff;
  if (this_00->field_09C0[uVar8] != 0) {
    FUN_006e6080(this_00,2,this_00->field_09C0[uVar8],(undefined4 *)&this_00->field_0x18);
  }
  iVar5 = *(int *)((int)this_00->field_0308 + uVar8 * 4 + -10);
  if (iVar5 != 0) {
    FUN_006e6080(this_00,2,iVar5,(undefined4 *)&this_00->field_0x18);
  }
  if (this_00->field_0308[uVar8] != 0) {
    FUN_006e6080(this_00,2,this_00->field_0308[uVar8],(undefined4 *)&this_00->field_0x18);
  }
  if (this_00->field_0310[uVar8] != 0) {
    FUN_006e6080(this_00,2,this_00->field_0310[uVar8],(undefined4 *)&this_00->field_0x18);
  }
  if (((char)local_c != '\0') && (this_00->field_0310[uVar8 + 1] != 0)) {
    FUN_006e6080(this_00,2,this_00->field_0310[uVar8 + 1],(undefined4 *)&this_00->field_0x18);
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

