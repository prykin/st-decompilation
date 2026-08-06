#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as CPanelTy.
   Evidence: this_call_owners=[CPanelTy]; agreed_this_calls=2; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall CPanelTy::sub_004FAD20(CPanelTy *this)

{
  undefined1 *puVar1;
  int iVar2;

  iVar2 = 6;
  puVar1 = &this->field_0BA8;
  do {
    puVar1[0x5c] = 0xff;
    *puVar1 = 0xff;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  sub_004FA870(this,CASE_2);
  sub_004FA870(this,CASE_4);
  return;
}

