#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=3;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall
ST3DSMAPContext::sub_006EA6D0(ST3DSMAPContext *this,uint param_1,int param_2,int param_3)

{
  uint *puVar1;
  byte *pbVar2;
  ushort *puVar3;
  ushort uVar4;
  uint uVar5;

  if ((param_1 < (uint)this->field_0310) &&
     (puVar1 = (uint *)(this->field_031C + param_1 * 0x114), (*puVar1 & 0x8000) != 0)) {
    if ((int)puVar1[0x25] <= param_2) {
      FUN_006e91a0("SprSetPlaneShadow");
      return;
    }
    if (param_3 == 0) {
      puVar3 = (ushort *)(puVar1[0x29] + 2 + param_2 * 4);
      uVar4 = *puVar3;
      if ((uVar4 & 4) != 0) {
        *puVar3 = uVar4 & 0xfffb;
        uVar5 = puVar1[0x24];
        puVar1[0x24] = uVar5 - 1;
        if ((int)(uVar5 - 1) < 0) {
          puVar1[0x24] = 0;
          return;
        }
      }
    }
    else {
      pbVar2 = (byte *)(puVar1[0x29] + 2 + param_2 * 4);
      if ((*pbVar2 & 4) == 0) {
        puVar1[0x24] = puVar1[0x24] + 1;
        *pbVar2 = *pbVar2 | 4;
        return;
      }
    }
  }
  else if (param_1 != 0xffffffff) {
    FUN_006e8c50("SprSetPlaneShadow");
  }
  return;
}

