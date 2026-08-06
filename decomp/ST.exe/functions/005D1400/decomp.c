#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::GetMessage

   [STSwitchEnumApplier] Switch target field_1E26 uses
   /SubmarineTitans/Recovered/Enums/SettMapMTy_field_1E26State. Cases:
   CASE_4=4;CASE_5=5;CASE_7=7;CASE_C=12;CASE_F=15;CASE_10=16;CASE_13=19

   [STSwitchEnumApplier] Switch target field_1E26 uses
   /SubmarineTitans/Recovered/Enums/SettMapTy_field_1E26State. Cases:
   CASE_4=4;CASE_5=5;CASE_7=7;CASE_C=12;CASE_13=19

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=0040137A|005D1400; family_names=SettMapMTy::GetMessage; ret4=2;
   direct_offsets={10:4,14:18,18:10,1c:25} */

int __thiscall SettMapMTy::GetMessage(SettMapMTy *this,STMessage *message)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  SettMapMTy_field_1E26State SVar4;
  STMessageId SVar6;
  SettMapMTy_field_1E2FDArray *pSVar7;
  MMsgTy *pMVar8;
  StartSystemTy *pSVar9;
  dword dVar10;
  ccFntTy *pcVar11;
  int *piVar12;
  CursorClassTy *pCVar14;
  SettMapMTy *this_00;
  DWORD DVar15;
  int iVar16;
  uint *puVar18;
  SettMapMTy_field_1E2FElement *element_1e2f;
  SettMapMTy_field_1E2FElement *element_1e2f_2;
  byte *pbVar19;
  DArrayTy *pDVar20;
  SettMapMTy_field_1F84DArray *pSVar21;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  AnonNested_005D1400_0050_DA378AC5 *pAVar22;
  byte bVar23;
  undefined1 *puVar24;
  AnonShape_GLOBAL_0081175C_57F682DD *pAVar25;
  AnonShape_005D1400_5A9F7B11 *pAVar26;
  uint uVar27;
  char *pcVar28;
  SettMapMTy_field_1F84Element *element_1f84;
  SettMapMTy_field_1F84Element *element_1f84_2;
  uint uVar29;
  BulkInitializedRecord_008087C7 *pBVar30;
  uint uVar31;
  uint puVar17;
  AnonShape_005D1400_891386BF *pAVar32;
  SettMapMTy_field_1F84Element *element_1f84_3;
  char *pcVar33;
  SettMapMTy_field_1F84Element *element_1f84_4;
  byte *puVar34;
  char *pcVar35;
  AnonShape_005CBBE0_2D1CAA09 *pAVar36;
  bool bVar37;
  bool bVar38;
  int iVar39;
  undefined4 uVar40;
  int iVar41;
  uint *puVar42;
  char local_640 [1044];
  char local_22c [64];
  int local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  char local_190 [64];
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  InternalExceptionFrame local_f4;
  undefined4 local_b0 [8];
  undefined4 local_90 [4];
  undefined4 local_80;
  undefined1 uStack_7d;
  undefined4 local_7c;
  undefined1 local_70 [11];
  undefined1 local_65;
  undefined1 local_64;
  undefined1 local_63;
  undefined4 local_62;
  int local_5a;
  undefined4 local_56;
  SettMapMTy *local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 *local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  AnonShape_005D1400_5A9F7B11 *local_18;
  byte local_11;
  char *local_10;
  AnonShape_005D1400_891386BF *local_c;
  char local_5;
  uint SVar5;
  uint temp_5fb3942e6a;

  local_48 = this;
  DVar15 = STAppC::sub_006E51B0(this->field_0010);
  uVar29 = 0;
  this->field_0061 = DVar15;
  local_f4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_f4;
  iVar16 = Library::MSVCRT::__setjmp3(local_f4.jumpBuffer,0);
  this_00 = local_48;
  if (iVar16 != 0) {
    g_currentExceptionFrame = local_f4.previous;
    iVar39 = ReportDebugMessage("E:\\__titans\\Start\\settmobj.cpp",0x986,0,iVar16,
                                "%s","SettMapMTy::GetMessage");
    if (iVar39 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar16,0,"E:\\__titans\\Start\\settmobj.cpp",0x986);
    return 0xffff;
  }
  SettMapTy::GetMessage((SettMapTy *)local_48,message);
  StartSystemTy::ChatMessage(g_startSystem_0081176C,message);
  pCVar14 = g_cursorClass_00802A30;
  SVar6 = message->id;
  if (SVar6 < MESS_SETTMAPSTY_6505) {
    if (SVar6 == MESS_SHARED_6504) {
      uVar29 = (message->arg0).u32;
      if ((uVar29 != 0xffffffff) && (this_00->field_1F84 != nullptr)) {
        pSVar7 = this_00->field_1E2F;
        if (uVar29 < pSVar7->count) {
          element_1e2f = DArrayAt<SettMapMTy_field_1E2FElement>(pSVar7, uVar29);
        }
        else {
          element_1e2f = nullptr;
        }
        bVar23 = *(byte *)(element_1e2f + 0x41);
        local_c = (AnonShape_005D1400_891386BF *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar23));
        if (DAT_0080877e == '\0') {
          ChgPlList(this_00,message->arg1,2,(uint)bVar23,0);
        }
        else {
          ChangePlayerCiv(this_00,(message->arg1).u32,bVar23);
          SendPlList(this_00,0);
        }
      }
    }
    else if (SVar6 < MESS_SHARED_6341) {
      if (SVar6 == MESS_SETTMAPMTY_6340) {
        MMMObjTy::PaintSlBut
                  ((MMMObjTy *)this_00,
                   (RecoveredRecord_MMMObjTy_005B6560 *)&this_00->field_1A5B->field_055C,
                   (int)message,0);
      }
      else if (SVar6 < MESS_CHOOSEMAPTY_6327) {
        if (SVar6 == MESS_SHARED_6326) {
          this_00->field_2208 = '\x02' - *(char *)(message->arg0).ptr;
        }
        else if (SVar6 == MESS_ID_CREATE) {
          this_00->field_2209 = this_00->field_0061;
        }
        else if (SVar6 == MESS_SHARED_0003) {
          if (this_00->field_2226 != nullptr) {
            FreeAndNull(&this_00->field_2226);
            this_00->field_222A = 0;
          }
          if (this_00->field_222F != nullptr) {
            DArrayDestroy(this_00->field_222F);
          }
          this_00->field_222F = nullptr;
          if ((this_00->field_004D != 0x60ff) && (g_int_00811764 != nullptr)) {
            if (DAT_0080877e == '\0') {
              FUN_00715360(g_int_00811764,0,'\x11',nullptr,0,0,0xffffffff);
              if (this_00->field_004D != 0x6109) {
                thunk_FUN_005dac60();
              }
            }
            else if (this_00->field_004D == 0x611f) {
              FUN_00715360(g_int_00811764,0,'\x12',nullptr,0,0,0xffffffff);
            }
            else {
              FUN_00715360(g_int_00811764,0,'\x10',nullptr,0,0,0xffffffff);
              thunk_FUN_005dac60();
            }
          }
        }
      }
      else if (SVar6 == MESS_CHOOSEMAPTY_6327) {
        piVar12 = (message->arg0).ptr;
        sub_005B5F00(this_00,(RecoveredSourceFamily_dibcopy *)this_00->field_2204,piVar12);
        iVar16 = *piVar12;
        local_10 = (char *)piVar12[5];
        ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_00->field_2204,0,
                         (iVar16 + -1) * (int)local_10,0,(int)local_10,
                         this_00->field_2204->field_0008 -
                         ((-(uint)(piVar12[1] != 1) & 0xfffffffd) + 3));
        uVar29 = 2;
        iVar41 = -1;
        iVar39 = -1;
        puVar18 = (uint *)LoadResourceString((iVar16 != 1) + 0x2422,g_hINSTANCE_00807618);
        ccFntTy::WrStr(g_startSystem_0081176C->field_0034,puVar18,iVar39,iVar41,uVar29);
        FUN_006b35d0((int *)g_ddxContext_008075A8,this_00->field_2200);
      }
    }
    else if (SVar6 < MESS_PRIVIDERTY_6502) {
      if (SVar6 == MESS_SHARED_6501) {
        uVar29 = (message->arg0).u32;
        if ((uVar29 != 0xffffffff) && (this_00->field_1F84 != nullptr)) {
          pSVar7 = this_00->field_1E2F;
          if (uVar29 < pSVar7->count) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            puVar18 = (uint *)((int)&pSVar7->data->field_0000 + pSVar7->elementSize * uVar29);
          }
          else {
            puVar18 = nullptr;
          }
          bVar23 = *(byte *)(puVar18 + 0x41);
          local_c = (AnonShape_005D1400_891386BF *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar23));
          if (DAT_0080877e == '\0') {
            ChgPlList(this_00,message->arg1,5,1,(uint)bVar23);
          }
          else {
            ChangePlayerTeam(this_00,(message->arg1).u32,1,(uint)bVar23);
            SendPlList(this_00,0);
          }
        }
      }
      else if (SVar6 == MESS_SHARED_6341) {
        MMMObjTy::PaintSlBut
                  ((MMMObjTy *)this_00,
                   (RecoveredRecord_MMMObjTy_005B6560 *)&this_00->field_1A5B->field_05ED,
                   (int)message,0);
      }
      else if ((SVar6 == MESS_SHARED_64FF) && (DAT_0080877e != '\0')) {
        FUN_00715360(g_int_00811764,0,' ',(char *)&this_00->field_1F53,0xd,1,0xffffffff);
      }
    }
    else if (((SVar6 == MESS_PRIVIDERTY_6502) &&
             (uVar29 = (message->arg0).u32, uVar29 != 0xffffffff)) &&
            (this_00->field_1F84 != nullptr)) {
      pSVar7 = this_00->field_1E2F;
      if (uVar29 < pSVar7->count) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        puVar18 = (uint *)((int)&pSVar7->data->field_0000 + pSVar7->elementSize * uVar29);
      }
      else {
        puVar18 = nullptr;
      }
      bVar23 = *(byte *)(puVar18 + 0x41);
      local_c = (AnonShape_005D1400_891386BF *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar23));
      if (DAT_0080877e == '\0') {
        ChgPlList(this_00,message->arg1,1,(uint)bVar23,0);
      }
      else {
        ChangePlayerColor(this_00,(message->arg1).u32,bVar23);
        SendPlList(this_00,0);
      }
    }
    goto switchD_005d1877_caseD_6507;
  }
  if (MESS_SETTMAPMTY_654B < SVar6) {
    if (SVar6 < 0x694b) {
      if (SVar6 == MESS_FSGSTY_694A) {
        pSVar21 = this_00->field_1F84;
        local_34 = 0x1010101;
        bVar38 = false;
        local_30 = (undefined1 *)0x1010101;
        local_5 = '\0';
        local_11 = 0;
        if (pSVar21 != nullptr) {
          if (DAT_0080877e == '\0') {
LAB_005d1b5a:
            if (g_cursorClass_00802A30 != nullptr) {
              iVar16 = g_cursorClass_00802A30->field_00C9;
              iVar39 = g_cursorClass_00802A30->field_00C5;
              g_cursorClass_00802A30->field_0493 = CASE_5;
              pCVar14->field_0494 = 0xffff;
              CursorClassTy::SetGCType(pCVar14,CASE_0,iVar39,iVar16);
              CursorClassTy::DrawSprite(pCVar14,pCVar14->field_00C5,pCVar14->field_00C9);
              pCVar14->field_00D2 = 0;
              pCVar14->field_04DF = -1;
            }
            DAT_008087c6 = '\0';
            DAT_0080874f = 0;
            pBVar30 = g_bulkInitializedRecords_008087C7;
            for (iVar16 = 0xa2; iVar16 != 0; iVar16 = iVar16 + -1) {
              *(undefined4 *)pBVar30 = 0;
              pBVar30 = (BulkInitializedRecord_008087C7 *)&pBVar30->field_0x4;
            }
            pbVar19 = &g_bulkInitializedRecords_008087C7[0].field_0022;
            do {
              pbVar19[-1] = 0;
              *pbVar19 = 0xff;
              pbVar19 = pbVar19 + 0x51;
            } while ((int)pbVar19 < 0x808a71);
            pSVar21 = this_00->field_1F84;
            uVar31 = 0;
            uVar29 = pSVar21->count;
            if (0 < (int)uVar29) {
              bVar38 = uVar29 != 0;
              do {
                if (bVar38) {
                  element_1f84 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar21, uVar31);
                }
                else {
                  element_1f84 = nullptr;
                }
                if (((element_1f84 != nullptr) && (element_1f84->field_0000 != '\0')) && (element_1f84->state != 0xff)) {
                  *(undefined1 *)((int)&local_34 + (uint)(byte)element_1f84->state) = 0;
                }
                uVar31 = uVar31 + 1;
                bVar38 = uVar31 < uVar29;
              } while ((int)uVar31 < (int)uVar29);
            }
            local_18 = nullptr;
            if (0 < (int)uVar29) {
              bVar38 = uVar29 != 0;
              do {
                if (bVar38) {
                  element_1f84 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar21, (int)local_18);
                }
                else {
                  element_1f84 = nullptr;
                }
                if (((element_1f84 != nullptr) && (element_1f84->field_0004 != '\0')) &&
                   ((element_1f84->field_0004 != '\x01' ||
                    ((this_00->field_1E26 == CASE_5 || (this_00->field_1E26 == CASE_F)))))) {
                  pDVar20 = element_1f84->handle;
                  if ((uint)(byte)element_1f84->field_0005 < pDVar20->count) {
                    local_c = DArrayAt<AnonShape_005D1400_891386BF>(pDVar20, (uint)(byte)element_1f84->field_0005);
                  }
                  else {
                    local_c = nullptr;
                  }
                  DAT_008087c6 = DAT_008087c6 + '\x01';
                  if (element_1f84->state == -1) {
                    iVar16 = 0;
                    do {
                      if (*(char *)((int)&local_34 + iVar16) != '\0') {
                        element_1f84->state = (char)iVar16;
                        *(undefined1 *)((int)&local_34 + iVar16) = 0;
                        break;
                      }
                      iVar16 = iVar16 + 1;
                    } while (iVar16 < 8);
                  }
                  g_bulkInitializedRecords_008087C7[(byte)element_1f84->state].field_0022 = element_1f84->state;
                  puVar17 = (uint)&local_18->field_0x1;
                  g_bulkInitializedRecords_008087C7[(byte)element_1f84->state].field_0021 = element_1f84->field_0003;
                  pSVar21 = this_00->field_1F84;
                  bVar38 = puVar17 < pSVar21->count;
                  if ((int)puVar17 < (int)pSVar21->count) {
                    do {
                      if (bVar38) {
                        element_1f84_4 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar21, puVar17);
                      }
                      else {
                        element_1f84_4 = nullptr;
                      }
                      if (element_1f84_4 != nullptr) {
                        if (element_1f84_4->field_0000 != '\0') break;
                        element_1f84_4->state = element_1f84->state;
                      }
                      pSVar21 = this_00->field_1F84;
                      puVar17 = puVar17 + 1;
                      bVar38 = puVar17 < pSVar21->count;
                    } while ((int)puVar17 < (int)pSVar21->count);
                  }
                  uVar29 = 0xffffffff;
                  pcVar33 = &DAT_008016a0;
                  do {
                    pcVar35 = pcVar33;
                    if (uVar29 == 0) break;
                    uVar29 = uVar29 - 1;
                    pcVar35 = pcVar33 + 1;
                    cVar2 = *pcVar33;
                    pcVar33 = pcVar35;
                  } while (cVar2 != '\0');
                  uVar29 = ~uVar29;
                  local_10 = &g_bulkInitializedRecords_008087C7[(byte)element_1f84->state].field_0x1;
                  pcVar33 = pcVar35 + -uVar29;
                  pcVar35 = &g_bulkInitializedRecords_008087C7[(byte)element_1f84->state].field_0x1;
                  memmove(pcVar35, pcVar33, uVar29); /* compiler REP MOVS byte copy */
                  uVar31 = 0;
                  cVar2 = element_1f84->field_0004;
                  if (cVar2 == '\x02') {
                    if (element_1f84->field_0000 != '\0') {
                      *(undefined1 *)(g_bulkInitializedRecords_008087C7 + (byte)element_1f84->state) = 0;
                    }
                    if (DAT_0080877f == element_1f84->element) {
                      DAT_0080874d = element_1f84->state;
                      DAT_0080874e = element_1f84->field_0003;
                    }
                  }
                  else if (cVar2 == '\x03') {
                    if (DAT_0080877f == element_1f84->element) {
                      DAT_0080874d = element_1f84->state;
                      DAT_0080874e = element_1f84->field_0003;
                      DAT_0080874f = 1;
                    }
                  }
                  else if (cVar2 == '\x04') {
                    *(undefined1 *)(g_bulkInitializedRecords_008087C7 + (byte)element_1f84->state) = 1;
                    if (local_c == nullptr) {
                      uVar29 = 0xffffffff;
                      pcVar33 = &DAT_008016a0;
                      do {
                        pcVar35 = pcVar33;
                        if (uVar29 == 0) break;
                        uVar29 = uVar29 - 1;
                        pcVar35 = pcVar33 + 1;
                        cVar2 = *pcVar33;
                        pcVar33 = pcVar35;
                      } while (cVar2 != '\0');
                      uVar29 = ~uVar29;
                      local_10 = &g_bulkInitializedRecords_008087C7[(byte)element_1f84->state].field_0x1;
                      pcVar33 = pcVar35 + -uVar29;
                      pcVar35 = &g_bulkInitializedRecords_008087C7[(byte)element_1f84->state].field_0x1;
                      memmove(pcVar35, pcVar33, uVar29); /* compiler REP MOVS byte copy */
                      uVar31 = 0;
                    }
                    else {
                      uVar29 = 0xffffffff;
                      pcVar33 = &local_c->field_0x4c;
                      do {
                        pcVar35 = pcVar33;
                        if (uVar29 == 0) break;
                        uVar29 = uVar29 - 1;
                        pcVar35 = pcVar33 + 1;
                        cVar2 = *pcVar33;
                        pcVar33 = pcVar35;
                      } while (cVar2 != '\0');
                      uVar29 = ~uVar29;
                      local_10 = &g_bulkInitializedRecords_008087C7[(byte)element_1f84->state].field_0x1;
                      pcVar33 = pcVar35 + -uVar29;
                      pcVar35 = &g_bulkInitializedRecords_008087C7[(byte)element_1f84->state].field_0x1;
                      memmove(pcVar35, pcVar33, uVar29); /* compiler REP MOVS byte copy */
                      uVar31 = 0;
                    }
                  }
                  g_bulkInitializedRecords_008087C7[(byte)element_1f84->state].field_0023 = element_1f84->field_004A;
                  g_bulkInitializedRecords_008087C7[(byte)element_1f84->state].field_0024 =
                       element_1f84->field_0054;
                  g_bulkInitializedRecords_008087C7[(byte)element_1f84->state].field_0028 =
                       element_1f84->field_0058;
                  g_bulkInitializedRecords_008087C7[(byte)element_1f84->state].field_002C =
                       element_1f84->field_005C;
                }
                pSVar21 = this_00->field_1F84;
                local_18 = (AnonShape_005D1400_5A9F7B11 *)&local_18->field_0x1;
                bVar38 = local_18 < (undefined1 *)pSVar21->count;
              } while ((int)local_18 < (int)pSVar21->count);
            }
            STAppC::sub_0056EE90((STAppC *)&DAT_00807620);
            pCVar14 = g_cursorClass_00802A30;
            if ((this_00->field_1E26 == CASE_7) || (this_00->field_1E26 == 0xe)) {
              if ((this_00->field_1F47 != 0) || ((message->arg0).u32 != 0)) {
                uVar29 = 0xffffffff;
                pcVar28 = &DAT_00853de4;
                do {
                  pcVar33 = pcVar28;
                  if (uVar29 == 0) break;
                  uVar29 = uVar29 - 1;
                  pcVar33 = pcVar28 + 1;
                  cVar2 = *pcVar28;
                  pcVar28 = pcVar33;
                } while (cVar2 != '\0');
                uVar29 = ~uVar29;
                pcVar28 = pcVar33 + -uVar29;
                pcVar33 = &DAT_0080ed16;
                memmove(pcVar33, pcVar28, uVar29); /* compiler REP MOVS byte copy */
                uVar31 = 0;
                goto LAB_005d2018;
              }
              if ((DAT_0080877e != '\0') && (this_00->field_1A5B->field_02E6 != nullptr)) {
                if (g_cursorClass_00802A30 != nullptr) {
                  iVar16 = g_cursorClass_00802A30->field_00C9;
                  iVar39 = g_cursorClass_00802A30->field_00C5;
                  g_cursorClass_00802A30->field_0493 = CASE_1;
                  pCVar14->field_0494 = 0xffff;
                  CursorClassTy::SetGCType(pCVar14,CASE_0,iVar39,iVar16);
                  CursorClassTy::DrawSprite(pCVar14,pCVar14->field_00C5,pCVar14->field_00C9);
                  pCVar14->field_00D2 = 0;
                  pCVar14->field_04DF = -1;
                }
                pSVar9 = this_00->field_1A5B;
                memset(local_90, 0, 0x20); /* compiler bulk-zero initialization */
                iVar16 = 0;
                memset(local_b0, 0, 0x20); /* compiler bulk-zero initialization */
                local_b0[2] = this_00->field_0008;
                local_90[3] = 2;
                local_b0[3] = 2;
                local_80 = 0x694a;
                local_7c = 1;
                local_b0[4] = 0x693f;
                local_90[2] = local_b0[2];
                iVar16 = MMsgTy::SetMessage(pSVar9->field_02E6,0x251f,'\x01',local_90,local_b0,
                                            nullptr,0,0);
                if (iVar16 != 0) {
                  this_00->vfunc_24();
                }
              }
            }
            else {
LAB_005d2018:
              uVar29 = 0xffffffff;
              local_5 = '\x01';
              pcVar28 = &DAT_0080ed16;
              do {
                pcVar33 = pcVar28;
                if (uVar29 == 0) break;
                uVar29 = uVar29 - 1;
                pcVar33 = pcVar28 + 1;
                cVar2 = *pcVar28;
                pcVar28 = pcVar33;
              } while (cVar2 != '\0');
              uVar29 = ~uVar29;
              pcVar28 = pcVar33 + -uVar29;
              pcVar33 = (char *)&DAT_0080ee1a;
              memmove(pcVar33, pcVar28, uVar29); /* compiler REP MOVS byte copy */
              uVar29 = 0xffffffff;
              pcVar28 = &DAT_00807680;
              do {
                if (uVar29 == 0) break;
                uVar29 = uVar29 - 1;
                cVar2 = *pcVar28;
                pcVar28 = pcVar28 + 1;
              } while (cVar2 != '\0');
              uVar31 = 0xffffffff;
              pcVar28 = (char *)((int)&DAT_0080ed12 + ~uVar29 + 3);
              do {
                pcVar33 = pcVar28;
                if (uVar31 == 0) break;
                uVar31 = uVar31 - 1;
                pcVar33 = pcVar28 + 1;
                cVar2 = *pcVar28;
                pcVar28 = pcVar33;
              } while (cVar2 != '\0');
              uVar31 = ~uVar31;
              pcVar28 = pcVar33 + -uVar31;
              pcVar33 = &DAT_0080ef1e;
              memmove(pcVar33, pcVar28, uVar31); /* compiler REP MOVS byte copy */
              uVar31 = 0;
            }
            if (local_5 != '\0') {
              DAT_008087a0 = this_00->field_1E26;
              DAT_0080879c = 0;
              if (DAT_0080877e == '\0') {
                memset(&DAT_00808ab0, 0, 0xea0); /* compiler bulk-zero initialization */
                iVar16 = 0;
                DAT_00808aaf = 0;
                pSVar21 = this_00->field_1F84;
                local_18 = nullptr;
                if (0 < (int)pSVar21->count) {
                  bVar38 = pSVar21->count != 0;
                  do {
                    if (bVar38) {
                      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
                      pcVar28 = &pSVar21->data->field_0000 + pSVar21->elementSize * (int)local_18;
                    }
                    else {
                      pcVar28 = nullptr;
                    }
                    if (pcVar28 != nullptr) {
                      cVar2 = pcVar28[4];
                      local_5 = cVar2;
                      if ((cVar2 != '\x01') && (cVar2 != '\0')) {
                        if (cVar2 == '\x04') {
                          pDVar20 = *(DArrayTy **)(pcVar28 + 0x50);
                          if ((uint)(byte)pcVar28[5] < pDVar20->count) {
                            pcVar33 = DArrayAt<char>(pDVar20, (uint)(byte)pcVar28[5]);
                          }
                          else {
                            pcVar33 = nullptr;
                          }
                          if (pcVar33 != nullptr) {
                            uVar29 = 0xffffffff;
                            do {
                              pcVar35 = pcVar33;
                              if (uVar29 == 0) break;
                              uVar29 = uVar29 - 1;
                              pcVar35 = pcVar33 + 1;
                              cVar1 = *pcVar33;
                              pcVar33 = pcVar35;
                            } while (cVar1 != '\0');
                            uVar29 = ~uVar29;
                            pcVar35 = pcVar35 + -uVar29;
                            local_10 = local_22c;
                            goto LAB_005d24b8;
                          }
                        }
                        else {
                          uVar29 = 0xffffffff;
                          pcVar33 = pcVar28 + 10;
                          do {
                            pcVar35 = pcVar33;
                            if (uVar29 == 0) break;
                            uVar29 = uVar29 - 1;
                            pcVar35 = pcVar33 + 1;
                            cVar1 = *pcVar33;
                            pcVar33 = pcVar35;
                          } while (cVar1 != '\0');
                          uVar29 = ~uVar29;
                          pcVar35 = pcVar35 + -uVar29;
                          local_10 = local_22c;
LAB_005d24b8:
                          pcVar33 = local_22c;
                          for (uVar31 = uVar29 >> 2; uVar31 != 0; uVar31 = uVar31 - 1) {
                            *(undefined4 *)pcVar33 = *(undefined4 *)pcVar35;
                            pcVar35 = pcVar35 + 4;
                            pcVar33 = pcVar33 + 4;
                          }
                          for (uVar29 = uVar29 & 3; local_10 = local_22c, uVar29 != 0;
                              uVar29 = uVar29 - 1) {
                            *pcVar33 = *pcVar35;
                            pcVar35 = pcVar35 + 1;
                            pcVar33 = pcVar33 + 1;
                          }
                        }
                        local_1ec = *(int *)(pcVar28 + 6);
                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                        STPiece<0,2>(local_1e8) = CONCAT11(*pcVar28,pcVar28[2]);
                        local_1e4 = this_00->field_0061;
                        if (cVar2 == '\x02') {
                          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                          local_1e8 = CONCAT13(1,CONCAT12(1,(undefined2)local_1e8));
                        }
                        else {
                          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                          local_1e8 = CONCAT13(1,CONCAT12((cVar2 != '\x03') + -1,
                                                          (undefined2)local_1e8)) & 0xff02ffff;
                        }
                        pcVar28 = local_22c;
                        puVar34 = (byte *)(&DAT_00808ab0 + (uint)DAT_00808aaf * 0x27);
                        memmove(puVar34, pcVar28, 0x9c); /* compiler REP MOVS byte copy */
                        if ((byte)local_1e8 < 8) {
                          iVar39 = 0;
                          iVar16 = (local_1e8 & 0xff) * 0x51;
                          do {
                            if (*(char *)(iVar16 + 0x808800 + iVar39) == '\0') {
                              *(byte *)(iVar16 + 0x808800 + iVar39) = DAT_00808aaf;
                              break;
                            }
                            iVar39 = iVar39 + 1;
                          } while (iVar39 < 0x18);
                        }
                        DAT_00808aaf = DAT_00808aaf + 1;
                      }
                    }
                    pSVar21 = this_00->field_1F84;
                    local_18 = (AnonShape_005D1400_5A9F7B11 *)&local_18->field_0x1;
                    bVar38 = local_18 < (undefined1 *)pSVar21->count;
                  } while ((int)local_18 < (int)pSVar21->count);
                }
                RunGame(this_00);
                FUN_006b6500(g_int_00811764,1);
                FUN_00715360(g_int_00811764,1,'.',nullptr,0,0,0xffffffff);
                FUN_006b6500(g_int_00811764,DAT_0080733c);
              }
              else {
                FUN_006b6500(g_int_00811764,1);
                memset((void *)local_70, 0, 0x26); /* compiler bulk-zero initialization */
                iVar16 = 0;
                local_64 = DAT_0080733b;
                STPiece<3,4>(local_70) = DAT_008087be;
                STPiece<0,2>(local_70) = (undefined2)((uint)DAT_00807dd5 >> 0x10);
                local_63 = DAT_00807361;
                local_62 = DAT_00808754;
                local_56 = this_00->field_2121;
                local_70[2] = 2;
                local_5a = DAT_00808aab;
                switch(this_00->field_1E26) {
                case CASE_4:
                  local_65 = 2;
                  break;
                case CASE_5:
                  local_65 = 3;
                  break;
                case CASE_7:
                  local_65 = 1;
                  break;
                case CASE_C:
                  local_65 = 5;
                  break;
                case CASE_13:
                  if ((0x13 < DAT_00803400) && (DAT_00803400 < 0x16)) {
                    local_65 = 4;
                  }
                }
                FUN_00715360(g_int_00811764,0,'-',local_70,0x26,1,0xffffffff);
                FUN_006b6500(g_int_00811764,DAT_0080733c);
                this_00->field_2233 = this_00->field_0061;
                this_00->field_222E = 1;
                pDVar20 = Library::DKW::TBL::DArrayCreate(nullptr,0x28,4,10);
                this_00->field_222F = pDVar20;
                if (g_array_0080C4FE != nullptr) {
                  DArrayDestroy(g_array_0080C4FE);
                }
                g_array_0080C4FE = Library::DKW::TBL::DArrayCreate(nullptr,0x28,4,10);
                memset(&DAT_00808ab0, 0, 0xea0); /* compiler bulk-zero initialization */
                DAT_00808aaf = 0;
                pSVar21 = this_00->field_1F84;
                local_18 = nullptr;
                if (0 < (int)pSVar21->count) {
                  bVar38 = pSVar21->count != 0;
                  do {
                    if (bVar38) {
                      element_1f84_3 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar21, (int)local_18);
                    }
                    else {
                      element_1f84_3 = nullptr;
                    }
                    local_c = element_1f84_3;
                    if (element_1f84_3 != nullptr) {
                      if (((element_1f84_3->field_0x4 == '\x02') || (element_1f84_3->field_0x4 == '\x03')) &&
                         (DAT_0080877f != element_1f84_3->field_0006)) {
                        Library::DKW::TBL::DArrayAppend(this_00->field_222F,&element_1f84_3->field_0006);
                        Library::DKW::TBL::DArrayAppend(g_array_0080C4FE,&element_1f84_3->field_0006);
                      }
                      cVar2 = element_1f84_3->field_0x4;
                      local_5 = cVar2;
                      if ((cVar2 != '\x01') && (cVar2 != '\0')) {
                        uVar29 = 0xffffffff;
                        local_10 = local_190;
                        pcVar28 = &local_c->field_0xa;
                        do {
                          pcVar33 = pcVar28;
                          if (uVar29 == 0) break;
                          uVar29 = uVar29 - 1;
                          pcVar33 = pcVar28 + 1;
                          cVar1 = *pcVar28;
                          pcVar28 = pcVar33;
                        } while (cVar1 != '\0');
                        uVar29 = ~uVar29;
                        pcVar28 = pcVar33 + -uVar29;
                        pcVar33 = local_190;
                        memmove(pcVar33, pcVar28, uVar29); /* compiler REP MOVS byte copy */
                        uVar31 = 0;
                        if (cVar2 == '\x04') {
                          iVar16 = local_c->field_0050;
                          if ((uint)(byte)local_c->field_0x5 < *(uint *)(iVar16 + 0xc)) {
                            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                            pcVar28 = (char *)(*(int *)(iVar16 + 8) * (uint)(byte)local_c->field_0x5
                                              + *(int *)(iVar16 + 0x1c));
                          }
                          else {
                            pcVar28 = nullptr;
                          }
                          if (pcVar28 != nullptr) {
                            uVar29 = 0xffffffff;
                            do {
                              pcVar33 = pcVar28;
                              if (uVar29 == 0) break;
                              uVar29 = uVar29 - 1;
                              pcVar33 = pcVar28 + 1;
                              cVar1 = *pcVar28;
                              pcVar28 = pcVar33;
                            } while (cVar1 != '\0');
                            uVar29 = ~uVar29;
                            pcVar33 = pcVar33 + -uVar29;
                            local_10 = local_190;
                            goto LAB_005d22dd;
                          }
                        }
                        else {
                          uVar29 = 0xffffffff;
                          pcVar28 = &local_c->field_0xa;
                          do {
                            pcVar33 = pcVar28;
                            if (uVar29 == 0) break;
                            uVar29 = uVar29 - 1;
                            pcVar33 = pcVar28 + 1;
                            cVar1 = *pcVar28;
                            pcVar28 = pcVar33;
                          } while (cVar1 != '\0');
                          uVar29 = ~uVar29;
                          pcVar33 = pcVar33 + -uVar29;
                          local_10 = local_190;
LAB_005d22dd:
                          pcVar28 = local_190;
                          for (uVar31 = uVar29 >> 2; uVar31 != 0; uVar31 = uVar31 - 1) {
                            *(undefined4 *)pcVar28 = *(undefined4 *)pcVar33;
                            pcVar33 = pcVar33 + 4;
                            pcVar28 = pcVar28 + 4;
                          }
                          for (uVar29 = uVar29 & 3; local_10 = local_190, uVar29 != 0;
                              uVar29 = uVar29 - 1) {
                            *pcVar28 = *pcVar33;
                            pcVar33 = pcVar33 + 1;
                            pcVar28 = pcVar28 + 1;
                          }
                        }
                        local_150 = local_c->field_0006;
                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                        STPiece<0,2>(local_14c) = CONCAT11(*(undefined1 *)local_c,local_c->field_0x2);
                        local_148 = this_00->field_0061;
                        if (cVar2 == '\x02') {
                          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                          local_14c = CONCAT13(1,CONCAT12(1,(undefined2)local_14c));
                        }
                        else {
                          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                          local_14c = CONCAT13(1,CONCAT12((cVar2 != '\x03') + -1,
                                                          (undefined2)local_14c)) & 0xff02ffff;
                        }
                        pcVar28 = local_190;
                        puVar34 = (byte *)(&DAT_00808ab0 + (uint)DAT_00808aaf * 0x27);
                        memmove(puVar34, pcVar28, 0x9c); /* compiler REP MOVS byte copy */
                        if ((byte)local_14c < 8) {
                          iVar39 = 0;
                          iVar16 = (local_14c & 0xff) * 0x51;
                          do {
                            if (*(char *)(iVar16 + 0x808800 + iVar39) == '\0') {
                              *(byte *)(iVar16 + 0x808800 + iVar39) = DAT_00808aaf;
                              break;
                            }
                            iVar39 = iVar39 + 1;
                          } while (iVar39 < 0x18);
                        }
                        DAT_00808aaf = DAT_00808aaf + 1;
                      }
                    }
                    pSVar21 = this_00->field_1F84;
                    local_18 = (AnonShape_005D1400_5A9F7B11 *)&local_18->field_0x1;
                    bVar38 = local_18 < (undefined1 *)pSVar21->count;
                  } while ((int)local_18 < (int)pSVar21->count);
                }
                if (this_00->field_222F->count == 0) {
                  this_00->field_222E = 0;
                  RunGame(this_00);
                  if (DAT_008067a0 != '\0') {
                    CFsgsConnection::UpdateGame
                              ((CFsgsConnection *)&DAT_00802a90,6,&this_00->field_0x1a5f);
                    CFsgsConnection::StartGame((CFsgsConnection *)&DAT_00802a90);
                  }
                }
              }
              if ((this_00->field_1E26 == CASE_C) || (this_00->field_1E26 == CASE_10)) {
                DAT_0080879c = 1;
                _DAT_0080f32e = 1;
              }
            }
          }
          else {
            if (0 < (int)pSVar21->count) {
              bVar37 = pSVar21->count != 0;
              do {
                if (bVar37) {
                  /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
                  pcVar28 = &pSVar21->data->field_0000 + pSVar21->elementSize * uVar29;
                }
                else {
                  pcVar28 = nullptr;
                }
                if ((pcVar28 != nullptr) &&
                   (((pcVar28[4] == '\x02' || (pcVar28[4] == '\x03')) && (pcVar28[0x4f] == '\0'))))
                {
                  bVar38 = true;
                  break;
                }
                uVar29 = uVar29 + 1;
                bVar37 = uVar29 < pSVar21->count;
              } while ((int)uVar29 < (int)pSVar21->count);
            }
            if (bVar38) {
              pMVar8 = this_00->field_1A5B->field_02E6;
              if (pMVar8 != nullptr) {
                MMsgTy::SetMessage(pMVar8,0x2527,'\0',nullptr,nullptr,
                                   nullptr,0,0);
              }
            }
            else {
              uVar29 = 0;
              if (0 < (int)pSVar21->count) {
                bVar38 = pSVar21->count != 0;
                do {
                  if (bVar38) {
                    /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
                    pcVar28 = &pSVar21->data->field_0000 + pSVar21->elementSize * uVar29;
                  }
                  else {
                    pcVar28 = nullptr;
                  }
                  if ((pcVar28 != nullptr) && (*pcVar28 != '\0')) {
                    cVar2 = pcVar28[4];
                    if (this_00->field_1E26 == CASE_C) {
                      if ((cVar2 == '\0') || (cVar2 == '\x01')) {
                        local_11 = 0;
                        break;
                      }
                    }
                    else if ((cVar2 == '\0') || (cVar2 == '\x01')) goto LAB_005d1b17;
                    local_11 = local_11 + 1;
                  }
LAB_005d1b17:
                  uVar29 = uVar29 + 1;
                  bVar38 = uVar29 < pSVar21->count;
                } while ((int)uVar29 < (int)pSVar21->count);
              }
              if (1 < local_11) goto LAB_005d1b5a;
              pMVar8 = this_00->field_1A5B->field_02E6;
              if (pMVar8 != nullptr) {
                MMsgTy::SetMessage(pMVar8,0x2528,'\0',nullptr,nullptr,
                                   nullptr,0,0);
              }
            }
          }
        }
      }
      else if (SVar6 == MESS_SETTMAPMTY_654C) {
        if (DAT_0080877e != '\0') {
          CheckPlList(this_00);
          sub_005D1380(this_00);
          this_00->SetListCtrls();
          SettMapTy::PaintSC((SettMapTy *)this_00);
          goto switchD_005d1877_caseD_6549;
        }
      }
      else if (SVar6 == MESS_SETTMAPTY_654D) goto switchD_005d1877_caseD_6548;
    }
    else if (SVar6 == MESS_SHARED_C0A2) {
      iVar16 = thunk_FUN_005ddb40((int)this_00->field_1A5B);
      if (iVar16 == 0) {
        if (DAT_008067a0 != '\0') {
          pDVar20 = this_00->field_1A5B->field_0686;
          if ((int)pDVar20->elementSize < 1) {
            pcVar28 = nullptr;
          }
          else {
            pcVar28 = *(char **)pDVar20->growCapacity;
          }
          bVar38 = thunk_FUN_005717e0(pcVar28);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          if (CONCAT31(extraout_var,bVar38) != 0) {
            pDVar20 = this_00->field_1A5B->field_0686;
            if ((int)pDVar20->elementSize < 1) {
              CFsgsConnection::SendChatMessage((CFsgsConnection *)&DAT_00802a90,nullptr);
            }
            else {
              CFsgsConnection::SendChatMessage
                        ((CFsgsConnection *)&DAT_00802a90,*(char **)pDVar20->growCapacity);
            }
            goto LAB_005d28da;
          }
        }
        memset(&stack0xfffff980, 0, 0x451); /* compiler bulk-zero initialization */
        pcVar28 = &DAT_00807e1d;
        if (DAT_008067a0 == '\0') {
          pcVar28 = (char *)&DAT_00807ddd;
        }
        uVar29 = 0xffffffff;
        do {
          pcVar33 = pcVar28;
          if (uVar29 == 0) break;
          uVar29 = uVar29 - 1;
          pcVar33 = pcVar28 + 1;
          cVar2 = *pcVar28;
          pcVar28 = pcVar33;
        } while (cVar2 != '\0');
        uVar29 = ~uVar29;
        pSVar9 = this_00->field_1A5B;
        pcVar28 = pcVar33 + -uVar29;
        pcVar33 = &stack0xfffff980;
        memmove(pcVar33, pcVar28, uVar29); /* compiler REP MOVS byte copy */
        uVar31 = 0;
        pDVar20 = pSVar9->field_0686;
        if ((int)pDVar20->elementSize < 1) {
          pcVar28 = nullptr;
        }
        else {
          pcVar28 = *(char **)pDVar20->growCapacity;
        }
        uVar29 = 0xffffffff;
        do {
          pcVar33 = pcVar28;
          if (uVar29 == 0) break;
          uVar29 = uVar29 - 1;
          pcVar33 = pcVar28 + 1;
          cVar2 = *pcVar28;
          pcVar28 = pcVar33;
        } while (cVar2 != '\0');
        uVar29 = ~uVar29;
        pcVar28 = pcVar33 + -uVar29;
        pcVar33 = local_640;
        memmove(pcVar33, pcVar28, uVar29); /* compiler REP MOVS byte copy */
        local_10 = local_640;
        StartSystemTy::AddToChat(pSVar9,(int)&stack0xfffff980);
        if (this_00->field_2208 == '\0') {
          pSVar21 = this_00->field_1F84;
          if (pSVar21 != nullptr) {
            uVar29 = pSVar21->count;
            uVar31 = 0;
            if (uVar29 != 0) {
              if (uVar29 == 0) {
                pcVar28 = nullptr;
                goto LAB_005d277a;
              }
              do {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
                pcVar28 = &pSVar21->data->field_0000 + pSVar21->elementSize * uVar31;
LAB_005d277a:
                if ((pcVar28 != nullptr) &&
                   (((pcVar28[4] == '\x02' || (pcVar28[4] == '\x03')) &&
                    (*(int *)(pcVar28 + 6) == DAT_0080877f)))) {
                  local_5 = pcVar28[0x4a];
                  break;
                }
                uVar31 = uVar31 + 1;
              } while (uVar31 < uVar29);
            }
            local_c = nullptr;
            if (uVar29 != 0) {
              if (uVar29 == 0) {
                pcVar28 = nullptr;
                goto LAB_005d27c3;
              }
              do {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
                pcVar28 = &pSVar21->data->field_0000 + pSVar21->elementSize * (int)local_c;
LAB_005d27c3:
                if (((pcVar28 != nullptr) && ((pcVar28[4] == '\x02' || (pcVar28[4] == '\x03'))))
                   && (*(int *)(pcVar28 + 6) != DAT_0080877f)) {
                  if (DAT_00808a8f == '\0') {
                    if (((DAT_0080874d != 0xff) && (bVar23 = pcVar28[2], bVar23 != 0xff)) &&
                       (DAT_0080874d != bVar23)) {
                      local_10 = (char *)STReplaceLowByte((uint32_t)(local_10), (uint8_t)(bVar23));
                      uVar29 = (uint)DAT_0080874d;
                      bVar3 = g_playerRelationMatrix[uVar29][bVar23];
                      if ((bVar3 == 0) && (g_playerRelationMatrix[bVar23][uVar29] == 0)) {
                        iVar16 = -2;
                      }
                      else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar23][uVar29] == 0)) {
                        iVar16 = -1;
                      }
                      else if ((bVar3 == 0) && (g_playerRelationMatrix[bVar23][uVar29] == 1)) {
                        iVar16 = 1;
                      }
                      else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar23][uVar29] == 1)) {
                        iVar16 = 2;
                      }
                      else {
                        iVar16 = 0;
                      }
                      if (iVar16 == 2) goto LAB_005d28a0;
                    }
                  }
                  else if (pcVar28[0x4a] == local_5) {
LAB_005d28a0:
                    FUN_00715360(g_int_00811764,*(int *)(pcVar28 + 6),'\x1b',&stack0xfffff980,0x451,
                                 1,0xffffffff);
                  }
                }
                pSVar21 = this_00->field_1F84;
                local_c = (AnonShape_005D1400_891386BF *)&local_c->field_0x1;
              } while (local_c < (undefined1 *)pSVar21->count);
            }
          }
        }
        else {
          FUN_00715360(g_int_00811764,0,'\x1b',&stack0xfffff980,0x451,1,0xffffffff);
        }
      }
