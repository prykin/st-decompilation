#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 00747822 returns zeroed full register at 00747849 @ 0074784C */

uint FUN_00747822(AnonShape_00747822_A1E67AF6 *param_1)

{
  uint uVar1;
  /* ST_CALLSITE[0074782C]: CALL dword ptr [EAX + 0x14] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar1 = (**(code **)(*param_1->field_000C + 0x14))();
  param_1->field_0010 = uVar1;
  /* ST_CALLSITE[00747837]: CALL dword ptr [EAX + 0x18] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar1 = (**(code **)(*param_1->field_000C + 0x18))();
  param_1->field_0004 = 0;
  param_1->field_0008 = uVar1;
  FUN_0074de91(&param_1[1].field_0004);
  return 0;
}

