
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void FUN_006833b0(void)

{
  thunk_FUN_00683310();
  while (DAT_007d2d18 == 8) {
    thunk_FUN_00682810(8);
    thunk_FUN_00683310();
    thunk_FUN_006823e0(8,(float *)0x2);
  }
  return;
}

