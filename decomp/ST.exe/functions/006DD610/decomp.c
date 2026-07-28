
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00428E50 -> 006DD610 @ 0042922F; zeroed full register at 00429216 | 00691690 ->
   006DD610 @ 006917E9; zeroed full register at 006917A2

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 00428E50 -> 006DD610 @ 0042922F; zeroed full register at 00429216 | 00691690 ->
   006DD610 @ 006917E9; zeroed full register at 006917A2

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=11, used=0), and
   decompilation contains no value return */

void __thiscall
FUN_006dd610(void *this,uint param_1,uint param_2,undefined4 param_3,uint param_4,undefined4 param_5
            )

{
  *(uint *)((int)this + 0x88) = param_2;
  *(undefined4 *)((int)this + 0x8c) = param_3;
  *(uint *)((int)this + 0x90) = param_4;
  *(undefined4 *)((int)this + 0x94) = param_5;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  Library::Ourlib::STREND::FUN_006dd050
            (this,param_1,(double)CONCAT44(param_3,param_2),(double)CONCAT44(param_5,param_4));
  return;
}

