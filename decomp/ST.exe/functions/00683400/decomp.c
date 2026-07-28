
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void FUN_00683400(void)

{
  thunk_FUN_006833b0();
  while (DAT_007d2d18 == 0xb) {
    thunk_FUN_00682810(0xb);
    thunk_FUN_006833b0();
    thunk_FUN_006823e0(0xb,(float *)0x2);
  }
  return;
}

