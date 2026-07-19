
undefined4 * __thiscall STPlaySystemC::PrepareMail(STPlaySystemC *this)

{
  STPlaySystemC *pSVar1;
  int *piVar2;
  char cVar3;
  code *pcVar4;
  STPlaySystemC SVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  undefined4 *puVar10;
  undefined3 uVar14;
  char *pcVar11;
  undefined4 uVar12;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar13;
  undefined4 *extraout_EAX;
  int *piVar15;
  uint uVar16;
  undefined4 *puVar17;
  uint *puVar18;
  undefined4 unaff_ESI;
  uint *puVar19;
  STPlaySystemC *pSVar20;
  undefined4 *puVar21;
  void *unaff_EDI;
  uint *puVar22;
  char *pcVar23;
  undefined4 *puVar24;
  undefined1 uVar25;
  char acStack_17c [260];
  InternalExceptionFrame IStack_78;
  uint uStack_34;
  int iStack_30;
  STPlaySystemC *pSStack_2c;
  uint uStack_28;
  uint uStack_24;
  int iStack_20;
  char cStack_19;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  STPlaySystemC *pSStack_c;
  uint *puStack_8;
  
  uStack_34 = 7;
  puStack_8 = (uint *)0x0;
  IStack_78.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_78;
  pSStack_c = this;
  iVar7 = Library::MSVCRT::__setjmp3(IStack_78.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar20 = pSStack_c;
  if (iVar7 != 0) {
    g_currentExceptionFrame = IStack_78.previous;
    iVar13 = ReportDebugMessage(s_E____titans_Andrey_tplaysys_cpp_007c8430,0x742,0,iVar7,
                                &DAT_007a4ccc,s_STPlaySystemC__PrepareMail_007c85dc);
    if (iVar13 == 0) {
      RaiseInternalException(iVar7,0,s_E____titans_Andrey_tplaysys_cpp_007c8430,0x744);
      return extraout_EAX;
    }
    pcVar4 = (code *)swi(3);
    puVar10 = (undefined4 *)(*pcVar4)();
    return puVar10;
  }
  if (DAT_0080877e != '\0') {
    if (DAT_00808783 == '\x03') {
      Library::DKW::DDX::FUN_006b7510(DAT_00811764,-1,&iStack_20,-1,0);
      uStack_18 = 0;
      if (0 < iStack_20) {
        do {
          iVar7 = FUN_00715630(DAT_00811764,-1,&uStack_14,&iStack_30,&puStack_8,(uint *)0x0,-1,0);
          pSVar20 = pSStack_c;
          if (iVar7 == -0x4d) {
            puVar10 = (undefined4 *)thunk_FUN_00550380(6);
            g_currentExceptionFrame = IStack_78.previous;
            return puVar10;
          }
          if (iVar7 != 1) goto LAB_0054f531;
          uVar8 = (uint)DAT_00808aaf;
          bVar6 = true;
          if (uVar8 != 0) {
            piVar15 = &DAT_00808af0;
            do {
              if (*piVar15 == iStack_30) {
                bVar6 = false;
              }
              piVar15 = piVar15 + 0x27;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          if (bVar6) goto joined_r0x0054f3c5;
          switch(uStack_14) {
          case 0x11:
            thunk_FUN_005504f0(pSStack_c,iStack_30,0x426f,1);
            if (iStack_30 == *(int *)(pSVar20 + 0x61)) {
              *(undefined4 *)(pSVar20 + 0x59) = 0;
            }
            goto joined_r0x0054f526;
          default:
joined_r0x0054f526:
            if (puStack_8 == (uint *)0x0) break;
            goto LAB_0054f52c;
          case 0x13:
            if (iStack_30 == *(int *)(pSStack_c + 0x61)) {
              *(undefined4 *)(pSStack_c + 0x59) = 0;
            }
            if (puStack_8 != (uint *)0x0) {
              FUN_006ab060(&puStack_8);
            }
            pSVar1 = pSStack_c;
            if (*(int *)(pSVar20 + 0xec) != 0) {
              thunk_FUN_005504f0(pSStack_c,iStack_30,0x4274,0);
              *(undefined4 *)(pSVar1 + 0xe8) = 1;
            }
            break;
          case 0x1a:
          case 0x35:
            thunk_FUN_00550430(pSStack_c,iStack_30,0);
            goto joined_r0x0054f3c5;
          case 0x30:
            if (*(int *)(pSStack_c + 0xe8) == 0) {
              FUN_006b9910((undefined4 *)(pSStack_c + 0x39),puStack_8);
            }
            break;
          case 0x33:
            thunk_FUN_00550830((int)puStack_8);
            goto joined_r0x0054f3c5;
          case 0x36:
            thunk_FUN_005505d0(pSStack_c,iStack_30,(int *)puStack_8);
joined_r0x0054f3c5:
            if (puStack_8 != (uint *)0x0) {
LAB_0054f52c:
              FUN_006ab060(&puStack_8);
            }
            break;
          case 0x38:
            if (((*(int *)(pSStack_c + 0xe8) != 0) || (puStack_8 == (uint *)0x0)) ||
               (*puStack_8 == 0)) break;
            puVar18 = puStack_8 + 1;
            uStack_24 = 0;
            if (*puStack_8 != 0) {
              do {
                pSStack_2c = (STPlaySystemC *)
                             (*(int *)((int)puVar18 + 0x13) + *(int *)((int)puVar18 + 0xf));
                uVar8 = (int)pSStack_2c + 0x1b;
                puVar9 = Library::DKW::LIB::FUN_006aac10(uVar8);
                puVar19 = puVar18;
                puVar22 = puVar9;
                for (uVar16 = uVar8 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                  *puVar22 = *puVar19;
                  puVar19 = puVar19 + 1;
                  puVar22 = puVar22 + 1;
                }
                for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                  *(char *)puVar22 = (char)*puVar19;
                  puVar19 = (uint *)((int)puVar19 + 1);
                  puVar22 = (uint *)((int)puVar22 + 1);
                }
                FUN_006b9910((undefined4 *)(pSStack_c + 0x39),puVar9);
                puVar18 = (uint *)((int)puVar18 + (int)pSStack_2c + 0x1b);
                uStack_24 = uStack_24 + 1;
              } while (uStack_24 < *puStack_8);
            }
            goto LAB_0054f52c;
          case 0x42:
            pcVar11 = (char *)FUN_006b0140(0x426a,DAT_00807618);
            uVar8 = 0xffffffff;
            do {
              pcVar23 = pcVar11;
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              pcVar23 = pcVar11 + 1;
              cVar3 = *pcVar11;
              pcVar11 = pcVar23;
            } while (cVar3 != '\0');
            uVar8 = ~uVar8;
            pcVar11 = pcVar23 + -uVar8;
            pcVar23 = acStack_17c;
            for (uVar16 = uVar8 >> 2; puVar18 = puStack_8, uVar16 != 0; uVar16 = uVar16 - 1) {
              *(undefined4 *)pcVar23 = *(undefined4 *)pcVar11;
              pcVar11 = pcVar11 + 4;
              pcVar23 = pcVar23 + 4;
            }
            bVar6 = puStack_8 != (uint *)0x0;
            for (uVar8 = uVar8 & 3; pSVar20 = pSStack_c, uVar8 != 0; uVar8 = uVar8 - 1) {
              *pcVar23 = *pcVar11;
              pcVar11 = pcVar11 + 1;
              pcVar23 = pcVar23 + 1;
            }
            if ((bVar6) && ((*(int *)(pSStack_c + 0xf0) != 0 || ((char)*puVar18 != '\0')))) {
              FUN_006ab060(&puStack_8);
              *(undefined4 *)(pSVar20 + 0x59) = 1;
              *(undefined4 *)(pSVar20 + 0x5d) = 0;
              *(int *)(pSVar20 + 0x61) = iStack_30;
              uVar8 = 0;
              if (DAT_00808aaf != 0) {
                pcVar11 = &DAT_00808af6;
                do {
                  if ((*(int *)(pcVar11 + -6) == iStack_30) && (*pcVar11 != '\0')) {
                    wsprintfA(acStack_17c,s__s___s__007c85fc,acStack_17c,pcVar11 + -0x46);
                    break;
                  }
                  uVar8 = uVar8 + 1;
                  pcVar11 = pcVar11 + 0x9c;
                } while (uVar8 < DAT_00808aaf);
              }
              if (DAT_008016d8 != (void *)0x0) {
                thunk_FUN_0052d320(DAT_008016d8,acStack_17c,9);
              }
            }
          }
LAB_0054f531:
          uStack_18 = uStack_18 + 1;
          pSVar20 = pSStack_c;
        } while ((int)uStack_18 < iStack_20);
      }
    }
    puVar10 = *(undefined4 **)(pSVar20 + 0x39);
    pSVar1 = pSVar20 + 0x39;
    if ((puVar10 == (undefined4 *)0x0) && (*(int *)(pSVar20 + 0x28) == 0)) {
      *(undefined2 *)(*(int *)(pSVar20 + 0x3d) + 5) = 0;
      g_currentExceptionFrame = IStack_78.previous;
      return puVar10;
    }
    *(undefined1 *)(*(int *)(pSVar20 + 0x3d) + 4) = 0;
    *(undefined2 *)(*(int *)(pSVar20 + 0x3d) + 5) = 0;
    uVar8 = uStack_34;
    if (((int)(uint)(byte)pSVar20[0x4d] < *(int *)(&DAT_007c2af8 + (uint)DAT_0080733b * 0x18)) &&
       (DAT_00808784 == 0)) {
      pSVar20[0x4d] = (STPlaySystemC)((char)pSVar20[0x4d] + 1);
      g_currentExceptionFrame = IStack_78.previous;
      return puVar10;
    }
    for (; puVar10 != (undefined4 *)0x0; puVar10 = (undefined4 *)*puVar10) {
      piVar15 = (int *)((int)puVar10 + 0x13);
      piVar2 = (int *)((int)puVar10 + 0xf);
      uVar8 = uVar8 + 0x1b + *piVar15 + *piVar2;
    }
    uStack_34 = uVar8;
    pSStack_2c = pSVar1;
    if (*(uint *)(pSVar20 + 0x45) < uVar8) {
      iVar7 = Library::DKW::LIB::FUN_006acf50(*(undefined4 **)(pSVar20 + 0x3d),uVar8);
      *(int *)(pSVar20 + 0x3d) = iVar7;
      *(uint *)(pSVar20 + 0x45) = uVar8;
    }
    puVar17 = (undefined4 *)(*(int *)(pSVar20 + 0x3d) + 7);
    puVar10 = *(undefined4 **)pSVar1;
    for (; puVar10 != (undefined4 *)0x0; puVar10 = (undefined4 *)*puVar10) {
      uStack_34 = *(int *)((int)puVar10 + 0x13) + 0x1b + *(int *)((int)puVar10 + 0xf);
      puVar21 = puVar10;
      puVar24 = puVar17;
      for (uVar16 = uStack_34 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *puVar24 = *puVar21;
        puVar21 = puVar21 + 1;
        puVar24 = puVar24 + 1;
      }
      for (uVar16 = uStack_34 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined1 *)puVar24 = *(undefined1 *)puVar21;
        puVar21 = (undefined4 *)((int)puVar21 + 1);
        puVar24 = (undefined4 *)((int)puVar24 + 1);
      }
      puVar17 = (undefined4 *)((int)puVar17 + uStack_34);
      *(short *)(*(int *)(pSStack_c + 0x3d) + 5) = *(short *)(*(int *)(pSStack_c + 0x3d) + 5) + 1;
      pSVar1 = pSStack_2c;
    }
    puVar10 = (undefined4 *)0x0;
    uStack_28 = uVar8;
    if (*(int *)pSVar1 != 0) {
      puVar10 = (undefined4 *)FUN_006b9890((int *)pSVar1);
    }
    pSVar20 = pSStack_c;
    if (DAT_00808783 != '\x03') {
      g_currentExceptionFrame = IStack_78.previous;
      return puVar10;
    }
    iVar7 = *(int *)(pSStack_c + 0x3d);
    SVar5 = pSStack_c[0x4d];
    uVar14 = (undefined3)((uint)puVar10 >> 8);
    puVar10 = (undefined4 *)CONCAT31(uVar14,SVar5);
    if (*(short *)(iVar7 + 5) == 0) {
      SVar5 = (STPlaySystemC)((char)SVar5 + 1);
      puVar10 = (undefined4 *)CONCAT31(uVar14,SVar5);
      pSStack_c[0x4d] = SVar5;
      if ((int)(uint)(byte)SVar5 <
          *(int *)(s_FrmPanelTy__GetMessage_007c2ae0 + (uint)DAT_0080733b * 0x18 + 0xc)) {
        g_currentExceptionFrame = IStack_78.previous;
        return puVar10;
      }
      if (DAT_00808783 == '\x03') {
        *(STPlaySystemC *)(iVar7 + 4) = SVar5;
        *(undefined2 *)(*(int *)(pSStack_c + 0x3d) + 5) = 0;
        iVar7 = thunk_FUN_0054ebb0(pSStack_c,*(char **)(pSStack_c + 0x3d),7);
        puVar10 = (undefined4 *)0x0;
        if (iVar7 != 0) {
          uVar25 = 7;
LAB_0054f6c6:
          puVar10 = (undefined4 *)thunk_FUN_00550380(uVar25);
          g_currentExceptionFrame = IStack_78.previous;
          return puVar10;
        }
      }
    }
    else {
      if (SVar5 != (STPlaySystemC)0x0) {
        *(STPlaySystemC *)(iVar7 + 4) = SVar5;
      }
      if (DAT_00808783 == '\x03') {
        iVar7 = thunk_FUN_0054ebb0(pSStack_c,*(char **)(pSStack_c + 0x3d),uStack_28);
        puVar10 = (undefined4 *)0x0;
        if (iVar7 != 0) {
          uVar25 = 8;
          goto LAB_0054f6c6;
        }
      }
    }
    pSVar20[0x4d] = (STPlaySystemC)0x0;
    g_currentExceptionFrame = IStack_78.previous;
    return puVar10;
  }
  iStack_10 = 0;
  pSStack_2c = (STPlaySystemC *)timeGetTime();
  Library::DKW::DDX::FUN_006b7510(DAT_00811764,-1,&iStack_20,-1,0);
  pSVar20 = pSStack_c;
  if (*(int *)(pSStack_c + 0x6d) == 0) {
    bVar6 = thunk_FUN_00550110((int)pSStack_c);
    if ((undefined4 *)CONCAT31(extraout_var_00,bVar6) != (undefined4 *)0x0) {
      g_currentExceptionFrame = IStack_78.previous;
      return (undefined4 *)CONCAT31(extraout_var_00,bVar6);
    }
    if (iStack_20 < 3) {
      if (*(int *)(pSVar20 + 0x59) == 0) {
        if (DAT_00807654 <
            *(int *)(s_FrmPanelTy__GetMessage_007c2ae0 + (uint)DAT_0080733b * 0x18 + 0x14)) {
          DAT_00807654 = DAT_00807654 + 1;
        }
      }
      else {
        FUN_006b6500((int)DAT_00811764,1);
        iVar7 = FUN_00715360(DAT_00811764,1,'C',(char *)0x0,0,0,0xffffffff);
        if (iVar7 != 0) {
          uVar25 = 0xc;
          goto LAB_0054f76e;
        }
        FUN_006b6500((int)DAT_00811764,DAT_0080733c);
        *(undefined4 *)(pSVar20 + 0x59) = 0;
      }
    }
    else {
      if ((5 < DAT_00807654) && (0 < DAT_00807654)) {
        DAT_00807654 = DAT_00807654 + -1;
      }
      if ((pSVar20[0x38] == (STPlaySystemC)0x0) &&
         (((0x32 < iStack_20 && (*(int *)(pSVar20 + 0x59) == 0)) || (100 < iStack_20)))) {
        FUN_006b6500((int)DAT_00811764,1);
        cStack_19 = '\x01';
        iVar7 = FUN_00715360(DAT_00811764,1,'B',&cStack_19,1,0,0xffffffff);
        if (iVar7 != 0) {
          uVar25 = 0xb;
          goto LAB_0054f76e;
        }
        FUN_006b6500((int)DAT_00811764,DAT_0080733c);
        *(undefined4 *)(pSVar20 + 0x59) = 1;
      }
    }
    iStack_10 = 1;
    goto LAB_0054fad8;
  }
  if (*(int *)(pSStack_c + 0x71) != 0) {
    bVar6 = thunk_FUN_00550110((int)pSStack_c);
    if ((undefined4 *)CONCAT31(extraout_var,bVar6) != (undefined4 *)0x0) {
      g_currentExceptionFrame = IStack_78.previous;
      return (undefined4 *)CONCAT31(extraout_var,bVar6);
    }
    iVar7 = thunk_FUN_0054eb20(pSVar20,&uStack_28);
    if (iVar7 == 0) goto switchD_0054fb75_caseD_37;
    *(undefined4 *)(pSVar20 + 0x71) = 0;
    *(undefined4 *)(pSVar20 + 0x6d) = 0;
    *(undefined4 *)(pSVar20 + 0x79) = 0;
    uStack_14 = 0x31;
    goto LAB_0054fbb7;
  }
  iVar7 = FUN_006e51b0(0x807620);
  if (30000 < iVar7 - *(int *)(pSVar20 + 0x79)) {
    uVar25 = 10;
LAB_0054f76e:
    puVar10 = (undefined4 *)thunk_FUN_00550380(uVar25);
    g_currentExceptionFrame = IStack_78.previous;
    return puVar10;
  }
  iVar7 = FUN_006e51b0(0x807620);
  if (*(short *)(pSVar20 + 0x7d) * 4000 < iVar7 - *(int *)(pSVar20 + 0x79)) {
    FUN_006b6500((int)DAT_00811764,1);
    FUN_00715360(DAT_00811764,1,'6',(char *)(pSVar20 + 0x41),4,0,0xffffffff);
    FUN_006b6500((int)DAT_00811764,DAT_0080733c);
    *(short *)(pSVar20 + 0x7d) = *(short *)(pSVar20 + 0x7d) + 1;
  }
  iVar7 = FUN_00715630(DAT_00811764,0x31,&uStack_14,(int *)&uStack_24,&puStack_8,&uStack_18,
                       *(int *)(pSVar20 + 0x41),0);
  if (*(int *)(pSVar20 + 0x75) == 0) {
    if (iVar7 != 1) goto LAB_0054f98b;
  }
  else {
    *(undefined4 *)(pSVar20 + 0x75) = 0;
    if (iVar7 != 1) {
      FUN_006b6500((int)DAT_00811764,1);
      iVar7 = FUN_00715360(DAT_00811764,1,'6',(char *)(pSVar20 + 0x41),4,0,0xffffffff);
      if (iVar7 == 0) {
        FUN_006b6500((int)DAT_00811764,DAT_0080733c);
        if ((byte)pSVar20[0xbb] < 5) {
          uVar12 = FUN_006e51b0(0x807620);
          *(undefined4 *)(pSVar20 + (uint)(byte)pSVar20[0xbb] * 4 + 0xa7) = uVar12;
          SVar5 = pSVar20[0xbb];
          pSVar20[0xbb] = (STPlaySystemC)((char)SVar5 + '\x01');
          g_currentExceptionFrame = IStack_78.previous;
          return (undefined4 *)CONCAT31((int3)((uint)uVar12 >> 8),(char)SVar5 + '\x01');
        }
        *(int *)(pSVar20 + 0xa7) = *(int *)(pSVar20 + 0xab);
        *(undefined4 *)(pSVar20 + 0xab) = *(undefined4 *)(pSVar20 + 0xaf);
        *(undefined4 *)(pSVar20 + 0xaf) = *(undefined4 *)(pSVar20 + 0xb3);
        *(undefined4 *)(pSVar20 + 0xb3) = *(undefined4 *)(pSVar20 + 0xb7);
        iVar7 = FUN_006e51b0(0x807620);
        *(int *)(pSVar20 + 0xb7) = iVar7;
        if (DAT_0080735e == '\0') {
          g_currentExceptionFrame = IStack_78.previous;
          return (undefined4 *)CONCAT31((int3)((uint)iVar7 >> 8),DAT_0080735e);
        }
        uVar8 = iVar7 - *(int *)(pSVar20 + 0xa7);
        if (3000 < uVar8 / 5) {
          g_currentExceptionFrame = IStack_78.previous;
          return (undefined4 *)(uVar8 * -0x33333333);
        }
        puVar10 = (undefined4 *)0x0;
        if (DAT_008016d8 != (void *)0x0) {
          uVar8 = 9;
          pcVar11 = (char *)FUN_006b0140(17000,DAT_00807618);
          puVar10 = (undefined4 *)thunk_FUN_0052d320(DAT_008016d8,pcVar11,uVar8);
        }
        pSVar20[0xbb] = (STPlaySystemC)0x0;
        g_currentExceptionFrame = IStack_78.previous;
        return puVar10;
      }
      uVar25 = 0x10;
      goto LAB_0054f76e;
    }
  }
  if ((DAT_0080735e != '\0') && (DAT_008016d8 != (void *)0x0)) {
    uVar8 = 8;
    pcVar11 = (char *)FUN_006b0140(0x426c,DAT_00807618);
    thunk_FUN_0052d320(DAT_008016d8,pcVar11,uVar8);
  }
LAB_0054f98b:
  iStack_10 = 1;
  do {
    if (iVar7 == -0x4d) {
      thunk_FUN_00550380(0xe);
      goto LAB_0054fad8;
    }
    if (iVar7 == 0) {
      if (60000 < (int)pSStack_2c - *(int *)(pSVar20 + 0x83)) {
        thunk_FUN_00550380(0xd);
      }
      goto LAB_0054fad8;
    }
    if (iVar7 != 1) goto LAB_0054fad8;
    *(STPlaySystemC **)(pSVar20 + 0x83) = pSStack_2c;
    if (uStack_14 == 0x31) {
      pSVar20[0x38] = (STPlaySystemC)0x0;
    }
    switch(uStack_14) {
    case 0x10:
      DAT_0080c50a = 0;
      DAT_0080c512 = 1;
      if (DAT_008016dc != (OptPanelTy *)0x0) {
        OptPanelTy::Notification(DAT_008016dc,'\v',0);
      }
      break;
    case 0x11:
      thunk_FUN_005504f0(pSVar20,uStack_24,0x426f,1);
    default:
      goto switchD_0054fb75_caseD_12;
    case 0x31:
      if (*(int *)(pSVar20 + 0x45) < (int)uStack_18) {
        iVar7 = Library::DKW::LIB::FUN_006acf50(*(undefined4 **)(pSVar20 + 0x3d),uStack_18);
        *(int *)(pSVar20 + 0x3d) = iVar7;
        *(uint *)(pSVar20 + 0x45) = uStack_18;
      }
      uStack_28 = uStack_18;
      puVar18 = puStack_8;
      puVar19 = *(uint **)(pSVar20 + 0x3d);
      for (uVar8 = uStack_18 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar19 = *puVar18;
        puVar18 = puVar18 + 1;
        puVar19 = puVar19 + 1;
      }
      for (uVar8 = uStack_18 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(char *)puVar19 = (char)*puVar18;
        puVar18 = (uint *)((int)puVar18 + 1);
        puVar19 = (uint *)((int)puVar19 + 1);
      }
LAB_0054fbb7:
      puVar18 = *(uint **)(pSVar20 + 0x3d);
      uVar8 = *(uint *)(pSVar20 + 0x41);
      if (*puVar18 < uVar8) {
        *(undefined2 *)((int)puVar18 + 5) = 0;
      }
      else if (uVar8 < *puVar18) {
        if (*(int *)(pSVar20 + 0x6d) == 0) {
          AddToRep(pSVar20,puVar18,uStack_28);
          *(undefined2 *)(*(int *)(pSVar20 + 0x3d) + 5) = 0;
          *(undefined4 *)(pSVar20 + 0x6d) = 1;
          *(undefined4 *)(pSVar20 + 0x71) = 0;
          *(undefined4 *)(pSVar20 + 0x75) = 1;
          uVar12 = FUN_006e51b0(0x807620);
          *(undefined4 *)(pSVar20 + 0x79) = uVar12;
          *(undefined2 *)(pSVar20 + 0x7d) = 1;
        }
        else {
          thunk_FUN_00550380(0xf);
        }
      }
      else {
        if (*(int *)(pSVar20 + 0x6d) != 0) {
          *(undefined4 *)(pSVar20 + 0x71) = 1;
        }
        *(uint *)(pSVar20 + 0x41) = uVar8 + 1;
        if ((char)puVar18[1] != '\0') {
          *(undefined2 *)(pSVar20 + 0x57) = *(undefined2 *)((int)puVar18 + 5);
          *(undefined2 *)((int)puVar18 + 5) = 0;
          *(undefined4 *)(pSVar20 + 0x49) = **(undefined4 **)(pSVar20 + 0x3d);
          pSVar20[0x4d] = *(STPlaySystemC *)(*(undefined4 **)(pSVar20 + 0x3d) + 1);
          pSVar20[0x4e] = (STPlaySystemC)0x0;
          thunk_FUN_00550110((int)pSVar20);
        }
      }
      break;
    case 0x33:
      thunk_FUN_00550830((int)puStack_8);
      goto switchD_0054fb75_caseD_12;
    case 0x34:
      break;
    case 0x37:
switchD_0054fb75_caseD_37:
      thunk_FUN_00550380(0x11);
      break;
    case 0x44:
      *(undefined4 *)(pSVar20 + 0x59) = 0;
switchD_0054fb75_caseD_12:
      iStack_10 = 1;
    }
    if (puStack_8 != (uint *)0x0) {
      FUN_006ab060(&puStack_8);
    }
LAB_0054fad8:
    if (iStack_10 == 0) {
      g_currentExceptionFrame = IStack_78.previous;
      return (undefined4 *)0x0;
    }
    iStack_10 = 0;
    if (*(int *)(pSVar20 + 0x6d) == 0) {
      iVar7 = -1;
    }
    else {
      iVar7 = 0x31;
    }
    iVar7 = FUN_00715630(DAT_00811764,iVar7,&uStack_14,(int *)&uStack_24,&puStack_8,&uStack_18,-1,
                         (uint)(*(int *)(pSVar20 + 0x6d) != 0));
  } while( true );
}

