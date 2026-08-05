
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall TLOBaseTy::sub_004CC880(TLOBaseTy *this,undefined4 param_1)

{
  int iVar1;
  byte bVar2;

  iVar1 = this->field_0440;
  if ((((iVar1 != 2) && (iVar1 != 3)) && (iVar1 != 4)) &&
     (this->field_0440 = param_1, this->field_0444 != 0)) {
    bVar2 = LookupRecordByte(*(char *)&this->field_0024);
    if ((bVar2 != 3) || (this->field_043C == 2)) {
      this->field_0448 = 1;
    }
  }
  return 0;
}

