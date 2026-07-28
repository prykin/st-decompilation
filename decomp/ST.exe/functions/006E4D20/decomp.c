
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall FUN_006e4d20(void *this,int param_1)

{
  FUN_006e4c90(param_1,*(DArrayTy **)((int)this + 0x10));
  return;
}

