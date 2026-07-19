
undefined4 __fastcall thunk_FUN_004d2fd0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte **ppbVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  undefined4 uStack_17c;
  undefined4 uStack_170;
  undefined4 auStack_10d [44];
  uint uStack_5d;
  int iStack_59;
  uint uStack_55;
  int iStack_51;
  uint uStack_4d;
  int iStack_49;
  uint auStack_45 [6];
  byte *apbStack_2c [5];
  int iStack_18;
  byte *pbStack_14;
  byte *pbStack_10;
  uint uStack_c;
  byte *pbStack_8;
  
  apbStack_2c[3] = (byte *)0x0;
  pbStack_10 = (byte *)0x0;
  pbStack_14 = (byte *)0x0;
  if (param_1 == 0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = (undefined4 *)(param_1 + 0x231);
  }
  puVar7 = &uStack_17c;
  for (iVar2 = 0x1b; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar7 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar7 = puVar7 + 1;
  }
  *(undefined2 *)puVar7 = *(undefined2 *)puVar1;
  *(undefined1 *)((int)puVar7 + 2) = *(undefined1 *)((int)puVar1 + 2);
  uStack_170 = 2;
  if (param_1 == 0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = (undefined4 *)(param_1 + 0x2a0);
  }
  puVar7 = auStack_10d;
  for (iVar2 = 0x2c; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar7 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar7 = puVar7 + 1;
  }
  apbStack_2c[3] = (byte *)STAllPlayersC::SaveGObjData((STAllPlayersC *)param_1,(int *)&uStack_5d);
  iStack_59 = 0x14f;
  pbStack_10 = (byte *)STT3DSprC::SaveSpr((STT3DSprC *)(param_1 + 0x1d5),&uStack_55);
  iStack_51 = uStack_5d + iStack_59;
  pbStack_14 = (byte *)STT3DSprC::SaveSpr(*(STT3DSprC **)(param_1 + 0x35c),&uStack_4d);
  iStack_49 = uStack_55 + iStack_51;
  iVar2 = 0;
  uStack_c = uStack_4d + iStack_49;
  iStack_18 = 0;
  if (*(int *)(param_1 + 0x370) == 0) {
    apbStack_2c[4] = (byte *)(param_1 + 0x350);
    do {
      puVar1 = STT3DSprC::SaveSpr(*(STT3DSprC **)apbStack_2c[4],(uint *)((int)auStack_45 + iVar2));
      *(undefined4 **)((int)apbStack_2c + iVar2) = puVar1;
      *(uint *)((int)auStack_45 + iVar2 + 0xc) = uStack_c;
      uVar3 = *(uint *)((int)auStack_45 + iVar2);
      iVar2 = iVar2 + 4;
      uStack_c = uStack_c + uVar3;
      apbStack_2c[4] = (byte *)((int)apbStack_2c[4] + 4);
      iStack_18 = iStack_18 + uVar3;
    } while (iVar2 < 0xc);
  }
  uStack_c = iStack_18 + uStack_4d + uStack_55 + 0x14f + uStack_5d;
  pbStack_8 = (byte *)Library::DKW::LIB::FUN_006aac70(uStack_c);
  puVar1 = &uStack_17c;
  pbVar5 = pbStack_8;
  for (iVar2 = 0x53; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pbVar5 = *puVar1;
    puVar1 = puVar1 + 1;
    pbVar5 = pbVar5 + 4;
  }
  *(undefined2 *)pbVar5 = *(undefined2 *)puVar1;
  pbVar5[2] = *(byte *)((int)puVar1 + 2);
  pbVar5 = apbStack_2c[3];
  pbVar8 = pbStack_8 + iStack_59;
  for (uVar3 = uStack_5d >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pbVar8 = *(undefined4 *)pbVar5;
    pbVar5 = pbVar5 + 4;
    pbVar8 = pbVar8 + 4;
  }
  for (uStack_5d = uStack_5d & 3; uStack_5d != 0; uStack_5d = uStack_5d - 1) {
    *pbVar8 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    pbVar8 = pbVar8 + 1;
  }
  pbVar5 = pbStack_10;
  pbVar8 = pbStack_8 + iStack_51;
  for (uVar3 = uStack_55 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pbVar8 = *(undefined4 *)pbVar5;
    pbVar5 = pbVar5 + 4;
    pbVar8 = pbVar8 + 4;
  }
  for (uStack_55 = uStack_55 & 3; uStack_55 != 0; uStack_55 = uStack_55 - 1) {
    *pbVar8 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    pbVar8 = pbVar8 + 1;
  }
  pbVar5 = pbStack_14;
  pbVar8 = pbStack_8 + iStack_49;
  for (uVar3 = uStack_4d >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pbVar8 = *(undefined4 *)pbVar5;
    pbVar5 = pbVar5 + 4;
    pbVar8 = pbVar8 + 4;
  }
  for (uStack_4d = uStack_4d & 3; uStack_4d != 0; uStack_4d = uStack_4d - 1) {
    *pbVar8 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    pbVar8 = pbVar8 + 1;
  }
  if (*(int *)(param_1 + 0x370) == 0) {
    iVar2 = 0;
    do {
      uVar3 = *(uint *)((int)auStack_45 + iVar2);
      pbVar5 = *(byte **)((int)apbStack_2c + iVar2);
      pbVar8 = pbStack_8 + *(int *)((int)auStack_45 + iVar2 + 0xc);
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
  STPlaySystemC::SaveObjData(DAT_00802a38,*(undefined4 *)(param_1 + 0x18),pbStack_8,uStack_c);
  FUN_006ab060(&pbStack_8);
  FUN_006ab060(apbStack_2c + 3);
  FUN_006ab060(&pbStack_10);
  FUN_006ab060(&pbStack_14);
  if (*(int *)(param_1 + 0x370) == 0) {
    ppbVar6 = apbStack_2c;
    iVar2 = 3;
    do {
      FUN_006ab060(ppbVar6);
      ppbVar6 = ppbVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

