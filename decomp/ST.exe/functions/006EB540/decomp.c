#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 006EB540 returns zeroed full register at 006EB561 @ 006EB565 */

uint FUN_006eb540(RecoveredRecord_006EB540_A3400F06 *param_1)

{
  /* ST_CALLSITE[006EB552]: CALL dword ptr [ECX + 0x80] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(param_1->entries_0004[0x11]->field_0000 + 0x80))(param_1->entries_0004[0x11],0);
  FUN_006bb980((AnonShape_006BB980_E41494A1 *)param_1->entries_0004);
  return 0;
}

