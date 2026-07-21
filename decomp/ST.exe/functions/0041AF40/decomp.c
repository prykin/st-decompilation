#include "../../pseudocode_runtime.h"


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
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  char *pcVar12;
  AnonPointee_STGameObjC_01B1 *pAVar13;
  int *piVar14;
  short *psVar15;
  short *psVar16;
  DArrayTy *pDVar17;
  int *piVar18;
  char *pcVar19;
  undefined4 *puVar20;
  char *pcVar21;
  AnonPointee_STGameObjC_0195 *pAVar22;
  AnonPointee_STGameObjC_01AD *pAVar23;
  short *psVar24;
  short *psVar25;
  dword *pdVar26;
  int *piVar27;
  char *pcVar28;
  bool bVar29;
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
  iVar7 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  pSVar6 = local_10;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar10 = ReportDebugMessage(s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0x7eb,0,iVar7,&DAT_007a4ccc,
                                s_STGameObjC__GetMessage_007a4ecc);
    if (iVar10 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar7,0,s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0x7ec);
    return 0xffff;
  }
  FUN_006e5fd0();
  if (param_1->field_0010 != 0) {
    if (param_1->field_0010 != 2) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    puVar11 = param_1->field_0014;
    if (puVar11 == (undefined4 *)0x0) {
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0x678);
    }
    pSVar6->field_0020 = *puVar11;
    pSVar6->field_0024 = puVar11[1];
    pSVar6->field_002C = puVar11[4];
    pSVar6->field_0028 = puVar11[2];
    iVar7 = pSVar6->field_0018 * DAT_00808754;
    pSVar6->field_001C = iVar7;
    uVar8 = iVar7 * 0x41c64e6d + 0x3039;
    pSVar6->field_001C = uVar8;
    pSVar6->field_00F8 = (short)((ulonglong)(uVar8 >> 0x10) % 0x1f) + 0x1e;
    (*pSVar6->vtable->vfunc_CC)();
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  if (-1 < *(int *)&pSVar6->field_0x8f) {
    *(int *)&pSVar6->field_0x8f = *(int *)&pSVar6->field_0x8f + 1;
  }
  (*pSVar6->vtable->vfunc_D0)();
  if (pSVar6->field_01CD != 1) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  uVar8 = pSVar6->field_0020;
  if (uVar8 < 0x1af) {
    if (uVar8 == 0x1ae) {
      if (g_cPanel_00801688 == (CPanelTy *)0x0) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      iVar7 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_1);
      if (iVar7 != 0) {
        (*pSVar6->vtable->vfunc_30)(pSVar6->field_0121);
        iVar7 = 0x1b;
        bVar30 = true;
        psVar16 = (short *)pSVar6->field_0121;
        psVar25 = (short *)pSVar6->field_011D;
        do {
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          bVar30 = *psVar16 == *psVar25;
          psVar16 = psVar16 + 1;
          psVar25 = psVar25 + 1;
        } while (bVar30);
        if (!bVar30) {
          psVar16 = (short *)pSVar6->field_0121;
          psVar25 = (short *)pSVar6->field_011D;
          for (iVar7 = 0xd; iVar7 != 0; iVar7 = iVar7 + -1) {
            *(undefined4 *)psVar25 = *(undefined4 *)psVar16;
            psVar16 = psVar16 + 2;
            psVar25 = psVar25 + 2;
          }
          *psVar25 = *psVar16;
          thunk_FUN_0043fc50(CASE_1,0);
        }
      }
      if (g_cPanel_00801688 == (CPanelTy *)0x0) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      iVar7 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_2);
      if (iVar7 != 0) {
        (*pSVar6->vtable->vfunc_34)(pSVar6->field_0129);
        iVar7 = 0x17;
        bVar30 = true;
        piVar14 = (int *)pSVar6->field_0129;
        piVar18 = (int *)pSVar6->field_0125;
        do {
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          bVar30 = *piVar14 == *piVar18;
          piVar14 = piVar14 + 1;
          piVar18 = piVar18 + 1;
        } while (bVar30);
        if (!bVar30) {
          piVar14 = (int *)pSVar6->field_0129;
          piVar18 = (int *)pSVar6->field_0125;
          for (iVar7 = 0x17; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar18 = *piVar14;
            piVar14 = piVar14 + 1;
            piVar18 = piVar18 + 1;
          }
          thunk_FUN_0043fc50(CASE_2,0);
        }
      }
      if (g_cPanel_00801688 == (CPanelTy *)0x0) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      iVar7 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_E);
      if (iVar7 != 0) {
        (*pSVar6->vtable->vfunc_58)(pSVar6->field_01B1);
        pAVar3 = pSVar6->field_01AD;
        local_8 = (AnonShape_0041AF40_EF4C5356 *)pSVar6->field_01B1;
        iVar7 = 0xb;
        bVar30 = true;
        pAVar13 = (AnonPointee_STGameObjC_01B1 *)local_8;
        pAVar23 = pAVar3;
        do {
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          bVar30 = *(char *)&pAVar13->field_0000 == *(char *)&pAVar23->field_0000;
          pAVar13 = (AnonPointee_STGameObjC_01B1 *)((int)&pAVar13->field_0000 + 1);
          pAVar23 = (AnonPointee_STGameObjC_01AD *)((int)&pAVar23->field_0000 + 1);
        } while (bVar30);
        if (!bVar30) {
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
      iVar7 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_12);
      if (iVar7 == 0) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      (*pSVar6->vtable->vfunc_64)(pSVar6->field_01C9);
      psVar16 = (short *)pSVar6->field_01C5;
      psVar25 = (short *)pSVar6->field_01C9;
      iVar7 = 3;
      bVar30 = true;
      psVar15 = psVar25;
      psVar24 = psVar16;
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        bVar30 = *psVar15 == *psVar24;
        psVar15 = psVar15 + 1;
        psVar24 = psVar24 + 1;
      } while (bVar30);
      if (bVar30) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      *(undefined4 *)psVar16 = *(undefined4 *)psVar25;
      psVar16[2] = psVar25[2];
      GVar31 = CASE_12;
      goto cf_common_exit_0041BE5F;
    }
    if (uVar8 < 0x173) {
      if (uVar8 != 0x172) {
        if (uVar8 == 0x14) {
          if ((g_cPanel_00801688 != (CPanelTy *)0x0) &&
             (iVar7 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_1), iVar7 != 0)) {
            (*pSVar6->vtable->vfunc_30)(pSVar6->field_0121);
            iVar7 = 0x1b;
            bVar30 = true;
            psVar16 = (short *)pSVar6->field_0121;
            psVar25 = (short *)pSVar6->field_011D;
            do {
              if (iVar7 == 0) break;
              iVar7 = iVar7 + -1;
              bVar30 = *psVar16 == *psVar25;
              psVar16 = psVar16 + 1;
              psVar25 = psVar25 + 1;
            } while (bVar30);
            if (!bVar30) {
              uVar8 = STAllPlayersC::GetNInTmp(0,0);
              if ((short)uVar8 == 1) {
                puVar11 = (undefined4 *)pSVar6->field_0121;
              }
              else {
                puVar11 = (undefined4 *)pSVar6->field_0121;
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                if (*(char *)((int)puVar11 + 0x1b) == *(char *)(pSVar6->field_011D + 0x1b)) {
                  iVar7 = 5;
                  bVar30 = true;
                  pcVar12 = (char *)((int)puVar11 + 0x2a);
                  pcVar21 = (char *)(pSVar6->field_011D + 0x2a);
                  do {
                    if (iVar7 == 0) break;
                    iVar7 = iVar7 + -1;
                    bVar30 = *pcVar12 == *pcVar21;
                    pcVar12 = pcVar12 + 1;
                    pcVar21 = pcVar21 + 1;
                  } while (bVar30);
                  if (bVar30) goto LAB_0041b128;
                }
              }
              puVar20 = (undefined4 *)pSVar6->field_011D;
              for (iVar7 = 0xd; iVar7 != 0; iVar7 = iVar7 + -1) {
                *puVar20 = *puVar11;
                puVar11 = puVar11 + 1;
                puVar20 = puVar20 + 1;
              }
              *(undefined2 *)puVar20 = *(undefined2 *)puVar11;
              thunk_FUN_0043fc50(CASE_1,0);
            }
          }
LAB_0041b128:
          if ((g_cPanel_00801688 != (CPanelTy *)0x0) &&
             (iVar7 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_2), iVar7 != 0)) {
            (*pSVar6->vtable->vfunc_34)(pSVar6->field_0129);
            iVar7 = 0x17;
            bVar30 = true;
            piVar14 = (int *)pSVar6->field_0129;
            piVar18 = (int *)pSVar6->field_0125;
            do {
              if (iVar7 == 0) break;
              iVar7 = iVar7 + -1;
              bVar30 = *piVar14 == *piVar18;
              piVar14 = piVar14 + 1;
              piVar18 = piVar18 + 1;
            } while (bVar30);
            if (!bVar30) {
              piVar14 = (int *)pSVar6->field_0129;
              piVar18 = (int *)pSVar6->field_0125;
              for (iVar7 = 0x17; iVar7 != 0; iVar7 = iVar7 + -1) {
                *piVar18 = *piVar14;
                piVar14 = piVar14 + 1;
                piVar18 = piVar18 + 1;
              }
              thunk_FUN_0043fc50(CASE_2,0);
            }
          }
          if ((g_cPanel_00801688 != (CPanelTy *)0x0) &&
             (iVar7 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_8), iVar7 != 0)) {
            puVar11 = &pSVar6->field_0171;
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
            *puVar11 = 0;
            pSVar6->field_0175 = 0;
            pSVar6->field_0179 = 0;
            pSVar6->field_017D = 0;
            pSVar6->field_0181 = 0;
            (*pSVar6->vtable->vfunc_40)(puVar11);
            local_c = (DArrayTy *)pSVar6->field_015D;
            bVar30 = false;
            dVar1 = *(dword *)(*puVar11 + 0xc);
            if (dVar1 == local_c->count) {
              iVar7 = dVar1 * 0x30;
              bVar29 = true;
              pcVar12 = *(char **)(*puVar11 + 0x1c);
              pcVar21 = local_c->data;
              do {
                if (iVar7 == 0) break;
                iVar7 = iVar7 + -1;
                bVar29 = *pcVar12 == *pcVar21;
                pcVar12 = pcVar12 + 1;
                pcVar21 = pcVar21 + 1;
              } while (bVar29);
              if (!bVar29) goto LAB_0041b237;
            }
            else {
LAB_0041b237:
              bVar30 = true;
            }
            if (!bVar30) {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              iVar7 = *(int *)(pSVar6->field_0175 + 0xc);
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              if (iVar7 == *(int *)(pSVar6->field_0161 + 0xc)) {
                iVar7 = iVar7 * 0x30;
                bVar29 = true;
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                pcVar12 = *(char **)(pSVar6->field_0175 + 0x1c);
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                pcVar21 = *(char **)(pSVar6->field_0161 + 0x1c);
                do {
                  if (iVar7 == 0) break;
                  iVar7 = iVar7 + -1;
                  bVar29 = *pcVar12 == *pcVar21;
                  pcVar12 = pcVar12 + 1;
                  pcVar21 = pcVar21 + 1;
                } while (bVar29);
                if (!bVar29) goto LAB_0041b26c;
              }
              else {
LAB_0041b26c:
                bVar30 = true;
              }
              if (!bVar30) {
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                iVar7 = *(int *)(pSVar6->field_0179 + 0xc);
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                if (iVar7 == *(int *)(pSVar6->field_0165 + 0xc)) {
                  iVar7 = iVar7 * 0x30;
                  bVar29 = true;
                  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                  pcVar12 = *(char **)(pSVar6->field_0179 + 0x1c);
                  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                  pcVar21 = *(char **)(pSVar6->field_0165 + 0x1c);
                  do {
                    if (iVar7 == 0) break;
                    iVar7 = iVar7 + -1;
                    bVar29 = *pcVar12 == *pcVar21;
                    pcVar12 = pcVar12 + 1;
                    pcVar21 = pcVar21 + 1;
                  } while (bVar29);
                  if (!bVar29) goto LAB_0041b2a1;
                }
                else {
LAB_0041b2a1:
                  bVar30 = true;
                }
                if (!bVar30) {
                  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                  iVar7 = *(int *)(pSVar6->field_017D + 0xc);
                  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                  if (iVar7 == *(int *)(pSVar6->field_0169 + 0xc)) {
                    iVar7 = iVar7 * 0x30;
                    bVar29 = true;
                    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                    pcVar12 = *(char **)(pSVar6->field_017D + 0x1c);
                    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                    pcVar21 = *(char **)(pSVar6->field_0169 + 0x1c);
                    do {
                      if (iVar7 == 0) break;
                      iVar7 = iVar7 + -1;
                      bVar29 = *pcVar12 == *pcVar21;
                      pcVar12 = pcVar12 + 1;
                      pcVar21 = pcVar21 + 1;
                    } while (bVar29);
                    if (!bVar29) goto LAB_0041b2d2;
                  }
                  else {
LAB_0041b2d2:
                    bVar30 = true;
                  }
                  if (!bVar30) {
                    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                    iVar7 = *(int *)(pSVar6->field_0181 + 0xc);
                    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                    if (iVar7 == *(int *)(pSVar6->field_016D + 0xc)) {
                      iVar7 = iVar7 * 0x30;
                      bVar29 = true;
                      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                      pcVar12 = *(char **)(pSVar6->field_0181 + 0x1c);
                      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                      pcVar21 = *(char **)(pSVar6->field_016D + 0x1c);
                      do {
                        if (iVar7 == 0) break;
                        iVar7 = iVar7 + -1;
                        bVar29 = *pcVar12 == *pcVar21;
                        pcVar12 = pcVar12 + 1;
                        pcVar21 = pcVar21 + 1;
                      } while (bVar29);
                      if (bVar29) goto LAB_0041b308;
                    }
                    bVar30 = true;
                  }
                }
              }
            }
LAB_0041b308:
            if (bVar30) {
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
             (iVar7 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_B), iVar7 != 0)) {
            (*pSVar6->vtable->vfunc_4C)(pSVar6->field_0199);
            pAVar2 = pSVar6->field_0195;
            local_c = (DArrayTy *)pSVar6->field_0199;
            iVar7 = 0x13;
            bVar30 = true;
            pDVar17 = local_c;
            pAVar22 = pAVar2;
            do {
              if (iVar7 == 0) break;
              iVar7 = iVar7 + -1;
              bVar30 = (char)pDVar17->flags == *(char *)&pAVar22->field_0000;
              pDVar17 = (DArrayTy *)((int)&pDVar17->flags + 1);
              pAVar22 = (AnonPointee_STGameObjC_0195 *)((int)&pAVar22->field_0000 + 1);
            } while (bVar30);
            if (!bVar30) {
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
             (iVar7 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_E), iVar7 != 0)) {
            (*pSVar6->vtable->vfunc_58)(pSVar6->field_01B1);
            pAVar3 = pSVar6->field_01AD;
            local_8 = (AnonShape_0041AF40_EF4C5356 *)pSVar6->field_01B1;
            iVar7 = 0xb;
            bVar30 = true;
            pAVar13 = (AnonPointee_STGameObjC_01B1 *)local_8;
            pAVar23 = pAVar3;
            do {
              if (iVar7 == 0) break;
              iVar7 = iVar7 + -1;
              bVar30 = *(char *)&pAVar13->field_0000 == *(char *)&pAVar23->field_0000;
              pAVar13 = (AnonPointee_STGameObjC_01B1 *)((int)&pAVar13->field_0000 + 1);
              pAVar23 = (AnonPointee_STGameObjC_01AD *)((int)&pAVar23->field_0000 + 1);
            } while (bVar30);
            if (!bVar30) {
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
          iVar7 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_10);
          if (iVar7 == 0) {
            g_currentExceptionFrame = local_58.previous;
            return 0;
          }
          (*pSVar6->vtable->vfunc_60)(pSVar6->field_01C1);
          iVar7 = 0x90;
          bVar30 = true;
          piVar14 = (int *)pSVar6->field_01C1;
          piVar18 = (int *)pSVar6->field_01BD;
          do {
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            bVar30 = *piVar14 == *piVar18;
            piVar14 = piVar14 + 1;
            piVar18 = piVar18 + 1;
          } while (bVar30);
          if (bVar30) {
            g_currentExceptionFrame = local_58.previous;
            return 0;
          }
          piVar14 = (int *)pSVar6->field_01C1;
          piVar18 = (int *)pSVar6->field_01BD;
          for (iVar7 = 0x90; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar18 = *piVar14;
            piVar14 = piVar14 + 1;
            piVar18 = piVar18 + 1;
          }
          GVar31 = CASE_10;
          goto cf_common_exit_0041BE5F;
        }
        if (uVar8 != 0x5a) goto cf_common_exit_0041B6C6;
      }
    }
    else if (uVar8 != 0x1a4) {
cf_common_exit_0041B6C6:
      iVar7 = ReportDebugMessage(s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0x7e4,0,0,&DAT_007a4ccc,
                                 s_STGameObjC__GetMessagge_MESS_ID__007a4ee8);
      if (iVar7 == 0) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
LAB_0041bdb3:
    if (g_cPanel_00801688 == (CPanelTy *)0x0) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    iVar7 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_5);
    if (iVar7 != 0) {
      (*pSVar6->vtable->vfunc_30)(pSVar6->field_0121);
      iVar7 = 0x1b;
      bVar30 = true;
      psVar16 = (short *)pSVar6->field_0121;
      psVar25 = (short *)pSVar6->field_011D;
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        bVar30 = *psVar16 == *psVar25;
        psVar16 = psVar16 + 1;
        psVar25 = psVar25 + 1;
      } while (bVar30);
      if (!bVar30) {
        psVar16 = (short *)pSVar6->field_0121;
        psVar25 = (short *)pSVar6->field_011D;
        for (iVar7 = 0xd; iVar7 != 0; iVar7 = iVar7 + -1) {
          *(undefined4 *)psVar25 = *(undefined4 *)psVar16;
          psVar16 = psVar16 + 2;
          psVar25 = psVar25 + 2;
        }
        *psVar25 = *psVar16;
        thunk_FUN_0043fc50(CASE_5,0);
      }
    }
    if (g_cPanel_00801688 == (CPanelTy *)0x0) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    iVar7 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_4);
    if (iVar7 == 0) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    (*pSVar6->vtable->vfunc_34)(pSVar6->field_0129);
    iVar7 = 0x17;
    bVar30 = true;
    piVar14 = (int *)pSVar6->field_0129;
    piVar18 = (int *)pSVar6->field_0125;
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      bVar30 = *piVar14 == *piVar18;
      piVar14 = piVar14 + 1;
      piVar18 = piVar18 + 1;
    } while (bVar30);
    if (bVar30) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    piVar14 = (int *)pSVar6->field_0129;
    piVar18 = (int *)pSVar6->field_0125;
    for (iVar7 = 0x17; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar18 = *piVar14;
      piVar14 = piVar14 + 1;
      piVar18 = piVar18 + 1;
    }
    GVar31 = CASE_4;
    goto cf_common_exit_0041BE5F;
  }
  if (uVar8 == 0x1b8) goto LAB_0041bdb3;
  if (uVar8 != 1000) {
    if (uVar8 != 0x3e9) goto cf_common_exit_0041B6C6;
    if (g_cPanel_00801688 == (CPanelTy *)0x0) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    iVar7 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_4);
    if (iVar7 != 0) {
      (*pSVar6->vtable->vfunc_34)(pSVar6->field_0129);
      iVar7 = 0x17;
      bVar30 = true;
      piVar14 = (int *)pSVar6->field_0129;
      piVar18 = (int *)pSVar6->field_0125;
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        bVar30 = *piVar14 == *piVar18;
        piVar14 = piVar14 + 1;
        piVar18 = piVar18 + 1;
      } while (bVar30);
      if (!bVar30) {
        piVar14 = (int *)pSVar6->field_0129;
        piVar18 = (int *)pSVar6->field_0125;
        for (iVar7 = 0x17; iVar7 != 0; iVar7 = iVar7 + -1) {
          *piVar18 = *piVar14;
          piVar14 = piVar14 + 1;
          piVar18 = piVar18 + 1;
        }
        thunk_FUN_0043fc50(CASE_4,0);
      }
    }
    if (g_cPanel_00801688 == (CPanelTy *)0x0) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    iVar7 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_5);
    if (iVar7 == 0) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    (*pSVar6->vtable->vfunc_30)(pSVar6->field_0121);
    iVar7 = 0x1b;
    bVar30 = true;
    psVar16 = (short *)pSVar6->field_0121;
    psVar25 = (short *)pSVar6->field_011D;
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      bVar30 = *psVar16 == *psVar25;
      psVar16 = psVar16 + 1;
      psVar25 = psVar25 + 1;
    } while (bVar30);
    if (bVar30) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    psVar16 = (short *)pSVar6->field_0121;
    psVar25 = (short *)pSVar6->field_011D;
    for (iVar7 = 0xd; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)psVar25 = *(undefined4 *)psVar16;
      psVar16 = psVar16 + 2;
      psVar25 = psVar25 + 2;
    }
    *psVar25 = *psVar16;
    GVar31 = CASE_5;
    goto cf_common_exit_0041BE5F;
  }
  if (g_cPanel_00801688 == (CPanelTy *)0x0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  iVar7 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_4);
  if (iVar7 != 0) {
    (*pSVar6->vtable->vfunc_34)(pSVar6->field_0129);
    iVar7 = 0x17;
    bVar30 = true;
    piVar14 = (int *)pSVar6->field_0129;
    piVar18 = (int *)pSVar6->field_0125;
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      bVar30 = *piVar14 == *piVar18;
      piVar14 = piVar14 + 1;
      piVar18 = piVar18 + 1;
    } while (bVar30);
    if (!bVar30) {
      piVar14 = (int *)pSVar6->field_0129;
      piVar18 = (int *)pSVar6->field_0125;
      for (iVar7 = 0x17; iVar7 != 0; iVar7 = iVar7 + -1) {
        *piVar18 = *piVar14;
        piVar14 = piVar14 + 1;
        piVar18 = piVar18 + 1;
      }
      thunk_FUN_0043fc50(CASE_4,0);
    }
  }
  if (g_cPanel_00801688 == (CPanelTy *)0x0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  iVar7 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_5);
  if (iVar7 != 0) {
    (*pSVar6->vtable->vfunc_30)(pSVar6->field_0121);
    iVar7 = 0x1b;
    bVar30 = true;
    psVar16 = (short *)pSVar6->field_0121;
    psVar25 = (short *)pSVar6->field_011D;
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      bVar30 = *psVar16 == *psVar25;
      psVar16 = psVar16 + 1;
      psVar25 = psVar25 + 1;
    } while (bVar30);
    if (!bVar30) {
      psVar16 = (short *)pSVar6->field_0121;
      psVar25 = (short *)pSVar6->field_011D;
      for (iVar7 = 0xd; iVar7 != 0; iVar7 = iVar7 + -1) {
        *(undefined4 *)psVar25 = *(undefined4 *)psVar16;
        psVar16 = psVar16 + 2;
        psVar25 = psVar25 + 2;
      }
      *psVar25 = *psVar16;
      thunk_FUN_0043fc50(CASE_5,0);
    }
  }
  if (g_cPanel_00801688 == (CPanelTy *)0x0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  iVar7 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_6);
  if (iVar7 != 0) {
    puVar11 = &pSVar6->field_0135;
    if ((DArrayTy *)pSVar6->field_0135 != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)pSVar6->field_0135);
    }
    if ((DArrayTy *)pSVar6->field_0139 != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)pSVar6->field_0139);
    }
    *puVar11 = 0;
    pSVar6->field_0139 = 0;
    (*pSVar6->vtable->vfunc_38)(puVar11);
    bVar30 = false;
    iVar7 = *(int *)(*puVar11 + 0xc);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (iVar7 == *(int *)(pSVar6->field_012D + 0xc)) {
      iVar7 = iVar7 * 0x30;
      bVar29 = true;
      pcVar12 = *(char **)(*puVar11 + 0x1c);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      pcVar21 = *(char **)(pSVar6->field_012D + 0x1c);
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        bVar29 = *pcVar12 == *pcVar21;
        pcVar12 = pcVar12 + 1;
        pcVar21 = pcVar21 + 1;
      } while (bVar29);
      if (!bVar29) goto LAB_0041b8f6;
    }
    else {
LAB_0041b8f6:
      bVar30 = true;
    }
    if (!bVar30) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar7 = *(int *)(pSVar6->field_0139 + 0xc);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (iVar7 == *(int *)(pSVar6->field_0131 + 0xc)) {
        iVar7 = iVar7 * 0x30;
        bVar29 = true;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        pcVar12 = *(char **)(pSVar6->field_0139 + 0x1c);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        pcVar21 = *(char **)(pSVar6->field_0131 + 0x1c);
        do {
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          bVar29 = *pcVar12 == *pcVar21;
          pcVar12 = pcVar12 + 1;
          pcVar21 = pcVar21 + 1;
        } while (bVar29);
        if (bVar29) goto LAB_0041b92c;
      }
      bVar30 = true;
    }
