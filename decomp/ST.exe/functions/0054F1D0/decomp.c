#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tplaysys.cpp
   STPlaySystemC::PrepareMail */

undefined4 * __thiscall STPlaySystemC::PrepareMail(STPlaySystemC *this)

{
  AnonPointee_STPlaySystemC_0039 **ppAVar1;
  ushort *puVar2;
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
  undefined3 uVar16;
  int local_EAX_1257;
  int iVar8;
  int local_EAX_1662;
  char *local_EAX_1830;
  char *local_EAX_1962;
  int local_EAX_2157;
  int local_EAX_2233;
  int iVar9;
  int *piVar17;
  uint uVar18;
  uint *puVar19;
  byte *puVar20;
  STPlaySystemC *pSVar21;
  AnonPointee_STPlaySystemC_0039 *pAVar22;
  RecoveredRecord_00550830_31BFDEFC *pRVar23;
  byte *puVar24;
  char *pcVar25;
  bool bVar26;
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
  RecoveredRecord_00550830_31BFDEFC *local_8;

  local_34 = 7;
  local_8 = nullptr;
  local_78.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_78;
  local_c = this;

  local_EAX_49 = Library::MSVCRT::__setjmp3(local_78.jumpBuffer,0);
  pSVar21 = local_c;
  if (local_EAX_49 != 0) {
    g_currentExceptionFrame = local_78.previous;

    iVar9 = ReportDebugMessage("E:\\__titans\\Andrey\\tplaysys.cpp",0x742,0,local_EAX_49,
                               "%s","STPlaySystemC::PrepareMail");
    if (iVar9 == 0) {
      /* ST_CALLSITE[0054FD40]: CALL 0x006a5e40; direct=006A5E40 RaiseInternalException; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/undefined4; signature=__stdcall;pointer:/undefined4;/int;/int;pointer:/char;/int */
      puVar19 = RaiseInternalException
                          (local_EAX_49,0,"E:\\__titans\\Andrey\\tplaysys.cpp",0x744);
      return puVar19;
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
          pSVar21 = local_c;
          if (iVar10 == -0x4d) {
            /* ST_CALLSITE[0054F578]: CALL 0x004059ed; direct=004059ED thunk_FUN_00550380; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/undefined4; signature=__stdcall;pointer:/undefined4;/byte */
            puVar19 = thunk_FUN_00550380(6);
            g_currentExceptionFrame = local_78.previous;
            return puVar19;
          }
          if (iVar10 != 1) goto LAB_0054f531;
          uVar11 = (uint)DAT_00808aaf;
          bVar26 = true;
          if (uVar11 != 0) {
            piVar17 = &DAT_00808af0;
            do {
              if (*piVar17 == local_30) {
                bVar26 = false;
              }
              piVar17 = piVar17 + 0x27;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          if (bVar26) goto joined_r0x0054f3c5;
          switch(local_14) {
          case 0x11:
            /* ST_CALLSITE[0054F3DD]: CALL 0x00401f87; direct=00401F87 STPlaySystemC::sub_005504F0 */
            sub_005504F0(local_c,local_30,0x426f,1);
            if (local_30 == pSVar21->field_0061) {
              pSVar21->field_0059 = 0;
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
            if (pSVar21->field_00EC != 0) {
              /* ST_CALLSITE[0054F436]: CALL 0x00401f87; direct=00401F87 STPlaySystemC::sub_005504F0 */
              sub_005504F0(local_c,local_30,0x4274,0);
              pSVar6->field_00E8 = 1;
            }
            break;
          case 0x1a:
          case 0x35:
            /* ST_CALLSITE[0054F39F]: CALL 0x00401384; direct=00401384 STPlaySystemC::sub_00550430 */
            sub_00550430(local_c,local_30,0);
            goto joined_r0x0054f3c5;
          case 0x30:
            if (local_c->field_00E8 == 0) {
              FUN_006b9910(&local_c->field_0039,(int)local_8);
            }
            break;
          case 0x33:
            thunk_FUN_00550830(local_8);
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
            if (((local_c->field_00E8 != 0) || (local_8 == nullptr)
                ) || (*(int *)local_8 == 0)) break;
            puVar19 = (undefined4 *)&local_8->field_0x4;
            local_24 = 0;
            if (*(int *)local_8 != 0) {
              do {
                local_2c = (AnonPointee_STPlaySystemC_0039 **)
                           (STField<int>(puVar19,0x13) + STField<int>(puVar19,0xf));
                uVar11 = (int)local_2c + 0x1b;

                puVar12 = Library::DKW::LIB::MemAllocClear(uVar11);
                puVar20 = (byte *)(puVar19);
                puVar24 = (byte *)(puVar12);
                memmove(puVar24, puVar20, uVar11); /* compiler REP MOVS byte copy */
                uVar18 = 0;
                FUN_006b9910(&local_c->field_0039,(int)puVar12);
                puVar19 = (undefined4 *)((int)puVar19 + (int)local_2c + 0x1b);
                local_24 = local_24 + 1;
              } while (local_24 < *(uint *)local_8);
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
            pcVar25 = local_17c;
            for (uVar18 = uVar11 >> 2; pRVar23 = local_8, uVar18 != 0; uVar18 = uVar18 - 1) {
              *(undefined4 *)pcVar25 = *(undefined4 *)pcVar14;
              pcVar14 = pcVar14 + 4;
              pcVar25 = pcVar25 + 4;
            }
            bVar26 = local_8 != nullptr;
            for (uVar11 = uVar11 & 3; pSVar21 = local_c, uVar11 != 0; uVar11 = uVar11 - 1) {
              *pcVar25 = *pcVar14;
              pcVar14 = pcVar14 + 1;
              pcVar25 = pcVar25 + 1;
            }
            if ((bVar26) && ((local_c->field_00F0 != 0 || (*(char *)pRVar23 != '\0')))) {
              FreeAndNull(&local_8);
              pSVar21->field_0059 = 1;
              pSVar21->field_005D = 0;
              pSVar21->field_0061 = local_30;
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
                /* ST_CALLSITE[0054F51C]: CALL 0x004014d8; direct=004014D8 PopUpTy::sub_0052D320 */
                PopUpTy::sub_0052D320(g_popUp_008016D8,local_17c,9);
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
    if ((pAVar4 == nullptr) && (pSVar21->field_0028 == 0)) {
      pSVar21->field_003D->field_0005 = 0;
      g_currentExceptionFrame = local_78.previous;
      return &pAVar4->field_0000;
    }
    pSVar21->field_003D->field_0004 = 0;
    pSVar21->field_003D->field_0005 = 0;
    uVar11 = local_34;
    if (((int)(uint)(byte)pSVar21->field_004D < *(int *)(&DAT_007c2af8 + (uint)DAT_0080733b * 0x18))
       && (DAT_00808784 == 0)) {
      pSVar21->field_004D = pSVar21->field_004D + 1;
      g_currentExceptionFrame = local_78.previous;
      return &pAVar4->field_0000;
    }
    for (; pAVar4 != nullptr;
        pAVar4 = (AnonPointee_STPlaySystemC_0039 *)pAVar4->field_0000) {
      puVar19 = &pAVar4->field_0013;
      puVar20 = (byte *)(&pAVar4->field_000F);
      uVar11 = uVar11 + 0x1b + *puVar19 + *puVar20;
    }
    local_34 = uVar11;
    local_2c = ppAVar1;
    if ((uint)pSVar21->field_0045 < uVar11) {
      /* ST_CALLSITE[0054F5FF]: CALL 0x006acf50; direct=006ACF50 Library::DKW::LIB::MemRealloc; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/ClassPointees/AnonPointee_STPlaySystemC_003D; signature=__stdcall;pointer:/SubmarineTitans/Recovered/ClassPointees/AnonPointee_STPlaySystemC_003D;pointer:/void;/uint */
      pAVar15 = Library::DKW::LIB::MemRealloc(pSVar21->field_003D,uVar11);
      pSVar21->field_003D = pAVar15;
      pSVar21->field_0045 = uVar11;
    }
    puVar19 = (undefined4 *)&pSVar21->field_003D->field_0x7;
    pAVar4 = *ppAVar1;
    for (; pAVar4 != nullptr;
        pAVar4 = (AnonPointee_STPlaySystemC_0039 *)pAVar4->field_0000) {
      local_34 = pAVar4->field_0013 + 0x1b + pAVar4->field_000F;
      pAVar22 = pAVar4;
      puVar20 = (byte *)(puVar19);
      for (uVar18 = local_34 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
        *puVar20 = pAVar22->field_0000;
        pAVar22 = (AnonPointee_STPlaySystemC_0039 *)&pAVar22->field_0x4;
        puVar20 = (byte *)(puVar20 + 1);
      }
      for (uVar18 = local_34 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
        *(undefined1 *)puVar20 = *(undefined1 *)&pAVar22->field_0000;
        pAVar22 = (AnonPointee_STPlaySystemC_0039 *)((int)&pAVar22->field_0000 + 1);
        puVar20 = (byte *)((int)puVar20 + 1);
      }
      puVar19 = (undefined4 *)((int)puVar19 + local_34);
      puVar2 = &local_c->field_003D->field_0005;
      *puVar2 = *puVar2 + 1;
      ppAVar1 = local_2c;
    }
    puVar19 = nullptr;
    local_28 = uVar11;
    if (*ppAVar1 != nullptr) {
      puVar19 = (undefined4 *)FUN_006b9890((int *)ppAVar1);
    }
    pSVar21 = local_c;
    if (DAT_00808783 != '\x03') {
      g_currentExceptionFrame = local_78.previous;
      return puVar19;
    }
    pAVar15 = local_c->field_003D;
    cVar3 = local_c->field_004D;
    uVar16 = (undefined3)((uint)puVar19 >> 8);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    puVar19 = (undefined4 *)CONCAT31(uVar16,cVar3);
    if (pAVar15->field_0005 == 0) {
      bVar7 = cVar3 + 1;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      puVar19 = (undefined4 *)CONCAT31(uVar16,bVar7);
      local_c->field_004D = bVar7;
      if ((int)(uint)bVar7 <
          *(int *)(s_FrmPanelTy__GetMessage_007c2ae0 + (uint)DAT_0080733b * 0x18 + 0xc)) {
        g_currentExceptionFrame = local_78.previous;
        return puVar19;
      }
      if (DAT_00808783 == '\x03') {
        pAVar15->field_0004 = bVar7;
        local_c->field_003D->field_0005 = 0;
        /* ST_CALLSITE[0054F6B9]: CALL 0x00405443; direct=00405443 STPlaySystemC::sub_0054EBB0 */
        local_EAX_1257 = sub_0054EBB0(local_c,(char *)local_c->field_003D,7);
        puVar19 = nullptr;
        if (local_EAX_1257 != 0) {
          bVar7 = 7;
LAB_0054f6c6:
          /* ST_CALLSITE[0054F6C8]: CALL 0x004059ed; direct=004059ED thunk_FUN_00550380; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/undefined4; signature=__stdcall;pointer:/undefined4;/byte */
          puVar19 = thunk_FUN_00550380(bVar7);
          g_currentExceptionFrame = local_78.previous;
          return puVar19;
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
        puVar19 = nullptr;
        if (iVar8 != 0) {
          bVar7 = 8;
          goto LAB_0054f6c6;
        }
      }
    }
    pSVar21->field_004D = 0;
    g_currentExceptionFrame = local_78.previous;
    return puVar19;
  }
  local_10 = 0;
  /* ST_CALLSITE[0054F71F]: CALL dword ptr [0x0085bedc] */
  local_2c = (AnonPointee_STPlaySystemC_0039 **)timeGetTime();

  Library::DKW::DDX::FUN_006b7510(g_int_00811764,-1,&local_20,-1,0);
  pSVar21 = local_c;
  if (local_c->field_006D == 0) {

    puVar19 = (undefined4 *)thunk_FUN_00550110(local_c);
    if (puVar19 != nullptr) {
      g_currentExceptionFrame = local_78.previous;
      return puVar19;
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

        local_EAX_2233 = FUN_00715360(g_int_00811764,1,'C',nullptr,0,0,0xffffffff);
        if (local_EAX_2233 != 0) {
          bVar7 = 0xc;
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

        local_EAX_2157 = FUN_00715360(g_int_00811764,1,'B',&local_19,1,0,0xffffffff);
        if (local_EAX_2157 != 0) {
          bVar7 = 0xb;
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

    puVar19 = (undefined4 *)thunk_FUN_00550110(local_c);
    if (puVar19 != nullptr) {
      g_currentExceptionFrame = local_78.previous;
      return puVar19;
    }

    iVar10 = thunk_FUN_0054eb20(pSVar21,&local_28);
    if (iVar10 == 0) goto switchD_0054fb75_caseD_37;
    pSVar21->field_0071 = 0;
    pSVar21->field_006D = 0;
    pSVar21->field_0079 = 0;
    local_14 = 0x31;
    goto LAB_0054fbb7;
  }

  iVar10 = STAppC::sub_006E51B0((STAppC *)&DAT_00807620);
  if (30000 < iVar10 - pSVar21->field_0079) {
    bVar7 = 10;
cf_common_exit_0054F76E:
    /* ST_CALLSITE[0054F770]: CALL 0x004059ed; direct=004059ED thunk_FUN_00550380; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/undefined4; signature=__stdcall;pointer:/undefined4;/byte */
    puVar19 = thunk_FUN_00550380(bVar7);
    g_currentExceptionFrame = local_78.previous;
    return puVar19;
  }

  iVar10 = STAppC::sub_006E51B0((STAppC *)&DAT_00807620);
  if (pSVar21->field_007D * 4000 < iVar10 - pSVar21->field_0079) {

    FUN_006b6500(g_int_00811764,1);

    FUN_00715360(g_int_00811764,1,'6',(char *)&pSVar21->field_0041,4,0,0xffffffff);

    FUN_006b6500(g_int_00811764,DAT_0080733c);
    pSVar21->field_007D = pSVar21->field_007D + 1;
  }

  iVar10 = Library::Ourlib::CONNECT::FUN_00715630
                     (g_int_00811764,0x31,&local_14,(int *)&local_24,&local_8,&local_18,
                      pSVar21->field_0041,0);
  if (pSVar21->field_0075 == 0) {
    if (iVar10 != 1) goto LAB_0054f98b;
  }
  else {
    pSVar21->field_0075 = 0;
    if (iVar10 != 1) {

      FUN_006b6500(g_int_00811764,1);

      local_EAX_1662 =
           FUN_00715360(g_int_00811764,1,'6',(char *)&pSVar21->field_0041,4,0,0xffffffff);
      if (local_EAX_1662 == 0) {

        FUN_006b6500(g_int_00811764,DAT_0080733c);
        if (pSVar21->field_00BB < 5) {

          uVar11 = STAppC::sub_006E51B0((STAppC *)&DAT_00807620);
          (&pSVar21->field_00A7)[pSVar21->field_00BB] = uVar11;
          bVar7 = pSVar21->field_00BB + 1;
          pSVar21->field_00BB = bVar7;
          g_currentExceptionFrame = local_78.previous;
          return (undefined4 *)STReplaceLowByte((uint32_t)(uVar11), (uint8_t)(bVar7));
        }
        pSVar21->field_00A7 = pSVar21->field_00AB;
        pSVar21->field_00AB = pSVar21->field_00AF;
        pSVar21->field_00AF = pSVar21->field_00B3;
        pSVar21->field_00B3 = pSVar21->field_00B7;

        iVar10 = STAppC::sub_006E51B0((STAppC *)&DAT_00807620);
        pSVar21->field_00B7 = iVar10;
        if (DAT_0080735e == '\0') {
          g_currentExceptionFrame = local_78.previous;
          return (undefined4 *)STReplaceLowByte((uint32_t)(iVar10), (uint8_t)(DAT_0080735e));
        }
        uVar11 = iVar10 - pSVar21->field_00A7;
        if (3000 < uVar11 / 5) {
          g_currentExceptionFrame = local_78.previous;
          return (undefined4 *)(uVar11 * -0x33333333);
        }
        puVar19 = nullptr;
        if (g_popUp_008016D8 != nullptr) {
          uVar11 = 9;
          /* ST_CALLSITE[0054F8F6]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/PopUpTy; signature=__stdcall;pointer:/PopUpTy;/WinDef.h/UINT;/WinDef.h/HINSTANCE */
          local_EAX_1830 = (char *)LoadResourceString(17000,g_hINSTANCE_00807618);
          /* ST_CALLSITE[0054F902]: CALL 0x004014d8; direct=004014D8 PopUpTy::sub_0052D320; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/undefined4; signature=__thiscall;pointer:/undefined4;pointer:/PopUpTy;pointer:/char;/uint */
          puVar19 = PopUpTy::sub_0052D320(g_popUp_008016D8,local_EAX_1830,uVar11);
        }
        pSVar21->field_00BB = 0;
        g_currentExceptionFrame = local_78.previous;
        return puVar19;
      }
      bVar7 = 0x10;
      goto cf_common_exit_0054F76E;
    }
  }
  if ((DAT_0080735e != '\0') && (g_popUp_008016D8 != nullptr)) {
    uVar11 = 8;
    /* ST_CALLSITE[0054F97A]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/PopUpTy; signature=__stdcall;pointer:/PopUpTy;/WinDef.h/UINT;/WinDef.h/HINSTANCE */
    local_EAX_1962 = (char *)LoadResourceString(0x426c,g_hINSTANCE_00807618);
    /* ST_CALLSITE[0054F986]: CALL 0x004014d8; direct=004014D8 PopUpTy::sub_0052D320 */
    PopUpTy::sub_0052D320(g_popUp_008016D8,local_EAX_1962,uVar11);
  }
LAB_0054f98b:
  local_10 = 1;
  do {
    if (iVar10 == -0x4d) {
      thunk_FUN_00550380(0xe);
      goto cf_common_join_0054FAD8;
    }
    if (iVar10 == 0) {
      if (60000 < (int)((int)local_2c - pSVar21->field_0083)) {
        thunk_FUN_00550380(0xd);
      }
      goto cf_common_join_0054FAD8;
    }
    if (iVar10 != 1) goto cf_common_join_0054FAD8;
    pSVar21->field_0083 = (DWORD)local_2c;
    if (local_14 == 0x31) {
      pSVar21->field_0038 = 0;
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
      /* ST_CALLSITE[0054FC7B]: CALL 0x00401f87; direct=00401F87 STPlaySystemC::sub_005504F0 */
      sub_005504F0(pSVar21,local_24,0x426f,1);
    default:
      goto switchD_0054fb75_caseD_12;
    case 0x31:
      if ((int)pSVar21->field_0045 < (int)local_18) {
        /* ST_CALLSITE[0054FB8B]: CALL 0x006acf50; direct=006ACF50 Library::DKW::LIB::MemRealloc; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/ClassPointees/AnonPointee_STPlaySystemC_003D; signature=__stdcall;pointer:/SubmarineTitans/Recovered/ClassPointees/AnonPointee_STPlaySystemC_003D;pointer:/void;/uint */
        pAVar15 = Library::DKW::LIB::MemRealloc(pSVar21->field_003D,local_18);
        pSVar21->field_003D = pAVar15;
        pSVar21->field_0045 = local_18;
      }
      local_28 = local_18;
      pRVar23 = local_8;
      pAVar15 = pSVar21->field_003D;
      memmove(pAVar15, pRVar23, local_18); /* compiler REP MOVS byte copy */
LAB_0054fbb7:
      pAVar15 = pSVar21->field_003D;
      uVar11 = pSVar21->field_0041;
      if (*(uint *)pAVar15 < uVar11) {
        pAVar15->field_0005 = 0;
      }
      else if (uVar11 < *(uint *)pAVar15) {
        if (pSVar21->field_006D == 0) {
          /* ST_CALLSITE[0054FBE9]: CALL 0x004045fc; direct=004045FC STPlaySystemC::AddToRep */
          AddToRep(pSVar21,(undefined4 *)pAVar15,local_28);
          pSVar21->field_003D->field_0005 = 0;
          pSVar21->field_006D = 1;
          pSVar21->field_0071 = 0;
          pSVar21->field_0075 = 1;

          iVar10 = STAppC::sub_006E51B0((STAppC *)&DAT_00807620);
          pSVar21->field_0079 = iVar10;
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
        pSVar21->field_0041 = uVar11 + 1;
        if (pAVar15->field_0004 != '\0') {
          pSVar21->field_0057 = pAVar15->field_0005;
          pAVar15->field_0005 = 0;
          pSVar21->field_0049 = *STField<undefined4 *>(pSVar21,0x3D);
          pSVar21->field_004D = pSVar21->field_003D->field_0004;
          pSVar21->field_004E = 0;

          thunk_FUN_00550110(pSVar21);
        }
      }
      break;
    case 0x33:
      thunk_FUN_00550830(local_8);
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
    if (local_8 != nullptr) {
      FreeAndNull(&local_8);
    }
cf_common_join_0054FAD8:
    if (local_10 == 0) {
      g_currentExceptionFrame = local_78.previous;
      return nullptr;
    }
    local_10 = 0;
    bVar26 = pSVar21->field_006D == 0;
    if (bVar26) {
      iVar10 = -1;
    }
    else {
      iVar10 = 0x31;
    }

    iVar10 = Library::Ourlib::CONNECT::FUN_00715630
                       (g_int_00811764,iVar10,&local_14,(int *)&local_24,&local_8,&local_18,-1,
                        (uint)!bVar26);
  } while( true );
}

