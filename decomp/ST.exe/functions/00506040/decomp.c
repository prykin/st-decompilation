#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as CPanelTy.
   Evidence: this_call_owners=[CPanelTy]; agreed_this_calls=3; incoming_this_accesses=23;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=3; owner_evidence_coverage=adequate */

void __thiscall CPanelTy::sub_00506040(CPanelTy *this)

{
  BITMAPINFO *pBVar1;

  memset(&this->field_0x54c, 0, 0x118); /* compiler bulk-zero initialization */
  if (this->field_0BFA == CASE_1) {
    if (DAT_0080874e == '\x03') {
      this->field_0568 = this->field_0050 + 0x81;
      this->field_056C = this->field_00A8 + 8;
      this->field_0570 = 100;
      this->field_0574 = 0x3c;
      /* ST_CALLSITE[005060A7]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/wingdi.h/tagBITMAPINFO; source view only; no Ghidra override */
      pBVar1 = FUN_0070b3a0((RecoveredGlobalRecordView_0081175C *)this->field_077C,1);
      this->field_0578 = pBVar1;
      this->field_057C = this->field_0570;
      this->field_0580 = 0x4e87;
      this->field_0584 = this->field_0050 + 199;
      this->field_0588 = this->field_00A8 + 6;
      this->field_058C = 0x20;
      this->field_0590 = 0x35;
      /* ST_CALLSITE[00506103]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/wingdi.h/tagBITMAPINFO; source view only; no Ghidra override */
      pBVar1 = FUN_0070b3a0((RecoveredGlobalRecordView_0081175C *)this->field_077C,3);
      this->field_0594 = pBVar1;
      this->field_0598 = this->field_058C;
      this->field_059C = 0x2ef0;
      return;
    }
    this->field_0568 = this->field_0054;
    this->field_056C = this->field_00AC;
    this->field_0570 = this->field_0080;
    this->field_0574 = this->field_00D8;
    this->field_0580 = 0x4e87;
  }
  return;
}

