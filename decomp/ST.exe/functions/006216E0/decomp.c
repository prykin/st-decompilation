#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as SndUnderAttMenegC.
   Evidence: this_call_owners=[SndUnderAttMenegC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

uint __thiscall SndUnderAttMenegC::sub_006216E0(SndUnderAttMenegC *this,undefined4 param_1)

{
  SndUnderAttMenegC_field_010ADArray *pSVar1;
  uint uVar2;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined1 local_8;

  local_14 = 0;
  local_8 = (undefined1)((uint)param_1 >> 0x18);
  local_10 = g_playSystem_00802A38->field_00E4 << 8;
  STPiece<0,1>(local_c) = (undefined1)(g_playSystem_00802A38->field_00E4 >> 0x18);
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  local_c = CONCAT31((int3)param_1,(undefined1)local_c);
  if (this->field_010A == nullptr) {
    pSVar1 = (SndUnderAttMenegC_field_010ADArray *)
             Library::DKW::TBL::DArrayCreate(nullptr,10,0xd,10);
    this->field_010A = pSVar1;
  }
  if (this->field_010A != nullptr) {
    uVar2 = Library::DKW::TBL::DArrayAppend((DArrayTy *)this->field_010A,&local_14);
    return uVar2;
  }
  return 0xffffffff;
}

