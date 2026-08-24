#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=8; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=10;
   incoming_ecx_receiver_callers=0; attributed_named_callers=6; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] diagnostic_residue_void.
   Evidence: every direct caller kills EAX before reading it and at least one callee return path
   consists of a machine-proven void diagnostic wrapper followed only by an epilogue; machine CFG
   audit: used=0, ignored=12, unknown=0 */

void __thiscall ST3DSMAPContext::sub_006E9D40(ST3DSMAPContext *this,uint *param_1,uint param_2)

{
  uint *puVar1;
  ushort *puVar2;

  if ((param_1 < (uint *)this->field_0310) &&
     (puVar1 = (uint *)(this->field_031C + (int)param_1 * 0x114), (*puVar1 & 0x8000) != 0)) {
    if (puVar1[0x28] != 0) {
      if (puVar1[0x25] <= param_2) {
        FUN_006e91a0("SprPlaneHide");
        return;
      }
      if (*(int *)(puVar1[0x28] + 4 + param_2 * 8) != 0) {
        puVar2 = (ushort *)(puVar1[0x29] + 2 + param_2 * 4);
        *puVar2 = *puVar2 & 0xbfff;
        return;
      }
    }
  }
  else if (param_1 != (uint *)0xffffffff) {
    FUN_006e8c50("SprPlaneHide");
  }
  return;
}

