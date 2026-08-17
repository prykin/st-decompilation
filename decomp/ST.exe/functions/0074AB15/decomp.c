#include "../../pseudocode_runtime.h"


void __thiscall FUN_0074ab15(void *this,undefined4 param_1)

{
  int iVar1;

  /* ST_CALLSITE[0074AB24]: CALL dword ptr [EAX + 0x94] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar1 = (**(code **)(*STField<int *>(this,0xd8) + 0x94))(param_1);
  if (-1 < iVar1) {
    FUN_00747f52();
  }
  return;
}

