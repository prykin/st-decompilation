
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void FUN_006834a0(void)

{
  thunk_FUN_00683450();
  while (DAT_007d2d18 == 3) {
    thunk_FUN_00682810(3);
    thunk_FUN_006823a0(800,1);
    thunk_FUN_00683450();
    thunk_FUN_006823e0(3,(float *)0x2);
  }
  return;
}

