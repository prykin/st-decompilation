
/* [STMethodOwnerApplier] Structural method owner recovered as MReportTy.
   Evidence: this_call_owners=[MReportTy]; agreed_this_calls=1; incoming_this_accesses=12;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall MReportTy::sub_005C00D0(MReportTy *this)

{
  byte bVar1;
  uint local_8;

  bVar1 = 0;
  local_8 = 0;
  this->field_0029 = 2;
  this->field_002D = 0x20;
  do {
    if ((&this->field_008F)[local_8] != 0) {
      this->field_0025 = (&this->field_008F)[local_8];
      if (bVar1 == 0) {
        *(uint *)&this->field_0x31 = (uint)(this->field_0067 != '\0');
      }
      else {
        *(undefined4 *)&this->field_0x31 = 1;
      }
      (*this->field_000C->vtable->vfunc_18)(&this->field_0x1d);
    }
    bVar1 = bVar1 + 1;
    local_8 = (uint)bVar1;
  } while (bVar1 < 4);
  if ((this->field_009F != 0) && (this->field_0067 != '\0')) {
    this->field_0025 = this->field_009F;
    *(undefined4 *)&this->field_0x31 = 1;
    (*this->field_000C->vtable->vfunc_18)(&this->field_0x1d);
  }
  return;
}

