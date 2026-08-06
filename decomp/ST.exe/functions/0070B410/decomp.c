#include "../../pseudocode_runtime.h"


undefined4 __cdecl FUN_0070b410(AnonShape_0070B410_2733CA30 *param_1)

{
  param_1->field_0029 = param_1->field_0029 + -1;
  if (-1 < param_1->field_0029) {
    return param_1->entries[param_1->field_0029];
  }
  return 0;
}

