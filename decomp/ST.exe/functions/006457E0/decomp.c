#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0), and
   decompilation contains no value return */

void __fastcall FUN_006457e0(RecoveredRecord_006457E0_D0D8C27F *param_1)

{
  uint local_24 [2];
  int local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  local_14 = 10;
  local_18 = 0;
  local_10 = param_1->field_0008;
  local_1c = g_playSystem_00802A38->field_0014;

  SystemClassTy::PostMessage((SystemClassTy *)g_playSystem_00802A38,local_24);
  return;
}

