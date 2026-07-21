
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\wlad\To_boat.cpp
   Diagnostic line evidence: 20736 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STMethodOwnerApplier] Structural method owner recovered as STBoatC.
   Evidence: this_call_owners=[STBoatC]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0 */

void __thiscall STBoatC::sub_00492390(STBoatC *this)

{
  int iVar1;
  STBoatC *local_8;

  if (((this->field_045D == CASE_F) || (this->field_045D == CASE_E)) && (this->field_07C6 == 0)) {
    this->field_07C6 = 1;
    local_8 = this;
    iVar1 = FUN_006e62d0(PTR_00802a38,this->field_058E,(int *)&local_8);
    if (iVar1 == -4) {
      RaiseInternalException
                (-0x5001fffd,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                 0x5100);
    }
    (*local_8->vtable->vfunc_9C)();
  }
  return;
}

