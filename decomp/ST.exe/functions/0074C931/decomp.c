#include "../../pseudocode_runtime.h"


/* [STVTableApplier] Virtual slot 007A1820+0x8

   [STVTableApplier] Virtual slot 007A19A8+0x8 */

void FUN_0074c931(int param_1)

{
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(**(int **)(param_1 + -8) + 8))(*(int **)(param_1 + -8));
  return;
}

