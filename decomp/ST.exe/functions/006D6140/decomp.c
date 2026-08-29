#include "../../pseudocode_runtime.h"


void FUN_006d6140(RecoveredRecord_006D6140_106215B5 *param_1)

{
  int *piVar1;

  piVar1 = (int *)(param_1->field_005C + 0xc);
  /* ST_CALLSITE[006D614F]: CALL dword ptr [ECX + 0x8] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(*piVar1 + 8))(piVar1);
  return;
}

