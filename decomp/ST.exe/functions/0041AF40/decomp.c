
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tc_gobj.cpp
   STGameObjC::GetMessage */

undefined4 __thiscall STGameObjC::GetMessage(STGameObjC *this,AnonShape_0041AF40_F59F8577 *param_1)

{
  dword dVar1;
  dword *pdVar2;
  byte *groupContent;
  code *pcVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  STGameObjC *pSVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
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
  undefined4 uVar11;
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
  int iVar12;
  undefined4 unaff_ESI;
  undefined4 *puVar13;
  char *pcVar14;
  AnonShape_0041AF40_EF4C5356 *pAVar15;
  int *piVar16;
  short *psVar17;
  short *psVar18;
  DArrayTy *pDVar19;
  int *piVar20;
  char *pcVar21;
  void *unaff_EDI;
  undefined4 *puVar22;
  char *pcVar23;
  short *psVar24;
  short *psVar25;
  dword *pdVar26;
  int *piVar27;
  char *pcVar28;
  bool bVar29;
  Global_sub_0043FC50_param_1Enum GVar30;
  InternalExceptionFrame local_58;
  int *local_14;
  STGameObjC *local_10;
  DArrayTy *local_c;
  AnonShape_0041AF40_EF4C5356 *local_8;
  
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_10 = this;
  iVar9 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar7 = local_10;
  if (iVar9 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar12 = ReportDebugMessage(s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0x7eb,0,iVar9,&DAT_007a4ccc,
                                s_STGameObjC__GetMessage_007a4ecc);
    if (iVar12 != 0) {
      pcVar3 = (code *)swi(3);
      uVar11 = (*pcVar3)();
      return uVar11;
    }
    RaiseInternalException(iVar9,0,s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0x7ec);
    return 0xffff;
  }
  FUN_006e5fd0();
  if (param_1->field_0010 != 0) {
    if (param_1->field_0010 != 2) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    puVar13 = param_1->field_0014;
    if (puVar13 == (undefined4 *)0x0) {
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0x678);
    }
    pSVar7->field_0020 = *puVar13;
    pSVar7->field_0024 = puVar13[1];
    pSVar7->field_002C = puVar13[4];
    pSVar7->field_0028 = puVar13[2];
    iVar9 = pSVar7->field_0018 * DAT_00808754;
    pSVar7->field_001C = iVar9;
    uVar10 = iVar9 * 0x41c64e6d + 0x3039;
    pSVar7->field_001C = uVar10;
    pSVar7->field_00F8 = (short)((ulonglong)(uVar10 >> 0x10) % 0x1f) + 0x1e;
    (**(code **)(pSVar7->field_0000 + 0xcc))();
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  if (-1 < *(int *)&pSVar7->field_0x8f) {
    *(int *)&pSVar7->field_0x8f = *(int *)&pSVar7->field_0x8f + 1;
  }
  (**(code **)(pSVar7->field_0000 + 0xd0))();
  if (pSVar7->field_01CD != 1) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  uVar10 = pSVar7->field_0020;
  if (uVar10 < 0x1af) {
    if (uVar10 == 0x1ae) {
      if (g_cPanel_00801688 == (CPanelTy *)0x0) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      bVar8 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_1);
      if (CONCAT31(extraout_var_05,bVar8) != 0) {
        (**(code **)(pSVar7->field_0000 + 0x30))(pSVar7->field_0121);
        iVar9 = 0x1b;
        bVar8 = true;
        psVar18 = (short *)pSVar7->field_0121;
        psVar25 = (short *)pSVar7->field_011D;
        do {
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          bVar8 = *psVar18 == *psVar25;
          psVar18 = psVar18 + 1;
          psVar25 = psVar25 + 1;
        } while (bVar8);
        if (!bVar8) {
          psVar18 = (short *)pSVar7->field_0121;
          psVar25 = (short *)pSVar7->field_011D;
          for (iVar9 = 0xd; iVar9 != 0; iVar9 = iVar9 + -1) {
            *(undefined4 *)psVar25 = *(undefined4 *)psVar18;
            psVar18 = psVar18 + 2;
            psVar25 = psVar25 + 2;
          }
          *psVar25 = *psVar18;
          thunk_FUN_0043fc50(CASE_1,0);
        }
      }
      if (g_cPanel_00801688 == (CPanelTy *)0x0) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      bVar8 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_2);
      if (CONCAT31(extraout_var_06,bVar8) != 0) {
        (**(code **)(pSVar7->field_0000 + 0x34))(pSVar7->field_0129);
        iVar9 = 0x17;
        bVar8 = true;
        piVar16 = (int *)pSVar7->field_0129;
        piVar20 = (int *)pSVar7->field_0125;
        do {
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          bVar8 = *piVar16 == *piVar20;
          piVar16 = piVar16 + 1;
          piVar20 = piVar20 + 1;
        } while (bVar8);
        if (!bVar8) {
          piVar16 = (int *)pSVar7->field_0129;
          piVar20 = (int *)pSVar7->field_0125;
          for (iVar9 = 0x17; iVar9 != 0; iVar9 = iVar9 + -1) {
            *piVar20 = *piVar16;
            piVar16 = piVar16 + 1;
            piVar20 = piVar20 + 1;
          }
          thunk_FUN_0043fc50(CASE_2,0);
        }
      }
      if (g_cPanel_00801688 == (CPanelTy *)0x0) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      bVar8 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_E);
      if (CONCAT31(extraout_var_07,bVar8) != 0) {
        (**(code **)(pSVar7->field_0000 + 0x58))(pSVar7->field_01B1);
        pcVar14 = (char *)pSVar7->field_01AD;
        local_8 = (AnonShape_0041AF40_EF4C5356 *)pSVar7->field_01B1;
        iVar9 = 0xb;
        bVar8 = true;
        pAVar15 = local_8;
        pcVar23 = pcVar14;
        do {
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          bVar8 = *(char *)pAVar15 == *pcVar23;
          pAVar15 = (AnonShape_0041AF40_EF4C5356 *)&pAVar15->field_0x1;
          pcVar23 = pcVar23 + 1;
        } while (bVar8);
        if (!bVar8) {
          uVar4 = local_8->field_0x1;
          uVar5 = local_8->field_0x2;
          uVar6 = local_8->field_0x3;
          pcVar14[0] = local_8->field_0x0;
          pcVar14[1] = uVar4;
          pcVar14[2] = uVar5;
          pcVar14[3] = uVar6;
          *(undefined4 *)(pcVar14 + 4) = local_8->field_0004;
          *(undefined2 *)(pcVar14 + 8) = local_8->field_0008;
          pcVar14[10] = local_8->field_0xa;
          thunk_FUN_0043fc50(CASE_E,0);
        }
      }
      if (g_cPanel_00801688 == (CPanelTy *)0x0) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      bVar8 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_12);
      if (CONCAT31(extraout_var_08,bVar8) == 0) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      (**(code **)(pSVar7->field_0000 + 100))(pSVar7->field_01C9);
      psVar18 = (short *)pSVar7->field_01C5;
      psVar25 = (short *)pSVar7->field_01C9;
      iVar9 = 3;
      bVar8 = true;
      psVar17 = psVar25;
      psVar24 = psVar18;
      do {
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        bVar8 = *psVar17 == *psVar24;
        psVar17 = psVar17 + 1;
        psVar24 = psVar24 + 1;
      } while (bVar8);
      if (bVar8) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      *(undefined4 *)psVar18 = *(undefined4 *)psVar25;
      psVar18[2] = psVar25[2];
      GVar30 = CASE_12;
      goto cf_common_exit_0041BE5F;
    }
    if (uVar10 < 0x173) {
      if (uVar10 != 0x172) {
        if (uVar10 == 0x14) {
          if ((g_cPanel_00801688 != (CPanelTy *)0x0) &&
             (bVar8 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_1),
             CONCAT31(extraout_var,bVar8) != 0)) {
            (**(code **)(pSVar7->field_0000 + 0x30))(pSVar7->field_0121);
            iVar9 = 0x1b;
            bVar8 = true;
            psVar18 = (short *)pSVar7->field_0121;
            psVar25 = (short *)pSVar7->field_011D;
            do {
              if (iVar9 == 0) break;
              iVar9 = iVar9 + -1;
              bVar8 = *psVar18 == *psVar25;
              psVar18 = psVar18 + 1;
              psVar25 = psVar25 + 1;
            } while (bVar8);
            if (!bVar8) {
              uVar10 = STAllPlayersC::GetNInTmp(0,0);
              if ((short)uVar10 == 1) {
                puVar13 = (undefined4 *)pSVar7->field_0121;
              }
              else {
                puVar13 = (undefined4 *)pSVar7->field_0121;
                if (*(char *)((int)puVar13 + 0x1b) == *(char *)(pSVar7->field_011D + 0x1b)) {
                  iVar9 = 5;
                  bVar8 = true;
                  pcVar14 = (char *)((int)puVar13 + 0x2a);
                  pcVar23 = (char *)(pSVar7->field_011D + 0x2a);
                  do {
                    if (iVar9 == 0) break;
                    iVar9 = iVar9 + -1;
                    bVar8 = *pcVar14 == *pcVar23;
                    pcVar14 = pcVar14 + 1;
                    pcVar23 = pcVar23 + 1;
                  } while (bVar8);
                  if (bVar8) goto LAB_0041b128;
                }
              }
              puVar22 = (undefined4 *)pSVar7->field_011D;
              for (iVar9 = 0xd; iVar9 != 0; iVar9 = iVar9 + -1) {
                *puVar22 = *puVar13;
                puVar13 = puVar13 + 1;
                puVar22 = puVar22 + 1;
              }
              *(undefined2 *)puVar22 = *(undefined2 *)puVar13;
              thunk_FUN_0043fc50(CASE_1,0);
            }
          }
LAB_0041b128:
          if ((g_cPanel_00801688 != (CPanelTy *)0x0) &&
             (bVar8 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_2),
             CONCAT31(extraout_var_00,bVar8) != 0)) {
            (**(code **)(pSVar7->field_0000 + 0x34))(pSVar7->field_0129);
            iVar9 = 0x17;
            bVar8 = true;
            piVar16 = (int *)pSVar7->field_0129;
            piVar20 = (int *)pSVar7->field_0125;
            do {
              if (iVar9 == 0) break;
              iVar9 = iVar9 + -1;
              bVar8 = *piVar16 == *piVar20;
              piVar16 = piVar16 + 1;
              piVar20 = piVar20 + 1;
            } while (bVar8);
            if (!bVar8) {
              piVar16 = (int *)pSVar7->field_0129;
              piVar20 = (int *)pSVar7->field_0125;
              for (iVar9 = 0x17; iVar9 != 0; iVar9 = iVar9 + -1) {
                *piVar20 = *piVar16;
                piVar16 = piVar16 + 1;
                piVar20 = piVar20 + 1;
              }
              thunk_FUN_0043fc50(CASE_2,0);
            }
          }
          if ((g_cPanel_00801688 != (CPanelTy *)0x0) &&
             (bVar8 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_8),
             CONCAT31(extraout_var_01,bVar8) != 0)) {
            puVar13 = &pSVar7->field_0171;
            if ((byte *)pSVar7->field_0171 != (byte *)0x0) {
              FUN_006ae110((byte *)pSVar7->field_0171);
            }
            if ((byte *)pSVar7->field_0175 != (byte *)0x0) {
              FUN_006ae110((byte *)pSVar7->field_0175);
            }
            if ((byte *)pSVar7->field_0179 != (byte *)0x0) {
              FUN_006ae110((byte *)pSVar7->field_0179);
            }
            if ((byte *)pSVar7->field_017D != (byte *)0x0) {
              FUN_006ae110((byte *)pSVar7->field_017D);
            }
            if ((byte *)pSVar7->field_0181 != (byte *)0x0) {
              FUN_006ae110((byte *)pSVar7->field_0181);
            }
            *puVar13 = 0;
            pSVar7->field_0175 = 0;
            pSVar7->field_0179 = 0;
            pSVar7->field_017D = 0;
            pSVar7->field_0181 = 0;
            (**(code **)(pSVar7->field_0000 + 0x40))(puVar13);
            local_c = (DArrayTy *)pSVar7->field_015D;
            bVar8 = false;
            dVar1 = *(dword *)(*puVar13 + 0xc);
            if (dVar1 == local_c->count) {
              iVar9 = dVar1 * 0x30;
              bVar29 = true;
              pcVar14 = *(char **)(*puVar13 + 0x1c);
              pcVar23 = local_c->data;
              do {
                if (iVar9 == 0) break;
                iVar9 = iVar9 + -1;
                bVar29 = *pcVar14 == *pcVar23;
                pcVar14 = pcVar14 + 1;
                pcVar23 = pcVar23 + 1;
              } while (bVar29);
              if (!bVar29) goto LAB_0041b237;
            }
            else {
LAB_0041b237:
              bVar8 = true;
            }
            if (!bVar8) {
              iVar9 = *(int *)(pSVar7->field_0175 + 0xc);
              if (iVar9 == *(int *)(pSVar7->field_0161 + 0xc)) {
                iVar9 = iVar9 * 0x30;
                bVar29 = true;
                pcVar14 = *(char **)(pSVar7->field_0175 + 0x1c);
                pcVar23 = *(char **)(pSVar7->field_0161 + 0x1c);
                do {
                  if (iVar9 == 0) break;
                  iVar9 = iVar9 + -1;
                  bVar29 = *pcVar14 == *pcVar23;
                  pcVar14 = pcVar14 + 1;
                  pcVar23 = pcVar23 + 1;
                } while (bVar29);
                if (!bVar29) goto LAB_0041b26c;
              }
              else {
LAB_0041b26c:
                bVar8 = true;
              }
              if (!bVar8) {
                iVar9 = *(int *)(pSVar7->field_0179 + 0xc);
                if (iVar9 == *(int *)(pSVar7->field_0165 + 0xc)) {
                  iVar9 = iVar9 * 0x30;
                  bVar29 = true;
                  pcVar14 = *(char **)(pSVar7->field_0179 + 0x1c);
                  pcVar23 = *(char **)(pSVar7->field_0165 + 0x1c);
                  do {
                    if (iVar9 == 0) break;
                    iVar9 = iVar9 + -1;
                    bVar29 = *pcVar14 == *pcVar23;
                    pcVar14 = pcVar14 + 1;
                    pcVar23 = pcVar23 + 1;
                  } while (bVar29);
                  if (!bVar29) goto LAB_0041b2a1;
                }
                else {
LAB_0041b2a1:
                  bVar8 = true;
                }
                if (!bVar8) {
                  iVar9 = *(int *)(pSVar7->field_017D + 0xc);
                  if (iVar9 == *(int *)(pSVar7->field_0169 + 0xc)) {
                    iVar9 = iVar9 * 0x30;
                    bVar29 = true;
                    pcVar14 = *(char **)(pSVar7->field_017D + 0x1c);
                    pcVar23 = *(char **)(pSVar7->field_0169 + 0x1c);
                    do {
                      if (iVar9 == 0) break;
                      iVar9 = iVar9 + -1;
                      bVar29 = *pcVar14 == *pcVar23;
                      pcVar14 = pcVar14 + 1;
                      pcVar23 = pcVar23 + 1;
                    } while (bVar29);
                    if (!bVar29) goto LAB_0041b2d2;
                  }
                  else {
LAB_0041b2d2:
                    bVar8 = true;
                  }
                  if (!bVar8) {
                    iVar9 = *(int *)(pSVar7->field_0181 + 0xc);
                    if (iVar9 == *(int *)(pSVar7->field_016D + 0xc)) {
                      iVar9 = iVar9 * 0x30;
                      bVar29 = true;
                      pcVar14 = *(char **)(pSVar7->field_0181 + 0x1c);
                      pcVar23 = *(char **)(pSVar7->field_016D + 0x1c);
                      do {
                        if (iVar9 == 0) break;
                        iVar9 = iVar9 + -1;
                        bVar29 = *pcVar14 == *pcVar23;
                        pcVar14 = pcVar14 + 1;
                        pcVar23 = pcVar23 + 1;
                      } while (bVar29);
                      if (bVar29) goto LAB_0041b308;
                    }
                    bVar8 = true;
                  }
                }
              }
            }
LAB_0041b308:
            if (bVar8) {
              if (local_c != (DArrayTy *)0x0) {
                FUN_006ae110((byte *)local_c);
              }
              if ((byte *)pSVar7->field_0161 != (byte *)0x0) {
                FUN_006ae110((byte *)pSVar7->field_0161);
              }
              if ((byte *)pSVar7->field_0165 != (byte *)0x0) {
                FUN_006ae110((byte *)pSVar7->field_0165);
              }
              if ((byte *)pSVar7->field_0169 != (byte *)0x0) {
                FUN_006ae110((byte *)pSVar7->field_0169);
              }
              if ((byte *)pSVar7->field_016D != (byte *)0x0) {
                FUN_006ae110((byte *)pSVar7->field_016D);
              }
              pSVar7->field_015D = 0;
              pSVar7->field_0161 = 0;
              pSVar7->field_0165 = 0;
              pSVar7->field_0169 = 0;
              pSVar7->field_016D = 0;
              Library::DKW::TBL::FUN_006afe40(&pSVar7->field_015D,(uint *)pSVar7->field_0171);
              Library::DKW::TBL::FUN_006afe40(&pSVar7->field_0161,(uint *)pSVar7->field_0175);
              Library::DKW::TBL::FUN_006afe40(&pSVar7->field_0165,(uint *)pSVar7->field_0179);
              Library::DKW::TBL::FUN_006afe40(&pSVar7->field_0169,(uint *)pSVar7->field_017D);
              Library::DKW::TBL::FUN_006afe40(&pSVar7->field_016D,(uint *)pSVar7->field_0181);
              thunk_FUN_0043fc50(CASE_8,0);
            }
          }
          if ((g_cPanel_00801688 != (CPanelTy *)0x0) &&
             (bVar8 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_B),
             CONCAT31(extraout_var_02,bVar8) != 0)) {
            (**(code **)(pSVar7->field_0000 + 0x4c))(pSVar7->field_0199);
            pdVar2 = (dword *)pSVar7->field_0195;
            local_c = (DArrayTy *)pSVar7->field_0199;
            iVar9 = 0x13;
            bVar8 = true;
            pDVar19 = local_c;
            pdVar26 = pdVar2;
            do {
              if (iVar9 == 0) break;
              iVar9 = iVar9 + -1;
              bVar8 = (char)pDVar19->flags == (char)*pdVar26;
              pDVar19 = (DArrayTy *)((int)&pDVar19->flags + 1);
              pdVar26 = (dword *)((int)pdVar26 + 1);
            } while (bVar8);
            if (!bVar8) {
              *pdVar2 = local_c->flags;
              pdVar2[1] = local_c->iteratorIndex;
              pdVar2[2] = local_c->elementSize;
              pdVar2[3] = local_c->count;
              *(short *)(pdVar2 + 4) = (short)local_c->capacity;
              *(char *)((int)pdVar2 + 0x12) = *(char *)((int)&local_c->capacity + 2);
              thunk_FUN_0043fc50(CASE_B,0);
            }
          }
          if ((g_cPanel_00801688 != (CPanelTy *)0x0) &&
             (bVar8 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_E),
             CONCAT31(extraout_var_03,bVar8) != 0)) {
            (**(code **)(pSVar7->field_0000 + 0x58))(pSVar7->field_01B1);
            pcVar14 = (char *)pSVar7->field_01AD;
            local_8 = (AnonShape_0041AF40_EF4C5356 *)pSVar7->field_01B1;
            iVar9 = 0xb;
            bVar8 = true;
            pAVar15 = local_8;
            pcVar23 = pcVar14;
            do {
              if (iVar9 == 0) break;
              iVar9 = iVar9 + -1;
              bVar8 = *(char *)pAVar15 == *pcVar23;
              pAVar15 = (AnonShape_0041AF40_EF4C5356 *)&pAVar15->field_0x1;
              pcVar23 = pcVar23 + 1;
            } while (bVar8);
            if (!bVar8) {
              uVar4 = local_8->field_0x1;
              uVar5 = local_8->field_0x2;
              uVar6 = local_8->field_0x3;
              pcVar14[0] = local_8->field_0x0;
              pcVar14[1] = uVar4;
              pcVar14[2] = uVar5;
              pcVar14[3] = uVar6;
              *(undefined4 *)(pcVar14 + 4) = local_8->field_0004;
              *(undefined2 *)(pcVar14 + 8) = local_8->field_0008;
              pcVar14[10] = local_8->field_0xa;
              thunk_FUN_0043fc50(CASE_E,0);
            }
          }
          if (g_cPanel_00801688 == (CPanelTy *)0x0) {
            g_currentExceptionFrame = local_58.previous;
            return 0;
          }
          bVar8 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_10);
          if (CONCAT31(extraout_var_04,bVar8) == 0) {
            g_currentExceptionFrame = local_58.previous;
            return 0;
          }
          (**(code **)(pSVar7->field_0000 + 0x60))(pSVar7->field_01C1);
          iVar9 = 0x90;
          bVar8 = true;
          piVar16 = (int *)pSVar7->field_01C1;
          piVar20 = (int *)pSVar7->field_01BD;
          do {
            if (iVar9 == 0) break;
            iVar9 = iVar9 + -1;
            bVar8 = *piVar16 == *piVar20;
            piVar16 = piVar16 + 1;
            piVar20 = piVar20 + 1;
          } while (bVar8);
          if (bVar8) {
            g_currentExceptionFrame = local_58.previous;
            return 0;
          }
          piVar16 = (int *)pSVar7->field_01C1;
          piVar20 = (int *)pSVar7->field_01BD;
          for (iVar9 = 0x90; iVar9 != 0; iVar9 = iVar9 + -1) {
            *piVar20 = *piVar16;
            piVar16 = piVar16 + 1;
            piVar20 = piVar20 + 1;
          }
          GVar30 = CASE_10;
          goto cf_common_exit_0041BE5F;
        }
        if (uVar10 != 0x5a) goto cf_common_exit_0041B6C6;
      }
    }
    else if (uVar10 != 0x1a4) {
cf_common_exit_0041B6C6:
      iVar9 = ReportDebugMessage(s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0x7e4,0,0,&DAT_007a4ccc,
                                 s_STGameObjC__GetMessagge_MESS_ID__007a4ee8);
      if (iVar9 == 0) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      pcVar3 = (code *)swi(3);
      uVar11 = (*pcVar3)();
      return uVar11;
    }
