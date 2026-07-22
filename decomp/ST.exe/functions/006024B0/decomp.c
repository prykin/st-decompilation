
/* [STMethodOwnerApplier] Structural method owner recovered as STDestC.
   Evidence: this_call_owners=[STDestC]; agreed_this_calls=1; incoming_this_accesses=23;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall STDestC::sub_006024B0(STDestC *this)

{
  int iVar1;
  int iVar2;

  iVar2 = (int)(short)(this->field_0255 * 0xc9 + 100);
  this->field_037B = iVar2;
  iVar1 = (int)(short)(this->field_0257 * 0xc9 + 100);
  this->field_037F = iVar1;
  this->field_0383 = (int)(short)(this->field_0259 * 200 + 100);
  if (this->field_0241 == 1) {
    this->field_037B = iVar2 + 100;
    this->field_037F = iVar1 + 100;
  }
  this->field_0047 = this->field_0255;
  this->field_0041 = (short)this->field_037B;
  this->field_0043 = (short)this->field_037F;
  this->field_004B = this->field_0259;
  this->field_0045 = (short)this->field_0383;
  this->field_0049 = this->field_0257;
  this->field_0372 = this->field_0245;
  this->field_03A7 = 1;
  this->field_036E = 1;
  this->field_0249 = 0xffffffff;
  return;
}

