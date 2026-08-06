#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] x87_double_parameter_slots target=function:-1: prototype=undefined4
   __thiscall FUN_0074c32d(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3,
   undefined4 param_4, double param_5) Evidence: x87 double-width accesses or exact split stores
   into an independently typed double field prove physical EBP slot boundaries; merged_slots={4=1};
   sites=0074C33A FLD double ptr [EBP + 0x18] */

undefined4 __thiscall
FUN_0074c32d(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            double param_5)

{
  undefined4 uVar1;

  if (STField<int *>(this,0x90) == nullptr) {
    uVar1 = 0;
  }
  else {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar1 = (**(code **)(*STField<int *>(this,0x90) + 0x58))
                      (param_1,param_2,param_3,param_4,param_5);
  }
  return uVar1;
}

