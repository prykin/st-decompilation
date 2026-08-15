#include "../../pseudocode_runtime.h"


void FUN_00581060(void)

{
  undefined4 local_24 [4];
  undefined4 local_14;

  if (DAT_008117bc != nullptr) {
    memset(local_24, 0, 0x20); /* compiler bulk-zero initialization */
    local_14 = 0x5de2;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)*DAT_008117bc)(local_24);
  }
  return;
}