LAB_005d28da:
      Library::DKW::TBL::FUN_006b6020(this_00->field_1A5B->field_0686,0,&DAT_008016a0);
      this_00->field_002D = 0x33;
      this_00->field_0031 = this_00->field_1A5B->field_0686;
      FUN_006e6080(this_00,2,this_00->field_1A5B->field_054C,(undefined4 *)&this_00->field_0x1d);
    }
    goto switchD_005d1877_caseD_6507;
  }
  if (SVar6 < MESS_SETTMAPMTY_654A) {
    switch(SVar6) {
    case MESS_SETTMAPSTY_6505:
      uVar29 = (message->arg0).u32;
      if ((uVar29 != 0xffffffff) && (this_00->field_1F84 != nullptr)) {
        pSVar7 = this_00->field_1E2F;
        if (uVar29 < pSVar7->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
          puVar18 = (uint *)((int)&pSVar7->data->field_0000 + pSVar7->elementSize * uVar29);
        }
        else {
          puVar18 = nullptr;
        }
        if (DAT_0080877e == '\0') {
          ChgPlList(this_00,message->arg1,3,puVar18[0x41],puVar18[0x42]);
          this_00->field_2244 = 0;
        }
        else {
          pcVar28 = &DAT_00807e1d;
          if (DAT_008067a0 == '\0') {
            pcVar28 = (char *)&DAT_00807ddd;
          }
          ChangePlayerList(this_00,DAT_0080877f,(message->arg1).u32,puVar18[0x41],
                           (char)puVar18[0x42],pcVar28);
          SendPlList(this_00,0);
        }
      }
      break;
    case MESS_FSGSTY_6506:
      uVar29 = (message->arg1).u32;
      if (uVar29 == 0) {
        if (DAT_0080877e != '\0') {
          DAT_00808aab = DAT_00808aab + 1;
          this_00->field_2121 = this_00->field_2121 + 1;
          SendDesc(this_00,0);
          SendPlList(this_00,0);
        }
      }
      else if (((2 < uVar29) && (uVar29 < 9)) && (DAT_0080877e != '\0')) {
        DAT_00808aab = DAT_00808aab + 1;
        SendDesc(this_00,0);
      }
      break;
    case MESS_SETTMAPTY_6548:
      goto switchD_005d1877_caseD_6548;
    case MESS_SETTMAPMTY_6549:
switchD_005d1877_caseD_6549:
      if (DAT_0080877e != '\0') {
        this_00->field_2121 = this_00->field_2121 + 1;
        SendPlList(this_00,0);
        goto switchD_005d1877_caseD_6548;
      }
    }
  }
  else {
switchD_005d1877_caseD_6548:
    if (DAT_0080877e != '\0') {
      DAT_00808aab = DAT_00808aab + 1;
      SendDesc(this_00,0);
    }
  }
