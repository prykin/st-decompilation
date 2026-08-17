#include "../../pseudocode_runtime.h"


void __thiscall FUN_006e6060(void *this,undefined4 *param_1)

{
  *param_1 = STField<undefined4>(this,8);
  param_1[1] = 2;
  /* ST_CALLSITE[006E6078]: CALL dword ptr [EDX + 0x18] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(*STField<int *>(this,0xc) + 0x18))(param_1);
  return;
}

