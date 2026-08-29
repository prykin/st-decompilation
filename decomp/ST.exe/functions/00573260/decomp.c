#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/RecoveredReceiver_00573260.
   Evidence: incoming_receiver_captures=1; receiver_accesses=12; incoming_edx_uses=0; calls=3;
   ecx_pointer_setup=3; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[0];
   expected_stack=0; receiver_family_members=2

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall
SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_00573260::FUN_00573260
          (RecoveredReceiver_00573260 *this)

{
  int iVar1;
  uint uVar2;
  InternalExceptionFrame local_138;
  InternalExceptionFrame local_f4;
  InternalExceptionFrame local_b0;
  InternalExceptionFrame local_6c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  RecoveredReceiver_00573260 *local_8;

  local_f4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_f4;
  local_8 = this;
  iVar1 = Library::MSVCRT::__setjmp3(local_f4.jumpBuffer,0);
  if (iVar1 == 0) {
    if (local_8->field_0000 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = local_8->field_0004->field_0080 & 1;
    }
    if (uVar2 != 0) {
      Library::DKW::SND::FUN_006b7e00((int)local_8->field_0004,3,&local_14,&local_24);
    }
    register0x00000000 = (uint)(local_14 + local_24) >> 1;
  }
  else {
    register0x00000000 = 0;
  }
  g_currentExceptionFrame = &local_b0;
  local_b0.previous = local_f4.previous;
  iVar1 = Library::MSVCRT::__setjmp3(local_b0.jumpBuffer,0);
  if (iVar1 == 0) {
    if (local_8->field_0000 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = local_8->field_0004->field_0050 & 1;
    }
    if (uVar2 != 0) {
      Library::DKW::SND::FUN_006b7e00((int)local_8->field_0004,1,&local_1c,&local_20);
    }
    _DAT_00807312 = (uint)(local_1c + local_20) >> 1;
  }
  else {
    _DAT_00807312 = 0;
  }
  g_currentExceptionFrame = &local_138;
  local_138.previous = local_b0.previous;
  iVar1 = Library::MSVCRT::__setjmp3(local_138.jumpBuffer,0);
  if (iVar1 == 0) {
    if (local_8->field_0000 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = local_8->field_0004->field_0068 & 1;
    }
    if (uVar2 != 0) {
      Library::DKW::SND::FUN_006b7e00((int)local_8->field_0004,2,&local_c,&local_28);
    }
    _DAT_00807306 = (uint)(local_c + local_28) >> 1;
  }
  else {
    _DAT_00807306 = 0;
  }
  g_currentExceptionFrame = &local_6c;
  local_6c.previous = local_138.previous;
  iVar1 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0);
  if (iVar1 == 0) {
    if (local_8->field_0000 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = local_8->field_0004->field_0038 & 1;
    }
    if (uVar2 != 0) {
      Library::DKW::SND::FUN_006b7e00((int)local_8->field_0004,0,&local_18,&local_10);
    }
    g_currentExceptionFrame = local_6c.previous;
    _DAT_00807316 = (uint)(local_18 + local_10) >> 1;
    return;
  }
  g_currentExceptionFrame = local_6c.previous;
  _DAT_00807316 = 0;
  return;
}

