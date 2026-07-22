
/* [STMethodOwnerApplier] Structural method owner recovered as MReportTy.
   Evidence: this_call_owners=[MReportTy]; agreed_this_calls=1; incoming_this_accesses=10;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall MReportTy::sub_005C0190(MReportTy *this)

{
  int *piVar1;
  int local_8;

  local_8 = 4;
  this->field_0029 = 2;
  this->field_002D = 0x20;
  piVar1 = &this->field_008F;
  do {
    if (*piVar1 != 0) {
      this->field_0025 = *piVar1;
      *(undefined4 *)&this->field_0x31 = 0;
      (*this->field_000C->vtable->vfunc_18)(&this->field_0x1d);
    }
    piVar1 = piVar1 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  if (this->field_009F != 0) {
    this->field_0025 = this->field_009F;
    *(undefined4 *)&this->field_0x31 = 0;
    (*this->field_000C->vtable->vfunc_18)(&this->field_0x1d);
  }
  return;
}

