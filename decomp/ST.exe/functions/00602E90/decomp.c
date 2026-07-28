
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_00602E90.
   Evidence: incoming_receiver_captures=1; receiver_accesses=13; incoming_edx_uses=0; calls=2;
   ecx_pointer_setup=2; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[0];
   expected_stack=0; receiver_family_members=1

   [STMethodOwnerApplier] Structural method owner recovered as STDestC.
   Evidence: this_call_owners=[STDestC]; agreed_this_calls=1; incoming_this_accesses=13;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 * __thiscall STDestC::sub_00602E90(STDestC *this)

{
  STDestC *pSVar1;
  int iVar2;
  char *text;
  ushort *puVar3;
  InternalExceptionFrame local_50;
  STDestC *local_c;
  ushort *local_8;

  local_8 = (ushort *)0x0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  pSVar1 = local_c;
  if (iVar2 == 0) {
    if (local_c->field_0241 == 1) {
      text = (&PTR_s_Dest4_0_007cec00)[local_c->field_0372];
    }
    else {
      text = (&PTR_s_Dest1_0_007cebec)[local_c->field_0372];
    }
    puVar3 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806774,CASE_1D,text,0xffffffff,0,1,0,(undefined4 *)0x0);
    if (puVar3 != (ushort *)0x0) {
      if (pSVar1->field_0241 == 0) {
        local_8 = FUN_006e9000((void *)pSVar1->field_0211,**(undefined4 **)((int)puVar3 + 0x21),0x5a
                               ,0x45,(float)pSVar1->field_037B * _DAT_007904f8 * _DAT_007904f0,
                               (float)pSVar1->field_037F * _DAT_007904f8 * _DAT_007904f0,
                               (float)pSVar1->field_0383 * _DAT_007904f8 * _DAT_007904f0 +
                               _DAT_007904fc,0);
      }
      if (pSVar1->field_0241 == 1) {
        local_8 = FUN_006e9000((void *)pSVar1->field_0211,**(undefined4 **)((int)puVar3 + 0x21),0x78
                               ,0x56,(float)pSVar1->field_037B * _DAT_007904f8 * _DAT_007904f0,
                               (float)pSVar1->field_037F * _DAT_007904f8 * _DAT_007904f0,
                               (float)pSVar1->field_0383 * _DAT_007904f8 * _DAT_007904f0 +
                               _DAT_007904fc,0);
      }
    }
    g_currentExceptionFrame = local_50.previous;
    return (undefined4 *)local_8;
  }
  g_currentExceptionFrame = local_50.previous;
  return (undefined4 *)local_8;
}

