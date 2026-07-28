
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0), and
   decompilation contains no value return */

void __thiscall FUN_00416840(void *this,undefined2 *param_1,undefined2 *param_2,undefined2 *param_3)

{
  *param_1 = *(undefined2 *)(*(int *)((int)this + 0x97) + *(int *)((int)this + 0xd3) * 8);
  *param_2 = *(undefined2 *)(*(int *)((int)this + 0x97) + 2 + *(int *)((int)this + 0xd3) * 8);
  *param_3 = *(undefined2 *)(*(int *)((int)this + 0x97) + 4 + *(int *)((int)this + 0xd3) * 8);
  return;
}

