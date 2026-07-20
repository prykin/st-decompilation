
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\to_cursor.cpp
   CursorClassTy::GetMessage */

undefined4 __thiscall CursorClassTy::GetMessage(CursorClassTy *this,int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  ushort uVar3;
  undefined1 *puVar4;
  CursorClassTy *this_00;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined4 uVar8;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  char *pcVar9;
  undefined4 uVar10;
  uint *puVar11;
  UINT UVar12;
  undefined4 *puVar13;
  undefined3 extraout_var_04;
  cMf32 *this_01;
  ushort *puVar14;
  undefined2 uVar16;
  int iVar15;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  InternalExceptionFrame *extraout_ECX;
  InternalExceptionFrame *this_02;
  int iVar20;
  undefined3 uVar21;
  undefined4 unaff_ESI;
  Global_sub_00528060_param_1Enum *pGVar22;
  void *unaff_EDI;
  uint *puVar23;
  code *pcVar24;
  char *pcVar25;
  char *pcVar26;
  longlong lVar27;
  int iVar28;
  int iVar29;
  byte bVar30;
  HINSTANCE pHVar31;
  uint local_524 [256];
  InternalExceptionFrame local_124;
  InternalExceptionFrame local_e0;
  int local_9c;
  int local_98;
  int local_8c;
  int local_88;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  undefined4 local_5c;
  int *local_58;
  undefined4 local_54;
  uint local_50;
  undefined4 local_4c;
  int local_48;
  CursorClassTy *local_44;
  undefined4 local_40 [6];
  undefined2 local_28;
  undefined2 local_26;
  DWORD local_1c;
  cMf32 *local_14;
  char local_d;
  float local_c;
  undefined1 *local_8;
  
  local_44 = this;
  local_1c = FUN_006e51b0((int)this->field_0010);
  local_e0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_e0;
  iVar6 = Library::MSVCRT::__setjmp3(local_e0.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_44;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_e0.previous;
    iVar15 = ReportDebugMessage(s_E____titans_Andrey_to_cursor_cpp_007c7d60,0x4d6,0,iVar6,
                                &DAT_007a4ccc,s_CursorClassTy__GetMessage_007c7f0c);
    if (iVar15 == 0) {
      RaiseInternalException(iVar6,0,s_E____titans_Andrey_to_cursor_cpp_007c7d60,0x4d7);
      return 0xffff;
    }
    pcVar24 = (code *)swi(3);
    uVar8 = (*pcVar24)();
    return uVar8;
  }
  FUN_006e5fd0();
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 0xa110:
    this_00->field_00D4 = 1;
    break;
  case 0xa111:
    this_00->field_00D4 = 0;
    break;
  case 0xa112:
    this_00->field_00D3 = 1;
    break;
  case 0xa113:
    this_00->field_00D3 = 0;
    break;
  case 0xa114:
    this_00->field_00D5 = 1;
    break;
  case 0xa115:
    this_00->field_00D5 = 0;
  }
  if (((this_00->field_0493 != '\x02') && (0xa0ff < *(uint *)(param_1 + 0x10))) &&
     (*(uint *)(param_1 + 0x10) < 0xb100)) {
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  if ((((DAT_00808784 != 0) || (DAT_0080878c != 0)) || (DAT_00808790 != 0)) &&
     ((0xa10e < *(uint *)(param_1 + 0x10) && (*(uint *)(param_1 + 0x10) < 0xb100)))) {
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  uVar18 = *(uint *)(param_1 + 0x10);
  if (uVar18 < 0x61) {
    if (uVar18 == 0x60) {
      this_00->field_00C9 = (uint)*(ushort *)(param_1 + 0x1a);
      uVar3 = *(ushort *)(param_1 + 0x18);
      this_00->field_00C5 = (uint)uVar3;
      DrawSprite(this_00,(uint)uVar3,this_00->field_00C9);
      if (((int)this_00->field_04B2 <= (int)this_00->field_00C5) &&
         ((int)this_00->field_00C5 < *(int *)&this_00->field_0x4ba + this_00->field_04B2)) {
        if (((int)this_00->field_04B6 <= (int)this_00->field_00C9) &&
           ((int)this_00->field_00C9 < *(int *)&this_00->field_0x4be + this_00->field_04B6)) {
          uVar8 = 1;
          goto LAB_0054532f;
        }
      }
      uVar8 = 0;
LAB_0054532f:
      this_00->field_0496 = uVar8;
      bVar5 = thunk_FUN_00544990((int)this_00);
      if (CONCAT31(extraout_var_01,bVar5) == 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (DAT_007fb2ac == (void *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((this_00->field_0496 != 0) && (this_00->field_04A2 == 0xe)) {
        if (*(int *)((int)DAT_007fb2ac + 0x18) != 0) {
          thunk_FUN_004c6210(DAT_007fb2ac,*(undefined4 *)&this_00->field_0x4aa,0);
        }
        thunk_FUN_004c6440(DAT_007fb2ac,(float)(this_00->field_00C5 - this_00->field_04B2),
                           this_00->field_00C9 - this_00->field_04B6,(int *)0x0,(int *)0x0,
                           (int *)0x0);
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (*(int *)((int)DAT_007fb2ac + 0x18) != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      thunk_FUN_004c63f0((int)DAT_007fb2ac);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    switch(uVar18) {
    case 0:
      switch(this_00->field_00DE) {
      case 0:
        bVar5 = thunk_FUN_00544990((int)this_00);
        if (CONCAT31(extraout_var_00,bVar5) == 0) break;
        if (-1 < (int)*(uint *)&this_00->field_0x10b) {
          FUN_006b3bb0(DAT_008075a8,*(uint *)&this_00->field_0x10b);
          *(undefined4 *)&this_00->field_0x10b = 0xffffffff;
        }
        switch(*(undefined4 *)&this_00->field_0xcd) {
        case 0:
          thunk_FUN_0054b9a0(this_00,0,0,g_nWidth_00806730,DAT_00806734,this_00->field_00C5,
                             this_00->field_00C9,1);
          break;
        case 1:
          iVar6 = 100;
          iVar15 = 0;
          goto LAB_005450ca;
        case 2:
          thunk_FUN_0054b9a0(this_00,0,0,g_nWidth_00806730,DAT_00806734,g_nWidth_00806730 + -1,100,0
                            );
          break;
        case 3:
          thunk_FUN_0054b9a0(this_00,0,0,g_nWidth_00806730,DAT_00806734,100,0,0);
          break;
        case 4:
          iVar6 = DAT_00806734 + -1;
          iVar15 = 100;
LAB_005450ca:
          thunk_FUN_0054b9a0(this_00,0,0,g_nWidth_00806730,DAT_00806734,iVar15,iVar6,0);
        }
        break;
      case 1:
        if (DAT_00807598 != (void *)0x0) {
          local_7c = this_00->field_00EF;
          local_78 = this_00->field_00F3;
          local_74 = 0;
          FUN_006e25d0(DAT_00807598,&local_9c);
          this_00->field_00DF = local_9c >> 0x10;
          this_00->field_00E3 = local_98 >> 0x10;
        }
        uVar18 = (this_00->field_00C5 - this_00->field_04B2) - this_00->field_00DF;
        this_00->field_00E7 = uVar18;
        uVar19 = (this_00->field_00C9 - this_00->field_04B6) - this_00->field_00E3;
        this_00->field_00EB = uVar19;
        if ((5 < (int)((uVar18 ^ (int)uVar18 >> 0x1f) - ((int)uVar18 >> 0x1f))) ||
           (5 < (int)((uVar19 ^ (int)uVar19 >> 0x1f) - ((int)uVar19 >> 0x1f)))) {
          puVar4 = &this_00->field_0x10b;
          this_00->field_00DE = 2;
          if (-1 < (int)*(uint *)&this_00->field_0x10b) {
            FUN_006b3bb0(DAT_008075a8,*(uint *)&this_00->field_0x10b);
          }
          iVar6 = 0x20;
          puVar11 = (uint *)&this_00->field_0x113;
          do {
            iVar6 = iVar6 + -1;
            *puVar11 = (-(uint)(this_00->field_04A2 != 0) & 0x49) + 0x45 | 0x1000000;
            puVar11 = puVar11 + 7;
          } while (iVar6 != 0);
          FUN_006b96f0(DAT_008075a8,(uint *)puVar4,10,0x20,(uint)&this_00->field_0x113);
          FUN_006b1b10((int)DAT_008075a8,*(uint *)puVar4,2);
          Library::DKW::DDX::FUN_006b3640
                    (DAT_008075a8,*(uint *)puVar4,0xffffffff,this_00->field_00DF,this_00->field_00E3
                    );
          FUN_006b2800((int)DAT_008075a8,*(uint *)puVar4,this_00->field_00E7,this_00->field_00EB);
          iVar6 = FUN_00405687((int)this_00);
          if (iVar6 == 0) {
            SetGCType(this_00,CASE_0,this_00->field_0034,this_00->field_0038);
          }
        }
        break;
      case 2:
        local_8 = (undefined1 *)0xfffffffe;
        local_c = 1.4013e-45;
        switch(*(undefined4 *)&this_00->field_0xcd) {
        case 1:
          iVar7 = this_00->field_04B6;
          iVar20 = this_00->field_04B2;
          iVar6 = iVar7 + 100;
          iVar15 = iVar20;
          goto LAB_00544d9b;
        case 2:
          iVar7 = this_00->field_04B6;
          iVar28 = *(int *)&this_00->field_0x4ba;
          iVar20 = this_00->field_04B2;
          iVar6 = iVar7 + 100;
          iVar15 = iVar28 + -1 + iVar20;
          iVar29 = *(int *)&this_00->field_0x4be;
          break;
        case 3:
          iVar20 = this_00->field_04B2;
          iVar7 = this_00->field_04B6;
          iVar15 = iVar20 + 100;
          iVar6 = iVar7;
LAB_00544d9b:
          iVar29 = *(int *)&this_00->field_0x4be;
          iVar28 = *(int *)&this_00->field_0x4ba;
          break;
        case 4:
          iVar29 = *(int *)&this_00->field_0x4be;
          iVar7 = this_00->field_04B6;
          iVar20 = this_00->field_04B2;
          iVar6 = iVar29 + -1 + iVar7;
          iVar15 = iVar20 + 100;
          iVar28 = *(int *)&this_00->field_0x4ba;
          break;
        default:
          goto switchD_00544d44_default;
        }
        thunk_FUN_0054b9a0(this_00,iVar20,iVar7,iVar28,iVar29,iVar15,iVar6,0);
switchD_00544d44_default:
        local_70 = this_00->field_00EF;
        local_6c = this_00->field_00F3;
        local_68 = 0;
        FUN_006e25d0(DAT_00807598,&local_8c);
        this_00->field_00E3 = local_88 >> 0x10;
        this_00->field_00DF = local_8c >> 0x10;
        if (*(int *)&this_00->field_0xcd == 0) {
          puVar13 = &this_00->field_00C9;
          puVar1 = &this_00->field_00C5;
          bVar5 = thunk_FUN_0054bdf0(this_00->field_04B2,this_00->field_04B6,
                                     *(int *)&this_00->field_0x4ba,*(int *)&this_00->field_0x4be,
                                     puVar1,puVar13);
          if (CONCAT31(extraout_var,bVar5) != 0) {
            local_28 = *(undefined2 *)puVar1;
            local_26 = *(undefined2 *)puVar13;
            local_40[4] = 0x16;
            FUN_006e6000(this_00,3,1,local_40);
          }
          iVar6 = FUN_00405687((int)this_00);
          iVar6 = thunk_FUN_0054b9a0(this_00,this_00->field_04B2,this_00->field_04B6,
                                     *(int *)&this_00->field_0x4ba,*(int *)&this_00->field_0x4be,
                                     *puVar1,*puVar13,(uint)(iVar6 == 0));
          if (iVar6 != 0) {
            FUN_006e1440(DAT_00807598);
            iVar6 = *puVar13;
            uVar18 = (*puVar1 - this_00->field_00DF) - this_00->field_04B2;
            this_00->field_00E7 = uVar18;
            goto LAB_00544e8f;
          }
          local_14 = (cMf32 *)this_00->field_00EB;
          uVar19 = this_00->field_00E7;
          uVar18 = (*puVar1 - this_00->field_00DF) - this_00->field_04B2;
          uVar17 = (*puVar13 - this_00->field_04B6) - this_00->field_00E3;
          this_00->field_00E7 = uVar18;
          this_00->field_00EB = uVar17;
          if ((uVar19 == uVar18) && (local_14 == (cMf32 *)uVar17)) {
            local_c = 0.0;
          }
        }
        else {
          FUN_006e1440(DAT_00807598);
          iVar6 = this_00->field_00C9;
          uVar18 = (this_00->field_00C5 - this_00->field_04B2) - this_00->field_00DF;
          this_00->field_00E7 = uVar18;
LAB_00544e8f:
          uVar17 = (iVar6 - this_00->field_04B6) - this_00->field_00E3;
          this_00->field_00EB = uVar17;
        }
        if (0x31 < local_1c - *(int *)&this_00->field_0x10f) {
          *(DWORD *)&this_00->field_0x10f = local_1c;
          local_8 = (undefined1 *)0xffffffff;
        }
        if (local_c != 0.0) {
          FUN_006b2800((int)DAT_008075a8,*(uint *)&this_00->field_0x10b,uVar18,uVar17);
        }
        if ((local_c != 0.0) || ((int)local_8 < 0)) {
          Library::DKW::DDX::FUN_006b3640
                    (DAT_008075a8,*(uint *)&this_00->field_0x10b,(uint)local_8,this_00->field_00DF,
                     this_00->field_00E3);
        }
        break;
      case 3:
        uVar18 = *(uint *)&this_00->field_0x10b;
        if (-1 < (int)uVar18) goto LAB_0054505c;
        goto LAB_0054506b;
      case 4:
        uVar18 = *(uint *)&this_00->field_0x10b;
LAB_0054505c:
        FUN_006b3bb0(DAT_008075a8,uVar18);
        *(undefined4 *)&this_00->field_0x10b = 0xffffffff;
LAB_0054506b:
        this_00->field_00DE = 0;
        break;
      case 5:
        if (DAT_00807598 != (void *)0x0) {
          FUN_006e1c20(DAT_00807598,(float)(this_00->field_00C5 - this_00->field_04B2),
                       this_00->field_00C9 - this_00->field_04B6,this_00->field_0107,
                       (float *)&local_8,&local_c);
          lVar27 = Library::MSVCRT::__ftol();
          *(int *)&this_00->field_00FB = (int)lVar27;
          if ((int)lVar27 < 1) {
            *(undefined4 *)&this_00->field_00FB = 1;
          }
          lVar27 = Library::MSVCRT::__ftol();
          iVar6 = (int)(short)lVar27;
          lVar27 = Library::MSVCRT::__ftol();
          iVar15 = (int)(short)lVar27;
          lVar27 = Library::MSVCRT::__ftol();
          iVar20 = (int)(short)lVar27;
          lVar27 = Library::MSVCRT::__ftol();
          iVar6 = FUN_006db910((int)(short)lVar27,iVar20,iVar15,iVar6);
          this_00->field_00F7 = iVar6;
          FUN_006e8df0(DAT_00807598,*(uint *)&this_00->field_0x10b,this_00->field_00FF,
                       this_00->field_0103,this_00->field_0107,iVar6,*(int *)&this_00->field_00FB,1)
          ;
        }
      }
      if ((this_00->field_04A6 != 0) && (this_00->field_04A2 != 0)) {
        thunk_FUN_0054a8d0(this_00);
      }
      GCGameState(this_00,1);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case 2:
      InitCursor(this_00,1);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case 3:
      DoneCursor(this_00);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case 8:
      if (*(int *)&this_00->field_0xc1 == 0) {
        *(undefined4 *)&this_00->field_0xc1 = 1;
        AddSysAcc(this_00);
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      break;
    case 9:
      if (*(int *)&this_00->field_0xc1 != 0) {
        *(undefined4 *)&this_00->field_0xc1 = 0;
        DelSysAcc(this_00);
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
    }
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  if (uVar18 < 0xa31d) {
    if (0xa312 < uVar18) {
      if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      STAllPlayersC::SaveTmp(g_sTAllPlayers_007FA174,uVar18 - 0xa313);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (0xa124 < uVar18) {
      if (uVar18 < 0xa204) {
        if (0xa1fe < uVar18) {
          if (DAT_00802a38 == 0) {
            g_currentExceptionFrame = local_e0.previous;
            return 0;
          }
          local_d = '\x03' - *(char *)(param_1 + 0x10);
          thunk_FUN_0054edf0((undefined4 *)0x15,(undefined4 *)&local_d,0,0xffffffff);
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        switch(uVar18) {
        case 0xa125:
          goto switchD_00546590_caseD_a125;
        case 0xa126:
          if (DAT_00808783 != '\x03') {
            g_currentExceptionFrame = local_e0.previous;
            return 0;
          }
          thunk_FUN_0054b540(this_00);
          if (g_intercomPanel_0080169C == (IntercomPanelTy *)0x0) {
            g_currentExceptionFrame = local_e0.previous;
            return 0;
          }
          IntercomPanelTy::SwitchIntercomPanel(g_intercomPanel_0080169C,3);
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        case 0xa127:
          if (DAT_00808783 != '\x03') {
            g_currentExceptionFrame = local_e0.previous;
            return 0;
          }
          thunk_FUN_0054b540(this_00);
          if (g_intercomPanel_0080169C == (IntercomPanelTy *)0x0) {
            g_currentExceptionFrame = local_e0.previous;
            return 0;
          }
          IntercomPanelTy::SwitchIntercomPanel(g_intercomPanel_0080169C,2);
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        case 0xa128:
          if (g_cPanel_00801688 == (CPanelTy *)0x0) {
            g_currentExceptionFrame = local_e0.previous;
            return 0;
          }
          thunk_FUN_004faff0((int)g_cPanel_00801688);
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        default:
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        case 0xa12f:
          *(undefined4 *)&this_00->field_0xcd = 3;
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        case 0xa130:
          *(undefined4 *)&this_00->field_0xcd = 4;
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        case 0xa131:
          *(undefined4 *)&this_00->field_0xcd = 2;
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        case 0xa132:
          *(undefined4 *)&this_00->field_0xcd = 1;
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        case 0xa133:
          *(undefined4 *)&this_00->field_0xcd = 0;
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
      }
      if (0xa209 < uVar18) {
        switch(uVar18) {
        case 0xa2ff:
        case 0xa300:
        case 0xa301:
        case 0xa302:
        case 0xa303:
        case 0xa304:
        case 0xa305:
        case 0xa306:
        case 0xa307:
        case 0xa308:
          goto switchD_005468af_caseD_a2ff;
        case 0xa309:
        case 0xa30a:
        case 0xa30b:
        case 0xa30c:
        case 0xa30d:
        case 0xa30e:
        case 0xa30f:
        case 0xa310:
        case 0xa311:
        case 0xa312:
          if (g_opticClass_007FB2A0 == (OpticClassC *)0x0) {
            g_currentExceptionFrame = local_e0.previous;
            return 0;
          }
          thunk_FUN_004ab300(uVar18 - 0xa309);
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        default:
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
      }
      if (uVar18 != 0xa209) {
        if (uVar18 == 0xa206) {
          puVar13 = local_40;
          for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar13 = 0;
            puVar13 = puVar13 + 1;
          }
          local_40[4] = 0x100;
          FUN_006e6000(this_00,3,0x100,local_40);
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if (uVar18 == 0xa207) {
          puVar13 = local_40;
          for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar13 = 0;
            puVar13 = puVar13 + 1;
          }
          local_40[4] = 0x101;
          FUN_006e6000(this_00,3,0x100,local_40);
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if (uVar18 != 0xa208) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if (g_opticClass_007FB2A0 == (OpticClassC *)0x0) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        puVar13 = local_40;
        for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar13 = 0;
          puVar13 = puVar13 + 1;
        }
        uVar8 = thunk_FUN_004ab050();
        switch(uVar8) {
        case 0:
switchD_0054679d_caseD_0:
          local_40[4] = 0x105;
          break;
        case 1:
switchD_0054679d_caseD_1:
          local_40[4] = 0x106;
          break;
        case 2:
switchD_0054679d_caseD_2:
          local_40[4] = 0x107;
          break;
        case 3:
switchD_0054679d_caseD_3:
          local_40[4] = 0x104;
        default:
          break;
        }
switchD_0054679d_default:
        FUN_006e6000(this_00,3,0x100,local_40);
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (g_opticClass_007FB2A0 == (OpticClassC *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      puVar13 = local_40;
      for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar13 = 0;
        puVar13 = puVar13 + 1;
      }
      uVar8 = thunk_FUN_004ab050();
      switch(uVar8) {
      case 0:
        goto switchD_0054679d_caseD_2;
      case 1:
        goto switchD_0054679d_caseD_3;
      case 2:
        goto switchD_0054679d_caseD_0;
      case 3:
        goto switchD_0054679d_caseD_1;
      default:
        goto switchD_0054679d_default;
      }
    }
    if (uVar18 == 0xa124) {
      thunk_FUN_0054b540(this_00);
      if (g_intercomPanel_0080169C == (IntercomPanelTy *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      IntercomPanelTy::SwitchIntercomPanel(g_intercomPanel_0080169C,0);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (0xa102 < uVar18) {
      switch(uVar18) {
      case 0xa103:
        if (g_optPanel_008016DC == (OptPanelTy *)0x0) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        OptPanelTy::Question(g_optPanel_008016DC,'\x04');
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      case 0xa104:
        if (g_optPanel_008016DC == (OptPanelTy *)0x0) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if (DAT_008067a0 != '\0') {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        OptPanelTy::Question(g_optPanel_008016DC,'\x05');
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      case 0xa105:
      case 0xa106:
        if (g_optPanel_008016DC == (OptPanelTy *)0x0) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        (**(code **)g_optPanel_008016DC->field_0000)(param_1);
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      default:
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      case 0xa11f:
        if (DAT_00808783 == '\x03') {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        DAT_00808794 = 1;
        _DAT_00808798 = 1;
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      case 0xa120:
        if (DAT_00808783 == '\x03') {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        uVar18 = 0xffffffff;
        pcVar9 = &DAT_00807680;
        break;
      case 0xa122:
        thunk_FUN_0054b540(this_00);
        if (g_cPanel_00801688 == (CPanelTy *)0x0) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        CPanelTy::SwitchCPanel(g_cPanel_00801688);
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      case 0xa123:
        if (g_cPanel_00801688 == (CPanelTy *)0x0) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        thunk_FUN_004fa3b0(g_cPanel_00801688);
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      do {
        pcVar26 = pcVar9;
        if (uVar18 == 0) break;
        uVar18 = uVar18 - 1;
        pcVar26 = pcVar9 + 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar26;
      } while (cVar2 != '\0');
      uVar18 = ~uVar18;
      local_58 = &local_48;
      local_48 = 0;
      pcVar9 = pcVar26 + -uVar18;
      pcVar26 = (char *)&DAT_0080ee1a;
      for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
        *(undefined4 *)pcVar26 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar26 = pcVar26 + 4;
      }
      for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
        *pcVar26 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar26 = pcVar26 + 1;
      }
      uVar18 = 0xffffffff;
      pcVar9 = PTR_s_SAVEGAME__0079ade4;
      do {
        pcVar26 = pcVar9;
        if (uVar18 == 0) break;
        uVar18 = uVar18 - 1;
        pcVar26 = pcVar9 + 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar26;
      } while (cVar2 != '\0');
      uVar18 = ~uVar18;
      iVar6 = -1;
      pcVar9 = (char *)&DAT_0080ee1a;
      do {
        pcVar25 = pcVar9;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar25 = pcVar9 + 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar25;
      } while (cVar2 != '\0');
      pcVar9 = pcVar26 + -uVar18;
      pcVar26 = pcVar25 + -1;
      for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
        *(undefined4 *)pcVar26 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar26 = pcVar26 + 4;
      }
      local_14 = (cMf32 *)0x0;
      for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
        *pcVar26 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar26 = pcVar26 + 1;
      }
      uVar18 = 0xffffffff;
      pcVar9 = (char *)&DAT_00807ddd;
      do {
        pcVar26 = pcVar9;
        if (uVar18 == 0) break;
        uVar18 = uVar18 - 1;
        pcVar26 = pcVar9 + 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar26;
      } while (cVar2 != '\0');
      uVar18 = ~uVar18;
      iVar6 = -1;
      pcVar9 = (char *)&DAT_0080ee1a;
      do {
        pcVar25 = pcVar9;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar25 = pcVar9 + 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar25;
      } while (cVar2 != '\0');
      pcVar9 = pcVar26 + -uVar18;
      pcVar26 = pcVar25 + -1;
      for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
        *(undefined4 *)pcVar26 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar26 = pcVar26 + 4;
      }
      for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
        *pcVar26 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar26 = pcVar26 + 1;
      }
      FUN_006b8280((char *)&DAT_0080ee1a,(char *)&DAT_0080ee1a);
      uVar18 = 0xffffffff;
      pcVar9 = PTR_s_SAVE_QUICKSAVE_0079ade8;
      do {
        pcVar26 = pcVar9;
        if (uVar18 == 0) break;
        uVar18 = uVar18 - 1;
        pcVar26 = pcVar9 + 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar26;
      } while (cVar2 != '\0');
      uVar18 = ~uVar18;
      iVar6 = -1;
      pcVar9 = (char *)&DAT_0080ee1a;
      do {
        pcVar25 = pcVar9;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar25 = pcVar9 + 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar25;
      } while (cVar2 != '\0');
      pcVar9 = pcVar26 + -uVar18;
      pcVar26 = pcVar25 + -1;
      for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
        *(undefined4 *)pcVar26 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar26 = pcVar26 + 4;
      }
      local_124.previous = g_currentExceptionFrame;
      for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
        *pcVar26 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar26 = pcVar26 + 1;
      }
      g_currentExceptionFrame = &local_124;
      iVar6 = Library::MSVCRT::__setjmp3(local_124.jumpBuffer,0,unaff_EDI,unaff_ESI);
      this_02 = extraout_ECX;
      this_01 = local_14;
      if (iVar6 == 0) {
        this_01 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,(byte *)&DAT_0080ee1a,0,0,0)
        ;
        local_14 = this_01;
        puVar14 = cMf32::RecGet(this_01,0x80,PTR_s_SAVE_DESC_0079adec,(int *)&local_58,0);
        this_02 = local_124.previous;
        if (puVar14 != (ushort *)0x0) {
          iVar6 = -0x77ffffea;
          if (DAT_00808783 == '\x01') {
            iVar6 = -0x77fffeea;
          }
          else if (DAT_00808783 == '\x02') {
            iVar6 = -0x77fffdea;
          }
          if (iVar6 == local_48) {
            if (DAT_00808783 == '\x01') {
              DAT_008087a0 = 9;
            }
            else if (DAT_00808783 == '\x02') {
              DAT_008087a0 = 10;
            }
            puVar13 = local_40;
            for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
              *puVar13 = 0;
              puVar13 = puVar13 + 1;
            }
            DAT_0080879c = 1;
            _DAT_0080f32e = 1;
            local_40[3] = 1;
            local_40[4] = 0x6100;
            AppClassTy::PostNextMessage(local_44->field_0010,local_40);
            this_02 = local_124.previous;
          }
        }
      }
      if (this_01 == (cMf32 *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      g_currentExceptionFrame = local_124.previous;
      cMf32::delete((cMf32 *)this_02,this_01);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (uVar18 == 0xa102) {
      thunk_FUN_0054b540(this_00);
      if (g_optPanel_008016DC == (OptPanelTy *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      OptPanelTy::SwitchOptPanel(g_optPanel_008016DC,-1);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (0x4203 < uVar18) {
      if (uVar18 == 0xa0ff) {
        *(undefined4 *)(param_1 + 0x10) = 0x7104;
        STAppC::GetMessage((STAppC *)&DAT_00807620,param_1);
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (uVar18 != 0xa100) {
        if (uVar18 != 0xa101) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        thunk_FUN_0054b540(this_00);
        if (g_optPanel_008016DC == (OptPanelTy *)0x0) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        OptPanelTy::SwitchOptPanel(g_optPanel_008016DC,'\x0f');
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      bVar5 = thunk_FUN_00544990((int)this_00);
      if (CONCAT31(extraout_var_04,bVar5) == 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      local_54 = 1;
      if (DAT_0081163c == 0) {
        local_4c = 1;
        puVar13 = &local_54;
        local_50 = (uint)(DAT_00808784 == 0);
      }
      else {
        local_4c = 1;
        puVar13 = &local_54;
        local_50 = (uint)(*(int *)(DAT_0081163c + 0x42c) == 0);
      }
      goto LAB_00547c2d;
    }
    if (uVar18 == 0x4203) {
      thunk_FUN_00544940((int)this_00);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (0x4201 < uVar18) {
      if (uVar18 != 0x4202) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (DAT_00807322 == 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (*(int *)(param_1 + 0x18) != *(int *)&this_00->field_0x4da) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      *(undefined4 *)&this_00->field_0x4da = 0;
      FUN_006b2800((int)DAT_008075a8,this_00->field_04D6,0,0);
      FUN_006b3af0(DAT_008075a8,this_00->field_04D6);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (uVar18 != 0x4201) {
      if (uVar18 == 0x67) {
        if (DAT_0080734c == '\0') {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        bVar5 = thunk_FUN_00544990((int)this_00);
        if (CONCAT31(extraout_var_03,bVar5) == 0) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if (DAT_00808784 != 0) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if ((g_prodPanel_008016E8 != (ProdPanelTy *)0x0) && (g_prodPanel_008016E8->field_0172 == 1))
        {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if ((g_prodPanel_0080167C != (ProdPanelTy *)0x0) && (g_prodPanel_0080167C->field_0172 == 1))
        {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if ((g_prodPanel_00801684 != (ProdPanelTy *)0x0) && (g_prodPanel_00801684->field_0172 == 1))
        {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if ((DAT_00802a48 != 0) && (*(short *)(DAT_00802a48 + 0x172) == 1)) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if ((DAT_00801698 != 0) && (*(short *)(DAT_00801698 + 0x172) == 1)) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if ((DAT_00802a44 != 0) && (*(short *)(DAT_00802a44 + 0x172) == 1)) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if ((DAT_0080168c != 0) && (*(short *)(DAT_0080168c + 0x172) == 1)) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if ((DAT_00801678 != 0) && (*(short *)(DAT_00801678 + 0x172) == 1)) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if ((DAT_008016ec != 0) && (*(short *)(DAT_008016ec + 0x172) == 1)) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if ((g_prodPanel_00801680 != (ProdPanelTy *)0x0) && (g_prodPanel_00801680->field_0172 == 1))
        {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if (g_opticClass_007FB2A0 == (OpticClassC *)0x0) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if (this_00->field_0xd2 == '\0') {
          thunk_FUN_004ab070(g_opticClass_007FB2A0,CASE_3,0.0,0,1);
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        thunk_FUN_004ab070(g_opticClass_007FB2A0,CASE_1,0.0,0,1);
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (uVar18 != 0x68) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (DAT_0080734c == '\0') {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      bVar5 = thunk_FUN_00544990((int)this_00);
      if (CONCAT31(extraout_var_02,bVar5) == 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (DAT_00808784 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_prodPanel_008016E8 != (ProdPanelTy *)0x0) && (g_prodPanel_008016E8->field_0172 == 1)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_prodPanel_0080167C != (ProdPanelTy *)0x0) && (g_prodPanel_0080167C->field_0172 == 1)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_prodPanel_00801684 != (ProdPanelTy *)0x0) && (g_prodPanel_00801684->field_0172 == 1)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((DAT_00802a48 != 0) && (*(short *)(DAT_00802a48 + 0x172) == 1)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((DAT_00801698 != 0) && (*(short *)(DAT_00801698 + 0x172) == 1)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((DAT_00802a44 != 0) && (*(short *)(DAT_00802a44 + 0x172) == 1)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((DAT_0080168c != 0) && (*(short *)(DAT_0080168c + 0x172) == 1)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((DAT_00801678 != 0) && (*(short *)(DAT_00801678 + 0x172) == 1)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((DAT_008016ec != 0) && (*(short *)(DAT_008016ec + 0x172) == 1)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_prodPanel_00801680 != (ProdPanelTy *)0x0) && (g_prodPanel_00801680->field_0172 == 1)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (g_opticClass_007FB2A0 == (OpticClassC *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_0xd2 == '\0') {
        thunk_FUN_004ab070(g_opticClass_007FB2A0,CASE_4,0.0,0,1);
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      thunk_FUN_004ab070(g_opticClass_007FB2A0,CASE_2,0.0,0,1);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    local_c = 1.4013e-45;
    if (DAT_00807322 == 0) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    UVar12 = *(UINT *)(param_1 + 0x18);
    if (UVar12 == *(UINT *)&this_00->field_0x4da) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (UVar12 == 0) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (this_00->field_00DE == '\x05') {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (this_00->field_00DE == '\x02') {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    *(UINT *)&this_00->field_0x4da = UVar12;
    uVar3 = *(ushort *)(param_1 + 0x16);
    if (uVar3 == 1) {
      puVar4 = *(undefined1 **)(param_1 + 0x18);
      local_8 = puVar4;
      switch(*puVar4) {
      case 1:
        if (*(int *)(puVar4 + 9) < 0) {
          if ((&stack0x00000000 != (undefined1 *)0x524) &&
             (iVar6 = FUN_006b0140(*(UINT *)(puVar4 + 1),HINSTANCE_00807618), iVar6 != 0)) {
            UVar12 = *(UINT *)(local_8 + 1);
LAB_005458df:
            pcVar9 = (char *)FUN_006b0140(UVar12,HINSTANCE_00807618);
            uVar18 = 0xffffffff;
            do {
              pcVar26 = pcVar9;
              if (uVar18 == 0) break;
              uVar18 = uVar18 - 1;
              pcVar26 = pcVar9 + 1;
              cVar2 = *pcVar9;
              pcVar9 = pcVar26;
            } while (cVar2 != '\0');
            uVar18 = ~uVar18;
            puVar11 = (uint *)(pcVar26 + -uVar18);
            puVar23 = local_524;
            for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
              *puVar23 = *puVar11;
              puVar11 = puVar11 + 1;
              puVar23 = puVar23 + 1;
            }
            for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
              *(char *)puVar23 = (char)*puVar11;
              puVar11 = (uint *)((int)puVar11 + 1);
              puVar23 = (uint *)((int)puVar23 + 1);
            }
          }
        }
        else {
          thunk_FUN_0052a970(*(uint *)(&DAT_00807e66 + *(int *)(puVar4 + 9) * 4),1);
          FUN_006b0140(*(UINT *)(puVar4 + 1),HINSTANCE_00807618);
          wsprintfA((LPSTR)local_524,s___d_s___d_s_007c7f80);
        }
        break;
      case 2:
        if (*(UINT *)(puVar4 + 1) == 0) goto switchD_00545816_default;
        if ((&stack0x00000000 != (undefined1 *)0x524) &&
           (iVar6 = FUN_006b0140(*(UINT *)(puVar4 + 1),HINSTANCE_00807618), iVar6 != 0)) {
          UVar12 = *(UINT *)(local_8 + 1);
          goto LAB_005458df;
        }
        break;
      case 3:
        if (*(int *)(puVar4 + 5) == 0) {
          uVar8 = FUN_006b0140(0x36b3,HINSTANCE_00807618);
          uVar10 = FUN_006b0140(*(UINT *)(puVar4 + 1),HINSTANCE_00807618);
          pcVar24 = wsprintfA_exref;
          wsprintfA((LPSTR)local_524,s___d_s__s_007c7f64,(uint)*(ushort *)(param_1 + 0x14),uVar10,
                    uVar8);
        }
        else {
          FUN_006b0140(0x36b3,HINSTANCE_00807618);
          FUN_006b0140(*(UINT *)(puVar4 + 5),HINSTANCE_00807618);
          FUN_006b0140(*(UINT *)(puVar4 + 1),HINSTANCE_00807618);
          pcVar24 = wsprintfA_exref;
          wsprintfA((LPSTR)local_524,s___d_s__s__s_007c7f70);
        }
        if (*(short *)(puVar4 + 0xd) != 0) {
          (*pcVar24)(local_524,s__s___d_d_007c7f58,local_524,
                     (-(uint)(DAT_0080874e != '\x03') & 0xfffffffe) + 5,*(short *)(puVar4 + 0xd));
        }
        if (*(short *)(puVar4 + 9) != 0) {
          (*pcVar24)(local_524,s__s___d_d_007c7f58,local_524,2,*(short *)(puVar4 + 9));
        }
        if (*(short *)(puVar4 + 0xb) != 0) {
          (*pcVar24)(local_524,s__s___d_d_007c7f58,local_524,
                     (-(uint)(DAT_0080874e != '\x03') & 0xfffffffe) + 6,*(short *)(puVar4 + 0xb));
        }
        if (0 < *(short *)(puVar4 + 0xf)) {
          FUN_006b0140(0x273a,HINSTANCE_00807618);
          (*pcVar24)();
        }
        break;
      case 4:
        pcVar9 = (char *)FUN_006b0140(*(UINT *)(puVar4 + 1),HINSTANCE_00807618);
        uVar18 = 0xffffffff;
        do {
          pcVar26 = pcVar9;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar26 = pcVar9 + 1;
          cVar2 = *pcVar9;
          pcVar9 = pcVar26;
        } while (cVar2 != '\0');
        uVar18 = ~uVar18;
        pcVar9 = pcVar26 + -uVar18;
        pcVar26 = (char *)&DAT_0080f33a;
        for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
          *(undefined4 *)pcVar26 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar26 = pcVar26 + 4;
        }
        for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
          *pcVar26 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar26 = pcVar26 + 1;
        }
        for (puVar11 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar11 != (uint *)0x0;
            puVar11 = Library::MSVCRT::FUN_0072e560(puVar11,'\n')) {
          *(undefined1 *)puVar11 = 0x20;
        }
        wsprintfA((LPSTR)local_524,s___d_s_007c7f40,(uint)*(ushort *)(param_1 + 0x14),&DAT_0080f33a)
        ;
        if (*(UINT *)(local_8 + 5) != 0) {
          pcVar9 = (char *)FUN_006b0140(*(UINT *)(local_8 + 5),HINSTANCE_00807618);
          uVar18 = 0xffffffff;
          do {
            pcVar26 = pcVar9;
            if (uVar18 == 0) break;
            uVar18 = uVar18 - 1;
            pcVar26 = pcVar9 + 1;
            cVar2 = *pcVar9;
            pcVar9 = pcVar26;
          } while (cVar2 != '\0');
          uVar18 = ~uVar18;
          pcVar9 = pcVar26 + -uVar18;
          pcVar26 = (char *)&DAT_0080f33a;
          for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
            *(undefined4 *)pcVar26 = *(undefined4 *)pcVar9;
            pcVar9 = pcVar9 + 4;
            pcVar26 = pcVar26 + 4;
          }
          for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
            *pcVar26 = *pcVar9;
            pcVar9 = pcVar9 + 1;
            pcVar26 = pcVar26 + 1;
          }
          for (puVar11 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar11 != (uint *)0x0;
              puVar11 = Library::MSVCRT::FUN_0072e560(puVar11,'\n')) {
            *(undefined1 *)puVar11 = 0x20;
          }
          wsprintfA((LPSTR)local_524,s__s__s_007c7f38,local_524,&DAT_0080f33a);
        }
        pGVar22 = local_8 + 9;
        if (*(int *)(local_8 + 9) != 0) {
          uVar8 = FUN_006b0140(0x36c2,HINSTANCE_00807618);
          wsprintfA((LPSTR)local_524,s__s__s_007c7f38,local_524,uVar8);
          iVar6 = 5;
          do {
            if (*(undefined4 *)pGVar22 != ~(CASE_80|CASE_7F)) {
              pHVar31 = HINSTANCE_00807618;
              UVar12 = thunk_FUN_00528060(*pGVar22,(char)((uint)*(undefined4 *)pGVar22 >> 0x10));
              uVar8 = FUN_006b0140(UVar12,pHVar31);
              wsprintfA((LPSTR)local_524,s__s___d_s_007c7f2c,local_524,
                        (pGVar22[5] != ~(CASE_80|CASE_7F)) + 1,uVar8);
            }
            pGVar22 = pGVar22 + 6;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        break;
      default:
switchD_00545816_default:
        local_c = 0.0;
      }
    }
    else if ((uVar3 < 2) || (3 < uVar3)) {
      local_c = 0.0;
    }
    else if ((&stack0x00000000 != (undefined1 *)0x524) &&
            (iVar6 = FUN_006b0140(UVar12,HINSTANCE_00807618), iVar6 != 0)) {
      UVar12 = *(UINT *)&this_00->field_0x4da;
      goto LAB_005458df;
    }
    if (local_c == 0.0) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (*(short *)(param_1 + 0x16) == 3) {
      if ((DAT_0081176c == 0) || (*(void **)(DAT_0081176c + 0x38) == (void *)0x0))
      goto cf_common_exit_00545FF6;
      iVar6 = FUN_00711370(*(void **)(DAT_0081176c + 0x38),local_524);
      *(int *)&this_00->field_0x4ca = iVar6 + 0xc;
      iVar6 = FUN_007113e0(*(void **)(DAT_0081176c + 0x38),local_524);
      iVar6 = iVar6 + 10;
      *(int *)&this_00->field_0x4ce = iVar6;
      if ((800 < *(int *)&this_00->field_0x4ca) || (0x96 < iVar6)) goto cf_common_exit_00545FF6;
      *(undefined4 *)&this_00->field_0x4c2 = this_00->field_00C5 + this_00->field_00B1;
      iVar20 = this_00->field_00C9 + this_00->field_00B5;
      *(int *)&this_00->field_0x4c6 = iVar20;
      iVar15 = (g_nWidth_00806730 - *(int *)&this_00->field_0x4ca) + -0x28;
      if (iVar15 < *(int *)&this_00->field_0x4c2) {
        *(int *)&this_00->field_0x4c2 = iVar15;
      }
      if (*(int *)&this_00->field_0x4c2 < 0) {
        *(undefined4 *)&this_00->field_0x4c2 = 0;
      }
      iVar6 = (DAT_00806734 - iVar6) + -0x14;
      if (iVar6 < iVar20) {
        *(int *)&this_00->field_0x4c6 = iVar6;
      }
      if (*(int *)&this_00->field_0x4c6 < 0) {
        *(undefined4 *)&this_00->field_0x4c6 = 0;
      }
      iVar6 = this_00->field_04D2;
      uVar18 = *(uint *)(iVar6 + 0x14);
      if (uVar18 == 0) {
        uVar18 = ((uint)*(ushort *)(iVar6 + 0xe) * *(int *)(iVar6 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                 *(int *)(iVar6 + 8);
      }
      puVar13 = (undefined4 *)FUN_006b4fa0(iVar6);
      for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
        *puVar13 = 0x22222222;
        puVar13 = puVar13 + 1;
      }
      for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
        *(undefined1 *)puVar13 = 0x22;
        puVar13 = (undefined4 *)((int)puVar13 + 1);
      }
      ccFntTy::SetSurf(*(ccFntTy **)(DAT_0081176c + 0x38),this_00->field_04D2,0,5,5,
                       *(int *)&this_00->field_0x4ca + -10,*(int *)&this_00->field_0x4ce + -10);
      ccFntTy::WrTxt(*(ccFntTy **)(DAT_0081176c + 0x38),local_524,-2,-1,
                     (uint)*(ushort *)(param_1 + 0x14),-1,-1);
      FUN_006b5ee0(this_00->field_04D2,0,0,0,*(int *)&this_00->field_0x4ca,
                   *(int *)&this_00->field_0x4ce,0x18,0xd);
      FUN_006b5ee0(this_00->field_04D2,0,1,1,*(int *)&this_00->field_0x4ca + -2,
                   *(int *)&this_00->field_0x4ce + -2,0x1d,0xd);
      bVar30 = 0x18;
    }
    else {
      if ((DAT_00802a28 == 0) || (*(void **)(DAT_00802a28 + 0x28) == (void *)0x0))
      goto cf_common_exit_00545FF6;
      iVar6 = FUN_00711370(*(void **)(DAT_00802a28 + 0x28),local_524);
      *(int *)&this_00->field_0x4ca = iVar6 + 0xc;
      iVar6 = FUN_007113e0(*(void **)(DAT_00802a28 + 0x28),local_524);
      iVar6 = iVar6 + 10;
      *(int *)&this_00->field_0x4ce = iVar6;
      if ((800 < *(int *)&this_00->field_0x4ca) || (0x96 < iVar6)) goto cf_common_exit_00545FF6;
      *(undefined4 *)&this_00->field_0x4c2 = this_00->field_00C5 + this_00->field_00B1;
      iVar20 = this_00->field_00C9 + this_00->field_00B5;
      *(int *)&this_00->field_0x4c6 = iVar20;
      iVar15 = (g_nWidth_00806730 - *(int *)&this_00->field_0x4ca) + -0x28;
      if (iVar15 < *(int *)&this_00->field_0x4c2) {
        *(int *)&this_00->field_0x4c2 = iVar15;
      }
      if (*(int *)&this_00->field_0x4c2 < 0) {
        *(undefined4 *)&this_00->field_0x4c2 = 0;
      }
      iVar6 = (DAT_00806734 - iVar6) + -0x14;
      if (iVar6 < iVar20) {
        *(int *)&this_00->field_0x4c6 = iVar6;
      }
      if (*(int *)&this_00->field_0x4c6 < 0) {
        *(undefined4 *)&this_00->field_0x4c6 = 0;
      }
      iVar6 = this_00->field_04D2;
      uVar18 = *(uint *)(iVar6 + 0x14);
      if (uVar18 == 0) {
        uVar18 = ((uint)*(ushort *)(iVar6 + 0xe) * *(int *)(iVar6 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                 *(int *)(iVar6 + 8);
      }
      puVar13 = (undefined4 *)FUN_006b4fa0(iVar6);
      for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
        *puVar13 = 0x3a3a3a3a;
        puVar13 = puVar13 + 1;
      }
      for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
        *(undefined1 *)puVar13 = 0x3a;
        puVar13 = (undefined4 *)((int)puVar13 + 1);
      }
      ccFntTy::SetSurf(*(ccFntTy **)(DAT_00802a28 + 0x28),this_00->field_04D2,0,5,5,
                       *(int *)&this_00->field_0x4ca + -10,*(int *)&this_00->field_0x4ce + -10);
      ccFntTy::WrTxt(*(ccFntTy **)(DAT_00802a28 + 0x28),local_524,-2,-1,
                     (uint)*(ushort *)(param_1 + 0x14),-1,-1);
      FUN_006b5ee0(this_00->field_04D2,0,0,0,*(int *)&this_00->field_0x4ca,
                   *(int *)&this_00->field_0x4ce,0x6f,0xd);
      FUN_006b5ee0(this_00->field_04D2,0,1,1,*(int *)&this_00->field_0x4ca + -2,
                   *(int *)&this_00->field_0x4ce + -2,0xb3,0xd);
      bVar30 = 0x6f;
    }
    FUN_006b5ee0(this_00->field_04D2,0,3,3,*(int *)&this_00->field_0x4ca + -6,
                 *(int *)&this_00->field_0x4ce + -6,bVar30,0xd);
cf_common_exit_00545FF6:
    if (800 < (int)*(uint *)&this_00->field_0x4ca) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (0x96 < (int)*(uint *)&this_00->field_0x4ce) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    FUN_006b2800((int)DAT_008075a8,this_00->field_04D6,*(uint *)&this_00->field_0x4ca,
                 *(uint *)&this_00->field_0x4ce);
    Library::DKW::DDX::FUN_006b3640
              (DAT_008075a8,this_00->field_04D6,0xffffffff,*(uint *)&this_00->field_0x4c2,
               *(uint *)&this_00->field_0x4c6);
    Library::DKW::DDX::FUN_006b3430(DAT_008075a8,this_00->field_04D6);
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  if (0xa50c < uVar18) {
    if (0xa708 < uVar18) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (0xa6fe < uVar18) {
      local_60 = uVar18 - 0xa6ff;
      puVar13 = &local_64;
      local_5c = 0;
      local_64 = 9;
LAB_00547c2d:
      thunk_FUN_0054edf0((undefined4 *)0x5,puVar13,1,0xffffffff);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    uVar21 = (undefined3)((uint)this_00 >> 8);
    uVar16 = (undefined2)(uVar18 - 0xa50d >> 0x10);
    switch(uVar18 - 0xa50d) {
    case 0:
      GCGameState(this_00,1);
      if (DAT_00808784 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((DAT_00801690 != 0) && (*(short *)(DAT_00801690 + 0x172) != 2)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((int)this_00->field_00C5 < (int)this_00->field_04B2) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (*(int *)&this_00->field_0x4ba + this_00->field_04B2 <= (int)this_00->field_00C5) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((int)this_00->field_00C9 < (int)this_00->field_04B6) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (*(int *)&this_00->field_0x4be + this_00->field_04B6 <= (int)this_00->field_00C9) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04A2 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((this_00->field_00DE != '\0') && (this_00->field_00DE != '\x03')) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A != (STFishC *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar6 = 0;
      break;
    case 1:
      GCGameState(this_00,1);
      if (DAT_00808784 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((DAT_00801690 != 0) && (*(short *)(DAT_00801690 + 0x172) != 2)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar6 = this_00->field_00C5;
      iVar15 = this_00->field_04B2;
      if (iVar6 < iVar15) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (*(int *)&this_00->field_0x4ba + iVar15 <= iVar6) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar20 = this_00->field_00C9;
      iVar7 = this_00->field_04B6;
      if (iVar20 < iVar7) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (*(int *)&this_00->field_0x4be + iVar7 <= iVar20) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04A2 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((this_00->field_00DE != '\0') && (this_00->field_00DE != '\x03')) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A != (STFishC *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      STAllPlayersC::PointPick
                (g_sTAllPlayers_007FA174,(uint *)CONCAT31((int3)((uint)iVar15 >> 8),DAT_0080874d),
                 iVar6 - iVar15,iVar20 - iVar7,0);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case 2:
      GCGameState(this_00,1);
      if (DAT_00808784 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((DAT_00801690 != 0) && (*(short *)(DAT_00801690 + 0x172) != 2)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((int)this_00->field_00C5 < (int)this_00->field_04B2) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (*(int *)&this_00->field_0x4ba + this_00->field_04B2 <= (int)this_00->field_00C5) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((int)this_00->field_00C9 < (int)this_00->field_04B6) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (*(int *)&this_00->field_0x4be + this_00->field_04B6 <= (int)this_00->field_00C9) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04A2 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((this_00->field_00DE != '\0') && (this_00->field_00DE != '\x03')) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A == (STFishC *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (*(uint *)&this_00->field_049A->field_0x24 != (uint)DAT_0080874d) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar6 = 0;
      break;
    case 3:
      GCGameState(this_00,1);
      if (DAT_00808784 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((DAT_00801690 != 0) && (*(short *)(DAT_00801690 + 0x172) != 2)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar6 = this_00->field_00C5;
      local_8 = (undefined1 *)this_00->field_04B2;
      if (iVar6 < (int)local_8) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((int)(local_8 + *(int *)&this_00->field_0x4ba) <= iVar6) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar15 = this_00->field_00C9;
      iVar20 = this_00->field_04B6;
      if (iVar15 < iVar20) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (*(int *)&this_00->field_0x4be + iVar20 <= iVar15) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04A2 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((this_00->field_00DE != '\0') && (this_00->field_00DE != '\x03')) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A == (STFishC *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (*(uint *)&this_00->field_049A->field_0x24 != (uint)DAT_0080874d) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      STAllPlayersC::PointPick
                (g_sTAllPlayers_007FA174,(uint *)CONCAT31(uVar21,DAT_0080874d),iVar6 - (int)local_8,
                 iVar15 - iVar20,0);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case 4:
      GCGameState(this_00,1);
      if (DAT_00808784 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((DAT_00801690 != 0) && (*(short *)(DAT_00801690 + 0x172) != 2)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar6 = this_00->field_00C5;
      local_8 = (undefined1 *)this_00->field_04B2;
      if (iVar6 < (int)local_8) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((int)(local_8 + *(int *)&this_00->field_0x4ba) <= iVar6) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar15 = this_00->field_00C9;
      iVar20 = this_00->field_04B6;
      if (iVar15 < iVar20) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (*(int *)&this_00->field_0x4be + iVar20 <= iVar15) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04A2 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((this_00->field_00DE != '\0') && (this_00->field_00DE != '\x03')) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A == (STFishC *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (*(uint *)&this_00->field_049A->field_0x24 != (uint)DAT_0080874d) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      STAllPlayersC::PointPick
                (g_sTAllPlayers_007FA174,(uint *)CONCAT31(uVar21,DAT_0080874d),iVar6 - (int)local_8,
                 iVar15 - iVar20,1);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case 5:
      GCGameState(this_00,1);
      if (DAT_00808784 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((DAT_00801690 != 0) && (*(short *)(DAT_00801690 + 0x172) != 2)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar6 = this_00->field_00C5;
      iVar15 = this_00->field_04B2;
      if (iVar6 < iVar15) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (*(int *)&this_00->field_0x4ba + iVar15 <= iVar6) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar20 = this_00->field_00C9;
      iVar7 = this_00->field_04B6;
      if (iVar20 < iVar7) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (*(int *)&this_00->field_0x4be + iVar7 <= iVar20) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04A2 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((this_00->field_00DE != '\0') && (this_00->field_00DE != '\x03')) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A == (STFishC *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (*(uint *)&this_00->field_049A->field_0x24 != (uint)DAT_0080874d) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      STAllPlayersC::SelectObjects(g_sTAllPlayers_007FA174,CASE_7,iVar6 - iVar15,iVar20 - iVar7);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case 6:
      GCGameState(this_00,1);
      if (DAT_00808784 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((DAT_00801690 != 0) && (*(short *)(DAT_00801690 + 0x172) != 2)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar6 = this_00->field_00C5;
      iVar15 = this_00->field_04B2;
      if (iVar6 < iVar15) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (*(int *)&this_00->field_0x4ba + iVar15 <= iVar6) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar20 = this_00->field_00C9;
      iVar7 = this_00->field_04B6;
      if (iVar20 < iVar7) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (*(int *)&this_00->field_0x4be + iVar7 <= iVar20) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04A2 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((this_00->field_00DE != '\0') && (this_00->field_00DE != '\x03')) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A == (STFishC *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (*(uint *)&this_00->field_049A->field_0x24 != (uint)DAT_0080874d) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      STAllPlayersC::SelectObjects(g_sTAllPlayers_007FA174,CASE_6,iVar6 - iVar15,iVar20 - iVar7);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case 7:
      GCGameState(this_00,1);
      if (DAT_00808784 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((DAT_00801690 != 0) && (*(short *)(DAT_00801690 + 0x172) != 2)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((int)this_00->field_00C5 < (int)this_00->field_04B2) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (*(int *)&this_00->field_0x4ba + this_00->field_04B2 <= (int)this_00->field_00C5) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((int)this_00->field_00C9 < (int)this_00->field_04B6) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (*(int *)&this_00->field_0x4be + this_00->field_04B6 <= (int)this_00->field_00C9) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04A2 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((this_00->field_00DE != '\0') && (this_00->field_00DE != '\x03')) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A == (STFishC *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (*(uint *)&this_00->field_049A->field_0x24 == (uint)DAT_0080874d) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar6 = 0;
      break;
    case 8:
      GCGameState(this_00,1);
      if (DAT_00808784 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((DAT_00801690 != 0) && (*(short *)(DAT_00801690 + 0x172) != 2)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar6 = this_00->field_00C5;
      local_8 = (undefined1 *)this_00->field_04B2;
      if (iVar6 < (int)local_8) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((int)(local_8 + *(int *)&this_00->field_0x4ba) <= iVar6) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar15 = this_00->field_00C9;
      iVar20 = this_00->field_04B6;
      if (iVar15 < iVar20) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (*(int *)&this_00->field_0x4be + iVar20 <= iVar15) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04A2 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((this_00->field_00DE != '\0') && (this_00->field_00DE != '\x03')) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A == (STFishC *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (*(uint *)&this_00->field_049A->field_0x24 == (uint)DAT_0080874d) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      STAllPlayersC::PointPick
                (g_sTAllPlayers_007FA174,(uint *)(uint)DAT_0080874d,iVar6 - (int)local_8,
                 iVar15 - iVar20,0);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case 9:
      if (DAT_0080734c == '\0') {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      this_00->field_0xd2 = this_00->field_0xd2 == '\0';
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case 10:
      if (g_cPanel_00801688 == (CPanelTy *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      thunk_FUN_004fad60(g_cPanel_00801688,CONCAT22(uVar16,*(undefined2 *)&this_00->field_00C5),
                         (uint)*(ushort *)&this_00->field_00C9);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case 0xb:
      if (g_cPanel_00801688 == (CPanelTy *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      thunk_FUN_004fae70((int)g_cPanel_00801688);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case 0xc:
      if (g_cPanel_00801688 == (CPanelTy *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      thunk_FUN_004fae90(g_cPanel_00801688,CONCAT22(uVar16,*(undefined2 *)&this_00->field_00C5),
                         (uint)*(ushort *)&this_00->field_00C9);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case 0xd:
      if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      STAllPlayersC::SelectObjects(g_sTAllPlayers_007FA174,CASE_4,0xffffffff,0xffffffff);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    default:
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    goto LAB_005470b2;
  }
  if (uVar18 == 0xa50c) {
    if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    STAllPlayersC::SelectObjects(g_sTAllPlayers_007FA174,CASE_5,0xffffffff,0xffffffff);
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  if (0xa504 < uVar18) {
    switch(uVar18) {
    case 0xa505:
    case 0xa507:
      goto switchD_00546ac9_caseD_a505;
    case 0xa506:
      goto switchD_00546ac9_caseD_a506;
    case 0xa508:
      if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      STAllPlayersC::SelectObjects(g_sTAllPlayers_007FA174,CASE_0,0xffffffff,0xffffffff);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case 0xa509:
      if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      STAllPlayersC::SelectObjects(g_sTAllPlayers_007FA174,CASE_2,0xffffffff,0xffffffff);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case 0xa50a:
      if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      STAllPlayersC::SelectObjects(g_sTAllPlayers_007FA174,CASE_1,0xffffffff,0xffffffff);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case 0xa50b:
      if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      STAllPlayersC::SelectObjects(g_sTAllPlayers_007FA174,CASE_3,0xffffffff,0xffffffff);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    default:
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
  }
  if (uVar18 == 0xa504) {
switchD_00546ac9_caseD_a506:
    GCGameState(this_00,1);
    if (DAT_00808784 != 0) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if ((DAT_00801690 != 0) && (*(short *)(DAT_00801690 + 0x172) != 2)) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if ((int)this_00->field_00C5 < (int)this_00->field_04B2) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (*(int *)&this_00->field_0x4ba + this_00->field_04B2 <= (int)this_00->field_00C5) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if ((int)this_00->field_00C9 < (int)this_00->field_04B6) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (*(int *)&this_00->field_0x4be + this_00->field_04B6 <= (int)this_00->field_00C9) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (*(int *)(param_1 + 0x10) != 0xa501) {
      if (this_00->field_04A2 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A != (STFishC *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      this_00->field_00DE = 1;
      this_00->field_00DF = this_00->field_00C5 - this_00->field_04B2;
      iVar6 = this_00->field_00C9 - this_00->field_04B6;
      this_00->field_00E3 = iVar6;
      FUN_006e1c20(DAT_00807598,(float)this_00->field_00DF,iVar6,0.0,(float *)&this_00->field_00EF,
                   (float *)&this_00->field_00F3);
      *(DWORD *)&this_00->field_0x10f = local_1c;
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    iVar6 = thunk_FUN_00548b90((int)this_00);
    if (iVar6 != 0) {
      this_00->field_00DE = 1;
      this_00->field_00DF = this_00->field_00C5 - this_00->field_04B2;
      iVar6 = this_00->field_00C9 - this_00->field_04B6;
      this_00->field_00E3 = iVar6;
      FUN_006e1c20(DAT_00807598,(float)this_00->field_00DF,iVar6,0.0,(float *)&this_00->field_00EF,
                   (float *)&this_00->field_00F3);
      *(DWORD *)&this_00->field_0x10f = local_1c;
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (this_00->field_04A2 != 0x4e) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (DAT_00807598 == (void *)0x0) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    iVar6 = FUN_006e1dd0(DAT_00807598,this_00->field_00C5 - this_00->field_04B2,
                         this_00->field_00C9 - this_00->field_04B6,&this_00->field_00FF,
                         &this_00->field_0103,&this_00->field_0107);
    if (iVar6 == 0) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    puVar4 = &this_00->field_0x10b;
    this_00->field_00DE = 5;
    if ((-1 < (int)*(uint *)&this_00->field_0x10b) && (DAT_00807598 != (void *)0x0)) {
      FUN_006e8ba0(DAT_00807598,*(uint *)&this_00->field_0x10b);
    }
    FUN_006e89b0(DAT_00807598,(int *)puVar4,&DAT_007c7cd8,8,2,0x45,this_00->field_00FF,
                 this_00->field_0103,this_00->field_0107,0,1,1);
    FUN_006eaaa0(DAT_00807598,*(uint *)puVar4,0);
    FUN_006ea460(DAT_00807598,*(uint *)puVar4,-1);
    if (this_00->field_00A9 != 0) {
      if (this_00->field_001C == 0xffffffff) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      FUN_006b3af0((int *)this_00->field_0060,this_00->field_001C);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    Library::DKW::DDX::FUN_006b8b10((int *)this_00->field_00AD);
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  if (uVar18 < 0xa501) {
    if (uVar18 == 0xa500) {
      *(undefined4 *)&this_00->field_0x4ae = 0;
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (0xa330 < uVar18) {
      if (uVar18 != 0xa4ff) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      *(undefined4 *)&this_00->field_0x4ae = 1;
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (uVar18 == 0xa330) {
      if (DAT_00802a38 == 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      thunk_FUN_00550bb0(DAT_00802a38);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (uVar18 < 0xa31d) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (uVar18 < 0xa327) {
      if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      STAllPlayersC::RestoreTmp(g_sTAllPlayers_007FA174,uVar18 - 0xa31d);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (uVar18 != 0xa32f) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (g_popUp_008016D8 == (PopUpTy *)0x0) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    PopUpTy::Clear(g_popUp_008016D8);
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  if (uVar18 == 0xa501) goto switchD_00546ac9_caseD_a506;
  if (uVar18 != 0xa502) {
    if (uVar18 != 0xa503) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    this_00->field_04A6 = 1;
    this_00->field_04DE = 0;
    if (g_cPanel_00801688 == (CPanelTy *)0x0) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    thunk_FUN_004fad20(g_cPanel_00801688);
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
switchD_00546ac9_caseD_a505:
  if (((int)this_00->field_04B2 <= (int)this_00->field_00C5) &&
     ((int)this_00->field_00C5 < *(int *)&this_00->field_0x4ba + this_00->field_04B2)) {
    if (((int)this_00->field_04B6 <= (int)this_00->field_00C9) &&
       ((int)this_00->field_00C9 < *(int *)&this_00->field_0x4be + this_00->field_04B6)) {
      switch(this_00->field_00DE) {
      case 1:
        this_00->field_00DE = 3;
      case 0:
        if (*(int *)(param_1 + 0x10) != 0xa502) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if (DAT_00808784 != 0) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if ((DAT_00801690 != 0) && (*(short *)(DAT_00801690 + 0x172) != 2)) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if ((this_00->field_04A2 == 0) && (this_00->field_04DE == '\0')) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        TakeCmdToRun(this_00,0);
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      case 2:
        if (DAT_00808784 != 0) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if ((DAT_00801690 != 0) && (*(short *)(DAT_00801690 + 0x172) != 2)) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if (uVar18 != 0xa502) {
          if (this_00->field_04A2 == 0) {
            STAllPlayersC::FramePick
                      (g_sTAllPlayers_007FA174,
                       CONCAT31((int3)((uint)this_00->field_00E7 >> 8),DAT_0080874d),
                       this_00->field_00DF,this_00->field_00E3,this_00->field_00E7,
                       this_00->field_00EB,(uint)(uVar18 == 0xa507));
          }
          this_00->field_00DE = 4;
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if (this_00->field_04A2 == 0) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        TakeCmdToRun(this_00,1);
        goto LAB_00546f1c;
      default:
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      case 5:
        goto switchD_00546e07_caseD_5;
      }
    }
  }
  cVar2 = this_00->field_00DE;
  if (cVar2 == '\x01') {
    this_00->field_00DE = 3;
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  if (cVar2 == '\x02') {
LAB_00546f1c:
    this_00->field_00DE = 4;
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  if (cVar2 != '\x05') {
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  if (uVar18 != 0xa502) {
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  if (this_00->field_00A9 == 0) {
    Library::DKW::DDX::FUN_006b8a60((byte *)this_00->field_00AD);
  }
  else if (this_00->field_001C != 0xffffffff) {
    Library::DKW::DDX::FUN_006b34d0
              ((uint *)this_00->field_0060,this_00->field_001C,0xfffffffe,this_00->field_0034,
               this_00->field_0038);
  }
  DrawSprite(this_00,this_00->field_00C5,this_00->field_00C9);
  if (DAT_00807598 != (void *)0x0) {
    uVar18 = *(uint *)&this_00->field_0x10b;
LAB_0054708b:
    FUN_006e8ba0(DAT_00807598,uVar18);
  }
LAB_00547090:
  this_00->field_00DE = 0;
  *(undefined4 *)&this_00->field_0x10b = 0xffffffff;
  if (this_00->field_04A2 != 0x4e) {
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  iVar6 = 1;
LAB_005470b2:
  TakeCmdToRun(this_00,iVar6);
  g_currentExceptionFrame = local_e0.previous;
  return 0;
switchD_00546e07_caseD_5:
  if (uVar18 != 0xa502) {
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  if (this_00->field_00A9 == 0) {
    Library::DKW::DDX::FUN_006b8a60((byte *)this_00->field_00AD);
  }
  else if (this_00->field_001C != 0xffffffff) {
    Library::DKW::DDX::FUN_006b34d0
              ((uint *)this_00->field_0060,this_00->field_001C,0xfffffffe,this_00->field_0034,
               this_00->field_0038);
  }
  DrawSprite(this_00,this_00->field_00C5,this_00->field_00C9);
  if (DAT_00807598 != (void *)0x0) {
    uVar18 = *(uint *)&this_00->field_0x10b;
    goto LAB_0054708b;
  }
  goto LAB_00547090;
switchD_005468af_caseD_a2ff:
  if (g_opticClass_007FB2A0 == (OpticClassC *)0x0) {
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  thunk_FUN_004ab270(uVar18 - 0xa2ff);
  g_currentExceptionFrame = local_e0.previous;
  return 0;
switchD_00546590_caseD_a125:
  if (DAT_00808783 != '\x03') {
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  thunk_FUN_0054b540(this_00);
  if (g_intercomPanel_0080169C == (IntercomPanelTy *)0x0) {
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  IntercomPanelTy::SwitchIntercomPanel(g_intercomPanel_0080169C,1);
  g_currentExceptionFrame = local_e0.previous;
  return 0;
}

