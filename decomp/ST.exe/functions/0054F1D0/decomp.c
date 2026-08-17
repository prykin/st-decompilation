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
  STPlaySystemC *pSVar6;
  byte bVar7;
  int local_EAX_49;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  char *pcVar13;
  char *pcVar14;
  AnonPointee_STPlaySystemC_003D *pAVar15;
  undefined3 uVar17;
  int local_EAX_1257;
  int iVar8;
  DWORD DVar16;
  int local_EAX_1662;
  char *local_EAX_1830;
  char *local_EAX_1962;
  int local_EAX_2157;
  int local_EAX_2233;
  int iVar9;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 *extraout_EAX;
  int *piVar18;
  uint uVar19;
  undefined4 *puVar20;
  uint *puVar21;
  uint *puVar22;
  STPlaySystemC *pSVar23;
  AnonPointee_STPlaySystemC_0039 *pAVar24;
  uint *puVar25;
  char *pcVar26;
  undefined4 *puVar27;
  bool bVar28;
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
  local_8 = nullptr;
  local_78.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_78;
  local_c = this;
  local_EAX_49 = Library::MSVCRT::__setjmp3(local_78.jumpBuffer,0);
  pSVar23 = local_c;
  if (local_EAX_49 != 0) {
    g_currentExceptionFrame = local_78.previous;
    iVar9 = ReportDebugMessage("E:\\__titans\\Andrey\\tplaysys.cpp",0x742,0,local_EAX_49,
                               "%s","STPlaySystemC::PrepareMail");
    if (iVar9 == 0) {
      RaiseInternalException(local_EAX_49,0,"E:\\__titans\\Andrey\\tplaysys.cpp",0x744);
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
          iVar10 = Library::Ourlib::CONNECT::FUN_00715630
                             (g_int_00811764,-1,&local_14,&local_30,&local_8,nullptr,-1,0);
          pSVar23 = local_c;
          if (iVar10 == -0x4d) {
            puVar20 = (undefined4 *)thunk_FUN_00550380(6);
            g_currentExceptionFrame = local_78.previous;
            return puVar20;
          }
          if (iVar10 != 1) goto LAB_0054f531;
          uVar11 = (uint)DAT_00808aaf;
          bVar28 = true;
          if (uVar11 != 0) {
            piVar18 = &DAT_00808af0;
            do {
              if (*piVar18 == local_30) {
                bVar28 = false;
              }
              piVar18 = piVar18 + 0x27;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          if (bVar28) goto joined_r0x0054f3c5;
          switch(local_14) {
          case 0x11:
            thunk_FUN_005504f0(local_c,local_30,0x426f,1);
            if (local_30 == pSVar23->field_0061) {
              pSVar23->field_0059 = 0;
            }
            goto joined_r0x0054f526;
          default:
joined_r0x0054f526:
            if (local_8 == nullptr) break;
            goto LAB_0054f52c;
          case 0x13:
            if (local_30 == local_c->field_0061) {
              local_c->field_0059 = 0;
            }
            if (local_8 != nullptr) {
              FreeAndNull(&local_8);
            }
            pSVar6 = local_c;
            if (pSVar23->field_00EC != 0) {
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
            /* ST_CALLSITE[0054F2E6]: CALL 0x00401456; direct=00401456 STPlaySystemC::sub_005505D0 */
            sub_005505D0(local_c,local_30,(int *)local_8);
joined_r0x0054f3c5:
            if (local_8 != nullptr) {
LAB_0054f52c:
              FreeAndNull(&local_8);
            }
            break;
          case 0x38:
            if (((local_c->field_00E8 != 0) || (local_8 == nullptr)) || (*local_8 == 0)) break;
            puVar21 = local_8 + 1;
            local_24 = 0;
            if (*local_8 != 0) {
              do {
                local_2c = (AnonPointee_STPlaySystemC_0039 **)
                           (STField<int>(puVar21,0x13) + STField<int>(puVar21,0xf));
                uVar11 = (int)local_2c + 0x1b;
                puVar12 = Library::DKW::LIB::MemAllocClear(uVar11);
                puVar22 = puVar21;
                puVar25 = puVar12;
                memmove(puVar25, puVar22, uVar11); /* compiler REP MOVS byte copy */
                uVar19 = 0;
                FUN_006b9910(&local_c->field_0039,(int)puVar12);
                puVar21 = (uint *)((int)puVar21 + (int)local_2c + 0x1b);
                local_24 = local_24 + 1;
              } while (local_24 < *local_8);
            }
            goto LAB_0054f52c;
          case 0x42:
            pcVar13 = LoadResourceString(0x426a,g_hINSTANCE_00807618);
            uVar11 = 0xffffffff;
            do {
              pcVar14 = pcVar13;
              if (uVar11 == 0) break;
              uVar11 = uVar11 - 1;
              pcVar14 = pcVar13 + 1;
              cVar3 = *pcVar13;
              pcVar13 = pcVar14;
            } while (cVar3 != '\0');
            uVar11 = ~uVar11;
            pcVar14 = pcVar14 + -uVar11;
            pcVar26 = local_17c;
            for (uVar19 = uVar11 >> 2; puVar21 = local_8, uVar19 != 0; uVar19 = uVar19 - 1) {
              *(undefined4 *)pcVar26 = *(undefined4 *)pcVar14;
              pcVar14 = pcVar14 + 4;
              pcVar26 = pcVar26 + 4;
            }
            bVar28 = local_8 != nullptr;
            for (uVar11 = uVar11 & 3; pSVar23 = local_c, uVar11 != 0; uVar11 = uVar11 - 1) {
              *pcVar26 = *pcVar14;
              pcVar14 = pcVar14 + 1;
              pcVar26 = pcVar26 + 1;
            }
            if ((bVar28) && ((local_c->field_00F0 != 0 || ((char)*puVar21 != '\0')))) {
              FreeAndNull(&local_8);
              pSVar23->field_0059 = 1;
              pSVar23->field_005D = 0;
              pSVar23->field_0061 = local_30;
              uVar11 = 0;
              if (DAT_00808aaf != 0) {
                pcVar14 = &DAT_00808af6;
                do {
                  if ((*(int *)(pcVar14 + -6) == local_30) && (*pcVar14 != '\0')) {
                    /* ST_CALLSITE[0054F500]: CALL dword ptr [0x0085bde8] */
                    wsprintfA(local_17c,"%s (%s)",local_17c,pcVar14 + -0x46);
                    break;
                  }
                  uVar11 = uVar11 + 1;
                  pcVar14 = pcVar14 + 0x9c;
                } while (uVar11 < DAT_00808aaf);
              }
              if (g_popUp_008016D8 != nullptr) {
                thunk_FUN_0052d320(g_popUp_008016D8,local_17c,9);
              }
            }
          }
LAB_0054f531:
          local_18 = local_18 + 1;
          pSVar23 = local_c;
        } while ((int)local_18 < local_20);
      }
    }
    pAVar4 = pSVar23->field_0039;
    ppAVar1 = &pSVar23->field_0039;
    if ((pAVar4 == nullptr) && (pSVar23->field_0028 == 0)) {
      pSVar23->field_003D->field_0005 = 0;
      g_currentExceptionFrame = local_78.previous;
      return &pAVar4->field_0000;
    }
    pSVar23->field_003D->field_0004 = 0;
    pSVar23->field_003D->field_0005 = 0;
    uVar11 = local_34;
    if (((int)(uint)(byte)pSVar23->field_004D < *(int *)(&DAT_007c2af8 + (uint)DAT_0080733b * 0x18))
       && (DAT_00808784 == 0)) {
      pSVar23->field_004D = pSVar23->field_004D + 1;
      g_currentExceptionFrame = local_78.previous;
      return &pAVar4->field_0000;
    }
    for (; pAVar4 != nullptr;
        pAVar4 = (AnonPointee_STPlaySystemC_0039 *)pAVar4->field_0000) {
      puVar20 = &pAVar4->field_0013;
      puVar27 = &pAVar4->field_000F;
      uVar11 = uVar11 + 0x1b + *puVar20 + *puVar27;
    }
    local_34 = uVar11;
    local_2c = ppAVar1;
    if ((uint)pSVar23->field_0045 < uVar11) {
      pAVar15 = Library::DKW::LIB::MemRealloc(pSVar23->field_003D,uVar11);
      pSVar23->field_003D = pAVar15;
      pSVar23->field_0045 = uVar11;
    }
    puVar20 = (undefined4 *)&pSVar23->field_003D->field_0x7;
    pAVar4 = *ppAVar1;
    for (; pAVar4 != nullptr;
        pAVar4 = (AnonPointee_STPlaySystemC_0039 *)pAVar4->field_0000) {
      local_34 = pAVar4->field_0013 + 0x1b + pAVar4->field_000F;
      pAVar24 = pAVar4;
      puVar27 = puVar20;
      for (uVar19 = local_34 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
        *puVar27 = pAVar24->field_0000;
        pAVar24 = (AnonPointee_STPlaySystemC_0039 *)&pAVar24->field_0x4;
        puVar27 = puVar27 + 1;
      }
      for (uVar19 = local_34 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
        *(undefined1 *)puVar27 = *(undefined1 *)&pAVar24->field_0000;
        pAVar24 = (AnonPointee_STPlaySystemC_0039 *)((int)&pAVar24->field_0000 + 1);
        puVar27 = (undefined4 *)((int)puVar27 + 1);
      }
      puVar20 = (undefined4 *)((int)puVar20 + local_34);
      puVar2 = &local_c->field_003D->field_0005;
      *puVar2 = *puVar2 + 1;
      ppAVar1 = local_2c;
    }
    puVar20 = nullptr;
    local_28 = uVar11;
    if (*ppAVar1 != nullptr) {
      puVar20 = (undefined4 *)FUN_006b9890((int *)ppAVar1);
    }
    pSVar23 = local_c;
    if (DAT_00808783 != '\x03') {
      g_currentExceptionFrame = local_78.previous;
      return puVar20;
    }
    pAVar15 = local_c->field_003D;
    cVar3 = local_c->field_004D;
    uVar17 = (undefined3)((uint)puVar20 >> 8);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    puVar20 = (undefined4 *)CONCAT31(uVar17,cVar3);
    if (pAVar15->field_0005 == 0) {
      bVar7 = cVar3 + 1;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      puVar20 = (undefined4 *)CONCAT31(uVar17,bVar7);
      local_c->field_004D = bVar7;
      if ((int)(uint)bVar7 <
          *(int *)(s_FrmPanelTy__GetMessage_007c2ae0 + (uint)DAT_0080733b * 0x18 + 0xc)) {
        g_currentExceptionFrame = local_78.previous;
        return puVar20;
      }
      if (DAT_00808783 == '\x03') {
        pAVar15->field_0004 = bVar7;
        local_c->field_003D->field_0005 = 0;
        /* ST_CALLSITE[0054F6B9]: CALL 0x00405443; direct=00405443 STPlaySystemC::sub_0054EBB0 */
        local_EAX_1257 = sub_0054EBB0(local_c,(char *)local_c->field_003D,7);
        puVar20 = nullptr;
        if (local_EAX_1257 != 0) {
          bVar7 = 7;
LAB_0054f6c6:
          puVar20 = (undefined4 *)thunk_FUN_00550380(bVar7);
          g_currentExceptionFrame = local_78.previous;
          return puVar20;
        }
      }
    }
    else {
      if (cVar3 != '\0') {
        pAVar15->field_0004 = cVar3;
      }
      if (DAT_00808783 == '\x03') {
        /* ST_CALLSITE[0054F70B]: CALL 0x00405443; direct=00405443 STPlaySystemC::sub_0054EBB0 */
        iVar8 = sub_0054EBB0(local_c,(char *)local_c->field_003D,local_28);
        puVar20 = nullptr;
        if (iVar8 != 0) {
          bVar7 = 8;
          goto LAB_0054f6c6;
        }
      }
    }
    pSVar23->field_004D = 0;
    g_currentExceptionFrame = local_78.previous;
    return puVar20;
  }
  local_10 = 0;
  /* ST_CALLSITE[0054F71F]: CALL dword ptr [0x0085bedc] */
  local_2c = (AnonPointee_STPlaySystemC_0039 **)timeGetTime();
  Library::DKW::DDX::FUN_006b7510(g_int_00811764,-1,&local_20,-1,0);
  pSVar23 = local_c;
  if (local_c->field_006D == 0) {
    puVar20 = (undefined4 *)thunk_FUN_00550110(local_c);
    if (puVar20 != nullptr) {
      g_currentExceptionFrame = local_78.previous;
      return puVar20;
    }
    if (local_20 < 3) {
      if (pSVar23->field_0059 == 0) {
        if (DAT_00807654 <
            *(int *)(s_FrmPanelTy__GetMessage_007c2ae0 + (uint)DAT_0080733b * 0x18 + 0x14)) {
          DAT_00807654 = DAT_00807654 + 1;
        }
      }
      else {
        FUN_006b6500(g_int_00811764,1);
        local_EAX_2233 = FUN_00715360(g_int_00811764,1,'C',nullptr,0,0,0xffffffff);
        if (local_EAX_2233 != 0) {
          bVar7 = 0xc;
          goto cf_common_exit_0054F76E;
        }
        FUN_006b6500(g_int_00811764,DAT_0080733c);
        pSVar23->field_0059 = 0;
      }
    }
    else {
      if ((5 < DAT_00807654) && (0 < DAT_00807654)) {
        DAT_00807654 = DAT_00807654 + -1;
      }
      if ((pSVar23->field_0038 == '\0') &&
         (((0x32 < local_20 && (pSVar23->field_0059 == 0)) || (100 < local_20)))) {
        FUN_006b6500(g_int_00811764,1);
        local_19 = '\x01';
        local_EAX_2157 = FUN_00715360(g_int_00811764,1,'B',&local_19,1,0,0xffffffff);
        if (local_EAX_2157 != 0) {
          bVar7 = 0xb;
          goto cf_common_exit_0054F76E;
        }
        FUN_006b6500(g_int_00811764,DAT_0080733c);
        pSVar23->field_0059 = 1;
      }
    }
    local_10 = 1;
    goto cf_common_join_0054FAD8;
  }
  if (local_c->field_0071 != 0) {
    puVar20 = (undefined4 *)thunk_FUN_00550110(local_c);
    if (puVar20 != nullptr) {
      g_currentExceptionFrame = local_78.previous;
      return puVar20;
    }
    iVar10 = thunk_FUN_0054eb20(pSVar23,&local_28);
    if (iVar10 == 0) goto switchD_0054fb75_caseD_37;
    pSVar23->field_0071 = 0;
    pSVar23->field_006D = 0;
    pSVar23->field_0079 = 0;
    local_14 = 0x31;
    goto LAB_0054fbb7;
  }
  DVar16 = STAppC::sub_006E51B0((STAppC *)&DAT_00807620);
  if (30000 < (int)(DVar16 - pSVar23->field_0079)) {
    bVar7 = 10;
cf_common_exit_0054F76E:
    puVar20 = (undefined4 *)thunk_FUN_00550380(bVar7);
    g_currentExceptionFrame = local_78.previous;
    return puVar20;
  }
  DVar16 = STAppC::sub_006E51B0((STAppC *)&DAT_00807620);
  if (pSVar23->field_007D * 4000 < (int)(DVar16 - pSVar23->field_0079)) {
    FUN_006b6500(g_int_00811764,1);
    FUN_00715360(g_int_00811764,1,'6',(char *)&pSVar23->field_0041,4,0,0xffffffff);
    FUN_006b6500(g_int_00811764,DAT_0080733c);
    pSVar23->field_007D = pSVar23->field_007D + 1;
  }
  iVar10 = Library::Ourlib::CONNECT::FUN_00715630
                     (g_int_00811764,0x31,&local_14,(int *)&local_24,&local_8,&local_18,
                      pSVar23->field_0041,0);
  if (pSVar23->field_0075 == 0) {
    if (iVar10 != 1) goto LAB_0054f98b;
  }
  else {
    pSVar23->field_0075 = 0;
    if (iVar10 != 1) {
      FUN_006b6500(g_int_00811764,1);
      local_EAX_1662 =
           FUN_00715360(g_int_00811764,1,'6',(char *)&pSVar23->field_0041,4,0,0xffffffff);
      if (local_EAX_1662 == 0) {
        FUN_006b6500(g_int_00811764,DAT_0080733c);
        if (pSVar23->field_00BB < 5) {
          DVar16 = STAppC::sub_006E51B0((STAppC *)&DAT_00807620);
          (&pSVar23->field_00A7)[pSVar23->field_00BB] = DVar16;
          bVar7 = pSVar23->field_00BB + 1;
          pSVar23->field_00BB = bVar7;
          g_currentExceptionFrame = local_78.previous;
          return (undefined4 *)STReplaceLowByte((uint32_t)(DVar16), (uint8_t)(bVar7));
        }
        pSVar23->field_00A7 = pSVar23->field_00AB;
        pSVar23->field_00AB = pSVar23->field_00AF;
        pSVar23->field_00AF = pSVar23->field_00B3;
        pSVar23->field_00B3 = pSVar23->field_00B7;
        DVar16 = STAppC::sub_006E51B0((STAppC *)&DAT_00807620);
        pSVar23->field_00B7 = DVar16;
        if (DAT_0080735e == '\0') {
          g_currentExceptionFrame = local_78.previous;
          return (undefined4 *)STReplaceLowByte((uint32_t)(DVar16), (uint8_t)(DAT_0080735e));
        }
        uVar11 = DVar16 - pSVar23->field_00A7;
        if (3000 < uVar11 / 5) {
          g_currentExceptionFrame = local_78.previous;
          return (undefined4 *)(uVar11 * -0x33333333);
        }
        puVar20 = nullptr;
        if (g_popUp_008016D8 != nullptr) {
          uVar11 = 9;
          local_EAX_1830 = LoadResourceString(17000,g_hINSTANCE_00807618);
          puVar20 = (undefined4 *)thunk_FUN_0052d320(g_popUp_008016D8,local_EAX_1830,uVar11);
        }
        pSVar23->field_00BB = 0;
        g_currentExceptionFrame = local_78.previous;
        return puVar20;
      }
      bVar7 = 0x10;
      goto cf_common_exit_0054F76E;
    }
  }
  if ((DAT_0080735e != '\0') && (g_popUp_008016D8 != nullptr)) {
    uVar11 = 8;
    local_EAX_1962 = LoadResourceString(0x426c,g_hINSTANCE_00807618);
    thunk_FUN_0052d320(g_popUp_008016D8,local_EAX_1962,uVar11);
  }
LAB_0054f98b:
  local_10 = 1;
  do {
    if (iVar10 == -0x4d) {
      thunk_FUN_00550380(0xe);
      goto cf_common_join_0054FAD8;
    }
    if (iVar10 == 0) {
      if (60000 < (int)((int)local_2c - pSVar23->field_0083)) {
        thunk_FUN_00550380(0xd);
      }
      goto cf_common_join_0054FAD8;
    }
    if (iVar10 != 1) goto cf_common_join_0054FAD8;
    pSVar23->field_0083 = (DWORD)local_2c;
    if (local_14 == 0x31) {
      pSVar23->field_0038 = 0;
    }
    switch(local_14) {
    case 0x10:
      DAT_0080c50a = 0;
      DAT_0080c512 = 1;
      if (g_optPanel_008016DC != nullptr) {
        /* ST_CALLSITE[0054FCA4]: CALL 0x00405ef7; direct=00405EF7 OptPanelTy::Notification */
        OptPanelTy::Notification(g_optPanel_008016DC,'\v',0);
      }
      break;
    case 0x11:
      thunk_FUN_005504f0(pSVar23,local_24,0x426f,1);
    default:
      goto switchD_0054fb75_caseD_12;
    case 0x31:
      if ((int)pSVar23->field_0045 < (int)local_18) {
        pAVar15 = Library::DKW::LIB::MemRealloc(pSVar23->field_003D,local_18);
        pSVar23->field_003D = pAVar15;
        pSVar23->field_0045 = local_18;
      }
      local_28 = local_18;
      puVar21 = local_8;
      pAVar15 = pSVar23->field_003D;
      memmove(pAVar15, puVar21, local_18); /* compiler REP MOVS byte copy */
LAB_0054fbb7:
      pAVar15 = pSVar23->field_003D;
      uVar11 = pSVar23->field_0041;
      if (*(uint *)pAVar15 < uVar11) {
        pAVar15->field_0005 = 0;
      }
      else if (uVar11 < *(uint *)pAVar15) {
        if (pSVar23->field_006D == 0) {
          /* ST_CALLSITE[0054FBE9]: CALL 0x004045fc; direct=004045FC STPlaySystemC::AddToRep */
          AddToRep(pSVar23,(undefined4 *)pAVar15,local_28);
          pSVar23->field_003D->field_0005 = 0;
          pSVar23->field_006D = 1;
          pSVar23->field_0071 = 0;
          pSVar23->field_0075 = 1;
          DVar16 = STAppC::sub_006E51B0((STAppC *)&DAT_00807620);
          pSVar23->field_0079 = DVar16;
          pSVar23->field_007D = 1;
        }
        else {
          thunk_FUN_00550380(0xf);
        }
      }
      else {
        if (pSVar23->field_006D != 0) {
          pSVar23->field_0071 = 1;
        }
        pSVar23->field_0041 = uVar11 + 1;
        if (pAVar15->field_0004 != '\0') {
          pSVar23->field_0057 = pAVar15->field_0005;
          pAVar15->field_0005 = 0;
          pSVar23->field_0049 = *(undefined4 *)pSVar23->field_003D;
          pSVar23->field_004D = pSVar23->field_003D->field_0004;
          pSVar23->field_004E = 0;
          thunk_FUN_00550110(pSVar23);
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
      pSVar23->field_0059 = 0;
switchD_0054fb75_caseD_12:
      local_10 = 1;
    }
    if (local_8 != nullptr) {
      FreeAndNull(&local_8);
    }
cf_common_join_0054FAD8:
    if (local_10 == 0) {
      g_currentExceptionFrame = local_78.previous;
      return nullptr;
    }
    local_10 = 0;
    bVar28 = pSVar23->field_006D == 0;
    if (bVar28) {
      iVar10 = -1;
    }
    else {
      iVar10 = 0x31;
    }
    iVar10 = Library::Ourlib::CONNECT::FUN_00715630
                       (g_int_00811764,iVar10,&local_14,(int *)&local_24,&local_8,&local_18,-1,
                        (uint)!bVar28);
  } while( true );
}

