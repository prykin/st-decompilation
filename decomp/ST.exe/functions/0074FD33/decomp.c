#include "../../pseudocode_runtime.h"


/* [STVTableApplier] Virtual slot 007A1D68+0x0 */

void FUN_0074fd33(int param_1,undefined4 param_2,undefined4 param_3)

{
  /* ST_CALLSITE[0074FD45]: CALL dword ptr [ECX] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)**(undefined4 **)(param_1 + -8))(*(undefined4 **)(param_1 + -8),param_2,param_3);
  return;
}

