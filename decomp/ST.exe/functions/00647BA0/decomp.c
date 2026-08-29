#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_00647ba0(void *this,RecoveredRecord_00647BA0_F0CA3D39 *param_1)

{
  if ((int)param_1->field_0001 < *(int *)(STField<int>(this,0x4e2) + 8)) {
    return *(undefined4 *)(*(int *)(STField<int>(this,0x4e2) + 0x14) + param_1->field_0001 * 4);
  }
  return 0;
}

