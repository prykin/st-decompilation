#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tc_gobj.cpp
   STGameObjC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00403EBD|0041AF40; family_names=STGameObjC::GetMessage; ret4=3;
   direct_offsets={10:6,14:1,18:1,1c:26} */

int __thiscall STGameObjC::GetMessage(STGameObjC *this,STMessage *message)

{
  uint *puVar1;
  dword dVar2;
  AnonPointee_STGameObjC_0195 *pAVar3;
  AnonPointee_STGameObjC_01AD *pAVar4;
  ushort *puVar5;
  ushort *puVar6;
  AnonPointee_STGameObjC_018D *pAVar7;
  AnonPointee_STGameObjC_01A5 *pAVar8;
  AnonPointee_STGameObjC_01B5 *pAVar9;
  AnonPointee_STGameObjC_01B9 *pAVar10;
  code *pcVar11;
  STGameObjC *pSVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined4 *puVar16;
  char *pcVar17;
  AnonPointee_STGameObjC_01B1 *pAVar18;
  int *piVar19;
  ushort *puVar20;
  short *psVar21;
  DArrayTy *pDVar22;
  AnonPointee_STGameObjC_01A9 *pAVar23;
  AnonPointee_STGameObjC_01B9 *pAVar24;
  undefined4 *puVar25;
  char *pcVar26;
  AnonPointee_STGameObjC_0195 *pAVar27;
  AnonPointee_STGameObjC_01AD *pAVar28;
  int *piVar29;
  ushort *puVar30;
  short *psVar31;
  AnonPointee_STGameObjC_018D *pAVar32;
  AnonPointee_STGameObjC_01A5 *pAVar33;
  AnonPointee_STGameObjC_01B5 *pAVar34;
  bool bVar35;
  bool bVar36;
  Global_sub_0043FC50_param_1Enum GVar37;
  InternalExceptionFrame local_58;
  AnonPointee_STGameObjC_01A9 *local_14;
  STGameObjC *local_10;
  DArrayTy *local_c;
  AnonShape_0041AF40_EF4C5356 *local_8;

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_10 = this;
  iVar13 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  pSVar12 = local_10;
  if (iVar13 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar15 = ReportDebugMessage("E:\\__titans\\wlad\\Tc_gobj.cpp",0x7eb,0,iVar13,"%s"
                                ,"STGameObjC::GetMessage");
    if (iVar15 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar13,0,"E:\\__titans\\wlad\\Tc_gobj.cpp",0x7ec);
    return 0xffff;
  }
  FUN_006e5fd0(local_10,message);
  if (message->id != MESS_ID_NONE) {
    if (message->id != MESS_ID_CREATE) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    puVar1 = (message->arg0).ptr;
    if (puVar1 == (uint *)0x0) {
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\Tc_gobj.cpp",0x678);
    }
    pSVar12->field_0020 = *puVar1;
    pSVar12->field_0024 = puVar1[1];
    pSVar12->field_002C = puVar1[4];
    pSVar12->field_0028 = puVar1[2];
    iVar13 = pSVar12->field_0018 * DAT_00808754;
    pSVar12->field_001C = iVar13;
    uVar14 = iVar13 * 0x41c64e6d + 0x3039;
    pSVar12->field_001C = uVar14;
    pSVar12->field_00F8 = (short)((ulonglong)(uVar14 >> 0x10) % 0x1f) + 0x1e;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (*(code *)pSVar12->vtable->field_00CC)();
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  if (-1 < pSVar12->field_008F) {
    pSVar12->field_008F = pSVar12->field_008F + 1;
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(pSVar12->vtable + 1))();
  if (pSVar12->field_01CD != 1) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  uVar14 = pSVar12->field_0020;
  if (uVar14 < 0x1af) {
    if (uVar14 == 0x1ae) {
      if (g_cPanel_00801688 == (CPanelTy *)0x0) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      iVar13 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_1);
      if (iVar13 != 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (*(code *)pSVar12->vtable->field_0030)(pSVar12->field_0121);
        iVar13 = 0x1b;
        bVar36 = true;
        psVar21 = (short *)pSVar12->field_0121;
        psVar31 = (short *)pSVar12->field_011D;
        do {
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          bVar36 = *psVar21 == *psVar31;
          psVar21 = psVar21 + 1;
          psVar31 = psVar31 + 1;
        } while (bVar36);
        if (!bVar36) {
          psVar21 = (short *)pSVar12->field_0121;
          psVar31 = (short *)pSVar12->field_011D;
          for (iVar13 = 0xd; iVar13 != 0; iVar13 = iVar13 + -1) {
            *(undefined4 *)psVar31 = *(undefined4 *)psVar21;
            psVar21 = psVar21 + 2;
            psVar31 = psVar31 + 2;
          }
          *psVar31 = *psVar21;
          thunk_FUN_0043fc50(CASE_1,0);
        }
      }
      if (g_cPanel_00801688 == (CPanelTy *)0x0) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      iVar13 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_2);
      if (iVar13 != 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (*(code *)pSVar12->vtable->field_0034)(pSVar12->field_0129);
        iVar13 = 0x17;
        bVar36 = true;
        piVar19 = (int *)pSVar12->field_0129;
        piVar29 = (int *)pSVar12->field_0125;
        do {
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          bVar36 = *piVar19 == *piVar29;
          piVar19 = piVar19 + 1;
          piVar29 = piVar29 + 1;
        } while (bVar36);
        if (!bVar36) {
          piVar19 = (int *)pSVar12->field_0129;
          piVar29 = (int *)pSVar12->field_0125;
          for (iVar13 = 0x17; iVar13 != 0; iVar13 = iVar13 + -1) {
            *piVar29 = *piVar19;
            piVar19 = piVar19 + 1;
            piVar29 = piVar29 + 1;
          }
          thunk_FUN_0043fc50(CASE_2,0);
        }
      }
      if (g_cPanel_00801688 == (CPanelTy *)0x0) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      iVar13 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_E);
      if (iVar13 != 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (*(code *)pSVar12->vtable->field_0058)(pSVar12->field_01B1);
        pAVar4 = pSVar12->field_01AD;
        local_8 = (AnonShape_0041AF40_EF4C5356 *)pSVar12->field_01B1;
        iVar13 = 0xb;
        bVar36 = true;
        pAVar18 = (AnonPointee_STGameObjC_01B1 *)local_8;
        pAVar28 = pAVar4;
        do {
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          bVar36 = *(char *)&pAVar18->field_0000 == *(char *)&pAVar28->field_0000;
          pAVar18 = (AnonPointee_STGameObjC_01B1 *)((int)&pAVar18->field_0000 + 1);
          pAVar28 = (AnonPointee_STGameObjC_01AD *)((int)&pAVar28->field_0000 + 1);
        } while (bVar36);
        if (!bVar36) {
          pAVar4->field_0000 = ((AnonPointee_STGameObjC_01B1 *)local_8)->field_0000;
          pAVar4->field_0004 = ((AnonPointee_STGameObjC_01B1 *)local_8)->field_0004;
          pAVar4->field_0008 = ((AnonPointee_STGameObjC_01B1 *)local_8)->field_0008;
          pAVar4->field_000A = ((AnonPointee_STGameObjC_01B1 *)local_8)->field_000A;
          thunk_FUN_0043fc50(CASE_E,0);
        }
      }
      if (g_cPanel_00801688 == (CPanelTy *)0x0) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      iVar13 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_12);
      if (iVar13 == 0) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)&pSVar12->vtable->field_0x64)(pSVar12->field_01C9);
      puVar5 = pSVar12->field_01C5;
      puVar6 = pSVar12->field_01C9;
      iVar13 = 3;
      bVar36 = true;
      puVar20 = puVar6;
      puVar30 = puVar5;
      do {
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        bVar36 = *puVar20 == *puVar30;
        puVar20 = puVar20 + 1;
        puVar30 = puVar30 + 1;
      } while (bVar36);
      if (bVar36) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      *(undefined4 *)puVar5 = *(undefined4 *)puVar6;
      puVar5[2] = puVar6[2];
      GVar37 = CASE_12;
      goto cf_common_exit_0041BE5F;
    }
    if (uVar14 < 0x173) {
      if (uVar14 != 0x172) {
        if (uVar14 == 0x14) {
          if ((g_cPanel_00801688 != (CPanelTy *)0x0) &&
             (iVar13 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_1), iVar13 != 0)) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (*(code *)pSVar12->vtable->field_0030)(pSVar12->field_0121);
            iVar13 = 0x1b;
            bVar36 = true;
            psVar21 = (short *)pSVar12->field_0121;
            psVar31 = (short *)pSVar12->field_011D;
            do {
              if (iVar13 == 0) break;
              iVar13 = iVar13 + -1;
              bVar36 = *psVar21 == *psVar31;
              psVar21 = psVar21 + 1;
              psVar31 = psVar31 + 1;
            } while (bVar36);
            if (!bVar36) {
              uVar14 = STAllPlayersC::GetNInTmp(0,0);
              if ((short)uVar14 == 1) {
                puVar16 = (undefined4 *)pSVar12->field_0121;
              }
              else {
                puVar16 = (undefined4 *)pSVar12->field_0121;
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                if (*(char *)((int)puVar16 + 0x1b) == *(char *)(pSVar12->field_011D + 0x1b)) {
                  iVar13 = 5;
                  bVar36 = true;
                  pcVar17 = (char *)((int)puVar16 + 0x2a);
                  pcVar26 = (char *)(pSVar12->field_011D + 0x2a);
                  do {
                    if (iVar13 == 0) break;
                    iVar13 = iVar13 + -1;
                    bVar36 = *pcVar17 == *pcVar26;
                    pcVar17 = pcVar17 + 1;
                    pcVar26 = pcVar26 + 1;
                  } while (bVar36);
                  if (bVar36) goto LAB_0041b128;
                }
              }
              puVar25 = (undefined4 *)pSVar12->field_011D;
              for (iVar13 = 0xd; iVar13 != 0; iVar13 = iVar13 + -1) {
                *puVar25 = *puVar16;
                puVar16 = puVar16 + 1;
                puVar25 = puVar25 + 1;
              }
              *(undefined2 *)puVar25 = *(undefined2 *)puVar16;
              thunk_FUN_0043fc50(CASE_1,0);
            }
          }
LAB_0041b128:
          if ((g_cPanel_00801688 != (CPanelTy *)0x0) &&
             (iVar13 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_2), iVar13 != 0)) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (*(code *)pSVar12->vtable->field_0034)(pSVar12->field_0129);
            iVar13 = 0x17;
            bVar36 = true;
            piVar19 = (int *)pSVar12->field_0129;
            piVar29 = (int *)pSVar12->field_0125;
            do {
              if (iVar13 == 0) break;
              iVar13 = iVar13 + -1;
              bVar36 = *piVar19 == *piVar29;
              piVar19 = piVar19 + 1;
              piVar29 = piVar29 + 1;
            } while (bVar36);
            if (!bVar36) {
              piVar19 = (int *)pSVar12->field_0129;
              piVar29 = (int *)pSVar12->field_0125;
              for (iVar13 = 0x17; iVar13 != 0; iVar13 = iVar13 + -1) {
                *piVar29 = *piVar19;
                piVar19 = piVar19 + 1;
                piVar29 = piVar29 + 1;
              }
              thunk_FUN_0043fc50(CASE_2,0);
            }
          }
          if ((g_cPanel_00801688 != (CPanelTy *)0x0) &&
             (iVar13 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_8), iVar13 != 0)) {
            puVar16 = &pSVar12->field_0171;
            if ((DArrayTy *)pSVar12->field_0171 != (DArrayTy *)0x0) {
              DArrayDestroy((DArrayTy *)pSVar12->field_0171);
            }
            if ((DArrayTy *)pSVar12->field_0175 != (DArrayTy *)0x0) {
              DArrayDestroy((DArrayTy *)pSVar12->field_0175);
            }
            if ((DArrayTy *)pSVar12->field_0179 != (DArrayTy *)0x0) {
              DArrayDestroy((DArrayTy *)pSVar12->field_0179);
            }
            if ((DArrayTy *)pSVar12->field_017D != (DArrayTy *)0x0) {
              DArrayDestroy((DArrayTy *)pSVar12->field_017D);
            }
            if ((DArrayTy *)pSVar12->field_0181 != (DArrayTy *)0x0) {
              DArrayDestroy((DArrayTy *)pSVar12->field_0181);
            }
            *puVar16 = 0;
            pSVar12->field_0175 = 0;
            pSVar12->field_0179 = 0;
            pSVar12->field_017D = 0;
            pSVar12->field_0181 = 0;
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (*(code *)pSVar12->vtable->field_0040)(puVar16);
            local_c = (DArrayTy *)pSVar12->field_015D;
            bVar36 = false;
            dVar2 = *(dword *)(*puVar16 + 0xc);
            if (dVar2 == local_c->count) {
              iVar13 = dVar2 * 0x30;
              bVar35 = true;
              pcVar17 = *(char **)(*puVar16 + 0x1c);
              pcVar26 = local_c->data;
              do {
                if (iVar13 == 0) break;
                iVar13 = iVar13 + -1;
                bVar35 = *pcVar17 == *pcVar26;
                pcVar17 = pcVar17 + 1;
                pcVar26 = pcVar26 + 1;
              } while (bVar35);
              if (!bVar35) goto LAB_0041b237;
            }
            else {
LAB_0041b237:
              bVar36 = true;
            }
            if (!bVar36) {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              iVar13 = *(int *)(pSVar12->field_0175 + 0xc);
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              if (iVar13 == *(int *)(pSVar12->field_0161 + 0xc)) {
                iVar13 = iVar13 * 0x30;
                bVar35 = true;
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                pcVar17 = *(char **)(pSVar12->field_0175 + 0x1c);
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                pcVar26 = *(char **)(pSVar12->field_0161 + 0x1c);
                do {
                  if (iVar13 == 0) break;
                  iVar13 = iVar13 + -1;
                  bVar35 = *pcVar17 == *pcVar26;
                  pcVar17 = pcVar17 + 1;
                  pcVar26 = pcVar26 + 1;
                } while (bVar35);
                if (!bVar35) goto LAB_0041b26c;
              }
              else {
LAB_0041b26c:
                bVar36 = true;
              }
              if (!bVar36) {
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                iVar13 = *(int *)(pSVar12->field_0179 + 0xc);
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                if (iVar13 == *(int *)(pSVar12->field_0165 + 0xc)) {
                  iVar13 = iVar13 * 0x30;
                  bVar35 = true;
                  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                  pcVar17 = *(char **)(pSVar12->field_0179 + 0x1c);
                  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                  pcVar26 = *(char **)(pSVar12->field_0165 + 0x1c);
                  do {
                    if (iVar13 == 0) break;
                    iVar13 = iVar13 + -1;
                    bVar35 = *pcVar17 == *pcVar26;
                    pcVar17 = pcVar17 + 1;
                    pcVar26 = pcVar26 + 1;
                  } while (bVar35);
                  if (!bVar35) goto LAB_0041b2a1;
                }
                else {
LAB_0041b2a1:
                  bVar36 = true;
                }
                if (!bVar36) {
                  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                  iVar13 = *(int *)(pSVar12->field_017D + 0xc);
                  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                  if (iVar13 == *(int *)(pSVar12->field_0169 + 0xc)) {
                    iVar13 = iVar13 * 0x30;
                    bVar35 = true;
                    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                    pcVar17 = *(char **)(pSVar12->field_017D + 0x1c);
                    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                    pcVar26 = *(char **)(pSVar12->field_0169 + 0x1c);
                    do {
                      if (iVar13 == 0) break;
                      iVar13 = iVar13 + -1;
                      bVar35 = *pcVar17 == *pcVar26;
                      pcVar17 = pcVar17 + 1;
                      pcVar26 = pcVar26 + 1;
                    } while (bVar35);
                    if (!bVar35) goto LAB_0041b2d2;
                  }
                  else {
LAB_0041b2d2:
                    bVar36 = true;
                  }
                  if (!bVar36) {
                    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                    iVar13 = *(int *)(pSVar12->field_0181 + 0xc);
                    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                    if (iVar13 == *(int *)(pSVar12->field_016D + 0xc)) {
                      iVar13 = iVar13 * 0x30;
                      bVar35 = true;
                      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                      pcVar17 = *(char **)(pSVar12->field_0181 + 0x1c);
                      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                      pcVar26 = *(char **)(pSVar12->field_016D + 0x1c);
                      do {
                        if (iVar13 == 0) break;
                        iVar13 = iVar13 + -1;
                        bVar35 = *pcVar17 == *pcVar26;
                        pcVar17 = pcVar17 + 1;
                        pcVar26 = pcVar26 + 1;
                      } while (bVar35);
                      if (bVar35) goto LAB_0041b308;
                    }
                    bVar36 = true;
                  }
                }
              }
            }
LAB_0041b308:
            if (bVar36) {
              if (local_c != (DArrayTy *)0x0) {
                DArrayDestroy(local_c);
              }
              if ((DArrayTy *)pSVar12->field_0161 != (DArrayTy *)0x0) {
                DArrayDestroy((DArrayTy *)pSVar12->field_0161);
              }
              if ((DArrayTy *)pSVar12->field_0165 != (DArrayTy *)0x0) {
                DArrayDestroy((DArrayTy *)pSVar12->field_0165);
              }
              if ((DArrayTy *)pSVar12->field_0169 != (DArrayTy *)0x0) {
                DArrayDestroy((DArrayTy *)pSVar12->field_0169);
              }
              if ((DArrayTy *)pSVar12->field_016D != (DArrayTy *)0x0) {
                DArrayDestroy((DArrayTy *)pSVar12->field_016D);
              }
              pSVar12->field_015D = 0;
              pSVar12->field_0161 = 0;
              pSVar12->field_0165 = 0;
              pSVar12->field_0169 = 0;
              pSVar12->field_016D = 0;
              Library::DKW::TBL::FUN_006afe40(&pSVar12->field_015D,(uint *)pSVar12->field_0171);
              Library::DKW::TBL::FUN_006afe40(&pSVar12->field_0161,(uint *)pSVar12->field_0175);
              Library::DKW::TBL::FUN_006afe40(&pSVar12->field_0165,(uint *)pSVar12->field_0179);
              Library::DKW::TBL::FUN_006afe40(&pSVar12->field_0169,(uint *)pSVar12->field_017D);
              Library::DKW::TBL::FUN_006afe40(&pSVar12->field_016D,(uint *)pSVar12->field_0181);
              thunk_FUN_0043fc50(CASE_8,0);
            }
          }
          if ((g_cPanel_00801688 != (CPanelTy *)0x0) &&
             (iVar13 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_B), iVar13 != 0)) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (*(code *)pSVar12->vtable->field_004C)(pSVar12->field_0199);
            pAVar3 = pSVar12->field_0195;
            local_c = (DArrayTy *)pSVar12->field_0199;
            iVar13 = 0x13;
            bVar36 = true;
            pDVar22 = local_c;
            pAVar27 = pAVar3;
            do {
              if (iVar13 == 0) break;
              iVar13 = iVar13 + -1;
              bVar36 = (char)pDVar22->flags == *(char *)&pAVar27->field_0000;
              pDVar22 = (DArrayTy *)((int)&pDVar22->flags + 1);
              pAVar27 = (AnonPointee_STGameObjC_0195 *)((int)&pAVar27->field_0000 + 1);
            } while (bVar36);
            if (!bVar36) {
              pAVar3->field_0000 = local_c->flags;
              pAVar3->field_0004 = local_c->iteratorIndex;
              pAVar3->field_0008 = local_c->elementSize;
              pAVar3->field_000C = local_c->count;
              pAVar3->field_0010 = (short)local_c->capacity;
              pAVar3->field_0012 = *(undefined1 *)((int)&local_c->capacity + 2);
              thunk_FUN_0043fc50(CASE_B,0);
            }
          }
          if ((g_cPanel_00801688 != (CPanelTy *)0x0) &&
             (iVar13 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_E), iVar13 != 0)) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (*(code *)pSVar12->vtable->field_0058)(pSVar12->field_01B1);
            pAVar4 = pSVar12->field_01AD;
            local_8 = (AnonShape_0041AF40_EF4C5356 *)pSVar12->field_01B1;
            iVar13 = 0xb;
            bVar36 = true;
            pAVar18 = (AnonPointee_STGameObjC_01B1 *)local_8;
            pAVar28 = pAVar4;
            do {
              if (iVar13 == 0) break;
              iVar13 = iVar13 + -1;
              bVar36 = *(char *)&pAVar18->field_0000 == *(char *)&pAVar28->field_0000;
              pAVar18 = (AnonPointee_STGameObjC_01B1 *)((int)&pAVar18->field_0000 + 1);
              pAVar28 = (AnonPointee_STGameObjC_01AD *)((int)&pAVar28->field_0000 + 1);
            } while (bVar36);
            if (!bVar36) {
              pAVar4->field_0000 = ((AnonPointee_STGameObjC_01B1 *)local_8)->field_0000;
              pAVar4->field_0004 = ((AnonPointee_STGameObjC_01B1 *)local_8)->field_0004;
              pAVar4->field_0008 = ((AnonPointee_STGameObjC_01B1 *)local_8)->field_0008;
              pAVar4->field_000A = ((AnonPointee_STGameObjC_01B1 *)local_8)->field_000A;
              thunk_FUN_0043fc50(CASE_E,0);
            }
          }
          if (g_cPanel_00801688 == (CPanelTy *)0x0) {
            g_currentExceptionFrame = local_58.previous;
            return 0;
          }
          iVar13 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_10);
          if (iVar13 == 0) {
            g_currentExceptionFrame = local_58.previous;
            return 0;
          }
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (*(code *)pSVar12->vtable->field_0060)(pSVar12->field_01C1);
          iVar13 = 0x90;
          bVar36 = true;
          piVar19 = (int *)pSVar12->field_01C1;
          piVar29 = (int *)pSVar12->field_01BD;
          do {
            if (iVar13 == 0) break;
            iVar13 = iVar13 + -1;
            bVar36 = *piVar19 == *piVar29;
            piVar19 = piVar19 + 1;
            piVar29 = piVar29 + 1;
          } while (bVar36);
          if (bVar36) {
            g_currentExceptionFrame = local_58.previous;
            return 0;
          }
          piVar19 = (int *)pSVar12->field_01C1;
          piVar29 = (int *)pSVar12->field_01BD;
          for (iVar13 = 0x90; iVar13 != 0; iVar13 = iVar13 + -1) {
            *piVar29 = *piVar19;
            piVar19 = piVar19 + 1;
            piVar29 = piVar29 + 1;
          }
          GVar37 = CASE_10;
          goto cf_common_exit_0041BE5F;
        }
        if (uVar14 != 0x5a) goto cf_common_exit_0041B6C6;
      }
    }
    else if (uVar14 != 0x1a4) {
cf_common_exit_0041B6C6:
      iVar13 = ReportDebugMessage("E:\\__titans\\wlad\\Tc_gobj.cpp",0x7e4,0,0,"%s",
                                  "STGameObjC::GetMessagge MESS_ID_NONE unknown game type");
      if (iVar13 == 0) {
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
    iVar13 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_5);
    if (iVar13 != 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (*(code *)pSVar12->vtable->field_0030)(pSVar12->field_0121);
      iVar13 = 0x1b;
      bVar36 = true;
      psVar21 = (short *)pSVar12->field_0121;
      psVar31 = (short *)pSVar12->field_011D;
      do {
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        bVar36 = *psVar21 == *psVar31;
        psVar21 = psVar21 + 1;
        psVar31 = psVar31 + 1;
      } while (bVar36);
      if (!bVar36) {
        psVar21 = (short *)pSVar12->field_0121;
        psVar31 = (short *)pSVar12->field_011D;
        for (iVar13 = 0xd; iVar13 != 0; iVar13 = iVar13 + -1) {
          *(undefined4 *)psVar31 = *(undefined4 *)psVar21;
          psVar21 = psVar21 + 2;
          psVar31 = psVar31 + 2;
        }
        *psVar31 = *psVar21;
        thunk_FUN_0043fc50(CASE_5,0);
      }
    }
    if (g_cPanel_00801688 == (CPanelTy *)0x0) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    iVar13 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_4);
    if (iVar13 == 0) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (*(code *)pSVar12->vtable->field_0034)(pSVar12->field_0129);
    iVar13 = 0x17;
    bVar36 = true;
    piVar19 = (int *)pSVar12->field_0129;
    piVar29 = (int *)pSVar12->field_0125;
    do {
      if (iVar13 == 0) break;
      iVar13 = iVar13 + -1;
      bVar36 = *piVar19 == *piVar29;
      piVar19 = piVar19 + 1;
      piVar29 = piVar29 + 1;
    } while (bVar36);
    if (bVar36) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    piVar19 = (int *)pSVar12->field_0129;
    piVar29 = (int *)pSVar12->field_0125;
    for (iVar13 = 0x17; iVar13 != 0; iVar13 = iVar13 + -1) {
      *piVar29 = *piVar19;
      piVar19 = piVar19 + 1;
      piVar29 = piVar29 + 1;
    }
    GVar37 = CASE_4;
    goto cf_common_exit_0041BE5F;
  }
  if (uVar14 == 0x1b8) goto LAB_0041bdb3;
  if (uVar14 != 1000) {
    if (uVar14 != 0x3e9) goto cf_common_exit_0041B6C6;
    if (g_cPanel_00801688 == (CPanelTy *)0x0) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    iVar13 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_4);
    if (iVar13 != 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (*(code *)pSVar12->vtable->field_0034)(pSVar12->field_0129);
      iVar13 = 0x17;
      bVar36 = true;
      piVar19 = (int *)pSVar12->field_0129;
      piVar29 = (int *)pSVar12->field_0125;
      do {
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        bVar36 = *piVar19 == *piVar29;
        piVar19 = piVar19 + 1;
        piVar29 = piVar29 + 1;
      } while (bVar36);
      if (!bVar36) {
        piVar19 = (int *)pSVar12->field_0129;
        piVar29 = (int *)pSVar12->field_0125;
        for (iVar13 = 0x17; iVar13 != 0; iVar13 = iVar13 + -1) {
          *piVar29 = *piVar19;
          piVar19 = piVar19 + 1;
          piVar29 = piVar29 + 1;
        }
        thunk_FUN_0043fc50(CASE_4,0);
      }
    }
    if (g_cPanel_00801688 == (CPanelTy *)0x0) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    iVar13 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_5);
    if (iVar13 == 0) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (*(code *)pSVar12->vtable->field_0030)(pSVar12->field_0121);
    iVar13 = 0x1b;
    bVar36 = true;
    psVar21 = (short *)pSVar12->field_0121;
    psVar31 = (short *)pSVar12->field_011D;
    do {
      if (iVar13 == 0) break;
      iVar13 = iVar13 + -1;
      bVar36 = *psVar21 == *psVar31;
      psVar21 = psVar21 + 1;
      psVar31 = psVar31 + 1;
    } while (bVar36);
    if (bVar36) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    psVar21 = (short *)pSVar12->field_0121;
    psVar31 = (short *)pSVar12->field_011D;
    for (iVar13 = 0xd; iVar13 != 0; iVar13 = iVar13 + -1) {
      *(undefined4 *)psVar31 = *(undefined4 *)psVar21;
      psVar21 = psVar21 + 2;
      psVar31 = psVar31 + 2;
    }
    *psVar31 = *psVar21;
    GVar37 = CASE_5;
    goto cf_common_exit_0041BE5F;
  }
  if (g_cPanel_00801688 == (CPanelTy *)0x0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  iVar13 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_4);
  if (iVar13 != 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (*(code *)pSVar12->vtable->field_0034)(pSVar12->field_0129);
    iVar13 = 0x17;
    bVar36 = true;
    piVar19 = (int *)pSVar12->field_0129;
    piVar29 = (int *)pSVar12->field_0125;
    do {
      if (iVar13 == 0) break;
      iVar13 = iVar13 + -1;
      bVar36 = *piVar19 == *piVar29;
      piVar19 = piVar19 + 1;
      piVar29 = piVar29 + 1;
    } while (bVar36);
    if (!bVar36) {
      piVar19 = (int *)pSVar12->field_0129;
      piVar29 = (int *)pSVar12->field_0125;
      for (iVar13 = 0x17; iVar13 != 0; iVar13 = iVar13 + -1) {
        *piVar29 = *piVar19;
        piVar19 = piVar19 + 1;
        piVar29 = piVar29 + 1;
      }
      thunk_FUN_0043fc50(CASE_4,0);
    }
  }
  if (g_cPanel_00801688 == (CPanelTy *)0x0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  iVar13 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_5);
  if (iVar13 != 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (*(code *)pSVar12->vtable->field_0030)(pSVar12->field_0121);
    iVar13 = 0x1b;
    bVar36 = true;
    psVar21 = (short *)pSVar12->field_0121;
    psVar31 = (short *)pSVar12->field_011D;
    do {
      if (iVar13 == 0) break;
      iVar13 = iVar13 + -1;
      bVar36 = *psVar21 == *psVar31;
      psVar21 = psVar21 + 1;
      psVar31 = psVar31 + 1;
    } while (bVar36);
    if (!bVar36) {
      psVar21 = (short *)pSVar12->field_0121;
      psVar31 = (short *)pSVar12->field_011D;
      for (iVar13 = 0xd; iVar13 != 0; iVar13 = iVar13 + -1) {
        *(undefined4 *)psVar31 = *(undefined4 *)psVar21;
        psVar21 = psVar21 + 2;
        psVar31 = psVar31 + 2;
      }
      *psVar31 = *psVar21;
      thunk_FUN_0043fc50(CASE_5,0);
    }
  }
  if (g_cPanel_00801688 == (CPanelTy *)0x0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  iVar13 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_6);
  if (iVar13 != 0) {
    puVar16 = &pSVar12->field_0135;
    if ((DArrayTy *)pSVar12->field_0135 != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)pSVar12->field_0135);
    }
    if ((DArrayTy *)pSVar12->field_0139 != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)pSVar12->field_0139);
    }
    *puVar16 = 0;
    pSVar12->field_0139 = 0;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)&pSVar12->vtable->field_0x38)(puVar16);
    bVar36 = false;
    iVar13 = *(int *)(*puVar16 + 0xc);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (iVar13 == *(int *)(pSVar12->field_012D + 0xc)) {
      iVar13 = iVar13 * 0x30;
      bVar35 = true;
      pcVar17 = *(char **)(*puVar16 + 0x1c);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      pcVar26 = *(char **)(pSVar12->field_012D + 0x1c);
      do {
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        bVar35 = *pcVar17 == *pcVar26;
        pcVar17 = pcVar17 + 1;
        pcVar26 = pcVar26 + 1;
      } while (bVar35);
      if (!bVar35) goto LAB_0041b8f6;
    }
    else {
LAB_0041b8f6:
      bVar36 = true;
    }
    if (!bVar36) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar13 = *(int *)(pSVar12->field_0139 + 0xc);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (iVar13 == *(int *)(pSVar12->field_0131 + 0xc)) {
        iVar13 = iVar13 * 0x30;
        bVar35 = true;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        pcVar17 = *(char **)(pSVar12->field_0139 + 0x1c);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        pcVar26 = *(char **)(pSVar12->field_0131 + 0x1c);
        do {
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          bVar35 = *pcVar17 == *pcVar26;
          pcVar17 = pcVar17 + 1;
          pcVar26 = pcVar26 + 1;
        } while (bVar35);
        if (bVar35) goto LAB_0041b92c;
      }
      bVar36 = true;
    }
