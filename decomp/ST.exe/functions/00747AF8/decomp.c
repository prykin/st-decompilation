#include "../../pseudocode_runtime.h"


undefined4 FUN_00747af8(AnonShape_00747AF8_C78FFF68 *param_1)

{
  undefined4 uVar1;

  param_1->field_0004 = 0;
  /* ST_CALLSITE[00747B06]: CALL dword ptr [EAX + 0x10] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar1 = (**(code **)(*param_1->field_0008 + 0x10))();
  param_1->field_000C = uVar1;
  return 0;
}

