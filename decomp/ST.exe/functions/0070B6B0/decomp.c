#include "../../pseudocode_runtime.h"


undefined4 __cdecl FUN_0070b6b0(AnonShape_0070B6B0_34698A53 *param_1)

{
  param_1->field_0006 = param_1->field_0006 + -1;
  if (-1 < param_1->field_0006) {
    return param_1->entries[param_1->field_0006];
  }
  return 0;
}

