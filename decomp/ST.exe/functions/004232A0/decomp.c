
/* [STMethodOwnerApplier] Structural method owner recovered as STGroupBoatC.
   Evidence: this_call_owners=[STGroupBoatC]; agreed_this_calls=1; incoming_this_accesses=8;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0
   
   [STPrototypeApplier] Propagated return.
   Evidence: 004232A0 returns STGroupBoatC::sub_004232A0 this @ 004232C9 */

STGroupBoatC * __thiscall STGroupBoatC::sub_004232A0(STGroupBoatC *this)

{
  sub_006E60E0(this);
  this->vtable = (STGroupBoatCVTable *)&VTable_00790508;
  this->field_001C = 0;
  this->field_0020 = 0;
  this->field_0029 = 0;
  this->field_002D = 0;
  this->field_0027 = 0;
  this->field_0035 = 0;
  this->field_0039 = 0;
  return this;
}

