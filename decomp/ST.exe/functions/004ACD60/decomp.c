
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0), and
   decompilation contains no value return */

void __thiscall FUN_004acd60(void *this,char param_1,undefined4 param_2)

{
  *(undefined4 *)(*(int *)((int)this + 0x20) + 0x20 + param_1 * 0x24) = param_2;
  return;
}

