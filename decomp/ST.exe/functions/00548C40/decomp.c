
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\to_cursor.cpp
   CursorClassTy::TakeCmdToRun */

void __thiscall CursorClassTy::TakeCmdToRun(CursorClassTy *this,int param_1)

{
  short sVar1;
  int *piVar2;
  STFishC *pSVar3;
  undefined4 uVar4;
  code *pcVar5;
  AnonReceiver_0054A9B0 *this_00;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  ushort *puVar9;
  void *unaff_EDI;
  char *pcVar10;
  undefined4 *puVar11;
  longlong lVar12;
  undefined4 *puVar13;
  uint *puVar14;
  InternalExceptionFrame local_2c8;
  undefined4 local_284 [7];
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
  undefined4 local_13c;
  undefined4 local_138;
  int local_134;
  undefined4 local_130;
  undefined4 local_12c;
  int local_128;
  AnonReceiver_0054A9B0 *local_124;
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
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  char local_d4;
  char local_d0;
  undefined2 local_cf;
  undefined2 local_cd;
  undefined2 local_cb;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  char *local_94;
  undefined4 local_90;
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
  undefined2 local_5c;
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
  undefined2 uStack_2b;
  undefined1 uStack_29;
  undefined1 uStack_28;
  undefined1 uStack_27;
  undefined1 local_26;
  undefined4 *local_24;
  ushort *local_20;
  ushort *local_1c;
  undefined4 *local_18;
  ushort *local_14;
  float local_10;
  float local_c;
  ushort *local_8;
  
  local_2c8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_2c8;
  local_124 = (AnonReceiver_0054A9B0 *)this;
  iVar6 = Library::MSVCRT::__setjmp3(local_2c8.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_124;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_2c8.previous;
    iVar7 = ReportDebugMessage(s_E____titans_Andrey_to_cursor_cpp_007c7d60,0x671,0,iVar6,
                               &DAT_007a4ccc,s_CursorClassTy__TakeCmdToRun_007c7f90);
    if (iVar7 == 0) {
      RaiseInternalException(iVar6,0,s_E____titans_Andrey_to_cursor_cpp_007c7d60,0x672);
      return;
    }
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (PTR_00807598 != (AnonShape_GLOBAL_00807598_0C6808FB *)0x0) {
    local_148 = *(undefined4 *)&local_124->field_0xef;
    local_144 = *(undefined4 *)&local_124->field_0xf3;
    local_140 = iVar6;
    FUN_006e25d0(PTR_00807598,&local_218);
    *(int *)&this_00->field_0xdf = local_218 >> 0x10;
    *(int *)&this_00->field_0xe7 =
         (*(int *)&this_00->field_0xc5 - *(int *)&this_00->field_0x4b2) - (local_218 >> 0x10);
    *(int *)&this_00->field_0xe3 = local_214 >> 0x10;
    *(int *)&this_00->field_0xeb =
         (*(int *)&this_00->field_0xc9 - *(int *)&this_00->field_0x4b6) - (local_214 >> 0x10);
  }
  if (PTR_00802a38 == (STPlaySystemC *)0x0) {
    g_currentExceptionFrame = local_2c8.previous;
    return;
  }
  if (this_00->field_0x4de != '\0') {
    if (((*(short *)&this_00->field_0x494 == 0x48) &&
        (piVar2 = *(int **)&this_00->field_0x49a, piVar2 != (int *)0x0)) &&
       (DAT_00801690 != (void *)0x0)) {
      iVar6 = (**(code **)(*piVar2 + 0x2c))();
      if (iVar6 == 0x78) {
        iVar6 = *(int *)(*(int *)&this_00->field_0x49a + 0x259);
      }
      iVar7 = (**(code **)(*piVar2 + 0xc))();
      thunk_FUN_00514bc0(DAT_00801690,iVar6,iVar7);
      this_00->field_0x4de = 0;
    }
    goto switchD_00548db5_caseD_3;
  }
  sVar1 = *(short *)&this_00->field_0x494;
  switch(sVar1) {
  case 1:
    switch(*(int *)&this_00->field_0x4a2) {
    case 3:
    case 10:
    case 0x2b:
      if (param_1 != 0) {
        local_4c = (ushort *)0x0;
        if (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0) {
          local_4c = STAllPlayersC::GetScrObjList
                               (g_sTAllPlayers_007FA174,(*(int *)&this_00->field_0x4a2 == 10) + 1,
                                *(int *)&this_00->field_0xdf,*(int *)&this_00->field_0xe3,
                                *(int *)&this_00->field_0xe7,*(int *)&this_00->field_0xeb,
                                (int *)&local_9c);
        }
        if (local_4c != (ushort *)0x0) {
          local_18 = (undefined4 *)(local_9c + 1);
          local_94 = (char *)Library::DKW::LIB::FUN_006aac10((uint)local_18);
          if (local_94 != (char *)0x0) {
            *local_94 = (*(int *)&this_00->field_0x4a2 == 10) + '\x01';
            puVar9 = local_4c;
            pcVar10 = local_94 + 1;
            for (uVar8 = local_9c >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined4 *)pcVar10 = *(undefined4 *)puVar9;
              puVar9 = puVar9 + 2;
              pcVar10 = pcVar10 + 4;
            }
            for (local_9c = local_9c & 3; local_9c != 0; local_9c = local_9c - 1) {
              *pcVar10 = (char)*puVar9;
              puVar9 = (ushort *)((int)puVar9 + 1);
              pcVar10 = pcVar10 + 1;
            }
            thunk_FUN_0054edf0((undefined4 *)0x31,(undefined4 *)local_94,0,(uint)local_18);
            FreeAndNull(&local_94);
          }
          FreeAndNull(&local_4c);
        }
      }
      break;
    case 5:
      if (param_1 != 0) {
        local_1c = (ushort *)0x0;
        if (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0) {
          local_1c = STAllPlayersC::GetScrObjList
                               (g_sTAllPlayers_007FA174,3,*(int *)&this_00->field_0xdf,
                                *(int *)&this_00->field_0xe3,*(int *)&this_00->field_0xe7,
                                *(int *)&this_00->field_0xeb,(int *)&local_a8);
        }
        if (local_1c != (ushort *)0x0) {
          local_24 = (undefined4 *)(local_a8 + 1);
          local_18 = Library::DKW::LIB::FUN_006aac10((uint)local_24);
          if (local_18 != (undefined4 *)0x0) {
            *(undefined1 *)local_18 = 3;
            puVar9 = local_1c;
            puVar13 = (undefined4 *)((int)local_18 + 1);
            for (uVar8 = local_a8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *puVar13 = *(undefined4 *)puVar9;
              puVar9 = puVar9 + 2;
              puVar13 = puVar13 + 1;
            }
            for (local_a8 = local_a8 & 3; local_a8 != 0; local_a8 = local_a8 - 1) {
              *(char *)puVar13 = (char)*puVar9;
              puVar9 = (ushort *)((int)puVar9 + 1);
              puVar13 = (undefined4 *)((int)puVar13 + 1);
            }
            thunk_FUN_0054edf0((undefined4 *)0x31,local_18,0,(uint)local_24);
            FreeAndNull(&local_18);
          }
          FreeAndNull(&local_1c);
        }
        break;
      }
      pSVar3 = *(STFishC **)&this_00->field_0x49a;
      if (pSVar3 == (STFishC *)0x0) break;
      puVar13 = (undefined4 *)local_1e4;
      for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar13 = 0;
        puVar13 = puVar13 + 1;
      }
      *(undefined1 *)puVar13 = 0;
      STFishC::sub_004162B0(pSVar3,&local_56,&local_68,&local_2e);
      local_1e4._1_4_ = SEXT24(local_56);
      local_1db = (int)local_2e;
      local_1df = (int)local_68;
      local_1e4[0] = 1;
      local_1c7 = *(undefined4 *)(*(int *)&this_00->field_0x49a + 0x18);
      puVar14 = (uint *)local_1e4;
      puVar13 = (undefined4 *)0x17;
      goto cf_common_join_0054A19A;
    case 0xe:
      if (PTR_007fb2ac != (AnonShape_GLOBAL_007FB2AC_70073F41 *)0x0) {
        local_b8 = *(undefined4 *)&this_00->field_0x4aa;
        local_b4 = 0;
        local_b0 = 0;
        local_ac = 0;
        if (PTR_007fb2ac->field_0024 != 0) {
          if (&stack0x00000000 != (undefined1 *)0xb4) {
            local_b4 = PTR_007fb2ac->field_0030;
          }
          if (&stack0x00000000 != (undefined1 *)0xb0) {
            local_b0 = PTR_007fb2ac->field_0034;
          }
          if (&stack0x00000000 != (undefined1 *)0xac) {
            local_ac = PTR_007fb2ac->field_0038;
          }
          if (PTR_007fb2ac->field_0024 != 0) {
            thunk_FUN_0054edf0((undefined4 *)0x23,&local_b8,0,0xffffffff);
            iVar6 = FUN_006e1dd0(PTR_00807598,
                                 *(int *)&this_00->field_0xc5 - *(int *)&this_00->field_0x4b2,
                                 *(int *)&this_00->field_0xc9 - *(int *)&this_00->field_0x4b6,
                                 &local_10,&local_c,(float *)&local_8);
            if (iVar6 != 0) {
              if (_DAT_0079034c <= (float)local_8) {
                local_14 = local_8;
                SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0054A9B0::thunk_FUN_0054a9b0
                          (this_00,local_10,local_c,(float)local_8);
              }
              else {
                local_14 = (ushort *)0x0;
                SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0054A9B0::thunk_FUN_0054a9b0
                          (this_00,local_10,local_c,0.0);
              }
            }
          }
        }
      }
      break;
    case 0x2c:
      if (param_1 != 0) {
        local_54 = (undefined4 *)0x0;
        if (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0) {
          local_54 = (undefined4 *)thunk_FUN_0044e220();
        }
        if (local_54 != (undefined4 *)0x0) {
          local_18 = (undefined4 *)(local_a4 + 1);
          local_24 = Library::DKW::LIB::FUN_006aac10((uint)local_18);
          if (local_24 != (undefined4 *)0x0) {
            *(undefined1 *)local_24 = 4;
            puVar13 = local_54;
            puVar11 = (undefined4 *)((int)local_24 + 1);
            for (uVar8 = local_a4 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *puVar11 = *puVar13;
              puVar13 = puVar13 + 1;
              puVar11 = puVar11 + 1;
            }
            for (local_a4 = local_a4 & 3; local_a4 != 0; local_a4 = local_a4 - 1) {
              *(undefined1 *)puVar11 = *(undefined1 *)puVar13;
              puVar13 = (undefined4 *)((int)puVar13 + 1);
              puVar11 = (undefined4 *)((int)puVar11 + 1);
            }
            thunk_FUN_0054edf0((undefined4 *)0x31,local_24,0,(uint)local_18);
            FreeAndNull(&local_24);
          }
          FreeAndNull(&local_54);
        }
      }
      break;
    case 0x4e:
      local_f4 = (uint)(byte)this_00->field_0x4aa;
      local_f0 = 0;
      local_ec = 0;
      local_e8 = 0;
      local_e4 = 0;
      uStack_e3 = 0;
      lVar12 = Library::MSVCRT::__ftol();
      local_f4._1_3_ = (undefined3)lVar12;
      local_f0._0_1_ = (undefined1)((ulonglong)lVar12 >> 0x18);
      lVar12 = Library::MSVCRT::__ftol();
      local_f0._1_3_ = (undefined3)lVar12;
      local_ec._0_1_ = (undefined1)((ulonglong)lVar12 >> 0x18);
      lVar12 = Library::MSVCRT::__ftol();
      uStack_e3 = this_00->field_0xfb;
      local_ec._1_3_ = (undefined3)lVar12;
      puVar14 = &local_f4;
      local_e8._1_3_ = (undefined3)*(undefined4 *)&this_00->field_0xf7;
      local_e8 = CONCAT31(local_e8._1_3_,(char)((ulonglong)lVar12 >> 0x18));
      local_e4 = (undefined1)((uint)*(undefined4 *)&this_00->field_0xf7 >> 0x18);
      goto LAB_0054a196;
    }
    break;
  case 2:
  case 7:
  case 0xc:
    if (param_1 != 0) {
      local_3c = (ushort *)0x0;
      if (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0) {
        local_3c = STAllPlayersC::GetScrObjList
                             (g_sTAllPlayers_007FA174,(sVar1 == 0xc) + 1,
                              *(int *)&this_00->field_0xdf,*(int *)&this_00->field_0xe3,
                              *(int *)&this_00->field_0xe7,*(int *)&this_00->field_0xeb,
                              (int *)&local_98);
      }
      if (local_3c != (ushort *)0x0) {
        local_18 = (undefined4 *)(local_98 + 1);
        local_20 = (ushort *)Library::DKW::LIB::FUN_006aac10((uint)local_18);
        if (local_20 != (ushort *)0x0) {
          *(char *)local_20 = (*(short *)&this_00->field_0x494 == 0xc) + '\x01';
          puVar9 = local_3c;
          puVar13 = (undefined4 *)((int)local_20 + 1);
          for (uVar8 = local_98 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *puVar13 = *(undefined4 *)puVar9;
            puVar9 = puVar9 + 2;
            puVar13 = puVar13 + 1;
          }
          for (local_98 = local_98 & 3; local_98 != 0; local_98 = local_98 - 1) {
            *(char *)puVar13 = (char)*puVar9;
            puVar9 = (ushort *)((int)puVar9 + 1);
            puVar13 = (undefined4 *)((int)puVar13 + 1);
          }
          thunk_FUN_0054edf0((undefined4 *)0x31,(undefined4 *)local_20,0,(uint)local_18);
          FreeAndNull(&local_20);
        }
        FreeAndNull(&local_3c);
      }
      break;
    }
    puVar13 = (undefined4 *)local_120;
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
    }
    if (*(STFishC **)&this_00->field_0x49a == (STFishC *)0x0) {
      iVar6 = FUN_006e1dd0(PTR_00807598,*(int *)&this_00->field_0xc5 - *(int *)&this_00->field_0x4b2
                           ,*(int *)&this_00->field_0xc9 - *(int *)&this_00->field_0x4b6,&local_10,
                           &local_c,(float *)&local_8);
      if (iVar6 == 0) break;
      lVar12 = Library::MSVCRT::__ftol();
      local_11b = (undefined1)lVar12;
      lVar12 = Library::MSVCRT::__ftol();
      local_11a = (undefined1)lVar12;
      lVar12 = Library::MSVCRT::__ftol();
      local_119 = (byte)lVar12;
      if (4 < local_119) {
        local_119 = 4;
      }
      puVar14 = (uint *)local_120;
      local_120[0] = 3;
      puVar13 = (undefined4 *)0x16;
    }
    else {
      STFishC::sub_004162B0
                (*(STFishC **)&this_00->field_0x49a,(undefined2 *)local_5e,(undefined2 *)local_30,
                 (undefined2 *)local_32);
      local_11b = local_5e[0];
      local_11a = local_30[0];
      local_119 = local_32[0];
      local_120[0] = (*(short *)&this_00->field_0x494 != 0xc) - 1U & 5;
      local_120._1_4_ = *(undefined4 *)(*(int *)&this_00->field_0x49a + 0x18);
      puVar14 = (uint *)local_120;
      puVar13 = (undefined4 *)0x16;
    }
    goto cf_common_join_0054A19A;
  case 5:
  case 6:
    iVar6 = FUN_006e1dd0(PTR_00807598,*(int *)&this_00->field_0xc5 - *(int *)&this_00->field_0x4b2,
                         *(int *)&this_00->field_0xc9 - *(int *)&this_00->field_0x4b6,&local_10,
                         &local_c,(float *)&local_8);
    if (iVar6 != 0) {
      lVar12 = Library::MSVCRT::__ftol();
      local_130 = (undefined4)lVar12;
      lVar12 = Library::MSVCRT::__ftol();
      local_12c = (undefined4)lVar12;
      lVar12 = Library::MSVCRT::__ftol();
      local_128 = (int)lVar12;
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
                  (this_00,local_10,local_c,(float)local_8);
      }
      else {
        local_1c = (ushort *)0x0;
        SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0054A9B0::thunk_FUN_0054a9b0
                  (this_00,local_10,local_c,0.0);
      }
    }
    break;
  case 8:
    iVar6 = FUN_006e1dd0(PTR_00807598,*(int *)&this_00->field_0xc5 - *(int *)&this_00->field_0x4b2,
                         *(int *)&this_00->field_0xc9 - *(int *)&this_00->field_0x4b6,&local_10,
                         &local_c,(float *)&local_8);
    if (iVar6 != 0) {
      local_178[0] = 2;
      lVar12 = Library::MSVCRT::__ftol();
      local_173 = (undefined1)lVar12;
      lVar12 = Library::MSVCRT::__ftol();
      local_172 = (undefined1)lVar12;
      lVar12 = Library::MSVCRT::__ftol();
      local_171 = (byte)lVar12;
      if (4 < local_171) {
        local_171 = 4;
      }
      thunk_FUN_0054edf0((undefined4 *)0x16,(undefined4 *)local_178,0,0xffffffff);
      if (_DAT_0079034c <= (float)local_8) {
        local_14 = local_8;
        SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0054A9B0::thunk_FUN_0054a9b0
                  (this_00,local_10,local_c,(float)local_8);
      }
      else {
        local_14 = (ushort *)0x0;
        SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0054A9B0::thunk_FUN_0054a9b0
                  (this_00,local_10,local_c,0.0);
      }
    }
    break;
  case 9:
  case 10:
  case 0xb:
    pSVar3 = *(STFishC **)&this_00->field_0x49a;
    if (pSVar3 == (STFishC *)0x0) break;
    puVar13 = (undefined4 *)local_160;
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
    }
    STFishC::sub_004162B0
              (pSVar3,(undefined2 *)local_3e,(undefined2 *)local_6c,(undefined2 *)local_46);
    local_15b = local_3e[0];
    local_159 = local_46[0];
    local_15a = local_6c[0];
    local_160[0] = 1;
    local_160._1_4_ = *(undefined4 *)(*(int *)&this_00->field_0x49a + 0x18);
    thunk_FUN_0054edf0((undefined4 *)0x16,(undefined4 *)local_160,0,0xffffffff);
    iVar6 = FUN_006e1dd0(PTR_00807598,*(int *)&this_00->field_0xc5 - *(int *)&this_00->field_0x4b2,
                         *(int *)&this_00->field_0xc9 - *(int *)&this_00->field_0x4b6,&local_10,
                         &local_c,(float *)&local_8);
    if (iVar6 == 0) break;
    if (_DAT_0079034c <= (float)local_8) {
      local_14 = local_8;
    }
    else {
      local_14 = (ushort *)0x0;
    }
    goto LAB_00549b36;
  case 0xd:
  case 0xe:
    if (param_1 != 0) {
      if (sVar1 == 0xd) {
        local_44 = (ushort *)0x0;
        if (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0) {
          local_44 = STAllPlayersC::GetScrObjList
                               (g_sTAllPlayers_007FA174,3,*(int *)&this_00->field_0xdf,
                                *(int *)&this_00->field_0xe3,*(int *)&this_00->field_0xe7,
                                *(int *)&this_00->field_0xeb,(int *)&local_a0);
        }
        if (local_44 != (ushort *)0x0) {
          local_18 = (undefined4 *)(local_a0 + 1);
          local_14 = (ushort *)Library::DKW::LIB::FUN_006aac10((uint)local_18);
          if (local_14 != (ushort *)0x0) {
            *(undefined1 *)local_14 = 3;
            puVar9 = local_44;
            puVar13 = (undefined4 *)((int)local_14 + 1);
            for (uVar8 = local_a0 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *puVar13 = *(undefined4 *)puVar9;
              puVar9 = puVar9 + 2;
              puVar13 = puVar13 + 1;
            }
            for (local_a0 = local_a0 & 3; local_a0 != 0; local_a0 = local_a0 - 1) {
              *(char *)puVar13 = (char)*puVar9;
              puVar9 = (ushort *)((int)puVar9 + 1);
              puVar13 = (undefined4 *)((int)puVar13 + 1);
            }
            thunk_FUN_0054edf0((undefined4 *)0x31,(undefined4 *)local_14,0,(uint)local_18);
            FreeAndNull(&local_14);
          }
          FreeAndNull(&local_44);
        }
      }
      break;
    }
    pSVar3 = *(STFishC **)&this_00->field_0x49a;
    if (pSVar3 == (STFishC *)0x0) break;
    puVar13 = (undefined4 *)local_1c0;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
    }
    *(undefined1 *)puVar13 = 0;
    STFishC::sub_004162B0(pSVar3,&local_36,&local_58,&local_62);
    local_1c0._1_4_ = SEXT24(local_36);
    local_1b7 = (int)local_62;
    local_1bb = (int)local_58;
    local_1c0[0] = 1;
    local_1a3 = *(undefined4 *)(*(int *)&this_00->field_0x49a + 0x18);
    puVar14 = (uint *)local_1c0;
    puVar13 = (undefined4 *)0x17;
    goto cf_common_join_0054A19A;
  case 0xf:
  case 0x10:
    iVar6 = FUN_006e1dd0(PTR_00807598,*(int *)&this_00->field_0xc5 - *(int *)&this_00->field_0x4b2,
                         *(int *)&this_00->field_0xc9 - *(int *)&this_00->field_0x4b6,&local_10,
                         &local_c,(float *)&local_8);
    if (iVar6 != 0) {
      local_19c = ((*(short *)&this_00->field_0x494 != 0xf) - 1U & 0xf2) + 0x10;
      lVar12 = Library::MSVCRT::__ftol();
      local_19b = (undefined4)lVar12;
      lVar12 = Library::MSVCRT::__ftol();
      local_197 = (undefined4)lVar12;
      lVar12 = Library::MSVCRT::__ftol();
      local_193 = (int)lVar12;
      if (local_193 < 0) {
        local_193 = 0;
      }
      if (4 < local_193) {
        local_193 = 4;
      }
      thunk_FUN_0054edf0((undefined4 *)0x17,(undefined4 *)&local_19c,0,0xffffffff);
      if (_DAT_0079034c <= (float)local_8) {
        local_20 = local_8;
        SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0054A9B0::thunk_FUN_0054a9b0
                  (this_00,local_10,local_c,(float)local_8);
      }
      else {
        local_20 = (ushort *)0x0;
        SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0054A9B0::thunk_FUN_0054a9b0
                  (this_00,local_10,local_c,0.0);
      }
    }
    break;
  case 0x11:
    iVar6 = FUN_006e1dd0(PTR_00807598,*(int *)&this_00->field_0xc5 - *(int *)&this_00->field_0x4b2,
                         *(int *)&this_00->field_0xc9 - *(int *)&this_00->field_0x4b6,&local_10,
                         &local_c,(float *)&local_8);
    if (iVar6 != 0) {
      lVar12 = Library::MSVCRT::__ftol();
      local_13c = (undefined4)lVar12;
      lVar12 = Library::MSVCRT::__ftol();
      local_138 = (undefined4)lVar12;
      lVar12 = Library::MSVCRT::__ftol();
      local_134 = (int)lVar12;
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
                  (this_00,local_10,local_c,(float)local_8);
      }
      else {
        local_14 = (ushort *)0x0;
        SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0054A9B0::thunk_FUN_0054a9b0
                  (this_00,local_10,local_c,0.0);
      }
    }
    break;
  case 0x12:
  case 0x13:
    if (*(STFishC **)&this_00->field_0x49a == (STFishC *)0x0) break;
    local_d0 = (sVar1 != 0x12) + '\x01';
    STFishC::sub_004162B0(*(STFishC **)&this_00->field_0x49a,&local_cf,&local_cd,&local_cb);
    puVar14 = (uint *)&local_d0;
    puVar13 = (undefined4 *)0x1f;
    goto cf_common_join_0054A19A;
  case 0x14:
    if (PTR_007fb2ac != (AnonShape_GLOBAL_007FB2AC_70073F41 *)0x0) {
      local_c8 = *(undefined4 *)&this_00->field_0x4aa;
      local_c4 = 0;
      local_c0 = 0;
      local_bc = 0;
      if (PTR_007fb2ac->field_0024 != 0) {
        if (&stack0x00000000 != (undefined1 *)0xc4) {
          local_c4 = PTR_007fb2ac->field_0030;
        }
        if (&stack0x00000000 != (undefined1 *)0xc0) {
          local_c0 = PTR_007fb2ac->field_0034;
        }
        if (&stack0x00000000 != (undefined1 *)0xbc) {
          local_bc = PTR_007fb2ac->field_0038;
        }
        if (PTR_007fb2ac->field_0024 != 0) {
          thunk_FUN_0054edf0((undefined4 *)0x23,&local_c8,0,0xffffffff);
          iVar6 = FUN_006e1dd0(PTR_00807598,
                               *(int *)&this_00->field_0xc5 - *(int *)&this_00->field_0x4b2,
                               *(int *)&this_00->field_0xc9 - *(int *)&this_00->field_0x4b6,
                               &local_10,&local_c,(float *)&local_8);
          if (iVar6 != 0) {
            if (_DAT_0079034c <= (float)local_8) {
              local_14 = local_8;
              SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0054A9B0::thunk_FUN_0054a9b0
                        (this_00,local_10,local_c,(float)local_8);
            }
            else {
              local_14 = (ushort *)0x0;
              SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0054A9B0::thunk_FUN_0054a9b0
                        (this_00,local_10,local_c,0.0);
            }
          }
        }
      }
    }
    break;
  case 0x16:
  case 0x18:
    pSVar3 = *(STFishC **)&this_00->field_0x49a;
    if (pSVar3 == (STFishC *)0x0) break;
    puVar13 = (undefined4 *)local_260;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
    }
    *(undefined1 *)puVar13 = 0;
    STFishC::sub_004162B0(pSVar3,&local_6e,&local_66,&local_6a);
    local_260._1_4_ = SEXT24(local_6e);
    local_25b = (int)local_66;
    local_257 = (int)local_6a;
    local_260[0] = ((*(short *)&this_00->field_0x494 != 0x18) - 1U & 0xeb) + 0x18;
    puVar14 = (uint *)local_260;
    puVar13 = (undefined4 *)0x17;
    goto cf_common_join_0054A19A;
  case 0x17:
    if (*(int *)&this_00->field_0x49a == 0) break;
    uVar4 = *(undefined4 *)(*(int *)&this_00->field_0x49a + 0x18);
    puVar14 = (uint *)&local_78;
    _local_78 = CONCAT31((int3)uVar4,1);
    local_74 = (undefined1)((uint)uVar4 >> 0x18);
    puVar13 = (undefined4 *)0x21;
    goto cf_common_join_0054A19A;
  case 0x19:
    iVar6 = FUN_006e1dd0(PTR_00807598,*(int *)&this_00->field_0xc5 - *(int *)&this_00->field_0x4b2,
                         *(int *)&this_00->field_0xc9 - *(int *)&this_00->field_0x4b6,&local_10,
                         &local_c,(float *)&local_8);
    if (iVar6 != 0) {
      lVar12 = Library::MSVCRT::__ftol();
      local_207 = (undefined4)lVar12;
      lVar12 = Library::MSVCRT::__ftol();
      local_203 = (undefined4)lVar12;
      lVar12 = Library::MSVCRT::__ftol();
      local_1ff = (int)lVar12;
      if (local_1ff < 0) {
        local_1ff = 0;
      }
      if (4 < local_1ff) {
        local_1ff = 4;
      }
      local_208 = 0xb;
      thunk_FUN_0054edf0((undefined4 *)0x17,(undefined4 *)&local_208,0,0xffffffff);
      if (_DAT_0079034c <= (float)local_8) {
        local_14 = local_8;
        SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0054A9B0::thunk_FUN_0054a9b0
                  (this_00,local_10,local_c,(float)local_8);
      }
      else {
        local_14 = (ushort *)0x0;
        SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0054A9B0::thunk_FUN_0054a9b0
                  (this_00,local_10,local_c,0.0);
      }
    }
    break;
  case 0x1a:
    if (*(int *)&this_00->field_0x49a == 0) break;
    uVar4 = *(undefined4 *)(*(int *)&this_00->field_0x49a + 0x18);
    puVar14 = (uint *)&local_80;
    _local_80 = CONCAT31((int3)uVar4,4);
    local_7c = (undefined1)((uint)uVar4 >> 0x18);
    puVar13 = (undefined4 *)0x21;
    goto cf_common_join_0054A19A;
  case 0x1b:
    pSVar3 = *(STFishC **)&this_00->field_0x49a;
    if (pSVar3 == (STFishC *)0x0) break;
    puVar13 = (undefined4 *)local_23c;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
    }
    *(undefined1 *)puVar13 = 0;
    STFishC::sub_004162B0(pSVar3,&local_70,&local_38,&local_60);
    local_23c._1_4_ = SEXT24(local_70);
    local_237 = (int)local_38;
    local_233 = (int)local_60;
    puVar14 = (uint *)local_23c;
    local_23c[0] = 0x13;
    puVar13 = (undefined4 *)0x17;
    goto cf_common_join_0054A19A;
  case 0x1c:
    local_108 = (uint)(byte)this_00->field_0x4aa;
    local_104 = 0;
    local_100 = 0;
    local_fc = 0;
    local_f8 = 0;
    uStack_f7 = 0;
    lVar12 = Library::MSVCRT::__ftol();
    local_108._1_3_ = (undefined3)lVar12;
    local_104._0_1_ = (undefined1)((ulonglong)lVar12 >> 0x18);
    lVar12 = Library::MSVCRT::__ftol();
    local_104._1_3_ = (undefined3)lVar12;
    local_100._0_1_ = (undefined1)((ulonglong)lVar12 >> 0x18);
    lVar12 = Library::MSVCRT::__ftol();
    uStack_f7 = this_00->field_0xfb;
    local_100._1_3_ = (undefined3)lVar12;
    puVar14 = &local_108;
    local_fc._1_3_ = (undefined3)*(undefined4 *)&this_00->field_0xf7;
    local_fc = CONCAT31(local_fc._1_3_,(char)((ulonglong)lVar12 >> 0x18));
    local_f8 = (undefined1)((uint)*(undefined4 *)&this_00->field_0xf7 >> 0x18);
