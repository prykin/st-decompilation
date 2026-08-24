#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as TradePanelTy.
   Evidence: this_call_owners=[TradePanelTy]; agreed_this_calls=12; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=7; owner_evidence_coverage=adequate */

undefined4 __thiscall TradePanelTy::sub_00552160(TradePanelTy *this,char param_1,char param_2)

{
  uint uVar1;
  uVar1 = 0;
  if ((this->field_0184 != param_1) &&
     /* ST_CALLSITE[00552178]: CALL 0x00401e4c; direct=00401E4C SpecPanelTy::SetPanel */
     (uVar1 = SpecPanelTy::SetPanel((SpecPanelTy *)this,param_1), param_1 != '\0')) {
    /* ST_CALLSITE[00552189]: CALL 0x00403d4b; direct=00403D4B TradePanelTy::SetModeControls */
    SetModeControls(this,param_2);
    /* ST_CALLSITE[00552190]: CALL 0x0040391d; direct=0040391D TradePanelTy::PaintPanel */
    PaintPanel(this);
  }
  return uVar1;
}

