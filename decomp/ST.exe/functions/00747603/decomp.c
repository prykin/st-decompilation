#include "../../pseudocode_runtime.h"


void __fastcall FUN_00747603(undefined4 *param_1)

{
  *param_1 = &VTable_007A1108;
  /* ST_CALLSITE[00747615]: CALL dword ptr [ECX + 0x8] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(*(int *)(param_1[3] + 0xc) + 8))((int *)(param_1[3] + 0xc));
  FUN_0074de7f(param_1 + 6);
  return;
}

