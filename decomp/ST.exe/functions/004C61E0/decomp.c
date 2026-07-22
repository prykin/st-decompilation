
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBldMark.
   Evidence: this_call_owners=[TLOBldMark]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall TLOBldMark::sub_004C61E0(TLOBldMark *this)

{
  DWORD DVar1;

  if (this->field_0018 == 0) {
    DVar1 = STAppC::sub_006E51B0(this->field_0010);
    thunk_FUN_004ac9e0((void *)this->field_002C,DVar1);
  }
  return 0;
}

