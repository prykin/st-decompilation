
/* [STMethodOwnerApplier] Structural method owner recovered as STBoatC.
   Evidence: this_call_owners=[STBoatC]; agreed_this_calls=1; incoming_this_accesses=5;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0 */

void __thiscall STBoatC::sub_00492420(STBoatC *this)

{
  int iVar1;
  STBoatC *local_8;

  if ((this->field_07C6 == 1) && (this->field_07CA == 0)) {
    this->field_07C6 = 0;
    local_8 = this;
    iVar1 = FUN_006e62d0(PTR_00802a38,this->field_058E,(int *)&local_8);
    if (iVar1 != -4) {
      (*local_8->vtable->ReleaseLoad)(local_8,this->field_0018);
    }
  }
  return;
}

