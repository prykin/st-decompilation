
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetPanelInfo */

void __thiscall STAllPlayersC::GetPanelInfo(STAllPlayersC *this,undefined4 param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  Global_sub_0044D320_param_1Enum GVar6;
  undefined2 *puVar7;
  undefined3 uVar10;
  undefined4 uVar8;
  int *piVar9;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined3 uVar11;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined2 extraout_var;
  undefined4 extraout_EDX;
  uint uVar12;
  STAllPlayersC_GetObjPtr_param_3Enum SVar13;
  undefined1 local_6c [3];
  undefined4 local_69;
  undefined4 local_64;
  undefined1 local_51;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  undefined2 *local_18;
  uint local_14;
  STAllPlayersC *local_10;
  uint local_c;
  undefined2 local_8;
  undefined2 local_6;
  
  piVar9 = param_2;
  local_20 = 0;
  local_10 = this;
  if ((char)param_1 == '\x01') {
    uVar12 = (uint)DAT_0080874d;
    iVar3 = *(int *)((int)&DAT_007f4f83 + uVar12 * 0xa62);
    iVar2 = uVar12 * 0xa62;
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
      local_c = (uint)(ushort)(&DAT_007f4f8b)[uVar12 * 0x531];
      SVar13 = CASE_3;
      uVar12 = 0xffffffff;
      goto cf_common_exit_0043CB5C;
    }
    if ((&DAT_007f4f91)[uVar12 * 0x531] != 1) {
      if ((ushort)(&DAT_007f4f91)[uVar12 * 0x531] < 2) {
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
      *(char *)((int)piVar9 + 7) = (char)iVar3;
      local_1c = *(int *)((int)&DAT_007f4f8d + iVar2);
      local_14 = *(int *)(local_1c + 0xc);
      *(undefined4 *)((int)piVar9 + 0x2a) = 0;
      *(undefined1 *)((int)piVar9 + 0x2e) = 0;
      *(undefined1 *)((int)piVar9 + 0x1d) = 1;
      local_24 = 0;
      if ((int)local_14 < 1) {
        return;
      }
      do {
        uVar12 = local_24;
        FUN_006acc70(local_1c,local_24,&local_c);
        if ((short)local_c != -1) {
          piVar4 = (int *)GetObjPtr(local_10,CONCAT31((int3)((uint)extraout_ECX >> 8),
                                                      *(undefined1 *)((int)&DAT_007f4f87 + iVar2)),
                                    local_c,CASE_1);
          thunk_FUN_004162b0(piVar4,&local_6,&local_8,(undefined2 *)((int)&param_1 + 2));
          *(undefined1 *)((int)piVar9 + (0x2e - param_1._2_2_)) = 1;
          (**(code **)(*piVar4 + 0x30))(local_6c);
          local_34 = local_64;
          local_30 = local_69;
          local_2c = local_51;
          Library::DKW::TBL::FUN_006ae1c0(*(uint **)((int)piVar9 + 0x32),&local_34);
          uVar12 = local_24;
        }
        local_24 = uVar12 + 1;
      } while ((int)local_24 < (int)local_14);
      return;
    }
    iVar3 = *(int *)((int)&DAT_007f4f8d + iVar2);
    uVar12 = 0;
    local_14 = *(int *)(iVar3 + 0xc);
    if ((int)local_14 < 1) {
      return;
    }
    while (FUN_006acc70(iVar3,uVar12,&local_c), (short)local_c == -1) {
      uVar12 = uVar12 + 1;
      if ((int)local_14 <= (int)uVar12) {
        return;
      }
    }
    uVar12 = CONCAT31((int3)(local_c >> 8),*(undefined1 *)((int)&DAT_007f4f87 + iVar2));
  }
  else {
    if ((char)param_1 == '\x02') {
      uVar12 = (uint)DAT_0080874d;
      iVar3 = *(int *)((int)&DAT_007f4f83 + uVar12 * 0xa62);
      iVar2 = uVar12 * 0xa62;
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
        local_c = (uint)(ushort)(&DAT_007f4f8b)[uVar12 * 0x531];
        SVar13 = CASE_3;
        uVar12 = 0xffffffff;
        goto cf_common_exit_0043CA35;
      }
      if ((&DAT_007f4f91)[uVar12 * 0x531] == 1) {
        iVar3 = *(int *)((int)&DAT_007f4f8d + iVar2);
        uVar12 = 0;
        local_14 = *(int *)(iVar3 + 0xc);
        if ((int)local_14 < 1) {
          return;
        }
        while (FUN_006acc70(iVar3,uVar12,&local_c), (short)local_c == -1) {
          uVar12 = uVar12 + 1;
          if ((int)local_14 <= (int)uVar12) {
            return;
          }
        }
        uVar12 = CONCAT31((int3)(local_c >> 8),*(undefined1 *)((int)&DAT_007f4f87 + iVar2));
        goto LAB_0043ca31;
      }
      if ((ushort)(&DAT_007f4f91)[uVar12 * 0x531] < 2) {
        *(undefined1 *)((int)param_2 + 5) = 0;
        return;
      }
      *(undefined1 *)((int)param_2 + 5) = 2;
      iVar3 = thunk_FUN_004406c0(DAT_0080874d);
      *(char *)(piVar9 + 1) = (char)iVar3;
      local_1c = *(int *)((int)&DAT_007f4f8d + iVar2);
      local_14 = *(uint *)(local_1c + 0xc);
      uVar12 = 0;
      if (0 < (int)local_14) {
        do {
          FUN_006acc70(local_1c,uVar12,&local_c);
          if ((short)local_c != -1) {
            uVar5 = GetObjPtr(this,CONCAT31((int3)((uint)extraout_ECX_00 >> 8),DAT_0080874d),local_c
                              ,CASE_1);
            iVar2 = thunk_FUN_00493cd0(uVar5);
            if (iVar2 == 0) break;
          }
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)local_14);
      }
      if (uVar12 == local_14) {
        *(undefined1 *)((int)piVar9 + 0x15) = 0;
        *(undefined1 *)(piVar9 + 2) = 0;
        *(undefined1 *)((int)piVar9 + 7) = 0;
        return;
      }
      *(undefined1 *)(piVar9 + 2) = 1;
      if (*(int *)(&DAT_007f4e21 + (uint)DAT_0080874d * 0xa62) == 0) {
LAB_0043c293:
        *(undefined1 *)((int)piVar9 + 0x15) = 0;
      }
      else {
        uVar12 = 0;
        *(undefined1 *)((int)piVar9 + 0x15) = 3;
        if (0 < (int)local_14) {
          do {
            FUN_006acc70(local_1c,uVar12,&local_c);
            if ((short)local_c != -1) {
              uVar5 = GetObjPtr(this,CONCAT31((int3)((uint)extraout_ECX_01 >> 8),DAT_0080874d),
                                local_c,CASE_1);
              iVar2 = thunk_FUN_0042b760(CONCAT31((int3)(uVar5 >> 8),DAT_0080874d),
                                         CONCAT22(extraout_var,*(undefined2 *)(uVar5 + 0x30)));
              if ((iVar2 != 0) &&
                 (*(undefined1 *)((int)piVar9 + 0x15) = 1, *(int *)(iVar2 + 0x1c) == 0)) break;
            }
            uVar12 = uVar12 + 1;
          } while ((int)uVar12 < (int)local_14);
        }
        if (uVar12 == local_14) {
          if (*(char *)((int)piVar9 + 0x15) == '\x03') goto LAB_0043c293;
          if (*(char *)((int)piVar9 + 0x15) == '\x01') {
            *(undefined1 *)((int)piVar9 + 0x15) = 3;
          }
        }
      }
      *(undefined1 *)((int)piVar9 + 7) = 1;
      GVar6 = thunk_FUN_0044ce40(this);
      local_18 = thunk_FUN_0044d320(GVar6);
      param_2 = (int *)((int)piVar9 + 0xf);
      puVar7 = local_18;
      piVar4 = param_2;
      do {
        *(undefined1 *)((int)piVar4 + -6) = *(undefined1 *)((int)puVar7 + 1);
        *(undefined1 *)piVar4 = *(undefined1 *)puVar7;
        piVar4 = (int *)((int)piVar4 + 1);
        puVar7 = puVar7 + 1;
      } while ((int)((-0xf - (int)piVar9) + (int)piVar4) < 6);
      FUN_006ab060(&local_18);
      uVar12 = 0;
      *(undefined1 *)((int)piVar9 + 0x39) = 1;
      *(undefined1 *)(piVar9 + 0xe) = 1;
      *(undefined1 *)((int)piVar9 + 0x37) = 1;
      *(undefined1 *)((int)piVar9 + 0x36) = 1;
      if (0 < (int)local_14) {
        do {
          FUN_006acc70(local_1c,uVar12,&local_c);
          if ((short)local_c != -1) {
            uVar5 = GetObjPtr(local_10,CONCAT31((int3)(local_c >> 8),DAT_0080874d),local_c,CASE_1);
            *(undefined1 *)(*(int *)(uVar5 + 0x7ee) + 0x36 + (int)piVar9) = 3;
          }
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)local_14);
      }
      if (GVar6 < 0x40001) {
        if (GVar6 == 0x40000) {
          *piVar9 = 0x19;
        }
        else if (GVar6 < 0x81) {
          if (GVar6 == 0x80) {
            *piVar9 = 9;
          }
          else if (GVar6 == CASE_2) {
            *piVar9 = 5;
          }
          else if (GVar6 == CASE_4) {
            *piVar9 = 0xb;
          }
          else if (GVar6 == CASE_8) {
            *piVar9 = 0x11;
          }
        }
        else if (GVar6 == 0x100) {
          *piVar9 = 0x15;
        }
        else if (GVar6 == 0x10000) {
          *piVar9 = 0x22;
        }
        else if (GVar6 == 0x20000) {
          *piVar9 = 0x1a;
        }
      }
      else if (GVar6 < 0x400001) {
        if (GVar6 == 0x400000) {
          *piVar9 = 0x21;
        }
        else if (GVar6 == 0x80000) {
          *piVar9 = 0x1c;
        }
        else if (GVar6 == 0x100000) {
          *piVar9 = 0x1d;
        }
        else if (GVar6 == 0x200000) {
          *piVar9 = 0x1b;
        }
      }
      else if (GVar6 == 0x800000) {
        *piVar9 = 0x23;
      }
      else if (GVar6 == 0x1000000) {
        *piVar9 = 0x24;
      }
      local_28 = 0;
      local_24 = 0;
      uVar12 = local_20;
      if (0 < (int)local_14) {
        do {
          FUN_006acc70(local_1c,local_24,&local_c);
          if ((short)local_c != -1) {
            local_28 = local_28 + 1;
            uVar5 = GetObjPtr(local_10,CONCAT31((int3)(local_c >> 8),DAT_0080874d),local_c,CASE_1);
            if (local_28 == 1) {
              uVar12 = (uint)*(ushort *)(uVar5 + 0x30);
            }
            else if (uVar12 != *(ushort *)(uVar5 + 0x30)) {
              return;
            }
          }
          local_24 = local_24 + 1;
        } while ((int)local_24 < (int)local_14);
        if (uVar12 == 0xffff) {
          return;
        }
      }
      uVar10 = (undefined3)(local_24 >> 8);
      uVar11 = (undefined3)(local_14 >> 8);
      if (0x1000 < GVar6) {
        if (GVar6 < 0x100001) {
          if (GVar6 == 0x100000) {
            piVar4 = (int *)thunk_FUN_0042b760(CONCAT31(uVar10,DAT_0080874d),uVar12);
            uVar8 = (**(code **)(*piVar4 + 0xc))();
            switch(uVar8) {
            case 1:
            case 7:
              goto cf_common_exit_0043C94C;
            default:
              return;
            case 3:
              goto cf_common_exit_0043C95B;
            case 0x11:
              goto cf_common_exit_0043C86F;
            case 0x13:
              goto cf_common_exit_0043C862;
            }
          }
          if (GVar6 < 0x20001) {
            if (GVar6 == 0x20000) {
              piVar4 = (int *)thunk_FUN_0042b760(CONCAT31(uVar11,DAT_0080874d),uVar12);
              uVar8 = (**(code **)(*piVar4 + 0xc))();
              switch(uVar8) {
              case 1:
              case 7:
                goto cf_common_exit_0043C94C;
              default:
                return;
              case 3:
                goto cf_common_exit_0043C95B;
              case 8:
                goto cf_common_exit_0043C862;
              case 10:
                goto cf_common_exit_0043C508;
              case 0x11:
                goto cf_common_exit_0043C86F;
              }
            }
            if (GVar6 == 0x2000) {
              piVar4 = (int *)thunk_FUN_0042b760(CONCAT31(uVar10,DAT_0080874d),uVar12);
              uVar8 = (**(code **)(*piVar4 + 0xc))();
              switch(uVar8) {
              case 1:
              case 7:
                goto cf_common_exit_0043C72D;
              case 2:
                goto cf_common_exit_0043C862;
              case 3:
                goto cf_common_exit_0043C95B;
              case 4:
                goto cf_common_exit_0043C86F;
              default:
                return;
              case 6:
                goto cf_common_exit_0043C508;
              }
            }
            if (GVar6 != 0x10000) {
              return;
            }
            piVar4 = (int *)thunk_FUN_0042b760(CONCAT31(uVar11,DAT_0080874d),uVar12);
            uVar8 = (**(code **)(*piVar4 + 0xc))();
            switch(uVar8) {
            case 1:
            case 7:
              goto cf_common_exit_0043C94C;
            case 2:
              goto cf_common_exit_0043C862;
            case 3:
              goto cf_common_exit_0043C95B;
            default:
              return;
            case 0xf:
              goto cf_common_exit_0043C508;
            case 0x11:
              goto cf_common_exit_0043C86F;
            }
          }
          if (GVar6 == 0x40000) {
            piVar4 = (int *)thunk_FUN_0042b760(CONCAT31(uVar10,DAT_0080874d),uVar12);
            uVar8 = (**(code **)(*piVar4 + 0xc))();
            switch(uVar8) {
            case 1:
            case 7:
              goto cf_common_exit_0043C94C;
            default:
              return;
            case 3:
              goto cf_common_exit_0043C95B;
            case 9:
              goto cf_common_exit_0043C862;
            case 0x11:
              goto cf_common_exit_0043C86F;
            }
          }
          if (GVar6 != 0x80000) {
            return;
          }
          piVar4 = (int *)thunk_FUN_0042b760(CONCAT31(uVar10,DAT_0080874d),uVar12);
          uVar8 = (**(code **)(*piVar4 + 0xc))();
          switch(uVar8) {
          case 1:
          case 7:
            goto cf_common_exit_0043C94C;
          case 2:
            goto cf_common_exit_0043C862;
          case 3:
            goto cf_common_exit_0043C95B;
          default:
            return;
          case 0x11:
            goto cf_common_exit_0043C86F;
          }
        }
        if (GVar6 < 0x800001) {
          if (GVar6 == 0x800000) {
            piVar4 = (int *)thunk_FUN_0042b760(CONCAT31(uVar10,DAT_0080874d),uVar12);
            uVar8 = (**(code **)(*piVar4 + 0xc))();
            switch(uVar8) {
            case 1:
            case 7:
              goto cf_common_exit_0043C94C;
            case 2:
              goto cf_common_exit_0043C862;
            case 3:
              goto cf_common_exit_0043C95B;
            default:
              return;
            case 0x11:
              goto cf_common_exit_0043C86F;
            }
          }
          if (GVar6 == 0x200000) {
            piVar4 = (int *)thunk_FUN_0042b760(CONCAT31(uVar10,DAT_0080874d),uVar12);
            uVar8 = (**(code **)(*piVar4 + 0xc))();
            switch(uVar8) {
            case 1:
            case 7:
              goto cf_common_exit_0043C94C;
            default:
              return;
            case 3:
              goto cf_common_exit_0043C95B;
            case 0xb:
            case 0xc:
              goto cf_common_exit_0043C862;
            case 0x11:
              goto cf_common_exit_0043C86F;
            }
          }
          if (GVar6 != 0x400000) {
            return;
          }
          piVar4 = (int *)thunk_FUN_0042b760(CONCAT31(uVar10,DAT_0080874d),uVar12);
          uVar8 = (**(code **)(*piVar4 + 0xc))();
          switch(uVar8) {
          case 1:
          case 7:
            goto cf_common_exit_0043C94C;
          case 2:
            goto cf_common_exit_0043C862;
          case 3:
            goto cf_common_exit_0043C95B;
          default:
            return;
          case 0xd:
            goto cf_common_exit_0043C508;
          case 0x11:
            goto cf_common_exit_0043C86F;
          }
        }
        if (GVar6 == 0x1000000) {
          piVar4 = (int *)thunk_FUN_0042b760(CONCAT31(uVar10,DAT_0080874d),uVar12);
          uVar8 = (**(code **)(*piVar4 + 0xc))();
          switch(uVar8) {
          case 1:
          case 7:
            goto cf_common_exit_0043C94C;
          default:
            return;
          case 3:
            goto cf_common_exit_0043C95B;
          case 0x11:
            goto cf_common_exit_0043C86F;
          }
        }
        if (GVar6 != 0x2000000) {
          return;
        }
        piVar4 = (int *)thunk_FUN_0042b760(CONCAT31(uVar10,DAT_0080874d),uVar12);
        uVar8 = (**(code **)(*piVar4 + 0xc))();
        switch(uVar8) {
        case 1:
        case 7:
          goto cf_common_exit_0043C94C;
        case 2:
          goto cf_common_exit_0043C862;
        case 3:
          goto cf_common_exit_0043C95B;
        default:
          return;
        case 0x11:
          goto cf_common_exit_0043C86F;
        }
      }
      if (GVar6 == 0x1000) goto switchD_0043c4d2_caseD_28;
      if (0x40 < GVar6) {
        if (0x200 < GVar6) {
          if (GVar6 == 0x400) {
            piVar4 = (int *)thunk_FUN_0042b760(CONCAT31(uVar10,DAT_0080874d),uVar12);
            uVar8 = (**(code **)(*piVar4 + 0xc))();
            switch(uVar8) {
            case 1:
            case 7:
              goto cf_common_exit_0043C94C;
            default:
              return;
            case 3:
              goto cf_common_exit_0043C95B;
            case 4:
              goto cf_common_exit_0043C86F;
            case 0xb:
            case 0xc:
              goto cf_common_exit_0043C508;
            case 0x15:
              goto cf_common_exit_0043C862;
            }
          }
          if (GVar6 != 0x800) {
            return;
          }
          piVar4 = (int *)thunk_FUN_0042b760(CONCAT31(uVar11,DAT_0080874d),uVar12);
          uVar8 = (**(code **)(*piVar4 + 0xc))();
          switch(uVar8) {
          case 1:
          case 7:
            goto cf_common_exit_0043C94C;
          default:
            return;
          case 3:
            goto cf_common_exit_0043C95B;
          case 4:
            goto cf_common_exit_0043C86F;
          case 9:
            goto cf_common_exit_0043C862;
          case 0x13:
            goto cf_common_exit_0043C508;
          }
        }
        if (GVar6 == 0x200) {
          piVar4 = (int *)thunk_FUN_0042b760(CONCAT31(uVar11,DAT_0080874d),uVar12);
          uVar8 = (**(code **)(*piVar4 + 0xc))();
          switch(uVar8) {
          case 1:
          case 7:
            goto cf_common_exit_0043C72D;
          default:
            return;
          case 3:
            goto cf_common_exit_0043C95B;
          case 4:
            goto cf_common_exit_0043C86F;
          case 8:
            goto cf_common_exit_0043C862;
          case 10:
            goto cf_common_exit_0043C508;
          }
        }
        if ((GVar6 != 0x80) && (GVar6 != 0x100)) {
          return;
        }
        piVar4 = (int *)thunk_FUN_0042b760(CONCAT31(uVar10,DAT_0080874d),uVar12);
        uVar8 = (**(code **)(*piVar4 + 0xc))();
        switch(uVar8) {
        case 1:
        case 7:
          goto cf_common_exit_0043C72D;
        case 2:
          goto cf_common_exit_0043C862;
        case 3:
          goto cf_common_exit_0043C95B;
        default:
          return;
        }
      }
      if (GVar6 == 0x40) {
        piVar4 = (int *)thunk_FUN_0042b760(CONCAT31(uVar11,DAT_0080874d),uVar12);
        uVar8 = (**(code **)(*piVar4 + 0xc))();
        switch(uVar8) {
        case 1:
        case 7:
          goto cf_common_exit_0043C94C;
        case 2:
          goto cf_common_exit_0043C862;
        case 3:
          goto cf_common_exit_0043C95B;
        case 4:
          goto cf_common_exit_0043C86F;
        default:
          return;
        case 0xe:
          goto cf_common_exit_0043C508;
        }
      }
      switch(GVar6) {
      case CASE_1:
        piVar4 = (int *)thunk_FUN_0042b760(CONCAT31(uVar10,DAT_0080874d),uVar12);
        uVar8 = (**(code **)(*piVar4 + 0xc))();
        switch(uVar8) {
        case 1:
        case 7:
          goto cf_common_exit_0043C94C;
        case 2:
          goto cf_common_exit_0043C862;
        case 3:
          goto cf_common_exit_0043C95B;
        case 4:
          goto cf_common_exit_0043C86F;
        case 0xf:
cf_common_exit_0043C508:
          *(undefined1 *)(piVar9 + 5) = 3;
          return;
        }
        break;
      case CASE_2:
      case CASE_4:
      case CASE_8:
        piVar4 = (int *)thunk_FUN_0042b760(CONCAT31(uVar10,DAT_0080874d),uVar12);
        uVar8 = (**(code **)(*piVar4 + 0xc))();
        switch(uVar8) {
        case 1:
        case 7:
          goto cf_common_exit_0043C94C;
        case 2:
          goto cf_common_exit_0043C862;
        case 3:
          goto cf_common_exit_0043C95B;
        case 4:
          goto cf_common_exit_0043C86F;
        case 0xd:
          goto cf_common_exit_0043C508;
        }
        break;
      case CASE_10:
        piVar4 = (int *)thunk_FUN_0042b760(CONCAT31(uVar10,DAT_0080874d),uVar12);
        uVar8 = (**(code **)(*piVar4 + 0xc))();
        switch(uVar8) {
        case 1:
        case 7:
          goto cf_common_exit_0043C72D;
        case 2:
          goto cf_common_exit_0043C862;
        case 3:
          goto cf_common_exit_0043C95B;
        case 4:
          goto cf_common_exit_0043C86F;
        }
        break;
      case CASE_28:
switchD_0043c4d2_caseD_28:
        piVar4 = (int *)thunk_FUN_0042b760(CONCAT31(uVar10,DAT_0080874d),uVar12);
        uVar8 = (**(code **)(*piVar4 + 0xc))();
        switch(uVar8) {
        case 1:
        case 7:
cf_common_exit_0043C72D:
          *(undefined1 *)param_2 = 3;
          return;
        case 2:
cf_common_exit_0043C862:
          *(undefined1 *)(piVar9 + 4) = 3;
          return;
        case 3:
cf_common_exit_0043C95B:
          *(undefined1 *)((int)piVar9 + 0x11) = 3;
          return;
        case 4:
cf_common_exit_0043C86F:
          *(undefined1 *)((int)piVar9 + 0x12) = 3;
          return;
        }
      }
      return;
    }
    if ((char)param_1 == '\x04') {
      uVar12 = (uint)DAT_0080874d;
      iVar2 = *(int *)((int)&DAT_007f4fd3 + uVar12 * 0xa62);
      if (0x19a < iVar2) {
        if (iVar2 == 0x1a4) {
          local_c = (uint)(ushort)(&DAT_007f4fdb)[uVar12 * 0x531];
          SVar13 = CASE_5;
          uVar12 = 0xffffffff;
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
          local_c = (uint)(ushort)(&DAT_007f4fdb)[uVar12 * 0x531];
          SVar13 = CASE_6;
          uVar12 = 0xffffffff;
        }
        goto cf_common_exit_0043CA35;
      }
      if (iVar2 != 0x19a) {
        if (iVar2 == 0) {
          return;
        }
        if (iVar2 == 0x5a) {
          local_c = (uint)(ushort)(&DAT_007f4fdb)[uVar12 * 0x531];
          SVar13 = CASE_4;
          uVar12 = 0xffffffff;
        }
        else {
          if (iVar2 != 0x172) goto LAB_0043ca5a;
          local_c = (uint)(ushort)(&DAT_007f4fdb)[uVar12 * 0x531];
          SVar13 = CASE_2;
          uVar12 = 0xffffffff;
        }
        goto cf_common_exit_0043CA35;
      }
      if ((&DAT_007f4fe1)[uVar12 * 0x531] != 1) {
        return;
      }
      iVar2 = *(int *)((int)&DAT_007f4fdd + uVar12 * 0xa62);
      uVar5 = 0;
      local_14 = *(int *)(iVar2 + 0xc);
      if ((int)local_14 < 1) {
        return;
      }
      while (FUN_006acc70(iVar2,uVar5,&local_c), (short)local_c == -1) {
        uVar5 = uVar5 + 1;
        if ((int)local_14 <= (int)uVar5) {
          return;
        }
      }
      uVar12 = CONCAT31((int3)(local_c >> 8),*(undefined1 *)((int)&DAT_007f4fd7 + uVar12 * 0xa62));
LAB_0043ca31:
      SVar13 = CASE_1;
cf_common_exit_0043CA35:
      piVar9 = (int *)GetObjPtr(local_10,uVar12,local_c,SVar13);
      (**(code **)(*piVar9 + 0x34))(param_2);
      return;
    }
    if ((char)param_1 != '\x05') {
      if ((char)param_1 == '\x06') {
        if (*param_2 != 0) {
          *(undefined4 *)(*param_2 + 0xc) = 0;
        }
        uVar12 = (uint)DAT_0080874d;
        iVar2 = *(int *)((int)&DAT_007f4fd3 + uVar12 * 0xa62);
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
        if ((&DAT_007f4fe1)[uVar12 * 0x531] != 1) {
          return;
        }
        iVar2 = *(int *)((int)&DAT_007f4fdd + uVar12 * 0xa62);
        uVar5 = 0;
        local_14 = *(int *)(iVar2 + 0xc);
        if ((int)local_14 < 1) {
          return;
        }
        do {
          FUN_006acc70(iVar2,uVar5,&local_c);
          if ((short)local_c != -1) {
            piVar9 = (int *)GetObjPtr(local_10,CONCAT31((int3)(local_c >> 8),
                                                        *(undefined1 *)
                                                         ((int)&DAT_007f4fd7 + uVar12 * 0xa62)),
                                      local_c,CASE_1);
            (**(code **)(*piVar9 + 0x38))(param_2);
            return;
          }
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < (int)local_14);
        return;
      }
      if ((char)param_1 == '\a') {
        *(undefined4 *)(*param_2 + 0xc) = 0;
        *(undefined4 *)(param_2[1] + 0xc) = 0;
        *(undefined4 *)(param_2[2] + 0xc) = 0;
        *(undefined4 *)(param_2[3] + 0xc) = 0;
        uVar12 = (uint)DAT_0080874d;
        iVar2 = *(int *)((int)&DAT_007f4fd3 + uVar12 * 0xa62);
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
        if ((&DAT_007f4fe1)[uVar12 * 0x531] != 1) {
          return;
        }
        iVar2 = *(int *)((int)&DAT_007f4fdd + uVar12 * 0xa62);
        uVar5 = 0;
        local_14 = *(int *)(iVar2 + 0xc);
        if ((int)local_14 < 1) {
          return;
        }
        do {
          FUN_006acc70(iVar2,uVar5,&local_c);
          if ((short)local_c != -1) {
            piVar9 = (int *)GetObjPtr(local_10,CONCAT31((int3)(local_c >> 8),
                                                        *(undefined1 *)
                                                         ((int)&DAT_007f4fd7 + uVar12 * 0xa62)),
                                      local_c,CASE_1);
            (**(code **)(*piVar9 + 0x3c))(param_2);
            return;
          }
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < (int)local_14);
        return;
      }
      if ((char)param_1 == '\b') {
        uVar12 = (uint)DAT_0080874d;
        *(undefined4 *)(*param_2 + 0xc) = 0;
        iVar2 = uVar12 * 0xa62;
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
        if ((&DAT_007f4f91)[uVar12 * 0x531] == 0) {
          return;
        }
        local_1c = *(int *)((int)&DAT_007f4f8d + iVar2);
        uVar12 = 0;
        local_14 = *(int *)(local_1c + 0xc);
        if ((int)local_14 < 1) {
          return;
        }
        do {
          FUN_006acc70(local_1c,uVar12,&local_c);
          if ((short)local_c != -1) {
            piVar4 = (int *)GetObjPtr(local_10,CONCAT31((int3)(local_c >> 8),
                                                        *(undefined1 *)((int)&DAT_007f4f87 + iVar2))
                                      ,local_c,CASE_1);
            (**(code **)(*piVar4 + 0x40))(piVar9);
            return;
          }
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)local_14);
        return;
      }
      if ((char)param_1 == '\t') {
        uVar12 = (uint)DAT_0080874d;
        iVar2 = *(int *)((int)&DAT_007f4fd3 + uVar12 * 0xa62);
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
        if ((&DAT_007f4fe1)[uVar12 * 0x531] != 1) {
          return;
        }
        iVar2 = *(int *)((int)&DAT_007f4fdd + uVar12 * 0xa62);
        uVar5 = 0;
        local_14 = *(int *)(iVar2 + 0xc);
        if ((int)local_14 < 1) {
          return;
        }
        do {
          FUN_006acc70(iVar2,uVar5,&local_c);
          if ((short)local_c != -1) {
            piVar9 = (int *)GetObjPtr(local_10,CONCAT31((int3)(local_c >> 8),
                                                        *(undefined1 *)
                                                         ((int)&DAT_007f4fd7 + uVar12 * 0xa62)),
                                      local_c,CASE_1);
            (**(code **)(*piVar9 + 0x44))(param_2);
            return;
          }
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < (int)local_14);
        return;
      }
      if ((char)param_1 == '\n') {
        uVar12 = (uint)DAT_0080874d;
        local_28 = (int)&DAT_007f4fd3 + uVar12 * 0xa62;
        if (*(int *)((int)&DAT_007f4fd3 + uVar12 * 0xa62) != 0x19a) {
          return;
        }
        if ((&DAT_007f4fe1)[uVar12 * 0x531] != 1) {
          return;
        }
        iVar2 = *(int *)((int)&DAT_007f4fdd + uVar12 * 0xa62);
        uVar12 = 0;
        iVar3 = *(int *)(iVar2 + 0xc);
        if (iVar3 < 1) {
          return;
        }
        do {
          FUN_006acc70(iVar2,uVar12,&local_c);
          if ((short)local_c != -1) {
            piVar9 = (int *)GetObjPtr(local_10,CONCAT31((int3)(local_c >> 8),
                                                        *(undefined1 *)(local_28 + 4)),local_c,
                                      CASE_1);
            (**(code **)(*piVar9 + 0x48))(param_2);
            return;
          }
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < iVar3);
        return;
      }
      if ((char)param_1 != '\v') {
        if ((char)param_1 == '\f') {
          if (*param_2 != 0) {
            *(undefined4 *)(*param_2 + 0xc) = 0;
          }
          uVar12 = (uint)DAT_0080874d;
          iVar2 = *(int *)((int)&DAT_007f4fd3 + uVar12 * 0xa62);
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
          if ((&DAT_007f4fe1)[uVar12 * 0x531] != 1) {
            return;
          }
          iVar2 = *(int *)((int)&DAT_007f4fdd + uVar12 * 0xa62);
          uVar5 = 0;
          local_14 = *(int *)(iVar2 + 0xc);
          if ((int)local_14 < 1) {
            return;
          }
          do {
            FUN_006acc70(iVar2,uVar5,&local_c);
            if ((short)local_c != -1) {
              piVar9 = (int *)GetObjPtr(local_10,CONCAT31((int3)(local_c >> 8),
                                                          *(undefined1 *)
                                                           ((int)&DAT_007f4fd7 + uVar12 * 0xa62)),
                                        local_c,CASE_1);
              (**(code **)(*piVar9 + 0x50))(param_2);
              return;
            }
            uVar5 = uVar5 + 1;
          } while ((int)uVar5 < (int)local_14);
          return;
        }
        if ((char)param_1 == '\x0e') {
          local_28 = 4;
          piVar4 = (int *)((int)&DAT_007f4f9d + (uint)DAT_0080874d * 0xa62);
          do {
            iVar2 = *(int *)((int)piVar4 + -10);
            param_2 = piVar4;
            if (iVar2 == 0) {
LAB_0043d41d:
              *(undefined1 *)piVar9 = 0;
            }
            else if (iVar2 == 0x3c) {
              if (*(ushort *)(piVar4 + 1) == 1) {
                uVar12 = 0;
                iVar2 = *piVar4;
                local_14 = *(int *)(iVar2 + 0xc);
                if (0 < (int)local_14) {
                  do {
                    FUN_006acc70(iVar2,uVar12,&local_c);
                    if ((short)local_c != -1) {
                      SVar13 = CASE_1;
                      uVar5 = CONCAT31((int3)(local_c >> 8),*(undefined1 *)((int)param_2 + -6));
                      uVar12 = local_c;
                      goto LAB_0043d447;
                    }
                    uVar12 = uVar12 + 1;
                  } while ((int)uVar12 < (int)local_14);
                }
              }
              else {
                if (*(ushort *)(piVar4 + 1) < 2) goto LAB_0043d41d;
                *(undefined1 *)piVar9 = 2;
                *(undefined1 *)((int)piVar9 + 1) = 1;
                *(undefined1 *)((int)piVar9 + 6) = (&DAT_007f4e20)[(uint)DAT_0080874d * 0xa62];
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
              SVar13 = CASE_3;
              uVar5 = 0xffffffff;
              uVar12 = CONCAT22((short)((uint)piVar4 >> 0x10),*(undefined2 *)((int)piVar4 + -2));
LAB_0043d447:
              piVar4 = (int *)GetObjPtr(local_10,uVar5,uVar12,SVar13);
              (**(code **)(*piVar4 + 0x58))(piVar9);
            }
            piVar4 = param_2 + 4;
            piVar9 = (int *)((int)piVar9 + 0xb);
            local_28 = local_28 + -1;
            if (local_28 == 0) {
              return;
            }
          } while( true );
        }
        if ((char)param_1 == '\x0f') {
          param_2 = (int *)0x4;
          puVar7 = &DAT_007f4feb + (uint)DAT_0080874d * 0x531;
          do {
            iVar2 = *(int *)(puVar7 + -4);
            if (iVar2 < 0x19b) {
              if (iVar2 == 0x19a) {
                if (puVar7[3] == 1) {
                  local_1c = *(int *)(puVar7 + 1);
                  uVar12 = 0;
                  local_14 = *(int *)(local_1c + 0xc);
                  if (0 < (int)local_14) {
                    do {
                      FUN_006acc70(local_1c,uVar12,&local_c);
                      if ((short)local_c != -1) {
                        uVar5 = CONCAT31((int3)((uint)extraout_ECX_03 >> 8),
                                         *(undefined1 *)(puVar7 + -2));
                        SVar13 = CASE_1;
                        uVar12 = local_c;
                        goto LAB_0043d5b7;
                      }
                      uVar12 = uVar12 + 1;
                    } while ((int)uVar12 < (int)local_14);
                  }
                  goto LAB_0043d5c4;
                }
              }
              else if (iVar2 != 0) {
                if (iVar2 == 0x5a) {
                  SVar13 = CASE_4;
                }
                else {
                  if (iVar2 != 0x172) goto LAB_0043d581;
                  SVar13 = CASE_2;
                }
                goto LAB_0043d5b1;
              }
LAB_0043d5a6:
              *(undefined1 *)piVar9 = 0;
            }
            else {
              if (iVar2 == 0x1a4) {
                SVar13 = CASE_5;
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
                SVar13 = CASE_6;
                iVar2 = 0;
              }
LAB_0043d5b1:
              uVar5 = 0xffffffff;
              uVar12 = CONCAT22((short)((uint)iVar2 >> 0x10),*puVar7);
LAB_0043d5b7:
              piVar4 = (int *)GetObjPtr(local_10,uVar5,uVar12,SVar13);
              (**(code **)(*piVar4 + 0x5c))(piVar9);
            }
LAB_0043d5c4:
            puVar7 = puVar7 + 8;
            piVar9 = (int *)((int)piVar9 + 0xb);
            param_2 = (int *)((int)param_2 + -1);
            if (param_2 == (int *)0x0) {
              return;
            }
          } while( true );
        }
        if ((char)param_1 != '\x10') {
          if ((char)param_1 == '\x11') {
            uVar12 = (uint)DAT_0080874d;
            iVar2 = *(int *)((int)&DAT_007f4f83 + uVar12 * 0xa62);
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
            if ((ushort)(&DAT_007f4f91)[uVar12 * 0x531] < 2) {
              return;
            }
            iVar2 = *(int *)((int)&DAT_007f4f8d + uVar12 * 0xa62);
            iVar3 = 0;
            uVar12 = 0;
            local_14 = *(int *)(iVar2 + 0xc);
            if (0 < (int)local_14) {
              do {
                FUN_006acc70(iVar2,uVar12,&local_c);
                if ((short)local_c != -1) {
                  iVar3 = iVar3 + 1;
                  uVar5 = GetObjPtr(local_10,CONCAT31((int3)((uint)extraout_ECX_04 >> 8),
                                                      DAT_0080874d),local_c,CASE_1);
                  if (iVar3 == 1) {
                    local_20 = (uint)*(ushort *)(uVar5 + 0x30);
                  }
                  else if (local_20 != *(ushort *)(uVar5 + 0x30)) {
                    return;
                  }
                }
                uVar12 = uVar12 + 1;
              } while ((int)uVar12 < (int)local_14);
              if (local_20 == 0xffff) {
                return;
              }
            }
            piVar9 = (int *)thunk_FUN_0042b760(CONCAT31((int3)(local_20 >> 8),DAT_0080874d),local_20
                                              );
            uVar8 = (**(code **)(*piVar9 + 0x1c))();
            switch(uVar8) {
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
          uVar12 = (uint)DAT_0080874d;
          iVar2 = *(int *)((int)&DAT_007f4f83 + uVar12 * 0xa62);
          if (iVar2 == 0) {
            return;
          }
          if (iVar2 == 0x1ae) {
            piVar9 = (int *)GetObjPtr(this,0xffffffff,
                                      CONCAT22((short)((int)&DAT_007f4f83 + uVar12 * 0xa62 >> 0x10),
                                               (&DAT_007f4f8b)[uVar12 * 0x531]),CASE_3);
            (**(code **)(*piVar9 + 100))(param_2);
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
        uVar12 = (uint)DAT_0080874d;
        iVar2 = *(int *)((int)&DAT_007f4f83 + uVar12 * 0xa62);
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
        if ((&DAT_007f4f91)[uVar12 * 0x531] == 0) {
          return;
        }
        iVar2 = *(int *)((int)&DAT_007f4f8d + uVar12 * 0xa62);
        uVar5 = 0;
        local_14 = *(int *)(iVar2 + 0xc);
        if (0 < (int)local_14) {
          do {
            FUN_006acc70(iVar2,uVar5,&local_c);
            if ((short)local_c != -1) {
              piVar9 = (int *)GetObjPtr(local_10,CONCAT31((int3)(local_c >> 8),
                                                          *(undefined1 *)
                                                           ((int)&DAT_007f4f87 + uVar12 * 0xa62)),
                                        local_c,CASE_1);
              (**(code **)(*piVar9 + 0x60))(param_2);
              break;
            }
            uVar5 = uVar5 + 1;
          } while ((int)uVar5 < (int)local_14);
        }
        if ((ushort)(&DAT_007f4f91)[uVar12 * 0x531] < 2) {
          return;
        }
        param_2[0x6c] = -1;
        param_2[0x78] = -1;
        param_2[0x84] = -1;
        return;
      }
      uVar12 = (uint)DAT_0080874d;
      iVar3 = *(int *)((int)&DAT_007f4f83 + uVar12 * 0xa62);
      iVar2 = uVar12 * 0xa62;
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
      if ((&DAT_007f4f91)[uVar12 * 0x531] == 1) {
        iVar3 = *(int *)((int)&DAT_007f4f8d + iVar2);
        uVar12 = 0;
        local_14 = *(int *)(iVar3 + 0xc);
        if ((int)local_14 < 1) {
          return;
        }
        do {
          FUN_006acc70(iVar3,uVar12,&local_c);
          if ((short)local_c != -1) {
            piVar9 = (int *)GetObjPtr(local_10,CONCAT31((int3)((uint)extraout_ECX_02 >> 8),
                                                        *(undefined1 *)((int)&DAT_007f4f87 + iVar2))
                                      ,local_c,CASE_1);
            (**(code **)(*piVar9 + 0x4c))(param_2);
            return;
          }
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)local_14);
        return;
      }
      if ((ushort)(&DAT_007f4f91)[uVar12 * 0x531] < 2) {
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
      uVar12 = 0;
      local_14 = *(uint *)(iVar2 + 0xc);
      *(undefined1 *)((int)param_2 + 0x11) = 1;
      *(undefined1 *)(param_2 + 4) = 1;
      *(undefined1 *)((int)param_2 + 0x12) = 3;
      local_1c = iVar2;
      if (0 < (int)local_14) {
        do {
          FUN_006acc70(iVar2,uVar12,&local_c);
          if ((short)local_c != -1) {
            uVar5 = GetObjPtr(local_10,CONCAT31((int3)(local_c >> 8),DAT_0080874d),local_c,CASE_1);
            if (*(int *)(uVar5 + 0x7e6) == 0) {
              *(undefined1 *)((int)piVar9 + 0x11) = 3;
            }
            else {
              *(undefined1 *)(piVar9 + 4) = 3;
            }
            if ((*(char *)((int)piVar9 + 0x12) == '\x03') && (*(int *)(uVar5 + 0x7ea) == 0)) {
              *(undefined1 *)((int)piVar9 + 0x12) = 1;
            }
          }
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)local_14);
      }
      uVar12 = 0;
      if (0 < (int)local_14) {
        do {
          FUN_006acc70(iVar2,uVar12,&local_c);
          if ((short)local_c != -1) {
            piVar4 = (int *)GetObjPtr(local_10,CONCAT31((int3)((uint)extraout_EDX >> 8),DAT_0080874d
                                                       ),local_c,CASE_1);
            uVar8 = (**(code **)(*piVar4 + 0x2c))();
            switch(uVar8) {
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
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)local_14);
      }
switchD_0043d1bf_caseD_a:
      if (uVar12 == local_14) {
        *(undefined1 *)((int)piVar9 + 10) = 0;
        *(undefined1 *)((int)piVar9 + 0xb) = 0;
        *(undefined1 *)(piVar9 + 3) = 0;
        *(undefined1 *)((int)piVar9 + 0xd) = 0;
      }
      param_2 = (int *)(uint)(uVar12 == local_14);
      iVar2 = 0;
      uVar12 = 0;
      if (0 < (int)local_14) {
        do {
          FUN_006acc70(local_1c,uVar12,&local_c);
          if ((short)local_c != -1) {
            iVar2 = iVar2 + 1;
            uVar5 = GetObjPtr(local_10,CONCAT31((int3)(local_c >> 8),DAT_0080874d),local_c,CASE_1);
            if (iVar2 == 1) {
              local_20 = (uint)*(ushort *)(uVar5 + 0x30);
            }
            else if (local_20 != *(ushort *)(uVar5 + 0x30)) {
              return;
            }
          }
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)local_14);
      }
      if (param_2 == (int *)0x1) {
        return;
      }
      if (local_20 == 0xffff) {
        return;
      }
      piVar4 = (int *)thunk_FUN_0042b760(CONCAT31((int3)(local_20 >> 8),DAT_0080874d),local_20);
      uVar8 = (**(code **)(*piVar4 + 0xc))();
      switch(uVar8) {
      case 5:
        *(undefined1 *)(piVar9 + 3) = 3;
        return;
      case 6:
        *(undefined1 *)((int)piVar9 + 0xd) = 3;
        return;
      default:
        return;
      case 0x10:
        *(undefined1 *)((int)piVar9 + 0xe) = 3;
        return;
      case 0x14:
        *(undefined1 *)((int)piVar9 + 0xf) = 3;
        return;
      }
    }
    uVar12 = (uint)DAT_0080874d;
    iVar2 = *(int *)((int)&DAT_007f4fd3 + uVar12 * 0xa62);
    if (0x19a < iVar2) {
      if (iVar2 == 0x1a4) {
        local_c = (uint)(ushort)(&DAT_007f4fdb)[uVar12 * 0x531];
        SVar13 = CASE_5;
        uVar12 = 0xffffffff;
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
        local_c = (uint)(ushort)(&DAT_007f4fdb)[uVar12 * 0x531];
        SVar13 = CASE_6;
        uVar12 = 0xffffffff;
      }
      goto cf_common_exit_0043CB5C;
    }
    if (iVar2 != 0x19a) {
      if (iVar2 == 0) {
        return;
      }
      if (iVar2 == 0x5a) {
        local_c = (uint)(ushort)(&DAT_007f4fdb)[uVar12 * 0x531];
        SVar13 = CASE_4;
        uVar12 = 0xffffffff;
      }
      else {
        if (iVar2 != 0x172) goto LAB_0043cb81;
        local_c = (uint)(ushort)(&DAT_007f4fdb)[uVar12 * 0x531];
        SVar13 = CASE_2;
        uVar12 = 0xffffffff;
      }
      goto cf_common_exit_0043CB5C;
    }
    if ((&DAT_007f4fe1)[uVar12 * 0x531] != 1) {
      return;
    }
    iVar2 = *(int *)((int)&DAT_007f4fdd + uVar12 * 0xa62);
    uVar5 = 0;
    local_14 = *(int *)(iVar2 + 0xc);
    if ((int)local_14 < 1) {
      return;
    }
    while (FUN_006acc70(iVar2,uVar5,&local_c), (short)local_c == -1) {
      uVar5 = uVar5 + 1;
      if ((int)local_14 <= (int)uVar5) {
        return;
      }
    }
    uVar12 = CONCAT31((int3)(local_c >> 8),*(undefined1 *)((int)&DAT_007f4fd7 + uVar12 * 0xa62));
  }
  SVar13 = CASE_1;
cf_common_exit_0043CB5C:
  piVar9 = (int *)GetObjPtr(local_10,uVar12,local_c,SVar13);
  (**(code **)(*piVar9 + 0x30))(param_2);
  return;
cf_common_exit_0043C94C:
  *(undefined1 *)param_2 = 3;
  return;
}

