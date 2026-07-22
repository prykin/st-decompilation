#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tplaysys.cpp
   STPlaySystemC::PrepareMail */

undefined4 * __thiscall STPlaySystemC::PrepareMail(STPlaySystemC *this)

{
  AnonPointee_STPlaySystemC_0039 **ppAVar1;
  undefined2 *puVar2;
  char cVar3;
  AnonPointee_STPlaySystemC_0039 *pAVar4;
  code *pcVar5;
  STPlaySystemC *pSVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  AnonPointee_STPlaySystemC_003D *pAVar11;
  undefined3 uVar15;
  DWORD DVar12;
  char *pcVar13;
  int iVar14;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 *extraout_EAX;
  int *piVar16;
  uint uVar17;
  undefined4 *puVar18;
  uint *puVar19;
  uint *puVar20;
  STPlaySystemC *pSVar21;
  AnonPointee_STPlaySystemC_0039 *pAVar22;
  uint *puVar23;
  char *pcVar24;
  undefined4 *puVar25;
  bool bVar26;
  undefined1 uVar27;
  char local_17c [260];
  InternalExceptionFrame local_78;
  uint local_34;
  int local_30;
  AnonPointee_STPlaySystemC_0039 **local_2c;
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
  iVar8 = Library::MSVCRT::__setjmp3(local_78.jumpBuffer,0);
  pSVar21 = local_c;
  if (iVar8 != 0) {
    g_currentExceptionFrame = local_78.previous;
    iVar14 = ReportDebugMessage("E:\\__titans\\Andrey\\tplaysys.cpp",0x742,0,iVar8,
                                "%s","STPlaySystemC::PrepareMail");
    if (iVar14 == 0) {
      RaiseInternalException(iVar8,0,"E:\\__titans\\Andrey\\tplaysys.cpp",0x744);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      return extraout_EAX;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (DAT_0080877e != '\0') {
    if (DAT_00808783 == '\x03') {
      Library::DKW::DDX::FUN_006b7510(g_int_00811764,-1,&local_20,-1,0);
      local_18 = 0;
      if (0 < local_20) {
        do {
          iVar8 = Library::Ourlib::CONNECT::FUN_00715630
                            (g_int_00811764,-1,&local_14,&local_30,&local_8,(uint *)0x0,-1,0);
          pSVar21 = local_c;
          if (iVar8 == -0x4d) {
            puVar18 = (undefined4 *)thunk_FUN_00550380(6);
            g_currentExceptionFrame = local_78.previous;
            return puVar18;
          }
          if (iVar8 != 1) goto LAB_0054f531;
          uVar9 = (uint)DAT_00808aaf;
          bVar26 = true;
          if (uVar9 != 0) {
            piVar16 = &DAT_00808af0;
            do {
              if (*piVar16 == local_30) {
                bVar26 = false;
              }
              piVar16 = piVar16 + 0x27;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
          if (bVar26) goto joined_r0x0054f3c5;
          switch(local_14) {
          case 0x11:
            thunk_FUN_005504f0(local_c,local_30,0x426f,1);
            if (local_30 == pSVar21->field_0061) {
              pSVar21->field_0059 = 0;
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
            pSVar6 = local_c;
            if (pSVar21->field_00EC != 0) {
              thunk_FUN_005504f0(local_c,local_30,0x4274,0);
              pSVar6->field_00E8 = 1;
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
            sub_005505D0(local_c,local_30,(int *)local_8);
joined_r0x0054f3c5:
            if (local_8 != (uint *)0x0) {
LAB_0054f52c:
              FreeAndNull(&local_8);
            }
            break;
          case 0x38:
            if (((local_c->field_00E8 != 0) || (local_8 == (uint *)0x0)) || (*local_8 == 0)) break;
            puVar19 = local_8 + 1;
            local_24 = 0;
            if (*local_8 != 0) {
              do {
                local_2c = (AnonPointee_STPlaySystemC_0039 **)
                           (*(int *)((int)puVar19 + 0x13) + *(int *)((int)puVar19 + 0xf));
                uVar9 = (int)local_2c + 0x1b;
                puVar10 = Library::DKW::LIB::FUN_006aac10(uVar9);
                puVar20 = puVar19;
                puVar23 = puVar10;
                for (uVar17 = uVar9 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
                  *puVar23 = *puVar20;
                  puVar20 = puVar20 + 1;
                  puVar23 = puVar23 + 1;
                }
                for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
                  *(char *)puVar23 = (char)*puVar20;
                  puVar20 = (uint *)((int)puVar20 + 1);
                  puVar23 = (uint *)((int)puVar23 + 1);
                }
                FUN_006b9910(&local_c->field_0039,(int)puVar10);
                puVar19 = (uint *)((int)puVar19 + (int)local_2c + 0x1b);
                local_24 = local_24 + 1;
              } while (local_24 < *local_8);
            }
            goto LAB_0054f52c;
          case 0x42:
            pcVar13 = LoadResourceString(0x426a,g_module_00807618);
            uVar9 = 0xffffffff;
            do {
              pcVar24 = pcVar13;
              if (uVar9 == 0) break;
              uVar9 = uVar9 - 1;
              pcVar24 = pcVar13 + 1;
              cVar3 = *pcVar13;
              pcVar13 = pcVar24;
            } while (cVar3 != '\0');
            uVar9 = ~uVar9;
            pcVar13 = pcVar24 + -uVar9;
            pcVar24 = local_17c;
            for (uVar17 = uVar9 >> 2; puVar19 = local_8, uVar17 != 0; uVar17 = uVar17 - 1) {
              *(undefined4 *)pcVar24 = *(undefined4 *)pcVar13;
              pcVar13 = pcVar13 + 4;
              pcVar24 = pcVar24 + 4;
            }
            bVar26 = local_8 != (uint *)0x0;
            for (uVar9 = uVar9 & 3; pSVar21 = local_c, uVar9 != 0; uVar9 = uVar9 - 1) {
              *pcVar24 = *pcVar13;
              pcVar13 = pcVar13 + 1;
              pcVar24 = pcVar24 + 1;
            }
            if ((bVar26) && ((local_c->field_00F0 != 0 || ((char)*puVar19 != '\0')))) {
              FreeAndNull(&local_8);
              pSVar21->field_0059 = 1;
              pSVar21->field_005D = 0;
              pSVar21->field_0061 = local_30;
              uVar9 = 0;
              if (DAT_00808aaf != 0) {
                pcVar13 = &DAT_00808af6;
                do {
                  if ((*(int *)(pcVar13 + -6) == local_30) && (*pcVar13 != '\0')) {
                    wsprintfA(local_17c,"%s (%s)",local_17c,pcVar13 + -0x46);
                    break;
                  }
                  uVar9 = uVar9 + 1;
                  pcVar13 = pcVar13 + 0x9c;
                } while (uVar9 < DAT_00808aaf);
              }
              if (g_popUp_008016D8 != (PopUpTy *)0x0) {
                thunk_FUN_0052d320(g_popUp_008016D8,local_17c,9);
              }
            }
          }
LAB_0054f531:
          local_18 = local_18 + 1;
          pSVar21 = local_c;
        } while ((int)local_18 < local_20);
      }
    }
    pAVar4 = pSVar21->field_0039;
    ppAVar1 = &pSVar21->field_0039;
    if ((pAVar4 == (AnonPointee_STPlaySystemC_0039 *)0x0) && (pSVar21->field_0028 == 0)) {
      pSVar21->field_003D->field_0005 = 0;
      g_currentExceptionFrame = local_78.previous;
      return &pAVar4->field_0000;
    }
    pSVar21->field_003D->field_0004 = 0;
    pSVar21->field_003D->field_0005 = 0;
    uVar9 = local_34;
    if (((int)(uint)(byte)pSVar21->field_004D < *(int *)(&DAT_007c2af8 + (uint)DAT_0080733b * 0x18))
       && (DAT_00808784 == 0)) {
      pSVar21->field_004D = pSVar21->field_004D + 1;
      g_currentExceptionFrame = local_78.previous;
      return &pAVar4->field_0000;
    }
    for (; pAVar4 != (AnonPointee_STPlaySystemC_0039 *)0x0;
        pAVar4 = (AnonPointee_STPlaySystemC_0039 *)pAVar4->field_0000) {
      puVar18 = &pAVar4->field_0013;
      puVar25 = &pAVar4->field_000F;
      uVar9 = uVar9 + 0x1b + *puVar18 + *puVar25;
    }
    local_34 = uVar9;
    local_2c = ppAVar1;
    if ((uint)pSVar21->field_0045 < uVar9) {
      pAVar11 = (AnonPointee_STPlaySystemC_003D *)
                Library::DKW::LIB::FUN_006acf50((int)pSVar21->field_003D,uVar9);
      pSVar21->field_003D = pAVar11;
      pSVar21->field_0045 = uVar9;
    }
    puVar18 = (undefined4 *)&pSVar21->field_003D->field_0x7;
    pAVar4 = *ppAVar1;
    for (; pAVar4 != (AnonPointee_STPlaySystemC_0039 *)0x0;
        pAVar4 = (AnonPointee_STPlaySystemC_0039 *)pAVar4->field_0000) {
      local_34 = pAVar4->field_0013 + 0x1b + pAVar4->field_000F;
      pAVar22 = pAVar4;
      puVar25 = puVar18;
      for (uVar17 = local_34 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
        *puVar25 = pAVar22->field_0000;
        pAVar22 = (AnonPointee_STPlaySystemC_0039 *)&pAVar22->field_0x4;
        puVar25 = puVar25 + 1;
      }
      for (uVar17 = local_34 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
        *(undefined1 *)puVar25 = *(undefined1 *)&pAVar22->field_0000;
        pAVar22 = (AnonPointee_STPlaySystemC_0039 *)((int)&pAVar22->field_0000 + 1);
        puVar25 = (undefined4 *)((int)puVar25 + 1);
      }
      puVar18 = (undefined4 *)((int)puVar18 + local_34);
      puVar2 = &local_c->field_003D->field_0005;
      *puVar2 = *puVar2 + 1;
      ppAVar1 = local_2c;
    }
    puVar18 = (undefined4 *)0x0;
    local_28 = uVar9;
    if (*ppAVar1 != (AnonPointee_STPlaySystemC_0039 *)0x0) {
      puVar18 = (undefined4 *)FUN_006b9890((int *)ppAVar1);
    }
    pSVar21 = local_c;
    if (DAT_00808783 != '\x03') {
      g_currentExceptionFrame = local_78.previous;
      return puVar18;
    }
    pAVar11 = local_c->field_003D;
    cVar3 = local_c->field_004D;
    uVar15 = (undefined3)((uint)puVar18 >> 8);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    puVar18 = (undefined4 *)CONCAT31(uVar15,cVar3);
    if (pAVar11->field_0005 == 0) {
      bVar7 = cVar3 + 1;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      puVar18 = (undefined4 *)CONCAT31(uVar15,bVar7);
      local_c->field_004D = bVar7;
      if ((int)(uint)bVar7 <
          *(int *)(s_FrmPanelTy__GetMessage_007c2ae0 + (uint)DAT_0080733b * 0x18 + 0xc)) {
        g_currentExceptionFrame = local_78.previous;
        return puVar18;
      }
      if (DAT_00808783 == '\x03') {
        pAVar11->field_0004 = bVar7;
        local_c->field_003D->field_0005 = 0;
        iVar8 = sub_0054EBB0(local_c,(char *)local_c->field_003D,7);
        puVar18 = (undefined4 *)0x0;
        if (iVar8 != 0) {
          uVar27 = 7;
LAB_0054f6c6:
          puVar18 = (undefined4 *)thunk_FUN_00550380(uVar27);
          g_currentExceptionFrame = local_78.previous;
          return puVar18;
        }
      }
    }
    else {
      if (cVar3 != '\0') {
        pAVar11->field_0004 = cVar3;
      }
      if (DAT_00808783 == '\x03') {
        iVar8 = sub_0054EBB0(local_c,(char *)local_c->field_003D,local_28);
        puVar18 = (undefined4 *)0x0;
        if (iVar8 != 0) {
          uVar27 = 8;
          goto LAB_0054f6c6;
        }
      }
    }
    pSVar21->field_004D = 0;
    g_currentExceptionFrame = local_78.previous;
    return puVar18;
  }
  local_10 = 0;
  local_2c = (AnonPointee_STPlaySystemC_0039 **)timeGetTime();
  Library::DKW::DDX::FUN_006b7510(g_int_00811764,-1,&local_20,-1,0);
  pSVar21 = local_c;
  if (local_c->field_006D == 0) {
    puVar18 = (undefined4 *)thunk_FUN_00550110(local_c);
    if (puVar18 != (undefined4 *)0x0) {
      g_currentExceptionFrame = local_78.previous;
      return puVar18;
    }
    if (local_20 < 3) {
      if (pSVar21->field_0059 == 0) {
        if (DAT_00807654 <
            *(int *)(s_FrmPanelTy__GetMessage_007c2ae0 + (uint)DAT_0080733b * 0x18 + 0x14)) {
          DAT_00807654 = DAT_00807654 + 1;
        }
      }
      else {
        FUN_006b6500(g_int_00811764,1);
        iVar8 = FUN_00715360(g_int_00811764,1,'C',(char *)0x0,0,0,0xffffffff);
        if (iVar8 != 0) {
          uVar27 = 0xc;
          goto cf_common_exit_0054F76E;
        }
        FUN_006b6500(g_int_00811764,DAT_0080733c);
        pSVar21->field_0059 = 0;
      }
    }
    else {
      if ((5 < DAT_00807654) && (0 < DAT_00807654)) {
        DAT_00807654 = DAT_00807654 + -1;
      }
      if ((pSVar21->field_0038 == '\0') &&
         (((0x32 < local_20 && (pSVar21->field_0059 == 0)) || (100 < local_20)))) {
        FUN_006b6500(g_int_00811764,1);
        local_19 = '\x01';
        iVar8 = FUN_00715360(g_int_00811764,1,'B',&local_19,1,0,0xffffffff);
        if (iVar8 != 0) {
          uVar27 = 0xb;
          goto cf_common_exit_0054F76E;
        }
        FUN_006b6500(g_int_00811764,DAT_0080733c);
        pSVar21->field_0059 = 1;
      }
    }
    local_10 = 1;
    goto cf_common_join_0054FAD8;
  }
  if (local_c->field_0071 != 0) {
    puVar18 = (undefined4 *)thunk_FUN_00550110(local_c);
    if (puVar18 != (undefined4 *)0x0) {
      g_currentExceptionFrame = local_78.previous;
      return puVar18;
    }
    iVar8 = thunk_FUN_0054eb20(pSVar21,&local_28);
    if (iVar8 == 0) goto switchD_0054fb75_caseD_37;
    pSVar21->field_0071 = 0;
    pSVar21->field_006D = 0;
    pSVar21->field_0079 = 0;
    local_14 = 0x31;
    goto LAB_0054fbb7;
  }
  DVar12 = STAppC::sub_006E51B0((STAppC *)&DAT_00807620);
  if (30000 < (int)(DVar12 - pSVar21->field_0079)) {
    uVar27 = 10;
cf_common_exit_0054F76E:
    puVar18 = (undefined4 *)thunk_FUN_00550380(uVar27);
    g_currentExceptionFrame = local_78.previous;
    return puVar18;
  }
  DVar12 = STAppC::sub_006E51B0((STAppC *)&DAT_00807620);
  if (pSVar21->field_007D * 4000 < (int)(DVar12 - pSVar21->field_0079)) {
    FUN_006b6500(g_int_00811764,1);
    FUN_00715360(g_int_00811764,1,'6',(char *)&pSVar21->field_0041,4,0,0xffffffff);
    FUN_006b6500(g_int_00811764,DAT_0080733c);
    pSVar21->field_007D = pSVar21->field_007D + 1;
  }
  iVar8 = Library::Ourlib::CONNECT::FUN_00715630
                    (g_int_00811764,0x31,&local_14,(int *)&local_24,&local_8,&local_18,
                     pSVar21->field_0041,0);
  if (pSVar21->field_0075 == 0) {
    if (iVar8 != 1) goto LAB_0054f98b;
  }
  else {
    pSVar21->field_0075 = 0;
    if (iVar8 != 1) {
      FUN_006b6500(g_int_00811764,1);
      iVar8 = FUN_00715360(g_int_00811764,1,'6',(char *)&pSVar21->field_0041,4,0,0xffffffff);
      if (iVar8 == 0) {
        FUN_006b6500(g_int_00811764,DAT_0080733c);
        if (pSVar21->field_00BB < 5) {
          DVar12 = STAppC::sub_006E51B0((STAppC *)&DAT_00807620);
          (&pSVar21->field_00A7)[pSVar21->field_00BB] = DVar12;
          bVar7 = pSVar21->field_00BB + 1;
          pSVar21->field_00BB = bVar7;
          g_currentExceptionFrame = local_78.previous;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          return (undefined4 *)CONCAT31((int3)(DVar12 >> 8),bVar7);
        }
        pSVar21->field_00A7 = pSVar21->field_00AB;
        pSVar21->field_00AB = pSVar21->field_00AF;
        pSVar21->field_00AF = pSVar21->field_00B3;
        pSVar21->field_00B3 = pSVar21->field_00B7;
        DVar12 = STAppC::sub_006E51B0((STAppC *)&DAT_00807620);
        pSVar21->field_00B7 = DVar12;
        if (DAT_0080735e == '\0') {
          g_currentExceptionFrame = local_78.previous;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          return (undefined4 *)CONCAT31((int3)(DVar12 >> 8),DAT_0080735e);
        }
        uVar9 = DVar12 - pSVar21->field_00A7;
        if (3000 < uVar9 / 5) {
          g_currentExceptionFrame = local_78.previous;
          return (undefined4 *)(uVar9 * -0x33333333);
        }
        puVar18 = (undefined4 *)0x0;
        if (g_popUp_008016D8 != (PopUpTy *)0x0) {
          uVar9 = 9;
          pcVar13 = LoadResourceString(17000,g_module_00807618);
          puVar18 = (undefined4 *)thunk_FUN_0052d320(g_popUp_008016D8,pcVar13,uVar9);
        }
        pSVar21->field_00BB = 0;
        g_currentExceptionFrame = local_78.previous;
        return puVar18;
      }
      uVar27 = 0x10;
      goto cf_common_exit_0054F76E;
    }
  }
  if ((DAT_0080735e != '\0') && (g_popUp_008016D8 != (PopUpTy *)0x0)) {
    uVar9 = 8;
    pcVar13 = LoadResourceString(0x426c,g_module_00807618);
    thunk_FUN_0052d320(g_popUp_008016D8,pcVar13,uVar9);
  }
LAB_0054f98b:
  local_10 = 1;
  do {
    if (iVar8 == -0x4d) {
      thunk_FUN_00550380(0xe);
      goto cf_common_join_0054FAD8;
    }
    if (iVar8 == 0) {
      if (60000 < (int)((int)local_2c - pSVar21->field_0083)) {
        thunk_FUN_00550380(0xd);
      }
      goto cf_common_join_0054FAD8;
    }
    if (iVar8 != 1) goto cf_common_join_0054FAD8;
    pSVar21->field_0083 = (DWORD)local_2c;
    if (local_14 == 0x31) {
      pSVar21->field_0038 = 0;
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
      thunk_FUN_005504f0(pSVar21,local_24,0x426f,1);
    default:
      goto switchD_0054fb75_caseD_12;
    case 0x31:
      if ((int)pSVar21->field_0045 < (int)local_18) {
        pAVar11 = (AnonPointee_STPlaySystemC_003D *)
                  Library::DKW::LIB::FUN_006acf50((int)pSVar21->field_003D,local_18);
        pSVar21->field_003D = pAVar11;
        pSVar21->field_0045 = local_18;
      }
      local_28 = local_18;
      puVar19 = local_8;
      pAVar11 = pSVar21->field_003D;
      for (uVar9 = local_18 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(uint *)pAVar11 = *puVar19;
        puVar19 = puVar19 + 1;
        pAVar11 = (AnonPointee_STPlaySystemC_003D *)&pAVar11->field_0004;
      }
      for (uVar9 = local_18 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(char *)pAVar11 = (char)*puVar19;
        puVar19 = (uint *)((int)puVar19 + 1);
        pAVar11 = (AnonPointee_STPlaySystemC_003D *)&pAVar11->field_0x1;
      }
LAB_0054fbb7:
      pAVar11 = pSVar21->field_003D;
      uVar9 = pSVar21->field_0041;
      if (*(uint *)pAVar11 < uVar9) {
        pAVar11->field_0005 = 0;
      }
      else if (uVar9 < *(uint *)pAVar11) {
        if (pSVar21->field_006D == 0) {
          AddToRep(pSVar21,(undefined4 *)pAVar11,local_28);
          pSVar21->field_003D->field_0005 = 0;
          pSVar21->field_006D = 1;
          pSVar21->field_0071 = 0;
          pSVar21->field_0075 = 1;
          DVar12 = STAppC::sub_006E51B0((STAppC *)&DAT_00807620);
          pSVar21->field_0079 = DVar12;
          pSVar21->field_007D = 1;
        }
        else {
          thunk_FUN_00550380(0xf);
        }
      }
      else {
        if (pSVar21->field_006D != 0) {
          pSVar21->field_0071 = 1;
        }
        pSVar21->field_0041 = uVar9 + 1;
        if (pAVar11->field_0004 != '\0') {
          pSVar21->field_0057 = pAVar11->field_0005;
          pAVar11->field_0005 = 0;
          pSVar21->field_0049 = *(undefined4 *)pSVar21->field_003D;
          pSVar21->field_004D = pSVar21->field_003D->field_0004;
          pSVar21->field_004E = 0;
          thunk_FUN_00550110(pSVar21);
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
      pSVar21->field_0059 = 0;
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
    bVar26 = pSVar21->field_006D == 0;
    if (bVar26) {
      iVar8 = -1;
    }
    else {
      iVar8 = 0x31;
    }
    iVar8 = Library::Ourlib::CONNECT::FUN_00715630
                      (g_int_00811764,iVar8,&local_14,(int *)&local_24,&local_8,&local_18,-1,
                       (uint)!bVar26);
  } while( true );
}

