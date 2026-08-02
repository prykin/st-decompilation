
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=8, used=0), and
   decompilation contains no value return */

void FUN_007532a0(undefined4 *param_1)

{
  if (param_1 != nullptr) {
    Library::DKW::DB::FUN_00754ec0((int)param_1);
    if (param_1[2] != 0) {
      FUN_006b9890((int *)(param_1[2] + 0x4c));
    }
    FUN_006d46a0((undefined4 *)param_1[2],0);
    FUN_006a5e90((short *)param_1[2]);
    FUN_006a5e90((short *)param_1[6]);
    FUN_006a5e90((short *)param_1[7]);
    FUN_006a5e90((short *)param_1);
  }
  return;
}

