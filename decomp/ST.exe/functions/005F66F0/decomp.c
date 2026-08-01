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
  AnonPointee_TLOBaseTy_0607 *pAVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint *puVar8;
  byte *puVar9;
  uint *puVar10;
  byte *pbVar11;
  AnonPointee_TLOBaseTy_0607 *pAVar12;
  byte *puVar13;
  byte *pbVar14;
  uint *local_1c;
  undefined4 *local_18;
  STAllPlayersC *local_14;
  uint local_10;
  uint local_c;
  uint local_8;

  local_14 = (STAllPlayersC *)this;
  pAVar2 = Library::DKW::LIB::MemAlloc(0xc2);
  pSVar1 = local_14;
  if (this == (STColl3C *)0x0) {
    puVar9 = (byte *)0x0;
  }
  else {
    puVar9 = (byte *)&this->field_0x231;
  }
  pAVar12 = pAVar2;
  for (iVar4 = 0x30; iVar4 != 0; iVar4 = iVar4 + -1) {
    pAVar12->field_0000 = *puVar9;
    puVar9 = (byte *)(puVar9 + 1);
    pAVar12 = (AnonPointee_TLOBaseTy_0607 *)&pAVar12->field_0004;
  }
  *(undefined2 *)&pAVar12->field_0000 = *(undefined2 *)puVar9;
  pAVar2->field_000C = 2;
  local_18 = STT3DSprC::SaveSpr((STT3DSprC *)&local_14->field_0x1d5,&local_c);
  local_1c = STAllPlayersC::SaveGObjData(pSVar1,(int *)&local_10);
  local_8 = local_10 + 0xca + local_c;
  pAVar2 = Library::DKW::LIB::MemRealloc(pAVar2,local_8);
  *(uint *)((int)&pAVar2[8].field_0000 + 2) = local_c;
  puVar7 = (undefined4 *)((int)&pAVar2[8].field_0004 + 2);
  puVar9 = (byte *)(local_18);
  puVar13 = (byte *)(puVar7);
  memmove(puVar13, puVar9, local_c); /* compiler REP MOVS byte copy */
  uVar5 = 0;
  FreeAndNull(&local_18);
  puVar8 = (uint *)((int)puVar7 + local_c);
  *puVar8 = local_10;
  puVar10 = local_1c;
  for (uVar5 = local_10 >> 2; puVar8 = puVar8 + 1, uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar8 = *puVar10;
    puVar10 = puVar10 + 1;
  }
  for (local_10 = local_10 & 3; local_10 != 0; local_10 = local_10 - 1) {
    *(char *)puVar8 = (char)*puVar10;
    puVar10 = (uint *)((int)puVar10 + 1);
    puVar8 = (uint *)((int)puVar8 + 1);
  }
  FreeAndNull(&local_1c);
  pSVar1 = local_14;
  iVar4 = *(int *)&local_14->field_0x2e6;
  if (iVar4 != 0) {
    if (*(int *)(iVar4 + 0x58) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(int *)(iVar4 + 0x5c) << 2;
    }
    newSize = local_8 + 0x6c + uVar5;
    local_8 = newSize;
    pbVar3 = Library::DKW::LIB::MemRealloc(pAVar2,newSize);
    puVar9 = (byte *)(*(undefined4 **)&pSVar1->field_0x2e6);
    pbVar11 = pbVar3 + (newSize - uVar5) + -0x6c;
    for (iVar4 = 0x1b; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pbVar11 = *puVar9;
      puVar9 = (byte *)(puVar9 + 1);
      pbVar11 = pbVar11 + 4;
    }
    if (uVar5 != 0) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      pbVar11 = *(byte **)(*(int *)&local_14->field_0x2e6 + 0x58);
      pbVar14 = pbVar3 + (newSize - uVar5) + -0x6c + 0x6c;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pbVar14 = *(undefined4 *)pbVar11;
        pbVar11 = pbVar11 + 4;
        pbVar14 = pbVar14 + 4;
      }
      for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pbVar14 = *pbVar11;
        pbVar11 = pbVar11 + 1;
        pbVar14 = pbVar14 + 1;
      }
    }
    *param_1 = local_8;
    return pbVar3;
  }
  *param_1 = local_8;
  return (byte *)pAVar2;
}

