#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0074B719 -> 00747406 @ 0074B744 */

undefined4 __thiscall FUN_00747406(void *this,undefined4 param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  piVar1 = STField<int *>(this,0x44);
  if (piVar1 == nullptr) {
    uVar2 = 0x80004001;
  }
  else {
    /* ST_CALLSITE[0074741C]: CALL dword ptr [ECX + 0xc] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    uVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,param_1,param_2,param_3);
  }
  return uVar2;
}

