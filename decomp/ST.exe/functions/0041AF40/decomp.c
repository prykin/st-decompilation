
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tc_gobj.cpp
   STGameObjC::GetMessage */

undefined4 __thiscall STGameObjC::GetMessage(STGameObjC *this,int param_1)

{
  code *pcVar1;
  STGameObjC *pSVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
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
  undefined4 uVar6;
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
  int iVar7;
  undefined4 unaff_ESI;
  undefined4 *puVar8;
  char *pcVar9;
  byte *pbVar10;
  char *pcVar11;
  int *piVar12;
  short *psVar13;
  short *psVar14;
  byte *pbVar15;
  int *piVar16;
  char *pcVar17;
  void *unaff_EDI;
  undefined4 *puVar18;
  byte *pbVar19;
  short *psVar20;
  short *psVar21;
  int *piVar22;
  char *pcVar23;
  bool bVar24;
  Global_sub_0043FC50_param_1Enum GVar25;
  InternalExceptionFrame local_58;
  int *local_14;
  STGameObjC *local_10;
  byte *local_c;
  char *local_8;
  
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_10 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_10;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar7 = ReportDebugMessage(s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0x7eb,0,iVar4,&DAT_007a4ccc,
                               s_STGameObjC__GetMessage_007a4ecc);
    if (iVar7 != 0) {
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return uVar6;
    }
    RaiseInternalException(iVar4,0,s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0x7ec);
    return 0xffff;
  }
  FUN_006e5fd0();
  if (*(int *)(param_1 + 0x10) != 0) {
    if (*(int *)(param_1 + 0x10) != 2) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    puVar8 = *(undefined4 **)(param_1 + 0x14);
    if (puVar8 == (undefined4 *)0x0) {
      RaiseInternalException(-1,DAT_007ed77c,s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0x678);
    }
    pSVar2->field_0020 = *puVar8;
    *(undefined4 *)&pSVar2->field_0x24 = puVar8[1];
    *(undefined4 *)&pSVar2->field_0x2c = puVar8[4];
    *(undefined4 *)&pSVar2->field_0x28 = puVar8[2];
    iVar4 = *(int *)&pSVar2->field_0x18 * DAT_00808754;
    *(int *)&pSVar2->field_0x1c = iVar4;
    uVar5 = iVar4 * 0x41c64e6d + 0x3039;
    *(uint *)&pSVar2->field_0x1c = uVar5;
    *(short *)&pSVar2->field_0xf8 = (short)((ulonglong)(uVar5 >> 0x10) % 0x1f) + 0x1e;
    (**(code **)(pSVar2->field_0000 + 0xcc))();
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  if (-1 < *(int *)&pSVar2->field_0x8f) {
    *(int *)&pSVar2->field_0x8f = *(int *)&pSVar2->field_0x8f + 1;
  }
  (**(code **)(pSVar2->field_0000 + 0xd0))();
  if (pSVar2->field_01CD != 1) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  uVar5 = pSVar2->field_0020;
  if (uVar5 < 0x1af) {
    if (uVar5 == 0x1ae) {
      if (DAT_00801688 == (void *)0x0) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      bVar3 = thunk_FUN_004fab10(DAT_00801688,CASE_1);
      if (CONCAT31(extraout_var_05,bVar3) != 0) {
        (**(code **)(pSVar2->field_0000 + 0x30))(pSVar2->field_0121);
        iVar4 = 0x1b;
        bVar3 = true;
        psVar14 = (short *)pSVar2->field_0121;
        psVar21 = (short *)pSVar2->field_011D;
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          bVar3 = *psVar14 == *psVar21;
          psVar14 = psVar14 + 1;
          psVar21 = psVar21 + 1;
        } while (bVar3);
        if (!bVar3) {
          psVar14 = (short *)pSVar2->field_0121;
          psVar21 = (short *)pSVar2->field_011D;
          for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
            *(undefined4 *)psVar21 = *(undefined4 *)psVar14;
            psVar14 = psVar14 + 2;
            psVar21 = psVar21 + 2;
          }
          *psVar21 = *psVar14;
          thunk_FUN_0043fc50(CASE_1,0);
        }
      }
      if (DAT_00801688 == (void *)0x0) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      bVar3 = thunk_FUN_004fab10(DAT_00801688,CASE_2);
      if (CONCAT31(extraout_var_06,bVar3) != 0) {
        (**(code **)(pSVar2->field_0000 + 0x34))(pSVar2->field_0129);
        iVar4 = 0x17;
        bVar3 = true;
        piVar12 = (int *)pSVar2->field_0129;
        piVar16 = (int *)pSVar2->field_0125;
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          bVar3 = *piVar12 == *piVar16;
          piVar12 = piVar12 + 1;
          piVar16 = piVar16 + 1;
        } while (bVar3);
        if (!bVar3) {
          piVar12 = (int *)pSVar2->field_0129;
          piVar16 = (int *)pSVar2->field_0125;
          for (iVar4 = 0x17; iVar4 != 0; iVar4 = iVar4 + -1) {
            *piVar16 = *piVar12;
            piVar12 = piVar12 + 1;
            piVar16 = piVar16 + 1;
          }
          thunk_FUN_0043fc50(CASE_2,0);
        }
      }
      if (DAT_00801688 == (void *)0x0) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      bVar3 = thunk_FUN_004fab10(DAT_00801688,CASE_E);
      if (CONCAT31(extraout_var_07,bVar3) != 0) {
        (**(code **)(pSVar2->field_0000 + 0x58))(pSVar2->field_01B1);
        pcVar9 = (char *)pSVar2->field_01AD;
        local_8 = (char *)pSVar2->field_01B1;
        iVar4 = 0xb;
        bVar3 = true;
        pcVar11 = local_8;
        pcVar17 = pcVar9;
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          bVar3 = *pcVar11 == *pcVar17;
          pcVar11 = pcVar11 + 1;
          pcVar17 = pcVar17 + 1;
        } while (bVar3);
        if (!bVar3) {
          *(undefined4 *)pcVar9 = *(undefined4 *)local_8;
          *(undefined4 *)(pcVar9 + 4) = *(undefined4 *)(local_8 + 4);
          *(undefined2 *)(pcVar9 + 8) = *(undefined2 *)(local_8 + 8);
          pcVar9[10] = local_8[10];
          thunk_FUN_0043fc50(CASE_E,0);
        }
      }
      if (DAT_00801688 == (void *)0x0) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      bVar3 = thunk_FUN_004fab10(DAT_00801688,CASE_12);
      if (CONCAT31(extraout_var_08,bVar3) == 0) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      (**(code **)(pSVar2->field_0000 + 100))(pSVar2->field_01C9);
      psVar14 = (short *)pSVar2->field_01C5;
      psVar21 = (short *)pSVar2->field_01C9;
      iVar4 = 3;
      bVar3 = true;
      psVar13 = psVar21;
      psVar20 = psVar14;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar3 = *psVar13 == *psVar20;
        psVar13 = psVar13 + 1;
        psVar20 = psVar20 + 1;
      } while (bVar3);
      if (bVar3) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      *(undefined4 *)psVar14 = *(undefined4 *)psVar21;
      psVar14[2] = psVar21[2];
      GVar25 = CASE_12;
      goto LAB_0041be5f;
    }
    if (uVar5 < 0x173) {
      if (uVar5 != 0x172) {
        if (uVar5 == 0x14) {
          if ((DAT_00801688 != (void *)0x0) &&
             (bVar3 = thunk_FUN_004fab10(DAT_00801688,CASE_1), CONCAT31(extraout_var,bVar3) != 0)) {
            (**(code **)(pSVar2->field_0000 + 0x30))(pSVar2->field_0121);
            iVar4 = 0x1b;
            bVar3 = true;
            psVar14 = (short *)pSVar2->field_0121;
            psVar21 = (short *)pSVar2->field_011D;
            do {
              if (iVar4 == 0) break;
              iVar4 = iVar4 + -1;
              bVar3 = *psVar14 == *psVar21;
              psVar14 = psVar14 + 1;
              psVar21 = psVar21 + 1;
            } while (bVar3);
            if (!bVar3) {
              uVar5 = STAllPlayersC::GetNInTmp(0,0);
              if ((short)uVar5 == 1) {
                puVar8 = (undefined4 *)pSVar2->field_0121;
              }
              else {
                puVar8 = (undefined4 *)pSVar2->field_0121;
                if (*(char *)((int)puVar8 + 0x1b) == *(char *)(pSVar2->field_011D + 0x1b)) {
                  iVar4 = 5;
                  bVar3 = true;
                  pcVar9 = (char *)((int)puVar8 + 0x2a);
                  pcVar11 = (char *)(pSVar2->field_011D + 0x2a);
                  do {
                    if (iVar4 == 0) break;
                    iVar4 = iVar4 + -1;
                    bVar3 = *pcVar9 == *pcVar11;
                    pcVar9 = pcVar9 + 1;
                    pcVar11 = pcVar11 + 1;
                  } while (bVar3);
                  if (bVar3) goto LAB_0041b128;
                }
              }
              puVar18 = (undefined4 *)pSVar2->field_011D;
              for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar18 = *puVar8;
                puVar8 = puVar8 + 1;
                puVar18 = puVar18 + 1;
              }
              *(undefined2 *)puVar18 = *(undefined2 *)puVar8;
              thunk_FUN_0043fc50(CASE_1,0);
            }
          }
LAB_0041b128:
          if ((DAT_00801688 != (void *)0x0) &&
             (bVar3 = thunk_FUN_004fab10(DAT_00801688,CASE_2), CONCAT31(extraout_var_00,bVar3) != 0)
             ) {
            (**(code **)(pSVar2->field_0000 + 0x34))(pSVar2->field_0129);
            iVar4 = 0x17;
            bVar3 = true;
            piVar12 = (int *)pSVar2->field_0129;
            piVar16 = (int *)pSVar2->field_0125;
            do {
              if (iVar4 == 0) break;
              iVar4 = iVar4 + -1;
              bVar3 = *piVar12 == *piVar16;
              piVar12 = piVar12 + 1;
              piVar16 = piVar16 + 1;
            } while (bVar3);
            if (!bVar3) {
              piVar12 = (int *)pSVar2->field_0129;
              piVar16 = (int *)pSVar2->field_0125;
              for (iVar4 = 0x17; iVar4 != 0; iVar4 = iVar4 + -1) {
                *piVar16 = *piVar12;
                piVar12 = piVar12 + 1;
                piVar16 = piVar16 + 1;
              }
              thunk_FUN_0043fc50(CASE_2,0);
            }
          }
          if ((DAT_00801688 != (void *)0x0) &&
             (bVar3 = thunk_FUN_004fab10(DAT_00801688,CASE_8), CONCAT31(extraout_var_01,bVar3) != 0)
             ) {
            puVar8 = &pSVar2->field_0171;
            if ((byte *)pSVar2->field_0171 != (byte *)0x0) {
              FUN_006ae110((byte *)pSVar2->field_0171);
            }
            if ((byte *)pSVar2->field_0175 != (byte *)0x0) {
              FUN_006ae110((byte *)pSVar2->field_0175);
            }
            if ((byte *)pSVar2->field_0179 != (byte *)0x0) {
              FUN_006ae110((byte *)pSVar2->field_0179);
            }
            if ((byte *)pSVar2->field_017D != (byte *)0x0) {
              FUN_006ae110((byte *)pSVar2->field_017D);
            }
            if ((byte *)pSVar2->field_0181 != (byte *)0x0) {
              FUN_006ae110((byte *)pSVar2->field_0181);
            }
            *puVar8 = 0;
            pSVar2->field_0175 = 0;
            pSVar2->field_0179 = 0;
            pSVar2->field_017D = 0;
            pSVar2->field_0181 = 0;
            (**(code **)(pSVar2->field_0000 + 0x40))(puVar8);
            local_c = (byte *)pSVar2->field_015D;
            bVar3 = false;
            iVar4 = *(int *)(*puVar8 + 0xc);
            if (iVar4 == *(int *)(local_c + 0xc)) {
              iVar4 = iVar4 * 0x30;
              bVar24 = true;
              pcVar9 = *(char **)(*puVar8 + 0x1c);
              pcVar11 = *(char **)(local_c + 0x1c);
              do {
                if (iVar4 == 0) break;
                iVar4 = iVar4 + -1;
                bVar24 = *pcVar9 == *pcVar11;
                pcVar9 = pcVar9 + 1;
                pcVar11 = pcVar11 + 1;
              } while (bVar24);
              if (!bVar24) goto LAB_0041b237;
            }
            else {
LAB_0041b237:
              bVar3 = true;
            }
            if (!bVar3) {
              iVar4 = *(int *)(pSVar2->field_0175 + 0xc);
              if (iVar4 == *(int *)(pSVar2->field_0161 + 0xc)) {
                iVar4 = iVar4 * 0x30;
                bVar24 = true;
                pcVar9 = *(char **)(pSVar2->field_0175 + 0x1c);
                pcVar11 = *(char **)(pSVar2->field_0161 + 0x1c);
                do {
                  if (iVar4 == 0) break;
                  iVar4 = iVar4 + -1;
                  bVar24 = *pcVar9 == *pcVar11;
                  pcVar9 = pcVar9 + 1;
                  pcVar11 = pcVar11 + 1;
                } while (bVar24);
                if (!bVar24) goto LAB_0041b26c;
              }
              else {
LAB_0041b26c:
                bVar3 = true;
              }
              if (!bVar3) {
                iVar4 = *(int *)(pSVar2->field_0179 + 0xc);
                if (iVar4 == *(int *)(pSVar2->field_0165 + 0xc)) {
                  iVar4 = iVar4 * 0x30;
                  bVar24 = true;
                  pcVar9 = *(char **)(pSVar2->field_0179 + 0x1c);
                  pcVar11 = *(char **)(pSVar2->field_0165 + 0x1c);
                  do {
                    if (iVar4 == 0) break;
                    iVar4 = iVar4 + -1;
                    bVar24 = *pcVar9 == *pcVar11;
                    pcVar9 = pcVar9 + 1;
                    pcVar11 = pcVar11 + 1;
                  } while (bVar24);
                  if (!bVar24) goto LAB_0041b2a1;
                }
                else {
LAB_0041b2a1:
                  bVar3 = true;
                }
                if (!bVar3) {
                  iVar4 = *(int *)(pSVar2->field_017D + 0xc);
                  if (iVar4 == *(int *)(pSVar2->field_0169 + 0xc)) {
                    iVar4 = iVar4 * 0x30;
                    bVar24 = true;
                    pcVar9 = *(char **)(pSVar2->field_017D + 0x1c);
                    pcVar11 = *(char **)(pSVar2->field_0169 + 0x1c);
                    do {
                      if (iVar4 == 0) break;
                      iVar4 = iVar4 + -1;
                      bVar24 = *pcVar9 == *pcVar11;
                      pcVar9 = pcVar9 + 1;
                      pcVar11 = pcVar11 + 1;
                    } while (bVar24);
                    if (!bVar24) goto LAB_0041b2d2;
                  }
                  else {
LAB_0041b2d2:
                    bVar3 = true;
                  }
                  if (!bVar3) {
                    iVar4 = *(int *)(pSVar2->field_0181 + 0xc);
                    if (iVar4 == *(int *)(pSVar2->field_016D + 0xc)) {
                      iVar4 = iVar4 * 0x30;
                      bVar24 = true;
                      pcVar9 = *(char **)(pSVar2->field_0181 + 0x1c);
                      pcVar11 = *(char **)(pSVar2->field_016D + 0x1c);
                      do {
                        if (iVar4 == 0) break;
                        iVar4 = iVar4 + -1;
                        bVar24 = *pcVar9 == *pcVar11;
                        pcVar9 = pcVar9 + 1;
                        pcVar11 = pcVar11 + 1;
                      } while (bVar24);
                      if (bVar24) goto LAB_0041b308;
                    }
                    bVar3 = true;
                  }
                }
              }
            }
LAB_0041b308:
            if (bVar3) {
              if (local_c != (byte *)0x0) {
                FUN_006ae110(local_c);
              }
              if ((byte *)pSVar2->field_0161 != (byte *)0x0) {
                FUN_006ae110((byte *)pSVar2->field_0161);
              }
              if ((byte *)pSVar2->field_0165 != (byte *)0x0) {
                FUN_006ae110((byte *)pSVar2->field_0165);
              }
              if ((byte *)pSVar2->field_0169 != (byte *)0x0) {
                FUN_006ae110((byte *)pSVar2->field_0169);
              }
              if ((byte *)pSVar2->field_016D != (byte *)0x0) {
                FUN_006ae110((byte *)pSVar2->field_016D);
              }
              pSVar2->field_015D = 0;
              pSVar2->field_0161 = 0;
              pSVar2->field_0165 = 0;
              pSVar2->field_0169 = 0;
              pSVar2->field_016D = 0;
              Library::DKW::TBL::FUN_006afe40(&pSVar2->field_015D,(uint *)pSVar2->field_0171);
              Library::DKW::TBL::FUN_006afe40(&pSVar2->field_0161,(uint *)pSVar2->field_0175);
              Library::DKW::TBL::FUN_006afe40(&pSVar2->field_0165,(uint *)pSVar2->field_0179);
              Library::DKW::TBL::FUN_006afe40(&pSVar2->field_0169,(uint *)pSVar2->field_017D);
              Library::DKW::TBL::FUN_006afe40(&pSVar2->field_016D,(uint *)pSVar2->field_0181);
              thunk_FUN_0043fc50(CASE_8,0);
            }
          }
          if ((DAT_00801688 != (void *)0x0) &&
             (bVar3 = thunk_FUN_004fab10(DAT_00801688,CASE_B), CONCAT31(extraout_var_02,bVar3) != 0)
             ) {
            (**(code **)(pSVar2->field_0000 + 0x4c))(pSVar2->field_0199);
            pbVar15 = (byte *)pSVar2->field_0195;
            local_c = (byte *)pSVar2->field_0199;
            iVar4 = 0x13;
            bVar3 = true;
            pbVar10 = local_c;
            pbVar19 = pbVar15;
            do {
              if (iVar4 == 0) break;
              iVar4 = iVar4 + -1;
              bVar3 = *pbVar10 == *pbVar19;
              pbVar10 = pbVar10 + 1;
              pbVar19 = pbVar19 + 1;
            } while (bVar3);
            if (!bVar3) {
              *(int *)pbVar15 = *(int *)local_c;
              *(int *)(pbVar15 + 4) = *(int *)(local_c + 4);
              *(int *)(pbVar15 + 8) = *(int *)(local_c + 8);
              *(int *)(pbVar15 + 0xc) = *(int *)(local_c + 0xc);
              *(undefined2 *)(pbVar15 + 0x10) = *(undefined2 *)(local_c + 0x10);
              pbVar15[0x12] = local_c[0x12];
              thunk_FUN_0043fc50(CASE_B,0);
            }
          }
          if ((DAT_00801688 != (void *)0x0) &&
             (bVar3 = thunk_FUN_004fab10(DAT_00801688,CASE_E), CONCAT31(extraout_var_03,bVar3) != 0)
             ) {
            (**(code **)(pSVar2->field_0000 + 0x58))(pSVar2->field_01B1);
            pcVar9 = (char *)pSVar2->field_01AD;
            local_8 = (char *)pSVar2->field_01B1;
            iVar4 = 0xb;
            bVar3 = true;
            pcVar11 = local_8;
            pcVar17 = pcVar9;
            do {
              if (iVar4 == 0) break;
              iVar4 = iVar4 + -1;
              bVar3 = *pcVar11 == *pcVar17;
              pcVar11 = pcVar11 + 1;
              pcVar17 = pcVar17 + 1;
            } while (bVar3);
            if (!bVar3) {
              *(undefined4 *)pcVar9 = *(undefined4 *)local_8;
              *(undefined4 *)(pcVar9 + 4) = *(undefined4 *)(local_8 + 4);
              *(undefined2 *)(pcVar9 + 8) = *(undefined2 *)(local_8 + 8);
              pcVar9[10] = local_8[10];
              thunk_FUN_0043fc50(CASE_E,0);
            }
          }
          if (DAT_00801688 == (void *)0x0) {
            g_currentExceptionFrame = local_58.previous;
            return 0;
          }
          bVar3 = thunk_FUN_004fab10(DAT_00801688,CASE_10);
          if (CONCAT31(extraout_var_04,bVar3) == 0) {
            g_currentExceptionFrame = local_58.previous;
            return 0;
          }
          (**(code **)(pSVar2->field_0000 + 0x60))(pSVar2->field_01C1);
          iVar4 = 0x90;
          bVar3 = true;
          piVar12 = (int *)pSVar2->field_01C1;
          piVar16 = (int *)pSVar2->field_01BD;
          do {
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            bVar3 = *piVar12 == *piVar16;
            piVar12 = piVar12 + 1;
            piVar16 = piVar16 + 1;
          } while (bVar3);
          if (bVar3) {
            g_currentExceptionFrame = local_58.previous;
            return 0;
          }
          piVar12 = (int *)pSVar2->field_01C1;
          piVar16 = (int *)pSVar2->field_01BD;
          for (iVar4 = 0x90; iVar4 != 0; iVar4 = iVar4 + -1) {
            *piVar16 = *piVar12;
            piVar12 = piVar12 + 1;
            piVar16 = piVar16 + 1;
          }
          GVar25 = CASE_10;
          goto LAB_0041be5f;
        }
        if (uVar5 != 0x5a) goto LAB_0041b6c6;
      }
    }
    else if (uVar5 != 0x1a4) {
LAB_0041b6c6:
      iVar4 = ReportDebugMessage(s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0x7e4,0,0,&DAT_007a4ccc,
                                 s_STGameObjC__GetMessagge_MESS_ID__007a4ee8);
      if (iVar4 == 0) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return uVar6;
    }
