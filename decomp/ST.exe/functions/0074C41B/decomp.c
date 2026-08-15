#include "../../pseudocode_runtime.h"


void __fastcall FUN_0074c41b(int param_1)

{
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(**(int **)(param_1 + 0xd8) + 0x4c))(0);
  FUN_00747f91();
  return;
}

