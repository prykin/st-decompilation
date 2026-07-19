
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\to_cursor.cpp
   CursorClassTy::TakeCmdToRun */

void __thiscall CursorClassTy::TakeCmdToRun(CursorClassTy *this,int param_1)

{
  short sVar1;
  int *piVar2;
  void *pvVar3;
  undefined4 uVar4;
  code *pcVar5;
  CursorClassTy *pCVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 unaff_ESI;
  ushort *puVar10;
  void *unaff_EDI;
  char *pcVar11;
  undefined4 *puVar12;
  longlong lVar13;
  undefined4 *puVar14;
  uint *puVar15;
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
  CursorClassTy CStack_f7;
  uint local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined1 local_e4;
  CursorClassTy CStack_e3;
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
  local_124 = this;
  iVar7 = Library::MSVCRT::__setjmp3(local_2c8.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pCVar6 = local_124;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_2c8.previous;
    iVar8 = ReportDebugMessage(s_E____titans_Andrey_to_cursor_cpp_007c7d60,0x671,0,iVar7,
                               &DAT_007a4ccc,s_CursorClassTy__TakeCmdToRun_007c7f90);
    if (iVar8 == 0) {
      RaiseInternalException(iVar7,0,s_E____titans_Andrey_to_cursor_cpp_007c7d60,0x672);
      return;
    }
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (DAT_00807598 != (void *)0x0) {
    local_148 = *(undefined4 *)(local_124 + 0xef);
    local_144 = *(undefined4 *)(local_124 + 0xf3);
    local_140 = iVar7;
    FUN_006e25d0(DAT_00807598,&local_218);
    *(int *)(pCVar6 + 0xdf) = local_218 >> 0x10;
    *(int *)(pCVar6 + 0xe7) =
         (*(int *)(pCVar6 + 0xc5) - *(int *)(pCVar6 + 0x4b2)) - (local_218 >> 0x10);
    *(int *)(pCVar6 + 0xe3) = local_214 >> 0x10;
    *(int *)(pCVar6 + 0xeb) =
         (*(int *)(pCVar6 + 0xc9) - *(int *)(pCVar6 + 0x4b6)) - (local_214 >> 0x10);
  }
  if (DAT_00802a38 == 0) {
    g_currentExceptionFrame = local_2c8.previous;
    return;
  }
  if (pCVar6[0x4de] != (CursorClassTy)0x0) {
    if (((*(short *)(pCVar6 + 0x494) == 0x48) &&
        (piVar2 = *(int **)(pCVar6 + 0x49a), piVar2 != (int *)0x0)) && (DAT_00801690 != (void *)0x0)
       ) {
      iVar7 = (**(code **)(*piVar2 + 0x2c))();
      if (iVar7 == 0x78) {
        iVar7 = *(int *)(*(int *)(pCVar6 + 0x49a) + 0x259);
      }
      iVar8 = (**(code **)(*piVar2 + 0xc))();
      thunk_FUN_00514bc0(DAT_00801690,iVar7,iVar8);
      pCVar6[0x4de] = (CursorClassTy)0x0;
    }
    goto switchD_00548db5_caseD_3;
  }
  sVar1 = *(short *)(pCVar6 + 0x494);
  switch(sVar1) {
  case 1:
    switch(*(int *)(pCVar6 + 0x4a2)) {
    case 3:
    case 10:
    case 0x2b:
      if (param_1 != 0) {
        local_4c = (ushort *)0x0;
        if (DAT_007fa174 != (STAllPlayersC *)0x0) {
          local_4c = STAllPlayersC::GetScrObjList
                               (DAT_007fa174,(*(int *)(pCVar6 + 0x4a2) == 10) + 1,
                                *(int *)(pCVar6 + 0xdf),*(int *)(pCVar6 + 0xe3),
                                *(int *)(pCVar6 + 0xe7),*(int *)(pCVar6 + 0xeb),(int *)&local_9c);
        }
        if (local_4c != (ushort *)0x0) {
          local_18 = (undefined4 *)(local_9c + 1);
          local_94 = (char *)Library::DKW::LIB::FUN_006aac10((uint)local_18);
          if (local_94 != (char *)0x0) {
            *local_94 = (*(int *)(pCVar6 + 0x4a2) == 10) + '\x01';
            puVar10 = local_4c;
            pcVar11 = local_94 + 1;
            for (uVar9 = local_9c >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined4 *)pcVar11 = *(undefined4 *)puVar10;
              puVar10 = puVar10 + 2;
              pcVar11 = pcVar11 + 4;
            }
            for (local_9c = local_9c & 3; local_9c != 0; local_9c = local_9c - 1) {
              *pcVar11 = (char)*puVar10;
              puVar10 = (ushort *)((int)puVar10 + 1);
              pcVar11 = pcVar11 + 1;
            }
            thunk_FUN_0054edf0((undefined4 *)0x31,(undefined4 *)local_94,0,(uint)local_18);
            FUN_006ab060(&local_94);
          }
          FUN_006ab060(&local_4c);
        }
      }
      break;
    case 5:
      if (param_1 != 0) {
        local_1c = (ushort *)0x0;
        if (DAT_007fa174 != (STAllPlayersC *)0x0) {
          local_1c = STAllPlayersC::GetScrObjList
                               (DAT_007fa174,3,*(int *)(pCVar6 + 0xdf),*(int *)(pCVar6 + 0xe3),
                                *(int *)(pCVar6 + 0xe7),*(int *)(pCVar6 + 0xeb),(int *)&local_a8);
        }
        if (local_1c != (ushort *)0x0) {
          local_24 = (undefined4 *)(local_a8 + 1);
          local_18 = Library::DKW::LIB::FUN_006aac10((uint)local_24);
          if (local_18 != (undefined4 *)0x0) {
            *(undefined1 *)local_18 = 3;
            puVar10 = local_1c;
            puVar14 = (undefined4 *)((int)local_18 + 1);
            for (uVar9 = local_a8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *puVar14 = *(undefined4 *)puVar10;
              puVar10 = puVar10 + 2;
              puVar14 = puVar14 + 1;
            }
            for (local_a8 = local_a8 & 3; local_a8 != 0; local_a8 = local_a8 - 1) {
              *(char *)puVar14 = (char)*puVar10;
              puVar10 = (ushort *)((int)puVar10 + 1);
              puVar14 = (undefined4 *)((int)puVar14 + 1);
            }
            thunk_FUN_0054edf0((undefined4 *)0x31,local_18,0,(uint)local_24);
            FUN_006ab060(&local_18);
          }
          FUN_006ab060(&local_1c);
        }
        break;
      }
      pvVar3 = *(void **)(pCVar6 + 0x49a);
      if (pvVar3 == (void *)0x0) break;
      puVar14 = (undefined4 *)local_1e4;
      for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar14 = 0;
        puVar14 = puVar14 + 1;
      }
      *(undefined1 *)puVar14 = 0;
      thunk_FUN_004162b0(pvVar3,&local_56,&local_68,&local_2e);
      local_1e4._1_4_ = SEXT24(local_56);
      local_1db = (int)local_2e;
      local_1df = (int)local_68;
      local_1e4[0] = 1;
      local_1c7 = *(undefined4 *)(*(int *)(pCVar6 + 0x49a) + 0x18);
      puVar15 = (uint *)local_1e4;
      puVar14 = (undefined4 *)0x17;
      goto LAB_0054a19a;
    case 0xe:
      if (DAT_007fb2ac != 0) {
        local_b8 = *(undefined4 *)(pCVar6 + 0x4aa);
        local_b4 = 0;
        local_b0 = 0;
        local_ac = 0;
        if (*(int *)(DAT_007fb2ac + 0x24) != 0) {
          if (&stack0x00000000 != (undefined1 *)0xb4) {
            local_b4 = *(undefined4 *)(DAT_007fb2ac + 0x30);
          }
          if (&stack0x00000000 != (undefined1 *)0xb0) {
            local_b0 = *(undefined4 *)(DAT_007fb2ac + 0x34);
          }
          if (&stack0x00000000 != (undefined1 *)0xac) {
            local_ac = *(undefined4 *)(DAT_007fb2ac + 0x38);
          }
          if (*(int *)(DAT_007fb2ac + 0x24) != 0) {
            thunk_FUN_0054edf0((undefined4 *)0x23,&local_b8,0,0xffffffff);
            iVar7 = FUN_006e1dd0(DAT_00807598,*(int *)(pCVar6 + 0xc5) - *(int *)(pCVar6 + 0x4b2),
                                 *(int *)(pCVar6 + 0xc9) - *(int *)(pCVar6 + 0x4b6),&local_10,
                                 &local_c,(float *)&local_8);
            if (iVar7 != 0) {
              if (_DAT_0079034c <= (float)local_8) {
                local_14 = local_8;
                thunk_FUN_0054a9b0(local_10,local_c,(float)local_8);
              }
              else {
                local_14 = (ushort *)0x0;
                thunk_FUN_0054a9b0(local_10,local_c,0.0);
              }
            }
          }
        }
      }
      break;
    case 0x2c:
      if (param_1 != 0) {
        local_54 = (undefined4 *)0x0;
        if (DAT_007fa174 != (STAllPlayersC *)0x0) {
          local_54 = (undefined4 *)thunk_FUN_0044e220();
        }
        if (local_54 != (undefined4 *)0x0) {
          local_18 = (undefined4 *)(local_a4 + 1);
          local_24 = Library::DKW::LIB::FUN_006aac10((uint)local_18);
          if (local_24 != (undefined4 *)0x0) {
            *(undefined1 *)local_24 = 4;
            puVar14 = local_54;
            puVar12 = (undefined4 *)((int)local_24 + 1);
            for (uVar9 = local_a4 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *puVar12 = *puVar14;
              puVar14 = puVar14 + 1;
              puVar12 = puVar12 + 1;
            }
            for (local_a4 = local_a4 & 3; local_a4 != 0; local_a4 = local_a4 - 1) {
              *(undefined1 *)puVar12 = *(undefined1 *)puVar14;
              puVar14 = (undefined4 *)((int)puVar14 + 1);
              puVar12 = (undefined4 *)((int)puVar12 + 1);
            }
            thunk_FUN_0054edf0((undefined4 *)0x31,local_24,0,(uint)local_18);
            FUN_006ab060(&local_24);
          }
          FUN_006ab060(&local_54);
        }
      }
      break;
    case 0x4e:
      local_f4 = (uint)(byte)pCVar6[0x4aa];
      local_f0 = 0;
      local_ec = 0;
      local_e8 = 0;
      local_e4 = 0;
      CStack_e3 = (CursorClassTy)0x0;
      lVar13 = Library::MSVCRT::__ftol();
      local_f4._1_3_ = (undefined3)lVar13;
      local_f0._0_1_ = (undefined1)((ulonglong)lVar13 >> 0x18);
      lVar13 = Library::MSVCRT::__ftol();
      local_f0._1_3_ = (undefined3)lVar13;
      local_ec._0_1_ = (undefined1)((ulonglong)lVar13 >> 0x18);
      lVar13 = Library::MSVCRT::__ftol();
      CStack_e3 = pCVar6[0xfb];
      local_ec._1_3_ = (undefined3)lVar13;
      puVar15 = &local_f4;
      local_e8._1_3_ = (undefined3)*(undefined4 *)(pCVar6 + 0xf7);
      local_e8 = CONCAT31(local_e8._1_3_,(char)((ulonglong)lVar13 >> 0x18));
      local_e4 = (undefined1)((uint)*(undefined4 *)(pCVar6 + 0xf7) >> 0x18);
      goto LAB_0054a196;
    }
    break;
  case 2:
  case 7:
  case 0xc:
    if (param_1 != 0) {
      local_3c = (ushort *)0x0;
      if (DAT_007fa174 != (STAllPlayersC *)0x0) {
        local_3c = STAllPlayersC::GetScrObjList
                             (DAT_007fa174,(sVar1 == 0xc) + 1,*(int *)(pCVar6 + 0xdf),
                              *(int *)(pCVar6 + 0xe3),*(int *)(pCVar6 + 0xe7),
                              *(int *)(pCVar6 + 0xeb),(int *)&local_98);
      }
      if (local_3c != (ushort *)0x0) {
        local_18 = (undefined4 *)(local_98 + 1);
        local_20 = (ushort *)Library::DKW::LIB::FUN_006aac10((uint)local_18);
        if (local_20 != (ushort *)0x0) {
          *(char *)local_20 = (*(short *)(pCVar6 + 0x494) == 0xc) + '\x01';
          puVar10 = local_3c;
          puVar14 = (undefined4 *)((int)local_20 + 1);
          for (uVar9 = local_98 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *puVar14 = *(undefined4 *)puVar10;
            puVar10 = puVar10 + 2;
            puVar14 = puVar14 + 1;
          }
          for (local_98 = local_98 & 3; local_98 != 0; local_98 = local_98 - 1) {
            *(char *)puVar14 = (char)*puVar10;
            puVar10 = (ushort *)((int)puVar10 + 1);
            puVar14 = (undefined4 *)((int)puVar14 + 1);
          }
          thunk_FUN_0054edf0((undefined4 *)0x31,(undefined4 *)local_20,0,(uint)local_18);
          FUN_006ab060(&local_20);
        }
        FUN_006ab060(&local_3c);
      }
      break;
    }
    puVar14 = (undefined4 *)local_120;
    for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar14 = 0;
      puVar14 = puVar14 + 1;
    }
    if (*(void **)(pCVar6 + 0x49a) == (void *)0x0) {
      iVar7 = FUN_006e1dd0(DAT_00807598,*(int *)(pCVar6 + 0xc5) - *(int *)(pCVar6 + 0x4b2),
                           *(int *)(pCVar6 + 0xc9) - *(int *)(pCVar6 + 0x4b6),&local_10,&local_c,
                           (float *)&local_8);
      if (iVar7 == 0) break;
      lVar13 = Library::MSVCRT::__ftol();
      local_11b = (undefined1)lVar13;
      lVar13 = Library::MSVCRT::__ftol();
      local_11a = (undefined1)lVar13;
      lVar13 = Library::MSVCRT::__ftol();
      local_119 = (byte)lVar13;
      if (4 < local_119) {
        local_119 = 4;
      }
      puVar15 = (uint *)local_120;
      local_120[0] = 3;
      puVar14 = (undefined4 *)0x16;
    }
    else {
      thunk_FUN_004162b0(*(void **)(pCVar6 + 0x49a),(undefined2 *)local_5e,(undefined2 *)local_30,
                         (undefined2 *)local_32);
      local_11b = local_5e[0];
      local_11a = local_30[0];
      local_119 = local_32[0];
      local_120[0] = (*(short *)(pCVar6 + 0x494) != 0xc) - 1U & 5;
      local_120._1_4_ = *(undefined4 *)(*(int *)(pCVar6 + 0x49a) + 0x18);
      puVar15 = (uint *)local_120;
      puVar14 = (undefined4 *)0x16;
    }
    goto LAB_0054a19a;
  case 5:
  case 6:
    iVar7 = FUN_006e1dd0(DAT_00807598,*(int *)(pCVar6 + 0xc5) - *(int *)(pCVar6 + 0x4b2),
                         *(int *)(pCVar6 + 0xc9) - *(int *)(pCVar6 + 0x4b6),&local_10,&local_c,
                         (float *)&local_8);
    if (iVar7 != 0) {
      lVar13 = Library::MSVCRT::__ftol();
      local_130 = (undefined4)lVar13;
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
        thunk_FUN_0054a9b0(local_10,local_c,(float)local_8);
      }
      else {
        local_1c = (ushort *)0x0;
        thunk_FUN_0054a9b0(local_10,local_c,0.0);
      }
    }
    break;
  case 8:
    iVar7 = FUN_006e1dd0(DAT_00807598,*(int *)(pCVar6 + 0xc5) - *(int *)(pCVar6 + 0x4b2),
                         *(int *)(pCVar6 + 0xc9) - *(int *)(pCVar6 + 0x4b6),&local_10,&local_c,
                         (float *)&local_8);
    if (iVar7 != 0) {
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
      thunk_FUN_0054edf0((undefined4 *)0x16,(undefined4 *)local_178,0,0xffffffff);
      if (_DAT_0079034c <= (float)local_8) {
        local_14 = local_8;
        thunk_FUN_0054a9b0(local_10,local_c,(float)local_8);
      }
      else {
        local_14 = (ushort *)0x0;
        thunk_FUN_0054a9b0(local_10,local_c,0.0);
      }
    }
    break;
  case 9:
  case 10:
  case 0xb:
    pvVar3 = *(void **)(pCVar6 + 0x49a);
    if (pvVar3 == (void *)0x0) break;
    puVar14 = (undefined4 *)local_160;
    for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar14 = 0;
      puVar14 = puVar14 + 1;
    }
    thunk_FUN_004162b0(pvVar3,(undefined2 *)local_3e,(undefined2 *)local_6c,(undefined2 *)local_46);
    local_15b = local_3e[0];
    local_159 = local_46[0];
    local_15a = local_6c[0];
    local_160[0] = 1;
    local_160._1_4_ = *(undefined4 *)(*(int *)(pCVar6 + 0x49a) + 0x18);
    thunk_FUN_0054edf0((undefined4 *)0x16,(undefined4 *)local_160,0,0xffffffff);
    iVar7 = FUN_006e1dd0(DAT_00807598,*(int *)(pCVar6 + 0xc5) - *(int *)(pCVar6 + 0x4b2),
                         *(int *)(pCVar6 + 0xc9) - *(int *)(pCVar6 + 0x4b6),&local_10,&local_c,
                         (float *)&local_8);
    if (iVar7 == 0) break;
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
        if (DAT_007fa174 != (STAllPlayersC *)0x0) {
          local_44 = STAllPlayersC::GetScrObjList
                               (DAT_007fa174,3,*(int *)(pCVar6 + 0xdf),*(int *)(pCVar6 + 0xe3),
                                *(int *)(pCVar6 + 0xe7),*(int *)(pCVar6 + 0xeb),(int *)&local_a0);
        }
        if (local_44 != (ushort *)0x0) {
          local_18 = (undefined4 *)(local_a0 + 1);
          local_14 = (ushort *)Library::DKW::LIB::FUN_006aac10((uint)local_18);
          if (local_14 != (ushort *)0x0) {
            *(undefined1 *)local_14 = 3;
            puVar10 = local_44;
            puVar14 = (undefined4 *)((int)local_14 + 1);
            for (uVar9 = local_a0 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *puVar14 = *(undefined4 *)puVar10;
              puVar10 = puVar10 + 2;
              puVar14 = puVar14 + 1;
            }
            for (local_a0 = local_a0 & 3; local_a0 != 0; local_a0 = local_a0 - 1) {
              *(char *)puVar14 = (char)*puVar10;
              puVar10 = (ushort *)((int)puVar10 + 1);
              puVar14 = (undefined4 *)((int)puVar14 + 1);
            }
            thunk_FUN_0054edf0((undefined4 *)0x31,(undefined4 *)local_14,0,(uint)local_18);
            FUN_006ab060(&local_14);
          }
          FUN_006ab060(&local_44);
        }
      }
      break;
    }
    pvVar3 = *(void **)(pCVar6 + 0x49a);
    if (pvVar3 == (void *)0x0) break;
    puVar14 = (undefined4 *)local_1c0;
    for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar14 = 0;
      puVar14 = puVar14 + 1;
    }
    *(undefined1 *)puVar14 = 0;
    thunk_FUN_004162b0(pvVar3,&local_36,&local_58,&local_62);
    local_1c0._1_4_ = SEXT24(local_36);
    local_1b7 = (int)local_62;
    local_1bb = (int)local_58;
    local_1c0[0] = 1;
    local_1a3 = *(undefined4 *)(*(int *)(pCVar6 + 0x49a) + 0x18);
    puVar15 = (uint *)local_1c0;
    puVar14 = (undefined4 *)0x17;
    goto LAB_0054a19a;
  case 0xf:
  case 0x10:
    iVar7 = FUN_006e1dd0(DAT_00807598,*(int *)(pCVar6 + 0xc5) - *(int *)(pCVar6 + 0x4b2),
                         *(int *)(pCVar6 + 0xc9) - *(int *)(pCVar6 + 0x4b6),&local_10,&local_c,
                         (float *)&local_8);
    if (iVar7 != 0) {
      local_19c = ((*(short *)(pCVar6 + 0x494) != 0xf) - 1U & 0xf2) + 0x10;
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
      thunk_FUN_0054edf0((undefined4 *)0x17,(undefined4 *)&local_19c,0,0xffffffff);
      if (_DAT_0079034c <= (float)local_8) {
        local_20 = local_8;
        thunk_FUN_0054a9b0(local_10,local_c,(float)local_8);
      }
      else {
        local_20 = (ushort *)0x0;
        thunk_FUN_0054a9b0(local_10,local_c,0.0);
      }
    }
    break;
  case 0x11:
    iVar7 = FUN_006e1dd0(DAT_00807598,*(int *)(pCVar6 + 0xc5) - *(int *)(pCVar6 + 0x4b2),
                         *(int *)(pCVar6 + 0xc9) - *(int *)(pCVar6 + 0x4b6),&local_10,&local_c,
                         (float *)&local_8);
    if (iVar7 != 0) {
      lVar13 = Library::MSVCRT::__ftol();
      local_13c = (undefined4)lVar13;
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
        thunk_FUN_0054a9b0(local_10,local_c,(float)local_8);
      }
      else {
        local_14 = (ushort *)0x0;
        thunk_FUN_0054a9b0(local_10,local_c,0.0);
      }
    }
    break;
  case 0x12:
  case 0x13:
    if (*(void **)(pCVar6 + 0x49a) == (void *)0x0) break;
    local_d0 = (sVar1 != 0x12) + '\x01';
    thunk_FUN_004162b0(*(void **)(pCVar6 + 0x49a),&local_cf,&local_cd,&local_cb);
    puVar15 = (uint *)&local_d0;
    puVar14 = (undefined4 *)0x1f;
    goto LAB_0054a19a;
  case 0x14:
    if (DAT_007fb2ac != 0) {
      local_c8 = *(undefined4 *)(pCVar6 + 0x4aa);
      local_c4 = 0;
      local_c0 = 0;
      local_bc = 0;
      if (*(int *)(DAT_007fb2ac + 0x24) != 0) {
        if (&stack0x00000000 != (undefined1 *)0xc4) {
          local_c4 = *(undefined4 *)(DAT_007fb2ac + 0x30);
        }
        if (&stack0x00000000 != (undefined1 *)0xc0) {
          local_c0 = *(undefined4 *)(DAT_007fb2ac + 0x34);
        }
        if (&stack0x00000000 != (undefined1 *)0xbc) {
          local_bc = *(undefined4 *)(DAT_007fb2ac + 0x38);
        }
        if (*(int *)(DAT_007fb2ac + 0x24) != 0) {
          thunk_FUN_0054edf0((undefined4 *)0x23,&local_c8,0,0xffffffff);
          iVar7 = FUN_006e1dd0(DAT_00807598,*(int *)(pCVar6 + 0xc5) - *(int *)(pCVar6 + 0x4b2),
                               *(int *)(pCVar6 + 0xc9) - *(int *)(pCVar6 + 0x4b6),&local_10,&local_c
                               ,(float *)&local_8);
          if (iVar7 != 0) {
            if (_DAT_0079034c <= (float)local_8) {
              local_14 = local_8;
              thunk_FUN_0054a9b0(local_10,local_c,(float)local_8);
            }
            else {
              local_14 = (ushort *)0x0;
              thunk_FUN_0054a9b0(local_10,local_c,0.0);
            }
          }
        }
      }
    }
    break;
  case 0x16:
  case 0x18:
    pvVar3 = *(void **)(pCVar6 + 0x49a);
    if (pvVar3 == (void *)0x0) break;
    puVar14 = (undefined4 *)local_260;
    for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar14 = 0;
      puVar14 = puVar14 + 1;
    }
    *(undefined1 *)puVar14 = 0;
    thunk_FUN_004162b0(pvVar3,&local_6e,&local_66,&local_6a);
    local_260._1_4_ = SEXT24(local_6e);
    local_25b = (int)local_66;
    local_257 = (int)local_6a;
    local_260[0] = ((*(short *)(pCVar6 + 0x494) != 0x18) - 1U & 0xeb) + 0x18;
    puVar15 = (uint *)local_260;
    puVar14 = (undefined4 *)0x17;
    goto LAB_0054a19a;
  case 0x17:
    if (*(int *)(pCVar6 + 0x49a) == 0) break;
    uVar4 = *(undefined4 *)(*(int *)(pCVar6 + 0x49a) + 0x18);
    puVar15 = (uint *)&local_78;
    _local_78 = CONCAT31((int3)uVar4,1);
    local_74 = (undefined1)((uint)uVar4 >> 0x18);
    puVar14 = (undefined4 *)0x21;
    goto LAB_0054a19a;
  case 0x19:
    iVar7 = FUN_006e1dd0(DAT_00807598,*(int *)(pCVar6 + 0xc5) - *(int *)(pCVar6 + 0x4b2),
                         *(int *)(pCVar6 + 0xc9) - *(int *)(pCVar6 + 0x4b6),&local_10,&local_c,
                         (float *)&local_8);
    if (iVar7 != 0) {
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
      thunk_FUN_0054edf0((undefined4 *)0x17,(undefined4 *)&local_208,0,0xffffffff);
      if (_DAT_0079034c <= (float)local_8) {
        local_14 = local_8;
        thunk_FUN_0054a9b0(local_10,local_c,(float)local_8);
      }
      else {
        local_14 = (ushort *)0x0;
        thunk_FUN_0054a9b0(local_10,local_c,0.0);
      }
    }
    break;
  case 0x1a:
    if (*(int *)(pCVar6 + 0x49a) == 0) break;
    uVar4 = *(undefined4 *)(*(int *)(pCVar6 + 0x49a) + 0x18);
    puVar15 = (uint *)&local_80;
    _local_80 = CONCAT31((int3)uVar4,4);
    local_7c = (undefined1)((uint)uVar4 >> 0x18);
    puVar14 = (undefined4 *)0x21;
    goto LAB_0054a19a;
  case 0x1b:
    pvVar3 = *(void **)(pCVar6 + 0x49a);
    if (pvVar3 == (void *)0x0) break;
    puVar14 = (undefined4 *)local_23c;
    for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar14 = 0;
      puVar14 = puVar14 + 1;
    }
    *(undefined1 *)puVar14 = 0;
    thunk_FUN_004162b0(pvVar3,&local_70,&local_38,&local_60);
    local_23c._1_4_ = SEXT24(local_70);
    local_237 = (int)local_38;
    local_233 = (int)local_60;
    puVar15 = (uint *)local_23c;
    local_23c[0] = 0x13;
    puVar14 = (undefined4 *)0x17;
    goto LAB_0054a19a;
  case 0x1c:
    local_108 = (uint)(byte)pCVar6[0x4aa];
    local_104 = 0;
    local_100 = 0;
    local_fc = 0;
    local_f8 = 0;
    CStack_f7 = (CursorClassTy)0x0;
    lVar13 = Library::MSVCRT::__ftol();
    local_108._1_3_ = (undefined3)lVar13;
    local_104._0_1_ = (undefined1)((ulonglong)lVar13 >> 0x18);
    lVar13 = Library::MSVCRT::__ftol();
    local_104._1_3_ = (undefined3)lVar13;
    local_100._0_1_ = (undefined1)((ulonglong)lVar13 >> 0x18);
    lVar13 = Library::MSVCRT::__ftol();
    CStack_f7 = pCVar6[0xfb];
    local_100._1_3_ = (undefined3)lVar13;
    puVar15 = &local_108;
    local_fc._1_3_ = (undefined3)*(undefined4 *)(pCVar6 + 0xf7);
    local_fc = CONCAT31(local_fc._1_3_,(char)((ulonglong)lVar13 >> 0x18));
    local_f8 = (undefined1)((uint)*(undefined4 *)(pCVar6 + 0xf7) >> 0x18);
