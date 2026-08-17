#include "../../pseudocode_runtime.h"


/* [STVTableApplier] Virtual slot 007A1D68+0x4 */

void FUN_0074fd4a(int param_1)

{
  /* ST_CALLSITE[0074FD54]: CALL dword ptr [ECX + 0x4] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(**(int **)(param_1 + -8) + 4))(*(int **)(param_1 + -8));
  return;
}

