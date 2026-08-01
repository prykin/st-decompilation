
/* [STPrototypeApplier] Propagated return.
   Evidence: 00622990 returns used as parameter 2 of STPlaySystemC::SaveObjData @ 00622246 */

byte * __thiscall STAllPlayersC::FUN_00622990(STAllPlayersC *this,uint *param_1)

{
  uint newSize;
  int iVar1;
  uint uVar2;
  AnonShape_00622990_E4CFDE96 *pAVar3;
  undefined4 *puVar4;
  uint *puVar5;
  AnonShape_00622990_E4CFDE96 *pAVar6;
  uint *puVar7;
  uint *local_18;
  undefined4 *local_14;
  AnonShape_00622990_E4CFDE96 *local_10;
  uint local_c;
  uint local_8;

  local_10 = Library::DKW::LIB::MemAlloc(0x109);
  puVar4 = (undefined4 *)&this->field_0x25e;
  pAVar6 = local_10;
  for (iVar1 = 0x42; iVar1 != 0; iVar1 = iVar1 + -1) {
    pAVar6->field_0000 = *puVar4;
    puVar4 = puVar4 + 1;
    pAVar6 = (AnonShape_00622990_E4CFDE96 *)&pAVar6->field_0004;
  }
  *(undefined1 *)&pAVar6->field_0000 = *(undefined1 *)puVar4;
  local_10->field_000C = 2;
  local_14 = STT3DSprC::SaveSpr((STT3DSprC *)&this->field_0x1d5,&local_8);
  local_18 = SaveGObjData(this,(int *)&local_c);
  newSize = local_c + 0x111 + local_8;
  local_10 = Library::DKW::LIB::MemRealloc((AnonPointee_TLOBaseTy_0607 *)local_10,newSize);
  local_10->field_0109 = local_8;
  pAVar3 = local_10 + 1;
  puVar4 = local_14;
  pAVar6 = pAVar3;
  for (uVar2 = local_8 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    pAVar6->field_0000 = *puVar4;
    puVar4 = puVar4 + 1;
    pAVar6 = (AnonShape_00622990_E4CFDE96 *)&pAVar6->field_0004;
  }
  for (uVar2 = local_8 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)&pAVar6->field_0000 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    pAVar6 = (AnonShape_00622990_E4CFDE96 *)((int)&pAVar6->field_0000 + 1);
  }
  FreeAndNull(&local_14);
  puVar7 = (uint *)((int)&pAVar3->field_0000 + local_8);
  *puVar7 = local_c;
  puVar5 = local_18;
  for (uVar2 = local_c >> 2; puVar7 = puVar7 + 1, uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
  }
  for (local_c = local_c & 3; local_c != 0; local_c = local_c - 1) {
    *(char *)puVar7 = (char)*puVar5;
    puVar5 = (uint *)((int)puVar5 + 1);
    puVar7 = (uint *)((int)puVar7 + 1);
  }
  FreeAndNull(&local_18);
  *param_1 = newSize;
  return (byte *)local_10;
}

