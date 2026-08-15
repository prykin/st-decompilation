#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=005F05C8 MOV CX,word ptr
   [EBP + 0x8] */

void __thiscall FUN_005f05a0(void *this,ushort param_1,undefined2 param_2)

{
  undefined4 local_24 [4];
  undefined4 local_14;
  undefined2 local_e;
  ushort local_c;
  undefined2 local_a;

  if (DAT_008117bc != nullptr) {
    memset(local_24, 0, 0x20); /* compiler bulk-zero initialization */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    local_e = (**(code **)(*(int *)this + 0x144))();
    local_c = param_1;
    local_a = param_2;
    local_14 = 0x5dda;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)*DAT_008117bc)(local_24);
  }
  return;
}

