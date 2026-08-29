#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004CEB00 -> 004CBF70 @ 004CF048; TLOBaseTy::sub_004CEB00 this; stable alias EBX

   [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=5; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=3; owner_evidence_coverage=adequate;
   unique_primary_physical_vtable=true */

undefined4 __thiscall TLOBaseTy::sub_004CBF70(TLOBaseTy *this)

{
  if ((STT3DSprC *)this->field_05FF != nullptr) {
    /* ST_CALLSITE[004CBF7F]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
    STT3DSprC::StopShow((STT3DSprC *)this->field_05FF,0xe);
    /* ST_CALLSITE[004CBF8C]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
    STT3DSprC::StopShow((STT3DSprC *)this->field_05FF,0xc);
    /* ST_CALLSITE[004CBF97]: CALL 0x00403d0f; direct=00403D0F STT3DSprC::sub_004AD430 */
    STT3DSprC::sub_004AD430((STT3DSprC *)this->field_05FF);
  }
  return 0;
}

