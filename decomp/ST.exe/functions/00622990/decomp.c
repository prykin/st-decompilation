
int __thiscall FUN_00622990(void *this,uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined4 *puVar8;
  uint *local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  uint local_c;
  uint local_8;
  
  local_10 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(0x109);
  puVar6 = (undefined4 *)((int)this + 0x25e);
  puVar8 = local_10;
  for (iVar2 = 0x42; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
  local_10[3] = 2;
  local_14 = STT3DSprC::SaveSpr((STT3DSprC *)((int)this + 0x1d5),&local_8);
  local_18 = STAllPlayersC::SaveGObjData(this,(int *)&local_c);
  uVar1 = local_c + 0x111 + local_8;
  local_10 = (undefined4 *)Library::DKW::LIB::FUN_006acf50(local_10,uVar1);
  *(uint *)((int)local_10 + 0x109) = local_8;
  puVar4 = (undefined4 *)((int)local_10 + 0x10d);
  puVar6 = local_14;
  puVar8 = puVar4;
  for (uVar3 = local_8 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  for (uVar3 = local_8 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  FUN_006ab060(&local_14);
  puVar5 = (uint *)((int)puVar4 + local_8);
  *puVar5 = local_c;
  puVar7 = local_18;
  for (uVar3 = local_c >> 2; puVar5 = puVar5 + 1, uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = *puVar7;
    puVar7 = puVar7 + 1;
  }
  for (local_c = local_c & 3; local_c != 0; local_c = local_c - 1) {
    *(char *)puVar5 = (char)*puVar7;
    puVar7 = (uint *)((int)puVar7 + 1);
    puVar5 = (uint *)((int)puVar5 + 1);
  }
  FUN_006ab060(&local_18);
  *param_1 = uVar1;
  return (int)local_10;
}

