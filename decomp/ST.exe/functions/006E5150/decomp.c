
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0056FA60 -> 006E5150 @ 0056FAAB

   [STMethodOwnerApplier] Structural method owner recovered as STAppC.
   Evidence: this_call_owners=[STAppC]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=1;
   incoming_ecx_receiver_callers=1; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall STAppC::sub_006E5150(STAppC *this,STMessage *param_1)

{
  if (param_1->id == 4) {
    DAT_00856d74 = (param_1->arg0).u32;
    if ((DAT_00856d74 != 0) && (this->field_0024 != 0)) {
      FUN_006e4290(0xf,5,0xf,0);
      return 0;
    }
    FUN_006e4340(this,(int *)0xf,5,0xf,0);
  }
  else if (param_1->id == 0xf) {
    this->field_001C = 1;
    return 0;
  }
  return 0;
}

