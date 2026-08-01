
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006E4D20 -> 006E4C90 @ 006E4D2B; FUN_006e4d20 parameter param_1 */

void FUN_006e4c90(DebugSystemC *param_1,DArrayTy *param_2)

{
  uint index;
  byte local_10 [4];
  DebugSystemC *local_c;
  DArrayTy *local_8;

  param_2->iteratorIndex = 0;
  index = DArrayGetNext(param_2,local_10);
  if (-1 < (int)index) {
    while( true ) {
      if (local_c == param_1) break;
      if (local_8 != (DArrayTy *)0x0) {
        FUN_006e4c90(param_1,local_8);
      }
      index = DArrayGetNext(param_2,local_10);
      if ((int)index < 0) {
        return;
      }
    }
    if (local_8 != (DArrayTy *)0x0) {
      FUN_006e3680(local_8);
      DArrayDestroy(local_8);
      local_8 = (DArrayTy *)0x0;
    }
    DArrayRemoveAt(param_2,index);
  }
  return;
}

