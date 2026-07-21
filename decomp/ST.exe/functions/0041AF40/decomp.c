
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tc_gobj.cpp
   STGameObjC::GetMessage */

undefined4 __thiscall STGameObjC::GetMessage(STGameObjC *this,AnonShape_0041AF40_F59F8577 *param_1)

{
  dword dVar1;
  AnonPointee_STGameObjC_0195 *pAVar2;
  AnonPointee_STGameObjC_01AD *pAVar3;
  dword *pdVar4;
  code *pcVar5;
  STGameObjC *pSVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  undefined3 extraout_var_08;
  undefined4 uVar10;
  undefined3 extraout_var_09;
  undefined3 extraout_var_10;
  undefined3 extraout_var_11;
  undefined3 extraout_var_12;
  undefined3 extraout_var_13;
  undefined3 extraout_var_14;
  undefined3 extraout_var_15;
  undefined3 extraout_var_16;
  undefined3 extraout_var_17;
  undefined3 extraout_var_18;
  undefined3 extraout_var_19;
  undefined3 extraout_var_20;
  undefined3 extraout_var_21;
  int iVar11;
  undefined4 unaff_ESI;
  undefined4 *puVar12;
  char *pcVar13;
  AnonPointee_STGameObjC_01B1 *pAVar14;
  int *piVar15;
  short *psVar16;
  short *psVar17;
  DArrayTy *pDVar18;
  int *piVar19;
  char *pcVar20;
  void *unaff_EDI;
  undefined4 *puVar21;
  char *pcVar22;
  AnonPointee_STGameObjC_0195 *pAVar23;
  AnonPointee_STGameObjC_01AD *pAVar24;
  short *psVar25;
  short *psVar26;
  dword *pdVar27;
  int *piVar28;
  char *pcVar29;
  bool bVar30;
  Global_sub_0043FC50_param_1Enum GVar31;
  InternalExceptionFrame local_58;
  int *local_14;
  STGameObjC *local_10;
  DArrayTy *local_c;
  AnonShape_0041AF40_EF4C5356 *local_8;
  
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_10 = this;
  iVar8 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar6 = local_10;
  if (iVar8 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar11 = ReportDebugMessage(s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0x7eb,0,iVar8,&DAT_007a4ccc,
                                s_STGameObjC__GetMessage_007a4ecc);
    if (iVar11 != 0) {
      pcVar5 = (code *)swi(3);
      uVar10 = (*pcVar5)();
      return uVar10;
    }
    RaiseInternalException(iVar8,0,s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0x7ec);
    return 0xffff;
  }
  FUN_006e5fd0();
  if (param_1->field_0010 != 0) {
    if (param_1->field_0010 != 2) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    puVar12 = param_1->field_0014;
    if (puVar12 == (undefined4 *)0x0) {
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0x678);
    }
    pSVar6->field_0020 = *puVar12;
    pSVar6->field_0024 = puVar12[1];
    pSVar6->field_002C = puVar12[4];
    pSVar6->field_0028 = puVar12[2];
    iVar8 = pSVar6->field_0018 * DAT_00808754;
    pSVar6->field_001C = iVar8;
    uVar9 = iVar8 * 0x41c64e6d + 0x3039;
    pSVar6->field_001C = uVar9;
    pSVar6->field_00F8 = (short)((ulonglong)(uVar9 >> 0x10) % 0x1f) + 0x1e;
    (*(code *)pSVar6->field_0000->field_00CC)();
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  if (-1 < *(int *)&pSVar6->field_0x8f) {
    *(int *)&pSVar6->field_0x8f = *(int *)&pSVar6->field_0x8f + 1;
  }
  (**(code **)(pSVar6->field_0000 + 1))();
  if (pSVar6->field_01CD != 1) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  uVar9 = pSVar6->field_0020;
  if (uVar9 < 0x1af) {
    if (uVar9 == 0x1ae) {
      if (g_cPanel_00801688 == (CPanelTy *)0x0) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      bVar7 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_1);
      if (CONCAT31(extraout_var_05,bVar7) != 0) {
        (*(code *)pSVar6->field_0000->field_0030)(pSVar6->field_0121);
        iVar8 = 0x1b;
        bVar7 = true;
        psVar17 = (short *)pSVar6->field_0121;
        psVar26 = (short *)pSVar6->field_011D;
        do {
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          bVar7 = *psVar17 == *psVar26;
          psVar17 = psVar17 + 1;
          psVar26 = psVar26 + 1;
        } while (bVar7);
        if (!bVar7) {
          psVar17 = (short *)pSVar6->field_0121;
          psVar26 = (short *)pSVar6->field_011D;
          for (iVar8 = 0xd; iVar8 != 0; iVar8 = iVar8 + -1) {
            *(undefined4 *)psVar26 = *(undefined4 *)psVar17;
            psVar17 = psVar17 + 2;
            psVar26 = psVar26 + 2;
          }
          *psVar26 = *psVar17;
          thunk_FUN_0043fc50(CASE_1,0);
        }
      }
      if (g_cPanel_00801688 == (CPanelTy *)0x0) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      bVar7 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_2);
      if (CONCAT31(extraout_var_06,bVar7) != 0) {
        (*(code *)pSVar6->field_0000->field_0034)(pSVar6->field_0129);
        iVar8 = 0x17;
        bVar7 = true;
        piVar15 = (int *)pSVar6->field_0129;
        piVar19 = (int *)pSVar6->field_0125;
        do {
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          bVar7 = *piVar15 == *piVar19;
          piVar15 = piVar15 + 1;
          piVar19 = piVar19 + 1;
        } while (bVar7);
        if (!bVar7) {
          piVar15 = (int *)pSVar6->field_0129;
          piVar19 = (int *)pSVar6->field_0125;
          for (iVar8 = 0x17; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar19 = *piVar15;
            piVar15 = piVar15 + 1;
            piVar19 = piVar19 + 1;
          }
          thunk_FUN_0043fc50(CASE_2,0);
        }
      }
      if (g_cPanel_00801688 == (CPanelTy *)0x0) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      bVar7 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_E);
      if (CONCAT31(extraout_var_07,bVar7) != 0) {
        (*(code *)pSVar6->field_0000->field_0058)(pSVar6->field_01B1);
        pAVar3 = pSVar6->field_01AD;
        local_8 = (AnonShape_0041AF40_EF4C5356 *)pSVar6->field_01B1;
        iVar8 = 0xb;
        bVar7 = true;
        pAVar14 = (AnonPointee_STGameObjC_01B1 *)local_8;
        pAVar24 = pAVar3;
        do {
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          bVar7 = *(char *)&pAVar14->field_0000 == *(char *)&pAVar24->field_0000;
          pAVar14 = (AnonPointee_STGameObjC_01B1 *)((int)&pAVar14->field_0000 + 1);
          pAVar24 = (AnonPointee_STGameObjC_01AD *)((int)&pAVar24->field_0000 + 1);
        } while (bVar7);
        if (!bVar7) {
          pAVar3->field_0000 = ((AnonPointee_STGameObjC_01B1 *)local_8)->field_0000;
          pAVar3->field_0004 = ((AnonPointee_STGameObjC_01B1 *)local_8)->field_0004;
          pAVar3->field_0008 = ((AnonPointee_STGameObjC_01B1 *)local_8)->field_0008;
          pAVar3->field_000A = ((AnonPointee_STGameObjC_01B1 *)local_8)->field_000A;
          thunk_FUN_0043fc50(CASE_E,0);
        }
      }
      if (g_cPanel_00801688 == (CPanelTy *)0x0) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      bVar7 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_12);
      if (CONCAT31(extraout_var_08,bVar7) == 0) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      (**(code **)&pSVar6->field_0000->field_0x64)(pSVar6->field_01C9);
      psVar17 = (short *)pSVar6->field_01C5;
      psVar26 = (short *)pSVar6->field_01C9;
      iVar8 = 3;
      bVar7 = true;
      psVar16 = psVar26;
      psVar25 = psVar17;
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        bVar7 = *psVar16 == *psVar25;
        psVar16 = psVar16 + 1;
        psVar25 = psVar25 + 1;
      } while (bVar7);
      if (bVar7) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      *(undefined4 *)psVar17 = *(undefined4 *)psVar26;
      psVar17[2] = psVar26[2];
      GVar31 = CASE_12;
      goto cf_common_exit_0041BE5F;
    }
    if (uVar9 < 0x173) {
      if (uVar9 != 0x172) {
        if (uVar9 == 0x14) {
          if ((g_cPanel_00801688 != (CPanelTy *)0x0) &&
             (bVar7 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_1),
             CONCAT31(extraout_var,bVar7) != 0)) {
            (*(code *)pSVar6->field_0000->field_0030)(pSVar6->field_0121);
            iVar8 = 0x1b;
            bVar7 = true;
            psVar17 = (short *)pSVar6->field_0121;
            psVar26 = (short *)pSVar6->field_011D;
            do {
              if (iVar8 == 0) break;
              iVar8 = iVar8 + -1;
              bVar7 = *psVar17 == *psVar26;
              psVar17 = psVar17 + 1;
              psVar26 = psVar26 + 1;
            } while (bVar7);
            if (!bVar7) {
              uVar9 = STAllPlayersC::GetNInTmp(0,0);
              if ((short)uVar9 == 1) {
                puVar12 = (undefined4 *)pSVar6->field_0121;
              }
              else {
                puVar12 = (undefined4 *)pSVar6->field_0121;
                if (*(char *)((int)puVar12 + 0x1b) == *(char *)(pSVar6->field_011D + 0x1b)) {
                  iVar8 = 5;
                  bVar7 = true;
                  pcVar13 = (char *)((int)puVar12 + 0x2a);
                  pcVar22 = (char *)(pSVar6->field_011D + 0x2a);
                  do {
                    if (iVar8 == 0) break;
                    iVar8 = iVar8 + -1;
                    bVar7 = *pcVar13 == *pcVar22;
                    pcVar13 = pcVar13 + 1;
                    pcVar22 = pcVar22 + 1;
                  } while (bVar7);
                  if (bVar7) goto LAB_0041b128;
                }
              }
              puVar21 = (undefined4 *)pSVar6->field_011D;
              for (iVar8 = 0xd; iVar8 != 0; iVar8 = iVar8 + -1) {
                *puVar21 = *puVar12;
                puVar12 = puVar12 + 1;
                puVar21 = puVar21 + 1;
              }
              *(undefined2 *)puVar21 = *(undefined2 *)puVar12;
              thunk_FUN_0043fc50(CASE_1,0);
            }
          }
LAB_0041b128:
          if ((g_cPanel_00801688 != (CPanelTy *)0x0) &&
             (bVar7 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_2),
             CONCAT31(extraout_var_00,bVar7) != 0)) {
            (*(code *)pSVar6->field_0000->field_0034)(pSVar6->field_0129);
            iVar8 = 0x17;
            bVar7 = true;
            piVar15 = (int *)pSVar6->field_0129;
            piVar19 = (int *)pSVar6->field_0125;
            do {
              if (iVar8 == 0) break;
              iVar8 = iVar8 + -1;
              bVar7 = *piVar15 == *piVar19;
              piVar15 = piVar15 + 1;
              piVar19 = piVar19 + 1;
            } while (bVar7);
            if (!bVar7) {
              piVar15 = (int *)pSVar6->field_0129;
              piVar19 = (int *)pSVar6->field_0125;
              for (iVar8 = 0x17; iVar8 != 0; iVar8 = iVar8 + -1) {
                *piVar19 = *piVar15;
                piVar15 = piVar15 + 1;
                piVar19 = piVar19 + 1;
              }
              thunk_FUN_0043fc50(CASE_2,0);
            }
          }
          if ((g_cPanel_00801688 != (CPanelTy *)0x0) &&
             (bVar7 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_8),
             CONCAT31(extraout_var_01,bVar7) != 0)) {
            puVar12 = &pSVar6->field_0171;
            if ((DArrayTy *)pSVar6->field_0171 != (DArrayTy *)0x0) {
              DArrayDestroy((DArrayTy *)pSVar6->field_0171);
            }
            if ((DArrayTy *)pSVar6->field_0175 != (DArrayTy *)0x0) {
              DArrayDestroy((DArrayTy *)pSVar6->field_0175);
            }
            if ((DArrayTy *)pSVar6->field_0179 != (DArrayTy *)0x0) {
              DArrayDestroy((DArrayTy *)pSVar6->field_0179);
            }
            if ((DArrayTy *)pSVar6->field_017D != (DArrayTy *)0x0) {
              DArrayDestroy((DArrayTy *)pSVar6->field_017D);
            }
            if ((DArrayTy *)pSVar6->field_0181 != (DArrayTy *)0x0) {
              DArrayDestroy((DArrayTy *)pSVar6->field_0181);
            }
            *puVar12 = 0;
            pSVar6->field_0175 = 0;
            pSVar6->field_0179 = 0;
            pSVar6->field_017D = 0;
            pSVar6->field_0181 = 0;
            (*(code *)pSVar6->field_0000->field_0040)(puVar12);
            local_c = (DArrayTy *)pSVar6->field_015D;
            bVar7 = false;
            dVar1 = *(dword *)(*puVar12 + 0xc);
            if (dVar1 == local_c->count) {
              iVar8 = dVar1 * 0x30;
              bVar30 = true;
              pcVar13 = *(char **)(*puVar12 + 0x1c);
              pcVar22 = local_c->data;
              do {
                if (iVar8 == 0) break;
                iVar8 = iVar8 + -1;
                bVar30 = *pcVar13 == *pcVar22;
                pcVar13 = pcVar13 + 1;
                pcVar22 = pcVar22 + 1;
              } while (bVar30);
              if (!bVar30) goto LAB_0041b237;
            }
            else {
LAB_0041b237:
              bVar7 = true;
            }
            if (!bVar7) {
              iVar8 = *(int *)(pSVar6->field_0175 + 0xc);
              if (iVar8 == *(int *)(pSVar6->field_0161 + 0xc)) {
                iVar8 = iVar8 * 0x30;
                bVar30 = true;
                pcVar13 = *(char **)(pSVar6->field_0175 + 0x1c);
                pcVar22 = *(char **)(pSVar6->field_0161 + 0x1c);
                do {
                  if (iVar8 == 0) break;
                  iVar8 = iVar8 + -1;
                  bVar30 = *pcVar13 == *pcVar22;
                  pcVar13 = pcVar13 + 1;
                  pcVar22 = pcVar22 + 1;
                } while (bVar30);
                if (!bVar30) goto LAB_0041b26c;
              }
              else {
LAB_0041b26c:
                bVar7 = true;
              }
              if (!bVar7) {
                iVar8 = *(int *)(pSVar6->field_0179 + 0xc);
                if (iVar8 == *(int *)(pSVar6->field_0165 + 0xc)) {
                  iVar8 = iVar8 * 0x30;
                  bVar30 = true;
                  pcVar13 = *(char **)(pSVar6->field_0179 + 0x1c);
                  pcVar22 = *(char **)(pSVar6->field_0165 + 0x1c);
                  do {
                    if (iVar8 == 0) break;
                    iVar8 = iVar8 + -1;
                    bVar30 = *pcVar13 == *pcVar22;
                    pcVar13 = pcVar13 + 1;
                    pcVar22 = pcVar22 + 1;
                  } while (bVar30);
                  if (!bVar30) goto LAB_0041b2a1;
                }
                else {
LAB_0041b2a1:
                  bVar7 = true;
                }
                if (!bVar7) {
                  iVar8 = *(int *)(pSVar6->field_017D + 0xc);
                  if (iVar8 == *(int *)(pSVar6->field_0169 + 0xc)) {
                    iVar8 = iVar8 * 0x30;
                    bVar30 = true;
                    pcVar13 = *(char **)(pSVar6->field_017D + 0x1c);
                    pcVar22 = *(char **)(pSVar6->field_0169 + 0x1c);
                    do {
                      if (iVar8 == 0) break;
                      iVar8 = iVar8 + -1;
                      bVar30 = *pcVar13 == *pcVar22;
                      pcVar13 = pcVar13 + 1;
                      pcVar22 = pcVar22 + 1;
                    } while (bVar30);
                    if (!bVar30) goto LAB_0041b2d2;
                  }
                  else {
LAB_0041b2d2:
                    bVar7 = true;
                  }
                  if (!bVar7) {
                    iVar8 = *(int *)(pSVar6->field_0181 + 0xc);
                    if (iVar8 == *(int *)(pSVar6->field_016D + 0xc)) {
                      iVar8 = iVar8 * 0x30;
                      bVar30 = true;
                      pcVar13 = *(char **)(pSVar6->field_0181 + 0x1c);
                      pcVar22 = *(char **)(pSVar6->field_016D + 0x1c);
                      do {
                        if (iVar8 == 0) break;
                        iVar8 = iVar8 + -1;
                        bVar30 = *pcVar13 == *pcVar22;
                        pcVar13 = pcVar13 + 1;
                        pcVar22 = pcVar22 + 1;
                      } while (bVar30);
                      if (bVar30) goto LAB_0041b308;
                    }
                    bVar7 = true;
                  }
                }
              }
            }
LAB_0041b308:
            if (bVar7) {
              if (local_c != (DArrayTy *)0x0) {
                DArrayDestroy(local_c);
              }
              if ((DArrayTy *)pSVar6->field_0161 != (DArrayTy *)0x0) {
                DArrayDestroy((DArrayTy *)pSVar6->field_0161);
              }
              if ((DArrayTy *)pSVar6->field_0165 != (DArrayTy *)0x0) {
                DArrayDestroy((DArrayTy *)pSVar6->field_0165);
              }
              if ((DArrayTy *)pSVar6->field_0169 != (DArrayTy *)0x0) {
                DArrayDestroy((DArrayTy *)pSVar6->field_0169);
              }
              if ((DArrayTy *)pSVar6->field_016D != (DArrayTy *)0x0) {
                DArrayDestroy((DArrayTy *)pSVar6->field_016D);
              }
              pSVar6->field_015D = 0;
              pSVar6->field_0161 = 0;
              pSVar6->field_0165 = 0;
              pSVar6->field_0169 = 0;
              pSVar6->field_016D = 0;
              Library::DKW::TBL::FUN_006afe40(&pSVar6->field_015D,(uint *)pSVar6->field_0171);
              Library::DKW::TBL::FUN_006afe40(&pSVar6->field_0161,(uint *)pSVar6->field_0175);
              Library::DKW::TBL::FUN_006afe40(&pSVar6->field_0165,(uint *)pSVar6->field_0179);
              Library::DKW::TBL::FUN_006afe40(&pSVar6->field_0169,(uint *)pSVar6->field_017D);
              Library::DKW::TBL::FUN_006afe40(&pSVar6->field_016D,(uint *)pSVar6->field_0181);
              thunk_FUN_0043fc50(CASE_8,0);
            }
          }
          if ((g_cPanel_00801688 != (CPanelTy *)0x0) &&
             (bVar7 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_B),
             CONCAT31(extraout_var_02,bVar7) != 0)) {
            (*(code *)pSVar6->field_0000->field_004C)(pSVar6->field_0199);
            pAVar2 = pSVar6->field_0195;
            local_c = (DArrayTy *)pSVar6->field_0199;
            iVar8 = 0x13;
            bVar7 = true;
            pDVar18 = local_c;
            pAVar23 = pAVar2;
            do {
              if (iVar8 == 0) break;
              iVar8 = iVar8 + -1;
              bVar7 = (char)pDVar18->flags == *(char *)&pAVar23->field_0000;
              pDVar18 = (DArrayTy *)((int)&pDVar18->flags + 1);
              pAVar23 = (AnonPointee_STGameObjC_0195 *)((int)&pAVar23->field_0000 + 1);
            } while (bVar7);
            if (!bVar7) {
              pAVar2->field_0000 = local_c->flags;
              pAVar2->field_0004 = local_c->iteratorIndex;
              pAVar2->field_0008 = local_c->elementSize;
              pAVar2->field_000C = local_c->count;
              pAVar2->field_0010 = (short)local_c->capacity;
              pAVar2->field_0012 = *(undefined1 *)((int)&local_c->capacity + 2);
              thunk_FUN_0043fc50(CASE_B,0);
            }
          }
          if ((g_cPanel_00801688 != (CPanelTy *)0x0) &&
             (bVar7 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_E),
             CONCAT31(extraout_var_03,bVar7) != 0)) {
            (*(code *)pSVar6->field_0000->field_0058)(pSVar6->field_01B1);
            pAVar3 = pSVar6->field_01AD;
            local_8 = (AnonShape_0041AF40_EF4C5356 *)pSVar6->field_01B1;
            iVar8 = 0xb;
            bVar7 = true;
            pAVar14 = (AnonPointee_STGameObjC_01B1 *)local_8;
            pAVar24 = pAVar3;
            do {
              if (iVar8 == 0) break;
              iVar8 = iVar8 + -1;
              bVar7 = *(char *)&pAVar14->field_0000 == *(char *)&pAVar24->field_0000;
              pAVar14 = (AnonPointee_STGameObjC_01B1 *)((int)&pAVar14->field_0000 + 1);
              pAVar24 = (AnonPointee_STGameObjC_01AD *)((int)&pAVar24->field_0000 + 1);
            } while (bVar7);
            if (!bVar7) {
              pAVar3->field_0000 = ((AnonPointee_STGameObjC_01B1 *)local_8)->field_0000;
              pAVar3->field_0004 = ((AnonPointee_STGameObjC_01B1 *)local_8)->field_0004;
              pAVar3->field_0008 = ((AnonPointee_STGameObjC_01B1 *)local_8)->field_0008;
              pAVar3->field_000A = ((AnonPointee_STGameObjC_01B1 *)local_8)->field_000A;
              thunk_FUN_0043fc50(CASE_E,0);
            }
          }
          if (g_cPanel_00801688 == (CPanelTy *)0x0) {
            g_currentExceptionFrame = local_58.previous;
            return 0;
          }
          bVar7 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_10);
          if (CONCAT31(extraout_var_04,bVar7) == 0) {
            g_currentExceptionFrame = local_58.previous;
            return 0;
          }
          (*(code *)pSVar6->field_0000->field_0060)(pSVar6->field_01C1);
          iVar8 = 0x90;
          bVar7 = true;
          piVar15 = (int *)pSVar6->field_01C1;
          piVar19 = (int *)pSVar6->field_01BD;
          do {
            if (iVar8 == 0) break;
            iVar8 = iVar8 + -1;
            bVar7 = *piVar15 == *piVar19;
            piVar15 = piVar15 + 1;
            piVar19 = piVar19 + 1;
          } while (bVar7);
          if (bVar7) {
            g_currentExceptionFrame = local_58.previous;
            return 0;
          }
          piVar15 = (int *)pSVar6->field_01C1;
          piVar19 = (int *)pSVar6->field_01BD;
          for (iVar8 = 0x90; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar19 = *piVar15;
            piVar15 = piVar15 + 1;
            piVar19 = piVar19 + 1;
          }
          GVar31 = CASE_10;
          goto cf_common_exit_0041BE5F;
        }
        if (uVar9 != 0x5a) goto cf_common_exit_0041B6C6;
      }
    }
    else if (uVar9 != 0x1a4) {
cf_common_exit_0041B6C6:
      iVar8 = ReportDebugMessage(s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0x7e4,0,0,&DAT_007a4ccc,
                                 s_STGameObjC__GetMessagge_MESS_ID__007a4ee8);
      if (iVar8 == 0) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      pcVar5 = (code *)swi(3);
      uVar10 = (*pcVar5)();
      return uVar10;
    }
