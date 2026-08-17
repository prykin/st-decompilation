#include "../../pseudocode_runtime.h"


void __fastcall FUN_0074aaf7(int param_1)

{
  int iVar1;

  /* ST_CALLSITE[0074AB02]: CALL dword ptr [EAX + 0x8c] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar1 = (**(code **)(**(int **)(param_1 + 0xd8) + 0x8c))();
  if (-1 < iVar1) {
    FUN_00747f91();
  }
  return;
}

