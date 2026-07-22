
/* [STMethodOwnerApplier] Structural method owner recovered as STAppC.
   Evidence: this_call_owners=[STAppC]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall STAppC::sub_0056EE90(STAppC *this)

{
  byte bVar1;
  uint local_8;

  if (this->field_112D == -1) {
    bVar1 = 0;
    this->field_112D = 0;
    this->field_112E = 1;
    local_8 = 0;
    while( true ) {
      if (((&this->field_11C9)[local_8 * 0x51] != -1) &&
         ((&this->field_11C8)[local_8 * 0x51] != '\0')) break;
      bVar1 = bVar1 + 1;
      local_8 = (uint)bVar1;
      if (7 < bVar1) {
        return;
      }
    }
    this->field_112D = (&this->field_11C9)[local_8 * 0x51];
    this->field_112E = (&this->field_11C8)[local_8 * 0x51];
    this->field_112F = 1;
  }
  return;
}

