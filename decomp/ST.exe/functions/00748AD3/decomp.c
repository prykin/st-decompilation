
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __fastcall FUN_00748ad3(undefined4 *param_1)

{
  *param_1 = &VTable_007A1148;
  if ((LPVOID)param_1[0xf] != (LPVOID)0x0) {
    FUN_0074bc50((LPVOID)param_1[0xf]);
  }
  return;
}

