
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=7;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall TLOBaseTy::sub_004DC150(TLOBaseTy *this)

{
  int iVar1;
  TLOBaseTy *local_8;

  if (this->field_04C0 != 0) {
    this->field_04C0 = 0;
    local_8 = this;
    if (this->field_061F != (int *)0x0) {
      thunk_FUN_00635fd0(this->field_061F);
      Library::MSVCRT::FUN_0072e2b0(this->field_061F);
      this->field_061F = (void *)0x0;
    }
    iVar1 = FUN_006e62d0(g_playSystem_00802A38,this->field_04C4,(int *)&local_8);
    if (iVar1 == 0) {
      thunk_FUN_004dbe00(local_8,(int *)this->field_0018);
    }
  }
  return;
}

