#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 005FCAD0 returns used as parameter 2 of STPlaySystemC::SaveObjData @ 005FBC32 */

byte * __thiscall STAllPlayersC::FUN_005fcad0(STAllPlayersC *this,uint *param_1)

{
  uint newSize;
  int iVar1;
  uint uVar2;
  AnonShape_005FCAD0_CB9D1D1A *pAVar3;
  byte *puVar4;
  uint *puVar5;
  byte *puVar6;
  AnonShape_005FCAD0_CB9D1D1A *pAVar7;
  uint *puVar8;
  uint *local_18;
  undefined4 *local_14;
  AnonShape_005FCAD0_CB9D1D1A *local_10;
  uint local_c;
  uint local_8;

  local_10 = Library::DKW::LIB::MemAlloc(0x24a);
  puVar4 = (byte *)&this[1].field_0xa;
  pAVar7 = local_10;
  for (iVar1 = 0x55; iVar1 != 0; iVar1 = iVar1 + -1) {
    pAVar7->field_0000 = *puVar4;
    puVar4 = (byte *)(puVar4 + 1);
    pAVar7 = (AnonShape_005FCAD0_CB9D1D1A *)&pAVar7->field_0004;
  }
  *(undefined1 *)&pAVar7->field_0000 = *(undefined1 *)puVar4;
  puVar4 = (byte *)&this->field_0x231;
  puVar6 = (byte *)&local_10->field_0x155;
  memmove(puVar6, puVar4, 0xf5); /* compiler REP MOVS byte copy */
  local_10->field_000C = 2;
  /* ST_CALLSITE[005FCB1D]: CALL 0x004018d4; direct=004018D4 STT3DSprC::SaveSpr */
  local_14 = STT3DSprC::SaveSpr((STT3DSprC *)&this->field_0x1d5,&local_8);
  /* ST_CALLSITE[005FCB2B]: CALL 0x0040119a; direct=0040119A STAllPlayersC::SaveGObjData */
  local_18 = SaveGObjData(this,(int *)&local_c);
  newSize = local_c + 0x252 + local_8;
  local_10 = Library::DKW::LIB::MemRealloc(local_10,newSize);
  local_10->field_0246 = local_8;
  pAVar3 = local_10 + 1;
  puVar4 = (byte *)(local_14);
  pAVar7 = pAVar3;
  for (uVar2 = local_8 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    pAVar7->field_0000 = *puVar4;
    puVar4 = (byte *)(puVar4 + 1);
    pAVar7 = (AnonShape_005FCAD0_CB9D1D1A *)&pAVar7->field_0004;
  }
  for (uVar2 = local_8 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)&pAVar7->field_0000 = *(undefined1 *)puVar4;
    puVar4 = (byte *)((int)puVar4 + 1);
    pAVar7 = (AnonShape_005FCAD0_CB9D1D1A *)((int)&pAVar7->field_0000 + 1);
  }
  FreeAndNull(&local_14);
  puVar8 = (uint *)((int)&pAVar3->field_0000 + local_8);
  *puVar8 = local_c;
  puVar5 = local_18;
  for (uVar2 = local_c >> 2; puVar8 = puVar8 + 1, uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar8 = *puVar5;
    puVar5 = puVar5 + 1;
  }
  for (local_c = local_c & 3; local_c != 0; local_c = local_c - 1) {
    *(char *)puVar8 = (char)*puVar5;
    puVar5 = (uint *)((int)puVar5 + 1);
    puVar8 = (uint *)((int)puVar8 + 1);
  }
  FreeAndNull(&local_18);
  *param_1 = newSize;
  return (byte *)local_10;
}

