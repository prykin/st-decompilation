#include "../../pseudocode_runtime.h"


/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0056A130.
   Evidence: incoming_receiver_captures=1; receiver_accesses=2; incoming_edx_uses=0; calls=10;
   ecx_pointer_setup=10; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[16];
   expected_stack=16; receiver_family_members=1; adopt_untyped_existing_thiscall */

void __thiscall
SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0056A130::FUN_0056a130
          (AnonReceiver_0056A130 *this,uint param_1,char param_2,int param_3,uint *param_4)

{
  int iVar1;
  uint uVar1;
  int iVar2;
  InternalExceptionFrame local_4c;
  AnonReceiver_0056A130 *local_8;

  if (*(int *)&this->field_0xf8b == 0) {
    return;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar1 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar1 == 0) {
    if (param_4 == nullptr) {
      param_4 = FUN_0071a990(*(AnonShape_0071A990_7656000F **)&local_8->field_0xdf3,
                             (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f),-1,
                             nullptr);
    }
    iVar2 = param_3;
    if (param_2 == '\x01') {
      if (param_4 == nullptr) {
        g_currentExceptionFrame = local_4c.previous;
        return;
      }
      if (param_3 < 0) {
        param_3 = 0;
        iVar2 = 0xf;
      }
      uVar1 = 2;
    }
    else if (param_2 == '\x02') {
      if (param_4 == nullptr) {
        g_currentExceptionFrame = local_4c.previous;
        return;
      }
      if (param_3 < 0) {
        param_3 = 0;
        uVar1 = 9;
        iVar2 = 0xf;
      }
      else {
        uVar1 = 9;
      }
    }
    else {
      if (param_4 == nullptr) {
        g_currentExceptionFrame = local_4c.previous;
        return;
      }
      if (param_3 < 0) {
        param_3 = 0x10;
        uVar1 = 0;
        iVar2 = 0x1f;
      }
      else {
        uVar1 = 0;
      }
    }
    FUN_006c1390(param_4,0,uVar1,DAT_0080730e,0,param_3,iVar2);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  return;
}

