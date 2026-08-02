
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0, unknown=0),
   and decompilation contains no value return */

void FUN_006c4a00(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 != nullptr) {
    *param_1 = param_3;
    param_1[1] = param_4;
    param_1[0xc] = param_2;
  }
  return;
}

