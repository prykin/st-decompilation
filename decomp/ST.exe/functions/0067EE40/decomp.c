#include "../../pseudocode_runtime.h"


undefined4 __cdecl FUN_0067ee40(int param_1)

{
  if (param_1 < (int)g_dArray_00848A18->elementSize) {
    return *(undefined4 *)(g_dArray_00848A18->growCapacity + param_1 * 4);
  }
  return 0;
}

