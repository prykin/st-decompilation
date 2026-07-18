
undefined4 __thiscall thunk_FUN_0056e9e0(void *this,int param_1)

{
  byte bVar1;
  void *pvVar2;
  int iVar3;
  cMf32 *pcVar4;
  uint *puVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  byte *pbVar9;
  void *unaff_EDI;
  byte *pbVar10;
  byte *pbVar11;
  byte abStack_160 [260];
  undefined4 uStack_5c;
  undefined4 auStack_58 [16];
  void *pvStack_18;
  byte *pbStack_14;
  undefined4 uStack_10;
  byte *pbStack_c;
  cMf32 *pcStack_8;
  
  uStack_10 = 1;
  if (param_1 != 0) {
    *(undefined1 *)((int)this + 0x1163) = 1;
    *(undefined4 *)((int)this + 0x7d0e) = 1;
  }
  uStack_5c = DAT_00858df8;
  DAT_00858df8 = &uStack_5c;
  pvStack_18 = this;
  iVar3 = __setjmp3(auStack_58,0,unaff_EDI,unaff_ESI);
  pvVar2 = pvStack_18;
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_5c;
    return 0;
  }
  pbStack_c = (byte *)((int)pvStack_18 + 0x76f6);
  pcVar4 = (cMf32 *)FUN_006f0ec0(0x345,pbStack_c,0,0,0);
  pcStack_8 = pcVar4;
  if (*(byte **)((int)pvVar2 + 0x4ea7) != (byte *)0x0) {
    FUN_006b5570(*(byte **)((int)pvVar2 + 0x4ea7));
  }
  puVar5 = FUN_0071aa10((int)pcVar4,PTR_s_DESCRIPTION_0079b074,0);
  *(uint **)((int)pvVar2 + 0x4ea7) = puVar5;
  if (puVar5 == (uint *)0x0) {
    puVar5 = FUN_006b54f0((uint *)0x0,10,10);
    *(uint **)((int)pvVar2 + 0x4ea7) = puVar5;
  }
  if (*(byte **)((int)pvVar2 + 0x4eab) != (byte *)0x0) {
    FUN_006b5570(*(byte **)((int)pvVar2 + 0x4eab));
  }
  puVar5 = FUN_0071aa10((int)pcVar4,PTR_s_OBJECTIVES_0079b078,0);
  *(uint **)((int)pvVar2 + 0x4eab) = puVar5;
  if (puVar5 == (uint *)0x0) {
    puVar5 = FUN_006b54f0((uint *)0x0,10,10);
    *(uint **)((int)pvVar2 + 0x4eab) = puVar5;
  }
  pbVar11 = (byte *)((int)pvVar2 + 0x4da3);
  pbVar9 = pbVar11;
  for (iVar3 = 0x41; iVar3 != 0; iVar3 = iVar3 + -1) {
    pbVar9[0] = 0;
    pbVar9[1] = 0;
    pbVar9[2] = 0;
    pbVar9[3] = 0;
    pbVar9 = pbVar9 + 4;
  }
  pbStack_14 = pbVar11;
  puVar6 = FUN_006f1ce0(0xc,PTR_s_TITLE_MISSION_0079b070,(int *)&pbStack_14,0);
  if ((puVar6 == (ushort *)0x0) || (*pbVar11 == 0)) {
    FUN_0072e730(pbStack_c,(byte *)0x0,(byte *)0x0,abStack_160,(byte *)0x0);
    uVar7 = 0xffffffff;
    pbVar9 = abStack_160;
    do {
      pbVar10 = pbVar9;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pbVar10 = pbVar9 + 1;
      bVar1 = *pbVar9;
      pbVar9 = pbVar10;
    } while (bVar1 != 0);
    uVar7 = ~uVar7;
    pbVar9 = pbVar10 + -uVar7;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pbVar11 = *(undefined4 *)pbVar9;
      pbVar9 = pbVar9 + 4;
      pbVar11 = pbVar11 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pbVar11 = *pbVar9;
      pbVar9 = pbVar9 + 1;
      pbVar11 = pbVar11 + 1;
    }
  }
  cMf32::delete(pcStack_8,(undefined4 *)pcStack_8);
  DAT_00858df8 = (undefined4 *)uStack_5c;
  return uStack_10;
}

