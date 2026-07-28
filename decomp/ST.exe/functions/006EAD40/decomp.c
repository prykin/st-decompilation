
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return

   [STReturnSemanticsApplier] repair_unsafe_eax_rollback.
   Evidence: restore the earlier evidence-backed void type after an unsafe automated rollback;
   post-CALL EAX reads alone do not prove a source-level return value; machine CFG audit: used=1,
   ignored=4, unknown=0 */

void __thiscall
FUN_006ead40(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  *(undefined4 *)((int)this + 0x334) = param_1;
  *(undefined4 *)((int)this + 0x338) = param_2;
  *(undefined4 *)((int)this + 0x33c) = param_3;
  *(undefined4 *)((int)this + 0x340) = param_4;
  *(undefined4 *)((int)this + 0x344) = param_5;
  *(undefined4 *)((int)this + 0x348) = param_6;
  *(undefined4 *)((int)this + 0x34c) = param_7;
  return;
}

