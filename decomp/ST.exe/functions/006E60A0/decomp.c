
/* [STMethodOwnerApplier] Structural method owner recovered as STJellyGunC.
   Evidence: this_call_owners=[STJellyGunC]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1 */

void __thiscall STJellyGunC::sub_006E60A0(STJellyGunC *this,undefined4 *param_1)

{
  *param_1 = this->field_0008;
  param_1[1] = 2;
  SystemClassTy::PostMessage(this->field_000C,param_1);
  return;
}