LAB_0054a196:
    puVar13 = (undefined4 *)0x18;
    goto cf_common_join_0054A19A;
  case 0x1d:
    if (*(int *)&this_00->field_0x4a2 == 0x18) {
      iVar6 = FUN_006e1dd0(PTR_00807598,*(int *)&this_00->field_0xc5 - *(int *)&this_00->field_0x4b2
                           ,*(int *)&this_00->field_0xc9 - *(int *)&this_00->field_0x4b6,&local_10,
                           &local_c,(float *)&local_8);
      if (iVar6 == 0) break;
      local_90 = 1;
      local_8c = 0;
      local_88 = 0;
      local_84 = 0;
      lVar12 = Library::MSVCRT::__ftol();
      local_90._1_3_ = (undefined3)lVar12;
      local_8c._0_1_ = (undefined1)((ulonglong)lVar12 >> 0x18);
      lVar12 = Library::MSVCRT::__ftol();
      local_8c._1_3_ = (undefined3)lVar12;
      local_88._0_1_ = (undefined1)((ulonglong)lVar12 >> 0x18);
      lVar12 = Library::MSVCRT::__ftol();
      iVar6 = (int)lVar12;
      local_88._1_3_ = (undefined3)lVar12;
      local_84 = (undefined1)((ulonglong)lVar12 >> 0x18);
      if (iVar6 < 0) {
        iVar6 = 0;
        local_88._1_3_ = 0;
        local_84 = 0;
      }
      if (4 < iVar6) {
        local_88._1_3_ = 4;
        local_84 = 0;
      }
      thunk_FUN_0054edf0((undefined4 *)0x1a,&local_90,0,0xffffffff);
      if (_DAT_0079034c <= (float)local_8) {
        local_14 = local_8;
      }
      else {
        local_14 = (ushort *)0x0;
      }
      goto LAB_00549c33;
    }
    if (*(STFishC **)&this_00->field_0x49a == (STFishC *)0x0) break;
    local_dc = 0;
    local_d8 = 0;
    local_e0 = 2;
    local_d4 = 0;
    STFishC::sub_004162B0(*(STFishC **)&this_00->field_0x49a,&local_64,&local_4e,&local_7a);
    local_e0._1_3_ = (int3)local_64;
    local_dc._0_1_ = (char)(local_64 >> 0xf);
    local_dc._1_3_ = (int3)local_4e;
    local_d8._0_1_ = (char)(local_4e >> 0xf);
    local_d8._1_3_ = (int3)local_7a;
    local_d4 = (char)(local_7a >> 0xf);
    thunk_FUN_0054edf0((undefined4 *)0x1a,&local_e0,0,0xffffffff);
    iVar6 = FUN_006e1dd0(PTR_00807598,*(int *)&this_00->field_0xc5 - *(int *)&this_00->field_0x4b2,
                         *(int *)&this_00->field_0xc9 - *(int *)&this_00->field_0x4b6,&local_10,
                         &local_c,(float *)&local_8);
    if (iVar6 == 0) break;
    if (_DAT_0079034c <= (float)local_8) {
      local_14 = local_8;
    }
    else {
      local_14 = (ushort *)0x0;
    }
