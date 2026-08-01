
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void FUN_004e41f0(int param_1,undefined4 param_2)

{
  g_playerRuntime[param_1].field2302_0x996 = param_2;
  return;
}

