#include "../../pseudocode_runtime.h"


void __thiscall FUN_005f0240(void *this,undefined1 *param_1)

{
  byte uVar1;
  uint uVar2;
  *param_1 = 4;
  param_1[1] = 1;
  /* ST_CALLSITE[005F0253]: CALL dword ptr [EAX + 0x2c] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar2 = (**(code **)(*(int *)this + 0x2c))();
  *(undefined4 *)(param_1 + 2) = uVar2;
  /* ST_CALLSITE[005F025D]: CALL dword ptr [EDX + 0xc] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar1 = (**(code **)(*(int *)this + 0xc))();
  param_1[6] = uVar1;
  *(undefined4 *)(param_1 + 7) = STField<undefined4>(this,0x18);
  return;
}

