#include "../../pseudocode_runtime.h"


undefined4 __cdecl FUN_0052a5c0(RecoveredRecord_0052A5C0_7CB2979F *param_1)

{
  uint local_8;
  local_8 = 7;
  switch(*(undefined4 *)(param_1->field_0014 + 4)) {
  case 0:
    return 7;
  case 1:
  case 3:
    local_8 = 8;
    break;
  case 2:
    return 9;
  }
  return local_8;
}