LAB_00549b36:
    SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0054A9B0::thunk_FUN_0054a9b0
              (this_00,local_10,local_c,(float)local_14);
    break;
  case 0x1e:
    if (*(STFishC **)&this_00->field_0x49a == (STFishC *)0x0) break;
    local_2c = 0;
    uStack_2b = 0;
    uStack_29 = 0;
    uStack_28 = 0;
    uStack_27 = 0;
    local_26 = 0;
    STFishC::sub_004162B0(*(STFishC **)&this_00->field_0x49a,&local_5c,&local_5a,&local_34);
    uStack_2b = local_5c;
    puVar14 = (uint *)&local_2c;
    uStack_29 = (undefined1)local_5a;
    uStack_28 = (undefined1)((ushort)local_5a >> 8);
    uStack_27 = (undefined1)local_34;
    local_26 = (undefined1)((ushort)local_34 >> 8);
    local_2c = 3;
    puVar13 = (undefined4 *)0x1f;
cf_common_join_0054A19A:
    thunk_FUN_0054edf0(puVar13,puVar14,0,0xffffffff);
    break;
  case 0x1f:
    iVar6 = *(int *)&this_00->field_0x49a;
    if (iVar6 == 0) break;
    puVar13 = local_284;
    for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
    }
    *(undefined1 *)puVar13 = 0;
    local_284[0]._0_1_ = 0x19;
    local_267 = *(undefined4 *)(iVar6 + 0x18);
    thunk_FUN_0054edf0((undefined4 *)0x17,local_284,0,0xffffffff);
    iVar6 = FUN_006e1dd0(PTR_00807598,*(int *)&this_00->field_0xc5 - *(int *)&this_00->field_0x4b2,
                         *(int *)&this_00->field_0xc9 - *(int *)&this_00->field_0x4b6,&local_10,
                         &local_c,(float *)&local_8);
    if (iVar6 == 0) break;
    if (_DAT_0079034c <= (float)local_8) {
      local_14 = local_8;
    }
    else {
      local_14 = (ushort *)0x0;
    }
LAB_00549c33:
    SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0054A9B0::thunk_FUN_0054a9b0
              (this_00,local_10,local_c,(float)local_14);
  }
switchD_00548db5_caseD_3:
  if (((*(int *)&this_00->field_0x4a2 != 0) && (this_00->field_0xd3 == '\0')) &&
     (*(undefined4 *)&this_00->field_0x4a6 = 1, g_cPanel_00801688 != (CPanelTy *)0x0)) {
    thunk_FUN_004fad20(g_cPanel_00801688);
  }
  g_currentExceptionFrame = local_2c8.previous;
  return;
}

