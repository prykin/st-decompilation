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
  dword *pdVar8;
  AnonPointee_STGameObjC_01B5 *pAVar9;
  AnonPointee_STGameObjC_01B9 *pAVar10;
  code *pcVar11;
  STGameObjC *this_00;
  int iVar12;
  uint uVar13;
  int iVar14;
  byte *pbVar15;
  char *pcVar16;
  AnonPointee_STGameObjC_01B1 *pAVar17;
  int *piVar18;
  ushort *puVar19;
  byte *pbVar20;
  DArrayTy *pDVar21;
  int *piVar22;
  AnonPointee_STGameObjC_01B9 *pAVar23;
  byte *pbVar24;
  char *pcVar25;
  AnonPointee_STGameObjC_0195 *pAVar26;
  AnonPointee_STGameObjC_01AD *pAVar27;
  ushort *puVar28;
  dword *pdVar29;
  int *piVar30;
  AnonPointee_STGameObjC_01B5 *pAVar31;
  bool bVar32;
  bool bVar33;
  Global_sub_0043FC50_param_1Enum GVar34;
  InternalExceptionFrame local_58;
  int *local_14;
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
    puVar2 = (message->arg0).ptr;
    if (puVar2 == nullptr) {
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\Tc_gobj.cpp",0x678);
    }
    this_00->field_0020 = *puVar2;
    this_00->field_0024 = puVar2[1];
    this_00->field_002C = puVar2[4];
    this_00->field_0028 = puVar2[2];
    iVar12 = this_00->field_0018 * DAT_00808754;
    this_00->field_001C = iVar12;
    uVar13 = iVar12 * 0x41c64e6d + 0x3039;
    this_00->field_001C = uVar13;
    this_00->field_00F8 = (short)((ulonglong)(uVar13 >> 0x10) % 0x1f) + 0x1e;
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
  uVar13 = this_00->field_0020;
  if (uVar13 < 0x1af) {
    if (uVar13 == 0x1ae) {
      if (g_cPanel_00801688 == nullptr) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      iVar12 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_1);
      if (iVar12 != 0) {
        (*this_00->vtable->vfunc_30)(this_00->field_0121);
        iVar12 = 0x1b;
        bVar33 = true;
        pbVar20 = this_00->field_0121;
        pbVar15 = this_00->field_011D;
        do {
          if (iVar12 == 0) break;
          iVar12 = iVar12 + -1;
          bVar33 = *(short *)pbVar20 == *(short *)pbVar15;
          pbVar20 = pbVar20 + 2;
          pbVar15 = pbVar15 + 2;
        } while (bVar33);
        if (!bVar33) {
          pbVar20 = this_00->field_0121;
          pbVar15 = this_00->field_011D;
          memmove(pbVar15, pbVar20, 0x36); /* compiler REP MOVS byte copy */
          thunk_FUN_0043fc50(CASE_1,0);
        }
      }
      if (g_cPanel_00801688 == nullptr) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      iVar12 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_2);
      if (iVar12 != 0) {
        (*this_00->vtable->vfunc_34)(this_00->field_0129);
        iVar12 = 0x17;
        bVar33 = true;
        piVar18 = this_00->field_0129;
        piVar22 = this_00->field_0125;
        do {
          if (iVar12 == 0) break;
          iVar12 = iVar12 + -1;
          bVar33 = *piVar18 == *piVar22;
          piVar18 = piVar18 + 1;
          piVar22 = piVar22 + 1;
        } while (bVar33);
        if (!bVar33) {
          piVar18 = this_00->field_0129;
          piVar22 = this_00->field_0125;
          memmove(piVar22, piVar18, 0x5c); /* compiler REP MOVS byte copy */
          thunk_FUN_0043fc50(CASE_2,0);
        }
      }
      if (g_cPanel_00801688 == nullptr) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      iVar12 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_E);
      if (iVar12 != 0) {
        (*this_00->vtable->vfunc_58)(this_00->field_01B1);
        pAVar5 = this_00->field_01AD;
        local_8 = (AnonShape_0041AF40_EF4C5356 *)this_00->field_01B1;
        iVar12 = 0xb;
        bVar33 = true;
        pAVar17 = (AnonPointee_STGameObjC_01B1 *)local_8;
        pAVar27 = pAVar5;
        do {
          if (iVar12 == 0) break;
          iVar12 = iVar12 + -1;
          bVar33 = *(char *)&pAVar17->field_0000 == *(char *)&pAVar27->field_0000;
          pAVar17 = (AnonPointee_STGameObjC_01B1 *)((int)&pAVar17->field_0000 + 1);
          pAVar27 = (AnonPointee_STGameObjC_01AD *)((int)&pAVar27->field_0000 + 1);
        } while (bVar33);
        if (!bVar33) {
          pAVar5->field_0000 = ((AnonPointee_STGameObjC_01B1 *)local_8)->field_0000;
          pAVar5->field_0004 = ((AnonPointee_STGameObjC_01B1 *)local_8)->field_0004;
          pAVar5->field_0008 = ((AnonPointee_STGameObjC_01B1 *)local_8)->field_0008;
          pAVar5->field_000A = ((AnonPointee_STGameObjC_01B1 *)local_8)->field_000A;
          thunk_FUN_0043fc50(CASE_E,0);
        }
      }
      if (g_cPanel_00801688 == nullptr) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      iVar12 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_12);
      if (iVar12 == 0) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      (*this_00->vtable->vfunc_64)(this_00->field_01C9);
      puVar6 = this_00->field_01C5;
      puVar7 = this_00->field_01C9;
      iVar12 = 3;
      bVar33 = true;
      puVar19 = puVar7;
      puVar28 = puVar6;
      do {
        if (iVar12 == 0) break;
        iVar12 = iVar12 + -1;
        bVar33 = *puVar19 == *puVar28;
        puVar19 = puVar19 + 1;
        puVar28 = puVar28 + 1;
      } while (bVar33);
      if (bVar33) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      *(undefined4 *)puVar6 = *(undefined4 *)puVar7;
      puVar6[2] = puVar7[2];
      GVar34 = CASE_12;
      goto cf_common_exit_0041BE5F;
    }
    if (uVar13 < 0x173) {
      if (uVar13 != 0x172) {
        if (uVar13 == 0x14) {
          if ((g_cPanel_00801688 != nullptr) &&
             (iVar12 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_1), iVar12 != 0)) {
            (*this_00->vtable->vfunc_30)(this_00->field_0121);
            iVar12 = 0x1b;
            bVar33 = true;
            pbVar20 = this_00->field_0121;
            pbVar15 = this_00->field_011D;
            do {
              if (iVar12 == 0) break;
              iVar12 = iVar12 + -1;
              bVar33 = *(short *)pbVar20 == *(short *)pbVar15;
              pbVar20 = pbVar20 + 2;
              pbVar15 = pbVar15 + 2;
            } while (bVar33);
            if (!bVar33) {
              uVar13 = STAllPlayersC::GetNInTmp(0,0);
              if ((short)uVar13 == 1) {
                pbVar20 = this_00->field_0121;
              }
              else {
                pbVar20 = this_00->field_0121;
                if (pbVar20[0x1b] == this_00->field_011D[0x1b]) {
                  iVar12 = 5;
                  bVar33 = true;
                  pbVar15 = pbVar20 + 0x2a;
                  pbVar24 = this_00->field_011D + 0x2a;
                  do {
                    if (iVar12 == 0) break;
                    iVar12 = iVar12 + -1;
                    bVar33 = *pbVar15 == *pbVar24;
                    pbVar15 = pbVar15 + 1;
                    pbVar24 = pbVar24 + 1;
                  } while (bVar33);
                  if (bVar33) goto LAB_0041b128;
                }
              }
              pbVar15 = this_00->field_011D;
              memmove(pbVar15, pbVar20, 0x36); /* compiler REP MOVS byte copy */
              iVar12 = 0;
              thunk_FUN_0043fc50(CASE_1,0);
            }
          }
LAB_0041b128:
          if ((g_cPanel_00801688 != nullptr) &&
             (iVar12 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_2), iVar12 != 0)) {
            (*this_00->vtable->vfunc_34)(this_00->field_0129);
            iVar12 = 0x17;
            bVar33 = true;
            piVar18 = this_00->field_0129;
            piVar22 = this_00->field_0125;
            do {
              if (iVar12 == 0) break;
              iVar12 = iVar12 + -1;
              bVar33 = *piVar18 == *piVar22;
              piVar18 = piVar18 + 1;
              piVar22 = piVar22 + 1;
            } while (bVar33);
            if (!bVar33) {
              piVar18 = this_00->field_0129;
              piVar22 = this_00->field_0125;
              memmove(piVar22, piVar18, 0x5c); /* compiler REP MOVS byte copy */
              iVar12 = 0;
              thunk_FUN_0043fc50(CASE_2,0);
            }
          }
          if ((g_cPanel_00801688 != nullptr) &&
             (iVar12 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_8), iVar12 != 0)) {
            arg_1 = &this_00->field_0171;
            if (this_00->field_0171 != nullptr) {
              DArrayDestroy(this_00->field_0171);
            }
            if (this_00->field_0175 != nullptr) {
              DArrayDestroy(this_00->field_0175);
            }
            if (this_00->field_0179 != nullptr) {
              DArrayDestroy(this_00->field_0179);
            }
            if (this_00->field_017D != nullptr) {
              DArrayDestroy(this_00->field_017D);
            }
            if (this_00->field_0181 != nullptr) {
              DArrayDestroy(this_00->field_0181);
            }
            *arg_1 = nullptr;
            this_00->field_0175 = nullptr;
            this_00->field_0179 = nullptr;
            this_00->field_017D = nullptr;
            this_00->field_0181 = nullptr;
            (*this_00->vtable->vfunc_40)(arg_1);
            local_c = this_00->field_015D;
            bVar33 = false;
            dVar3 = (*arg_1)->count;
            if (dVar3 == local_c->count) {
              iVar12 = dVar3 * 0x30;
              bVar32 = true;
              pcVar16 = (*arg_1)->data;
              pcVar25 = local_c->data;
              do {
                if (iVar12 == 0) break;
                iVar12 = iVar12 + -1;
                bVar32 = *pcVar16 == *pcVar25;
                pcVar16 = pcVar16 + 1;
                pcVar25 = pcVar25 + 1;
              } while (bVar32);
              if (!bVar32) goto LAB_0041b237;
            }
            else {
LAB_0041b237:
              bVar33 = true;
            }
            if (!bVar33) {
              dVar3 = this_00->field_0175->count;
              if (dVar3 == this_00->field_0161->count) {
                iVar12 = dVar3 * 0x30;
                bVar32 = true;
                pcVar16 = this_00->field_0175->data;
                pcVar25 = this_00->field_0161->data;
                do {
                  if (iVar12 == 0) break;
                  iVar12 = iVar12 + -1;
                  bVar32 = *pcVar16 == *pcVar25;
                  pcVar16 = pcVar16 + 1;
                  pcVar25 = pcVar25 + 1;
                } while (bVar32);
                if (!bVar32) goto LAB_0041b26c;
              }
              else {
LAB_0041b26c:
                bVar33 = true;
              }
              if (!bVar33) {
                dVar3 = this_00->field_0179->count;
                if (dVar3 == this_00->field_0165->count) {
                  iVar12 = dVar3 * 0x30;
                  bVar32 = true;
                  pcVar16 = this_00->field_0179->data;
                  pcVar25 = this_00->field_0165->data;
                  do {
                    if (iVar12 == 0) break;
                    iVar12 = iVar12 + -1;
                    bVar32 = *pcVar16 == *pcVar25;
                    pcVar16 = pcVar16 + 1;
                    pcVar25 = pcVar25 + 1;
                  } while (bVar32);
                  if (!bVar32) goto LAB_0041b2a1;
                }
                else {
LAB_0041b2a1:
                  bVar33 = true;
                }
                if (!bVar33) {
                  dVar3 = this_00->field_017D->count;
                  if (dVar3 == this_00->field_0169->count) {
                    iVar12 = dVar3 * 0x30;
                    bVar32 = true;
                    pcVar16 = this_00->field_017D->data;
                    pcVar25 = this_00->field_0169->data;
                    do {
                      if (iVar12 == 0) break;
                      iVar12 = iVar12 + -1;
                      bVar32 = *pcVar16 == *pcVar25;
                      pcVar16 = pcVar16 + 1;
                      pcVar25 = pcVar25 + 1;
                    } while (bVar32);
                    if (!bVar32) goto LAB_0041b2d2;
                  }
                  else {
LAB_0041b2d2:
                    bVar33 = true;
                  }
                  if (!bVar33) {
                    dVar3 = this_00->field_0181->count;
                    if (dVar3 == this_00->field_016D->count) {
                      iVar12 = dVar3 * 0x30;
                      bVar32 = true;
                      pcVar16 = this_00->field_0181->data;
                      pcVar25 = this_00->field_016D->data;
                      do {
                        if (iVar12 == 0) break;
                        iVar12 = iVar12 + -1;
                        bVar32 = *pcVar16 == *pcVar25;
                        pcVar16 = pcVar16 + 1;
                        pcVar25 = pcVar25 + 1;
                      } while (bVar32);
                      if (bVar32) goto LAB_0041b308;
                    }
                    bVar33 = true;
                  }
                }
              }
            }
LAB_0041b308:
            if (bVar33) {
              if (local_c != nullptr) {
                DArrayDestroy(local_c);
              }
              if (this_00->field_0161 != nullptr) {
                DArrayDestroy(this_00->field_0161);
              }
              if (this_00->field_0165 != nullptr) {
                DArrayDestroy(this_00->field_0165);
              }
              if (this_00->field_0169 != nullptr) {
                DArrayDestroy(this_00->field_0169);
              }
              if (this_00->field_016D != nullptr) {
                DArrayDestroy(this_00->field_016D);
              }
              this_00->field_015D = nullptr;
              this_00->field_0161 = nullptr;
              this_00->field_0165 = nullptr;
              this_00->field_0169 = nullptr;
              this_00->field_016D = nullptr;
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
          if ((g_cPanel_00801688 != nullptr) &&
             (iVar12 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_B), iVar12 != 0)) {
            (*this_00->vtable->vfunc_4C)(this_00->field_0199);
            pAVar4 = this_00->field_0195;
            local_c = (DArrayTy *)this_00->field_0199;
            iVar12 = 0x13;
            bVar33 = true;
            pDVar21 = local_c;
            pAVar26 = pAVar4;
            do {
              if (iVar12 == 0) break;
              iVar12 = iVar12 + -1;
              bVar33 = (char)pDVar21->flags == *(char *)&pAVar26->field_0000;
              pDVar21 = (DArrayTy *)((int)&pDVar21->flags + 1);
              pAVar26 = (AnonPointee_STGameObjC_0195 *)((int)&pAVar26->field_0000 + 1);
            } while (bVar33);
            if (!bVar33) {
              pAVar4->field_0000 = local_c->flags;
              pAVar4->field_0004 = local_c->iteratorIndex;
              pAVar4->field_0008 = local_c->elementSize;
              pAVar4->field_000C = local_c->count;
              pAVar4->field_0010 = (short)local_c->capacity;
              pAVar4->field_0012 = *(undefined1 *)((int)&local_c->capacity + 2);
              thunk_FUN_0043fc50(CASE_B,0);
            }
          }
          if ((g_cPanel_00801688 != nullptr) &&
             (iVar12 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_E), iVar12 != 0)) {
            (*this_00->vtable->vfunc_58)(this_00->field_01B1);
            pAVar5 = this_00->field_01AD;
            local_8 = (AnonShape_0041AF40_EF4C5356 *)this_00->field_01B1;
            iVar12 = 0xb;
            bVar33 = true;
            pAVar17 = (AnonPointee_STGameObjC_01B1 *)local_8;
            pAVar27 = pAVar5;
            do {
              if (iVar12 == 0) break;
              iVar12 = iVar12 + -1;
              bVar33 = *(char *)&pAVar17->field_0000 == *(char *)&pAVar27->field_0000;
              pAVar17 = (AnonPointee_STGameObjC_01B1 *)((int)&pAVar17->field_0000 + 1);
              pAVar27 = (AnonPointee_STGameObjC_01AD *)((int)&pAVar27->field_0000 + 1);
            } while (bVar33);
            if (!bVar33) {
              pAVar5->field_0000 = ((AnonPointee_STGameObjC_01B1 *)local_8)->field_0000;
              pAVar5->field_0004 = ((AnonPointee_STGameObjC_01B1 *)local_8)->field_0004;
              pAVar5->field_0008 = ((AnonPointee_STGameObjC_01B1 *)local_8)->field_0008;
              pAVar5->field_000A = ((AnonPointee_STGameObjC_01B1 *)local_8)->field_000A;
              thunk_FUN_0043fc50(CASE_E,0);
            }
          }
          if (g_cPanel_00801688 == nullptr) {
            g_currentExceptionFrame = local_58.previous;
            return 0;
          }
          iVar12 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_10);
          if (iVar12 == 0) {
            g_currentExceptionFrame = local_58.previous;
            return 0;
          }
          (*this_00->vtable->vfunc_60)(this_00->field_01C1);
          iVar12 = 0x90;
          bVar33 = true;
          piVar18 = this_00->field_01C1;
          piVar22 = this_00->field_01BD;
          do {
            if (iVar12 == 0) break;
            iVar12 = iVar12 + -1;
            bVar33 = *piVar18 == *piVar22;
            piVar18 = piVar18 + 1;
            piVar22 = piVar22 + 1;
          } while (bVar33);
          if (bVar33) {
            g_currentExceptionFrame = local_58.previous;
            return 0;
          }
          piVar18 = this_00->field_01C1;
          piVar22 = this_00->field_01BD;
          memmove(piVar22, piVar18, 0x240); /* compiler REP MOVS byte copy */
          GVar34 = CASE_10;
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
    if (g_cPanel_00801688 == nullptr) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    iVar12 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_5);
    if (iVar12 != 0) {
      (*this_00->vtable->vfunc_30)(this_00->field_0121);
      iVar12 = 0x1b;
      bVar33 = true;
      pbVar20 = this_00->field_0121;
      pbVar15 = this_00->field_011D;
      do {
        if (iVar12 == 0) break;
        iVar12 = iVar12 + -1;
        bVar33 = *(short *)pbVar20 == *(short *)pbVar15;
        pbVar20 = pbVar20 + 2;
        pbVar15 = pbVar15 + 2;
      } while (bVar33);
      if (!bVar33) {
        pbVar20 = this_00->field_0121;
        pbVar15 = this_00->field_011D;
        memmove(pbVar15, pbVar20, 0x36); /* compiler REP MOVS byte copy */
        thunk_FUN_0043fc50(CASE_5,0);
      }
    }
    if (g_cPanel_00801688 == nullptr) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    iVar12 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_4);
    if (iVar12 == 0) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    (*this_00->vtable->vfunc_34)(this_00->field_0129);
    iVar12 = 0x17;
    bVar33 = true;
    piVar18 = this_00->field_0129;
    piVar22 = this_00->field_0125;
    do {
      if (iVar12 == 0) break;
      iVar12 = iVar12 + -1;
      bVar33 = *piVar18 == *piVar22;
      piVar18 = piVar18 + 1;
      piVar22 = piVar22 + 1;
    } while (bVar33);
    if (bVar33) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    piVar18 = this_00->field_0129;
    piVar22 = this_00->field_0125;
    memmove(piVar22, piVar18, 0x5c); /* compiler REP MOVS byte copy */
    GVar34 = CASE_4;
    goto cf_common_exit_0041BE5F;
  }
  if (uVar13 == 0x1b8) goto LAB_0041bdb3;
  if (uVar13 != 1000) {
    if (uVar13 != 0x3e9) goto cf_common_exit_0041B6C6;
    if (g_cPanel_00801688 == nullptr) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    iVar12 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_4);
    if (iVar12 != 0) {
      (*this_00->vtable->vfunc_34)(this_00->field_0129);
      iVar12 = 0x17;
      bVar33 = true;
      piVar18 = this_00->field_0129;
      piVar22 = this_00->field_0125;
      do {
        if (iVar12 == 0) break;
        iVar12 = iVar12 + -1;
        bVar33 = *piVar18 == *piVar22;
        piVar18 = piVar18 + 1;
        piVar22 = piVar22 + 1;
      } while (bVar33);
      if (!bVar33) {
        piVar18 = this_00->field_0129;
        piVar22 = this_00->field_0125;
        memmove(piVar22, piVar18, 0x5c); /* compiler REP MOVS byte copy */
        thunk_FUN_0043fc50(CASE_4,0);
      }
    }
    if (g_cPanel_00801688 == nullptr) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    iVar12 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_5);
    if (iVar12 == 0) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    (*this_00->vtable->vfunc_30)(this_00->field_0121);
    iVar12 = 0x1b;
    bVar33 = true;
    pbVar20 = this_00->field_0121;
    pbVar15 = this_00->field_011D;
    do {
      if (iVar12 == 0) break;
      iVar12 = iVar12 + -1;
      bVar33 = *(short *)pbVar20 == *(short *)pbVar15;
      pbVar20 = pbVar20 + 2;
      pbVar15 = pbVar15 + 2;
    } while (bVar33);
    if (bVar33) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    pbVar20 = this_00->field_0121;
    pbVar15 = this_00->field_011D;
    memmove(pbVar15, pbVar20, 0x36); /* compiler REP MOVS byte copy */
    GVar34 = CASE_5;
    goto cf_common_exit_0041BE5F;
  }
  if (g_cPanel_00801688 == nullptr) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  iVar12 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_4);
  if (iVar12 != 0) {
    (*this_00->vtable->vfunc_34)(this_00->field_0129);
    iVar12 = 0x17;
    bVar33 = true;
    piVar18 = this_00->field_0129;
    piVar22 = this_00->field_0125;
    do {
      if (iVar12 == 0) break;
      iVar12 = iVar12 + -1;
      bVar33 = *piVar18 == *piVar22;
      piVar18 = piVar18 + 1;
      piVar22 = piVar22 + 1;
    } while (bVar33);
    if (!bVar33) {
      piVar18 = this_00->field_0129;
      piVar22 = this_00->field_0125;
      memmove(piVar22, piVar18, 0x5c); /* compiler REP MOVS byte copy */
      thunk_FUN_0043fc50(CASE_4,0);
    }
  }
  if (g_cPanel_00801688 == nullptr) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  iVar12 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_5);
  if (iVar12 != 0) {
    (*this_00->vtable->vfunc_30)(this_00->field_0121);
    iVar12 = 0x1b;
    bVar33 = true;
    pbVar20 = this_00->field_0121;
    pbVar15 = this_00->field_011D;
    do {
      if (iVar12 == 0) break;
      iVar12 = iVar12 + -1;
      bVar33 = *(short *)pbVar20 == *(short *)pbVar15;
      pbVar20 = pbVar20 + 2;
      pbVar15 = pbVar15 + 2;
    } while (bVar33);
    if (!bVar33) {
      pbVar20 = this_00->field_0121;
      pbVar15 = this_00->field_011D;
      memmove(pbVar15, pbVar20, 0x36); /* compiler REP MOVS byte copy */
      thunk_FUN_0043fc50(CASE_5,0);
    }
  }
  if (g_cPanel_00801688 == nullptr) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  iVar12 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_6);
  if (iVar12 != 0) {
    puVar1 = &this_00->field_0135;
    if ((DArrayTy *)this_00->field_0135 != nullptr) {
      DArrayDestroy((DArrayTy *)this_00->field_0135);
    }
    if ((DArrayTy *)this_00->field_0139 != nullptr) {
      DArrayDestroy((DArrayTy *)this_00->field_0139);
    }
    *puVar1 = 0;
    this_00->field_0139 = 0;
    (*this_00->vtable->vfunc_38)(puVar1);
    bVar33 = false;
    iVar12 = *(int *)(*puVar1 + 0xc);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (iVar12 == *(int *)(this_00->field_012D + 0xc)) {
      iVar12 = iVar12 * 0x30;
      bVar32 = true;
      pcVar16 = *(char **)(*puVar1 + 0x1c);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      pcVar25 = *(char **)(this_00->field_012D + 0x1c);
      do {
        if (iVar12 == 0) break;
        iVar12 = iVar12 + -1;
        bVar32 = *pcVar16 == *pcVar25;
        pcVar16 = pcVar16 + 1;
        pcVar25 = pcVar25 + 1;
      } while (bVar32);
      if (!bVar32) goto LAB_0041b8f6;
    }
    else {
LAB_0041b8f6:
      bVar33 = true;
    }
    if (!bVar33) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar12 = *(int *)(this_00->field_0139 + 0xc);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (iVar12 == *(int *)(this_00->field_0131 + 0xc)) {
        iVar12 = iVar12 * 0x30;
        bVar32 = true;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        pcVar16 = *(char **)(this_00->field_0139 + 0x1c);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        pcVar25 = *(char **)(this_00->field_0131 + 0x1c);
        do {
          if (iVar12 == 0) break;
          iVar12 = iVar12 + -1;
          bVar32 = *pcVar16 == *pcVar25;
          pcVar16 = pcVar16 + 1;
          pcVar25 = pcVar25 + 1;
        } while (bVar32);
        if (bVar32) goto LAB_0041b92c;
      }
      bVar33 = true;
    }
