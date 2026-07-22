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
  SettMapTy_field_1E26State SVar4;
  STMessageId SVar5;
  MMMObjTy *pMVar6;
  StartSystemTy *this_00;
  dword dVar7;
  ccFntTy *pcVar8;
  int *piVar9;
  code *pcVar10;
  CursorClassTy *pCVar11;
  SettMapTy *this_01;
  undefined1 uVar12;
  DWORD DVar13;
  int iVar14;
  uint *puVar15;
  void *pvVar16;
  undefined1 *puVar17;
  DArrayTy *pDVar18;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  AnonNested_005D1400_0050_DA378AC5 *pAVar19;
  byte *pbVar20;
  byte bVar21;
  AnonShape_GLOBAL_0081175C_57F682DD *pAVar22;
  char *pcVar23;
  AnonShape_005D1400_5A9F7B11 *pAVar24;
  uint uVar25;
  char *pcVar26;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  void *unaff_EDI;
  uint uVar27;
  uint uVar28;
  char *pcVar29;
  AnonShape_005D1400_891386BF *pAVar30;
  undefined4 *puVar31;
  AnonShape_005CBBE0_2D1CAA09 *pAVar32;
  bool bVar33;
  bool bVar34;
  uint *puVar35;
  int iVar36;
  int iVar37;
  undefined4 uVar38;
  char local_680 [64];
  char local_640 [1044];
  char local_22c [64];
  undefined4 local_1ec;
  undefined4 local_1e8;
  DWORD local_1e4;
  char local_190 [64];
  undefined4 local_150;
  undefined4 local_14c;
  DWORD local_148;
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
  SettMapTy *local_48;
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

  local_48 = (SettMapTy *)this;
  DVar13 = STAppC::sub_006E51B0(this->field_0010);
  uVar27 = 0;
  this->field_0061 = DVar13;
  local_f4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_f4;
  iVar14 = Library::MSVCRT::__setjmp3(local_f4.jumpBuffer,0);
  this_01 = local_48;
  if (iVar14 != 0) {
    g_currentExceptionFrame = local_f4.previous;
    iVar36 = ReportDebugMessage("E:\\__titans\\Start\\settmobj.cpp",0x986,0,iVar14,
                                "%s","SettMapMTy::GetMessage");
    if (iVar36 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar14,0,"E:\\__titans\\Start\\settmobj.cpp",0x986);
    return 0xffff;
  }
  SettMapTy::GetMessage(local_48,message);
  StartSystemTy::ChatMessage(g_startSystem_0081176C,message);
  pCVar11 = g_cursorClass_00802A30;
  SVar5 = message->id;
  if (SVar5 < MESS_SETTMAPSTY_6505) {
    if (SVar5 == MESS_SHARED_6504) {
      uVar27 = (message->arg0).u32;
      if ((uVar27 != 0xffffffff) && (this_01->field_1F84 != (DArrayTy *)0x0)) {
        pDVar18 = this_01->field_1E2F;
        if (uVar27 < pDVar18->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar18, uVar27) (runtime stride) */
          pvVar16 = (void *)(pDVar18->elementSize * uVar27 + (int)pDVar18->data);
        }
        else {
          pvVar16 = (void *)0x0;
        }
        bVar21 = *(byte *)((int)pvVar16 + 0x104);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_c = (AnonShape_005D1400_891386BF *)CONCAT31(local_c._1_3_,bVar21);
        if (DAT_0080877e == '\0') {
          ChgPlList((SettMapMTy *)this_01,message->arg1,2,(uint)bVar21,0);
        }
        else {
          ChangePlayerCiv((SettMapMTy *)this_01,(message->arg1).u32,bVar21);
          SendPlList((SettMapMTy *)this_01,0);
        }
      }
    }
    else if (SVar5 < MESS_SHARED_6341) {
      if (SVar5 == MESS_SETTMAPMTY_6340) {
        MMMObjTy::PaintSlBut
                  ((MMMObjTy *)this_01,(AnonShape_005B6560_61F462DF *)(this_01->field_1A5B + 0x55c),
                   (int)message,0);
      }
      else if (SVar5 < MESS_CHOOSEMAPTY_6327) {
        if (SVar5 == MESS_SHARED_6326) {
          *(char *)&this_01[1].field_000C = '\x02' - *(char *)(message->arg0).ptr;
        }
        else if (SVar5 == MESS_ID_CREATE) {
          *(DWORD *)((int)&this_01[1].field_000C + 1) = this_01->field_0061;
        }
        else if (SVar5 == MESS_SHARED_0003) {
          if (*(int *)&this_01[1].field_0x2a != 0) {
            FreeAndNull((void **)&this_01[1].field_0x2a);
            *(undefined4 *)((int)&this_01[1].field_002D + 1) = 0;
          }
          pDVar18 = *(DArrayTy **)((int)&this_01[1].field_0031 + 2);
          if (pDVar18 != (DArrayTy *)0x0) {
            DArrayDestroy(pDVar18);
          }
          *(undefined4 *)((int)&this_01[1].field_0031 + 2) = 0;
          if ((this_01->field_004D != 0x60ff) && (g_int_00811764 != (int *)0x0)) {
            if (DAT_0080877e == '\0') {
              FUN_00715360(g_int_00811764,0,'\x11',(char *)0x0,0,0,0xffffffff);
              if (this_01->field_004D != 0x6109) {
                thunk_FUN_005dac60();
              }
            }
            else if (this_01->field_004D == 0x611f) {
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
        piVar9 = (message->arg0).ptr;
        sub_005B5F00((SettMapMTy *)this_01,(AnonShape_006B5B10_E0D06CF1 *)this_01[1].field_0008,
                     piVar9);
        iVar14 = *piVar9;
        local_10 = (char *)piVar9[5];
        ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,this_01[1].field_0008,0,
                         (iVar14 + -1) * (int)local_10,0,(int)local_10,
                         *(int *)(this_01[1].field_0008 + 8) -
                         ((-(uint)(piVar9[1] != 1) & 0xfffffffd) + 3));
        uVar38 = 2;
        iVar37 = -1;
        iVar36 = -1;
        puVar15 = (uint *)LoadResourceString((iVar14 != 1) + 0x2422,g_module_00807618);
        ccFntTy::WrStr(g_startSystem_0081176C->field_0034,puVar15,iVar36,iVar37,uVar38);
        FUN_006b35d0((int *)PTR_008075a8,*(uint *)&this_01[1].field_0x4);
      }
    }
    else if (SVar5 < MESS_PRIVIDERTY_6502) {
      if (SVar5 == MESS_SHARED_6501) {
        uVar27 = (message->arg0).u32;
        if ((uVar27 != 0xffffffff) && (this_01->field_1F84 != (DArrayTy *)0x0)) {
          pDVar18 = this_01->field_1E2F;
          if (uVar27 < pDVar18->count) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar18, uVar27) (runtime stride) */
            pvVar16 = (void *)(pDVar18->elementSize * uVar27 + (int)pDVar18->data);
          }
          else {
            pvVar16 = (void *)0x0;
          }
          bVar21 = *(byte *)((int)pvVar16 + 0x104);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_c = (AnonShape_005D1400_891386BF *)CONCAT31(local_c._1_3_,bVar21);
          if (DAT_0080877e == '\0') {
            ChgPlList((SettMapMTy *)this_01,message->arg1,5,1,(uint)bVar21);
          }
          else {
            ChangePlayerTeam((SettMapMTy *)this_01,(message->arg1).u32,1,(uint)bVar21);
            SendPlList((SettMapMTy *)this_01,0);
          }
        }
      }
      else if (SVar5 == MESS_SHARED_6341) {
        MMMObjTy::PaintSlBut
                  ((MMMObjTy *)this_01,(AnonShape_005B6560_61F462DF *)(this_01->field_1A5B + 0x5ed),
                   (int)message,0);
      }
      else if ((SVar5 == MESS_SHARED_64FF) && (DAT_0080877e != '\0')) {
        FUN_00715360(g_int_00811764,0,' ',(char *)&this_01->field_1F53,0xd,1,0xffffffff);
      }
    }
    else if (((SVar5 == MESS_PRIVIDERTY_6502) &&
             (uVar27 = (message->arg0).u32, uVar27 != 0xffffffff)) &&
            (this_01->field_1F84 != (DArrayTy *)0x0)) {
      pDVar18 = this_01->field_1E2F;
      if (uVar27 < pDVar18->count) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar18, uVar27) (runtime stride) */
        pvVar16 = (void *)(pDVar18->elementSize * uVar27 + (int)pDVar18->data);
      }
      else {
        pvVar16 = (void *)0x0;
      }
      bVar21 = *(byte *)((int)pvVar16 + 0x104);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_c = (AnonShape_005D1400_891386BF *)CONCAT31(local_c._1_3_,bVar21);
      if (DAT_0080877e == '\0') {
        ChgPlList((SettMapMTy *)this_01,message->arg1,1,(uint)bVar21,0);
      }
      else {
        ChangePlayerColor((SettMapMTy *)this_01,(message->arg1).u32,bVar21);
        SendPlList((SettMapMTy *)this_01,0);
      }
    }
    goto switchD_005d1877_caseD_6507;
  }
  if (MESS_SETTMAPMTY_654B < SVar5) {
    if (SVar5 < 0x694b) {
      if (SVar5 == MESS_FSGSTY_694A) {
        pDVar18 = this_01->field_1F84;
        local_34 = 0x1010101;
        bVar34 = false;
        local_30 = (undefined1 *)0x1010101;
        local_5 = '\0';
        local_11 = 0;
        if (pDVar18 != (DArrayTy *)0x0) {
          if (DAT_0080877e == '\0') {
LAB_005d1b5a:
            if (g_cursorClass_00802A30 != (CursorClassTy *)0x0) {
              iVar14 = g_cursorClass_00802A30->field_00C9;
              iVar36 = g_cursorClass_00802A30->field_00C5;
              g_cursorClass_00802A30->field_0493 = 5;
              pCVar11->field_0494 = 0xffff;
              CursorClassTy::SetGCType(pCVar11,CASE_0,iVar36,iVar14);
              CursorClassTy::DrawSprite(pCVar11,pCVar11->field_00C5,pCVar11->field_00C9);
              pCVar11->field_00D2 = 0;
              pCVar11->field_04DF = -1;
            }
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            DAT_008087c4._2_1_ = '\0';
            DAT_0080874f = 0;
            memset((void *)((int)&DAT_008087c4 + 3), 0, 0x288); /* compiler bulk-zero initialization */
            puVar17 = &DAT_008087e9;
            do {
              puVar17[-1] = 0;
              *puVar17 = 0xff;
              puVar17 = puVar17 + 0x51;
            } while ((int)puVar17 < 0x808a71);
            pDVar18 = this_01->field_1F84;
            uVar28 = 0;
            uVar27 = pDVar18->count;
            if (0 < (int)uVar27) {
              bVar34 = uVar27 != 0;
              do {
                if (bVar34) {
                  /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar18, uVar28) (runtime stride) */
                  pcVar26 = (char *)(pDVar18->elementSize * uVar28 + (int)pDVar18->data);
                }
                else {
                  pcVar26 = (char *)0x0;
                }
                if (((pcVar26 != (char *)0x0) && (*pcVar26 != '\0')) && (pcVar26[2] != 0xff)) {
                  *(undefined1 *)((int)&local_34 + (uint)(byte)pcVar26[2]) = 0;
                }
                uVar28 = uVar28 + 1;
                bVar34 = uVar28 < uVar27;
              } while ((int)uVar28 < (int)uVar27);
            }
            local_18 = (AnonShape_005D1400_5A9F7B11 *)0x0;
            if (0 < (int)uVar27) {
              bVar34 = uVar27 != 0;
              do {
                if (bVar34) {
                  /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar18, (int)local_18) (runtime stride) */
                  pcVar26 = (char *)(pDVar18->elementSize * (int)local_18 + (int)pDVar18->data);
                }
                else {
                  pcVar26 = (char *)0x0;
                }
                if (((pcVar26 != (char *)0x0) && (pcVar26[4] != '\0')) &&
                   ((pcVar26[4] != '\x01' ||
                    ((this_01->field_1E26 == CASE_5 || (this_01->field_1E26 == 0xf)))))) {
                  iVar14 = *(int *)(pcVar26 + 0x50);
                  if ((uint)(byte)pcVar26[5] < *(uint *)(iVar14 + 0xc)) {
                    local_c = (AnonShape_005D1400_891386BF *)
                              (*(int *)(iVar14 + 8) * (uint)(byte)pcVar26[5] +
                              *(int *)(iVar14 + 0x1c));
                  }
                  else {
                    local_c = (AnonShape_005D1400_891386BF *)0x0;
                  }
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  DAT_008087c4._2_1_ = DAT_008087c4._2_1_ + '\x01';
                  if (pcVar26[2] == -1) {
                    iVar14 = 0;
                    do {
                      if (*(char *)((int)&local_34 + iVar14) != '\0') {
                        pcVar26[2] = (char)iVar14;
                        *(undefined1 *)((int)&local_34 + iVar14) = 0;
                        break;
                      }
                      iVar14 = iVar14 + 1;
                    } while (iVar14 < 8);
                  }
                  (&DAT_008087e9)[(uint)(byte)pcVar26[2] * 0x51] = pcVar26[2];
                  puVar17 = &local_18->field_0x1;
                  (&DAT_008087e8)[(uint)(byte)pcVar26[2] * 0x51] = pcVar26[3];
                  pDVar18 = this_01->field_1F84;
                  bVar34 = puVar17 < (undefined1 *)pDVar18->count;
                  if ((int)puVar17 < (int)pDVar18->count) {
                    do {
                      if (bVar34) {
                        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar18, (int)puVar17) (runtime stride) */
                        pcVar23 = (char *)(pDVar18->elementSize * (int)puVar17 + (int)pDVar18->data)
                        ;
                      }
                      else {
                        pcVar23 = (char *)0x0;
                      }
                      if (pcVar23 != (char *)0x0) {
                        if (*pcVar23 != '\0') break;
                        pcVar23[2] = pcVar26[2];
                      }
                      pDVar18 = this_01->field_1F84;
                      puVar17 = puVar17 + 1;
                      bVar34 = puVar17 < (undefined1 *)pDVar18->count;
                    } while ((int)puVar17 < (int)pDVar18->count);
                  }
                  uVar27 = 0xffffffff;
                  pcVar23 = &DAT_008016a0;
                  do {
                    pcVar29 = pcVar23;
                    if (uVar27 == 0) break;
                    uVar27 = uVar27 - 1;
                    pcVar29 = pcVar23 + 1;
                    cVar2 = *pcVar23;
                    pcVar23 = pcVar29;
                  } while (cVar2 != '\0');
                  uVar27 = ~uVar27;
                  local_10 = &DAT_008087c8 + (uint)(byte)pcVar26[2] * 0x51;
                  pcVar23 = pcVar29 + -uVar27;
                  pcVar29 = &DAT_008087c8 + (uint)(byte)pcVar26[2] * 0x51;
                  for (uVar28 = uVar27 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
                    *(undefined4 *)pcVar29 = *(undefined4 *)pcVar23;
                    pcVar23 = pcVar23 + 4;
                    pcVar29 = pcVar29 + 4;
                  }
                  for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
                    *pcVar29 = *pcVar23;
                    pcVar23 = pcVar23 + 1;
                    pcVar29 = pcVar29 + 1;
                  }
                  cVar2 = pcVar26[4];
                  if (cVar2 == '\x02') {
                    if (*pcVar26 != '\0') {
                      *(undefined1 *)((int)&DAT_008087c4 + (uint)(byte)pcVar26[2] * 0x51 + 3) = 0;
                    }
                    if (DAT_0080877f == *(int *)(pcVar26 + 6)) {
                      DAT_0080874d = pcVar26[2];
                      DAT_0080874e = pcVar26[3];
                    }
                  }
                  else if (cVar2 == '\x03') {
                    if (DAT_0080877f == *(int *)(pcVar26 + 6)) {
                      DAT_0080874d = pcVar26[2];
                      DAT_0080874e = pcVar26[3];
                      DAT_0080874f = 1;
                    }
                  }
                  else if (cVar2 == '\x04') {
                    *(undefined1 *)((int)&DAT_008087c4 + (uint)(byte)pcVar26[2] * 0x51 + 3) = 1;
                    if (local_c == (AnonShape_005D1400_891386BF *)0x0) {
                      uVar27 = 0xffffffff;
                      pcVar23 = &DAT_008016a0;
                      do {
                        pcVar29 = pcVar23;
                        if (uVar27 == 0) break;
                        uVar27 = uVar27 - 1;
                        pcVar29 = pcVar23 + 1;
                        cVar2 = *pcVar23;
                        pcVar23 = pcVar29;
                      } while (cVar2 != '\0');
                      uVar27 = ~uVar27;
                      local_10 = &DAT_008087c8 + (uint)(byte)pcVar26[2] * 0x51;
                      pcVar23 = pcVar29 + -uVar27;
                      pcVar29 = &DAT_008087c8 + (uint)(byte)pcVar26[2] * 0x51;
                      for (uVar28 = uVar27 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
                        *(undefined4 *)pcVar29 = *(undefined4 *)pcVar23;
                        pcVar23 = pcVar23 + 4;
                        pcVar29 = pcVar29 + 4;
                      }
                      for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
                        *pcVar29 = *pcVar23;
                        pcVar23 = pcVar23 + 1;
                        pcVar29 = pcVar29 + 1;
                      }
                    }
                    else {
                      uVar27 = 0xffffffff;
                      pcVar23 = &local_c->field_0x4c;
                      do {
                        pcVar29 = pcVar23;
                        if (uVar27 == 0) break;
                        uVar27 = uVar27 - 1;
                        pcVar29 = pcVar23 + 1;
                        cVar2 = *pcVar23;
                        pcVar23 = pcVar29;
                      } while (cVar2 != '\0');
                      uVar27 = ~uVar27;
                      local_10 = &DAT_008087c8 + (uint)(byte)pcVar26[2] * 0x51;
                      pcVar23 = pcVar29 + -uVar27;
                      pcVar29 = &DAT_008087c8 + (uint)(byte)pcVar26[2] * 0x51;
                      for (uVar28 = uVar27 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
                        *(undefined4 *)pcVar29 = *(undefined4 *)pcVar23;
                        pcVar23 = pcVar23 + 4;
                        pcVar29 = pcVar29 + 4;
                      }
                      for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
                        *pcVar29 = *pcVar23;
                        pcVar23 = pcVar23 + 1;
                        pcVar29 = pcVar29 + 1;
                      }
                    }
                  }
                  (&DAT_008087ea)[(uint)(byte)pcVar26[2] * 0x51] = pcVar26[0x4a];
                  *(undefined4 *)((int)&DAT_008087eb + (uint)(byte)pcVar26[2] * 0x51) =
                       *(undefined4 *)(pcVar26 + 0x54);
                  *(undefined4 *)((int)&DAT_008087ef + (uint)(byte)pcVar26[2] * 0x51) =
                       *(undefined4 *)(pcVar26 + 0x58);
                  *(undefined4 *)((int)&DAT_008087f3 + (uint)(byte)pcVar26[2] * 0x51) =
                       *(undefined4 *)(pcVar26 + 0x5c);
                }
                pDVar18 = this_01->field_1F84;
                local_18 = (AnonShape_005D1400_5A9F7B11 *)&local_18->field_0x1;
                bVar34 = local_18 < (undefined1 *)pDVar18->count;
              } while ((int)local_18 < (int)pDVar18->count);
            }
            STAppC::sub_0056EE90((STAppC *)&DAT_00807620);
            pCVar11 = g_cursorClass_00802A30;
            if ((this_01->field_1E26 == CASE_7) || (this_01->field_1E26 == 0xe)) {
              if ((this_01->field_1F47 != 0) || ((message->arg0).u32 != 0)) {
                uVar27 = 0xffffffff;
                pcVar26 = &DAT_00853de4;
                do {
                  pcVar23 = pcVar26;
                  if (uVar27 == 0) break;
                  uVar27 = uVar27 - 1;
                  pcVar23 = pcVar26 + 1;
                  cVar2 = *pcVar26;
                  pcVar26 = pcVar23;
                } while (cVar2 != '\0');
                uVar27 = ~uVar27;
                pcVar26 = pcVar23 + -uVar27;
                pcVar23 = &DAT_0080ed16;
                for (uVar28 = uVar27 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
                  *(undefined4 *)pcVar23 = *(undefined4 *)pcVar26;
                  pcVar26 = pcVar26 + 4;
                  pcVar23 = pcVar23 + 4;
                }
                for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
                  *pcVar23 = *pcVar26;
                  pcVar26 = pcVar26 + 1;
                  pcVar23 = pcVar23 + 1;
                }
                goto LAB_005d2018;
              }
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              if ((DAT_0080877e != '\0') && (*(int *)(this_01->field_1A5B + 0x2e6) != 0)) {
                if (g_cursorClass_00802A30 != (CursorClassTy *)0x0) {
                  iVar14 = g_cursorClass_00802A30->field_00C9;
                  iVar36 = g_cursorClass_00802A30->field_00C5;
                  g_cursorClass_00802A30->field_0493 = 1;
                  pCVar11->field_0494 = 0xffff;
                  CursorClassTy::SetGCType(pCVar11,CASE_0,iVar36,iVar14);
                  CursorClassTy::DrawSprite(pCVar11,pCVar11->field_00C5,pCVar11->field_00C9);
                  pCVar11->field_00D2 = 0;
                  pCVar11->field_04DF = -1;
                }
                pMVar6 = this_01->field_1A5B;
                memset(local_90, 0, 0x20); /* compiler bulk-zero initialization */
                iVar14 = 0;
                memset(local_b0, 0, 0x20); /* compiler bulk-zero initialization */
                local_b0[2] = this_01->field_0008;
                local_90[3] = 2;
                local_b0[3] = 2;
                local_80 = 0x694a;
                local_7c = 1;
                local_b0[4] = 0x693f;
                local_90[2] = local_b0[2];
                iVar14 = MMsgTy::SetMessage(*(MMsgTy **)(pMVar6 + 0x2e6),0x251f,'\x01',local_90,
                                            local_b0,(undefined4 *)0x0,0,0);
                if (iVar14 != 0) {
                  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                  (*(code *)this_01->field_0000->field_0024)();
                }
              }
            }
            else {
LAB_005d2018:
              uVar27 = 0xffffffff;
              local_5 = '\x01';
              pcVar26 = &DAT_0080ed16;
              do {
                pcVar23 = pcVar26;
                if (uVar27 == 0) break;
                uVar27 = uVar27 - 1;
                pcVar23 = pcVar26 + 1;
                cVar2 = *pcVar26;
                pcVar26 = pcVar23;
              } while (cVar2 != '\0');
              uVar27 = ~uVar27;
              pcVar26 = pcVar23 + -uVar27;
              pcVar23 = (char *)&DAT_0080ee1a;
              for (uVar28 = uVar27 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
                *(undefined4 *)pcVar23 = *(undefined4 *)pcVar26;
                pcVar26 = pcVar26 + 4;
                pcVar23 = pcVar23 + 4;
              }
              for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
                *pcVar23 = *pcVar26;
                pcVar26 = pcVar26 + 1;
                pcVar23 = pcVar23 + 1;
              }
              uVar27 = 0xffffffff;
              pcVar26 = &DAT_00807680;
              do {
                if (uVar27 == 0) break;
                uVar27 = uVar27 - 1;
                cVar2 = *pcVar26;
                pcVar26 = pcVar26 + 1;
              } while (cVar2 != '\0');
              uVar28 = 0xffffffff;
              pcVar26 = (char *)((int)&DAT_0080ed12 + ~uVar27 + 3);
              do {
                pcVar23 = pcVar26;
                if (uVar28 == 0) break;
                uVar28 = uVar28 - 1;
                pcVar23 = pcVar26 + 1;
                cVar2 = *pcVar26;
                pcVar26 = pcVar23;
              } while (cVar2 != '\0');
              uVar28 = ~uVar28;
              pcVar26 = pcVar23 + -uVar28;
              pcVar23 = &DAT_0080ef1e;
              for (uVar27 = uVar28 >> 2; uVar27 != 0; uVar27 = uVar27 - 1) {
                *(undefined4 *)pcVar23 = *(undefined4 *)pcVar26;
                pcVar26 = pcVar26 + 4;
                pcVar23 = pcVar23 + 4;
              }
              for (uVar28 = uVar28 & 3; uVar28 != 0; uVar28 = uVar28 - 1) {
                *pcVar23 = *pcVar26;
                pcVar26 = pcVar26 + 1;
                pcVar23 = pcVar23 + 1;
              }
            }
            if (local_5 != '\0') {
              DAT_008087a0 = this_01->field_1E26;
              DAT_0080879c = 0;
              if (DAT_0080877e == '\0') {
                memset(&DAT_00808ab0, 0, 0xea0); /* compiler bulk-zero initialization */
                DAT_00808aaf = 0;
                pDVar18 = this_01->field_1F84;
                local_18 = (AnonShape_005D1400_5A9F7B11 *)0x0;
                if (0 < (int)pDVar18->count) {
                  bVar34 = pDVar18->count != 0;
                  do {
                    if (bVar34) {
                      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar18, (int)local_18) (runtime stride) */
                      puVar17 = (undefined1 *)
                                (pDVar18->elementSize * (int)local_18 + (int)pDVar18->data);
                    }
                    else {
                      puVar17 = (undefined1 *)0x0;
                    }
                    if (puVar17 != (undefined1 *)0x0) {
                      cVar2 = puVar17[4];
                      local_5 = cVar2;
                      if ((cVar2 != '\x01') && (cVar2 != '\0')) {
                        if (cVar2 == '\x04') {
                          iVar14 = *(int *)(puVar17 + 0x50);
                          if ((uint)(byte)puVar17[5] < *(uint *)(iVar14 + 0xc)) {
                            pcVar26 = (char *)(*(int *)(iVar14 + 8) * (uint)(byte)puVar17[5] +
                                              *(int *)(iVar14 + 0x1c));
                          }
                          else {
                            pcVar26 = (char *)0x0;
                          }
                          if (pcVar26 != (char *)0x0) {
                            uVar27 = 0xffffffff;
                            do {
                              pcVar23 = pcVar26;
                              if (uVar27 == 0) break;
                              uVar27 = uVar27 - 1;
                              pcVar23 = pcVar26 + 1;
                              cVar1 = *pcVar26;
                              pcVar26 = pcVar23;
                            } while (cVar1 != '\0');
                            uVar27 = ~uVar27;
                            pcVar23 = pcVar23 + -uVar27;
                            local_10 = local_22c;
                            goto LAB_005d24b8;
                          }
                        }
                        else {
                          uVar27 = 0xffffffff;
                          pcVar26 = puVar17 + 10;
                          do {
                            pcVar23 = pcVar26;
                            if (uVar27 == 0) break;
                            uVar27 = uVar27 - 1;
                            pcVar23 = pcVar26 + 1;
                            cVar1 = *pcVar26;
                            pcVar26 = pcVar23;
                          } while (cVar1 != '\0');
                          uVar27 = ~uVar27;
                          pcVar23 = pcVar23 + -uVar27;
                          local_10 = local_22c;
LAB_005d24b8:
                          pcVar26 = local_22c;
                          for (uVar28 = uVar27 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
                            *(undefined4 *)pcVar26 = *(undefined4 *)pcVar23;
                            pcVar23 = pcVar23 + 4;
                            pcVar26 = pcVar26 + 4;
                          }
                          for (uVar27 = uVar27 & 3; local_10 = local_22c, uVar27 != 0;
                              uVar27 = uVar27 - 1) {
                            *pcVar26 = *pcVar23;
                            pcVar23 = pcVar23 + 1;
                            pcVar26 = pcVar26 + 1;
                          }
                        }
                        local_1ec = *(undefined4 *)(puVar17 + 6);
                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                        local_1e8._0_2_ = CONCAT11(*puVar17,puVar17[2]);
                        local_1e4 = this_01->field_0061;
                        if (cVar2 == '\x02') {
                          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                          local_1e8 = CONCAT13(1,CONCAT12(1,(undefined2)local_1e8));
                        }
                        else {
                          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                          local_1e8 = CONCAT13(1,CONCAT12((cVar2 != '\x03') + -1,
                                                          (undefined2)local_1e8)) & 0xff02ffff;
                        }
                        pcVar26 = local_22c;
                        puVar31 = &DAT_00808ab0 + (uint)DAT_00808aaf * 0x27;
                        for (iVar14 = 0x27; iVar14 != 0; iVar14 = iVar14 + -1) {
                          *puVar31 = *(undefined4 *)pcVar26;
                          pcVar26 = pcVar26 + 4;
                          puVar31 = puVar31 + 1;
                        }
                        if ((byte)local_1e8 < 8) {
                          iVar36 = 0;
                          iVar14 = (local_1e8 & 0xff) * 0x51;
                          do {
                            if ((&DAT_00808800)[iVar36 + iVar14] == '\0') {
                              (&DAT_00808800)[iVar36 + iVar14] = DAT_00808aaf;
                              break;
                            }
                            iVar36 = iVar36 + 1;
                          } while (iVar36 < 0x18);
                        }
                        DAT_00808aaf = DAT_00808aaf + 1;
                      }
                    }
                    pDVar18 = this_01->field_1F84;
                    local_18 = (AnonShape_005D1400_5A9F7B11 *)&local_18->field_0x1;
                    bVar34 = local_18 < (undefined1 *)pDVar18->count;
                  } while ((int)local_18 < (int)pDVar18->count);
                }
                RunGame((SettMapMTy *)this_01);
                FUN_006b6500(g_int_00811764,1);
                FUN_00715360(g_int_00811764,1,'.',(char *)0x0,0,0,0xffffffff);
                FUN_006b6500(g_int_00811764,DAT_0080733c);
              }
              else {
                FUN_006b6500(g_int_00811764,1);
                memset((void *)local_70, 0, 0x26); /* compiler bulk-zero initialization */
                iVar14 = 0;
                local_64 = DAT_0080733b;
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_70._3_4_ = DAT_008087be;
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_70._0_2_ = (undefined2)((uint)DAT_00807dd5 >> 0x10);
                local_63 = DAT_00807361;
                local_62 = DAT_00808754;
                local_56 = *(undefined4 *)&this_01->field_0x2121;
                local_70[2] = 2;
                local_5a = DAT_00808aab;
                switch(this_01->field_1E26) {
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
                *(DWORD *)&this_01[1].field_0x37 = this_01->field_0061;
                *(undefined1 *)((int)&this_01[1].field_0031 + 1) = 1;
                pDVar18 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0x28,4,10);
                *(DArrayTy **)((int)&this_01[1].field_0031 + 2) = pDVar18;
                if (g_dArray_0080C4FE != (DArrayTy *)0x0) {
                  DArrayDestroy(g_dArray_0080C4FE);
                }
                g_dArray_0080C4FE = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0x28,4,10);
                memset(&DAT_00808ab0, 0, 0xea0); /* compiler bulk-zero initialization */
                DAT_00808aaf = 0;
                pDVar18 = this_01->field_1F84;
                local_18 = (AnonShape_005D1400_5A9F7B11 *)0x0;
                if (0 < (int)pDVar18->count) {
                  bVar34 = pDVar18->count != 0;
                  do {
                    if (bVar34) {
                      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar18, (int)local_18) (runtime stride) */
                      pAVar30 = (AnonShape_005D1400_891386BF *)
                                (pDVar18->elementSize * (int)local_18 + (int)pDVar18->data);
                    }
                    else {
                      pAVar30 = (AnonShape_005D1400_891386BF *)0x0;
                    }
                    local_c = pAVar30;
                    if (pAVar30 != (AnonShape_005D1400_891386BF *)0x0) {
                      if (((pAVar30->field_0x4 == '\x02') || (pAVar30->field_0x4 == '\x03')) &&
                         (DAT_0080877f != pAVar30->field_0006)) {
                        Library::DKW::TBL::FUN_006ae1c0
                                  (*(uint **)((int)&this_01[1].field_0031 + 2),&pAVar30->field_0006)
                        ;
                        Library::DKW::TBL::FUN_006ae1c0
                                  (&g_dArray_0080C4FE->flags,&pAVar30->field_0006);
                      }
                      cVar2 = pAVar30->field_0x4;
                      local_5 = cVar2;
                      if ((cVar2 != '\x01') && (cVar2 != '\0')) {
                        uVar27 = 0xffffffff;
                        local_10 = local_190;
                        pcVar26 = &local_c->field_0xa;
                        do {
                          pcVar23 = pcVar26;
                          if (uVar27 == 0) break;
                          uVar27 = uVar27 - 1;
                          pcVar23 = pcVar26 + 1;
                          cVar1 = *pcVar26;
                          pcVar26 = pcVar23;
                        } while (cVar1 != '\0');
                        uVar27 = ~uVar27;
                        pcVar26 = pcVar23 + -uVar27;
                        pcVar23 = local_190;
                        for (uVar28 = uVar27 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
                          *(undefined4 *)pcVar23 = *(undefined4 *)pcVar26;
                          pcVar26 = pcVar26 + 4;
                          pcVar23 = pcVar23 + 4;
                        }
                        for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
                          *pcVar23 = *pcVar26;
                          pcVar26 = pcVar26 + 1;
                          pcVar23 = pcVar23 + 1;
                        }
                        if (cVar2 == '\x04') {
                          iVar14 = local_c->field_0050;
                          if ((uint)(byte)local_c->field_0x5 < *(uint *)(iVar14 + 0xc)) {
                            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                            pcVar26 = (char *)(*(int *)(iVar14 + 8) * (uint)(byte)local_c->field_0x5
                                              + *(int *)(iVar14 + 0x1c));
                          }
                          else {
                            pcVar26 = (char *)0x0;
                          }
                          if (pcVar26 != (char *)0x0) {
                            uVar27 = 0xffffffff;
                            do {
                              pcVar23 = pcVar26;
                              if (uVar27 == 0) break;
                              uVar27 = uVar27 - 1;
                              pcVar23 = pcVar26 + 1;
                              cVar1 = *pcVar26;
                              pcVar26 = pcVar23;
                            } while (cVar1 != '\0');
                            uVar27 = ~uVar27;
                            pcVar23 = pcVar23 + -uVar27;
                            local_10 = local_190;
                            goto LAB_005d22dd;
                          }
                        }
                        else {
                          uVar27 = 0xffffffff;
                          pcVar26 = &local_c->field_0xa;
                          do {
                            pcVar23 = pcVar26;
                            if (uVar27 == 0) break;
                            uVar27 = uVar27 - 1;
                            pcVar23 = pcVar26 + 1;
                            cVar1 = *pcVar26;
                            pcVar26 = pcVar23;
                          } while (cVar1 != '\0');
                          uVar27 = ~uVar27;
                          pcVar23 = pcVar23 + -uVar27;
                          local_10 = local_190;
LAB_005d22dd:
                          pcVar26 = local_190;
                          for (uVar28 = uVar27 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
                            *(undefined4 *)pcVar26 = *(undefined4 *)pcVar23;
                            pcVar23 = pcVar23 + 4;
                            pcVar26 = pcVar26 + 4;
                          }
                          for (uVar27 = uVar27 & 3; local_10 = local_190, uVar27 != 0;
                              uVar27 = uVar27 - 1) {
                            *pcVar26 = *pcVar23;
                            pcVar23 = pcVar23 + 1;
                            pcVar26 = pcVar26 + 1;
                          }
                        }
                        local_150 = local_c->field_0006;
                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                        local_14c._0_2_ = CONCAT11(*(undefined1 *)local_c,local_c->field_0x2);
                        local_148 = this_01->field_0061;
                        if (cVar2 == '\x02') {
                          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                          local_14c = CONCAT13(1,CONCAT12(1,(undefined2)local_14c));
                        }
                        else {
                          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                          local_14c = CONCAT13(1,CONCAT12((cVar2 != '\x03') + -1,
                                                          (undefined2)local_14c)) & 0xff02ffff;
                        }
                        pcVar26 = local_190;
                        puVar31 = &DAT_00808ab0 + (uint)DAT_00808aaf * 0x27;
                        for (iVar14 = 0x27; iVar14 != 0; iVar14 = iVar14 + -1) {
                          *puVar31 = *(undefined4 *)pcVar26;
                          pcVar26 = pcVar26 + 4;
                          puVar31 = puVar31 + 1;
                        }
                        if ((byte)local_14c < 8) {
                          iVar36 = 0;
                          iVar14 = (local_14c & 0xff) * 0x51;
                          do {
                            if ((&DAT_00808800)[iVar36 + iVar14] == '\0') {
                              (&DAT_00808800)[iVar36 + iVar14] = DAT_00808aaf;
                              break;
                            }
                            iVar36 = iVar36 + 1;
                          } while (iVar36 < 0x18);
                        }
                        DAT_00808aaf = DAT_00808aaf + 1;
                      }
                    }
                    pDVar18 = this_01->field_1F84;
                    local_18 = (AnonShape_005D1400_5A9F7B11 *)&local_18->field_0x1;
                    bVar34 = local_18 < (undefined1 *)pDVar18->count;
                  } while ((int)local_18 < (int)pDVar18->count);
                }
                if (*(int *)(*(int *)((int)&this_01[1].field_0031 + 2) + 0xc) == 0) {
                  *(undefined1 *)((int)&this_01[1].field_0031 + 1) = 0;
                  RunGame((SettMapMTy *)this_01);
                  if (DAT_008067a0 != '\0') {
                    CFsgsConnection::UpdateGame
                              ((CFsgsConnection *)&DAT_00802a90,6,&this_01->field_0x1a5f);
                    CFsgsConnection::StartGame((CFsgsConnection *)&DAT_00802a90);
                  }
                }
              }
              if ((this_01->field_1E26 == CASE_C) || (this_01->field_1E26 == 0x10)) {
                DAT_0080879c = 1;
                _DAT_0080f32e = 1;
              }
            }
          }
          else {
            if (0 < (int)pDVar18->count) {
              bVar33 = pDVar18->count != 0;
              do {
                if (bVar33) {
                  /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar18, uVar27) (runtime stride) */
                  pvVar16 = (void *)(pDVar18->elementSize * uVar27 + (int)pDVar18->data);
                }
                else {
                  pvVar16 = (void *)0x0;
                }
                if ((pvVar16 != (void *)0x0) &&
                   (((*(char *)((int)pvVar16 + 4) == '\x02' ||
                     (*(char *)((int)pvVar16 + 4) == '\x03')) &&
                    (*(char *)((int)pvVar16 + 0x4f) == '\0')))) {
                  bVar34 = true;
                  break;
                }
                uVar27 = uVar27 + 1;
                bVar33 = uVar27 < pDVar18->count;
              } while ((int)uVar27 < (int)pDVar18->count);
            }
            if (bVar34) {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              if (*(MMsgTy **)(this_01->field_1A5B + 0x2e6) != (MMsgTy *)0x0) {
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                MMsgTy::SetMessage(*(MMsgTy **)(this_01->field_1A5B + 0x2e6),0x2527,'\0',
                                   (undefined4 *)0x0,(undefined4 *)0x0,(undefined4 *)0x0,0,0);
              }
            }
            else {
              uVar27 = 0;
              if (0 < (int)pDVar18->count) {
                bVar34 = pDVar18->count != 0;
                do {
                  if (bVar34) {
                    /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar18, uVar27) (runtime stride) */
                    pcVar26 = (char *)(pDVar18->elementSize * uVar27 + (int)pDVar18->data);
                  }
                  else {
                    pcVar26 = (char *)0x0;
                  }
                  if ((pcVar26 != (char *)0x0) && (*pcVar26 != '\0')) {
                    cVar2 = pcVar26[4];
                    if (this_01->field_1E26 == CASE_C) {
                      if ((cVar2 == '\0') || (cVar2 == '\x01')) {
                        local_11 = 0;
                        break;
                      }
                    }
                    else if ((cVar2 == '\0') || (cVar2 == '\x01')) goto LAB_005d1b17;
                    local_11 = local_11 + 1;
                  }
LAB_005d1b17:
                  uVar27 = uVar27 + 1;
                  bVar34 = uVar27 < pDVar18->count;
                } while ((int)uVar27 < (int)pDVar18->count);
              }
              if (1 < local_11) goto LAB_005d1b5a;
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              if (*(MMsgTy **)(this_01->field_1A5B + 0x2e6) != (MMsgTy *)0x0) {
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                MMsgTy::SetMessage(*(MMsgTy **)(this_01->field_1A5B + 0x2e6),0x2528,'\0',
                                   (undefined4 *)0x0,(undefined4 *)0x0,(undefined4 *)0x0,0,0);
              }
            }
          }
        }
      }
      else if (SVar5 == MESS_SETTMAPMTY_654C) {
        if (DAT_0080877e != '\0') {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          CheckPlList((SettMapMTy *)this_01,unaff_EDI);
          sub_005D1380((SettMapMTy *)this_01);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (*(code *)this_01->field_0000->field_002C)();
          SettMapTy::PaintSC(this_01);
          goto switchD_005d1877_caseD_6549;
        }
      }
      else if (SVar5 == MESS_SETTMAPTY_654D) goto switchD_005d1877_caseD_6548;
    }
    else if (SVar5 == MESS_SHARED_C0A2) {
      iVar14 = thunk_FUN_005ddb40((int)this_01->field_1A5B);
      if (iVar14 == 0) {
        if (DAT_008067a0 != '\0') {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if (*(int *)(*(int *)(this_01->field_1A5B + 0x686) + 8) < 1) {
            pcVar26 = (char *)0x0;
          }
          else {
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            pcVar26 = (char *)**(undefined4 **)(*(int *)(this_01->field_1A5B + 0x686) + 0x14);
          }
          bVar34 = thunk_FUN_005717e0(pcVar26);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          if (CONCAT31(extraout_var,bVar34) != 0) {
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            if (*(int *)(*(int *)(this_01->field_1A5B + 0x686) + 8) < 1) {
              CFsgsConnection::SendChatMessage((CFsgsConnection *)&DAT_00802a90,(char *)0x0);
            }
            else {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              CFsgsConnection::SendChatMessage
                        ((CFsgsConnection *)&DAT_00802a90,
                         (char *)**(undefined4 **)(*(int *)(this_01->field_1A5B + 0x686) + 0x14));
            }
            goto LAB_005d28da;
          }
        }
        pcVar26 = local_680;
        for (iVar14 = 0x114; iVar14 != 0; iVar14 = iVar14 + -1) {
          pcVar26[0] = '\0';
          pcVar26[1] = '\0';
          pcVar26[2] = '\0';
          pcVar26[3] = '\0';
          pcVar26 = pcVar26 + 4;
        }
        *pcVar26 = '\0';
        pcVar26 = &DAT_00807e1d;
        if (DAT_008067a0 == '\0') {
          pcVar26 = (char *)&DAT_00807ddd;
        }
        uVar27 = 0xffffffff;
        do {
          pcVar23 = pcVar26;
          if (uVar27 == 0) break;
          uVar27 = uVar27 - 1;
          pcVar23 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar23;
        } while (cVar2 != '\0');
        uVar27 = ~uVar27;
        this_00 = (StartSystemTy *)this_01->field_1A5B;
        pcVar26 = pcVar23 + -uVar27;
        pcVar23 = local_680;
        for (uVar28 = uVar27 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
          *(undefined4 *)pcVar23 = *(undefined4 *)pcVar26;
          pcVar26 = pcVar26 + 4;
          pcVar23 = pcVar23 + 4;
        }
        for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
          *pcVar23 = *pcVar26;
          pcVar26 = pcVar26 + 1;
          pcVar23 = pcVar23 + 1;
        }
        pDVar18 = this_00->field_0686;
        if ((int)pDVar18->elementSize < 1) {
          pcVar26 = (char *)0x0;
        }
        else {
          pcVar26 = *(char **)pDVar18->growCapacity;
        }
        uVar27 = 0xffffffff;
        do {
          pcVar23 = pcVar26;
          if (uVar27 == 0) break;
          uVar27 = uVar27 - 1;
          pcVar23 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar23;
        } while (cVar2 != '\0');
        uVar27 = ~uVar27;
        pcVar26 = pcVar23 + -uVar27;
        pcVar23 = local_640;
        for (uVar28 = uVar27 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
          *(undefined4 *)pcVar23 = *(undefined4 *)pcVar26;
          pcVar26 = pcVar26 + 4;
          pcVar23 = pcVar23 + 4;
        }
        for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
          *pcVar23 = *pcVar26;
          pcVar26 = pcVar26 + 1;
          pcVar23 = pcVar23 + 1;
        }
        local_10 = local_640;
        StartSystemTy::AddToChat(this_00,(int)local_680);
        if (*(char *)&this_01[1].field_000C == '\0') {
          pDVar18 = this_01->field_1F84;
          if (pDVar18 != (DArrayTy *)0x0) {
            uVar27 = pDVar18->count;
            uVar28 = 0;
            if (uVar27 != 0) {
              if (uVar27 == 0) {
                pvVar16 = (void *)0x0;
                goto LAB_005d277a;
              }
              do {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar18, uVar28) (runtime stride) */
                pvVar16 = (void *)(pDVar18->elementSize * uVar28 + (int)pDVar18->data);
LAB_005d277a:
                if ((pvVar16 != (void *)0x0) &&
                   (((*(char *)((int)pvVar16 + 4) == '\x02' ||
                     (*(char *)((int)pvVar16 + 4) == '\x03')) &&
                    (*(int *)((int)pvVar16 + 6) == DAT_0080877f)))) {
                  local_5 = *(char *)((int)pvVar16 + 0x4a);
                  break;
                }
                uVar28 = uVar28 + 1;
              } while (uVar28 < uVar27);
            }
            local_c = (AnonShape_005D1400_891386BF *)0x0;
            if (uVar27 != 0) {
              if (uVar27 == 0) {
                pvVar16 = (void *)0x0;
                goto LAB_005d27c3;
              }
              do {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar18, (int)local_c) (runtime stride) */
                pvVar16 = (void *)(pDVar18->elementSize * (int)local_c + (int)pDVar18->data);
LAB_005d27c3:
                if (((pvVar16 != (void *)0x0) &&
                    ((*(char *)((int)pvVar16 + 4) == '\x02' ||
                     (*(char *)((int)pvVar16 + 4) == '\x03')))) &&
                   (*(int *)((int)pvVar16 + 6) != DAT_0080877f)) {
                  if (DAT_00808a8f == '\0') {
                    if (((DAT_0080874d != 0xff) &&
                        (bVar21 = *(byte *)((int)pvVar16 + 2), bVar21 != 0xff)) &&
                       (DAT_0080874d != bVar21)) {
                      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                      local_10 = (char *)CONCAT31(local_10._1_3_,bVar21);
                      uVar27 = (uint)DAT_0080874d;
                      bVar3 = g_playerRelationMatrix[uVar27][bVar21];
                      if ((bVar3 == 0) && (g_playerRelationMatrix[bVar21][uVar27] == 0)) {
                        iVar14 = -2;
                      }
                      else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar21][uVar27] == 0)) {
                        iVar14 = -1;
                      }
                      else if ((bVar3 == 0) && (g_playerRelationMatrix[bVar21][uVar27] == 1)) {
                        iVar14 = 1;
                      }
                      else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar21][uVar27] == 1)) {
                        iVar14 = 2;
                      }
                      else {
                        iVar14 = 0;
                      }
                      if (iVar14 == 2) goto LAB_005d28a0;
                    }
                  }
                  else if (*(char *)((int)pvVar16 + 0x4a) == local_5) {
LAB_005d28a0:
                    FUN_00715360(g_int_00811764,*(int *)((int)pvVar16 + 6),'\x1b',local_680,0x451,1,
                                 0xffffffff);
                  }
                }
                pDVar18 = this_01->field_1F84;
                local_c = (AnonShape_005D1400_891386BF *)&local_c->field_0x1;
              } while (local_c < (undefined1 *)pDVar18->count);
            }
          }
        }
        else {
          FUN_00715360(g_int_00811764,0,'\x1b',local_680,0x451,1,0xffffffff);
        }
      }
/* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
LAB_005d28da:
      Library::DKW::TBL::FUN_006b6020(*(uint **)(this_01->field_1A5B + 0x686),0,&DAT_008016a0);
      this_01->field_002D = 0x33;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      this_01->field_0031 = *(undefined4 *)(this_01->field_1A5B + 0x686);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      FUN_006e6080(this_01,2,*(undefined4 *)(this_01->field_1A5B + 0x54c),
                   (undefined4 *)&this_01->field_0x1d);
    }
    goto switchD_005d1877_caseD_6507;
  }
  if (SVar5 < MESS_SETTMAPMTY_654A) {
    switch(SVar5) {
    case MESS_SETTMAPSTY_6505:
      uVar27 = (message->arg0).u32;
      if ((uVar27 != 0xffffffff) && (this_01->field_1F84 != (DArrayTy *)0x0)) {
        pDVar18 = this_01->field_1E2F;
        if (uVar27 < pDVar18->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar18, uVar27) (runtime stride) */
          pvVar16 = (void *)(pDVar18->elementSize * uVar27 + (int)pDVar18->data);
        }
        else {
          pvVar16 = (void *)0x0;
        }
        if (DAT_0080877e == '\0') {
          ChgPlList((SettMapMTy *)this_01,message->arg1,3,*(undefined4 *)((int)pvVar16 + 0x104),
                    *(undefined4 *)((int)pvVar16 + 0x108));
          *(undefined1 *)((int)&this_01[1].field_0045 + 3) = 0;
        }
        else {
          pcVar26 = &DAT_00807e1d;
          if (DAT_008067a0 == '\0') {
            pcVar26 = (char *)&DAT_00807ddd;
          }
          ChangePlayerList((SettMapMTy *)this_01,DAT_0080877f,(message->arg1).u32,
                           *(int *)((int)pvVar16 + 0x104),
                           (char)*(undefined4 *)((int)pvVar16 + 0x108),pcVar26);
          SendPlList((SettMapMTy *)this_01,0);
        }
      }
      break;
    case MESS_FSGSTY_6506:
      uVar27 = (message->arg1).u32;
      if (uVar27 == 0) {
        if (DAT_0080877e != '\0') {
          DAT_00808aab = DAT_00808aab + 1;
          *(int *)&this_01->field_0x2121 = *(int *)&this_01->field_0x2121 + 1;
          SendDesc((SettMapMTy *)this_01,0);
          SendPlList((SettMapMTy *)this_01,0);
        }
      }
      else if (((2 < uVar27) && (uVar27 < 9)) && (DAT_0080877e != '\0')) {
        DAT_00808aab = DAT_00808aab + 1;
        SendDesc((SettMapMTy *)this_01,0);
      }
      break;
    case MESS_SETTMAPTY_6548:
      goto switchD_005d1877_caseD_6548;
    case MESS_SETTMAPMTY_6549:
