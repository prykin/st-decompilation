#include "../../pseudocode_runtime.h"


void __thiscall FUN_005f0240(void *this,RecoveredRecord_005F0240_1A9CFE11 *param_1)

{
  byte uVar1;
  uint uVar2;
  *(undefined1 *)param_1 = 4;
  param_1->field_0x1 = 1;
  /* ST_CALLSITE[005F0253]: CALL dword ptr [EAX + 0x2c] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar2 = (**(code **)(*(int *)this + 0x2c))();
  param_1->field_0002 = uVar2;
  /* ST_CALLSITE[005F025D]: CALL dword ptr [EDX + 0xc]; [STIndirectCallsiteApplier] exact slot 0xC; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
  uVar1 = STStructuralVirtualCall<undefined4>(this, 0xC);
  param_1->field_0x6 = uVar1;
  param_1->field_0007 = STField<undefined4>(this,0x18);
  return;
}

