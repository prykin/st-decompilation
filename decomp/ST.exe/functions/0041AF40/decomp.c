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
  STGameObjC *this_00;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined4 *puVar15;
  char *pcVar16;
  AnonPointee_STGameObjC_01B1 *pAVar17;
  int *piVar18;
  ushort *puVar19;
  short *psVar20;
  DArrayTy *pDVar21;
  AnonPointee_STGameObjC_01A9 *pAVar22;
  AnonPointee_STGameObjC_01B9 *pAVar23;
  undefined4 *puVar24;
  char *pcVar25;
  AnonPointee_STGameObjC_0195 *pAVar26;
  AnonPointee_STGameObjC_01AD *pAVar27;
  int *piVar28;
  ushort *puVar29;
  short *psVar30;
  AnonPointee_STGameObjC_018D *pAVar31;
  AnonPointee_STGameObjC_01A5 *pAVar32;
  AnonPointee_STGameObjC_01B5 *pAVar33;
  bool bVar34;
  bool bVar35;
  Global_sub_0043FC50_param_1Enum GVar36;
  InternalExceptionFrame local_58;
  AnonPointee_STGameObjC_01A9 *local_14;
  STGameObjC *local_10;
  DArrayTy *local_c;
  AnonShape_0041AF40_EF4C5356 *local_8;

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_10 = this;
  iVar12 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  this_00 = local_10;
  if (iVar12 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar14 = ReportDebugMessage("E:\\__titans\\wlad\\Tc_gobj.cpp",0x7eb,0,iVar12,"%s"
                                ,"STGameObjC::GetMessage");
    if (iVar14 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar12,0,"E:\\__titans\\wlad\\Tc_gobj.cpp",0x7ec);
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
    this_00->field_0020 = *puVar1;
    this_00->field_0024 = puVar1[1];
    this_00->field_002C = puVar1[4];
    this_00->field_0028 = puVar1[2];
    iVar12 = this_00->field_0018 * DAT_00808754;
    this_00->field_001C = iVar12;
    uVar13 = iVar12 * 0x41c64e6d + 0x3039;
    this_00->field_001C = uVar13;
    this_00->field_00F8 = (short)((ulonglong)(uVar13 >> 0x10) % 0x1f) + 0x1e;
    (*this_00->vtable->vfunc_CC)(this_00);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  if (-1 < this_00->field_008F) {
    this_00->field_008F = this_00->field_008F + 1;
  }
  (*this_00->vtable->vfunc_D0)(this_00);
  if (this_00->field_01CD != 1) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  uVar13 = this_00->field_0020;
  if (uVar13 < 0x1af) {
    if (uVar13 == 0x1ae) {
      if (g_cPanel_00801688 == (CPanelTy *)0x0) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      iVar12 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_1);
      if (iVar12 != 0) {
        (*this_00->vtable->vfunc_30)(this_00->field_0121);
        iVar12 = 0x1b;
        bVar35 = true;
        psVar20 = (short *)this_00->field_0121;
        psVar30 = (short *)this_00->field_011D;
        do {
          if (iVar12 == 0) break;
          iVar12 = iVar12 + -1;
          bVar35 = *psVar20 == *psVar30;
          psVar20 = psVar20 + 1;
          psVar30 = psVar30 + 1;
        } while (bVar35);
        if (!bVar35) {
          psVar20 = (short *)this_00->field_0121;
          psVar30 = (short *)this_00->field_011D;
          for (iVar12 = 0xd; iVar12 != 0; iVar12 = iVar12 + -1) {
            *(undefined4 *)psVar30 = *(undefined4 *)psVar20;
            psVar20 = psVar20 + 2;
            psVar30 = psVar30 + 2;
          }
          *psVar30 = *psVar20;
          thunk_FUN_0043fc50(CASE_1,0);
        }
      }
      if (g_cPanel_00801688 == (CPanelTy *)0x0) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      iVar12 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_2);
      if (iVar12 != 0) {
        (*this_00->vtable->vfunc_34)(this_00->field_0129);
        iVar12 = 0x17;
        bVar35 = true;
        piVar18 = (int *)this_00->field_0129;
        piVar28 = (int *)this_00->field_0125;
        do {
          if (iVar12 == 0) break;
          iVar12 = iVar12 + -1;
          bVar35 = *piVar18 == *piVar28;
          piVar18 = piVar18 + 1;
          piVar28 = piVar28 + 1;
        } while (bVar35);
        if (!bVar35) {
          piVar18 = (int *)this_00->field_0129;
          piVar28 = (int *)this_00->field_0125;
          for (iVar12 = 0x17; iVar12 != 0; iVar12 = iVar12 + -1) {
            *piVar28 = *piVar18;
            piVar18 = piVar18 + 1;
            piVar28 = piVar28 + 1;
          }
          thunk_FUN_0043fc50(CASE_2,0);
        }
      }
      if (g_cPanel_00801688 == (CPanelTy *)0x0) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      iVar12 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_E);
      if (iVar12 != 0) {
        (*this_00->vtable->vfunc_58)(this_00->field_01B1);
        pAVar4 = this_00->field_01AD;
        local_8 = (AnonShape_0041AF40_EF4C5356 *)this_00->field_01B1;
        iVar12 = 0xb;
        bVar35 = true;
        pAVar17 = (AnonPointee_STGameObjC_01B1 *)local_8;
        pAVar27 = pAVar4;
        do {
          if (iVar12 == 0) break;
          iVar12 = iVar12 + -1;
          bVar35 = *(char *)&pAVar17->field_0000 == *(char *)&pAVar27->field_0000;
          pAVar17 = (AnonPointee_STGameObjC_01B1 *)((int)&pAVar17->field_0000 + 1);
          pAVar27 = (AnonPointee_STGameObjC_01AD *)((int)&pAVar27->field_0000 + 1);
        } while (bVar35);
        if (!bVar35) {
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
      iVar12 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_12);
      if (iVar12 == 0) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      (*this_00->vtable->vfunc_64)(this_00->field_01C9);
      puVar5 = this_00->field_01C5;
      puVar6 = this_00->field_01C9;
      iVar12 = 3;
      bVar35 = true;
      puVar19 = puVar6;
      puVar29 = puVar5;
      do {
        if (iVar12 == 0) break;
        iVar12 = iVar12 + -1;
        bVar35 = *puVar19 == *puVar29;
        puVar19 = puVar19 + 1;
        puVar29 = puVar29 + 1;
      } while (bVar35);
      if (bVar35) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      *(undefined4 *)puVar5 = *(undefined4 *)puVar6;
      puVar5[2] = puVar6[2];
      GVar36 = CASE_12;
      goto cf_common_exit_0041BE5F;
    }
    if (uVar13 < 0x173) {
      if (uVar13 != 0x172) {
        if (uVar13 == 0x14) {
          if ((g_cPanel_00801688 != (CPanelTy *)0x0) &&
             (iVar12 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_1), iVar12 != 0)) {
            (*this_00->vtable->vfunc_30)(this_00->field_0121);
            iVar12 = 0x1b;
            bVar35 = true;
            psVar20 = (short *)this_00->field_0121;
            psVar30 = (short *)this_00->field_011D;
            do {
              if (iVar12 == 0) break;
              iVar12 = iVar12 + -1;
              bVar35 = *psVar20 == *psVar30;
              psVar20 = psVar20 + 1;
              psVar30 = psVar30 + 1;
            } while (bVar35);
            if (!bVar35) {
              uVar13 = STAllPlayersC::GetNInTmp(0,0);
              if ((short)uVar13 == 1) {
                puVar15 = (undefined4 *)this_00->field_0121;
              }
              else {
                puVar15 = (undefined4 *)this_00->field_0121;
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                if (*(char *)((int)puVar15 + 0x1b) == *(char *)(this_00->field_011D + 0x1b)) {
                  iVar12 = 5;
                  bVar35 = true;
                  pcVar16 = (char *)((int)puVar15 + 0x2a);
                  pcVar25 = (char *)(this_00->field_011D + 0x2a);
                  do {
                    if (iVar12 == 0) break;
                    iVar12 = iVar12 + -1;
                    bVar35 = *pcVar16 == *pcVar25;
                    pcVar16 = pcVar16 + 1;
                    pcVar25 = pcVar25 + 1;
                  } while (bVar35);
                  if (bVar35) goto LAB_0041b128;
                }
              }
              puVar24 = (undefined4 *)this_00->field_011D;
              for (iVar12 = 0xd; iVar12 != 0; iVar12 = iVar12 + -1) {
                *puVar24 = *puVar15;
                puVar15 = puVar15 + 1;
                puVar24 = puVar24 + 1;
              }
              *(undefined2 *)puVar24 = *(undefined2 *)puVar15;
              thunk_FUN_0043fc50(CASE_1,0);
            }
          }
LAB_0041b128:
          if ((g_cPanel_00801688 != (CPanelTy *)0x0) &&
             (iVar12 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_2), iVar12 != 0)) {
            (*this_00->vtable->vfunc_34)(this_00->field_0129);
            iVar12 = 0x17;
            bVar35 = true;
            piVar18 = (int *)this_00->field_0129;
            piVar28 = (int *)this_00->field_0125;
            do {
              if (iVar12 == 0) break;
              iVar12 = iVar12 + -1;
              bVar35 = *piVar18 == *piVar28;
              piVar18 = piVar18 + 1;
              piVar28 = piVar28 + 1;
            } while (bVar35);
            if (!bVar35) {
              piVar18 = (int *)this_00->field_0129;
              piVar28 = (int *)this_00->field_0125;
              for (iVar12 = 0x17; iVar12 != 0; iVar12 = iVar12 + -1) {
                *piVar28 = *piVar18;
                piVar18 = piVar18 + 1;
                piVar28 = piVar28 + 1;
              }
              thunk_FUN_0043fc50(CASE_2,0);
            }
          }
          if ((g_cPanel_00801688 != (CPanelTy *)0x0) &&
             (iVar12 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_8), iVar12 != 0)) {
            puVar15 = &this_00->field_0171;
            if ((DArrayTy *)this_00->field_0171 != (DArrayTy *)0x0) {
              DArrayDestroy((DArrayTy *)this_00->field_0171);
            }
            if ((DArrayTy *)this_00->field_0175 != (DArrayTy *)0x0) {
              DArrayDestroy((DArrayTy *)this_00->field_0175);
            }
            if ((DArrayTy *)this_00->field_0179 != (DArrayTy *)0x0) {
              DArrayDestroy((DArrayTy *)this_00->field_0179);
            }
            if ((DArrayTy *)this_00->field_017D != (DArrayTy *)0x0) {
              DArrayDestroy((DArrayTy *)this_00->field_017D);
            }
            if ((DArrayTy *)this_00->field_0181 != (DArrayTy *)0x0) {
              DArrayDestroy((DArrayTy *)this_00->field_0181);
            }
            *puVar15 = 0;
            this_00->field_0175 = 0;
            this_00->field_0179 = 0;
            this_00->field_017D = 0;
            this_00->field_0181 = 0;
            (*this_00->vtable->vfunc_40)(puVar15);
            local_c = (DArrayTy *)this_00->field_015D;
            bVar35 = false;
            dVar2 = *(dword *)(*puVar15 + 0xc);
            if (dVar2 == local_c->count) {
              iVar12 = dVar2 * 0x30;
              bVar34 = true;
              pcVar16 = *(char **)(*puVar15 + 0x1c);
              pcVar25 = local_c->data;
              do {
                if (iVar12 == 0) break;
                iVar12 = iVar12 + -1;
                bVar34 = *pcVar16 == *pcVar25;
                pcVar16 = pcVar16 + 1;
                pcVar25 = pcVar25 + 1;
              } while (bVar34);
              if (!bVar34) goto LAB_0041b237;
            }
            else {
LAB_0041b237:
              bVar35 = true;
            }
            if (!bVar35) {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              iVar12 = *(int *)(this_00->field_0175 + 0xc);
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              if (iVar12 == *(int *)(this_00->field_0161 + 0xc)) {
                iVar12 = iVar12 * 0x30;
                bVar34 = true;
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                pcVar16 = *(char **)(this_00->field_0175 + 0x1c);
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                pcVar25 = *(char **)(this_00->field_0161 + 0x1c);
                do {
                  if (iVar12 == 0) break;
                  iVar12 = iVar12 + -1;
                  bVar34 = *pcVar16 == *pcVar25;
                  pcVar16 = pcVar16 + 1;
                  pcVar25 = pcVar25 + 1;
                } while (bVar34);
                if (!bVar34) goto LAB_0041b26c;
              }
              else {
LAB_0041b26c:
                bVar35 = true;
              }
              if (!bVar35) {
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                iVar12 = *(int *)(this_00->field_0179 + 0xc);
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                if (iVar12 == *(int *)(this_00->field_0165 + 0xc)) {
                  iVar12 = iVar12 * 0x30;
                  bVar34 = true;
                  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                  pcVar16 = *(char **)(this_00->field_0179 + 0x1c);
                  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                  pcVar25 = *(char **)(this_00->field_0165 + 0x1c);
                  do {
                    if (iVar12 == 0) break;
                    iVar12 = iVar12 + -1;
                    bVar34 = *pcVar16 == *pcVar25;
                    pcVar16 = pcVar16 + 1;
                    pcVar25 = pcVar25 + 1;
                  } while (bVar34);
                  if (!bVar34) goto LAB_0041b2a1;
                }
                else {
LAB_0041b2a1:
                  bVar35 = true;
                }
                if (!bVar35) {
                  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                  iVar12 = *(int *)(this_00->field_017D + 0xc);
                  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                  if (iVar12 == *(int *)(this_00->field_0169 + 0xc)) {
                    iVar12 = iVar12 * 0x30;
                    bVar34 = true;
                    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                    pcVar16 = *(char **)(this_00->field_017D + 0x1c);
                    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                    pcVar25 = *(char **)(this_00->field_0169 + 0x1c);
                    do {
                      if (iVar12 == 0) break;
                      iVar12 = iVar12 + -1;
                      bVar34 = *pcVar16 == *pcVar25;
                      pcVar16 = pcVar16 + 1;
                      pcVar25 = pcVar25 + 1;
                    } while (bVar34);
                    if (!bVar34) goto LAB_0041b2d2;
                  }
                  else {
LAB_0041b2d2:
                    bVar35 = true;
                  }
                  if (!bVar35) {
                    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                    iVar12 = *(int *)(this_00->field_0181 + 0xc);
                    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                    if (iVar12 == *(int *)(this_00->field_016D + 0xc)) {
                      iVar12 = iVar12 * 0x30;
                      bVar34 = true;
                      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                      pcVar16 = *(char **)(this_00->field_0181 + 0x1c);
                      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                      pcVar25 = *(char **)(this_00->field_016D + 0x1c);
                      do {
                        if (iVar12 == 0) break;
                        iVar12 = iVar12 + -1;
                        bVar34 = *pcVar16 == *pcVar25;
                        pcVar16 = pcVar16 + 1;
                        pcVar25 = pcVar25 + 1;
                      } while (bVar34);
                      if (bVar34) goto LAB_0041b308;
                    }
                    bVar35 = true;
                  }
                }
              }
            }
LAB_0041b308:
            if (bVar35) {
              if (local_c != (DArrayTy *)0x0) {
                DArrayDestroy(local_c);
              }
              if ((DArrayTy *)this_00->field_0161 != (DArrayTy *)0x0) {
                DArrayDestroy((DArrayTy *)this_00->field_0161);
              }
              if ((DArrayTy *)this_00->field_0165 != (DArrayTy *)0x0) {
                DArrayDestroy((DArrayTy *)this_00->field_0165);
              }
              if ((DArrayTy *)this_00->field_0169 != (DArrayTy *)0x0) {
                DArrayDestroy((DArrayTy *)this_00->field_0169);
              }
              if ((DArrayTy *)this_00->field_016D != (DArrayTy *)0x0) {
                DArrayDestroy((DArrayTy *)this_00->field_016D);
              }
              this_00->field_015D = 0;
              this_00->field_0161 = 0;
              this_00->field_0165 = 0;
              this_00->field_0169 = 0;
              this_00->field_016D = 0;
              Library::DKW::TBL::FUN_006afe40(&this_00->field_015D,(uint *)this_00->field_0171);
              Library::DKW::TBL::FUN_006afe40(&this_00->field_0161,(uint *)this_00->field_0175);
              Library::DKW::TBL::FUN_006afe40(&this_00->field_0165,(uint *)this_00->field_0179);
              Library::DKW::TBL::FUN_006afe40(&this_00->field_0169,(uint *)this_00->field_017D);
              Library::DKW::TBL::FUN_006afe40(&this_00->field_016D,(uint *)this_00->field_0181);
              thunk_FUN_0043fc50(CASE_8,0);
            }
          }
          if ((g_cPanel_00801688 != (CPanelTy *)0x0) &&
             (iVar12 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_B), iVar12 != 0)) {
            (*this_00->vtable->vfunc_4C)(this_00->field_0199);
            pAVar3 = this_00->field_0195;
            local_c = (DArrayTy *)this_00->field_0199;
            iVar12 = 0x13;
            bVar35 = true;
            pDVar21 = local_c;
            pAVar26 = pAVar3;
            do {
              if (iVar12 == 0) break;
              iVar12 = iVar12 + -1;
              bVar35 = (char)pDVar21->flags == *(char *)&pAVar26->field_0000;
              pDVar21 = (DArrayTy *)((int)&pDVar21->flags + 1);
              pAVar26 = (AnonPointee_STGameObjC_0195 *)((int)&pAVar26->field_0000 + 1);
            } while (bVar35);
            if (!bVar35) {
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
             (iVar12 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_E), iVar12 != 0)) {
            (*this_00->vtable->vfunc_58)(this_00->field_01B1);
            pAVar4 = this_00->field_01AD;
            local_8 = (AnonShape_0041AF40_EF4C5356 *)this_00->field_01B1;
            iVar12 = 0xb;
            bVar35 = true;
            pAVar17 = (AnonPointee_STGameObjC_01B1 *)local_8;
            pAVar27 = pAVar4;
            do {
              if (iVar12 == 0) break;
              iVar12 = iVar12 + -1;
              bVar35 = *(char *)&pAVar17->field_0000 == *(char *)&pAVar27->field_0000;
              pAVar17 = (AnonPointee_STGameObjC_01B1 *)((int)&pAVar17->field_0000 + 1);
              pAVar27 = (AnonPointee_STGameObjC_01AD *)((int)&pAVar27->field_0000 + 1);
            } while (bVar35);
            if (!bVar35) {
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
          iVar12 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_10);
          if (iVar12 == 0) {
            g_currentExceptionFrame = local_58.previous;
            return 0;
          }
          (*this_00->vtable->vfunc_60)(this_00->field_01C1);
          iVar12 = 0x90;
          bVar35 = true;
          piVar18 = (int *)this_00->field_01C1;
          piVar28 = (int *)this_00->field_01BD;
          do {
            if (iVar12 == 0) break;
            iVar12 = iVar12 + -1;
            bVar35 = *piVar18 == *piVar28;
            piVar18 = piVar18 + 1;
            piVar28 = piVar28 + 1;
          } while (bVar35);
          if (bVar35) {
            g_currentExceptionFrame = local_58.previous;
            return 0;
          }
          piVar18 = (int *)this_00->field_01C1;
          piVar28 = (int *)this_00->field_01BD;
          for (iVar12 = 0x90; iVar12 != 0; iVar12 = iVar12 + -1) {
            *piVar28 = *piVar18;
            piVar18 = piVar18 + 1;
            piVar28 = piVar28 + 1;
          }
          GVar36 = CASE_10;
          goto cf_common_exit_0041BE5F;
        }
        if (uVar13 != 0x5a) goto cf_common_exit_0041B6C6;
      }
    }
    else if (uVar13 != 0x1a4) {
cf_common_exit_0041B6C6:
      iVar12 = ReportDebugMessage("E:\\__titans\\wlad\\Tc_gobj.cpp",0x7e4,0,0,"%s",
                                  "STGameObjC::GetMessagge MESS_ID_NONE unknown game type");
      if (iVar12 == 0) {
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
    iVar12 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_5);
    if (iVar12 != 0) {
      (*this_00->vtable->vfunc_30)(this_00->field_0121);
      iVar12 = 0x1b;
      bVar35 = true;
      psVar20 = (short *)this_00->field_0121;
      psVar30 = (short *)this_00->field_011D;
      do {
        if (iVar12 == 0) break;
        iVar12 = iVar12 + -1;
        bVar35 = *psVar20 == *psVar30;
        psVar20 = psVar20 + 1;
        psVar30 = psVar30 + 1;
      } while (bVar35);
      if (!bVar35) {
        psVar20 = (short *)this_00->field_0121;
        psVar30 = (short *)this_00->field_011D;
        for (iVar12 = 0xd; iVar12 != 0; iVar12 = iVar12 + -1) {
          *(undefined4 *)psVar30 = *(undefined4 *)psVar20;
          psVar20 = psVar20 + 2;
          psVar30 = psVar30 + 2;
        }
        *psVar30 = *psVar20;
        thunk_FUN_0043fc50(CASE_5,0);
      }
    }
    if (g_cPanel_00801688 == (CPanelTy *)0x0) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    iVar12 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_4);
    if (iVar12 == 0) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    (*this_00->vtable->vfunc_34)(this_00->field_0129);
    iVar12 = 0x17;
    bVar35 = true;
    piVar18 = (int *)this_00->field_0129;
    piVar28 = (int *)this_00->field_0125;
    do {
      if (iVar12 == 0) break;
      iVar12 = iVar12 + -1;
      bVar35 = *piVar18 == *piVar28;
      piVar18 = piVar18 + 1;
      piVar28 = piVar28 + 1;
    } while (bVar35);
    if (bVar35) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    piVar18 = (int *)this_00->field_0129;
    piVar28 = (int *)this_00->field_0125;
    for (iVar12 = 0x17; iVar12 != 0; iVar12 = iVar12 + -1) {
      *piVar28 = *piVar18;
      piVar18 = piVar18 + 1;
      piVar28 = piVar28 + 1;
    }
    GVar36 = CASE_4;
    goto cf_common_exit_0041BE5F;
  }
  if (uVar13 == 0x1b8) goto LAB_0041bdb3;
  if (uVar13 != 1000) {
    if (uVar13 != 0x3e9) goto cf_common_exit_0041B6C6;
    if (g_cPanel_00801688 == (CPanelTy *)0x0) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    iVar12 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_4);
    if (iVar12 != 0) {
      (*this_00->vtable->vfunc_34)(this_00->field_0129);
      iVar12 = 0x17;
      bVar35 = true;
      piVar18 = (int *)this_00->field_0129;
      piVar28 = (int *)this_00->field_0125;
      do {
        if (iVar12 == 0) break;
        iVar12 = iVar12 + -1;
        bVar35 = *piVar18 == *piVar28;
        piVar18 = piVar18 + 1;
        piVar28 = piVar28 + 1;
      } while (bVar35);
      if (!bVar35) {
        piVar18 = (int *)this_00->field_0129;
        piVar28 = (int *)this_00->field_0125;
        for (iVar12 = 0x17; iVar12 != 0; iVar12 = iVar12 + -1) {
          *piVar28 = *piVar18;
          piVar18 = piVar18 + 1;
          piVar28 = piVar28 + 1;
        }
        thunk_FUN_0043fc50(CASE_4,0);
      }
    }
    if (g_cPanel_00801688 == (CPanelTy *)0x0) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    iVar12 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_5);
    if (iVar12 == 0) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    (*this_00->vtable->vfunc_30)(this_00->field_0121);
    iVar12 = 0x1b;
    bVar35 = true;
    psVar20 = (short *)this_00->field_0121;
    psVar30 = (short *)this_00->field_011D;
    do {
      if (iVar12 == 0) break;
      iVar12 = iVar12 + -1;
      bVar35 = *psVar20 == *psVar30;
      psVar20 = psVar20 + 1;
      psVar30 = psVar30 + 1;
    } while (bVar35);
    if (bVar35) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    psVar20 = (short *)this_00->field_0121;
    psVar30 = (short *)this_00->field_011D;
    for (iVar12 = 0xd; iVar12 != 0; iVar12 = iVar12 + -1) {
      *(undefined4 *)psVar30 = *(undefined4 *)psVar20;
      psVar20 = psVar20 + 2;
      psVar30 = psVar30 + 2;
    }
    *psVar30 = *psVar20;
    GVar36 = CASE_5;
    goto cf_common_exit_0041BE5F;
  }
  if (g_cPanel_00801688 == (CPanelTy *)0x0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  iVar12 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_4);
  if (iVar12 != 0) {
    (*this_00->vtable->vfunc_34)(this_00->field_0129);
    iVar12 = 0x17;
    bVar35 = true;
    piVar18 = (int *)this_00->field_0129;
    piVar28 = (int *)this_00->field_0125;
    do {
      if (iVar12 == 0) break;
      iVar12 = iVar12 + -1;
      bVar35 = *piVar18 == *piVar28;
      piVar18 = piVar18 + 1;
      piVar28 = piVar28 + 1;
    } while (bVar35);
    if (!bVar35) {
      piVar18 = (int *)this_00->field_0129;
      piVar28 = (int *)this_00->field_0125;
      for (iVar12 = 0x17; iVar12 != 0; iVar12 = iVar12 + -1) {
        *piVar28 = *piVar18;
        piVar18 = piVar18 + 1;
        piVar28 = piVar28 + 1;
      }
      thunk_FUN_0043fc50(CASE_4,0);
    }
  }
  if (g_cPanel_00801688 == (CPanelTy *)0x0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  iVar12 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_5);
  if (iVar12 != 0) {
    (*this_00->vtable->vfunc_30)(this_00->field_0121);
    iVar12 = 0x1b;
    bVar35 = true;
    psVar20 = (short *)this_00->field_0121;
    psVar30 = (short *)this_00->field_011D;
    do {
      if (iVar12 == 0) break;
      iVar12 = iVar12 + -1;
      bVar35 = *psVar20 == *psVar30;
      psVar20 = psVar20 + 1;
      psVar30 = psVar30 + 1;
    } while (bVar35);
    if (!bVar35) {
      psVar20 = (short *)this_00->field_0121;
      psVar30 = (short *)this_00->field_011D;
      for (iVar12 = 0xd; iVar12 != 0; iVar12 = iVar12 + -1) {
        *(undefined4 *)psVar30 = *(undefined4 *)psVar20;
        psVar20 = psVar20 + 2;
        psVar30 = psVar30 + 2;
      }
      *psVar30 = *psVar20;
      thunk_FUN_0043fc50(CASE_5,0);
    }
  }
  if (g_cPanel_00801688 == (CPanelTy *)0x0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  iVar12 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_6);
  if (iVar12 != 0) {
    puVar15 = &this_00->field_0135;
    if ((DArrayTy *)this_00->field_0135 != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)this_00->field_0135);
    }
    if ((DArrayTy *)this_00->field_0139 != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)this_00->field_0139);
    }
    *puVar15 = 0;
    this_00->field_0139 = 0;
    (*this_00->vtable->vfunc_38)(puVar15);
    bVar35 = false;
    iVar12 = *(int *)(*puVar15 + 0xc);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (iVar12 == *(int *)(this_00->field_012D + 0xc)) {
      iVar12 = iVar12 * 0x30;
      bVar34 = true;
      pcVar16 = *(char **)(*puVar15 + 0x1c);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      pcVar25 = *(char **)(this_00->field_012D + 0x1c);
      do {
        if (iVar12 == 0) break;
        iVar12 = iVar12 + -1;
        bVar34 = *pcVar16 == *pcVar25;
        pcVar16 = pcVar16 + 1;
        pcVar25 = pcVar25 + 1;
      } while (bVar34);
      if (!bVar34) goto LAB_0041b8f6;
    }
    else {
LAB_0041b8f6:
      bVar35 = true;
    }
    if (!bVar35) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar12 = *(int *)(this_00->field_0139 + 0xc);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (iVar12 == *(int *)(this_00->field_0131 + 0xc)) {
        iVar12 = iVar12 * 0x30;
        bVar34 = true;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        pcVar16 = *(char **)(this_00->field_0139 + 0x1c);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        pcVar25 = *(char **)(this_00->field_0131 + 0x1c);
        do {
          if (iVar12 == 0) break;
          iVar12 = iVar12 + -1;
          bVar34 = *pcVar16 == *pcVar25;
          pcVar16 = pcVar16 + 1;
          pcVar25 = pcVar25 + 1;
        } while (bVar34);
        if (bVar34) goto LAB_0041b92c;
      }
      bVar35 = true;
    }
