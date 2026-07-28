
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void FUN_00760300(undefined4 param_1,undefined4 *param_2)

{
  Library::MSVCRT::thunk_FUN_006a4950(param_2);
  return;
}

