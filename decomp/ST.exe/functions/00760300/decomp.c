
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00760300 -> 006A4950 @ 00760307 */

void FUN_00760300(undefined4 param_1,int *param_2)

{
  Library::MSVCRT::thunk_FUN_006a4950(param_2);
  return;
}

