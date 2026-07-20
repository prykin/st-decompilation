
/* [STMethodOwnerApplier] Structural method owner recovered as STBoatC.
   Evidence: this_call_owners=[STBoatC]; agreed_this_calls=3; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0 */

void __thiscall STBoatC::sub_004602B0(STBoatC *this)

{
  void *unaff_ESI;
  
  (*this->vtable->StopMove)(this,unaff_ESI);
  this->field_00F4 = 0;
  return;
}