LAB_0041bdb3:
    if (g_cPanel_00801688 == (CPanelTy *)0x0) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    bVar7 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_5);
    if (CONCAT31(extraout_var_20,bVar7) != 0) {
      (*(code *)pSVar6->field_0000->field_0030)(pSVar6->field_0121);
      iVar8 = 0x1b;
      bVar7 = true;
      psVar17 = (short *)pSVar6->field_0121;
      psVar26 = (short *)pSVar6->field_011D;
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        bVar7 = *psVar17 == *psVar26;
        psVar17 = psVar17 + 1;
        psVar26 = psVar26 + 1;
      } while (bVar7);
      if (!bVar7) {
        psVar17 = (short *)pSVar6->field_0121;
        psVar26 = (short *)pSVar6->field_011D;
        for (iVar8 = 0xd; iVar8 != 0; iVar8 = iVar8 + -1) {
          *(undefined4 *)psVar26 = *(undefined4 *)psVar17;
          psVar17 = psVar17 + 2;
          psVar26 = psVar26 + 2;
        }
        *psVar26 = *psVar17;
        thunk_FUN_0043fc50(CASE_5,0);
      }
    }
    if (g_cPanel_00801688 == (CPanelTy *)0x0) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    bVar7 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_4);
    if (CONCAT31(extraout_var_21,bVar7) == 0) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    (*(code *)pSVar6->field_0000->field_0034)(pSVar6->field_0129);
    iVar8 = 0x17;
    bVar7 = true;
    piVar15 = (int *)pSVar6->field_0129;
    piVar19 = (int *)pSVar6->field_0125;
    do {
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      bVar7 = *piVar15 == *piVar19;
      piVar15 = piVar15 + 1;
      piVar19 = piVar19 + 1;
    } while (bVar7);
    if (bVar7) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    piVar15 = (int *)pSVar6->field_0129;
    piVar19 = (int *)pSVar6->field_0125;
    for (iVar8 = 0x17; iVar8 != 0; iVar8 = iVar8 + -1) {
      *piVar19 = *piVar15;
      piVar15 = piVar15 + 1;
      piVar19 = piVar19 + 1;
    }
    GVar31 = CASE_4;
    goto cf_common_exit_0041BE5F;
  }
  if (uVar9 == 0x1b8) goto LAB_0041bdb3;
  if (uVar9 != 1000) {
    if (uVar9 != 0x3e9) goto cf_common_exit_0041B6C6;
    if (g_cPanel_00801688 == (CPanelTy *)0x0) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    bVar7 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_4);
    if (CONCAT31(extraout_var_09,bVar7) != 0) {
      (*(code *)pSVar6->field_0000->field_0034)(pSVar6->field_0129);
      iVar8 = 0x17;
      bVar7 = true;
      piVar15 = (int *)pSVar6->field_0129;
      piVar19 = (int *)pSVar6->field_0125;
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        bVar7 = *piVar15 == *piVar19;
        piVar15 = piVar15 + 1;
        piVar19 = piVar19 + 1;
      } while (bVar7);
      if (!bVar7) {
        piVar15 = (int *)pSVar6->field_0129;
        piVar19 = (int *)pSVar6->field_0125;
        for (iVar8 = 0x17; iVar8 != 0; iVar8 = iVar8 + -1) {
          *piVar19 = *piVar15;
          piVar15 = piVar15 + 1;
          piVar19 = piVar19 + 1;
        }
        thunk_FUN_0043fc50(CASE_4,0);
      }
    }
    if (g_cPanel_00801688 == (CPanelTy *)0x0) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    bVar7 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_5);
    if (CONCAT31(extraout_var_10,bVar7) == 0) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    (*(code *)pSVar6->field_0000->field_0030)(pSVar6->field_0121);
    iVar8 = 0x1b;
    bVar7 = true;
    psVar17 = (short *)pSVar6->field_0121;
    psVar26 = (short *)pSVar6->field_011D;
    do {
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      bVar7 = *psVar17 == *psVar26;
      psVar17 = psVar17 + 1;
      psVar26 = psVar26 + 1;
    } while (bVar7);
    if (bVar7) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    psVar17 = (short *)pSVar6->field_0121;
    psVar26 = (short *)pSVar6->field_011D;
    for (iVar8 = 0xd; iVar8 != 0; iVar8 = iVar8 + -1) {
      *(undefined4 *)psVar26 = *(undefined4 *)psVar17;
      psVar17 = psVar17 + 2;
      psVar26 = psVar26 + 2;
    }
    *psVar26 = *psVar17;
    GVar31 = CASE_5;
    goto cf_common_exit_0041BE5F;
  }
  if (g_cPanel_00801688 == (CPanelTy *)0x0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  bVar7 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_4);
  if (CONCAT31(extraout_var_11,bVar7) != 0) {
    (*(code *)pSVar6->field_0000->field_0034)(pSVar6->field_0129);
    iVar8 = 0x17;
    bVar7 = true;
    piVar15 = (int *)pSVar6->field_0129;
    piVar19 = (int *)pSVar6->field_0125;
    do {
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      bVar7 = *piVar15 == *piVar19;
      piVar15 = piVar15 + 1;
      piVar19 = piVar19 + 1;
    } while (bVar7);
    if (!bVar7) {
      piVar15 = (int *)pSVar6->field_0129;
      piVar19 = (int *)pSVar6->field_0125;
      for (iVar8 = 0x17; iVar8 != 0; iVar8 = iVar8 + -1) {
        *piVar19 = *piVar15;
        piVar15 = piVar15 + 1;
        piVar19 = piVar19 + 1;
      }
      thunk_FUN_0043fc50(CASE_4,0);
    }
  }
  if (g_cPanel_00801688 == (CPanelTy *)0x0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  bVar7 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_5);
  if (CONCAT31(extraout_var_12,bVar7) != 0) {
    (*(code *)pSVar6->field_0000->field_0030)(pSVar6->field_0121);
    iVar8 = 0x1b;
    bVar7 = true;
    psVar17 = (short *)pSVar6->field_0121;
    psVar26 = (short *)pSVar6->field_011D;
    do {
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      bVar7 = *psVar17 == *psVar26;
      psVar17 = psVar17 + 1;
      psVar26 = psVar26 + 1;
    } while (bVar7);
    if (!bVar7) {
      psVar17 = (short *)pSVar6->field_0121;
      psVar26 = (short *)pSVar6->field_011D;
      for (iVar8 = 0xd; iVar8 != 0; iVar8 = iVar8 + -1) {
        *(undefined4 *)psVar26 = *(undefined4 *)psVar17;
        psVar17 = psVar17 + 2;
        psVar26 = psVar26 + 2;
      }
      *psVar26 = *psVar17;
      thunk_FUN_0043fc50(CASE_5,0);
    }
  }
  if (g_cPanel_00801688 == (CPanelTy *)0x0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  bVar7 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_6);
  if (CONCAT31(extraout_var_13,bVar7) != 0) {
    puVar12 = &pSVar6->field_0135;
    if ((DArrayTy *)pSVar6->field_0135 != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)pSVar6->field_0135);
    }
    if ((DArrayTy *)pSVar6->field_0139 != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)pSVar6->field_0139);
    }
    *puVar12 = 0;
    pSVar6->field_0139 = 0;
    (**(code **)&pSVar6->field_0000->field_0x38)(puVar12);
    bVar7 = false;
    iVar8 = *(int *)(*puVar12 + 0xc);
    if (iVar8 == *(int *)(pSVar6->field_012D + 0xc)) {
      iVar8 = iVar8 * 0x30;
      bVar30 = true;
      pcVar13 = *(char **)(*puVar12 + 0x1c);
      pcVar22 = *(char **)(pSVar6->field_012D + 0x1c);
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        bVar30 = *pcVar13 == *pcVar22;
        pcVar13 = pcVar13 + 1;
        pcVar22 = pcVar22 + 1;
      } while (bVar30);
      if (!bVar30) goto LAB_0041b8f6;
    }
    else {
LAB_0041b8f6:
      bVar7 = true;
    }
    if (!bVar7) {
      iVar8 = *(int *)(pSVar6->field_0139 + 0xc);
      if (iVar8 == *(int *)(pSVar6->field_0131 + 0xc)) {
        iVar8 = iVar8 * 0x30;
        bVar30 = true;
        pcVar13 = *(char **)(pSVar6->field_0139 + 0x1c);
        pcVar22 = *(char **)(pSVar6->field_0131 + 0x1c);
        do {
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          bVar30 = *pcVar13 == *pcVar22;
          pcVar13 = pcVar13 + 1;
          pcVar22 = pcVar22 + 1;
        } while (bVar30);
        if (bVar30) goto LAB_0041b92c;
      }
      bVar7 = true;
    }
