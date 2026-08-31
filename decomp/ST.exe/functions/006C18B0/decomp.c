
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0056ADC0 -> 006C18B0 @ 0056B468 | 005D9470 -> 006C18B0 @ 005D9827

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void FUN_006c18b0(uint param_1)

{
  if (PTR_008568bc != nullptr) {
    DAT_007ede10 = param_1;
  }
  return;
}

