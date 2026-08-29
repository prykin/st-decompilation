#include "../../pseudocode_runtime.h"


undefined4 __cdecl FUN_0052a540(RecoveredRecord_0052A540_7E2E1D84 *param_1)

{
  uint local_8;
  local_8 = 0;
  switch(*(undefined4 *)(param_1->field_0014 + 4)) {
  case 0:
    return 0;
  case 1:
  case 3:
    local_8 = 1;
    break;
  case 2:
    return 2;
  }
  return local_8;
}