LAB_0041bdb3:
    if (DAT_00801688 == (void *)0x0) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    bVar3 = thunk_FUN_004fab10(DAT_00801688,CASE_5);
    if (CONCAT31(extraout_var_20,bVar3) != 0) {
      (**(code **)(pSVar2->field_0000 + 0x30))(pSVar2->field_0121);
      iVar4 = 0x1b;
      bVar3 = true;
      psVar14 = (short *)pSVar2->field_0121;
      psVar21 = (short *)pSVar2->field_011D;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar3 = *psVar14 == *psVar21;
        psVar14 = psVar14 + 1;
        psVar21 = psVar21 + 1;
      } while (bVar3);
      if (!bVar3) {
        psVar14 = (short *)pSVar2->field_0121;
        psVar21 = (short *)pSVar2->field_011D;
        for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(undefined4 *)psVar21 = *(undefined4 *)psVar14;
          psVar14 = psVar14 + 2;
          psVar21 = psVar21 + 2;
        }
        *psVar21 = *psVar14;
        thunk_FUN_0043fc50(CASE_5,0);
      }
    }
    if (DAT_00801688 == (void *)0x0) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    bVar3 = thunk_FUN_004fab10(DAT_00801688,CASE_4);
    if (CONCAT31(extraout_var_21,bVar3) == 0) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    (**(code **)(pSVar2->field_0000 + 0x34))(pSVar2->field_0129);
    iVar4 = 0x17;
    bVar3 = true;
    piVar12 = (int *)pSVar2->field_0129;
    piVar16 = (int *)pSVar2->field_0125;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar3 = *piVar12 == *piVar16;
      piVar12 = piVar12 + 1;
      piVar16 = piVar16 + 1;
    } while (bVar3);
    if (bVar3) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    piVar12 = (int *)pSVar2->field_0129;
    piVar16 = (int *)pSVar2->field_0125;
    for (iVar4 = 0x17; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar16 = *piVar12;
      piVar12 = piVar12 + 1;
      piVar16 = piVar16 + 1;
    }
    GVar25 = CASE_4;
    goto LAB_0041be5f;
  }
  if (uVar5 == 0x1b8) goto LAB_0041bdb3;
  if (uVar5 != 1000) {
    if (uVar5 != 0x3e9) goto LAB_0041b6c6;
    if (DAT_00801688 == (void *)0x0) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    bVar3 = thunk_FUN_004fab10(DAT_00801688,CASE_4);
    if (CONCAT31(extraout_var_09,bVar3) != 0) {
      (**(code **)(pSVar2->field_0000 + 0x34))(pSVar2->field_0129);
      iVar4 = 0x17;
      bVar3 = true;
      piVar12 = (int *)pSVar2->field_0129;
      piVar16 = (int *)pSVar2->field_0125;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar3 = *piVar12 == *piVar16;
        piVar12 = piVar12 + 1;
        piVar16 = piVar16 + 1;
      } while (bVar3);
      if (!bVar3) {
        piVar12 = (int *)pSVar2->field_0129;
        piVar16 = (int *)pSVar2->field_0125;
        for (iVar4 = 0x17; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar16 = *piVar12;
          piVar12 = piVar12 + 1;
          piVar16 = piVar16 + 1;
        }
        thunk_FUN_0043fc50(CASE_4,0);
      }
    }
    if (DAT_00801688 == (void *)0x0) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    bVar3 = thunk_FUN_004fab10(DAT_00801688,CASE_5);
    if (CONCAT31(extraout_var_10,bVar3) == 0) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    (**(code **)(pSVar2->field_0000 + 0x30))(pSVar2->field_0121);
    iVar4 = 0x1b;
    bVar3 = true;
    psVar14 = (short *)pSVar2->field_0121;
    psVar21 = (short *)pSVar2->field_011D;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar3 = *psVar14 == *psVar21;
      psVar14 = psVar14 + 1;
      psVar21 = psVar21 + 1;
    } while (bVar3);
    if (bVar3) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    psVar14 = (short *)pSVar2->field_0121;
    psVar21 = (short *)pSVar2->field_011D;
    for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)psVar21 = *(undefined4 *)psVar14;
      psVar14 = psVar14 + 2;
      psVar21 = psVar21 + 2;
    }
    *psVar21 = *psVar14;
    GVar25 = CASE_5;
    goto LAB_0041be5f;
  }
  if (DAT_00801688 == (void *)0x0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  bVar3 = thunk_FUN_004fab10(DAT_00801688,CASE_4);
  if (CONCAT31(extraout_var_11,bVar3) != 0) {
    (**(code **)(pSVar2->field_0000 + 0x34))(pSVar2->field_0129);
    iVar4 = 0x17;
    bVar3 = true;
    piVar12 = (int *)pSVar2->field_0129;
    piVar16 = (int *)pSVar2->field_0125;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar3 = *piVar12 == *piVar16;
      piVar12 = piVar12 + 1;
      piVar16 = piVar16 + 1;
    } while (bVar3);
    if (!bVar3) {
      piVar12 = (int *)pSVar2->field_0129;
      piVar16 = (int *)pSVar2->field_0125;
      for (iVar4 = 0x17; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar16 = *piVar12;
        piVar12 = piVar12 + 1;
        piVar16 = piVar16 + 1;
      }
      thunk_FUN_0043fc50(CASE_4,0);
    }
  }
  if (DAT_00801688 == (void *)0x0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  bVar3 = thunk_FUN_004fab10(DAT_00801688,CASE_5);
  if (CONCAT31(extraout_var_12,bVar3) != 0) {
    (**(code **)(pSVar2->field_0000 + 0x30))(pSVar2->field_0121);
    iVar4 = 0x1b;
    bVar3 = true;
    psVar14 = (short *)pSVar2->field_0121;
    psVar21 = (short *)pSVar2->field_011D;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar3 = *psVar14 == *psVar21;
      psVar14 = psVar14 + 1;
      psVar21 = psVar21 + 1;
    } while (bVar3);
    if (!bVar3) {
      psVar14 = (short *)pSVar2->field_0121;
      psVar21 = (short *)pSVar2->field_011D;
      for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined4 *)psVar21 = *(undefined4 *)psVar14;
        psVar14 = psVar14 + 2;
        psVar21 = psVar21 + 2;
      }
      *psVar21 = *psVar14;
      thunk_FUN_0043fc50(CASE_5,0);
    }
  }
  if (DAT_00801688 == (void *)0x0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  bVar3 = thunk_FUN_004fab10(DAT_00801688,CASE_6);
  if (CONCAT31(extraout_var_13,bVar3) != 0) {
    puVar8 = &pSVar2->field_0135;
    if ((byte *)pSVar2->field_0135 != (byte *)0x0) {
      FUN_006ae110((byte *)pSVar2->field_0135);
    }
    if ((byte *)pSVar2->field_0139 != (byte *)0x0) {
      FUN_006ae110((byte *)pSVar2->field_0139);
    }
    *puVar8 = 0;
    pSVar2->field_0139 = 0;
    (**(code **)(pSVar2->field_0000 + 0x38))(puVar8);
    bVar3 = false;
    iVar4 = *(int *)(*puVar8 + 0xc);
    if (iVar4 == *(int *)(pSVar2->field_012D + 0xc)) {
      iVar4 = iVar4 * 0x30;
      bVar24 = true;
      pcVar9 = *(char **)(*puVar8 + 0x1c);
      pcVar11 = *(char **)(pSVar2->field_012D + 0x1c);
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar24 = *pcVar9 == *pcVar11;
        pcVar9 = pcVar9 + 1;
        pcVar11 = pcVar11 + 1;
      } while (bVar24);
      if (!bVar24) goto LAB_0041b8f6;
    }
    else {
LAB_0041b8f6:
      bVar3 = true;
    }
    if (!bVar3) {
      iVar4 = *(int *)(pSVar2->field_0139 + 0xc);
      if (iVar4 == *(int *)(pSVar2->field_0131 + 0xc)) {
        iVar4 = iVar4 * 0x30;
        bVar24 = true;
        pcVar9 = *(char **)(pSVar2->field_0139 + 0x1c);
        pcVar11 = *(char **)(pSVar2->field_0131 + 0x1c);
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          bVar24 = *pcVar9 == *pcVar11;
          pcVar9 = pcVar9 + 1;
          pcVar11 = pcVar11 + 1;
        } while (bVar24);
        if (bVar24) goto LAB_0041b92c;
      }
      bVar3 = true;
    }
