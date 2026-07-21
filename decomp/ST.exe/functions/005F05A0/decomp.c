#include "../../pseudocode_runtime.h"


void __thiscall FUN_005f05a0(void *this,undefined2 param_1,undefined2 param_2)

{
  undefined4 local_24 [4];
  undefined4 local_14;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;

  if (DAT_008117bc != (undefined4 *)0x0) {
    memset(local_24, 0, 0x20); /* compiler bulk-zero initialization */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    local_e = (**(code **)(*(int *)this + 0x144))();
    local_c = param_1;
    local_a = param_2;
    local_14 = 0x5dda;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)*DAT_008117bc)(local_24);
  }
  return;
}

