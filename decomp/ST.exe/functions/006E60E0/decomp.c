
/* [STMethodOwnerApplier] Structural method owner recovered as STGroupBoatC.
   Evidence: this_call_owners=[STGroupBoatC]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0
   
   [STPrototypeApplier] Propagated return.
   Evidence: 006E60E0 returns STGroupBoatC::sub_006E60E0 this @ 006E60F8 */

STGroupBoatC * __thiscall STGroupBoatC::sub_006E60E0(STGroupBoatC *this)

{
  sub_006E5FB0(this);
  this->vtable = (STGroupBoatCVTable *)&VTable_0079E1B0;
  this->field_0018 = 0;
  return this;
}

