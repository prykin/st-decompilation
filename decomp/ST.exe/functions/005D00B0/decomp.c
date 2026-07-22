#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as SettMapMTy.
   Evidence: this_call_owners=[SettMapMTy]; agreed_this_calls=4; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=3; owner_evidence_coverage=adequate */

void __thiscall
SettMapMTy::sub_005D00B0(SettMapMTy *this,AnonShape_005D00B0_9E7CC102 *param_1,uint param_2)

{
  uint *puVar1;
  undefined4 local_64;
  undefined1 local_60;
  undefined1 local_1a;
  undefined4 local_19;
  undefined1 local_15;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puVar1 = param_1->field_0050;
  memset(&local_64, 0, 0x60); /* compiler bulk-zero initialization */
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  local_64._3_1_ = param_1->field_0003;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  local_64._2_1_ = param_1->field_0002;
  local_60 = 1;
  Library::DKW::TBL::FUN_006afe40(&local_14,puVar1);
  local_10 = param_1->field_0054;
  local_1a = param_1->field_004A;
  local_c = param_1->field_0058;
  local_8 = param_1->field_005C;
  local_19 = 0;
  local_15 = 0;
  Library::DKW::TBL::FUN_006b11d0(&this->field_1F84->flags,param_2,&local_64);
  return;
}

