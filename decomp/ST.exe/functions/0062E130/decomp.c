#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STManRub3C.
   Evidence: this_call_owners=[STManRub3C]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall STManRub3C::sub_0062E130(STManRub3C *this)

{
  DArrayTy **ppDVar1;
  int iVar2;

  ppDVar1 = &this->field_0070;
  iVar2 = 8;
  do {
    if (*ppDVar1 != nullptr) {
      DArrayDestroy(*ppDVar1);
      *ppDVar1 = nullptr;
    }
    ppDVar1 = ppDVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

