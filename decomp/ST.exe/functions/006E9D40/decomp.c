#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=8; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=10;
   incoming_ecx_receiver_callers=0; attributed_named_callers=6; owner_evidence_coverage=adequate */

uint * __thiscall ST3DSMAPContext::sub_006E9D40(ST3DSMAPContext *this,uint *param_1,uint param_2)

{
  ushort *puVar1;
  uint uVar2;
  uint *puVar3;

  puVar3 = (uint *)this->field_0310;
  if ((param_1 < puVar3) &&
     (puVar3 = (uint *)(this->field_031C + (int)param_1 * 0x114), (*puVar3 & 0x8000) != 0)) {
    if (puVar3[0x28] != 0) {
      if (puVar3[0x25] <= param_2) {
        puVar3 = (uint *)FUN_006e91a0();
        return puVar3;
      }
      if (*(int *)(puVar3[0x28] + 4 + param_2 * 8) != 0) {
        uVar2 = puVar3[0x29];
        puVar1 = (ushort *)(uVar2 + 2 + param_2 * 4);
        *puVar1 = *puVar1 & 0xbfff;
        return (uint *)(uVar2 + 2 + param_2 * 4);
      }
    }
  }
  else if (param_1 != (uint *)0xffffffff) {
    puVar3 = (uint *)FUN_006e8c50();
  }
  return puVar3;
}

