#include "../../pseudocode_runtime.h"


undefined4 __cdecl FUN_0067f4b0(uint param_1)

{
  undefined4 *puVar1;

  /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(g_array_00848A28, param_1) (runtime stride) */
  if ((param_1 < g_array_00848A28->count) &&
     (puVar1 = (undefined4 *)(g_array_00848A28->elementSize * param_1 + (int)g_array_00848A28->data)
     , puVar1 != nullptr)) {
    return *puVar1;
  }
  return 0;
}

