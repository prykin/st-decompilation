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
  dword *pdVar7;
  AnonPointee_STGameObjC_01B5 *pAVar8;
  AnonPointee_STGameObjC_01B9 *pAVar9;
  STGameObjC *this_00;
  int local_EAX_35;
  uint uVar11;
  int local_EAX_334;
  int local_EAX_500;
  int local_EAX_593;
  int local_EAX_1188;
  int local_EAX_1305;
  int local_EAX_1414;
  int local_EAX_1523;
  int local_EAX_1619;
  int local_EAX_1712;
  int local_EAX_1821;
  int local_EAX_1950;
  int iVar13;
  int local_EAX_2095;
  int local_EAX_2191;
  int local_EAX_2284;
  int local_EAX_2380;
  int local_EAX_2647;
  int local_EAX_3132;
  int local_EAX_3226;
  int local_EAX_3333;
  int local_EAX_3507;
  int local_EAX_3608;
  int local_EAX_3715;
  int local_EAX_3807;
  int iVar14;
  int iVar12;
  byte *pbVar13;
  char *pcVar14;
  AnonPointee_STGameObjC_01B1 *pAVar15;
  int *piVar16;
  ushort *puVar17;
  byte *pbVar18;
  DArrayTy *pDVar19;
  DArrayTy **ppDVar20;
  AnonPointee_STGameObjC_01B9 *pAVar21;
  byte *pbVar22;
  char *pcVar23;
  AnonPointee_STGameObjC_0195 *pAVar24;
  AnonPointee_STGameObjC_01AD *pAVar25;
  ushort *puVar26;
  dword *pdVar27;
  int *piVar28;
  AnonPointee_STGameObjC_01B5 *pAVar29;
  bool bVar30;
  bool bVar31;
  Global_sub_0043FC50_param_1Enum GVar32;
  InternalExceptionFrame local_58;
  DArrayTy **local_14;
  STGameObjC *local_10;
  DArrayTy *local_c;
  AnonShape_0041AF40_EF4C5356 *local_8;

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_10 = this;
  local_EAX_35 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  this_00 = local_10;
  if (local_EAX_35 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar14 = ReportDebugMessage("E:\\__titans\\wlad\\Tc_gobj.cpp",0x7eb,0,local_EAX_35,
                                "%s","STGameObjC::GetMessage");
    if (iVar14 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(local_EAX_35,0,"E:\\__titans\\wlad\\Tc_gobj.cpp",0x7ec);
    return 0xffff;
  }
  FUN_006e5fd0(local_10,message);
  if (message->id != MESS_ID_NONE) {
    if (message->id != MESS_ID_CREATE) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    puVar1 = (message->arg0).ptr;
    if (puVar1 == nullptr) {
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\Tc_gobj.cpp",0x678);
    }
    this_00->field_0020 = *puVar1;
    this_00->field_0024 = puVar1[1];
    this_00->field_002C = puVar1[4];
    this_00->field_0028 = puVar1[2];
    iVar12 = this_00->field_0018 * DAT_00808754;
    this_00->field_001C = iVar12;
    uVar11 = iVar12 * 0x41c64e6d + 0x3039;
    this_00->field_001C = uVar11;
    this_00->field_00F8 = (short)((ulonglong)(uVar11 >> 0x10) % 0x1f) + 0x1e;
    /* ST_CALLSITE[0041B004]: CALL dword ptr [EDX + 0xcc] */
    this_00->vfunc_CC();
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  if (-1 < this_00->field_008F) {
    this_00->field_008F = this_00->field_008F + 1;
  }
  /* ST_CALLSITE[0041B033]: CALL dword ptr [EAX + 0xd0] */
  this_00->vfunc_D0();
  if (this_00->field_01CD != 1) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  uVar11 = this_00->field_0020;
  if (uVar11 < 0x1af) {
    if (uVar11 == 0x1ae) {
      if (g_cPanel_00801688 == nullptr) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      /* ST_CALLSITE[0041B533]: CALL 0x00403c51; direct=00403C51 CPanelTy::sub_004FAB10 */
      local_EAX_1523 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_1);
      if (local_EAX_1523 != 0) {
        /* ST_CALLSITE[0041B547]: CALL dword ptr [EAX + 0x30] */
        (*this_00->vtable->vfunc_30)((short)this_00->field_0121);
        iVar12 = 0x1b;
        bVar31 = true;
        pbVar18 = this_00->field_0121;
        pbVar13 = this_00->field_011D;
        do {
          if (iVar12 == 0) break;
          iVar12 = iVar12 + -1;
          bVar31 = *(short *)pbVar18 == *(short *)pbVar13;
          pbVar18 = pbVar18 + 2;
          pbVar13 = pbVar13 + 2;
        } while (bVar31);
        if (!bVar31) {
          pbVar18 = this_00->field_0121;
          pbVar13 = this_00->field_011D;
          memmove(pbVar13, pbVar18, 0x36); /* compiler REP MOVS byte copy */
          thunk_FUN_0043fc50(CASE_1,0);
        }
      }
      if (g_cPanel_00801688 == nullptr) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      /* ST_CALLSITE[0041B593]: CALL 0x00403c51; direct=00403C51 CPanelTy::sub_004FAB10 */
      local_EAX_1619 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_2);
      if (local_EAX_1619 != 0) {
        /* ST_CALLSITE[0041B5A7]: CALL dword ptr [EAX + 0x34] */
        (*this_00->vtable->vfunc_34)((short)this_00->field_0129);
        iVar12 = 0x17;
        bVar31 = true;
        piVar16 = this_00->field_0129;
        piVar28 = this_00->field_0125;
        do {
          if (iVar12 == 0) break;
          iVar12 = iVar12 + -1;
          bVar31 = *piVar16 == *piVar28;
          piVar16 = piVar16 + 1;
          piVar28 = piVar28 + 1;
        } while (bVar31);
        if (!bVar31) {
          piVar16 = this_00->field_0129;
          piVar28 = this_00->field_0125;
          memmove(piVar28, piVar16, 0x5c); /* compiler REP MOVS byte copy */
          thunk_FUN_0043fc50(CASE_2,0);
        }
      }
      if (g_cPanel_00801688 == nullptr) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      /* ST_CALLSITE[0041B5F0]: CALL 0x00403c51; direct=00403C51 CPanelTy::sub_004FAB10 */
      local_EAX_1712 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_E);
      if (local_EAX_1712 != 0) {
        /* ST_CALLSITE[0041B604]: CALL dword ptr [EAX + 0x58] */
        (*this_00->vtable->vfunc_58)((short)this_00->field_01B1);
        pAVar4 = this_00->field_01AD;
        local_8 = (AnonShape_0041AF40_EF4C5356 *)this_00->field_01B1;
        iVar12 = 0xb;
        bVar31 = true;
        pAVar15 = (AnonPointee_STGameObjC_01B1 *)local_8;
        pAVar25 = pAVar4;
        do {
          if (iVar12 == 0) break;
          iVar12 = iVar12 + -1;
          bVar31 = (char)pAVar15->field_0000 == (char)pAVar25->field_0000;
          pAVar15 = (AnonPointee_STGameObjC_01B1 *)((int)&pAVar15->field_0000 + 1);
          pAVar25 = (AnonPointee_STGameObjC_01AD *)((int)&pAVar25->field_0000 + 1);
        } while (bVar31);
        if (!bVar31) {
          pAVar4->field_0000 = ((AnonPointee_STGameObjC_01B1 *)local_8)->field_0000;
          pAVar4->field_0004 = ((AnonPointee_STGameObjC_01B1 *)local_8)->field_0004;
          pAVar4->field_0008 = ((AnonPointee_STGameObjC_01B1 *)local_8)->field_0008;
          pAVar4->field_000A = ((AnonPointee_STGameObjC_01B1 *)local_8)->field_000A;
          thunk_FUN_0043fc50(CASE_E,0);
        }
      }
      if (g_cPanel_00801688 == nullptr) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      /* ST_CALLSITE[0041B65D]: CALL 0x00403c51; direct=00403C51 CPanelTy::sub_004FAB10 */
      local_EAX_1821 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_12);
      if (local_EAX_1821 == 0) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      /* ST_CALLSITE[0041B675]: CALL dword ptr [EAX + 0x64] */
      (*this_00->vtable->vfunc_64)((short)this_00->field_01C9);
      puVar5 = this_00->field_01C5;
      puVar6 = this_00->field_01C9;
      iVar12 = 3;
      bVar31 = true;
      puVar17 = puVar6;
      puVar26 = puVar5;
      do {
        if (iVar12 == 0) break;
        iVar12 = iVar12 + -1;
        bVar31 = *puVar17 == *puVar26;
        puVar17 = puVar17 + 1;
        puVar26 = puVar26 + 1;
      } while (bVar31);
      if (bVar31) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      *(undefined4 *)puVar5 = *(undefined4 *)puVar6;
      puVar5[2] = puVar6[2];
      GVar32 = CASE_12;
      goto cf_common_exit_0041BE5F;
    }
    if (uVar11 < 0x173) {
      if (uVar11 != 0x172) {
        if (uVar11 == 0x14) {
          if ((g_cPanel_00801688 != nullptr) &&
             /* ST_CALLSITE[0041B08E]: CALL 0x00403c51; direct=00403C51 CPanelTy::sub_004FAB10 */
             (local_EAX_334 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_1), local_EAX_334 != 0))
          {
            /* ST_CALLSITE[0041B0A6]: CALL dword ptr [EDX + 0x30] */
            (*this_00->vtable->vfunc_30)((short)this_00->field_0121);
            iVar12 = 0x1b;
            bVar31 = true;
            pbVar18 = this_00->field_0121;
            pbVar13 = this_00->field_011D;
            do {
              if (iVar12 == 0) break;
              iVar12 = iVar12 + -1;
              bVar31 = *(short *)pbVar18 == *(short *)pbVar13;
              pbVar18 = pbVar18 + 2;
              pbVar13 = pbVar13 + 2;
            } while (bVar31);
            if (!bVar31) {
              /* ST_CALLSITE[0041B0C9]: CALL 0x00402b7b; direct=00402B7B STAllPlayersC::GetNInTmp */
              uVar11 = STAllPlayersC::GetNInTmp(0,0);
              if ((short)uVar11 == 1) {
                pbVar18 = this_00->field_0121;
              }
              else {
                pbVar18 = this_00->field_0121;
                if (pbVar18[0x1b] == this_00->field_011D[0x1b]) {
                  iVar12 = 5;
                  bVar31 = true;
                  pbVar13 = pbVar18 + 0x2a;
                  pbVar22 = this_00->field_011D + 0x2a;
                  do {
                    if (iVar12 == 0) break;
                    iVar12 = iVar12 + -1;
                    bVar31 = *pbVar13 == *pbVar22;
                    pbVar13 = pbVar13 + 1;
                    pbVar22 = pbVar22 + 1;
                  } while (bVar31);
                  if (bVar31) goto LAB_0041b128;
                }
              }
              pbVar13 = this_00->field_011D;
              memmove(pbVar13, pbVar18, 0x36); /* compiler REP MOVS byte copy */
              thunk_FUN_0043fc50(CASE_1,0);
            }
          }
LAB_0041b128:
          if ((g_cPanel_00801688 != nullptr) &&
             /* ST_CALLSITE[0041B134]: CALL 0x00403c51; direct=00403C51 CPanelTy::sub_004FAB10 */
             (local_EAX_500 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_2), local_EAX_500 != 0))
          {
            /* ST_CALLSITE[0041B148]: CALL dword ptr [EAX + 0x34] */
            (*this_00->vtable->vfunc_34)((short)this_00->field_0129);
            iVar12 = 0x17;
            bVar31 = true;
            piVar16 = this_00->field_0129;
            piVar28 = this_00->field_0125;
            do {
              if (iVar12 == 0) break;
              iVar12 = iVar12 + -1;
              bVar31 = *piVar16 == *piVar28;
              piVar16 = piVar16 + 1;
              piVar28 = piVar28 + 1;
            } while (bVar31);
            if (!bVar31) {
              piVar16 = this_00->field_0129;
              piVar28 = this_00->field_0125;
              memmove(piVar28, piVar16, 0x5c); /* compiler REP MOVS byte copy */
              thunk_FUN_0043fc50(CASE_2,0);
            }
          }
          if ((g_cPanel_00801688 != nullptr) &&
             /* ST_CALLSITE[0041B191]: CALL 0x00403c51; direct=00403C51 CPanelTy::sub_004FAB10 */
             (local_EAX_593 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_8), local_EAX_593 != 0))
          {
            ppDVar20 = &this_00->field_0171;
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
            *ppDVar20 = nullptr;
            this_00->field_0175 = nullptr;
            this_00->field_0179 = nullptr;
            this_00->field_017D = nullptr;
            this_00->field_0181 = nullptr;
            /* ST_CALLSITE[0041B20B]: CALL dword ptr [EDX + 0x40] */
            (*this_00->vtable->vfunc_40)((short)ppDVar20);
            local_c = this_00->field_015D;
            bVar31 = false;
            dVar2 = (*ppDVar20)->count;
            if (dVar2 == local_c->count) {
              iVar12 = dVar2 * 0x30;
              bVar30 = true;
              pcVar14 = (*ppDVar20)->data;
              pcVar23 = local_c->data;
              do {
                if (iVar12 == 0) break;
                iVar12 = iVar12 + -1;
                bVar30 = *pcVar14 == *pcVar23;
                pcVar14 = pcVar14 + 1;
                pcVar23 = pcVar23 + 1;
              } while (bVar30);
              if (!bVar30) goto LAB_0041b237;
            }
            else {
LAB_0041b237:
              bVar31 = true;
            }
            if (!bVar31) {
              dVar2 = this_00->field_0175->count;
              if (dVar2 == this_00->field_0161->count) {
                iVar12 = dVar2 * 0x30;
                bVar30 = true;
                pcVar14 = this_00->field_0175->data;
                pcVar23 = this_00->field_0161->data;
                do {
                  if (iVar12 == 0) break;
                  iVar12 = iVar12 + -1;
                  bVar30 = *pcVar14 == *pcVar23;
                  pcVar14 = pcVar14 + 1;
                  pcVar23 = pcVar23 + 1;
                } while (bVar30);
                if (!bVar30) goto LAB_0041b26c;
              }
              else {
LAB_0041b26c:
                bVar31 = true;
              }
              if (!bVar31) {
                dVar2 = this_00->field_0179->count;
                if (dVar2 == this_00->field_0165->count) {
                  iVar12 = dVar2 * 0x30;
                  bVar30 = true;
                  pcVar14 = this_00->field_0179->data;
                  pcVar23 = this_00->field_0165->data;
                  do {
                    if (iVar12 == 0) break;
                    iVar12 = iVar12 + -1;
                    bVar30 = *pcVar14 == *pcVar23;
                    pcVar14 = pcVar14 + 1;
                    pcVar23 = pcVar23 + 1;
                  } while (bVar30);
                  if (!bVar30) goto LAB_0041b2a1;
                }
                else {
LAB_0041b2a1:
                  bVar31 = true;
                }
                if (!bVar31) {
                  dVar2 = this_00->field_017D->count;
                  if (dVar2 == this_00->field_0169->count) {
                    iVar12 = dVar2 * 0x30;
                    bVar30 = true;
                    pcVar14 = this_00->field_017D->data;
                    pcVar23 = this_00->field_0169->data;
                    do {
                      if (iVar12 == 0) break;
                      iVar12 = iVar12 + -1;
                      bVar30 = *pcVar14 == *pcVar23;
                      pcVar14 = pcVar14 + 1;
                      pcVar23 = pcVar23 + 1;
                    } while (bVar30);
                    if (!bVar30) goto LAB_0041b2d2;
                  }
                  else {
LAB_0041b2d2:
                    bVar31 = true;
                  }
                  if (!bVar31) {
                    dVar2 = this_00->field_0181->count;
                    if (dVar2 == this_00->field_016D->count) {
                      iVar12 = dVar2 * 0x30;
                      bVar30 = true;
                      pcVar14 = this_00->field_0181->data;
                      pcVar23 = this_00->field_016D->data;
                      do {
                        if (iVar12 == 0) break;
                        iVar12 = iVar12 + -1;
                        bVar30 = *pcVar14 == *pcVar23;
                        pcVar14 = pcVar14 + 1;
                        pcVar23 = pcVar23 + 1;
                      } while (bVar30);
                      if (bVar30) goto LAB_0041b308;
                    }
                    bVar31 = true;
                  }
                }
              }
            }
LAB_0041b308:
            if (bVar31) {
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
             /* ST_CALLSITE[0041B3E4]: CALL 0x00403c51; direct=00403C51 CPanelTy::sub_004FAB10 */
             (local_EAX_1188 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_B), local_EAX_1188 != 0
             )) {
            /* ST_CALLSITE[0041B3F8]: CALL dword ptr [EAX + 0x4c] */
            (*this_00->vtable->vfunc_4C)((short)this_00->field_0199);
            pAVar3 = this_00->field_0195;
            local_c = (DArrayTy *)this_00->field_0199;
            iVar12 = 0x13;
            bVar31 = true;
            pDVar19 = local_c;
            pAVar24 = pAVar3;
            do {
              if (iVar12 == 0) break;
              iVar12 = iVar12 + -1;
              bVar31 = (char)pDVar19->flags == (char)pAVar24->field_0000;
              pDVar19 = (DArrayTy *)((int)&pDVar19->flags + 1);
              pAVar24 = (AnonPointee_STGameObjC_0195 *)((int)&pAVar24->field_0000 + 1);
            } while (bVar31);
            if (!bVar31) {
              pAVar3->field_0000 = local_c->flags;
              pAVar3->field_0004 = local_c->iteratorIndex;
              pAVar3->field_0008 = local_c->elementSize;
              pAVar3->field_000C = local_c->count;
              pAVar3->field_0010 = (short)local_c->capacity;
              pAVar3->field_0012 = *(undefined1 *)((int)&local_c->capacity + 2);
              thunk_FUN_0043fc50(CASE_B,0);
            }
          }
          if ((g_cPanel_00801688 != nullptr) &&
             /* ST_CALLSITE[0041B459]: CALL 0x00403c51; direct=00403C51 CPanelTy::sub_004FAB10 */
             (local_EAX_1305 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_E), local_EAX_1305 != 0
             )) {
            /* ST_CALLSITE[0041B46D]: CALL dword ptr [EAX + 0x58] */
            (*this_00->vtable->vfunc_58)((short)this_00->field_01B1);
            pAVar4 = this_00->field_01AD;
            local_8 = (AnonShape_0041AF40_EF4C5356 *)this_00->field_01B1;
            iVar12 = 0xb;
            bVar31 = true;
            pAVar15 = (AnonPointee_STGameObjC_01B1 *)local_8;
            pAVar25 = pAVar4;
            do {
              if (iVar12 == 0) break;
              iVar12 = iVar12 + -1;
              bVar31 = (char)pAVar15->field_0000 == (char)pAVar25->field_0000;
              pAVar15 = (AnonPointee_STGameObjC_01B1 *)((int)&pAVar15->field_0000 + 1);
              pAVar25 = (AnonPointee_STGameObjC_01AD *)((int)&pAVar25->field_0000 + 1);
            } while (bVar31);
            if (!bVar31) {
              pAVar4->field_0000 = ((AnonPointee_STGameObjC_01B1 *)local_8)->field_0000;
              pAVar4->field_0004 = ((AnonPointee_STGameObjC_01B1 *)local_8)->field_0004;
              pAVar4->field_0008 = ((AnonPointee_STGameObjC_01B1 *)local_8)->field_0008;
              pAVar4->field_000A = ((AnonPointee_STGameObjC_01B1 *)local_8)->field_000A;
              thunk_FUN_0043fc50(CASE_E,0);
            }
          }
          if (g_cPanel_00801688 == nullptr) {
            g_currentExceptionFrame = local_58.previous;
            return 0;
          }
          /* ST_CALLSITE[0041B4C6]: CALL 0x00403c51; direct=00403C51 CPanelTy::sub_004FAB10 */
          local_EAX_1414 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_10);
          if (local_EAX_1414 == 0) {
            g_currentExceptionFrame = local_58.previous;
            return 0;
          }
          /* ST_CALLSITE[0041B4DE]: CALL dword ptr [EAX + 0x60] */
          (*this_00->vtable->vfunc_60)((short)this_00->field_01C1);
          iVar12 = 0x90;
          bVar31 = true;
          piVar16 = this_00->field_01C1;
          piVar28 = this_00->field_01BD;
          do {
            if (iVar12 == 0) break;
            iVar12 = iVar12 + -1;
            bVar31 = *piVar16 == *piVar28;
            piVar16 = piVar16 + 1;
            piVar28 = piVar28 + 1;
          } while (bVar31);
          if (bVar31) {
            g_currentExceptionFrame = local_58.previous;
            return 0;
          }
          piVar16 = this_00->field_01C1;
          piVar28 = this_00->field_01BD;
          memmove(piVar28, piVar16, 0x240); /* compiler REP MOVS byte copy */
          GVar32 = CASE_10;
          goto cf_common_exit_0041BE5F;
        }
        if (uVar11 != 0x5a) goto cf_common_exit_0041B6C6;
      }
    }
    else if (uVar11 != 0x1a4) {
cf_common_exit_0041B6C6:
      local_EAX_1950 =
           ReportDebugMessage("E:\\__titans\\wlad\\Tc_gobj.cpp",0x7e4,0,0,"%s",
                              "STGameObjC::GetMessagge MESS_ID_NONE unknown game type");
      if (local_EAX_1950 == 0) {
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
    /* ST_CALLSITE[0041BDC3]: CALL 0x00403c51; direct=00403C51 CPanelTy::sub_004FAB10 */
    local_EAX_3715 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_5);
    if (local_EAX_3715 != 0) {
      /* ST_CALLSITE[0041BDD7]: CALL dword ptr [EAX + 0x30] */
      (*this_00->vtable->vfunc_30)((short)this_00->field_0121);
      iVar12 = 0x1b;
      bVar31 = true;
      pbVar18 = this_00->field_0121;
      pbVar13 = this_00->field_011D;
      do {
        if (iVar12 == 0) break;
        iVar12 = iVar12 + -1;
        bVar31 = *(short *)pbVar18 == *(short *)pbVar13;
        pbVar18 = pbVar18 + 2;
        pbVar13 = pbVar13 + 2;
      } while (bVar31);
      if (!bVar31) {
        pbVar18 = this_00->field_0121;
        pbVar13 = this_00->field_011D;
        memmove(pbVar13, pbVar18, 0x36); /* compiler REP MOVS byte copy */
        thunk_FUN_0043fc50(CASE_5,0);
      }
    }
    if (g_cPanel_00801688 == nullptr) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    /* ST_CALLSITE[0041BE1F]: CALL 0x00403c51; direct=00403C51 CPanelTy::sub_004FAB10 */
    local_EAX_3807 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_4);
    if (local_EAX_3807 == 0) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    /* ST_CALLSITE[0041BE33]: CALL dword ptr [EAX + 0x34] */
    (*this_00->vtable->vfunc_34)((short)this_00->field_0129);
    iVar12 = 0x17;
    bVar31 = true;
    piVar16 = this_00->field_0129;
    piVar28 = this_00->field_0125;
    do {
      if (iVar12 == 0) break;
      iVar12 = iVar12 + -1;
      bVar31 = *piVar16 == *piVar28;
      piVar16 = piVar16 + 1;
      piVar28 = piVar28 + 1;
    } while (bVar31);
    if (bVar31) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    piVar16 = this_00->field_0129;
    piVar28 = this_00->field_0125;
    memmove(piVar28, piVar16, 0x5c); /* compiler REP MOVS byte copy */
    GVar32 = CASE_4;
    goto cf_common_exit_0041BE5F;
  }
  if (uVar11 == 0x1b8) goto LAB_0041bdb3;
  if (uVar11 != 1000) {
    if (uVar11 != 0x3e9) goto cf_common_exit_0041B6C6;
    if (g_cPanel_00801688 == nullptr) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    /* ST_CALLSITE[0041B712]: CALL 0x00403c51; direct=00403C51 CPanelTy::sub_004FAB10 */
    iVar13 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_4);
    if (iVar13 != 0) {
      /* ST_CALLSITE[0041B726]: CALL dword ptr [EAX + 0x34] */
      (*this_00->vtable->vfunc_34)((short)this_00->field_0129);
      iVar12 = 0x17;
      bVar31 = true;
      piVar16 = this_00->field_0129;
      piVar28 = this_00->field_0125;
      do {
        if (iVar12 == 0) break;
        iVar12 = iVar12 + -1;
        bVar31 = *piVar16 == *piVar28;
        piVar16 = piVar16 + 1;
        piVar28 = piVar28 + 1;
      } while (bVar31);
      if (!bVar31) {
        piVar16 = this_00->field_0129;
        piVar28 = this_00->field_0125;
        memmove(piVar28, piVar16, 0x5c); /* compiler REP MOVS byte copy */
        thunk_FUN_0043fc50(CASE_4,0);
      }
    }
    if (g_cPanel_00801688 == nullptr) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    /* ST_CALLSITE[0041B76F]: CALL 0x00403c51; direct=00403C51 CPanelTy::sub_004FAB10 */
    local_EAX_2095 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_5);
    if (local_EAX_2095 == 0) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    /* ST_CALLSITE[0041B787]: CALL dword ptr [EAX + 0x30] */
    (*this_00->vtable->vfunc_30)((short)this_00->field_0121);
    iVar12 = 0x1b;
    bVar31 = true;
    pbVar18 = this_00->field_0121;
    pbVar13 = this_00->field_011D;
    do {
      if (iVar12 == 0) break;
      iVar12 = iVar12 + -1;
      bVar31 = *(short *)pbVar18 == *(short *)pbVar13;
      pbVar18 = pbVar18 + 2;
      pbVar13 = pbVar13 + 2;
    } while (bVar31);
    if (bVar31) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    pbVar18 = this_00->field_0121;
    pbVar13 = this_00->field_011D;
    memmove(pbVar13, pbVar18, 0x36); /* compiler REP MOVS byte copy */
    GVar32 = CASE_5;
    goto cf_common_exit_0041BE5F;
  }
  if (g_cPanel_00801688 == nullptr) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  /* ST_CALLSITE[0041B7CF]: CALL 0x00403c51; direct=00403C51 CPanelTy::sub_004FAB10 */
  local_EAX_2191 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_4);
  if (local_EAX_2191 != 0) {
    /* ST_CALLSITE[0041B7E3]: CALL dword ptr [EAX + 0x34] */
    (*this_00->vtable->vfunc_34)((short)this_00->field_0129);
    iVar12 = 0x17;
    bVar31 = true;
    piVar16 = this_00->field_0129;
    piVar28 = this_00->field_0125;
    do {
      if (iVar12 == 0) break;
      iVar12 = iVar12 + -1;
      bVar31 = *piVar16 == *piVar28;
      piVar16 = piVar16 + 1;
      piVar28 = piVar28 + 1;
    } while (bVar31);
    if (!bVar31) {
      piVar16 = this_00->field_0129;
      piVar28 = this_00->field_0125;
      memmove(piVar28, piVar16, 0x5c); /* compiler REP MOVS byte copy */
      thunk_FUN_0043fc50(CASE_4,0);
    }
  }
  if (g_cPanel_00801688 == nullptr) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  /* ST_CALLSITE[0041B82C]: CALL 0x00403c51; direct=00403C51 CPanelTy::sub_004FAB10 */
  local_EAX_2284 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_5);
  if (local_EAX_2284 != 0) {
    /* ST_CALLSITE[0041B840]: CALL dword ptr [EAX + 0x30] */
    (*this_00->vtable->vfunc_30)((short)this_00->field_0121);
    iVar12 = 0x1b;
    bVar31 = true;
    pbVar18 = this_00->field_0121;
    pbVar13 = this_00->field_011D;
    do {
      if (iVar12 == 0) break;
      iVar12 = iVar12 + -1;
      bVar31 = *(short *)pbVar18 == *(short *)pbVar13;
      pbVar18 = pbVar18 + 2;
      pbVar13 = pbVar13 + 2;
    } while (bVar31);
    if (!bVar31) {
      pbVar18 = this_00->field_0121;
      pbVar13 = this_00->field_011D;
      memmove(pbVar13, pbVar18, 0x36); /* compiler REP MOVS byte copy */
      thunk_FUN_0043fc50(CASE_5,0);
    }
  }
  if (g_cPanel_00801688 == nullptr) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  /* ST_CALLSITE[0041B88C]: CALL 0x00403c51; direct=00403C51 CPanelTy::sub_004FAB10 */
  local_EAX_2380 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_6);
  if (local_EAX_2380 != 0) {
    ppDVar20 = &this_00->field_0135;
    if (this_00->field_0135 != nullptr) {
      DArrayDestroy(this_00->field_0135);
    }
    if (this_00->field_0139 != nullptr) {
      DArrayDestroy(this_00->field_0139);
    }
    *ppDVar20 = nullptr;
    this_00->field_0139 = nullptr;
    /* ST_CALLSITE[0041B8CD]: CALL dword ptr [EDX + 0x38] */
    (*this_00->vtable->vfunc_38)((short)ppDVar20);
    bVar31 = false;
    dVar2 = (*ppDVar20)->count;
    if (dVar2 == this_00->field_012D->count) {
      iVar12 = dVar2 * 0x30;
      bVar30 = true;
      pcVar14 = (*ppDVar20)->data;
      pcVar23 = this_00->field_012D->data;
      do {
        if (iVar12 == 0) break;
        iVar12 = iVar12 + -1;
        bVar30 = *pcVar14 == *pcVar23;
        pcVar14 = pcVar14 + 1;
        pcVar23 = pcVar23 + 1;
      } while (bVar30);
      if (!bVar30) goto LAB_0041b8f6;
    }
    else {
LAB_0041b8f6:
      bVar31 = true;
    }
    if (!bVar31) {
      dVar2 = this_00->field_0139->count;
      if (dVar2 == this_00->field_0131->count) {
        iVar12 = dVar2 * 0x30;
        bVar30 = true;
        pcVar14 = this_00->field_0139->data;
        pcVar23 = this_00->field_0131->data;
        do {
          if (iVar12 == 0) break;
          iVar12 = iVar12 + -1;
          bVar30 = *pcVar14 == *pcVar23;
          pcVar14 = pcVar14 + 1;
          pcVar23 = pcVar23 + 1;
        } while (bVar30);
        if (bVar30) goto LAB_0041b92c;
      }
      bVar31 = true;
    }
LAB_0041b92c:
    if (bVar31) {
      if (this_00->field_012D != nullptr) {
        DArrayDestroy(this_00->field_012D);
      }
      if (this_00->field_0131 != nullptr) {
        DArrayDestroy(this_00->field_0131);
      }
      this_00->field_012D = nullptr;
      this_00->field_0131 = nullptr;
      Library::DKW::TBL::FUN_006afe40((int *)&this_00->field_012D,&this_00->field_0135->flags);
      Library::DKW::TBL::FUN_006afe40((int *)&this_00->field_0131,&this_00->field_0139->flags);
      GVar32 = CASE_6;
      goto cf_common_exit_0041BE5F;
    }
  }
  if (g_cPanel_00801688 == nullptr) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  /* ST_CALLSITE[0041B997]: CALL 0x00403c51; direct=00403C51 CPanelTy::sub_004FAB10 */
  local_EAX_2647 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_7);
  if (local_EAX_2647 != 0) {
    ppDVar20 = &this_00->field_014D;
    if (this_00->field_014D != nullptr) {
      DArrayDestroy(this_00->field_014D);
    }
    if (this_00->field_0151 != nullptr) {
      DArrayDestroy(this_00->field_0151);
    }
    if (this_00->field_0155 != nullptr) {
      DArrayDestroy(this_00->field_0155);
    }
    if (this_00->field_0159 != nullptr) {
      DArrayDestroy(this_00->field_0159);
    }
    *ppDVar20 = nullptr;
    this_00->field_0151 = nullptr;
    this_00->field_0155 = nullptr;
    this_00->field_0159 = nullptr;
    /* ST_CALLSITE[0041B9FE]: CALL dword ptr [EAX + 0x3c] */
    (*this_00->vtable->vfunc_3C)((short)ppDVar20);
    local_c = this_00->field_013D;
    bVar31 = false;
    dVar2 = (*ppDVar20)->count;
    if (dVar2 == local_c->count) {
      iVar12 = dVar2 * 0x30;
      bVar30 = true;
      pcVar14 = (*ppDVar20)->data;
      pcVar23 = local_c->data;
      do {
        if (iVar12 == 0) break;
        iVar12 = iVar12 + -1;
        bVar30 = *pcVar14 == *pcVar23;
        pcVar14 = pcVar14 + 1;
        pcVar23 = pcVar23 + 1;
      } while (bVar30);
      if (!bVar30) goto LAB_0041ba2a;
    }
    else {
LAB_0041ba2a:
      bVar31 = true;
    }
    if (!bVar31) {
      dVar2 = this_00->field_0151->count;
      if (dVar2 == this_00->field_0141->count) {
        iVar12 = dVar2 * 0x30;
        bVar30 = true;
        pcVar14 = this_00->field_0151->data;
        pcVar23 = this_00->field_0141->data;
        do {
          if (iVar12 == 0) break;
          iVar12 = iVar12 + -1;
          bVar30 = *pcVar14 == *pcVar23;
          pcVar14 = pcVar14 + 1;
          pcVar23 = pcVar23 + 1;
        } while (bVar30);
        if (!bVar30) goto LAB_0041ba5f;
      }
      else {
LAB_0041ba5f:
        bVar31 = true;
      }
      if (!bVar31) {
        dVar2 = this_00->field_0155->count;
        if (dVar2 == this_00->field_0145->count) {
          iVar12 = dVar2 * 0x30;
          bVar30 = true;
          pcVar14 = this_00->field_0155->data;
          pcVar23 = this_00->field_0145->data;
          do {
            if (iVar12 == 0) break;
            iVar12 = iVar12 + -1;
            bVar30 = *pcVar14 == *pcVar23;
            pcVar14 = pcVar14 + 1;
            pcVar23 = pcVar23 + 1;
          } while (bVar30);
          if (!bVar30) goto LAB_0041ba90;
        }
        else {
LAB_0041ba90:
          bVar31 = true;
        }
        if (!bVar31) {
          dVar2 = this_00->field_0159->count;
          if (dVar2 == this_00->field_0149->count) {
            iVar12 = dVar2 * 0x30;
            bVar30 = true;
            pcVar14 = this_00->field_0159->data;
            pcVar23 = this_00->field_0149->data;
            do {
              if (iVar12 == 0) break;
              iVar12 = iVar12 + -1;
              bVar30 = *pcVar14 == *pcVar23;
              pcVar14 = pcVar14 + 1;
              pcVar23 = pcVar23 + 1;
            } while (bVar30);
            if (bVar30) goto LAB_0041bac6;
          }
          bVar31 = true;
        }
      }
    }
LAB_0041bac6:
    if (bVar31) {
      if (local_c != nullptr) {
        DArrayDestroy(local_c);
      }
      if (this_00->field_0141 != nullptr) {
        DArrayDestroy(this_00->field_0141);
      }
      if (this_00->field_0145 != nullptr) {
        DArrayDestroy(this_00->field_0145);
      }
      if (this_00->field_0149 != nullptr) {
        DArrayDestroy(this_00->field_0149);
      }
      this_00->field_013D = nullptr;
      this_00->field_0141 = nullptr;
      this_00->field_0145 = nullptr;
      this_00->field_0149 = nullptr;
      Library::DKW::TBL::FUN_006afe40((int *)&this_00->field_013D,&this_00->field_014D->flags);
      Library::DKW::TBL::FUN_006afe40((int *)&this_00->field_0141,&this_00->field_0151->flags);
      Library::DKW::TBL::FUN_006afe40((int *)&this_00->field_0145,&this_00->field_0155->flags);
      Library::DKW::TBL::FUN_006afe40((int *)&this_00->field_0149,&this_00->field_0159->flags);
      GVar32 = CASE_7;
      goto cf_common_exit_0041BE5F;
    }
  }
  if (g_cPanel_00801688 == nullptr) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  /* ST_CALLSITE[0041BB7C]: CALL 0x00403c51; direct=00403C51 CPanelTy::sub_004FAB10 */
  local_EAX_3132 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_9);
  if (local_EAX_3132 != 0) {
    /* ST_CALLSITE[0041BB90]: CALL dword ptr [EDX + 0x44] */
    (*this_00->vtable->vfunc_44)((short)this_00->field_0189);
    iVar12 = 0x129;
    bVar31 = true;
    pcVar14 = this_00->field_0189;
    pcVar23 = this_00->field_0185;
    do {
      if (iVar12 == 0) break;
      iVar12 = iVar12 + -1;
      bVar31 = *pcVar14 == *pcVar23;
      pcVar14 = pcVar14 + 1;
      pcVar23 = pcVar23 + 1;
    } while (bVar31);
    if (!bVar31) {
      pcVar14 = this_00->field_0189;
      pcVar23 = this_00->field_0185;
      memmove(pcVar23, pcVar14, 0x129); /* compiler REP MOVS byte copy */
      thunk_FUN_0043fc50(CASE_9,0);
    }
  }
  if (g_cPanel_00801688 == nullptr) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  /* ST_CALLSITE[0041BBDA]: CALL 0x00403c51; direct=00403C51 CPanelTy::sub_004FAB10 */
  local_EAX_3226 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_A);
  if (local_EAX_3226 != 0) {
    /* ST_CALLSITE[0041BBEE]: CALL dword ptr [EAX + 0x48] */
    (*this_00->vtable->vfunc_48)((short)this_00->field_0191);
    pdVar7 = this_00->field_018D;
    local_c = this_00->field_0191;
    iVar12 = 4;
    bVar31 = true;
    pDVar19 = local_c;
    pdVar27 = pdVar7;
    do {
      if (iVar12 == 0) break;
      iVar12 = iVar12 + -1;
      bVar31 = pDVar19->flags == *pdVar27;
      pDVar19 = (DArrayTy *)&pDVar19->iteratorIndex;
      pdVar27 = pdVar27 + 1;
    } while (bVar31);
    if (!bVar31) {
      *pdVar7 = local_c->flags;
      pdVar7[1] = local_c->iteratorIndex;
      pdVar7[2] = local_c->elementSize;
      pdVar7[3] = local_c->count;
      thunk_FUN_0043fc50(CASE_A,0);
    }
  }
  if (g_cPanel_00801688 == nullptr) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  /* ST_CALLSITE[0041BC45]: CALL 0x00403c51; direct=00403C51 CPanelTy::sub_004FAB10 */
  local_EAX_3333 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_C);
  if (local_EAX_3333 != 0) {
    ppDVar20 = &this_00->field_01A1;
    local_14 = ppDVar20;
    if (this_00->field_01A1 != nullptr) {
      DArrayDestroy(this_00->field_01A1);
      *ppDVar20 = nullptr;
    }
    /* ST_CALLSITE[0041BC76]: CALL dword ptr [EDX + 0x50] */
    (*this_00->vtable->vfunc_50)((short)ppDVar20);
    pDVar19 = this_00->field_019D;
    local_c = (DArrayTy *)&this_00->field_019D;
    local_8 = nullptr;
    dVar2 = (*ppDVar20)->count;
    if (dVar2 == pDVar19->count) {
      iVar12 = dVar2 * 0x30;
      bVar31 = true;
      pcVar14 = (*ppDVar20)->data;
      pcVar23 = pDVar19->data;
      do {
        if (iVar12 == 0) break;
        iVar12 = iVar12 + -1;
        bVar31 = *pcVar14 == *pcVar23;
        pcVar14 = pcVar14 + 1;
        pcVar23 = pcVar23 + 1;
      } while (bVar31);
      if (!bVar31) goto LAB_0041bcad;
    }
    else {
LAB_0041bcad:
      local_8 = (AnonShape_0041AF40_EF4C5356 *)0x1;
    }
    if (local_8 == (AnonShape_0041AF40_EF4C5356 *)0x1) {
      if (pDVar19 != nullptr) {
        DArrayDestroy(pDVar19);
        local_c->flags = 0;
      }
      Library::DKW::TBL::FUN_006afe40((int *)local_c,&(*local_14)->flags);
      GVar32 = CASE_C;
      goto cf_common_exit_0041BE5F;
    }
  }
  if (g_cPanel_00801688 == nullptr) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  /* ST_CALLSITE[0041BCF3]: CALL 0x00403c51; direct=00403C51 CPanelTy::sub_004FAB10 */
  local_EAX_3507 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_D);
  if (local_EAX_3507 != 0) {
    /* ST_CALLSITE[0041BD07]: CALL dword ptr [EAX + 0x54] */
    (*this_00->vtable->vfunc_54)((short)this_00->field_01A9);
    piVar16 = this_00->field_01A5;
    local_14 = this_00->field_01A9;
    iVar12 = 3;
    bVar31 = true;
    ppDVar20 = local_14;
    piVar28 = piVar16;
    do {
      if (iVar12 == 0) break;
      iVar12 = iVar12 + -1;
      bVar31 = *ppDVar20 == (DArrayTy *)*piVar28;
      ppDVar20 = ppDVar20 + 1;
      piVar28 = piVar28 + 1;
    } while (bVar31);
    if (!bVar31) {
      *piVar16 = (int)*local_14;
      piVar16[1] = (int)local_14[1];
      piVar16[2] = (int)local_14[2];
      thunk_FUN_0043fc50(CASE_D,0);
    }
  }
  if (g_cPanel_00801688 == nullptr) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  /* ST_CALLSITE[0041BD58]: CALL 0x00403c51; direct=00403C51 CPanelTy::sub_004FAB10 */
  local_EAX_3608 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_F);
  if (local_EAX_3608 == 0) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  /* ST_CALLSITE[0041BD70]: CALL dword ptr [EDX + 0x5c] */
  (*this_00->vtable->vfunc_5C)((short)this_00->field_01B9);
  pAVar8 = this_00->field_01B5;
  pAVar9 = this_00->field_01B9;
  iVar12 = 0xb;
  bVar31 = true;
  pAVar21 = pAVar9;
  pAVar29 = pAVar8;
  do {
    if (iVar12 == 0) break;
    iVar12 = iVar12 + -1;
    bVar31 = (char)pAVar21->field_0000 == (char)pAVar29->field_0000;
    pAVar21 = (AnonPointee_STGameObjC_01B9 *)((int)&pAVar21->field_0000 + 1);
    pAVar29 = (AnonPointee_STGameObjC_01B5 *)((int)&pAVar29->field_0000 + 1);
  } while (bVar31);
  if (bVar31) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  pAVar8->field_0000 = pAVar9->field_0000;
  pAVar8->field_0004 = pAVar9->field_0004;
  pAVar8->field_0008 = pAVar9->field_0008;
  pAVar8->field_000A = pAVar9->field_000A;
  GVar32 = CASE_F;
cf_common_exit_0041BE5F:
  thunk_FUN_0043fc50(GVar32,0);
  g_currentExceptionFrame = local_58.previous;
  return 0;
}

