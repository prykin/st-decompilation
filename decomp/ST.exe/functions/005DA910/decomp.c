
/* [STMethodOwnerApplier] Structural method owner recovered as StartSystemTy.
   Evidence: this_call_owners=[StartSystemTy]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall StartSystemTy::sub_005DA910(StartSystemTy *this)

{
  if ((undefined4 *)this->field_068A != nullptr) {
    FUN_006b6110((undefined4 *)this->field_068A);
  }
  this->field_068A = 0;
  return;
}

