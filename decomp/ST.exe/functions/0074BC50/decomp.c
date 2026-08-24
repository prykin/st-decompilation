
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0, unknown=0),
   and decompilation contains no value return */

void FUN_0074bc50(LPVOID param_1)

{
  if (param_1 != (LPVOID)0x0) {
    FUN_0074bce4(param_1);
    /* ST_CALLSITE[0074BC60]: CALL dword ptr [0x0085c0dc] */
    CoTaskMemFree(param_1);
  }
  return;
}

