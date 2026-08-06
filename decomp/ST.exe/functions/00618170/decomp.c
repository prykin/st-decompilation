#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as JumpManagC.
   Evidence: this_call_owners=[JumpManagC]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall JumpManagC::sub_00618170(JumpManagC *this,undefined4 *param_1)

{
  DArrayTy *pDVar1;
  int iVar2;
  byte *puVar3;
  int *piVar4;
  byte *puVar5;
  int local_8;

  puVar3 = (byte *)(param_1);
  puVar5 = (byte *)&this->field_0x1c;
  memmove(puVar5, puVar3, 0x52); /* compiler REP MOVS byte copy */
  piVar4 = (int *)((int)param_1 + 0x52);
  local_8 = 0x52;
  if (this->field_005E != nullptr) {
    pDVar1 = FUN_006b0060(nullptr,(uint *)((int)param_1 + 0x56));
    this->field_005E = pDVar1;
    local_8 = *piVar4;
    piVar4 = (int *)((int)param_1 + 0x56 + local_8);
    local_8 = local_8 + 0x52;
  }
  if (this->field_0062 != nullptr) {
    pDVar1 = FUN_006b0060(nullptr,(uint *)(piVar4 + 1));
    this->field_0062 = pDVar1;
    iVar2 = *piVar4;
    piVar4 = (int *)((int)(piVar4 + 1) + iVar2);
    local_8 = local_8 + iVar2;
  }
  if (this->field_0066 != nullptr) {
    pDVar1 = FUN_006b0060(nullptr,(uint *)(piVar4 + 1));
    this->field_0066 = pDVar1;
    return local_8 + *piVar4;
  }
  return local_8;
}

