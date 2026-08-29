
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005A1920 -> 006C7980 @ 005A1CCC

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=8, used=0), and
   decompilation contains no value return */

void FUN_006c7980(RecoveredRecord_006C7980_0CF2A53F *param_1)

{
  if (param_1 != nullptr) {
    FUN_006a5e90(param_1->field_001E);
    FUN_006a5e90((short *)param_1);
  }
  return;
}

