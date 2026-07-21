
/* [STMethodOwnerApplier] Structural method owner recovered as STBoatC.
   Evidence: this_call_owners=[STBoatC]; agreed_this_calls=10; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1 */

int __thiscall STBoatC::sub_00460260(STBoatC *this,int param_1)

{
  int iVar1;

  if (param_1 == 0) {
    this->field_00F4 = 0;
  }
  iVar1 = sub_0045FF50(this,param_1);
  if ((iVar1 == 2) && (this->field_00F4 == 1)) {
    iVar1 = 1;
  }
  return iVar1;
}