LAB_0054a196:
    puVar14 = (undefined4 *)0x18;
    goto LAB_0054a19a;
  case 0x1d:
    if (*(int *)(pCVar6 + 0x4a2) == 0x18) {
      iVar7 = FUN_006e1dd0(DAT_00807598,*(int *)(pCVar6 + 0xc5) - *(int *)(pCVar6 + 0x4b2),
                           *(int *)(pCVar6 + 0xc9) - *(int *)(pCVar6 + 0x4b6),&local_10,&local_c,
                           (float *)&local_8);
      if (iVar7 == 0) break;
      local_90 = 1;
      local_8c = 0;
      local_88 = 0;
      local_84 = 0;
      lVar13 = Library::MSVCRT::__ftol();
      local_90._1_3_ = (undefined3)lVar13;
      local_8c._0_1_ = (undefined1)((ulonglong)lVar13 >> 0x18);
      lVar13 = Library::MSVCRT::__ftol();
      local_8c._1_3_ = (undefined3)lVar13;
      local_88._0_1_ = (undefined1)((ulonglong)lVar13 >> 0x18);
      lVar13 = Library::MSVCRT::__ftol();
      iVar7 = (int)lVar13;
      local_88._1_3_ = (undefined3)lVar13;
      local_84 = (undefined1)((ulonglong)lVar13 >> 0x18);
      if (iVar7 < 0) {
        iVar7 = 0;
        local_88._1_3_ = 0;
        local_84 = 0;
      }
      if (4 < iVar7) {
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
    if (*(void **)(pCVar6 + 0x49a) == (void *)0x0) break;
    local_dc = 0;
    local_d8 = 0;
    local_e0 = 2;
    local_d4 = 0;
    thunk_FUN_004162b0(*(void **)(pCVar6 + 0x49a),&local_64,&local_4e,&local_7a);
    local_e0._1_3_ = (int3)local_64;
    local_dc._0_1_ = (char)(local_64 >> 0xf);
    local_dc._1_3_ = (int3)local_4e;
    local_d8._0_1_ = (char)(local_4e >> 0xf);
    local_d8._1_3_ = (int3)local_7a;
    local_d4 = (char)(local_7a >> 0xf);
    thunk_FUN_0054edf0((undefined4 *)0x1a,&local_e0,0,0xffffffff);
    iVar7 = FUN_006e1dd0(DAT_00807598,*(int *)(pCVar6 + 0xc5) - *(int *)(pCVar6 + 0x4b2),
                         *(int *)(pCVar6 + 0xc9) - *(int *)(pCVar6 + 0x4b6),&local_10,&local_c,
                         (float *)&local_8);
    if (iVar7 == 0) break;
    if (_DAT_0079034c <= (float)local_8) {
      local_14 = local_8;
    }
    else {
      local_14 = (ushort *)0x0;
    }
LAB_00549b36:
    thunk_FUN_0054a9b0(local_10,local_c,(float)local_14);
    break;
  case 0x1e:
    if (*(void **)(pCVar6 + 0x49a) == (void *)0x0) break;
    local_2c = 0;
    uStack_2b = 0;
    uStack_29 = 0;
    uStack_28 = 0;
    uStack_27 = 0;
    local_26 = 0;
    thunk_FUN_004162b0(*(void **)(pCVar6 + 0x49a),&local_5c,&local_5a,&local_34);
    uStack_2b = local_5c;
    puVar15 = (uint *)&local_2c;
    uStack_29 = (undefined1)local_5a;
    uStack_28 = (undefined1)((ushort)local_5a >> 8);
    uStack_27 = (undefined1)local_34;
    local_26 = (undefined1)((ushort)local_34 >> 8);
    local_2c = 3;
    puVar14 = (undefined4 *)0x1f;
LAB_0054a19a:
    thunk_FUN_0054edf0(puVar14,puVar15,0,0xffffffff);
    break;
  case 0x1f:
    iVar7 = *(int *)(pCVar6 + 0x49a);
    if (iVar7 == 0) break;
    puVar14 = local_284;
    for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar14 = 0;
      puVar14 = puVar14 + 1;
    }
    *(undefined1 *)puVar14 = 0;
    local_284[0]._0_1_ = 0x19;
    local_267 = *(undefined4 *)(iVar7 + 0x18);
    thunk_FUN_0054edf0((undefined4 *)0x17,local_284,0,0xffffffff);
    iVar7 = FUN_006e1dd0(DAT_00807598,*(int *)(pCVar6 + 0xc5) - *(int *)(pCVar6 + 0x4b2),
                         *(int *)(pCVar6 + 0xc9) - *(int *)(pCVar6 + 0x4b6),&local_10,&local_c,
                         (float *)&local_8);
    if (iVar7 == 0) break;
    if (_DAT_0079034c <= (float)local_8) {
      local_14 = local_8;
    }
    else {
      local_14 = (ushort *)0x0;
    }
LAB_00549c33:
    thunk_FUN_0054a9b0(local_10,local_c,(float)local_14);
  }
switchD_00548db5_caseD_3:
  if (((*(int *)(pCVar6 + 0x4a2) != 0) && (pCVar6[0xd3] == (CursorClassTy)0x0)) &&
     (*(undefined4 *)(pCVar6 + 0x4a6) = 1, DAT_00801688 != (void *)0x0)) {
    thunk_FUN_004fad20(DAT_00801688);
  }
  g_currentExceptionFrame = local_2c8.previous;
  return;
}

