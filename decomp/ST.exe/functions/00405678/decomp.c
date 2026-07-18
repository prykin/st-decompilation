
void thunk_FUN_00550db0(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  LPSTR pCVar3;
  undefined4 *puVar4;
  ushort *puVar5;
  byte *pbVar6;
  byte bVar7;
  int iVar8;
  undefined4 unaff_ESI;
  uint *puVar9;
  void *unaff_EDI;
  uint uVar10;
  int *piVar11;
  bool bVar12;
  undefined4 uVar13;
  int *piVar14;
  undefined4 uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  UINT UVar19;
  undefined4 uVar20;
  undefined4 *puVar21;
  uint auStack_5e0 [84];
  int aiStack_490 [6];
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_30c;
  int aiStack_308 [26];
  undefined4 uStack_2a0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 auStack_b4 [16];
  undefined4 auStack_74 [4];
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint *puStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  ushort *puStack_18;
  void *pvStack_14;
  int iStack_10;
  uint uStack_c;
  byte bStack_5;
  
  puVar2 = auStack_74;
  for (iVar8 = 0x16; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar9 = auStack_5e0;
  for (iVar8 = 0x54; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  piVar14 = aiStack_490;
  for (iVar8 = 0xf6; iVar8 != 0; iVar8 = iVar8 + -1) {
    *piVar14 = 0;
    piVar14 = piVar14 + 1;
  }
  uStack_b8 = DAT_00858df8;
  DAT_00858df8 = &uStack_b8;
  puVar2 = (undefined4 *)__setjmp3(auStack_b4,0,unaff_EDI,unaff_ESI);
  if (puVar2 == (undefined4 *)0x0) {
    uVar20 = 0x77;
    DAT_00802a44 = pvStack_14;
    iVar8 = (-(uint)(DAT_0080874e != '\x03') & 0xfffffffa) + 0xde;
    UVar19 = 0x36c0;
    iVar18 = 0xb;
    iVar16 = 0xbf;
    uVar15 = 3;
    uVar13 = 0x40;
    pCVar3 = thunk_FUN_00571240(s_BKG_TRADECENTERW_007c8680,0);
    thunk_FUN_0053e3f0(pCVar3,uVar13,uVar15,iVar16,iVar18,UVar19,iVar8,uVar20);
    puVar4 = FUN_0070ceb0(0x19d,DAT_00806790,s_MONEY_FONT_007c211c,0);
    uVar10 = 1;
    *(undefined4 **)((int)pvStack_14 + 0x1dd) = puVar4;
    puVar4[0x16] = 1;
    puVar4[0x17] = 0;
    puVar5 = FUN_00709af0(DAT_00806794,0xb,&DAT_007c204c,0xffffffff,0,1,0,(undefined4 *)0x0);
    *(ushort **)((int)pvStack_14 + 0x1d1) = puVar5;
    puVar5 = FUN_00709af0(DAT_00806794,0xb,&DAT_007c2048,0xffffffff,0,1,0,(undefined4 *)0x0);
    *(ushort **)((int)pvStack_14 + 0x1d5) = puVar5;
    iVar8 = 1;
    uVar17 = 0xffffffff;
    puVar4 = puVar2;
    puVar21 = puVar2;
    pbVar6 = (byte *)thunk_FUN_00571240(s_TRADE_RATE_007c8670,0);
    puVar5 = FUN_00709af0(DAT_00806794,0xb,pbVar6,uVar17,(byte)puVar2,iVar8,(int)puVar4,puVar21);
    bStack_5 = *(byte *)((int)pvStack_14 + 0x1d0);
    *(ushort **)((int)pvStack_14 + 0x1d9) = puVar5;
    iStack_1c = *(int *)((int)pvStack_14 + 0x5c);
    bVar7 = 0;
    iStack_10 = (DAT_0080874e != '\x03') + 0x3b;
    puVar9 = auStack_5e0 + 1;
    uStack_c = (-(uint)(DAT_0080874e != '\x03') & 0xfffffffe) + 0x22 +
               *(int *)((int)pvStack_14 + 0x3c);
    do {
      iVar16 = iStack_1c;
      bVar12 = bVar7 == bStack_5;
      puVar9[-1] = uVar10;
      *puVar9 = (uint)bVar12;
      puVar9[2] = uStack_c;
      puVar9[4] = 0x3a;
      iVar8 = DAT_00806734;
      if (iVar16 != 0) {
        iVar8 = *(int *)((int)pvStack_14 + 0x44);
      }
      bVar7 = bVar7 + 1;
      puVar9[3] = iVar8 + 0x17;
      iVar8 = iStack_10;
      puVar9[5] = 0x13;
      uVar10 = uVar10 + 1;
      uStack_c = uStack_c + iVar8;
      puVar9 = puVar9 + 0x1c;
    } while (bVar7 < 2);
    uStack_64 = *(undefined4 *)((int)pvStack_14 + 8);
    puStack_2c = auStack_5e0;
    auStack_74[0] = 1;
    auStack_74[1] = 1;
    uStack_28 = 1;
    uStack_60 = 2;
    uStack_5c = 0xb20a;
    uStack_40 = 2;
    uStack_3c = 0xb20b;
    uStack_24 = 1;
    uStack_20 = 1;
    uStack_44 = uStack_64;
    (**(code **)(**(int **)((int)pvStack_14 + 0xc) + 8))(5,(int)pvStack_14 + 0x1c4,0,auStack_74,0);
    uStack_e8 = *(undefined4 *)((int)pvStack_14 + 8);
    iVar16 = 1;
    piVar14 = (int *)0x0;
    uVar13 = 0;
    iVar8 = 1;
    aiStack_490[0] = 0;
    uStack_e4 = 2;
    uStack_e0 = 0xb20c;
    uStack_30c = 2;
    aiStack_490[1] = 2;
    uStack_37c = 1;
    uStack_380 = 1;
    aiStack_490[2] = 0;
    aiStack_490[3] = 2;
    pCVar3 = thunk_FUN_00571240(s_BUT_TBUP_007c22d8,0);
    pCVar3 = FUN_006f2c00(pCVar3,iVar8,uVar13);
    puStack_18 = FUN_006f1ce0(1,pCVar3,piVar14,iVar16);
    uStack_478 = *(undefined4 *)(puStack_18 + 2);
    uStack_474 = *(undefined4 *)(puStack_18 + 4);
    FUN_006f20e0((uint *)&puStack_18);
    iVar8 = *(int *)((int)pvStack_14 + 0x5c);
    aiStack_490[4] = *(int *)((int)pvStack_14 + 0x3c) + 0x69;
    iVar16 = DAT_00806734;
    if (iVar8 != 0) {
      iVar16 = *(int *)((int)pvStack_14 + 0x44);
    }
    uStack_424 = 2;
    aiStack_490[5] = iVar16 + 0x46;
    uStack_428 = *(undefined4 *)((int)pvStack_14 + 8);
    uStack_420 = 0xc005;
    uStack_378 = 500;
    uStack_374 = 0x28;
    piVar14 = aiStack_490 + 2;
    piVar11 = aiStack_308;
    for (iVar16 = 0x5f; iVar16 != 0; iVar16 = iVar16 + -1) {
      *piVar11 = *piVar14;
      piVar14 = piVar14 + 1;
      piVar11 = piVar11 + 1;
    }
    aiStack_308[3] = DAT_00806734;
    if (iVar8 != 0) {
      aiStack_308[3] = *(int *)((int)pvStack_14 + 0x44);
    }
    aiStack_308[3] = aiStack_308[3] + 0x57;
    puVar4 = (undefined4 *)((int)pvStack_14 + 0x1c0);
    uStack_2a0 = 0xc006;
    uStack_c4 = 1;
    uStack_c0 = 0x14;
    uStack_bc = 10;
    (**(code **)(**(int **)((int)pvStack_14 + 0xc) + 8))(4,puVar4,0,aiStack_490,0);
    puVar2 = (undefined4 *)((int)pvStack_14 + 0x18);
    *(undefined4 *)((int)pvStack_14 + 0x28) = 0x28;
    *(undefined4 *)((int)pvStack_14 + 0x2c) = 0x186a1;
    FUN_006e6080(pvStack_14,2,*puVar4,puVar2);
    *(undefined4 *)((int)pvStack_14 + 0x28) = 0x22;
    *(uint *)((int)pvStack_14 + 0x2c) =
         (uint)*(ushort *)((int)pvStack_14 + (uint)*(byte *)((int)pvStack_14 + 0x1d0) * 2 + 0x1bc);
    FUN_006e6080(pvStack_14,2,*puVar4,puVar2);
    *(undefined4 *)((int)pvStack_14 + 0x28) = 0x20;
    *(undefined4 *)((int)pvStack_14 + 0x2c) = 1;
    FUN_006e6080(pvStack_14,2,*puVar4,puVar2);
    DAT_00858df8 = (undefined4 *)uStack_b8;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_b8;
  iVar8 = FUN_006ad4d0(s_E____titans_Andrey_tradecen_cpp_007c8624,0x53,0,(int)puVar2,&DAT_007a4ccc);
  if (iVar8 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40((int)puVar2,0,0x7c8624,0x53);
  return;
}