LAB_0041b92c:
    if (bVar30) {
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
  iVar7 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_7);
  if (iVar7 != 0) {
    puVar11 = &pSVar6->field_014D;
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
    *puVar11 = 0;
    pSVar6->field_0151 = 0;
    pSVar6->field_0155 = 0;
    pSVar6->field_0159 = 0;
    (*pSVar6->vtable->vfunc_3C)(puVar11);
    local_c = (DArrayTy *)pSVar6->field_013D;
    bVar30 = false;
    dVar1 = *(dword *)(*puVar11 + 0xc);
    if (dVar1 == local_c->count) {
      iVar7 = dVar1 * 0x30;
      bVar29 = true;
      pcVar12 = *(char **)(*puVar11 + 0x1c);
      pcVar21 = local_c->data;
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        bVar29 = *pcVar12 == *pcVar21;
        pcVar12 = pcVar12 + 1;
        pcVar21 = pcVar21 + 1;
      } while (bVar29);
      if (!bVar29) goto LAB_0041ba2a;
    }
    else {
LAB_0041ba2a:
      bVar30 = true;
    }
    if (!bVar30) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar7 = *(int *)(pSVar6->field_0151 + 0xc);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (iVar7 == *(int *)(pSVar6->field_0141 + 0xc)) {
        iVar7 = iVar7 * 0x30;
        bVar29 = true;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        pcVar12 = *(char **)(pSVar6->field_0151 + 0x1c);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        pcVar21 = *(char **)(pSVar6->field_0141 + 0x1c);
        do {
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          bVar29 = *pcVar12 == *pcVar21;
          pcVar12 = pcVar12 + 1;
          pcVar21 = pcVar21 + 1;
        } while (bVar29);
        if (!bVar29) goto LAB_0041ba5f;
      }
      else {
LAB_0041ba5f:
        bVar30 = true;
      }
      if (!bVar30) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar7 = *(int *)(pSVar6->field_0155 + 0xc);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (iVar7 == *(int *)(pSVar6->field_0145 + 0xc)) {
          iVar7 = iVar7 * 0x30;
          bVar29 = true;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          pcVar12 = *(char **)(pSVar6->field_0155 + 0x1c);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          pcVar21 = *(char **)(pSVar6->field_0145 + 0x1c);
          do {
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            bVar29 = *pcVar12 == *pcVar21;
            pcVar12 = pcVar12 + 1;
            pcVar21 = pcVar21 + 1;
          } while (bVar29);
          if (!bVar29) goto LAB_0041ba90;
        }
        else {
LAB_0041ba90:
          bVar30 = true;
        }
        if (!bVar30) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          iVar7 = *(int *)(pSVar6->field_0159 + 0xc);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if (iVar7 == *(int *)(pSVar6->field_0149 + 0xc)) {
            iVar7 = iVar7 * 0x30;
            bVar29 = true;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            pcVar12 = *(char **)(pSVar6->field_0159 + 0x1c);
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            pcVar21 = *(char **)(pSVar6->field_0149 + 0x1c);
            do {
              if (iVar7 == 0) break;
              iVar7 = iVar7 + -1;
              bVar29 = *pcVar12 == *pcVar21;
              pcVar12 = pcVar12 + 1;
              pcVar21 = pcVar21 + 1;
            } while (bVar29);
            if (bVar29) goto LAB_0041bac6;
          }
          bVar30 = true;
        }
      }
    }
