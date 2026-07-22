
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=005F5F20 @ 005F6322
   -> TEST TEST EAX,EAX

   [STMethodOwnerApplier] Structural method owner recovered as STColl3C.
   Evidence: this_call_owners=[STColl3C]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall STColl3C::sub_005F6F20(STColl3C *this,int param_1)

{
  int iVar1;

  iVar1 = this->field_0269 - param_1;
  this->field_0269 = iVar1;
  if (iVar1 < 1) {
    this->field_0269 = 0;
  }
  return (uint)(iVar1 < 1);
}

