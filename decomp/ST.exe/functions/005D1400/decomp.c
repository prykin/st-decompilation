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
  STMessageId SVar5;
  MMsgTy *pMVar6;
  StartSystemTy *pSVar7;
  dword dVar8;
  ccFntTy *pcVar9;
  int *piVar10;
  code *pcVar11;
  CursorClassTy *pCVar12;
  SettMapMTy *this_00;
  undefined1 uVar13;
  DWORD DVar14;
  int iVar15;
  uint *puVar16;
  void *pvVar17;
  undefined1 *puVar18;
  DArrayTy *pDVar19;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  AnonNested_005D1400_0050_DA378AC5 *pAVar20;
  byte *pbVar21;
  byte bVar22;
  AnonShape_GLOBAL_0081175C_57F682DD *pAVar23;
  char *pcVar24;
  AnonShape_005D1400_5A9F7B11 *pAVar25;
  uint uVar26;
  char *pcVar27;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  void *unaff_EDI;
  uint uVar28;
  uint uVar29;
  char *pcVar30;
  AnonShape_005D1400_891386BF *pAVar31;
  undefined4 *puVar32;
  AnonShape_005CBBE0_2D1CAA09 *pAVar33;
  bool bVar34;
  bool bVar35;
  uint *puVar36;
  int iVar37;
  int iVar38;
  undefined4 uVar39;
  char local_680 [64];
  char local_640 [1044];
  char local_22c [64];
  undefined4 local_1ec;
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

  local_48 = this;
  DVar14 = STAppC::sub_006E51B0(this->field_0010);
  uVar28 = 0;
  this->field_0061 = DVar14;
  local_f4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_f4;
  iVar15 = Library::MSVCRT::__setjmp3(local_f4.jumpBuffer,0);
  this_00 = local_48;
  if (iVar15 != 0) {
    g_currentExceptionFrame = local_f4.previous;
    iVar37 = ReportDebugMessage("E:\\__titans\\Start\\settmobj.cpp",0x986,0,iVar15,
                                "%s","SettMapMTy::GetMessage");
    if (iVar37 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar15,0,"E:\\__titans\\Start\\settmobj.cpp",0x986);
    return 0xffff;
  }
  SettMapTy::GetMessage((SettMapTy *)local_48,message);
  StartSystemTy::ChatMessage(g_startSystem_0081176C,message);
  pCVar12 = g_cursorClass_00802A30;
  SVar5 = message->id;
  if (SVar5 < MESS_SETTMAPSTY_6505) {
    if (SVar5 == MESS_SHARED_6504) {
      uVar28 = (message->arg0).u32;
      if ((uVar28 != 0xffffffff) && (this_00->field_1F84 != (DArrayTy *)0x0)) {
        pDVar19 = this_00->field_1E2F;
        if (uVar28 < pDVar19->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar19, uVar28) (runtime stride) */
          pvVar17 = (void *)(pDVar19->elementSize * uVar28 + (int)pDVar19->data);
        }
        else {
          pvVar17 = (void *)0x0;
        }
        bVar22 = *(byte *)((int)pvVar17 + 0x104);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_c = (AnonShape_005D1400_891386BF *)CONCAT31(local_c._1_3_,bVar22);
        if (DAT_0080877e == '\0') {
          ChgPlList(this_00,message->arg1,2,(uint)bVar22,0);
        }
        else {
          ChangePlayerCiv(this_00,(message->arg1).u32,bVar22);
          SendPlList(this_00,0);
        }
      }
    }
    else if (SVar5 < MESS_SHARED_6341) {
      if (SVar5 == MESS_SETTMAPMTY_6340) {
        MMMObjTy::PaintSlBut
                  ((MMMObjTy *)this_00,
                   (AnonShape_005B6560_61F462DF *)&this_00->field_1A5B->field_055C,(int)message,0);
      }
      else if (SVar5 < MESS_CHOOSEMAPTY_6327) {
        if (SVar5 == MESS_SHARED_6326) {
          this_00->field_2208 = '\x02' - *(char *)(message->arg0).ptr;
        }
        else if (SVar5 == MESS_ID_CREATE) {
          this_00->field_2209 = this_00->field_0061;
        }
        else if (SVar5 == MESS_SHARED_0003) {
          if (this_00->field_2226 != 0) {
            FreeAndNull((void **)&this_00->field_2226);
            this_00->field_222A = 0;
          }
          if (this_00->field_222F != (DArrayTy *)0x0) {
            DArrayDestroy(this_00->field_222F);
          }
          this_00->field_222F = (DArrayTy *)0x0;
          if ((this_00->field_004D != 0x60ff) && (g_int_00811764 != (int *)0x0)) {
            if (DAT_0080877e == '\0') {
              FUN_00715360(g_int_00811764,0,'\x11',(char *)0x0,0,0,0xffffffff);
              if (this_00->field_004D != 0x6109) {
                thunk_FUN_005dac60();
              }
            }
            else if (this_00->field_004D == 0x611f) {
              FUN_00715360(g_int_00811764,0,'\x12',(char *)0x0,0,0,0xffffffff);
            }
            else {
              FUN_00715360(g_int_00811764,0,'\x10',(char *)0x0,0,0,0xffffffff);
              thunk_FUN_005dac60();
            }
          }
        }
      }
      else if (SVar5 == MESS_CHOOSEMAPTY_6327) {
        piVar10 = (message->arg0).ptr;
        sub_005B5F00(this_00,(AnonShape_006B5B10_E0D06CF1 *)this_00->field_2204,piVar10);
        iVar15 = *piVar10;
        local_10 = (char *)piVar10[5];
        ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_00->field_2204,0,
                         (iVar15 + -1) * (int)local_10,0,(int)local_10,
                         this_00->field_2204->field_0008 -
                         ((-(uint)(piVar10[1] != 1) & 0xfffffffd) + 3));
        uVar39 = 2;
        iVar38 = -1;
        iVar37 = -1;
        puVar16 = (uint *)LoadResourceString((iVar15 != 1) + 0x2422,g_module_00807618);
        ccFntTy::WrStr(g_startSystem_0081176C->field_0034,puVar16,iVar37,iVar38,uVar39);
        FUN_006b35d0((int *)PTR_008075a8,this_00->field_2200);
      }
    }
    else if (SVar5 < MESS_PRIVIDERTY_6502) {
      if (SVar5 == MESS_SHARED_6501) {
        uVar28 = (message->arg0).u32;
        if ((uVar28 != 0xffffffff) && (this_00->field_1F84 != (DArrayTy *)0x0)) {
          pDVar19 = this_00->field_1E2F;
          if (uVar28 < pDVar19->count) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar19, uVar28) (runtime stride) */
            pvVar17 = (void *)(pDVar19->elementSize * uVar28 + (int)pDVar19->data);
          }
          else {
            pvVar17 = (void *)0x0;
          }
          bVar22 = *(byte *)((int)pvVar17 + 0x104);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_c = (AnonShape_005D1400_891386BF *)CONCAT31(local_c._1_3_,bVar22);
          if (DAT_0080877e == '\0') {
            ChgPlList(this_00,message->arg1,5,1,(uint)bVar22);
          }
          else {
            ChangePlayerTeam(this_00,(message->arg1).u32,1,(uint)bVar22);
            SendPlList(this_00,0);
          }
        }
      }
      else if (SVar5 == MESS_SHARED_6341) {
        MMMObjTy::PaintSlBut
                  ((MMMObjTy *)this_00,
                   (AnonShape_005B6560_61F462DF *)&this_00->field_1A5B->field_05ED,(int)message,0);
      }
      else if ((SVar5 == MESS_SHARED_64FF) && (DAT_0080877e != '\0')) {
        FUN_00715360(g_int_00811764,0,' ',(char *)&this_00->field_1F53,0xd,1,0xffffffff);
      }
    }
    else if (((SVar5 == MESS_PRIVIDERTY_6502) &&
             (uVar28 = (message->arg0).u32, uVar28 != 0xffffffff)) &&
            (this_00->field_1F84 != (DArrayTy *)0x0)) {
      pDVar19 = this_00->field_1E2F;
      if (uVar28 < pDVar19->count) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar19, uVar28) (runtime stride) */
        pvVar17 = (void *)(pDVar19->elementSize * uVar28 + (int)pDVar19->data);
      }
      else {
        pvVar17 = (void *)0x0;
      }
      bVar22 = *(byte *)((int)pvVar17 + 0x104);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_c = (AnonShape_005D1400_891386BF *)CONCAT31(local_c._1_3_,bVar22);
      if (DAT_0080877e == '\0') {
        ChgPlList(this_00,message->arg1,1,(uint)bVar22,0);
      }
      else {
        ChangePlayerColor(this_00,(message->arg1).u32,bVar22);
        SendPlList(this_00,0);
      }
    }
    goto switchD_005d1877_caseD_6507;
  }
  if (MESS_SETTMAPMTY_654B < SVar5) {
    if (SVar5 < 0x694b) {
      if (SVar5 == MESS_FSGSTY_694A) {
        pDVar19 = this_00->field_1F84;
        local_34 = 0x1010101;
        bVar35 = false;
        local_30 = (undefined1 *)0x1010101;
        local_5 = '\0';
        local_11 = 0;
        if (pDVar19 != (DArrayTy *)0x0) {
          if (DAT_0080877e == '\0') {
LAB_005d1b5a:
            if (g_cursorClass_00802A30 != (CursorClassTy *)0x0) {
              iVar15 = g_cursorClass_00802A30->field_00C9;
              iVar37 = g_cursorClass_00802A30->field_00C5;
              g_cursorClass_00802A30->field_0493 = 5;
              pCVar12->field_0494 = 0xffff;
              CursorClassTy::SetGCType(pCVar12,CASE_0,iVar37,iVar15);
              CursorClassTy::DrawSprite(pCVar12,pCVar12->field_00C5,pCVar12->field_00C9);
              pCVar12->field_00D2 = 0;
              pCVar12->field_04DF = -1;
            }
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            DAT_008087c4._2_1_ = '\0';
            DAT_0080874f = 0;
            memset((void *)((int)&DAT_008087c4 + 3), 0, 0x288); /* compiler bulk-zero initialization */
            puVar18 = &DAT_008087e9;
            do {
              puVar18[-1] = 0;
              *puVar18 = 0xff;
              puVar18 = puVar18 + 0x51;
            } while ((int)puVar18 < 0x808a71);
            pDVar19 = this_00->field_1F84;
            uVar29 = 0;
            uVar28 = pDVar19->count;
            if (0 < (int)uVar28) {
              bVar35 = uVar28 != 0;
              do {
                if (bVar35) {
                  /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar19, uVar29) (runtime stride) */
                  pcVar27 = (char *)(pDVar19->elementSize * uVar29 + (int)pDVar19->data);
                }
                else {
                  pcVar27 = (char *)0x0;
                }
                if (((pcVar27 != (char *)0x0) && (*pcVar27 != '\0')) && (pcVar27[2] != 0xff)) {
                  *(undefined1 *)((int)&local_34 + (uint)(byte)pcVar27[2]) = 0;
                }
                uVar29 = uVar29 + 1;
                bVar35 = uVar29 < uVar28;
              } while ((int)uVar29 < (int)uVar28);
            }
            local_18 = (AnonShape_005D1400_5A9F7B11 *)0x0;
            if (0 < (int)uVar28) {
              bVar35 = uVar28 != 0;
              do {
                if (bVar35) {
                  /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar19, (int)local_18) (runtime stride) */
                  pcVar27 = (char *)(pDVar19->elementSize * (int)local_18 + (int)pDVar19->data);
                }
                else {
                  pcVar27 = (char *)0x0;
                }
                if (((pcVar27 != (char *)0x0) && (pcVar27[4] != '\0')) &&
                   ((pcVar27[4] != '\x01' ||
                    ((this_00->field_1E26 == CASE_5 || (this_00->field_1E26 == CASE_F)))))) {
                  iVar15 = *(int *)(pcVar27 + 0x50);
                  if ((uint)(byte)pcVar27[5] < *(uint *)(iVar15 + 0xc)) {
                    local_c = (AnonShape_005D1400_891386BF *)
                              (*(int *)(iVar15 + 8) * (uint)(byte)pcVar27[5] +
                              *(int *)(iVar15 + 0x1c));
                  }
                  else {
                    local_c = (AnonShape_005D1400_891386BF *)0x0;
                  }
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  DAT_008087c4._2_1_ = DAT_008087c4._2_1_ + '\x01';
                  if (pcVar27[2] == -1) {
                    iVar15 = 0;
                    do {
                      if (*(char *)((int)&local_34 + iVar15) != '\0') {
                        pcVar27[2] = (char)iVar15;
                        *(undefined1 *)((int)&local_34 + iVar15) = 0;
                        break;
                      }
                      iVar15 = iVar15 + 1;
                    } while (iVar15 < 8);
                  }
                  (&DAT_008087e9)[(uint)(byte)pcVar27[2] * 0x51] = pcVar27[2];
                  puVar18 = &local_18->field_0x1;
                  (&DAT_008087e8)[(uint)(byte)pcVar27[2] * 0x51] = pcVar27[3];
                  pDVar19 = this_00->field_1F84;
                  bVar35 = puVar18 < (undefined1 *)pDVar19->count;
                  if ((int)puVar18 < (int)pDVar19->count) {
                    do {
                      if (bVar35) {
                        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar19, (int)puVar18) (runtime stride) */
                        pcVar24 = (char *)(pDVar19->elementSize * (int)puVar18 + (int)pDVar19->data)
                        ;
                      }
                      else {
                        pcVar24 = (char *)0x0;
                      }
                      if (pcVar24 != (char *)0x0) {
                        if (*pcVar24 != '\0') break;
                        pcVar24[2] = pcVar27[2];
                      }
                      pDVar19 = this_00->field_1F84;
                      puVar18 = puVar18 + 1;
                      bVar35 = puVar18 < (undefined1 *)pDVar19->count;
                    } while ((int)puVar18 < (int)pDVar19->count);
                  }
                  uVar28 = 0xffffffff;
                  pcVar24 = &DAT_008016a0;
                  do {
                    pcVar30 = pcVar24;
                    if (uVar28 == 0) break;
                    uVar28 = uVar28 - 1;
                    pcVar30 = pcVar24 + 1;
                    cVar2 = *pcVar24;
                    pcVar24 = pcVar30;
                  } while (cVar2 != '\0');
                  uVar28 = ~uVar28;
                  local_10 = &DAT_008087c8 + (uint)(byte)pcVar27[2] * 0x51;
                  pcVar24 = pcVar30 + -uVar28;
                  pcVar30 = &DAT_008087c8 + (uint)(byte)pcVar27[2] * 0x51;
                  for (uVar29 = uVar28 >> 2; uVar29 != 0; uVar29 = uVar29 - 1) {
                    *(undefined4 *)pcVar30 = *(undefined4 *)pcVar24;
                    pcVar24 = pcVar24 + 4;
                    pcVar30 = pcVar30 + 4;
                  }
                  for (uVar28 = uVar28 & 3; uVar28 != 0; uVar28 = uVar28 - 1) {
                    *pcVar30 = *pcVar24;
                    pcVar24 = pcVar24 + 1;
                    pcVar30 = pcVar30 + 1;
                  }
                  cVar2 = pcVar27[4];
                  if (cVar2 == '\x02') {
                    if (*pcVar27 != '\0') {
                      *(undefined1 *)((int)&DAT_008087c4 + (uint)(byte)pcVar27[2] * 0x51 + 3) = 0;
                    }
                    if (DAT_0080877f == *(int *)(pcVar27 + 6)) {
                      DAT_0080874d = pcVar27[2];
                      DAT_0080874e = pcVar27[3];
                    }
                  }
                  else if (cVar2 == '\x03') {
                    if (DAT_0080877f == *(int *)(pcVar27 + 6)) {
                      DAT_0080874d = pcVar27[2];
                      DAT_0080874e = pcVar27[3];
                      DAT_0080874f = 1;
                    }
                  }
                  else if (cVar2 == '\x04') {
                    *(undefined1 *)((int)&DAT_008087c4 + (uint)(byte)pcVar27[2] * 0x51 + 3) = 1;
                    if (local_c == (AnonShape_005D1400_891386BF *)0x0) {
                      uVar28 = 0xffffffff;
                      pcVar24 = &DAT_008016a0;
                      do {
                        pcVar30 = pcVar24;
                        if (uVar28 == 0) break;
                        uVar28 = uVar28 - 1;
                        pcVar30 = pcVar24 + 1;
                        cVar2 = *pcVar24;
                        pcVar24 = pcVar30;
                      } while (cVar2 != '\0');
                      uVar28 = ~uVar28;
                      local_10 = &DAT_008087c8 + (uint)(byte)pcVar27[2] * 0x51;
                      pcVar24 = pcVar30 + -uVar28;
                      pcVar30 = &DAT_008087c8 + (uint)(byte)pcVar27[2] * 0x51;
                      for (uVar29 = uVar28 >> 2; uVar29 != 0; uVar29 = uVar29 - 1) {
                        *(undefined4 *)pcVar30 = *(undefined4 *)pcVar24;
                        pcVar24 = pcVar24 + 4;
                        pcVar30 = pcVar30 + 4;
                      }
                      for (uVar28 = uVar28 & 3; uVar28 != 0; uVar28 = uVar28 - 1) {
                        *pcVar30 = *pcVar24;
                        pcVar24 = pcVar24 + 1;
                        pcVar30 = pcVar30 + 1;
                      }
                    }
                    else {
                      uVar28 = 0xffffffff;
                      pcVar24 = &local_c->field_0x4c;
                      do {
                        pcVar30 = pcVar24;
                        if (uVar28 == 0) break;
                        uVar28 = uVar28 - 1;
                        pcVar30 = pcVar24 + 1;
                        cVar2 = *pcVar24;
                        pcVar24 = pcVar30;
                      } while (cVar2 != '\0');
                      uVar28 = ~uVar28;
                      local_10 = &DAT_008087c8 + (uint)(byte)pcVar27[2] * 0x51;
                      pcVar24 = pcVar30 + -uVar28;
                      pcVar30 = &DAT_008087c8 + (uint)(byte)pcVar27[2] * 0x51;
                      for (uVar29 = uVar28 >> 2; uVar29 != 0; uVar29 = uVar29 - 1) {
                        *(undefined4 *)pcVar30 = *(undefined4 *)pcVar24;
                        pcVar24 = pcVar24 + 4;
                        pcVar30 = pcVar30 + 4;
                      }
                      for (uVar28 = uVar28 & 3; uVar28 != 0; uVar28 = uVar28 - 1) {
                        *pcVar30 = *pcVar24;
                        pcVar24 = pcVar24 + 1;
                        pcVar30 = pcVar30 + 1;
                      }
                    }
                  }
                  (&DAT_008087ea)[(uint)(byte)pcVar27[2] * 0x51] = pcVar27[0x4a];
                  *(undefined4 *)((int)&DAT_008087eb + (uint)(byte)pcVar27[2] * 0x51) =
                       *(undefined4 *)(pcVar27 + 0x54);
                  *(undefined4 *)((int)&DAT_008087ef + (uint)(byte)pcVar27[2] * 0x51) =
                       *(undefined4 *)(pcVar27 + 0x58);
                  *(undefined4 *)((int)&DAT_008087f3 + (uint)(byte)pcVar27[2] * 0x51) =
                       *(undefined4 *)(pcVar27 + 0x5c);
                }
                pDVar19 = this_00->field_1F84;
                local_18 = (AnonShape_005D1400_5A9F7B11 *)&local_18->field_0x1;
                bVar35 = local_18 < (undefined1 *)pDVar19->count;
              } while ((int)local_18 < (int)pDVar19->count);
            }
            STAppC::sub_0056EE90((STAppC *)&DAT_00807620);
            pCVar12 = g_cursorClass_00802A30;
            if ((this_00->field_1E26 == CASE_7) || (this_00->field_1E26 == 0xe)) {
              if ((this_00->field_1F47 != 0) || ((message->arg0).u32 != 0)) {
                uVar28 = 0xffffffff;
                pcVar27 = &DAT_00853de4;
                do {
                  pcVar24 = pcVar27;
                  if (uVar28 == 0) break;
                  uVar28 = uVar28 - 1;
                  pcVar24 = pcVar27 + 1;
                  cVar2 = *pcVar27;
                  pcVar27 = pcVar24;
                } while (cVar2 != '\0');
                uVar28 = ~uVar28;
                pcVar27 = pcVar24 + -uVar28;
                pcVar24 = &DAT_0080ed16;
                for (uVar29 = uVar28 >> 2; uVar29 != 0; uVar29 = uVar29 - 1) {
                  *(undefined4 *)pcVar24 = *(undefined4 *)pcVar27;
                  pcVar27 = pcVar27 + 4;
                  pcVar24 = pcVar24 + 4;
                }
                for (uVar28 = uVar28 & 3; uVar28 != 0; uVar28 = uVar28 - 1) {
                  *pcVar24 = *pcVar27;
                  pcVar27 = pcVar27 + 1;
                  pcVar24 = pcVar24 + 1;
                }
                goto LAB_005d2018;
              }
              if ((DAT_0080877e != '\0') && (this_00->field_1A5B->field_02E6 != (MMsgTy *)0x0)) {
                if (g_cursorClass_00802A30 != (CursorClassTy *)0x0) {
                  iVar15 = g_cursorClass_00802A30->field_00C9;
                  iVar37 = g_cursorClass_00802A30->field_00C5;
                  g_cursorClass_00802A30->field_0493 = 1;
                  pCVar12->field_0494 = 0xffff;
                  CursorClassTy::SetGCType(pCVar12,CASE_0,iVar37,iVar15);
                  CursorClassTy::DrawSprite(pCVar12,pCVar12->field_00C5,pCVar12->field_00C9);
                  pCVar12->field_00D2 = 0;
                  pCVar12->field_04DF = -1;
                }
                pSVar7 = this_00->field_1A5B;
                memset(local_90, 0, 0x20); /* compiler bulk-zero initialization */
                iVar15 = 0;
                memset(local_b0, 0, 0x20); /* compiler bulk-zero initialization */
                local_b0[2] = this_00->field_0008;
                local_90[3] = 2;
                local_b0[3] = 2;
                local_80 = 0x694a;
                local_7c = 1;
                local_b0[4] = 0x693f;
                local_90[2] = local_b0[2];
                iVar15 = MMsgTy::SetMessage(pSVar7->field_02E6,0x251f,'\x01',local_90,local_b0,
                                            (undefined4 *)0x0,0,0);
                if (iVar15 != 0) {
                  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                  (*(code *)this_00->field_0000->field_0024)();
                }
              }
            }
            else {
LAB_005d2018:
              uVar28 = 0xffffffff;
              local_5 = '\x01';
              pcVar27 = &DAT_0080ed16;
              do {
                pcVar24 = pcVar27;
                if (uVar28 == 0) break;
                uVar28 = uVar28 - 1;
                pcVar24 = pcVar27 + 1;
                cVar2 = *pcVar27;
                pcVar27 = pcVar24;
              } while (cVar2 != '\0');
              uVar28 = ~uVar28;
              pcVar27 = pcVar24 + -uVar28;
              pcVar24 = (char *)&DAT_0080ee1a;
              for (uVar29 = uVar28 >> 2; uVar29 != 0; uVar29 = uVar29 - 1) {
                *(undefined4 *)pcVar24 = *(undefined4 *)pcVar27;
                pcVar27 = pcVar27 + 4;
                pcVar24 = pcVar24 + 4;
              }
              for (uVar28 = uVar28 & 3; uVar28 != 0; uVar28 = uVar28 - 1) {
                *pcVar24 = *pcVar27;
                pcVar27 = pcVar27 + 1;
                pcVar24 = pcVar24 + 1;
              }
              uVar28 = 0xffffffff;
              pcVar27 = &DAT_00807680;
              do {
                if (uVar28 == 0) break;
                uVar28 = uVar28 - 1;
                cVar2 = *pcVar27;
                pcVar27 = pcVar27 + 1;
              } while (cVar2 != '\0');
              uVar29 = 0xffffffff;
              pcVar27 = (char *)((int)&DAT_0080ed12 + ~uVar28 + 3);
              do {
                pcVar24 = pcVar27;
                if (uVar29 == 0) break;
                uVar29 = uVar29 - 1;
                pcVar24 = pcVar27 + 1;
                cVar2 = *pcVar27;
                pcVar27 = pcVar24;
              } while (cVar2 != '\0');
              uVar29 = ~uVar29;
              pcVar27 = pcVar24 + -uVar29;
              pcVar24 = &DAT_0080ef1e;
              for (uVar28 = uVar29 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
                *(undefined4 *)pcVar24 = *(undefined4 *)pcVar27;
                pcVar27 = pcVar27 + 4;
                pcVar24 = pcVar24 + 4;
              }
              for (uVar29 = uVar29 & 3; uVar29 != 0; uVar29 = uVar29 - 1) {
                *pcVar24 = *pcVar27;
                pcVar27 = pcVar27 + 1;
                pcVar24 = pcVar24 + 1;
              }
            }
            if (local_5 != '\0') {
              DAT_008087a0 = this_00->field_1E26;
              DAT_0080879c = 0;
              if (DAT_0080877e == '\0') {
                memset(&DAT_00808ab0, 0, 0xea0); /* compiler bulk-zero initialization */
                DAT_00808aaf = 0;
                pDVar19 = this_00->field_1F84;
                local_18 = (AnonShape_005D1400_5A9F7B11 *)0x0;
                if (0 < (int)pDVar19->count) {
                  bVar35 = pDVar19->count != 0;
                  do {
                    if (bVar35) {
                      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar19, (int)local_18) (runtime stride) */
                      puVar18 = (undefined1 *)
                                (pDVar19->elementSize * (int)local_18 + (int)pDVar19->data);
                    }
                    else {
                      puVar18 = (undefined1 *)0x0;
                    }
                    if (puVar18 != (undefined1 *)0x0) {
                      cVar2 = puVar18[4];
                      local_5 = cVar2;
                      if ((cVar2 != '\x01') && (cVar2 != '\0')) {
                        if (cVar2 == '\x04') {
                          iVar15 = *(int *)(puVar18 + 0x50);
                          if ((uint)(byte)puVar18[5] < *(uint *)(iVar15 + 0xc)) {
                            pcVar27 = (char *)(*(int *)(iVar15 + 8) * (uint)(byte)puVar18[5] +
                                              *(int *)(iVar15 + 0x1c));
                          }
                          else {
                            pcVar27 = (char *)0x0;
                          }
                          if (pcVar27 != (char *)0x0) {
                            uVar28 = 0xffffffff;
                            do {
                              pcVar24 = pcVar27;
                              if (uVar28 == 0) break;
                              uVar28 = uVar28 - 1;
                              pcVar24 = pcVar27 + 1;
                              cVar1 = *pcVar27;
                              pcVar27 = pcVar24;
                            } while (cVar1 != '\0');
                            uVar28 = ~uVar28;
                            pcVar24 = pcVar24 + -uVar28;
                            local_10 = local_22c;
                            goto LAB_005d24b8;
                          }
                        }
                        else {
                          uVar28 = 0xffffffff;
                          pcVar27 = puVar18 + 10;
                          do {
                            pcVar24 = pcVar27;
                            if (uVar28 == 0) break;
                            uVar28 = uVar28 - 1;
                            pcVar24 = pcVar27 + 1;
                            cVar1 = *pcVar27;
                            pcVar27 = pcVar24;
                          } while (cVar1 != '\0');
                          uVar28 = ~uVar28;
                          pcVar24 = pcVar24 + -uVar28;
                          local_10 = local_22c;
LAB_005d24b8:
                          pcVar27 = local_22c;
                          for (uVar29 = uVar28 >> 2; uVar29 != 0; uVar29 = uVar29 - 1) {
                            *(undefined4 *)pcVar27 = *(undefined4 *)pcVar24;
                            pcVar24 = pcVar24 + 4;
                            pcVar27 = pcVar27 + 4;
                          }
                          for (uVar28 = uVar28 & 3; local_10 = local_22c, uVar28 != 0;
                              uVar28 = uVar28 - 1) {
                            *pcVar27 = *pcVar24;
                            pcVar24 = pcVar24 + 1;
                            pcVar27 = pcVar27 + 1;
                          }
                        }
                        local_1ec = *(undefined4 *)(puVar18 + 6);
                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                        local_1e8._0_2_ = CONCAT11(*puVar18,puVar18[2]);
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
                        pcVar27 = local_22c;
                        puVar32 = &DAT_00808ab0 + (uint)DAT_00808aaf * 0x27;
                        for (iVar15 = 0x27; iVar15 != 0; iVar15 = iVar15 + -1) {
                          *puVar32 = *(undefined4 *)pcVar27;
                          pcVar27 = pcVar27 + 4;
                          puVar32 = puVar32 + 1;
                        }
                        if ((byte)local_1e8 < 8) {
                          iVar37 = 0;
                          iVar15 = (local_1e8 & 0xff) * 0x51;
                          do {
                            if ((&DAT_00808800)[iVar37 + iVar15] == '\0') {
                              (&DAT_00808800)[iVar37 + iVar15] = DAT_00808aaf;
                              break;
                            }
                            iVar37 = iVar37 + 1;
                          } while (iVar37 < 0x18);
                        }
                        DAT_00808aaf = DAT_00808aaf + 1;
                      }
                    }
                    pDVar19 = this_00->field_1F84;
                    local_18 = (AnonShape_005D1400_5A9F7B11 *)&local_18->field_0x1;
                    bVar35 = local_18 < (undefined1 *)pDVar19->count;
                  } while ((int)local_18 < (int)pDVar19->count);
                }
                RunGame(this_00);
                FUN_006b6500(g_int_00811764,1);
                FUN_00715360(g_int_00811764,1,'.',(char *)0x0,0,0,0xffffffff);
                FUN_006b6500(g_int_00811764,DAT_0080733c);
              }
              else {
                FUN_006b6500(g_int_00811764,1);
                memset((void *)local_70, 0, 0x26); /* compiler bulk-zero initialization */
                iVar15 = 0;
                local_64 = DAT_0080733b;
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_70._3_4_ = DAT_008087be;
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_70._0_2_ = (undefined2)((uint)DAT_00807dd5 >> 0x10);
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
                pDVar19 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0x28,4,10);
                this_00->field_222F = pDVar19;
                if (g_dArray_0080C4FE != (DArrayTy *)0x0) {
                  DArrayDestroy(g_dArray_0080C4FE);
                }
                g_dArray_0080C4FE = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0x28,4,10);
                memset(&DAT_00808ab0, 0, 0xea0); /* compiler bulk-zero initialization */
                DAT_00808aaf = 0;
                pDVar19 = this_00->field_1F84;
                local_18 = (AnonShape_005D1400_5A9F7B11 *)0x0;
                if (0 < (int)pDVar19->count) {
                  bVar35 = pDVar19->count != 0;
                  do {
                    if (bVar35) {
                      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar19, (int)local_18) (runtime stride) */
                      pAVar31 = (AnonShape_005D1400_891386BF *)
                                (pDVar19->elementSize * (int)local_18 + (int)pDVar19->data);
                    }
                    else {
                      pAVar31 = (AnonShape_005D1400_891386BF *)0x0;
                    }
                    local_c = pAVar31;
                    if (pAVar31 != (AnonShape_005D1400_891386BF *)0x0) {
                      if (((pAVar31->field_0x4 == '\x02') || (pAVar31->field_0x4 == '\x03')) &&
                         (DAT_0080877f != pAVar31->field_0006)) {
                        Library::DKW::TBL::FUN_006ae1c0
                                  (&this_00->field_222F->flags,&pAVar31->field_0006);
                        Library::DKW::TBL::FUN_006ae1c0
                                  (&g_dArray_0080C4FE->flags,&pAVar31->field_0006);
                      }
                      cVar2 = pAVar31->field_0x4;
                      local_5 = cVar2;
                      if ((cVar2 != '\x01') && (cVar2 != '\0')) {
                        uVar28 = 0xffffffff;
                        local_10 = local_190;
                        pcVar27 = &local_c->field_0xa;
                        do {
                          pcVar24 = pcVar27;
                          if (uVar28 == 0) break;
                          uVar28 = uVar28 - 1;
                          pcVar24 = pcVar27 + 1;
                          cVar1 = *pcVar27;
                          pcVar27 = pcVar24;
                        } while (cVar1 != '\0');
                        uVar28 = ~uVar28;
                        pcVar27 = pcVar24 + -uVar28;
                        pcVar24 = local_190;
                        for (uVar29 = uVar28 >> 2; uVar29 != 0; uVar29 = uVar29 - 1) {
                          *(undefined4 *)pcVar24 = *(undefined4 *)pcVar27;
                          pcVar27 = pcVar27 + 4;
                          pcVar24 = pcVar24 + 4;
                        }
                        for (uVar28 = uVar28 & 3; uVar28 != 0; uVar28 = uVar28 - 1) {
                          *pcVar24 = *pcVar27;
                          pcVar27 = pcVar27 + 1;
                          pcVar24 = pcVar24 + 1;
                        }
                        if (cVar2 == '\x04') {
                          iVar15 = local_c->field_0050;
                          if ((uint)(byte)local_c->field_0x5 < *(uint *)(iVar15 + 0xc)) {
                            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                            pcVar27 = (char *)(*(int *)(iVar15 + 8) * (uint)(byte)local_c->field_0x5
                                              + *(int *)(iVar15 + 0x1c));
                          }
                          else {
                            pcVar27 = (char *)0x0;
                          }
                          if (pcVar27 != (char *)0x0) {
                            uVar28 = 0xffffffff;
                            do {
                              pcVar24 = pcVar27;
                              if (uVar28 == 0) break;
                              uVar28 = uVar28 - 1;
                              pcVar24 = pcVar27 + 1;
                              cVar1 = *pcVar27;
                              pcVar27 = pcVar24;
                            } while (cVar1 != '\0');
                            uVar28 = ~uVar28;
                            pcVar24 = pcVar24 + -uVar28;
                            local_10 = local_190;
                            goto LAB_005d22dd;
                          }
                        }
                        else {
                          uVar28 = 0xffffffff;
                          pcVar27 = &local_c->field_0xa;
                          do {
                            pcVar24 = pcVar27;
                            if (uVar28 == 0) break;
                            uVar28 = uVar28 - 1;
                            pcVar24 = pcVar27 + 1;
                            cVar1 = *pcVar27;
                            pcVar27 = pcVar24;
                          } while (cVar1 != '\0');
                          uVar28 = ~uVar28;
                          pcVar24 = pcVar24 + -uVar28;
                          local_10 = local_190;
LAB_005d22dd:
                          pcVar27 = local_190;
                          for (uVar29 = uVar28 >> 2; uVar29 != 0; uVar29 = uVar29 - 1) {
                            *(undefined4 *)pcVar27 = *(undefined4 *)pcVar24;
                            pcVar24 = pcVar24 + 4;
                            pcVar27 = pcVar27 + 4;
                          }
                          for (uVar28 = uVar28 & 3; local_10 = local_190, uVar28 != 0;
                              uVar28 = uVar28 - 1) {
                            *pcVar27 = *pcVar24;
                            pcVar24 = pcVar24 + 1;
                            pcVar27 = pcVar27 + 1;
                          }
                        }
                        local_150 = local_c->field_0006;
                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                        local_14c._0_2_ = CONCAT11(*(undefined1 *)local_c,local_c->field_0x2);
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
                        pcVar27 = local_190;
                        puVar32 = &DAT_00808ab0 + (uint)DAT_00808aaf * 0x27;
                        for (iVar15 = 0x27; iVar15 != 0; iVar15 = iVar15 + -1) {
                          *puVar32 = *(undefined4 *)pcVar27;
                          pcVar27 = pcVar27 + 4;
                          puVar32 = puVar32 + 1;
                        }
                        if ((byte)local_14c < 8) {
                          iVar37 = 0;
                          iVar15 = (local_14c & 0xff) * 0x51;
                          do {
                            if ((&DAT_00808800)[iVar37 + iVar15] == '\0') {
                              (&DAT_00808800)[iVar37 + iVar15] = DAT_00808aaf;
                              break;
                            }
                            iVar37 = iVar37 + 1;
                          } while (iVar37 < 0x18);
                        }
                        DAT_00808aaf = DAT_00808aaf + 1;
                      }
                    }
                    pDVar19 = this_00->field_1F84;
                    local_18 = (AnonShape_005D1400_5A9F7B11 *)&local_18->field_0x1;
                    bVar35 = local_18 < (undefined1 *)pDVar19->count;
                  } while ((int)local_18 < (int)pDVar19->count);
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
            if (0 < (int)pDVar19->count) {
              bVar34 = pDVar19->count != 0;
              do {
                if (bVar34) {
                  /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar19, uVar28) (runtime stride) */
                  pvVar17 = (void *)(pDVar19->elementSize * uVar28 + (int)pDVar19->data);
                }
                else {
                  pvVar17 = (void *)0x0;
                }
                if ((pvVar17 != (void *)0x0) &&
                   (((*(char *)((int)pvVar17 + 4) == '\x02' ||
                     (*(char *)((int)pvVar17 + 4) == '\x03')) &&
                    (*(char *)((int)pvVar17 + 0x4f) == '\0')))) {
                  bVar35 = true;
                  break;
                }
                uVar28 = uVar28 + 1;
                bVar34 = uVar28 < pDVar19->count;
              } while ((int)uVar28 < (int)pDVar19->count);
            }
            if (bVar35) {
              pMVar6 = this_00->field_1A5B->field_02E6;
              if (pMVar6 != (MMsgTy *)0x0) {
                MMsgTy::SetMessage(pMVar6,0x2527,'\0',(undefined4 *)0x0,(undefined4 *)0x0,
                                   (undefined4 *)0x0,0,0);
              }
            }
            else {
              uVar28 = 0;
              if (0 < (int)pDVar19->count) {
                bVar35 = pDVar19->count != 0;
                do {
                  if (bVar35) {
                    /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar19, uVar28) (runtime stride) */
                    pcVar27 = (char *)(pDVar19->elementSize * uVar28 + (int)pDVar19->data);
                  }
                  else {
                    pcVar27 = (char *)0x0;
                  }
                  if ((pcVar27 != (char *)0x0) && (*pcVar27 != '\0')) {
                    cVar2 = pcVar27[4];
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
                  uVar28 = uVar28 + 1;
                  bVar35 = uVar28 < pDVar19->count;
                } while ((int)uVar28 < (int)pDVar19->count);
              }
              if (1 < local_11) goto LAB_005d1b5a;
              pMVar6 = this_00->field_1A5B->field_02E6;
              if (pMVar6 != (MMsgTy *)0x0) {
                MMsgTy::SetMessage(pMVar6,0x2528,'\0',(undefined4 *)0x0,(undefined4 *)0x0,
                                   (undefined4 *)0x0,0,0);
              }
            }
          }
        }
      }
      else if (SVar5 == MESS_SETTMAPMTY_654C) {
        if (DAT_0080877e != '\0') {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          CheckPlList(this_00,unaff_EDI);
          sub_005D1380(this_00);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (*(code *)this_00->field_0000->field_002C)();
          SettMapTy::PaintSC((SettMapTy *)this_00);
          goto switchD_005d1877_caseD_6549;
        }
      }
      else if (SVar5 == MESS_SETTMAPTY_654D) goto switchD_005d1877_caseD_6548;
    }
    else if (SVar5 == MESS_SHARED_C0A2) {
      iVar15 = thunk_FUN_005ddb40((int)this_00->field_1A5B);
      if (iVar15 == 0) {
        if (DAT_008067a0 != '\0') {
          pDVar19 = this_00->field_1A5B->field_0686;
          if ((int)pDVar19->elementSize < 1) {
            pcVar27 = (char *)0x0;
          }
          else {
            pcVar27 = *(char **)pDVar19->growCapacity;
          }
          bVar35 = thunk_FUN_005717e0(pcVar27);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          if (CONCAT31(extraout_var,bVar35) != 0) {
            pDVar19 = this_00->field_1A5B->field_0686;
            if ((int)pDVar19->elementSize < 1) {
              CFsgsConnection::SendChatMessage((CFsgsConnection *)&DAT_00802a90,(char *)0x0);
            }
            else {
              CFsgsConnection::SendChatMessage
                        ((CFsgsConnection *)&DAT_00802a90,*(char **)pDVar19->growCapacity);
            }
            goto LAB_005d28da;
          }
        }
        pcVar27 = local_680;
        for (iVar15 = 0x114; iVar15 != 0; iVar15 = iVar15 + -1) {
          pcVar27[0] = '\0';
          pcVar27[1] = '\0';
          pcVar27[2] = '\0';
          pcVar27[3] = '\0';
          pcVar27 = pcVar27 + 4;
        }
        *pcVar27 = '\0';
        pcVar27 = &DAT_00807e1d;
        if (DAT_008067a0 == '\0') {
          pcVar27 = (char *)&DAT_00807ddd;
        }
        uVar28 = 0xffffffff;
        do {
          pcVar24 = pcVar27;
          if (uVar28 == 0) break;
          uVar28 = uVar28 - 1;
          pcVar24 = pcVar27 + 1;
          cVar2 = *pcVar27;
          pcVar27 = pcVar24;
        } while (cVar2 != '\0');
        uVar28 = ~uVar28;
        pSVar7 = this_00->field_1A5B;
        pcVar27 = pcVar24 + -uVar28;
        pcVar24 = local_680;
        for (uVar29 = uVar28 >> 2; uVar29 != 0; uVar29 = uVar29 - 1) {
          *(undefined4 *)pcVar24 = *(undefined4 *)pcVar27;
          pcVar27 = pcVar27 + 4;
          pcVar24 = pcVar24 + 4;
        }
        for (uVar28 = uVar28 & 3; uVar28 != 0; uVar28 = uVar28 - 1) {
          *pcVar24 = *pcVar27;
          pcVar27 = pcVar27 + 1;
          pcVar24 = pcVar24 + 1;
        }
        pDVar19 = pSVar7->field_0686;
        if ((int)pDVar19->elementSize < 1) {
          pcVar27 = (char *)0x0;
        }
        else {
          pcVar27 = *(char **)pDVar19->growCapacity;
        }
        uVar28 = 0xffffffff;
        do {
          pcVar24 = pcVar27;
          if (uVar28 == 0) break;
          uVar28 = uVar28 - 1;
          pcVar24 = pcVar27 + 1;
          cVar2 = *pcVar27;
          pcVar27 = pcVar24;
        } while (cVar2 != '\0');
        uVar28 = ~uVar28;
        pcVar27 = pcVar24 + -uVar28;
        pcVar24 = local_640;
        for (uVar29 = uVar28 >> 2; uVar29 != 0; uVar29 = uVar29 - 1) {
          *(undefined4 *)pcVar24 = *(undefined4 *)pcVar27;
          pcVar27 = pcVar27 + 4;
          pcVar24 = pcVar24 + 4;
        }
        for (uVar28 = uVar28 & 3; uVar28 != 0; uVar28 = uVar28 - 1) {
          *pcVar24 = *pcVar27;
          pcVar27 = pcVar27 + 1;
          pcVar24 = pcVar24 + 1;
        }
        local_10 = local_640;
        StartSystemTy::AddToChat(pSVar7,(int)local_680);
        if (this_00->field_2208 == '\0') {
          pDVar19 = this_00->field_1F84;
          if (pDVar19 != (DArrayTy *)0x0) {
            uVar28 = pDVar19->count;
            uVar29 = 0;
            if (uVar28 != 0) {
              if (uVar28 == 0) {
                pvVar17 = (void *)0x0;
                goto LAB_005d277a;
              }
              do {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar19, uVar29) (runtime stride) */
                pvVar17 = (void *)(pDVar19->elementSize * uVar29 + (int)pDVar19->data);
LAB_005d277a:
                if ((pvVar17 != (void *)0x0) &&
                   (((*(char *)((int)pvVar17 + 4) == '\x02' ||
                     (*(char *)((int)pvVar17 + 4) == '\x03')) &&
                    (*(int *)((int)pvVar17 + 6) == DAT_0080877f)))) {
                  local_5 = *(char *)((int)pvVar17 + 0x4a);
                  break;
                }
                uVar29 = uVar29 + 1;
              } while (uVar29 < uVar28);
            }
            local_c = (AnonShape_005D1400_891386BF *)0x0;
            if (uVar28 != 0) {
              if (uVar28 == 0) {
                pvVar17 = (void *)0x0;
                goto LAB_005d27c3;
              }
              do {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar19, (int)local_c) (runtime stride) */
                pvVar17 = (void *)(pDVar19->elementSize * (int)local_c + (int)pDVar19->data);
LAB_005d27c3:
                if (((pvVar17 != (void *)0x0) &&
                    ((*(char *)((int)pvVar17 + 4) == '\x02' ||
                     (*(char *)((int)pvVar17 + 4) == '\x03')))) &&
                   (*(int *)((int)pvVar17 + 6) != DAT_0080877f)) {
                  if (DAT_00808a8f == '\0') {
                    if (((DAT_0080874d != 0xff) &&
                        (bVar22 = *(byte *)((int)pvVar17 + 2), bVar22 != 0xff)) &&
                       (DAT_0080874d != bVar22)) {
                      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                      local_10 = (char *)CONCAT31(local_10._1_3_,bVar22);
                      uVar28 = (uint)DAT_0080874d;
                      bVar3 = g_playerRelationMatrix[uVar28][bVar22];
                      if ((bVar3 == 0) && (g_playerRelationMatrix[bVar22][uVar28] == 0)) {
                        iVar15 = -2;
                      }
                      else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar22][uVar28] == 0)) {
                        iVar15 = -1;
                      }
                      else if ((bVar3 == 0) && (g_playerRelationMatrix[bVar22][uVar28] == 1)) {
                        iVar15 = 1;
                      }
                      else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar22][uVar28] == 1)) {
                        iVar15 = 2;
                      }
                      else {
                        iVar15 = 0;
                      }
                      if (iVar15 == 2) goto LAB_005d28a0;
                    }
                  }
                  else if (*(char *)((int)pvVar17 + 0x4a) == local_5) {
LAB_005d28a0:
                    FUN_00715360(g_int_00811764,*(int *)((int)pvVar17 + 6),'\x1b',local_680,0x451,1,
                                 0xffffffff);
                  }
                }
                pDVar19 = this_00->field_1F84;
                local_c = (AnonShape_005D1400_891386BF *)&local_c->field_0x1;
              } while (local_c < (undefined1 *)pDVar19->count);
            }
          }
        }
        else {
          FUN_00715360(g_int_00811764,0,'\x1b',local_680,0x451,1,0xffffffff);
        }
      }
