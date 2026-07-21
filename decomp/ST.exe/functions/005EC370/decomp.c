
/* [STPrototypeApplier] Propagated return.
   Evidence: 005EC370 returns used as parameter 2 of STPlaySystemC::SaveObjData @ 005EB4DA */

byte * __thiscall FUN_005ec370(void *this,uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  uint *puVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  uint *puVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  uint *local_18;
  byte *local_14;
  byte *local_10;
  uint local_c;
  uint local_8;
  
  local_10 = (byte *)Library::DKW::LIB::FUN_006aac70(0x246);
  puVar6 = (undefined4 *)((int)this + 0x326);
  puVar9 = (undefined4 *)local_10;
  for (iVar2 = 0x54; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar9 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar9 = puVar9 + 1;
  }
  *(undefined1 *)puVar9 = *(undefined1 *)puVar6;
  puVar6 = (undefined4 *)((int)this + 0x231);
  puVar9 = (undefined4 *)((int)local_10 + 0x151);
  for (iVar2 = 0x3d; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar9 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar9 = puVar9 + 1;
  }
  *(undefined1 *)puVar9 = *(undefined1 *)puVar6;
  *(undefined4 *)((int)local_10 + 0xc) = 2;
  local_14 = (byte *)STT3DSprC::SaveSpr((STT3DSprC *)((int)this + 0x1d5),&local_8);
  local_18 = STAllPlayersC::SaveGObjData(this,(int *)&local_c);
  uVar1 = local_c + 0x24e + local_8;
  local_10 = (byte *)Library::DKW::LIB::FUN_006acf50((int)local_10,uVar1);
  *(uint *)(local_10 + 0x246) = local_8;
  pbVar4 = local_10 + 0x24a;
  pbVar7 = local_14;
  pbVar10 = pbVar4;
  for (uVar3 = local_8 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pbVar10 = *(undefined4 *)pbVar7;
    pbVar7 = pbVar7 + 4;
    pbVar10 = pbVar10 + 4;
  }
  for (uVar3 = local_8 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pbVar10 = *pbVar7;
    pbVar7 = pbVar7 + 1;
    pbVar10 = pbVar10 + 1;
  }
  FreeAndNull(&local_14);
  puVar5 = (uint *)(pbVar4 + local_8);
  *puVar5 = local_c;
  puVar8 = local_18;
  for (uVar3 = local_c >> 2; puVar5 = puVar5 + 1, uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = *puVar8;
    puVar8 = puVar8 + 1;
  }
  for (local_c = local_c & 3; local_c != 0; local_c = local_c - 1) {
    *(byte *)puVar5 = (byte)*puVar8;
    puVar8 = (uint *)((int)puVar8 + 1);
    puVar5 = (uint *)((int)puVar5 + 1);
  }
  FreeAndNull(&local_18);
  *param_1 = uVar1;
  return local_10;
}

