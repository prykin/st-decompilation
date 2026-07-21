
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_00573260.
   Evidence: incoming_receiver_captures=1; receiver_accesses=12; incoming_edx_uses=0; calls=3;
   ecx_pointer_setup=3; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[0];
   expected_stack=0; receiver_family_members=2 */

void __thiscall
SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00573260::FUN_00573260
          (AnonReceiver_00573260 *this)

{
  int iVar1;
  uint uVar2;
  InternalExceptionFrame *in_stack_fffffec8;
  InternalExceptionFrame *pIVar3;
  int in_stack_fffffecc;
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
  AnonReceiver_00573260 *local_8;
  
  local_f4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_f4;
  local_8 = this;
  iVar1 = Library::MSVCRT::__setjmp3(local_f4.jumpBuffer,0,in_stack_fffffec8,in_stack_fffffecc);
  if (iVar1 == 0) {
    if (*(int *)local_8 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(uint *)(*(int *)&local_8->field_0x4 + 0x80) & 1;
    }
    if (uVar2 != 0) {
      Library::DKW::SND::FUN_006b7e00(*(int *)&local_8->field_0x4,3,&local_14,&local_24);
    }
    register0x00000000 = (uint)(local_14 + local_24) >> 1;
  }
  else {
    register0x00000000 = 0;
  }
  g_currentExceptionFrame = &local_b0;
  local_b0.previous = local_f4.previous;
  iVar1 = Library::MSVCRT::__setjmp3(local_b0.jumpBuffer,0,in_stack_fffffec8,in_stack_fffffecc);
  if (iVar1 == 0) {
    if (*(int *)local_8 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(uint *)(*(int *)&local_8->field_0x4 + 0x50) & 1;
    }
    if (uVar2 != 0) {
      Library::DKW::SND::FUN_006b7e00(*(int *)&local_8->field_0x4,1,&local_1c,&local_20);
    }
    _DAT_00807312 = (uint)(local_1c + local_20) >> 1;
  }
  else {
    _DAT_00807312 = 0;
  }
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xfffffec8;
  pIVar3 = local_b0.previous;
  iVar1 = Library::MSVCRT::__setjmp3
                    ((undefined4 *)&stack0xfffffecc,0,local_b0.previous,in_stack_fffffecc);
  if (iVar1 == 0) {
    if (*(int *)local_8 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(uint *)(*(int *)&local_8->field_0x4 + 0x68) & 1;
    }
    if (uVar2 != 0) {
      Library::DKW::SND::FUN_006b7e00(*(int *)&local_8->field_0x4,2,&local_c,&local_28);
    }
    _DAT_00807306 = (uint)(local_c + local_28) >> 1;
  }
  else {
    _DAT_00807306 = 0;
  }
  g_currentExceptionFrame = &local_6c;
  local_6c.previous = pIVar3;
  iVar1 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0,pIVar3,in_stack_fffffecc);
  if (iVar1 == 0) {
    if (*(int *)local_8 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(uint *)(*(int *)&local_8->field_0x4 + 0x38) & 1;
    }
    if (uVar2 != 0) {
      Library::DKW::SND::FUN_006b7e00(*(int *)&local_8->field_0x4,0,&local_18,&local_10);
    }
    g_currentExceptionFrame = local_6c.previous;
    _DAT_00807316 = (uint)(local_18 + local_10) >> 1;
    return;
  }
  g_currentExceptionFrame = local_6c.previous;
  _DAT_00807316 = 0;
  return;
}

