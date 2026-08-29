#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 004DD770 returns zeroed full register at 004DD7A7 @ 004DD7AB */

uint __thiscall FUN_004dd770(void *this,int param_1)

{
  if (STField<int>(this,0x4d4) == param_1) {
    STField<undefined4>(this,0x4d0) = 1;
    /* ST_CALLSITE[004DD791]: CALL 0x00402cf7; direct=00402CF7 TLOBaseTy::RotateSpr */
    TLOBaseTy::RotateSpr(this,0);
    /* ST_CALLSITE[004DD7A1]: CALL dword ptr [EDX + 0x90]; [STIndirectCallsiteApplier] exact slot 0x90; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void;/undefined4;/undefined4 */
    STStructuralVirtualCall<undefined4>(this, 0x90, 3, 0x415);
  }
  return 0;
}

