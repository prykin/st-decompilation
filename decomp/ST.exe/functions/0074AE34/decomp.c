#include "../../pseudocode_runtime.h"


void __fastcall FUN_0074ae34(int *param_1)

{
  param_1[0x37] = 0;
  param_1[0x38] = 5000000;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(*param_1 + 0xb4))(param_1[0x4e],param_1[0x4f]);
  FUN_0074ae16((int)param_1);
  return;
}

