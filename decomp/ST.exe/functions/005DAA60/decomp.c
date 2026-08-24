
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0, unknown=0),
   and decompilation contains no value return */

void FUN_005daa60(void)

{
  if (g_int_00811764 != nullptr) {
    FUN_006b7740(g_int_00811764);
  }
  g_int_00811764 = nullptr;
  return;
}

