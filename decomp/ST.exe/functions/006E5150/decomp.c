#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0056FA60 -> 006E5150 @ 0056FAAB

   [STMethodOwnerApplier] Structural method owner recovered as STAppC.
   Evidence: this_call_owners=[STAppC]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=1;
   incoming_ecx_receiver_callers=1; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STDiscriminatedPayloadApplier] Case-local payload view: param_1->id == 4 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STAppC_sub_006E5150_006E5150_MessagePayload_Case_4.
   The carrier ABI remains pointer:/SubmarineTitans/Recovered/STMessage.

   [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079E16C
   Entries: 006E5150
   Slots: 0x18
   Anchor:
   Evidence: slot_family_has_no_named_method; physical_slot_call_family=0079E16C:6 calls=3
   caller_families=2 receiver_extent=40/20222; unique_owner_for_target

   [STDiscriminatedPayloadApplier] Case-local payload view: param_1->id == 4 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/AppClassTy_sub_006E5150_006E5150_MessagePayload_Case_4.
   The carrier ABI remains pointer:/SubmarineTitans/Recovered/STMessage. */

undefined4 __thiscall AppClassTy::sub_006E5150(AppClassTy *this,STMessage *param_1)

{
  if (param_1->id == 4) {
    DAT_00856d74 = (param_1->arg0).u32;
    if ((DAT_00856d74 != 0) && (this->field_0024 != 0)) {
      FUN_006e4290(0xf,5,0xf,0);
      return 0;
    }
    FUN_006e4340(this,(int *)0xf,5,0xf,0);
  }
  else if (param_1->id == 0xf) {
    this->field_001C = 1;
    return 0;
  }
  return 0;
}

