#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tc_gobj.cpp
   STGameObjC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00403EBD|0041AF40; family_names=STGameObjC::GetMessage; ret4=3;
   direct_offsets={10:6,14:1,18:1,1c:26} */

int __thiscall STGameObjC::GetMessage(STGameObjC *this,STMessage *message)

{
  DArrayTy **ppDVar1;
  undefined4 *puVar2;
  uint *puVar3;
  dword dVar4;
  AnonPointee_STGameObjC_0195 *pAVar5;
  AnonPointee_STGameObjC_01AD *pAVar6;
  ushort *puVar7;
  ushort *puVar8;
  dword *pdVar9;
  AnonPointee_STGameObjC_01B5 *pAVar10;
  AnonPointee_STGameObjC_01B9 *pAVar11;
  STGameObjC *this_00;
  int local_EAX_35;
  uint uVar13;
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
  int iVar15;
  byte *pbVar16;
  char *pcVar17;
  AnonPointee_STGameObjC_01B1 *pAVar18;
  int *piVar19;
  ushort *puVar20;
  byte *pbVar21;
  DArrayTy *pDVar22;
  int *piVar23;
  AnonPointee_STGameObjC_01B9 *pAVar24;
  byte *pbVar25;
  char *pcVar26;
  AnonPointee_STGameObjC_0195 *pAVar27;
  AnonPointee_STGameObjC_01AD *pAVar28;
  ushort *puVar29;
  dword *pdVar30;
  int *piVar31;
  AnonPointee_STGameObjC_01B5 *pAVar32;
  bool bVar33;
  bool bVar34;
  Global_sub_0043FC50_param_1Enum GVar35;
  InternalExceptionFrame local_58;
  int *local_14;
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
    puVar3 = (message->arg0).ptr;
    if (puVar3 == nullptr) {
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\Tc_gobj.cpp",0x678);
    }
    this_00->field_0020 = *puVar3;
    this_00->field_0024 = puVar3[1];
    this_00->field_002C = puVar3[4];
    this_00->field_0028 = puVar3[2];
    iVar15 = this_00->field_0018 * DAT_00808754;
    this_00->field_001C = iVar15;
    uVar13 = iVar15 * 0x41c64e6d + 0x3039;
    this_00->field_001C = uVar13;
    this_00->field_00F8 = (short)((ulonglong)(uVar13 >> 0x10) % 0x1f) + 0x1e;
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
  uVar13 = this_00->field_0020;
  if (uVar13 < 0x1af) {
    if (uVar13 == 0x1ae) {
      if (g_cPanel_00801688 == nullptr) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      /* ST_CALLSITE[0041B533]: CALL 0x00403c51; direct=00403C51 CPanelTy::sub_004FAB10 */
      local_EAX_1523 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_1);
      if (local_EAX_1523 != 0) {
        /* ST_CALLSITE[0041B547]: CALL dword ptr [EAX + 0x30] */
        (*this_00->vtable->vfunc_30)((short)this_00->field_0121);
        iVar15 = 0x1b;
        bVar34 = true;
        pbVar21 = this_00->field_0121;
        pbVar16 = this_00->field_011D;
        do {
          if (iVar15 == 0) break;
          iVar15 = iVar15 + -1;
          bVar34 = *(short *)pbVar21 == *(short *)pbVar16;
          pbVar21 = pbVar21 + 2;
          pbVar16 = pbVar16 + 2;
        } while (bVar34);
        if (!bVar34) {
          pbVar21 = this_00->field_0121;
          pbVar16 = this_00->field_011D;
          memmove(pbVar16, pbVar21, 0x36); /* compiler REP MOVS byte copy */
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
        iVar15 = 0x17;
        bVar34 = true;
        piVar19 = this_00->field_0129;
        piVar23 = this_00->field_0125;
        do {
          if (iVar15 == 0) break;
          iVar15 = iVar15 + -1;
          bVar34 = *piVar19 == *piVar23;
          piVar19 = piVar19 + 1;
          piVar23 = piVar23 + 1;
        } while (bVar34);
        if (!bVar34) {
          piVar19 = this_00->field_0129;
          piVar23 = this_00->field_0125;
          memmove(piVar23, piVar19, 0x5c); /* compiler REP MOVS byte copy */
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
        pAVar6 = this_00->field_01AD;
        local_8 = (AnonShape_0041AF40_EF4C5356 *)this_00->field_01B1;
        iVar15 = 0xb;
        bVar34 = true;
        pAVar18 = (AnonPointee_STGameObjC_01B1 *)local_8;
        pAVar28 = pAVar6;
        do {
          if (iVar15 == 0) break;
          iVar15 = iVar15 + -1;
          bVar34 = *(char *)&pAVar18->field_0000 == *(char *)&pAVar28->field_0000;
          pAVar18 = (AnonPointee_STGameObjC_01B1 *)((int)&pAVar18->field_0000 + 1);
          pAVar28 = (AnonPointee_STGameObjC_01AD *)((int)&pAVar28->field_0000 + 1);
        } while (bVar34);
        if (!bVar34) {
          pAVar6->field_0000 = ((AnonPointee_STGameObjC_01B1 *)local_8)->field_0000;
          pAVar6->field_0004 = ((AnonPointee_STGameObjC_01B1 *)local_8)->field_0004;
          pAVar6->field_0008 = ((AnonPointee_STGameObjC_01B1 *)local_8)->field_0008;
          pAVar6->field_000A = ((AnonPointee_STGameObjC_01B1 *)local_8)->field_000A;
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
      puVar7 = this_00->field_01C5;
      puVar8 = this_00->field_01C9;
      iVar15 = 3;
      bVar34 = true;
      puVar20 = puVar8;
      puVar29 = puVar7;
      do {
        if (iVar15 == 0) break;
        iVar15 = iVar15 + -1;
        bVar34 = *puVar20 == *puVar29;
        puVar20 = puVar20 + 1;
        puVar29 = puVar29 + 1;
      } while (bVar34);
      if (bVar34) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      *(undefined4 *)puVar7 = *(undefined4 *)puVar8;
      puVar7[2] = puVar8[2];
      GVar35 = CASE_12;
      goto cf_common_exit_0041BE5F;
    }
    if (uVar13 < 0x173) {
      if (uVar13 != 0x172) {
        if (uVar13 == 0x14) {
          if ((g_cPanel_00801688 != nullptr) &&
             /* ST_CALLSITE[0041B08E]: CALL 0x00403c51; direct=00403C51 CPanelTy::sub_004FAB10 */
             (local_EAX_334 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_1), local_EAX_334 != 0))
          {
            /* ST_CALLSITE[0041B0A6]: CALL dword ptr [EDX + 0x30] */
            (*this_00->vtable->vfunc_30)((short)this_00->field_0121);
            iVar15 = 0x1b;
            bVar34 = true;
            pbVar21 = this_00->field_0121;
            pbVar16 = this_00->field_011D;
            do {
              if (iVar15 == 0) break;
              iVar15 = iVar15 + -1;
              bVar34 = *(short *)pbVar21 == *(short *)pbVar16;
              pbVar21 = pbVar21 + 2;
              pbVar16 = pbVar16 + 2;
            } while (bVar34);
            if (!bVar34) {
              /* ST_CALLSITE[0041B0C9]: CALL 0x00402b7b; direct=00402B7B STAllPlayersC::GetNInTmp */
              uVar13 = STAllPlayersC::GetNInTmp(0,0);
              if ((short)uVar13 == 1) {
                pbVar21 = this_00->field_0121;
              }
              else {
                pbVar21 = this_00->field_0121;
                if (pbVar21[0x1b] == this_00->field_011D[0x1b]) {
                  iVar15 = 5;
                  bVar34 = true;
                  pbVar16 = pbVar21 + 0x2a;
                  pbVar25 = this_00->field_011D + 0x2a;
                  do {
                    if (iVar15 == 0) break;
                    iVar15 = iVar15 + -1;
                    bVar34 = *pbVar16 == *pbVar25;
                    pbVar16 = pbVar16 + 1;
                    pbVar25 = pbVar25 + 1;
                  } while (bVar34);
                  if (bVar34) goto LAB_0041b128;
                }
              }
              pbVar16 = this_00->field_011D;
              memmove(pbVar16, pbVar21, 0x36); /* compiler REP MOVS byte copy */
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
            iVar15 = 0x17;
            bVar34 = true;
            piVar19 = this_00->field_0129;
            piVar23 = this_00->field_0125;
            do {
              if (iVar15 == 0) break;
              iVar15 = iVar15 + -1;
              bVar34 = *piVar19 == *piVar23;
              piVar19 = piVar19 + 1;
              piVar23 = piVar23 + 1;
            } while (bVar34);
            if (!bVar34) {
              piVar19 = this_00->field_0129;
              piVar23 = this_00->field_0125;
              memmove(piVar23, piVar19, 0x5c); /* compiler REP MOVS byte copy */
              thunk_FUN_0043fc50(CASE_2,0);
            }
          }
          if ((g_cPanel_00801688 != nullptr) &&
             /* ST_CALLSITE[0041B191]: CALL 0x00403c51; direct=00403C51 CPanelTy::sub_004FAB10 */
             (local_EAX_593 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_8), local_EAX_593 != 0))
          {
            ppDVar1 = &this_00->field_0171;
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
            *ppDVar1 = nullptr;
            this_00->field_0175 = nullptr;
            this_00->field_0179 = nullptr;
            this_00->field_017D = nullptr;
            this_00->field_0181 = nullptr;
            /* ST_CALLSITE[0041B20B]: CALL dword ptr [EDX + 0x40] */
            (*this_00->vtable->vfunc_40)((short)ppDVar1);
            local_c = this_00->field_015D;
            bVar34 = false;
            dVar4 = (*ppDVar1)->count;
            if (dVar4 == local_c->count) {
              iVar15 = dVar4 * 0x30;
              bVar33 = true;
              pcVar17 = (*ppDVar1)->data;
              pcVar26 = local_c->data;
              do {
                if (iVar15 == 0) break;
                iVar15 = iVar15 + -1;
                bVar33 = *pcVar17 == *pcVar26;
                pcVar17 = pcVar17 + 1;
                pcVar26 = pcVar26 + 1;
              } while (bVar33);
              if (!bVar33) goto LAB_0041b237;
            }
            else {
LAB_0041b237:
              bVar34 = true;
            }
            if (!bVar34) {
              dVar4 = this_00->field_0175->count;
              if (dVar4 == this_00->field_0161->count) {
                iVar15 = dVar4 * 0x30;
                bVar33 = true;
                pcVar17 = this_00->field_0175->data;
                pcVar26 = this_00->field_0161->data;
                do {
                  if (iVar15 == 0) break;
                  iVar15 = iVar15 + -1;
                  bVar33 = *pcVar17 == *pcVar26;
                  pcVar17 = pcVar17 + 1;
                  pcVar26 = pcVar26 + 1;
                } while (bVar33);
                if (!bVar33) goto LAB_0041b26c;
              }
              else {
LAB_0041b26c:
                bVar34 = true;
              }
              if (!bVar34) {
                dVar4 = this_00->field_0179->count;
                if (dVar4 == this_00->field_0165->count) {
                  iVar15 = dVar4 * 0x30;
                  bVar33 = true;
                  pcVar17 = this_00->field_0179->data;
                  pcVar26 = this_00->field_0165->data;
                  do {
                    if (iVar15 == 0) break;
                    iVar15 = iVar15 + -1;
                    bVar33 = *pcVar17 == *pcVar26;
                    pcVar17 = pcVar17 + 1;
                    pcVar26 = pcVar26 + 1;
                  } while (bVar33);
                  if (!bVar33) goto LAB_0041b2a1;
                }
                else {
LAB_0041b2a1:
                  bVar34 = true;
                }
                if (!bVar34) {
                  dVar4 = this_00->field_017D->count;
                  if (dVar4 == this_00->field_0169->count) {
                    iVar15 = dVar4 * 0x30;
                    bVar33 = true;
                    pcVar17 = this_00->field_017D->data;
                    pcVar26 = this_00->field_0169->data;
                    do {
                      if (iVar15 == 0) break;
                      iVar15 = iVar15 + -1;
                      bVar33 = *pcVar17 == *pcVar26;
                      pcVar17 = pcVar17 + 1;
                      pcVar26 = pcVar26 + 1;
                    } while (bVar33);
                    if (!bVar33) goto LAB_0041b2d2;
                  }
                  else {
LAB_0041b2d2:
                    bVar34 = true;
                  }
                  if (!bVar34) {
                    dVar4 = this_00->field_0181->count;
                    if (dVar4 == this_00->field_016D->count) {
                      iVar15 = dVar4 * 0x30;
                      bVar33 = true;
                      pcVar17 = this_00->field_0181->data;
                      pcVar26 = this_00->field_016D->data;
                      do {
                        if (iVar15 == 0) break;
                        iVar15 = iVar15 + -1;
                        bVar33 = *pcVar17 == *pcVar26;
                        pcVar17 = pcVar17 + 1;
                        pcVar26 = pcVar26 + 1;
                      } while (bVar33);
                      if (bVar33) goto LAB_0041b308;
                    }
                    bVar34 = true;
                  }
                }
              }
            }
LAB_0041b308:
            if (bVar34) {
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
            pAVar5 = this_00->field_0195;
            local_c = (DArrayTy *)this_00->field_0199;
            iVar15 = 0x13;
            bVar34 = true;
            pDVar22 = local_c;
            pAVar27 = pAVar5;
            do {
              if (iVar15 == 0) break;
              iVar15 = iVar15 + -1;
              bVar34 = (char)pDVar22->flags == *(char *)&pAVar27->field_0000;
              pDVar22 = (DArrayTy *)((int)&pDVar22->flags + 1);
              pAVar27 = (AnonPointee_STGameObjC_0195 *)((int)&pAVar27->field_0000 + 1);
            } while (bVar34);
            if (!bVar34) {
              pAVar5->field_0000 = local_c->flags;
              pAVar5->field_0004 = local_c->iteratorIndex;
              pAVar5->field_0008 = local_c->elementSize;
              pAVar5->field_000C = local_c->count;
              pAVar5->field_0010 = (short)local_c->capacity;
              pAVar5->field_0012 = *(undefined1 *)((int)&local_c->capacity + 2);
              thunk_FUN_0043fc50(CASE_B,0);
            }
          }
          if ((g_cPanel_00801688 != nullptr) &&
             /* ST_CALLSITE[0041B459]: CALL 0x00403c51; direct=00403C51 CPanelTy::sub_004FAB10 */
             (local_EAX_1305 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_E), local_EAX_1305 != 0
             )) {
            /* ST_CALLSITE[0041B46D]: CALL dword ptr [EAX + 0x58] */
            (*this_00->vtable->vfunc_58)((short)this_00->field_01B1);
            pAVar6 = this_00->field_01AD;
            local_8 = (AnonShape_0041AF40_EF4C5356 *)this_00->field_01B1;
            iVar15 = 0xb;
            bVar34 = true;
            pAVar18 = (AnonPointee_STGameObjC_01B1 *)local_8;
            pAVar28 = pAVar6;
            do {
              if (iVar15 == 0) break;
              iVar15 = iVar15 + -1;
              bVar34 = *(char *)&pAVar18->field_0000 == *(char *)&pAVar28->field_0000;
              pAVar18 = (AnonPointee_STGameObjC_01B1 *)((int)&pAVar18->field_0000 + 1);
              pAVar28 = (AnonPointee_STGameObjC_01AD *)((int)&pAVar28->field_0000 + 1);
            } while (bVar34);
            if (!bVar34) {
              pAVar6->field_0000 = ((AnonPointee_STGameObjC_01B1 *)local_8)->field_0000;
              pAVar6->field_0004 = ((AnonPointee_STGameObjC_01B1 *)local_8)->field_0004;
              pAVar6->field_0008 = ((AnonPointee_STGameObjC_01B1 *)local_8)->field_0008;
              pAVar6->field_000A = ((AnonPointee_STGameObjC_01B1 *)local_8)->field_000A;
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
          iVar15 = 0x90;
          bVar34 = true;
          piVar19 = this_00->field_01C1;
          piVar23 = this_00->field_01BD;
          do {
            if (iVar15 == 0) break;
            iVar15 = iVar15 + -1;
            bVar34 = *piVar19 == *piVar23;
            piVar19 = piVar19 + 1;
            piVar23 = piVar23 + 1;
          } while (bVar34);
          if (bVar34) {
            g_currentExceptionFrame = local_58.previous;
            return 0;
          }
          piVar19 = this_00->field_01C1;
          piVar23 = this_00->field_01BD;
          memmove(piVar23, piVar19, 0x240); /* compiler REP MOVS byte copy */
          GVar35 = CASE_10;
          goto cf_common_exit_0041BE5F;
        }
        if (uVar13 != 0x5a) goto cf_common_exit_0041B6C6;
      }
    }
    else if (uVar13 != 0x1a4) {
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
      iVar15 = 0x1b;
      bVar34 = true;
      pbVar21 = this_00->field_0121;
      pbVar16 = this_00->field_011D;
      do {
        if (iVar15 == 0) break;
        iVar15 = iVar15 + -1;
        bVar34 = *(short *)pbVar21 == *(short *)pbVar16;
        pbVar21 = pbVar21 + 2;
        pbVar16 = pbVar16 + 2;
      } while (bVar34);
      if (!bVar34) {
        pbVar21 = this_00->field_0121;
        pbVar16 = this_00->field_011D;
        memmove(pbVar16, pbVar21, 0x36); /* compiler REP MOVS byte copy */
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
    iVar15 = 0x17;
    bVar34 = true;
    piVar19 = this_00->field_0129;
    piVar23 = this_00->field_0125;
    do {
      if (iVar15 == 0) break;
      iVar15 = iVar15 + -1;
      bVar34 = *piVar19 == *piVar23;
      piVar19 = piVar19 + 1;
      piVar23 = piVar23 + 1;
    } while (bVar34);
    if (bVar34) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    piVar19 = this_00->field_0129;
    piVar23 = this_00->field_0125;
    memmove(piVar23, piVar19, 0x5c); /* compiler REP MOVS byte copy */
    GVar35 = CASE_4;
    goto cf_common_exit_0041BE5F;
  }
  if (uVar13 == 0x1b8) goto LAB_0041bdb3;
  if (uVar13 != 1000) {
    if (uVar13 != 0x3e9) goto cf_common_exit_0041B6C6;
    if (g_cPanel_00801688 == nullptr) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    /* ST_CALLSITE[0041B712]: CALL 0x00403c51; direct=00403C51 CPanelTy::sub_004FAB10 */
    iVar13 = CPanelTy::sub_004FAB10(g_cPanel_00801688,CASE_4);
    if (iVar13 != 0) {
      /* ST_CALLSITE[0041B726]: CALL dword ptr [EAX + 0x34] */
      (*this_00->vtable->vfunc_34)((short)this_00->field_0129);
      iVar15 = 0x17;
      bVar34 = true;
      piVar19 = this_00->field_0129;
      piVar23 = this_00->field_0125;
      do {
        if (iVar15 == 0) break;
        iVar15 = iVar15 + -1;
        bVar34 = *piVar19 == *piVar23;
        piVar19 = piVar19 + 1;
        piVar23 = piVar23 + 1;
      } while (bVar34);
      if (!bVar34) {
        piVar19 = this_00->field_0129;
        piVar23 = this_00->field_0125;
        memmove(piVar23, piVar19, 0x5c); /* compiler REP MOVS byte copy */
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
    iVar15 = 0x1b;
    bVar34 = true;
    pbVar21 = this_00->field_0121;
    pbVar16 = this_00->field_011D;
    do {
      if (iVar15 == 0) break;
      iVar15 = iVar15 + -1;
      bVar34 = *(short *)pbVar21 == *(short *)pbVar16;
      pbVar21 = pbVar21 + 2;
      pbVar16 = pbVar16 + 2;
    } while (bVar34);
    if (bVar34) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    pbVar21 = this_00->field_0121;
    pbVar16 = this_00->field_011D;
    memmove(pbVar16, pbVar21, 0x36); /* compiler REP MOVS byte copy */
    GVar35 = CASE_5;
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
    iVar15 = 0x17;
    bVar34 = true;
    piVar19 = this_00->field_0129;
    piVar23 = this_00->field_0125;
    do {
      if (iVar15 == 0) break;
      iVar15 = iVar15 + -1;
      bVar34 = *piVar19 == *piVar23;
      piVar19 = piVar19 + 1;
      piVar23 = piVar23 + 1;
    } while (bVar34);
    if (!bVar34) {
      piVar19 = this_00->field_0129;
      piVar23 = this_00->field_0125;
      memmove(piVar23, piVar19, 0x5c); /* compiler REP MOVS byte copy */
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
    iVar15 = 0x1b;
    bVar34 = true;
    pbVar21 = this_00->field_0121;
    pbVar16 = this_00->field_011D;
    do {
      if (iVar15 == 0) break;
      iVar15 = iVar15 + -1;
      bVar34 = *(short *)pbVar21 == *(short *)pbVar16;
      pbVar21 = pbVar21 + 2;
      pbVar16 = pbVar16 + 2;
    } while (bVar34);
    if (!bVar34) {
      pbVar21 = this_00->field_0121;
      pbVar16 = this_00->field_011D;
      memmove(pbVar16, pbVar21, 0x36); /* compiler REP MOVS byte copy */
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
    puVar2 = &this_00->field_0135;
    if ((DArrayTy *)this_00->field_0135 != nullptr) {
      DArrayDestroy((DArrayTy *)this_00->field_0135);
    }
    if ((DArrayTy *)this_00->field_0139 != nullptr) {
      DArrayDestroy((DArrayTy *)this_00->field_0139);
    }
    *puVar2 = 0;
    this_00->field_0139 = 0;
    /* ST_CALLSITE[0041B8CD]: CALL dword ptr [EDX + 0x38] */
    (*this_00->vtable->vfunc_38)((short)puVar2);
    bVar34 = false;
    iVar15 = *(int *)(*puVar2 + 0xc);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (iVar15 == *(int *)(this_00->field_012D + 0xc)) {
      iVar15 = iVar15 * 0x30;
      bVar33 = true;
      pcVar17 = *(char **)(*puVar2 + 0x1c);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      pcVar26 = *(char **)(this_00->field_012D + 0x1c);
      do {
        if (iVar15 == 0) break;
        iVar15 = iVar15 + -1;
        bVar33 = *pcVar17 == *pcVar26;
        pcVar17 = pcVar17 + 1;
        pcVar26 = pcVar26 + 1;
      } while (bVar33);
      if (!bVar33) goto LAB_0041b8f6;
    }
    else {
LAB_0041b8f6:
      bVar34 = true;
    }
    if (!bVar34) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar15 = *(int *)(this_00->field_0139 + 0xc);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (iVar15 == *(int *)(this_00->field_0131 + 0xc)) {
        iVar15 = iVar15 * 0x30;
        bVar33 = true;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        pcVar17 = *(char **)(this_00->field_0139 + 0x1c);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        pcVar26 = *(char **)(this_00->field_0131 + 0x1c);
        do {
          if (iVar15 == 0) break;
          iVar15 = iVar15 + -1;
          bVar33 = *pcVar17 == *pcVar26;
          pcVar17 = pcVar17 + 1;
          pcVar26 = pcVar26 + 1;
        } while (bVar33);
        if (bVar33) goto LAB_0041b92c;
      }
      bVar34 = true;
    }
LAB_0041b92c:
    if (bVar34) {
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
      GVar35 = CASE_6;
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
    puVar2 = &this_00->field_014D;
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
    *puVar2 = 0;
    this_00->field_0151 = 0;
    this_00->field_0155 = 0;
    this_00->field_0159 = 0;
    /* ST_CALLSITE[0041B9FE]: CALL dword ptr [EAX + 0x3c] */
    (*this_00->vtable->vfunc_3C)((short)puVar2);
    local_c = (DArrayTy *)this_00->field_013D;
    bVar34 = false;
    dVar4 = *(dword *)(*puVar2 + 0xc);
    if (dVar4 == local_c->count) {
      iVar15 = dVar4 * 0x30;
      bVar33 = true;
      pcVar17 = *(char **)(*puVar2 + 0x1c);
      pcVar26 = local_c->data;
      do {
        if (iVar15 == 0) break;
        iVar15 = iVar15 + -1;
        bVar33 = *pcVar17 == *pcVar26;
        pcVar17 = pcVar17 + 1;
        pcVar26 = pcVar26 + 1;
      } while (bVar33);
      if (!bVar33) goto LAB_0041ba2a;
    }
    else {
LAB_0041ba2a:
      bVar34 = true;
    }
    if (!bVar34) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar15 = *(int *)(this_00->field_0151 + 0xc);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (iVar15 == *(int *)(this_00->field_0141 + 0xc)) {
        iVar15 = iVar15 * 0x30;
        bVar33 = true;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        pcVar17 = *(char **)(this_00->field_0151 + 0x1c);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        pcVar26 = *(char **)(this_00->field_0141 + 0x1c);
        do {
          if (iVar15 == 0) break;
          iVar15 = iVar15 + -1;
          bVar33 = *pcVar17 == *pcVar26;
          pcVar17 = pcVar17 + 1;
          pcVar26 = pcVar26 + 1;
        } while (bVar33);
        if (!bVar33) goto LAB_0041ba5f;
      }
      else {
LAB_0041ba5f:
        bVar34 = true;
      }
      if (!bVar34) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar15 = *(int *)(this_00->field_0155 + 0xc);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (iVar15 == *(int *)(this_00->field_0145 + 0xc)) {
          iVar15 = iVar15 * 0x30;
          bVar33 = true;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          pcVar17 = *(char **)(this_00->field_0155 + 0x1c);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          pcVar26 = *(char **)(this_00->field_0145 + 0x1c);
          do {
            if (iVar15 == 0) break;
            iVar15 = iVar15 + -1;
            bVar33 = *pcVar17 == *pcVar26;
            pcVar17 = pcVar17 + 1;
            pcVar26 = pcVar26 + 1;
          } while (bVar33);
          if (!bVar33) goto LAB_0041ba90;
        }
        else {
LAB_0041ba90:
          bVar34 = true;
        }
        if (!bVar34) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          iVar15 = *(int *)(this_00->field_0159 + 0xc);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if (iVar15 == *(int *)(this_00->field_0149 + 0xc)) {
            iVar15 = iVar15 * 0x30;
            bVar33 = true;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            pcVar17 = *(char **)(this_00->field_0159 + 0x1c);
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            pcVar26 = *(char **)(this_00->field_0149 + 0x1c);
            do {
              if (iVar15 == 0) break;
              iVar15 = iVar15 + -1;
              bVar33 = *pcVar17 == *pcVar26;
              pcVar17 = pcVar17 + 1;
              pcVar26 = pcVar26 + 1;
            } while (bVar33);
            if (bVar33) goto LAB_0041bac6;
          }
          bVar34 = true;
        }
      }
    }
LAB_0041bac6:
    if (bVar34) {
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
      GVar35 = CASE_7;
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
    iVar15 = 0x129;
    bVar34 = true;
    pcVar17 = this_00->field_0189;
    pcVar26 = this_00->field_0185;
    do {
      if (iVar15 == 0) break;
      iVar15 = iVar15 + -1;
      bVar34 = *pcVar17 == *pcVar26;
      pcVar17 = pcVar17 + 1;
      pcVar26 = pcVar26 + 1;
    } while (bVar34);
    if (!bVar34) {
      pcVar17 = this_00->field_0189;
      pcVar26 = this_00->field_0185;
      memmove(pcVar26, pcVar17, 0x129); /* compiler REP MOVS byte copy */
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
    pdVar9 = this_00->field_018D;
    local_c = this_00->field_0191;
    iVar15 = 4;
    bVar34 = true;
    pDVar22 = local_c;
    pdVar30 = pdVar9;
    do {
      if (iVar15 == 0) break;
      iVar15 = iVar15 + -1;
      bVar34 = pDVar22->flags == *pdVar30;
      pDVar22 = (DArrayTy *)&pDVar22->iteratorIndex;
      pdVar30 = pdVar30 + 1;
    } while (bVar34);
    if (!bVar34) {
      *pdVar9 = local_c->flags;
      pdVar9[1] = local_c->iteratorIndex;
      pdVar9[2] = local_c->elementSize;
      pdVar9[3] = local_c->count;
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
    puVar2 = &this_00->field_01A1;
    local_14 = puVar2;
    if ((DArrayTy *)this_00->field_01A1 != nullptr) {
      DArrayDestroy((DArrayTy *)this_00->field_01A1);
      *puVar2 = 0;
    }
    /* ST_CALLSITE[0041BC76]: CALL dword ptr [EDX + 0x50] */
    (*this_00->vtable->vfunc_50)((short)puVar2);
    pDVar22 = (DArrayTy *)this_00->field_019D;
    local_c = (DArrayTy *)&this_00->field_019D;
    local_8 = nullptr;
    dVar4 = *(dword *)(*puVar2 + 0xc);
    if (dVar4 == pDVar22->count) {
      iVar15 = dVar4 * 0x30;
      bVar34 = true;
      pcVar17 = *(char **)(*puVar2 + 0x1c);
      pcVar26 = pDVar22->data;
      do {
        if (iVar15 == 0) break;
        iVar15 = iVar15 + -1;
        bVar34 = *pcVar17 == *pcVar26;
        pcVar17 = pcVar17 + 1;
        pcVar26 = pcVar26 + 1;
      } while (bVar34);
      if (!bVar34) goto LAB_0041bcad;
    }
    else {
LAB_0041bcad:
      local_8 = (AnonShape_0041AF40_EF4C5356 *)0x1;
    }
    if (local_8 == (AnonShape_0041AF40_EF4C5356 *)0x1) {
      if (pDVar22 != nullptr) {
        DArrayDestroy(pDVar22);
        local_c->flags = 0;
      }
      Library::DKW::TBL::FUN_006afe40((int *)local_c,(uint *)*local_14);
      GVar35 = CASE_C;
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
    piVar19 = this_00->field_01A5;
    local_14 = this_00->field_01A9;
    iVar15 = 3;
    bVar34 = true;
    piVar23 = local_14;
    piVar31 = piVar19;
    do {
      if (iVar15 == 0) break;
      iVar15 = iVar15 + -1;
      bVar34 = *piVar23 == *piVar31;
      piVar23 = piVar23 + 1;
      piVar31 = piVar31 + 1;
    } while (bVar34);
    if (!bVar34) {
      *piVar19 = *local_14;
      piVar19[1] = local_14[1];
      piVar19[2] = local_14[2];
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
  pAVar10 = this_00->field_01B5;
  pAVar11 = this_00->field_01B9;
  iVar15 = 0xb;
  bVar34 = true;
  pAVar24 = pAVar11;
  pAVar32 = pAVar10;
  do {
    if (iVar15 == 0) break;
    iVar15 = iVar15 + -1;
    bVar34 = *(char *)&pAVar24->field_0000 == *(char *)&pAVar32->field_0000;
    pAVar24 = (AnonPointee_STGameObjC_01B9 *)((int)&pAVar24->field_0000 + 1);
    pAVar32 = (AnonPointee_STGameObjC_01B5 *)((int)&pAVar32->field_0000 + 1);
  } while (bVar34);
  if (bVar34) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  pAVar10->field_0000 = pAVar11->field_0000;
  pAVar10->field_0004 = pAVar11->field_0004;
  pAVar10->field_0008 = pAVar11->field_0008;
  pAVar10->field_000A = pAVar11->field_000A;
  GVar35 = CASE_F;
cf_common_exit_0041BE5F:
  thunk_FUN_0043fc50(GVar35,0);
  g_currentExceptionFrame = local_58.previous;
  return 0;
}

