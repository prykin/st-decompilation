#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tc_gobj.cpp
   STGameObjC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00403EBD|0041AF40; family_names=STGameObjC::GetMessage; ret4=3;
   direct_offsets={10:6,14:1,18:1,1c:26} */

int __thiscall STGameObjC::GetMessage(STGameObjC *this,STMessage *message)

{
  DArrayTy **arg_1;
  undefined4 *puVar1;
  uint *puVar2;
  dword dVar3;
  AnonPointee_STGameObjC_0195 *pAVar4;
  AnonPointee_STGameObjC_01AD *pAVar5;
  ushort *puVar6;
  ushort *puVar7;
  AnonPointee_STGameObjC_018D *pAVar8;
  AnonPointee_STGameObjC_01A5 *pAVar9;
  AnonPointee_STGameObjC_01B5 *pAVar10;
  AnonPointee_STGameObjC_01B9 *pAVar11;
  code *pcVar12;
  STGameObjC *this_00;
  int iVar13;
  uint uVar14;
  int iVar15;
  byte *pbVar16;
  char *pcVar17;
  AnonPointee_STGameObjC_01B1 *pAVar18;
  int *piVar19;
  ushort *puVar20;
  byte *pbVar21;
  DArrayTy *pDVar22;
  AnonPointee_STGameObjC_01A9 *pAVar23;
  AnonPointee_STGameObjC_01B9 *pAVar24;
  byte *pbVar25;
  char *pcVar26;
  AnonPointee_STGameObjC_0195 *pAVar27;
  AnonPointee_STGameObjC_01AD *pAVar28;
  int *piVar29;
  ushort *puVar30;
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
  iVar13 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  this_00 = local_10;
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
    puVar2 = (message->arg0).ptr;
    if (puVar2 == (uint *)0x0) {
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\Tc_gobj.cpp",0x678);
    }
    this_00->field_0020 = *puVar2;
    this_00->field_0024 = puVar2[1];
    this_00->field_002C = puVar2[4];
    this_00->field_0028 = puVar2[2];
    iVar13 = this_00->field_0018 * DAT_00808754;
    this_00->field_001C = iVar13;
    uVar14 = iVar13 * 0x41c64e6d + 0x3039;
    this_00->field_001C = uVar14;
    this_00->field_00F8 = (short)((ulonglong)(uVar14 >> 0x10) % 0x1f) + 0x1e;
    this_00->vfunc_CC();
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  if (-1 < this_00->field_008F) {
    this_00->field_008F = this_00->field_008F + 1;
  }
  this_00->vfunc_D0();
  if (this_00->field_01CD != 1) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  uVar14 = this_00->field_0020;
  if (uVar14 < 0x1af) {
    if (uVar14 == 0x1ae) {
      if (g_cPanel_00801688 == (CPanelTy *)0x0) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      iVar13 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_1);
      if (iVar13 != 0) {
        (*this_00->vtable->vfunc_30)(this_00->field_0121);
        iVar13 = 0x1b;
        bVar35 = true;
        pbVar21 = this_00->field_0121;
        pbVar16 = this_00->field_011D;
        do {
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          bVar35 = *(short *)pbVar21 == *(short *)pbVar16;
          pbVar21 = pbVar21 + 2;
          pbVar16 = pbVar16 + 2;
        } while (bVar35);
        if (!bVar35) {
          pbVar21 = this_00->field_0121;
          pbVar16 = this_00->field_011D;
          for (iVar13 = 0xd; iVar13 != 0; iVar13 = iVar13 + -1) {
            *(undefined4 *)pbVar16 = *(undefined4 *)pbVar21;
            pbVar21 = pbVar21 + 4;
            pbVar16 = pbVar16 + 4;
          }
          *(short *)pbVar16 = *(short *)pbVar21;
          thunk_FUN_0043fc50(CASE_1,0);
        }
      }
      if (g_cPanel_00801688 == (CPanelTy *)0x0) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      iVar13 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_2);
      if (iVar13 != 0) {
        (*this_00->vtable->vfunc_34)(this_00->field_0129);
        iVar13 = 0x17;
        bVar35 = true;
        piVar19 = this_00->field_0129;
        piVar29 = this_00->field_0125;
        do {
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          bVar35 = *piVar19 == *piVar29;
          piVar19 = piVar19 + 1;
          piVar29 = piVar29 + 1;
        } while (bVar35);
        if (!bVar35) {
          piVar19 = this_00->field_0129;
          piVar29 = this_00->field_0125;
          memmove(piVar29, piVar19, 0x5c); /* compiler REP MOVS byte copy */
          thunk_FUN_0043fc50(CASE_2,0);
        }
      }
      if (g_cPanel_00801688 == (CPanelTy *)0x0) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      iVar13 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_E);
      if (iVar13 != 0) {
        (*this_00->vtable->vfunc_58)(this_00->field_01B1);
        pAVar5 = this_00->field_01AD;
        local_8 = (AnonShape_0041AF40_EF4C5356 *)this_00->field_01B1;
        iVar13 = 0xb;
        bVar35 = true;
        pAVar18 = (AnonPointee_STGameObjC_01B1 *)local_8;
        pAVar28 = pAVar5;
        do {
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          bVar35 = *(char *)&pAVar18->field_0000 == *(char *)&pAVar28->field_0000;
          pAVar18 = (AnonPointee_STGameObjC_01B1 *)((int)&pAVar18->field_0000 + 1);
          pAVar28 = (AnonPointee_STGameObjC_01AD *)((int)&pAVar28->field_0000 + 1);
        } while (bVar35);
        if (!bVar35) {
          pAVar5->field_0000 = ((AnonPointee_STGameObjC_01B1 *)local_8)->field_0000;
          pAVar5->field_0004 = ((AnonPointee_STGameObjC_01B1 *)local_8)->field_0004;
          pAVar5->field_0008 = ((AnonPointee_STGameObjC_01B1 *)local_8)->field_0008;
          pAVar5->field_000A = ((AnonPointee_STGameObjC_01B1 *)local_8)->field_000A;
          thunk_FUN_0043fc50(CASE_E,0);
        }
      }
      if (g_cPanel_00801688 == (CPanelTy *)0x0) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      iVar13 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_12);
      if (iVar13 == 0) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      (*this_00->vtable->vfunc_64)(this_00->field_01C9);
      puVar6 = this_00->field_01C5;
      puVar7 = this_00->field_01C9;
      iVar13 = 3;
      bVar35 = true;
      puVar20 = puVar7;
      puVar30 = puVar6;
      do {
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        bVar35 = *puVar20 == *puVar30;
        puVar20 = puVar20 + 1;
        puVar30 = puVar30 + 1;
      } while (bVar35);
      if (bVar35) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      *(undefined4 *)puVar6 = *(undefined4 *)puVar7;
      puVar6[2] = puVar7[2];
      GVar36 = CASE_12;
      goto cf_common_exit_0041BE5F;
    }
    if (uVar14 < 0x173) {
      if (uVar14 != 0x172) {
        if (uVar14 == 0x14) {
          if ((g_cPanel_00801688 != (CPanelTy *)0x0) &&
             (iVar13 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_1), iVar13 != 0)) {
            (*this_00->vtable->vfunc_30)(this_00->field_0121);
            iVar13 = 0x1b;
            bVar35 = true;
            pbVar21 = this_00->field_0121;
            pbVar16 = this_00->field_011D;
            do {
              if (iVar13 == 0) break;
              iVar13 = iVar13 + -1;
              bVar35 = *(short *)pbVar21 == *(short *)pbVar16;
              pbVar21 = pbVar21 + 2;
              pbVar16 = pbVar16 + 2;
            } while (bVar35);
            if (!bVar35) {
              uVar14 = STAllPlayersC::GetNInTmp(0,0);
              if ((short)uVar14 == 1) {
                pbVar21 = this_00->field_0121;
              }
              else {
                pbVar21 = this_00->field_0121;
                if (pbVar21[0x1b] == this_00->field_011D[0x1b]) {
                  iVar13 = 5;
                  bVar35 = true;
                  pbVar16 = pbVar21 + 0x2a;
                  pbVar25 = this_00->field_011D + 0x2a;
                  do {
                    if (iVar13 == 0) break;
                    iVar13 = iVar13 + -1;
                    bVar35 = *pbVar16 == *pbVar25;
                    pbVar16 = pbVar16 + 1;
                    pbVar25 = pbVar25 + 1;
                  } while (bVar35);
                  if (bVar35) goto LAB_0041b128;
                }
              }
              pbVar16 = this_00->field_011D;
              for (iVar13 = 0xd; iVar13 != 0; iVar13 = iVar13 + -1) {
                *(undefined4 *)pbVar16 = *(undefined4 *)pbVar21;
                pbVar21 = pbVar21 + 4;
                pbVar16 = pbVar16 + 4;
              }
              *(undefined2 *)pbVar16 = *(undefined2 *)pbVar21;
              thunk_FUN_0043fc50(CASE_1,0);
            }
          }
LAB_0041b128:
          if ((g_cPanel_00801688 != (CPanelTy *)0x0) &&
             (iVar13 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_2), iVar13 != 0)) {
            (*this_00->vtable->vfunc_34)(this_00->field_0129);
            iVar13 = 0x17;
            bVar35 = true;
            piVar19 = this_00->field_0129;
            piVar29 = this_00->field_0125;
            do {
              if (iVar13 == 0) break;
              iVar13 = iVar13 + -1;
              bVar35 = *piVar19 == *piVar29;
              piVar19 = piVar19 + 1;
              piVar29 = piVar29 + 1;
            } while (bVar35);
            if (!bVar35) {
              piVar19 = this_00->field_0129;
              piVar29 = this_00->field_0125;
              for (iVar13 = 0x17; iVar13 != 0; iVar13 = iVar13 + -1) {
                *piVar29 = *piVar19;
                piVar19 = piVar19 + 1;
                piVar29 = piVar29 + 1;
              }
              thunk_FUN_0043fc50(CASE_2,0);
            }
          }
          if ((g_cPanel_00801688 != (CPanelTy *)0x0) &&
             (iVar13 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_8), iVar13 != 0)) {
            arg_1 = &this_00->field_0171;
            if (this_00->field_0171 != (DArrayTy *)0x0) {
              DArrayDestroy(this_00->field_0171);
            }
            if (this_00->field_0175 != (DArrayTy *)0x0) {
              DArrayDestroy(this_00->field_0175);
            }
            if (this_00->field_0179 != (DArrayTy *)0x0) {
              DArrayDestroy(this_00->field_0179);
            }
            if (this_00->field_017D != (DArrayTy *)0x0) {
              DArrayDestroy(this_00->field_017D);
            }
            if (this_00->field_0181 != (DArrayTy *)0x0) {
              DArrayDestroy(this_00->field_0181);
            }
            *arg_1 = (DArrayTy *)0x0;
            this_00->field_0175 = (DArrayTy *)0x0;
            this_00->field_0179 = (DArrayTy *)0x0;
            this_00->field_017D = (DArrayTy *)0x0;
            this_00->field_0181 = (DArrayTy *)0x0;
            (*this_00->vtable->vfunc_40)(arg_1);
            local_c = this_00->field_015D;
            bVar35 = false;
            dVar3 = (*arg_1)->count;
            if (dVar3 == local_c->count) {
              iVar13 = dVar3 * 0x30;
              bVar34 = true;
              pcVar17 = (*arg_1)->data;
              pcVar26 = local_c->data;
              do {
                if (iVar13 == 0) break;
                iVar13 = iVar13 + -1;
                bVar34 = *pcVar17 == *pcVar26;
                pcVar17 = pcVar17 + 1;
                pcVar26 = pcVar26 + 1;
              } while (bVar34);
              if (!bVar34) goto LAB_0041b237;
            }
            else {
LAB_0041b237:
              bVar35 = true;
            }
            if (!bVar35) {
              dVar3 = this_00->field_0175->count;
              if (dVar3 == this_00->field_0161->count) {
                iVar13 = dVar3 * 0x30;
                bVar34 = true;
                pcVar17 = this_00->field_0175->data;
                pcVar26 = this_00->field_0161->data;
                do {
                  if (iVar13 == 0) break;
                  iVar13 = iVar13 + -1;
                  bVar34 = *pcVar17 == *pcVar26;
                  pcVar17 = pcVar17 + 1;
                  pcVar26 = pcVar26 + 1;
                } while (bVar34);
                if (!bVar34) goto LAB_0041b26c;
              }
              else {
LAB_0041b26c:
                bVar35 = true;
              }
              if (!bVar35) {
                dVar3 = this_00->field_0179->count;
                if (dVar3 == this_00->field_0165->count) {
                  iVar13 = dVar3 * 0x30;
                  bVar34 = true;
                  pcVar17 = this_00->field_0179->data;
                  pcVar26 = this_00->field_0165->data;
                  do {
                    if (iVar13 == 0) break;
                    iVar13 = iVar13 + -1;
                    bVar34 = *pcVar17 == *pcVar26;
                    pcVar17 = pcVar17 + 1;
                    pcVar26 = pcVar26 + 1;
                  } while (bVar34);
                  if (!bVar34) goto LAB_0041b2a1;
                }
                else {
LAB_0041b2a1:
                  bVar35 = true;
                }
                if (!bVar35) {
                  dVar3 = this_00->field_017D->count;
                  if (dVar3 == this_00->field_0169->count) {
                    iVar13 = dVar3 * 0x30;
                    bVar34 = true;
                    pcVar17 = this_00->field_017D->data;
                    pcVar26 = this_00->field_0169->data;
                    do {
                      if (iVar13 == 0) break;
                      iVar13 = iVar13 + -1;
                      bVar34 = *pcVar17 == *pcVar26;
                      pcVar17 = pcVar17 + 1;
                      pcVar26 = pcVar26 + 1;
                    } while (bVar34);
                    if (!bVar34) goto LAB_0041b2d2;
                  }
                  else {
LAB_0041b2d2:
                    bVar35 = true;
                  }
                  if (!bVar35) {
                    dVar3 = this_00->field_0181->count;
                    if (dVar3 == this_00->field_016D->count) {
                      iVar13 = dVar3 * 0x30;
                      bVar34 = true;
                      pcVar17 = this_00->field_0181->data;
                      pcVar26 = this_00->field_016D->data;
                      do {
                        if (iVar13 == 0) break;
                        iVar13 = iVar13 + -1;
                        bVar34 = *pcVar17 == *pcVar26;
                        pcVar17 = pcVar17 + 1;
                        pcVar26 = pcVar26 + 1;
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
              if (this_00->field_0161 != (DArrayTy *)0x0) {
                DArrayDestroy(this_00->field_0161);
              }
              if (this_00->field_0165 != (DArrayTy *)0x0) {
                DArrayDestroy(this_00->field_0165);
              }
              if (this_00->field_0169 != (DArrayTy *)0x0) {
                DArrayDestroy(this_00->field_0169);
              }
              if (this_00->field_016D != (DArrayTy *)0x0) {
                DArrayDestroy(this_00->field_016D);
              }
              this_00->field_015D = (DArrayTy *)0x0;
              this_00->field_0161 = (DArrayTy *)0x0;
              this_00->field_0165 = (DArrayTy *)0x0;
              this_00->field_0169 = (DArrayTy *)0x0;
              this_00->field_016D = (DArrayTy *)0x0;
              Library::DKW::TBL::FUN_006afe40
                        ((int *)&this_00->field_015D,&this_00->field_0171->flags);
              Library::DKW::TBL::FUN_006afe40
                        ((int *)&this_00->field_0161,&this_00->field_0175->flags);
              Library::DKW::TBL::FUN_006afe40
                        ((int *)&this_00->field_0165,&this_00->field_0179->flags);
              Library::DKW::TBL::FUN_006afe40
                        ((int *)&this_00->field_0169,&this_00->field_017D->flags);
              Library::DKW::TBL::FUN_006afe40
                        ((int *)&this_00->field_016D,&this_00->field_0181->flags);
              thunk_FUN_0043fc50(CASE_8,0);
            }
          }
          if ((g_cPanel_00801688 != (CPanelTy *)0x0) &&
             (iVar13 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_B), iVar13 != 0)) {
            (*this_00->vtable->vfunc_4C)(this_00->field_0199);
            pAVar4 = this_00->field_0195;
            local_c = (DArrayTy *)this_00->field_0199;
            iVar13 = 0x13;
            bVar35 = true;
            pDVar22 = local_c;
            pAVar27 = pAVar4;
            do {
              if (iVar13 == 0) break;
              iVar13 = iVar13 + -1;
              bVar35 = (char)pDVar22->flags == *(char *)&pAVar27->field_0000;
              pDVar22 = (DArrayTy *)((int)&pDVar22->flags + 1);
              pAVar27 = (AnonPointee_STGameObjC_0195 *)((int)&pAVar27->field_0000 + 1);
            } while (bVar35);
            if (!bVar35) {
              pAVar4->field_0000 = local_c->flags;
              pAVar4->field_0004 = local_c->iteratorIndex;
              pAVar4->field_0008 = local_c->elementSize;
              pAVar4->field_000C = local_c->count;
              pAVar4->field_0010 = (short)local_c->capacity;
              pAVar4->field_0012 = *(undefined1 *)((int)&local_c->capacity + 2);
              thunk_FUN_0043fc50(CASE_B,0);
            }
          }
          if ((g_cPanel_00801688 != (CPanelTy *)0x0) &&
             (iVar13 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_E), iVar13 != 0)) {
            (*this_00->vtable->vfunc_58)(this_00->field_01B1);
            pAVar5 = this_00->field_01AD;
            local_8 = (AnonShape_0041AF40_EF4C5356 *)this_00->field_01B1;
            iVar13 = 0xb;
            bVar35 = true;
            pAVar18 = (AnonPointee_STGameObjC_01B1 *)local_8;
            pAVar28 = pAVar5;
            do {
              if (iVar13 == 0) break;
              iVar13 = iVar13 + -1;
              bVar35 = *(char *)&pAVar18->field_0000 == *(char *)&pAVar28->field_0000;
              pAVar18 = (AnonPointee_STGameObjC_01B1 *)((int)&pAVar18->field_0000 + 1);
              pAVar28 = (AnonPointee_STGameObjC_01AD *)((int)&pAVar28->field_0000 + 1);
            } while (bVar35);
            if (!bVar35) {
              pAVar5->field_0000 = ((AnonPointee_STGameObjC_01B1 *)local_8)->field_0000;
              pAVar5->field_0004 = ((AnonPointee_STGameObjC_01B1 *)local_8)->field_0004;
              pAVar5->field_0008 = ((AnonPointee_STGameObjC_01B1 *)local_8)->field_0008;
              pAVar5->field_000A = ((AnonPointee_STGameObjC_01B1 *)local_8)->field_000A;
              thunk_FUN_0043fc50(CASE_E,0);
            }
          }
          if (g_cPanel_00801688 == (CPanelTy *)0x0) {
            g_currentExceptionFrame = local_58.previous;
            return 0;
          }
          iVar13 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_10);
          if (iVar13 == 0) {
            g_currentExceptionFrame = local_58.previous;
            return 0;
          }
          (*this_00->vtable->vfunc_60)(this_00->field_01C1);
          iVar13 = 0x90;
          bVar35 = true;
          piVar19 = this_00->field_01C1;
          piVar29 = this_00->field_01BD;
          do {
            if (iVar13 == 0) break;
            iVar13 = iVar13 + -1;
            bVar35 = *piVar19 == *piVar29;
            piVar19 = piVar19 + 1;
            piVar29 = piVar29 + 1;
          } while (bVar35);
          if (bVar35) {
            g_currentExceptionFrame = local_58.previous;
            return 0;
          }
          piVar19 = this_00->field_01C1;
          piVar29 = this_00->field_01BD;
          memmove(piVar29, piVar19, 0x240); /* compiler REP MOVS byte copy */
          GVar36 = CASE_10;
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
    iVar13 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_5);
    if (iVar13 != 0) {
      (*this_00->vtable->vfunc_30)(this_00->field_0121);
      iVar13 = 0x1b;
      bVar35 = true;
      pbVar21 = this_00->field_0121;
      pbVar16 = this_00->field_011D;
      do {
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        bVar35 = *(short *)pbVar21 == *(short *)pbVar16;
        pbVar21 = pbVar21 + 2;
        pbVar16 = pbVar16 + 2;
      } while (bVar35);
      if (!bVar35) {
        pbVar21 = this_00->field_0121;
        pbVar16 = this_00->field_011D;
        for (iVar13 = 0xd; iVar13 != 0; iVar13 = iVar13 + -1) {
          *(undefined4 *)pbVar16 = *(undefined4 *)pbVar21;
          pbVar21 = pbVar21 + 4;
          pbVar16 = pbVar16 + 4;
        }
        *(short *)pbVar16 = *(short *)pbVar21;
        thunk_FUN_0043fc50(CASE_5,0);
      }
    }
    if (g_cPanel_00801688 == (CPanelTy *)0x0) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    iVar13 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_4);
    if (iVar13 == 0) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    (*this_00->vtable->vfunc_34)(this_00->field_0129);
    iVar13 = 0x17;
    bVar35 = true;
    piVar19 = this_00->field_0129;
    piVar29 = this_00->field_0125;
    do {
      if (iVar13 == 0) break;
      iVar13 = iVar13 + -1;
      bVar35 = *piVar19 == *piVar29;
      piVar19 = piVar19 + 1;
      piVar29 = piVar29 + 1;
    } while (bVar35);
    if (bVar35) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    piVar19 = this_00->field_0129;
    piVar29 = this_00->field_0125;
    memmove(piVar29, piVar19, 0x5c); /* compiler REP MOVS byte copy */
    GVar36 = CASE_4;
    goto cf_common_exit_0041BE5F;
  }
  if (uVar14 == 0x1b8) goto LAB_0041bdb3;
  if (uVar14 != 1000) {
    if (uVar14 != 0x3e9) goto cf_common_exit_0041B6C6;
    if (g_cPanel_00801688 == (CPanelTy *)0x0) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    iVar13 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_4);
    if (iVar13 != 0) {
      (*this_00->vtable->vfunc_34)(this_00->field_0129);
      iVar13 = 0x17;
      bVar35 = true;
      piVar19 = this_00->field_0129;
      piVar29 = this_00->field_0125;
      do {
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        bVar35 = *piVar19 == *piVar29;
        piVar19 = piVar19 + 1;
        piVar29 = piVar29 + 1;
      } while (bVar35);
      if (!bVar35) {
        piVar19 = this_00->field_0129;
        piVar29 = this_00->field_0125;
        memmove(piVar29, piVar19, 0x5c); /* compiler REP MOVS byte copy */
        thunk_FUN_0043fc50(CASE_4,0);
      }
    }
    if (g_cPanel_00801688 == (CPanelTy *)0x0) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    iVar13 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_5);
    if (iVar13 == 0) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    (*this_00->vtable->vfunc_30)(this_00->field_0121);
    iVar13 = 0x1b;
    bVar35 = true;
    pbVar21 = this_00->field_0121;
    pbVar16 = this_00->field_011D;
    do {
      if (iVar13 == 0) break;
      iVar13 = iVar13 + -1;
      bVar35 = *(short *)pbVar21 == *(short *)pbVar16;
      pbVar21 = pbVar21 + 2;
      pbVar16 = pbVar16 + 2;
    } while (bVar35);
    if (bVar35) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    pbVar21 = this_00->field_0121;
    pbVar16 = this_00->field_011D;
    for (iVar13 = 0xd; iVar13 != 0; iVar13 = iVar13 + -1) {
      *(undefined4 *)pbVar16 = *(undefined4 *)pbVar21;
      pbVar21 = pbVar21 + 4;
      pbVar16 = pbVar16 + 4;
    }
    *(short *)pbVar16 = *(short *)pbVar21;
    GVar36 = CASE_5;
    goto cf_common_exit_0041BE5F;
  }
  if (g_cPanel_00801688 == (CPanelTy *)0x0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  iVar13 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_4);
  if (iVar13 != 0) {
    (*this_00->vtable->vfunc_34)(this_00->field_0129);
    iVar13 = 0x17;
    bVar35 = true;
    piVar19 = this_00->field_0129;
    piVar29 = this_00->field_0125;
    do {
      if (iVar13 == 0) break;
      iVar13 = iVar13 + -1;
      bVar35 = *piVar19 == *piVar29;
      piVar19 = piVar19 + 1;
      piVar29 = piVar29 + 1;
    } while (bVar35);
    if (!bVar35) {
      piVar19 = this_00->field_0129;
      piVar29 = this_00->field_0125;
      memmove(piVar29, piVar19, 0x5c); /* compiler REP MOVS byte copy */
      thunk_FUN_0043fc50(CASE_4,0);
    }
  }
  if (g_cPanel_00801688 == (CPanelTy *)0x0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  iVar13 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_5);
  if (iVar13 != 0) {
    (*this_00->vtable->vfunc_30)(this_00->field_0121);
    iVar13 = 0x1b;
    bVar35 = true;
    pbVar21 = this_00->field_0121;
    pbVar16 = this_00->field_011D;
    do {
      if (iVar13 == 0) break;
      iVar13 = iVar13 + -1;
      bVar35 = *(short *)pbVar21 == *(short *)pbVar16;
      pbVar21 = pbVar21 + 2;
      pbVar16 = pbVar16 + 2;
    } while (bVar35);
    if (!bVar35) {
      pbVar21 = this_00->field_0121;
      pbVar16 = this_00->field_011D;
      for (iVar13 = 0xd; iVar13 != 0; iVar13 = iVar13 + -1) {
        *(undefined4 *)pbVar16 = *(undefined4 *)pbVar21;
        pbVar21 = pbVar21 + 4;
        pbVar16 = pbVar16 + 4;
      }
      *(short *)pbVar16 = *(short *)pbVar21;
      thunk_FUN_0043fc50(CASE_5,0);
    }
  }
  if (g_cPanel_00801688 == (CPanelTy *)0x0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  iVar13 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_6);
  if (iVar13 != 0) {
    puVar1 = &this_00->field_0135;
    if ((DArrayTy *)this_00->field_0135 != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)this_00->field_0135);
    }
    if ((DArrayTy *)this_00->field_0139 != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)this_00->field_0139);
    }
    *puVar1 = 0;
    this_00->field_0139 = 0;
    (*this_00->vtable->vfunc_38)(puVar1);
    bVar35 = false;
    iVar13 = *(int *)(*puVar1 + 0xc);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (iVar13 == *(int *)(this_00->field_012D + 0xc)) {
      iVar13 = iVar13 * 0x30;
      bVar34 = true;
      pcVar17 = *(char **)(*puVar1 + 0x1c);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      pcVar26 = *(char **)(this_00->field_012D + 0x1c);
      do {
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        bVar34 = *pcVar17 == *pcVar26;
        pcVar17 = pcVar17 + 1;
        pcVar26 = pcVar26 + 1;
      } while (bVar34);
      if (!bVar34) goto LAB_0041b8f6;
    }
    else {
LAB_0041b8f6:
      bVar35 = true;
    }
    if (!bVar35) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar13 = *(int *)(this_00->field_0139 + 0xc);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (iVar13 == *(int *)(this_00->field_0131 + 0xc)) {
        iVar13 = iVar13 * 0x30;
        bVar34 = true;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        pcVar17 = *(char **)(this_00->field_0139 + 0x1c);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        pcVar26 = *(char **)(this_00->field_0131 + 0x1c);
        do {
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          bVar34 = *pcVar17 == *pcVar26;
          pcVar17 = pcVar17 + 1;
          pcVar26 = pcVar26 + 1;
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
  iVar13 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_7);
  if (iVar13 != 0) {
    puVar1 = &this_00->field_014D;
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
    *puVar1 = 0;
    this_00->field_0151 = 0;
    this_00->field_0155 = 0;
    this_00->field_0159 = 0;
    (*this_00->vtable->vfunc_3C)(puVar1);
    local_c = (DArrayTy *)this_00->field_013D;
    bVar35 = false;
    dVar3 = *(dword *)(*puVar1 + 0xc);
    if (dVar3 == local_c->count) {
      iVar13 = dVar3 * 0x30;
      bVar34 = true;
      pcVar17 = *(char **)(*puVar1 + 0x1c);
      pcVar26 = local_c->data;
      do {
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        bVar34 = *pcVar17 == *pcVar26;
        pcVar17 = pcVar17 + 1;
        pcVar26 = pcVar26 + 1;
      } while (bVar34);
      if (!bVar34) goto LAB_0041ba2a;
    }
    else {
LAB_0041ba2a:
      bVar35 = true;
    }
    if (!bVar35) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar13 = *(int *)(this_00->field_0151 + 0xc);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (iVar13 == *(int *)(this_00->field_0141 + 0xc)) {
        iVar13 = iVar13 * 0x30;
        bVar34 = true;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        pcVar17 = *(char **)(this_00->field_0151 + 0x1c);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        pcVar26 = *(char **)(this_00->field_0141 + 0x1c);
        do {
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          bVar34 = *pcVar17 == *pcVar26;
          pcVar17 = pcVar17 + 1;
          pcVar26 = pcVar26 + 1;
        } while (bVar34);
        if (!bVar34) goto LAB_0041ba5f;
      }
      else {
LAB_0041ba5f:
        bVar35 = true;
      }
      if (!bVar35) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar13 = *(int *)(this_00->field_0155 + 0xc);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (iVar13 == *(int *)(this_00->field_0145 + 0xc)) {
          iVar13 = iVar13 * 0x30;
          bVar34 = true;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          pcVar17 = *(char **)(this_00->field_0155 + 0x1c);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          pcVar26 = *(char **)(this_00->field_0145 + 0x1c);
          do {
            if (iVar13 == 0) break;
            iVar13 = iVar13 + -1;
            bVar34 = *pcVar17 == *pcVar26;
            pcVar17 = pcVar17 + 1;
            pcVar26 = pcVar26 + 1;
          } while (bVar34);
          if (!bVar34) goto LAB_0041ba90;
        }
        else {
LAB_0041ba90:
          bVar35 = true;
        }
        if (!bVar35) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          iVar13 = *(int *)(this_00->field_0159 + 0xc);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if (iVar13 == *(int *)(this_00->field_0149 + 0xc)) {
            iVar13 = iVar13 * 0x30;
            bVar34 = true;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            pcVar17 = *(char **)(this_00->field_0159 + 0x1c);
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            pcVar26 = *(char **)(this_00->field_0149 + 0x1c);
            do {
              if (iVar13 == 0) break;
              iVar13 = iVar13 + -1;
              bVar34 = *pcVar17 == *pcVar26;
              pcVar17 = pcVar17 + 1;
              pcVar26 = pcVar26 + 1;
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
  iVar13 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_9);
  if (iVar13 != 0) {
    (*this_00->vtable->vfunc_44)(this_00->field_0189);
    iVar13 = 0x129;
    bVar35 = true;
    pcVar17 = (char *)this_00->field_0189;
    pcVar26 = (char *)this_00->field_0185;
    do {
      if (iVar13 == 0) break;
      iVar13 = iVar13 + -1;
      bVar35 = *pcVar17 == *pcVar26;
      pcVar17 = pcVar17 + 1;
      pcVar26 = pcVar26 + 1;
    } while (bVar35);
    if (!bVar35) {
      pcVar17 = (char *)this_00->field_0189;
      pcVar26 = (char *)this_00->field_0185;
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
  iVar13 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_A);
  if (iVar13 != 0) {
    (*this_00->vtable->vfunc_48)(this_00->field_0191);
    pAVar8 = this_00->field_018D;
    local_c = (DArrayTy *)this_00->field_0191;
    iVar13 = 4;
    bVar35 = true;
    pDVar22 = local_c;
    pAVar31 = pAVar8;
    do {
      if (iVar13 == 0) break;
      iVar13 = iVar13 + -1;
      bVar35 = pDVar22->flags == pAVar31->field_0000;
      pDVar22 = (DArrayTy *)&pDVar22->iteratorIndex;
      pAVar31 = (AnonPointee_STGameObjC_018D *)&pAVar31->field_0004;
    } while (bVar35);
    if (!bVar35) {
      pAVar8->field_0000 = local_c->flags;
      pAVar8->field_0004 = local_c->iteratorIndex;
      pAVar8->field_0008 = local_c->elementSize;
      pAVar8->field_000C = local_c->count;
      thunk_FUN_0043fc50(CASE_A,0);
    }
  }
  if (g_cPanel_00801688 == (CPanelTy *)0x0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  iVar13 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_C);
  if (iVar13 != 0) {
    puVar1 = &this_00->field_01A1;
    local_14 = (AnonPointee_STGameObjC_01A9 *)puVar1;
    if ((DArrayTy *)this_00->field_01A1 != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)this_00->field_01A1);
      *puVar1 = 0;
    }
    (*this_00->vtable->vfunc_50)(puVar1);
    pDVar22 = (DArrayTy *)this_00->field_019D;
    local_c = (DArrayTy *)&this_00->field_019D;
    local_8 = (AnonShape_0041AF40_EF4C5356 *)0x0;
    dVar3 = *(dword *)(*puVar1 + 0xc);
    if (dVar3 == pDVar22->count) {
      iVar13 = dVar3 * 0x30;
      bVar35 = true;
      pcVar17 = *(char **)(*puVar1 + 0x1c);
      pcVar26 = pDVar22->data;
      do {
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        bVar35 = *pcVar17 == *pcVar26;
        pcVar17 = pcVar17 + 1;
        pcVar26 = pcVar26 + 1;
      } while (bVar35);
      if (!bVar35) goto LAB_0041bcad;
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
      GVar36 = CASE_C;
      goto cf_common_exit_0041BE5F;
    }
  }
  if (g_cPanel_00801688 == (CPanelTy *)0x0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  iVar13 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_D);
  if (iVar13 != 0) {
    (*this_00->vtable->vfunc_54)(this_00->field_01A9);
    pAVar9 = this_00->field_01A5;
    local_14 = this_00->field_01A9;
    iVar13 = 3;
    bVar35 = true;
    pAVar23 = local_14;
    pAVar32 = pAVar9;
    do {
      if (iVar13 == 0) break;
      iVar13 = iVar13 + -1;
      bVar35 = (AnonPointee_STGameObjC_01A5 *)pAVar23->field_0000 ==
               (AnonPointee_STGameObjC_01A5 *)pAVar32->field_0000;
      pAVar23 = (AnonPointee_STGameObjC_01A9 *)&pAVar23->field_0004;
      pAVar32 = (AnonPointee_STGameObjC_01A5 *)&pAVar32->field_0004;
    } while (bVar35);
    if (!bVar35) {
      pAVar9->field_0000 = (AnonPointee_STGameObjC_01A5 *)local_14->field_0000;
      pAVar9->field_0004 = (AnonPointee_STGameObjC_01A9 *)local_14->field_0004;
      pAVar9->field_0008 = (AnonPointee_STGameObjC_01AD *)local_14->field_0008;
      thunk_FUN_0043fc50(CASE_D,0);
    }
  }
  if (g_cPanel_00801688 == (CPanelTy *)0x0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  iVar13 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_F);
  if (iVar13 == 0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  (*this_00->vtable->vfunc_5C)(this_00->field_01B9);
  pAVar10 = this_00->field_01B5;
  pAVar11 = this_00->field_01B9;
  iVar13 = 0xb;
  bVar35 = true;
  pAVar24 = pAVar11;
  pAVar33 = pAVar10;
  do {
    if (iVar13 == 0) break;
    iVar13 = iVar13 + -1;
    bVar35 = *(char *)&pAVar24->field_0000 == *(char *)&pAVar33->field_0000;
    pAVar24 = (AnonPointee_STGameObjC_01B9 *)((int)&pAVar24->field_0000 + 1);
    pAVar33 = (AnonPointee_STGameObjC_01B5 *)((int)&pAVar33->field_0000 + 1);
  } while (bVar35);
  if (bVar35) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  pAVar10->field_0000 = pAVar11->field_0000;
  pAVar10->field_0004 = pAVar11->field_0004;
  pAVar10->field_0008 = pAVar11->field_0008;
  pAVar10->field_000A = pAVar11->field_000A;
  GVar36 = CASE_F;
cf_common_exit_0041BE5F:
  thunk_FUN_0043fc50(GVar36,0);
  g_currentExceptionFrame = local_58.previous;
  return 0;
}

