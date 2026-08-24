#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=2; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=5;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

byte __thiscall
ST3DSMAPContext::sub_006EA5E0(ST3DSMAPContext *this,uint param_1,int param_2,int param_3)

{
  uint *puVar1;
  ushort *puVar2;
  ushort uVar3;
  byte bVar4;

  if (((uint)this->field_0310 <= param_1) ||
     (puVar1 = (uint *)(this->field_031C + param_1 * 0x114), (*puVar1 & 0x8000) == 0)) {
    if (param_1 != 0xffffffff) {
      FUN_006e8c50("SprSetPlaneStretch");
    }
    return 0;
  }
  if ((int)puVar1[0x25] <= param_2) {
    FUN_006e91a0("SprSetPlaneStretch");
    return 0;
  }
  puVar2 = (ushort *)(puVar1[0x29] + 2 + param_2 * 4);
  uVar3 = *puVar2;
  bVar4 = (byte)~(byte)uVar3 >> 1 & 1;
  if (param_3 != 0) {
    *puVar2 = uVar3 & 0xfffd;
    return bVar4;
  }
  *puVar2 = uVar3 | 2;
  return bVar4;
}

