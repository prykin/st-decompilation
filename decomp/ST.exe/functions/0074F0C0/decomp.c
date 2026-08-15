#include "../../pseudocode_runtime.h"


/* [STVTableApplier] Virtual slot 007A1C60+0x8

   [STVTableApplier] Virtual slot 007A1D10+0x8 */

void FUN_0074f0c0(int param_1)

{
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(**(int **)(param_1 + 0xc) + 8))(*(int **)(param_1 + 0xc));
  return;
}

