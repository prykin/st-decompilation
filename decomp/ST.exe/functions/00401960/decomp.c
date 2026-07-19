
void __thiscall BehPanelTy::InitBehPanel(BehPanelTy *this)

{
  code *pcVar1;
  BehPanelTy *this_00;
  SpecPanelTy *pSVar2;
  LPSTR pCVar3;
  ushort *puVar4;
  char *pcVar5;
  byte *pbVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  byte bVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint uVar18;
  int iVar19;
  UINT UVar20;
  int iVar21;
  undefined4 uVar22;
  int iVar23;
  undefined4 uVar24;
  undefined4 *puVar25;
  int aiStack_994 [32];
  undefined4 auStack_914 [3];
  int aiStack_908 [9];
  int aiStack_8e4 [22];
  undefined4 auStack_88c [7];
  undefined4 auStack_870 [497];
  InternalExceptionFrame IStack_ac;
  undefined4 auStack_68 [4];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_20;
  int *piStack_1c;
  BehPanelTy *pBStack_18;
  SpecPanelTy *pSStack_14;
  uint uStack_10;
  int iStack_c;
  int iStack_8;
  
  puVar25 = auStack_68;
  pBStack_18 = this;
  for (iVar8 = 0x14; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar25 = 0;
    puVar25 = puVar25 + 1;
  }
  piVar10 = aiStack_994;
  for (iVar8 = 0x23a; iVar8 != 0; iVar8 = iVar8 + -1) {
    *piVar10 = 0;
    piVar10 = piVar10 + 1;
  }
  IStack_ac.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_ac;
  iVar8 = __setjmp3(IStack_ac.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = pBStack_18;
  if (iVar8 != 0) {
    g_currentExceptionFrame = IStack_ac.previous;
    iVar19 = ReportDebugMessage(s_E____titans_Andrey_behpanel_cpp_007c1694,0x68,0,iVar8,
                                &DAT_007a4ccc,s_BehPanelTy__InitBehPanel_007c16bc);
    if (iVar19 == 0) {
      RaiseInternalException(iVar8,0,s_E____titans_Andrey_behpanel_cpp_007c1694,0x68);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar24 = 0x77;
  uVar22 = 0x99;
  UVar20 = 0x4e5d;
  iVar19 = 0xb;
  iVar8 = 0x84;
  uVar16 = 3;
  uVar14 = 0x36;
  DAT_00801678 = (SpecPanelTy *)pBStack_18;
  pCVar3 = thunk_FUN_00571240(s_BKG_BEHAVIOURW_007c1704,0);
  SpecPanelTy::InitPanel
            ((SpecPanelTy *)this_00,pCVar3,uVar14,uVar16,iVar8,iVar19,UVar20,uVar22,uVar24);
  puVar4 = FUN_00709af0(DAT_00806794,0xb,(byte *)s_BUT_MSK_SI_007c16f4,0xffffffff,0,1,0,
                        (undefined4 *)0x0);
  *(ushort **)(this_00 + 0x2b8) = puVar4;
  *(SpecPanelTy *)(this_00 + 0x1af) = (SpecPanelTy)0x2b;
  *(SpecPanelTy *)(this_00 + 0x1b0) = (SpecPanelTy)0x2c;
  *(SpecPanelTy *)(this_00 + 0x1b1) = (SpecPanelTy)0x5;
  *(SpecPanelTy *)(this_00 + 0x1b2) = (SpecPanelTy)0x6;
  *(SpecPanelTy *)(this_00 + 0x1b3) = (SpecPanelTy)0x4d;
  *(SpecPanelTy *)(this_00 + 0x1b4) = (SpecPanelTy)0x2d;
  uStack_10 = uStack_10 & 0xffffff00;
  do {
    if (DAT_0080874e == '\x03') {
      switch(uStack_10 & 0xff) {
      case 0:
        iStack_c = 0x24;
        iStack_8 = 0x12;
        break;
      case 1:
        iStack_c = 0x61;
        iStack_8 = 0x12;
        break;
      case 2:
        iStack_c = 0x96;
        iStack_8 = 0x12;
        break;
      case 3:
        iStack_c = 0x24;
        iStack_8 = 0x2c;
        break;
      case 4:
        iStack_c = 0x61;
        iStack_8 = 0x2c;
        break;
      case 5:
        iStack_c = 0x96;
        iStack_8 = 0x2c;
      }
      goto switchD_004ed72f_default;
    }
    switch(uStack_10 & 0xff) {
    case 0:
      iStack_c = 0x20;
      iStack_8 = 0x15;
      break;
    case 1:
      iStack_c = 0x5d;
      iStack_8 = 0x15;
      break;
    case 2:
      iStack_c = 0x9a;
      iStack_8 = 0x15;
      break;
    case 3:
      iStack_c = 0x20;
      goto LAB_004ed7fd;
    case 4:
      iStack_c = 0x5d;
      goto LAB_004ed7fd;
    case 5:
      iStack_c = 0x9a;
LAB_004ed7fd:
      iStack_8 = 0x39;
    }
switchD_004ed72f_default:
    uVar9 = uStack_10 & 0xff;
    iVar8 = iStack_c + *(int *)(this_00 + 0x3c);
    aiStack_994[uVar9 * 0x5f] = 0;
    aiStack_994[uVar9 * 0x5f + 2] = iVar8;
    iVar8 = DAT_00806734;
    if (*(int *)(this_00 + 0x5c) != 0) {
      iVar8 = *(int *)(this_00 + 0x44);
    }
    puVar25 = (undefined4 *)0x0;
    iVar23 = 0;
    aiStack_994[uVar9 * 0x5f + 3] = iVar8 + iStack_8;
    iVar21 = 1;
    bVar7 = 0;
    uVar18 = 0xffffffff;
    uVar14 = 0;
    iVar19 = 1;
    auStack_88c[uVar9 * 0x5f] = 1;
    iVar8 = 0;
    auStack_88c[uVar9 * 0x5f + 1] = 1;
    if (DAT_0080874e == '\x03') {
      pcVar5 = thunk_FUN_00529590(*(SpecPanelTy *)(this_00 + uVar9 + 0x1af),0);
      pCVar3 = thunk_FUN_00571240(pcVar5,iVar8);
      pbVar6 = (byte *)FUN_006f2c00(pCVar3,iVar19,uVar14);
      bVar13 = 6;
    }
    else {
      pcVar5 = thunk_FUN_00529590(*(SpecPanelTy *)(this_00 + uVar9 + 0x1af),0);
      pCVar3 = thunk_FUN_00571240(pcVar5,iVar8);
      pbVar6 = (byte *)FUN_006f2c00(pCVar3,iVar19,uVar14);
      bVar13 = 1;
    }
    puVar4 = FUN_00709af0(DAT_00806794,bVar13,pbVar6,uVar18,bVar7,iVar21,iVar23,puVar25);
    iVar8 = *(int *)(puVar4 + 4);
    aiStack_994[uVar9 * 0x5f + 4] = *(int *)(puVar4 + 2);
    aiStack_994[uVar9 * 0x5f + 5] = iVar8;
    pSStack_14 = (SpecPanelTy *)(this_00 + uVar9 * 0x27);
    pSStack_14[0x1ce] = (SpecPanelTy)0x1;
    iVar8 = thunk_FUN_00525390(*(SpecPanelTy *)(this_00 + uVar9 + 0x1af),0);
    *(int *)(pSStack_14 + 0x1cf) = iVar8;
    uVar14 = thunk_FUN_005272b0(*(SpecPanelTy *)(this_00 + uVar9 + 0x1af));
    pSVar2 = pSStack_14;
    auStack_914[uVar9 * 0x5f] = 0x101;
    auStack_914[uVar9 * 0x5f + 1] = 3;
    auStack_914[uVar9 * 0x5f + 2] = 0x4201;
    *(undefined4 *)(pSVar2 + 0x1d7) = uVar14;
    *(undefined2 *)(aiStack_908 + uVar9 * 0x5f) = 0;
    *(undefined2 *)((int)aiStack_908 + (uVar9 * 0xbe + 1) * 2) = 1;
    aiStack_908[uVar9 * 0x5f + 1] = (int)(pSVar2 + 0x1ce);
    aiStack_908[uVar9 * 0x5f + 3] = 0;
    aiStack_8e4[uVar9 * 0x5f + 3] = 1;
    aiStack_908[uVar9 * 0x5f + 6] = 0x101;
    pSVar2[0x1db] = (SpecPanelTy)0x3;
    iVar8 = *(int *)(pSVar2 + 0x1d7);
    aiStack_908[uVar9 * 0x5f + 7] = 3;
    aiStack_908[uVar9 * 0x5f + 8] = 0x4202;
    *(undefined2 *)(aiStack_8e4 + uVar9 * 0x5f) = 0;
    *(undefined2 *)((int)aiStack_8e4 + (uVar9 * 0xbe + 1) * 2) = 1;
    aiStack_8e4[uVar9 * 0x5f + 1] = (int)(pSVar2 + 0x1ce);
    if (-1 < iVar8) {
      uVar14 = *(undefined4 *)(&DAT_00807e66 + iVar8 * 4);
      auStack_870[uVar9 * 0x5f + 2] = 8;
      auStack_870[uVar9 * 0x5f + 3] = uVar14;
    }
    bVar7 = (byte)uStack_10;
    auStack_88c[uVar9 * 0x5f + 2] = 1;
    iVar8 = iStack_20;
    if (DAT_0080874e == '\x03') {
      if (bVar7 == 0) {
LAB_004eda0d:
        iVar19 = 0;
      }
      else {
        if ((bVar7 < 2) || (4 < bVar7)) goto LAB_004eda47;
        if (bVar7 == 0) goto LAB_004eda0d;
        iVar19 = uVar9 - 1;
      }
      uVar14 = FUN_0070b3a0(*(int *)(this_00 + 0x2b8),iVar19);
      bVar7 = (byte)uStack_10;
      auStack_870[iVar8 * 0x5f] = uVar14;
      auStack_870[iVar8 * 0x5f + 1] = 0x3c;
    }
LAB_004eda47:
    uStack_10 = CONCAT31(uStack_10._1_3_,bVar7 + 1);
    if (5 < (byte)(bVar7 + 1)) {
      uStack_58 = *(undefined4 *)(this_00 + 8);
      piStack_1c = aiStack_994;
      iStack_30 = (-(uint)(DAT_0080874e != '\x03') & 0xfffffff2) + 0xb20e;
      auStack_68[0] = 1;
      auStack_68[1] = 0xffffffff;
      iStack_20 = 6;
      uStack_54 = 2;
      uStack_50 = 0xb1ff;
      uStack_34 = 2;
      uStack_38 = uStack_58;
      (**(code **)(**(int **)(this_00 + 0xc) + 8))
                (9,(SpecPanelTy *)(this_00 + 0x1be),0,auStack_68,0);
      uVar17 = 1;
      iVar8 = *(int *)this_00;
      uVar15 = 0;
      uVar12 = 0x4e8a;
      uVar24 = 0;
      uVar22 = 2;
      uVar16 = 0xc0af;
      uVar14 = 0xc09f;
      pCVar3 = thunk_FUN_00571240(s_BUT_BHOLD_007c16e8,0);
      uVar14 = (**(code **)(iVar8 + 4))
                         (0,0,(-(DAT_0080874e != '\x03') & 2U) + 0x1f,
                          (-(DAT_0080874e != '\x03') & 7U) + 0x5a,0,1,1,pCVar3,uVar14,uVar16,uVar22,
                          uVar24,uVar12,uVar15,uVar17);
      uVar11 = 1;
      iVar8 = *(int *)this_00;
      uVar17 = 0;
      uVar15 = 0x4e88;
      uVar12 = 0;
      uVar24 = 2;
      uVar22 = 0xc0b0;
      uVar16 = 0xc0a0;
      *(undefined4 *)(this_00 + 0x1c2) = uVar14;
      pCVar3 = thunk_FUN_00571240(s_BUT_BHOLD_007c16e8,0);
      uVar14 = (**(code **)(iVar8 + 4))
                         (0,0,(-(DAT_0080874e != '\x03') & 6U) + 0x45,
                          (-(DAT_0080874e != '\x03') & 7U) + 0x5a,0,1,1,pCVar3,uVar16,uVar22,uVar24,
                          uVar12,uVar15,uVar17,uVar11);
      uVar11 = 1;
      iVar8 = *(int *)this_00;
      uVar17 = 0;
      uVar15 = 0x4e89;
      uVar12 = 0;
      uVar24 = 2;
      uVar22 = 0xc0b1;
      uVar16 = 0xc0a1;
      *(undefined4 *)(this_00 + 0x1c6) = uVar14;
      pCVar3 = thunk_FUN_00571240(s_BUT_BAGR_007c16dc,0);
      uVar14 = (**(code **)(iVar8 + 4))
                         (0,0,(-(uint)(DAT_0080874e != '\x03') & 0xfffffffd) + 0xb3,
                          (-(DAT_0080874e != '\x03') & 7U) + 0x5a,0,1,1,pCVar3,uVar16,uVar22,uVar24,
                          uVar12,uVar15,uVar17,uVar11);
      *(undefined4 *)(this_00 + 0x1ca) = uVar14;
      g_currentExceptionFrame = IStack_ac.previous;
      return;
    }
  } while( true );
}

