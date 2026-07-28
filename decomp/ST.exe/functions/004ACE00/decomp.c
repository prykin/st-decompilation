
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STReturnSemanticsApplier] repair_unsafe_eax_rollback.
   Evidence: restore the earlier evidence-backed void type after an unsafe automated rollback;
   post-CALL EAX reads alone do not prove a source-level return value; machine CFG audit: used=1,
   ignored=4, unknown=0 */

void __thiscall FUN_004ace00(void *this,char param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(*(int *)(*(int *)((int)this + 0x20) + 4 + param_1 * 0x24) + param_2 * 4) = param_3
  ;
  return;
}

