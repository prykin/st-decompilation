#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/cLoadingTy.cpp

// 00554A50 cLoadingTy::sub_00554A50
#line 4 "decomp/ST.exe/functions/00554A50/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as cLoadingTy.
   Evidence: this_call_owners=[cLoadingTy]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_00554A50(cLoadingTy *this)

{
  st::fn_006B5F80((int *)g_ddxContext_008075A8,0,0,g_nWidth_00806730,DAT_00806734);
  st::fn_006B4640(g_dDXContext_0080759C,0,0,this->field_0000,nullptr);
  st::fn_006B48A0((int *)g_dDXContext_0080759C,0,0,(BITMAPINFO *)this->field_0004,nullptr,0);
  st::fn_006BB370(g_dDXContext_0080759C,0,0);
  return;
}

// 00555570 cLoadingTy::sub_00555570
#line 4 "decomp/ST.exe/functions/00555570/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as cLoadingTy.
   Evidence: this_call_owners=[cLoadingTy]; agreed_this_calls=4; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return

   [STReturnSemanticsApplier] repair_unsafe_eax_rollback.
   Evidence: restore the earlier evidence-backed void type after an unsafe automated rollback;
   post-CALL EAX reads alone do not prove a source-level return value; machine CFG audit: used=0,
   ignored=3, unknown=1 */

void __thiscall st::fn_00555570(cLoadingTy *this)

{
  int iVar1;
  tagMSG local_20;

  if (this->field_0048 != 0) {
    iVar1 = st::external_00000085(&local_20,g_hWnd_00806748,0,0,1);
    while (iVar1 != 0) {
      st::external_00000083(&local_20);
      st::external_00000084(&local_20);
      iVar1 = st::external_00000085(&local_20,g_hWnd_00806748,0,0,1);
    }
  }
  return;
}

// 00555680 cLoadingTy::sub_00555680
#line 4 "decomp/ST.exe/functions/00555680/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as cLoadingTy.
   Evidence: this_call_owners=[cLoadingTy]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_00555680(cLoadingTy *this,char *param_1)

{
  if (((int *)this->field_004C != nullptr) && (param_1 != nullptr)) {
    st::fn_0072EB70(param_1,(int *)this->field_004C);
    st::fn_0072EB70(&CHAR_0Ah_007c8ff4,(int *)this->field_004C);
  }
  return;
}

