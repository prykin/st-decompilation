#include "../../pseudocode_runtime.h"


void __thiscall FUN_006e6060(void *this,undefined4 *param_1)

{
  *param_1 = STField<undefined4>(this,8);
  param_1[1] = 2;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*STField<int *>(this,0xc) + 0x18))(param_1);
  return;
}

