#include "../../pseudocode_runtime.h"


void __fastcall FUN_007478d8(undefined4 *param_1)

{
  *param_1 = &VTable_007A1128;
  /* ST_CALLSITE[007478E7]: CALL dword ptr [ECX + 0x8] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(*(int *)(param_1[2] + 0xc) + 8))((int *)(param_1[2] + 0xc));
  return;
}

