
/* [STMethodOwnerApplier] Structural method owner recovered as AiFltClassTy.
   Evidence: this_call_owners=[AiFltClassTy]; agreed_this_calls=2; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00660F70 -> 0065E360 @ 006611D9; AiFltClassTy::sub_00660F70 this; stable alias ESI */

uint * __fastcall AiFltClassTy::sub_0065E360(AiFltClassTy *param_1,undefined4 param_2,int param_3)

{
  STGroupBoatC *this;
  uint *puVar1;

  if ((param_1->field_007D != 0xfffe) && (g_allPlayers_007FA174 != nullptr)) {
    this = thunk_FUN_0042b760(*(char *)&param_1->field_0024,param_1->field_007D);
    if (this != nullptr) {
      puVar1 = STGroupC::GetTOBJList((STGroupC *)this,param_3);
      return puVar1;
    }
  }
  return nullptr;
}