LAB_0041b92c:
    if (bVar7) {
      if ((DArrayTy *)pSVar6->field_012D != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)pSVar6->field_012D);
      }
      if ((DArrayTy *)pSVar6->field_0131 != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)pSVar6->field_0131);
      }
      pSVar6->field_012D = 0;
      pSVar6->field_0131 = 0;
      Library::DKW::TBL::FUN_006afe40(&pSVar6->field_012D,(uint *)pSVar6->field_0135);
      Library::DKW::TBL::FUN_006afe40(&pSVar6->field_0131,(uint *)pSVar6->field_0139);
      GVar31 = CASE_6;
      goto cf_common_exit_0041BE5F;
    }
  }
  if (g_cPanel_00801688 == (CPanelTy *)0x0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  bVar7 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_7);
  if (CONCAT31(extraout_var_14,bVar7) != 0) {
    puVar12 = &pSVar6->field_014D;
    if ((DArrayTy *)pSVar6->field_014D != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)pSVar6->field_014D);
    }
    if ((DArrayTy *)pSVar6->field_0151 != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)pSVar6->field_0151);
    }
    if ((DArrayTy *)pSVar6->field_0155 != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)pSVar6->field_0155);
    }
    if ((DArrayTy *)pSVar6->field_0159 != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)pSVar6->field_0159);
    }
    *puVar12 = 0;
    pSVar6->field_0151 = 0;
    pSVar6->field_0155 = 0;
    pSVar6->field_0159 = 0;
    (**(code **)&pSVar6->field_0000->field_0x3c)(puVar12);
    local_c = (DArrayTy *)pSVar6->field_013D;
    bVar7 = false;
    dVar1 = *(dword *)(*puVar12 + 0xc);
    if (dVar1 == local_c->count) {
      iVar8 = dVar1 * 0x30;
      bVar30 = true;
      pcVar13 = *(char **)(*puVar12 + 0x1c);
      pcVar22 = local_c->data;
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        bVar30 = *pcVar13 == *pcVar22;
        pcVar13 = pcVar13 + 1;
        pcVar22 = pcVar22 + 1;
      } while (bVar30);
      if (!bVar30) goto LAB_0041ba2a;
    }
    else {
LAB_0041ba2a:
      bVar7 = true;
    }
    if (!bVar7) {
      iVar8 = *(int *)(pSVar6->field_0151 + 0xc);
      if (iVar8 == *(int *)(pSVar6->field_0141 + 0xc)) {
        iVar8 = iVar8 * 0x30;
        bVar30 = true;
        pcVar13 = *(char **)(pSVar6->field_0151 + 0x1c);
        pcVar22 = *(char **)(pSVar6->field_0141 + 0x1c);
        do {
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          bVar30 = *pcVar13 == *pcVar22;
          pcVar13 = pcVar13 + 1;
          pcVar22 = pcVar22 + 1;
        } while (bVar30);
        if (!bVar30) goto LAB_0041ba5f;
      }
      else {
LAB_0041ba5f:
        bVar7 = true;
      }
      if (!bVar7) {
        iVar8 = *(int *)(pSVar6->field_0155 + 0xc);
        if (iVar8 == *(int *)(pSVar6->field_0145 + 0xc)) {
          iVar8 = iVar8 * 0x30;
          bVar30 = true;
          pcVar13 = *(char **)(pSVar6->field_0155 + 0x1c);
          pcVar22 = *(char **)(pSVar6->field_0145 + 0x1c);
          do {
            if (iVar8 == 0) break;
            iVar8 = iVar8 + -1;
            bVar30 = *pcVar13 == *pcVar22;
            pcVar13 = pcVar13 + 1;
            pcVar22 = pcVar22 + 1;
          } while (bVar30);
          if (!bVar30) goto LAB_0041ba90;
        }
        else {
LAB_0041ba90:
          bVar7 = true;
        }
        if (!bVar7) {
          iVar8 = *(int *)(pSVar6->field_0159 + 0xc);
          if (iVar8 == *(int *)(pSVar6->field_0149 + 0xc)) {
            iVar8 = iVar8 * 0x30;
            bVar30 = true;
            pcVar13 = *(char **)(pSVar6->field_0159 + 0x1c);
            pcVar22 = *(char **)(pSVar6->field_0149 + 0x1c);
            do {
              if (iVar8 == 0) break;
              iVar8 = iVar8 + -1;
              bVar30 = *pcVar13 == *pcVar22;
              pcVar13 = pcVar13 + 1;
              pcVar22 = pcVar22 + 1;
            } while (bVar30);
            if (bVar30) goto LAB_0041bac6;
          }
          bVar7 = true;
        }
      }
    }
