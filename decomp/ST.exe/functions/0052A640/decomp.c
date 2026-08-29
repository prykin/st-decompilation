#include "../../pseudocode_runtime.h"


undefined4 __cdecl FUN_0052a640(RecoveredRecord_0052A640_D5301A8C *param_1)

{
  uint local_8;
  local_8 = 5;
  switch(*(undefined4 *)(param_1->field_0014 + 4)) {
  case 0:
    return 5;
  case 1:
  case 3:
    local_8 = 4;
    break;
  case 2:
    return 6;
  }
  return local_8;
}

