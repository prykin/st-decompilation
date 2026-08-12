#include "../../pseudocode_runtime.h"


/* [STPrototypeRepairApplier] Propagated return.
   Evidence: 005F66F0 returns used as parameter 2 of STPlaySystemC::SaveObjData @ 005F62C9

   [STMethodOwnerApplier] Structural method owner recovered as STColl3C.
   Evidence: this_call_owners=[STColl3C]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

byte * __thiscall STColl3C::sub_005F66F0(STColl3C *this,uint *param_1)

{
  uint newSize;
  STColl3C *pSVar1;
  undefined4 *allocation;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  byte *puVar8;
  uint *puVar9;
  ushort *puVar10;
  byte *pbVar11;
  byte *puVar12;
  uint *local_1c;
  byte *local_18;
  STColl3C *local_14;
  uint local_10;
  uint local_c;
  uint local_8;

  local_14 = this;
  allocation = Library::DKW::LIB::MemAlloc(0xc2);
  pSVar1 = local_14;
  if (this == nullptr) {
    puVar8 = nullptr;
  }
  else {
    puVar8 = (byte *)&this->field_0x231;
  }
  puVar12 = (byte *)(allocation);
  memmove(puVar12, puVar8, 0xc2); /* compiler REP MOVS byte copy */
  iVar4 = 0;
  allocation[3] = 2;
  local_18 = (byte *)STT3DSprC::SaveSpr((STT3DSprC *)&local_14->vtable_at_1d5,&local_c);
  local_1c = STAllPlayersC::SaveGObjData((STAllPlayersC *)pSVar1,(int *)&local_10);
  local_8 = local_10 + 0xca + local_c;
  pbVar2 = Library::DKW::LIB::MemRealloc(allocation,local_8);
  *(uint *)(pbVar2 + 0xc2) = local_c;
  pbVar11 = local_18;
  pbVar3 = pbVar2 + 0xc6;
  memmove(pbVar3, pbVar11, local_c); /* compiler REP MOVS byte copy */
  uVar5 = 0;
  FreeAndNull(&local_18);
  puVar7 = (uint *)(pbVar2 + 0xc6 + local_c);
  *puVar7 = local_10;
  puVar9 = local_1c;
  for (uVar5 = local_10 >> 2; puVar7 = puVar7 + 1, uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar7 = *puVar9;
    puVar9 = puVar9 + 1;
  }
  for (local_10 = local_10 & 3; local_10 != 0; local_10 = local_10 - 1) {
    *(byte *)puVar7 = (byte)*puVar9;
    puVar9 = (uint *)((int)puVar9 + 1);
    puVar7 = (uint *)((int)puVar7 + 1);
  }
  FreeAndNull(&local_1c);
  pSVar1 = local_14;
  puVar10 = local_14->field_02E6;
  if (puVar10 != nullptr) {
    if (*(int *)(puVar10 + 0x2c) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(int *)(puVar10 + 0x2e) << 2;
    }
    newSize = local_8 + 0x6c + uVar5;
    local_8 = newSize;
    pbVar3 = Library::DKW::LIB::MemRealloc(pbVar2,newSize);
    puVar10 = pSVar1->field_02E6;
    pbVar11 = pbVar3 + (newSize - uVar5) + -0x6c;
    for (iVar4 = 0x1b; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pbVar11 = *(undefined4 *)puVar10;
      puVar10 = puVar10 + 2;
      pbVar11 = pbVar11 + 4;
    }
    if (uVar5 != 0) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      pbVar11 = *(byte **)(local_14->field_02E6 + 0x2c);
      pbVar2 = pbVar3 + (newSize - uVar5) + -0x6c + 0x6c;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pbVar2 = *(undefined4 *)pbVar11;
        pbVar11 = pbVar11 + 4;
        pbVar2 = pbVar2 + 4;
      }
      for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pbVar2 = *pbVar11;
        pbVar11 = pbVar11 + 1;
        pbVar2 = pbVar2 + 1;
      }
    }
    *param_1 = local_8;
    return pbVar3;
  }
  *param_1 = local_8;
  return pbVar2;
}

