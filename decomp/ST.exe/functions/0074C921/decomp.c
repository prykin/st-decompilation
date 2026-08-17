#include "../../pseudocode_runtime.h"


/* [STVTableApplier] Virtual slot 007A1820+0x4

   [STVTableApplier] Virtual slot 007A19A8+0x4 */

void FUN_0074c921(int param_1)

{
  /* ST_CALLSITE[0074C92B]: CALL dword ptr [ECX + 0x4] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(**(int **)(param_1 + -8) + 4))(*(int **)(param_1 + -8));
  return;
}

