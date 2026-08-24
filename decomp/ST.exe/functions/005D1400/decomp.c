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
  byte stack_bytes_neg_680[0x451]; /* exact EBP-relative stack object */
  char cVar1;
  char cVar2;
  byte bVar3;
  SettMapMTy_field_1E26State SVar4;
  STMessageId SVar6;
  SettMapMTy_field_1E2FDArray *pSVar7;
  MMsgTy *pMVar8;
  DArrayTy *pDVar9;
  StartSystemTy *pSVar10;
  dword dVar11;
  ccFntTy *pcVar12;
  int *piVar13;
  CursorClassTy *pCVar15;
  SettMapMTy *this_00;
  bool bVar38;
  DWORD DVar16;
  int iVar16;
  uint *puVar18;
  byte *pbVar19;
  DArrayTy *pDVar20;
  SettMapMTy_field_1F84DArray *pSVar20;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  char *local_EAX_6008;
  uint *puVar18_mg5;
  char *local_EAX_6124;
  uint *puVar18_mg6;
  char *local_EAX_6280;
  uint *puVar18_mg7;
  char *local_EAX_6616;
  char *local_EAX_6736;
  char *local_EAX_6813;
  AnonNested_005D1400_0050_DA378AC5 *pAVar21;
  char *local_EAX_7142;
  char *local_EAX_7228;
  char *local_EAX_7305;
  char *pcVar28;
  char *pcVar34_mg27;
  BITMAPINFO *pBVar22;
  int iVar39;
  byte bVar23;
  int iVar24;
  byte *puVar25;
  AnonShape_GLOBAL_0081175C_57F682DD *pAVar26;
  AnonShape_005D1400_5A9F7B11 *pAVar27;
  uint uVar28;
  char *pcVar29;
  SettMapMTy_field_1F84Element *element_1f84;
  SettMapMTy_field_1F84Element *element_1f84_2;
  uint uVar30;
  BulkInitializedRecord_008087C7 *pBVar31;
  uint uVar32;
  uint puVar17;
  uint pAVar34;
  SettMapMTy_field_1F84Element *element_1f84_3;
  char *pcVar35;
  SettMapMTy_field_1F84Element *element_1f84_4;
  char *pcVar36;
  AnonShape_005CBBE0_2D1CAA09 *pAVar37;
  bool bVar39;
  bool bVar40;
  int iVar41;
  uint uVar42;
  int iVar43;
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
  byte *local_30;
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
  DVar16 = STAppC::sub_006E51B0(this->field_0010);
  uVar30 = 0;
  this->field_0061 = DVar16;
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
  /* ST_CALLSITE[005D1458]: CALL 0x0040327e; direct=0040327E SettMapTy::GetMessage */
  SettMapTy::GetMessage((SettMapTy *)local_48,message);
  /* ST_CALLSITE[005D1464]: CALL 0x00402937; direct=00402937 StartSystemTy::ChatMessage */
  StartSystemTy::ChatMessage(g_startSystem_0081176C,message);
  pCVar15 = g_cursorClass_00802A30;
  SVar6 = message->id;
  if (SVar6 < MESS_SETTMAPSTY_6505) {
    if (SVar6 == MESS_SHARED_6504) {
      uVar30 = (message->arg0).u32;
      if ((uVar30 != 0xffffffff) && (this_00->field_1F84 != nullptr)) {
        pSVar7 = this_00->field_1E2F;
        if (uVar30 < pSVar7->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
          puVar18 = (uint *)((int)&pSVar7->data->field_0000 + pSVar7->elementSize * uVar30);
        }
        else {
          puVar18 = nullptr;
        }
        bVar23 = ((byte *)puVar18)[0x41];
        local_c = (AnonShape_005D1400_891386BF *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar23));
        if (DAT_0080877e == '\0') {
          /* ST_CALLSITE[005D1841]: CALL 0x00402d4c; direct=00402D4C SettMapMTy::ChgPlList */
          ChgPlList(this_00,message->arg1,2,(uint)bVar23,0);
        }
        else {
          /* ST_CALLSITE[005D181C]: CALL 0x004041a6; direct=004041A6 SettMapMTy::ChangePlayerCiv */
          ChangePlayerCiv(this_00,(message->arg1).u32,bVar23);
          /* ST_CALLSITE[005D1824]: CALL 0x00403ad5; direct=00403AD5 SettMapMTy::SendPlList */
          SendPlList(this_00,0);
        }
      }
    }
    else if (SVar6 < MESS_SHARED_6341) {
      if (SVar6 == MESS_SETTMAPMTY_6340) {
        /* ST_CALLSITE[005D1647]: CALL 0x004031d4; direct=004031D4 MMMObjTy::PaintSlBut */
        MMMObjTy::PaintSlBut
                  ((MMMObjTy *)this_00,
                   (RecoveredRecord_MMMObjTy_005B6560 *)
                   &(this_00->array_00BC[0xc].field_01DB)->field_055C,(int)message,0);
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
        piVar13 = (message->arg0).ptr;
        /* ST_CALLSITE[005D15AB]: CALL 0x00405155; direct=00405155 SettMapMTy::sub_005B5F00 */
        sub_005B5F00(this_00,(RecoveredSourceFamily_dibcopy *)this_00->field_2204,piVar13);
        iVar24 = *piVar13;
        local_10 = (char *)piVar13[5];
        ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_00->field_2204,0,
                         (iVar24 + -1) * (int)local_10,0,(int)local_10,
                         this_00->field_2204->field_0008 -
                         ((-(uint)(piVar13[1] != 1) & 0xfffffffd) + 3));
        uVar30 = 2;
        iVar43 = -1;
        iVar41 = -1;
        pcVar29 = LoadResourceString((iVar24 != 1) + 0x2422,g_hINSTANCE_00807618);
        ccFntTy::WrStr(g_startSystem_0081176C->field_0034,pcVar29,iVar41,iVar43,uVar30);
        FUN_006b35d0((int *)g_ddxContext_008075A8,this_00->field_2200);
      }
    }
    else if (SVar6 < MESS_PRIVIDERTY_6502) {
      if (SVar6 == MESS_SHARED_6501) {
        uVar30 = (message->arg0).u32;
        if ((uVar30 != 0xffffffff) && (this_00->field_1F84 != nullptr)) {
          pSVar7 = this_00->field_1E2F;
          if (uVar30 < pSVar7->count) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            puVar18 = (uint *)((int)&pSVar7->data->field_0000 + pSVar7->elementSize * uVar30);
          }
          else {
            puVar18 = nullptr;
          }
          bVar23 = ((byte *)puVar18)[0x41];
          local_c = (AnonShape_005D1400_891386BF *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar23));
          if (DAT_0080877e == '\0') {
            /* ST_CALLSITE[005D1735]: CALL 0x00402d4c; direct=00402D4C SettMapMTy::ChgPlList */
            ChgPlList(this_00,message->arg1,5,1,(uint)bVar23);
          }
          else {
            /* ST_CALLSITE[005D1710]: CALL 0x00402068; direct=00402068 SettMapMTy::ChangePlayerTeam */
            ChangePlayerTeam(this_00,(message->arg1).u32,1,(uint)bVar23);
            /* ST_CALLSITE[005D1718]: CALL 0x00403ad5; direct=00403AD5 SettMapMTy::SendPlList */
            SendPlList(this_00,0);
          }
        }
      }
      else if (SVar6 == MESS_SHARED_6341) {
        /* ST_CALLSITE[005D16B2]: CALL 0x004031d4; direct=004031D4 MMMObjTy::PaintSlBut */
        MMMObjTy::PaintSlBut
                  ((MMMObjTy *)this_00,
                   (RecoveredRecord_MMMObjTy_005B6560 *)
                   &(this_00->array_00BC[0xc].field_01DB)->field_05ED,(int)message,0);
      }
      else if ((SVar6 == MESS_SHARED_64FF) && (DAT_0080877e != '\0')) {
        FUN_00715360(g_int_00811764,0,' ',(char *)&this_00->field_1F53,0xd,1,0xffffffff);
      }
    }
    else if (((SVar6 == MESS_PRIVIDERTY_6502) &&
             (uVar30 = (message->arg0).u32, uVar30 != 0xffffffff)) &&
            (this_00->field_1F84 != nullptr)) {
      pSVar7 = this_00->field_1E2F;
      if (uVar30 < pSVar7->count) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        puVar18 = (uint *)((int)&pSVar7->data->field_0000 + pSVar7->elementSize * uVar30);
      }
      else {
        puVar18 = nullptr;
      }
      bVar23 = ((byte *)puVar18)[0x41];
      local_c = (AnonShape_005D1400_891386BF *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar23));
      if (DAT_0080877e == '\0') {
        /* ST_CALLSITE[005D17C0]: CALL 0x00402d4c; direct=00402D4C SettMapMTy::ChgPlList */
        ChgPlList(this_00,message->arg1,1,(uint)bVar23,0);
      }
      else {
        /* ST_CALLSITE[005D179B]: CALL 0x00405b46; direct=00405B46 SettMapMTy::ChangePlayerColor */
        ChangePlayerColor(this_00,(message->arg1).u32,bVar23);
        /* ST_CALLSITE[005D17A3]: CALL 0x00403ad5; direct=00403AD5 SettMapMTy::SendPlList */
        SendPlList(this_00,0);
      }
    }
    goto switchD_005d1877_caseD_6507;
  }
  if (MESS_SETTMAPMTY_654B < SVar6) {
    if (SVar6 < 0x694b) {
      if (SVar6 == MESS_FSGSTY_694A) {
        pSVar20 = this_00->field_1F84;
        local_34 = 0x1010101;
        bVar40 = false;
        local_30 = (undefined1 *)0x1010101;
        local_5 = '\0';
        local_11 = 0;
        if (pSVar20 != nullptr) {
          if (DAT_0080877e == '\0') {
LAB_005d1b5a:
            if (g_cursorClass_00802A30 != nullptr) {
              iVar24 = g_cursorClass_00802A30->field_00C9;
              iVar41 = g_cursorClass_00802A30->field_00C5;
              g_cursorClass_00802A30->field_0493 = CASE_5;
              pCVar15->field_0494 = 0xffff;
              /* ST_CALLSITE[005D1B86]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
              CursorClassTy::SetGCType(pCVar15,CASE_0,iVar41,iVar24);
              /* ST_CALLSITE[005D1B9B]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
              CursorClassTy::DrawSprite(pCVar15,pCVar15->field_00C5,pCVar15->field_00C9);
              pCVar15->field_00D2 = 0;
              pCVar15->field_04DF = -1;
            }
            DAT_008087c6 = '\0';
            DAT_0080874f = 0;
            pBVar31 = g_bulkInitializedRecords_008087C7;
            for (iVar24 = 0xa2; iVar24 != 0; iVar24 = iVar24 + -1) {
              *(undefined4 *)pBVar31 = 0;
              pBVar31 = (BulkInitializedRecord_008087C7 *)&pBVar31->field_0x4;
            }
            pbVar19 = &g_bulkInitializedRecords_008087C7[0].field_0022;
            do {
              pbVar19[-1] = 0;
              *pbVar19 = 0xff;
              pbVar19 = pbVar19 + 0x51;
            } while ((int)pbVar19 < 0x808a71);
            pSVar20 = this_00->field_1F84;
            uVar32 = 0;
            uVar30 = pSVar20->count;
            if (0 < (int)uVar30) {
              bVar40 = uVar30 != 0;
              do {
                if (bVar40) {
                  element_1f84 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar20, uVar32);
                }
                else {
                  element_1f84 = nullptr;
                }
                if (((element_1f84 != nullptr) && (element_1f84->field_0000 != '\0')) && (element_1f84->state != 0xff)) {
                  *(undefined1 *)((int)&local_34 + (uint)(byte)element_1f84->state) = 0;
                }
                uVar32 = uVar32 + 1;
                bVar40 = uVar32 < uVar30;
              } while ((int)uVar32 < (int)uVar30);
            }
            local_18 = nullptr;
            if (0 < (int)uVar30) {
              bVar40 = uVar30 != 0;
              do {
                if (bVar40) {
                  element_1f84 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar20, (int)local_18);
                }
                else {
                  element_1f84 = nullptr;
                }
                if (((element_1f84 != nullptr) && (element_1f84->field_0004 != '\0')) &&
                   ((element_1f84->field_0004 != '\x01' ||
                    ((this_00->field_1E26 == CASE_5 || (this_00->field_1E26 == CASE_F)))))) {
                  pDVar9 = element_1f84->handle;
                  if ((uint)(byte)element_1f84->field_0005 < pDVar9->count) {
                    local_c = DArrayAt<AnonShape_005D1400_891386BF>(pDVar9, (uint)(byte)element_1f84->field_0005);
                  }
                  else {
                    local_c = nullptr;
                  }
                  DAT_008087c6 = DAT_008087c6 + '\x01';
                  if (element_1f84->state == -1) {
                    iVar24 = 0;
                    do {
                      if (*(char *)((int)&local_34 + iVar24) != '\0') {
                        element_1f84->state = (char)iVar24;
                        *(undefined1 *)((int)&local_34 + iVar24) = 0;
                        break;
                      }
                      iVar24 = iVar24 + 1;
                    } while (iVar24 < 8);
                  }
                  g_bulkInitializedRecords_008087C7[(byte)element_1f84->state].field_0022 = element_1f84->state;
                  puVar17 = (uint)&local_18->field_0x1;
                  g_bulkInitializedRecords_008087C7[(byte)element_1f84->state].field_0021 = element_1f84->field_0003;
                  pSVar20 = this_00->field_1F84;
                  bVar40 = puVar17 < pSVar20->count;
                  if ((int)puVar17 < (int)pSVar20->count) {
                    do {
                      if (bVar40) {
                        element_1f84_4 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar20, puVar17);
                      }
                      else {
                        element_1f84_4 = nullptr;
                      }
                      if (element_1f84_4 != nullptr) {
                        if (element_1f84_4->field_0000 != '\0') break;
                        element_1f84_4->state = element_1f84->state;
                      }
                      pSVar20 = this_00->field_1F84;
                      puVar17 = puVar17 + 1;
                      bVar40 = puVar17 < pSVar20->count;
                    } while ((int)puVar17 < (int)pSVar20->count);
                  }
                  uVar30 = 0xffffffff;
                  pcVar35 = &CHAR_00h_008016a0;
                  do {
                    pcVar36 = pcVar35;
                    if (uVar30 == 0) break;
                    uVar30 = uVar30 - 1;
                    pcVar36 = pcVar35 + 1;
                    cVar2 = *pcVar35;
                    pcVar35 = pcVar36;
                  } while (cVar2 != '\0');
                  uVar30 = ~uVar30;
                  local_10 = &g_bulkInitializedRecords_008087C7[(byte)element_1f84->state].field_0x1;
                  pcVar35 = pcVar36 + -uVar30;
                  pcVar36 = &g_bulkInitializedRecords_008087C7[(byte)element_1f84->state].field_0x1;
                  memmove(pcVar36, pcVar35, uVar30); /* compiler REP MOVS byte copy */
                  uVar32 = 0;
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
                      uVar30 = 0xffffffff;
                      pcVar35 = &CHAR_00h_008016a0;
                      do {
                        pcVar36 = pcVar35;
                        if (uVar30 == 0) break;
                        uVar30 = uVar30 - 1;
                        pcVar36 = pcVar35 + 1;
                        cVar2 = *pcVar35;
                        pcVar35 = pcVar36;
                      } while (cVar2 != '\0');
                      uVar30 = ~uVar30;
                      local_10 = &g_bulkInitializedRecords_008087C7[(byte)element_1f84->state].field_0x1;
                      pcVar35 = pcVar36 + -uVar30;
                      pcVar36 = &g_bulkInitializedRecords_008087C7[(byte)element_1f84->state].field_0x1;
                      memmove(pcVar36, pcVar35, uVar30); /* compiler REP MOVS byte copy */
                      uVar32 = 0;
                    }
                    else {
                      uVar30 = 0xffffffff;
                      pcVar35 = &local_c->field_0x4c;
                      do {
                        pcVar36 = pcVar35;
                        if (uVar30 == 0) break;
                        uVar30 = uVar30 - 1;
                        pcVar36 = pcVar35 + 1;
                        cVar2 = *pcVar35;
                        pcVar35 = pcVar36;
                      } while (cVar2 != '\0');
                      uVar30 = ~uVar30;
                      local_10 = &g_bulkInitializedRecords_008087C7[(byte)element_1f84->state].field_0x1;
                      pcVar35 = pcVar36 + -uVar30;
                      pcVar36 = &g_bulkInitializedRecords_008087C7[(byte)element_1f84->state].field_0x1;
                      memmove(pcVar36, pcVar35, uVar30); /* compiler REP MOVS byte copy */
                      uVar32 = 0;
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
                pSVar20 = this_00->field_1F84;
                local_18 = (AnonShape_005D1400_5A9F7B11 *)&local_18->field_0x1;
                bVar40 = local_18 < (undefined1 *)pSVar20->count;
              } while ((int)local_18 < (int)pSVar20->count);
            }
            /* ST_CALLSITE[005D1EB7]: CALL 0x0040591b; direct=0040591B STAppC::sub_0056EE90 */
            STAppC::sub_0056EE90((STAppC *)&DAT_00807620);
            pCVar15 = g_cursorClass_00802A30;
            if ((this_00->field_1E26 == CASE_7) || (this_00->field_1E26 == 0xe)) {
              if ((this_00->field_1F47 != 0) || ((message->arg0).u32 != 0)) {
                uVar30 = 0xffffffff;
                pcVar29 = &CHAR_00h_00853de4;
                do {
                  pcVar35 = pcVar29;
                  if (uVar30 == 0) break;
                  uVar30 = uVar30 - 1;
                  pcVar35 = pcVar29 + 1;
                  cVar2 = *pcVar29;
                  pcVar29 = pcVar35;
                } while (cVar2 != '\0');
                uVar30 = ~uVar30;
                pcVar29 = pcVar35 + -uVar30;
                pcVar35 = &CHAR_00h_0080ed16;
                memmove(pcVar35, pcVar29, uVar30); /* compiler REP MOVS byte copy */
                uVar32 = 0;
                goto LAB_005d2018;
              }
              if ((DAT_0080877e != '\0') &&
                 ((this_00->array_00BC[0xc].field_01DB)->field_02E6 != nullptr)) {
                if (g_cursorClass_00802A30 != nullptr) {
                  iVar24 = g_cursorClass_00802A30->field_00C9;
                  iVar41 = g_cursorClass_00802A30->field_00C5;
                  g_cursorClass_00802A30->field_0493 = CASE_1;
                  pCVar15->field_0494 = 0xffff;
                  /* ST_CALLSITE[005D1F37]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
                  CursorClassTy::SetGCType(pCVar15,CASE_0,iVar41,iVar24);
                  /* ST_CALLSITE[005D1F4C]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
                  CursorClassTy::DrawSprite(pCVar15,pCVar15->field_00C5,pCVar15->field_00C9);
                  pCVar15->field_00D2 = 0;
                  pCVar15->field_04DF = -1;
                }
                pSVar10 = this_00->array_00BC[0xc].field_01DB;
                memset(local_90, 0, 0x20); /* compiler bulk-zero initialization */
                iVar24 = 0;
                memset(local_b0, 0, 0x20); /* compiler bulk-zero initialization */
                local_b0[2] = this_00->field_0008;
                local_90[3] = 2;
                local_b0[3] = 2;
                local_80 = 0x694a;
                local_7c = 1;
                local_b0[4] = 0x693f;
                local_90[2] = local_b0[2];
                /* ST_CALLSITE[005D1FDA]: CALL 0x00403fa8; direct=00403FA8 MMsgTy::SetMessage */
                iVar24 = MMsgTy::SetMessage(pSVar10->field_02E6,0x251f,'\x01',local_90,local_b0,
                                            nullptr,0,0);
                if (iVar24 != 0) {
                  /* ST_CALLSITE[005D1FEB]: CALL dword ptr [EAX + 0x24] */
                  this_00->vfunc_24();
                }
              }
            }
            else {
LAB_005d2018:
              uVar30 = 0xffffffff;
              local_5 = '\x01';
              pcVar29 = &CHAR_00h_0080ed16;
              do {
                pcVar35 = pcVar29;
                if (uVar30 == 0) break;
                uVar30 = uVar30 - 1;
                pcVar35 = pcVar29 + 1;
                cVar2 = *pcVar29;
                pcVar29 = pcVar35;
              } while (cVar2 != '\0');
              uVar30 = ~uVar30;
              pcVar29 = pcVar35 + -uVar30;
              pcVar35 = (char *)&DAT_0080ee1a;
              memmove(pcVar35, pcVar29, uVar30); /* compiler REP MOVS byte copy */
              uVar30 = 0xffffffff;
              pcVar29 = &CHAR_00h_00807680;
              do {
                if (uVar30 == 0) break;
                uVar30 = uVar30 - 1;
                cVar2 = *pcVar29;
                pcVar29 = pcVar29 + 1;
              } while (cVar2 != '\0');
              uVar32 = 0xffffffff;
              pcVar29 = (char *)((int)&DAT_0080ed12 + ~uVar30 + 3);
              do {
                pcVar35 = pcVar29;
                if (uVar32 == 0) break;
                uVar32 = uVar32 - 1;
                pcVar35 = pcVar29 + 1;
                cVar2 = *pcVar29;
                pcVar29 = pcVar35;
              } while (cVar2 != '\0');
              uVar32 = ~uVar32;
              pcVar29 = pcVar35 + -uVar32;
              pcVar35 = &CHAR_00h_0080ef1e;
              memmove(pcVar35, pcVar29, uVar32); /* compiler REP MOVS byte copy */
              uVar32 = 0;
            }
            if (local_5 != '\0') {
              STPiece<0,1>(DAT_008087a0) = this_00->field_1E26;
              DAT_0080879c = 0;
              if (DAT_0080877e == '\0') {
                pcVar29 = &CHAR_00h_00808ab0;
                for (iVar24 = 0x3a8; iVar24 != 0; iVar24 = iVar24 + -1) {
                  pcVar29[0] = '\0';
                  pcVar29[1] = '\0';
                  pcVar29[2] = '\0';
                  pcVar29[3] = '\0';
                  pcVar29 = pcVar29 + 4;
                }
                DAT_00808aaf = 0;
                pSVar20 = this_00->field_1F84;
                local_18 = nullptr;
                if (0 < (int)pSVar20->count) {
                  bVar40 = pSVar20->count != 0;
                  do {
                    if (bVar40) {
                      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
                      pcVar29 = &pSVar20->data->field_0000 + pSVar20->elementSize * (int)local_18;
                    }
                    else {
                      pcVar29 = nullptr;
                    }
                    if (pcVar29 != nullptr) {
                      cVar2 = pcVar29[4];
                      local_5 = cVar2;
                      if ((cVar2 != '\x01') && (cVar2 != '\0')) {
                        if (cVar2 == '\x04') {
                          pDVar9 = *(DArrayTy **)(pcVar29 + 0x50);
                          if ((uint)(byte)pcVar29[5] < pDVar9->count) {
                            pcVar35 = DArrayAt<char>(pDVar9, (uint)(byte)pcVar29[5]);
                          }
                          else {
                            pcVar35 = nullptr;
                          }
                          if (pcVar35 != nullptr) {
                            uVar30 = 0xffffffff;
                            do {
                              pcVar36 = pcVar35;
                              if (uVar30 == 0) break;
                              uVar30 = uVar30 - 1;
                              pcVar36 = pcVar35 + 1;
                              cVar1 = *pcVar35;
                              pcVar35 = pcVar36;
                            } while (cVar1 != '\0');
                            uVar30 = ~uVar30;
                            pcVar36 = pcVar36 + -uVar30;
                            local_10 = local_22c;
                            goto LAB_005d24b8;
                          }
                        }
                        else {
                          uVar30 = 0xffffffff;
                          pcVar35 = pcVar29 + 10;
                          do {
                            pcVar36 = pcVar35;
                            if (uVar30 == 0) break;
                            uVar30 = uVar30 - 1;
                            pcVar36 = pcVar35 + 1;
                            cVar1 = *pcVar35;
                            pcVar35 = pcVar36;
                          } while (cVar1 != '\0');
                          uVar30 = ~uVar30;
                          pcVar36 = pcVar36 + -uVar30;
                          local_10 = local_22c;
LAB_005d24b8:
                          pcVar35 = local_22c;
                          for (uVar32 = uVar30 >> 2; uVar32 != 0; uVar32 = uVar32 - 1) {
                            *(undefined4 *)pcVar35 = *(undefined4 *)pcVar36;
                            pcVar36 = pcVar36 + 4;
                            pcVar35 = pcVar35 + 4;
                          }
                          for (uVar30 = uVar30 & 3; local_10 = local_22c, uVar30 != 0;
                              uVar30 = uVar30 - 1) {
                            *pcVar35 = *pcVar36;
                            pcVar36 = pcVar36 + 1;
                            pcVar35 = pcVar35 + 1;
                          }
                        }
                        local_1ec = *(int *)(pcVar29 + 6);
                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                        STPiece<0,2>(local_1e8) = CONCAT11(*pcVar29,pcVar29[2]);
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
                        pcVar29 = local_22c;
                        pcVar35 = &CHAR_00h_00808ab0 + (uint)DAT_00808aaf * 0x9c;
                        memmove(pcVar35, pcVar29, 0x9c); /* compiler REP MOVS byte copy */
                        if ((byte)local_1e8 < 8) {
                          iVar41 = 0;
                          iVar24 = (local_1e8 & 0xff) * 0x51;
                          do {
                            if (*(char *)(iVar24 + 0x808800 + iVar41) == '\0') {
                              *(byte *)(iVar24 + 0x808800 + iVar41) = DAT_00808aaf;
                              break;
                            }
                            iVar41 = iVar41 + 1;
                          } while (iVar41 < 0x18);
                        }
                        DAT_00808aaf = DAT_00808aaf + 1;
                      }
                    }
                    pSVar20 = this_00->field_1F84;
                    local_18 = (AnonShape_005D1400_5A9F7B11 *)&local_18->field_0x1;
                    bVar40 = local_18 < (undefined1 *)pSVar20->count;
                  } while ((int)local_18 < (int)pSVar20->count);
                }
                /* ST_CALLSITE[005D2594]: CALL 0x0040471e; direct=0040471E SettMapMTy::RunGame */
                RunGame(this_00);
                FUN_006b6500(g_int_00811764,1);
                FUN_00715360(g_int_00811764,1,'.',nullptr,0,0,0xffffffff);
                FUN_006b6500(g_int_00811764,DAT_0080733c);
              }
              else {
                FUN_006b6500(g_int_00811764,1);
                memset((void *)local_70, 0, 0x26); /* compiler bulk-zero initialization */
                iVar24 = 0;
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
                pcVar29 = &CHAR_00h_00808ab0;
                for (iVar24 = 0x3a8; iVar24 != 0; iVar24 = iVar24 + -1) {
                  pcVar29[0] = '\0';
                  pcVar29[1] = '\0';
                  pcVar29[2] = '\0';
                  pcVar29[3] = '\0';
                  pcVar29 = pcVar29 + 4;
                }
                DAT_00808aaf = 0;
                pSVar20 = this_00->field_1F84;
                local_18 = nullptr;
                if (0 < (int)pSVar20->count) {
                  bVar40 = pSVar20->count != 0;
                  do {
                    if (bVar40) {
                      element_1f84_3 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar20, (int)local_18);
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
                        uVar30 = 0xffffffff;
                        local_10 = local_190;
                        pcVar29 = &local_c->field_0xa;
                        do {
                          pcVar35 = pcVar29;
                          if (uVar30 == 0) break;
                          uVar30 = uVar30 - 1;
                          pcVar35 = pcVar29 + 1;
                          cVar1 = *pcVar29;
                          pcVar29 = pcVar35;
                        } while (cVar1 != '\0');
                        uVar30 = ~uVar30;
                        pcVar29 = pcVar35 + -uVar30;
                        pcVar35 = local_190;
                        memmove(pcVar35, pcVar29, uVar30); /* compiler REP MOVS byte copy */
                        uVar32 = 0;
                        if (cVar2 == '\x04') {
                          iVar24 = local_c->field_0050;
                          if ((uint)(byte)local_c->field_0x5 < *(uint *)(iVar24 + 0xc)) {
                            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                            pcVar29 = (char *)(*(int *)(iVar24 + 8) * (uint)(byte)local_c->field_0x5
                                              + *(int *)(iVar24 + 0x1c));
                          }
                          else {
                            pcVar29 = nullptr;
                          }
                          if (pcVar29 != nullptr) {
                            uVar30 = 0xffffffff;
                            do {
                              pcVar35 = pcVar29;
                              if (uVar30 == 0) break;
                              uVar30 = uVar30 - 1;
                              pcVar35 = pcVar29 + 1;
                              cVar1 = *pcVar29;
                              pcVar29 = pcVar35;
                            } while (cVar1 != '\0');
                            uVar30 = ~uVar30;
                            pcVar35 = pcVar35 + -uVar30;
                            local_10 = local_190;
                            goto LAB_005d22dd;
                          }
                        }
                        else {
                          uVar30 = 0xffffffff;
                          pcVar29 = &local_c->field_0xa;
                          do {
                            pcVar35 = pcVar29;
                            if (uVar30 == 0) break;
                            uVar30 = uVar30 - 1;
                            pcVar35 = pcVar29 + 1;
                            cVar1 = *pcVar29;
                            pcVar29 = pcVar35;
                          } while (cVar1 != '\0');
                          uVar30 = ~uVar30;
                          pcVar35 = pcVar35 + -uVar30;
                          local_10 = local_190;
LAB_005d22dd:
                          pcVar29 = local_190;
                          for (uVar32 = uVar30 >> 2; uVar32 != 0; uVar32 = uVar32 - 1) {
                            *(undefined4 *)pcVar29 = *(undefined4 *)pcVar35;
                            pcVar35 = pcVar35 + 4;
                            pcVar29 = pcVar29 + 4;
                          }
                          for (uVar30 = uVar30 & 3; local_10 = local_190, uVar30 != 0;
                              uVar30 = uVar30 - 1) {
                            *pcVar29 = *pcVar35;
                            pcVar35 = pcVar35 + 1;
                            pcVar29 = pcVar29 + 1;
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
                        pcVar29 = local_190;
                        pcVar35 = &CHAR_00h_00808ab0 + (uint)DAT_00808aaf * 0x9c;
                        memmove(pcVar35, pcVar29, 0x9c); /* compiler REP MOVS byte copy */
                        if ((byte)local_14c < 8) {
                          iVar41 = 0;
                          iVar24 = (local_14c & 0xff) * 0x51;
                          do {
                            if (*(char *)(iVar24 + 0x808800 + iVar41) == '\0') {
                              *(byte *)(iVar24 + 0x808800 + iVar41) = DAT_00808aaf;
                              break;
                            }
                            iVar41 = iVar41 + 1;
                          } while (iVar41 < 0x18);
                        }
                        DAT_00808aaf = DAT_00808aaf + 1;
                      }
                    }
                    pSVar20 = this_00->field_1F84;
                    local_18 = (AnonShape_005D1400_5A9F7B11 *)&local_18->field_0x1;
                    bVar40 = local_18 < (undefined1 *)pSVar20->count;
                  } while ((int)local_18 < (int)pSVar20->count);
                }
                if (this_00->field_222F->count == 0) {
                  this_00->field_222E = 0;
                  /* ST_CALLSITE[005D23C9]: CALL 0x0040471e; direct=0040471E SettMapMTy::RunGame */
                  RunGame(this_00);
                  if (DAT_008067a0 != '\0') {
                    /* ST_CALLSITE[005D23E9]: CALL dword ptr [0x0085c070] */
                    CFsgsConnection::UpdateGame
                              ((CFsgsConnection *)&DAT_00802a90,6,
                               &this_00->array_00BC[0xc].field_0x1df);
                    /* ST_CALLSITE[005D23F4]: CALL dword ptr [0x0085c078] */
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
            if (0 < (int)pSVar20->count) {
              bVar39 = pSVar20->count != 0;
              do {
                if (bVar39) {
                  /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
                  pcVar29 = &pSVar20->data->field_0000 + pSVar20->elementSize * uVar30;
                }
                else {
                  pcVar29 = nullptr;
                }
                if ((pcVar29 != nullptr) &&
                   (((pcVar29[4] == '\x02' || (pcVar29[4] == '\x03')) && (pcVar29[0x4f] == '\0'))))
                {
                  bVar40 = true;
                  break;
                }
                uVar30 = uVar30 + 1;
                bVar39 = uVar30 < pSVar20->count;
              } while ((int)uVar30 < (int)pSVar20->count);
            }
            if (bVar40) {
              pMVar8 = (this_00->array_00BC[0xc].field_01DB)->field_02E6;
              if (pMVar8 != nullptr) {
                /* ST_CALLSITE[005D1AC5]: CALL 0x00403fa8; direct=00403FA8 MMsgTy::SetMessage */
                MMsgTy::SetMessage(pMVar8,0x2527,'\0',nullptr,nullptr,
                                   nullptr,0,0);
              }
            }
            else {
              uVar30 = 0;
              if (0 < (int)pSVar20->count) {
                bVar40 = pSVar20->count != 0;
                do {
                  if (bVar40) {
                    /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
                    pcVar29 = &pSVar20->data->field_0000 + pSVar20->elementSize * uVar30;
                  }
                  else {
                    pcVar29 = nullptr;
                  }
                  if ((pcVar29 != nullptr) && (*pcVar29 != '\0')) {
                    cVar2 = pcVar29[4];
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
                  uVar30 = uVar30 + 1;
                  bVar40 = uVar30 < pSVar20->count;
                } while ((int)uVar30 < (int)pSVar20->count);
              }
              if (1 < local_11) goto LAB_005d1b5a;
              pMVar8 = (this_00->array_00BC[0xc].field_01DB)->field_02E6;
              if (pMVar8 != nullptr) {
                /* ST_CALLSITE[005D1B50]: CALL 0x00403fa8; direct=00403FA8 MMsgTy::SetMessage */
                MMsgTy::SetMessage(pMVar8,0x2528,'\0',nullptr,nullptr,
                                   nullptr,0,0);
              }
            }
          }
        }
      }
      else if (SVar6 == MESS_SETTMAPMTY_654C) {
        if (DAT_0080877e != '\0') {
          /* ST_CALLSITE[005D19CC]: CALL 0x004035c6; direct=004035C6 SettMapMTy::CheckPlList */
          CheckPlList(this_00);
          /* ST_CALLSITE[005D19D3]: CALL 0x00405b7d; direct=00405B7D SettMapMTy::sub_005D1380 */
          sub_005D1380(this_00);
          /* ST_CALLSITE[005D19DC]: CALL dword ptr [EDX + 0x2c] */
          this_00->SetListCtrls();
          /* ST_CALLSITE[005D19E1]: CALL 0x00402a9a; direct=00402A9A SettMapTy::PaintSC */
          SettMapTy::PaintSC((SettMapTy *)this_00);
          goto switchD_005d1877_caseD_6549;
        }
      }
      else if (SVar6 == MESS_SETTMAPTY_654D) goto switchD_005d1877_caseD_6548;
    }
    else if (SVar6 == MESS_SHARED_C0A2) {
      iVar24 = thunk_FUN_005ddb40((int)this_00->array_00BC[0xc].field_01DB);
      if (iVar24 == 0) {
        if (DAT_008067a0 != '\0') {
          pDVar9 = (this_00->array_00BC[0xc].field_01DB)->field_0686;
          if ((int)pDVar9->elementSize < 1) {
            pcVar29 = nullptr;
          }
          else {
            pcVar29 = *(char **)pDVar9->growCapacity;
          }
          bVar38 = thunk_FUN_005717e0(pcVar29);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          if (CONCAT31(extraout_var,bVar38) != 0) {
            pDVar9 = (this_00->array_00BC[0xc].field_01DB)->field_0686;
            if ((int)pDVar9->elementSize < 1) {
              /* ST_CALLSITE[005D267D]: CALL dword ptr [0x0085c064] */
              CFsgsConnection::SendChatMessage((CFsgsConnection *)&DAT_00802a90,nullptr);
            }
            else {
              /* ST_CALLSITE[005D266A]: CALL dword ptr [0x0085c064] */
              CFsgsConnection::SendChatMessage
                        ((CFsgsConnection *)&DAT_00802a90,*(char **)pDVar9->growCapacity);
            }
            goto LAB_005d28da;
          }
        }
        memset(stack_bytes_neg_680, 0, 0x451); /* compiler bulk-zero initialization */
        pcVar29 = &CHAR_00h_00807e1d;
        if (DAT_008067a0 == '\0') {
          pcVar29 = &CHAR_00h_00807ddd;
        }
        uVar30 = 0xffffffff;
        do {
          pcVar35 = pcVar29;
          if (uVar30 == 0) break;
          uVar30 = uVar30 - 1;
          pcVar35 = pcVar29 + 1;
          cVar2 = *pcVar29;
          pcVar29 = pcVar35;
        } while (cVar2 != '\0');
        uVar30 = ~uVar30;
        pSVar10 = this_00->array_00BC[0xc].field_01DB;
        pcVar29 = pcVar35 + -uVar30;
        pcVar35 = stack_bytes_neg_680;
        memmove(pcVar35, pcVar29, uVar30); /* compiler REP MOVS byte copy */
        uVar32 = 0;
        pDVar9 = pSVar10->field_0686;
        if ((int)pDVar9->elementSize < 1) {
          pcVar29 = nullptr;
        }
        else {
          pcVar29 = *(char **)pDVar9->growCapacity;
        }
        uVar30 = 0xffffffff;
        do {
          pcVar35 = pcVar29;
          if (uVar30 == 0) break;
          uVar30 = uVar30 - 1;
          pcVar35 = pcVar29 + 1;
          cVar2 = *pcVar29;
          pcVar29 = pcVar35;
        } while (cVar2 != '\0');
        uVar30 = ~uVar30;
        pcVar29 = pcVar35 + -uVar30;
        pcVar35 = local_640;
        memmove(pcVar35, pcVar29, uVar30); /* compiler REP MOVS byte copy */
        local_10 = local_640;
        /* ST_CALLSITE[005D271A]: CALL 0x00402bbc; direct=00402BBC StartSystemTy::AddToChat */
        StartSystemTy::AddToChat(pSVar10,(int)stack_bytes_neg_680);
        if (this_00->field_2208 == '\0') {
          pSVar20 = this_00->field_1F84;
          if (pSVar20 != nullptr) {
            uVar30 = pSVar20->count;
            uVar32 = 0;
            if (uVar30 != 0) {
              if (uVar30 == 0) {
                pcVar29 = nullptr;
                goto LAB_005d277a;
              }
              do {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
                pcVar29 = &pSVar20->data->field_0000 + pSVar20->elementSize * uVar32;
LAB_005d277a:
                if ((pcVar29 != nullptr) &&
                   (((pcVar29[4] == '\x02' || (pcVar29[4] == '\x03')) &&
                    (*(int *)(pcVar29 + 6) == DAT_0080877f)))) {
                  local_5 = pcVar29[0x4a];
                  break;
                }
                uVar32 = uVar32 + 1;
              } while (uVar32 < uVar30);
            }
            local_c = nullptr;
            if (uVar30 != 0) {
              if (uVar30 == 0) {
                pcVar29 = nullptr;
                goto LAB_005d27c3;
              }
              do {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
                pcVar29 = &pSVar20->data->field_0000 + pSVar20->elementSize * (int)local_c;
LAB_005d27c3:
                if (((pcVar29 != nullptr) && ((pcVar29[4] == '\x02' || (pcVar29[4] == '\x03'))))
                   && (*(int *)(pcVar29 + 6) != DAT_0080877f)) {
                  if (DAT_00808a8f == '\0') {
                    if (((DAT_0080874d != 0xff) && (bVar23 = pcVar29[2], bVar23 != 0xff)) &&
                       (DAT_0080874d != bVar23)) {
                      local_10 = (char *)STReplaceLowByte((uint32_t)(local_10), (uint8_t)(bVar23));
                      uVar30 = (uint)DAT_0080874d;
                      bVar3 = g_playerRelationMatrix[uVar30][bVar23];
                      if ((bVar3 == 0) && (g_playerRelationMatrix[bVar23][uVar30] == 0)) {
                        iVar24 = -2;
                      }
                      else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar23][uVar30] == 0)) {
                        iVar24 = -1;
                      }
                      else if ((bVar3 == 0) && (g_playerRelationMatrix[bVar23][uVar30] == 1)) {
                        iVar24 = 1;
                      }
                      else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar23][uVar30] == 1)) {
                        iVar24 = 2;
                      }
                      else {
                        iVar24 = 0;
                      }
                      if (iVar24 == 2) goto LAB_005d28a0;
                    }
                  }
                  else if (pcVar29[0x4a] == local_5) {
LAB_005d28a0:
                    FUN_00715360(g_int_00811764,*(int *)(pcVar29 + 6),'\x1b',stack_bytes_neg_680,0x451,
                                 1,0xffffffff);
                  }
                }
                pSVar20 = this_00->field_1F84;
                local_c = (AnonShape_005D1400_891386BF *)&local_c->field_0x1;
              } while (local_c < (undefined1 *)pSVar20->count);
            }
          }
        }
        else {
          FUN_00715360(g_int_00811764,0,'\x1b',stack_bytes_neg_680,0x451,1,0xffffffff);
        }
      }
LAB_005d28da:
      Library::DKW::TBL::FUN_006b6020
                ((this_00->array_00BC[0xc].field_01DB)->field_0686,0,&CHAR_00h_008016a0);
      pSVar10 = this_00->array_00BC[0xc].field_01DB;
      this_00->field_002D = 0x33;
      this_00->field_0031 = pSVar10->field_0686;
      FUN_006e6080(this_00,2,pSVar10->field_054C,(undefined4 *)&this_00->field_0x1d);
    }
    goto switchD_005d1877_caseD_6507;
  }
  if (SVar6 < MESS_SETTMAPMTY_654A) {
    switch(SVar6) {
    case MESS_SETTMAPSTY_6505:
      uVar30 = (message->arg0).u32;
      if ((uVar30 != 0xffffffff) && (this_00->field_1F84 != nullptr)) {
        pSVar7 = this_00->field_1E2F;
        if (uVar30 < pSVar7->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
          puVar18 = (uint *)((int)&pSVar7->data->field_0000 + pSVar7->elementSize * uVar30);
        }
        else {
          puVar18 = nullptr;
        }
        if (DAT_0080877e == '\0') {
          /* ST_CALLSITE[005D198C]: CALL 0x00402d4c; direct=00402D4C SettMapMTy::ChgPlList */
          ChgPlList(this_00,message->arg1,3,puVar18[0x41],puVar18[0x42]);
          this_00->field_2244 = 0;
        }
        else {
          pcVar29 = &CHAR_00h_00807e1d;
          if (DAT_008067a0 == '\0') {
            pcVar29 = &CHAR_00h_00807ddd;
          }
          /* ST_CALLSITE[005D1964]: CALL 0x00401bdb; direct=00401BDB SettMapMTy::ChangePlayerList */
          ChangePlayerList(this_00,DAT_0080877f,(message->arg1).u32,puVar18[0x41],
                           (char)puVar18[0x42],pcVar29);
          /* ST_CALLSITE[005D196C]: CALL 0x00403ad5; direct=00403AD5 SettMapMTy::SendPlList */
          SendPlList(this_00,0);
        }
      }
      break;
    case MESS_FSGSTY_6506:
      uVar30 = (message->arg1).u32;
      if (uVar30 == 0) {
        if (DAT_0080877e != '\0') {
          DAT_00808aab = DAT_00808aab + 1;
          this_00->field_2121 = this_00->field_2121 + 1;
          /* ST_CALLSITE[005D18E8]: CALL 0x00404a89; direct=00404A89 SettMapMTy::SendDesc */
          SendDesc(this_00,0);
          /* ST_CALLSITE[005D18F0]: CALL 0x00403ad5; direct=00403AD5 SettMapMTy::SendPlList */
          SendPlList(this_00,0);
        }
      }
      else if (((2 < uVar30) && (uVar30 < 9)) && (DAT_0080877e != '\0')) {
        DAT_00808aab = DAT_00808aab + 1;
        /* ST_CALLSITE[005D18B4]: CALL 0x00404a89; direct=00404A89 SettMapMTy::SendDesc */
        SendDesc(this_00,0);
      }
      break;
    case MESS_SETTMAPTY_6548:
      goto switchD_005d1877_caseD_6548;
    case MESS_SETTMAPMTY_6549:
switchD_005d1877_caseD_6549:
      if (DAT_0080877e != '\0') {
        this_00->field_2121 = this_00->field_2121 + 1;
        /* ST_CALLSITE[005D1A03]: CALL 0x00403ad5; direct=00403AD5 SettMapMTy::SendPlList */
        SendPlList(this_00,0);
        goto switchD_005d1877_caseD_6548;
      }
    }
  }
  else {
switchD_005d1877_caseD_6548:
    if (DAT_0080877e != '\0') {
      DAT_00808aab = DAT_00808aab + 1;
      /* ST_CALLSITE[005D1A25]: CALL 0x00404a89; direct=00404A89 SettMapMTy::SendDesc */
      SendDesc(this_00,0);
    }
  }
