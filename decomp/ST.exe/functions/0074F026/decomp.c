#include "../../pseudocode_runtime.h"


/* [STVTableApplier] Virtual slot 007A1C60+0x0

   [STVTableApplier] Virtual slot 007A1D10+0x0 */

void FUN_0074f026(int param_1,undefined4 param_2,undefined4 param_3)

{
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)**(undefined4 **)(param_1 + 0xc))(*(undefined4 **)(param_1 + 0xc),param_2,param_3);
  return;
}

