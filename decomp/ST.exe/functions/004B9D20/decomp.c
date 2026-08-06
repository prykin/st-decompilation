#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0047FAD0 -> 004B9D20 @ 0047FCC0; STBoatC::BackDismant this; stable alias ESI */

undefined4 __thiscall FUN_004b9d20(void *this,STBoatC *param_1)

{
  if (((STField<int>(this,0x4b4) != 0) && (STField<int>(this,0x4b0) == param_1->field_0018))
     && (STField<int>(this,0x245) != 6)) {
    STField<undefined4>(this,0x4b4) = 0;
    return 1;
  }
  return 0;
}

