#include "../../pseudocode_runtime.h"


void __thiscall FUN_00580860(void *this,undefined1 *param_1)

{
  undefined4 uVar1;

  *param_1 = 4;
  param_1[1] = 0;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar1 = (**(code **)(*(int *)this + 0x2c))();
  *(undefined4 *)(param_1 + 2) = uVar1;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = STField<undefined4>(this,0x18);
  return;
}

