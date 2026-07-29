
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00428E50 -> 006DD610 @ 0042922F; zeroed full register at 00429216 | 00691690 ->
   006DD610 @ 006917E9; zeroed full register at 006917A2

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 00428E50 -> 006DD610 @ 0042922F; zeroed full register at 00429216 | 00691690 ->
   006DD610 @ 006917E9; zeroed full register at 006917A2

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=11, used=0), and
   decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=8; direct_non_thunk_callers=10;
   incoming_ecx_receiver_callers=2; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall
ST3DSMAPContext::sub_006DD610
          (ST3DSMAPContext *this,uint param_1,uint param_2,undefined4 param_3,uint param_4,
          undefined4 param_5)

{
  *(uint *)&this->field_0x88 = param_2;
  *(undefined4 *)&this->field_0x8c = param_3;
  *(uint *)&this->field_0x90 = param_4;
  *(undefined4 *)&this->field_0x94 = param_5;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  Library::Ourlib::STREND::FUN_006dd050
            (this,param_1,(double)CONCAT44(param_3,param_2),(double)CONCAT44(param_5,param_4));
  return;
}