LAB_0041bac6:
    if (bVar30) {
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
  iVar7 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_9);
  if (iVar7 != 0) {
    (*pSVar6->vtable->vfunc_44)(pSVar6->field_0189);
    iVar7 = 0x129;
    bVar30 = true;
    pcVar12 = (char *)pSVar6->field_0189;
    pcVar21 = (char *)pSVar6->field_0185;
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      bVar30 = *pcVar12 == *pcVar21;
      pcVar12 = pcVar12 + 1;
      pcVar21 = pcVar21 + 1;
    } while (bVar30);
    if (!bVar30) {
      pcVar12 = (char *)pSVar6->field_0189;
      pcVar21 = (char *)pSVar6->field_0185;
      for (iVar7 = 0x4a; iVar7 != 0; iVar7 = iVar7 + -1) {
        *(undefined4 *)pcVar21 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar21 = pcVar21 + 4;
      }
      *pcVar21 = *pcVar12;
      thunk_FUN_0043fc50(CASE_9,0);
    }
  }
  if (g_cPanel_00801688 == (CPanelTy *)0x0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  iVar7 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_A);
  if (iVar7 != 0) {
    (*pSVar6->vtable->vfunc_48)(pSVar6->field_0191);
    pdVar4 = (dword *)pSVar6->field_018D;
    local_c = (DArrayTy *)pSVar6->field_0191;
    iVar7 = 4;
    bVar30 = true;
    pDVar17 = local_c;
    pdVar26 = pdVar4;
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      bVar30 = pDVar17->flags == *pdVar26;
      pDVar17 = (DArrayTy *)&pDVar17->iteratorIndex;
      pdVar26 = pdVar26 + 1;
    } while (bVar30);
    if (!bVar30) {
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
  iVar7 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_C);
  if (iVar7 != 0) {
    puVar11 = &pSVar6->field_01A1;
    local_14 = puVar11;
    if ((DArrayTy *)pSVar6->field_01A1 != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)pSVar6->field_01A1);
      *puVar11 = 0;
    }
    (*pSVar6->vtable->vfunc_50)(puVar11);
    pDVar17 = (DArrayTy *)pSVar6->field_019D;
    local_c = (DArrayTy *)&pSVar6->field_019D;
    local_8 = (AnonShape_0041AF40_EF4C5356 *)0x0;
    dVar1 = *(dword *)(*puVar11 + 0xc);
    if (dVar1 == pDVar17->count) {
      iVar7 = dVar1 * 0x30;
      bVar30 = true;
      pcVar12 = *(char **)(*puVar11 + 0x1c);
      pcVar21 = pDVar17->data;
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        bVar30 = *pcVar12 == *pcVar21;
        pcVar12 = pcVar12 + 1;
        pcVar21 = pcVar21 + 1;
      } while (bVar30);
      if (!bVar30) goto LAB_0041bcad;
    }
    else {
LAB_0041bcad:
      local_8 = (AnonShape_0041AF40_EF4C5356 *)0x1;
    }
    if (local_8 == (AnonShape_0041AF40_EF4C5356 *)0x1) {
      if (pDVar17 != (DArrayTy *)0x0) {
        DArrayDestroy(pDVar17);
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
  iVar7 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_C|CASE_1);
  if (iVar7 != 0) {
    (*pSVar6->vtable->vfunc_54)(pSVar6->field_01A9);
    piVar14 = (int *)pSVar6->field_01A5;
    local_14 = (int *)pSVar6->field_01A9;
    iVar7 = 3;
    bVar30 = true;
    piVar18 = local_14;
    piVar27 = piVar14;
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      bVar30 = *piVar18 == *piVar27;
      piVar18 = piVar18 + 1;
      piVar27 = piVar27 + 1;
    } while (bVar30);
    if (!bVar30) {
      *piVar14 = *local_14;
      piVar14[1] = local_14[1];
      piVar14[2] = local_14[2];
      thunk_FUN_0043fc50(CASE_D,0);
    }
  }
  if (g_cPanel_00801688 == (CPanelTy *)0x0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  iVar7 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_F);
  if (iVar7 == 0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  (*pSVar6->vtable->vfunc_5C)(pSVar6->field_01B9);
  pcVar12 = (char *)pSVar6->field_01B5;
  pcVar21 = (char *)pSVar6->field_01B9;
  iVar7 = 0xb;
  bVar30 = true;
  pcVar19 = pcVar21;
  pcVar28 = pcVar12;
  do {
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    bVar30 = *pcVar19 == *pcVar28;
    pcVar19 = pcVar19 + 1;
    pcVar28 = pcVar28 + 1;
  } while (bVar30);
  if (bVar30) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  *(undefined4 *)pcVar12 = *(undefined4 *)pcVar21;
  *(undefined4 *)(pcVar12 + 4) = *(undefined4 *)(pcVar21 + 4);
  *(undefined2 *)(pcVar12 + 8) = *(undefined2 *)(pcVar21 + 8);
  pcVar12[10] = pcVar21[10];
  GVar31 = CASE_F;
cf_common_exit_0041BE5F:
  thunk_FUN_0043fc50(GVar31,0);
  g_currentExceptionFrame = local_58.previous;
  return 0;
}