LAB_0041b92c:
    if (bVar36) {
      if ((DArrayTy *)pSVar12->field_012D != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)pSVar12->field_012D);
      }
      if ((DArrayTy *)pSVar12->field_0131 != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)pSVar12->field_0131);
      }
      pSVar12->field_012D = 0;
      pSVar12->field_0131 = 0;
      Library::DKW::TBL::FUN_006afe40(&pSVar12->field_012D,(uint *)pSVar12->field_0135);
      Library::DKW::TBL::FUN_006afe40(&pSVar12->field_0131,(uint *)pSVar12->field_0139);
      GVar37 = CASE_6;
      goto cf_common_exit_0041BE5F;
    }
  }
  if (g_cPanel_00801688 == (CPanelTy *)0x0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  iVar13 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_7);
  if (iVar13 != 0) {
    puVar16 = &pSVar12->field_014D;
    if ((DArrayTy *)pSVar12->field_014D != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)pSVar12->field_014D);
    }
    if ((DArrayTy *)pSVar12->field_0151 != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)pSVar12->field_0151);
    }
    if ((DArrayTy *)pSVar12->field_0155 != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)pSVar12->field_0155);
    }
    if ((DArrayTy *)pSVar12->field_0159 != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)pSVar12->field_0159);
    }
    *puVar16 = 0;
    pSVar12->field_0151 = 0;
    pSVar12->field_0155 = 0;
    pSVar12->field_0159 = 0;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)&pSVar12->vtable->field_0x3c)(puVar16);
    local_c = (DArrayTy *)pSVar12->field_013D;
    bVar36 = false;
    dVar2 = *(dword *)(*puVar16 + 0xc);
    if (dVar2 == local_c->count) {
      iVar13 = dVar2 * 0x30;
      bVar35 = true;
      pcVar17 = *(char **)(*puVar16 + 0x1c);
      pcVar26 = local_c->data;
      do {
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        bVar35 = *pcVar17 == *pcVar26;
        pcVar17 = pcVar17 + 1;
        pcVar26 = pcVar26 + 1;
      } while (bVar35);
      if (!bVar35) goto LAB_0041ba2a;
    }
    else {
LAB_0041ba2a:
      bVar36 = true;
    }
    if (!bVar36) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar13 = *(int *)(pSVar12->field_0151 + 0xc);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (iVar13 == *(int *)(pSVar12->field_0141 + 0xc)) {
        iVar13 = iVar13 * 0x30;
        bVar35 = true;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        pcVar17 = *(char **)(pSVar12->field_0151 + 0x1c);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        pcVar26 = *(char **)(pSVar12->field_0141 + 0x1c);
        do {
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          bVar35 = *pcVar17 == *pcVar26;
          pcVar17 = pcVar17 + 1;
          pcVar26 = pcVar26 + 1;
        } while (bVar35);
        if (!bVar35) goto LAB_0041ba5f;
      }
      else {
LAB_0041ba5f:
        bVar36 = true;
      }
      if (!bVar36) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar13 = *(int *)(pSVar12->field_0155 + 0xc);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (iVar13 == *(int *)(pSVar12->field_0145 + 0xc)) {
          iVar13 = iVar13 * 0x30;
          bVar35 = true;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          pcVar17 = *(char **)(pSVar12->field_0155 + 0x1c);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          pcVar26 = *(char **)(pSVar12->field_0145 + 0x1c);
          do {
            if (iVar13 == 0) break;
            iVar13 = iVar13 + -1;
            bVar35 = *pcVar17 == *pcVar26;
            pcVar17 = pcVar17 + 1;
            pcVar26 = pcVar26 + 1;
          } while (bVar35);
          if (!bVar35) goto LAB_0041ba90;
        }
        else {
LAB_0041ba90:
          bVar36 = true;
        }
        if (!bVar36) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          iVar13 = *(int *)(pSVar12->field_0159 + 0xc);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if (iVar13 == *(int *)(pSVar12->field_0149 + 0xc)) {
            iVar13 = iVar13 * 0x30;
            bVar35 = true;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            pcVar17 = *(char **)(pSVar12->field_0159 + 0x1c);
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            pcVar26 = *(char **)(pSVar12->field_0149 + 0x1c);
            do {
              if (iVar13 == 0) break;
              iVar13 = iVar13 + -1;
              bVar35 = *pcVar17 == *pcVar26;
              pcVar17 = pcVar17 + 1;
              pcVar26 = pcVar26 + 1;
            } while (bVar35);
            if (bVar35) goto LAB_0041bac6;
          }
          bVar36 = true;
        }
      }
    }