LAB_0041b92c:
    if (bVar33) {
      if ((DArrayTy *)this_00->field_012D != nullptr) {
        DArrayDestroy((DArrayTy *)this_00->field_012D);
      }
      if ((DArrayTy *)this_00->field_0131 != nullptr) {
        DArrayDestroy((DArrayTy *)this_00->field_0131);
      }
      this_00->field_012D = 0;
      this_00->field_0131 = 0;
      Library::DKW::TBL::FUN_006afe40(&this_00->field_012D,(uint *)this_00->field_0135);
      Library::DKW::TBL::FUN_006afe40(&this_00->field_0131,(uint *)this_00->field_0139);
      GVar34 = CASE_6;
      goto cf_common_exit_0041BE5F;
    }
  }
  if (g_cPanel_00801688 == nullptr) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  iVar12 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_7);
  if (iVar12 != 0) {
    puVar1 = &this_00->field_014D;
    if ((DArrayTy *)this_00->field_014D != nullptr) {
      DArrayDestroy((DArrayTy *)this_00->field_014D);
    }
    if ((DArrayTy *)this_00->field_0151 != nullptr) {
      DArrayDestroy((DArrayTy *)this_00->field_0151);
    }
    if ((DArrayTy *)this_00->field_0155 != nullptr) {
      DArrayDestroy((DArrayTy *)this_00->field_0155);
    }
    if ((DArrayTy *)this_00->field_0159 != nullptr) {
      DArrayDestroy((DArrayTy *)this_00->field_0159);
    }
    *puVar1 = 0;
    this_00->field_0151 = 0;
    this_00->field_0155 = 0;
    this_00->field_0159 = 0;
    (*this_00->vtable->vfunc_3C)(puVar1);
    local_c = (DArrayTy *)this_00->field_013D;
    bVar33 = false;
    dVar3 = *(dword *)(*puVar1 + 0xc);
    if (dVar3 == local_c->count) {
      iVar12 = dVar3 * 0x30;
      bVar32 = true;
      pcVar16 = *(char **)(*puVar1 + 0x1c);
      pcVar25 = local_c->data;
      do {
        if (iVar12 == 0) break;
        iVar12 = iVar12 + -1;
        bVar32 = *pcVar16 == *pcVar25;
        pcVar16 = pcVar16 + 1;
        pcVar25 = pcVar25 + 1;
      } while (bVar32);
      if (!bVar32) goto LAB_0041ba2a;
    }
    else {
LAB_0041ba2a:
      bVar33 = true;
    }
    if (!bVar33) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar12 = *(int *)(this_00->field_0151 + 0xc);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (iVar12 == *(int *)(this_00->field_0141 + 0xc)) {
        iVar12 = iVar12 * 0x30;
        bVar32 = true;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        pcVar16 = *(char **)(this_00->field_0151 + 0x1c);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        pcVar25 = *(char **)(this_00->field_0141 + 0x1c);
        do {
          if (iVar12 == 0) break;
          iVar12 = iVar12 + -1;
          bVar32 = *pcVar16 == *pcVar25;
          pcVar16 = pcVar16 + 1;
          pcVar25 = pcVar25 + 1;
        } while (bVar32);
        if (!bVar32) goto LAB_0041ba5f;
      }
      else {
LAB_0041ba5f:
        bVar33 = true;
      }
      if (!bVar33) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar12 = *(int *)(this_00->field_0155 + 0xc);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (iVar12 == *(int *)(this_00->field_0145 + 0xc)) {
          iVar12 = iVar12 * 0x30;
          bVar32 = true;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          pcVar16 = *(char **)(this_00->field_0155 + 0x1c);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          pcVar25 = *(char **)(this_00->field_0145 + 0x1c);
          do {
            if (iVar12 == 0) break;
            iVar12 = iVar12 + -1;
            bVar32 = *pcVar16 == *pcVar25;
            pcVar16 = pcVar16 + 1;
            pcVar25 = pcVar25 + 1;
          } while (bVar32);
          if (!bVar32) goto LAB_0041ba90;
        }
        else {
LAB_0041ba90:
          bVar33 = true;
        }
        if (!bVar33) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          iVar12 = *(int *)(this_00->field_0159 + 0xc);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if (iVar12 == *(int *)(this_00->field_0149 + 0xc)) {
            iVar12 = iVar12 * 0x30;
            bVar32 = true;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            pcVar16 = *(char **)(this_00->field_0159 + 0x1c);
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            pcVar25 = *(char **)(this_00->field_0149 + 0x1c);
            do {
              if (iVar12 == 0) break;
              iVar12 = iVar12 + -1;
              bVar32 = *pcVar16 == *pcVar25;
              pcVar16 = pcVar16 + 1;
              pcVar25 = pcVar25 + 1;
            } while (bVar32);
            if (bVar32) goto LAB_0041bac6;
          }
          bVar33 = true;
        }
      }
    }
