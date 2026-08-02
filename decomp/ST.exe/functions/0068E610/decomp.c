#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as AiTactClassTy.
   Evidence: this_call_owners=[AiTactClassTy]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall AiTactClassTy::sub_0068E610(AiTactClassTy *this,int param_1)

{
  AiTactClassTy_field_00A5Element *element_00a5;
  uint uVar2;
  AiTactClassTy_field_00A5DArray *pAVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;

  iVar4 = 0;
  uVar5 = 0;
  pAVar3 = this->field_00A5;
  if (0 < (int)pAVar3->count) {
    bVar6 = pAVar3->count != 0;
    do {
      if (bVar6) {
        element_00a5 = DArrayAt<AiTactClassTy_field_00A5Element>(pAVar3, uVar5);
      }
      else {
        element_00a5 = nullptr;
      }
      if ((AnonReceiver_0065DA50 *)element_00a5->field_0004 != nullptr) {
        uVar2 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0065DA50::thunk_FUN_0065da50
                          ((AnonReceiver_0065DA50 *)element_00a5->field_0004,param_1,-1);
        iVar4 = iVar4 + uVar2;
      }
      pAVar3 = this->field_00A5;
      uVar5 = uVar5 + 1;
      bVar6 = uVar5 < pAVar3->count;
    } while ((int)uVar5 < (int)pAVar3->count);
  }
  return iVar4;
}