LAB_0041bac6:
    if (bVar36) {
      if (local_c != (DArrayTy *)0x0) {
        DArrayDestroy(local_c);
      }
      if ((DArrayTy *)pSVar12->field_0141 != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)pSVar12->field_0141);
      }
      if ((DArrayTy *)pSVar12->field_0145 != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)pSVar12->field_0145);
      }
      if ((DArrayTy *)pSVar12->field_0149 != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)pSVar12->field_0149);
      }
      pSVar12->field_013D = 0;
      pSVar12->field_0141 = 0;
      pSVar12->field_0145 = 0;
      pSVar12->field_0149 = 0;
      Library::DKW::TBL::FUN_006afe40(&pSVar12->field_013D,(uint *)pSVar12->field_014D);
      Library::DKW::TBL::FUN_006afe40(&pSVar12->field_0141,(uint *)pSVar12->field_0151);
      Library::DKW::TBL::FUN_006afe40(&pSVar12->field_0145,(uint *)pSVar12->field_0155);
      Library::DKW::TBL::FUN_006afe40(&pSVar12->field_0149,(uint *)pSVar12->field_0159);
      GVar37 = CASE_7;
      goto cf_common_exit_0041BE5F;
    }
  }
  if (g_cPanel_00801688 == (CPanelTy *)0x0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  iVar13 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_9);
  if (iVar13 != 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)&pSVar12->vtable->field_0x44)(pSVar12->field_0189);
    iVar13 = 0x129;
    bVar36 = true;
    pcVar17 = (char *)pSVar12->field_0189;
    pcVar26 = (char *)pSVar12->field_0185;
    do {
      if (iVar13 == 0) break;
      iVar13 = iVar13 + -1;
      bVar36 = *pcVar17 == *pcVar26;
      pcVar17 = pcVar17 + 1;
      pcVar26 = pcVar26 + 1;
    } while (bVar36);
    if (!bVar36) {
      pcVar17 = (char *)pSVar12->field_0189;
      pcVar26 = (char *)pSVar12->field_0185;
      for (iVar13 = 0x4a; iVar13 != 0; iVar13 = iVar13 + -1) {
        *(undefined4 *)pcVar26 = *(undefined4 *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar26 = pcVar26 + 4;
      }
      *pcVar26 = *pcVar17;
      thunk_FUN_0043fc50(CASE_9,0);
    }
  }
  if (g_cPanel_00801688 == (CPanelTy *)0x0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  iVar13 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_A);
  if (iVar13 != 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)&pSVar12->vtable->field_0x48)(pSVar12->field_0191);
    pAVar7 = pSVar12->field_018D;
    local_c = (DArrayTy *)pSVar12->field_0191;
    iVar13 = 4;
    bVar36 = true;
    pDVar22 = local_c;
    pAVar32 = pAVar7;
    do {
      if (iVar13 == 0) break;
      iVar13 = iVar13 + -1;
      bVar36 = pDVar22->flags == pAVar32->field_0000;
      pDVar22 = (DArrayTy *)&pDVar22->iteratorIndex;
      pAVar32 = (AnonPointee_STGameObjC_018D *)&pAVar32->field_0004;
    } while (bVar36);
    if (!bVar36) {
      pAVar7->field_0000 = local_c->flags;
      pAVar7->field_0004 = local_c->iteratorIndex;
      pAVar7->field_0008 = local_c->elementSize;
      pAVar7->field_000C = local_c->count;
      thunk_FUN_0043fc50(CASE_A,0);
    }
  }
  if (g_cPanel_00801688 == (CPanelTy *)0x0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  iVar13 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_C);
  if (iVar13 != 0) {
    puVar16 = &pSVar12->field_01A1;
    local_14 = (AnonPointee_STGameObjC_01A9 *)puVar16;
    if ((DArrayTy *)pSVar12->field_01A1 != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)pSVar12->field_01A1);
      *puVar16 = 0;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)&pSVar12->vtable->field_0x50)(puVar16);
    pDVar22 = (DArrayTy *)pSVar12->field_019D;
    local_c = (DArrayTy *)&pSVar12->field_019D;
    local_8 = (AnonShape_0041AF40_EF4C5356 *)0x0;
    dVar2 = *(dword *)(*puVar16 + 0xc);
    if (dVar2 == pDVar22->count) {
      iVar13 = dVar2 * 0x30;
      bVar36 = true;
      pcVar17 = *(char **)(*puVar16 + 0x1c);
      pcVar26 = pDVar22->data;
      do {
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        bVar36 = *pcVar17 == *pcVar26;
        pcVar17 = pcVar17 + 1;
        pcVar26 = pcVar26 + 1;
      } while (bVar36);
      if (!bVar36) goto LAB_0041bcad;
    }
    else {
LAB_0041bcad:
      local_8 = (AnonShape_0041AF40_EF4C5356 *)0x1;
    }
    if (local_8 == (AnonShape_0041AF40_EF4C5356 *)0x1) {
      if (pDVar22 != (DArrayTy *)0x0) {
        DArrayDestroy(pDVar22);
        local_c->flags = 0;
      }
      Library::DKW::TBL::FUN_006afe40((int *)local_c,(uint *)local_14->field_0000);
      GVar37 = CASE_C;
      goto cf_common_exit_0041BE5F;
    }
  }
  if (g_cPanel_00801688 == (CPanelTy *)0x0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  iVar13 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_C|CASE_1);
  if (iVar13 != 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)&pSVar12->vtable->field_0x54)(pSVar12->field_01A9);
    pAVar8 = pSVar12->field_01A5;
    local_14 = pSVar12->field_01A9;
    iVar13 = 3;
    bVar36 = true;
    pAVar23 = local_14;
    pAVar33 = pAVar8;
    do {
      if (iVar13 == 0) break;
      iVar13 = iVar13 + -1;
      bVar36 = (AnonPointee_STGameObjC_01A5 *)pAVar23->field_0000 ==
               (AnonPointee_STGameObjC_01A5 *)pAVar33->field_0000;
      pAVar23 = (AnonPointee_STGameObjC_01A9 *)&pAVar23->field_0004;
      pAVar33 = (AnonPointee_STGameObjC_01A5 *)&pAVar33->field_0004;
    } while (bVar36);
    if (!bVar36) {
      pAVar8->field_0000 = (AnonPointee_STGameObjC_01A5 *)local_14->field_0000;
      pAVar8->field_0004 = (AnonPointee_STGameObjC_01A9 *)local_14->field_0004;
      pAVar8->field_0008 = (AnonPointee_STGameObjC_01AD *)local_14->field_0008;
      thunk_FUN_0043fc50(CASE_D,0);
    }
  }
  if (g_cPanel_00801688 == (CPanelTy *)0x0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  iVar13 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_F);
  if (iVar13 == 0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)&pSVar12->vtable->field_0x5c)(pSVar12->field_01B9);
  pAVar9 = pSVar12->field_01B5;
  pAVar10 = pSVar12->field_01B9;
  iVar13 = 0xb;
  bVar36 = true;
  pAVar24 = pAVar10;
  pAVar34 = pAVar9;
  do {
    if (iVar13 == 0) break;
    iVar13 = iVar13 + -1;
    bVar36 = *(char *)&pAVar24->field_0000 == *(char *)&pAVar34->field_0000;
    pAVar24 = (AnonPointee_STGameObjC_01B9 *)((int)&pAVar24->field_0000 + 1);
    pAVar34 = (AnonPointee_STGameObjC_01B5 *)((int)&pAVar34->field_0000 + 1);
  } while (bVar36);
  if (bVar36) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  pAVar9->field_0000 = pAVar10->field_0000;
  pAVar9->field_0004 = pAVar10->field_0004;
  pAVar9->field_0008 = pAVar10->field_0008;
  pAVar9->field_000A = pAVar10->field_000A;
  GVar37 = CASE_F;
cf_common_exit_0041BE5F:
  thunk_FUN_0043fc50(GVar37,0);
  g_currentExceptionFrame = local_58.previous;
  return 0;
}

