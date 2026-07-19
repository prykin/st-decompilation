
void __thiscall TradePanelTy::InitTradePanel(TradePanelTy *this)

{
  SpecPanelTy *pSVar1;
  SpecPanelTy *pSVar2;
  code *pcVar3;
  TradePanelTy *this_00;
  undefined4 *puVar4;
  LPSTR pCVar5;
  undefined4 *puVar6;
  ushort *puVar7;
  byte *pbVar8;
  SpecPanelTy SVar9;
  int iVar10;
  undefined4 unaff_ESI;
  uint *puVar11;
  void *unaff_EDI;
  uint uVar12;
  int *piVar13;
  bool bVar14;
  undefined4 uVar15;
  int *piVar16;
  undefined4 uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  UINT UVar21;
  undefined4 uVar22;
  undefined4 *puVar23;
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
  InternalExceptionFrame IStack_b8;
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
  TradePanelTy *pTStack_14;
  int iStack_10;
  uint uStack_c;
  SpecPanelTy SStack_5;
  
  puVar4 = auStack_74;
  pTStack_14 = this;
  for (iVar10 = 0x16; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar11 = auStack_5e0;
  for (iVar10 = 0x54; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  piVar16 = aiStack_490;
  for (iVar10 = 0xf6; iVar10 != 0; iVar10 = iVar10 + -1) {
    *piVar16 = 0;
    piVar16 = piVar16 + 1;
  }
  IStack_b8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_b8;
  puVar4 = (undefined4 *)__setjmp3(IStack_b8.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = pTStack_14;
  if (puVar4 == (undefined4 *)0x0) {
    uVar22 = 0x77;
    DAT_00802a44 = (SpecPanelTy *)pTStack_14;
    iVar10 = (-(uint)(DAT_0080874e != '\x03') & 0xfffffffa) + 0xde;
    UVar21 = 0x36c0;
    iVar20 = 0xb;
    iVar18 = 0xbf;
    uVar17 = 3;
    uVar15 = 0x40;
    pCVar5 = thunk_FUN_00571240(s_BKG_TRADECENTERW_007c8680,0);
    SpecPanelTy::InitPanel
              ((SpecPanelTy *)this_00,pCVar5,uVar15,uVar17,iVar18,iVar20,UVar21,iVar10,uVar22);
    puVar6 = FUN_0070ceb0(0x19d,DAT_00806790,s_MONEY_FONT_007c211c,0);
    uVar12 = 1;
    *(undefined4 **)(this_00 + 0x1dd) = puVar6;
    puVar6[0x16] = 1;
    puVar6[0x17] = 0;
    puVar7 = FUN_00709af0(DAT_00806794,0xb,&DAT_007c204c,0xffffffff,0,1,0,(undefined4 *)0x0);
    *(ushort **)(this_00 + 0x1d1) = puVar7;
    puVar7 = FUN_00709af0(DAT_00806794,0xb,&DAT_007c2048,0xffffffff,0,1,0,(undefined4 *)0x0);
    *(ushort **)(this_00 + 0x1d5) = puVar7;
    iVar10 = 1;
    uVar19 = 0xffffffff;
    puVar6 = puVar4;
    puVar23 = puVar4;
    pbVar8 = (byte *)thunk_FUN_00571240(s_TRADE_RATE_007c8670,0);
    puVar7 = FUN_00709af0(DAT_00806794,0xb,pbVar8,uVar19,(byte)puVar4,iVar10,(int)puVar6,puVar23);
    SStack_5 = *(SpecPanelTy *)(this_00 + 0x1d0);
    *(ushort **)(this_00 + 0x1d9) = puVar7;
    iStack_1c = *(int *)(this_00 + 0x5c);
    SVar9 = (SpecPanelTy)0x0;
    iStack_10 = (DAT_0080874e != '\x03') + 0x3b;
    puVar11 = auStack_5e0 + 1;
    uStack_c = (-(uint)(DAT_0080874e != '\x03') & 0xfffffffe) + 0x22 + *(int *)(this_00 + 0x3c);
    do {
      iVar18 = iStack_1c;
      bVar14 = SVar9 == SStack_5;
      puVar11[-1] = uVar12;
      *puVar11 = (uint)bVar14;
      puVar11[2] = uStack_c;
      puVar11[4] = 0x3a;
      iVar10 = DAT_00806734;
      if (iVar18 != 0) {
        iVar10 = *(int *)(this_00 + 0x44);
      }
      SVar9 = (SpecPanelTy)((char)SVar9 + 1);
      puVar11[3] = iVar10 + 0x17;
      iVar10 = iStack_10;
      puVar11[5] = 0x13;
      uVar12 = uVar12 + 1;
      uStack_c = uStack_c + iVar10;
      puVar11 = puVar11 + 0x1c;
    } while ((byte)SVar9 < 2);
    uStack_64 = *(undefined4 *)(this_00 + 8);
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
    (**(code **)(**(int **)(this_00 + 0xc) + 8))(5,(SpecPanelTy *)(this_00 + 0x1c4),0,auStack_74,0);
    uStack_e8 = *(undefined4 *)(this_00 + 8);
    iVar18 = 1;
    piVar16 = (int *)0x0;
    uVar15 = 0;
    iVar10 = 1;
    aiStack_490[0] = 0;
    uStack_e4 = 2;
    uStack_e0 = 0xb20c;
    uStack_30c = 2;
    aiStack_490[1] = 2;
    uStack_37c = 1;
    uStack_380 = 1;
    aiStack_490[2] = 0;
    aiStack_490[3] = 2;
    pCVar5 = thunk_FUN_00571240(s_BUT_TBUP_007c22d8,0);
    pCVar5 = FUN_006f2c00(pCVar5,iVar10,uVar15);
    puStack_18 = FUN_006f1ce0(1,pCVar5,piVar16,iVar18);
    uStack_478 = *(undefined4 *)(puStack_18 + 2);
    uStack_474 = *(undefined4 *)(puStack_18 + 4);
    cMf32::RecMemFree(DAT_00806790,(uint *)&puStack_18);
    iVar10 = *(int *)(this_00 + 0x5c);
    aiStack_490[4] = *(int *)(this_00 + 0x3c) + 0x69;
    iVar18 = DAT_00806734;
    if (iVar10 != 0) {
      iVar18 = *(int *)(this_00 + 0x44);
    }
    uStack_424 = 2;
    aiStack_490[5] = iVar18 + 0x46;
    uStack_428 = *(undefined4 *)(this_00 + 8);
    uStack_420 = 0xc005;
    uStack_378 = 500;
    uStack_374 = 0x28;
    piVar16 = aiStack_490 + 2;
    piVar13 = aiStack_308;
    for (iVar18 = 0x5f; iVar18 != 0; iVar18 = iVar18 + -1) {
      *piVar13 = *piVar16;
      piVar16 = piVar16 + 1;
      piVar13 = piVar13 + 1;
    }
    aiStack_308[3] = DAT_00806734;
    if (iVar10 != 0) {
      aiStack_308[3] = *(int *)(this_00 + 0x44);
    }
    aiStack_308[3] = aiStack_308[3] + 0x57;
    pSVar2 = (SpecPanelTy *)(this_00 + 0x1c0);
    uStack_2a0 = 0xc006;
    uStack_c4 = 1;
    uStack_c0 = 0x14;
    uStack_bc = 10;
    (**(code **)(**(int **)(this_00 + 0xc) + 8))(4,pSVar2,0,aiStack_490,0);
    pSVar1 = (SpecPanelTy *)(this_00 + 0x18);
    *(undefined4 *)(this_00 + 0x28) = 0x28;
    *(undefined4 *)(this_00 + 0x2c) = 0x186a1;
    FUN_006e6080(this_00,2,*(undefined4 *)pSVar2,(undefined4 *)pSVar1);
    *(undefined4 *)(this_00 + 0x28) = 0x22;
    *(uint *)(this_00 + 0x2c) =
         (uint)*(ushort *)(this_00 + (uint)(byte)*(SpecPanelTy *)(this_00 + 0x1d0) * 2 + 0x1bc);
    FUN_006e6080(this_00,2,*(undefined4 *)pSVar2,(undefined4 *)pSVar1);
    *(undefined4 *)(this_00 + 0x28) = 0x20;
    *(undefined4 *)(this_00 + 0x2c) = 1;
    FUN_006e6080(this_00,2,*(undefined4 *)pSVar2,(undefined4 *)pSVar1);
    g_currentExceptionFrame = IStack_b8.previous;
    return;
  }
  g_currentExceptionFrame = IStack_b8.previous;
  iVar10 = ReportDebugMessage(s_E____titans_Andrey_tradecen_cpp_007c8624,0x53,0,(int)puVar4,
                              &DAT_007a4ccc,s_TradePanelTy__InitTradePanel_007c864c);
  if (iVar10 != 0) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  RaiseInternalException((int)puVar4,0,s_E____titans_Andrey_tradecen_cpp_007c8624,0x53);
  return;
}

