#include "../../pseudocode_runtime.h"


/* [STVTableApplier] Virtual slot 007A1C60+0x4

   [STVTableApplier] Virtual slot 007A1D10+0x4 */

void FUN_0074f03d(int param_1)

{
  /* ST_CALLSITE[0074F047]: CALL dword ptr [ECX + 0x4] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(**(int **)(param_1 + 0xc) + 4))(*(int **)(param_1 + 0xc));
  return;
}

