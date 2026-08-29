#include "../../pseudocode_runtime.h"


void FUN_006d6120(RecoveredRecord_006D6120_E7E74722 *param_1)

{
  int *piVar1;

  piVar1 = (int *)(param_1->field_005C + 0xc);
  /* ST_CALLSITE[006D612F]: CALL dword ptr [ECX + 0x4] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(*piVar1 + 4))(piVar1);
  return;
}

