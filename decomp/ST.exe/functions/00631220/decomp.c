#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STManRuinC.
   Evidence: this_call_owners=[STManRuinC]; agreed_this_calls=1; incoming_this_accesses=10;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall STManRuinC::sub_00631220(STManRuinC *this,int *param_1)

{
  STManRuinC_field_0038DArray *pSVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  byte *puVar6;
  byte *pbVar7;
  byte *puVar8;
  undefined4 *local_14;
  uint local_10;
  byte *local_c;
  uint local_8;

  pSVar1 = this->field_0038;
  local_c = nullptr;
  local_8 = 0;
  local_10 = 0x55;
  if (pSVar1 != nullptr) {
    iVar2 = pSVar1->count * pSVar1->elementSize;
    local_8 = iVar2 + 0x20;
    local_10 = iVar2 + 0x75;
  }
  if (this->field_0034 != nullptr) {
    local_10 = local_10 + this->field_0030;
  }
  uVar4 = local_10;
  puVar3 = Library::DKW::LIB::MemAlloc(local_10);
  this->field_0065 = this->field_0071;
  if (puVar3 == nullptr) {
    *param_1 = uVar4;
    return;
  }
  this->field_0028 = 2;
  if (this == nullptr) {
    puVar6 = nullptr;
  }
  else {
    puVar6 = (byte *)(&this->field_001C);
  }
  puVar8 = (byte *)(puVar3);
  for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar8 = *puVar6;
    puVar6 = (byte *)(puVar6 + 1);
    puVar8 = (byte *)(puVar8 + 1);
  }
  *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
  this->field_0061 = 0xffffffff;
  if (this->field_0038 != nullptr) {
    local_14 = FUN_006b0020(&this->field_0038->flags,(int *)&local_8);
    STField<uint>(puVar3,0x55) = local_8;
    local_c = (byte *)((int)puVar3 + 0x59);
    puVar6 = (byte *)(local_14);
    puVar8 = (byte *)local_c;
    memmove(puVar8, puVar6, local_8); /* compiler REP MOVS byte copy */
    if (local_14 != nullptr) {
      FreeAndNull(&local_14);
    }
  }
  if (this->field_0034 != nullptr) {
    if (local_8 == 0) {
      local_c = (byte *)((int)puVar3 + 0x55);
    }
    else {
      local_c = (byte *)((int)local_c + local_8);
    }
    uVar4 = this->field_0030;
    pbVar7 = this->field_0034;
    memmove(local_c, pbVar7, uVar4); /* compiler REP MOVS byte copy */
  }
  *param_1 = local_10;
  return;
}

