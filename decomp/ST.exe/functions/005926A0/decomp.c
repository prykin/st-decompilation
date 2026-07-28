
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void FUN_005926a0(int *param_1)

{
  FUN_006b5f80((int *)g_ddxContext_008075A8,*param_1,param_1[1],param_1[2],param_1[3]);
  Library::DKW::FLC::FUN_006c4ac0(param_1);
  return;
}

