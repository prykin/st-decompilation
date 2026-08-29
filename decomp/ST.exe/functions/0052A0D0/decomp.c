#include "../../pseudocode_runtime.h"


undefined4 __cdecl FUN_0052a0d0(RecoveredRecord_0052A0D0_AA895067 *param_1)

{
  uint uVar1;
  uVar1 = 1;
  switch(param_1->field_0014) {
  case 0:
    return 0;
  case 1:
    return 1;
  case 2:
    uVar1 = 2;
    break;
  case 3:
    return 3;
  }
  return uVar1;
}