LAB_0041b92c:
    if (bVar35) {
      if ((DArrayTy *)this_00->field_012D != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)this_00->field_012D);
      }
      if ((DArrayTy *)this_00->field_0131 != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)this_00->field_0131);
      }
      this_00->field_012D = 0;
      this_00->field_0131 = 0;
      Library::DKW::TBL::FUN_006afe40(&this_00->field_012D,(uint *)this_00->field_0135);
      Library::DKW::TBL::FUN_006afe40(&this_00->field_0131,(uint *)this_00->field_0139);
      GVar36 = CASE_6;
      goto cf_common_exit_0041BE5F;
    }
  }
  if (g_cPanel_00801688 == (CPanelTy *)0x0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  iVar12 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_7);
  if (iVar12 != 0) {
    puVar15 = &this_00->field_014D;
    if ((DArrayTy *)this_00->field_014D != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)this_00->field_014D);
    }
    if ((DArrayTy *)this_00->field_0151 != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)this_00->field_0151);
    }
    if ((DArrayTy *)this_00->field_0155 != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)this_00->field_0155);
    }
    if ((DArrayTy *)this_00->field_0159 != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)this_00->field_0159);
    }
    *puVar15 = 0;
    this_00->field_0151 = 0;
    this_00->field_0155 = 0;
    this_00->field_0159 = 0;
    (*this_00->vtable->vfunc_3C)(puVar15);
    local_c = (DArrayTy *)this_00->field_013D;
    bVar35 = false;
    dVar2 = *(dword *)(*puVar15 + 0xc);
    if (dVar2 == local_c->count) {
      iVar12 = dVar2 * 0x30;
      bVar34 = true;
      pcVar16 = *(char **)(*puVar15 + 0x1c);
      pcVar25 = local_c->data;
      do {
        if (iVar12 == 0) break;
        iVar12 = iVar12 + -1;
        bVar34 = *pcVar16 == *pcVar25;
        pcVar16 = pcVar16 + 1;
        pcVar25 = pcVar25 + 1;
      } while (bVar34);
      if (!bVar34) goto LAB_0041ba2a;
    }
    else {
LAB_0041ba2a:
      bVar35 = true;
    }
    if (!bVar35) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar12 = *(int *)(this_00->field_0151 + 0xc);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (iVar12 == *(int *)(this_00->field_0141 + 0xc)) {
        iVar12 = iVar12 * 0x30;
        bVar34 = true;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        pcVar16 = *(char **)(this_00->field_0151 + 0x1c);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        pcVar25 = *(char **)(this_00->field_0141 + 0x1c);
        do {
          if (iVar12 == 0) break;
          iVar12 = iVar12 + -1;
          bVar34 = *pcVar16 == *pcVar25;
          pcVar16 = pcVar16 + 1;
          pcVar25 = pcVar25 + 1;
        } while (bVar34);
        if (!bVar34) goto LAB_0041ba5f;
      }
      else {
LAB_0041ba5f:
        bVar35 = true;
      }
      if (!bVar35) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar12 = *(int *)(this_00->field_0155 + 0xc);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (iVar12 == *(int *)(this_00->field_0145 + 0xc)) {
          iVar12 = iVar12 * 0x30;
          bVar34 = true;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          pcVar16 = *(char **)(this_00->field_0155 + 0x1c);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          pcVar25 = *(char **)(this_00->field_0145 + 0x1c);
          do {
            if (iVar12 == 0) break;
            iVar12 = iVar12 + -1;
            bVar34 = *pcVar16 == *pcVar25;
            pcVar16 = pcVar16 + 1;
            pcVar25 = pcVar25 + 1;
          } while (bVar34);
          if (!bVar34) goto LAB_0041ba90;
        }
        else {
LAB_0041ba90:
          bVar35 = true;
        }
        if (!bVar35) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          iVar12 = *(int *)(this_00->field_0159 + 0xc);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if (iVar12 == *(int *)(this_00->field_0149 + 0xc)) {
            iVar12 = iVar12 * 0x30;
            bVar34 = true;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            pcVar16 = *(char **)(this_00->field_0159 + 0x1c);
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            pcVar25 = *(char **)(this_00->field_0149 + 0x1c);
            do {
              if (iVar12 == 0) break;
              iVar12 = iVar12 + -1;
              bVar34 = *pcVar16 == *pcVar25;
              pcVar16 = pcVar16 + 1;
              pcVar25 = pcVar25 + 1;
            } while (bVar34);
            if (bVar34) goto LAB_0041bac6;
          }
          bVar35 = true;
        }
      }
    }
