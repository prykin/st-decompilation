#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STJumpMineC.
   Evidence: this_call_owners=[STJumpMineC]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall STJumpMineC::sub_00619350(STJumpMineC *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  byte *puVar3;
  byte *puVar4;

  puVar1 = Library::DKW::LIB::MemAlloc(0x104);
  this->field_014C = this->field_001C;
  puVar3 = (byte *)&this->field_0x4d;
  puVar4 = (byte *)(puVar1);
  memmove(puVar4, puVar3, 0x104); /* compiler REP MOVS byte copy */
  puVar1[3] = 2;
  *param_1 = 0x104;
  return;
}

