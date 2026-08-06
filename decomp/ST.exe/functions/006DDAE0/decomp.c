#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=1; incoming_this_accesses=7;
   incoming_edx_uses=0; incoming_stack_parameter_uses=4; direct_non_thunk_callers=1;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 0056DB80 -> 006DDAE0 @ 0056E440; data at 008032C8 */

void __thiscall
ST3DSMAPContext::sub_006DDAE0
          (ST3DSMAPContext *this,int param_1,int param_2,int param_3,ushort *param_4)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;

  this->field_014C = param_2;
  this->field_0148 = param_1;
  uVar3 = param_1 + param_2 + param_3;
  this->field_0150 = param_3;
  pbVar1 = Library::DKW::LIB::MemRealloc(this->field_0154,(uVar3 + 1) * 0x100);
  this->field_0154 = pbVar1;
  iVar2 = 0;
  do {
    this->field_0154[iVar2] = (byte)iVar2;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x100);
  pbVar1 = this->field_0154 + 0x100;
  for (iVar2 = (uVar3 & 0xffffff) << 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pbVar1 = *(undefined4 *)param_4;
    param_4 = param_4 + 2;
    pbVar1 = pbVar1 + 4;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pbVar1 = (byte)*param_4;
    param_4 = (ushort *)((int)param_4 + 1);
    pbVar1 = pbVar1 + 1;
  }
  sub_006DD870(this);
  sub_006DDB70(this);
  return;
}

