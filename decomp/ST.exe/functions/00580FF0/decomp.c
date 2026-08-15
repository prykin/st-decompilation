#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005804F0 -> 00580FF0 @ 0058053D; FUN_005804f0 parameter param_2 */

void FUN_00580ff0(ushort param_1,undefined2 param_2)

{
  undefined4 local_24 [4];
  undefined4 local_14;
  ushort local_c;
  undefined2 local_a;

  if (DAT_008117bc != nullptr) {
    memset(local_24, 0, 0x20); /* compiler bulk-zero initialization */
    local_a = param_2;
    local_c = param_1;
    local_14 = 0x5de1;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)*DAT_008117bc)(local_24);
  }
  return;
}

