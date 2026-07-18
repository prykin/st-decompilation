
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_005449b0(void *this,int param_1)

{
  int *piVar1;
  char cVar2;
  ushort uVar3;
  undefined1 *puVar4;
  void *this_00;
  bool bVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined4 uVar9;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  char *pcVar10;
  undefined4 uVar11;
  uint *puVar12;
  UINT UVar13;
  undefined4 *puVar14;
  undefined3 extraout_var_04;
  ushort *puVar15;
  undefined2 uVar17;
  int iVar16;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  undefined3 uVar22;
  undefined4 unaff_ESI;
  int *piVar23;
  void *unaff_EDI;
  code *pcVar24;
  char *pcVar25;
  char *pcVar26;
  undefined4 *puVar27;
  longlong lVar28;
  int iVar29;
  int iVar30;
  byte bVar31;
  HINSTANCE pHVar32;
  uint local_524 [256];
  undefined4 **local_124;
  undefined4 local_120 [16];
  undefined4 **local_e0;
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
  void *local_44;
  undefined4 local_40 [6];
  undefined2 local_28;
  undefined2 local_26;
  int local_1c;
  undefined4 *local_14;
  char local_d;
  float local_c;
  undefined1 *local_8;
  
  local_44 = this;
  local_1c = FUN_006e51b0(*(int *)((int)this + 0x10));
  local_e0 = DAT_00858df8;
  DAT_00858df8 = &local_e0;
  iVar6 = __setjmp3(local_dc,0,unaff_EDI,unaff_ESI);
  this_00 = local_44;
  if (iVar6 != 0) {
    DAT_00858df8 = local_e0;
    iVar16 = FUN_006ad4d0(s_E____titans_Andrey_to_cursor_cpp_007c7d60,0x4d6,0,iVar6,&DAT_007a4ccc);
    if (iVar16 == 0) {
      FUN_006a5e40(iVar6,0,0x7c7d60,0x4d7);
      return 0xffff;
    }
    pcVar24 = (code *)swi(3);
    uVar9 = (*pcVar24)();
    return uVar9;
  }
  FUN_006e5fd0();
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 0xa110:
    *(undefined1 *)((int)this_00 + 0xd4) = 1;
    break;
  case 0xa111:
    *(undefined1 *)((int)this_00 + 0xd4) = 0;
    break;
  case 0xa112:
    *(undefined1 *)((int)this_00 + 0xd3) = 1;
    break;
  case 0xa113:
    *(undefined1 *)((int)this_00 + 0xd3) = 0;
    break;
  case 0xa114:
    *(undefined1 *)((int)this_00 + 0xd5) = 1;
    break;
  case 0xa115:
    *(undefined1 *)((int)this_00 + 0xd5) = 0;
  }
  if (((*(char *)((int)this_00 + 0x493) != '\x02') && (0xa0ff < *(uint *)(param_1 + 0x10))) &&
     (*(uint *)(param_1 + 0x10) < 0xb100)) {
    DAT_00858df8 = local_e0;
    return 0;
  }
  if ((((DAT_00808784 != 0) || (DAT_0080878c != 0)) || (DAT_00808790 != 0)) &&
     ((0xa10e < *(uint *)(param_1 + 0x10) && (*(uint *)(param_1 + 0x10) < 0xb100)))) {
    DAT_00858df8 = local_e0;
    return 0;
  }
  uVar19 = *(uint *)(param_1 + 0x10);
  if (uVar19 < 0x61) {
    if (uVar19 == 0x60) {
      *(uint *)((int)this_00 + 0xc9) = (uint)*(ushort *)(param_1 + 0x1a);
      uVar3 = *(ushort *)(param_1 + 0x18);
      *(uint *)((int)this_00 + 0xc5) = (uint)uVar3;
      thunk_FUN_00543c90(this_00,(uint)uVar3,*(int *)((int)this_00 + 0xc9));
      if ((*(int *)((int)this_00 + 0x4b2) <= *(int *)((int)this_00 + 0xc5)) &&
         (*(int *)((int)this_00 + 0xc5) <
          *(int *)((int)this_00 + 0x4ba) + *(int *)((int)this_00 + 0x4b2))) {
        if ((*(int *)((int)this_00 + 0x4b6) <= *(int *)((int)this_00 + 0xc9)) &&
           (*(int *)((int)this_00 + 0xc9) <
            *(int *)((int)this_00 + 0x4be) + *(int *)((int)this_00 + 0x4b6))) {
          uVar9 = 1;
          goto LAB_0054532f;
        }
      }
      uVar9 = 0;
LAB_0054532f:
      *(undefined4 *)((int)this_00 + 0x496) = uVar9;
      bVar5 = thunk_FUN_00544990((int)this_00);
      if (CONCAT31(extraout_var_01,bVar5) == 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (DAT_007fb2ac == (void *)0x0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if ((*(int *)((int)this_00 + 0x496) != 0) && (*(int *)((int)this_00 + 0x4a2) == 0xe)) {
        if (*(int *)((int)DAT_007fb2ac + 0x18) != 0) {
          thunk_FUN_004c6210(DAT_007fb2ac,*(undefined4 *)((int)this_00 + 0x4aa),0);
        }
        thunk_FUN_004c6440(DAT_007fb2ac,
                           (float)(*(int *)((int)this_00 + 0xc5) - *(int *)((int)this_00 + 0x4b2)),
                           *(int *)((int)this_00 + 0xc9) - *(int *)((int)this_00 + 0x4b6),(int *)0x0
                           ,(int *)0x0,(int *)0x0);
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
    switch(uVar19) {
    case 0:
      switch(*(undefined1 *)((int)this_00 + 0xde)) {
      case 0:
        bVar5 = thunk_FUN_00544990((int)this_00);
        if (CONCAT31(extraout_var_00,bVar5) == 0) break;
        if (-1 < (int)*(uint *)((int)this_00 + 0x10b)) {
          FUN_006b3bb0(DAT_008075a8,*(uint *)((int)this_00 + 0x10b));
          *(undefined4 *)((int)this_00 + 0x10b) = 0xffffffff;
        }
        switch(*(undefined4 *)((int)this_00 + 0xcd)) {
        case 0:
          thunk_FUN_0054b9a0(this_00,0,0,DAT_00806730,DAT_00806734,*(int *)((int)this_00 + 0xc5),
                             *(int *)((int)this_00 + 0xc9),1);
          break;
        case 1:
          iVar6 = 100;
          iVar16 = 0;
          goto LAB_005450ca;
        case 2:
          thunk_FUN_0054b9a0(this_00,0,0,DAT_00806730,DAT_00806734,DAT_00806730 + -1,100,0);
          break;
        case 3:
          thunk_FUN_0054b9a0(this_00,0,0,DAT_00806730,DAT_00806734,100,0,0);
          break;
        case 4:
          iVar6 = DAT_00806734 + -1;
          iVar16 = 100;
LAB_005450ca:
          thunk_FUN_0054b9a0(this_00,0,0,DAT_00806730,DAT_00806734,iVar16,iVar6,0);
        }
        break;
      case 1:
        if (DAT_00807598 != (void *)0x0) {
          local_7c = *(undefined4 *)((int)this_00 + 0xef);
          local_78 = *(undefined4 *)((int)this_00 + 0xf3);
          local_74 = 0;
          FUN_006e25d0(DAT_00807598,&local_9c);
          *(int *)((int)this_00 + 0xdf) = local_9c >> 0x10;
          *(int *)((int)this_00 + 0xe3) = local_98 >> 0x10;
        }
        uVar19 = (*(int *)((int)this_00 + 0xc5) - *(int *)((int)this_00 + 0x4b2)) -
                 *(int *)((int)this_00 + 0xdf);
        *(uint *)((int)this_00 + 0xe7) = uVar19;
        uVar20 = (*(int *)((int)this_00 + 0xc9) - *(int *)((int)this_00 + 0x4b6)) -
                 *(int *)((int)this_00 + 0xe3);
        *(uint *)((int)this_00 + 0xeb) = uVar20;
        if ((5 < (int)((uVar19 ^ (int)uVar19 >> 0x1f) - ((int)uVar19 >> 0x1f))) ||
           (5 < (int)((uVar20 ^ (int)uVar20 >> 0x1f) - ((int)uVar20 >> 0x1f)))) {
          puVar12 = (uint *)((int)this_00 + 0x10b);
          *(undefined1 *)((int)this_00 + 0xde) = 2;
          if (-1 < (int)*(uint *)((int)this_00 + 0x10b)) {
            FUN_006b3bb0(DAT_008075a8,*(uint *)((int)this_00 + 0x10b));
          }
          iVar6 = 0x20;
          puVar7 = (uint *)((int)this_00 + 0x113U);
          do {
            iVar6 = iVar6 + -1;
            *puVar7 = (-(uint)(*(int *)((int)this_00 + 0x4a2) != 0) & 0x49) + 0x45 | 0x1000000;
            puVar7 = puVar7 + 7;
          } while (iVar6 != 0);
          FUN_006b96f0(DAT_008075a8,puVar12,10,0x20,(int)this_00 + 0x113U);
          FUN_006b1b10((int)DAT_008075a8,*puVar12,2);
          FUN_006b3640(DAT_008075a8,*puVar12,0xffffffff,*(uint *)((int)this_00 + 0xdf),
                       *(uint *)((int)this_00 + 0xe3));
          FUN_006b2800((int)DAT_008075a8,*puVar12,*(uint *)((int)this_00 + 0xe7),
                       *(uint *)((int)this_00 + 0xeb));
          iVar6 = FUN_00405687((int)this_00);
          if (iVar6 == 0) {
            thunk_FUN_0054bf40(0,*(undefined4 *)((int)this_00 + 0x34),
                               *(undefined4 *)((int)this_00 + 0x38));
          }
        }
        break;
      case 2:
        local_8 = (undefined1 *)0xfffffffe;
        local_c = 1.4013e-45;
        switch(*(undefined4 *)((int)this_00 + 0xcd)) {
        case 1:
          iVar8 = *(int *)((int)this_00 + 0x4b6);
          iVar21 = *(int *)((int)this_00 + 0x4b2);
          iVar6 = iVar8 + 100;
          iVar16 = iVar21;
          goto LAB_00544d9b;
        case 2:
          iVar8 = *(int *)((int)this_00 + 0x4b6);
          iVar29 = *(int *)((int)this_00 + 0x4ba);
          iVar21 = *(int *)((int)this_00 + 0x4b2);
          iVar6 = iVar8 + 100;
          iVar16 = iVar29 + -1 + iVar21;
          iVar30 = *(int *)((int)this_00 + 0x4be);
          break;
        case 3:
          iVar21 = *(int *)((int)this_00 + 0x4b2);
          iVar8 = *(int *)((int)this_00 + 0x4b6);
          iVar16 = iVar21 + 100;
          iVar6 = iVar8;
LAB_00544d9b:
          iVar30 = *(int *)((int)this_00 + 0x4be);
          iVar29 = *(int *)((int)this_00 + 0x4ba);
          break;
        case 4:
          iVar30 = *(int *)((int)this_00 + 0x4be);
          iVar8 = *(int *)((int)this_00 + 0x4b6);
          iVar21 = *(int *)((int)this_00 + 0x4b2);
          iVar6 = iVar30 + -1 + iVar8;
          iVar16 = iVar21 + 100;
          iVar29 = *(int *)((int)this_00 + 0x4ba);
          break;
        default:
          goto switchD_00544d44_default;
        }
        thunk_FUN_0054b9a0(this_00,iVar21,iVar8,iVar29,iVar30,iVar16,iVar6,0);
switchD_00544d44_default:
        local_70 = *(undefined4 *)((int)this_00 + 0xef);
        local_6c = *(undefined4 *)((int)this_00 + 0xf3);
        local_68 = 0;
        FUN_006e25d0(DAT_00807598,&local_8c);
        *(int *)((int)this_00 + 0xe3) = local_88 >> 0x10;
        *(int *)((int)this_00 + 0xdf) = local_8c >> 0x10;
        if (*(int *)((int)this_00 + 0xcd) == 0) {
          piVar23 = (int *)((int)this_00 + 0xc9);
          piVar1 = (int *)((int)this_00 + 0xc5);
          bVar5 = thunk_FUN_0054bdf0(*(int *)((int)this_00 + 0x4b2),*(int *)((int)this_00 + 0x4b6),
                                     *(int *)((int)this_00 + 0x4ba),*(int *)((int)this_00 + 0x4be),
                                     piVar1,piVar23);
          if (CONCAT31(extraout_var,bVar5) != 0) {
            local_28 = *(undefined2 *)piVar1;
            local_26 = *(undefined2 *)piVar23;
            local_40[4] = 0x16;
            FUN_006e6000(this_00,3,1,local_40);
          }
          iVar6 = FUN_00405687((int)this_00);
          iVar6 = thunk_FUN_0054b9a0(this_00,*(int *)((int)this_00 + 0x4b2),
                                     *(int *)((int)this_00 + 0x4b6),*(int *)((int)this_00 + 0x4ba),
                                     *(int *)((int)this_00 + 0x4be),*piVar1,*piVar23,
                                     (uint)(iVar6 == 0));
          if (iVar6 != 0) {
            FUN_006e1440(DAT_00807598);
            iVar6 = *piVar23;
            uVar19 = (*piVar1 - *(int *)((int)this_00 + 0xdf)) - *(int *)((int)this_00 + 0x4b2);
            *(uint *)((int)this_00 + 0xe7) = uVar19;
            goto LAB_00544e8f;
          }
          local_14 = *(undefined4 **)((int)this_00 + 0xeb);
          uVar20 = *(uint *)((int)this_00 + 0xe7);
          uVar19 = (*piVar1 - *(int *)((int)this_00 + 0xdf)) - *(int *)((int)this_00 + 0x4b2);
          uVar18 = (*piVar23 - *(int *)((int)this_00 + 0x4b6)) - *(int *)((int)this_00 + 0xe3);
          *(uint *)((int)this_00 + 0xe7) = uVar19;
          *(uint *)((int)this_00 + 0xeb) = uVar18;
          if ((uVar20 == uVar19) && (local_14 == (undefined4 *)uVar18)) {
            local_c = 0.0;
          }
        }
        else {
          FUN_006e1440(DAT_00807598);
          iVar6 = *(int *)((int)this_00 + 0xc9);
          uVar19 = (*(int *)((int)this_00 + 0xc5) - *(int *)((int)this_00 + 0x4b2)) -
                   *(int *)((int)this_00 + 0xdf);
          *(uint *)((int)this_00 + 0xe7) = uVar19;
LAB_00544e8f:
          uVar18 = (iVar6 - *(int *)((int)this_00 + 0x4b6)) - *(int *)((int)this_00 + 0xe3);
          *(uint *)((int)this_00 + 0xeb) = uVar18;
        }
        if (0x31 < (uint)(local_1c - *(int *)((int)this_00 + 0x10f))) {
          *(int *)((int)this_00 + 0x10f) = local_1c;
          local_8 = (undefined1 *)0xffffffff;
        }
        if (local_c != 0.0) {
          FUN_006b2800((int)DAT_008075a8,*(uint *)((int)this_00 + 0x10b),uVar19,uVar18);
        }
        if ((local_c != 0.0) || ((int)local_8 < 0)) {
          FUN_006b3640(DAT_008075a8,*(uint *)((int)this_00 + 0x10b),(uint)local_8,
                       *(uint *)((int)this_00 + 0xdf),*(uint *)((int)this_00 + 0xe3));
        }
        break;
      case 3:
        uVar19 = *(uint *)((int)this_00 + 0x10b);
        if (-1 < (int)uVar19) goto LAB_0054505c;
        goto LAB_0054506b;
      case 4:
        uVar19 = *(uint *)((int)this_00 + 0x10b);
LAB_0054505c:
        FUN_006b3bb0(DAT_008075a8,uVar19);
        *(undefined4 *)((int)this_00 + 0x10b) = 0xffffffff;
LAB_0054506b:
        *(undefined1 *)((int)this_00 + 0xde) = 0;
        break;
      case 5:
        if (DAT_00807598 != (void *)0x0) {
          FUN_006e1c20(DAT_00807598,
                       (float)(*(int *)((int)this_00 + 0xc5) - *(int *)((int)this_00 + 0x4b2)),
                       *(int *)((int)this_00 + 0xc9) - *(int *)((int)this_00 + 0x4b6),
                       *(float *)((int)this_00 + 0x107),(float *)&local_8,&local_c);
          lVar28 = __ftol();
          *(int *)((int)this_00 + 0xfb) = (int)lVar28;
          if ((int)lVar28 < 1) {
            *(undefined4 *)((int)this_00 + 0xfb) = 1;
          }
          lVar28 = __ftol();
          iVar6 = (int)(short)lVar28;
          lVar28 = __ftol();
          iVar16 = (int)(short)lVar28;
          lVar28 = __ftol();
          iVar21 = (int)(short)lVar28;
          lVar28 = __ftol();
          iVar6 = FUN_006db910((int)(short)lVar28,iVar21,iVar16,iVar6);
          *(int *)((int)this_00 + 0xf7) = iVar6;
          FUN_006e8df0(DAT_00807598,*(uint *)((int)this_00 + 0x10b),
                       *(undefined4 *)((int)this_00 + 0xff),*(undefined4 *)((int)this_00 + 0x103),
                       *(undefined4 *)((int)this_00 + 0x107),iVar6,*(int *)((int)this_00 + 0xfb),1);
        }
      }
      if ((*(int *)((int)this_00 + 0x4a6) != 0) && (*(int *)((int)this_00 + 0x4a2) != 0)) {
        thunk_FUN_0054a8d0(this_00);
      }
      thunk_FUN_0054aee0(1);
      DAT_00858df8 = local_e0;
      return 0;
    case 2:
      thunk_FUN_00543600(1);
      DAT_00858df8 = local_e0;
      return 0;
    case 3:
      thunk_FUN_00543830();
      DAT_00858df8 = local_e0;
      return 0;
    case 8:
      if (*(int *)((int)this_00 + 0xc1) == 0) {
        *(undefined4 *)((int)this_00 + 0xc1) = 1;
        thunk_FUN_005441a0();
        DAT_00858df8 = local_e0;
        return 0;
      }
      break;
    case 9:
      if (*(int *)((int)this_00 + 0xc1) != 0) {
        *(undefined4 *)((int)this_00 + 0xc1) = 0;
        thunk_FUN_00544460();
        DAT_00858df8 = local_e0;
        return 0;
      }
    }
    DAT_00858df8 = local_e0;
    return 0;
  }
  if (uVar19 < 0xa31d) {
    if (0xa312 < uVar19) {
      if (DAT_007fa174 == 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      thunk_FUN_00438e30(uVar19 - 0xa313);
      DAT_00858df8 = local_e0;
      return 0;
    }
    if (0xa124 < uVar19) {
      if (uVar19 < 0xa204) {
        if (0xa1fe < uVar19) {
          if (DAT_00802a38 == 0) {
            DAT_00858df8 = local_e0;
            return 0;
          }
          local_d = '\x03' - *(char *)(param_1 + 0x10);
          thunk_FUN_0054edf0((undefined4 *)0x15,(undefined4 *)&local_d,0,0xffffffff);
          DAT_00858df8 = local_e0;
          return 0;
        }
        switch(uVar19) {
        case 0xa125:
          goto switchD_00546590_caseD_a125;
        case 0xa126:
          if (DAT_00808783 != '\x03') {
            DAT_00858df8 = local_e0;
            return 0;
          }
          thunk_FUN_0054b540(this_00);
          if (DAT_0080169c == 0) {
            DAT_00858df8 = local_e0;
            return 0;
          }
          thunk_FUN_00522d40(3);
          DAT_00858df8 = local_e0;
          return 0;
        case 0xa127:
          if (DAT_00808783 != '\x03') {
            DAT_00858df8 = local_e0;
            return 0;
          }
          thunk_FUN_0054b540(this_00);
          if (DAT_0080169c == 0) {
            DAT_00858df8 = local_e0;
            return 0;
          }
          thunk_FUN_00522d40(2);
          DAT_00858df8 = local_e0;
          return 0;
        case 0xa128:
          if (DAT_00801688 == (void *)0x0) {
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
          *(undefined4 *)((int)this_00 + 0xcd) = 3;
          DAT_00858df8 = local_e0;
          return 0;
        case 0xa130:
          *(undefined4 *)((int)this_00 + 0xcd) = 4;
          DAT_00858df8 = local_e0;
          return 0;
        case 0xa131:
          *(undefined4 *)((int)this_00 + 0xcd) = 2;
          DAT_00858df8 = local_e0;
          return 0;
        case 0xa132:
          *(undefined4 *)((int)this_00 + 0xcd) = 1;
          DAT_00858df8 = local_e0;
          return 0;
        case 0xa133:
          *(undefined4 *)((int)this_00 + 0xcd) = 0;
          DAT_00858df8 = local_e0;
          return 0;
        }
      }
      if (0xa209 < uVar19) {
        switch(uVar19) {
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
          thunk_FUN_004ab300(uVar19 - 0xa309);
          DAT_00858df8 = local_e0;
          return 0;
        default:
          DAT_00858df8 = local_e0;
          return 0;
        }
      }
      if (uVar19 != 0xa209) {
        if (uVar19 == 0xa206) {
          puVar14 = local_40;
          for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar14 = 0;
            puVar14 = puVar14 + 1;
          }
          local_40[4] = 0x100;
          FUN_006e6000(this_00,3,0x100,local_40);
          DAT_00858df8 = local_e0;
          return 0;
        }
        if (uVar19 == 0xa207) {
          puVar14 = local_40;
          for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar14 = 0;
            puVar14 = puVar14 + 1;
          }
          local_40[4] = 0x101;
          FUN_006e6000(this_00,3,0x100,local_40);
          DAT_00858df8 = local_e0;
          return 0;
        }
        if (uVar19 != 0xa208) {
          DAT_00858df8 = local_e0;
          return 0;
        }
        if (DAT_007fb2a0 == (void *)0x0) {
          DAT_00858df8 = local_e0;
          return 0;
        }
        puVar14 = local_40;
        for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar14 = 0;
          puVar14 = puVar14 + 1;
        }
        uVar9 = thunk_FUN_004ab050();
        switch(uVar9) {
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
      puVar14 = local_40;
      for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar14 = 0;
        puVar14 = puVar14 + 1;
      }
      uVar9 = thunk_FUN_004ab050();
      switch(uVar9) {
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
    if (uVar19 == 0xa124) {
      thunk_FUN_0054b540(this_00);
      if (DAT_0080169c == 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      thunk_FUN_00522d40(0);
      DAT_00858df8 = local_e0;
      return 0;
    }
    if (0xa102 < uVar19) {
      switch(uVar19) {
      case 0xa103:
        if (DAT_008016dc == (undefined4 *)0x0) {
          DAT_00858df8 = local_e0;
          return 0;
        }
        thunk_FUN_00533880(DAT_008016dc,'\x04');
        DAT_00858df8 = local_e0;
        return 0;
      case 0xa104:
        if (DAT_008016dc == (undefined4 *)0x0) {
          DAT_00858df8 = local_e0;
          return 0;
        }
        if (DAT_008067a0 != '\0') {
          DAT_00858df8 = local_e0;
          return 0;
        }
        thunk_FUN_00533880(DAT_008016dc,'\x05');
        DAT_00858df8 = local_e0;
        return 0;
      case 0xa105:
      case 0xa106:
        if (DAT_008016dc == (undefined4 *)0x0) {
          DAT_00858df8 = local_e0;
          return 0;
        }
        (**(code **)*DAT_008016dc)(param_1);
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
        uVar19 = 0xffffffff;
        pcVar10 = &DAT_00807680;
        break;
      case 0xa122:
        thunk_FUN_0054b540(this_00);
        if (DAT_00801688 == (void *)0x0) {
          DAT_00858df8 = local_e0;
          return 0;
        }
        thunk_FUN_004f9ed0();
        DAT_00858df8 = local_e0;
        return 0;
      case 0xa123:
        if (DAT_00801688 == (void *)0x0) {
          DAT_00858df8 = local_e0;
          return 0;
        }
        thunk_FUN_004fa3b0(DAT_00801688);
        DAT_00858df8 = local_e0;
        return 0;
      }
      do {
        pcVar26 = pcVar10;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar26 = pcVar10 + 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar26;
      } while (cVar2 != '\0');
      uVar19 = ~uVar19;
      local_58 = &local_48;
      local_48 = 0;
      pcVar10 = pcVar26 + -uVar19;
      pcVar26 = (char *)&DAT_0080ee1a;
      for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
        *(undefined4 *)pcVar26 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar26 = pcVar26 + 4;
      }
      for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
        *pcVar26 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar26 = pcVar26 + 1;
      }
      uVar19 = 0xffffffff;
      pcVar10 = PTR_s_SAVEGAME__0079ade4;
      do {
        pcVar26 = pcVar10;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar26 = pcVar10 + 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar26;
      } while (cVar2 != '\0');
      uVar19 = ~uVar19;
      iVar6 = -1;
      pcVar10 = (char *)&DAT_0080ee1a;
      do {
        pcVar25 = pcVar10;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar25 = pcVar10 + 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar25;
      } while (cVar2 != '\0');
      pcVar10 = pcVar26 + -uVar19;
      pcVar26 = pcVar25 + -1;
      for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
        *(undefined4 *)pcVar26 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar26 = pcVar26 + 4;
      }
      local_14 = (undefined4 *)0x0;
      for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
        *pcVar26 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar26 = pcVar26 + 1;
      }
      uVar19 = 0xffffffff;
      pcVar10 = (char *)&DAT_00807ddd;
      do {
        pcVar26 = pcVar10;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar26 = pcVar10 + 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar26;
      } while (cVar2 != '\0');
      uVar19 = ~uVar19;
      iVar6 = -1;
      pcVar10 = (char *)&DAT_0080ee1a;
      do {
        pcVar25 = pcVar10;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar25 = pcVar10 + 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar25;
      } while (cVar2 != '\0');
      pcVar10 = pcVar26 + -uVar19;
      pcVar26 = pcVar25 + -1;
      for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
        *(undefined4 *)pcVar26 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar26 = pcVar26 + 4;
      }
      for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
        *pcVar26 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar26 = pcVar26 + 1;
      }
      FUN_006b8280((char *)&DAT_0080ee1a,(char *)&DAT_0080ee1a);
      uVar19 = 0xffffffff;
      pcVar10 = PTR_s_SAVE_QUICKSAVE_0079ade8;
      do {
        pcVar26 = pcVar10;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar26 = pcVar10 + 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar26;
      } while (cVar2 != '\0');
      uVar19 = ~uVar19;
      iVar6 = -1;
      pcVar10 = (char *)&DAT_0080ee1a;
      do {
        pcVar25 = pcVar10;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar25 = pcVar10 + 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar25;
      } while (cVar2 != '\0');
      pcVar10 = pcVar26 + -uVar19;
      pcVar26 = pcVar25 + -1;
      for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
        *(undefined4 *)pcVar26 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar26 = pcVar26 + 4;
      }
      local_124 = DAT_00858df8;
      for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
        *pcVar26 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar26 = pcVar26 + 1;
      }
      DAT_00858df8 = &local_124;
      iVar6 = __setjmp3(local_120,0,unaff_EDI,unaff_ESI);
      puVar14 = local_14;
      if (iVar6 == 0) {
        puVar14 = FUN_006f0ec0(0x345,(byte *)&DAT_0080ee1a,0,0,0);
        local_14 = puVar14;
        puVar15 = FUN_006f1ce0(0x80,PTR_s_SAVE_DESC_0079adec,(int *)&local_58,0);
        if (puVar15 != (ushort *)0x0) {
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
            puVar27 = local_40;
            for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
              *puVar27 = 0;
              puVar27 = puVar27 + 1;
            }
            DAT_0080879c = 1;
            _DAT_0080f32e = 1;
            local_40[3] = 1;
            local_40[4] = 0x6100;
            FUN_006e3b50(local_40);
          }
        }
      }
      if (puVar14 == (undefined4 *)0x0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      DAT_00858df8 = local_124;
      FUN_006f1170(puVar14);
      DAT_00858df8 = local_e0;
      return 0;
    }
    if (uVar19 == 0xa102) {
      thunk_FUN_0054b540(this_00);
      if (DAT_008016dc == (undefined4 *)0x0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      thunk_FUN_0052f2b0(DAT_008016dc,-1);
      DAT_00858df8 = local_e0;
      return 0;
    }
    if (0x4203 < uVar19) {
      if (uVar19 == 0xa0ff) {
        *(undefined4 *)(param_1 + 0x10) = 0x7104;
        thunk_FUN_0056fa60(param_1);
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (uVar19 != 0xa100) {
        if (uVar19 != 0xa101) {
          DAT_00858df8 = local_e0;
          return 0;
        }
        thunk_FUN_0054b540(this_00);
        if (DAT_008016dc == (undefined4 *)0x0) {
          DAT_00858df8 = local_e0;
          return 0;
        }
        thunk_FUN_0052f2b0(DAT_008016dc,'\x0f');
        DAT_00858df8 = local_e0;
        return 0;
      }
      bVar5 = thunk_FUN_00544990((int)this_00);
      if (CONCAT31(extraout_var_04,bVar5) == 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      local_54 = 1;
      if (DAT_0081163c == 0) {
        local_4c = 1;
        puVar14 = &local_54;
        local_50 = (uint)(DAT_00808784 == 0);
      }
      else {
        local_4c = 1;
        puVar14 = &local_54;
        local_50 = (uint)(*(int *)(DAT_0081163c + 0x42c) == 0);
      }
      goto LAB_00547c2d;
    }
    if (uVar19 == 0x4203) {
      thunk_FUN_00544940((int)this_00);
      DAT_00858df8 = local_e0;
      return 0;
    }
    if (0x4201 < uVar19) {
      if (uVar19 != 0x4202) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (DAT_00807322 == 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)(param_1 + 0x18) != *(int *)((int)this_00 + 0x4da)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      *(undefined4 *)((int)this_00 + 0x4da) = 0;
      FUN_006b2800((int)DAT_008075a8,*(uint *)((int)this_00 + 0x4d6),0,0);
      FUN_006b3af0(DAT_008075a8,*(uint *)((int)this_00 + 0x4d6));
      DAT_00858df8 = local_e0;
      return 0;
    }
    if (uVar19 != 0x4201) {
      if (uVar19 == 0x67) {
        if (DAT_0080734c == '\0') {
          DAT_00858df8 = local_e0;
          return 0;
        }
        bVar5 = thunk_FUN_00544990((int)this_00);
        if (CONCAT31(extraout_var_03,bVar5) == 0) {
          DAT_00858df8 = local_e0;
          return 0;
        }
        if (DAT_00808784 != 0) {
          DAT_00858df8 = local_e0;
          return 0;
        }
        if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
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
        if (*(char *)((int)this_00 + 0xd2) == '\0') {
          thunk_FUN_004ab070(DAT_007fb2a0,3,0.0,0,1);
          DAT_00858df8 = local_e0;
          return 0;
        }
        thunk_FUN_004ab070(DAT_007fb2a0,1,0.0,0,1);
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (uVar19 != 0x68) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (DAT_0080734c == '\0') {
        DAT_00858df8 = local_e0;
        return 0;
      }
      bVar5 = thunk_FUN_00544990((int)this_00);
      if (CONCAT31(extraout_var_02,bVar5) == 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (DAT_00808784 != 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
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
      if (*(char *)((int)this_00 + 0xd2) == '\0') {
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
    UVar13 = *(UINT *)(param_1 + 0x18);
    if (UVar13 == *(UINT *)((int)this_00 + 0x4da)) {
      DAT_00858df8 = local_e0;
      return 0;
    }
    if (UVar13 == 0) {
      DAT_00858df8 = local_e0;
      return 0;
    }
    if (*(char *)((int)this_00 + 0xde) == '\x05') {
      DAT_00858df8 = local_e0;
      return 0;
    }
    if (*(char *)((int)this_00 + 0xde) == '\x02') {
      DAT_00858df8 = local_e0;
      return 0;
    }
    *(UINT *)((int)this_00 + 0x4da) = UVar13;
    uVar3 = *(ushort *)(param_1 + 0x16);
    if (uVar3 == 1) {
      puVar4 = *(undefined1 **)(param_1 + 0x18);
      local_8 = puVar4;
      switch(*puVar4) {
      case 1:
        if (*(int *)(puVar4 + 9) < 0) {
          if ((&stack0x00000000 != (undefined1 *)0x524) &&
             (iVar6 = FUN_006b0140(*(UINT *)(puVar4 + 1),DAT_00807618), iVar6 != 0)) {
            UVar13 = *(UINT *)(local_8 + 1);
LAB_005458df:
            pcVar10 = (char *)FUN_006b0140(UVar13,DAT_00807618);
            uVar19 = 0xffffffff;
            do {
              pcVar26 = pcVar10;
              if (uVar19 == 0) break;
              uVar19 = uVar19 - 1;
              pcVar26 = pcVar10 + 1;
              cVar2 = *pcVar10;
              pcVar10 = pcVar26;
            } while (cVar2 != '\0');
            uVar19 = ~uVar19;
            puVar12 = (uint *)(pcVar26 + -uVar19);
            puVar7 = local_524;
            for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
              *puVar7 = *puVar12;
              puVar12 = puVar12 + 1;
              puVar7 = puVar7 + 1;
            }
            for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
              *(char *)puVar7 = (char)*puVar12;
              puVar12 = (uint *)((int)puVar12 + 1);
              puVar7 = (uint *)((int)puVar7 + 1);
            }
          }
        }
        else {
          thunk_FUN_0052a970(*(uint *)(&DAT_00807e66 + *(int *)(puVar4 + 9) * 4),1);
          FUN_006b0140(*(UINT *)(puVar4 + 1),DAT_00807618);
          wsprintfA((LPSTR)local_524,s___d_s___d_s_007c7f80);
        }
        break;
      case 2:
        if (*(UINT *)(puVar4 + 1) == 0) goto switchD_00545816_default;
        if ((&stack0x00000000 != (undefined1 *)0x524) &&
           (iVar6 = FUN_006b0140(*(UINT *)(puVar4 + 1),DAT_00807618), iVar6 != 0)) {
          UVar13 = *(UINT *)(local_8 + 1);
          goto LAB_005458df;
        }
        break;
      case 3:
        if (*(int *)(puVar4 + 5) == 0) {
          uVar9 = FUN_006b0140(0x36b3,DAT_00807618);
          uVar11 = FUN_006b0140(*(UINT *)(puVar4 + 1),DAT_00807618);
          pcVar24 = wsprintfA_exref;
          wsprintfA((LPSTR)local_524,s___d_s__s_007c7f64,(uint)*(ushort *)(param_1 + 0x14),uVar11,
                    uVar9);
        }
        else {
          FUN_006b0140(0x36b3,DAT_00807618);
          FUN_006b0140(*(UINT *)(puVar4 + 5),DAT_00807618);
          FUN_006b0140(*(UINT *)(puVar4 + 1),DAT_00807618);
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
          FUN_006b0140(0x273a,DAT_00807618);
          (*pcVar24)();
        }
        break;
      case 4:
        pcVar10 = (char *)FUN_006b0140(*(UINT *)(puVar4 + 1),DAT_00807618);
        uVar19 = 0xffffffff;
        do {
          pcVar26 = pcVar10;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar26 = pcVar10 + 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar26;
        } while (cVar2 != '\0');
        uVar19 = ~uVar19;
        pcVar10 = pcVar26 + -uVar19;
        pcVar26 = (char *)&DAT_0080f33a;
        for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
          *(undefined4 *)pcVar26 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar26 = pcVar26 + 4;
        }
        for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
          *pcVar26 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar26 = pcVar26 + 1;
        }
        for (puVar12 = FUN_0072e560(&DAT_0080f33a,'\n'); puVar12 != (uint *)0x0;
            puVar12 = FUN_0072e560(puVar12,'\n')) {
          *(undefined1 *)puVar12 = 0x20;
        }
        wsprintfA((LPSTR)local_524,s___d_s_007c7f40,(uint)*(ushort *)(param_1 + 0x14),&DAT_0080f33a)
        ;
        if (*(UINT *)(local_8 + 5) != 0) {
          pcVar10 = (char *)FUN_006b0140(*(UINT *)(local_8 + 5),DAT_00807618);
          uVar19 = 0xffffffff;
          do {
            pcVar26 = pcVar10;
            if (uVar19 == 0) break;
            uVar19 = uVar19 - 1;
            pcVar26 = pcVar10 + 1;
            cVar2 = *pcVar10;
            pcVar10 = pcVar26;
          } while (cVar2 != '\0');
          uVar19 = ~uVar19;
          pcVar10 = pcVar26 + -uVar19;
          pcVar26 = (char *)&DAT_0080f33a;
          for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
            *(undefined4 *)pcVar26 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
            pcVar26 = pcVar26 + 4;
          }
          for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
            *pcVar26 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcVar26 = pcVar26 + 1;
          }
          for (puVar12 = FUN_0072e560(&DAT_0080f33a,'\n'); puVar12 != (uint *)0x0;
              puVar12 = FUN_0072e560(puVar12,'\n')) {
            *(undefined1 *)puVar12 = 0x20;
          }
          wsprintfA((LPSTR)local_524,s__s__s_007c7f38,local_524,&DAT_0080f33a);
        }
        piVar23 = (int *)(local_8 + 9);
        if (*(int *)(local_8 + 9) != 0) {
          uVar9 = FUN_006b0140(0x36c2,DAT_00807618);
          wsprintfA((LPSTR)local_524,s__s__s_007c7f38,local_524,uVar9);
          iVar6 = 5;
          do {
            if (*piVar23 != 0) {
              pHVar32 = DAT_00807618;
              UVar13 = thunk_FUN_00528060((char)*piVar23,(char)((uint)*piVar23 >> 0x10));
              uVar9 = FUN_006b0140(UVar13,pHVar32);
              wsprintfA((LPSTR)local_524,s__s___d_s_007c7f2c,local_524,
                        (*(char *)((int)piVar23 + 5) != '\0') + 1,uVar9);
            }
            piVar23 = (int *)((int)piVar23 + 6);
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
            (iVar6 = FUN_006b0140(UVar13,DAT_00807618), iVar6 != 0)) {
      UVar13 = *(UINT *)((int)this_00 + 0x4da);
      goto LAB_005458df;
    }
    if (local_c == 0.0) {
      DAT_00858df8 = local_e0;
      return 0;
    }
    if (*(short *)(param_1 + 0x16) == 3) {
      if ((DAT_0081176c == 0) || (*(void **)(DAT_0081176c + 0x38) == (void *)0x0))
      goto LAB_00545ff6;
      iVar6 = FUN_00711370(*(void **)(DAT_0081176c + 0x38),local_524);
      *(int *)((int)this_00 + 0x4ca) = iVar6 + 0xc;
      iVar6 = FUN_007113e0(*(void **)(DAT_0081176c + 0x38),local_524);
      iVar6 = iVar6 + 10;
      *(int *)((int)this_00 + 0x4ce) = iVar6;
      if ((800 < *(int *)((int)this_00 + 0x4ca)) || (0x96 < iVar6)) goto LAB_00545ff6;
      *(int *)((int)this_00 + 0x4c2) = *(int *)((int)this_00 + 0xc5) + *(int *)((int)this_00 + 0xb1)
      ;
      iVar21 = *(int *)((int)this_00 + 0xc9) + *(int *)((int)this_00 + 0xb5);
      *(int *)((int)this_00 + 0x4c6) = iVar21;
      iVar16 = (DAT_00806730 - *(int *)((int)this_00 + 0x4ca)) + -0x28;
      if (iVar16 < *(int *)((int)this_00 + 0x4c2)) {
        *(int *)((int)this_00 + 0x4c2) = iVar16;
      }
      if (*(int *)((int)this_00 + 0x4c2) < 0) {
        *(undefined4 *)((int)this_00 + 0x4c2) = 0;
      }
      iVar6 = (DAT_00806734 - iVar6) + -0x14;
      if (iVar6 < iVar21) {
        *(int *)((int)this_00 + 0x4c6) = iVar6;
      }
      if (*(int *)((int)this_00 + 0x4c6) < 0) {
        *(undefined4 *)((int)this_00 + 0x4c6) = 0;
      }
      iVar6 = *(int *)((int)this_00 + 0x4d2);
      uVar19 = *(uint *)(iVar6 + 0x14);
      if (uVar19 == 0) {
        uVar19 = ((uint)*(ushort *)(iVar6 + 0xe) * *(int *)(iVar6 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                 *(int *)(iVar6 + 8);
      }
      puVar14 = (undefined4 *)FUN_006b4fa0(iVar6);
      for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
        *puVar14 = 0x22222222;
        puVar14 = puVar14 + 1;
      }
      for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
        *(undefined1 *)puVar14 = 0x22;
        puVar14 = (undefined4 *)((int)puVar14 + 1);
      }
      FUN_00710a90(*(int *)((int)this_00 + 0x4d2),0,5,5,*(int *)((int)this_00 + 0x4ca) + -10,
                   *(int *)((int)this_00 + 0x4ce) + -10);
      FUN_00711b70(local_524,-2,-1,(uint)*(ushort *)(param_1 + 0x14),-1,-1);
      FUN_006b5ee0(*(int *)((int)this_00 + 0x4d2),0,0,0,*(int *)((int)this_00 + 0x4ca),
                   *(int *)((int)this_00 + 0x4ce),0x18,0xd);
      FUN_006b5ee0(*(int *)((int)this_00 + 0x4d2),0,1,1,*(int *)((int)this_00 + 0x4ca) + -2,
                   *(int *)((int)this_00 + 0x4ce) + -2,0x1d,0xd);
      bVar31 = 0x18;
    }
    else {
      if ((DAT_00802a28 == 0) || (*(void **)(DAT_00802a28 + 0x28) == (void *)0x0))
      goto LAB_00545ff6;
      iVar6 = FUN_00711370(*(void **)(DAT_00802a28 + 0x28),local_524);
      *(int *)((int)this_00 + 0x4ca) = iVar6 + 0xc;
      iVar6 = FUN_007113e0(*(void **)(DAT_00802a28 + 0x28),local_524);
      iVar6 = iVar6 + 10;
      *(int *)((int)this_00 + 0x4ce) = iVar6;
      if ((800 < *(int *)((int)this_00 + 0x4ca)) || (0x96 < iVar6)) goto LAB_00545ff6;
      *(int *)((int)this_00 + 0x4c2) = *(int *)((int)this_00 + 0xc5) + *(int *)((int)this_00 + 0xb1)
      ;
      iVar21 = *(int *)((int)this_00 + 0xc9) + *(int *)((int)this_00 + 0xb5);
      *(int *)((int)this_00 + 0x4c6) = iVar21;
      iVar16 = (DAT_00806730 - *(int *)((int)this_00 + 0x4ca)) + -0x28;
      if (iVar16 < *(int *)((int)this_00 + 0x4c2)) {
        *(int *)((int)this_00 + 0x4c2) = iVar16;
      }
      if (*(int *)((int)this_00 + 0x4c2) < 0) {
        *(undefined4 *)((int)this_00 + 0x4c2) = 0;
      }
      iVar6 = (DAT_00806734 - iVar6) + -0x14;
      if (iVar6 < iVar21) {
        *(int *)((int)this_00 + 0x4c6) = iVar6;
      }
      if (*(int *)((int)this_00 + 0x4c6) < 0) {
        *(undefined4 *)((int)this_00 + 0x4c6) = 0;
      }
      iVar6 = *(int *)((int)this_00 + 0x4d2);
      uVar19 = *(uint *)(iVar6 + 0x14);
      if (uVar19 == 0) {
        uVar19 = ((uint)*(ushort *)(iVar6 + 0xe) * *(int *)(iVar6 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                 *(int *)(iVar6 + 8);
      }
      puVar14 = (undefined4 *)FUN_006b4fa0(iVar6);
      for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
        *puVar14 = 0x3a3a3a3a;
        puVar14 = puVar14 + 1;
      }
      for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
        *(undefined1 *)puVar14 = 0x3a;
        puVar14 = (undefined4 *)((int)puVar14 + 1);
      }
      FUN_00710a90(*(int *)((int)this_00 + 0x4d2),0,5,5,*(int *)((int)this_00 + 0x4ca) + -10,
                   *(int *)((int)this_00 + 0x4ce) + -10);
      FUN_00711b70(local_524,-2,-1,(uint)*(ushort *)(param_1 + 0x14),-1,-1);
      FUN_006b5ee0(*(int *)((int)this_00 + 0x4d2),0,0,0,*(int *)((int)this_00 + 0x4ca),
                   *(int *)((int)this_00 + 0x4ce),0x6f,0xd);
      FUN_006b5ee0(*(int *)((int)this_00 + 0x4d2),0,1,1,*(int *)((int)this_00 + 0x4ca) + -2,
                   *(int *)((int)this_00 + 0x4ce) + -2,0xb3,0xd);
      bVar31 = 0x6f;
    }
    FUN_006b5ee0(*(int *)((int)this_00 + 0x4d2),0,3,3,*(int *)((int)this_00 + 0x4ca) + -6,
                 *(int *)((int)this_00 + 0x4ce) + -6,bVar31,0xd);
LAB_00545ff6:
    if (800 < (int)*(uint *)((int)this_00 + 0x4ca)) {
      DAT_00858df8 = local_e0;
      return 0;
    }
    if (0x96 < (int)*(uint *)((int)this_00 + 0x4ce)) {
      DAT_00858df8 = local_e0;
      return 0;
    }
    FUN_006b2800((int)DAT_008075a8,*(uint *)((int)this_00 + 0x4d6),*(uint *)((int)this_00 + 0x4ca),
                 *(uint *)((int)this_00 + 0x4ce));
    FUN_006b3640(DAT_008075a8,*(uint *)((int)this_00 + 0x4d6),0xffffffff,
                 *(uint *)((int)this_00 + 0x4c2),*(uint *)((int)this_00 + 0x4c6));
    FUN_006b3430(DAT_008075a8,*(uint *)((int)this_00 + 0x4d6));
    DAT_00858df8 = local_e0;
    return 0;
  }
  if (0xa50c < uVar19) {
    if (0xa708 < uVar19) {
      DAT_00858df8 = local_e0;
      return 0;
    }
    if (0xa6fe < uVar19) {
      local_60 = uVar19 - 0xa6ff;
      puVar14 = &local_64;
      local_5c = 0;
      local_64 = 9;
LAB_00547c2d:
      thunk_FUN_0054edf0((undefined4 *)0x5,puVar14,1,0xffffffff);
      DAT_00858df8 = local_e0;
      return 0;
    }
    uVar22 = (undefined3)((uint)this_00 >> 8);
    uVar17 = (undefined2)(uVar19 - 0xa50d >> 0x10);
    switch(uVar19 - 0xa50d) {
    case 0:
      thunk_FUN_0054aee0(1);
      if (DAT_00808784 != 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if ((DAT_00801690 != 0) && (*(short *)(DAT_00801690 + 0x172) != 2)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)((int)this_00 + 0xc5) < *(int *)((int)this_00 + 0x4b2)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)((int)this_00 + 0x4ba) + *(int *)((int)this_00 + 0x4b2) <=
          *(int *)((int)this_00 + 0xc5)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)((int)this_00 + 0xc9) < *(int *)((int)this_00 + 0x4b6)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)((int)this_00 + 0x4be) + *(int *)((int)this_00 + 0x4b6) <=
          *(int *)((int)this_00 + 0xc9)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)((int)this_00 + 0x4a2) != 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if ((*(char *)((int)this_00 + 0xde) != '\0') && (*(char *)((int)this_00 + 0xde) != '\x03')) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)((int)this_00 + 0x49a) != 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      iVar6 = 0;
      break;
    case 1:
      thunk_FUN_0054aee0(1);
      if (DAT_00808784 != 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if ((DAT_00801690 != 0) && (*(short *)(DAT_00801690 + 0x172) != 2)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      iVar6 = *(int *)((int)this_00 + 0xc5);
      iVar16 = *(int *)((int)this_00 + 0x4b2);
      if (iVar6 < iVar16) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)((int)this_00 + 0x4ba) + iVar16 <= iVar6) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      iVar21 = *(int *)((int)this_00 + 0xc9);
      iVar8 = *(int *)((int)this_00 + 0x4b6);
      if (iVar21 < iVar8) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)((int)this_00 + 0x4be) + iVar8 <= iVar21) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)((int)this_00 + 0x4a2) != 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if ((*(char *)((int)this_00 + 0xde) != '\0') && (*(char *)((int)this_00 + 0xde) != '\x03')) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)((int)this_00 + 0x49a) != 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (DAT_007fa174 == 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      thunk_FUN_00433e90((uint *)CONCAT31((int3)((uint)iVar16 >> 8),DAT_0080874d),iVar6 - iVar16,
                         iVar21 - iVar8,0);
      DAT_00858df8 = local_e0;
      return 0;
    case 2:
      thunk_FUN_0054aee0(1);
      if (DAT_00808784 != 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if ((DAT_00801690 != 0) && (*(short *)(DAT_00801690 + 0x172) != 2)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)((int)this_00 + 0xc5) < *(int *)((int)this_00 + 0x4b2)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)((int)this_00 + 0x4ba) + *(int *)((int)this_00 + 0x4b2) <=
          *(int *)((int)this_00 + 0xc5)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)((int)this_00 + 0xc9) < *(int *)((int)this_00 + 0x4b6)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)((int)this_00 + 0x4be) + *(int *)((int)this_00 + 0x4b6) <=
          *(int *)((int)this_00 + 0xc9)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)((int)this_00 + 0x4a2) != 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if ((*(char *)((int)this_00 + 0xde) != '\0') && (*(char *)((int)this_00 + 0xde) != '\x03')) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)((int)this_00 + 0x49a) == 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(uint *)(*(int *)((int)this_00 + 0x49a) + 0x24) != (uint)DAT_0080874d) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      iVar6 = 0;
      break;
    case 3:
      thunk_FUN_0054aee0(1);
      if (DAT_00808784 != 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if ((DAT_00801690 != 0) && (*(short *)(DAT_00801690 + 0x172) != 2)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      iVar6 = *(int *)((int)this_00 + 0xc5);
      local_8 = *(undefined1 **)((int)this_00 + 0x4b2);
      if (iVar6 < (int)local_8) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if ((int)(local_8 + *(int *)((int)this_00 + 0x4ba)) <= iVar6) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      iVar16 = *(int *)((int)this_00 + 0xc9);
      iVar21 = *(int *)((int)this_00 + 0x4b6);
      if (iVar16 < iVar21) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)((int)this_00 + 0x4be) + iVar21 <= iVar16) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)((int)this_00 + 0x4a2) != 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if ((*(char *)((int)this_00 + 0xde) != '\0') && (*(char *)((int)this_00 + 0xde) != '\x03')) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)((int)this_00 + 0x49a) == 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(uint *)(*(int *)((int)this_00 + 0x49a) + 0x24) != (uint)DAT_0080874d) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (DAT_007fa174 == 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      thunk_FUN_00433e90((uint *)CONCAT31(uVar22,DAT_0080874d),iVar6 - (int)local_8,iVar16 - iVar21,
                         0);
      DAT_00858df8 = local_e0;
      return 0;
    case 4:
      thunk_FUN_0054aee0(1);
      if (DAT_00808784 != 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if ((DAT_00801690 != 0) && (*(short *)(DAT_00801690 + 0x172) != 2)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      iVar6 = *(int *)((int)this_00 + 0xc5);
      local_8 = *(undefined1 **)((int)this_00 + 0x4b2);
      if (iVar6 < (int)local_8) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if ((int)(local_8 + *(int *)((int)this_00 + 0x4ba)) <= iVar6) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      iVar16 = *(int *)((int)this_00 + 0xc9);
      iVar21 = *(int *)((int)this_00 + 0x4b6);
      if (iVar16 < iVar21) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)((int)this_00 + 0x4be) + iVar21 <= iVar16) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)((int)this_00 + 0x4a2) != 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if ((*(char *)((int)this_00 + 0xde) != '\0') && (*(char *)((int)this_00 + 0xde) != '\x03')) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)((int)this_00 + 0x49a) == 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(uint *)(*(int *)((int)this_00 + 0x49a) + 0x24) != (uint)DAT_0080874d) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (DAT_007fa174 == 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      thunk_FUN_00433e90((uint *)CONCAT31(uVar22,DAT_0080874d),iVar6 - (int)local_8,iVar16 - iVar21,
                         1);
      DAT_00858df8 = local_e0;
      return 0;
    case 5:
      thunk_FUN_0054aee0(1);
      if (DAT_00808784 != 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if ((DAT_00801690 != 0) && (*(short *)(DAT_00801690 + 0x172) != 2)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      iVar6 = *(int *)((int)this_00 + 0xc5);
      iVar16 = *(int *)((int)this_00 + 0x4b2);
      if (iVar6 < iVar16) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)((int)this_00 + 0x4ba) + iVar16 <= iVar6) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      iVar21 = *(int *)((int)this_00 + 0xc9);
      iVar8 = *(int *)((int)this_00 + 0x4b6);
      if (iVar21 < iVar8) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)((int)this_00 + 0x4be) + iVar8 <= iVar21) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)((int)this_00 + 0x4a2) != 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if ((*(char *)((int)this_00 + 0xde) != '\0') && (*(char *)((int)this_00 + 0xde) != '\x03')) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)((int)this_00 + 0x49a) == 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(uint *)(*(int *)((int)this_00 + 0x49a) + 0x24) != (uint)DAT_0080874d) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (DAT_007fa174 == 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      thunk_FUN_0044b5f0(7,iVar6 - iVar16,iVar21 - iVar8);
      DAT_00858df8 = local_e0;
      return 0;
    case 6:
      thunk_FUN_0054aee0(1);
      if (DAT_00808784 != 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if ((DAT_00801690 != 0) && (*(short *)(DAT_00801690 + 0x172) != 2)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      iVar6 = *(int *)((int)this_00 + 0xc5);
      iVar16 = *(int *)((int)this_00 + 0x4b2);
      if (iVar6 < iVar16) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)((int)this_00 + 0x4ba) + iVar16 <= iVar6) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      iVar21 = *(int *)((int)this_00 + 0xc9);
      iVar8 = *(int *)((int)this_00 + 0x4b6);
      if (iVar21 < iVar8) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)((int)this_00 + 0x4be) + iVar8 <= iVar21) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)((int)this_00 + 0x4a2) != 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if ((*(char *)((int)this_00 + 0xde) != '\0') && (*(char *)((int)this_00 + 0xde) != '\x03')) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)((int)this_00 + 0x49a) == 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(uint *)(*(int *)((int)this_00 + 0x49a) + 0x24) != (uint)DAT_0080874d) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (DAT_007fa174 == 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      thunk_FUN_0044b5f0(6,iVar6 - iVar16,iVar21 - iVar8);
      DAT_00858df8 = local_e0;
      return 0;
    case 7:
      thunk_FUN_0054aee0(1);
      if (DAT_00808784 != 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if ((DAT_00801690 != 0) && (*(short *)(DAT_00801690 + 0x172) != 2)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)((int)this_00 + 0xc5) < *(int *)((int)this_00 + 0x4b2)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)((int)this_00 + 0x4ba) + *(int *)((int)this_00 + 0x4b2) <=
          *(int *)((int)this_00 + 0xc5)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)((int)this_00 + 0xc9) < *(int *)((int)this_00 + 0x4b6)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)((int)this_00 + 0x4be) + *(int *)((int)this_00 + 0x4b6) <=
          *(int *)((int)this_00 + 0xc9)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)((int)this_00 + 0x4a2) != 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if ((*(char *)((int)this_00 + 0xde) != '\0') && (*(char *)((int)this_00 + 0xde) != '\x03')) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)((int)this_00 + 0x49a) == 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(uint *)(*(int *)((int)this_00 + 0x49a) + 0x24) == (uint)DAT_0080874d) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      iVar6 = 0;
      break;
    case 8:
      thunk_FUN_0054aee0(1);
      if (DAT_00808784 != 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if ((DAT_00801690 != 0) && (*(short *)(DAT_00801690 + 0x172) != 2)) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      iVar6 = *(int *)((int)this_00 + 0xc5);
      local_8 = *(undefined1 **)((int)this_00 + 0x4b2);
      if (iVar6 < (int)local_8) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if ((int)(local_8 + *(int *)((int)this_00 + 0x4ba)) <= iVar6) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      iVar16 = *(int *)((int)this_00 + 0xc9);
      iVar21 = *(int *)((int)this_00 + 0x4b6);
      if (iVar16 < iVar21) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)((int)this_00 + 0x4be) + iVar21 <= iVar16) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)((int)this_00 + 0x4a2) != 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if ((*(char *)((int)this_00 + 0xde) != '\0') && (*(char *)((int)this_00 + 0xde) != '\x03')) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)((int)this_00 + 0x49a) == 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(uint *)(*(int *)((int)this_00 + 0x49a) + 0x24) == (uint)DAT_0080874d) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      thunk_FUN_00433e90((uint *)(uint)DAT_0080874d,iVar6 - (int)local_8,iVar16 - iVar21,0);
      DAT_00858df8 = local_e0;
      return 0;
    case 9:
      if (DAT_0080734c == '\0') {
        DAT_00858df8 = local_e0;
        return 0;
      }
      *(bool *)((int)this_00 + 0xd2) = *(char *)((int)this_00 + 0xd2) == '\0';
      DAT_00858df8 = local_e0;
      return 0;
    case 10:
      if (DAT_00801688 == (void *)0x0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      thunk_FUN_004fad60(DAT_00801688,CONCAT22(uVar17,*(undefined2 *)((int)this_00 + 0xc5)),
                         (uint)*(ushort *)((int)this_00 + 0xc9));
      DAT_00858df8 = local_e0;
      return 0;
    case 0xb:
      if (DAT_00801688 == (void *)0x0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      thunk_FUN_004fae70((int)DAT_00801688);
      DAT_00858df8 = local_e0;
      return 0;
    case 0xc:
      if (DAT_00801688 == (void *)0x0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      thunk_FUN_004fae90(DAT_00801688,CONCAT22(uVar17,*(undefined2 *)((int)this_00 + 0xc5)),
                         (uint)*(ushort *)((int)this_00 + 0xc9));
      DAT_00858df8 = local_e0;
      return 0;
    case 0xd:
      if (DAT_007fa174 == 0) {
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
  if (uVar19 == 0xa50c) {
    if (DAT_007fa174 == 0) {
      DAT_00858df8 = local_e0;
      return 0;
    }
    thunk_FUN_0044b5f0(5,0xffffffff,0xffffffff);
    DAT_00858df8 = local_e0;
    return 0;
  }
  if (0xa504 < uVar19) {
    switch(uVar19) {
    case 0xa505:
    case 0xa507:
      goto switchD_00546ac9_caseD_a505;
    case 0xa506:
      goto switchD_00546ac9_caseD_a506;
    case 0xa508:
      if (DAT_007fa174 == 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      thunk_FUN_0044b5f0(0,0xffffffff,0xffffffff);
      DAT_00858df8 = local_e0;
      return 0;
    case 0xa509:
      if (DAT_007fa174 == 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      thunk_FUN_0044b5f0(2,0xffffffff,0xffffffff);
      DAT_00858df8 = local_e0;
      return 0;
    case 0xa50a:
      if (DAT_007fa174 == 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      thunk_FUN_0044b5f0(1,0xffffffff,0xffffffff);
      DAT_00858df8 = local_e0;
      return 0;
    case 0xa50b:
      if (DAT_007fa174 == 0) {
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
  if (uVar19 == 0xa504) {
switchD_00546ac9_caseD_a506:
    thunk_FUN_0054aee0(1);
    if (DAT_00808784 != 0) {
      DAT_00858df8 = local_e0;
      return 0;
    }
    if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      DAT_00858df8 = local_e0;
      return 0;
    }
    if ((DAT_00801690 != 0) && (*(short *)(DAT_00801690 + 0x172) != 2)) {
      DAT_00858df8 = local_e0;
      return 0;
    }
    if (*(int *)((int)this_00 + 0xc5) < *(int *)((int)this_00 + 0x4b2)) {
      DAT_00858df8 = local_e0;
      return 0;
    }
    if (*(int *)((int)this_00 + 0x4ba) + *(int *)((int)this_00 + 0x4b2) <=
        *(int *)((int)this_00 + 0xc5)) {
      DAT_00858df8 = local_e0;
      return 0;
    }
    if (*(int *)((int)this_00 + 0xc9) < *(int *)((int)this_00 + 0x4b6)) {
      DAT_00858df8 = local_e0;
      return 0;
    }
    if (*(int *)((int)this_00 + 0x4be) + *(int *)((int)this_00 + 0x4b6) <=
        *(int *)((int)this_00 + 0xc9)) {
      DAT_00858df8 = local_e0;
      return 0;
    }
    if (*(int *)(param_1 + 0x10) != 0xa501) {
      if (*(int *)((int)this_00 + 0x4a2) != 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      if (*(int *)((int)this_00 + 0x49a) != 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      *(undefined1 *)((int)this_00 + 0xde) = 1;
      *(int *)((int)this_00 + 0xdf) = *(int *)((int)this_00 + 0xc5) - *(int *)((int)this_00 + 0x4b2)
      ;
      iVar6 = *(int *)((int)this_00 + 0xc9) - *(int *)((int)this_00 + 0x4b6);
      *(int *)((int)this_00 + 0xe3) = iVar6;
      FUN_006e1c20(DAT_00807598,*(float *)((int)this_00 + 0xdf),iVar6,0.0,
                   (float *)((int)this_00 + 0xef),(float *)((int)this_00 + 0xf3));
      *(int *)((int)this_00 + 0x10f) = local_1c;
      DAT_00858df8 = local_e0;
      return 0;
    }
    iVar6 = thunk_FUN_00548b90((int)this_00);
    if (iVar6 != 0) {
      *(undefined1 *)((int)this_00 + 0xde) = 1;
      *(int *)((int)this_00 + 0xdf) = *(int *)((int)this_00 + 0xc5) - *(int *)((int)this_00 + 0x4b2)
      ;
      iVar6 = *(int *)((int)this_00 + 0xc9) - *(int *)((int)this_00 + 0x4b6);
      *(int *)((int)this_00 + 0xe3) = iVar6;
      FUN_006e1c20(DAT_00807598,*(float *)((int)this_00 + 0xdf),iVar6,0.0,
                   (float *)((int)this_00 + 0xef),(float *)((int)this_00 + 0xf3));
      *(int *)((int)this_00 + 0x10f) = local_1c;
      DAT_00858df8 = local_e0;
      return 0;
    }
    if (*(int *)((int)this_00 + 0x4a2) != 0x4e) {
      DAT_00858df8 = local_e0;
      return 0;
    }
    if (DAT_00807598 == (void *)0x0) {
      DAT_00858df8 = local_e0;
      return 0;
    }
    iVar6 = FUN_006e1dd0(DAT_00807598,*(int *)((int)this_00 + 0xc5) - *(int *)((int)this_00 + 0x4b2)
                         ,*(int *)((int)this_00 + 0xc9) - *(int *)((int)this_00 + 0x4b6),
                         (float *)((int)this_00 + 0xff),(float *)((int)this_00 + 0x103),
                         (float *)((int)this_00 + 0x107));
    if (iVar6 == 0) {
      DAT_00858df8 = local_e0;
      return 0;
    }
    puVar12 = (uint *)((int)this_00 + 0x10b);
    *(undefined1 *)((int)this_00 + 0xde) = 5;
    if ((-1 < (int)*(uint *)((int)this_00 + 0x10b)) && (DAT_00807598 != (void *)0x0)) {
      FUN_006e8ba0(DAT_00807598,*(uint *)((int)this_00 + 0x10b));
    }
    FUN_006e89b0(DAT_00807598,(int *)puVar12,&DAT_007c7cd8,8,2,0x45,
                 *(undefined4 *)((int)this_00 + 0xff),*(undefined4 *)((int)this_00 + 0x103),
                 *(float *)((int)this_00 + 0x107),0,1,1);
    FUN_006eaaa0(DAT_00807598,*puVar12,0);
    FUN_006ea460(DAT_00807598,*puVar12,-1);
    if (*(int *)((int)this_00 + 0xa9) != 0) {
      if (*(uint *)((int)this_00 + 0x1c) == 0xffffffff) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      FUN_006b3af0(*(int **)((int)this_00 + 0x60),*(uint *)((int)this_00 + 0x1c));
      DAT_00858df8 = local_e0;
      return 0;
    }
    FUN_006b8b10(*(int **)((int)this_00 + 0xad));
    DAT_00858df8 = local_e0;
    return 0;
  }
  if (uVar19 < 0xa501) {
    if (uVar19 == 0xa500) {
      *(undefined4 *)((int)this_00 + 0x4ae) = 0;
      DAT_00858df8 = local_e0;
      return 0;
    }
    if (0xa330 < uVar19) {
      if (uVar19 != 0xa4ff) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      *(undefined4 *)((int)this_00 + 0x4ae) = 1;
      DAT_00858df8 = local_e0;
      return 0;
    }
    if (uVar19 == 0xa330) {
      if (DAT_00802a38 == 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      thunk_FUN_00550bb0(DAT_00802a38);
      DAT_00858df8 = local_e0;
      return 0;
    }
    if (uVar19 < 0xa31d) {
      DAT_00858df8 = local_e0;
      return 0;
    }
    if (uVar19 < 0xa327) {
      if (DAT_007fa174 == 0) {
        DAT_00858df8 = local_e0;
        return 0;
      }
      thunk_FUN_00439100(uVar19 - 0xa31d);
      DAT_00858df8 = local_e0;
      return 0;
    }
    if (uVar19 != 0xa32f) {
      DAT_00858df8 = local_e0;
      return 0;
    }
    if (DAT_008016d8 == 0) {
      DAT_00858df8 = local_e0;
      return 0;
    }
    thunk_FUN_0052db90();
    DAT_00858df8 = local_e0;
    return 0;
  }
  if (uVar19 == 0xa501) goto switchD_00546ac9_caseD_a506;
  if (uVar19 != 0xa502) {
    if (uVar19 != 0xa503) {
      DAT_00858df8 = local_e0;
      return 0;
    }
    *(undefined4 *)((int)this_00 + 0x4a6) = 1;
    *(undefined1 *)((int)this_00 + 0x4de) = 0;
    if (DAT_00801688 == (void *)0x0) {
      DAT_00858df8 = local_e0;
      return 0;
    }
    thunk_FUN_004fad20(DAT_00801688);
    DAT_00858df8 = local_e0;
    return 0;
  }
switchD_00546ac9_caseD_a505:
  if ((*(int *)((int)this_00 + 0x4b2) <= *(int *)((int)this_00 + 0xc5)) &&
     (*(int *)((int)this_00 + 0xc5) <
      *(int *)((int)this_00 + 0x4ba) + *(int *)((int)this_00 + 0x4b2))) {
    if ((*(int *)((int)this_00 + 0x4b6) <= *(int *)((int)this_00 + 0xc9)) &&
       (*(int *)((int)this_00 + 0xc9) <
        *(int *)((int)this_00 + 0x4be) + *(int *)((int)this_00 + 0x4b6))) {
      switch(*(undefined1 *)((int)this_00 + 0xde)) {
      case 1:
        *(undefined1 *)((int)this_00 + 0xde) = 3;
      case 0:
        if (*(int *)(param_1 + 0x10) != 0xa502) {
          DAT_00858df8 = local_e0;
          return 0;
        }
        if (DAT_00808784 != 0) {
          DAT_00858df8 = local_e0;
          return 0;
        }
        if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          DAT_00858df8 = local_e0;
          return 0;
        }
        if ((DAT_00801690 != 0) && (*(short *)(DAT_00801690 + 0x172) != 2)) {
          DAT_00858df8 = local_e0;
          return 0;
        }
        if ((*(int *)((int)this_00 + 0x4a2) == 0) && (*(char *)((int)this_00 + 0x4de) == '\0')) {
          DAT_00858df8 = local_e0;
          return 0;
        }
        thunk_FUN_00548c40(0);
        DAT_00858df8 = local_e0;
        return 0;
      case 2:
        if (DAT_00808784 != 0) {
          DAT_00858df8 = local_e0;
          return 0;
        }
        if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          DAT_00858df8 = local_e0;
          return 0;
        }
        if ((DAT_00801690 != 0) && (*(short *)(DAT_00801690 + 0x172) != 2)) {
          DAT_00858df8 = local_e0;
          return 0;
        }
        if (uVar19 != 0xa502) {
          if (*(int *)((int)this_00 + 0x4a2) == 0) {
            thunk_FUN_004314e0(CONCAT31((int3)((uint)*(int *)((int)this_00 + 0xe7) >> 8),
                                        DAT_0080874d),*(int *)((int)this_00 + 0xdf),
                               *(int *)((int)this_00 + 0xe3),*(int *)((int)this_00 + 0xe7),
                               *(int *)((int)this_00 + 0xeb),(uint)(uVar19 == 0xa507));
          }
          *(undefined1 *)((int)this_00 + 0xde) = 4;
          DAT_00858df8 = local_e0;
          return 0;
        }
        if (*(int *)((int)this_00 + 0x4a2) == 0) {
          DAT_00858df8 = local_e0;
          return 0;
        }
        thunk_FUN_00548c40(1);
        goto LAB_00546f1c;
      default:
        DAT_00858df8 = local_e0;
        return 0;
      case 5:
        goto switchD_00546e07_caseD_5;
      }
    }
  }
  cVar2 = *(char *)((int)this_00 + 0xde);
  if (cVar2 == '\x01') {
    *(undefined1 *)((int)this_00 + 0xde) = 3;
    DAT_00858df8 = local_e0;
    return 0;
  }
  if (cVar2 == '\x02') {
LAB_00546f1c:
    *(undefined1 *)((int)this_00 + 0xde) = 4;
    DAT_00858df8 = local_e0;
    return 0;
  }
  if (cVar2 != '\x05') {
    DAT_00858df8 = local_e0;
    return 0;
  }
  if (uVar19 != 0xa502) {
    DAT_00858df8 = local_e0;
    return 0;
  }
  if (*(int *)((int)this_00 + 0xa9) == 0) {
    FUN_006b8a60(*(byte **)((int)this_00 + 0xad));
  }
  else if (*(uint *)((int)this_00 + 0x1c) != 0xffffffff) {
    FUN_006b34d0(*(uint **)((int)this_00 + 0x60),*(uint *)((int)this_00 + 0x1c),0xfffffffe,
                 *(uint *)((int)this_00 + 0x34),*(uint *)((int)this_00 + 0x38));
  }
  thunk_FUN_00543c90(this_00,*(int *)((int)this_00 + 0xc5),*(int *)((int)this_00 + 0xc9));
  if (DAT_00807598 != (void *)0x0) {
    uVar19 = *(uint *)((int)this_00 + 0x10b);
LAB_0054708b:
    FUN_006e8ba0(DAT_00807598,uVar19);
  }
LAB_00547090:
  *(undefined1 *)((int)this_00 + 0xde) = 0;
  *(undefined4 *)((int)this_00 + 0x10b) = 0xffffffff;
  if (*(int *)((int)this_00 + 0x4a2) != 0x4e) {
    DAT_00858df8 = local_e0;
    return 0;
  }
  iVar6 = 1;
LAB_005470b2:
  thunk_FUN_00548c40(iVar6);
  DAT_00858df8 = local_e0;
  return 0;
switchD_00546e07_caseD_5:
  if (uVar19 != 0xa502) {
    DAT_00858df8 = local_e0;
    return 0;
  }
  if (*(int *)((int)this_00 + 0xa9) == 0) {
    FUN_006b8a60(*(byte **)((int)this_00 + 0xad));
  }
  else if (*(uint *)((int)this_00 + 0x1c) != 0xffffffff) {
    FUN_006b34d0(*(uint **)((int)this_00 + 0x60),*(uint *)((int)this_00 + 0x1c),0xfffffffe,
                 *(uint *)((int)this_00 + 0x34),*(uint *)((int)this_00 + 0x38));
  }
  thunk_FUN_00543c90(this_00,*(int *)((int)this_00 + 0xc5),*(int *)((int)this_00 + 0xc9));
  if (DAT_00807598 != (void *)0x0) {
    uVar19 = *(uint *)((int)this_00 + 0x10b);
    goto LAB_0054708b;
  }
  goto LAB_00547090;
switchD_005468af_caseD_a2ff:
  if (DAT_007fb2a0 == (void *)0x0) {
    DAT_00858df8 = local_e0;
    return 0;
  }
  thunk_FUN_004ab270(uVar19 - 0xa2ff);
  DAT_00858df8 = local_e0;
  return 0;
switchD_00546590_caseD_a125:
  if (DAT_00808783 != '\x03') {
    DAT_00858df8 = local_e0;
    return 0;
  }
  thunk_FUN_0054b540(this_00);
  if (DAT_0080169c == 0) {
    DAT_00858df8 = local_e0;
    return 0;
  }
  thunk_FUN_00522d40(1);
  DAT_00858df8 = local_e0;
  return 0;
}

