#include "../../pseudocode_runtime.h"


undefined4 FUN_00746fab(AnonShape_00746FAB_13ADB1A1 *param_1,undefined4 *param_2)

{
  uint uVar1;
  if (param_2 == nullptr) {
    uVar1 = 0x80004003;
  }
  else {
    uVar1 = 0;
    *param_2 = param_1->field_001C;
    param_2[1] = param_1->field_0020;
    param_2[2] = param_1->field_0024;
    param_2[3] = param_1->field_0028;
  }
  return uVar1;
}

