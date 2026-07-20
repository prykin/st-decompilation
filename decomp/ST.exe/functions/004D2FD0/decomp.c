
undefined4 __fastcall FUN_004d2fd0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  LPVOID *ppvVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  undefined4 local_17c;
  undefined4 local_170;
  undefined4 local_10d [44];
  uint local_5d;
  int local_59;
  uint local_55;
  int local_51;
  uint local_4d;
  int local_49;
  uint local_45 [6];
  LPVOID local_2c [3];
  byte *local_20;
  undefined4 *local_1c;
  int local_18;
  byte *local_14;
  byte *local_10;
  uint local_c;
  byte *local_8;
  
  local_20 = (byte *)0x0;
  local_10 = (byte *)0x0;
  local_14 = (byte *)0x0;
  if (param_1 == 0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = (undefined4 *)(param_1 + 0x231);
  }
  puVar7 = &local_17c;
  for (iVar2 = 0x1b; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar7 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar7 = puVar7 + 1;
  }
  *(undefined2 *)puVar7 = *(undefined2 *)puVar1;
  *(undefined1 *)((int)puVar7 + 2) = *(undefined1 *)((int)puVar1 + 2);
  local_170 = 2;
  if (param_1 == 0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = (undefined4 *)(param_1 + 0x2a0);
  }
  puVar7 = local_10d;
  for (iVar2 = 0x2c; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar7 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar7 = puVar7 + 1;
  }
  local_20 = (byte *)STAllPlayersC::SaveGObjData((STAllPlayersC *)param_1,(int *)&local_5d);
  local_59 = 0x14f;
  local_10 = (byte *)STT3DSprC::SaveSpr((STT3DSprC *)(param_1 + 0x1d5),&local_55);
  local_51 = local_5d + local_59;
  local_14 = (byte *)STT3DSprC::SaveSpr(*(STT3DSprC **)(param_1 + 0x35c),&local_4d);
  local_49 = local_55 + local_51;
  iVar2 = 0;
  local_c = local_4d + local_49;
  local_18 = 0;
  if (*(int *)(param_1 + 0x370) == 0) {
    local_1c = (undefined4 *)(param_1 + 0x350);
    do {
      puVar1 = STT3DSprC::SaveSpr((STT3DSprC *)*local_1c,(uint *)((int)local_45 + iVar2));
      *(undefined4 **)((int)local_2c + iVar2) = puVar1;
      *(uint *)((int)local_45 + iVar2 + 0xc) = local_c;
      uVar3 = *(uint *)((int)local_45 + iVar2);
      iVar2 = iVar2 + 4;
      local_c = local_c + uVar3;
      local_1c = local_1c + 1;
      local_18 = local_18 + uVar3;
    } while (iVar2 < 0xc);
  }
  local_c = local_18 + local_4d + local_55 + 0x14f + local_5d;
  local_8 = (byte *)Library::DKW::LIB::FUN_006aac70(local_c);
  puVar1 = &local_17c;
  pbVar5 = local_8;
  for (iVar2 = 0x53; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pbVar5 = *puVar1;
    puVar1 = puVar1 + 1;
    pbVar5 = pbVar5 + 4;
  }
  *(undefined2 *)pbVar5 = *(undefined2 *)puVar1;
  pbVar5[2] = *(byte *)((int)puVar1 + 2);
  pbVar5 = local_20;
  pbVar8 = local_8 + local_59;
  for (uVar3 = local_5d >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pbVar8 = *(undefined4 *)pbVar5;
    pbVar5 = pbVar5 + 4;
    pbVar8 = pbVar8 + 4;
  }
  for (local_5d = local_5d & 3; local_5d != 0; local_5d = local_5d - 1) {
    *pbVar8 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    pbVar8 = pbVar8 + 1;
  }
  pbVar5 = local_10;
  pbVar8 = local_8 + local_51;
  for (uVar3 = local_55 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pbVar8 = *(undefined4 *)pbVar5;
    pbVar5 = pbVar5 + 4;
    pbVar8 = pbVar8 + 4;
  }
  for (local_55 = local_55 & 3; local_55 != 0; local_55 = local_55 - 1) {
    *pbVar8 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    pbVar8 = pbVar8 + 1;
  }
  pbVar5 = local_14;
  pbVar8 = local_8 + local_49;
  for (uVar3 = local_4d >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pbVar8 = *(undefined4 *)pbVar5;
    pbVar5 = pbVar5 + 4;
    pbVar8 = pbVar8 + 4;
  }
  for (local_4d = local_4d & 3; local_4d != 0; local_4d = local_4d - 1) {
    *pbVar8 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    pbVar8 = pbVar8 + 1;
  }
  if (*(int *)(param_1 + 0x370) == 0) {
    iVar2 = 0;
    do {
      uVar3 = *(uint *)((int)local_45 + iVar2);
      pbVar5 = *(byte **)((int)local_2c + iVar2);
      pbVar8 = local_8 + *(int *)((int)local_45 + iVar2 + 0xc);
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pbVar8 = *(undefined4 *)pbVar5;
        pbVar5 = pbVar5 + 4;
        pbVar8 = pbVar8 + 4;
      }
      iVar2 = iVar2 + 4;
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pbVar8 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        pbVar8 = pbVar8 + 1;
      }
    } while (iVar2 < 0xc);
  }
  STPlaySystemC::SaveObjData(PTR_00802a38,*(undefined4 *)(param_1 + 0x18),local_8,local_c);
  FUN_006ab060(&local_8);
  FUN_006ab060(&local_20);
  FUN_006ab060(&local_10);
  FUN_006ab060(&local_14);
  if (*(int *)(param_1 + 0x370) == 0) {
    ppvVar6 = local_2c;
    iVar2 = 3;
    do {
      FUN_006ab060(ppvVar6);
      ppvVar6 = ppvVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