switchD_005d1877_caseD_6549:
      if (DAT_0080877e != '\0') {
        *(int *)&this_01->field_0x2121 = *(int *)&this_01->field_0x2121 + 1;
        SendPlList((SettMapMTy *)this_01,0);
        goto switchD_005d1877_caseD_6548;
      }
    }
  }
  else {
switchD_005d1877_caseD_6548:
    if (DAT_0080877e != '\0') {
      DAT_00808aab = DAT_00808aab + 1;
      SendDesc((SettMapMTy *)this_01,0);
    }
  }
switchD_005d1877_caseD_6507:
  SVar5 = message->id;
  if (((0x69fe < SVar5) && (SVar5 < MESS_SHARED_6A7F)) && (this_01->field_0065 == '\x01')) {
    pDVar18 = this_01->field_1F84;
    local_2c = SVar5 - MESS_SHARED_69FF >> 3;
    if ((pDVar18 == (DArrayTy *)0x0) ||
       (uVar27 = local_2c + this_01->field_1F88, pDVar18->count <= uVar27)) {
      pAVar24 = (AnonShape_005D1400_5A9F7B11 *)0x0;
    }
    else {
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar18, uVar27) (runtime stride) */
      pAVar24 = (AnonShape_005D1400_5A9F7B11 *)(pDVar18->elementSize * uVar27 + (int)pDVar18->data);
    }
    local_18 = pAVar24;
    if (pAVar24 != (AnonShape_005D1400_5A9F7B11 *)0x0) {
      switch(SVar5 + 1 & 7) {
      case MESS_ID_NONE:
        if ((pAVar24->field_0x4 == '\x02') && (*(int *)&pAVar24->field_0x6 == DAT_0080877f)) {
          if (DAT_0080877e == '\0') {
            uVar28 = 0;
            uVar27 = 0;
            iVar14 = this_01->field_1F88 + local_2c;
            uVar38 = 0;
            goto LAB_005d34ee;
          }
          ChangePlayerState((SettMapMTy *)this_01,this_01->field_1F88 + local_2c);
          SendPlList((SettMapMTy *)this_01,0);
        }
        break;
      case 1:
        if (*(char *)pAVar24 != '\0') {
          uVar27 = pDVar18->count;
          local_44 = 0x1010101;
          local_40 = 0x1010101;
          uVar28 = 0;
          if (0 < (int)uVar27) {
            bVar34 = uVar27 != 0;
            do {
              if (bVar34) {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
                pcVar26 = (char *)(this_01->field_1F84->elementSize * uVar28 +
                                  (int)this_01->field_1F84->data);
              }
              else {
                pcVar26 = (char *)0x0;
              }
              if ((*pcVar26 != '\0') && (pcVar26[2] != 0xff)) {
                *(undefined1 *)((int)&local_44 + (uint)(byte)pcVar26[2]) = 0;
              }
              uVar28 = uVar28 + 1;
              bVar34 = uVar28 < uVar27;
            } while ((int)uVar28 < (int)uVar27);
          }
          if (pAVar24->field_0x2 != 0xff) {
            *(undefined1 *)((int)&local_44 + (uint)(byte)pAVar24->field_0x2) = 1;
          }
          uVar27 = 0;
          this_01->field_2171 = 0x6502;
          this_01->field_2179 = this_01->field_1F88 + local_2c;
          this_01->field_2191 = 0x6503;
          this_01->field_21A1 = 0;
          this_01->field_1E2F->count = 0;
          this_01->field_1F37 = 0xff;
          Library::DKW::TBL::FUN_006ae1c0
                    (&this_01->field_1E2F->flags,(undefined4 *)&this_01->field_0x1e33);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_c = (AnonShape_005D1400_891386BF *)CONCAT31(local_c._1_3_,1);
          do {
            if (*(char *)((int)&local_44 + uVar27) != '\0') {
              this_01->field_1F37 = uVar27;
              Library::DKW::TBL::FUN_006ae1c0
                        (&this_01->field_1E2F->flags,(undefined4 *)&this_01->field_0x1e33);
              if ((byte)pAVar24->field_0x2 == uVar27) {
                this_01->field_21A1 = (uint)local_c & 0xff;
              }
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_c = (AnonShape_005D1400_891386BF *)
                        CONCAT31(local_c._1_3_,(byte)local_c + '\x01');
            }
            uVar27 = uVar27 + 1;
          } while ((int)uVar27 < 8);
          dVar7 = this_01->field_1E2F->count;
          this_01->field_21C5 = 0x124;
          this_01->field_21A9 = dVar7;
          this_01->field_21CD = 0x1e;
          this_01->field_21A5 = 0x12;
          this_01->field_21C9 = local_2c * 0x19 + 0x41;
LAB_005d3188:
          (*this_01->field_000C->vtable->CreateObject)
                    ((SystemClassTy *)this_01->field_000C,0x100ef,(undefined4 *)0x0,(int *)0x0,
                     &this_01->field_0x2161,0);
        }
        break;
      case MESS_ID_CREATE:
        if (*(char *)pAVar24 != '\0') {
          this_01->field_2171 = 0x6504;
          this_01->field_2179 = this_01->field_1F88 + local_2c;
          this_01->field_2191 = 0x6500;
          this_01->field_1E2F->count = 0;
          local_10 = (char *)0x1;
          pcVar26 = LoadResourceString(0x23f1,g_module_00807618);
          uVar27 = 0xffffffff;
          do {
            pcVar23 = pcVar26;
            if (uVar27 == 0) break;
            uVar27 = uVar27 - 1;
            pcVar23 = pcVar26 + 1;
            cVar2 = *pcVar26;
            pcVar26 = pcVar23;
          } while (cVar2 != '\0');
          uVar27 = ~uVar27;
          pcVar26 = pcVar23 + -uVar27;
          pcVar23 = &this_01->field_0x1e33;
          for (uVar28 = uVar27 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
            *(undefined4 *)pcVar23 = *(undefined4 *)pcVar26;
            pcVar26 = pcVar26 + 4;
            pcVar23 = pcVar23 + 4;
          }
          for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
            *pcVar23 = *pcVar26;
            pcVar26 = pcVar26 + 1;
            pcVar23 = pcVar23 + 1;
          }
          for (puVar15 = Library::MSVCRT::FUN_0072e560((uint *)&this_01->field_0x1e33,'\n');
              puVar15 != (uint *)0x0; puVar15 = Library::MSVCRT::FUN_0072e560(puVar15,'\n')) {
            *(undefined1 *)puVar15 = 0x20;
          }
          this_01->field_1F37 = 1;
          Library::DKW::TBL::FUN_006ae1c0
                    (&this_01->field_1E2F->flags,(undefined4 *)&this_01->field_0x1e33);
          pcVar26 = LoadResourceString(0x23f0,g_module_00807618);
          uVar27 = 0xffffffff;
          do {
            pcVar23 = pcVar26;
            if (uVar27 == 0) break;
            uVar27 = uVar27 - 1;
            pcVar23 = pcVar26 + 1;
            cVar2 = *pcVar26;
            pcVar26 = pcVar23;
          } while (cVar2 != '\0');
          uVar27 = ~uVar27;
          pcVar26 = pcVar23 + -uVar27;
          pcVar23 = &this_01->field_0x1e33;
          for (uVar28 = uVar27 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
            *(undefined4 *)pcVar23 = *(undefined4 *)pcVar26;
            pcVar26 = pcVar26 + 4;
            pcVar23 = pcVar23 + 4;
          }
          for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
            *pcVar23 = *pcVar26;
            pcVar26 = pcVar26 + 1;
            pcVar23 = pcVar23 + 1;
          }
          for (puVar15 = Library::MSVCRT::FUN_0072e560((uint *)&this_01->field_0x1e33,'\n');
              puVar15 != (uint *)0x0; puVar15 = Library::MSVCRT::FUN_0072e560(puVar15,'\n')) {
            *(undefined1 *)puVar15 = 0x20;
          }
          this_01->field_1F37 = 2;
          Library::DKW::TBL::FUN_006ae1c0
                    (&this_01->field_1E2F->flags,(undefined4 *)&this_01->field_0x1e33);
          pcVar26 = local_10;
          if ((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) {
            pcVar26 = (char *)(uint)(local_18->field_0x4 != '\x02');
          }
          if (pcVar26 != (char *)0x0) {
            pcVar26 = LoadResourceString(0x23f2,g_module_00807618);
            uVar27 = 0xffffffff;
            do {
              pcVar23 = pcVar26;
              if (uVar27 == 0) break;
              uVar27 = uVar27 - 1;
              pcVar23 = pcVar26 + 1;
              cVar2 = *pcVar26;
              pcVar26 = pcVar23;
            } while (cVar2 != '\0');
            uVar27 = ~uVar27;
            pcVar26 = pcVar23 + -uVar27;
            pcVar23 = &this_01->field_0x1e33;
            for (uVar28 = uVar27 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
              *(undefined4 *)pcVar23 = *(undefined4 *)pcVar26;
              pcVar26 = pcVar26 + 4;
              pcVar23 = pcVar23 + 4;
            }
            for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
              *pcVar23 = *pcVar26;
              pcVar26 = pcVar26 + 1;
              pcVar23 = pcVar23 + 1;
            }
            for (puVar15 = Library::MSVCRT::FUN_0072e560((uint *)&this_01->field_0x1e33,'\n');
                puVar15 != (uint *)0x0; puVar15 = Library::MSVCRT::FUN_0072e560(puVar15,'\n')) {
              *(undefined1 *)puVar15 = 0x20;
            }
            this_01->field_1F37 = 3;
            Library::DKW::TBL::FUN_006ae1c0
                      (&this_01->field_1E2F->flags,(undefined4 *)&this_01->field_0x1e33);
          }
          this_01->field_21A9 = this_01->field_1E2F->count;
          bVar21 = local_18->field_0x3;
          this_01->field_21C5 = 0x143;
          this_01->field_21CD = 0x78;
          this_01->field_21A1 = bVar21 - 1;
          this_01->field_21C9 = local_2c * 0x19 + 0x41;
          pcVar8 = g_startSystem_0081176C->field_0034;
          if (pcVar8->field_00A0 != 0) {
            FUN_00710790((AnonShape_00710790_4CBB90D4 *)pcVar8);
          }
          this_01->field_21A5 = *(undefined4 *)&pcVar8->field_0x8a;
          goto LAB_005d3188;
        }
        break;
      case MESS_SHARED_0003:
        this_01->field_2171 = 0x6505;
        this_01->field_2179 = local_2c + this_01->field_1F88;
        this_01->field_2191 = 0x6500;
        this_01->field_1E2F->count = 0;
        memset(&this_01->field_0x1e33, 0, 0x10c); /* compiler bulk-zero initialization */
        if (*(char *)pAVar24 == '\0') {
          uVar27 = local_2c + this_01->field_1F88;
          local_5 = '\0';
          if (-1 < (int)uVar27) {
            pDVar18 = this_01->field_1F84;
            do {
              if (uVar27 < pDVar18->count) {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar18, uVar27) (runtime stride) */
                pcVar26 = (char *)(pDVar18->elementSize * uVar27 + (int)pDVar18->data);
              }
              else {
                pcVar26 = (char *)0x0;
              }
              if (*pcVar26 != '\0') {
                if ((pcVar26[4] == '\x02') && (*(int *)(pcVar26 + 6) != DAT_0080877f)) {
                  local_5 = '\x01';
                }
                break;
              }
              uVar27 = uVar27 - 1;
            } while (-1 < (int)uVar27);
          }
          if (local_5 != '\0') {
            pcVar26 = LoadResourceString(0x1f42,g_module_00807618);
            uVar27 = 0xffffffff;
            do {
              pcVar23 = pcVar26;
              if (uVar27 == 0) break;
              uVar27 = uVar27 - 1;
              pcVar23 = pcVar26 + 1;
              cVar2 = *pcVar26;
              pcVar26 = pcVar23;
            } while (cVar2 != '\0');
            uVar27 = ~uVar27;
            pcVar26 = pcVar23 + -uVar27;
            pcVar23 = &this_01->field_0x1e33;
            for (uVar28 = uVar27 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
              *(undefined4 *)pcVar23 = *(undefined4 *)pcVar26;
              pcVar26 = pcVar26 + 4;
              pcVar23 = pcVar23 + 4;
            }
            for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
              *pcVar23 = *pcVar26;
              pcVar26 = pcVar26 + 1;
              pcVar23 = pcVar23 + 1;
            }
            this_01->field_1F37 = 2;
            Library::DKW::TBL::FUN_006ae1c0
                      (&this_01->field_1E2F->flags,(undefined4 *)&this_01->field_0x1e33);
            if (DAT_00808aaa != '\0') {
              pcVar26 = LoadResourceString(0x1f46,g_module_00807618);
              uVar27 = 0xffffffff;
              do {
                pcVar23 = pcVar26;
                if (uVar27 == 0) break;
                uVar27 = uVar27 - 1;
                pcVar23 = pcVar26 + 1;
                cVar2 = *pcVar26;
                pcVar26 = pcVar23;
              } while (cVar2 != '\0');
              uVar27 = ~uVar27;
              pcVar26 = pcVar23 + -uVar27;
              pcVar23 = &this_01->field_0x1e33;
              for (uVar28 = uVar27 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
                *(undefined4 *)pcVar23 = *(undefined4 *)pcVar26;
                pcVar26 = pcVar26 + 4;
                pcVar23 = pcVar23 + 4;
              }
              for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
                *pcVar23 = *pcVar26;
                pcVar26 = pcVar26 + 1;
                pcVar23 = pcVar23 + 1;
              }
              this_01->field_1F37 = 3;
              Library::DKW::TBL::FUN_006ae1c0
                        (&this_01->field_1E2F->flags,(undefined4 *)&this_01->field_0x1e33);
            }
          }
          pcVar26 = LoadResourceString(0x1f41,g_module_00807618);
          uVar27 = 0xffffffff;
          do {
            pcVar23 = pcVar26;
            if (uVar27 == 0) break;
            uVar27 = uVar27 - 1;
            pcVar23 = pcVar26 + 1;
            cVar2 = *pcVar26;
            pcVar26 = pcVar23;
          } while (cVar2 != '\0');
          uVar27 = ~uVar27;
          pcVar26 = pcVar23 + -uVar27;
          pcVar23 = &this_01->field_0x1e33;
          for (uVar28 = uVar27 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
            *(undefined4 *)pcVar23 = *(undefined4 *)pcVar26;
            pcVar26 = pcVar26 + 4;
            pcVar23 = pcVar23 + 4;
          }
          for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
            *pcVar23 = *pcVar26;
            pcVar26 = pcVar26 + 1;
            pcVar23 = pcVar23 + 1;
          }
          this_01->field_1F37 = 1;
          Library::DKW::TBL::FUN_006ae1c0
                    (&this_01->field_1E2F->flags,(undefined4 *)&this_01->field_0x1e33);
        }
        else {
          if ((this_01->field_1E26 != CASE_5) || (pAVar24->field_0x4 != '\x04')) {
            if ((DAT_0080877e != '\0') && (this_01->field_1E26 != CASE_5)) {
              pcVar26 = LoadResourceString(8000,g_module_00807618);
              uVar27 = 0xffffffff;
              do {
                pcVar23 = pcVar26;
                if (uVar27 == 0) break;
                uVar27 = uVar27 - 1;
                pcVar23 = pcVar26 + 1;
                cVar2 = *pcVar26;
                pcVar26 = pcVar23;
              } while (cVar2 != '\0');
              uVar27 = ~uVar27;
              pcVar26 = pcVar23 + -uVar27;
              pcVar23 = &this_01->field_0x1e33;
              for (uVar28 = uVar27 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
                *(undefined4 *)pcVar23 = *(undefined4 *)pcVar26;
                pcVar26 = pcVar26 + 4;
                pcVar23 = pcVar23 + 4;
              }
              for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
                *pcVar23 = *pcVar26;
                pcVar26 = pcVar26 + 1;
                pcVar23 = pcVar23 + 1;
              }
              this_01->field_1F37 = 0;
              Library::DKW::TBL::FUN_006ae1c0
                        (&this_01->field_1E2F->flags,(undefined4 *)&this_01->field_0x1e33);
            }
            bVar34 = true;
            if ((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) {
              bVar34 = local_18->field_0x3 != '\x03';
            }
            if (bVar34) {
              pcVar26 = LoadResourceString(0x1f42,g_module_00807618);
              uVar27 = 0xffffffff;
              do {
                pcVar23 = pcVar26;
                if (uVar27 == 0) break;
                uVar27 = uVar27 - 1;
                pcVar23 = pcVar26 + 1;
                cVar2 = *pcVar26;
                pcVar26 = pcVar23;
              } while (cVar2 != '\0');
              uVar27 = ~uVar27;
              pcVar26 = pcVar23 + -uVar27;
              pcVar23 = &this_01->field_0x1e33;
              for (uVar28 = uVar27 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
                *(undefined4 *)pcVar23 = *(undefined4 *)pcVar26;
                pcVar26 = pcVar26 + 4;
                pcVar23 = pcVar23 + 4;
              }
              for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
                *pcVar23 = *pcVar26;
                pcVar26 = pcVar26 + 1;
                pcVar23 = pcVar23 + 1;
              }
              this_01->field_1F37 = 2;
              Library::DKW::TBL::FUN_006ae1c0
                        (&this_01->field_1E2F->flags,(undefined4 *)&this_01->field_0x1e33);
            }
            pcVar26 = LoadResourceString(0x1f41,g_module_00807618);
            uVar27 = 0xffffffff;
            do {
              pcVar23 = pcVar26;
              if (uVar27 == 0) break;
              uVar27 = uVar27 - 1;
              pcVar23 = pcVar26 + 1;
              cVar2 = *pcVar26;
              pcVar26 = pcVar23;
            } while (cVar2 != '\0');
            uVar27 = ~uVar27;
            pcVar26 = pcVar23 + -uVar27;
            pcVar23 = &this_01->field_0x1e33;
            for (uVar28 = uVar27 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
              *(undefined4 *)pcVar23 = *(undefined4 *)pcVar26;
              pcVar26 = pcVar26 + 4;
              pcVar23 = pcVar23 + 4;
            }
            for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
              *pcVar23 = *pcVar26;
              pcVar26 = pcVar26 + 1;
              pcVar23 = pcVar23 + 1;
            }
            this_01->field_1F37 = 1;
            Library::DKW::TBL::FUN_006ae1c0
                      (&this_01->field_1E2F->flags,(undefined4 *)&this_01->field_0x1e33);
          }
          if ((DAT_0080877e != '\0') && (this_01->field_1E26 != CASE_5)) {
            local_c = (AnonShape_005D1400_891386BF *)0x0;
            pAVar19 = local_18->field_0050;
            pAVar30 = (AnonShape_005D1400_891386BF *)pAVar19->field_000C;
            if (0 < (int)pAVar30) {
              do {
                if (local_c < pAVar30) {
                  iVar14 = pAVar19->field_0008 * (int)local_c + pAVar19->field_001C;
                }
                else {
                  iVar14 = 0;
                }
                uVar27 = 0xffffffff;
                pcVar26 = (char *)(iVar14 + 0x40);
                do {
                  pcVar23 = pcVar26;
                  if (uVar27 == 0) break;
                  uVar27 = uVar27 - 1;
                  pcVar23 = pcVar26 + 1;
                  cVar2 = *pcVar26;
                  pcVar26 = pcVar23;
                } while (cVar2 != '\0');
                uVar27 = ~uVar27;
                pcVar26 = pcVar23 + -uVar27;
                pcVar23 = &this_01->field_0x1e33;
                for (uVar28 = uVar27 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
                  *(undefined4 *)pcVar23 = *(undefined4 *)pcVar26;
                  pcVar26 = pcVar26 + 4;
                  pcVar23 = pcVar23 + 4;
                }
                for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
                  *pcVar23 = *pcVar26;
                  pcVar26 = pcVar26 + 1;
                  pcVar23 = pcVar23 + 1;
                }
                this_01->field_1F37 = 4;
                *(AnonShape_005D1400_891386BF **)&this_01->field_0x1f3b = local_c;
                Library::DKW::TBL::FUN_006ae1c0
                          (&this_01->field_1E2F->flags,(undefined4 *)&this_01->field_0x1e33);
                local_c = (AnonShape_005D1400_891386BF *)&local_c->field_0x1;
                pAVar19 = local_18->field_0050;
                pAVar30 = (AnonShape_005D1400_891386BF *)pAVar19->field_000C;
              } while ((int)local_c < (int)pAVar30);
            }
          }
        }
        pDVar18 = this_01->field_1E2F;
        uVar27 = 0;
        this_01->field_21A1 = 0;
        if (0 < (int)pDVar18->count) {
          bVar34 = pDVar18->count != 0;
          local_10 = (char *)(uint)(byte)local_18->field_0x4;
          do {
            if (bVar34) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar18, uVar27) (runtime stride) */
              pvVar16 = (void *)(pDVar18->elementSize * uVar27 + (int)pDVar18->data);
            }
            else {
              pvVar16 = (void *)0x0;
            }
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            if ((*(char **)((int)pvVar16 + 0x104) == local_10) &&
               (*(uint *)((int)pvVar16 + 0x108) == (uint)(byte)local_18->field_0x5)) {
              this_01->field_21A1 = uVar27;
              break;
            }
            uVar27 = uVar27 + 1;
            bVar34 = uVar27 < pDVar18->count;
          } while ((int)uVar27 < (int)pDVar18->count);
        }
        dVar7 = pDVar18->count;
        this_01->field_21C5 = 0x15d;
        this_01->field_21A9 = dVar7;
        this_01->field_21CD = 0x5f;
        this_01->field_21C9 = local_2c * 0x19 + 0x41;
        pcVar8 = g_startSystem_0081176C->field_0034;
        if (pcVar8->field_00A0 != 0) {
          FUN_00710790((AnonShape_00710790_4CBB90D4 *)pcVar8);
        }
        this_01->field_21A5 = *(undefined4 *)&pcVar8->field_0x8a;
        if (0 < (int)this_01->field_21A9) goto LAB_005d3188;
        break;
      case MESS_SHARED_0005:
        if (*(char *)pAVar24 != '\0') {
          if (DAT_00808a8f == '\0') {
            if (DAT_0080877e == '\0') {
              uVar28 = (uint)DAT_0080874d;
              uVar27 = 0;
              iVar14 = this_01->field_1F88 + local_2c;
              uVar38 = 5;
              goto LAB_005d34ee;
            }
            ChangePlayerTeam((SettMapMTy *)this_01,this_01->field_1F88 + local_2c,0,
                             (uint)DAT_0080874d);
            SendDesc((SettMapMTy *)this_01,0);
          }
          else {
            uVar27 = pDVar18->count;
            uVar28 = 0;
            local_3c = 0;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_c = (AnonShape_005D1400_891386BF *)CONCAT31(local_c._1_3_,0xff);
            local_10 = (char *)0x1;
            local_38 = 0;
            local_30 = (undefined1 *)uVar27;
            if (0 < (int)uVar27) {
              bVar34 = uVar27 != 0;
              do {
                if (bVar34) {
                  /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
                  pvVar16 = (void *)(this_01->field_1F84->elementSize * uVar28 +
                                    (int)this_01->field_1F84->data);
                }
                else {
                  pvVar16 = (void *)0x0;
                }
                if ((pvVar16 != (void *)0x0) && (*(byte *)((int)pvVar16 + 0x4a) < 8)) {
                  *(undefined1 *)((int)&local_3c + (uint)*(byte *)((int)pvVar16 + 0x4a)) = 1;
                }
                uVar28 = uVar28 + 1;
                bVar34 = uVar28 < uVar27;
              } while ((int)uVar28 < (int)uVar27);
            }
            uVar28 = local_2c;
            bVar21 = 0;
            iVar14 = 0;
            do {
              if (*(char *)((int)&local_3c + iVar14) != '\0') {
                bVar21 = bVar21 + 1;
              }
              iVar14 = iVar14 + 1;
            } while (iVar14 < 8);
            bVar3 = this_01->field_0x211c;
joined_r0x005d3229:
            if (bVar21 < bVar3) {
              iVar14 = 0;
              do {
                if (*(char *)((int)&local_3c + iVar14) == '\0') {
                  *(undefined1 *)((int)&local_3c + iVar14) = 1;
                  bVar21 = bVar21 + 1;
                  break;
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < 8);
              goto joined_r0x005d3229;
            }
            uVar25 = 0;
            if (0 < (int)uVar27) {
              do {
                puVar17 = local_30;
                if (uVar25 < local_30) {
                  /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
                  pcVar26 = (char *)(this_01->field_1F84->elementSize * uVar25 +
                                    (int)this_01->field_1F84->data);
                }
                else {
                  pcVar26 = (char *)0x0;
                }
                if (pcVar26 != (char *)0x0) {
                  if (this_01->field_1F88 + uVar28 != uVar25) {
                    if (*pcVar26 == '\0') goto LAB_005d32d3;
                    if ((pcVar26[4] != '\0') && (pcVar26[4] != '\x01')) {
                      if (local_10 == (char *)0x0) {
                        if ((byte)local_c != pcVar26[0x4a]) {
                          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                          local_c = (AnonShape_005D1400_891386BF *)CONCAT31(local_c._1_3_,0xff);
                        }
                      }
                      else {
                        local_10 = (char *)0x0;
                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                        local_c = (AnonShape_005D1400_891386BF *)
                                  CONCAT31(local_c._1_3_,pcVar26[0x4a]);
                      }
                    }
                  }
                  if ((*pcVar26 != '\0') &&
                     (((pcVar26[4] == '\0' || (pcVar26[4] == '\x01')) && ((byte)pcVar26[0x4a] < 8)))
                     ) {
                    *(undefined1 *)((int)&local_3c + (uint)(byte)pcVar26[0x4a]) = 0;
                  }
                }
LAB_005d32d3:
                uVar25 = uVar25 + 1;
              } while ((int)uVar25 < (int)puVar17);
            }
            if ((byte)local_c < 8) {
              *(undefined1 *)((int)&local_3c + ((uint)local_c & 0xff)) = 0;
            }
            uVar27 = 0;
            this_01->field_2171 = 0x6501;
            this_01->field_2179 = this_01->field_1F88 + local_2c;
            this_01->field_2191 = 0x6500;
            this_01->field_21A1 = 0;
            this_01->field_1E2F->count = 0;
            local_c = (AnonShape_005D1400_891386BF *)((uint)local_c & 0xffffff00);
            puVar17 = &uStack_7d;
            local_30 = puVar17;
            do {
              iVar14 = uVar27 + 0x41;
              if (puVar17[uVar27 + 0x41] != '\0') {
                pcVar26 = LoadResourceString(0x1f4a,g_module_00807618);
                wsprintfA(&this_01->field_0x1e33,"%s%c",pcVar26,iVar14);
                this_01->field_1F37 = uVar27;
                Library::DKW::TBL::FUN_006ae1c0
                          (&this_01->field_1E2F->flags,(undefined4 *)&this_01->field_0x1e33);
                if ((byte)local_18->field_0x4a == uVar27) {
                  this_01->field_21A1 = (uint)local_c & 0xff;
                }
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_c = (AnonShape_005D1400_891386BF *)
                          CONCAT31(local_c._1_3_,(byte)local_c + '\x01');
                puVar17 = local_30;
              }
              uVar27 = uVar27 + 1;
            } while ((int)uVar27 < 8);
            SVar4 = this_01->field_1E26;
            this_01->field_21A9 = this_01->field_1E2F->count;
            if (((SVar4 == 6) || (SVar4 == 1)) || (uVar38 = 0x26b, SVar4 == 2)) {
              uVar38 = 0x2ab;
            }
            this_01->field_21C5 = uVar38;
            this_01->field_21CD = 0x46;
            this_01->field_21C9 = local_2c * 0x19 + 0x41;
            pcVar8 = g_startSystem_0081176C->field_0034;
            if (pcVar8->field_00A0 != 0) {
              FUN_00710790((AnonShape_00710790_4CBB90D4 *)pcVar8);
            }
            this_01->field_21A5 = *(undefined4 *)&pcVar8->field_0x8a;
            (*this_01->field_000C->vtable->CreateObject)
                      ((SystemClassTy *)this_01->field_000C,0x100ef,(undefined4 *)0x0,(int *)0x0,
                       &this_01->field_0x2161,0);
          }
        }
        break;
      case 7:
        if (DAT_0080877e == '\0') {
          uVar28 = 0;
          uVar27 = (uint)(pAVar24->field_0x4f == '\0');
          iVar14 = this_01->field_1F88 + local_2c;
          uVar38 = 7;
LAB_005d34ee:
          ChgPlList((SettMapMTy *)this_01,iVar14,uVar38,uVar27,uVar28);
        }
        else {
          pAVar24->field_0x4f = pAVar24->field_0x4f == '\0';
          this_01->field_002D = 5;
          FUN_006e6080(this_01,2,*(undefined4 *)(&this_01->field_0x1fa8 + local_2c * 0x20),
                       (undefined4 *)&this_01->field_0x1d);
          *(int *)&this_01->field_0x2121 = *(int *)&this_01->field_0x2121 + 1;
          SendPlList((SettMapMTy *)this_01,0);
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
  pAVar32 = (AnonShape_005CBBE0_2D1CAA09 *)0x0;
  pcVar26 = (char *)(SVar5 - MESS_SHARED_6A7F >> 3);
  local_30 = (undefined1 *)(SVar5 + 1 & 7);
  piVar9 = (message->arg1).ptr;
  local_20 = piVar9[2];
  local_1c = piVar9[3];
  pDVar18 = this_01->field_1F84;
  local_28 = *piVar9 + -0x113;
  local_24 = 0;
  if ((pDVar18 != (DArrayTy *)0x0) &&
     (uVar27 = this_01->field_1F88 + (int)pcVar26, uVar27 < pDVar18->count)) {
    /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar18, uVar27) (runtime stride) */
    pAVar32 = (AnonShape_005CBBE0_2D1CAA09 *)(pDVar18->elementSize * uVar27 + (int)pDVar18->data);
  }
  local_10 = pcVar26;
  FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)(&this_01->field_20F4)[(int)pcVar26],0,
               *piVar9 + -0x113,0,piVar9[2],piVar9[3],0xff);
  if (pAVar32 == (AnonShape_005CBBE0_2D1CAA09 *)0x0) goto switchD_005d35aa_default;
  switch(local_30) {
  case (undefined1 *)0x0:
    if (((*(char *)pAVar32 == '\0') || (pAVar32->field_0x4 != '\x02')) ||
       (*(int *)&pAVar32->field_0x6 != DAT_0080877f)) break;
    MMObjTy::PaintButDib
              ((MMObjTy *)this_01,(&this_01->field_20F4)[(int)pcVar26],&local_28,2,
               (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0x67);
    iVar14 = 2 - (uint)(pAVar32->field_0x1 != '\0');
    goto LAB_005d3bf4;
  case (undefined1 *)0x1:
    if (*(char *)pAVar32 != '\0') {
      local_28 = local_28 + 1;
      local_24 = local_24 + 1;
      local_20 = local_20 + -2;
      local_1c = local_1c + -2;
      MMObjTy::PaintButDib
                ((MMObjTy *)this_01,(&this_01->field_20F4)[(int)pcVar26],&local_28,0,
                 (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0xffffffff);
      if (pAVar32->field_0x2 != -1) {
        switch(pAVar32->field_0x2) {
        case 0:
          uVar12 = 0xfc;
          break;
        case 1:
          uVar12 = 0xfa;
          break;
        case 2:
          uVar12 = 0xfb;
          break;
        case 3:
          uVar12 = 0xf9;
          break;
        case 4:
          uVar12 = 0xfd;
          break;
        case 5:
          uVar12 = 0xfe;
          break;
        case 6:
          uVar12 = 0xf3;
          break;
        case 7:
          uVar12 = 7;
          break;
        default:
          uVar12 = 0xff;
        }
        FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)(&this_01->field_20F4)[(int)pcVar26],0,
                     local_28 + 2,local_24 + 2,local_20 + -4,local_1c + -4,uVar12);
      }
    }
    break;
  case (undefined1 *)0x2:
    if (*(char *)pAVar32 == '\0') break;
    MMObjTy::PaintButDib
              ((MMObjTy *)this_01,(&this_01->field_20F4)[(int)pcVar26],&local_28,2,
               (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0x67);
    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(&this_01->field_20F4)[(int)pcVar26],0,
                     local_28,local_24,local_20,local_1c);
    if (pAVar32->field_0x3 == '\x01') {
      pcVar26 = &DAT_007ca250;
LAB_005d3780:
      uVar27 = 0xffffffff;
      do {
        pcVar23 = pcVar26;
        if (uVar27 == 0) break;
        uVar27 = uVar27 - 1;
        pcVar23 = pcVar26 + 1;
        cVar2 = *pcVar26;
        pcVar26 = pcVar23;
      } while (cVar2 != '\0');
      uVar27 = ~uVar27;
      pcVar26 = pcVar23 + -uVar27;
      pcVar23 = (char *)&DAT_0080f33a;
      for (uVar28 = uVar27 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
        *(undefined4 *)pcVar23 = *(undefined4 *)pcVar26;
        pcVar26 = pcVar26 + 4;
        pcVar23 = pcVar23 + 4;
      }
    }
    else {
      if (pAVar32->field_0x3 != '\x02') {
        pcVar26 = &DAT_007ca24c;
        goto LAB_005d3780;
      }
      uVar27 = 0xffffffff;
      pcVar26 = &DAT_007ca248;
      do {
        pcVar23 = pcVar26;
        if (uVar27 == 0) break;
        uVar27 = uVar27 - 1;
        pcVar23 = pcVar26 + 1;
        cVar2 = *pcVar26;
        pcVar26 = pcVar23;
      } while (cVar2 != '\0');
      uVar27 = ~uVar27;
      pcVar26 = pcVar23 + -uVar27;
      pcVar23 = (char *)&DAT_0080f33a;
      for (uVar28 = uVar27 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
        *(undefined4 *)pcVar23 = *(undefined4 *)pcVar26;
        pcVar26 = pcVar26 + 4;
        pcVar23 = pcVar23 + 4;
      }
    }
    for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
      *pcVar23 = *pcVar26;
      pcVar26 = pcVar26 + 1;
      pcVar23 = pcVar23 + 1;
    }
    ccFntTy::WrStr(g_startSystem_0081176C->field_0034,&DAT_0080f33a,-1,-1,2);
    pcVar26 = local_10;
    break;
  case (undefined1 *)0x3:
    MMObjTy::PaintButDib
              ((MMObjTy *)this_01,(&this_01->field_20F4)[(int)pcVar26],&local_28,2,
               (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0x67);
    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(&this_01->field_20F4)[(int)pcVar26],0,
                     local_28,local_24,local_20,local_1c);
    uVar38 = 2;
    iVar37 = -1;
    iVar36 = -1;
    puVar35 = (uint *)&DAT_007c2310;
    iVar14 = local_20;
    puVar15 = (uint *)thunk_FUN_005cbbe0(this_01,pAVar32);
    goto LAB_005d38bd;
  case (undefined1 *)0x4:
    MMObjTy::PaintButDib
              ((MMObjTy *)this_01,(&this_01->field_20F4)[(int)pcVar26],&local_28,2,0x67,0x67);
    bVar21 = pAVar32->field_0x4;
    if (bVar21 < 2) break;
    if (bVar21 < 4) {
      ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(&this_01->field_20F4)[(int)pcVar26],0,
                       local_28,local_24,local_20,local_1c);
      uVar38 = 2;
      iVar36 = -1;
      iVar14 = -1;
      puVar15 = thunk_FUN_00540c40(g_startSystem_0081176C->field_0034,(uint *)&pAVar32->field_0xa,
                                   (uint *)&DAT_007c7274,local_20);
      ccFntTy::WrStr(g_startSystem_0081176C->field_0034,puVar15,iVar14,iVar36,uVar38);
      break;
    }
    if (bVar21 != 4) break;
    pDVar18 = pAVar32->field_0050;
    if ((uint)(byte)pAVar32->field_0x5 < pDVar18->count) {
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar18, (uint)(byte)pAVar32->field_0x5) (runtime stride) */
      puVar15 = (uint *)(pDVar18->elementSize * (uint)(byte)pAVar32->field_0x5 + (int)pDVar18->data)
      ;
    }
    else {
      puVar15 = (uint *)0x0;
    }
    if (puVar15 == (uint *)0x0) break;
    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(&this_01->field_20F4)[(int)pcVar26],0,
                     local_28,local_24,local_20,local_1c);
    uVar38 = 2;
    iVar37 = -1;
    iVar36 = -1;
    puVar35 = (uint *)&DAT_007c7274;
    iVar14 = local_20;
