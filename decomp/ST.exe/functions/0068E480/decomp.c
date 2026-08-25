#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as AiTactClassTy.
   Evidence: this_call_owners=[AiTactClassTy]; agreed_this_calls=4; incoming_this_accesses=1;
   incoming_edx_uses=2; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

uint __thiscall AiTactClassTy::sub_0068E480(AiTactClassTy *this,short param_1)

{
  AiTactClassTy_field_00A5DArray *pAVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  AiTactClassTy_field_00A5Element *element_00a5;
  uint uVar6;
  bool bVar7;

  pAVar1 = this->field_00A5;
  uVar4 = 0xffffffff;
  uVar2 = pAVar1->count;
  uVar6 = 0;
  if (0 < (int)uVar2) {
    bVar7 = uVar2 != 0;
    do {
      if (bVar7) {
        element_00a5 = DArrayAt<AiTactClassTy_field_00A5Element>(pAVar1, uVar6);
      }
      else {
        element_00a5 = nullptr;
      }
      iVar3 = element_00a5->field_0004;
      if (((iVar3 != 0) && (STField<short>(iVar3,0x7B) == param_1)) && (-1 < STField<short>(iVar3,0x7F))
         ) {
        uVar4 = uVar6;
      }
      uVar6 = uVar6 + 1;
      bVar7 = uVar6 < uVar2;
    } while ((int)uVar6 < (int)uVar2);
  }
  return uVar4;
}

