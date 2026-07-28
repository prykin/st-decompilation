
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=7, used=0), and
   decompilation contains no value return */

void FUN_00683180(void)

{
  int iVar1;

  thunk_FUN_00683070();
  iVar1 = thunk_FUN_006830f0(DAT_007d2d18);
  while (iVar1 != 0) {
    if (DAT_007d2d18 == 1) {
      thunk_FUN_00683120();
    }
    else if (DAT_007d2d18 == 0x3d) {
      thunk_FUN_00683150();
    }
    iVar1 = thunk_FUN_006830f0(DAT_007d2d18);
  }
  return;
}