LAB_0041b92c:
    if (bVar3) {
      if ((byte *)pSVar2->field_012D != (byte *)0x0) {
        FUN_006ae110((byte *)pSVar2->field_012D);
      }
      if ((byte *)pSVar2->field_0131 != (byte *)0x0) {
        FUN_006ae110((byte *)pSVar2->field_0131);
      }
      pSVar2->field_012D = 0;
      pSVar2->field_0131 = 0;
      Library::DKW::TBL::FUN_006afe40(&pSVar2->field_012D,(uint *)pSVar2->field_0135);
      Library::DKW::TBL::FUN_006afe40(&pSVar2->field_0131,(uint *)pSVar2->field_0139);
      GVar25 = CASE_6;
      goto LAB_0041be5f;
    }
  }
  if (DAT_00801688 == (void *)0x0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  bVar3 = thunk_FUN_004fab10(DAT_00801688,CASE_7);
  if (CONCAT31(extraout_var_14,bVar3) != 0) {
    puVar8 = &pSVar2->field_014D;
    if ((byte *)pSVar2->field_014D != (byte *)0x0) {
      FUN_006ae110((byte *)pSVar2->field_014D);
    }
    if ((byte *)pSVar2->field_0151 != (byte *)0x0) {
      FUN_006ae110((byte *)pSVar2->field_0151);
    }
    if ((byte *)pSVar2->field_0155 != (byte *)0x0) {
      FUN_006ae110((byte *)pSVar2->field_0155);
    }
    if ((byte *)pSVar2->field_0159 != (byte *)0x0) {
      FUN_006ae110((byte *)pSVar2->field_0159);
    }
    *puVar8 = 0;
    pSVar2->field_0151 = 0;
    pSVar2->field_0155 = 0;
    pSVar2->field_0159 = 0;
    (**(code **)(pSVar2->field_0000 + 0x3c))(puVar8);
    local_c = (byte *)pSVar2->field_013D;
    bVar3 = false;
    iVar4 = *(int *)(*puVar8 + 0xc);
    if (iVar4 == *(int *)(local_c + 0xc)) {
      iVar4 = iVar4 * 0x30;
      bVar24 = true;
      pcVar9 = *(char **)(*puVar8 + 0x1c);
      pcVar11 = *(char **)(local_c + 0x1c);
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar24 = *pcVar9 == *pcVar11;
        pcVar9 = pcVar9 + 1;
        pcVar11 = pcVar11 + 1;
      } while (bVar24);
      if (!bVar24) goto LAB_0041ba2a;
    }
    else {
LAB_0041ba2a:
      bVar3 = true;
    }
    if (!bVar3) {
      iVar4 = *(int *)(pSVar2->field_0151 + 0xc);
      if (iVar4 == *(int *)(pSVar2->field_0141 + 0xc)) {
        iVar4 = iVar4 * 0x30;
        bVar24 = true;
        pcVar9 = *(char **)(pSVar2->field_0151 + 0x1c);
        pcVar11 = *(char **)(pSVar2->field_0141 + 0x1c);
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          bVar24 = *pcVar9 == *pcVar11;
          pcVar9 = pcVar9 + 1;
          pcVar11 = pcVar11 + 1;
        } while (bVar24);
        if (!bVar24) goto LAB_0041ba5f;
      }
      else {
LAB_0041ba5f:
        bVar3 = true;
      }
      if (!bVar3) {
        iVar4 = *(int *)(pSVar2->field_0155 + 0xc);
        if (iVar4 == *(int *)(pSVar2->field_0145 + 0xc)) {
          iVar4 = iVar4 * 0x30;
          bVar24 = true;
          pcVar9 = *(char **)(pSVar2->field_0155 + 0x1c);
          pcVar11 = *(char **)(pSVar2->field_0145 + 0x1c);
          do {
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            bVar24 = *pcVar9 == *pcVar11;
            pcVar9 = pcVar9 + 1;
            pcVar11 = pcVar11 + 1;
          } while (bVar24);
          if (!bVar24) goto LAB_0041ba90;
        }
        else {
LAB_0041ba90:
          bVar3 = true;
        }
        if (!bVar3) {
          iVar4 = *(int *)(pSVar2->field_0159 + 0xc);
          if (iVar4 == *(int *)(pSVar2->field_0149 + 0xc)) {
            iVar4 = iVar4 * 0x30;
            bVar24 = true;
            pcVar9 = *(char **)(pSVar2->field_0159 + 0x1c);
            pcVar11 = *(char **)(pSVar2->field_0149 + 0x1c);
            do {
              if (iVar4 == 0) break;
              iVar4 = iVar4 + -1;
              bVar24 = *pcVar9 == *pcVar11;
              pcVar9 = pcVar9 + 1;
              pcVar11 = pcVar11 + 1;
            } while (bVar24);
            if (bVar24) goto LAB_0041bac6;
          }
          bVar3 = true;
        }
      }
    }
