
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00578370 -> 006E4D20 @ 00578398; data at 00811644 | 006E4D20 -> 006E4C90 @ 006E4D2B */

void __thiscall FUN_006e4d20(void *this,DebugSystemC *param_1)

{
  FUN_006e4c90(param_1,*(DArrayTy **)((int)this + 0x10));
  return;
}

