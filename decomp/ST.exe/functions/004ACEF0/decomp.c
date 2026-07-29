
/* [STMethodOwnerApplier] Structural method owner recovered as STT3DSprC.
   Evidence: this_call_owners=[STT3DSprC]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=8, used=0), and
   decompilation contains no value return */

void __thiscall STT3DSprC::sub_004ACEF0(STT3DSprC *this,uint param_1)

{
  Library::Ourlib::ST3DSMAP::SprSetShadowTbl(this->field_003C,this->field_0018,param_1);
  return;
}