LAB_0041bac6:
    if (bVar3) {
      if (local_c != (byte *)0x0) {
        FUN_006ae110(local_c);
      }
      if ((byte *)pSVar2->field_0141 != (byte *)0x0) {
        FUN_006ae110((byte *)pSVar2->field_0141);
      }
      if ((byte *)pSVar2->field_0145 != (byte *)0x0) {
        FUN_006ae110((byte *)pSVar2->field_0145);
      }
      if ((byte *)pSVar2->field_0149 != (byte *)0x0) {
        FUN_006ae110((byte *)pSVar2->field_0149);
      }
      pSVar2->field_013D = 0;
      pSVar2->field_0141 = 0;
      pSVar2->field_0145 = 0;
      pSVar2->field_0149 = 0;
      Library::DKW::TBL::FUN_006afe40(&pSVar2->field_013D,(uint *)pSVar2->field_014D);
      Library::DKW::TBL::FUN_006afe40(&pSVar2->field_0141,(uint *)pSVar2->field_0151);
      Library::DKW::TBL::FUN_006afe40(&pSVar2->field_0145,(uint *)pSVar2->field_0155);
      Library::DKW::TBL::FUN_006afe40(&pSVar2->field_0149,(uint *)pSVar2->field_0159);
      GVar25 = CASE_7;
      goto LAB_0041be5f;
    }
  }
  if (DAT_00801688 == (void *)0x0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  bVar3 = thunk_FUN_004fab10(DAT_00801688,CASE_9);
  if (CONCAT31(extraout_var_15,bVar3) != 0) {
    (**(code **)(pSVar2->field_0000 + 0x44))(pSVar2->field_0189);
    iVar4 = 0x129;
    bVar3 = true;
    pcVar9 = (char *)pSVar2->field_0189;
    pcVar11 = (char *)pSVar2->field_0185;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar3 = *pcVar9 == *pcVar11;
      pcVar9 = pcVar9 + 1;
      pcVar11 = pcVar11 + 1;
    } while (bVar3);
    if (!bVar3) {
      pcVar9 = (char *)pSVar2->field_0189;
      pcVar11 = (char *)pSVar2->field_0185;
      for (iVar4 = 0x4a; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar11 = pcVar11 + 4;
      }
      *pcVar11 = *pcVar9;
      thunk_FUN_0043fc50(CASE_9,0);
    }
  }
  if (DAT_00801688 == (void *)0x0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  bVar3 = thunk_FUN_004fab10(DAT_00801688,CASE_A);
  if (CONCAT31(extraout_var_16,bVar3) != 0) {
    (**(code **)(pSVar2->field_0000 + 0x48))(pSVar2->field_0191);
    piVar12 = (int *)pSVar2->field_018D;
    local_c = (byte *)pSVar2->field_0191;
    iVar4 = 4;
    bVar3 = true;
    pbVar15 = local_c;
    piVar16 = piVar12;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar3 = *(int *)pbVar15 == *piVar16;
      pbVar15 = pbVar15 + 4;
      piVar16 = piVar16 + 1;
    } while (bVar3);
    if (!bVar3) {
      *piVar12 = *(int *)local_c;
      piVar12[1] = *(int *)(local_c + 4);
      piVar12[2] = *(int *)(local_c + 8);
      piVar12[3] = *(int *)(local_c + 0xc);
      thunk_FUN_0043fc50(CASE_A,0);
    }
  }
  if (DAT_00801688 == (void *)0x0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  bVar3 = thunk_FUN_004fab10(DAT_00801688,CASE_C);
  if (CONCAT31(extraout_var_17,bVar3) != 0) {
    puVar8 = &pSVar2->field_01A1;
    local_14 = puVar8;
    if ((byte *)pSVar2->field_01A1 != (byte *)0x0) {
      FUN_006ae110((byte *)pSVar2->field_01A1);
      *puVar8 = 0;
    }
    (**(code **)(pSVar2->field_0000 + 0x50))(puVar8);
    pbVar15 = (byte *)pSVar2->field_019D;
    local_c = (byte *)&pSVar2->field_019D;
    local_8 = (char *)0x0;
    iVar4 = *(int *)(*puVar8 + 0xc);
    if (iVar4 == *(int *)(pbVar15 + 0xc)) {
      iVar4 = iVar4 * 0x30;
      bVar3 = true;
      pcVar9 = *(char **)(*puVar8 + 0x1c);
      pcVar11 = *(char **)(pbVar15 + 0x1c);
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar3 = *pcVar9 == *pcVar11;
        pcVar9 = pcVar9 + 1;
        pcVar11 = pcVar11 + 1;
      } while (bVar3);
      if (!bVar3) goto LAB_0041bcad;
    }
    else {
LAB_0041bcad:
      local_8 = (char *)0x1;
    }
    if (local_8 == (char *)0x1) {
      if (pbVar15 != (byte *)0x0) {
        FUN_006ae110(pbVar15);
        local_c[0] = 0;
        local_c[1] = 0;
        local_c[2] = 0;
        local_c[3] = 0;
      }
      Library::DKW::TBL::FUN_006afe40((int *)local_c,(uint *)*local_14);
      GVar25 = CASE_C;
      goto LAB_0041be5f;
    }
  }
  if (DAT_00801688 == (void *)0x0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  bVar3 = thunk_FUN_004fab10(DAT_00801688,CASE_C|CASE_1);
  if (CONCAT31(extraout_var_18,bVar3) != 0) {
    (**(code **)(pSVar2->field_0000 + 0x54))(pSVar2->field_01A9);
    piVar12 = (int *)pSVar2->field_01A5;
    local_14 = (int *)pSVar2->field_01A9;
    iVar4 = 3;
    bVar3 = true;
    piVar16 = local_14;
    piVar22 = piVar12;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar3 = *piVar16 == *piVar22;
      piVar16 = piVar16 + 1;
      piVar22 = piVar22 + 1;
    } while (bVar3);
    if (!bVar3) {
      *piVar12 = *local_14;
      piVar12[1] = local_14[1];
      piVar12[2] = local_14[2];
      thunk_FUN_0043fc50(CASE_D,0);
    }
  }
  if (DAT_00801688 == (void *)0x0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  bVar3 = thunk_FUN_004fab10(DAT_00801688,CASE_F);
  if (CONCAT31(extraout_var_19,bVar3) == 0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  (**(code **)(pSVar2->field_0000 + 0x5c))(pSVar2->field_01B9);
  pcVar9 = (char *)pSVar2->field_01B5;
  pcVar11 = (char *)pSVar2->field_01B9;
  iVar4 = 0xb;
  bVar3 = true;
  pcVar17 = pcVar11;
  pcVar23 = pcVar9;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    bVar3 = *pcVar17 == *pcVar23;
    pcVar17 = pcVar17 + 1;
    pcVar23 = pcVar23 + 1;
  } while (bVar3);
  if (bVar3) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  *(undefined4 *)pcVar9 = *(undefined4 *)pcVar11;
  *(undefined4 *)(pcVar9 + 4) = *(undefined4 *)(pcVar11 + 4);
  *(undefined2 *)(pcVar9 + 8) = *(undefined2 *)(pcVar11 + 8);
  pcVar9[10] = pcVar11[10];
  GVar25 = CASE_F;
LAB_0041be5f:
  thunk_FUN_0043fc50(GVar25,0);
  g_currentExceptionFrame = local_58.previous;
  return 0;
}