LAB_005d28da:
      Library::DKW::TBL::FUN_006b6020(&this_00->field_1A5B->field_0686->flags,0,&DAT_008016a0);
      this_00->field_002D = 0x33;
      this_00->field_0031 = this_00->field_1A5B->field_0686;
      FUN_006e6080(this_00,2,this_00->field_1A5B->field_054C,(undefined4 *)&this_00->field_0x1d);
    }
    goto switchD_005d1877_caseD_6507;
  }
  if (SVar5 < MESS_SETTMAPMTY_654A) {
    switch(SVar5) {
    case MESS_SETTMAPSTY_6505:
      uVar28 = (message->arg0).u32;
      if ((uVar28 != 0xffffffff) && (this_00->field_1F84 != (DArrayTy *)0x0)) {
        pDVar19 = this_00->field_1E2F;
        if (uVar28 < pDVar19->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar19, uVar28) (runtime stride) */
          pvVar17 = (void *)(pDVar19->elementSize * uVar28 + (int)pDVar19->data);
        }
        else {
          pvVar17 = (void *)0x0;
        }
        if (DAT_0080877e == '\0') {
          ChgPlList(this_00,message->arg1,3,*(undefined4 *)((int)pvVar17 + 0x104),
                    *(undefined4 *)((int)pvVar17 + 0x108));
          this_00->field_2244 = 0;
        }
        else {
          pcVar27 = &DAT_00807e1d;
          if (DAT_008067a0 == '\0') {
            pcVar27 = (char *)&DAT_00807ddd;
          }
          ChangePlayerList(this_00,DAT_0080877f,(message->arg1).u32,*(int *)((int)pvVar17 + 0x104),
                           (char)*(undefined4 *)((int)pvVar17 + 0x108),pcVar27);
          SendPlList(this_00,0);
        }
      }
      break;
    case MESS_FSGSTY_6506:
      uVar28 = (message->arg1).u32;
      if (uVar28 == 0) {
        if (DAT_0080877e != '\0') {
          DAT_00808aab = DAT_00808aab + 1;
          this_00->field_2121 = this_00->field_2121 + 1;
          SendDesc(this_00,0);
          SendPlList(this_00,0);
        }
      }
      else if (((2 < uVar28) && (uVar28 < 9)) && (DAT_0080877e != '\0')) {
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
  if (((0x69fe < SVar5) && (SVar5 < MESS_SHARED_6A7F)) && (this_00->field_0065 == '\x01')) {
    pDVar19 = this_00->field_1F84;
    local_2c = SVar5 - MESS_SHARED_69FF >> 3;
    if ((pDVar19 == (DArrayTy *)0x0) ||
       (uVar28 = local_2c + this_00->field_1F88, pDVar19->count <= uVar28)) {
      pAVar25 = (AnonShape_005D1400_5A9F7B11 *)0x0;
    }
    else {
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar19, uVar28) (runtime stride) */
      pAVar25 = (AnonShape_005D1400_5A9F7B11 *)(pDVar19->elementSize * uVar28 + (int)pDVar19->data);
    }
    local_18 = pAVar25;
    if (pAVar25 != (AnonShape_005D1400_5A9F7B11 *)0x0) {
      switch(SVar5 + 1 & 7) {
      case MESS_ID_NONE:
        if ((pAVar25->field_0x4 == '\x02') && (*(int *)&pAVar25->field_0x6 == DAT_0080877f)) {
          if (DAT_0080877e == '\0') {
            uVar29 = 0;
            uVar28 = 0;
            iVar15 = this_00->field_1F88 + local_2c;
            uVar39 = 0;
            goto LAB_005d34ee;
          }
          ChangePlayerState(this_00,this_00->field_1F88 + local_2c);
          SendPlList(this_00,0);
        }
        break;
      case 1:
        if (*(char *)pAVar25 != '\0') {
          uVar28 = pDVar19->count;
          local_44 = 0x1010101;
          local_40 = 0x1010101;
          uVar29 = 0;
          if (0 < (int)uVar28) {
            bVar35 = uVar28 != 0;
            do {
              if (bVar35) {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
                pcVar27 = (char *)(this_00->field_1F84->elementSize * uVar29 +
                                  (int)this_00->field_1F84->data);
              }
              else {
                pcVar27 = (char *)0x0;
              }
              if ((*pcVar27 != '\0') && (pcVar27[2] != 0xff)) {
                *(undefined1 *)((int)&local_44 + (uint)(byte)pcVar27[2]) = 0;
              }
              uVar29 = uVar29 + 1;
              bVar35 = uVar29 < uVar28;
            } while ((int)uVar29 < (int)uVar28);
          }
          if (pAVar25->field_0x2 != 0xff) {
            *(undefined1 *)((int)&local_44 + (uint)(byte)pAVar25->field_0x2) = 1;
          }
          uVar28 = 0;
          this_00->field_2171 = 0x6502;
          this_00->field_2179 = this_00->field_1F88 + local_2c;
          this_00->field_2191 = 0x6503;
          this_00->field_21A1 = 0;
          this_00->field_1E2F->count = 0;
          this_00->field_1F37 = 0xff;
          Library::DKW::TBL::FUN_006ae1c0
                    (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_c = (AnonShape_005D1400_891386BF *)CONCAT31(local_c._1_3_,1);
          do {
            if (*(char *)((int)&local_44 + uVar28) != '\0') {
              this_00->field_1F37 = uVar28;
              Library::DKW::TBL::FUN_006ae1c0
                        (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
              if ((byte)pAVar25->field_0x2 == uVar28) {
                this_00->field_21A1 = (uint)local_c & 0xff;
              }
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_c = (AnonShape_005D1400_891386BF *)
                        CONCAT31(local_c._1_3_,(byte)local_c + '\x01');
            }
            uVar28 = uVar28 + 1;
          } while ((int)uVar28 < 8);
          dVar8 = this_00->field_1E2F->count;
          this_00->field_21C5 = 0x124;
          this_00->field_21A9 = dVar8;
          this_00->field_21CD = 0x1e;
          this_00->field_21A5 = 0x12;
          this_00->field_21C9 = local_2c * 0x19 + 0x41;
LAB_005d3188:
          (*this_00->field_000C->vtable->CreateObject)
                    ((SystemClassTy *)this_00->field_000C,0x100ef,(undefined4 *)0x0,(int *)0x0,
                     &this_00->field_0x2161,0);
        }
        break;
      case MESS_ID_CREATE:
        if (*(char *)pAVar25 != '\0') {
          this_00->field_2171 = 0x6504;
          this_00->field_2179 = this_00->field_1F88 + local_2c;
          this_00->field_2191 = 0x6500;
          this_00->field_1E2F->count = 0;
          local_10 = (char *)0x1;
          pcVar27 = LoadResourceString(0x23f1,g_module_00807618);
          uVar28 = 0xffffffff;
          do {
            pcVar24 = pcVar27;
            if (uVar28 == 0) break;
            uVar28 = uVar28 - 1;
            pcVar24 = pcVar27 + 1;
            cVar2 = *pcVar27;
            pcVar27 = pcVar24;
          } while (cVar2 != '\0');
          uVar28 = ~uVar28;
          pcVar27 = pcVar24 + -uVar28;
          pcVar24 = &this_00->field_0x1e33;
          for (uVar29 = uVar28 >> 2; uVar29 != 0; uVar29 = uVar29 - 1) {
            *(undefined4 *)pcVar24 = *(undefined4 *)pcVar27;
            pcVar27 = pcVar27 + 4;
            pcVar24 = pcVar24 + 4;
          }
          for (uVar28 = uVar28 & 3; uVar28 != 0; uVar28 = uVar28 - 1) {
            *pcVar24 = *pcVar27;
            pcVar27 = pcVar27 + 1;
            pcVar24 = pcVar24 + 1;
          }
          for (puVar16 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_0x1e33,'\n');
              puVar16 != (uint *)0x0; puVar16 = Library::MSVCRT::FUN_0072e560(puVar16,'\n')) {
            *(undefined1 *)puVar16 = 0x20;
          }
          this_00->field_1F37 = 1;
          Library::DKW::TBL::FUN_006ae1c0
                    (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
          pcVar27 = LoadResourceString(0x23f0,g_module_00807618);
          uVar28 = 0xffffffff;
          do {
            pcVar24 = pcVar27;
            if (uVar28 == 0) break;
            uVar28 = uVar28 - 1;
            pcVar24 = pcVar27 + 1;
            cVar2 = *pcVar27;
            pcVar27 = pcVar24;
          } while (cVar2 != '\0');
          uVar28 = ~uVar28;
          pcVar27 = pcVar24 + -uVar28;
          pcVar24 = &this_00->field_0x1e33;
          for (uVar29 = uVar28 >> 2; uVar29 != 0; uVar29 = uVar29 - 1) {
            *(undefined4 *)pcVar24 = *(undefined4 *)pcVar27;
            pcVar27 = pcVar27 + 4;
            pcVar24 = pcVar24 + 4;
          }
          for (uVar28 = uVar28 & 3; uVar28 != 0; uVar28 = uVar28 - 1) {
            *pcVar24 = *pcVar27;
            pcVar27 = pcVar27 + 1;
            pcVar24 = pcVar24 + 1;
          }
          for (puVar16 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_0x1e33,'\n');
              puVar16 != (uint *)0x0; puVar16 = Library::MSVCRT::FUN_0072e560(puVar16,'\n')) {
            *(undefined1 *)puVar16 = 0x20;
          }
          this_00->field_1F37 = 2;
          Library::DKW::TBL::FUN_006ae1c0
                    (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
          pcVar27 = local_10;
          if ((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) {
            pcVar27 = (char *)(uint)(local_18->field_0x4 != '\x02');
          }
          if (pcVar27 != (char *)0x0) {
            pcVar27 = LoadResourceString(0x23f2,g_module_00807618);
            uVar28 = 0xffffffff;
            do {
              pcVar24 = pcVar27;
              if (uVar28 == 0) break;
              uVar28 = uVar28 - 1;
              pcVar24 = pcVar27 + 1;
              cVar2 = *pcVar27;
              pcVar27 = pcVar24;
            } while (cVar2 != '\0');
            uVar28 = ~uVar28;
            pcVar27 = pcVar24 + -uVar28;
            pcVar24 = &this_00->field_0x1e33;
            for (uVar29 = uVar28 >> 2; uVar29 != 0; uVar29 = uVar29 - 1) {
              *(undefined4 *)pcVar24 = *(undefined4 *)pcVar27;
              pcVar27 = pcVar27 + 4;
              pcVar24 = pcVar24 + 4;
            }
            for (uVar28 = uVar28 & 3; uVar28 != 0; uVar28 = uVar28 - 1) {
              *pcVar24 = *pcVar27;
              pcVar27 = pcVar27 + 1;
              pcVar24 = pcVar24 + 1;
            }
            for (puVar16 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_0x1e33,'\n');
                puVar16 != (uint *)0x0; puVar16 = Library::MSVCRT::FUN_0072e560(puVar16,'\n')) {
              *(undefined1 *)puVar16 = 0x20;
            }
            this_00->field_1F37 = 3;
            Library::DKW::TBL::FUN_006ae1c0
                      (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
          }
          this_00->field_21A9 = this_00->field_1E2F->count;
          bVar22 = local_18->field_0x3;
          this_00->field_21C5 = 0x143;
          this_00->field_21CD = 0x78;
          this_00->field_21A1 = bVar22 - 1;
          this_00->field_21C9 = local_2c * 0x19 + 0x41;
          pcVar9 = g_startSystem_0081176C->field_0034;
          if (pcVar9->field_00A0 != 0) {
            FUN_00710790((AnonShape_00710790_4CBB90D4 *)pcVar9);
          }
          this_00->field_21A5 = *(undefined4 *)&pcVar9->field_0x8a;
          goto LAB_005d3188;
        }
        break;
      case MESS_SHARED_0003:
        this_00->field_2171 = 0x6505;
        this_00->field_2179 = local_2c + this_00->field_1F88;
        this_00->field_2191 = 0x6500;
        this_00->field_1E2F->count = 0;
        memset(&this_00->field_0x1e33, 0, 0x10c); /* compiler bulk-zero initialization */
        if (*(char *)pAVar25 == '\0') {
          uVar28 = local_2c + this_00->field_1F88;
          local_5 = '\0';
          if (-1 < (int)uVar28) {
            pDVar19 = this_00->field_1F84;
            do {
              if (uVar28 < pDVar19->count) {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar19, uVar28) (runtime stride) */
                pcVar27 = (char *)(pDVar19->elementSize * uVar28 + (int)pDVar19->data);
              }
              else {
                pcVar27 = (char *)0x0;
              }
              if (*pcVar27 != '\0') {
                if ((pcVar27[4] == '\x02') && (*(int *)(pcVar27 + 6) != DAT_0080877f)) {
                  local_5 = '\x01';
                }
                break;
              }
              uVar28 = uVar28 - 1;
            } while (-1 < (int)uVar28);
          }
          if (local_5 != '\0') {
            pcVar27 = LoadResourceString(0x1f42,g_module_00807618);
            uVar28 = 0xffffffff;
            do {
              pcVar24 = pcVar27;
              if (uVar28 == 0) break;
              uVar28 = uVar28 - 1;
              pcVar24 = pcVar27 + 1;
              cVar2 = *pcVar27;
              pcVar27 = pcVar24;
            } while (cVar2 != '\0');
            uVar28 = ~uVar28;
            pcVar27 = pcVar24 + -uVar28;
            pcVar24 = &this_00->field_0x1e33;
            for (uVar29 = uVar28 >> 2; uVar29 != 0; uVar29 = uVar29 - 1) {
              *(undefined4 *)pcVar24 = *(undefined4 *)pcVar27;
              pcVar27 = pcVar27 + 4;
              pcVar24 = pcVar24 + 4;
            }
            for (uVar28 = uVar28 & 3; uVar28 != 0; uVar28 = uVar28 - 1) {
              *pcVar24 = *pcVar27;
              pcVar27 = pcVar27 + 1;
              pcVar24 = pcVar24 + 1;
            }
            this_00->field_1F37 = 2;
            Library::DKW::TBL::FUN_006ae1c0
                      (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
            if (DAT_00808aaa != '\0') {
              pcVar27 = LoadResourceString(0x1f46,g_module_00807618);
              uVar28 = 0xffffffff;
              do {
                pcVar24 = pcVar27;
                if (uVar28 == 0) break;
                uVar28 = uVar28 - 1;
                pcVar24 = pcVar27 + 1;
                cVar2 = *pcVar27;
                pcVar27 = pcVar24;
              } while (cVar2 != '\0');
              uVar28 = ~uVar28;
              pcVar27 = pcVar24 + -uVar28;
              pcVar24 = &this_00->field_0x1e33;
              for (uVar29 = uVar28 >> 2; uVar29 != 0; uVar29 = uVar29 - 1) {
                *(undefined4 *)pcVar24 = *(undefined4 *)pcVar27;
                pcVar27 = pcVar27 + 4;
                pcVar24 = pcVar24 + 4;
              }
              for (uVar28 = uVar28 & 3; uVar28 != 0; uVar28 = uVar28 - 1) {
                *pcVar24 = *pcVar27;
                pcVar27 = pcVar27 + 1;
                pcVar24 = pcVar24 + 1;
              }
              this_00->field_1F37 = 3;
              Library::DKW::TBL::FUN_006ae1c0
                        (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
            }
          }
          pcVar27 = LoadResourceString(0x1f41,g_module_00807618);
          uVar28 = 0xffffffff;
          do {
            pcVar24 = pcVar27;
            if (uVar28 == 0) break;
            uVar28 = uVar28 - 1;
            pcVar24 = pcVar27 + 1;
            cVar2 = *pcVar27;
            pcVar27 = pcVar24;
          } while (cVar2 != '\0');
          uVar28 = ~uVar28;
          pcVar27 = pcVar24 + -uVar28;
          pcVar24 = &this_00->field_0x1e33;
          for (uVar29 = uVar28 >> 2; uVar29 != 0; uVar29 = uVar29 - 1) {
            *(undefined4 *)pcVar24 = *(undefined4 *)pcVar27;
            pcVar27 = pcVar27 + 4;
            pcVar24 = pcVar24 + 4;
          }
          for (uVar28 = uVar28 & 3; uVar28 != 0; uVar28 = uVar28 - 1) {
            *pcVar24 = *pcVar27;
            pcVar27 = pcVar27 + 1;
            pcVar24 = pcVar24 + 1;
          }
          this_00->field_1F37 = 1;
          Library::DKW::TBL::FUN_006ae1c0
                    (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
        }
        else {
          if ((this_00->field_1E26 != CASE_5) || (pAVar25->field_0x4 != '\x04')) {
            if ((DAT_0080877e != '\0') && (this_00->field_1E26 != CASE_5)) {
              pcVar27 = LoadResourceString(8000,g_module_00807618);
              uVar28 = 0xffffffff;
              do {
                pcVar24 = pcVar27;
                if (uVar28 == 0) break;
                uVar28 = uVar28 - 1;
                pcVar24 = pcVar27 + 1;
                cVar2 = *pcVar27;
                pcVar27 = pcVar24;
              } while (cVar2 != '\0');
              uVar28 = ~uVar28;
              pcVar27 = pcVar24 + -uVar28;
              pcVar24 = &this_00->field_0x1e33;
              for (uVar29 = uVar28 >> 2; uVar29 != 0; uVar29 = uVar29 - 1) {
                *(undefined4 *)pcVar24 = *(undefined4 *)pcVar27;
                pcVar27 = pcVar27 + 4;
                pcVar24 = pcVar24 + 4;
              }
              for (uVar28 = uVar28 & 3; uVar28 != 0; uVar28 = uVar28 - 1) {
                *pcVar24 = *pcVar27;
                pcVar27 = pcVar27 + 1;
                pcVar24 = pcVar24 + 1;
              }
              this_00->field_1F37 = 0;
              Library::DKW::TBL::FUN_006ae1c0
                        (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
            }
            bVar35 = true;
            if ((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) {
              bVar35 = local_18->field_0x3 != '\x03';
            }
            if (bVar35) {
              pcVar27 = LoadResourceString(0x1f42,g_module_00807618);
              uVar28 = 0xffffffff;
              do {
                pcVar24 = pcVar27;
                if (uVar28 == 0) break;
                uVar28 = uVar28 - 1;
                pcVar24 = pcVar27 + 1;
                cVar2 = *pcVar27;
                pcVar27 = pcVar24;
              } while (cVar2 != '\0');
              uVar28 = ~uVar28;
              pcVar27 = pcVar24 + -uVar28;
              pcVar24 = &this_00->field_0x1e33;
              for (uVar29 = uVar28 >> 2; uVar29 != 0; uVar29 = uVar29 - 1) {
                *(undefined4 *)pcVar24 = *(undefined4 *)pcVar27;
                pcVar27 = pcVar27 + 4;
                pcVar24 = pcVar24 + 4;
              }
              for (uVar28 = uVar28 & 3; uVar28 != 0; uVar28 = uVar28 - 1) {
                *pcVar24 = *pcVar27;
                pcVar27 = pcVar27 + 1;
                pcVar24 = pcVar24 + 1;
              }
              this_00->field_1F37 = 2;
              Library::DKW::TBL::FUN_006ae1c0
                        (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
            }
            pcVar27 = LoadResourceString(0x1f41,g_module_00807618);
            uVar28 = 0xffffffff;
            do {
              pcVar24 = pcVar27;
              if (uVar28 == 0) break;
              uVar28 = uVar28 - 1;
              pcVar24 = pcVar27 + 1;
              cVar2 = *pcVar27;
              pcVar27 = pcVar24;
            } while (cVar2 != '\0');
            uVar28 = ~uVar28;
            pcVar27 = pcVar24 + -uVar28;
            pcVar24 = &this_00->field_0x1e33;
            for (uVar29 = uVar28 >> 2; uVar29 != 0; uVar29 = uVar29 - 1) {
              *(undefined4 *)pcVar24 = *(undefined4 *)pcVar27;
              pcVar27 = pcVar27 + 4;
              pcVar24 = pcVar24 + 4;
            }
            for (uVar28 = uVar28 & 3; uVar28 != 0; uVar28 = uVar28 - 1) {
              *pcVar24 = *pcVar27;
              pcVar27 = pcVar27 + 1;
              pcVar24 = pcVar24 + 1;
            }
            this_00->field_1F37 = 1;
            Library::DKW::TBL::FUN_006ae1c0
                      (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
          }
          if ((DAT_0080877e != '\0') && (this_00->field_1E26 != CASE_5)) {
            local_c = (AnonShape_005D1400_891386BF *)0x0;
            pAVar20 = local_18->field_0050;
            pAVar31 = (AnonShape_005D1400_891386BF *)pAVar20->field_000C;
            if (0 < (int)pAVar31) {
              do {
                if (local_c < pAVar31) {
                  iVar15 = pAVar20->field_0008 * (int)local_c + pAVar20->field_001C;
                }
                else {
                  iVar15 = 0;
                }
                uVar28 = 0xffffffff;
                pcVar27 = (char *)(iVar15 + 0x40);
                do {
                  pcVar24 = pcVar27;
                  if (uVar28 == 0) break;
                  uVar28 = uVar28 - 1;
                  pcVar24 = pcVar27 + 1;
                  cVar2 = *pcVar27;
                  pcVar27 = pcVar24;
                } while (cVar2 != '\0');
                uVar28 = ~uVar28;
                pcVar27 = pcVar24 + -uVar28;
                pcVar24 = &this_00->field_0x1e33;
                for (uVar29 = uVar28 >> 2; uVar29 != 0; uVar29 = uVar29 - 1) {
                  *(undefined4 *)pcVar24 = *(undefined4 *)pcVar27;
                  pcVar27 = pcVar27 + 4;
                  pcVar24 = pcVar24 + 4;
                }
                for (uVar28 = uVar28 & 3; uVar28 != 0; uVar28 = uVar28 - 1) {
                  *pcVar24 = *pcVar27;
                  pcVar27 = pcVar27 + 1;
                  pcVar24 = pcVar24 + 1;
                }
                this_00->field_1F37 = 4;
                this_00->field_1F3B = local_c;
                Library::DKW::TBL::FUN_006ae1c0
                          (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
                local_c = (AnonShape_005D1400_891386BF *)&local_c->field_0x1;
                pAVar20 = local_18->field_0050;
                pAVar31 = (AnonShape_005D1400_891386BF *)pAVar20->field_000C;
              } while ((int)local_c < (int)pAVar31);
            }
          }
        }
        pDVar19 = this_00->field_1E2F;
        uVar28 = 0;
        this_00->field_21A1 = 0;
        if (0 < (int)pDVar19->count) {
          bVar35 = pDVar19->count != 0;
          local_10 = (char *)(uint)(byte)local_18->field_0x4;
          do {
            if (bVar35) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar19, uVar28) (runtime stride) */
              pvVar17 = (void *)(pDVar19->elementSize * uVar28 + (int)pDVar19->data);
            }
            else {
              pvVar17 = (void *)0x0;
            }
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            if ((*(char **)((int)pvVar17 + 0x104) == local_10) &&
               (*(uint *)((int)pvVar17 + 0x108) == (uint)(byte)local_18->field_0x5)) {
              this_00->field_21A1 = uVar28;
              break;
            }
            uVar28 = uVar28 + 1;
            bVar35 = uVar28 < pDVar19->count;
          } while ((int)uVar28 < (int)pDVar19->count);
        }
        dVar8 = pDVar19->count;
        this_00->field_21C5 = 0x15d;
        this_00->field_21A9 = dVar8;
        this_00->field_21CD = 0x5f;
        this_00->field_21C9 = local_2c * 0x19 + 0x41;
        pcVar9 = g_startSystem_0081176C->field_0034;
        if (pcVar9->field_00A0 != 0) {
          FUN_00710790((AnonShape_00710790_4CBB90D4 *)pcVar9);
        }
        this_00->field_21A5 = *(undefined4 *)&pcVar9->field_0x8a;
        if (0 < this_00->field_21A9) goto LAB_005d3188;
        break;
      case MESS_SHARED_0005:
        if (*(char *)pAVar25 != '\0') {
          if (DAT_00808a8f == '\0') {
            if (DAT_0080877e == '\0') {
              uVar29 = (uint)DAT_0080874d;
              uVar28 = 0;
              iVar15 = this_00->field_1F88 + local_2c;
              uVar39 = 5;
              goto LAB_005d34ee;
            }
            ChangePlayerTeam(this_00,this_00->field_1F88 + local_2c,0,(uint)DAT_0080874d);
            SendDesc(this_00,0);
          }
          else {
            uVar28 = pDVar19->count;
            uVar29 = 0;
            local_3c = 0;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_c = (AnonShape_005D1400_891386BF *)CONCAT31(local_c._1_3_,0xff);
            local_10 = (char *)0x1;
            local_38 = 0;
            local_30 = (undefined1 *)uVar28;
            if (0 < (int)uVar28) {
              bVar35 = uVar28 != 0;
              do {
                if (bVar35) {
                  /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
                  pvVar17 = (void *)(this_00->field_1F84->elementSize * uVar29 +
                                    (int)this_00->field_1F84->data);
                }
                else {
                  pvVar17 = (void *)0x0;
                }
                if ((pvVar17 != (void *)0x0) && (*(byte *)((int)pvVar17 + 0x4a) < 8)) {
                  *(undefined1 *)((int)&local_3c + (uint)*(byte *)((int)pvVar17 + 0x4a)) = 1;
                }
                uVar29 = uVar29 + 1;
                bVar35 = uVar29 < uVar28;
              } while ((int)uVar29 < (int)uVar28);
            }
            uVar29 = local_2c;
            bVar22 = 0;
            iVar15 = 0;
            do {
              if (*(char *)((int)&local_3c + iVar15) != '\0') {
                bVar22 = bVar22 + 1;
              }
              iVar15 = iVar15 + 1;
            } while (iVar15 < 8);
            bVar3 = this_00->field_211C;
joined_r0x005d3229:
            if (bVar22 < bVar3) {
              iVar15 = 0;
              do {
                if (*(char *)((int)&local_3c + iVar15) == '\0') {
                  *(undefined1 *)((int)&local_3c + iVar15) = 1;
                  bVar22 = bVar22 + 1;
                  break;
                }
                iVar15 = iVar15 + 1;
              } while (iVar15 < 8);
              goto joined_r0x005d3229;
            }
            uVar26 = 0;
            if (0 < (int)uVar28) {
              do {
                puVar18 = local_30;
                if (uVar26 < local_30) {
                  /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
                  pcVar27 = (char *)(this_00->field_1F84->elementSize * uVar26 +
                                    (int)this_00->field_1F84->data);
                }
                else {
                  pcVar27 = (char *)0x0;
                }
                if (pcVar27 != (char *)0x0) {
                  if (this_00->field_1F88 + uVar29 != uVar26) {
                    if (*pcVar27 == '\0') goto LAB_005d32d3;
                    if ((pcVar27[4] != '\0') && (pcVar27[4] != '\x01')) {
                      if (local_10 == (char *)0x0) {
                        if ((byte)local_c != pcVar27[0x4a]) {
                          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                          local_c = (AnonShape_005D1400_891386BF *)CONCAT31(local_c._1_3_,0xff);
                        }
                      }
                      else {
                        local_10 = (char *)0x0;
                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                        local_c = (AnonShape_005D1400_891386BF *)
                                  CONCAT31(local_c._1_3_,pcVar27[0x4a]);
                      }
                    }
                  }
                  if ((*pcVar27 != '\0') &&
                     (((pcVar27[4] == '\0' || (pcVar27[4] == '\x01')) && ((byte)pcVar27[0x4a] < 8)))
                     ) {
                    *(undefined1 *)((int)&local_3c + (uint)(byte)pcVar27[0x4a]) = 0;
                  }
                }
LAB_005d32d3:
                uVar26 = uVar26 + 1;
              } while ((int)uVar26 < (int)puVar18);
            }
            if ((byte)local_c < 8) {
              *(undefined1 *)((int)&local_3c + ((uint)local_c & 0xff)) = 0;
            }
            uVar28 = 0;
            this_00->field_2171 = 0x6501;
            this_00->field_2179 = this_00->field_1F88 + local_2c;
            this_00->field_2191 = 0x6500;
            this_00->field_21A1 = 0;
            this_00->field_1E2F->count = 0;
            local_c = (AnonShape_005D1400_891386BF *)((uint)local_c & 0xffffff00);
            puVar18 = &uStack_7d;
            local_30 = puVar18;
            do {
              iVar15 = uVar28 + 0x41;
              if (puVar18[uVar28 + 0x41] != '\0') {
                pcVar27 = LoadResourceString(0x1f4a,g_module_00807618);
                wsprintfA(&this_00->field_0x1e33,"%s%c",pcVar27,iVar15);
                this_00->field_1F37 = uVar28;
                Library::DKW::TBL::FUN_006ae1c0
                          (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
                if ((byte)local_18->field_0x4a == uVar28) {
                  this_00->field_21A1 = (uint)local_c & 0xff;
                }
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_c = (AnonShape_005D1400_891386BF *)
                          CONCAT31(local_c._1_3_,(byte)local_c + '\x01');
                puVar18 = local_30;
              }
              uVar28 = uVar28 + 1;
            } while ((int)uVar28 < 8);
            SVar4 = this_00->field_1E26;
            this_00->field_21A9 = this_00->field_1E2F->count;
            if (((SVar4 == 6) || (SVar4 == 1)) || (uVar39 = 0x26b, SVar4 == 2)) {
              uVar39 = 0x2ab;
            }
            this_00->field_21C5 = uVar39;
            this_00->field_21CD = 0x46;
            this_00->field_21C9 = local_2c * 0x19 + 0x41;
            pcVar9 = g_startSystem_0081176C->field_0034;
            if (pcVar9->field_00A0 != 0) {
              FUN_00710790((AnonShape_00710790_4CBB90D4 *)pcVar9);
            }
            this_00->field_21A5 = *(undefined4 *)&pcVar9->field_0x8a;
            (*this_00->field_000C->vtable->CreateObject)
                      ((SystemClassTy *)this_00->field_000C,0x100ef,(undefined4 *)0x0,(int *)0x0,
                       &this_00->field_0x2161,0);
          }
        }
        break;
      case 7:
        if (DAT_0080877e == '\0') {
          uVar29 = 0;
          uVar28 = (uint)(pAVar25->field_0x4f == '\0');
          iVar15 = this_00->field_1F88 + local_2c;
          uVar39 = 7;
LAB_005d34ee:
          ChgPlList(this_00,iVar15,uVar39,uVar28,uVar29);
        }
        else {
          pAVar25->field_0x4f = pAVar25->field_0x4f == '\0';
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,*(undefined4 *)(&this_00->field_0x1fa8 + local_2c * 0x20),
                       (undefined4 *)&this_00->field_0x1d);
          this_00->field_2121 = this_00->field_2121 + 1;
          SendPlList(this_00,0);
        }
      }
    }
  }
  SVar5 = message->id;
  if (SVar5 < MESS_SHARED_6A7F) {
    g_currentExceptionFrame = local_f4.previous;
    return 0;
  }
  if (0x6afe < SVar5) {
    g_currentExceptionFrame = local_f4.previous;
    return 0;
  }
  pAVar33 = (AnonShape_005CBBE0_2D1CAA09 *)0x0;
  pcVar27 = (char *)(SVar5 - MESS_SHARED_6A7F >> 3);
  local_30 = (undefined1 *)(SVar5 + 1 & 7);
  piVar10 = (message->arg1).ptr;
  local_20 = piVar10[2];
  local_1c = piVar10[3];
  pDVar19 = this_00->field_1F84;
  local_28 = *piVar10 + -0x113;
  local_24 = 0;
  if ((pDVar19 != (DArrayTy *)0x0) &&
     (uVar28 = this_00->field_1F88 + (int)pcVar27, uVar28 < pDVar19->count)) {
    /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar19, uVar28) (runtime stride) */
    pAVar33 = (AnonShape_005CBBE0_2D1CAA09 *)(pDVar19->elementSize * uVar28 + (int)pDVar19->data);
  }
  local_10 = pcVar27;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  FUN_006b4170(*(AnonShape_006B5B10_E0D06CF1 **)(&this_00->field_0x20f4 + (int)pcVar27 * 4),0,
               *piVar10 + -0x113,0,piVar10[2],piVar10[3],0xff);
  if (pAVar33 == (AnonShape_005CBBE0_2D1CAA09 *)0x0) goto switchD_005d35aa_default;
  switch(local_30) {
  case (undefined1 *)0x0:
    if (((*(char *)pAVar33 == '\0') || (pAVar33->field_0x4 != '\x02')) ||
       (*(int *)&pAVar33->field_0x6 != DAT_0080877f)) break;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    MMObjTy::PaintButDib
              ((MMObjTy *)this_00,*(int *)(&this_00->field_0x20f4 + (int)pcVar27 * 4),&local_28,2,
               (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0x67);
    iVar15 = 2 - (uint)(pAVar33->field_0x1 != '\0');
    goto LAB_005d3bf4;
  case (undefined1 *)0x1:
    if (*(char *)pAVar33 != '\0') {
      local_28 = local_28 + 1;
      local_24 = local_24 + 1;
      local_20 = local_20 + -2;
      local_1c = local_1c + -2;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      MMObjTy::PaintButDib
                ((MMObjTy *)this_00,*(int *)(&this_00->field_0x20f4 + (int)pcVar27 * 4),&local_28,0,
                 (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0xffffffff);
      if (pAVar33->field_0x2 != -1) {
        switch(pAVar33->field_0x2) {
        case 0:
          uVar13 = 0xfc;
          break;
        case 1:
          uVar13 = 0xfa;
          break;
        case 2:
          uVar13 = 0xfb;
          break;
        case 3:
          uVar13 = 0xf9;
          break;
        case 4:
          uVar13 = 0xfd;
          break;
        case 5:
          uVar13 = 0xfe;
          break;
        case 6:
          uVar13 = 0xf3;
          break;
        case 7:
          uVar13 = 7;
          break;
        default:
          uVar13 = 0xff;
        }
        FUN_006b4170(*(AnonShape_006B5B10_E0D06CF1 **)(&this_00->field_0x20f4 + (int)pcVar27 * 4),0,
                     local_28 + 2,local_24 + 2,local_20 + -4,local_1c + -4,uVar13);
      }
    }
    break;
  case (undefined1 *)0x2:
    if (*(char *)pAVar33 == '\0') break;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    MMObjTy::PaintButDib
              ((MMObjTy *)this_00,*(int *)(&this_00->field_0x20f4 + (int)pcVar27 * 4),&local_28,2,
               (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0x67);
    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,
                     *(int *)(&this_00->field_0x20f4 + (int)pcVar27 * 4),0,local_28,local_24,
                     local_20,local_1c);
    if (pAVar33->field_0x3 == '\x01') {
      pcVar27 = &DAT_007ca250;
LAB_005d3780:
      uVar28 = 0xffffffff;
      do {
        pcVar24 = pcVar27;
        if (uVar28 == 0) break;
        uVar28 = uVar28 - 1;
        pcVar24 = pcVar27 + 1;
        cVar2 = *pcVar27;
        pcVar27 = pcVar24;
      } while (cVar2 != '\0');
      uVar28 = ~uVar28;
      pcVar27 = pcVar24 + -uVar28;
      pcVar24 = (char *)&DAT_0080f33a;
      for (uVar29 = uVar28 >> 2; uVar29 != 0; uVar29 = uVar29 - 1) {
        *(undefined4 *)pcVar24 = *(undefined4 *)pcVar27;
        pcVar27 = pcVar27 + 4;
        pcVar24 = pcVar24 + 4;
      }
    }
    else {
      if (pAVar33->field_0x3 != '\x02') {
        pcVar27 = &DAT_007ca24c;
        goto LAB_005d3780;
      }
      uVar28 = 0xffffffff;
      pcVar27 = &DAT_007ca248;
      do {
        pcVar24 = pcVar27;
        if (uVar28 == 0) break;
        uVar28 = uVar28 - 1;
        pcVar24 = pcVar27 + 1;
        cVar2 = *pcVar27;
        pcVar27 = pcVar24;
      } while (cVar2 != '\0');
      uVar28 = ~uVar28;
      pcVar27 = pcVar24 + -uVar28;
      pcVar24 = (char *)&DAT_0080f33a;
      for (uVar29 = uVar28 >> 2; uVar29 != 0; uVar29 = uVar29 - 1) {
        *(undefined4 *)pcVar24 = *(undefined4 *)pcVar27;
        pcVar27 = pcVar27 + 4;
        pcVar24 = pcVar24 + 4;
      }
    }
    for (uVar28 = uVar28 & 3; uVar28 != 0; uVar28 = uVar28 - 1) {
      *pcVar24 = *pcVar27;
      pcVar27 = pcVar27 + 1;
      pcVar24 = pcVar24 + 1;
    }
    ccFntTy::WrStr(g_startSystem_0081176C->field_0034,&DAT_0080f33a,-1,-1,2);
    pcVar27 = local_10;
    break;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case (undefined1 *)0x3:
    MMObjTy::PaintButDib
              ((MMObjTy *)this_00,*(int *)(&this_00->field_0x20f4 + (int)pcVar27 * 4),&local_28,2,
               (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0x67);
    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,
                     *(int *)(&this_00->field_0x20f4 + (int)pcVar27 * 4),0,local_28,local_24,
                     local_20,local_1c);
    uVar39 = 2;
    iVar38 = -1;
    iVar37 = -1;
    puVar36 = (uint *)&DAT_007c2310;
    iVar15 = local_20;
    puVar16 = (uint *)thunk_FUN_005cbbe0(this_00,pAVar33);
    goto LAB_005d38bd;
  case (undefined1 *)0x4:
    MMObjTy::PaintButDib
              ((MMObjTy *)this_00,*(int *)(&this_00->field_0x20f4 + (int)pcVar27 * 4),&local_28,2,
               0x67,0x67);
    bVar22 = pAVar33->field_0x4;
    if (bVar22 < 2) break;
    if (bVar22 < 4) {
      ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,
                       *(int *)(&this_00->field_0x20f4 + (int)pcVar27 * 4),0,local_28,local_24,
                       local_20,local_1c);
      uVar39 = 2;
      iVar37 = -1;
      iVar15 = -1;
      puVar16 = thunk_FUN_00540c40(g_startSystem_0081176C->field_0034,(uint *)&pAVar33->field_0xa,
                                   (uint *)&DAT_007c7274,local_20);
      ccFntTy::WrStr(g_startSystem_0081176C->field_0034,puVar16,iVar15,iVar37,uVar39);
      break;
    }
    if (bVar22 != 4) break;
    pDVar19 = pAVar33->field_0050;
    if ((uint)(byte)pAVar33->field_0x5 < pDVar19->count) {
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar19, (uint)(byte)pAVar33->field_0x5) (runtime stride) */
      puVar16 = (uint *)(pDVar19->elementSize * (uint)(byte)pAVar33->field_0x5 + (int)pDVar19->data)
      ;
    }
    else {
      puVar16 = (uint *)0x0;
    }
    if (puVar16 == (uint *)0x0) break;
    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,
                     *(int *)(&this_00->field_0x20f4 + (int)pcVar27 * 4),0,local_28,local_24,
                     local_20,local_1c);
    uVar39 = 2;
    iVar38 = -1;
    iVar37 = -1;
    puVar36 = (uint *)&DAT_007c7274;
    iVar15 = local_20;
LAB_005d38bd:
    puVar16 = thunk_FUN_00540c40(g_startSystem_0081176C->field_0034,puVar16,puVar36,iVar15);
    ccFntTy::WrStr(g_startSystem_0081176C->field_0034,puVar16,iVar37,iVar38,uVar39);
    break;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case (undefined1 *)0x5:
    if ((*(char *)pAVar33 == '\0') ||
       (MMObjTy::PaintButDib
                  ((MMObjTy *)this_00,*(int *)(&this_00->field_0x20f4 + (int)pcVar27 * 4),&local_28,
                   2,(-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0x67),
       pAVar33->field_0x4 == '\0')) break;
    if (DAT_00808a8f != '\0') {
      iVar15 = (byte)pAVar33->field_0x4a + 0x41;
      pcVar24 = LoadResourceString(0x1f4a,g_module_00807618);
      wsprintfA((LPSTR)&DAT_0080f33a,"%s%c",pcVar24,iVar15);
      ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,
                       *(int *)(&this_00->field_0x20f4 + (int)pcVar27 * 4),0,local_28,local_24,
                       local_20,local_1c);
      ccFntTy::WrStr(g_startSystem_0081176C->field_0034,&DAT_0080f33a,-1,-1,2);
      break;
    }
    if (((DAT_0080874d == 0xff) || (bVar22 = pAVar33->field_0x2, bVar22 == 0xff)) ||
       (DAT_0080874d == bVar22)) break;
    local_10 = (char *)0xffffffff;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_30 = (undefined1 *)CONCAT31(local_30._1_3_,bVar22);
    uVar28 = (uint)DAT_0080874d;
    bVar3 = g_playerRelationMatrix[uVar28][bVar22];
    if ((bVar3 == 0) && (g_playerRelationMatrix[bVar22][uVar28] == 0)) {
      uVar39 = 0xfffffffe;
    }
    else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar22][uVar28] == 0)) {
      uVar39 = 0xffffffff;
    }
    else if ((bVar3 == 0) && (g_playerRelationMatrix[bVar22][uVar28] == 1)) {
      uVar39 = 1;
    }
    else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar22][uVar28] == 1)) {
      uVar39 = 2;
    }
    else {
      uVar39 = 0;
    }
    switch(uVar39) {
    default:
      iVar15 = -1;
      break;
    case 1:
      iVar15 = 1;
      break;
    case 2:
      iVar15 = 3;
      break;
    case 0xfffffffe:
      iVar15 = 0;
      break;
    case 0xffffffff:
      iVar15 = 2;
    }
    iVar15 = iVar15 + -1;
    if (iVar15 < 0) break;
    pAVar23 = (AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_1F4B;
    goto LAB_005d3bfa;
  case (undefined1 *)0x6:
    MMObjTy::PaintButDib
              ((MMObjTy *)this_00,*(int *)(&this_00->field_0x20f4 + (int)pcVar27 * 4),&local_28,2,
               0x67,0x67);
    if (((pAVar33->field_0x4 == '\x02') || (pAVar33->field_0x4 == '\x03')) &&
       (((DAT_0080877e != '\0' && (*(int *)&pAVar33->field_0x6 != DAT_0080877f)) ||
        ((DAT_0080877e == '\0' && (*(int *)&pAVar33->field_0x6 == DAT_0080877f)))))) {
      ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,
                       *(int *)(&this_00->field_0x20f4 + (int)pcVar27 * 4),0,local_28,local_24,
                       local_20,local_1c);
      wsprintfA((LPSTR)&DAT_0080f33a,"%4d",*(undefined4 *)&pAVar33->field_0x4b);
      uVar28 = 0xffffffff;
      pcVar24 = (char *)&DAT_0080f33a;
      do {
        if (uVar28 == 0) break;
        uVar28 = uVar28 - 1;
        cVar2 = *pcVar24;
        pcVar24 = pcVar24 + 1;
      } while (cVar2 != '\0');
      if (4 < ~uVar28 - 1) {
        uVar28 = 0xffffffff;
        pcVar27 = &DAT_007cd500;
        do {
          pcVar24 = pcVar27;
          if (uVar28 == 0) break;
          uVar28 = uVar28 - 1;
          pcVar24 = pcVar27 + 1;
          cVar2 = *pcVar27;
          pcVar27 = pcVar24;
        } while (cVar2 != '\0');
        uVar28 = ~uVar28;
        pcVar24 = pcVar24 + -uVar28;
        pcVar30 = (char *)&DAT_0080f33a;
        for (uVar29 = uVar28 >> 2; uVar29 != 0; uVar29 = uVar29 - 1) {
          *(undefined4 *)pcVar30 = *(undefined4 *)pcVar24;
          pcVar24 = pcVar24 + 4;
          pcVar30 = pcVar30 + 4;
        }
        for (uVar28 = uVar28 & 3; pcVar27 = local_10, uVar28 != 0; uVar28 = uVar28 - 1) {
          *pcVar30 = *pcVar24;
          pcVar24 = pcVar24 + 1;
          pcVar30 = pcVar30 + 1;
        }
      }
      ccFntTy::WrStr(g_startSystem_0081176C->field_0034,&DAT_0080f33a,-1,-1,2);
    }
    break;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case (undefined1 *)0x7:
    MMObjTy::PaintButDib
              ((MMObjTy *)this_00,*(int *)(&this_00->field_0x20f4 + (int)pcVar27 * 4),&local_28,2,
               (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0x67);
    if (((pAVar33->field_0x4 != '\x02') || (pAVar33->field_0x4f == '\0')) &&
       (pAVar33->field_0x4 != '\x04')) break;
    iVar15 = 0;
LAB_005d3bf4:
    pAVar23 = (AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_1F4F;
LAB_005d3bfa:
    pbVar21 = (byte *)FUN_0070b3a0(pAVar23,iVar15);
    DibPut(*(AnonShape_006B5B10_E0D06CF1 **)(&this_00->field_0x20f4 + (int)pcVar27 * 4),
           (local_20 - *(int *)(pbVar21 + 4)) / 2 + local_28,
           (local_1c - *(int *)(pbVar21 + 8)) / 2 + 1 + local_24,'\x06',pbVar21);
  }
switchD_005d35aa_default:
  FUN_006b35d0((int *)PTR_008075a8,*(uint *)(&this_00->field_0x20cc + (int)pcVar27 * 4));
  if ((message->arg0).words.low == 3) {
    thunk_FUN_005b6730(this_00,9,'\x01',-1);
  }
  g_currentExceptionFrame = local_f4.previous;
  return 0;
}

