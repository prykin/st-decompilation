
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00693D00 parameter used as this of cMf32::RecPut @ 00693D63

   [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_00693D00.
   Evidence: incoming_receiver_captures=1; receiver_accesses=4; incoming_edx_uses=0; calls=2;
   ecx_pointer_setup=2; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[8];
   expected_stack=8; receiver_family_members=1; adopt_untyped_existing_thiscall */

undefined4 __thiscall
SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00693D00::FUN_00693d00
          (AnonReceiver_00693D00 *this,cMf32 *param_1,undefined4 param_2)

{
  int iVar1;
  InternalExceptionFrame local_50;
  undefined4 local_c;
  AnonReceiver_00693D00 *local_8;

  *(undefined4 *)this = 1;
  *(uint *)&this->field_0x4 = *(uint *)&this->field_0x4 & 0xffffff05 | 5;
  *(undefined4 *)&this->field_0x8 = param_2;
  local_c = 1;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;
  iVar1 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  if (iVar1 == 0) {
    cMf32::RecPut(param_1,0,PTR_s_DESCRIPTOR_0079d770,(byte *)local_8,0x1999,(undefined4 *)0x0,'\0',
                  (uint *)0x0);
    g_currentExceptionFrame = local_50.previous;
    return local_c;
  }
  g_currentExceptionFrame = local_50.previous;
  return 0;
}

