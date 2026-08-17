#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as
   SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00636260.
   Evidence: this_call_owners=[SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00636260];
   agreed_this_calls=1; incoming_this_accesses=3; incoming_edx_uses=0;
   incoming_stack_parameter_uses=0; direct_non_thunk_callers=0; incoming_ecx_receiver_callers=0;
   attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall
SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00636260::sub_00636FC0
          (AnonReceiver_00636260 *this)

{
  int iVar1;
  short sVar2;
  VisibleClassTy *pVVar3;
  int iVar4;
  int iVar5;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  iVar4 = *(int *)&this->field_0xc;
  iVar4 = STBiasedDiv16(iVar4, 0xc9); /* exact signed 16-bit grid-index division */
  iVar5 = *(int *)&this->field_0x10;
  iVar5 = STBiasedDiv16(iVar5, 0xc9); /* exact signed 16-bit grid-index division */
  iVar1 = *(int *)&this->field_0x14;
  local_c = STBiasedDiv16(iVar1, 200); /* exact signed 16-bit grid-index division */
  if ((((g_sT3DSMAPContext_00807598->field_0048 <= iVar4) &&
       (iVar4 <= g_sT3DSMAPContext_00807598->field_0058)) &&
      (g_sT3DSMAPContext_00807598->field_0044 <= iVar5)) &&
     (iVar5 <= g_sT3DSMAPContext_00807598->field_0054)) {
    local_8 = FUN_006ddbd0();
    pVVar3 = g_visibleClass_00802A88;
    if (local_8 == 0) {
      return 0;
    }
    if (g_visibleClass_00802A88 == nullptr) {
      return local_8;
    }
    if (DAT_0080874d == -1) {
      return local_8;
    }
    if (g_visibleClass_00802A88->field_00F8 == 0) {
      return local_8;
    }
    /* ST_CALLSITE[006370C0]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
    VisibleClassTy::sub_00558C00
              (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar4,iVar5,&local_10,
               &local_14);
    if (local_c < 0) {
      return local_8;
    }
    if (4 < local_c) {
      return local_8;
    }
    if (local_10 < 0) {
      return local_8;
    }
    if ((int)pVVar3->field_0030 <= local_10) {
      return local_8;
    }
    local_14 = g_centeredOffsets5[local_c] + local_14;
    if (local_14 < 0) {
      return local_8;
    }
    if (pVVar3->field_0034 <= local_14) {
      return local_8;
    }
    if (pVVar3->field_004C == nullptr) {
      return local_8;
    }
    if (pVVar3->field_004C[local_10 + local_14 * pVVar3->field_0030] != 0) {
      return local_8;
    }
  }
  return 0;
}

