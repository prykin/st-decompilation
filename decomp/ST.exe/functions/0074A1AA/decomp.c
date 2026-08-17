#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 0074A1AA returns zeroed full register at 0074A1C0 @ 0074A1C3 */

uint __fastcall FUN_0074a1aa(int *param_1)

{
  if ((AnonShape_0074F0D8_3A9DA5F1 *)param_1[0x14] != nullptr) {
    FUN_0074f0d8((AnonShape_0074F0D8_3A9DA5F1 *)param_1[0x14]);
  }
  /* ST_CALLSITE[0074A1BD]: CALL dword ptr [EAX + 0x70] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(*param_1 + 0x70))();
  return 0;
}

