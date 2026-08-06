#include "../../pseudocode_runtime.h"


/* [STPrototypeRepairApplier] Propagated parameter 3.
   Evidence: 00556760 -> 006EA270 @ 00556B06 | 006377B0 -> 006EA270 @ 00637831 | 00637930 ->
   006EA270 @ 006379CD

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=57; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=47;
   incoming_ecx_receiver_callers=0; attributed_named_callers=35; owner_evidence_coverage=adequate */

void __thiscall
ST3DSMAPContext::sub_006EA270(ST3DSMAPContext *this,uint param_1,uint param_2,uint param_3)

{
  uint *puVar1;

  if ((param_1 < (uint)this->field_0310) &&
     (puVar1 = (uint *)(this->field_031C + param_1 * 0x114), (*puVar1 & 0x8000) != 0)) {
    if (puVar1[0x28] != 0) {
      if (param_2 < puVar1[0x25]) {
        FUN_006e9a10(puVar1,param_2,param_3);
        return;
      }
      FUN_006e91a0();
      return;
    }
  }
  else if (param_1 != 0xffffffff) {
    FUN_006e8c50();
  }
  return;
}

