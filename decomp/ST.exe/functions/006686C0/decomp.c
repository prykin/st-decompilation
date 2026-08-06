#include "../../pseudocode_runtime.h"


void __cdecl FUN_006686c0(int *param_1)

{
  if (*param_1 != 0) {
    thunk_FUN_00668670(*param_1);
    FreeAndNull(param_1);
  }
  return;
}

