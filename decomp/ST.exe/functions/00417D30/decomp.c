#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall TLOBaseTy::sub_00417D30(TLOBaseTy *this)

{
  uint uVar1;
  int iVar2;

  if (this->field_002C == 0) {

    uVar1 = thunk_FUN_00495ff0(this->field_0047,this->field_0049,this->field_004B,this->field_008E,
                               (RecoveredRecordView_00495FF0_A2A90B23 *)this);
    return uVar1;
  }

  iVar2 = thunk_FUN_00495ff0(this->field_0047,this->field_0049,this->field_004B,this->field_008E,
                             (RecoveredRecordView_00495FF0_A2A90B23 *)this);
  if (iVar2 != 0) {
    return 0xffffffff;
  }

  iVar2 = thunk_FUN_00495ff0(this->field_0047 + 1,this->field_0049,this->field_004B,this->field_008E
                             ,(RecoveredRecordView_00495FF0_A2A90B23 *)this);
  if (iVar2 != 0) {
    return 0xffffffff;
  }

  iVar2 = thunk_FUN_00495ff0(this->field_0047,this->field_0049 + 1,this->field_004B,this->field_008E
                             ,(RecoveredRecordView_00495FF0_A2A90B23 *)this);
  if (iVar2 != 0) {
    return 0xffffffff;
  }

  uVar1 = thunk_FUN_00495ff0(this->field_0047 + 1,this->field_0049 + 1,this->field_004B,
                             this->field_008E,(RecoveredRecordView_00495FF0_A2A90B23 *)this);
  return uVar1;
}

