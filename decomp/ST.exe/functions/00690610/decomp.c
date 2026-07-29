
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall FUN_00690610(void *this,short param_1)

{
  uint index;

  index = thunk_FUN_006905c0(this,param_1);
  if (-1 < (int)index) {
    DArrayRemoveAt(*(DArrayTy **)((int)this + 0xc9),index);
  }
  return;
}

