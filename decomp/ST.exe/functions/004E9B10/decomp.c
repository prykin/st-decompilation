#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_004e9b10(void *this,RecoveredRecord_004E9B10_29E30AA9 *param_1)

{
  int iVar1;

  if (STField<int>(this,0x4f8) != 0) {
    if (STField<int>(this,0x4fc) == 0) {
      iVar1 = param_1->field_0018;
      STField<RecoveredRecord_004E9B10_29E30AA9 *>(this,0x61b) = param_1;
      STField<int>(this,0x4f8) = iVar1;
      STField<undefined4>(this,0x4fc) = 1;
      return 1;
    }
    if (STField<int>(this,0x4f8) != 0) {
      return 0;
    }
  }
  if (param_1->field_0018 != STField<int>(this,0x5d3)) {
    return 0;
  }
  STField<int>(this,0x4f8) = STField<int>(this,0x5d3);
  STField<undefined4>(this,0x4fc) = 1;
  STField<RecoveredRecord_004E9B10_29E30AA9 *>(this,0x61b) = param_1;
  return 1;
}

