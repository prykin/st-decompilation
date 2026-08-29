#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0), and
   decompilation contains no value return */

void __cdecl FUN_006809b0(byte *param_1,uint param_2)

{
  uint local_10;
  uint local_c;
  uint local_8;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  thunk_FUN_00680890(0xc,param_1,param_2,&local_10);
  return;
}

