
/* [STMethodOwnerApplier] Structural method owner recovered as STBoatC.
   Evidence: this_call_owners=[STBoatC]; agreed_this_calls=10; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0 */

int __thiscall STBoatC::sub_00460360(STBoatC *this)

{
  int iVar1;
  int iVar2;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar1 = (*(code *)this->vtable->field_0020)();
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar2 = (*(code *)this->vtable->field_00D8)();
  if ((iVar2 == 0) && (iVar1 != -1)) {
    if (iVar1 != 0) {
      return -(uint)(iVar1 != 1);
    }
    return 2;
  }
  return -1;
}

