#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=2; incoming_this_accesses=7;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=2;
   incoming_ecx_receiver_callers=2; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall
ST3DSMAPContext::sub_006E8EA0(ST3DSMAPContext *this,AnonShape_006E8EA0_96B71903 *param_1)

{
  int iVar1;
  int iVar2;
  int local_50 [4];
  int local_40;
  int local_3c;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_30 = this->field_0030;
  local_2c = this->field_0034;
  local_28 = this->field_0038 - local_30;
  local_24 = this->field_003C - local_2c;
  iVar1 = param_1->field_0020;
  local_18 = -1;
  local_14 = -1;
  if (iVar1 != 0) {
    local_18 = *(int *)(iVar1 + 4);
    local_14 = *(int *)(iVar1 + 8);
  }
  iVar1 = param_1->field_0024;
  if (iVar1 != 0) {
    if (local_18 < *(int *)(iVar1 + 4)) {
      local_18 = *(int *)(iVar1 + 4);
    }
    if (local_14 < *(int *)(iVar1 + 8)) {
      local_14 = *(int *)(iVar1 + 8);
    }
  }
  local_10 = (float)param_1->field_0008;
  local_c = param_1->field_000C;
  local_8 = param_1->field_0010;
  sub_006E25D0(this,&local_40,&local_10,0.0,0.0,0.0,0);
  iVar1 = this->field_02F0;
  if ((iVar1 == 100) && (this->field_02F4 == 100)) {
    local_20 = -(int)param_1->field_001C;
    local_1c = -(int)param_1->field_001E;
  }
  else {
    iVar2 = (int)((ulonglong)((longlong)(param_1->field_001C * iVar1) * -0x51eb851f) >> 0x20);
    local_20 = (iVar2 >> 5) - (iVar2 >> 0x1f);
    iVar2 = (int)((ulonglong)((longlong)((int)param_1->field_001E * this->field_02F4) * -0x51eb851f)
                 >> 0x20);
    local_1c = (iVar2 >> 5) - (iVar2 >> 0x1f);
    local_18 = (iVar1 * local_18) / 100;
    local_14 = (this->field_02F4 * local_14) / 100;
  }
  local_1c = (local_3c >> 0x10) + local_1c;
  local_20 = (local_40 >> 0x10) + local_20;
  FUN_006b0460(local_50,&local_20,&local_30);
  return;
}