LAB_0041bac6:
    if (bVar35) {
      if (local_c != (DArrayTy *)0x0) {
        DArrayDestroy(local_c);
      }
      if ((DArrayTy *)this_00->field_0141 != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)this_00->field_0141);
      }
      if ((DArrayTy *)this_00->field_0145 != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)this_00->field_0145);
      }
      if ((DArrayTy *)this_00->field_0149 != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)this_00->field_0149);
      }
      this_00->field_013D = 0;
      this_00->field_0141 = 0;
      this_00->field_0145 = 0;
      this_00->field_0149 = 0;
      Library::DKW::TBL::FUN_006afe40(&this_00->field_013D,(uint *)this_00->field_014D);
      Library::DKW::TBL::FUN_006afe40(&this_00->field_0141,(uint *)this_00->field_0151);
      Library::DKW::TBL::FUN_006afe40(&this_00->field_0145,(uint *)this_00->field_0155);
      Library::DKW::TBL::FUN_006afe40(&this_00->field_0149,(uint *)this_00->field_0159);
      GVar36 = CASE_7;
      goto cf_common_exit_0041BE5F;
    }
  }
  if (g_cPanel_00801688 == (CPanelTy *)0x0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  iVar12 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_9);
  if (iVar12 != 0) {
    (*this_00->vtable->vfunc_44)(this_00->field_0189);
    iVar12 = 0x129;
    bVar35 = true;
    pcVar16 = (char *)this_00->field_0189;
    pcVar25 = (char *)this_00->field_0185;
    do {
      if (iVar12 == 0) break;
      iVar12 = iVar12 + -1;
      bVar35 = *pcVar16 == *pcVar25;
      pcVar16 = pcVar16 + 1;
      pcVar25 = pcVar25 + 1;
    } while (bVar35);
    if (!bVar35) {
      pcVar16 = (char *)this_00->field_0189;
      pcVar25 = (char *)this_00->field_0185;
      for (iVar12 = 0x4a; iVar12 != 0; iVar12 = iVar12 + -1) {
        *(undefined4 *)pcVar25 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
        pcVar25 = pcVar25 + 4;
      }
      *pcVar25 = *pcVar16;
      thunk_FUN_0043fc50(CASE_9,0);
    }
  }
  if (g_cPanel_00801688 == (CPanelTy *)0x0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  iVar12 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_A);
  if (iVar12 != 0) {
    (*this_00->vtable->vfunc_48)(this_00->field_0191);
    pAVar7 = this_00->field_018D;
    local_c = (DArrayTy *)this_00->field_0191;
    iVar12 = 4;
    bVar35 = true;
    pDVar21 = local_c;
    pAVar31 = pAVar7;
    do {
      if (iVar12 == 0) break;
      iVar12 = iVar12 + -1;
      bVar35 = pDVar21->flags == pAVar31->field_0000;
      pDVar21 = (DArrayTy *)&pDVar21->iteratorIndex;
      pAVar31 = (AnonPointee_STGameObjC_018D *)&pAVar31->field_0004;
    } while (bVar35);
    if (!bVar35) {
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
  iVar12 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_C);
  if (iVar12 != 0) {
    puVar15 = &this_00->field_01A1;
    local_14 = (AnonPointee_STGameObjC_01A9 *)puVar15;
    if ((DArrayTy *)this_00->field_01A1 != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)this_00->field_01A1);
      *puVar15 = 0;
    }
    (*this_00->vtable->vfunc_50)(puVar15);
    pDVar21 = (DArrayTy *)this_00->field_019D;
    local_c = (DArrayTy *)&this_00->field_019D;
    local_8 = (AnonShape_0041AF40_EF4C5356 *)0x0;
    dVar2 = *(dword *)(*puVar15 + 0xc);
    if (dVar2 == pDVar21->count) {
      iVar12 = dVar2 * 0x30;
      bVar35 = true;
      pcVar16 = *(char **)(*puVar15 + 0x1c);
      pcVar25 = pDVar21->data;
      do {
        if (iVar12 == 0) break;
        iVar12 = iVar12 + -1;
        bVar35 = *pcVar16 == *pcVar25;
        pcVar16 = pcVar16 + 1;
        pcVar25 = pcVar25 + 1;
      } while (bVar35);
      if (!bVar35) goto LAB_0041bcad;
    }
    else {
LAB_0041bcad:
      local_8 = (AnonShape_0041AF40_EF4C5356 *)0x1;
    }
    if (local_8 == (AnonShape_0041AF40_EF4C5356 *)0x1) {
      if (pDVar21 != (DArrayTy *)0x0) {
        DArrayDestroy(pDVar21);
        local_c->flags = 0;
      }
      Library::DKW::TBL::FUN_006afe40((int *)local_c,(uint *)local_14->field_0000);
      GVar36 = CASE_C;
      goto cf_common_exit_0041BE5F;
    }
  }
  if (g_cPanel_00801688 == (CPanelTy *)0x0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  iVar12 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_D);
  if (iVar12 != 0) {
    (*this_00->vtable->vfunc_54)(this_00->field_01A9);
    pAVar8 = this_00->field_01A5;
    local_14 = this_00->field_01A9;
    iVar12 = 3;
    bVar35 = true;
    pAVar22 = local_14;
    pAVar32 = pAVar8;
    do {
      if (iVar12 == 0) break;
      iVar12 = iVar12 + -1;
      bVar35 = (AnonPointee_STGameObjC_01A5 *)pAVar22->field_0000 ==
               (AnonPointee_STGameObjC_01A5 *)pAVar32->field_0000;
      pAVar22 = (AnonPointee_STGameObjC_01A9 *)&pAVar22->field_0004;
      pAVar32 = (AnonPointee_STGameObjC_01A5 *)&pAVar32->field_0004;
    } while (bVar35);
    if (!bVar35) {
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
  iVar12 = thunk_FUN_004fab10(g_cPanel_00801688,CASE_F);
  if (iVar12 == 0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  (*this_00->vtable->vfunc_5C)(this_00->field_01B9);
  pAVar9 = this_00->field_01B5;
  pAVar10 = this_00->field_01B9;
  iVar12 = 0xb;
  bVar35 = true;
  pAVar23 = pAVar10;
  pAVar33 = pAVar9;
  do {
    if (iVar12 == 0) break;
    iVar12 = iVar12 + -1;
    bVar35 = *(char *)&pAVar23->field_0000 == *(char *)&pAVar33->field_0000;
    pAVar23 = (AnonPointee_STGameObjC_01B9 *)((int)&pAVar23->field_0000 + 1);
    pAVar33 = (AnonPointee_STGameObjC_01B5 *)((int)&pAVar33->field_0000 + 1);
  } while (bVar35);
  if (bVar35) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  pAVar9->field_0000 = pAVar10->field_0000;
  pAVar9->field_0004 = pAVar10->field_0004;
  pAVar9->field_0008 = pAVar10->field_0008;
  pAVar9->field_000A = pAVar10->field_000A;
  GVar36 = CASE_F;
cf_common_exit_0041BE5F:
  thunk_FUN_0043fc50(GVar36,0);
  g_currentExceptionFrame = local_58.previous;
  return 0;
}

