#include "../../pseudocode_runtime.h"


void FUN_00580f50(void)

{
  undefined4 local_24 [4];
  undefined4 local_14;

  if (DAT_008117bc != (undefined4 *)0x0) {
    memset(local_24, 0, 0x20); /* compiler bulk-zero initialization */
    local_14 = 0x5ddf;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)*DAT_008117bc)(local_24);
  }
  return;
}

