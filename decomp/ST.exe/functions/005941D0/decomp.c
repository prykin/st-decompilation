#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\combo.cpp
   ComboTy::DoneCombo */

void __thiscall ComboTy::DoneCombo(ComboTy *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  ComboTy *this_00;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  InternalExceptionFrame local_4c;
  ComboTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar3 == 0) {
    if (local_8->field_010C != 0) {
      StartSystemTy::sub_006E56B0(local_8->field_000C,local_8->field_010C);
    }
    puVar1 = &this_00->field_0x18;
    this_00->field_010C = 0;
    puVar5 = (undefined4 *)puVar1;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    this_00->field_0028 = 0x11;
    this_00->field_002C = &this_00->field_0038;
    FUN_006e6000(this_00,3,1,(undefined4 *)puVar1);
    puVar5 = (undefined4 *)puVar1;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    this_00->field_002C = this_00->field_0008;
    this_00->field_0028 = 0x14;
    FUN_006e6000(this_00,3,1,(undefined4 *)puVar1);
    puVar5 = (undefined4 *)puVar1;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    this_00->field_0028 = 0x19;
    FUN_006e6000(this_00,3,1,(undefined4 *)puVar1);
    puVar5 = (undefined4 *)puVar1;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    this_00->field_0028 = 0x1b;
    FUN_006e6000(this_00,3,1,(undefined4 *)puVar1);
    if (this_00->field_0108 != 0xffffffff) {
      FUN_006b3bb0(DAT_008075a8,this_00->field_0108);
    }
    this_00->field_0108 = 0xffffffff;
    if (this_00->field_00FC != 0) {
      FreeAndNull((void **)&this_00->field_00FC);
    }
    if (this_00->field_0100 != 0) {
      FreeAndNull((void **)&this_00->field_0100);
    }
    if (this_00->field_0104 != (AnonPointee_ComboTy_0104 *)0x0) {
      FreeAndNull(&this_00->field_0104);
    }
    if (this_00->field_0098 != 0) {
      AppClassTy::PostNextMessage((AppClassTy *)&DAT_00807620,(undefined4 *)&this_00->field_0x88);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage(s_E____titans_Start_combo_cpp_007cbeec,0x7f,0,iVar3,&DAT_007a4ccc,
                             s_ComboTy__DoneCombo_007cbf40);
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,s_E____titans_Start_combo_cpp_007cbeec,0x7f);
  return;
}

