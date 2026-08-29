#include "../../pseudocode_runtime.h"


uint __cdecl
FUN_00698db0(RecoveredRecord_00698DB0_1CB5EC78 *param_1,RecoveredRecord_00698DB0_DA155C11 *param_2)

{
  if (param_1->field_0006 < param_2->field_0006) {
    return 0xffffffff;
  }
  return (uint)(param_2->field_0006 < param_1->field_0006);
}

