#include "../../pseudocode_runtime.h"


undefined4 __cdecl FUN_0052a770(RecoveredRecord_0052A770_CB744C05 *param_1)

{
  uint uVar1;
  uVar1 = 5;
  if (param_1->field_0014 == 0) {
    uVar1 = 6;
  }
  else if (param_1->field_0014 == 2) {
    return 4;
  }
  return uVar1;
}

