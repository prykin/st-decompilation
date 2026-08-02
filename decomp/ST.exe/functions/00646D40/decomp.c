#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STVolcanoC.
   Evidence: this_call_owners=[STVolcanoC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall STVolcanoC::sub_00646D40(STVolcanoC *this,undefined4 *param_1)

{
  byte *puVar1;
  byte *puVar3;

  puVar1 = (byte *)(Library::DKW::LIB::MemAlloc(0x95));
  this->field_0028 = 2;
  this->field_00AD = this->field_00B1;
  if (this == nullptr) {
    puVar3 = nullptr;
  }
  else {
    puVar3 = (byte *)&this->field_0x1c;
  }
  memmove(puVar1, puVar3, 0x95); /* compiler REP MOVS byte copy */
  *param_1 = 0x95;
  return;
}

