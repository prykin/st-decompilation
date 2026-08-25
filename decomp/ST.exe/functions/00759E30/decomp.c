#include "../../pseudocode_runtime.h"


void FUN_00759e30(undefined4 *param_1)

{
  int iVar1;

  /* ST_CALLSITE[00759E40]: CALL dword ptr [ECX] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar1 = (**(code **)*param_1)(param_1,0,0x84);
  STField<undefined4>(iVar1,0x80) = 0;
  return;
}

