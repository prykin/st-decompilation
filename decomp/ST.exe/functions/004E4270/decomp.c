
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void FUN_004e4270(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;

  iVar1 = thunk_FUN_004e4180(param_1);
  uVar2 = thunk_FUN_004e41c0(param_1);
  if (iVar1 < (int)(uVar2 + param_2)) {
    uVar2 = thunk_FUN_004e41c0(param_1);
    param_2 = iVar1 - uVar2;
  }
  if (0 < param_2) {
    thunk_FUN_004e4230(param_1,param_2);
  }
  thunk_FUN_004e41c0(param_1);
  return;
}

