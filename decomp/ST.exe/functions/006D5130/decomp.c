#include "../../pseudocode_runtime.h"


void FUN_006d5130(int param_1)

{
  /* ST_CALLSITE[006D513C]: CALL dword ptr [ECX + 0x4] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(**(int **)(param_1 + -8) + 4))(*(int **)(param_1 + -8));
  return;
}