LAB_005d38bd:
    puVar15 = thunk_FUN_00540c40(g_startSystem_0081176C->field_0034,puVar15,puVar35,iVar14);
    ccFntTy::WrStr(g_startSystem_0081176C->field_0034,puVar15,iVar36,iVar37,uVar38);
    break;
  case (undefined1 *)0x5:
    if ((*(char *)pAVar32 == '\0') ||
       (MMObjTy::PaintButDib
                  ((MMObjTy *)this_01,(&this_01->field_20F4)[(int)pcVar26],&local_28,2,
                   (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0x67),
       pAVar32->field_0x4 == '\0')) break;
    if (DAT_00808a8f != '\0') {
      iVar14 = (byte)pAVar32->field_0x4a + 0x41;
      pcVar23 = LoadResourceString(0x1f4a,g_module_00807618);
      wsprintfA((LPSTR)&DAT_0080f33a,"%s%c",pcVar23,iVar14);
      ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(&this_01->field_20F4)[(int)pcVar26],0,
                       local_28,local_24,local_20,local_1c);
      ccFntTy::WrStr(g_startSystem_0081176C->field_0034,&DAT_0080f33a,-1,-1,2);
      break;
    }
    if (((DAT_0080874d == 0xff) || (bVar21 = pAVar32->field_0x2, bVar21 == 0xff)) ||
       (DAT_0080874d == bVar21)) break;
    local_10 = (char *)0xffffffff;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_30 = (undefined1 *)CONCAT31(local_30._1_3_,bVar21);
    uVar27 = (uint)DAT_0080874d;
    bVar3 = g_playerRelationMatrix[uVar27][bVar21];
    if ((bVar3 == 0) && (g_playerRelationMatrix[bVar21][uVar27] == 0)) {
      uVar38 = 0xfffffffe;
    }
    else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar21][uVar27] == 0)) {
      uVar38 = 0xffffffff;
    }
    else if ((bVar3 == 0) && (g_playerRelationMatrix[bVar21][uVar27] == 1)) {
      uVar38 = 1;
    }
    else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar21][uVar27] == 1)) {
      uVar38 = 2;
    }
    else {
      uVar38 = 0;
    }
    switch(uVar38) {
    default:
      iVar14 = -1;
      break;
    case 1:
      iVar14 = 1;
      break;
    case 2:
      iVar14 = 3;
      break;
    case 0xfffffffe:
      iVar14 = 0;
      break;
    case 0xffffffff:
      iVar14 = 2;
    }
    iVar14 = iVar14 + -1;
    if (iVar14 < 0) break;
    pAVar22 = *(AnonShape_GLOBAL_0081175C_57F682DD **)&this_01->field_0x1f4b;
    goto LAB_005d3bfa;
  case (undefined1 *)0x6:
    MMObjTy::PaintButDib
              ((MMObjTy *)this_01,(&this_01->field_20F4)[(int)pcVar26],&local_28,2,0x67,0x67);
    if (((pAVar32->field_0x4 == '\x02') || (pAVar32->field_0x4 == '\x03')) &&
       (((DAT_0080877e != '\0' && (*(int *)&pAVar32->field_0x6 != DAT_0080877f)) ||
        ((DAT_0080877e == '\0' && (*(int *)&pAVar32->field_0x6 == DAT_0080877f)))))) {
      ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(&this_01->field_20F4)[(int)pcVar26],0,
                       local_28,local_24,local_20,local_1c);
      wsprintfA((LPSTR)&DAT_0080f33a,"%4d",*(undefined4 *)&pAVar32->field_0x4b);
      uVar27 = 0xffffffff;
      pcVar23 = (char *)&DAT_0080f33a;
      do {
        if (uVar27 == 0) break;
        uVar27 = uVar27 - 1;
        cVar2 = *pcVar23;
        pcVar23 = pcVar23 + 1;
      } while (cVar2 != '\0');
      if (4 < ~uVar27 - 1) {
        uVar27 = 0xffffffff;
        pcVar26 = &DAT_007cd500;
        do {
          pcVar23 = pcVar26;
          if (uVar27 == 0) break;
          uVar27 = uVar27 - 1;
          pcVar23 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar23;
        } while (cVar2 != '\0');
        uVar27 = ~uVar27;
        pcVar23 = pcVar23 + -uVar27;
        pcVar29 = (char *)&DAT_0080f33a;
        for (uVar28 = uVar27 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
          *(undefined4 *)pcVar29 = *(undefined4 *)pcVar23;
          pcVar23 = pcVar23 + 4;
          pcVar29 = pcVar29 + 4;
        }
        for (uVar27 = uVar27 & 3; pcVar26 = local_10, uVar27 != 0; uVar27 = uVar27 - 1) {
          *pcVar29 = *pcVar23;
          pcVar23 = pcVar23 + 1;
          pcVar29 = pcVar29 + 1;
        }
      }
      ccFntTy::WrStr(g_startSystem_0081176C->field_0034,&DAT_0080f33a,-1,-1,2);
    }
    break;
  case (undefined1 *)0x7:
    MMObjTy::PaintButDib
              ((MMObjTy *)this_01,(&this_01->field_20F4)[(int)pcVar26],&local_28,2,
               (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0x67);
    if (((pAVar32->field_0x4 != '\x02') || (pAVar32->field_0x4f == '\0')) &&
       (pAVar32->field_0x4 != '\x04')) break;
    iVar14 = 0;
LAB_005d3bf4:
    pAVar22 = (AnonShape_GLOBAL_0081175C_57F682DD *)this_01->field_1F4F;
LAB_005d3bfa:
    pbVar20 = (byte *)FUN_0070b3a0(pAVar22,iVar14);
    DibPut((AnonShape_006B5B10_E0D06CF1 *)(&this_01->field_20F4)[(int)pcVar26],
           (local_20 - *(int *)(pbVar20 + 4)) / 2 + local_28,
           (local_1c - *(int *)(pbVar20 + 8)) / 2 + 1 + local_24,'\x06',pbVar20);
  }
switchD_005d35aa_default:
  FUN_006b35d0((int *)PTR_008075a8,(&this_01->field_20CC)[(int)pcVar26]);
  if ((message->arg0).words.low == 3) {
    thunk_FUN_005b6730(this_01,9,'\x01',-1);
  }
  g_currentExceptionFrame = local_f4.previous;
  return 0;
}

