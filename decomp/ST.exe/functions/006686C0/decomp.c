#include "../../pseudocode_runtime.h"


void __cdecl FUN_006686c0(int *param_1)

{
  if ((RecoveredRecord_00668670_926FA73E *)*param_1 != nullptr) {
    thunk_FUN_00668670((RecoveredRecord_00668670_926FA73E *)*param_1);
    FreeAndNull(param_1);
  }
  return;
}

