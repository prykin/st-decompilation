#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as AiFltClassTy.
   Evidence: this_call_owners=[AiFltClassTy]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __fastcall
AiFltClassTy::sub_0065D720(RecoveredRecordView_0065D720_071C1E69 *param_1,undefined4 param_2)

{
  STGroupBoatC *pSVar1;

  if ((param_1->field_007D != 0xfffe) && (g_allPlayers_007FA174 != nullptr)) {
    /* ST_CALLSITE[0065D73C]: CALL 0x00405cf9; direct=00405CF9 thunk_FUN_0042b760; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423380_AA1491AE; source view only; no Ghidra override */
    pSVar1 = thunk_FUN_0042b760(param_1->field_0024,param_1->field_007D);
    if (pSVar1 != nullptr) {
      thunk_FUN_00423380((RecoveredRecord_00423380_AA1491AE *)pSVar1);
      return;
    }
  }
  return;
}

