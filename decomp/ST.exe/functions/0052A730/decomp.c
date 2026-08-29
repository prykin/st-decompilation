#include "../../pseudocode_runtime.h"


undefined4 __cdecl FUN_0052a730(RecoveredRecord_0052A730_7C85D1BF *param_1)

{
  uint uVar1;
  uVar1 = 7;
  if (param_1->field_0014 == 0) {
    uVar1 = 9;
  }
  else if (param_1->field_0014 == 2) {
    return 8;
  }
  return uVar1;
}

