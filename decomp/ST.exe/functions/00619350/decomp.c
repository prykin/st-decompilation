#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STJumpMineC.
   Evidence: this_call_owners=[STJumpMineC]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STPrototypeApplier] Propagated return.
   Evidence: 00619350 returns used as parameter 2 of STPlaySystemC::SaveObjData @ 00618EC9 */

byte * __thiscall STJumpMineC::sub_00619350(STJumpMineC *this,undefined4 *param_1)

{
  byte *pbVar1;
  byte *puVar3;
  byte *pbVar4;

  pbVar1 = Library::DKW::LIB::MemAlloc(0x104);
  this->field_014C = this->field_001C;
  puVar3 = (byte *)&this->field_0x4d;
  pbVar4 = pbVar1;
  memmove(pbVar4, puVar3, 0x104); /* compiler REP MOVS byte copy */
  pbVar1[0xc] = 2;
  pbVar1[0xd] = 0;
  pbVar1[0xe] = 0;
  pbVar1[0xf] = 0;
  *param_1 = 0x104;
  return pbVar1;
}

