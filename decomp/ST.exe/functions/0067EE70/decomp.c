#include "../../pseudocode_runtime.h"


undefined4 __cdecl FUN_0067ee70(int param_1)

{
  if (param_1 < (int)g_dArray_00848A1C->elementSize) {
    return *(undefined4 *)(g_dArray_00848A1C->growCapacity + param_1 * 4);
  }
  return 0;
}