LAB_0041bdb3:
    if (g_cPanel_00801688 == (CPanelTy *)0x0) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    bVar8 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_5);
    if (CONCAT31(extraout_var_20,bVar8) != 0) {
      (**(code **)(pSVar7->field_0000 + 0x30))(pSVar7->field_0121);
      iVar9 = 0x1b;
      bVar8 = true;
      psVar18 = (short *)pSVar7->field_0121;
      psVar25 = (short *)pSVar7->field_011D;
      do {
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        bVar8 = *psVar18 == *psVar25;
        psVar18 = psVar18 + 1;
        psVar25 = psVar25 + 1;
      } while (bVar8);
      if (!bVar8) {
        psVar18 = (short *)pSVar7->field_0121;
        psVar25 = (short *)pSVar7->field_011D;
        for (iVar9 = 0xd; iVar9 != 0; iVar9 = iVar9 + -1) {
          *(undefined4 *)psVar25 = *(undefined4 *)psVar18;
          psVar18 = psVar18 + 2;
          psVar25 = psVar25 + 2;
        }
        *psVar25 = *psVar18;
        thunk_FUN_0043fc50(CASE_5,0);
      }
    }
    if (g_cPanel_00801688 == (CPanelTy *)0x0) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    bVar8 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_4);
    if (CONCAT31(extraout_var_21,bVar8) == 0) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    (**(code **)(pSVar7->field_0000 + 0x34))(pSVar7->field_0129);
    iVar9 = 0x17;
    bVar8 = true;
    piVar16 = (int *)pSVar7->field_0129;
    piVar20 = (int *)pSVar7->field_0125;
    do {
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      bVar8 = *piVar16 == *piVar20;
      piVar16 = piVar16 + 1;
      piVar20 = piVar20 + 1;
    } while (bVar8);
    if (bVar8) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    piVar16 = (int *)pSVar7->field_0129;
    piVar20 = (int *)pSVar7->field_0125;
    for (iVar9 = 0x17; iVar9 != 0; iVar9 = iVar9 + -1) {
      *piVar20 = *piVar16;
      piVar16 = piVar16 + 1;
      piVar20 = piVar20 + 1;
    }
    GVar30 = CASE_4;
    goto cf_common_exit_0041BE5F;
  }
  if (uVar10 == 0x1b8) goto LAB_0041bdb3;
  if (uVar10 != 1000) {
    if (uVar10 != 0x3e9) goto cf_common_exit_0041B6C6;
    if (g_cPanel_00801688 == (CPanelTy *)0x0) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    bVar8 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_4);
    if (CONCAT31(extraout_var_09,bVar8) != 0) {
      (**(code **)(pSVar7->field_0000 + 0x34))(pSVar7->field_0129);
      iVar9 = 0x17;
      bVar8 = true;
      piVar16 = (int *)pSVar7->field_0129;
      piVar20 = (int *)pSVar7->field_0125;
      do {
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        bVar8 = *piVar16 == *piVar20;
        piVar16 = piVar16 + 1;
        piVar20 = piVar20 + 1;
      } while (bVar8);
      if (!bVar8) {
        piVar16 = (int *)pSVar7->field_0129;
        piVar20 = (int *)pSVar7->field_0125;
        for (iVar9 = 0x17; iVar9 != 0; iVar9 = iVar9 + -1) {
          *piVar20 = *piVar16;
          piVar16 = piVar16 + 1;
          piVar20 = piVar20 + 1;
        }
        thunk_FUN_0043fc50(CASE_4,0);
      }
    }
    if (g_cPanel_00801688 == (CPanelTy *)0x0) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    bVar8 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_5);
    if (CONCAT31(extraout_var_10,bVar8) == 0) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    (**(code **)(pSVar7->field_0000 + 0x30))(pSVar7->field_0121);
    iVar9 = 0x1b;
    bVar8 = true;
    psVar18 = (short *)pSVar7->field_0121;
    psVar25 = (short *)pSVar7->field_011D;
    do {
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      bVar8 = *psVar18 == *psVar25;
      psVar18 = psVar18 + 1;
      psVar25 = psVar25 + 1;
    } while (bVar8);
    if (bVar8) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    psVar18 = (short *)pSVar7->field_0121;
    psVar25 = (short *)pSVar7->field_011D;
    for (iVar9 = 0xd; iVar9 != 0; iVar9 = iVar9 + -1) {
      *(undefined4 *)psVar25 = *(undefined4 *)psVar18;
      psVar18 = psVar18 + 2;
      psVar25 = psVar25 + 2;
    }
    *psVar25 = *psVar18;
    GVar30 = CASE_5;
    goto cf_common_exit_0041BE5F;
  }
  if (g_cPanel_00801688 == (CPanelTy *)0x0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  bVar8 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_4);
  if (CONCAT31(extraout_var_11,bVar8) != 0) {
    (**(code **)(pSVar7->field_0000 + 0x34))(pSVar7->field_0129);
    iVar9 = 0x17;
    bVar8 = true;
    piVar16 = (int *)pSVar7->field_0129;
    piVar20 = (int *)pSVar7->field_0125;
    do {
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      bVar8 = *piVar16 == *piVar20;
      piVar16 = piVar16 + 1;
      piVar20 = piVar20 + 1;
    } while (bVar8);
    if (!bVar8) {
      piVar16 = (int *)pSVar7->field_0129;
      piVar20 = (int *)pSVar7->field_0125;
      for (iVar9 = 0x17; iVar9 != 0; iVar9 = iVar9 + -1) {
        *piVar20 = *piVar16;
        piVar16 = piVar16 + 1;
        piVar20 = piVar20 + 1;
      }
      thunk_FUN_0043fc50(CASE_4,0);
    }
  }
  if (g_cPanel_00801688 == (CPanelTy *)0x0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  bVar8 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_5);
  if (CONCAT31(extraout_var_12,bVar8) != 0) {
    (**(code **)(pSVar7->field_0000 + 0x30))(pSVar7->field_0121);
    iVar9 = 0x1b;
    bVar8 = true;
    psVar18 = (short *)pSVar7->field_0121;
    psVar25 = (short *)pSVar7->field_011D;
    do {
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      bVar8 = *psVar18 == *psVar25;
      psVar18 = psVar18 + 1;
      psVar25 = psVar25 + 1;
    } while (bVar8);
    if (!bVar8) {
      psVar18 = (short *)pSVar7->field_0121;
      psVar25 = (short *)pSVar7->field_011D;
      for (iVar9 = 0xd; iVar9 != 0; iVar9 = iVar9 + -1) {
        *(undefined4 *)psVar25 = *(undefined4 *)psVar18;
        psVar18 = psVar18 + 2;
        psVar25 = psVar25 + 2;
      }
      *psVar25 = *psVar18;
      thunk_FUN_0043fc50(CASE_5,0);
    }
  }
  if (g_cPanel_00801688 == (CPanelTy *)0x0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  bVar8 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_6);
  if (CONCAT31(extraout_var_13,bVar8) != 0) {
    puVar13 = &pSVar7->field_0135;
    if ((byte *)pSVar7->field_0135 != (byte *)0x0) {
      FUN_006ae110((byte *)pSVar7->field_0135);
    }
    if ((byte *)pSVar7->field_0139 != (byte *)0x0) {
      FUN_006ae110((byte *)pSVar7->field_0139);
    }
    *puVar13 = 0;
    pSVar7->field_0139 = 0;
    (**(code **)(pSVar7->field_0000 + 0x38))(puVar13);
    bVar8 = false;
    iVar9 = *(int *)(*puVar13 + 0xc);
    if (iVar9 == *(int *)(pSVar7->field_012D + 0xc)) {
      iVar9 = iVar9 * 0x30;
      bVar29 = true;
      pcVar14 = *(char **)(*puVar13 + 0x1c);
      pcVar23 = *(char **)(pSVar7->field_012D + 0x1c);
      do {
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        bVar29 = *pcVar14 == *pcVar23;
        pcVar14 = pcVar14 + 1;
        pcVar23 = pcVar23 + 1;
      } while (bVar29);
      if (!bVar29) goto LAB_0041b8f6;
    }
    else {
LAB_0041b8f6:
      bVar8 = true;
    }
    if (!bVar8) {
      iVar9 = *(int *)(pSVar7->field_0139 + 0xc);
      if (iVar9 == *(int *)(pSVar7->field_0131 + 0xc)) {
        iVar9 = iVar9 * 0x30;
        bVar29 = true;
        pcVar14 = *(char **)(pSVar7->field_0139 + 0x1c);
        pcVar23 = *(char **)(pSVar7->field_0131 + 0x1c);
        do {
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          bVar29 = *pcVar14 == *pcVar23;
          pcVar14 = pcVar14 + 1;
          pcVar23 = pcVar23 + 1;
        } while (bVar29);
        if (bVar29) goto LAB_0041b92c;
      }
      bVar8 = true;
    }
LAB_0041b92c:
    if (bVar8) {
      if ((byte *)pSVar7->field_012D != (byte *)0x0) {
        FUN_006ae110((byte *)pSVar7->field_012D);
      }
      if ((byte *)pSVar7->field_0131 != (byte *)0x0) {
        FUN_006ae110((byte *)pSVar7->field_0131);
      }
      pSVar7->field_012D = 0;
      pSVar7->field_0131 = 0;
      Library::DKW::TBL::FUN_006afe40(&pSVar7->field_012D,(uint *)pSVar7->field_0135);
      Library::DKW::TBL::FUN_006afe40(&pSVar7->field_0131,(uint *)pSVar7->field_0139);
      GVar30 = CASE_6;
      goto cf_common_exit_0041BE5F;
    }
  }
  if (g_cPanel_00801688 == (CPanelTy *)0x0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  bVar8 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_7);
  if (CONCAT31(extraout_var_14,bVar8) != 0) {
    puVar13 = &pSVar7->field_014D;
    if ((byte *)pSVar7->field_014D != (byte *)0x0) {
      FUN_006ae110((byte *)pSVar7->field_014D);
    }
    if ((byte *)pSVar7->field_0151 != (byte *)0x0) {
      FUN_006ae110((byte *)pSVar7->field_0151);
    }
    if ((byte *)pSVar7->field_0155 != (byte *)0x0) {
      FUN_006ae110((byte *)pSVar7->field_0155);
    }
    if ((byte *)pSVar7->field_0159 != (byte *)0x0) {
      FUN_006ae110((byte *)pSVar7->field_0159);
    }
    *puVar13 = 0;
    pSVar7->field_0151 = 0;
    pSVar7->field_0155 = 0;
    pSVar7->field_0159 = 0;
    (**(code **)(pSVar7->field_0000 + 0x3c))(puVar13);
    local_c = (DArrayTy *)pSVar7->field_013D;
    bVar8 = false;
    dVar1 = *(dword *)(*puVar13 + 0xc);
    if (dVar1 == local_c->count) {
      iVar9 = dVar1 * 0x30;
      bVar29 = true;
      pcVar14 = *(char **)(*puVar13 + 0x1c);
      pcVar23 = local_c->data;
      do {
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        bVar29 = *pcVar14 == *pcVar23;
        pcVar14 = pcVar14 + 1;
        pcVar23 = pcVar23 + 1;
      } while (bVar29);
      if (!bVar29) goto LAB_0041ba2a;
    }
    else {
LAB_0041ba2a:
      bVar8 = true;
    }
    if (!bVar8) {
      iVar9 = *(int *)(pSVar7->field_0151 + 0xc);
      if (iVar9 == *(int *)(pSVar7->field_0141 + 0xc)) {
        iVar9 = iVar9 * 0x30;
        bVar29 = true;
        pcVar14 = *(char **)(pSVar7->field_0151 + 0x1c);
        pcVar23 = *(char **)(pSVar7->field_0141 + 0x1c);
        do {
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          bVar29 = *pcVar14 == *pcVar23;
          pcVar14 = pcVar14 + 1;
          pcVar23 = pcVar23 + 1;
        } while (bVar29);
        if (!bVar29) goto LAB_0041ba5f;
      }
      else {
LAB_0041ba5f:
        bVar8 = true;
      }
      if (!bVar8) {
        iVar9 = *(int *)(pSVar7->field_0155 + 0xc);
        if (iVar9 == *(int *)(pSVar7->field_0145 + 0xc)) {
          iVar9 = iVar9 * 0x30;
          bVar29 = true;
          pcVar14 = *(char **)(pSVar7->field_0155 + 0x1c);
          pcVar23 = *(char **)(pSVar7->field_0145 + 0x1c);
          do {
            if (iVar9 == 0) break;
            iVar9 = iVar9 + -1;
            bVar29 = *pcVar14 == *pcVar23;
            pcVar14 = pcVar14 + 1;
            pcVar23 = pcVar23 + 1;
          } while (bVar29);
          if (!bVar29) goto LAB_0041ba90;
        }
        else {
LAB_0041ba90:
          bVar8 = true;
        }
        if (!bVar8) {
          iVar9 = *(int *)(pSVar7->field_0159 + 0xc);
          if (iVar9 == *(int *)(pSVar7->field_0149 + 0xc)) {
            iVar9 = iVar9 * 0x30;
            bVar29 = true;
            pcVar14 = *(char **)(pSVar7->field_0159 + 0x1c);
            pcVar23 = *(char **)(pSVar7->field_0149 + 0x1c);
            do {
              if (iVar9 == 0) break;
              iVar9 = iVar9 + -1;
              bVar29 = *pcVar14 == *pcVar23;
              pcVar14 = pcVar14 + 1;
              pcVar23 = pcVar23 + 1;
            } while (bVar29);
            if (bVar29) goto LAB_0041bac6;
          }
          bVar8 = true;
        }
      }
    }
LAB_0041bac6:
    if (bVar8) {
      if (local_c != (DArrayTy *)0x0) {
        FUN_006ae110((byte *)local_c);
      }
      if ((byte *)pSVar7->field_0141 != (byte *)0x0) {
        FUN_006ae110((byte *)pSVar7->field_0141);
      }
      if ((byte *)pSVar7->field_0145 != (byte *)0x0) {
        FUN_006ae110((byte *)pSVar7->field_0145);
      }
      if ((byte *)pSVar7->field_0149 != (byte *)0x0) {
        FUN_006ae110((byte *)pSVar7->field_0149);
      }
      pSVar7->field_013D = 0;
      pSVar7->field_0141 = 0;
      pSVar7->field_0145 = 0;
      pSVar7->field_0149 = 0;
      Library::DKW::TBL::FUN_006afe40(&pSVar7->field_013D,(uint *)pSVar7->field_014D);
      Library::DKW::TBL::FUN_006afe40(&pSVar7->field_0141,(uint *)pSVar7->field_0151);
      Library::DKW::TBL::FUN_006afe40(&pSVar7->field_0145,(uint *)pSVar7->field_0155);
      Library::DKW::TBL::FUN_006afe40(&pSVar7->field_0149,(uint *)pSVar7->field_0159);
      GVar30 = CASE_7;
      goto cf_common_exit_0041BE5F;
    }
  }
  if (g_cPanel_00801688 == (CPanelTy *)0x0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  bVar8 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_9);
  if (CONCAT31(extraout_var_15,bVar8) != 0) {
    (**(code **)(pSVar7->field_0000 + 0x44))(pSVar7->field_0189);
    iVar9 = 0x129;
    bVar8 = true;
    pcVar14 = (char *)pSVar7->field_0189;
    pcVar23 = (char *)pSVar7->field_0185;
    do {
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      bVar8 = *pcVar14 == *pcVar23;
      pcVar14 = pcVar14 + 1;
      pcVar23 = pcVar23 + 1;
    } while (bVar8);
    if (!bVar8) {
      pcVar14 = (char *)pSVar7->field_0189;
      pcVar23 = (char *)pSVar7->field_0185;
      for (iVar9 = 0x4a; iVar9 != 0; iVar9 = iVar9 + -1) {
        *(undefined4 *)pcVar23 = *(undefined4 *)pcVar14;
        pcVar14 = pcVar14 + 4;
        pcVar23 = pcVar23 + 4;
      }
      *pcVar23 = *pcVar14;
      thunk_FUN_0043fc50(CASE_9,0);
    }
  }
  if (g_cPanel_00801688 == (CPanelTy *)0x0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  bVar8 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_A);
  if (CONCAT31(extraout_var_16,bVar8) != 0) {
    (**(code **)(pSVar7->field_0000 + 0x48))(pSVar7->field_0191);
    pdVar2 = (dword *)pSVar7->field_018D;
    local_c = (DArrayTy *)pSVar7->field_0191;
    iVar9 = 4;
    bVar8 = true;
    pDVar19 = local_c;
    pdVar26 = pdVar2;
    do {
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      bVar8 = pDVar19->flags == *pdVar26;
      pDVar19 = (DArrayTy *)&pDVar19->iteratorIndex;
      pdVar26 = pdVar26 + 1;
    } while (bVar8);
    if (!bVar8) {
      *pdVar2 = local_c->flags;
      pdVar2[1] = local_c->iteratorIndex;
      pdVar2[2] = local_c->elementSize;
      pdVar2[3] = local_c->count;
      thunk_FUN_0043fc50(CASE_A,0);
    }
  }
  if (g_cPanel_00801688 == (CPanelTy *)0x0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  bVar8 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_C);
  if (CONCAT31(extraout_var_17,bVar8) != 0) {
    puVar13 = &pSVar7->field_01A1;
    local_14 = puVar13;
    if ((byte *)pSVar7->field_01A1 != (byte *)0x0) {
      FUN_006ae110((byte *)pSVar7->field_01A1);
      *puVar13 = 0;
    }
    (**(code **)(pSVar7->field_0000 + 0x50))(puVar13);
    groupContent = (byte *)pSVar7->field_019D;
    local_c = (DArrayTy *)&pSVar7->field_019D;
    local_8 = (AnonShape_0041AF40_EF4C5356 *)0x0;
    iVar9 = *(int *)(*puVar13 + 0xc);
    if (iVar9 == *(int *)(groupContent + 0xc)) {
      iVar9 = iVar9 * 0x30;
      bVar8 = true;
      pcVar14 = *(char **)(*puVar13 + 0x1c);
      pcVar23 = *(char **)(groupContent + 0x1c);
      do {
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        bVar8 = *pcVar14 == *pcVar23;
        pcVar14 = pcVar14 + 1;
        pcVar23 = pcVar23 + 1;
      } while (bVar8);
      if (!bVar8) goto LAB_0041bcad;
    }
    else {
LAB_0041bcad:
      local_8 = (AnonShape_0041AF40_EF4C5356 *)0x1;
    }
    if (local_8 == (AnonShape_0041AF40_EF4C5356 *)0x1) {
      if (groupContent != (byte *)0x0) {
        FUN_006ae110(groupContent);
        local_c->flags = 0;
      }
      Library::DKW::TBL::FUN_006afe40((int *)local_c,(uint *)*local_14);
      GVar30 = CASE_C;
      goto cf_common_exit_0041BE5F;
    }
  }
  if (g_cPanel_00801688 == (CPanelTy *)0x0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  bVar8 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_C|CASE_1);
  if (CONCAT31(extraout_var_18,bVar8) != 0) {
    (**(code **)(pSVar7->field_0000 + 0x54))(pSVar7->field_01A9);
    piVar16 = (int *)pSVar7->field_01A5;
    local_14 = (int *)pSVar7->field_01A9;
    iVar9 = 3;
    bVar8 = true;
    piVar20 = local_14;
    piVar27 = piVar16;
    do {
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      bVar8 = *piVar20 == *piVar27;
      piVar20 = piVar20 + 1;
      piVar27 = piVar27 + 1;
    } while (bVar8);
    if (!bVar8) {
      *piVar16 = *local_14;
      piVar16[1] = local_14[1];
      piVar16[2] = local_14[2];
      thunk_FUN_0043fc50(CASE_D,0);
    }
  }
  if (g_cPanel_00801688 == (CPanelTy *)0x0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  bVar8 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_F);
  if (CONCAT31(extraout_var_19,bVar8) == 0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  (**(code **)(pSVar7->field_0000 + 0x5c))(pSVar7->field_01B9);
  pcVar14 = (char *)pSVar7->field_01B5;
  pcVar23 = (char *)pSVar7->field_01B9;
  iVar9 = 0xb;
  bVar8 = true;
  pcVar21 = pcVar23;
  pcVar28 = pcVar14;
  do {
    if (iVar9 == 0) break;
    iVar9 = iVar9 + -1;
    bVar8 = *pcVar21 == *pcVar28;
    pcVar21 = pcVar21 + 1;
    pcVar28 = pcVar28 + 1;
  } while (bVar8);
  if (bVar8) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  *(undefined4 *)pcVar14 = *(undefined4 *)pcVar23;
  *(undefined4 *)(pcVar14 + 4) = *(undefined4 *)(pcVar23 + 4);
  *(undefined2 *)(pcVar14 + 8) = *(undefined2 *)(pcVar23 + 8);
  pcVar14[10] = pcVar23[10];
  GVar30 = CASE_F;
cf_common_exit_0041BE5F:
  thunk_FUN_0043fc50(GVar30,0);
  g_currentExceptionFrame = local_58.previous;
  return 0;
}

