
/* [STMethodOwnerApplier] Structural method owner recovered as WaitTy.
   Evidence: this_call_owners=[WaitTy]; agreed_this_calls=1; incoming_this_accesses=13;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall WaitTy::sub_005E9970(WaitTy *this)

{
  this->field_1A60 = 1;
  this->field_0029 = 2;
  this->field_002D = 0x20;
  if (g_startSystem_0081176C->field_0389 != 0) {
    this->field_0025 = g_startSystem_0081176C->field_0389;
    *(undefined4 *)&this->field_0x31 = 1;
    (*this->field_000C->vtable->vfunc_18)(&this->field_0x1d);
  }
  if (g_startSystem_0081176C->field_0550 != 0) {
    this->field_0025 = g_startSystem_0081176C->field_0550;
    *(undefined4 *)&this->field_0x31 = 1;
    (*this->field_000C->vtable->vfunc_18)(&this->field_0x1d);
  }
  if (g_startSystem_0081176C->field_054C != 0) {
    this->field_0025 = g_startSystem_0081176C->field_054C;
    this->field_002D = 0x29;
    *(undefined4 *)&this->field_0x31 = 9;
    (*this->field_000C->vtable->vfunc_18)(&this->field_0x1d);
  }
  return;
}

