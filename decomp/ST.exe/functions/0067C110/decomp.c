#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as AiPlrClassTy.
   Evidence: this_call_owners=[AiPlrClassTy]; agreed_this_calls=2; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall AiPlrClassTy::sub_0067C110(AiPlrClassTy *this)

{
  int iVar1;
  RecoveredRecordView_0068FD00_630BE91E **ppRVar2;
  RecoveredRecordView_0068FD00_630BE91E *local_38;
  uint local_34;
  byte local_30;
  ppRVar2 = &local_38;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *ppRVar2 = nullptr;
    ppRVar2 = ppRVar2 + 1;
  }
  local_34 = this->field_06FE;
  this->field_0689 = 0;
  local_38 = (RecoveredRecordView_0068FD00_630BE91E *)0x67;
  local_30 = 1;
  /* ST_CALLSITE[0067C14B]: CALL 0x00405dc6; direct=00405DC6 AiPlrClassTy::sub_0067A020 */
  sub_0067A020(this,(RecoveredRecordView_0068FD00_630BE91E *)&local_38,-1);
  return;
}

