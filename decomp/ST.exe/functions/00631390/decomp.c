#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STManRuinC.
   Evidence: this_call_owners=[STManRuinC]; agreed_this_calls=1; incoming_this_accesses=10;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

uint __thiscall STManRuinC::sub_00631390(STManRuinC *this,undefined4 *param_1)

{
  DArrayTy *pSVar1;
  byte *pbVar1;
  uint uVar4;
  byte *puVar5;
  byte *pbVar6;
  byte *puVar7;

  if (this == nullptr) {
    puVar7 = nullptr;
  }
  else {
    puVar7 = (byte *)(&this->field_001C);
  }
  puVar5 = (byte *)(param_1);
  memmove(puVar7, puVar5, 0x55); /* compiler REP MOVS byte copy */
  pbVar6 = (byte *)((int)param_1 + 0x55);
  this->field_003C = nullptr;
  this->field_0061 = 0xffffffff;
  if (this->field_0038 != nullptr) {
    /* ST_CALLSITE[006313D0]: CALL 0x006b0060; direct=006B0060 FUN_006b0060; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArraySpecializations/STManRuinC_field_0038DArray; source view only; no Ghidra override */
    pSVar1 = FUN_006b0060(nullptr,(uint *)((int)param_1 + 0x59));
    this->field_0038 = (STManRuinC_field_0038DArray *)pSVar1;
    pbVar6 = (byte *)((int)param_1 + 0x59 + *(int *)pbVar6);
  }
  if (this->field_0034 != nullptr) {

    pbVar1 = Library::DKW::LIB::MemAlloc(this->field_0030);
    this->field_0034 = pbVar1;
  }
  if (this->field_0034 != nullptr) {
    uVar4 = this->field_0030;
    pbVar1 = this->field_0034;
    memmove(pbVar1, pbVar6, uVar4); /* compiler REP MOVS byte copy */
  }
  return this->field_0030;
}

