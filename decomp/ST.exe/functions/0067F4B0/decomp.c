#include "../../pseudocode_runtime.h"


undefined4 __cdecl FUN_0067f4b0(uint param_1)

{
  undefined4 *puVar1;

  if ((param_1 < g_array_00848A28->count) &&
     (puVar1 = DArrayAt<undefined4>(g_array_00848A28, param_1)
     , puVar1 != nullptr)) {
    return *puVar1;
  }
  return 0;
}

