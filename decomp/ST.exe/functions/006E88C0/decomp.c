#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 9.
   Evidence: 0061DFE0 -> 006E88C0 @ 0061E082; unproven partial register write at 0061E054 | 0061E7F0
   -> 006E88C0 @ 0061EDAF; literal 172 at 0061ED7C

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=2; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=12; direct_non_thunk_callers=2;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

int __thiscall
ST3DSMAPContext::sub_006E88C0
          (ST3DSMAPContext *this,int *param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,
          undefined4 param_8,byte param_9,undefined4 param_10,undefined4 param_11,
          undefined4 param_12)

{
  int iVar1;
  byte *pbVar2;
  int iVar2_mg0;
  uint *puVar3;
  iVar2_mg0 = sub_006E8660(this,param_1,0,0,0,0,0,0,0);
  if (iVar2_mg0 == 0) {
    iVar1 = *param_1;
    pbVar2 = this->field_031C;
    puVar3 = Library::DKW::LIB::MemAlloc(0x49);
    *(undefined4 **)(pbVar2 + iVar1 * 0x114 + 0xa0) = puVar3;
    if (puVar3 == nullptr) {
      return -2;
    }
    *puVar3 = param_2;
    *(undefined4 *)(*(int *)(pbVar2 + iVar1 * 0x114 + 0xa0) + 4) = param_3;
    *(undefined4 *)(*(int *)(pbVar2 + iVar1 * 0x114 + 0xa0) + 8) = param_4;
    *(undefined4 *)(*(int *)(pbVar2 + iVar1 * 0x114 + 0xa0) + 0xc) = param_5;
    *(undefined4 *)(*(int *)(pbVar2 + iVar1 * 0x114 + 0xa0) + 0x10) = param_6;
    *(undefined4 *)(*(int *)(pbVar2 + iVar1 * 0x114 + 0xa0) + 0x14) = param_7;
    *(undefined4 *)(*(int *)(pbVar2 + iVar1 * 0x114 + 0xa0) + 0x18) = param_8;
    *(byte *)(*(int *)(pbVar2 + iVar1 * 0x114 + 0xa0) + 0x1c) = param_9;
    *(undefined4 *)(*(int *)(pbVar2 + iVar1 * 0x114 + 0xa0) + 0x1d) = param_10;
    *(undefined4 *)(*(int *)(pbVar2 + iVar1 * 0x114 + 0xa0) + 0x21) = param_11;
    *(undefined4 *)(*(int *)(pbVar2 + iVar1 * 0x114 + 0xa0) + 0x25) = param_12;
    *(uint *)(pbVar2 + iVar1 * 0x114 + 4) = *(uint *)(pbVar2 + iVar1 * 0x114 + 4) | 0x4005;
    iVar2_mg0 = 0;
  }
  return iVar2_mg0;
}

