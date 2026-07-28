
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0), and
   decompilation contains no value return */

void FUN_00683600(void)

{
  if (DAT_007d2d18 == 0x1d) {
    thunk_FUN_006827a0();
  }
  thunk_FUN_00683590();
  if (DAT_007d2d18 == 0x13) {
    thunk_FUN_00682810(0x13);
    thunk_FUN_00683600();
    thunk_FUN_00682810(0xf);
    thunk_FUN_00683600();
    thunk_FUN_006823e0(0x13,(float *)0x3);
  }
  return;
}

