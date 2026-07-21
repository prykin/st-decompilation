#include "../../pseudocode_runtime.h"


void FUN_006b64b0(undefined4 *param_1)

{
  undefined4 local_2c [9];
  undefined4 local_8;

  memset(local_2c, 0, 0x28); /* compiler bulk-zero initialization */
  local_2c[0] = 0x28;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*(int *)*param_1 + 0x38))((int *)*param_1,local_2c,0);
  param_1[0xb] = local_8;
  FUN_006d2510(param_1 + 0x11);
  return;
}