LAB_0041bac6:
    if (bVar7) {
      if (local_c != (DArrayTy *)0x0) {
        DArrayDestroy(local_c);
      }
      if ((DArrayTy *)pSVar6->field_0141 != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)pSVar6->field_0141);
      }
      if ((DArrayTy *)pSVar6->field_0145 != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)pSVar6->field_0145);
      }
      if ((DArrayTy *)pSVar6->field_0149 != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)pSVar6->field_0149);
      }
      pSVar6->field_013D = 0;
      pSVar6->field_0141 = 0;
      pSVar6->field_0145 = 0;
      pSVar6->field_0149 = 0;
      Library::DKW::TBL::FUN_006afe40(&pSVar6->field_013D,(uint *)pSVar6->field_014D);
      Library::DKW::TBL::FUN_006afe40(&pSVar6->field_0141,(uint *)pSVar6->field_0151);
      Library::DKW::TBL::FUN_006afe40(&pSVar6->field_0145,(uint *)pSVar6->field_0155);
      Library::DKW::TBL::FUN_006afe40(&pSVar6->field_0149,(uint *)pSVar6->field_0159);
      GVar31 = CASE_7;
      goto cf_common_exit_0041BE5F;
    }
  }
  if (g_cPanel_00801688 == (CPanelTy *)0x0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  bVar7 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_9);
  if (CONCAT31(extraout_var_15,bVar7) != 0) {
    (**(code **)&pSVar6->field_0000->field_0x44)(pSVar6->field_0189);
    iVar8 = 0x129;
    bVar7 = true;
    pcVar13 = (char *)pSVar6->field_0189;
    pcVar22 = (char *)pSVar6->field_0185;
    do {
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      bVar7 = *pcVar13 == *pcVar22;
      pcVar13 = pcVar13 + 1;
      pcVar22 = pcVar22 + 1;
    } while (bVar7);
    if (!bVar7) {
      pcVar13 = (char *)pSVar6->field_0189;
      pcVar22 = (char *)pSVar6->field_0185;
      for (iVar8 = 0x4a; iVar8 != 0; iVar8 = iVar8 + -1) {
        *(undefined4 *)pcVar22 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar22 = pcVar22 + 4;
      }
      *pcVar22 = *pcVar13;
      thunk_FUN_0043fc50(CASE_9,0);
    }
  }
  if (g_cPanel_00801688 == (CPanelTy *)0x0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  bVar7 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_A);
  if (CONCAT31(extraout_var_16,bVar7) != 0) {
    (**(code **)&pSVar6->field_0000->field_0x48)(pSVar6->field_0191);
    pdVar4 = (dword *)pSVar6->field_018D;
    local_c = (DArrayTy *)pSVar6->field_0191;
    iVar8 = 4;
    bVar7 = true;
    pDVar18 = local_c;
    pdVar27 = pdVar4;
    do {
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      bVar7 = pDVar18->flags == *pdVar27;
      pDVar18 = (DArrayTy *)&pDVar18->iteratorIndex;
      pdVar27 = pdVar27 + 1;
    } while (bVar7);
    if (!bVar7) {
      *pdVar4 = local_c->flags;
      pdVar4[1] = local_c->iteratorIndex;
      pdVar4[2] = local_c->elementSize;
      pdVar4[3] = local_c->count;
      thunk_FUN_0043fc50(CASE_A,0);
    }
  }
  if (g_cPanel_00801688 == (CPanelTy *)0x0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  bVar7 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_C);
  if (CONCAT31(extraout_var_17,bVar7) != 0) {
    puVar12 = &pSVar6->field_01A1;
    local_14 = puVar12;
    if ((DArrayTy *)pSVar6->field_01A1 != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)pSVar6->field_01A1);
      *puVar12 = 0;
    }
    (**(code **)&pSVar6->field_0000->field_0x50)(puVar12);
    pDVar18 = (DArrayTy *)pSVar6->field_019D;
    local_c = (DArrayTy *)&pSVar6->field_019D;
    local_8 = (AnonShape_0041AF40_EF4C5356 *)0x0;
    dVar1 = *(dword *)(*puVar12 + 0xc);
    if (dVar1 == pDVar18->count) {
      iVar8 = dVar1 * 0x30;
      bVar7 = true;
      pcVar13 = *(char **)(*puVar12 + 0x1c);
      pcVar22 = pDVar18->data;
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        bVar7 = *pcVar13 == *pcVar22;
        pcVar13 = pcVar13 + 1;
        pcVar22 = pcVar22 + 1;
      } while (bVar7);
      if (!bVar7) goto LAB_0041bcad;
    }
    else {
LAB_0041bcad:
      local_8 = (AnonShape_0041AF40_EF4C5356 *)0x1;
    }
    if (local_8 == (AnonShape_0041AF40_EF4C5356 *)0x1) {
      if (pDVar18 != (DArrayTy *)0x0) {
        DArrayDestroy(pDVar18);
        local_c->flags = 0;
      }
      Library::DKW::TBL::FUN_006afe40((int *)local_c,(uint *)*local_14);
      GVar31 = CASE_C;
      goto cf_common_exit_0041BE5F;
    }
  }
  if (g_cPanel_00801688 == (CPanelTy *)0x0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  bVar7 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_C|CASE_1);
  if (CONCAT31(extraout_var_18,bVar7) != 0) {
    (**(code **)&pSVar6->field_0000->field_0x54)(pSVar6->field_01A9);
    piVar15 = (int *)pSVar6->field_01A5;
    local_14 = (int *)pSVar6->field_01A9;
    iVar8 = 3;
    bVar7 = true;
    piVar19 = local_14;
    piVar28 = piVar15;
    do {
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      bVar7 = *piVar19 == *piVar28;
      piVar19 = piVar19 + 1;
      piVar28 = piVar28 + 1;
    } while (bVar7);
    if (!bVar7) {
      *piVar15 = *local_14;
      piVar15[1] = local_14[1];
      piVar15[2] = local_14[2];
      thunk_FUN_0043fc50(CASE_D,0);
    }
  }
  if (g_cPanel_00801688 == (CPanelTy *)0x0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  bVar7 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_F);
  if (CONCAT31(extraout_var_19,bVar7) == 0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  (**(code **)&pSVar6->field_0000->field_0x5c)(pSVar6->field_01B9);
  pcVar13 = (char *)pSVar6->field_01B5;
  pcVar22 = (char *)pSVar6->field_01B9;
  iVar8 = 0xb;
  bVar7 = true;
  pcVar20 = pcVar22;
  pcVar29 = pcVar13;
  do {
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    bVar7 = *pcVar20 == *pcVar29;
    pcVar20 = pcVar20 + 1;
    pcVar29 = pcVar29 + 1;
  } while (bVar7);
  if (bVar7) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  *(undefined4 *)pcVar13 = *(undefined4 *)pcVar22;
  *(undefined4 *)(pcVar13 + 4) = *(undefined4 *)(pcVar22 + 4);
  *(undefined2 *)(pcVar13 + 8) = *(undefined2 *)(pcVar22 + 8);
  pcVar13[10] = pcVar22[10];
  GVar31 = CASE_F;
cf_common_exit_0041BE5F:
  thunk_FUN_0043fc50(GVar31,0);
  g_currentExceptionFrame = local_58.previous;
  return 0;
}

