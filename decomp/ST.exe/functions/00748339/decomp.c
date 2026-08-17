#include "../../pseudocode_runtime.h"


void __fastcall FUN_00748339(int *param_1)

{
  /* ST_CALLSITE[00748348]: CALL dword ptr [EAX + 0x38] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(*param_1 + 0x38))(param_1[0x27],param_1 + 0x26);
  return;
}

