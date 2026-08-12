#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STVolcanoC.
   Evidence: this_call_owners=[STVolcanoC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STPrototypeApplier] Propagated return.
   Evidence: 00646D40 returns used as parameter 2 of STPlaySystemC::SaveObjData @ 006469B1 */

byte * __thiscall STVolcanoC::sub_00646D40(STVolcanoC *this,undefined4 *param_1)

{
  byte *pbVar1;
  byte *pbVar3;
  byte *pbVar4;

  pbVar1 = Library::DKW::LIB::MemAlloc(0x95);
  this->field_0028 = 2;
  this->field_00AD = this->field_00B1;
  if (this == nullptr) {
    pbVar3 = nullptr;
  }
  else {
    pbVar3 = &this->field_0x1c;
  }
  pbVar4 = pbVar1;
  memmove(pbVar4, pbVar3, 0x95); /* compiler REP MOVS byte copy */
  *param_1 = 0x95;
  return pbVar1;
}

