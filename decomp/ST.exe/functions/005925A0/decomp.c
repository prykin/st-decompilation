#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as CampaignTy.
   Evidence: this_call_owners=[CampaignTy]; agreed_this_calls=1; incoming_this_accesses=7;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall CampaignTy::sub_005925A0(CampaignTy *this)

{
  uint *puVar1;
  int local_8;

  local_8 = 0xd;
  this->field_1FF8 = 1;
  puVar1 = this->field_0066;
  do {
    if (*puVar1 != 0) {
      this->field_0025 = *puVar1;
      this->field_0029 = 2;
      this->field_002D = 0x20;
      this->field_0031 = 1;
      /* ST_CALLSITE[005925E3]: CALL dword ptr [EAX + 0x18]; [STIndirectCallsiteApplier] exact slot 0x18; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4 */
      STStructuralVirtualCall<void>(STField<int *>(this,0xC), 0x18, &this->field_0x1d);
    }
    puVar1 = puVar1 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return;
}

