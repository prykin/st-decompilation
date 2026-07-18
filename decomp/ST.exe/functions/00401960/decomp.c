
void thunk_FUN_004ed630(void)

{
  code *pcVar1;
  LPSTR pCVar2;
  ushort *puVar3;
  char *pcVar4;
  byte *pbVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  byte bVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint uVar17;
  int iVar18;
  UINT UVar19;
  int iVar20;
  undefined4 uVar21;
  int iVar22;
  undefined4 uVar23;
  undefined4 *puVar24;
  int aiStack_994 [32];
  undefined4 auStack_914 [3];
  int aiStack_908 [9];
  int aiStack_8e4 [22];
  undefined4 auStack_88c [7];
  undefined4 auStack_870 [497];
  undefined4 uStack_ac;
  undefined4 auStack_a8 [16];
  undefined4 auStack_68 [4];
  int iStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_20;
  int *piStack_1c;
  int *piStack_18;
  int iStack_14;
  uint uStack_10;
  int iStack_c;
  int iStack_8;
  
  puVar24 = auStack_68;
  for (iVar7 = 0x14; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar24 = 0;
    puVar24 = puVar24 + 1;
  }
  piVar9 = aiStack_994;
  for (iVar7 = 0x23a; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar9 = 0;
    piVar9 = piVar9 + 1;
  }
  uStack_ac = DAT_00858df8;
  DAT_00858df8 = &uStack_ac;
  iVar7 = __setjmp3(auStack_a8,0,unaff_EDI,unaff_ESI);
  if (iVar7 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_ac;
    iVar18 = FUN_006ad4d0(s_E____titans_Andrey_behpanel_cpp_007c1694,0x68,0,iVar7,&DAT_007a4ccc);
    if (iVar18 == 0) {
      FUN_006a5e40(iVar7,0,0x7c1694,0x68);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar23 = 0x77;
  uVar21 = 0x99;
  UVar19 = 0x4e5d;
  iVar18 = 0xb;
  iVar7 = 0x84;
  uVar15 = 3;
  uVar13 = 0x36;
  DAT_00801678 = piStack_18;
  pCVar2 = thunk_FUN_00571240(s_BKG_BEHAVIOURW_007c1704,0);
  thunk_FUN_0053e3f0(pCVar2,uVar13,uVar15,iVar7,iVar18,UVar19,uVar21,uVar23);
  puVar3 = FUN_00709af0(DAT_00806794,0xb,(byte *)s_BUT_MSK_SI_007c16f4,0xffffffff,0,1,0,
                        (undefined4 *)0x0);
  piStack_18[0xae] = (int)puVar3;
  *(undefined1 *)((int)piStack_18 + 0x1af) = 0x2b;
  *(undefined1 *)(piStack_18 + 0x6c) = 0x2c;
  *(undefined1 *)((int)piStack_18 + 0x1b1) = 5;
  *(undefined1 *)((int)piStack_18 + 0x1b2) = 6;
  *(undefined1 *)((int)piStack_18 + 0x1b3) = 0x4d;
  *(undefined1 *)(piStack_18 + 0x6d) = 0x2d;
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
    uVar8 = uStack_10 & 0xff;
    iVar7 = iStack_c + piStack_18[0xf];
    aiStack_994[uVar8 * 0x5f] = 0;
    aiStack_994[uVar8 * 0x5f + 2] = iVar7;
    iVar7 = DAT_00806734;
    if (piStack_18[0x17] != 0) {
      iVar7 = piStack_18[0x11];
    }
    puVar24 = (undefined4 *)0x0;
    iVar22 = 0;
    aiStack_994[uVar8 * 0x5f + 3] = iVar7 + iStack_8;
    iVar20 = 1;
    bVar6 = 0;
    uVar17 = 0xffffffff;
    uVar13 = 0;
    iVar18 = 1;
    auStack_88c[uVar8 * 0x5f] = 1;
    iVar7 = 0;
    auStack_88c[uVar8 * 0x5f + 1] = 1;
    if (DAT_0080874e == '\x03') {
      pcVar4 = thunk_FUN_00529590(*(undefined1 *)(uVar8 + 0x1af + (int)piStack_18),0);
      pCVar2 = thunk_FUN_00571240(pcVar4,iVar7);
      pbVar5 = (byte *)FUN_006f2c00(pCVar2,iVar18,uVar13);
      bVar12 = 6;
    }
    else {
      pcVar4 = thunk_FUN_00529590(*(undefined1 *)(uVar8 + 0x1af + (int)piStack_18),0);
      pCVar2 = thunk_FUN_00571240(pcVar4,iVar7);
      pbVar5 = (byte *)FUN_006f2c00(pCVar2,iVar18,uVar13);
      bVar12 = 1;
    }
    puVar3 = FUN_00709af0(DAT_00806794,bVar12,pbVar5,uVar17,bVar6,iVar20,iVar22,puVar24);
    iVar7 = *(int *)(puVar3 + 4);
    aiStack_994[uVar8 * 0x5f + 4] = *(int *)(puVar3 + 2);
    aiStack_994[uVar8 * 0x5f + 5] = iVar7;
    iStack_14 = uVar8 * 0x27 + (int)piStack_18;
    *(undefined1 *)(iStack_14 + 0x1ce) = 1;
    iVar7 = thunk_FUN_00525390(*(undefined1 *)(uVar8 + 0x1af + (int)piStack_18),0);
    *(int *)(iStack_14 + 0x1cf) = iVar7;
    uVar13 = thunk_FUN_005272b0(*(undefined1 *)(uVar8 + 0x1af + (int)piStack_18));
    iVar18 = iStack_14;
    auStack_914[uVar8 * 0x5f] = 0x101;
    auStack_914[uVar8 * 0x5f + 1] = 3;
    auStack_914[uVar8 * 0x5f + 2] = 0x4201;
    *(undefined4 *)(iVar18 + 0x1d7) = uVar13;
    *(undefined2 *)(aiStack_908 + uVar8 * 0x5f) = 0;
    *(undefined2 *)((int)aiStack_908 + (uVar8 * 0xbe + 1) * 2) = 1;
    aiStack_908[uVar8 * 0x5f + 1] = iVar18 + 0x1ce;
    aiStack_908[uVar8 * 0x5f + 3] = 0;
    aiStack_8e4[uVar8 * 0x5f + 3] = 1;
    aiStack_908[uVar8 * 0x5f + 6] = 0x101;
    *(undefined1 *)(iVar18 + 0x1db) = 3;
    iVar7 = *(int *)(iVar18 + 0x1d7);
    aiStack_908[uVar8 * 0x5f + 7] = 3;
    aiStack_908[uVar8 * 0x5f + 8] = 0x4202;
    *(undefined2 *)(aiStack_8e4 + uVar8 * 0x5f) = 0;
    *(undefined2 *)((int)aiStack_8e4 + (uVar8 * 0xbe + 1) * 2) = 1;
    aiStack_8e4[uVar8 * 0x5f + 1] = iVar18 + 0x1ce;
    if (-1 < iVar7) {
      uVar13 = *(undefined4 *)(&DAT_00807e66 + iVar7 * 4);
      auStack_870[uVar8 * 0x5f + 2] = 8;
      auStack_870[uVar8 * 0x5f + 3] = uVar13;
    }
    bVar6 = (byte)uStack_10;
    auStack_88c[uVar8 * 0x5f + 2] = 1;
    iVar7 = iStack_20;
    if (DAT_0080874e == '\x03') {
      if (bVar6 == 0) {
LAB_004eda0d:
        iVar18 = 0;
      }
      else {
        if ((bVar6 < 2) || (4 < bVar6)) goto LAB_004eda47;
        if (bVar6 == 0) goto LAB_004eda0d;
        iVar18 = uVar8 - 1;
      }
      uVar13 = FUN_0070b3a0(piStack_18[0xae],iVar18);
      bVar6 = (byte)uStack_10;
      auStack_870[iVar7 * 0x5f] = uVar13;
      auStack_870[iVar7 * 0x5f + 1] = 0x3c;
    }
LAB_004eda47:
    uStack_10 = CONCAT31(uStack_10._1_3_,bVar6 + 1);
    if (5 < (byte)(bVar6 + 1)) {
      iStack_58 = piStack_18[2];
      piStack_1c = aiStack_994;
      iStack_30 = (-(uint)(DAT_0080874e != '\x03') & 0xfffffff2) + 0xb20e;
      auStack_68[0] = 1;
      auStack_68[1] = 0xffffffff;
      iStack_20 = 6;
      uStack_54 = 2;
      uStack_50 = 0xb1ff;
      uStack_34 = 2;
      iStack_38 = iStack_58;
      (**(code **)(*(int *)piStack_18[3] + 8))(9,(int)piStack_18 + 0x1be,0,auStack_68,0);
      uVar16 = 1;
      iVar7 = *piStack_18;
      uVar14 = 0;
      uVar11 = 0x4e8a;
      uVar23 = 0;
      uVar21 = 2;
      uVar15 = 0xc0af;
      uVar13 = 0xc09f;
      pCVar2 = thunk_FUN_00571240(s_BUT_BHOLD_007c16e8,0);
      uVar13 = (**(code **)(iVar7 + 4))
                         (0,0,(-(DAT_0080874e != '\x03') & 2U) + 0x1f,
                          (-(DAT_0080874e != '\x03') & 7U) + 0x5a,0,1,1,pCVar2,uVar13,uVar15,uVar21,
                          uVar23,uVar11,uVar14,uVar16);
      uVar10 = 1;
      iVar7 = *piStack_18;
      uVar16 = 0;
      uVar14 = 0x4e88;
      uVar11 = 0;
      uVar23 = 2;
      uVar21 = 0xc0b0;
      uVar15 = 0xc0a0;
      *(undefined4 *)((int)piStack_18 + 0x1c2) = uVar13;
      pCVar2 = thunk_FUN_00571240(s_BUT_BHOLD_007c16e8,0);
      uVar13 = (**(code **)(iVar7 + 4))
                         (0,0,(-(DAT_0080874e != '\x03') & 6U) + 0x45,
                          (-(DAT_0080874e != '\x03') & 7U) + 0x5a,0,1,1,pCVar2,uVar15,uVar21,uVar23,
                          uVar11,uVar14,uVar16,uVar10);
      uVar10 = 1;
      iVar7 = *piStack_18;
      uVar16 = 0;
      uVar14 = 0x4e89;
      uVar11 = 0;
      uVar23 = 2;
      uVar21 = 0xc0b1;
      uVar15 = 0xc0a1;
      *(undefined4 *)((int)piStack_18 + 0x1c6) = uVar13;
      pCVar2 = thunk_FUN_00571240(s_BUT_BAGR_007c16dc,0);
      uVar13 = (**(code **)(iVar7 + 4))
                         (0,0,(-(uint)(DAT_0080874e != '\x03') & 0xfffffffd) + 0xb3,
                          (-(DAT_0080874e != '\x03') & 7U) + 0x5a,0,1,1,pCVar2,uVar15,uVar21,uVar23,
                          uVar11,uVar14,uVar16,uVar10);
      *(undefined4 *)((int)piStack_18 + 0x1ca) = uVar13;
      DAT_00858df8 = (undefined4 *)uStack_ac;
      return;
    }
  } while( true );
}

