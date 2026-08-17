#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=11;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall TLOBaseTy::sub_004CC900(TLOBaseTy *this)

{
  uint uVar1;

  if (((this->field_0603 != nullptr) && (this->field_0444 != 0)) && (this->field_0448 != 0)
     ) {
    this->field_0448 = 0;
    /* ST_CALLSITE[004CC92D]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
    STT3DSprC::StopShow(this->field_0603,0xe);
    thunk_FUN_004ad430(this->field_0603);
    uVar1 = thunk_FUN_004ad650(this->field_0603);
    Library::Ourlib::ST3DSMAP::SprRstLev((void *)this->field_0211,uVar1);
    /* ST_CALLSITE[004CC95C]: CALL 0x0040498a; direct=0040498A STT3DSprC::UnLoadSequence */
    STT3DSprC::UnLoadSequence(this->field_0603,0xe);
    this->field_044C = -1;
    uVar1 = g_playSystem_00802A38->field_00E4;
    this->field_043C = 0;
    this->field_0450 = uVar1;
  }
  return 0;
}

