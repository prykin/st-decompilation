#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 00617FB0 returns used as parameter 2 of STPlaySystemC::SaveObjData @ 006176B2

   [STMethodOwnerApplier] Structural method owner recovered as JumpManagC.
   Evidence: this_call_owners=[JumpManagC]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

byte * __thiscall JumpManagC::sub_00617FB0(JumpManagC *this,int *param_1)

{
  uint size;
  DArrayTy *pDVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  byte *pbVar10;
  uint *puVar11;
  uint *local_c;
  uint local_8;

  pDVar1 = this->field_005E;
  if (pDVar1 == nullptr) {
    iVar6 = 0;
  }
  else {
    iVar6 = pDVar1->count * pDVar1->elementSize + 0x1c;
  }
  pDVar1 = this->field_0062;
  if (pDVar1 == nullptr) {
    iVar4 = 0;
  }
  else {
    iVar4 = pDVar1->count * pDVar1->elementSize + 0x1c;
  }
  pDVar1 = this->field_0066;
  if (pDVar1 == nullptr) {
    iVar2 = 0;
  }
  else {
    iVar2 = pDVar1->count * pDVar1->elementSize + 0x1c;
  }
  size = iVar2 + iVar4 + 0x5e + iVar6;
  pbVar3 = Library::DKW::LIB::MemAlloc(size);
  puVar8 = (undefined4 *)&this->field_0x1c;
  pbVar10 = pbVar3;
  memmove(pbVar10, puVar8, 0x50); /* compiler REP MOVS byte copy */
  pbVar10 = pbVar10 + 0x50;
  puVar8 = puVar8 + 0x14;
  puVar7 = (uint *)(pbVar3 + 0x52);
  *(undefined2 *)pbVar10 = *(undefined2 *)puVar8;
  pbVar3[0xc] = 2;
  pbVar3[0xd] = 0;
  pbVar3[0xe] = 0;
  pbVar3[0xf] = 0;
  if (this->field_005E != nullptr) {
    local_c = FUN_006b0020(&this->field_005E->flags,(int *)&local_8);
    *puVar7 = local_8;
    puVar7 = local_c;
    puVar9 = (uint *)(pbVar3 + 0x56);
    memmove(puVar9, puVar7, local_8); /* compiler REP MOVS byte copy */
    uVar5 = 0;
    puVar7 = (uint *)((int)(pbVar3 + 0x56) + local_8);
    FreeAndNull(&local_c);
  }
  if (this->field_0062 != nullptr) {
    local_c = FUN_006b0020(&this->field_0062->flags,(int *)&local_8);
    *puVar7 = local_8;
    puVar9 = local_c;
    puVar11 = puVar7 + 1;
    memmove(puVar11, puVar9, local_8); /* compiler REP MOVS byte copy */
    uVar5 = 0;
    puVar7 = (uint *)((int)(puVar7 + 1) + local_8);
    FreeAndNull(&local_c);
  }
  if (this->field_0066 != nullptr) {
    local_c = FUN_006b0020(&this->field_0066->flags,(int *)&local_8);
    *puVar7 = local_8;
    puVar9 = local_c;
    for (uVar5 = local_8 >> 2; puVar7 = puVar7 + 1, uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar7 = *puVar9;
      puVar9 = puVar9 + 1;
    }
    for (local_8 = local_8 & 3; local_8 != 0; local_8 = local_8 - 1) {
      *(byte *)puVar7 = (byte)*puVar9;
      puVar9 = (uint *)((int)puVar9 + 1);
      puVar7 = (uint *)((int)puVar7 + 1);
    }
    FreeAndNull(&local_c);
    *param_1 = size;
    return pbVar3;
  }
  *param_1 = size;
  return pbVar3;
}