switchD_005d1877_caseD_6507:
  SVar5 = message->id;
  if (((0x69fe < SVar5) && (SVar5 < 0x6a7f)) && (this_00->field_0065 == '\x01')) {
    pSVar20 = this_00->field_1F84;
    local_2c = SVar5 - 0x69ff >> 3;
    if ((pSVar20 == nullptr) ||
       (uVar30 = local_2c + this_00->field_1F88, pSVar20->count <= uVar30)) {
      pAVar27 = nullptr;
    }
    else {
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
      pAVar27 = (AnonShape_005D1400_5A9F7B11 *)
                (&pSVar20->data->field_0000 + pSVar20->elementSize * uVar30);
    }
    local_18 = pAVar27;
    if (pAVar27 != nullptr) {
      switch(SVar5 + 1 & 7) {
      case 0:
        if ((pAVar27->field_0x4 == '\x02') && (*(int *)&pAVar27->field_0x6 == DAT_0080877f)) {
          if (DAT_0080877e == '\0') {
            uVar32 = 0;
            uVar30 = 0;
            iVar24 = this_00->field_1F88 + local_2c;
            uVar42 = 0;
            goto LAB_005d34ee;
          }
          /* ST_CALLSITE[005D29C6]: CALL 0x00405407; direct=00405407 SettMapMTy::ChangePlayerState */
          ChangePlayerState(this_00,this_00->field_1F88 + local_2c);
          /* ST_CALLSITE[005D29CF]: CALL 0x00403ad5; direct=00403AD5 SettMapMTy::SendPlList */
          SendPlList(this_00,0);
        }
        break;
      case 1:
        if (pAVar27->field_0x0 != '\0') {
          uVar30 = pSVar20->count;
          local_44 = 0x1010101;
          local_40 = 0x1010101;
          uVar32 = 0;
          if (0 < (int)uVar30) {
            bVar40 = uVar30 != 0;
            do {
              if (bVar40) {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
                pcVar29 = &this_00->field_1F84->data->field_0000 +
                          this_00->field_1F84->elementSize * uVar32;
              }
              else {
                pcVar29 = nullptr;
              }
              if ((*pcVar29 != '\0') && (pcVar29[2] != 0xff)) {
                *(undefined1 *)((int)&local_44 + (uint)(byte)pcVar29[2]) = 0;
              }
              uVar32 = uVar32 + 1;
              bVar40 = uVar32 < uVar30;
            } while ((int)uVar32 < (int)uVar30);
          }
          if (pAVar27->field_0x2 != 0xff) {
            *(undefined1 *)((int)&local_44 + (uint)(byte)pAVar27->field_0x2) = 1;
          }
          uVar30 = 0;
          this_00->field_2171 = 0x6502;
          this_00->field_2179 = this_00->field_1F88 + local_2c;
          this_00->field_2191 = 0x6503;
          this_00->field_21A1 = 0;
          this_00->field_1E2F->count = 0;
          this_00->field_1F37 = 0xff;
          Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_1E2F,&this_00->field_1E33);
          local_c = (AnonShape_005D1400_891386BF *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(1));
          do {
            if (*(char *)((int)&local_44 + uVar30) != '\0') {
              this_00->field_1F37 = uVar30;
              Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_1E2F,&this_00->field_1E33);
              if ((byte)pAVar27->field_0x2 == uVar30) {
                this_00->field_21A1 = (uint)local_c & 0xff;
              }
              local_c = (AnonShape_005D1400_891386BF *)
                        STReplaceLowByte((uint32_t)(local_c), (uint8_t)((byte)local_c + '\x01'));
            }
            uVar30 = uVar30 + 1;
          } while ((int)uVar30 < 8);
          dVar11 = this_00->field_1E2F->count;
          this_00->field_21C5 = 0x124;
          this_00->field_21A9 = dVar11;
          this_00->field_21CD = 0x1e;
          this_00->field_21A5 = 0x12;
          this_00->field_21C9 = local_2c * 0x19 + 0x41;
LAB_005d3188:
          /* ST_CALLSITE[005D319F]: CALL dword ptr [EDX + 0x8] */
          (*this_00->field_000C->vtable->CreateObject)
                    ((SystemClassTy *)this_00->field_000C,0x100ef,nullptr,nullptr,
                     &this_00->field_0x2161,0);
        }
        break;
      case 2:
        if (pAVar27->field_0x0 != '\0') {
          this_00->field_2171 = 0x6504;
          this_00->field_2179 = this_00->field_1F88 + local_2c;
          this_00->field_2191 = 0x6500;
          this_00->field_1E2F->count = 0;
          local_10 = (char *)0x1;
          local_EAX_6008 = LoadResourceString(0x23f1,g_hINSTANCE_00807618);
          uVar30 = 0xffffffff;
          do {
            pcVar29 = local_EAX_6008;
            if (uVar30 == 0) break;
            uVar30 = uVar30 - 1;
            pcVar29 = local_EAX_6008 + 1;
            cVar2 = *local_EAX_6008;
            local_EAX_6008 = pcVar29;
          } while (cVar2 != '\0');
          uVar30 = ~uVar30;
          pcVar29 = pcVar29 + -uVar30;
          pcVar35 = &this_00->field_1E33;
          memmove(pcVar35, pcVar29, uVar30); /* compiler REP MOVS byte copy */
          uVar32 = 0;
          for (puVar18_mg5 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_1E33,'\n');
              puVar18_mg5 != nullptr;
              puVar18_mg5 = Library::MSVCRT::FUN_0072e560(puVar18_mg5,'\n')) {
            *(undefined1 *)puVar18_mg5 = 0x20;
          }
          this_00->field_1F37 = 1;
          Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_1E2F,&this_00->field_1E33);
          local_EAX_6124 = LoadResourceString(0x23f0,g_hINSTANCE_00807618);
          uVar30 = 0xffffffff;
          do {
            pcVar29 = local_EAX_6124;
            if (uVar30 == 0) break;
            uVar30 = uVar30 - 1;
            pcVar29 = local_EAX_6124 + 1;
            cVar2 = *local_EAX_6124;
            local_EAX_6124 = pcVar29;
          } while (cVar2 != '\0');
          uVar30 = ~uVar30;
          pcVar29 = pcVar29 + -uVar30;
          pcVar35 = &this_00->field_1E33;
          memmove(pcVar35, pcVar29, uVar30); /* compiler REP MOVS byte copy */
          uVar32 = 0;
          for (puVar18_mg6 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_1E33,'\n');
              puVar18_mg6 != nullptr;
              puVar18_mg6 = Library::MSVCRT::FUN_0072e560(puVar18_mg6,'\n')) {
            *(undefined1 *)puVar18_mg6 = 0x20;
          }
          this_00->field_1F37 = 2;
          Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_1E2F,&this_00->field_1E33);
          pcVar29 = local_10;
          if ((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) {
            pcVar29 = (char *)(uint)(local_18->field_0x4 != '\x02');
          }
          if (pcVar29 != nullptr) {
            local_EAX_6280 = LoadResourceString(0x23f2,g_hINSTANCE_00807618);
            uVar30 = 0xffffffff;
            do {
              pcVar29 = local_EAX_6280;
              if (uVar30 == 0) break;
              uVar30 = uVar30 - 1;
              pcVar29 = local_EAX_6280 + 1;
              cVar2 = *local_EAX_6280;
              local_EAX_6280 = pcVar29;
            } while (cVar2 != '\0');
            uVar30 = ~uVar30;
            pcVar29 = pcVar29 + -uVar30;
            pcVar35 = &this_00->field_1E33;
            memmove(pcVar35, pcVar29, uVar30); /* compiler REP MOVS byte copy */
            uVar32 = 0;
            for (puVar18_mg7 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_1E33,'\n');
                puVar18_mg7 != nullptr;
                puVar18_mg7 = Library::MSVCRT::FUN_0072e560(puVar18_mg7,'\n')) {
              *(undefined1 *)puVar18_mg7 = 0x20;
            }
            this_00->field_1F37 = 3;
            Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_1E2F,&this_00->field_1E33);
          }
          this_00->field_21A9 = this_00->field_1E2F->count;
          bVar23 = local_18->field_0x3;
          this_00->field_21C5 = 0x143;
          this_00->field_21CD = 0x78;
          this_00->field_21A1 = bVar23 - 1;
          this_00->field_21C9 = local_2c * 0x19 + 0x41;
          pcVar12 = g_startSystem_0081176C->field_0034;
          if (pcVar12->field_00A0 != 0) {
            FUN_00710790((AnonShape_00710790_4CBB90D4 *)pcVar12);
          }
          this_00->field_21A5 = *(undefined4 *)&pcVar12->field_0x8a;
          goto LAB_005d3188;
        }
        break;
      case 3:
        this_00->field_2171 = 0x6505;
        this_00->field_2179 = local_2c + this_00->field_1F88;
        this_00->field_2191 = 0x6500;
        this_00->field_1E2F->count = 0;
        memset(&this_00->field_1E33, 0, 0x10c); /* compiler bulk-zero initialization */
        if (pAVar27->field_0x0 == '\0') {
          uVar30 = local_2c + this_00->field_1F88;
          local_5 = '\0';
          if (-1 < (int)uVar30) {
            pSVar20 = this_00->field_1F84;
            do {
              if (uVar30 < pSVar20->count) {
                element_1f84_2 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar20, uVar30);
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
              uVar30 = uVar30 - 1;
            } while (-1 < (int)uVar30);
          }
          if (local_5 != '\0') {
            local_EAX_7142 = LoadResourceString(0x1f42,g_hINSTANCE_00807618);
            uVar30 = 0xffffffff;
            do {
              pcVar29 = local_EAX_7142;
              if (uVar30 == 0) break;
              uVar30 = uVar30 - 1;
              pcVar29 = local_EAX_7142 + 1;
              cVar2 = *local_EAX_7142;
              local_EAX_7142 = pcVar29;
            } while (cVar2 != '\0');
            uVar30 = ~uVar30;
            pcVar29 = pcVar29 + -uVar30;
            pcVar35 = &this_00->field_1E33;
            memmove(pcVar35, pcVar29, uVar30); /* compiler REP MOVS byte copy */
            uVar32 = 0;
            this_00->field_1F37 = 2;
            Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_1E2F,&this_00->field_1E33);
            if (DAT_00808aaa != '\0') {
              local_EAX_7228 = LoadResourceString(0x1f46,g_hINSTANCE_00807618);
              uVar30 = 0xffffffff;
              do {
                pcVar29 = local_EAX_7228;
                if (uVar30 == 0) break;
                uVar30 = uVar30 - 1;
                pcVar29 = local_EAX_7228 + 1;
                cVar2 = *local_EAX_7228;
                local_EAX_7228 = pcVar29;
              } while (cVar2 != '\0');
              uVar30 = ~uVar30;
              pcVar29 = pcVar29 + -uVar30;
              pcVar35 = &this_00->field_1E33;
              memmove(pcVar35, pcVar29, uVar30); /* compiler REP MOVS byte copy */
              uVar32 = 0;
              this_00->field_1F37 = 3;
              Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_1E2F,&this_00->field_1E33);
            }
          }
          local_EAX_7305 = LoadResourceString(0x1f41,g_hINSTANCE_00807618);
          uVar30 = 0xffffffff;
          do {
            pcVar29 = local_EAX_7305;
            if (uVar30 == 0) break;
            uVar30 = uVar30 - 1;
            pcVar29 = local_EAX_7305 + 1;
            cVar2 = *local_EAX_7305;
            local_EAX_7305 = pcVar29;
          } while (cVar2 != '\0');
          uVar30 = ~uVar30;
          pcVar29 = pcVar29 + -uVar30;
          pcVar35 = &this_00->field_1E33;
          memmove(pcVar35, pcVar29, uVar30); /* compiler REP MOVS byte copy */
          uVar32 = 0;
          this_00->field_1F37 = 1;
          Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_1E2F,&this_00->field_1E33);
        }
        else {
          if ((this_00->field_1E26 != CASE_5) || (pAVar27->field_0x4 != '\x04')) {
            if ((DAT_0080877e != '\0') && (this_00->field_1E26 != CASE_5)) {
              local_EAX_6616 = LoadResourceString(8000,g_hINSTANCE_00807618);
              uVar30 = 0xffffffff;
              do {
                pcVar29 = local_EAX_6616;
                if (uVar30 == 0) break;
                uVar30 = uVar30 - 1;
                pcVar29 = local_EAX_6616 + 1;
                cVar2 = *local_EAX_6616;
                local_EAX_6616 = pcVar29;
              } while (cVar2 != '\0');
              uVar30 = ~uVar30;
              pcVar29 = pcVar29 + -uVar30;
              pcVar35 = &this_00->field_1E33;
              memmove(pcVar35, pcVar29, uVar30); /* compiler REP MOVS byte copy */
              uVar32 = 0;
              this_00->field_1F37 = 0;
              Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_1E2F,&this_00->field_1E33);
            }
            bVar40 = true;
            if ((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) {
              bVar40 = local_18->field_0x3 != '\x03';
            }
            if (bVar40) {
              local_EAX_6736 = LoadResourceString(0x1f42,g_hINSTANCE_00807618);
              uVar30 = 0xffffffff;
              do {
                pcVar29 = local_EAX_6736;
                if (uVar30 == 0) break;
                uVar30 = uVar30 - 1;
                pcVar29 = local_EAX_6736 + 1;
                cVar2 = *local_EAX_6736;
                local_EAX_6736 = pcVar29;
              } while (cVar2 != '\0');
              uVar30 = ~uVar30;
              pcVar29 = pcVar29 + -uVar30;
              pcVar35 = &this_00->field_1E33;
              memmove(pcVar35, pcVar29, uVar30); /* compiler REP MOVS byte copy */
              uVar32 = 0;
              this_00->field_1F37 = 2;
              Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_1E2F,&this_00->field_1E33);
            }
            local_EAX_6813 = LoadResourceString(0x1f41,g_hINSTANCE_00807618);
            uVar30 = 0xffffffff;
            do {
              pcVar29 = local_EAX_6813;
              if (uVar30 == 0) break;
              uVar30 = uVar30 - 1;
              pcVar29 = local_EAX_6813 + 1;
              cVar2 = *local_EAX_6813;
              local_EAX_6813 = pcVar29;
            } while (cVar2 != '\0');
            uVar30 = ~uVar30;
            pcVar29 = pcVar29 + -uVar30;
            pcVar35 = &this_00->field_1E33;
            memmove(pcVar35, pcVar29, uVar30); /* compiler REP MOVS byte copy */
            uVar32 = 0;
            this_00->field_1F37 = 1;
            Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_1E2F,&this_00->field_1E33);
          }
          if ((DAT_0080877e != '\0') && (this_00->field_1E26 != CASE_5)) {
            local_c = nullptr;
            pAVar21 = local_18->field_0050;
            pAVar34 = pAVar21->field_000C;
            if (0 < (int)pAVar34) {
              do {
                if (local_c < pAVar34) {
                  iVar24 = pAVar21->field_0008 * (int)local_c + pAVar21->field_001C;
                }
                else {
                  iVar24 = 0;
                }
                uVar30 = 0xffffffff;
                pcVar29 = (char *)(iVar24 + 0x40);
                do {
                  pcVar35 = pcVar29;
                  if (uVar30 == 0) break;
                  uVar30 = uVar30 - 1;
                  pcVar35 = pcVar29 + 1;
                  cVar2 = *pcVar29;
                  pcVar29 = pcVar35;
                } while (cVar2 != '\0');
                uVar30 = ~uVar30;
                pcVar29 = pcVar35 + -uVar30;
                pcVar35 = &this_00->field_1E33;
                memmove(pcVar35, pcVar29, uVar30); /* compiler REP MOVS byte copy */
                this_00->field_1F37 = 4;
                this_00->field_1F3B = local_c;
                Library::DKW::TBL::DArrayAppend
                          ((DArrayTy *)this_00->field_1E2F,&this_00->field_1E33);
                local_c = (AnonShape_005D1400_891386BF *)&local_c->field_0x1;
                pAVar21 = local_18->field_0050;
                pAVar34 = pAVar21->field_000C;
              } while ((int)local_c < (int)pAVar34);
            }
          }
        }
        pSVar7 = this_00->field_1E2F;
        uVar30 = 0;
        this_00->field_21A1 = 0;
        if (0 < (int)pSVar7->count) {
          bVar40 = pSVar7->count != 0;
          local_10 = (char *)(uint)(byte)local_18->field_0x4;
          do {
            if (bVar40) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
              puVar18 = (uint *)((int)&pSVar7->data->field_0000 + pSVar7->elementSize * uVar30);
            }
            else {
              puVar18 = nullptr;
            }
            if (((char *)puVar18[0x41] == local_10) &&
               (puVar18[0x42] == (uint)(byte)local_18->field_0x5)) {
              this_00->field_21A1 = uVar30;
              break;
            }
            uVar30 = uVar30 + 1;
            bVar40 = uVar30 < pSVar7->count;
          } while ((int)uVar30 < (int)pSVar7->count);
        }
        dVar11 = pSVar7->count;
        this_00->field_21C5 = 0x15d;
        this_00->field_21A9 = dVar11;
        this_00->field_21CD = 0x5f;
        this_00->field_21C9 = local_2c * 0x19 + 0x41;
        pcVar12 = g_startSystem_0081176C->field_0034;
        if (pcVar12->field_00A0 != 0) {
          FUN_00710790((AnonShape_00710790_4CBB90D4 *)pcVar12);
        }
        this_00->field_21A5 = *(undefined4 *)&pcVar12->field_0x8a;
        if (0 < this_00->field_21A9) goto LAB_005d3188;
        break;
      case 5:
        if (pAVar27->field_0x0 != '\0') {
          if (DAT_00808a8f == '\0') {
            if (DAT_0080877e == '\0') {
              uVar32 = (uint)DAT_0080874d;
              uVar30 = 0;
              iVar24 = this_00->field_1F88 + local_2c;
              uVar42 = 5;
              goto LAB_005d34ee;
            }
            /* ST_CALLSITE[005D3457]: CALL 0x00402068; direct=00402068 SettMapMTy::ChangePlayerTeam */
            ChangePlayerTeam(this_00,this_00->field_1F88 + local_2c,0,(uint)DAT_0080874d);
            /* ST_CALLSITE[005D3460]: CALL 0x00404a89; direct=00404A89 SettMapMTy::SendDesc */
            SendDesc(this_00,0);
          }
          else {
            uVar30 = pSVar20->count;
            uVar32 = 0;
            local_3c = 0;
            local_c = (AnonShape_005D1400_891386BF *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(0xff));
            local_10 = (char *)0x1;
            local_38 = 0;
            local_30 = (undefined1 *)uVar30;
            if (0 < (int)uVar30) {
              bVar40 = uVar30 != 0;
              do {
                if (bVar40) {
                  /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
                  pcVar29 = &this_00->field_1F84->data->field_0000 +
                            this_00->field_1F84->elementSize * uVar32;
                }
                else {
                  pcVar29 = nullptr;
                }
                if ((pcVar29 != nullptr) && ((byte)pcVar29[0x4a] < 8)) {
                  *(undefined1 *)((int)&local_3c + (uint)(byte)pcVar29[0x4a]) = 1;
                }
                uVar32 = uVar32 + 1;
                bVar40 = uVar32 < uVar30;
              } while ((int)uVar32 < (int)uVar30);
            }
            uVar32 = local_2c;
            bVar23 = 0;
            iVar24 = 0;
            do {
              if (*(char *)((int)&local_3c + iVar24) != '\0') {
                bVar23 = bVar23 + 1;
              }
              iVar24 = iVar24 + 1;
            } while (iVar24 < 8);
            bVar3 = this_00->field_211C;
joined_r0x005d3229:
            if (bVar23 < bVar3) {
              iVar24 = 0;
              do {
                if (*(char *)((int)&local_3c + iVar24) == '\0') {
                  *(undefined1 *)((int)&local_3c + iVar24) = 1;
                  bVar23 = bVar23 + 1;
                  break;
                }
                iVar24 = iVar24 + 1;
              } while (iVar24 < 8);
              goto joined_r0x005d3229;
            }
            uVar28 = 0;
            if (0 < (int)uVar30) {
              do {
                puVar25 = local_30;
                if (uVar28 < local_30) {
                  /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
                  pcVar29 = &this_00->field_1F84->data->field_0000 +
                            this_00->field_1F84->elementSize * uVar28;
                }
                else {
                  pcVar29 = nullptr;
                }
                if (pcVar29 != nullptr) {
                  if (this_00->field_1F88 + uVar32 != uVar28) {
                    if (*pcVar29 == '\0') goto LAB_005d32d3;
                    if ((pcVar29[4] != '\0') && (pcVar29[4] != '\x01')) {
                      if (local_10 == nullptr) {
                        if ((byte)local_c != pcVar29[0x4a]) {
                          local_c = (AnonShape_005D1400_891386BF *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(0xff));
                        }
                      }
                      else {
                        local_10 = nullptr;
                        local_c = (AnonShape_005D1400_891386BF *)
                                  STReplaceLowByte((uint32_t)(local_c), (uint8_t)(pcVar29[0x4a]));
                      }
                    }
                  }
                  if ((*pcVar29 != '\0') &&
                     (((pcVar29[4] == '\0' || (pcVar29[4] == '\x01')) && ((byte)pcVar29[0x4a] < 8)))
                     ) {
                    *(undefined1 *)((int)&local_3c + (uint)(byte)pcVar29[0x4a]) = 0;
                  }
                }
LAB_005d32d3:
                uVar28 = uVar28 + 1;
              } while ((int)uVar28 < (int)puVar25);
            }
            if ((byte)local_c < 8) {
              *(undefined1 *)((int)&local_3c + ((uint)local_c & 0xff)) = 0;
            }
            uVar30 = 0;
            this_00->field_2171 = 0x6501;
            this_00->field_2179 = this_00->field_1F88 + local_2c;
            this_00->field_2191 = 0x6500;
            this_00->field_21A1 = 0;
            this_00->field_1E2F->count = 0;
            local_c = (AnonShape_005D1400_891386BF *)((uint)local_c & 0xffffff00);
            puVar25 = &uStack_7d;
            local_30 = puVar25;
            do {
              iVar24 = uVar30 + 0x41;
              if (puVar25[uVar30 + 0x41] != '\0') {
                pcVar28 = LoadResourceString(0x1f4a,g_hINSTANCE_00807618);
                /* ST_CALLSITE[005D335D]: CALL dword ptr [0x0085bde8] */
                wsprintfA(&this_00->field_1E33,"%s%c",pcVar28,iVar24);
                this_00->field_1F37 = uVar30;
                Library::DKW::TBL::DArrayAppend
                          ((DArrayTy *)this_00->field_1E2F,&this_00->field_1E33);
                if ((byte)local_18->field_0x4a == uVar30) {
                  this_00->field_21A1 = (uint)local_c & 0xff;
                }
                local_c = (AnonShape_005D1400_891386BF *)
                          STReplaceLowByte((uint32_t)(local_c), (uint8_t)((byte)local_c + '\x01'));
                puVar25 = local_30;
              }
              uVar30 = uVar30 + 1;
            } while ((int)uVar30 < 8);
            SVar4 = this_00->field_1E26;
            this_00->field_21A9 = this_00->field_1E2F->count;
            if (((SVar4 == 6) || (SVar4 == 1)) || (uVar42 = 0x26b, SVar4 == 2)) {
              uVar42 = 0x2ab;
            }
            this_00->field_21C5 = uVar42;
            this_00->field_21CD = 0x46;
            this_00->field_21C9 = local_2c * 0x19 + 0x41;
            pcVar12 = g_startSystem_0081176C->field_0034;
            if (pcVar12->field_00A0 != 0) {
              FUN_00710790((AnonShape_00710790_4CBB90D4 *)pcVar12);
            }
            this_00->field_21A5 = *(undefined4 *)&pcVar12->field_0x8a;
            /* ST_CALLSITE[005D342E]: CALL dword ptr [EAX + 0x8] */
            (*this_00->field_000C->vtable->CreateObject)
                      ((SystemClassTy *)this_00->field_000C,0x100ef,nullptr,nullptr,
                       &this_00->field_0x2161,0);
          }
        }
        break;
      case 7:
        if (DAT_0080877e == '\0') {
          uVar32 = 0;
          uVar30 = (uint)(pAVar27->field_0x4f == '\0');
          iVar24 = this_00->field_1F88 + local_2c;
          uVar42 = 7;
LAB_005d34ee:
          /* ST_CALLSITE[005D34F0]: CALL 0x00402d4c; direct=00402D4C SettMapMTy::ChgPlList */
          ChgPlList(this_00,iVar24,uVar42,uVar30,uVar32);
        }
        else {
          pAVar27->field_0x4f = pAVar27->field_0x4f == '\0';
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,this_00->field_1F8C[local_2c * 8 + 7],
                       (undefined4 *)&this_00->field_0x1d);
          this_00->field_2121 = this_00->field_2121 + 1;
          /* ST_CALLSITE[005D34CC]: CALL 0x00403ad5; direct=00403AD5 SettMapMTy::SendPlList */
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
  pAVar37 = nullptr;
  pcVar29 = (char *)(temp_5fb3942e6a - 0x6a7f >> 3);
  local_30 = (undefined1 *)(temp_5fb3942e6a + 1 & 7);
  piVar13 = (message->arg1).ptr;
  local_20 = piVar13[2];
  local_1c = piVar13[3];
  pSVar20 = this_00->field_1F84;
  local_28 = *piVar13 + -0x113;
  local_24 = 0;
  if ((pSVar20 != nullptr) &&
     (uVar30 = this_00->field_1F88 + (int)pcVar29, uVar30 < pSVar20->count)) {
    /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
    pAVar37 = (AnonShape_005CBBE0_2D1CAA09 *)
              (&pSVar20->data->field_0000 + pSVar20->elementSize * uVar30);
  }
  local_10 = pcVar29;
  FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_00->field_20CC[(int)pcVar29 + 10],0,
               *piVar13 + -0x113,0,piVar13[2],piVar13[3],0xff);
  if (pAVar37 == nullptr) goto switchD_005d35aa_default;
  switch(static_cast<uint32_t>(STRawWord(local_30))) {
  case 0:
    if (((pAVar37->field_0x0 == '\0') || (pAVar37->field_0x4 != '\x02')) ||
       (*(int *)&pAVar37->field_0x6 != DAT_0080877f)) break;
    /* ST_CALLSITE[005D35F9]: CALL 0x00404c5f; direct=00404C5F MMObjTy::PaintButDib */
    MMObjTy::PaintButDib
              ((MMObjTy *)this_00,this_00->field_20CC[(int)pcVar29 + 10],&local_28,2,
               (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0x67);
    iVar24 = 2 - (uint)(pAVar37->field_0x1 != '\0');
    goto LAB_005d3bf4;
  case 0x1:
    if (pAVar37->field_0x0 != '\0') {
      local_28 = local_28 + 1;
      local_24 = local_24 + 1;
      local_20 = local_20 + -2;
      local_1c = local_1c + -2;
      /* ST_CALLSITE[005D365E]: CALL 0x00404c5f; direct=00404C5F MMObjTy::PaintButDib */
      MMObjTy::PaintButDib
                ((MMObjTy *)this_00,this_00->field_20CC[(int)pcVar29 + 10],&local_28,0,
                 (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0xffffffff);
      if (pAVar37->field_0x2 != -1) {
        switch(pAVar37->field_0x2) {
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
        FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_00->field_20CC[(int)pcVar29 + 10],0,
                     local_28 + 2,local_24 + 2,local_20 + -4,local_1c + -4,bVar23);
      }
    }
    break;
  case 0x2:
    if (pAVar37->field_0x0 == '\0') break;
    /* ST_CALLSITE[005D371A]: CALL 0x00404c5f; direct=00404C5F MMObjTy::PaintButDib */
    MMObjTy::PaintButDib
              ((MMObjTy *)this_00,this_00->field_20CC[(int)pcVar29 + 10],&local_28,2,
               (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0x67);
    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,this_00->field_20CC[(int)pcVar29 + 10],0,
                     local_28,local_24,local_20,local_1c);
    if (pAVar37->field_0x3 == '\x01') {
      pcVar29 = &CHAR_W_007ca250;
LAB_005d3780:
      uVar30 = 0xffffffff;
      do {
        pcVar35 = pcVar29;
        if (uVar30 == 0) break;
        uVar30 = uVar30 - 1;
        pcVar35 = pcVar29 + 1;
        cVar2 = *pcVar29;
        pcVar29 = pcVar35;
      } while (cVar2 != '\0');
      uVar30 = ~uVar30;
      pcVar29 = pcVar35 + -uVar30;
      pcVar35 = (char *)&DAT_0080f33a;
      for (uVar32 = uVar30 >> 2; uVar32 != 0; uVar32 = uVar32 - 1) {
        *(undefined4 *)pcVar35 = *(undefined4 *)pcVar29;
        pcVar29 = pcVar29 + 4;
        pcVar35 = pcVar35 + 4;
      }
    }
    else {
      if (pAVar37->field_0x3 != '\x02') {
        pcVar29 = &CHAR_S_007ca24c;
        goto LAB_005d3780;
      }
      uVar30 = 0xffffffff;
      pcVar29 = &CHAR_B_007ca248;
      do {
        pcVar35 = pcVar29;
        if (uVar30 == 0) break;
        uVar30 = uVar30 - 1;
        pcVar35 = pcVar29 + 1;
        cVar2 = *pcVar29;
        pcVar29 = pcVar35;
      } while (cVar2 != '\0');
      uVar30 = ~uVar30;
      pcVar29 = pcVar35 + -uVar30;
      pcVar35 = (char *)&DAT_0080f33a;
      for (uVar32 = uVar30 >> 2; uVar32 != 0; uVar32 = uVar32 - 1) {
        *(undefined4 *)pcVar35 = *(undefined4 *)pcVar29;
        pcVar29 = pcVar29 + 4;
        pcVar35 = pcVar35 + 4;
      }
    }
    for (uVar30 = uVar30 & 3; uVar30 != 0; uVar30 = uVar30 - 1) {
      *pcVar35 = *pcVar29;
      pcVar29 = pcVar29 + 1;
      pcVar35 = pcVar35 + 1;
    }
    ccFntTy::WrStr(g_startSystem_0081176C->field_0034,(char *)&DAT_0080f33a,-1,-1,2);
    pcVar29 = local_10;
    break;
  case 0x3:
    /* ST_CALLSITE[005D37E5]: CALL 0x00404c5f; direct=00404C5F MMObjTy::PaintButDib */
    MMObjTy::PaintButDib
              ((MMObjTy *)this_00,this_00->field_20CC[(int)pcVar29 + 10],&local_28,2,
               (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0x67);
    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,this_00->field_20CC[(int)pcVar29 + 10],0,
                     local_28,local_24,local_20,local_1c);
    uVar30 = 2;
    iVar43 = -1;
    iVar41 = -1;
    pcVar35 = &DAT_007c2310;
    iVar24 = local_20;
    puVar18 = (uint *)thunk_FUN_005cbbe0(this_00,pAVar37);
    goto LAB_005d38bd;
  case 0x4:
    /* ST_CALLSITE[005D3843]: CALL 0x00404c5f; direct=00404C5F MMObjTy::PaintButDib */
    MMObjTy::PaintButDib
              ((MMObjTy *)this_00,this_00->field_20CC[(int)pcVar29 + 10],&local_28,2,0x67,0x67);
    bVar23 = pAVar37->field_0x4;
    if (bVar23 < 2) break;
    if (bVar23 < 4) {
      ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,this_00->field_20CC[(int)pcVar29 + 10],0,
                       local_28,local_24,local_20,local_1c);
      uVar30 = 2;
      iVar41 = -1;
      iVar24 = -1;
      pcVar35 = (char *)thunk_FUN_00540c40(g_startSystem_0081176C->field_0034,
                                           (uint *)&pAVar37->field_0xa,(uint *)&CHAR___007c7274,
                                           local_20);
      ccFntTy::WrStr(g_startSystem_0081176C->field_0034,pcVar35,iVar24,iVar41,uVar30);
      break;
    }
    if (bVar23 != 4) break;
    pDVar9 = pAVar37->field_0050;
    if ((uint)(byte)pAVar37->field_0x5 < pDVar9->count) {
      puVar18 = DArrayAt<uint>(pDVar9, (uint)(byte)pAVar37->field_0x5);
    }
    else {
      puVar18 = nullptr;
    }
    if (puVar18 == nullptr) break;
    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,this_00->field_20CC[(int)pcVar29 + 10],0,
                     local_28,local_24,local_20,local_1c);
    uVar30 = 2;
    iVar43 = -1;
    iVar41 = -1;
    pcVar35 = &CHAR___007c7274;
    iVar24 = local_20;
LAB_005d38bd:
    pcVar35 = (char *)thunk_FUN_00540c40(g_startSystem_0081176C->field_0034,puVar18,(uint *)pcVar35,
                                         iVar24);
    ccFntTy::WrStr(g_startSystem_0081176C->field_0034,pcVar35,iVar41,iVar43,uVar30);
    break;
  case 0x5:
    if ((pAVar37->field_0x0 == '\0') ||
       /* ST_CALLSITE[005D396F]: CALL 0x00404c5f; direct=00404C5F MMObjTy::PaintButDib */
       (MMObjTy::PaintButDib
                  ((MMObjTy *)this_00,this_00->field_20CC[(int)pcVar29 + 10],&local_28,2,
                   (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0x67),
       pAVar37->field_0x4 == '\0')) break;
    if (DAT_00808a8f != '\0') {
      pcVar34_mg27 = LoadResourceString(0x1f4a,g_hINSTANCE_00807618);
      /* ST_CALLSITE[005D39AD]: CALL dword ptr [0x0085bde8] */
      wsprintfA((LPSTR)&DAT_0080f33a,"%s%c",pcVar34_mg27);
      ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,this_00->field_20CC[(int)pcVar29 + 10],0,
                       local_28,local_24,local_20,local_1c);
      ccFntTy::WrStr(g_startSystem_0081176C->field_0034,(char *)&DAT_0080f33a,-1,-1,2);
      break;
    }
    if (((DAT_0080874d == 0xff) || (bVar23 = pAVar37->field_0x2, bVar23 == 0xff)) ||
       (DAT_0080874d == bVar23)) break;
    local_10 = (char *)0xffffffff;
    local_30 = (undefined1 *)STReplaceLowByte((uint32_t)(local_30), (uint8_t)(bVar23));
    uVar30 = (uint)DAT_0080874d;
    bVar3 = g_playerRelationMatrix[uVar30][bVar23];
    if ((bVar3 == 0) && (g_playerRelationMatrix[bVar23][uVar30] == 0)) {
      uVar42 = 0xfffffffe;
    }
    else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar23][uVar30] == 0)) {
      uVar42 = 0xffffffff;
    }
    else if ((bVar3 == 0) && (g_playerRelationMatrix[bVar23][uVar30] == 1)) {
      uVar42 = 1;
    }
    else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar23][uVar30] == 1)) {
      uVar42 = 2;
    }
    else {
      uVar42 = 0;
    }
    switch(uVar42) {
    default:
      iVar24 = -1;
      break;
    case 1:
      iVar24 = 1;
      break;
    case 2:
      iVar24 = 3;
      break;
    case 0xfffffffe:
      iVar24 = 0;
      break;
    case 0xffffffff:
      iVar24 = 2;
    }
    iVar24 = iVar24 + -1;
    if (iVar24 < 0) break;
    pAVar26 = (AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_1F4B;
    goto LAB_005d3bfa;
  case 0x6:
    /* ST_CALLSITE[005D3AE8]: CALL 0x00404c5f; direct=00404C5F MMObjTy::PaintButDib */
    MMObjTy::PaintButDib
              ((MMObjTy *)this_00,this_00->field_20CC[(int)pcVar29 + 10],&local_28,2,0x67,0x67);
    if (((pAVar37->field_0x4 == '\x02') || (pAVar37->field_0x4 == '\x03')) &&
       (((DAT_0080877e != '\0' && (*(int *)&pAVar37->field_0x6 != DAT_0080877f)) ||
        ((DAT_0080877e == '\0' && (*(int *)&pAVar37->field_0x6 == DAT_0080877f)))))) {
      ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,this_00->field_20CC[(int)pcVar29 + 10],0,
                       local_28,local_24,local_20,local_1c);
      /* ST_CALLSITE[005D3B56]: CALL dword ptr [0x0085bde8] */
      wsprintfA((LPSTR)&DAT_0080f33a,"%4d");
      uVar30 = 0xffffffff;
      pcVar35 = (char *)&DAT_0080f33a;
      do {
        if (uVar30 == 0) break;
        uVar30 = uVar30 - 1;
        cVar2 = *pcVar35;
        pcVar35 = pcVar35 + 1;
      } while (cVar2 != '\0');
      if (4 < ~uVar30 - 1) {
        uVar30 = 0xffffffff;
        pcVar29 = &CHAR___007cd500;
        do {
          pcVar35 = pcVar29;
          if (uVar30 == 0) break;
          uVar30 = uVar30 - 1;
          pcVar35 = pcVar29 + 1;
          cVar2 = *pcVar29;
          pcVar29 = pcVar35;
        } while (cVar2 != '\0');
        uVar30 = ~uVar30;
        pcVar35 = pcVar35 + -uVar30;
        pcVar36 = (char *)&DAT_0080f33a;
        for (uVar32 = uVar30 >> 2; uVar32 != 0; uVar32 = uVar32 - 1) {
          *(undefined4 *)pcVar36 = *(undefined4 *)pcVar35;
          pcVar35 = pcVar35 + 4;
          pcVar36 = pcVar36 + 4;
        }
        for (uVar30 = uVar30 & 3; pcVar29 = local_10, uVar30 != 0; uVar30 = uVar30 - 1) {
          *pcVar36 = *pcVar35;
          pcVar35 = pcVar35 + 1;
          pcVar36 = pcVar36 + 1;
        }
      }
      ccFntTy::WrStr(g_startSystem_0081176C->field_0034,(char *)&DAT_0080f33a,-1,-1,2);
    }
    break;
  case 0x7:
    /* ST_CALLSITE[005D3BDB]: CALL 0x00404c5f; direct=00404C5F MMObjTy::PaintButDib */
    MMObjTy::PaintButDib
              ((MMObjTy *)this_00,this_00->field_20CC[(int)pcVar29 + 10],&local_28,2,
               (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0x67);
    if (((pAVar37->field_0x4 != '\x02') || (pAVar37->field_0x4f == '\0')) &&
       (pAVar37->field_0x4 != '\x04')) break;
    iVar24 = 0;
LAB_005d3bf4:
    pAVar26 = (AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_1F4F;
LAB_005d3bfa:
    pBVar22 = FUN_0070b3a0(pAVar26,iVar24);
    /* ST_CALLSITE[005D3C33]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_20CC[(int)pcVar29 + 10],
           (local_20 - (pBVar22->bmiHeader).biWidth) / 2 + local_28,
           (local_1c - (pBVar22->bmiHeader).biHeight) / 2 + 1 + local_24,'\x06',(byte *)pBVar22);
  }
switchD_005d35aa_default:
  FUN_006b35d0((int *)g_ddxContext_008075A8,this_00->field_20CC[(int)pcVar29]);
  if ((message->arg0).words.low == 3) {
    thunk_FUN_005b6730(this_00,9,'\x01',-1);
  }
  g_currentExceptionFrame = local_f4.previous;
  return 0;
}

