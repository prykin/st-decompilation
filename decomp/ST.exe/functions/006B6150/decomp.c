
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005A4350 -> 006B6150 @ 005A5193 | 005DA980 -> 006B6150 @ 005DA9BF

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void FUN_006b6150(uint param_1)

{
  DAT_00854ec4 = param_1;
  return;
}

