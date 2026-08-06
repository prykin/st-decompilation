#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 004DD770 returns zeroed full register at 004DD7A7 @ 004DD7AB */

uint __thiscall FUN_004dd770(void *this,int param_1)

{
  if (STField<int>(this,0x4d4) == param_1) {
    STField<undefined4>(this,0x4d0) = 1;
    TLOBaseTy::RotateSpr(this,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)this + 0x90))(3,0x415);
  }
  return 0;
}

