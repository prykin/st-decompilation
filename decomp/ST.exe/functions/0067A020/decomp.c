#include "../../pseudocode_runtime.h"


/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_006799B0.
   Evidence: incoming_receiver_captures=1; receiver_accesses=2; incoming_edx_uses=0; calls=9;
   ecx_pointer_setup=9; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[8];
   expected_stack=8; receiver_family_members=3; adopt_untyped_existing_thiscall

   [STMethodOwnerApplier] Structural method owner recovered as AiPlrClassTy.
   Evidence: this_call_owners=[AiPlrClassTy]; agreed_this_calls=2; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall
AiPlrClassTy::sub_0067A020(AiPlrClassTy *this,AnonShape_0068FD00_A5257008 *param_1,int param_2)

{
  AiTactClassTy *this_00;
  uint uVar1;
  uint *puVar2;
  DArrayTy *pDVar3;
  uint uVar4;

  pDVar3 = this->field_0695;
  if (pDVar3 != nullptr) {
    uVar1 = pDVar3->count;
    uVar4 = 0;
    if (0 < (int)uVar1) {
      do {
        if (((pDVar3 != nullptr) && (-1 < (int)uVar4)) && ((int)uVar4 < (int)uVar1)) {
          if (uVar4 < uVar1) {
            puVar2 = DArrayAt<undefined4>(pDVar3, uVar4);
          }
          else {
            puVar2 = nullptr;
          }
          if (((puVar2[1] != 0) &&
              (this_00 = (AiTactClassTy *)*puVar2, this_00 != nullptr)) &&
             (param_1 != nullptr)) {
            if (param_2 < 0) {
              /* ST_CALLSITE[0067A076]: CALL 0x004010e1; direct=004010E1 AiTactClassTy::GetAiMess */
              AiTactClassTy::GetAiMess(this_00,param_1);
            }
            else {
              thunk_FUN_0068fc70(this_00,param_1,(short)param_2);
            }
          }
        }
        uVar4 = uVar4 + 1;
        pDVar3 = this->field_0695;
        uVar1 = pDVar3->count;
      } while ((int)uVar4 < (int)uVar1);
    }
  }
  return;
}

