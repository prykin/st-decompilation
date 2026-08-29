#include "../../pseudocode_runtime.h"


undefined4 __cdecl FUN_0052a6f0(RecoveredRecord_0052A6F0_8710A4D2 *param_1)

{
  uint uVar1;
  uVar1 = 0;
  if (param_1->field_0014 == 0) {
    uVar1 = 2;
  }
  else if (param_1->field_0014 == 2) {
    return 1;
  }
  return uVar1;
}