switchD_005d1877_caseD_6507:
  SVar5 = message->id;
  if (((0x69fe < SVar5) && (SVar5 < 0x6a7f)) && (this_00->field_0065 == '\x01')) {
    pSVar21 = this_00->field_1F84;
    local_2c = SVar5 - 0x69ff >> 3;
    if ((pSVar21 == nullptr) ||
       (uVar29 = local_2c + this_00->field_1F88, pSVar21->count <= uVar29)) {
      pAVar26 = nullptr;
    }
    else {
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
      pAVar26 = (AnonShape_005D1400_5A9F7B11 *)
                (&pSVar21->data->field_0000 + pSVar21->elementSize * uVar29);
    }
    local_18 = pAVar26;
    if (pAVar26 != nullptr) {
      switch(SVar5 + 1 & 7) {
      case 0:
        if ((pAVar26->field_0x4 == '\x02') && (*(int *)&pAVar26->field_0x6 == DAT_0080877f)) {
          if (DAT_0080877e == '\0') {
            uVar31 = 0;
            uVar29 = 0;
            iVar16 = this_00->field_1F88 + local_2c;
            uVar40 = 0;
            goto LAB_005d34ee;
          }
          ChangePlayerState(this_00,this_00->field_1F88 + local_2c);
          SendPlList(this_00,0);
        }
        break;
      case 1:
        if (pAVar26->field_0x0 != '\0') {
          uVar29 = pSVar21->count;
          local_44 = 0x1010101;
          local_40 = 0x1010101;
          uVar31 = 0;
          if (0 < (int)uVar29) {
            bVar38 = uVar29 != 0;
            do {
              if (bVar38) {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
                pcVar28 = &this_00->field_1F84->data->field_0000 +
                          this_00->field_1F84->elementSize * uVar31;
              }
              else {
                pcVar28 = nullptr;
              }
              if ((*pcVar28 != '\0') && (pcVar28[2] != 0xff)) {
                *(undefined1 *)((int)&local_44 + (uint)(byte)pcVar28[2]) = 0;
              }
              uVar31 = uVar31 + 1;
              bVar38 = uVar31 < uVar29;
            } while ((int)uVar31 < (int)uVar29);
          }
          if (pAVar26->field_0x2 != 0xff) {
            *(undefined1 *)((int)&local_44 + (uint)(byte)pAVar26->field_0x2) = 1;
          }
          uVar29 = 0;
          this_00->field_2171 = 0x6502;
          this_00->field_2179 = this_00->field_1F88 + local_2c;
          this_00->field_2191 = 0x6503;
          this_00->field_21A1 = 0;
          this_00->field_1E2F->count = 0;
          this_00->field_1F37 = 0xff;
          Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_1E2F,&this_00->field_0x1e33);
          local_c = (AnonShape_005D1400_891386BF *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(1));
          do {
            if (*(char *)((int)&local_44 + uVar29) != '\0') {
              this_00->field_1F37 = uVar29;
              Library::DKW::TBL::DArrayAppend
                        ((DArrayTy *)this_00->field_1E2F,&this_00->field_0x1e33);
              if ((byte)pAVar26->field_0x2 == uVar29) {
                this_00->field_21A1 = (uint)local_c & 0xff;
              }
              local_c = (AnonShape_005D1400_891386BF *)
                        STReplaceLowByte((uint32_t)(local_c), (uint8_t)((byte)local_c + '\x01'));
            }
            uVar29 = uVar29 + 1;
          } while ((int)uVar29 < 8);
          dVar10 = this_00->field_1E2F->count;
          this_00->field_21C5 = 0x124;
          this_00->field_21A9 = dVar10;
          this_00->field_21CD = 0x1e;
          this_00->field_21A5 = 0x12;
          this_00->field_21C9 = local_2c * 0x19 + 0x41;
LAB_005d3188:
          (*this_00->field_000C->vtable->CreateObject)
                    ((SystemClassTy *)this_00->field_000C,0x100ef,nullptr,nullptr,
                     &this_00->field_0x2161,0);
        }
        break;
      case 2:
        if (pAVar26->field_0x0 != '\0') {
          this_00->field_2171 = 0x6504;
          this_00->field_2179 = this_00->field_1F88 + local_2c;
          this_00->field_2191 = 0x6500;
          this_00->field_1E2F->count = 0;
          local_10 = (char *)0x1;
          pcVar28 = LoadResourceString(0x23f1,g_hINSTANCE_00807618);
          uVar29 = 0xffffffff;
          do {
            pcVar33 = pcVar28;
            if (uVar29 == 0) break;
            uVar29 = uVar29 - 1;
            pcVar33 = pcVar28 + 1;
            cVar2 = *pcVar28;
            pcVar28 = pcVar33;
          } while (cVar2 != '\0');
          uVar29 = ~uVar29;
          pcVar28 = pcVar33 + -uVar29;
          pcVar33 = &this_00->field_0x1e33;
          memmove(pcVar33, pcVar28, uVar29); /* compiler REP MOVS byte copy */
          uVar31 = 0;
          for (puVar18 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_0x1e33,'\n');
              puVar18 != nullptr; puVar18 = Library::MSVCRT::FUN_0072e560(puVar18,'\n')) {
            *(undefined1 *)puVar18 = 0x20;
          }
          this_00->field_1F37 = 1;
          Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_1E2F,&this_00->field_0x1e33);
          pcVar28 = LoadResourceString(0x23f0,g_hINSTANCE_00807618);
          uVar29 = 0xffffffff;
          do {
            pcVar33 = pcVar28;
            if (uVar29 == 0) break;
            uVar29 = uVar29 - 1;
            pcVar33 = pcVar28 + 1;
            cVar2 = *pcVar28;
            pcVar28 = pcVar33;
          } while (cVar2 != '\0');
          uVar29 = ~uVar29;
          pcVar28 = pcVar33 + -uVar29;
          pcVar33 = &this_00->field_0x1e33;
          memmove(pcVar33, pcVar28, uVar29); /* compiler REP MOVS byte copy */
          uVar31 = 0;
          for (puVar18 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_0x1e33,'\n');
              puVar18 != nullptr; puVar18 = Library::MSVCRT::FUN_0072e560(puVar18,'\n')) {
            *(undefined1 *)puVar18 = 0x20;
          }
          this_00->field_1F37 = 2;
          Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_1E2F,&this_00->field_0x1e33);
          pcVar28 = local_10;
          if ((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) {
            pcVar28 = (char *)(uint)(local_18->field_0x4 != '\x02');
          }
          if (pcVar28 != nullptr) {
            pcVar28 = LoadResourceString(0x23f2,g_hINSTANCE_00807618);
            uVar29 = 0xffffffff;
            do {
              pcVar33 = pcVar28;
              if (uVar29 == 0) break;
              uVar29 = uVar29 - 1;
              pcVar33 = pcVar28 + 1;
              cVar2 = *pcVar28;
              pcVar28 = pcVar33;
            } while (cVar2 != '\0');
            uVar29 = ~uVar29;
            pcVar28 = pcVar33 + -uVar29;
            pcVar33 = &this_00->field_0x1e33;
            memmove(pcVar33, pcVar28, uVar29); /* compiler REP MOVS byte copy */
            uVar31 = 0;
            for (puVar18 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_0x1e33,'\n');
                puVar18 != nullptr; puVar18 = Library::MSVCRT::FUN_0072e560(puVar18,'\n')) {
              *(undefined1 *)puVar18 = 0x20;
            }
            this_00->field_1F37 = 3;
            Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_1E2F,&this_00->field_0x1e33);
          }
          this_00->field_21A9 = this_00->field_1E2F->count;
          bVar23 = local_18->field_0x3;
          this_00->field_21C5 = 0x143;
          this_00->field_21CD = 0x78;
          this_00->field_21A1 = bVar23 - 1;
          this_00->field_21C9 = local_2c * 0x19 + 0x41;
          pcVar11 = g_startSystem_0081176C->field_0034;
          if (pcVar11->field_00A0 != 0) {
            FUN_00710790((AnonShape_00710790_4CBB90D4 *)pcVar11);
          }
          this_00->field_21A5 = *(undefined4 *)&pcVar11->field_0x8a;
          goto LAB_005d3188;
        }
        break;
      case 3:
        this_00->field_2171 = 0x6505;
        this_00->field_2179 = local_2c + this_00->field_1F88;
        this_00->field_2191 = 0x6500;
        this_00->field_1E2F->count = 0;
        memset(&this_00->field_0x1e33, 0, 0x10c); /* compiler bulk-zero initialization */
        if (pAVar26->field_0x0 == '\0') {
          uVar29 = local_2c + this_00->field_1F88;
          local_5 = '\0';
          if (-1 < (int)uVar29) {
            pSVar21 = this_00->field_1F84;
            do {
              if (uVar29 < pSVar21->count) {
                element_1f84_2 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar21, uVar29);
              }
              else {
                element_1f84_2 = nullptr;
              }
              if (element_1f84_2->field_0000 != '\0') {
                if ((element_1f84_2->field_0004 == '\x02') && (element_1f84_2->element != DAT_0080877f)) {
                  local_5 = '\x01';
                }
                break;
              }
              uVar29 = uVar29 - 1;
            } while (-1 < (int)uVar29);
          }
          if (local_5 != '\0') {
            pcVar28 = LoadResourceString(0x1f42,g_hINSTANCE_00807618);
            uVar29 = 0xffffffff;
            do {
              pcVar33 = pcVar28;
              if (uVar29 == 0) break;
              uVar29 = uVar29 - 1;
              pcVar33 = pcVar28 + 1;
              cVar2 = *pcVar28;
              pcVar28 = pcVar33;
            } while (cVar2 != '\0');
            uVar29 = ~uVar29;
            pcVar28 = pcVar33 + -uVar29;
            pcVar33 = &this_00->field_0x1e33;
            memmove(pcVar33, pcVar28, uVar29); /* compiler REP MOVS byte copy */
            uVar31 = 0;
            this_00->field_1F37 = 2;
            Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_1E2F,&this_00->field_0x1e33);
            if (DAT_00808aaa != '\0') {
              pcVar28 = LoadResourceString(0x1f46,g_hINSTANCE_00807618);
              uVar29 = 0xffffffff;
              do {
                pcVar33 = pcVar28;
                if (uVar29 == 0) break;
                uVar29 = uVar29 - 1;
                pcVar33 = pcVar28 + 1;
                cVar2 = *pcVar28;
                pcVar28 = pcVar33;
              } while (cVar2 != '\0');
              uVar29 = ~uVar29;
              pcVar28 = pcVar33 + -uVar29;
              pcVar33 = &this_00->field_0x1e33;
              memmove(pcVar33, pcVar28, uVar29); /* compiler REP MOVS byte copy */
              uVar31 = 0;
              this_00->field_1F37 = 3;
              Library::DKW::TBL::DArrayAppend
                        ((DArrayTy *)this_00->field_1E2F,&this_00->field_0x1e33);
            }
          }
          pcVar28 = LoadResourceString(0x1f41,g_hINSTANCE_00807618);
          uVar29 = 0xffffffff;
          do {
            pcVar33 = pcVar28;
            if (uVar29 == 0) break;
            uVar29 = uVar29 - 1;
            pcVar33 = pcVar28 + 1;
            cVar2 = *pcVar28;
            pcVar28 = pcVar33;
          } while (cVar2 != '\0');
          uVar29 = ~uVar29;
          pcVar28 = pcVar33 + -uVar29;
          pcVar33 = &this_00->field_0x1e33;
          memmove(pcVar33, pcVar28, uVar29); /* compiler REP MOVS byte copy */
          uVar31 = 0;
          this_00->field_1F37 = 1;
          Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_1E2F,&this_00->field_0x1e33);
        }
        else {
          if ((this_00->field_1E26 != CASE_5) || (pAVar26->field_0x4 != '\x04')) {
            if ((DAT_0080877e != '\0') && (this_00->field_1E26 != CASE_5)) {
              pcVar28 = LoadResourceString(8000,g_hINSTANCE_00807618);
              uVar29 = 0xffffffff;
              do {
                pcVar33 = pcVar28;
                if (uVar29 == 0) break;
                uVar29 = uVar29 - 1;
                pcVar33 = pcVar28 + 1;
                cVar2 = *pcVar28;
                pcVar28 = pcVar33;
              } while (cVar2 != '\0');
              uVar29 = ~uVar29;
              pcVar28 = pcVar33 + -uVar29;
              pcVar33 = &this_00->field_0x1e33;
              memmove(pcVar33, pcVar28, uVar29); /* compiler REP MOVS byte copy */
              uVar31 = 0;
              this_00->field_1F37 = 0;
              Library::DKW::TBL::DArrayAppend
                        ((DArrayTy *)this_00->field_1E2F,&this_00->field_0x1e33);
            }
            bVar38 = true;
            if ((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) {
              bVar38 = local_18->field_0x3 != '\x03';
            }
            if (bVar38) {
              pcVar28 = LoadResourceString(0x1f42,g_hINSTANCE_00807618);
              uVar29 = 0xffffffff;
              do {
                pcVar33 = pcVar28;
                if (uVar29 == 0) break;
                uVar29 = uVar29 - 1;
                pcVar33 = pcVar28 + 1;
                cVar2 = *pcVar28;
                pcVar28 = pcVar33;
              } while (cVar2 != '\0');
              uVar29 = ~uVar29;
              pcVar28 = pcVar33 + -uVar29;
              pcVar33 = &this_00->field_0x1e33;
              memmove(pcVar33, pcVar28, uVar29); /* compiler REP MOVS byte copy */
              uVar31 = 0;
              this_00->field_1F37 = 2;
              Library::DKW::TBL::DArrayAppend
                        ((DArrayTy *)this_00->field_1E2F,&this_00->field_0x1e33);
            }
            pcVar28 = LoadResourceString(0x1f41,g_hINSTANCE_00807618);
            uVar29 = 0xffffffff;
            do {
              pcVar33 = pcVar28;
              if (uVar29 == 0) break;
              uVar29 = uVar29 - 1;
              pcVar33 = pcVar28 + 1;
              cVar2 = *pcVar28;
              pcVar28 = pcVar33;
            } while (cVar2 != '\0');
            uVar29 = ~uVar29;
            pcVar28 = pcVar33 + -uVar29;
            pcVar33 = &this_00->field_0x1e33;
            memmove(pcVar33, pcVar28, uVar29); /* compiler REP MOVS byte copy */
            uVar31 = 0;
            this_00->field_1F37 = 1;
            Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_1E2F,&this_00->field_0x1e33);
          }
          if ((DAT_0080877e != '\0') && (this_00->field_1E26 != CASE_5)) {
            local_c = nullptr;
            pAVar22 = local_18->field_0050;
            pAVar32 = (AnonShape_005D1400_891386BF *)pAVar22->field_000C;
            if (0 < (int)pAVar32) {
              do {
                if (local_c < pAVar32) {
                  iVar16 = pAVar22->field_0008 * (int)local_c + pAVar22->field_001C;
                }
                else {
                  iVar16 = 0;
                }
                uVar29 = 0xffffffff;
                pcVar28 = (char *)(iVar16 + 0x40);
                do {
                  pcVar33 = pcVar28;
                  if (uVar29 == 0) break;
                  uVar29 = uVar29 - 1;
                  pcVar33 = pcVar28 + 1;
                  cVar2 = *pcVar28;
                  pcVar28 = pcVar33;
                } while (cVar2 != '\0');
                uVar29 = ~uVar29;
                pcVar28 = pcVar33 + -uVar29;
                pcVar33 = &this_00->field_0x1e33;
                memmove(pcVar33, pcVar28, uVar29); /* compiler REP MOVS byte copy */
                this_00->field_1F37 = 4;
                this_00->field_1F3B = local_c;
                Library::DKW::TBL::DArrayAppend
                          ((DArrayTy *)this_00->field_1E2F,&this_00->field_0x1e33);
                local_c = (AnonShape_005D1400_891386BF *)&local_c->field_0x1;
                pAVar22 = local_18->field_0050;
                pAVar32 = (AnonShape_005D1400_891386BF *)pAVar22->field_000C;
              } while ((int)local_c < (int)pAVar32);
            }
          }
        }
        pSVar7 = this_00->field_1E2F;
        uVar29 = 0;
        this_00->field_21A1 = 0;
        if (0 < (int)pSVar7->count) {
          bVar38 = pSVar7->count != 0;
          local_10 = (char *)(uint)(byte)local_18->field_0x4;
          do {
            if (bVar38) {
              element_1e2f_2 = DArrayAt<SettMapMTy_field_1E2FElement>(pSVar7, uVar29);
            }
            else {
              element_1e2f_2 = nullptr;
            }
            if (((char *)element_1e2f_2[0x41] == local_10) &&
               (element_1e2f_2->field_0108 == (uint)(byte)local_18->field_0x5)) {
              this_00->field_21A1 = uVar29;
              break;
            }
            uVar29 = uVar29 + 1;
            bVar38 = uVar29 < pSVar7->count;
          } while ((int)uVar29 < (int)pSVar7->count);
        }
        dVar10 = pSVar7->count;
        this_00->field_21C5 = 0x15d;
        this_00->field_21A9 = dVar10;
        this_00->field_21CD = 0x5f;
        this_00->field_21C9 = local_2c * 0x19 + 0x41;
        pcVar11 = g_startSystem_0081176C->field_0034;
        if (pcVar11->field_00A0 != 0) {
          FUN_00710790((AnonShape_00710790_4CBB90D4 *)pcVar11);
        }
        this_00->field_21A5 = *(undefined4 *)&pcVar11->field_0x8a;
        if (0 < this_00->field_21A9) goto LAB_005d3188;
        break;
      case 5:
        if (pAVar26->field_0x0 != '\0') {
          if (DAT_00808a8f == '\0') {
            if (DAT_0080877e == '\0') {
              uVar31 = (uint)DAT_0080874d;
              uVar29 = 0;
              iVar16 = this_00->field_1F88 + local_2c;
              uVar40 = 5;
              goto LAB_005d34ee;
            }
            ChangePlayerTeam(this_00,this_00->field_1F88 + local_2c,0,(uint)DAT_0080874d);
            SendDesc(this_00,0);
          }
          else {
            uVar29 = pSVar21->count;
            uVar31 = 0;
            local_3c = 0;
            local_c = (AnonShape_005D1400_891386BF *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(0xff));
            local_10 = (char *)0x1;
            local_38 = 0;
            local_30 = (undefined1 *)uVar29;
            if (0 < (int)uVar29) {
              bVar38 = uVar29 != 0;
              do {
                if (bVar38) {
                  /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
                  pcVar28 = &this_00->field_1F84->data->field_0000 +
                            this_00->field_1F84->elementSize * uVar31;
                }
                else {
                  pcVar28 = nullptr;
                }
                if ((pcVar28 != nullptr) && ((byte)pcVar28[0x4a] < 8)) {
                  *(undefined1 *)((int)&local_3c + (uint)(byte)pcVar28[0x4a]) = 1;
                }
                uVar31 = uVar31 + 1;
                bVar38 = uVar31 < uVar29;
              } while ((int)uVar31 < (int)uVar29);
            }
            uVar31 = local_2c;
            bVar23 = 0;
            iVar16 = 0;
            do {
              if (*(char *)((int)&local_3c + iVar16) != '\0') {
                bVar23 = bVar23 + 1;
              }
              iVar16 = iVar16 + 1;
            } while (iVar16 < 8);
            bVar3 = this_00->field_211C;
joined_r0x005d3229:
            if (bVar23 < bVar3) {
              iVar16 = 0;
              do {
                if (*(char *)((int)&local_3c + iVar16) == '\0') {
                  *(undefined1 *)((int)&local_3c + iVar16) = 1;
                  bVar23 = bVar23 + 1;
                  break;
                }
                iVar16 = iVar16 + 1;
              } while (iVar16 < 8);
              goto joined_r0x005d3229;
            }
            uVar27 = 0;
            if (0 < (int)uVar29) {
              do {
                puVar24 = local_30;
                if (uVar27 < local_30) {
                  /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
                  pcVar28 = &this_00->field_1F84->data->field_0000 +
                            this_00->field_1F84->elementSize * uVar27;
                }
                else {
                  pcVar28 = nullptr;
                }
                if (pcVar28 != nullptr) {
                  if (this_00->field_1F88 + uVar31 != uVar27) {
                    if (*pcVar28 == '\0') goto LAB_005d32d3;
                    if ((pcVar28[4] != '\0') && (pcVar28[4] != '\x01')) {
                      if (local_10 == nullptr) {
                        if ((byte)local_c != pcVar28[0x4a]) {
                          local_c = (AnonShape_005D1400_891386BF *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(0xff));
                        }
                      }
                      else {
                        local_10 = nullptr;
                        local_c = (AnonShape_005D1400_891386BF *)
                                  STReplaceLowByte((uint32_t)(local_c), (uint8_t)(pcVar28[0x4a]));
                      }
                    }
                  }
                  if ((*pcVar28 != '\0') &&
                     (((pcVar28[4] == '\0' || (pcVar28[4] == '\x01')) && ((byte)pcVar28[0x4a] < 8)))
                     ) {
                    *(undefined1 *)((int)&local_3c + (uint)(byte)pcVar28[0x4a]) = 0;
                  }
                }
LAB_005d32d3:
                uVar27 = uVar27 + 1;
              } while ((int)uVar27 < (int)puVar24);
            }
            if ((byte)local_c < 8) {
              *(undefined1 *)((int)&local_3c + ((uint)local_c & 0xff)) = 0;
            }
            uVar29 = 0;
            this_00->field_2171 = 0x6501;
            this_00->field_2179 = this_00->field_1F88 + local_2c;
            this_00->field_2191 = 0x6500;
            this_00->field_21A1 = 0;
            this_00->field_1E2F->count = 0;
            local_c = (AnonShape_005D1400_891386BF *)((uint)local_c & 0xffffff00);
            puVar24 = &uStack_7d;
            local_30 = puVar24;
            do {
              iVar16 = uVar29 + 0x41;
              if (puVar24[uVar29 + 0x41] != '\0') {
                pcVar28 = LoadResourceString(0x1f4a,g_hINSTANCE_00807618);
                wsprintfA(&this_00->field_0x1e33,"%s%c",pcVar28,iVar16);
                this_00->field_1F37 = uVar29;
                Library::DKW::TBL::DArrayAppend
                          ((DArrayTy *)this_00->field_1E2F,&this_00->field_0x1e33);
                if ((byte)local_18->field_0x4a == uVar29) {
                  this_00->field_21A1 = (uint)local_c & 0xff;
                }
                local_c = (AnonShape_005D1400_891386BF *)
                          STReplaceLowByte((uint32_t)(local_c), (uint8_t)((byte)local_c + '\x01'));
                puVar24 = local_30;
              }
              uVar29 = uVar29 + 1;
            } while ((int)uVar29 < 8);
            SVar4 = this_00->field_1E26;
            this_00->field_21A9 = this_00->field_1E2F->count;
            if (((SVar4 == 6) || (SVar4 == 1)) || (uVar40 = 0x26b, SVar4 == 2)) {
              uVar40 = 0x2ab;
            }
            this_00->field_21C5 = uVar40;
            this_00->field_21CD = 0x46;
            this_00->field_21C9 = local_2c * 0x19 + 0x41;
            pcVar11 = g_startSystem_0081176C->field_0034;
            if (pcVar11->field_00A0 != 0) {
              FUN_00710790((AnonShape_00710790_4CBB90D4 *)pcVar11);
            }
            this_00->field_21A5 = *(undefined4 *)&pcVar11->field_0x8a;
            (*this_00->field_000C->vtable->CreateObject)
                      ((SystemClassTy *)this_00->field_000C,0x100ef,nullptr,nullptr,
                       &this_00->field_0x2161,0);
          }
        }
        break;
      case 7:
        if (DAT_0080877e == '\0') {
          uVar31 = 0;
          uVar29 = (uint)(pAVar26->field_0x4f == '\0');
          iVar16 = this_00->field_1F88 + local_2c;
          uVar40 = 7;
LAB_005d34ee:
          ChgPlList(this_00,iVar16,uVar40,uVar29,uVar31);
        }
        else {
          pAVar26->field_0x4f = pAVar26->field_0x4f == '\0';
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,this_00->field_1F8C[local_2c * 8 + 7],
                       (undefined4 *)&this_00->field_0x1d);
          this_00->field_2121 = this_00->field_2121 + 1;
          SendPlList(this_00,0);
        }
      }
    }
  }
  temp_5fb3942e6a = message->id;
  if (temp_5fb3942e6a < 0x6a7f) {
    g_currentExceptionFrame = local_f4.previous;
    return 0;
  }
  if (0x6afe < temp_5fb3942e6a) {
    g_currentExceptionFrame = local_f4.previous;
    return 0;
  }
  pAVar36 = nullptr;
  pcVar28 = (char *)(temp_5fb3942e6a - 0x6a7f >> 3);
  local_30 = (undefined1 *)(temp_5fb3942e6a + 1 & 7);
  piVar12 = (message->arg1).ptr;
  local_20 = piVar12[2];
  local_1c = piVar12[3];
  pSVar21 = this_00->field_1F84;
  local_28 = *piVar12 + -0x113;
  local_24 = 0;
  if ((pSVar21 != nullptr) &&
     (uVar29 = this_00->field_1F88 + (int)pcVar28, uVar29 < pSVar21->count)) {
    /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
    pAVar36 = (AnonShape_005CBBE0_2D1CAA09 *)
              (&pSVar21->data->field_0000 + pSVar21->elementSize * uVar29);
  }
  local_10 = pcVar28;
  FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_00->field_20CC[(int)pcVar28 + 10],0,
               *piVar12 + -0x113,0,piVar12[2],piVar12[3],0xff);
  if (pAVar36 == nullptr) goto switchD_005d35aa_default;
  switch(local_30) {
  case nullptr:
    if (((pAVar36->field_0x0 == '\0') || (pAVar36->field_0x4 != '\x02')) ||
       (*(int *)&pAVar36->field_0x6 != DAT_0080877f)) break;
    MMObjTy::PaintButDib
              ((MMObjTy *)this_00,this_00->field_20CC[(int)pcVar28 + 10],&local_28,2,
               (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0x67);
    iVar16 = 2 - (uint)(pAVar36->field_0x1 != '\0');
    goto LAB_005d3bf4;
  case (undefined1 *)0x1:
    if (pAVar36->field_0x0 != '\0') {
      local_28 = local_28 + 1;
      local_24 = local_24 + 1;
      local_20 = local_20 + -2;
      local_1c = local_1c + -2;
      MMObjTy::PaintButDib
                ((MMObjTy *)this_00,this_00->field_20CC[(int)pcVar28 + 10],&local_28,0,
                 (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0xffffffff);
      if (pAVar36->field_0x2 != -1) {
        switch(pAVar36->field_0x2) {
        case 0:
          bVar23 = 0xfc;
          break;
        case 1:
          bVar23 = 0xfa;
          break;
        case 2:
          bVar23 = 0xfb;
          break;
        case 3:
          bVar23 = 0xf9;
          break;
        case 4:
          bVar23 = 0xfd;
          break;
        case 5:
          bVar23 = 0xfe;
          break;
        case 6:
          bVar23 = 0xf3;
          break;
        case 7:
          bVar23 = 7;
          break;
        default:
          bVar23 = 0xff;
        }
        FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_00->field_20CC[(int)pcVar28 + 10],0,
                     local_28 + 2,local_24 + 2,local_20 + -4,local_1c + -4,bVar23);
      }
    }
    break;
  case (undefined1 *)0x2:
    if (pAVar36->field_0x0 == '\0') break;
    MMObjTy::PaintButDib
              ((MMObjTy *)this_00,this_00->field_20CC[(int)pcVar28 + 10],&local_28,2,
               (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0x67);
    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,this_00->field_20CC[(int)pcVar28 + 10],0,
                     local_28,local_24,local_20,local_1c);
    if (pAVar36->field_0x3 == '\x01') {
      pcVar28 = &DAT_007ca250;
LAB_005d3780:
      uVar29 = 0xffffffff;
      do {
        pcVar33 = pcVar28;
        if (uVar29 == 0) break;
        uVar29 = uVar29 - 1;
        pcVar33 = pcVar28 + 1;
        cVar2 = *pcVar28;
        pcVar28 = pcVar33;
      } while (cVar2 != '\0');
      uVar29 = ~uVar29;
      pcVar28 = pcVar33 + -uVar29;
      pcVar33 = (char *)&DAT_0080f33a;
      for (uVar31 = uVar29 >> 2; uVar31 != 0; uVar31 = uVar31 - 1) {
        *(undefined4 *)pcVar33 = *(undefined4 *)pcVar28;
        pcVar28 = pcVar28 + 4;
        pcVar33 = pcVar33 + 4;
      }
    }
    else {
      if (pAVar36->field_0x3 != '\x02') {
        pcVar28 = &DAT_007ca24c;
        goto LAB_005d3780;
      }
      uVar29 = 0xffffffff;
      pcVar28 = &DAT_007ca248;
      do {
        pcVar33 = pcVar28;
        if (uVar29 == 0) break;
        uVar29 = uVar29 - 1;
        pcVar33 = pcVar28 + 1;
        cVar2 = *pcVar28;
        pcVar28 = pcVar33;
      } while (cVar2 != '\0');
      uVar29 = ~uVar29;
      pcVar28 = pcVar33 + -uVar29;
      pcVar33 = (char *)&DAT_0080f33a;
      for (uVar31 = uVar29 >> 2; uVar31 != 0; uVar31 = uVar31 - 1) {
        *(undefined4 *)pcVar33 = *(undefined4 *)pcVar28;
        pcVar28 = pcVar28 + 4;
        pcVar33 = pcVar33 + 4;
      }
    }
    for (uVar29 = uVar29 & 3; uVar29 != 0; uVar29 = uVar29 - 1) {
      *pcVar33 = *pcVar28;
      pcVar28 = pcVar28 + 1;
      pcVar33 = pcVar33 + 1;
    }
    ccFntTy::WrStr(g_startSystem_0081176C->field_0034,&DAT_0080f33a,-1,-1,2);
    pcVar28 = local_10;
    break;
  case (undefined1 *)0x3:
    MMObjTy::PaintButDib
              ((MMObjTy *)this_00,this_00->field_20CC[(int)pcVar28 + 10],&local_28,2,
               (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0x67);
    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,this_00->field_20CC[(int)pcVar28 + 10],0,
                     local_28,local_24,local_20,local_1c);
    uVar29 = 2;
    iVar41 = -1;
    iVar39 = -1;
    puVar42 = (uint *)&DAT_007c2310;
    iVar16 = local_20;
    puVar18 = (uint *)thunk_FUN_005cbbe0(this_00,pAVar36);
    goto LAB_005d38bd;
  case (undefined1 *)0x4:
    MMObjTy::PaintButDib
              ((MMObjTy *)this_00,this_00->field_20CC[(int)pcVar28 + 10],&local_28,2,0x67,0x67);
    bVar23 = pAVar36->field_0x4;
    if (bVar23 < 2) break;
    if (bVar23 < 4) {
      ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,this_00->field_20CC[(int)pcVar28 + 10],0,
                       local_28,local_24,local_20,local_1c);
      uVar29 = 2;
      iVar39 = -1;
      iVar16 = -1;
      puVar18 = thunk_FUN_00540c40(g_startSystem_0081176C->field_0034,(uint *)&pAVar36->field_0xa,
                                   (uint *)&DAT_007c7274,local_20);
      ccFntTy::WrStr(g_startSystem_0081176C->field_0034,puVar18,iVar16,iVar39,uVar29);
      break;
    }
    if (bVar23 != 4) break;
    pDVar20 = pAVar36->field_0050;
    if ((uint)(byte)pAVar36->field_0x5 < pDVar20->count) {
      puVar18 = DArrayAt<uint>(pDVar20, (uint)(byte)pAVar36->field_0x5);
    }
    else {
      puVar18 = nullptr;
    }
    if (puVar18 == nullptr) break;
    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,this_00->field_20CC[(int)pcVar28 + 10],0,
                     local_28,local_24,local_20,local_1c);
    uVar29 = 2;
    iVar41 = -1;
    iVar39 = -1;
    puVar42 = (uint *)&DAT_007c7274;
    iVar16 = local_20;
