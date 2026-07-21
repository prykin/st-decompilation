
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tplaysys.cpp
   STPlaySystemC::PrepareMail */

undefined4 * __thiscall STPlaySystemC::PrepareMail(STPlaySystemC *this)

{
  int *piVar1;
  int *piVar2;
  undefined2 *puVar3;
  code *pcVar4;
  STPlaySystemC *pSVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  char *extraout_EAX;
  char *pcVar11;
  AnonPointee_STPlaySystemC_003D *pAVar12;
  undefined4 *puVar13;
  undefined3 uVar16;
  DWORD DVar14;
  char *text;
  char *text_00;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar15;
  undefined4 *extraout_EAX_00;
  int *piVar17;
  uint uVar18;
  undefined4 *puVar19;
  uint *puVar20;
  undefined4 unaff_ESI;
  uint *puVar21;
  STPlaySystemC *pSVar22;
  undefined4 *puVar23;
  void *unaff_EDI;
  uint *puVar24;
  char *pcVar25;
  undefined4 *puVar26;
  bool bVar27;
  undefined1 uVar28;
  char local_17c [260];
  InternalExceptionFrame local_78;
  uint local_34;
  int local_30;
  int *local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  char local_19;
  uint local_18;
  uint local_14;
  int local_10;
  STPlaySystemC *local_c;
  uint *local_8;
  
  local_34 = 7;
  local_8 = (uint *)0x0;
  local_78.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_78;
  local_c = this;
  iVar8 = Library::MSVCRT::__setjmp3(local_78.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar22 = local_c;
  if (iVar8 != 0) {
    g_currentExceptionFrame = local_78.previous;
    iVar15 = ReportDebugMessage(s_E____titans_Andrey_tplaysys_cpp_007c8430,0x742,0,iVar8,
                                &DAT_007a4ccc,s_STPlaySystemC__PrepareMail_007c85dc);
    if (iVar15 == 0) {
      RaiseInternalException(iVar8,0,s_E____titans_Andrey_tplaysys_cpp_007c8430,0x744);
      return extraout_EAX_00;
    }
    pcVar4 = (code *)swi(3);
    puVar13 = (undefined4 *)(*pcVar4)();
    return puVar13;
  }
  if (DAT_0080877e != '\0') {
    if (DAT_00808783 == '\x03') {
      Library::DKW::DDX::FUN_006b7510(g_int_00811764,-1,&local_20,-1,0);
      local_18 = 0;
      if (0 < local_20) {
        do {
          iVar8 = Library::Ourlib::CONNECT::FUN_00715630
                            (g_int_00811764,-1,&local_14,&local_30,&local_8,(uint *)0x0,-1,0);
          pSVar22 = local_c;
          if (iVar8 == -0x4d) {
            puVar13 = (undefined4 *)thunk_FUN_00550380(6);
            g_currentExceptionFrame = local_78.previous;
            return puVar13;
          }
          if (iVar8 != 1) goto LAB_0054f531;
          uVar9 = (uint)DAT_00808aaf;
          bVar27 = true;
          if (uVar9 != 0) {
            piVar17 = &DAT_00808af0;
            do {
              if (*piVar17 == local_30) {
                bVar27 = false;
              }
              piVar17 = piVar17 + 0x27;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
          if (bVar27) goto joined_r0x0054f3c5;
          switch(local_14) {
          case 0x11:
            thunk_FUN_005504f0(local_c,local_30,0x426f,1);
            if (local_30 == pSVar22->field_0061) {
              pSVar22->field_0059 = 0;
            }
            goto joined_r0x0054f526;
          default:
joined_r0x0054f526:
            if (local_8 == (uint *)0x0) break;
            goto LAB_0054f52c;
          case 0x13:
            if (local_30 == local_c->field_0061) {
              local_c->field_0059 = 0;
            }
            if (local_8 != (uint *)0x0) {
              FreeAndNull(&local_8);
            }
            pSVar5 = local_c;
            if (pSVar22->field_00EC != 0) {
              thunk_FUN_005504f0(local_c,local_30,0x4274,0);
              pSVar5->field_00E8 = 1;
            }
            break;
          case 0x1a:
          case 0x35:
            thunk_FUN_00550430(local_c,local_30,0);
            goto joined_r0x0054f3c5;
          case 0x30:
            if (local_c->field_00E8 == 0) {
              FUN_006b9910(&local_c->field_0039,(int)local_8);
            }
            break;
          case 0x33:
            thunk_FUN_00550830((int)local_8);
            goto joined_r0x0054f3c5;
          case 0x36:
            thunk_FUN_005505d0(local_c,local_30,(int *)local_8);
joined_r0x0054f3c5:
            if (local_8 != (uint *)0x0) {
LAB_0054f52c:
              FreeAndNull(&local_8);
            }
            break;
          case 0x38:
            if (((local_c->field_00E8 != 0) || (local_8 == (uint *)0x0)) || (*local_8 == 0)) break;
            puVar20 = local_8 + 1;
            local_24 = 0;
            if (*local_8 != 0) {
              do {
                local_2c = (int *)(*(int *)((int)puVar20 + 0x13) + *(int *)((int)puVar20 + 0xf));
                uVar9 = (int)local_2c + 0x1b;
                puVar10 = Library::DKW::LIB::FUN_006aac10(uVar9);
                puVar21 = puVar20;
                puVar24 = puVar10;
                for (uVar18 = uVar9 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                  *puVar24 = *puVar21;
                  puVar21 = puVar21 + 1;
                  puVar24 = puVar24 + 1;
                }
                for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
                  *(char *)puVar24 = (char)*puVar21;
                  puVar21 = (uint *)((int)puVar21 + 1);
                  puVar24 = (uint *)((int)puVar24 + 1);
                }
                FUN_006b9910(&local_c->field_0039,(int)puVar10);
                puVar20 = (uint *)((int)puVar20 + (int)local_2c + 0x1b);
                local_24 = local_24 + 1;
              } while (local_24 < *local_8);
            }
            goto LAB_0054f52c;
          case 0x42:
            LoadResourceString(0x426a,HINSTANCE_00807618);
            uVar9 = 0xffffffff;
            pcVar11 = extraout_EAX;
            do {
              pcVar25 = pcVar11;
              if (uVar9 == 0) break;
              uVar9 = uVar9 - 1;
              pcVar25 = pcVar11 + 1;
              cVar7 = *pcVar11;
              pcVar11 = pcVar25;
            } while (cVar7 != '\0');
            uVar9 = ~uVar9;
            pcVar11 = pcVar25 + -uVar9;
            pcVar25 = local_17c;
            for (uVar18 = uVar9 >> 2; puVar20 = local_8, uVar18 != 0; uVar18 = uVar18 - 1) {
              *(undefined4 *)pcVar25 = *(undefined4 *)pcVar11;
              pcVar11 = pcVar11 + 4;
              pcVar25 = pcVar25 + 4;
            }
            bVar27 = local_8 != (uint *)0x0;
            for (uVar9 = uVar9 & 3; pSVar22 = local_c, uVar9 != 0; uVar9 = uVar9 - 1) {
              *pcVar25 = *pcVar11;
              pcVar11 = pcVar11 + 1;
              pcVar25 = pcVar25 + 1;
            }
            if ((bVar27) && ((local_c->field_00F0 != 0 || ((char)*puVar20 != '\0')))) {
              FreeAndNull(&local_8);
              pSVar22->field_0059 = 1;
              pSVar22->field_005D = 0;
              pSVar22->field_0061 = local_30;
              uVar9 = 0;
              if (DAT_00808aaf != 0) {
                pcVar11 = &DAT_00808af6;
                do {
                  if ((*(int *)(pcVar11 + -6) == local_30) && (*pcVar11 != '\0')) {
                    wsprintfA(local_17c,s__s___s__007c85fc,local_17c,pcVar11 + -0x46);
                    break;
                  }
                  uVar9 = uVar9 + 1;
                  pcVar11 = pcVar11 + 0x9c;
                } while (uVar9 < DAT_00808aaf);
              }
              if (g_popUp_008016D8 != (PopUpTy *)0x0) {
                thunk_FUN_0052d320(g_popUp_008016D8,local_17c,9);
              }
            }
          }
LAB_0054f531:
          local_18 = local_18 + 1;
          pSVar22 = local_c;
        } while ((int)local_18 < local_20);
      }
    }
    puVar13 = (undefined4 *)pSVar22->field_0039;
    piVar17 = &pSVar22->field_0039;
    if ((puVar13 == (undefined4 *)0x0) && (pSVar22->field_0028 == 0)) {
      pSVar22->field_003D->field_0005 = 0;
      g_currentExceptionFrame = local_78.previous;
      return puVar13;
    }
    pSVar22->field_003D->field_0004 = 0;
    pSVar22->field_003D->field_0005 = 0;
    uVar9 = local_34;
    if (((int)(uint)(byte)pSVar22->field_004D < *(int *)(&DAT_007c2af8 + (uint)DAT_0080733b * 0x18))
       && (DAT_00808784 == 0)) {
      pSVar22->field_004D = pSVar22->field_004D + 1;
      g_currentExceptionFrame = local_78.previous;
      return puVar13;
    }
    for (; puVar13 != (undefined4 *)0x0; puVar13 = (undefined4 *)*puVar13) {
      piVar1 = (int *)((int)puVar13 + 0x13);
      piVar2 = (int *)((int)puVar13 + 0xf);
      uVar9 = uVar9 + 0x1b + *piVar1 + *piVar2;
    }
    local_34 = uVar9;
    local_2c = piVar17;
    if ((uint)pSVar22->field_0045 < uVar9) {
      pAVar12 = (AnonPointee_STPlaySystemC_003D *)
                Library::DKW::LIB::FUN_006acf50((int)pSVar22->field_003D,uVar9);
      pSVar22->field_003D = pAVar12;
      pSVar22->field_0045 = uVar9;
    }
    puVar19 = (undefined4 *)&pSVar22->field_003D->field_0x7;
    puVar13 = (undefined4 *)*piVar17;
    for (; puVar13 != (undefined4 *)0x0; puVar13 = (undefined4 *)*puVar13) {
      local_34 = *(int *)((int)puVar13 + 0x13) + 0x1b + *(int *)((int)puVar13 + 0xf);
      puVar23 = puVar13;
      puVar26 = puVar19;
      for (uVar18 = local_34 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
        *puVar26 = *puVar23;
        puVar23 = puVar23 + 1;
        puVar26 = puVar26 + 1;
      }
      for (uVar18 = local_34 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
        *(undefined1 *)puVar26 = *(undefined1 *)puVar23;
        puVar23 = (undefined4 *)((int)puVar23 + 1);
        puVar26 = (undefined4 *)((int)puVar26 + 1);
      }
      puVar19 = (undefined4 *)((int)puVar19 + local_34);
      puVar3 = &local_c->field_003D->field_0005;
      *puVar3 = *puVar3 + 1;
      piVar17 = local_2c;
    }
    puVar13 = (undefined4 *)0x0;
    local_28 = uVar9;
    if (*piVar17 != 0) {
      puVar13 = (undefined4 *)FUN_006b9890(piVar17);
    }
    pSVar22 = local_c;
    if (DAT_00808783 != '\x03') {
      g_currentExceptionFrame = local_78.previous;
      return puVar13;
    }
    pAVar12 = local_c->field_003D;
    cVar7 = local_c->field_004D;
    uVar16 = (undefined3)((uint)puVar13 >> 8);
    puVar13 = (undefined4 *)CONCAT31(uVar16,cVar7);
    if (pAVar12->field_0005 == 0) {
      bVar6 = cVar7 + 1;
      puVar13 = (undefined4 *)CONCAT31(uVar16,bVar6);
      local_c->field_004D = bVar6;
      if ((int)(uint)bVar6 <
          *(int *)(s_FrmPanelTy__GetMessage_007c2ae0 + (uint)DAT_0080733b * 0x18 + 0xc)) {
        g_currentExceptionFrame = local_78.previous;
        return puVar13;
      }
      if (DAT_00808783 == '\x03') {
        pAVar12->field_0004 = bVar6;
        local_c->field_003D->field_0005 = 0;
        iVar8 = thunk_FUN_0054ebb0(local_c,(char *)local_c->field_003D,7);
        puVar13 = (undefined4 *)0x0;
        if (iVar8 != 0) {
          uVar28 = 7;
LAB_0054f6c6:
          puVar13 = (undefined4 *)thunk_FUN_00550380(uVar28);
          g_currentExceptionFrame = local_78.previous;
          return puVar13;
        }
      }
    }
    else {
      if (cVar7 != '\0') {
        pAVar12->field_0004 = cVar7;
      }
      if (DAT_00808783 == '\x03') {
        iVar8 = thunk_FUN_0054ebb0(local_c,(char *)local_c->field_003D,local_28);
        puVar13 = (undefined4 *)0x0;
        if (iVar8 != 0) {
          uVar28 = 8;
          goto LAB_0054f6c6;
        }
      }
    }
    pSVar22->field_004D = 0;
    g_currentExceptionFrame = local_78.previous;
    return puVar13;
  }
  local_10 = 0;
  local_2c = (int *)timeGetTime();
  Library::DKW::DDX::FUN_006b7510(g_int_00811764,-1,&local_20,-1,0);
  pSVar22 = local_c;
  if (local_c->field_006D == 0) {
    bVar27 = thunk_FUN_00550110((int)local_c);
    if ((undefined4 *)CONCAT31(extraout_var_00,bVar27) != (undefined4 *)0x0) {
      g_currentExceptionFrame = local_78.previous;
      return (undefined4 *)CONCAT31(extraout_var_00,bVar27);
    }
    if (local_20 < 3) {
      if (pSVar22->field_0059 == 0) {
        if (DAT_00807654 <
            *(int *)(s_FrmPanelTy__GetMessage_007c2ae0 + (uint)DAT_0080733b * 0x18 + 0x14)) {
          DAT_00807654 = DAT_00807654 + 1;
        }
      }
      else {
        FUN_006b6500(g_int_00811764,1);
        iVar8 = FUN_00715360(g_int_00811764,1,'C',(char *)0x0,0,0,0xffffffff);
        if (iVar8 != 0) {
          uVar28 = 0xc;
          goto cf_common_exit_0054F76E;
        }
        FUN_006b6500(g_int_00811764,DAT_0080733c);
        pSVar22->field_0059 = 0;
      }
    }
    else {
      if ((5 < DAT_00807654) && (0 < DAT_00807654)) {
        DAT_00807654 = DAT_00807654 + -1;
      }
      if ((pSVar22->field_0038 == '\0') &&
         (((0x32 < local_20 && (pSVar22->field_0059 == 0)) || (100 < local_20)))) {
        FUN_006b6500(g_int_00811764,1);
        local_19 = '\x01';
        iVar8 = FUN_00715360(g_int_00811764,1,'B',&local_19,1,0,0xffffffff);
        if (iVar8 != 0) {
          uVar28 = 0xb;
          goto cf_common_exit_0054F76E;
        }
        FUN_006b6500(g_int_00811764,DAT_0080733c);
        pSVar22->field_0059 = 1;
      }
    }
    local_10 = 1;
    goto cf_common_join_0054FAD8;
  }
  if (local_c->field_0071 != 0) {
    bVar27 = thunk_FUN_00550110((int)local_c);
    if ((undefined4 *)CONCAT31(extraout_var,bVar27) != (undefined4 *)0x0) {
      g_currentExceptionFrame = local_78.previous;
      return (undefined4 *)CONCAT31(extraout_var,bVar27);
    }
    iVar8 = thunk_FUN_0054eb20(pSVar22,&local_28);
    if (iVar8 == 0) goto switchD_0054fb75_caseD_37;
    pSVar22->field_0071 = 0;
    pSVar22->field_006D = 0;
    pSVar22->field_0079 = 0;
    local_14 = 0x31;
    goto LAB_0054fbb7;
  }
  DVar14 = FUN_006e51b0(0x807620);
  if (30000 < (int)(DVar14 - pSVar22->field_0079)) {
    uVar28 = 10;
cf_common_exit_0054F76E:
    puVar13 = (undefined4 *)thunk_FUN_00550380(uVar28);
    g_currentExceptionFrame = local_78.previous;
    return puVar13;
  }
  DVar14 = FUN_006e51b0(0x807620);
  if (*(short *)&pSVar22->field_0x7d * 4000 < (int)(DVar14 - pSVar22->field_0079)) {
    FUN_006b6500(g_int_00811764,1);
    FUN_00715360(g_int_00811764,1,'6',(char *)&pSVar22->field_0041,4,0,0xffffffff);
    FUN_006b6500(g_int_00811764,DAT_0080733c);
    *(short *)&pSVar22->field_0x7d = *(short *)&pSVar22->field_0x7d + 1;
  }
  iVar8 = Library::Ourlib::CONNECT::FUN_00715630
                    (g_int_00811764,0x31,&local_14,(int *)&local_24,&local_8,&local_18,
                     pSVar22->field_0041,0);
  if (pSVar22->field_0075 == 0) {
    if (iVar8 != 1) goto LAB_0054f98b;
  }
  else {
    pSVar22->field_0075 = 0;
    if (iVar8 != 1) {
      FUN_006b6500(g_int_00811764,1);
      iVar8 = FUN_00715360(g_int_00811764,1,'6',(char *)&pSVar22->field_0041,4,0,0xffffffff);
      if (iVar8 == 0) {
        FUN_006b6500(g_int_00811764,DAT_0080733c);
        if ((byte)pSVar22->field_00BB < 5) {
          DVar14 = FUN_006e51b0(0x807620);
          (&pSVar22->field_00A7)[(byte)pSVar22->field_00BB] = DVar14;
          cVar7 = pSVar22->field_00BB + '\x01';
          pSVar22->field_00BB = cVar7;
          g_currentExceptionFrame = local_78.previous;
          return (undefined4 *)CONCAT31((int3)(DVar14 >> 8),cVar7);
        }
        pSVar22->field_00A7 = pSVar22->field_00AB;
        pSVar22->field_00AB = pSVar22->field_00AF;
        pSVar22->field_00AF = pSVar22->field_00B3;
        pSVar22->field_00B3 = pSVar22->field_00B7;
        DVar14 = FUN_006e51b0(0x807620);
        pSVar22->field_00B7 = DVar14;
        if (DAT_0080735e == '\0') {
          g_currentExceptionFrame = local_78.previous;
          return (undefined4 *)CONCAT31((int3)(DVar14 >> 8),DAT_0080735e);
        }
        uVar9 = DVar14 - pSVar22->field_00A7;
        if (3000 < uVar9 / 5) {
          g_currentExceptionFrame = local_78.previous;
          return (undefined4 *)(uVar9 * -0x33333333);
        }
        puVar13 = (undefined4 *)0x0;
        if (g_popUp_008016D8 != (PopUpTy *)0x0) {
          uVar9 = 9;
          LoadResourceString(17000,HINSTANCE_00807618);
          puVar13 = (undefined4 *)thunk_FUN_0052d320(g_popUp_008016D8,text,uVar9);
        }
        pSVar22->field_00BB = 0;
        g_currentExceptionFrame = local_78.previous;
        return puVar13;
      }
      uVar28 = 0x10;
      goto cf_common_exit_0054F76E;
    }
  }
  if ((DAT_0080735e != '\0') && (g_popUp_008016D8 != (PopUpTy *)0x0)) {
    uVar9 = 8;
    LoadResourceString(0x426c,HINSTANCE_00807618);
    thunk_FUN_0052d320(g_popUp_008016D8,text_00,uVar9);
  }
LAB_0054f98b:
  local_10 = 1;
  do {
    if (iVar8 == -0x4d) {
      thunk_FUN_00550380(0xe);
      goto cf_common_join_0054FAD8;
    }
    if (iVar8 == 0) {
      if (60000 < (int)((int)local_2c - pSVar22->field_0083)) {
        thunk_FUN_00550380(0xd);
      }
      goto cf_common_join_0054FAD8;
    }
    if (iVar8 != 1) goto cf_common_join_0054FAD8;
    pSVar22->field_0083 = (DWORD)local_2c;
    if (local_14 == 0x31) {
      pSVar22->field_0038 = 0;
    }
    switch(local_14) {
    case 0x10:
      DAT_0080c50a = 0;
      DAT_0080c512 = 1;
      if (g_optPanel_008016DC != (OptPanelTy *)0x0) {
        OptPanelTy::Notification(g_optPanel_008016DC,'\v',0);
      }
      break;
    case 0x11:
      thunk_FUN_005504f0(pSVar22,local_24,0x426f,1);
    default:
      goto switchD_0054fb75_caseD_12;
    case 0x31:
      if ((int)pSVar22->field_0045 < (int)local_18) {
        pAVar12 = (AnonPointee_STPlaySystemC_003D *)
                  Library::DKW::LIB::FUN_006acf50((int)pSVar22->field_003D,local_18);
        pSVar22->field_003D = pAVar12;
        pSVar22->field_0045 = local_18;
      }
      local_28 = local_18;
      puVar20 = local_8;
      pAVar12 = pSVar22->field_003D;
      for (uVar9 = local_18 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(uint *)pAVar12 = *puVar20;
        puVar20 = puVar20 + 1;
        pAVar12 = (AnonPointee_STPlaySystemC_003D *)&pAVar12->field_0004;
      }
      for (uVar9 = local_18 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(char *)pAVar12 = (char)*puVar20;
        puVar20 = (uint *)((int)puVar20 + 1);
        pAVar12 = (AnonPointee_STPlaySystemC_003D *)&pAVar12->field_0x1;
      }
LAB_0054fbb7:
      pAVar12 = pSVar22->field_003D;
      uVar9 = pSVar22->field_0041;
      if (*(uint *)pAVar12 < uVar9) {
        pAVar12->field_0005 = 0;
      }
      else if (uVar9 < *(uint *)pAVar12) {
        if (pSVar22->field_006D == 0) {
          AddToRep(pSVar22,(undefined4 *)pAVar12,local_28);
          pSVar22->field_003D->field_0005 = 0;
          pSVar22->field_006D = 1;
          pSVar22->field_0071 = 0;
          pSVar22->field_0075 = 1;
          DVar14 = FUN_006e51b0(0x807620);
          pSVar22->field_0079 = DVar14;
          *(undefined2 *)&pSVar22->field_0x7d = 1;
        }
        else {
          thunk_FUN_00550380(0xf);
        }
      }
      else {
        if (pSVar22->field_006D != 0) {
          pSVar22->field_0071 = 1;
        }
        pSVar22->field_0041 = uVar9 + 1;
        if (pAVar12->field_0004 != '\0') {
          pSVar22->field_0057 = pAVar12->field_0005;
          pAVar12->field_0005 = 0;
          pSVar22->field_0049 = *(undefined4 *)pSVar22->field_003D;
          pSVar22->field_004D = pSVar22->field_003D->field_0004;
          pSVar22->field_004E = 0;
          thunk_FUN_00550110((int)pSVar22);
        }
      }
      break;
    case 0x33:
      thunk_FUN_00550830((int)local_8);
      goto switchD_0054fb75_caseD_12;
    case 0x34:
      break;
    case 0x37:
switchD_0054fb75_caseD_37:
      thunk_FUN_00550380(0x11);
      break;
    case 0x44:
      pSVar22->field_0059 = 0;
switchD_0054fb75_caseD_12:
      local_10 = 1;
    }
    if (local_8 != (uint *)0x0) {
      FreeAndNull(&local_8);
    }
cf_common_join_0054FAD8:
    if (local_10 == 0) {
      g_currentExceptionFrame = local_78.previous;
      return (undefined4 *)0x0;
    }
    local_10 = 0;
    bVar27 = pSVar22->field_006D == 0;
    if (bVar27) {
      iVar8 = -1;
    }
    else {
      iVar8 = 0x31;
    }
    iVar8 = Library::Ourlib::CONNECT::FUN_00715630
                      (g_int_00811764,iVar8,&local_14,(int *)&local_24,&local_8,&local_18,-1,
                       (uint)!bVar27);
  } while( true );
}

