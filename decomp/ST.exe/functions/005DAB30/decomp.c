
/* [STMethodOwnerApplier] Structural method owner recovered as StartSystemTy.
   Evidence: this_call_owners=[StartSystemTy]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0), and
   decompilation contains no value return */

void __thiscall StartSystemTy::sub_005DAB30(StartSystemTy *this)

{
  if ((undefined4 *)this->field_068E != nullptr) {
    FUN_006b6110((undefined4 *)this->field_068E);
  }
  this->field_068E = 0;
  this->field_0692 = 0xffffffff;
  return;
}

