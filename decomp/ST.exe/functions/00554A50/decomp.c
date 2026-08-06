#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as cLoadingTy.
   Evidence: this_call_owners=[cLoadingTy]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall cLoadingTy::sub_00554A50(cLoadingTy *this)

{
  FUN_006b5f80((int *)g_ddxContext_008075A8,0,0,g_nWidth_00806730,DAT_00806734);
  FUN_006b4640(g_dDXContext_0080759C,0,0,this->field_0000,nullptr);
  FUN_006b48a0((int *)g_dDXContext_0080759C,0,0,(BITMAPINFO *)this->field_0004,nullptr,0);
  Library::DKW::DDX::FUN_006bb370(g_dDXContext_0080759C,0,0);
  return;
}

