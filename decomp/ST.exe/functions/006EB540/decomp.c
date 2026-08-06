#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 006EB540 returns zeroed full register at 006EB561 @ 006EB565 */

uint FUN_006eb540(int param_1)

{
  int *piVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x44);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*piVar1 + 0x80))(piVar1,0);
  FUN_006bb980(*(AnonShape_006BB980_E41494A1 **)(param_1 + 4));
  return 0;
}

