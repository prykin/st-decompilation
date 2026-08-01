#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STManRuinC.
   Evidence: this_call_owners=[STManRuinC]; agreed_this_calls=1; incoming_this_accesses=10;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

uint __thiscall STManRuinC::sub_00631390(STManRuinC *this,undefined4 *param_1)

{
  STManRuinC_field_0038DArray *pSVar1;
  byte *pbVar2;
  uint uVar5;
  byte *puVar6;
  byte *pbVar7;
  byte *puVar8;

  if (this == (STManRuinC *)0x0) {
    puVar8 = (byte *)0x0;
  }
  else {
    puVar8 = (byte *)(&this->field_001C);
  }
  puVar6 = (byte *)(param_1);
  memmove(puVar8, puVar6, 0x55); /* compiler REP MOVS byte copy */
  pbVar7 = (byte *)((int)param_1 + 0x55);
  this->field_003C = (STManRuinC_field_003CDArray *)0x0;
  this->field_0061 = 0xffffffff;
  if (this->field_0038 != (STManRuinC_field_0038DArray *)0x0) {
    pSVar1 = (STManRuinC_field_0038DArray *)FUN_006b0060((uint *)0x0,(uint *)((int)param_1 + 0x59));
    this->field_0038 = pSVar1;
    pbVar7 = (byte *)((int)param_1 + 0x59 + *(int *)pbVar7);
  }
  if (this->field_0034 != (byte *)0x0) {
    pbVar2 = Library::DKW::LIB::MemAlloc(this->field_0030);
    this->field_0034 = pbVar2;
  }
  if (this->field_0034 != (byte *)0x0) {
    uVar5 = this->field_0030;
    pbVar2 = this->field_0034;
    memmove(pbVar2, pbVar7, uVar5); /* compiler REP MOVS byte copy */
  }
  return this->field_0030;
}

