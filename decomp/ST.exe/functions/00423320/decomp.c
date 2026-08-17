#include "../../pseudocode_runtime.h"


void __thiscall FUN_00423320(void *this,undefined4 param_1)

{
  undefined1 local_24 [16];
  undefined4 local_14;

  if (STField<undefined4 *>(this,0x1c) != nullptr) {
    local_14 = param_1;
    /* ST_CALLSITE[00423339]: CALL dword ptr [EDX] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)*STField<undefined4 *>(this,0x1c))(local_24);
  }
  return;
}

