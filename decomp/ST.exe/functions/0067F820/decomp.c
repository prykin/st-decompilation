#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_0067f820(uint param_1)

{
  float *pfVar1;

  if ((param_1 < g_array_00848A30->count) &&
     (pfVar1 = DArrayAt<float>(g_array_00848A30, param_1),
     pfVar1 != nullptr)) {
    return (float10)*pfVar1;
  }
  return (float10)_DAT_0079034c;
}