LAB_005d38bd:
    puVar18 = thunk_FUN_00540c40(g_startSystem_0081176C->field_0034,puVar18,puVar42,iVar16);
    ccFntTy::WrStr(g_startSystem_0081176C->field_0034,puVar18,iVar39,iVar41,uVar29);
    break;
  case (undefined1 *)0x5:
    if ((pAVar36->field_0x0 == '\0') ||
       (MMObjTy::PaintButDib
                  ((MMObjTy *)this_00,this_00->field_20CC[(int)pcVar28 + 10],&local_28,2,
                   (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0x67),
       pAVar36->field_0x4 == '\0')) break;
    if (DAT_00808a8f != '\0') {
      pcVar33 = LoadResourceString(0x1f4a,g_hINSTANCE_00807618);
      wsprintfA((LPSTR)&DAT_0080f33a,"%s%c",pcVar33);
      ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,this_00->field_20CC[(int)pcVar28 + 10],0,
                       local_28,local_24,local_20,local_1c);
      ccFntTy::WrStr(g_startSystem_0081176C->field_0034,&DAT_0080f33a,-1,-1,2);
      break;
    }
    if (((DAT_0080874d == 0xff) || (bVar23 = pAVar36->field_0x2, bVar23 == 0xff)) ||
       (DAT_0080874d == bVar23)) break;
    local_10 = (char *)0xffffffff;
    local_30 = (undefined1 *)STReplaceLowByte((uint32_t)(local_30), (uint8_t)(bVar23));
    uVar29 = (uint)DAT_0080874d;
    bVar3 = g_playerRelationMatrix[uVar29][bVar23];
    if ((bVar3 == 0) && (g_playerRelationMatrix[bVar23][uVar29] == 0)) {
      uVar40 = 0xfffffffe;
    }
    else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar23][uVar29] == 0)) {
      uVar40 = 0xffffffff;
    }
    else if ((bVar3 == 0) && (g_playerRelationMatrix[bVar23][uVar29] == 1)) {
      uVar40 = 1;
    }
    else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar23][uVar29] == 1)) {
      uVar40 = 2;
    }
    else {
      uVar40 = 0;
    }
    switch(uVar40) {
    default:
      iVar16 = -1;
      break;
    case 1:
      iVar16 = 1;
      break;
    case 2:
      iVar16 = 3;
      break;
    case 0xfffffffe:
      iVar16 = 0;
      break;
    case 0xffffffff:
      iVar16 = 2;
    }
    iVar16 = iVar16 + -1;
    if (iVar16 < 0) break;
    pAVar25 = (AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_1F4B;
    goto LAB_005d3bfa;
  case (undefined1 *)0x6:
    MMObjTy::PaintButDib
              ((MMObjTy *)this_00,this_00->field_20CC[(int)pcVar28 + 10],&local_28,2,0x67,0x67);
    if (((pAVar36->field_0x4 == '\x02') || (pAVar36->field_0x4 == '\x03')) &&
       (((DAT_0080877e != '\0' && (*(int *)&pAVar36->field_0x6 != DAT_0080877f)) ||
        ((DAT_0080877e == '\0' && (*(int *)&pAVar36->field_0x6 == DAT_0080877f)))))) {
      ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,this_00->field_20CC[(int)pcVar28 + 10],0,
                       local_28,local_24,local_20,local_1c);
      wsprintfA((LPSTR)&DAT_0080f33a,"%4d");
      uVar29 = 0xffffffff;
      pcVar33 = (char *)&DAT_0080f33a;
      do {
        if (uVar29 == 0) break;
        uVar29 = uVar29 - 1;
        cVar2 = *pcVar33;
        pcVar33 = pcVar33 + 1;
      } while (cVar2 != '\0');
      if (4 < ~uVar29 - 1) {
        uVar29 = 0xffffffff;
        pcVar28 = &DAT_007cd500;
        do {
          pcVar33 = pcVar28;
          if (uVar29 == 0) break;
          uVar29 = uVar29 - 1;
          pcVar33 = pcVar28 + 1;
          cVar2 = *pcVar28;
          pcVar28 = pcVar33;
        } while (cVar2 != '\0');
        uVar29 = ~uVar29;
        pcVar33 = pcVar33 + -uVar29;
        pcVar35 = (char *)&DAT_0080f33a;
        for (uVar31 = uVar29 >> 2; uVar31 != 0; uVar31 = uVar31 - 1) {
          *(undefined4 *)pcVar35 = *(undefined4 *)pcVar33;
          pcVar33 = pcVar33 + 4;
          pcVar35 = pcVar35 + 4;
        }
        for (uVar29 = uVar29 & 3; pcVar28 = local_10, uVar29 != 0; uVar29 = uVar29 - 1) {
          *pcVar35 = *pcVar33;
          pcVar33 = pcVar33 + 1;
          pcVar35 = pcVar35 + 1;
        }
      }
      ccFntTy::WrStr(g_startSystem_0081176C->field_0034,&DAT_0080f33a,-1,-1,2);
    }
    break;
  case (undefined1 *)0x7:
    MMObjTy::PaintButDib
              ((MMObjTy *)this_00,this_00->field_20CC[(int)pcVar28 + 10],&local_28,2,
               (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0x67);
    if (((pAVar36->field_0x4 != '\x02') || (pAVar36->field_0x4f == '\0')) &&
       (pAVar36->field_0x4 != '\x04')) break;
    iVar16 = 0;
LAB_005d3bf4:
    pAVar25 = (AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_1F4F;
LAB_005d3bfa:
    pbVar19 = (byte *)FUN_0070b3a0(pAVar25,iVar16);
    DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_20CC[(int)pcVar28 + 10],
           (local_20 - *(int *)(pbVar19 + 4)) / 2 + local_28,
           (local_1c - *(int *)(pbVar19 + 8)) / 2 + 1 + local_24,'\x06',pbVar19);
  }
switchD_005d35aa_default:
  FUN_006b35d0((int *)g_ddxContext_008075A8,this_00->field_20CC[(int)pcVar28]);
  if ((message->arg0).words.low == 3) {
    thunk_FUN_005b6730(this_00,9,'\x01',-1);
  }
  g_currentExceptionFrame = local_f4.previous;
  return 0;
}

