#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005FA070 -> 005FA030 @ 005FA08A; STColl3C::sub_005FA070 this; stable alias ESI */

void __fastcall FUN_005fa030(STColl3C *param_1)

{
  thunk_FUN_005f9f70((AnonShape_005F9F70_43CA4DAC *)param_1);
  thunk_FUN_005f9ff0((int)param_1);
  if (param_1->field_02E6 != nullptr) {
    FreeAndNull(&param_1->field_02E6);
  }
  return;
}

