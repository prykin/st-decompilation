
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\to_cursor.cpp
   CursorClassTy::GetMessage */

undefined4 __thiscall CursorClassTy::GetMessage(CursorClassTy *this,int param_1)

{
  CursorClassTy *pCVar1;
  char cVar2;
  CursorClassTy CVar3;
  ushort uVar4;
  undefined1 *puVar5;
  CursorClassTy *this_00;
  bool bVar6;
  int iVar7;
  CursorClassTy *pCVar8;
  int iVar9;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined4 uVar10;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  char *pcVar11;
  undefined4 uVar12;
  uint *puVar13;
  UINT UVar14;
  undefined4 *puVar15;
  undefined3 extraout_var_04;
  ushort *puVar16;
  undefined2 uVar18;
  int iVar17;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  cMf32 *extraout_ECX;
  cMf32 *this_01;
  int iVar22;
  undefined3 uVar23;
  undefined4 unaff_ESI;
  int *piVar24;
  void *unaff_EDI;
  uint *puVar25;
  code *pcVar26;
  char *pcVar27;
  char *pcVar28;
  undefined4 *puVar29;
  longlong lVar30;
  int iVar31;
  int iVar32;
  byte bVar33;
  HINSTANCE pHVar34;
  uint local_524 [256];
  cMf32 *local_124;
  undefined4 local_120 [16];
  cMf32 *local_e0;
  undefined4 local_dc [16];
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
  int local_1c;
  undefined4 *local_14;
  char local_d;
  float local_c;
  undefined1 *local_8;
  
  local_44 = this;
  local_1c = FUN_006e51b0(*(int *)(this + 0x10));
  local_e0 = DAT_00858df8;
  DAT_00858df8 = (cMf32 *)&local_e0;
  iVar7 = __setjmp3(local_dc,0,unaff_EDI,unaff_ESI);
  this_00 = local_44;
  if (iVar7 != 0) {
    DAT_00858df8 = local_e0;
    iVar17 = FUN_006ad4d0(s_E____titans_Andrey_to_cursor_cpp_007c7d60,0x4d6,0,iVar7,&DAT_007a4ccc);
    if (iVar17 == 0) {
      FUN_006a5e40(iVar7,0,0x7c7d60,0x4d7);
      return 0xffff;
    }
    pcVar26 = (code *)swi(3);
    uVar10 = (*pcVar26)();
    return uVar10;
  }
  FUN_006e5fd0();
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 0xa110:
    this_00[0xd4] = (CursorClassTy)0x1;
    break;
  case 0xa111:
    this_00[0xd4] = (CursorClassTy)0x0;
    break;
  case 0xa112:
    this_00[0xd3] = (CursorClassTy)0x1;
    break;
  case 0xa113:
    this_00[0xd3] = (CursorClassTy)0x0;
    break;
  case 0xa114:
    this_00[0xd5] = (CursorClassTy)0x1;
    break;
  case 0xa115:
    this_00[0xd5] = (CursorClassTy)0x0;
  }
  if (((this_00[0x493] != (CursorClassTy)0x2) && (0xa0ff < *(uint *)(param_1 + 0x10))) &&
     (*(uint *)(param_1 + 0x10) < 0xb100)) {
    DAT_00858df8 = local_e0;
    return 0;
  }
  if ((((DAT_00808784 != 0) || (DAT_0080878c != 0)) || (DAT_00808790 != 0)) &&
     ((0xa10e < *(uint *)(param_1 + 0x10) && (*(uint *)(param_1 + 0x10) < 0xb100)))) {
    DAT_00858df8 = local_e0;
    return 0;
  }
  uVar20 = *(uint *)(param_1 + 0x10);
  if (uVar20 < 0x61) {
    if (uVar20 == 0x60) {
      *(uint *)(this_00 + 0xc9) = (uint)*(ushort *)(param_1 + 0x1a);
      uVar4 = *(ushort *)(param_1 + 0x18);
      *(uint *)(this_00 + 0xc5) = (uint)uVar4;
      DrawSprite(this_00,(uint)uVar4,*(int *)(this_00 + 0xc9));
      if ((*(int *)(this_00 + 0x4b2) <= *(int *)(this_00 + 0xc5)) &&
         (*(int *)(this_00 + 0xc5) < *(int *)(this_00 + 0x4ba) + *(int *)(this_00 + 0x4b2))) {
        if ((*(int *)(this_00 + 0x4b6) <= *(int *)(this_00 + 0xc9)) &&
           (*(int *)(this_00 + 0xc9) < *(int *)(this_00 + 0x4be) + *(int *)(this_00 + 0x4b6))) {
          uVar10 = 1;
          goto LAB_0054532f;
        }
      }
      uVar10 = 0;
LAB_0054532f:
      *(undefined4 *)(this_00 + 0x496) = uVar10;
      bVar6 = thunk_FUN_00544990((int)this_00);
      if (CONCAT31(extraout_var_01,bVar6) == 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (DAT_007fb2ac == (void *)0x0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if ((*(int *)(this_00 + 0x496) != 0) && (*(int *)(this_00 + 0x4a2) == 0xe)) {
        if (*(int *)((int)DAT_007fb2ac + 0x18) != 0) {
          thunk_FUN_004c6210(DAT_007fb2ac,*(undefined4 *)(this_00 + 0x4aa),0);
        }
        thunk_FUN_004c6440(DAT_007fb2ac,
                           (float)(*(int *)(this_00 + 0xc5) - *(int *)(this_00 + 0x4b2)),
                           *(int *)(this_00 + 0xc9) - *(int *)(this_00 + 0x4b6),(int *)0x0,
                           (int *)0x0,(int *)0x0);
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)((int)DAT_007fb2ac + 0x18) != 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      thunk_FUN_004c63f0((int)DAT_007fb2ac);
      DAT_00858df8 = local_e0;
      return 0;
    }
    switch(uVar20) {
    case 0:
      switch(this_00[0xde]) {
      case (CursorClassTy)0x0:
        bVar6 = thunk_FUN_00544990((int)this_00);
        if (CONCAT31(extraout_var_00,bVar6) == 0) break;
        if (-1 < (int)*(uint *)(this_00 + 0x10b)) {
          FUN_006b3bb0(DAT_008075a8,*(uint *)(this_00 + 0x10b));
          *(undefined4 *)(this_00 + 0x10b) = 0xffffffff;
        }
        switch(*(undefined4 *)(this_00 + 0xcd)) {
        case 0:
          thunk_FUN_0054b9a0(this_00,0,0,DAT_00806730,DAT_00806734,*(int *)(this_00 + 0xc5),
                             *(int *)(this_00 + 0xc9),1);
          break;
        case 1:
          iVar7 = 100;
          iVar17 = 0;
          goto LAB_005450ca;
        case 2:
          thunk_FUN_0054b9a0(this_00,0,0,DAT_00806730,DAT_00806734,DAT_00806730 + -1,100,0);
          break;
        case 3:
          thunk_FUN_0054b9a0(this_00,0,0,DAT_00806730,DAT_00806734,100,0,0);
          break;
        case 4:
          iVar7 = DAT_00806734 + -1;
          iVar17 = 100;
LAB_005450ca:
          thunk_FUN_0054b9a0(this_00,0,0,DAT_00806730,DAT_00806734,iVar17,iVar7,0);
        }
        break;
      case (CursorClassTy)0x1:
        if (DAT_00807598 != (void *)0x0) {
          local_7c = *(undefined4 *)(this_00 + 0xef);
          local_78 = *(undefined4 *)(this_00 + 0xf3);
          local_74 = 0;
          FUN_006e25d0(DAT_00807598,&local_9c);
          *(int *)(this_00 + 0xdf) = local_9c >> 0x10;
          *(int *)(this_00 + 0xe3) = local_98 >> 0x10;
        }
        uVar20 = (*(int *)(this_00 + 0xc5) - *(int *)(this_00 + 0x4b2)) - *(int *)(this_00 + 0xdf);
        *(uint *)(this_00 + 0xe7) = uVar20;
        uVar21 = (*(int *)(this_00 + 0xc9) - *(int *)(this_00 + 0x4b6)) - *(int *)(this_00 + 0xe3);
        *(uint *)(this_00 + 0xeb) = uVar21;
        if ((5 < (int)((uVar20 ^ (int)uVar20 >> 0x1f) - ((int)uVar20 >> 0x1f))) ||
           (5 < (int)((uVar21 ^ (int)uVar21 >> 0x1f) - ((int)uVar21 >> 0x1f)))) {
          pCVar1 = this_00 + 0x10b;
          this_00[0xde] = (CursorClassTy)0x2;
          if (-1 < (int)*(uint *)(this_00 + 0x10b)) {
            FUN_006b3bb0(DAT_008075a8,*(uint *)(this_00 + 0x10b));
          }
          iVar7 = 0x20;
          pCVar8 = this_00 + 0x113;
          do {
            iVar7 = iVar7 + -1;
            *(uint *)pCVar8 = (-(uint)(*(int *)(this_00 + 0x4a2) != 0) & 0x49) + 0x45 | 0x1000000;
            pCVar8 = pCVar8 + 0x1c;
          } while (iVar7 != 0);
          FUN_006b96f0(DAT_008075a8,(uint *)pCVar1,10,0x20,(uint)(this_00 + 0x113));
          FUN_006b1b10((int)DAT_008075a8,*(uint *)pCVar1,2);
          FUN_006b3640(DAT_008075a8,*(uint *)pCVar1,0xffffffff,*(uint *)(this_00 + 0xdf),
                       *(uint *)(this_00 + 0xe3));
          FUN_006b2800((int)DAT_008075a8,*(uint *)pCVar1,*(uint *)(this_00 + 0xe7),
                       *(uint *)(this_00 + 0xeb));
          iVar7 = FUN_00405687((int)this_00);
          if (iVar7 == 0) {
            SetGCType(this_00,0,*(undefined4 *)(this_00 + 0x34),*(undefined4 *)(this_00 + 0x38));
          }
        }
        break;
      case (CursorClassTy)0x2:
        local_8 = (undefined1 *)0xfffffffe;
        local_c = 1.4013e-45;
        switch(*(undefined4 *)(this_00 + 0xcd)) {
        case 1:
          iVar9 = *(int *)(this_00 + 0x4b6);
          iVar22 = *(int *)(this_00 + 0x4b2);
          iVar7 = iVar9 + 100;
          iVar17 = iVar22;
          goto LAB_00544d9b;
        case 2:
          iVar9 = *(int *)(this_00 + 0x4b6);
          iVar31 = *(int *)(this_00 + 0x4ba);
          iVar22 = *(int *)(this_00 + 0x4b2);
          iVar7 = iVar9 + 100;
          iVar17 = iVar31 + -1 + iVar22;
          iVar32 = *(int *)(this_00 + 0x4be);
          break;
        case 3:
          iVar22 = *(int *)(this_00 + 0x4b2);
          iVar9 = *(int *)(this_00 + 0x4b6);
          iVar17 = iVar22 + 100;
          iVar7 = iVar9;
LAB_00544d9b:
          iVar32 = *(int *)(this_00 + 0x4be);
          iVar31 = *(int *)(this_00 + 0x4ba);
          break;
        case 4:
          iVar32 = *(int *)(this_00 + 0x4be);
          iVar9 = *(int *)(this_00 + 0x4b6);
          iVar22 = *(int *)(this_00 + 0x4b2);
          iVar7 = iVar32 + -1 + iVar9;
          iVar17 = iVar22 + 100;
          iVar31 = *(int *)(this_00 + 0x4ba);
          break;
        default:
          goto switchD_00544d44_default;
        }
        thunk_FUN_0054b9a0(this_00,iVar22,iVar9,iVar31,iVar32,iVar17,iVar7,0);
switchD_00544d44_default:
        local_70 = *(undefined4 *)(this_00 + 0xef);
        local_6c = *(undefined4 *)(this_00 + 0xf3);
        local_68 = 0;
        FUN_006e25d0(DAT_00807598,&local_8c);
        *(int *)(this_00 + 0xe3) = local_88 >> 0x10;
        *(int *)(this_00 + 0xdf) = local_8c >> 0x10;
        if (*(int *)(this_00 + 0xcd) == 0) {
          pCVar1 = this_00 + 0xc9;
          pCVar8 = this_00 + 0xc5;
          bVar6 = thunk_FUN_0054bdf0(*(int *)(this_00 + 0x4b2),*(int *)(this_00 + 0x4b6),
                                     *(int *)(this_00 + 0x4ba),*(int *)(this_00 + 0x4be),
                                     (int *)pCVar8,(int *)pCVar1);
          if (CONCAT31(extraout_var,bVar6) != 0) {
            local_28 = *(undefined2 *)pCVar8;
            local_26 = *(undefined2 *)pCVar1;
            local_40[4] = 0x16;
            FUN_006e6000(this_00,3,1,local_40);
          }
          iVar7 = FUN_00405687((int)this_00);
          iVar7 = thunk_FUN_0054b9a0(this_00,*(int *)(this_00 + 0x4b2),*(int *)(this_00 + 0x4b6),
                                     *(int *)(this_00 + 0x4ba),*(int *)(this_00 + 0x4be),
                                     *(int *)pCVar8,*(int *)pCVar1,(uint)(iVar7 == 0));
          if (iVar7 != 0) {
            FUN_006e1440(DAT_00807598);
            iVar7 = *(int *)pCVar1;
            uVar20 = (*(int *)pCVar8 - *(int *)(this_00 + 0xdf)) - *(int *)(this_00 + 0x4b2);
            *(uint *)(this_00 + 0xe7) = uVar20;
            goto LAB_00544e8f;
          }
          local_14 = *(undefined4 **)(this_00 + 0xeb);
          uVar21 = *(uint *)(this_00 + 0xe7);
          uVar20 = (*(int *)pCVar8 - *(int *)(this_00 + 0xdf)) - *(int *)(this_00 + 0x4b2);
          uVar19 = (*(int *)pCVar1 - *(int *)(this_00 + 0x4b6)) - *(int *)(this_00 + 0xe3);
          *(uint *)(this_00 + 0xe7) = uVar20;
          *(uint *)(this_00 + 0xeb) = uVar19;
          if ((uVar21 == uVar20) && (local_14 == (undefined4 *)uVar19)) {
            local_c = 0.0;
          }
        }
        else {
          FUN_006e1440(DAT_00807598);
          iVar7 = *(int *)(this_00 + 0xc9);
          uVar20 = (*(int *)(this_00 + 0xc5) - *(int *)(this_00 + 0x4b2)) - *(int *)(this_00 + 0xdf)
          ;
          *(uint *)(this_00 + 0xe7) = uVar20;
LAB_00544e8f:
          uVar19 = (iVar7 - *(int *)(this_00 + 0x4b6)) - *(int *)(this_00 + 0xe3);
          *(uint *)(this_00 + 0xeb) = uVar19;
        }
        if (0x31 < (uint)(local_1c - *(int *)(this_00 + 0x10f))) {
          *(int *)(this_00 + 0x10f) = local_1c;
          local_8 = (undefined1 *)0xffffffff;
        }
        if (local_c != 0.0) {
          FUN_006b2800((int)DAT_008075a8,*(uint *)(this_00 + 0x10b),uVar20,uVar19);
        }
        if ((local_c != 0.0) || ((int)local_8 < 0)) {
          FUN_006b3640(DAT_008075a8,*(uint *)(this_00 + 0x10b),(uint)local_8,
                       *(uint *)(this_00 + 0xdf),*(uint *)(this_00 + 0xe3));
        }
        break;
      case (CursorClassTy)0x3:
        uVar20 = *(uint *)(this_00 + 0x10b);
        if (-1 < (int)uVar20) goto LAB_0054505c;
        goto LAB_0054506b;
      case (CursorClassTy)0x4:
        uVar20 = *(uint *)(this_00 + 0x10b);
LAB_0054505c:
        FUN_006b3bb0(DAT_008075a8,uVar20);
        *(undefined4 *)(this_00 + 0x10b) = 0xffffffff;
LAB_0054506b:
        this_00[0xde] = (CursorClassTy)0x0;
        break;
      case (CursorClassTy)0x5:
        if (DAT_00807598 != (void *)0x0) {
          FUN_006e1c20(DAT_00807598,(float)(*(int *)(this_00 + 0xc5) - *(int *)(this_00 + 0x4b2)),
                       *(int *)(this_00 + 0xc9) - *(int *)(this_00 + 0x4b6),
                       *(float *)(this_00 + 0x107),(float *)&local_8,&local_c);
          lVar30 = __ftol();
          *(int *)(this_00 + 0xfb) = (int)lVar30;
          if ((int)lVar30 < 1) {
            *(undefined4 *)(this_00 + 0xfb) = 1;
          }
          lVar30 = __ftol();
          iVar7 = (int)(short)lVar30;
          lVar30 = __ftol();
          iVar17 = (int)(short)lVar30;
          lVar30 = __ftol();
          iVar22 = (int)(short)lVar30;
          lVar30 = __ftol();
          iVar7 = FUN_006db910((int)(short)lVar30,iVar22,iVar17,iVar7);
          *(int *)(this_00 + 0xf7) = iVar7;
          FUN_006e8df0(DAT_00807598,*(uint *)(this_00 + 0x10b),*(undefined4 *)(this_00 + 0xff),
                       *(undefined4 *)(this_00 + 0x103),*(undefined4 *)(this_00 + 0x107),iVar7,
                       *(int *)(this_00 + 0xfb),1);
        }
      }
      if ((*(int *)(this_00 + 0x4a6) != 0) && (*(int *)(this_00 + 0x4a2) != 0)) {
        thunk_FUN_0054a8d0(this_00);
      }
      GCGameState(this_00,1);
      DAT_00858df8 = local_e0;
      return 0;
    case 2:
      InitCursor(this_00,1);
      DAT_00858df8 = local_e0;
      return 0;
    case 3:
      DoneCursor(this_00);
      DAT_00858df8 = local_e0;
      return 0;
    case 8:
      if (*(int *)(this_00 + 0xc1) == 0) {
        *(undefined4 *)(this_00 + 0xc1) = 1;
        AddSysAcc(this_00);
        DAT_00858df8 = local_e0;
        return 0;
      }
      break;
    case 9:
      if (*(int *)(this_00 + 0xc1) != 0) {
        *(undefined4 *)(this_00 + 0xc1) = 0;
        DelSysAcc(this_00);
        DAT_00858df8 = local_e0;
        return 0;
      }
    }
    DAT_00858df8 = local_e0;
    return 0;
  }
  if (uVar20 < 0xa31d) {
    if (0xa312 < uVar20) {
      if (DAT_007fa174 == (STAllPlayersC *)0x0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      STAllPlayersC::SaveTmp(DAT_007fa174,uVar20 - 0xa313);
      DAT_00858df8 = local_e0;
      return 0;
    }
    if (0xa124 < uVar20) {
      if (uVar20 < 0xa204) {
        if (0xa1fe < uVar20) {
          if (DAT_00802a38 == 0) {
            DAT_00858df8 = local_e0;
            return 0;
          }
          local_d = '\x03' - *(char *)(param_1 + 0x10);
          thunk_FUN_0054edf0((undefined4 *)0x15,(undefined4 *)&local_d,0,0xffffffff);
          DAT_00858df8 = local_e0;
          return 0;
        }
        switch(uVar20) {
        case 0xa125:
          goto switchD_00546590_caseD_a125;
        case 0xa126:
          if (DAT_00808783 != '\x03') {
            DAT_00858df8 = local_e0;
            return 0;
          }
          thunk_FUN_0054b540(this_00);
          if (DAT_0080169c == (IntercomPanelTy *)0x0) {
            DAT_00858df8 = local_e0;
            return 0;
          }
          IntercomPanelTy::SwitchIntercomPanel(DAT_0080169c,3);
          DAT_00858df8 = local_e0;
          return 0;
        case 0xa127:
          if (DAT_00808783 != '\x03') {
            DAT_00858df8 = local_e0;
            return 0;
          }
          thunk_FUN_0054b540(this_00);
          if (DAT_0080169c == (IntercomPanelTy *)0x0) {
            DAT_00858df8 = local_e0;
            return 0;
          }
          IntercomPanelTy::SwitchIntercomPanel(DAT_0080169c,2);
          DAT_00858df8 = local_e0;
          return 0;
        case 0xa128:
          if (DAT_00801688 == (CPanelTy *)0x0) {
            DAT_00858df8 = local_e0;
            return 0;
          }
          thunk_FUN_004faff0((int)DAT_00801688);
          DAT_00858df8 = local_e0;
          return 0;
        default:
          DAT_00858df8 = local_e0;
          return 0;
        case 0xa12f:
          *(undefined4 *)(this_00 + 0xcd) = 3;
          DAT_00858df8 = local_e0;
          return 0;
        case 0xa130:
          *(undefined4 *)(this_00 + 0xcd) = 4;
          DAT_00858df8 = local_e0;
          return 0;
        case 0xa131:
          *(undefined4 *)(this_00 + 0xcd) = 2;
          DAT_00858df8 = local_e0;
          return 0;
        case 0xa132:
          *(undefined4 *)(this_00 + 0xcd) = 1;
          DAT_00858df8 = local_e0;
          return 0;
        case 0xa133:
          *(undefined4 *)(this_00 + 0xcd) = 0;
          DAT_00858df8 = local_e0;
          return 0;
        }
      }
      if (0xa209 < uVar20) {
        switch(uVar20) {
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
          if (DAT_007fb2a0 == (void *)0x0) {
            DAT_00858df8 = local_e0;
            return 0;
          }
          thunk_FUN_004ab300(uVar20 - 0xa309);
          DAT_00858df8 = local_e0;
          return 0;
        default:
          DAT_00858df8 = local_e0;
          return 0;
        }
      }
      if (uVar20 != 0xa209) {
        if (uVar20 == 0xa206) {
          puVar15 = local_40;
          for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar15 = 0;
            puVar15 = puVar15 + 1;
          }
          local_40[4] = 0x100;
          FUN_006e6000(this_00,3,0x100,local_40);
          DAT_00858df8 = local_e0;
          return 0;
        }
        if (uVar20 == 0xa207) {
          puVar15 = local_40;
          for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar15 = 0;
            puVar15 = puVar15 + 1;
          }
          local_40[4] = 0x101;
          FUN_006e6000(this_00,3,0x100,local_40);
          DAT_00858df8 = local_e0;
          return 0;
        }
        if (uVar20 != 0xa208) {
          DAT_00858df8 = local_e0;
          return 0;
        }
        if (DAT_007fb2a0 == (void *)0x0) {
          DAT_00858df8 = local_e0;
          return 0;
        }
        puVar15 = local_40;
        for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar15 = 0;
          puVar15 = puVar15 + 1;
        }
        uVar10 = thunk_FUN_004ab050();
        switch(uVar10) {
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
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (DAT_007fb2a0 == (void *)0x0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      puVar15 = local_40;
      for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      uVar10 = thunk_FUN_004ab050();
      switch(uVar10) {
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
    if (uVar20 == 0xa124) {
      thunk_FUN_0054b540(this_00);
      if (DAT_0080169c == (IntercomPanelTy *)0x0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      IntercomPanelTy::SwitchIntercomPanel(DAT_0080169c,0);
      DAT_00858df8 = local_e0;
      return 0;
    }
    if (0xa102 < uVar20) {
      switch(uVar20) {
      case 0xa103:
        if (DAT_008016dc == (OptPanelTy *)0x0) {
          DAT_00858df8 = local_e0;
          return 0;
        }
        OptPanelTy::Question(DAT_008016dc,'\x04');
        DAT_00858df8 = local_e0;
        return 0;
      case 0xa104:
        if (DAT_008016dc == (OptPanelTy *)0x0) {
          DAT_00858df8 = local_e0;
          return 0;
        }
        if (DAT_008067a0 != '\0') {
          DAT_00858df8 = local_e0;
          return 0;
        }
        OptPanelTy::Question(DAT_008016dc,'\x05');
        DAT_00858df8 = local_e0;
        return 0;
      case 0xa105:
      case 0xa106:
        if (DAT_008016dc == (OptPanelTy *)0x0) {
          DAT_00858df8 = local_e0;
          return 0;
        }
        (*(code *)**(undefined4 **)DAT_008016dc)(param_1);
        DAT_00858df8 = local_e0;
        return 0;
      default:
        DAT_00858df8 = local_e0;
        return 0;
      case 0xa11f:
        if (DAT_00808783 == '\x03') {
          DAT_00858df8 = local_e0;
          return 0;
        }
        DAT_00808794 = 1;
        _DAT_00808798 = 1;
        DAT_00858df8 = local_e0;
        return 0;
      case 0xa120:
        if (DAT_00808783 == '\x03') {
          DAT_00858df8 = local_e0;
          return 0;
        }
        uVar20 = 0xffffffff;
        pcVar11 = &DAT_00807680;
        break;
      case 0xa122:
        thunk_FUN_0054b540(this_00);
        if (DAT_00801688 == (CPanelTy *)0x0) {
          DAT_00858df8 = local_e0;
          return 0;
        }
        CPanelTy::SwitchCPanel(DAT_00801688);
        DAT_00858df8 = local_e0;
        return 0;
      case 0xa123:
        if (DAT_00801688 == (CPanelTy *)0x0) {
          DAT_00858df8 = local_e0;
          return 0;
        }
        thunk_FUN_004fa3b0(DAT_00801688);
        DAT_00858df8 = local_e0;
        return 0;
      }
      do {
        pcVar28 = pcVar11;
        if (uVar20 == 0) break;
        uVar20 = uVar20 - 1;
        pcVar28 = pcVar11 + 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar28;
      } while (cVar2 != '\0');
      uVar20 = ~uVar20;
      local_58 = &local_48;
      local_48 = 0;
      pcVar11 = pcVar28 + -uVar20;
      pcVar28 = (char *)&DAT_0080ee1a;
      for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
        *(undefined4 *)pcVar28 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar28 = pcVar28 + 4;
      }
      for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
        *pcVar28 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar28 = pcVar28 + 1;
      }
      uVar20 = 0xffffffff;
      pcVar11 = PTR_s_SAVEGAME__0079ade4;
      do {
        pcVar28 = pcVar11;
        if (uVar20 == 0) break;
        uVar20 = uVar20 - 1;
        pcVar28 = pcVar11 + 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar28;
      } while (cVar2 != '\0');
      uVar20 = ~uVar20;
      iVar7 = -1;
      pcVar11 = (char *)&DAT_0080ee1a;
      do {
        pcVar27 = pcVar11;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar27 = pcVar11 + 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar27;
      } while (cVar2 != '\0');
      pcVar11 = pcVar28 + -uVar20;
      pcVar28 = pcVar27 + -1;
      for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
        *(undefined4 *)pcVar28 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar28 = pcVar28 + 4;
      }
      local_14 = (undefined4 *)0x0;
      for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
        *pcVar28 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar28 = pcVar28 + 1;
      }
      uVar20 = 0xffffffff;
      pcVar11 = (char *)&DAT_00807ddd;
      do {
        pcVar28 = pcVar11;
        if (uVar20 == 0) break;
        uVar20 = uVar20 - 1;
        pcVar28 = pcVar11 + 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar28;
      } while (cVar2 != '\0');
      uVar20 = ~uVar20;
      iVar7 = -1;
      pcVar11 = (char *)&DAT_0080ee1a;
      do {
        pcVar27 = pcVar11;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar27 = pcVar11 + 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar27;
      } while (cVar2 != '\0');
      pcVar11 = pcVar28 + -uVar20;
      pcVar28 = pcVar27 + -1;
      for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
        *(undefined4 *)pcVar28 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar28 = pcVar28 + 4;
      }
      for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
        *pcVar28 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar28 = pcVar28 + 1;
      }
      FUN_006b8280((char *)&DAT_0080ee1a,(char *)&DAT_0080ee1a);
      uVar20 = 0xffffffff;
      pcVar11 = PTR_s_SAVE_QUICKSAVE_0079ade8;
      do {
        pcVar28 = pcVar11;
        if (uVar20 == 0) break;
        uVar20 = uVar20 - 1;
        pcVar28 = pcVar11 + 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar28;
      } while (cVar2 != '\0');
      uVar20 = ~uVar20;
      iVar7 = -1;
      pcVar11 = (char *)&DAT_0080ee1a;
      do {
        pcVar27 = pcVar11;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar27 = pcVar11 + 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar27;
      } while (cVar2 != '\0');
      pcVar11 = pcVar28 + -uVar20;
      pcVar28 = pcVar27 + -1;
      for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
        *(undefined4 *)pcVar28 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar28 = pcVar28 + 4;
      }
      local_124 = DAT_00858df8;
      for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
        *pcVar28 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar28 = pcVar28 + 1;
      }
      DAT_00858df8 = (cMf32 *)&local_124;
      iVar7 = __setjmp3(local_120,0,unaff_EDI,unaff_ESI);
      this_01 = extraout_ECX;
      puVar15 = local_14;
      if (iVar7 == 0) {
        puVar15 = FUN_006f0ec0(0x345,(byte *)&DAT_0080ee1a,0,0,0);
        local_14 = puVar15;
        puVar16 = FUN_006f1ce0(0x80,PTR_s_SAVE_DESC_0079adec,(int *)&local_58,0);
        this_01 = local_124;
        if (puVar16 != (ushort *)0x0) {
          iVar7 = -0x77ffffea;
          if (DAT_00808783 == '\x01') {
            iVar7 = -0x77fffeea;
          }
          else if (DAT_00808783 == '\x02') {
            iVar7 = -0x77fffdea;
          }
          if (iVar7 == local_48) {
            if (DAT_00808783 == '\x01') {
              DAT_008087a0 = 9;
            }
            else if (DAT_00808783 == '\x02') {
              DAT_008087a0 = 10;
            }
            puVar29 = local_40;
            for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
              *puVar29 = 0;
              puVar29 = puVar29 + 1;
            }
            DAT_0080879c = 1;
            _DAT_0080f32e = 1;
            local_40[3] = 1;
            local_40[4] = 0x6100;
            FUN_006e3b50(local_40);
            this_01 = local_124;
          }
        }
      }
      if (puVar15 == (undefined4 *)0x0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      DAT_00858df8 = local_124;
      cMf32::delete(this_01,puVar15);
      DAT_00858df8 = local_e0;
      return 0;
    }
    if (uVar20 == 0xa102) {
      thunk_FUN_0054b540(this_00);
      if (DAT_008016dc == (OptPanelTy *)0x0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      OptPanelTy::SwitchOptPanel(DAT_008016dc,-1);
      DAT_00858df8 = local_e0;
      return 0;
    }
    if (0x4203 < uVar20) {
      if (uVar20 == 0xa0ff) {
        *(undefined4 *)(param_1 + 0x10) = 0x7104;
        STAppC::GetMessage((STAppC *)&DAT_00807620,param_1);
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (uVar20 != 0xa100) {
        if (uVar20 != 0xa101) {
          DAT_00858df8 = local_e0;
          return 0;
        }
        thunk_FUN_0054b540(this_00);
        if (DAT_008016dc == (OptPanelTy *)0x0) {
          DAT_00858df8 = local_e0;
          return 0;
        }
        OptPanelTy::SwitchOptPanel(DAT_008016dc,'\x0f');
        DAT_00858df8 = local_e0;
        return 0;
      }
      bVar6 = thunk_FUN_00544990((int)this_00);
      if (CONCAT31(extraout_var_04,bVar6) == 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      local_54 = 1;
      if (DAT_0081163c == 0) {
        local_4c = 1;
        puVar15 = &local_54;
        local_50 = (uint)(DAT_00808784 == 0);
      }
      else {
        local_4c = 1;
        puVar15 = &local_54;
        local_50 = (uint)(*(int *)(DAT_0081163c + 0x42c) == 0);
      }
      goto LAB_00547c2d;
    }
    if (uVar20 == 0x4203) {
      thunk_FUN_00544940((int)this_00);
      DAT_00858df8 = local_e0;
      return 0;
    }
    if (0x4201 < uVar20) {
      if (uVar20 != 0x4202) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (DAT_00807322 == 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)(param_1 + 0x18) != *(int *)(this_00 + 0x4da)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      *(undefined4 *)(this_00 + 0x4da) = 0;
      FUN_006b2800((int)DAT_008075a8,*(uint *)(this_00 + 0x4d6),0,0);
      FUN_006b3af0(DAT_008075a8,*(uint *)(this_00 + 0x4d6));
      DAT_00858df8 = local_e0;
      return 0;
    }
    if (uVar20 != 0x4201) {
      if (uVar20 == 0x67) {
        if (DAT_0080734c == '\0') {
          DAT_00858df8 = local_e0;
          return 0;
        }
        bVar6 = thunk_FUN_00544990((int)this_00);
        if (CONCAT31(extraout_var_03,bVar6) == 0) {
          DAT_00858df8 = local_e0;
          return 0;
        }
        if (DAT_00808784 != 0) {
          DAT_00858df8 = local_e0;
          return 0;
        }
        if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          DAT_00858df8 = local_e0;
          return 0;
        }
        if ((DAT_008016e8 != 0) && (*(short *)(DAT_008016e8 + 0x172) == 1)) {
          DAT_00858df8 = local_e0;
          return 0;
        }
        if ((DAT_0080167c != 0) && (*(short *)(DAT_0080167c + 0x172) == 1)) {
          DAT_00858df8 = local_e0;
          return 0;
        }
        if ((DAT_00801684 != 0) && (*(short *)(DAT_00801684 + 0x172) == 1)) {
          DAT_00858df8 = local_e0;
          return 0;
        }
        if ((DAT_00802a48 != 0) && (*(short *)(DAT_00802a48 + 0x172) == 1)) {
          DAT_00858df8 = local_e0;
          return 0;
        }
        if ((DAT_00801698 != 0) && (*(short *)(DAT_00801698 + 0x172) == 1)) {
          DAT_00858df8 = local_e0;
          return 0;
        }
        if ((DAT_00802a44 != 0) && (*(short *)(DAT_00802a44 + 0x172) == 1)) {
          DAT_00858df8 = local_e0;
          return 0;
        }
        if ((DAT_0080168c != 0) && (*(short *)(DAT_0080168c + 0x172) == 1)) {
          DAT_00858df8 = local_e0;
          return 0;
        }
        if ((DAT_00801678 != 0) && (*(short *)(DAT_00801678 + 0x172) == 1)) {
          DAT_00858df8 = local_e0;
          return 0;
        }
        if ((DAT_008016ec != 0) && (*(short *)(DAT_008016ec + 0x172) == 1)) {
          DAT_00858df8 = local_e0;
          return 0;
        }
        if ((DAT_00801680 != 0) && (*(short *)(DAT_00801680 + 0x172) == 1)) {
          DAT_00858df8 = local_e0;
          return 0;
        }
        if (DAT_007fb2a0 == (void *)0x0) {
          DAT_00858df8 = local_e0;
          return 0;
        }
        if (this_00[0xd2] == (CursorClassTy)0x0) {
          thunk_FUN_004ab070(DAT_007fb2a0,3,0.0,0,1);
          DAT_00858df8 = local_e0;
          return 0;
        }
        thunk_FUN_004ab070(DAT_007fb2a0,1,0.0,0,1);
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (uVar20 != 0x68) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (DAT_0080734c == '\0') {
        DAT_00858df8 = local_e0;
        return 0;
      }
      bVar6 = thunk_FUN_00544990((int)this_00);
      if (CONCAT31(extraout_var_02,bVar6) == 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (DAT_00808784 != 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if ((DAT_008016e8 != 0) && (*(short *)(DAT_008016e8 + 0x172) == 1)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if ((DAT_0080167c != 0) && (*(short *)(DAT_0080167c + 0x172) == 1)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if ((DAT_00801684 != 0) && (*(short *)(DAT_00801684 + 0x172) == 1)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if ((DAT_00802a48 != 0) && (*(short *)(DAT_00802a48 + 0x172) == 1)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if ((DAT_00801698 != 0) && (*(short *)(DAT_00801698 + 0x172) == 1)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if ((DAT_00802a44 != 0) && (*(short *)(DAT_00802a44 + 0x172) == 1)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if ((DAT_0080168c != 0) && (*(short *)(DAT_0080168c + 0x172) == 1)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if ((DAT_00801678 != 0) && (*(short *)(DAT_00801678 + 0x172) == 1)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if ((DAT_008016ec != 0) && (*(short *)(DAT_008016ec + 0x172) == 1)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if ((DAT_00801680 != 0) && (*(short *)(DAT_00801680 + 0x172) == 1)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (DAT_007fb2a0 == (void *)0x0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (this_00[0xd2] == (CursorClassTy)0x0) {
        thunk_FUN_004ab070(DAT_007fb2a0,4,0.0,0,1);
        DAT_00858df8 = local_e0;
        return 0;
      }
      thunk_FUN_004ab070(DAT_007fb2a0,2,0.0,0,1);
      DAT_00858df8 = local_e0;
      return 0;
    }
    local_c = 1.4013e-45;
    if (DAT_00807322 == 0) {
      DAT_00858df8 = local_e0;
      return 0;
    }
    UVar14 = *(UINT *)(param_1 + 0x18);
    if (UVar14 == *(UINT *)(this_00 + 0x4da)) {
      DAT_00858df8 = local_e0;
      return 0;
    }
    if (UVar14 == 0) {
      DAT_00858df8 = local_e0;
      return 0;
    }
    if (this_00[0xde] == (CursorClassTy)0x5) {
      DAT_00858df8 = local_e0;
      return 0;
    }
    if (this_00[0xde] == (CursorClassTy)0x2) {
      DAT_00858df8 = local_e0;
      return 0;
    }
    *(UINT *)(this_00 + 0x4da) = UVar14;
    uVar4 = *(ushort *)(param_1 + 0x16);
    if (uVar4 == 1) {
      puVar5 = *(undefined1 **)(param_1 + 0x18);
      local_8 = puVar5;
      switch(*puVar5) {
      case 1:
        if (*(int *)(puVar5 + 9) < 0) {
          if ((&stack0x00000000 != (undefined1 *)0x524) &&
             (iVar7 = FUN_006b0140(*(UINT *)(puVar5 + 1),DAT_00807618), iVar7 != 0)) {
            UVar14 = *(UINT *)(local_8 + 1);
LAB_005458df:
            pcVar11 = (char *)FUN_006b0140(UVar14,DAT_00807618);
            uVar20 = 0xffffffff;
            do {
              pcVar28 = pcVar11;
              if (uVar20 == 0) break;
              uVar20 = uVar20 - 1;
              pcVar28 = pcVar11 + 1;
              cVar2 = *pcVar11;
              pcVar11 = pcVar28;
            } while (cVar2 != '\0');
            uVar20 = ~uVar20;
            puVar13 = (uint *)(pcVar28 + -uVar20);
            puVar25 = local_524;
            for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
              *puVar25 = *puVar13;
              puVar13 = puVar13 + 1;
              puVar25 = puVar25 + 1;
            }
            for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
              *(char *)puVar25 = (char)*puVar13;
              puVar13 = (uint *)((int)puVar13 + 1);
              puVar25 = (uint *)((int)puVar25 + 1);
            }
          }
        }
        else {
          thunk_FUN_0052a970(*(uint *)(&DAT_00807e66 + *(int *)(puVar5 + 9) * 4),1);
          FUN_006b0140(*(UINT *)(puVar5 + 1),DAT_00807618);
          wsprintfA((LPSTR)local_524,s___d_s___d_s_007c7f80);
        }
        break;
      case 2:
        if (*(UINT *)(puVar5 + 1) == 0) goto switchD_00545816_default;
        if ((&stack0x00000000 != (undefined1 *)0x524) &&
           (iVar7 = FUN_006b0140(*(UINT *)(puVar5 + 1),DAT_00807618), iVar7 != 0)) {
          UVar14 = *(UINT *)(local_8 + 1);
          goto LAB_005458df;
        }
        break;
      case 3:
        if (*(int *)(puVar5 + 5) == 0) {
          uVar10 = FUN_006b0140(0x36b3,DAT_00807618);
          uVar12 = FUN_006b0140(*(UINT *)(puVar5 + 1),DAT_00807618);
          pcVar26 = wsprintfA_exref;
          wsprintfA((LPSTR)local_524,s___d_s__s_007c7f64,(uint)*(ushort *)(param_1 + 0x14),uVar12,
                    uVar10);
        }
        else {
          FUN_006b0140(0x36b3,DAT_00807618);
          FUN_006b0140(*(UINT *)(puVar5 + 5),DAT_00807618);
          FUN_006b0140(*(UINT *)(puVar5 + 1),DAT_00807618);
          pcVar26 = wsprintfA_exref;
          wsprintfA((LPSTR)local_524,s___d_s__s__s_007c7f70);
        }
        if (*(short *)(puVar5 + 0xd) != 0) {
          (*pcVar26)(local_524,s__s___d_d_007c7f58,local_524,
                     (-(uint)(DAT_0080874e != '\x03') & 0xfffffffe) + 5,*(short *)(puVar5 + 0xd));
        }
        if (*(short *)(puVar5 + 9) != 0) {
          (*pcVar26)(local_524,s__s___d_d_007c7f58,local_524,2,*(short *)(puVar5 + 9));
        }
        if (*(short *)(puVar5 + 0xb) != 0) {
          (*pcVar26)(local_524,s__s___d_d_007c7f58,local_524,
                     (-(uint)(DAT_0080874e != '\x03') & 0xfffffffe) + 6,*(short *)(puVar5 + 0xb));
        }
        if (0 < *(short *)(puVar5 + 0xf)) {
          FUN_006b0140(0x273a,DAT_00807618);
          (*pcVar26)();
        }
        break;
      case 4:
        pcVar11 = (char *)FUN_006b0140(*(UINT *)(puVar5 + 1),DAT_00807618);
        uVar20 = 0xffffffff;
        do {
          pcVar28 = pcVar11;
          if (uVar20 == 0) break;
          uVar20 = uVar20 - 1;
          pcVar28 = pcVar11 + 1;
          cVar2 = *pcVar11;
          pcVar11 = pcVar28;
        } while (cVar2 != '\0');
        uVar20 = ~uVar20;
        pcVar11 = pcVar28 + -uVar20;
        pcVar28 = (char *)&DAT_0080f33a;
        for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
          *(undefined4 *)pcVar28 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar28 = pcVar28 + 4;
        }
        for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
          *pcVar28 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar28 = pcVar28 + 1;
        }
        for (puVar13 = FUN_0072e560(&DAT_0080f33a,'\n'); puVar13 != (uint *)0x0;
            puVar13 = FUN_0072e560(puVar13,'\n')) {
          *(undefined1 *)puVar13 = 0x20;
        }
        wsprintfA((LPSTR)local_524,s___d_s_007c7f40,(uint)*(ushort *)(param_1 + 0x14),&DAT_0080f33a)
        ;
        if (*(UINT *)(local_8 + 5) != 0) {
          pcVar11 = (char *)FUN_006b0140(*(UINT *)(local_8 + 5),DAT_00807618);
          uVar20 = 0xffffffff;
          do {
            pcVar28 = pcVar11;
            if (uVar20 == 0) break;
            uVar20 = uVar20 - 1;
            pcVar28 = pcVar11 + 1;
            cVar2 = *pcVar11;
            pcVar11 = pcVar28;
          } while (cVar2 != '\0');
          uVar20 = ~uVar20;
          pcVar11 = pcVar28 + -uVar20;
          pcVar28 = (char *)&DAT_0080f33a;
          for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
            *(undefined4 *)pcVar28 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar28 = pcVar28 + 4;
          }
          for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
            *pcVar28 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar28 = pcVar28 + 1;
          }
          for (puVar13 = FUN_0072e560(&DAT_0080f33a,'\n'); puVar13 != (uint *)0x0;
              puVar13 = FUN_0072e560(puVar13,'\n')) {
            *(undefined1 *)puVar13 = 0x20;
          }
          wsprintfA((LPSTR)local_524,s__s__s_007c7f38,local_524,&DAT_0080f33a);
        }
        piVar24 = (int *)(local_8 + 9);
        if (*(int *)(local_8 + 9) != 0) {
          uVar10 = FUN_006b0140(0x36c2,DAT_00807618);
          wsprintfA((LPSTR)local_524,s__s__s_007c7f38,local_524,uVar10);
          iVar7 = 5;
          do {
            if (*piVar24 != 0) {
              pHVar34 = DAT_00807618;
              UVar14 = thunk_FUN_00528060((char)*piVar24,(char)((uint)*piVar24 >> 0x10));
              uVar10 = FUN_006b0140(UVar14,pHVar34);
              wsprintfA((LPSTR)local_524,s__s___d_s_007c7f2c,local_524,
                        (*(char *)((int)piVar24 + 5) != '\0') + 1,uVar10);
            }
            piVar24 = (int *)((int)piVar24 + 6);
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        break;
      default:
switchD_00545816_default:
        local_c = 0.0;
      }
    }
    else if ((uVar4 < 2) || (3 < uVar4)) {
      local_c = 0.0;
    }
    else if ((&stack0x00000000 != (undefined1 *)0x524) &&
            (iVar7 = FUN_006b0140(UVar14,DAT_00807618), iVar7 != 0)) {
      UVar14 = *(UINT *)(this_00 + 0x4da);
      goto LAB_005458df;
    }
    if (local_c == 0.0) {
      DAT_00858df8 = local_e0;
      return 0;
    }
    if (*(short *)(param_1 + 0x16) == 3) {
      if ((DAT_0081176c == 0) || (*(void **)(DAT_0081176c + 0x38) == (void *)0x0))
      goto LAB_00545ff6;
      iVar7 = FUN_00711370(*(void **)(DAT_0081176c + 0x38),local_524);
      *(int *)(this_00 + 0x4ca) = iVar7 + 0xc;
      iVar7 = FUN_007113e0(*(void **)(DAT_0081176c + 0x38),local_524);
      iVar7 = iVar7 + 10;
      *(int *)(this_00 + 0x4ce) = iVar7;
      if ((800 < *(int *)(this_00 + 0x4ca)) || (0x96 < iVar7)) goto LAB_00545ff6;
      *(int *)(this_00 + 0x4c2) = *(int *)(this_00 + 0xc5) + *(int *)(this_00 + 0xb1);
      *(int *)(this_00 + 0x4c6) = *(int *)(this_00 + 0xc9) + *(int *)(this_00 + 0xb5);
      iVar17 = (DAT_00806730 - *(int *)(this_00 + 0x4ca)) + -0x28;
      if (iVar17 < *(int *)(this_00 + 0x4c2)) {
        *(int *)(this_00 + 0x4c2) = iVar17;
      }
      if (*(int *)(this_00 + 0x4c2) < 0) {
        *(undefined4 *)(this_00 + 0x4c2) = 0;
      }
      iVar7 = (DAT_00806734 - iVar7) + -0x14;
      if (iVar7 < *(int *)(this_00 + 0xc9) + *(int *)(this_00 + 0xb5)) {
        *(int *)(this_00 + 0x4c6) = iVar7;
      }
      if (*(int *)(this_00 + 0x4c6) < 0) {
        *(undefined4 *)(this_00 + 0x4c6) = 0;
      }
      iVar7 = *(int *)(this_00 + 0x4d2);
      uVar20 = *(uint *)(iVar7 + 0x14);
      if (uVar20 == 0) {
        uVar20 = ((uint)*(ushort *)(iVar7 + 0xe) * *(int *)(iVar7 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                 *(int *)(iVar7 + 8);
      }
      puVar15 = (undefined4 *)FUN_006b4fa0(iVar7);
      for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
        *puVar15 = 0x22222222;
        puVar15 = puVar15 + 1;
      }
      for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
        *(undefined1 *)puVar15 = 0x22;
        puVar15 = (undefined4 *)((int)puVar15 + 1);
      }
      ccFntTy::SetSurf(*(ccFntTy **)(DAT_0081176c + 0x38),*(int *)(this_00 + 0x4d2),0,5,5,
                       *(int *)(this_00 + 0x4ca) + -10,*(int *)(this_00 + 0x4ce) + -10);
      ccFntTy::WrTxt(*(ccFntTy **)(DAT_0081176c + 0x38),local_524,-2,-1,
                     (uint)*(ushort *)(param_1 + 0x14),-1,-1);
      FUN_006b5ee0(*(int *)(this_00 + 0x4d2),0,0,0,*(int *)(this_00 + 0x4ca),
                   *(int *)(this_00 + 0x4ce),0x18,0xd);
      FUN_006b5ee0(*(int *)(this_00 + 0x4d2),0,1,1,*(int *)(this_00 + 0x4ca) + -2,
                   *(int *)(this_00 + 0x4ce) + -2,0x1d,0xd);
      bVar33 = 0x18;
    }
    else {
      if ((DAT_00802a28 == 0) || (*(void **)(DAT_00802a28 + 0x28) == (void *)0x0))
      goto LAB_00545ff6;
      iVar7 = FUN_00711370(*(void **)(DAT_00802a28 + 0x28),local_524);
      *(int *)(this_00 + 0x4ca) = iVar7 + 0xc;
      iVar7 = FUN_007113e0(*(void **)(DAT_00802a28 + 0x28),local_524);
      iVar7 = iVar7 + 10;
      *(int *)(this_00 + 0x4ce) = iVar7;
      if ((800 < *(int *)(this_00 + 0x4ca)) || (0x96 < iVar7)) goto LAB_00545ff6;
      *(int *)(this_00 + 0x4c2) = *(int *)(this_00 + 0xc5) + *(int *)(this_00 + 0xb1);
      *(int *)(this_00 + 0x4c6) = *(int *)(this_00 + 0xc9) + *(int *)(this_00 + 0xb5);
      iVar17 = (DAT_00806730 - *(int *)(this_00 + 0x4ca)) + -0x28;
      if (iVar17 < *(int *)(this_00 + 0x4c2)) {
        *(int *)(this_00 + 0x4c2) = iVar17;
      }
      if (*(int *)(this_00 + 0x4c2) < 0) {
        *(undefined4 *)(this_00 + 0x4c2) = 0;
      }
      iVar7 = (DAT_00806734 - iVar7) + -0x14;
      if (iVar7 < *(int *)(this_00 + 0xc9) + *(int *)(this_00 + 0xb5)) {
        *(int *)(this_00 + 0x4c6) = iVar7;
      }
      if (*(int *)(this_00 + 0x4c6) < 0) {
        *(undefined4 *)(this_00 + 0x4c6) = 0;
      }
      iVar7 = *(int *)(this_00 + 0x4d2);
      uVar20 = *(uint *)(iVar7 + 0x14);
      if (uVar20 == 0) {
        uVar20 = ((uint)*(ushort *)(iVar7 + 0xe) * *(int *)(iVar7 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                 *(int *)(iVar7 + 8);
      }
      puVar15 = (undefined4 *)FUN_006b4fa0(iVar7);
      for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
        *puVar15 = 0x3a3a3a3a;
        puVar15 = puVar15 + 1;
      }
      for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
        *(undefined1 *)puVar15 = 0x3a;
        puVar15 = (undefined4 *)((int)puVar15 + 1);
      }
      ccFntTy::SetSurf(*(ccFntTy **)(DAT_00802a28 + 0x28),*(int *)(this_00 + 0x4d2),0,5,5,
                       *(int *)(this_00 + 0x4ca) + -10,*(int *)(this_00 + 0x4ce) + -10);
      ccFntTy::WrTxt(*(ccFntTy **)(DAT_00802a28 + 0x28),local_524,-2,-1,
                     (uint)*(ushort *)(param_1 + 0x14),-1,-1);
      FUN_006b5ee0(*(int *)(this_00 + 0x4d2),0,0,0,*(int *)(this_00 + 0x4ca),
                   *(int *)(this_00 + 0x4ce),0x6f,0xd);
      FUN_006b5ee0(*(int *)(this_00 + 0x4d2),0,1,1,*(int *)(this_00 + 0x4ca) + -2,
                   *(int *)(this_00 + 0x4ce) + -2,0xb3,0xd);
      bVar33 = 0x6f;
    }
    FUN_006b5ee0(*(int *)(this_00 + 0x4d2),0,3,3,*(int *)(this_00 + 0x4ca) + -6,
                 *(int *)(this_00 + 0x4ce) + -6,bVar33,0xd);
LAB_00545ff6:
    if (800 < (int)*(uint *)(this_00 + 0x4ca)) {
      DAT_00858df8 = local_e0;
      return 0;
    }
    if (0x96 < (int)*(uint *)(this_00 + 0x4ce)) {
      DAT_00858df8 = local_e0;
      return 0;
    }
    FUN_006b2800((int)DAT_008075a8,*(uint *)(this_00 + 0x4d6),*(uint *)(this_00 + 0x4ca),
                 *(uint *)(this_00 + 0x4ce));
    FUN_006b3640(DAT_008075a8,*(uint *)(this_00 + 0x4d6),0xffffffff,*(uint *)(this_00 + 0x4c2),
                 *(uint *)(this_00 + 0x4c6));
    FUN_006b3430(DAT_008075a8,*(uint *)(this_00 + 0x4d6));
    DAT_00858df8 = local_e0;
    return 0;
  }
  if (0xa50c < uVar20) {
    if (0xa708 < uVar20) {
      DAT_00858df8 = local_e0;
      return 0;
    }
    if (0xa6fe < uVar20) {
      local_60 = uVar20 - 0xa6ff;
      puVar15 = &local_64;
      local_5c = 0;
      local_64 = 9;
LAB_00547c2d:
      thunk_FUN_0054edf0((undefined4 *)0x5,puVar15,1,0xffffffff);
      DAT_00858df8 = local_e0;
      return 0;
    }
    uVar23 = (undefined3)((uint)this_00 >> 8);
    uVar18 = (undefined2)(uVar20 - 0xa50d >> 0x10);
    switch(uVar20 - 0xa50d) {
    case 0:
      GCGameState(this_00,1);
      if (DAT_00808784 != 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if ((DAT_00801690 != 0) && (*(short *)(DAT_00801690 + 0x172) != 2)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)(this_00 + 0xc5) < *(int *)(this_00 + 0x4b2)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)(this_00 + 0x4ba) + *(int *)(this_00 + 0x4b2) <= *(int *)(this_00 + 0xc5)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)(this_00 + 0xc9) < *(int *)(this_00 + 0x4b6)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)(this_00 + 0x4be) + *(int *)(this_00 + 0x4b6) <= *(int *)(this_00 + 0xc9)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)(this_00 + 0x4a2) != 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if ((this_00[0xde] != (CursorClassTy)0x0) && (this_00[0xde] != (CursorClassTy)0x3)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)(this_00 + 0x49a) != 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      iVar7 = 0;
      break;
    case 1:
      GCGameState(this_00,1);
      if (DAT_00808784 != 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if ((DAT_00801690 != 0) && (*(short *)(DAT_00801690 + 0x172) != 2)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      iVar7 = *(int *)(this_00 + 0xc5);
      iVar17 = *(int *)(this_00 + 0x4b2);
      if (iVar7 < iVar17) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)(this_00 + 0x4ba) + iVar17 <= iVar7) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      iVar22 = *(int *)(this_00 + 0xc9);
      iVar9 = *(int *)(this_00 + 0x4b6);
      if (iVar22 < iVar9) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)(this_00 + 0x4be) + iVar9 <= iVar22) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)(this_00 + 0x4a2) != 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if ((this_00[0xde] != (CursorClassTy)0x0) && (this_00[0xde] != (CursorClassTy)0x3)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)(this_00 + 0x49a) != 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (DAT_007fa174 == (STAllPlayersC *)0x0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      thunk_FUN_00433e90((uint *)CONCAT31((int3)((uint)iVar17 >> 8),DAT_0080874d),iVar7 - iVar17,
                         iVar22 - iVar9,0);
      DAT_00858df8 = local_e0;
      return 0;
    case 2:
      GCGameState(this_00,1);
      if (DAT_00808784 != 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if ((DAT_00801690 != 0) && (*(short *)(DAT_00801690 + 0x172) != 2)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)(this_00 + 0xc5) < *(int *)(this_00 + 0x4b2)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)(this_00 + 0x4ba) + *(int *)(this_00 + 0x4b2) <= *(int *)(this_00 + 0xc5)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)(this_00 + 0xc9) < *(int *)(this_00 + 0x4b6)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)(this_00 + 0x4be) + *(int *)(this_00 + 0x4b6) <= *(int *)(this_00 + 0xc9)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)(this_00 + 0x4a2) != 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if ((this_00[0xde] != (CursorClassTy)0x0) && (this_00[0xde] != (CursorClassTy)0x3)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)(this_00 + 0x49a) == 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(uint *)(*(int *)(this_00 + 0x49a) + 0x24) != (uint)DAT_0080874d) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      iVar7 = 0;
      break;
    case 3:
      GCGameState(this_00,1);
      if (DAT_00808784 != 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if ((DAT_00801690 != 0) && (*(short *)(DAT_00801690 + 0x172) != 2)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      iVar7 = *(int *)(this_00 + 0xc5);
      local_8 = *(undefined1 **)(this_00 + 0x4b2);
      if (iVar7 < (int)local_8) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if ((int)(local_8 + *(int *)(this_00 + 0x4ba)) <= iVar7) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      iVar17 = *(int *)(this_00 + 0xc9);
      iVar22 = *(int *)(this_00 + 0x4b6);
      if (iVar17 < iVar22) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)(this_00 + 0x4be) + iVar22 <= iVar17) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)(this_00 + 0x4a2) != 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if ((this_00[0xde] != (CursorClassTy)0x0) && (this_00[0xde] != (CursorClassTy)0x3)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)(this_00 + 0x49a) == 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(uint *)(*(int *)(this_00 + 0x49a) + 0x24) != (uint)DAT_0080874d) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (DAT_007fa174 == (STAllPlayersC *)0x0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      thunk_FUN_00433e90((uint *)CONCAT31(uVar23,DAT_0080874d),iVar7 - (int)local_8,iVar17 - iVar22,
                         0);
      DAT_00858df8 = local_e0;
      return 0;
    case 4:
      GCGameState(this_00,1);
      if (DAT_00808784 != 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if ((DAT_00801690 != 0) && (*(short *)(DAT_00801690 + 0x172) != 2)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      iVar7 = *(int *)(this_00 + 0xc5);
      local_8 = *(undefined1 **)(this_00 + 0x4b2);
      if (iVar7 < (int)local_8) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if ((int)(local_8 + *(int *)(this_00 + 0x4ba)) <= iVar7) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      iVar17 = *(int *)(this_00 + 0xc9);
      iVar22 = *(int *)(this_00 + 0x4b6);
      if (iVar17 < iVar22) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)(this_00 + 0x4be) + iVar22 <= iVar17) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)(this_00 + 0x4a2) != 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if ((this_00[0xde] != (CursorClassTy)0x0) && (this_00[0xde] != (CursorClassTy)0x3)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)(this_00 + 0x49a) == 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(uint *)(*(int *)(this_00 + 0x49a) + 0x24) != (uint)DAT_0080874d) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (DAT_007fa174 == (STAllPlayersC *)0x0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      thunk_FUN_00433e90((uint *)CONCAT31(uVar23,DAT_0080874d),iVar7 - (int)local_8,iVar17 - iVar22,
                         1);
      DAT_00858df8 = local_e0;
      return 0;
    case 5:
      GCGameState(this_00,1);
      if (DAT_00808784 != 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if ((DAT_00801690 != 0) && (*(short *)(DAT_00801690 + 0x172) != 2)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      iVar7 = *(int *)(this_00 + 0xc5);
      iVar17 = *(int *)(this_00 + 0x4b2);
      if (iVar7 < iVar17) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)(this_00 + 0x4ba) + iVar17 <= iVar7) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      iVar22 = *(int *)(this_00 + 0xc9);
      iVar9 = *(int *)(this_00 + 0x4b6);
      if (iVar22 < iVar9) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)(this_00 + 0x4be) + iVar9 <= iVar22) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)(this_00 + 0x4a2) != 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if ((this_00[0xde] != (CursorClassTy)0x0) && (this_00[0xde] != (CursorClassTy)0x3)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)(this_00 + 0x49a) == 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(uint *)(*(int *)(this_00 + 0x49a) + 0x24) != (uint)DAT_0080874d) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (DAT_007fa174 == (STAllPlayersC *)0x0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      thunk_FUN_0044b5f0(7,iVar7 - iVar17,iVar22 - iVar9);
      DAT_00858df8 = local_e0;
      return 0;
    case 6:
      GCGameState(this_00,1);
      if (DAT_00808784 != 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if ((DAT_00801690 != 0) && (*(short *)(DAT_00801690 + 0x172) != 2)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      iVar7 = *(int *)(this_00 + 0xc5);
      iVar17 = *(int *)(this_00 + 0x4b2);
      if (iVar7 < iVar17) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)(this_00 + 0x4ba) + iVar17 <= iVar7) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      iVar22 = *(int *)(this_00 + 0xc9);
      iVar9 = *(int *)(this_00 + 0x4b6);
      if (iVar22 < iVar9) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)(this_00 + 0x4be) + iVar9 <= iVar22) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)(this_00 + 0x4a2) != 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if ((this_00[0xde] != (CursorClassTy)0x0) && (this_00[0xde] != (CursorClassTy)0x3)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)(this_00 + 0x49a) == 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(uint *)(*(int *)(this_00 + 0x49a) + 0x24) != (uint)DAT_0080874d) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (DAT_007fa174 == (STAllPlayersC *)0x0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      thunk_FUN_0044b5f0(6,iVar7 - iVar17,iVar22 - iVar9);
      DAT_00858df8 = local_e0;
      return 0;
    case 7:
      GCGameState(this_00,1);
      if (DAT_00808784 != 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if ((DAT_00801690 != 0) && (*(short *)(DAT_00801690 + 0x172) != 2)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)(this_00 + 0xc5) < *(int *)(this_00 + 0x4b2)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)(this_00 + 0x4ba) + *(int *)(this_00 + 0x4b2) <= *(int *)(this_00 + 0xc5)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)(this_00 + 0xc9) < *(int *)(this_00 + 0x4b6)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)(this_00 + 0x4be) + *(int *)(this_00 + 0x4b6) <= *(int *)(this_00 + 0xc9)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)(this_00 + 0x4a2) != 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if ((this_00[0xde] != (CursorClassTy)0x0) && (this_00[0xde] != (CursorClassTy)0x3)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)(this_00 + 0x49a) == 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(uint *)(*(int *)(this_00 + 0x49a) + 0x24) == (uint)DAT_0080874d) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      iVar7 = 0;
      break;
    case 8:
      GCGameState(this_00,1);
      if (DAT_00808784 != 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if ((DAT_00801690 != 0) && (*(short *)(DAT_00801690 + 0x172) != 2)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      iVar7 = *(int *)(this_00 + 0xc5);
      local_8 = *(undefined1 **)(this_00 + 0x4b2);
      if (iVar7 < (int)local_8) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if ((int)(local_8 + *(int *)(this_00 + 0x4ba)) <= iVar7) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      iVar17 = *(int *)(this_00 + 0xc9);
      iVar22 = *(int *)(this_00 + 0x4b6);
      if (iVar17 < iVar22) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)(this_00 + 0x4be) + iVar22 <= iVar17) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)(this_00 + 0x4a2) != 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if ((this_00[0xde] != (CursorClassTy)0x0) && (this_00[0xde] != (CursorClassTy)0x3)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)(this_00 + 0x49a) == 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(uint *)(*(int *)(this_00 + 0x49a) + 0x24) == (uint)DAT_0080874d) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      thunk_FUN_00433e90((uint *)(uint)DAT_0080874d,iVar7 - (int)local_8,iVar17 - iVar22,0);
      DAT_00858df8 = local_e0;
      return 0;
    case 9:
      if (DAT_0080734c == '\0') {
        DAT_00858df8 = local_e0;
        return 0;
      }
      this_00[0xd2] = (CursorClassTy)(this_00[0xd2] == (CursorClassTy)0x0);
      DAT_00858df8 = local_e0;
      return 0;
    case 10:
      if (DAT_00801688 == (CPanelTy *)0x0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      thunk_FUN_004fad60(DAT_00801688,CONCAT22(uVar18,*(undefined2 *)(this_00 + 0xc5)),
                         (uint)*(ushort *)(this_00 + 0xc9));
      DAT_00858df8 = local_e0;
      return 0;
    case 0xb:
      if (DAT_00801688 == (CPanelTy *)0x0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      thunk_FUN_004fae70((int)DAT_00801688);
      DAT_00858df8 = local_e0;
      return 0;
    case 0xc:
      if (DAT_00801688 == (CPanelTy *)0x0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      thunk_FUN_004fae90(DAT_00801688,CONCAT22(uVar18,*(undefined2 *)(this_00 + 0xc5)),
                         (uint)*(ushort *)(this_00 + 0xc9));
      DAT_00858df8 = local_e0;
      return 0;
    case 0xd:
      if (DAT_007fa174 == (STAllPlayersC *)0x0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      thunk_FUN_0044b5f0(4,0xffffffff,0xffffffff);
      DAT_00858df8 = local_e0;
      return 0;
    default:
      DAT_00858df8 = local_e0;
      return 0;
    }
    goto LAB_005470b2;
  }
  if (uVar20 == 0xa50c) {
    if (DAT_007fa174 == (STAllPlayersC *)0x0) {
      DAT_00858df8 = local_e0;
      return 0;
    }
    thunk_FUN_0044b5f0(5,0xffffffff,0xffffffff);
    DAT_00858df8 = local_e0;
    return 0;
  }
  if (0xa504 < uVar20) {
    switch(uVar20) {
    case 0xa505:
    case 0xa507:
      goto switchD_00546ac9_caseD_a505;
    case 0xa506:
      goto switchD_00546ac9_caseD_a506;
    case 0xa508:
      if (DAT_007fa174 == (STAllPlayersC *)0x0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      thunk_FUN_0044b5f0(0,0xffffffff,0xffffffff);
      DAT_00858df8 = local_e0;
      return 0;
    case 0xa509:
      if (DAT_007fa174 == (STAllPlayersC *)0x0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      thunk_FUN_0044b5f0(2,0xffffffff,0xffffffff);
      DAT_00858df8 = local_e0;
      return 0;
    case 0xa50a:
      if (DAT_007fa174 == (STAllPlayersC *)0x0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      thunk_FUN_0044b5f0(1,0xffffffff,0xffffffff);
      DAT_00858df8 = local_e0;
      return 0;
    case 0xa50b:
      if (DAT_007fa174 == (STAllPlayersC *)0x0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      thunk_FUN_0044b5f0(3,0xffffffff,0xffffffff);
      DAT_00858df8 = local_e0;
      return 0;
    default:
      DAT_00858df8 = local_e0;
      return 0;
    }
  }
  if (uVar20 == 0xa504) {
switchD_00546ac9_caseD_a506:
    GCGameState(this_00,1);
    if (DAT_00808784 != 0) {
      DAT_00858df8 = local_e0;
      return 0;
    }
    if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      DAT_00858df8 = local_e0;
      return 0;
    }
    if ((DAT_00801690 != 0) && (*(short *)(DAT_00801690 + 0x172) != 2)) {
      DAT_00858df8 = local_e0;
      return 0;
    }
    if (*(int *)(this_00 + 0xc5) < *(int *)(this_00 + 0x4b2)) {
      DAT_00858df8 = local_e0;
      return 0;
    }
    if (*(int *)(this_00 + 0x4ba) + *(int *)(this_00 + 0x4b2) <= *(int *)(this_00 + 0xc5)) {
      DAT_00858df8 = local_e0;
      return 0;
    }
    if (*(int *)(this_00 + 0xc9) < *(int *)(this_00 + 0x4b6)) {
      DAT_00858df8 = local_e0;
      return 0;
    }
    if (*(int *)(this_00 + 0x4be) + *(int *)(this_00 + 0x4b6) <= *(int *)(this_00 + 0xc9)) {
      DAT_00858df8 = local_e0;
      return 0;
    }
    if (*(int *)(param_1 + 0x10) != 0xa501) {
      if (*(int *)(this_00 + 0x4a2) != 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)(this_00 + 0x49a) != 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      this_00[0xde] = (CursorClassTy)0x1;
      *(int *)(this_00 + 0xdf) = *(int *)(this_00 + 0xc5) - *(int *)(this_00 + 0x4b2);
      *(int *)(this_00 + 0xe3) = *(int *)(this_00 + 0xc9) - *(int *)(this_00 + 0x4b6);
      FUN_006e1c20(DAT_00807598,*(float *)(this_00 + 0xdf),
                   *(int *)(this_00 + 0xc9) - *(int *)(this_00 + 0x4b6),0.0,
                   (float *)(this_00 + 0xef),(float *)(this_00 + 0xf3));
      *(int *)(this_00 + 0x10f) = local_1c;
      DAT_00858df8 = local_e0;
      return 0;
    }
    iVar7 = thunk_FUN_00548b90((int)this_00);
    if (iVar7 != 0) {
      this_00[0xde] = (CursorClassTy)0x1;
      *(int *)(this_00 + 0xdf) = *(int *)(this_00 + 0xc5) - *(int *)(this_00 + 0x4b2);
      *(int *)(this_00 + 0xe3) = *(int *)(this_00 + 0xc9) - *(int *)(this_00 + 0x4b6);
      FUN_006e1c20(DAT_00807598,*(float *)(this_00 + 0xdf),
                   *(int *)(this_00 + 0xc9) - *(int *)(this_00 + 0x4b6),0.0,
                   (float *)(this_00 + 0xef),(float *)(this_00 + 0xf3));
      *(int *)(this_00 + 0x10f) = local_1c;
      DAT_00858df8 = local_e0;
      return 0;
    }
    if (*(int *)(this_00 + 0x4a2) != 0x4e) {
      DAT_00858df8 = local_e0;
      return 0;
    }
    if (DAT_00807598 == (void *)0x0) {
      DAT_00858df8 = local_e0;
      return 0;
    }
    iVar7 = FUN_006e1dd0(DAT_00807598,*(int *)(this_00 + 0xc5) - *(int *)(this_00 + 0x4b2),
                         *(int *)(this_00 + 0xc9) - *(int *)(this_00 + 0x4b6),
                         (float *)(this_00 + 0xff),(float *)(this_00 + 0x103),
                         (float *)(this_00 + 0x107));
    if (iVar7 == 0) {
      DAT_00858df8 = local_e0;
      return 0;
    }
    pCVar1 = this_00 + 0x10b;
    this_00[0xde] = (CursorClassTy)0x5;
    if ((-1 < (int)*(uint *)(this_00 + 0x10b)) && (DAT_00807598 != (void *)0x0)) {
      FUN_006e8ba0(DAT_00807598,*(uint *)(this_00 + 0x10b));
    }
    FUN_006e89b0(DAT_00807598,(int *)pCVar1,&DAT_007c7cd8,8,2,0x45,*(undefined4 *)(this_00 + 0xff),
                 *(undefined4 *)(this_00 + 0x103),*(float *)(this_00 + 0x107),0,1,1);
    FUN_006eaaa0(DAT_00807598,*(uint *)pCVar1,0);
    FUN_006ea460(DAT_00807598,*(uint *)pCVar1,-1);
    if (*(int *)(this_00 + 0xa9) != 0) {
      if (*(uint *)(this_00 + 0x1c) == 0xffffffff) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      FUN_006b3af0(*(int **)(this_00 + 0x60),*(uint *)(this_00 + 0x1c));
      DAT_00858df8 = local_e0;
      return 0;
    }
    FUN_006b8b10(*(int **)(this_00 + 0xad));
    DAT_00858df8 = local_e0;
    return 0;
  }
  if (uVar20 < 0xa501) {
    if (uVar20 == 0xa500) {
      *(undefined4 *)(this_00 + 0x4ae) = 0;
      DAT_00858df8 = local_e0;
      return 0;
    }
    if (0xa330 < uVar20) {
      if (uVar20 != 0xa4ff) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      *(undefined4 *)(this_00 + 0x4ae) = 1;
      DAT_00858df8 = local_e0;
      return 0;
    }
    if (uVar20 == 0xa330) {
      if (DAT_00802a38 == 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      thunk_FUN_00550bb0(DAT_00802a38);
      DAT_00858df8 = local_e0;
      return 0;
    }
    if (uVar20 < 0xa31d) {
      DAT_00858df8 = local_e0;
      return 0;
    }
    if (uVar20 < 0xa327) {
      if (DAT_007fa174 == (STAllPlayersC *)0x0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      STAllPlayersC::RestoreTmp(DAT_007fa174,uVar20 - 0xa31d);
      DAT_00858df8 = local_e0;
      return 0;
    }
    if (uVar20 != 0xa32f) {
      DAT_00858df8 = local_e0;
      return 0;
    }
    if (DAT_008016d8 == (PopUpTy *)0x0) {
      DAT_00858df8 = local_e0;
      return 0;
    }
    PopUpTy::Clear(DAT_008016d8);
    DAT_00858df8 = local_e0;
    return 0;
  }
  if (uVar20 == 0xa501) goto switchD_00546ac9_caseD_a506;
  if (uVar20 != 0xa502) {
    if (uVar20 != 0xa503) {
      DAT_00858df8 = local_e0;
      return 0;
    }
    *(undefined4 *)(this_00 + 0x4a6) = 1;
    this_00[0x4de] = (CursorClassTy)0x0;
    if (DAT_00801688 == (CPanelTy *)0x0) {
      DAT_00858df8 = local_e0;
      return 0;
    }
    thunk_FUN_004fad20(DAT_00801688);
    DAT_00858df8 = local_e0;
    return 0;
  }
switchD_00546ac9_caseD_a505:
  if ((*(int *)(this_00 + 0x4b2) <= *(int *)(this_00 + 0xc5)) &&
     (*(int *)(this_00 + 0xc5) < *(int *)(this_00 + 0x4ba) + *(int *)(this_00 + 0x4b2))) {
    if ((*(int *)(this_00 + 0x4b6) <= *(int *)(this_00 + 0xc9)) &&
       (*(int *)(this_00 + 0xc9) < *(int *)(this_00 + 0x4be) + *(int *)(this_00 + 0x4b6))) {
      switch(this_00[0xde]) {
      case (CursorClassTy)0x1:
        this_00[0xde] = (CursorClassTy)0x3;
      case (CursorClassTy)0x0:
        if (*(int *)(param_1 + 0x10) != 0xa502) {
          DAT_00858df8 = local_e0;
          return 0;
        }
        if (DAT_00808784 != 0) {
          DAT_00858df8 = local_e0;
          return 0;
        }
        if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          DAT_00858df8 = local_e0;
          return 0;
        }
        if ((DAT_00801690 != 0) && (*(short *)(DAT_00801690 + 0x172) != 2)) {
          DAT_00858df8 = local_e0;
          return 0;
        }
        if ((*(int *)(this_00 + 0x4a2) == 0) && (this_00[0x4de] == (CursorClassTy)0x0)) {
          DAT_00858df8 = local_e0;
          return 0;
        }
        TakeCmdToRun(this_00,0);
        DAT_00858df8 = local_e0;
        return 0;
      case (CursorClassTy)0x2:
        if (DAT_00808784 != 0) {
          DAT_00858df8 = local_e0;
          return 0;
        }
        if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          DAT_00858df8 = local_e0;
          return 0;
        }
        if ((DAT_00801690 != 0) && (*(short *)(DAT_00801690 + 0x172) != 2)) {
          DAT_00858df8 = local_e0;
          return 0;
        }
        if (uVar20 != 0xa502) {
          if (*(int *)(this_00 + 0x4a2) == 0) {
            STAllPlayersC::FramePick
                      (DAT_007fa174,
                       CONCAT31((int3)((uint)*(int *)(this_00 + 0xe7) >> 8),DAT_0080874d),
                       *(int *)(this_00 + 0xdf),*(int *)(this_00 + 0xe3),*(int *)(this_00 + 0xe7),
                       *(int *)(this_00 + 0xeb),(uint)(uVar20 == 0xa507));
          }
          this_00[0xde] = (CursorClassTy)0x4;
          DAT_00858df8 = local_e0;
          return 0;
        }
        if (*(int *)(this_00 + 0x4a2) == 0) {
          DAT_00858df8 = local_e0;
          return 0;
        }
        TakeCmdToRun(this_00,1);
        goto LAB_00546f1c;
      default:
        DAT_00858df8 = local_e0;
        return 0;
      case (CursorClassTy)0x5:
        goto switchD_00546e07_caseD_5;
      }
    }
  }
  CVar3 = this_00[0xde];
  if (CVar3 == (CursorClassTy)0x1) {
    this_00[0xde] = (CursorClassTy)0x3;
    DAT_00858df8 = local_e0;
    return 0;
  }
  if (CVar3 == (CursorClassTy)0x2) {
LAB_00546f1c:
    this_00[0xde] = (CursorClassTy)0x4;
    DAT_00858df8 = local_e0;
    return 0;
  }
  if (CVar3 != (CursorClassTy)0x5) {
    DAT_00858df8 = local_e0;
    return 0;
  }
  if (uVar20 != 0xa502) {
    DAT_00858df8 = local_e0;
    return 0;
  }
  if (*(int *)(this_00 + 0xa9) == 0) {
    FUN_006b8a60(*(byte **)(this_00 + 0xad));
  }
  else if (*(uint *)(this_00 + 0x1c) != 0xffffffff) {
    FUN_006b34d0(*(uint **)(this_00 + 0x60),*(uint *)(this_00 + 0x1c),0xfffffffe,
                 *(uint *)(this_00 + 0x34),*(uint *)(this_00 + 0x38));
  }
  DrawSprite(this_00,*(int *)(this_00 + 0xc5),*(int *)(this_00 + 0xc9));
  if (DAT_00807598 != (void *)0x0) {
    uVar20 = *(uint *)(this_00 + 0x10b);
LAB_0054708b:
    FUN_006e8ba0(DAT_00807598,uVar20);
  }
LAB_00547090:
  this_00[0xde] = (CursorClassTy)0x0;
  *(undefined4 *)(this_00 + 0x10b) = 0xffffffff;
  if (*(int *)(this_00 + 0x4a2) != 0x4e) {
    DAT_00858df8 = local_e0;
    return 0;
  }
  iVar7 = 1;
LAB_005470b2:
  TakeCmdToRun(this_00,iVar7);
  DAT_00858df8 = local_e0;
  return 0;
switchD_00546e07_caseD_5:
  if (uVar20 != 0xa502) {
    DAT_00858df8 = local_e0;
    return 0;
  }
  if (*(int *)(this_00 + 0xa9) == 0) {
    FUN_006b8a60(*(byte **)(this_00 + 0xad));
  }
  else if (*(uint *)(this_00 + 0x1c) != 0xffffffff) {
    FUN_006b34d0(*(uint **)(this_00 + 0x60),*(uint *)(this_00 + 0x1c),0xfffffffe,
                 *(uint *)(this_00 + 0x34),*(uint *)(this_00 + 0x38));
  }
  DrawSprite(this_00,*(int *)(this_00 + 0xc5),*(int *)(this_00 + 0xc9));
  if (DAT_00807598 != (void *)0x0) {
    uVar20 = *(uint *)(this_00 + 0x10b);
    goto LAB_0054708b;
  }
  goto LAB_00547090;
switchD_005468af_caseD_a2ff:
  if (DAT_007fb2a0 == (void *)0x0) {
    DAT_00858df8 = local_e0;
    return 0;
  }
  thunk_FUN_004ab270(uVar20 - 0xa2ff);
  DAT_00858df8 = local_e0;
  return 0;
switchD_00546590_caseD_a125:
  if (DAT_00808783 != '\x03') {
    DAT_00858df8 = local_e0;
    return 0;
  }
  thunk_FUN_0054b540(this_00);
  if (DAT_0080169c == (IntercomPanelTy *)0x0) {
    DAT_00858df8 = local_e0;
    return 0;
  }
  IntercomPanelTy::SwitchIntercomPanel(DAT_0080169c,1);
  DAT_00858df8 = local_e0;
  return 0;
}

