#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STMineSetC.
   Evidence: this_call_owners=[STMineSetC]; agreed_this_calls=1; incoming_this_accesses=11;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall STMineSetC::sub_0041D2B0(STMineSetC *this)

{
  int iVar1;

  if (g_visibleClass_00802A88 != nullptr) {
    /* ST_CALLSITE[0041D2DB]: CALL 0x00404291; direct=00404291 VisibleClassTy::sub_00559D60 */
    VisibleClassTy::sub_00559D60
              (g_visibleClass_00802A88,(int)this->field_005B,(int)this->field_005D,
               (char)this->field_005F,this->field_0024,this->field_010D,this->field_0018);
  }
  /* ST_CALLSITE[0041D2E4]: CALL dword ptr [EAX + 0x8] */
  iVar1 = this->vfunc_08();
  if ((iVar1 == 1) && (this->field_0024 == (uint)DAT_0080874d)) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected STPackTagged24(2, this->field_0018) == (((uint32_t)(this->field_0018) & 0x00ffffffu) | ((uint32_t)(2) << 24)) */
    ST3DSMAPContext::sub_006E6780
              (g_sT3DSMAPContext_00807598,
               CONCAT22(CONCAT11(2,(char)(this->field_0018 >> 0x10)),(short)this->field_0018));
  }
  this->field_010D = -1;
  return;
}

