#include "../../pseudocode_runtime.h"


undefined4 __cdecl FUN_0052a230(RecoveredRecord_0052A230_82824298 *param_1)

{
  uint uVar1;
  uVar1 = 0;
  switch(param_1->field_0014) {
  case 0:
    return 9;
  case 1:
    uVar1 = 7;
    break;
  case 2:
  case 3:
    return 8;
  }
  return uVar1;
}

