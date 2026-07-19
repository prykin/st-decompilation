
void __thiscall STAllPlayersC::GetPanelInfo(STAllPlayersC *this,undefined4 param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined2 *puVar6;
  uint uVar7;
  undefined3 uVar9;
  int *piVar8;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined3 uVar10;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined2 extraout_var;
  undefined4 extraout_EDX;
  uint uVar11;
  undefined4 uVar12;
  undefined1 auStack_6c [3];
  undefined4 uStack_69;
  undefined4 uStack_64;
  undefined1 uStack_51;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 uStack_2c;
  int iStack_28;
  uint uStack_24;
  uint uStack_20;
  int iStack_1c;
  undefined2 *puStack_18;
  uint uStack_14;
  STAllPlayersC *pSStack_10;
  uint uStack_c;
  undefined2 uStack_8;
  undefined2 uStack_6;
  
  piVar8 = param_2;
  uStack_20 = 0;
  pSStack_10 = this;
  if ((char)param_1 == '\x01') {
    uVar11 = (uint)DAT_0080874d;
    iVar3 = *(int *)((int)&DAT_007f4f83 + uVar11 * 0xa62);
    iVar2 = uVar11 * 0xa62;
    if (iVar3 == 0) {
      return;
    }
    if (iVar3 != 0x3c) {
      if (iVar3 != 0x1ae) {
        iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1b8a,0,0,&DAT_007a4ccc
                                   ,s_STAllPlayersC__GetPanelInfo__1__u_007a7f38);
        if (iVar2 == 0) {
          return;
        }
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uStack_c = (uint)(ushort)(&DAT_007f4f8b)[uVar11 * 0x531];
      uVar12 = 3;
      uVar11 = 0xffffffff;
      goto LAB_0043cb5c;
    }
    if ((&DAT_007f4f91)[uVar11 * 0x531] != 1) {
      if ((ushort)(&DAT_007f4f91)[uVar11 * 0x531] < 2) {
        *(undefined1 *)param_2 = 0;
        return;
      }
      *(undefined1 *)param_2 = 2;
      if (*(int *)((int)&DAT_007f5023 + (uint)DAT_0080874d * 0xa62) == 0) {
        *(undefined1 *)((int)param_2 + 1) = 1;
      }
      else {
        *(undefined1 *)((int)param_2 + 1) = 0;
      }
      *(undefined1 *)((int)param_2 + 2) = 1;
      iVar3 = thunk_FUN_004406c0(DAT_0080874d);
      *(char *)((int)piVar8 + 7) = (char)iVar3;
      iStack_1c = *(int *)((int)&DAT_007f4f8d + iVar2);
      uStack_14 = *(int *)(iStack_1c + 0xc);
      *(undefined4 *)((int)piVar8 + 0x2a) = 0;
      *(undefined1 *)((int)piVar8 + 0x2e) = 0;
      *(undefined1 *)((int)piVar8 + 0x1d) = 1;
      uStack_24 = 0;
      if ((int)uStack_14 < 1) {
        return;
      }
      do {
        uVar11 = uStack_24;
        FUN_006acc70(iStack_1c,uStack_24,&uStack_c);
        if ((short)uStack_c != -1) {
          piVar4 = (int *)GetObjPtr(pSStack_10,
                                    CONCAT31((int3)((uint)extraout_ECX >> 8),
                                             *(undefined1 *)((int)&DAT_007f4f87 + iVar2)),uStack_c,1
                                   );
          thunk_FUN_004162b0(piVar4,&uStack_6,&uStack_8,(undefined2 *)((int)&param_1 + 2));
          *(undefined1 *)((int)piVar8 + (0x2e - param_1._2_2_)) = 1;
          (**(code **)(*piVar4 + 0x30))(auStack_6c);
          uStack_34 = uStack_64;
          uStack_30 = uStack_69;
          uStack_2c = uStack_51;
          Library::DKW::TBL::FUN_006ae1c0(*(uint **)((int)piVar8 + 0x32),&uStack_34);
          uVar11 = uStack_24;
        }
        uStack_24 = uVar11 + 1;
      } while ((int)uStack_24 < (int)uStack_14);
      return;
    }
    iVar3 = *(int *)((int)&DAT_007f4f8d + iVar2);
    uVar11 = 0;
    uStack_14 = *(int *)(iVar3 + 0xc);
    if ((int)uStack_14 < 1) {
      return;
    }
    while (FUN_006acc70(iVar3,uVar11,&uStack_c), (short)uStack_c == -1) {
      uVar11 = uVar11 + 1;
      if ((int)uStack_14 <= (int)uVar11) {
        return;
      }
    }
    uVar11 = CONCAT31((int3)(uStack_c >> 8),*(undefined1 *)((int)&DAT_007f4f87 + iVar2));
  }
  else {
    if ((char)param_1 == '\x02') {
      uVar11 = (uint)DAT_0080874d;
      iVar3 = *(int *)((int)&DAT_007f4f83 + uVar11 * 0xa62);
      iVar2 = uVar11 * 0xa62;
      if (iVar3 == 0) {
        return;
      }
      if (iVar3 != 0x3c) {
        if (iVar3 != 0x1ae) {
          iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1d16,0,0,
                                     &DAT_007a4ccc,s_STAllPlayersC__GetPanelInfo__2__u_007a7efc);
          if (iVar2 == 0) {
            return;
          }
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uStack_c = (uint)(ushort)(&DAT_007f4f8b)[uVar11 * 0x531];
        uVar12 = 3;
        uVar11 = 0xffffffff;
        goto LAB_0043ca35;
      }
      if ((&DAT_007f4f91)[uVar11 * 0x531] == 1) {
        iVar3 = *(int *)((int)&DAT_007f4f8d + iVar2);
        uVar11 = 0;
        uStack_14 = *(int *)(iVar3 + 0xc);
        if ((int)uStack_14 < 1) {
          return;
        }
        while (FUN_006acc70(iVar3,uVar11,&uStack_c), (short)uStack_c == -1) {
          uVar11 = uVar11 + 1;
          if ((int)uStack_14 <= (int)uVar11) {
            return;
          }
        }
        uVar11 = CONCAT31((int3)(uStack_c >> 8),*(undefined1 *)((int)&DAT_007f4f87 + iVar2));
        goto LAB_0043ca31;
      }
      if ((ushort)(&DAT_007f4f91)[uVar11 * 0x531] < 2) {
        *(undefined1 *)((int)param_2 + 5) = 0;
        return;
      }
      *(undefined1 *)((int)param_2 + 5) = 2;
      iVar3 = thunk_FUN_004406c0(DAT_0080874d);
      *(char *)(piVar8 + 1) = (char)iVar3;
      iStack_1c = *(int *)((int)&DAT_007f4f8d + iVar2);
      uStack_14 = *(uint *)(iStack_1c + 0xc);
      uVar11 = 0;
      if (0 < (int)uStack_14) {
        do {
          FUN_006acc70(iStack_1c,uVar11,&uStack_c);
          if ((short)uStack_c != -1) {
            uVar5 = GetObjPtr(this,CONCAT31((int3)((uint)extraout_ECX_00 >> 8),DAT_0080874d),
                              uStack_c,1);
            iVar2 = thunk_FUN_00493cd0(uVar5);
            if (iVar2 == 0) break;
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)uStack_14);
      }
      if (uVar11 == uStack_14) {
        *(undefined1 *)((int)piVar8 + 0x15) = 0;
        *(undefined1 *)(piVar8 + 2) = 0;
        *(undefined1 *)((int)piVar8 + 7) = 0;
        return;
      }
      *(undefined1 *)(piVar8 + 2) = 1;
      if (*(int *)(&DAT_007f4e21 + (uint)DAT_0080874d * 0xa62) == 0) {
LAB_0043c293:
        *(undefined1 *)((int)piVar8 + 0x15) = 0;
      }
      else {
        uVar11 = 0;
        *(undefined1 *)((int)piVar8 + 0x15) = 3;
        if (0 < (int)uStack_14) {
          do {
            FUN_006acc70(iStack_1c,uVar11,&uStack_c);
            if ((short)uStack_c != -1) {
              uVar5 = GetObjPtr(this,CONCAT31((int3)((uint)extraout_ECX_01 >> 8),DAT_0080874d),
                                uStack_c,1);
              iVar2 = thunk_FUN_0042b760(CONCAT31((int3)(uVar5 >> 8),DAT_0080874d),
                                         CONCAT22(extraout_var,*(undefined2 *)(uVar5 + 0x30)));
              if ((iVar2 != 0) &&
                 (*(undefined1 *)((int)piVar8 + 0x15) = 1, *(int *)(iVar2 + 0x1c) == 0)) break;
            }
            uVar11 = uVar11 + 1;
          } while ((int)uVar11 < (int)uStack_14);
        }
        if (uVar11 == uStack_14) {
          if (*(char *)((int)piVar8 + 0x15) == '\x03') goto LAB_0043c293;
          if (*(char *)((int)piVar8 + 0x15) == '\x01') {
            *(undefined1 *)((int)piVar8 + 0x15) = 3;
          }
        }
      }
      *(undefined1 *)((int)piVar8 + 7) = 1;
      uVar11 = thunk_FUN_0044ce40(this);
      puStack_18 = thunk_FUN_0044d320(uVar11);
      param_2 = (int *)((int)piVar8 + 0xf);
      puVar6 = puStack_18;
      piVar4 = param_2;
      do {
        *(undefined1 *)((int)piVar4 + -6) = *(undefined1 *)((int)puVar6 + 1);
        *(undefined1 *)piVar4 = *(undefined1 *)puVar6;
        piVar4 = (int *)((int)piVar4 + 1);
        puVar6 = puVar6 + 1;
      } while ((int)((-0xf - (int)piVar8) + (int)piVar4) < 6);
      FUN_006ab060(&puStack_18);
      uVar5 = 0;
      *(undefined1 *)((int)piVar8 + 0x39) = 1;
      *(undefined1 *)(piVar8 + 0xe) = 1;
      *(undefined1 *)((int)piVar8 + 0x37) = 1;
      *(undefined1 *)((int)piVar8 + 0x36) = 1;
      if (0 < (int)uStack_14) {
        do {
          FUN_006acc70(iStack_1c,uVar5,&uStack_c);
          if ((short)uStack_c != -1) {
            uVar7 = GetObjPtr(pSStack_10,CONCAT31((int3)(uStack_c >> 8),DAT_0080874d),uStack_c,1);
            *(undefined1 *)(*(int *)(uVar7 + 0x7ee) + 0x36 + (int)piVar8) = 3;
          }
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < (int)uStack_14);
      }
      if (uVar11 < 0x40001) {
        if (uVar11 == 0x40000) {
          *piVar8 = 0x19;
        }
        else if (uVar11 < 0x81) {
          if (uVar11 == 0x80) {
            *piVar8 = 9;
          }
          else if (uVar11 == 2) {
            *piVar8 = 5;
          }
          else if (uVar11 == 4) {
            *piVar8 = 0xb;
          }
          else if (uVar11 == 8) {
            *piVar8 = 0x11;
          }
        }
        else if (uVar11 == 0x100) {
          *piVar8 = 0x15;
        }
        else if (uVar11 == 0x10000) {
          *piVar8 = 0x22;
        }
        else if (uVar11 == 0x20000) {
          *piVar8 = 0x1a;
        }
      }
      else if (uVar11 < 0x400001) {
        if (uVar11 == 0x400000) {
          *piVar8 = 0x21;
        }
        else if (uVar11 == 0x80000) {
          *piVar8 = 0x1c;
        }
        else if (uVar11 == 0x100000) {
          *piVar8 = 0x1d;
        }
        else if (uVar11 == 0x200000) {
          *piVar8 = 0x1b;
        }
      }
      else if (uVar11 == 0x800000) {
        *piVar8 = 0x23;
      }
      else if (uVar11 == 0x1000000) {
        *piVar8 = 0x24;
      }
      iStack_28 = 0;
      uStack_24 = 0;
      uVar5 = uStack_20;
      if (0 < (int)uStack_14) {
        do {
          FUN_006acc70(iStack_1c,uStack_24,&uStack_c);
          if ((short)uStack_c != -1) {
            iStack_28 = iStack_28 + 1;
            uVar7 = GetObjPtr(pSStack_10,CONCAT31((int3)(uStack_c >> 8),DAT_0080874d),uStack_c,1);
            if (iStack_28 == 1) {
              uVar5 = (uint)*(ushort *)(uVar7 + 0x30);
            }
            else if (uVar5 != *(ushort *)(uVar7 + 0x30)) {
              return;
            }
          }
          uStack_24 = uStack_24 + 1;
        } while ((int)uStack_24 < (int)uStack_14);
        if (uVar5 == 0xffff) {
          return;
        }
      }
      uVar9 = (undefined3)(uStack_24 >> 8);
      uVar10 = (undefined3)(uStack_14 >> 8);
      if (0x1000 < uVar11) {
        if (uVar11 < 0x100001) {
          if (uVar11 == 0x100000) {
            piVar4 = (int *)thunk_FUN_0042b760(CONCAT31(uVar9,DAT_0080874d),uVar5);
            uVar12 = (**(code **)(*piVar4 + 0xc))();
            switch(uVar12) {
            case 1:
            case 7:
              goto switchD_0043c594_caseD_1;
            default:
              return;
            case 3:
              goto switchD_0043c594_caseD_3;
            case 0x11:
              goto switchD_0043c594_caseD_4;
            case 0x13:
              goto switchD_0043c594_caseD_2;
            }
          }
          if (uVar11 < 0x20001) {
            if (uVar11 == 0x20000) {
              piVar4 = (int *)thunk_FUN_0042b760(CONCAT31(uVar10,DAT_0080874d),uVar5);
              uVar12 = (**(code **)(*piVar4 + 0xc))();
              switch(uVar12) {
              case 1:
              case 7:
                goto switchD_0043c594_caseD_1;
              default:
                return;
              case 3:
                goto switchD_0043c594_caseD_3;
              case 8:
                goto switchD_0043c594_caseD_2;
              case 10:
                goto switchD_0043c594_caseD_e;
              case 0x11:
                goto switchD_0043c594_caseD_4;
              }
            }
            if (uVar11 == 0x2000) {
              piVar4 = (int *)thunk_FUN_0042b760(CONCAT31(uVar9,DAT_0080874d),uVar5);
              uVar12 = (**(code **)(*piVar4 + 0xc))();
              switch(uVar12) {
              case 1:
              case 7:
                goto switchD_0043c5d9_caseD_1;
              case 2:
                goto switchD_0043c594_caseD_2;
              case 3:
                goto switchD_0043c594_caseD_3;
              case 4:
                goto switchD_0043c594_caseD_4;
              default:
                return;
              case 6:
                goto switchD_0043c594_caseD_e;
              }
            }
            if (uVar11 != 0x10000) {
              return;
            }
            piVar4 = (int *)thunk_FUN_0042b760(CONCAT31(uVar10,DAT_0080874d),uVar5);
            uVar12 = (**(code **)(*piVar4 + 0xc))();
            switch(uVar12) {
            case 1:
            case 7:
              goto switchD_0043c594_caseD_1;
            case 2:
              goto switchD_0043c594_caseD_2;
            case 3:
              goto switchD_0043c594_caseD_3;
            default:
              return;
            case 0xf:
              goto switchD_0043c594_caseD_e;
            case 0x11:
              goto switchD_0043c594_caseD_4;
            }
          }
          if (uVar11 == 0x40000) {
            piVar4 = (int *)thunk_FUN_0042b760(CONCAT31(uVar9,DAT_0080874d),uVar5);
            uVar12 = (**(code **)(*piVar4 + 0xc))();
            switch(uVar12) {
            case 1:
            case 7:
              goto switchD_0043c594_caseD_1;
            default:
              return;
            case 3:
              goto switchD_0043c594_caseD_3;
            case 9:
              goto switchD_0043c594_caseD_2;
            case 0x11:
              goto switchD_0043c594_caseD_4;
            }
          }
          if (uVar11 != 0x80000) {
            return;
          }
          piVar4 = (int *)thunk_FUN_0042b760(CONCAT31(uVar9,DAT_0080874d),uVar5);
          uVar12 = (**(code **)(*piVar4 + 0xc))();
          switch(uVar12) {
          case 1:
          case 7:
            goto switchD_0043c594_caseD_1;
          case 2:
            goto switchD_0043c594_caseD_2;
          case 3:
            goto switchD_0043c594_caseD_3;
          default:
            return;
          case 0x11:
            goto switchD_0043c594_caseD_4;
          }
        }
        if (uVar11 < 0x800001) {
          if (uVar11 == 0x800000) {
            piVar4 = (int *)thunk_FUN_0042b760(CONCAT31(uVar9,DAT_0080874d),uVar5);
            uVar12 = (**(code **)(*piVar4 + 0xc))();
            switch(uVar12) {
            case 1:
            case 7:
              goto switchD_0043c594_caseD_1;
            case 2:
              goto switchD_0043c594_caseD_2;
            case 3:
              goto switchD_0043c594_caseD_3;
            default:
              return;
            case 0x11:
              goto switchD_0043c594_caseD_4;
            }
          }
          if (uVar11 == 0x200000) {
            piVar4 = (int *)thunk_FUN_0042b760(CONCAT31(uVar9,DAT_0080874d),uVar5);
            uVar12 = (**(code **)(*piVar4 + 0xc))();
            switch(uVar12) {
            case 1:
            case 7:
              goto switchD_0043c594_caseD_1;
            default:
              return;
            case 3:
              goto switchD_0043c594_caseD_3;
            case 0xb:
            case 0xc:
              goto switchD_0043c594_caseD_2;
            case 0x11:
              goto switchD_0043c594_caseD_4;
            }
          }
          if (uVar11 != 0x400000) {
            return;
          }
          piVar4 = (int *)thunk_FUN_0042b760(CONCAT31(uVar9,DAT_0080874d),uVar5);
          uVar12 = (**(code **)(*piVar4 + 0xc))();
          switch(uVar12) {
          case 1:
          case 7:
            goto switchD_0043c594_caseD_1;
          case 2:
            goto switchD_0043c594_caseD_2;
          case 3:
            goto switchD_0043c594_caseD_3;
          default:
            return;
          case 0xd:
            goto switchD_0043c594_caseD_e;
          case 0x11:
            goto switchD_0043c594_caseD_4;
          }
        }
        if (uVar11 == 0x1000000) {
          piVar4 = (int *)thunk_FUN_0042b760(CONCAT31(uVar9,DAT_0080874d),uVar5);
          uVar12 = (**(code **)(*piVar4 + 0xc))();
          switch(uVar12) {
          case 1:
          case 7:
            goto switchD_0043c594_caseD_1;
          default:
            return;
          case 3:
            goto switchD_0043c594_caseD_3;
          case 0x11:
            goto switchD_0043c594_caseD_4;
          }
        }
        if (uVar11 != 0x2000000) {
          return;
        }
        piVar4 = (int *)thunk_FUN_0042b760(CONCAT31(uVar9,DAT_0080874d),uVar5);
        uVar12 = (**(code **)(*piVar4 + 0xc))();
        switch(uVar12) {
        case 1:
        case 7:
          goto switchD_0043c594_caseD_1;
        case 2:
          goto switchD_0043c594_caseD_2;
        case 3:
          goto switchD_0043c594_caseD_3;
        default:
          return;
        case 0x11:
          goto switchD_0043c594_caseD_4;
        }
      }
      if (uVar11 == 0x1000) goto switchD_0043c4d2_caseD_28;
      if (0x40 < uVar11) {
        if (0x200 < uVar11) {
          if (uVar11 == 0x400) {
            piVar4 = (int *)thunk_FUN_0042b760(CONCAT31(uVar9,DAT_0080874d),uVar5);
            uVar12 = (**(code **)(*piVar4 + 0xc))();
            switch(uVar12) {
            case 1:
            case 7:
              goto switchD_0043c594_caseD_1;
            default:
              return;
            case 3:
              goto switchD_0043c594_caseD_3;
            case 4:
              goto switchD_0043c594_caseD_4;
            case 0xb:
            case 0xc:
              goto switchD_0043c594_caseD_e;
            case 0x15:
              goto switchD_0043c594_caseD_2;
            }
          }
          if (uVar11 != 0x800) {
            return;
          }
          piVar4 = (int *)thunk_FUN_0042b760(CONCAT31(uVar10,DAT_0080874d),uVar5);
          uVar12 = (**(code **)(*piVar4 + 0xc))();
          switch(uVar12) {
          case 1:
          case 7:
            goto switchD_0043c594_caseD_1;
          default:
            return;
          case 3:
            goto switchD_0043c594_caseD_3;
          case 4:
            goto switchD_0043c594_caseD_4;
          case 9:
            goto switchD_0043c594_caseD_2;
          case 0x13:
            goto switchD_0043c594_caseD_e;
          }
        }
        if (uVar11 == 0x200) {
          piVar4 = (int *)thunk_FUN_0042b760(CONCAT31(uVar10,DAT_0080874d),uVar5);
          uVar12 = (**(code **)(*piVar4 + 0xc))();
          switch(uVar12) {
          case 1:
          case 7:
            goto switchD_0043c5d9_caseD_1;
          default:
            return;
          case 3:
            goto switchD_0043c594_caseD_3;
          case 4:
            goto switchD_0043c594_caseD_4;
          case 8:
            goto switchD_0043c594_caseD_2;
          case 10:
            goto switchD_0043c594_caseD_e;
          }
        }
        if ((uVar11 != 0x80) && (uVar11 != 0x100)) {
          return;
        }
        piVar4 = (int *)thunk_FUN_0042b760(CONCAT31(uVar9,DAT_0080874d),uVar5);
        uVar12 = (**(code **)(*piVar4 + 0xc))();
        switch(uVar12) {
        case 1:
        case 7:
          goto switchD_0043c5d9_caseD_1;
        case 2:
          goto switchD_0043c594_caseD_2;
        case 3:
          goto switchD_0043c594_caseD_3;
        default:
          return;
        }
      }
      if (uVar11 == 0x40) {
        piVar4 = (int *)thunk_FUN_0042b760(CONCAT31(uVar10,DAT_0080874d),uVar5);
        uVar12 = (**(code **)(*piVar4 + 0xc))();
        switch(uVar12) {
        case 1:
        case 7:
          goto switchD_0043c594_caseD_1;
        case 2:
          goto switchD_0043c594_caseD_2;
        case 3:
          goto switchD_0043c594_caseD_3;
        case 4:
          goto switchD_0043c594_caseD_4;
        default:
          return;
        case 0xe:
          goto switchD_0043c594_caseD_e;
        }
      }
      switch(uVar11) {
      case 1:
        piVar4 = (int *)thunk_FUN_0042b760(CONCAT31(uVar9,DAT_0080874d),uVar5);
        uVar12 = (**(code **)(*piVar4 + 0xc))();
        switch(uVar12) {
        case 1:
        case 7:
          goto switchD_0043c594_caseD_1;
        case 2:
          goto switchD_0043c594_caseD_2;
        case 3:
          goto switchD_0043c594_caseD_3;
        case 4:
          goto switchD_0043c594_caseD_4;
        case 0xf:
switchD_0043c594_caseD_e:
          *(undefined1 *)(piVar8 + 5) = 3;
          return;
        }
        break;
      case 2:
      case 4:
      case 8:
        piVar4 = (int *)thunk_FUN_0042b760(CONCAT31(uVar9,DAT_0080874d),uVar5);
        uVar12 = (**(code **)(*piVar4 + 0xc))();
        switch(uVar12) {
        case 1:
        case 7:
          goto switchD_0043c594_caseD_1;
        case 2:
          goto switchD_0043c594_caseD_2;
        case 3:
          goto switchD_0043c594_caseD_3;
        case 4:
          goto switchD_0043c594_caseD_4;
        case 0xd:
          goto switchD_0043c594_caseD_e;
        }
        break;
      case 0x10:
        piVar4 = (int *)thunk_FUN_0042b760(CONCAT31(uVar9,DAT_0080874d),uVar5);
        uVar12 = (**(code **)(*piVar4 + 0xc))();
        switch(uVar12) {
        case 1:
        case 7:
          goto switchD_0043c5d9_caseD_1;
        case 2:
          goto switchD_0043c594_caseD_2;
        case 3:
          goto switchD_0043c594_caseD_3;
        case 4:
          goto switchD_0043c594_caseD_4;
        }
        break;
      case 0x28:
switchD_0043c4d2_caseD_28:
        piVar4 = (int *)thunk_FUN_0042b760(CONCAT31(uVar9,DAT_0080874d),uVar5);
        uVar12 = (**(code **)(*piVar4 + 0xc))();
        switch(uVar12) {
        case 1:
        case 7:
switchD_0043c5d9_caseD_1:
          *(undefined1 *)param_2 = 3;
          return;
        case 2:
switchD_0043c594_caseD_2:
          *(undefined1 *)(piVar8 + 4) = 3;
          return;
        case 3:
switchD_0043c594_caseD_3:
          *(undefined1 *)((int)piVar8 + 0x11) = 3;
          return;
        case 4:
switchD_0043c594_caseD_4:
          *(undefined1 *)((int)piVar8 + 0x12) = 3;
          return;
        }
      }
      return;
    }
    if ((char)param_1 == '\x04') {
      uVar11 = (uint)DAT_0080874d;
      iVar2 = *(int *)((int)&DAT_007f4fd3 + uVar11 * 0xa62);
      if (0x19a < iVar2) {
        if (iVar2 == 0x1a4) {
          uStack_c = (uint)(ushort)(&DAT_007f4fdb)[uVar11 * 0x531];
          uVar12 = 5;
          uVar11 = 0xffffffff;
        }
        else {
          if (iVar2 != 0x1b8) {
LAB_0043ca5a:
            iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1d47,0,0,
                                       &DAT_007a4ccc,s_STAllPlayersC__GetPanelInfo__4__u_007a7ec0);
            if (iVar2 == 0) {
              return;
            }
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          uStack_c = (uint)(ushort)(&DAT_007f4fdb)[uVar11 * 0x531];
          uVar12 = 6;
          uVar11 = 0xffffffff;
        }
        goto LAB_0043ca35;
      }
      if (iVar2 != 0x19a) {
        if (iVar2 == 0) {
          return;
        }
        if (iVar2 == 0x5a) {
          uStack_c = (uint)(ushort)(&DAT_007f4fdb)[uVar11 * 0x531];
          uVar12 = 4;
          uVar11 = 0xffffffff;
        }
        else {
          if (iVar2 != 0x172) goto LAB_0043ca5a;
          uStack_c = (uint)(ushort)(&DAT_007f4fdb)[uVar11 * 0x531];
          uVar12 = 2;
          uVar11 = 0xffffffff;
        }
        goto LAB_0043ca35;
      }
      if ((&DAT_007f4fe1)[uVar11 * 0x531] != 1) {
        return;
      }
      iVar2 = *(int *)((int)&DAT_007f4fdd + uVar11 * 0xa62);
      uVar5 = 0;
      uStack_14 = *(int *)(iVar2 + 0xc);
      if ((int)uStack_14 < 1) {
        return;
      }
      while (FUN_006acc70(iVar2,uVar5,&uStack_c), (short)uStack_c == -1) {
        uVar5 = uVar5 + 1;
        if ((int)uStack_14 <= (int)uVar5) {
          return;
        }
      }
      uVar11 = CONCAT31((int3)(uStack_c >> 8),*(undefined1 *)((int)&DAT_007f4fd7 + uVar11 * 0xa62));
LAB_0043ca31:
      uVar12 = 1;
LAB_0043ca35:
      piVar8 = (int *)GetObjPtr(pSStack_10,uVar11,uStack_c,uVar12);
      (**(code **)(*piVar8 + 0x34))(param_2);
      return;
    }
    if ((char)param_1 != '\x05') {
      if ((char)param_1 == '\x06') {
        if (*param_2 != 0) {
          *(undefined4 *)(*param_2 + 0xc) = 0;
        }
        uVar11 = (uint)DAT_0080874d;
        iVar2 = *(int *)((int)&DAT_007f4fd3 + uVar11 * 0xa62);
        if (iVar2 == 0) {
          return;
        }
        if (iVar2 != 0x19a) {
          iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1d95,0,0,
                                     &DAT_007a4ccc,s_STAllPlayersC__GetPanelInfo__6__u_007a7e48);
          if (iVar2 == 0) {
            return;
          }
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if ((&DAT_007f4fe1)[uVar11 * 0x531] != 1) {
          return;
        }
        iVar2 = *(int *)((int)&DAT_007f4fdd + uVar11 * 0xa62);
        uVar5 = 0;
        uStack_14 = *(int *)(iVar2 + 0xc);
        if ((int)uStack_14 < 1) {
          return;
        }
        do {
          FUN_006acc70(iVar2,uVar5,&uStack_c);
          if ((short)uStack_c != -1) {
            piVar8 = (int *)GetObjPtr(pSStack_10,
                                      CONCAT31((int3)(uStack_c >> 8),
                                               *(undefined1 *)((int)&DAT_007f4fd7 + uVar11 * 0xa62))
                                      ,uStack_c,1);
            (**(code **)(*piVar8 + 0x38))(param_2);
            return;
          }
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < (int)uStack_14);
        return;
      }
      if ((char)param_1 == '\a') {
        *(undefined4 *)(*param_2 + 0xc) = 0;
        *(undefined4 *)(param_2[1] + 0xc) = 0;
        *(undefined4 *)(param_2[2] + 0xc) = 0;
        *(undefined4 *)(param_2[3] + 0xc) = 0;
        uVar11 = (uint)DAT_0080874d;
        iVar2 = *(int *)((int)&DAT_007f4fd3 + uVar11 * 0xa62);
        if (iVar2 == 0) {
          return;
        }
        if (iVar2 != 0x19a) {
          iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1db2,0,0,
                                     &DAT_007a4ccc,s_STAllPlayersC__GetPanelInfo__7__u_007a7e0c);
          if (iVar2 == 0) {
            return;
          }
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if ((&DAT_007f4fe1)[uVar11 * 0x531] != 1) {
          return;
        }
        iVar2 = *(int *)((int)&DAT_007f4fdd + uVar11 * 0xa62);
        uVar5 = 0;
        uStack_14 = *(int *)(iVar2 + 0xc);
        if ((int)uStack_14 < 1) {
          return;
        }
        do {
          FUN_006acc70(iVar2,uVar5,&uStack_c);
          if ((short)uStack_c != -1) {
            piVar8 = (int *)GetObjPtr(pSStack_10,
                                      CONCAT31((int3)(uStack_c >> 8),
                                               *(undefined1 *)((int)&DAT_007f4fd7 + uVar11 * 0xa62))
                                      ,uStack_c,1);
            (**(code **)(*piVar8 + 0x3c))(param_2);
            return;
          }
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < (int)uStack_14);
        return;
      }
      if ((char)param_1 == '\b') {
        uVar11 = (uint)DAT_0080874d;
        *(undefined4 *)(*param_2 + 0xc) = 0;
        iVar2 = uVar11 * 0xa62;
        *(undefined4 *)(param_2[1] + 0xc) = 0;
        *(undefined4 *)(param_2[2] + 0xc) = 0;
        *(undefined4 *)(param_2[3] + 0xc) = 0;
        *(undefined4 *)(param_2[4] + 0xc) = 0;
        if (*(int *)((int)&DAT_007f4f83 + iVar2) == 0) {
          return;
        }
        if (*(int *)((int)&DAT_007f4f83 + iVar2) != 0x3c) {
          iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1dd0,0,0,
                                     &DAT_007a4ccc,s_STAllPlayersC__GetPanelInfo__8__u_007a7dd0);
          if (iVar2 == 0) {
            return;
          }
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if ((&DAT_007f4f91)[uVar11 * 0x531] == 0) {
          return;
        }
        iStack_1c = *(int *)((int)&DAT_007f4f8d + iVar2);
        uVar11 = 0;
        uStack_14 = *(int *)(iStack_1c + 0xc);
        if ((int)uStack_14 < 1) {
          return;
        }
        do {
          FUN_006acc70(iStack_1c,uVar11,&uStack_c);
          if ((short)uStack_c != -1) {
            piVar4 = (int *)GetObjPtr(pSStack_10,
                                      CONCAT31((int3)(uStack_c >> 8),
                                               *(undefined1 *)((int)&DAT_007f4f87 + iVar2)),uStack_c
                                      ,1);
            (**(code **)(*piVar4 + 0x40))(piVar8);
            return;
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)uStack_14);
        return;
      }
      if ((char)param_1 == '\t') {
        uVar11 = (uint)DAT_0080874d;
        iVar2 = *(int *)((int)&DAT_007f4fd3 + uVar11 * 0xa62);
        if (iVar2 == 0) {
          return;
        }
        if (iVar2 != 0x19a) {
          iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1dec,0,0,
                                     &DAT_007a4ccc,s_STAllPlayersC__GetPanelInfo__9__u_007a7d94);
          if (iVar2 == 0) {
            return;
          }
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if ((&DAT_007f4fe1)[uVar11 * 0x531] != 1) {
          return;
        }
        iVar2 = *(int *)((int)&DAT_007f4fdd + uVar11 * 0xa62);
        uVar5 = 0;
        uStack_14 = *(int *)(iVar2 + 0xc);
        if ((int)uStack_14 < 1) {
          return;
        }
        do {
          FUN_006acc70(iVar2,uVar5,&uStack_c);
          if ((short)uStack_c != -1) {
            piVar8 = (int *)GetObjPtr(pSStack_10,
                                      CONCAT31((int3)(uStack_c >> 8),
                                               *(undefined1 *)((int)&DAT_007f4fd7 + uVar11 * 0xa62))
                                      ,uStack_c,1);
            (**(code **)(*piVar8 + 0x44))(param_2);
            return;
          }
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < (int)uStack_14);
        return;
      }
      if ((char)param_1 == '\n') {
        uVar11 = (uint)DAT_0080874d;
        iStack_28 = (int)&DAT_007f4fd3 + uVar11 * 0xa62;
        if (*(int *)((int)&DAT_007f4fd3 + uVar11 * 0xa62) != 0x19a) {
          return;
        }
        if ((&DAT_007f4fe1)[uVar11 * 0x531] != 1) {
          return;
        }
        iVar2 = *(int *)((int)&DAT_007f4fdd + uVar11 * 0xa62);
        uVar11 = 0;
        iVar3 = *(int *)(iVar2 + 0xc);
        if (iVar3 < 1) {
          return;
        }
        do {
          FUN_006acc70(iVar2,uVar11,&uStack_c);
          if ((short)uStack_c != -1) {
            piVar8 = (int *)GetObjPtr(pSStack_10,
                                      CONCAT31((int3)(uStack_c >> 8),*(undefined1 *)(iStack_28 + 4))
                                      ,uStack_c,1);
            (**(code **)(*piVar8 + 0x48))(param_2);
            return;
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < iVar3);
        return;
      }
      if ((char)param_1 != '\v') {
        if ((char)param_1 == '\f') {
          if (*param_2 != 0) {
            *(undefined4 *)(*param_2 + 0xc) = 0;
          }
          uVar11 = (uint)DAT_0080874d;
          iVar2 = *(int *)((int)&DAT_007f4fd3 + uVar11 * 0xa62);
          if (iVar2 == 0) {
            return;
          }
          if (iVar2 != 0x19a) {
            iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1ea3,0,0,
                                       &DAT_007a4ccc,s_STAllPlayersC__GetPanelInfo__12__007a7d14);
            if (iVar2 == 0) {
              return;
            }
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if ((&DAT_007f4fe1)[uVar11 * 0x531] != 1) {
            return;
          }
          iVar2 = *(int *)((int)&DAT_007f4fdd + uVar11 * 0xa62);
          uVar5 = 0;
          uStack_14 = *(int *)(iVar2 + 0xc);
          if ((int)uStack_14 < 1) {
            return;
          }
          do {
            FUN_006acc70(iVar2,uVar5,&uStack_c);
            if ((short)uStack_c != -1) {
              piVar8 = (int *)GetObjPtr(pSStack_10,
                                        CONCAT31((int3)(uStack_c >> 8),
                                                 *(undefined1 *)
                                                  ((int)&DAT_007f4fd7 + uVar11 * 0xa62)),uStack_c,1)
              ;
              (**(code **)(*piVar8 + 0x50))(param_2);
              return;
            }
            uVar5 = uVar5 + 1;
          } while ((int)uVar5 < (int)uStack_14);
          return;
        }
        if ((char)param_1 == '\x0e') {
          iStack_28 = 4;
          piVar4 = (int *)((int)&DAT_007f4f9d + (uint)DAT_0080874d * 0xa62);
          do {
            iVar2 = *(int *)((int)piVar4 + -10);
            param_2 = piVar4;
            if (iVar2 == 0) {
LAB_0043d41d:
              *(undefined1 *)piVar8 = 0;
            }
            else if (iVar2 == 0x3c) {
              if (*(ushort *)(piVar4 + 1) == 1) {
                uVar11 = 0;
                iVar2 = *piVar4;
                uStack_14 = *(int *)(iVar2 + 0xc);
                if (0 < (int)uStack_14) {
                  do {
                    FUN_006acc70(iVar2,uVar11,&uStack_c);
                    if ((short)uStack_c != -1) {
                      uVar12 = 1;
                      uVar5 = CONCAT31((int3)(uStack_c >> 8),*(undefined1 *)((int)param_2 + -6));
                      uVar11 = uStack_c;
                      goto LAB_0043d447;
                    }
                    uVar11 = uVar11 + 1;
                  } while ((int)uVar11 < (int)uStack_14);
                }
              }
              else {
                if (*(ushort *)(piVar4 + 1) < 2) goto LAB_0043d41d;
                *(undefined1 *)piVar8 = 2;
                *(undefined1 *)((int)piVar8 + 1) = 1;
                *(undefined1 *)((int)piVar8 + 6) = (&DAT_007f4e20)[(uint)DAT_0080874d * 0xa62];
              }
            }
            else {
              if (iVar2 != 0x1ae) {
                iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1ecc,0,0,
                                           &DAT_007a4ccc,s_STAllPlayersC__GetPanelInfo__14__007a7cd4
                                          );
                if (iVar2 != 0) {
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
                goto LAB_0043d41d;
              }
              uVar12 = 3;
              uVar5 = 0xffffffff;
              uVar11 = CONCAT22((short)((uint)piVar4 >> 0x10),*(undefined2 *)((int)piVar4 + -2));
LAB_0043d447:
              piVar4 = (int *)GetObjPtr(pSStack_10,uVar5,uVar11,uVar12);
              (**(code **)(*piVar4 + 0x58))(piVar8);
            }
            piVar4 = param_2 + 4;
            piVar8 = (int *)((int)piVar8 + 0xb);
            iStack_28 = iStack_28 + -1;
            if (iStack_28 == 0) {
              return;
            }
          } while( true );
        }
        if ((char)param_1 == '\x0f') {
          param_2 = (int *)0x4;
          puVar6 = &DAT_007f4feb + (uint)DAT_0080874d * 0x531;
          do {
            iVar2 = *(int *)(puVar6 + -4);
            if (iVar2 < 0x19b) {
              if (iVar2 == 0x19a) {
                if (puVar6[3] == 1) {
                  iStack_1c = *(int *)(puVar6 + 1);
                  uVar11 = 0;
                  uStack_14 = *(int *)(iStack_1c + 0xc);
                  if (0 < (int)uStack_14) {
                    do {
                      FUN_006acc70(iStack_1c,uVar11,&uStack_c);
                      if ((short)uStack_c != -1) {
                        uVar5 = CONCAT31((int3)((uint)extraout_ECX_03 >> 8),
                                         *(undefined1 *)(puVar6 + -2));
                        uVar12 = 1;
                        uVar11 = uStack_c;
                        goto LAB_0043d5b7;
                      }
                      uVar11 = uVar11 + 1;
                    } while ((int)uVar11 < (int)uStack_14);
                  }
                  goto LAB_0043d5c4;
                }
              }
              else if (iVar2 != 0) {
                if (iVar2 == 0x5a) {
                  uVar12 = 4;
                }
                else {
                  if (iVar2 != 0x172) goto LAB_0043d581;
                  uVar12 = 2;
                }
                goto LAB_0043d5b1;
              }
LAB_0043d5a6:
              *(undefined1 *)piVar8 = 0;
            }
            else {
              if (iVar2 == 0x1a4) {
                uVar12 = 5;
                iVar2 = 0;
              }
              else {
                if (iVar2 != 0x1b8) {
LAB_0043d581:
                  iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1efe,0,0,
                                             &DAT_007a4ccc,
                                             s_STAllPlayersC__GetPanelInfo__15__007a7c94);
                  if (iVar2 != 0) {
                    pcVar1 = (code *)swi(3);
                    (*pcVar1)();
                    return;
                  }
                  goto LAB_0043d5a6;
                }
                uVar12 = 6;
                iVar2 = 0;
              }
LAB_0043d5b1:
              uVar5 = 0xffffffff;
              uVar11 = CONCAT22((short)((uint)iVar2 >> 0x10),*puVar6);
LAB_0043d5b7:
              piVar4 = (int *)GetObjPtr(pSStack_10,uVar5,uVar11,uVar12);
              (**(code **)(*piVar4 + 0x5c))(piVar8);
            }
LAB_0043d5c4:
            puVar6 = puVar6 + 8;
            piVar8 = (int *)((int)piVar8 + 0xb);
            param_2 = (int *)((int)param_2 + -1);
            if (param_2 == (int *)0x0) {
              return;
            }
          } while( true );
        }
        if ((char)param_1 != '\x10') {
          if ((char)param_1 == '\x11') {
            uVar11 = (uint)DAT_0080874d;
            iVar2 = *(int *)((int)&DAT_007f4f83 + uVar11 * 0xa62);
            if (iVar2 == 0) {
              return;
            }
            if (iVar2 != 0x3c) {
              iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1f4c,0,0,
                                         &DAT_007a4ccc,s_STAllPlayersC__GetPanelInfo__17__007a7c14);
              if (iVar2 == 0) {
                return;
              }
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            if ((ushort)(&DAT_007f4f91)[uVar11 * 0x531] < 2) {
              return;
            }
            iVar2 = *(int *)((int)&DAT_007f4f8d + uVar11 * 0xa62);
            iVar3 = 0;
            uVar11 = 0;
            uStack_14 = *(int *)(iVar2 + 0xc);
            if (0 < (int)uStack_14) {
              do {
                FUN_006acc70(iVar2,uVar11,&uStack_c);
                if ((short)uStack_c != -1) {
                  iVar3 = iVar3 + 1;
                  uVar5 = GetObjPtr(pSStack_10,
                                    CONCAT31((int3)((uint)extraout_ECX_04 >> 8),DAT_0080874d),
                                    uStack_c,1);
                  if (iVar3 == 1) {
                    uStack_20 = (uint)*(ushort *)(uVar5 + 0x30);
                  }
                  else if (uStack_20 != *(ushort *)(uVar5 + 0x30)) {
                    return;
                  }
                }
                uVar11 = uVar11 + 1;
              } while ((int)uVar11 < (int)uStack_14);
              if (uStack_20 == 0xffff) {
                return;
              }
            }
            piVar8 = (int *)thunk_FUN_0042b760(CONCAT31((int3)(uStack_20 >> 8),DAT_0080874d),
                                               uStack_20);
            uVar12 = (**(code **)(*piVar8 + 0x1c))();
            switch(uVar12) {
            case 0:
              *(undefined1 *)((int)param_2 + 7) = 1;
              return;
            case 1:
              *(undefined1 *)param_2 = 1;
              return;
            case 2:
              *(undefined1 *)(param_2 + 1) = 1;
              return;
            case 3:
              *(undefined1 *)((int)param_2 + 6) = 1;
              return;
            case 4:
              *(undefined1 *)((int)param_2 + 1) = 1;
              return;
            case 5:
              *(undefined1 *)((int)param_2 + 5) = 1;
              return;
            case 0xfffffffd:
              *(undefined1 *)((int)param_2 + 2) = 1;
              return;
            case 0xfffffffe:
              *(undefined1 *)((int)param_2 + 3) = 1;
              return;
            default:
              return;
            }
          }
          if ((char)param_1 != '\x12') {
            return;
          }
          uVar11 = (uint)DAT_0080874d;
          iVar2 = *(int *)((int)&DAT_007f4f83 + uVar11 * 0xa62);
          if (iVar2 == 0) {
            return;
          }
          if (iVar2 == 0x1ae) {
            piVar8 = (int *)GetObjPtr(this,0xffffffff,
                                      CONCAT22((short)((int)&DAT_007f4f83 + uVar11 * 0xa62 >> 0x10),
                                               (&DAT_007f4f8b)[uVar11 * 0x531]),3);
            (**(code **)(*piVar8 + 100))(param_2);
            return;
          }
          iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1f5d,0,0,
                                     &DAT_007a4ccc,s_STAllPlayersC__GetPanelInfo__18__007a7bd4);
          if (iVar2 == 0) {
            return;
          }
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar11 = (uint)DAT_0080874d;
        iVar2 = *(int *)((int)&DAT_007f4f83 + uVar11 * 0xa62);
        if (iVar2 == 0) {
          return;
        }
        if (iVar2 != 0x3c) {
          if (iVar2 == 0x1ae) {
            return;
          }
          iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1f22,0,0,
                                     &DAT_007a4ccc,s_STAllPlayersC__GetPanelInfo__16__007a7c54);
          if (iVar2 == 0) {
            return;
          }
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if ((&DAT_007f4f91)[uVar11 * 0x531] == 0) {
          return;
        }
        iVar2 = *(int *)((int)&DAT_007f4f8d + uVar11 * 0xa62);
        uVar5 = 0;
        uStack_14 = *(int *)(iVar2 + 0xc);
        if (0 < (int)uStack_14) {
          do {
            FUN_006acc70(iVar2,uVar5,&uStack_c);
            if ((short)uStack_c != -1) {
              piVar8 = (int *)GetObjPtr(pSStack_10,
                                        CONCAT31((int3)(uStack_c >> 8),
                                                 *(undefined1 *)
                                                  ((int)&DAT_007f4f87 + uVar11 * 0xa62)),uStack_c,1)
              ;
              (**(code **)(*piVar8 + 0x60))(param_2);
              break;
            }
            uVar5 = uVar5 + 1;
          } while ((int)uVar5 < (int)uStack_14);
        }
        if ((ushort)(&DAT_007f4f91)[uVar11 * 0x531] < 2) {
          return;
        }
        param_2[0x6c] = -1;
        param_2[0x78] = -1;
        param_2[0x84] = -1;
        return;
      }
      uVar11 = (uint)DAT_0080874d;
      iVar3 = *(int *)((int)&DAT_007f4f83 + uVar11 * 0xa62);
      iVar2 = uVar11 * 0xa62;
      if (iVar3 == 0) {
        return;
      }
      if (iVar3 != 0x3c) {
        iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1e85,0,0,&DAT_007a4ccc
                                   ,s_STAllPlayersC__GetPanelInfo__11__007a7d54);
        if (iVar2 == 0) {
          return;
        }
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((&DAT_007f4f91)[uVar11 * 0x531] == 1) {
        iVar3 = *(int *)((int)&DAT_007f4f8d + iVar2);
        uVar11 = 0;
        uStack_14 = *(int *)(iVar3 + 0xc);
        if ((int)uStack_14 < 1) {
          return;
        }
        do {
          FUN_006acc70(iVar3,uVar11,&uStack_c);
          if ((short)uStack_c != -1) {
            piVar8 = (int *)GetObjPtr(pSStack_10,
                                      CONCAT31((int3)((uint)extraout_ECX_02 >> 8),
                                               *(undefined1 *)((int)&DAT_007f4f87 + iVar2)),uStack_c
                                      ,1);
            (**(code **)(*piVar8 + 0x4c))(param_2);
            return;
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)uStack_14);
        return;
      }
      if ((ushort)(&DAT_007f4f91)[uVar11 * 0x531] < 2) {
        return;
      }
      *param_2 = 0;
      *(undefined1 *)(param_2 + 1) = 0x2b;
      *(undefined1 *)((int)param_2 + 5) = 0x2c;
      *(undefined1 *)((int)param_2 + 6) = 5;
      *(undefined1 *)((int)param_2 + 7) = 6;
      *(undefined1 *)(param_2 + 2) = 0x4d;
      *(undefined1 *)((int)param_2 + 9) = 0x2d;
      *(undefined1 *)((int)param_2 + 10) = 1;
      *(undefined1 *)(param_2 + 3) = 1;
      *(undefined1 *)((int)param_2 + 0xd) = 1;
      *(undefined1 *)((int)param_2 + 0xe) = 1;
      *(undefined1 *)((int)param_2 + 0xf) = 1;
      *(undefined1 *)((int)param_2 + 0xb) = 0;
      iVar2 = *(int *)((int)&DAT_007f4f8d + iVar2);
      uVar11 = 0;
      uStack_14 = *(uint *)(iVar2 + 0xc);
      *(undefined1 *)((int)param_2 + 0x11) = 1;
      *(undefined1 *)(param_2 + 4) = 1;
      *(undefined1 *)((int)param_2 + 0x12) = 3;
      iStack_1c = iVar2;
      if (0 < (int)uStack_14) {
        do {
          FUN_006acc70(iVar2,uVar11,&uStack_c);
          if ((short)uStack_c != -1) {
            uVar5 = GetObjPtr(pSStack_10,CONCAT31((int3)(uStack_c >> 8),DAT_0080874d),uStack_c,1);
            if (*(int *)(uVar5 + 0x7e6) == 0) {
              *(undefined1 *)((int)piVar8 + 0x11) = 3;
            }
            else {
              *(undefined1 *)(piVar8 + 4) = 3;
            }
            if ((*(char *)((int)piVar8 + 0x12) == '\x03') && (*(int *)(uVar5 + 0x7ea) == 0)) {
              *(undefined1 *)((int)piVar8 + 0x12) = 1;
            }
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)uStack_14);
      }
      uVar11 = 0;
      if (0 < (int)uStack_14) {
        do {
          FUN_006acc70(iVar2,uVar11,&uStack_c);
          if ((short)uStack_c != -1) {
            piVar4 = (int *)GetObjPtr(pSStack_10,
                                      CONCAT31((int3)((uint)extraout_EDX >> 8),DAT_0080874d),
                                      uStack_c,1);
            uVar12 = (**(code **)(*piVar4 + 0x2c))();
            switch(uVar12) {
            case 7:
            case 8:
            case 9:
            case 0xc:
            case 0x13:
            case 0x14:
            case 0x18:
            case 0x19:
            case 0x1a:
            case 0x1b:
              break;
            default:
              goto switchD_0043d1bf_caseD_a;
            }
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)uStack_14);
      }
switchD_0043d1bf_caseD_a:
      if (uVar11 == uStack_14) {
        *(undefined1 *)((int)piVar8 + 10) = 0;
        *(undefined1 *)((int)piVar8 + 0xb) = 0;
        *(undefined1 *)(piVar8 + 3) = 0;
        *(undefined1 *)((int)piVar8 + 0xd) = 0;
      }
      param_2 = (int *)(uint)(uVar11 == uStack_14);
      iVar2 = 0;
      uVar11 = 0;
      if (0 < (int)uStack_14) {
        do {
          FUN_006acc70(iStack_1c,uVar11,&uStack_c);
          if ((short)uStack_c != -1) {
            iVar2 = iVar2 + 1;
            uVar5 = GetObjPtr(pSStack_10,CONCAT31((int3)(uStack_c >> 8),DAT_0080874d),uStack_c,1);
            if (iVar2 == 1) {
              uStack_20 = (uint)*(ushort *)(uVar5 + 0x30);
            }
            else if (uStack_20 != *(ushort *)(uVar5 + 0x30)) {
              return;
            }
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)uStack_14);
      }
      if (param_2 == (int *)0x1) {
        return;
      }
      if (uStack_20 == 0xffff) {
        return;
      }
      piVar4 = (int *)thunk_FUN_0042b760(CONCAT31((int3)(uStack_20 >> 8),DAT_0080874d),uStack_20);
      uVar12 = (**(code **)(*piVar4 + 0xc))();
      switch(uVar12) {
      case 5:
        *(undefined1 *)(piVar8 + 3) = 3;
        return;
      case 6:
        *(undefined1 *)((int)piVar8 + 0xd) = 3;
        return;
      default:
        return;
      case 0x10:
        *(undefined1 *)((int)piVar8 + 0xe) = 3;
        return;
      case 0x14:
        *(undefined1 *)((int)piVar8 + 0xf) = 3;
        return;
      }
    }
    uVar11 = (uint)DAT_0080874d;
    iVar2 = *(int *)((int)&DAT_007f4fd3 + uVar11 * 0xa62);
    if (0x19a < iVar2) {
      if (iVar2 == 0x1a4) {
        uStack_c = (uint)(ushort)(&DAT_007f4fdb)[uVar11 * 0x531];
        uVar12 = 5;
        uVar11 = 0xffffffff;
      }
      else {
        if (iVar2 != 0x1b8) {
LAB_0043cb81:
          iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1d78,0,0,
                                     &DAT_007a4ccc,s_STAllPlayersC__GetPanelInfo__5__u_007a7e84);
          if (iVar2 == 0) {
            return;
          }
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uStack_c = (uint)(ushort)(&DAT_007f4fdb)[uVar11 * 0x531];
        uVar12 = 6;
        uVar11 = 0xffffffff;
      }
      goto LAB_0043cb5c;
    }
    if (iVar2 != 0x19a) {
      if (iVar2 == 0) {
        return;
      }
      if (iVar2 == 0x5a) {
        uStack_c = (uint)(ushort)(&DAT_007f4fdb)[uVar11 * 0x531];
        uVar12 = 4;
        uVar11 = 0xffffffff;
      }
      else {
        if (iVar2 != 0x172) goto LAB_0043cb81;
        uStack_c = (uint)(ushort)(&DAT_007f4fdb)[uVar11 * 0x531];
        uVar12 = 2;
        uVar11 = 0xffffffff;
      }
      goto LAB_0043cb5c;
    }
    if ((&DAT_007f4fe1)[uVar11 * 0x531] != 1) {
      return;
    }
    iVar2 = *(int *)((int)&DAT_007f4fdd + uVar11 * 0xa62);
    uVar5 = 0;
    uStack_14 = *(int *)(iVar2 + 0xc);
    if ((int)uStack_14 < 1) {
      return;
    }
    while (FUN_006acc70(iVar2,uVar5,&uStack_c), (short)uStack_c == -1) {
      uVar5 = uVar5 + 1;
      if ((int)uStack_14 <= (int)uVar5) {
        return;
      }
    }
    uVar11 = CONCAT31((int3)(uStack_c >> 8),*(undefined1 *)((int)&DAT_007f4fd7 + uVar11 * 0xa62));
  }
  uVar12 = 1;
LAB_0043cb5c:
  piVar8 = (int *)GetObjPtr(pSStack_10,uVar11,uStack_c,uVar12);
  (**(code **)(*piVar8 + 0x30))(param_2);
  return;
switchD_0043c594_caseD_1:
  *(undefined1 *)param_2 = 3;
  return;
}