LAB_0041bac6:
    if (bVar33) {
      if (local_c != nullptr) {
        DArrayDestroy(local_c);
      }
      if ((DArrayTy *)this_00->field_0141 != nullptr) {
        DArrayDestroy((DArrayTy *)this_00->field_0141);
      }
      if ((DArrayTy *)this_00->field_0145 != nullptr) {
        DArrayDestroy((DArrayTy *)this_00->field_0145);
      }
      if ((DArrayTy *)this_00->field_0149 != nullptr) {
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
      GVar34 = CASE_7;
      goto cf_common_exit_0041BE5F;
    }
  }
  if (g_cPanel_00801688 == nullptr) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  iVar12 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_9);
  if (iVar12 != 0) {
    (*this_00->vtable->vfunc_44)(this_00->field_0189);
    iVar12 = 0x129;
    bVar33 = true;
    pcVar16 = this_00->field_0189;
    pcVar25 = this_00->field_0185;
    do {
      if (iVar12 == 0) break;
      iVar12 = iVar12 + -1;
      bVar33 = *pcVar16 == *pcVar25;
      pcVar16 = pcVar16 + 1;
      pcVar25 = pcVar25 + 1;
    } while (bVar33);
    if (!bVar33) {
      pcVar16 = this_00->field_0189;
      pcVar25 = this_00->field_0185;
      memmove(pcVar25, pcVar16, 0x129); /* compiler REP MOVS byte copy */
      thunk_FUN_0043fc50(CASE_9,0);
    }
  }
  if (g_cPanel_00801688 == nullptr) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  iVar12 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_A);
  if (iVar12 != 0) {
    (*this_00->vtable->vfunc_48)(this_00->field_0191);
    pdVar8 = this_00->field_018D;
    local_c = this_00->field_0191;
    iVar12 = 4;
    bVar33 = true;
    pDVar21 = local_c;
    pdVar29 = pdVar8;
    do {
      if (iVar12 == 0) break;
      iVar12 = iVar12 + -1;
      bVar33 = pDVar21->flags == *pdVar29;
      pDVar21 = (DArrayTy *)&pDVar21->iteratorIndex;
      pdVar29 = pdVar29 + 1;
    } while (bVar33);
    if (!bVar33) {
      *pdVar8 = local_c->flags;
      pdVar8[1] = local_c->iteratorIndex;
      pdVar8[2] = local_c->elementSize;
      pdVar8[3] = local_c->count;
      thunk_FUN_0043fc50(CASE_A,0);
    }
  }
  if (g_cPanel_00801688 == nullptr) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  iVar12 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_C);
  if (iVar12 != 0) {
    puVar1 = &this_00->field_01A1;
    local_14 = puVar1;
    if ((DArrayTy *)this_00->field_01A1 != nullptr) {
      DArrayDestroy((DArrayTy *)this_00->field_01A1);
      *puVar1 = 0;
    }
    (*this_00->vtable->vfunc_50)(puVar1);
    pDVar21 = (DArrayTy *)this_00->field_019D;
    local_c = (DArrayTy *)&this_00->field_019D;
    local_8 = nullptr;
    dVar3 = *(dword *)(*puVar1 + 0xc);
    if (dVar3 == pDVar21->count) {
      iVar12 = dVar3 * 0x30;
      bVar33 = true;
      pcVar16 = *(char **)(*puVar1 + 0x1c);
      pcVar25 = pDVar21->data;
      do {
        if (iVar12 == 0) break;
        iVar12 = iVar12 + -1;
        bVar33 = *pcVar16 == *pcVar25;
        pcVar16 = pcVar16 + 1;
        pcVar25 = pcVar25 + 1;
      } while (bVar33);
      if (!bVar33) goto LAB_0041bcad;
    }
    else {
LAB_0041bcad:
      local_8 = (AnonShape_0041AF40_EF4C5356 *)0x1;
    }
    if (local_8 == (AnonShape_0041AF40_EF4C5356 *)0x1) {
      if (pDVar21 != nullptr) {
        DArrayDestroy(pDVar21);
        local_c->flags = 0;
      }
      Library::DKW::TBL::FUN_006afe40((int *)local_c,(uint *)*local_14);
      GVar34 = CASE_C;
      goto cf_common_exit_0041BE5F;
    }
  }
  if (g_cPanel_00801688 == nullptr) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  iVar12 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_D);
  if (iVar12 != 0) {
    (*this_00->vtable->vfunc_54)(this_00->field_01A9);
    piVar18 = this_00->field_01A5;
    local_14 = this_00->field_01A9;
    iVar12 = 3;
    bVar33 = true;
    piVar22 = local_14;
    piVar30 = piVar18;
    do {
      if (iVar12 == 0) break;
      iVar12 = iVar12 + -1;
      bVar33 = *piVar22 == *piVar30;
      piVar22 = piVar22 + 1;
      piVar30 = piVar30 + 1;
    } while (bVar33);
    if (!bVar33) {
      *piVar18 = *local_14;
      piVar18[1] = local_14[1];
      piVar18[2] = local_14[2];
      thunk_FUN_0043fc50(CASE_D,0);
    }
  }
  if (g_cPanel_00801688 == nullptr) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  iVar12 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_F);
  if (iVar12 == 0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  (*this_00->vtable->vfunc_5C)(this_00->field_01B9);
  pAVar9 = this_00->field_01B5;
  pAVar10 = this_00->field_01B9;
  iVar12 = 0xb;
  bVar33 = true;
  pAVar23 = pAVar10;
  pAVar31 = pAVar9;
  do {
    if (iVar12 == 0) break;
    iVar12 = iVar12 + -1;
    bVar33 = *(char *)&pAVar23->field_0000 == *(char *)&pAVar31->field_0000;
    pAVar23 = (AnonPointee_STGameObjC_01B9 *)((int)&pAVar23->field_0000 + 1);
    pAVar31 = (AnonPointee_STGameObjC_01B5 *)((int)&pAVar31->field_0000 + 1);
  } while (bVar33);
  if (bVar33) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  pAVar9->field_0000 = pAVar10->field_0000;
  pAVar9->field_0004 = pAVar10->field_0004;
  pAVar9->field_0008 = pAVar10->field_0008;
  pAVar9->field_000A = pAVar10->field_000A;
  GVar34 = CASE_F;
cf_common_exit_0041BE5F:
  thunk_FUN_0043fc50(GVar34,0);
  g_currentExceptionFrame = local_58.previous;
  return 0;
}

