
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0074B06D -> 0074AD49 @ 0074B402

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall FUN_0074ad49(void *this,undefined4 param_1,int *param_2)

{
  *(undefined4 *)((int)this + 0x138) = param_1;
  *(int **)((int)this + 0x13c) = param_2;
  return;
}

