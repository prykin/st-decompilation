
/* [STMethodOwnerApplier] Structural method owner recovered as ChooseMapTy.
   Evidence: this_call_owners=[ChooseMapTy]; agreed_this_calls=1; incoming_this_accesses=21;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall ChooseMapTy::sub_005AE950(ChooseMapTy *this)

{
  this->field_1A60 = 0;
  this->field_0029 = 2;
  this->field_002D = 0x20;
  if (this->field_1C83 != 0) {
    this->field_0025 = this->field_1C83;
    *(undefined4 *)&this->field_0x31 = 0;
    (*this->field_000C->vtable->vfunc_18)(&this->field_0x1d);
  }
  if (this->field_1A6C != 0) {
    this->field_0025 = this->field_1A6C;
    *(undefined4 *)&this->field_0x31 = 0;
    (*this->field_000C->vtable->vfunc_18)(&this->field_0x1d);
  }
  if (g_startSystem_0081176C->field_0389 != 0) {
    this->field_0025 = g_startSystem_0081176C->field_0389;
    this->field_002D = 0x20;
    *(undefined4 *)&this->field_0x31 = 0;
    (*this->field_000C->vtable->vfunc_18)(&this->field_0x1d);
  }
  if (g_startSystem_0081176C->field_054C != 0) {
    this->field_002D = 0x20;
    *(undefined4 *)&this->field_0x31 = 0;
    FUN_006e6080(this,2,g_startSystem_0081176C->field_054C,(undefined4 *)&this->field_0x1d);
    this->field_002D = 0x29;
    *(undefined4 *)&this->field_0x31 = 0x19;
    FUN_006e6080(this,2,g_startSystem_0081176C->field_054C,(undefined4 *)&this->field_0x1d);
  }
  if (g_startSystem_0081176C->field_0550 != 0) {
    this->field_002D = 0x20;
    *(undefined4 *)&this->field_0x31 = 0;
    FUN_006e6080(this,2,g_startSystem_0081176C->field_0550,(undefined4 *)&this->field_0x1d);
  }
  return;
}

