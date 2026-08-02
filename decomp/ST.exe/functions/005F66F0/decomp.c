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
  STAllPlayersC *pSVar1;
  byte *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  byte *puVar9;
  uint *puVar10;
  byte *pbVar11;
  byte *puVar12;
  uint *local_1c;
  byte *local_18;
  STAllPlayersC *local_14;
  uint local_10;
  uint local_c;
  uint local_8;

  local_14 = (STAllPlayersC *)this;
  puVar2 = (byte *)(Library::DKW::LIB::MemAlloc(0xc2));
  pSVar1 = local_14;
  if (this == nullptr) {
    puVar9 = nullptr;
  }
  else {
    puVar9 = (byte *)&this->field_0x231;
  }
  puVar12 = (byte *)(puVar2);
  memmove(puVar12, puVar9, 0xc2); /* compiler REP MOVS byte copy */
  puVar2[3] = 2;
  local_18 = (byte *)STT3DSprC::SaveSpr((STT3DSprC *)&local_14->field_0x1d5,&local_c);
  local_1c = STAllPlayersC::SaveGObjData(pSVar1,(int *)&local_10);
  local_8 = local_10 + 0xca + local_c;
  pbVar3 = Library::DKW::LIB::MemRealloc(puVar2,local_8);
  *(uint *)(pbVar3 + 0xc2) = local_c;
  pbVar11 = local_18;
  pbVar4 = pbVar3 + 0xc6;
  memmove(pbVar4, pbVar11, local_c); /* compiler REP MOVS byte copy */
  uVar6 = 0;
  FreeAndNull(&local_18);
  puVar8 = (uint *)(pbVar3 + 0xc6 + local_c);
  *puVar8 = local_10;
  puVar10 = local_1c;
  for (uVar6 = local_10 >> 2; puVar8 = puVar8 + 1, uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar8 = *puVar10;
    puVar10 = puVar10 + 1;
  }
  for (local_10 = local_10 & 3; local_10 != 0; local_10 = local_10 - 1) {
    *(byte *)puVar8 = (byte)*puVar10;
    puVar10 = (uint *)((int)puVar10 + 1);
    puVar8 = (uint *)((int)puVar8 + 1);
  }
  FreeAndNull(&local_1c);
  pSVar1 = local_14;
  iVar5 = *(int *)&local_14->field_0x2e6;
  if (iVar5 != 0) {
    if (*(int *)(iVar5 + 0x58) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(int *)(iVar5 + 0x5c) << 2;
    }
    newSize = local_8 + 0x6c + uVar6;
    local_8 = newSize;
    pbVar4 = Library::DKW::LIB::MemRealloc(pbVar3,newSize);
    puVar2 = (byte *)(*(undefined4 **)&pSVar1->field_0x2e6);
    pbVar11 = pbVar4 + (newSize - uVar6) + -0x6c;
    memmove(pbVar11, puVar2, 0x6c); /* compiler REP MOVS byte copy */
    iVar5 = 0;
    if (uVar6 != 0) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      pbVar11 = *(byte **)(*(int *)&local_14->field_0x2e6 + 0x58);
      pbVar3 = pbVar4 + (newSize - uVar6) + -0x6c + 0x6c;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pbVar3 = *(undefined4 *)pbVar11;
        pbVar11 = pbVar11 + 4;
        pbVar3 = pbVar3 + 4;
      }
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pbVar3 = *pbVar11;
        pbVar11 = pbVar11 + 1;
        pbVar3 = pbVar3 + 1;
      }
    }
    *param_1 = local_8;
    return pbVar4;
  }
  *param_1 = local_8;
  return pbVar3;
}

