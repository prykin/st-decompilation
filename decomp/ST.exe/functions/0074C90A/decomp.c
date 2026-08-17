#include "../../pseudocode_runtime.h"


/* [STVTableApplier] Virtual slot 007A1820+0x0

   [STVTableApplier] Virtual slot 007A19A8+0x0 */

void FUN_0074c90a(int param_1,undefined4 param_2,undefined4 param_3)

{
  /* ST_CALLSITE[0074C91C]: CALL dword ptr [ECX] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)**(undefined4 **)(param_1 + -8))(*(undefined4 **)(param_1 + -8),param_2,param_3);
  return;
}

