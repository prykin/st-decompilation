#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\to_cursor.cpp
   CursorClassTy::TakeCmdToRun

   [STSwitchEnumApplier] Switch target field_04A2 uses
   /SubmarineTitans/Recovered/Enums/CursorClassTy_field_04A2State. Cases:
   CASE_3=3;CASE_5=5;CASE_A=10;CASE_E=14;CASE_2B=43;CASE_2C=44;CASE_4E=78 */

void __thiscall CursorClassTy::TakeCmdToRun(CursorClassTy *this,int param_1)

{
  short sVar1;
  STFishC *pSVar2;
  undefined4 uVar3;
  code *pcVar4;
  CursorClassTy *this_00;
  int iVar5;
  HelpPanelTy_sub_00514BC0_param_1Enum HVar6;
  int iVar7;
  uint uVar8;
  ushort *puVar9;
  uint *puVar10;
  byte *puVar11;
  uint *puVar12;
  longlong lVar13;
  byte *puVar14;
  InternalExceptionFrame local_2c8;
  uint local_284 [7];
  undefined4 local_267;
  undefined1 local_260 [5];
  int local_25b;
  int local_257;
  undefined1 local_23c [5];
  int local_237;
  int local_233;
  int local_218;
  int local_214;
  undefined1 local_208;
  undefined4 local_207;
  undefined4 local_203;
  int local_1ff;
  undefined1 local_1e4 [5];
  int local_1df;
  int local_1db;
  undefined4 local_1c7;
  undefined1 local_1c0 [5];
  int local_1bb;
  int local_1b7;
  undefined4 local_1a3;
  char local_19c;
  undefined4 local_19b;
  undefined4 local_197;
  int local_193;
  undefined1 local_178 [5];
  undefined1 local_173;
  undefined1 local_172;
  byte local_171;
  undefined1 local_160 [5];
  undefined1 local_15b;
  undefined1 local_15a;
  undefined1 local_159;
  undefined4 local_148;
  undefined4 local_144;
  int local_140;
  uint local_13c;
  undefined4 local_138;
  int local_134;
  uint local_130;
  undefined4 local_12c;
  int local_128;
  CursorClassTy *local_124;
  undefined1 local_120 [5];
  undefined1 local_11b;
  undefined1 local_11a;
  byte local_119;
  uint local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined1 local_f8;
  undefined1 uStack_f7;
  uint local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined1 local_e4;
  undefined1 uStack_e3;
  uint local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  char local_d4;
  char local_d0;
  short local_cf;
  undefined2 local_cd;
  undefined2 local_cb;
  uint local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  uint local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint *local_94;
  uint local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 local_84;
  undefined1 local_80;
  undefined3 uStack_7f;
  undefined1 local_7c;
  short local_7a;
  undefined1 local_78;
  undefined3 uStack_77;
  undefined1 local_74;
  short local_70;
  short local_6e;
  undefined1 local_6c [2];
  short local_6a;
  short local_68;
  short local_66;
  short local_64;
  short local_62;
  short local_60;
  undefined1 local_5e [2];
  short local_5c;
  undefined2 local_5a;
  short local_58;
  short local_56;
  undefined4 *local_54;
  short local_4e;
  ushort *local_4c;
  undefined1 local_46 [2];
  ushort *local_44;
  undefined1 local_3e [2];
  ushort *local_3c;
  short local_38;
  short local_36;
  undefined2 local_34;
  byte local_32 [2];
  undefined1 local_30 [2];
  short local_2e;
  undefined1 local_2c;
  short sStack_2b;
  undefined1 uStack_29;
  undefined1 uStack_28;
  undefined1 uStack_27;
  undefined1 local_26;
  uint *local_24;
  uint *local_20;
  uint *local_1c;
  uint *local_18;
  uint *local_14;
  float local_10;
  float local_c;
  uint *local_8;

  local_2c8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_2c8;
  local_124 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_2c8.jumpBuffer,0);
  this_00 = local_124;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_2c8.previous;
    iVar7 = ReportDebugMessage("E:\\__titans\\Andrey\\to_cursor.cpp",0x671,0,iVar5,
                               "%s","CursorClassTy::TakeCmdToRun");
    if (iVar7 == 0) {
      RaiseInternalException(iVar5,0,"E:\\__titans\\Andrey\\to_cursor.cpp",0x672);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (g_sT3DSMAPContext_00807598 != nullptr) {
    local_148 = local_124->field_00EF;
    local_144 = local_124->field_00F3;
    local_140 = iVar5;
    ST3DSMAPContext::sub_006E25D0(g_sT3DSMAPContext_00807598,&local_218);
    this_00->field_00DF = local_218 >> 0x10;
    this_00->field_00E7 = (this_00->field_00C5 - this_00->field_04B2) - (local_218 >> 0x10);
    this_00->field_00E3 = local_214 >> 0x10;
    this_00->field_00EB = (this_00->field_00C9 - this_00->field_04B6) - (local_214 >> 0x10);
  }
  if (g_playSystem_00802A38 == nullptr) {
    g_currentExceptionFrame = local_2c8.previous;
    return;
  }
  if (this_00->field_04DE != '\0') {
    if (((this_00->field_0494 == 0x48) && (pSVar2 = this_00->field_049A, pSVar2 != nullptr))
       && (g_helpPanel_00801690 != nullptr)) {
      HVar6 = pSVar2->slot_2C();
      if (HVar6 == 0x78) {
        HVar6 = *(HelpPanelTy_sub_00514BC0_param_1Enum *)&this_00->field_049A->field_0x259;
      }
      iVar5 = (*pSVar2->vtable->vfunc_0C)();
      HelpPanelTy::sub_00514BC0(g_helpPanel_00801690,HVar6,iVar5);
      this_00->field_04DE = 0;
    }
    goto switchD_00548db5_caseD_3;
  }
  sVar1 = this_00->field_0494;
  switch(sVar1) {
  case 1:
    switch(this_00->field_04A2) {
    case CASE_3:
    case CASE_A:
    case CASE_2B:
      if (param_1 != 0) {
        local_4c = nullptr;
        if (g_allPlayers_007FA174 != nullptr) {
          local_4c = STAllPlayersC::GetScrObjList
                               (g_allPlayers_007FA174,(this_00->field_04A2 == CASE_A) + 1,
                                this_00->field_00DF,this_00->field_00E3,this_00->field_00E7,
                                this_00->field_00EB,(int *)&local_9c);
        }
        if (local_4c != nullptr) {
          local_18 = (uint *)(local_9c + 1);
          local_94 = Library::DKW::LIB::FUN_006aac10((uint)local_18);
          if (local_94 != nullptr) {
            *(char *)local_94 = (this_00->field_04A2 == CASE_A) + '\x01';
            puVar9 = local_4c;
            puVar14 = (byte *)((int)local_94 + 1);
            for (uVar8 = local_9c >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *puVar14 = *(undefined4 *)puVar9;
              puVar9 = puVar9 + 2;
              puVar14 = (byte *)(puVar14 + 1);
            }
            for (local_9c = local_9c & 3; local_9c != 0; local_9c = local_9c - 1) {
              *(char *)puVar14 = (char)*puVar9;
              puVar9 = (ushort *)((int)puVar9 + 1);
              puVar14 = (byte *)((int)puVar14 + 1);
            }
            thunk_FUN_0054edf0((undefined4 *)0x31,local_94,0,(uint)local_18);
            FreeAndNull(&local_94);
          }
          FreeAndNull(&local_4c);
        }
      }
      break;
    case CASE_5:
      if (param_1 != 0) {
        local_1c = nullptr;
        if (g_allPlayers_007FA174 != nullptr) {
          local_1c = (uint *)STAllPlayersC::GetScrObjList
                                       (g_allPlayers_007FA174,3,this_00->field_00DF,
                                        this_00->field_00E3,this_00->field_00E7,this_00->field_00EB,
                                        (int *)&local_a8);
        }
        if (local_1c != nullptr) {
          local_24 = (uint *)(local_a8 + 1);
          local_18 = Library::DKW::LIB::FUN_006aac10((uint)local_24);
          if (local_18 != nullptr) {
            *(undefined1 *)local_18 = 3;
            puVar10 = local_1c;
            puVar12 = (uint *)((int)local_18 + 1);
            memmove(puVar12, puVar10, local_a8); /* compiler REP MOVS byte copy */
            uVar8 = 0;
            thunk_FUN_0054edf0((undefined4 *)0x31,local_18,0,(uint)local_24);
            FreeAndNull(&local_18);
          }
          FreeAndNull(&local_1c);
        }
        break;
      }
      pSVar2 = this_00->field_049A;
      if (pSVar2 == nullptr) break;
      memset((void *)local_1e4, 0, 0x21); /* compiler bulk-zero initialization */
      STFishC::sub_004162B0(pSVar2,&local_56,&local_68,&local_2e);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_1e4._1_4_ = SEXT24(local_56);
      local_1db = (int)local_2e;
      local_1df = (int)local_68;
      local_1e4[0] = 1;
      local_1c7 = this_00->field_049A->field_0018;
      puVar10 = (uint *)local_1e4;
      puVar14 = (byte *)0x17;
      goto cf_common_join_0054A19A;
    case CASE_E:
      if (g_tLOBldMark_007FB2AC != nullptr) {
        local_b8 = this_00->field_04AA;
        local_b4 = 0;
        local_b0 = 0;
        local_ac = 0;
        if (g_tLOBldMark_007FB2AC->field_0024 != 0) {
          if (&stack0x00000000 != (undefined1 *)0xb4) {
            local_b4 = g_tLOBldMark_007FB2AC->field_0030;
          }
          if (&stack0x00000000 != (undefined1 *)0xb0) {
            local_b0 = g_tLOBldMark_007FB2AC->field_0034;
          }
          if (&stack0x00000000 != (undefined1 *)0xac) {
            local_ac = g_tLOBldMark_007FB2AC->field_0038;
          }
          if (g_tLOBldMark_007FB2AC->field_0024 != 0) {
            thunk_FUN_0054edf0((undefined4 *)0x23,&local_b8,0,0xffffffff);
            iVar5 = FUN_006e1dd0(g_sT3DSMAPContext_00807598,
                                 this_00->field_00C5 - this_00->field_04B2,
                                 this_00->field_00C9 - this_00->field_04B6,&local_10,&local_c,
                                 (float *)&local_8);
            if (iVar5 != 0) {
              if (_DAT_0079034c <= (float)local_8) {
                local_14 = local_8;
                SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0054A9B0::thunk_FUN_0054a9b0
                          ((AnonReceiver_0054A9B0 *)this_00,local_10,local_c,(float)local_8);
              }
              else {
                local_14 = nullptr;
                SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0054A9B0::thunk_FUN_0054a9b0
                          ((AnonReceiver_0054A9B0 *)this_00,local_10,local_c,0.0);
              }
            }
          }
        }
      }
      break;
    case CASE_2C:
      if (param_1 != 0) {
        local_54 = nullptr;
        if (g_allPlayers_007FA174 != nullptr) {
          local_54 = (undefined4 *)thunk_FUN_0044e220();
        }
        if (local_54 != nullptr) {
          local_18 = (uint *)(local_a4 + 1);
          local_24 = Library::DKW::LIB::FUN_006aac10((uint)local_18);
          if (local_24 != nullptr) {
            *(undefined1 *)local_24 = 4;
            puVar14 = (byte *)(local_54);
            puVar11 = (byte *)((int)local_24 + 1);
            memmove(puVar11, puVar14, local_a4); /* compiler REP MOVS byte copy */
            uVar8 = 0;
            thunk_FUN_0054edf0((undefined4 *)0x31,local_24,0,(uint)local_18);
            FreeAndNull(&local_24);
          }
          FreeAndNull(&local_54);
        }
      }
      break;
    case CASE_4E:
      local_f4 = (uint)*(byte *)&this_00->field_04AA;
      local_f0 = 0;
      local_ec = 0;
      local_e8 = 0;
      local_e4 = 0;
      uStack_e3 = 0;
      lVar13 = Library::MSVCRT::__ftol();
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_f4._1_3_ = (undefined3)lVar13;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_f0._0_1_ = (undefined1)((ulonglong)lVar13 >> 0x18);
      lVar13 = Library::MSVCRT::__ftol();
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_f0._1_3_ = (undefined3)lVar13;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_ec._0_1_ = (undefined1)((ulonglong)lVar13 >> 0x18);
      lVar13 = Library::MSVCRT::__ftol();
      uStack_e3 = *(undefined1 *)&this_00->field_00FB;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_ec._1_3_ = (undefined3)lVar13;
      puVar10 = &local_f4;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_e8._1_3_ = (undefined3)this_00->field_00F7;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_e8 = CONCAT31(local_e8._1_3_,(char)((ulonglong)lVar13 >> 0x18));
      local_e4 = (undefined1)((uint)this_00->field_00F7 >> 0x18);
      goto LAB_0054a196;
    }
    break;
  case 2:
  case 7:
  case 0xc:
    if (param_1 != 0) {
      local_3c = nullptr;
      if (g_allPlayers_007FA174 != nullptr) {
        local_3c = STAllPlayersC::GetScrObjList
                             (g_allPlayers_007FA174,(sVar1 == 0xc) + 1,this_00->field_00DF,
                              this_00->field_00E3,this_00->field_00E7,this_00->field_00EB,
                              (int *)&local_98);
      }
      if (local_3c != nullptr) {
        local_18 = (uint *)(local_98 + 1);
        local_20 = Library::DKW::LIB::FUN_006aac10((uint)local_18);
        if (local_20 != nullptr) {
          *(char *)local_20 = (this_00->field_0494 == 0xc) + '\x01';
          puVar9 = local_3c;
          puVar14 = (byte *)((int)local_20 + 1);
          for (uVar8 = local_98 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *puVar14 = *(undefined4 *)puVar9;
            puVar9 = puVar9 + 2;
            puVar14 = (byte *)(puVar14 + 1);
          }
          for (local_98 = local_98 & 3; local_98 != 0; local_98 = local_98 - 1) {
            *(char *)puVar14 = (char)*puVar9;
            puVar9 = (ushort *)((int)puVar9 + 1);
            puVar14 = (byte *)((int)puVar14 + 1);
          }
          thunk_FUN_0054edf0((undefined4 *)0x31,local_20,0,(uint)local_18);
          FreeAndNull(&local_20);
        }
        FreeAndNull(&local_3c);
      }
      break;
    }
    memset((void *)local_120, 0, 0x18); /* compiler bulk-zero initialization */
    if (this_00->field_049A == nullptr) {
      iVar5 = FUN_006e1dd0(g_sT3DSMAPContext_00807598,this_00->field_00C5 - this_00->field_04B2,
                           this_00->field_00C9 - this_00->field_04B6,&local_10,&local_c,
                           (float *)&local_8);
      if (iVar5 == 0) break;
      lVar13 = Library::MSVCRT::__ftol();
      local_11b = (undefined1)lVar13;
      lVar13 = Library::MSVCRT::__ftol();
      local_11a = (undefined1)lVar13;
      lVar13 = Library::MSVCRT::__ftol();
      local_119 = (byte)lVar13;
      if (4 < local_119) {
        local_119 = 4;
      }
      puVar10 = (uint *)local_120;
      local_120[0] = 3;
      puVar14 = (byte *)0x16;
    }
    else {
      STFishC::sub_004162B0
                (this_00->field_049A,(short *)local_5e,(undefined2 *)local_30,(undefined2 *)local_32
                );
      local_11b = local_5e[0];
      local_11a = local_30[0];
      local_119 = local_32[0];
      local_120[0] = (this_00->field_0494 != 0xc) - 1U & 5;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_120._1_4_ = this_00->field_049A->field_0018;
      puVar10 = (uint *)local_120;
      puVar14 = (byte *)0x16;
    }
    goto cf_common_join_0054A19A;
  case 5:
  case 6:
    iVar5 = FUN_006e1dd0(g_sT3DSMAPContext_00807598,this_00->field_00C5 - this_00->field_04B2,
                         this_00->field_00C9 - this_00->field_04B6,&local_10,&local_c,
                         (float *)&local_8);
    if (iVar5 != 0) {
      lVar13 = Library::MSVCRT::__ftol();
      local_130 = (uint)lVar13;
      lVar13 = Library::MSVCRT::__ftol();
      local_12c = (undefined4)lVar13;
      lVar13 = Library::MSVCRT::__ftol();
      local_128 = (int)lVar13;
      if (local_128 < 0) {
        local_128 = 0;
      }
      if (4 < local_128) {
        local_128 = 4;
      }
      thunk_FUN_0054edf0((undefined4 *)0x14,&local_130,0,0xffffffff);
      if (_DAT_0079034c <= (float)local_8) {
        local_1c = local_8;
        SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0054A9B0::thunk_FUN_0054a9b0
                  ((AnonReceiver_0054A9B0 *)this_00,local_10,local_c,(float)local_8);
      }
      else {
        local_1c = nullptr;
        SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0054A9B0::thunk_FUN_0054a9b0
                  ((AnonReceiver_0054A9B0 *)this_00,local_10,local_c,0.0);
      }
    }
    break;
  case 8:
    iVar5 = FUN_006e1dd0(g_sT3DSMAPContext_00807598,this_00->field_00C5 - this_00->field_04B2,
                         this_00->field_00C9 - this_00->field_04B6,&local_10,&local_c,
                         (float *)&local_8);
    if (iVar5 != 0) {
      local_178[0] = 2;
      lVar13 = Library::MSVCRT::__ftol();
      local_173 = (undefined1)lVar13;
      lVar13 = Library::MSVCRT::__ftol();
      local_172 = (undefined1)lVar13;
      lVar13 = Library::MSVCRT::__ftol();
      local_171 = (byte)lVar13;
      if (4 < local_171) {
        local_171 = 4;
      }
      thunk_FUN_0054edf0((undefined4 *)0x16,(uint *)local_178,0,0xffffffff);
      if (_DAT_0079034c <= (float)local_8) {
        local_14 = local_8;
        SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0054A9B0::thunk_FUN_0054a9b0
                  ((AnonReceiver_0054A9B0 *)this_00,local_10,local_c,(float)local_8);
      }
      else {
        local_14 = nullptr;
        SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0054A9B0::thunk_FUN_0054a9b0
                  ((AnonReceiver_0054A9B0 *)this_00,local_10,local_c,0.0);
      }
    }
    break;
  case 9:
  case 10:
  case 0xb:
    pSVar2 = this_00->field_049A;
    if (pSVar2 == nullptr) break;
    memset((void *)local_160, 0, 0x18); /* compiler bulk-zero initialization */
    STFishC::sub_004162B0(pSVar2,(short *)local_3e,(undefined2 *)local_6c,(undefined2 *)local_46);
    local_15b = local_3e[0];
    local_159 = local_46[0];
    local_15a = local_6c[0];
    local_160[0] = 1;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_160._1_4_ = this_00->field_049A->field_0018;
    thunk_FUN_0054edf0((undefined4 *)0x16,(uint *)local_160,0,0xffffffff);
    iVar5 = FUN_006e1dd0(g_sT3DSMAPContext_00807598,this_00->field_00C5 - this_00->field_04B2,
                         this_00->field_00C9 - this_00->field_04B6,&local_10,&local_c,
                         (float *)&local_8);
    if (iVar5 == 0) break;
    if (_DAT_0079034c <= (float)local_8) {
      local_14 = local_8;
    }
    else {
      local_14 = nullptr;
    }
    goto LAB_00549b36;
  case 0xd:
  case 0xe:
    if (param_1 != 0) {
      if (sVar1 == 0xd) {
        local_44 = nullptr;
        if (g_allPlayers_007FA174 != nullptr) {
          local_44 = STAllPlayersC::GetScrObjList
                               (g_allPlayers_007FA174,3,this_00->field_00DF,this_00->field_00E3,
                                this_00->field_00E7,this_00->field_00EB,(int *)&local_a0);
        }
        if (local_44 != nullptr) {
          local_18 = (uint *)(local_a0 + 1);
          local_14 = Library::DKW::LIB::FUN_006aac10((uint)local_18);
          if (local_14 != nullptr) {
            *(undefined1 *)local_14 = 3;
            puVar9 = local_44;
            puVar14 = (byte *)((int)local_14 + 1);
            for (uVar8 = local_a0 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *puVar14 = *(undefined4 *)puVar9;
              puVar9 = puVar9 + 2;
              puVar14 = (byte *)(puVar14 + 1);
            }
            for (local_a0 = local_a0 & 3; local_a0 != 0; local_a0 = local_a0 - 1) {
              *(char *)puVar14 = (char)*puVar9;
              puVar9 = (ushort *)((int)puVar9 + 1);
              puVar14 = (byte *)((int)puVar14 + 1);
            }
            thunk_FUN_0054edf0((undefined4 *)0x31,local_14,0,(uint)local_18);
            FreeAndNull(&local_14);
          }
          FreeAndNull(&local_44);
        }
      }
      break;
    }
    pSVar2 = this_00->field_049A;
    if (pSVar2 == nullptr) break;
    memset((void *)local_1c0, 0, 0x21); /* compiler bulk-zero initialization */
    STFishC::sub_004162B0(pSVar2,&local_36,&local_58,&local_62);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_1c0._1_4_ = SEXT24(local_36);
    local_1b7 = (int)local_62;
    local_1bb = (int)local_58;
    local_1c0[0] = 1;
    local_1a3 = this_00->field_049A->field_0018;
    puVar10 = (uint *)local_1c0;
    puVar14 = (byte *)0x17;
    goto cf_common_join_0054A19A;
  case 0xf:
  case 0x10:
    iVar5 = FUN_006e1dd0(g_sT3DSMAPContext_00807598,this_00->field_00C5 - this_00->field_04B2,
                         this_00->field_00C9 - this_00->field_04B6,&local_10,&local_c,
                         (float *)&local_8);
    if (iVar5 != 0) {
      local_19c = ((this_00->field_0494 != 0xf) - 1U & 0xf2) + 0x10;
      lVar13 = Library::MSVCRT::__ftol();
      local_19b = (undefined4)lVar13;
      lVar13 = Library::MSVCRT::__ftol();
      local_197 = (undefined4)lVar13;
      lVar13 = Library::MSVCRT::__ftol();
      local_193 = (int)lVar13;
      if (local_193 < 0) {
        local_193 = 0;
      }
      if (4 < local_193) {
        local_193 = 4;
      }
      thunk_FUN_0054edf0((undefined4 *)0x17,(uint *)&local_19c,0,0xffffffff);
      if (_DAT_0079034c <= (float)local_8) {
        local_20 = local_8;
        SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0054A9B0::thunk_FUN_0054a9b0
                  ((AnonReceiver_0054A9B0 *)this_00,local_10,local_c,(float)local_8);
      }
      else {
        local_20 = nullptr;
        SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0054A9B0::thunk_FUN_0054a9b0
                  ((AnonReceiver_0054A9B0 *)this_00,local_10,local_c,0.0);
      }
    }
    break;
  case 0x11:
    iVar5 = FUN_006e1dd0(g_sT3DSMAPContext_00807598,this_00->field_00C5 - this_00->field_04B2,
                         this_00->field_00C9 - this_00->field_04B6,&local_10,&local_c,
                         (float *)&local_8);
    if (iVar5 != 0) {
      lVar13 = Library::MSVCRT::__ftol();
      local_13c = (uint)lVar13;
      lVar13 = Library::MSVCRT::__ftol();
      local_138 = (undefined4)lVar13;
      lVar13 = Library::MSVCRT::__ftol();
      local_134 = (int)lVar13;
      if (local_134 < 0) {
        local_134 = 0;
      }
      if (4 < local_134) {
        local_134 = 4;
      }
      thunk_FUN_0054edf0((undefined4 *)0x19,&local_13c,0,0xffffffff);
      if (_DAT_0079034c <= (float)local_8) {
        local_14 = local_8;
        SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0054A9B0::thunk_FUN_0054a9b0
                  ((AnonReceiver_0054A9B0 *)this_00,local_10,local_c,(float)local_8);
      }
      else {
        local_14 = nullptr;
        SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0054A9B0::thunk_FUN_0054a9b0
                  ((AnonReceiver_0054A9B0 *)this_00,local_10,local_c,0.0);
      }
    }
    break;
  case 0x12:
  case 0x13:
    if (this_00->field_049A == nullptr) break;
    local_d0 = (sVar1 != 0x12) + '\x01';
    STFishC::sub_004162B0(this_00->field_049A,&local_cf,&local_cd,&local_cb);
    puVar10 = (uint *)&local_d0;
    puVar14 = (byte *)0x1f;
    goto cf_common_join_0054A19A;
  case 0x14:
    if (g_tLOBldMark_007FB2AC != nullptr) {
      local_c8 = this_00->field_04AA;
      local_c4 = 0;
      local_c0 = 0;
      local_bc = 0;
      if (g_tLOBldMark_007FB2AC->field_0024 != 0) {
        if (&stack0x00000000 != (undefined1 *)0xc4) {
          local_c4 = g_tLOBldMark_007FB2AC->field_0030;
        }
        if (&stack0x00000000 != (undefined1 *)0xc0) {
          local_c0 = g_tLOBldMark_007FB2AC->field_0034;
        }
        if (&stack0x00000000 != (undefined1 *)0xbc) {
          local_bc = g_tLOBldMark_007FB2AC->field_0038;
        }
        if (g_tLOBldMark_007FB2AC->field_0024 != 0) {
          thunk_FUN_0054edf0((undefined4 *)0x23,&local_c8,0,0xffffffff);
          iVar5 = FUN_006e1dd0(g_sT3DSMAPContext_00807598,this_00->field_00C5 - this_00->field_04B2,
                               this_00->field_00C9 - this_00->field_04B6,&local_10,&local_c,
                               (float *)&local_8);
          if (iVar5 != 0) {
            if (_DAT_0079034c <= (float)local_8) {
              local_14 = local_8;
              SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0054A9B0::thunk_FUN_0054a9b0
                        ((AnonReceiver_0054A9B0 *)this_00,local_10,local_c,(float)local_8);
            }
            else {
              local_14 = nullptr;
              SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0054A9B0::thunk_FUN_0054a9b0
                        ((AnonReceiver_0054A9B0 *)this_00,local_10,local_c,0.0);
            }
          }
        }
      }
    }
    break;
  case 0x16:
  case 0x18:
    pSVar2 = this_00->field_049A;
    if (pSVar2 == nullptr) break;
    memset((void *)local_260, 0, 0x21); /* compiler bulk-zero initialization */
    STFishC::sub_004162B0(pSVar2,&local_6e,&local_66,&local_6a);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_260._1_4_ = SEXT24(local_6e);
    local_25b = (int)local_66;
    local_257 = (int)local_6a;
    local_260[0] = ((this_00->field_0494 != 0x18) - 1U & 0xeb) + 0x18;
    puVar10 = (uint *)local_260;
    puVar14 = (byte *)0x17;
    goto cf_common_join_0054A19A;
  case 0x17:
    if (this_00->field_049A == nullptr) break;
    uVar3 = this_00->field_049A->field_0018;
    puVar10 = (uint *)&local_78;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    _local_78 = CONCAT31((int3)uVar3,1);
    local_74 = (undefined1)((uint)uVar3 >> 0x18);
    puVar14 = (byte *)0x21;
    goto cf_common_join_0054A19A;
  case 0x19:
    iVar5 = FUN_006e1dd0(g_sT3DSMAPContext_00807598,this_00->field_00C5 - this_00->field_04B2,
                         this_00->field_00C9 - this_00->field_04B6,&local_10,&local_c,
                         (float *)&local_8);
    if (iVar5 != 0) {
      lVar13 = Library::MSVCRT::__ftol();
      local_207 = (undefined4)lVar13;
      lVar13 = Library::MSVCRT::__ftol();
      local_203 = (undefined4)lVar13;
      lVar13 = Library::MSVCRT::__ftol();
      local_1ff = (int)lVar13;
      if (local_1ff < 0) {
        local_1ff = 0;
      }
      if (4 < local_1ff) {
        local_1ff = 4;
      }
      local_208 = 0xb;
      thunk_FUN_0054edf0((undefined4 *)0x17,(uint *)&local_208,0,0xffffffff);
      if (_DAT_0079034c <= (float)local_8) {
        local_14 = local_8;
        SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0054A9B0::thunk_FUN_0054a9b0
                  ((AnonReceiver_0054A9B0 *)this_00,local_10,local_c,(float)local_8);
      }
      else {
        local_14 = nullptr;
        SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0054A9B0::thunk_FUN_0054a9b0
                  ((AnonReceiver_0054A9B0 *)this_00,local_10,local_c,0.0);
      }
    }
    break;
  case 0x1a:
    if (this_00->field_049A == nullptr) break;
    uVar3 = this_00->field_049A->field_0018;
    puVar10 = (uint *)&local_80;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    _local_80 = CONCAT31((int3)uVar3,4);
    local_7c = (undefined1)((uint)uVar3 >> 0x18);
    puVar14 = (byte *)0x21;
    goto cf_common_join_0054A19A;
  case 0x1b:
    pSVar2 = this_00->field_049A;
    if (pSVar2 == nullptr) break;
    memset((void *)local_23c, 0, 0x21); /* compiler bulk-zero initialization */
    STFishC::sub_004162B0(pSVar2,&local_70,&local_38,&local_60);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_23c._1_4_ = SEXT24(local_70);
    local_237 = (int)local_38;
    local_233 = (int)local_60;
    puVar10 = (uint *)local_23c;
    local_23c[0] = 0x13;
    puVar14 = (byte *)0x17;
    goto cf_common_join_0054A19A;
  case 0x1c:
    local_108 = (uint)*(byte *)&this_00->field_04AA;
    local_104 = 0;
    local_100 = 0;
    local_fc = 0;
    local_f8 = 0;
    uStack_f7 = 0;
    lVar13 = Library::MSVCRT::__ftol();
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_108._1_3_ = (undefined3)lVar13;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_104._0_1_ = (undefined1)((ulonglong)lVar13 >> 0x18);
    lVar13 = Library::MSVCRT::__ftol();
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_104._1_3_ = (undefined3)lVar13;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_100._0_1_ = (undefined1)((ulonglong)lVar13 >> 0x18);
    lVar13 = Library::MSVCRT::__ftol();
    uStack_f7 = *(undefined1 *)&this_00->field_00FB;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_100._1_3_ = (undefined3)lVar13;
    puVar10 = &local_108;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_fc._1_3_ = (undefined3)this_00->field_00F7;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_fc = CONCAT31(local_fc._1_3_,(char)((ulonglong)lVar13 >> 0x18));
    local_f8 = (undefined1)((uint)this_00->field_00F7 >> 0x18);
LAB_0054a196:
    puVar14 = (byte *)0x18;
    goto cf_common_join_0054A19A;
  case 0x1d:
    if (this_00->field_04A2 == 0x18) {
      iVar5 = FUN_006e1dd0(g_sT3DSMAPContext_00807598,this_00->field_00C5 - this_00->field_04B2,
                           this_00->field_00C9 - this_00->field_04B6,&local_10,&local_c,
                           (float *)&local_8);
      if (iVar5 == 0) break;
      local_90 = 1;
      local_8c = 0;
      local_88 = 0;
      local_84 = 0;
      lVar13 = Library::MSVCRT::__ftol();
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_90._1_3_ = (undefined3)lVar13;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_8c._0_1_ = (undefined1)((ulonglong)lVar13 >> 0x18);
      lVar13 = Library::MSVCRT::__ftol();
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_8c._1_3_ = (undefined3)lVar13;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_88._0_1_ = (undefined1)((ulonglong)lVar13 >> 0x18);
      lVar13 = Library::MSVCRT::__ftol();
      iVar5 = (int)lVar13;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_88._1_3_ = (undefined3)lVar13;
      local_84 = (undefined1)((ulonglong)lVar13 >> 0x18);
      if (iVar5 < 0) {
        iVar5 = 0;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_88._1_3_ = 0;
        local_84 = 0;
      }
      if (4 < iVar5) {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_88._1_3_ = 4;
        local_84 = 0;
      }
      thunk_FUN_0054edf0((undefined4 *)0x1a,&local_90,0,0xffffffff);
      if (_DAT_0079034c <= (float)local_8) {
        local_14 = local_8;
      }
      else {
        local_14 = nullptr;
      }
      goto LAB_00549c33;
    }
    if (this_00->field_049A == nullptr) break;
    local_dc = 0;
    local_d8 = 0;
    local_e0 = 2;
    local_d4 = 0;
    STFishC::sub_004162B0(this_00->field_049A,&local_64,&local_4e,&local_7a);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_e0._1_3_ = (int3)local_64;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_dc._0_1_ = (char)(local_64 >> 0xf);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_dc._1_3_ = (int3)local_4e;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_d8._0_1_ = (char)(local_4e >> 0xf);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_d8._1_3_ = (int3)local_7a;
    local_d4 = (char)(local_7a >> 0xf);
    thunk_FUN_0054edf0((undefined4 *)0x1a,&local_e0,0,0xffffffff);
    iVar5 = FUN_006e1dd0(g_sT3DSMAPContext_00807598,this_00->field_00C5 - this_00->field_04B2,
                         this_00->field_00C9 - this_00->field_04B6,&local_10,&local_c,
                         (float *)&local_8);
    if (iVar5 == 0) break;
    if (_DAT_0079034c <= (float)local_8) {
      local_14 = local_8;
    }
    else {
      local_14 = nullptr;
    }
LAB_00549b36:
    SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0054A9B0::thunk_FUN_0054a9b0
              ((AnonReceiver_0054A9B0 *)this_00,local_10,local_c,(float)local_14);
    break;
  case 0x1e:
    if (this_00->field_049A == nullptr) break;
    local_2c = 0;
    sStack_2b = 0;
    uStack_29 = 0;
    uStack_28 = 0;
    uStack_27 = 0;
    local_26 = 0;
    STFishC::sub_004162B0(this_00->field_049A,&local_5c,&local_5a,&local_34);
    sStack_2b = local_5c;
    puVar10 = (uint *)&local_2c;
    uStack_29 = (undefined1)local_5a;
    uStack_28 = (undefined1)((ushort)local_5a >> 8);
    uStack_27 = (undefined1)local_34;
    local_26 = (undefined1)((ushort)local_34 >> 8);
    local_2c = 3;
    puVar14 = (byte *)0x1f;
cf_common_join_0054A19A:
    thunk_FUN_0054edf0(puVar14,puVar10,0,0xffffffff);
    break;
  case 0x1f:
    pSVar2 = this_00->field_049A;
    if (pSVar2 == nullptr) break;
    memset(local_284, 0, 0x21); /* compiler bulk-zero initialization */
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_284[0]._0_1_ = 0x19;
    local_267 = pSVar2->field_0018;
    thunk_FUN_0054edf0((undefined4 *)0x17,local_284,0,0xffffffff);
    iVar5 = FUN_006e1dd0(g_sT3DSMAPContext_00807598,this_00->field_00C5 - this_00->field_04B2,
                         this_00->field_00C9 - this_00->field_04B6,&local_10,&local_c,
                         (float *)&local_8);
    if (iVar5 == 0) break;
    if (_DAT_0079034c <= (float)local_8) {
      local_14 = local_8;
    }
    else {
      local_14 = nullptr;
    }
LAB_00549c33:
    SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0054A9B0::thunk_FUN_0054a9b0
              ((AnonReceiver_0054A9B0 *)this_00,local_10,local_c,(float)local_14);
  }
switchD_00548db5_caseD_3:
  if (((this_00->field_04A2 != 0) && (this_00->field_0xd3 == '\0')) &&
     (this_00->field_04A6 = 1, g_cPanel_00801688 != nullptr)) {
    CPanelTy::sub_004FAD20(g_cPanel_00801688);
  }
  g_currentExceptionFrame = local_2c8.previous;
  return;
}

