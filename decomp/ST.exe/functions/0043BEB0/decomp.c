
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetPanelInfo */

void __thiscall
STAllPlayersC::GetPanelInfo
          (STAllPlayersC *this,undefined4 param_1,AnonShape_0043BEB0_1C00EC12 *param_2)

{
  ushort uVar1;
  AnonShape_006ACC70_C8641025 *pAVar2;
  DArrayTy *pDVar3;
  code *pcVar4;
  int iVar5;
  STFishC *this_00;
  AnonShape_00493CD0_11D91B87 *pAVar6;
  STGroupBoatC *pSVar7;
  Global_sub_0044D320_param_1Enum GVar8;
  undefined2 *puVar9;
  undefined3 uVar13;
  undefined4 uVar10;
  int *piVar11;
  AnonShape_0043BEB0_1C00EC12 *pAVar12;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined1 *puVar14;
  undefined3 uVar15;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined2 extraout_var;
  undefined4 extraout_EDX;
  uint uVar16;
  AnonShape_0043BEB0_1C00EC12 *pAVar17;
  uint uVar18;
  STAllPlayersC_GetObjPtr_param_3Enum SVar19;
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
  DArrayTy *local_1c;
  undefined2 *local_18;
  uint local_14;
  STAllPlayersC *local_10;
  uint local_c;
  undefined2 local_8;
  undefined2 local_6;
  
  pAVar17 = param_2;
  local_20 = 0;
  local_10 = this;
  if ((char)param_1 == '\x01') {
    uVar18 = (uint)DAT_0080874d;
    iVar5 = g_playerRuntime[uVar18].field326_0x163;
    if (iVar5 == 0) {
      return;
    }
    if (iVar5 != 0x3c) {
      if (iVar5 != 0x1ae) {
        iVar5 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1b8a,0,0,&DAT_007a4ccc
                                   ,s_STAllPlayersC__GetPanelInfo__1__u_007a7f38);
        if (iVar5 == 0) {
          return;
        }
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_c = (uint)(ushort)g_playerRuntime[uVar18].field328_0x16b;
      SVar19 = CASE_3;
      uVar18 = 0xffffffff;
      goto cf_common_exit_0043CB5C;
    }
    if (g_playerRuntime[uVar18].field330_0x171 != 1) {
      if ((ushort)g_playerRuntime[uVar18].field330_0x171 < 2) {
        *(undefined1 *)param_2 = 0;
        return;
      }
      *(undefined1 *)param_2 = 2;
      if (g_playerRuntime[DAT_0080874d].field442_0x203 == 0) {
        param_2->field_0001 = 1;
      }
      else {
        param_2->field_0001 = 0;
      }
      param_2->field_0002 = 1;
      iVar5 = thunk_FUN_004406c0(DAT_0080874d);
      pAVar17->field_0007 = (char)iVar5;
      local_1c = (DArrayTy *)g_playerRuntime[uVar18].field329_0x16d;
      local_14 = local_1c->count;
      pAVar17[2].field_0002 = 0;
      pAVar17[2].field_0003 = 0;
      pAVar17[2].field_0004 = 0;
      pAVar17[2].field_0005 = 0;
      pAVar17[2].field_0006 = 0;
      pAVar17[1].field_0009 = 1;
      local_24 = 0;
      if ((int)local_14 < 1) {
        return;
      }
      do {
        uVar16 = local_24;
        FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_1c,local_24,&local_c);
        if ((short)local_c != -1) {
          this_00 = (STFishC *)
                    GetObjPtr(local_10,CONCAT31((int3)((uint)extraout_ECX >> 8),
                                                *(undefined1 *)
                                                 &g_playerRuntime[uVar18].field327_0x167),local_c,
                              CASE_1);
          STFishC::sub_004162B0(this_00,&local_6,&local_8,(undefined2 *)((int)&param_1 + 2));
          *(undefined1 *)((int)pAVar17 + (0x2e - param_1._2_2_)) = 1;
          (*this_00->vtable->vfunc_30)(local_6c);
          local_34 = local_64;
          local_30 = local_69;
          local_2c = local_51;
          Library::DKW::TBL::FUN_006ae1c0(*(uint **)&pAVar17[2].field_000A,&local_34);
          uVar16 = local_24;
        }
        local_24 = uVar16 + 1;
      } while ((int)local_24 < (int)local_14);
      return;
    }
    pAVar2 = (AnonShape_006ACC70_C8641025 *)g_playerRuntime[uVar18].field329_0x16d;
    uVar16 = 0;
    local_14 = pAVar2->field_000C;
    if ((int)local_14 < 1) {
      return;
    }
    while (FUN_006acc70(pAVar2,uVar16,&local_c), (short)local_c == -1) {
      uVar16 = uVar16 + 1;
      if ((int)local_14 <= (int)uVar16) {
        return;
      }
    }
    uVar18 = CONCAT31((int3)(local_c >> 8),*(undefined1 *)&g_playerRuntime[uVar18].field327_0x167);
  }
  else {
    if ((char)param_1 == '\x02') {
      uVar18 = (uint)DAT_0080874d;
      iVar5 = g_playerRuntime[uVar18].field326_0x163;
      if (iVar5 == 0) {
        return;
      }
      if (iVar5 != 0x3c) {
        if (iVar5 != 0x1ae) {
          iVar5 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1d16,0,0,
                                     &DAT_007a4ccc,s_STAllPlayersC__GetPanelInfo__2__u_007a7efc);
          if (iVar5 == 0) {
            return;
          }
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_c = (uint)(ushort)g_playerRuntime[uVar18].field328_0x16b;
        SVar19 = CASE_3;
        uVar18 = 0xffffffff;
        goto cf_common_exit_0043CA35;
      }
      if (g_playerRuntime[uVar18].field330_0x171 == 1) {
        pAVar2 = (AnonShape_006ACC70_C8641025 *)g_playerRuntime[uVar18].field329_0x16d;
        uVar16 = 0;
        local_14 = pAVar2->field_000C;
        if ((int)local_14 < 1) {
          return;
        }
        while (FUN_006acc70(pAVar2,uVar16,&local_c), (short)local_c == -1) {
          uVar16 = uVar16 + 1;
          if ((int)local_14 <= (int)uVar16) {
            return;
          }
        }
        uVar18 = CONCAT31((int3)(local_c >> 8),
                          *(undefined1 *)&g_playerRuntime[uVar18].field327_0x167);
        goto LAB_0043ca31;
      }
      if ((ushort)g_playerRuntime[uVar18].field330_0x171 < 2) {
        param_2->field_0005 = 0;
        return;
      }
      param_2->field_0005 = 2;
      iVar5 = thunk_FUN_004406c0(DAT_0080874d);
      pAVar17->field_0004 = (char)iVar5;
      local_1c = (DArrayTy *)g_playerRuntime[uVar18].field329_0x16d;
      local_14 = local_1c->count;
      uVar18 = 0;
      if (0 < (int)local_14) {
        do {
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_1c,uVar18,&local_c);
          if ((short)local_c != -1) {
            pAVar6 = (AnonShape_00493CD0_11D91B87 *)
                     GetObjPtr(this,CONCAT31((int3)((uint)extraout_ECX_00 >> 8),DAT_0080874d),
                               local_c,CASE_1);
            iVar5 = thunk_FUN_00493cd0(pAVar6);
            if (iVar5 == 0) break;
          }
          uVar18 = uVar18 + 1;
        } while ((int)uVar18 < (int)local_14);
      }
      if (uVar18 == local_14) {
        pAVar17[1].field_0001 = 0;
        pAVar17->field_0x8 = 0;
        pAVar17->field_0007 = 0;
        return;
      }
      pAVar17->field_0x8 = 1;
      if (*(int *)&g_playerRuntime[DAT_0080874d].field_0x1 == 0) {
LAB_0043c293:
        pAVar17[1].field_0001 = 0;
      }
      else {
        uVar18 = 0;
        pAVar17[1].field_0001 = 3;
        if (0 < (int)local_14) {
          do {
            FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_1c,uVar18,&local_c);
            if ((short)local_c != -1) {
              uVar16 = GetObjPtr(this,CONCAT31((int3)((uint)extraout_ECX_01 >> 8),DAT_0080874d),
                                 local_c,CASE_1);
              pSVar7 = thunk_FUN_0042b760(CONCAT31((int3)(uVar16 >> 8),DAT_0080874d),
                                          CONCAT22(extraout_var,*(undefined2 *)(uVar16 + 0x30)));
              if ((pSVar7 != (STGroupBoatC *)0x0) &&
                 (pAVar17[1].field_0001 = 1, pSVar7->field_001C == 0)) break;
            }
            uVar18 = uVar18 + 1;
          } while ((int)uVar18 < (int)local_14);
        }
        if (uVar18 == local_14) {
          if (pAVar17[1].field_0001 == '\x03') goto LAB_0043c293;
          if (pAVar17[1].field_0001 == '\x01') {
            pAVar17[1].field_0001 = 3;
          }
        }
      }
      pAVar17->field_0007 = 1;
      GVar8 = thunk_FUN_0044ce40(this);
      local_18 = thunk_FUN_0044d320(GVar8);
      param_2 = (AnonShape_0043BEB0_1C00EC12 *)&pAVar17->field_000F;
      puVar9 = local_18;
      puVar14 = (undefined1 *)param_2;
      do {
        puVar14[-6] = *(undefined1 *)((int)puVar9 + 1);
        *puVar14 = *(undefined1 *)puVar9;
        puVar14 = puVar14 + 1;
        puVar9 = puVar9 + 1;
      } while ((int)(puVar14 + (-0xf - (int)pAVar17)) < 6);
      FUN_006ab060(&local_18);
      uVar18 = 0;
      pAVar17[2].field_0011 = 1;
      pAVar17[2].field_0x10 = 1;
      pAVar17[2].field_000F = 1;
      pAVar17[2].field_000E = 1;
      if (0 < (int)local_14) {
        do {
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_1c,uVar18,&local_c);
          if ((short)local_c != -1) {
            uVar16 = GetObjPtr(local_10,CONCAT31((int3)(local_c >> 8),DAT_0080874d),local_c,CASE_1);
            (&pAVar17[2].field_000E)[*(int *)(uVar16 + 0x7ee)] = 3;
          }
          uVar18 = uVar18 + 1;
        } while ((int)uVar18 < (int)local_14);
      }
      if (GVar8 < 0x40001) {
        if (GVar8 == 0x40000) {
          *(undefined4 *)pAVar17 = 0x19;
        }
        else if (GVar8 < 0x81) {
          if (GVar8 == 0x80) {
            *(undefined4 *)pAVar17 = 9;
          }
          else if (GVar8 == CASE_2) {
            *(undefined4 *)pAVar17 = 5;
          }
          else if (GVar8 == CASE_4) {
            *(undefined4 *)pAVar17 = 0xb;
          }
          else if (GVar8 == CASE_8) {
            *(undefined4 *)pAVar17 = 0x11;
          }
        }
        else if (GVar8 == 0x100) {
          *(undefined4 *)pAVar17 = 0x15;
        }
        else if (GVar8 == 0x10000) {
          *(undefined4 *)pAVar17 = 0x22;
        }
        else if (GVar8 == 0x20000) {
          *(undefined4 *)pAVar17 = 0x1a;
        }
      }
      else if (GVar8 < 0x400001) {
        if (GVar8 == 0x400000) {
          *(undefined4 *)pAVar17 = 0x21;
        }
        else if (GVar8 == 0x80000) {
          *(undefined4 *)pAVar17 = 0x1c;
        }
        else if (GVar8 == 0x100000) {
          *(undefined4 *)pAVar17 = 0x1d;
        }
        else if (GVar8 == 0x200000) {
          *(undefined4 *)pAVar17 = 0x1b;
        }
      }
      else if (GVar8 == 0x800000) {
        *(undefined4 *)pAVar17 = 0x23;
      }
      else if (GVar8 == 0x1000000) {
        *(undefined4 *)pAVar17 = 0x24;
      }
      local_28 = 0;
      local_24 = 0;
      uVar18 = local_20;
      if (0 < (int)local_14) {
        do {
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_1c,local_24,&local_c);
          if ((short)local_c != -1) {
            local_28 = local_28 + 1;
            uVar16 = GetObjPtr(local_10,CONCAT31((int3)(local_c >> 8),DAT_0080874d),local_c,CASE_1);
            if (local_28 == 1) {
              uVar18 = (uint)*(ushort *)(uVar16 + 0x30);
            }
            else if (uVar18 != *(ushort *)(uVar16 + 0x30)) {
              return;
            }
          }
          local_24 = local_24 + 1;
        } while ((int)local_24 < (int)local_14);
        if (uVar18 == 0xffff) {
          return;
        }
      }
      uVar13 = (undefined3)(local_24 >> 8);
      uVar15 = (undefined3)(local_14 >> 8);
      if (0x1000 < GVar8) {
        if (GVar8 < 0x100001) {
          if (GVar8 == 0x100000) {
            pSVar7 = thunk_FUN_0042b760(CONCAT31(uVar13,DAT_0080874d),uVar18);
            uVar10 = (*pSVar7->vtable->vfunc_0C)();
            switch(uVar10) {
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
          if (GVar8 < 0x20001) {
            if (GVar8 == 0x20000) {
              pSVar7 = thunk_FUN_0042b760(CONCAT31(uVar15,DAT_0080874d),uVar18);
              uVar10 = (*pSVar7->vtable->vfunc_0C)();
              switch(uVar10) {
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
            if (GVar8 == 0x2000) {
              pSVar7 = thunk_FUN_0042b760(CONCAT31(uVar13,DAT_0080874d),uVar18);
              uVar10 = (*pSVar7->vtable->vfunc_0C)();
              switch(uVar10) {
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
            if (GVar8 != 0x10000) {
              return;
            }
            pSVar7 = thunk_FUN_0042b760(CONCAT31(uVar15,DAT_0080874d),uVar18);
            uVar10 = (*pSVar7->vtable->vfunc_0C)();
            switch(uVar10) {
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
          if (GVar8 == 0x40000) {
            pSVar7 = thunk_FUN_0042b760(CONCAT31(uVar13,DAT_0080874d),uVar18);
            uVar10 = (*pSVar7->vtable->vfunc_0C)();
            switch(uVar10) {
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
          if (GVar8 != 0x80000) {
            return;
          }
          pSVar7 = thunk_FUN_0042b760(CONCAT31(uVar13,DAT_0080874d),uVar18);
          uVar10 = (*pSVar7->vtable->vfunc_0C)();
          switch(uVar10) {
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
        if (GVar8 < 0x800001) {
          if (GVar8 == 0x800000) {
            pSVar7 = thunk_FUN_0042b760(CONCAT31(uVar13,DAT_0080874d),uVar18);
            uVar10 = (*pSVar7->vtable->vfunc_0C)();
            switch(uVar10) {
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
          if (GVar8 == 0x200000) {
            pSVar7 = thunk_FUN_0042b760(CONCAT31(uVar13,DAT_0080874d),uVar18);
            uVar10 = (*pSVar7->vtable->vfunc_0C)();
            switch(uVar10) {
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
          if (GVar8 != 0x400000) {
            return;
          }
          pSVar7 = thunk_FUN_0042b760(CONCAT31(uVar13,DAT_0080874d),uVar18);
          uVar10 = (*pSVar7->vtable->vfunc_0C)();
          switch(uVar10) {
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
        if (GVar8 == 0x1000000) {
          pSVar7 = thunk_FUN_0042b760(CONCAT31(uVar13,DAT_0080874d),uVar18);
          uVar10 = (*pSVar7->vtable->vfunc_0C)();
          switch(uVar10) {
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
        if (GVar8 != 0x2000000) {
          return;
        }
        pSVar7 = thunk_FUN_0042b760(CONCAT31(uVar13,DAT_0080874d),uVar18);
        uVar10 = (*pSVar7->vtable->vfunc_0C)();
        switch(uVar10) {
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
      if (GVar8 == 0x1000) goto switchD_0043c4d2_caseD_28;
      if (0x40 < GVar8) {
        if (0x200 < GVar8) {
          if (GVar8 == 0x400) {
            pSVar7 = thunk_FUN_0042b760(CONCAT31(uVar13,DAT_0080874d),uVar18);
            uVar10 = (*pSVar7->vtable->vfunc_0C)();
            switch(uVar10) {
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
          if (GVar8 != 0x800) {
            return;
          }
          pSVar7 = thunk_FUN_0042b760(CONCAT31(uVar15,DAT_0080874d),uVar18);
          uVar10 = (*pSVar7->vtable->vfunc_0C)();
          switch(uVar10) {
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
        if (GVar8 == 0x200) {
          pSVar7 = thunk_FUN_0042b760(CONCAT31(uVar15,DAT_0080874d),uVar18);
          uVar10 = (*pSVar7->vtable->vfunc_0C)();
          switch(uVar10) {
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
        if ((GVar8 != 0x80) && (GVar8 != 0x100)) {
          return;
        }
        pSVar7 = thunk_FUN_0042b760(CONCAT31(uVar13,DAT_0080874d),uVar18);
        uVar10 = (*pSVar7->vtable->vfunc_0C)();
        switch(uVar10) {
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
      if (GVar8 == 0x40) {
        pSVar7 = thunk_FUN_0042b760(CONCAT31(uVar15,DAT_0080874d),uVar18);
        uVar10 = (*pSVar7->vtable->vfunc_0C)();
        switch(uVar10) {
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
      switch(GVar8) {
      case CASE_1:
        pSVar7 = thunk_FUN_0042b760(CONCAT31(uVar13,DAT_0080874d),uVar18);
        uVar10 = (*pSVar7->vtable->vfunc_0C)();
        switch(uVar10) {
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
          *(undefined1 *)(pAVar17 + 1) = 3;
          return;
        }
        break;
      case CASE_2:
      case CASE_4:
      case CASE_8:
        pSVar7 = thunk_FUN_0042b760(CONCAT31(uVar13,DAT_0080874d),uVar18);
        uVar10 = (*pSVar7->vtable->vfunc_0C)();
        switch(uVar10) {
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
        pSVar7 = thunk_FUN_0042b760(CONCAT31(uVar13,DAT_0080874d),uVar18);
        uVar10 = (*pSVar7->vtable->vfunc_0C)();
        switch(uVar10) {
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
        pSVar7 = thunk_FUN_0042b760(CONCAT31(uVar13,DAT_0080874d),uVar18);
        uVar10 = (*pSVar7->vtable->vfunc_0C)();
        switch(uVar10) {
        case 1:
        case 7:
cf_common_exit_0043C72D:
          *(undefined1 *)param_2 = 3;
          return;
        case 2:
cf_common_exit_0043C862:
          pAVar17->field_0x10 = 3;
          return;
        case 3:
cf_common_exit_0043C95B:
          pAVar17->field_0011 = 3;
          return;
        case 4:
cf_common_exit_0043C86F:
          pAVar17->field_0012 = 3;
          return;
        }
      }
      return;
    }
    if ((char)param_1 == '\x04') {
      uVar18 = (uint)DAT_0080874d;
      iVar5 = g_playerRuntime[uVar18].field384_0x1b3;
      if (0x19a < iVar5) {
        if (iVar5 == 0x1a4) {
          local_c = (uint)(ushort)g_playerRuntime[uVar18].field386_0x1bb;
          SVar19 = CASE_5;
          uVar18 = 0xffffffff;
        }
        else {
          if (iVar5 != 0x1b8) {
LAB_0043ca5a:
            iVar5 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1d47,0,0,
                                       &DAT_007a4ccc,s_STAllPlayersC__GetPanelInfo__4__u_007a7ec0);
            if (iVar5 == 0) {
              return;
            }
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_c = (uint)(ushort)g_playerRuntime[uVar18].field386_0x1bb;
          SVar19 = CASE_6;
          uVar18 = 0xffffffff;
        }
        goto cf_common_exit_0043CA35;
      }
      if (iVar5 != 0x19a) {
        if (iVar5 == 0) {
          return;
        }
        if (iVar5 == 0x5a) {
          local_c = (uint)(ushort)g_playerRuntime[uVar18].field386_0x1bb;
          SVar19 = CASE_4;
          uVar18 = 0xffffffff;
        }
        else {
          if (iVar5 != 0x172) goto LAB_0043ca5a;
          local_c = (uint)(ushort)g_playerRuntime[uVar18].field386_0x1bb;
          SVar19 = CASE_2;
          uVar18 = 0xffffffff;
        }
        goto cf_common_exit_0043CA35;
      }
      if (g_playerRuntime[uVar18].field388_0x1c1 != 1) {
        return;
      }
      pAVar2 = (AnonShape_006ACC70_C8641025 *)g_playerRuntime[uVar18].field387_0x1bd;
      uVar16 = 0;
      local_14 = pAVar2->field_000C;
      if ((int)local_14 < 1) {
        return;
      }
      while (FUN_006acc70(pAVar2,uVar16,&local_c), (short)local_c == -1) {
        uVar16 = uVar16 + 1;
        if ((int)local_14 <= (int)uVar16) {
          return;
        }
      }
      uVar18 = CONCAT31((int3)(local_c >> 8),*(undefined1 *)&g_playerRuntime[uVar18].field385_0x1b7)
      ;
LAB_0043ca31:
      SVar19 = CASE_1;
cf_common_exit_0043CA35:
      piVar11 = (int *)GetObjPtr(local_10,uVar18,local_c,SVar19);
      (**(code **)(*piVar11 + 0x34))(param_2);
      return;
    }
    if ((char)param_1 != '\x05') {
      if ((char)param_1 == '\x06') {
        if (*(int *)param_2 != 0) {
          *(undefined4 *)(*(int *)param_2 + 0xc) = 0;
        }
        uVar18 = (uint)DAT_0080874d;
        if (g_playerRuntime[uVar18].field384_0x1b3 == 0) {
          return;
        }
        if (g_playerRuntime[uVar18].field384_0x1b3 != 0x19a) {
          iVar5 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1d95,0,0,
                                     &DAT_007a4ccc,s_STAllPlayersC__GetPanelInfo__6__u_007a7e48);
          if (iVar5 == 0) {
            return;
          }
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (g_playerRuntime[uVar18].field388_0x1c1 != 1) {
          return;
        }
        pAVar2 = (AnonShape_006ACC70_C8641025 *)g_playerRuntime[uVar18].field387_0x1bd;
        uVar16 = 0;
        local_14 = pAVar2->field_000C;
        if ((int)local_14 < 1) {
          return;
        }
        do {
          FUN_006acc70(pAVar2,uVar16,&local_c);
          if ((short)local_c != -1) {
            piVar11 = (int *)GetObjPtr(local_10,CONCAT31((int3)(local_c >> 8),
                                                         *(undefined1 *)
                                                          &g_playerRuntime[uVar18].field385_0x1b7),
                                       local_c,CASE_1);
            (**(code **)(*piVar11 + 0x38))(param_2);
            return;
          }
          uVar16 = uVar16 + 1;
        } while ((int)uVar16 < (int)local_14);
        return;
      }
      if ((char)param_1 == '\a') {
        *(undefined4 *)(*(int *)param_2 + 0xc) = 0;
        *(undefined4 *)(*(int *)&param_2->field_0004 + 0xc) = 0;
        *(undefined4 *)(*(int *)&param_2->field_0x8 + 0xc) = 0;
        *(undefined4 *)(*(int *)&param_2->field_0xc + 0xc) = 0;
        uVar18 = (uint)DAT_0080874d;
        if (g_playerRuntime[uVar18].field384_0x1b3 == 0) {
          return;
        }
        if (g_playerRuntime[uVar18].field384_0x1b3 != 0x19a) {
          iVar5 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1db2,0,0,
                                     &DAT_007a4ccc,s_STAllPlayersC__GetPanelInfo__7__u_007a7e0c);
          if (iVar5 == 0) {
            return;
          }
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (g_playerRuntime[uVar18].field388_0x1c1 != 1) {
          return;
        }
        pAVar2 = (AnonShape_006ACC70_C8641025 *)g_playerRuntime[uVar18].field387_0x1bd;
        uVar16 = 0;
        local_14 = pAVar2->field_000C;
        if ((int)local_14 < 1) {
          return;
        }
        do {
          FUN_006acc70(pAVar2,uVar16,&local_c);
          if ((short)local_c != -1) {
            piVar11 = (int *)GetObjPtr(local_10,CONCAT31((int3)(local_c >> 8),
                                                         *(undefined1 *)
                                                          &g_playerRuntime[uVar18].field385_0x1b7),
                                       local_c,CASE_1);
            (**(code **)(*piVar11 + 0x3c))(param_2);
            return;
          }
          uVar16 = uVar16 + 1;
        } while ((int)uVar16 < (int)local_14);
        return;
      }
      if ((char)param_1 == '\b') {
        uVar18 = (uint)DAT_0080874d;
        *(undefined4 *)(*(int *)param_2 + 0xc) = 0;
        *(undefined4 *)(*(int *)&param_2->field_0004 + 0xc) = 0;
        *(undefined4 *)(*(int *)&param_2->field_0x8 + 0xc) = 0;
        *(undefined4 *)(*(int *)&param_2->field_0xc + 0xc) = 0;
        *(undefined4 *)(*(int *)&param_2->field_0x10 + 0xc) = 0;
        if (g_playerRuntime[uVar18].field326_0x163 == 0) {
          return;
        }
        if (g_playerRuntime[uVar18].field326_0x163 != 0x3c) {
          iVar5 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1dd0,0,0,
                                     &DAT_007a4ccc,s_STAllPlayersC__GetPanelInfo__8__u_007a7dd0);
          if (iVar5 == 0) {
            return;
          }
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (g_playerRuntime[uVar18].field330_0x171 == 0) {
          return;
        }
        local_1c = (DArrayTy *)g_playerRuntime[uVar18].field329_0x16d;
        uVar16 = 0;
        local_14 = local_1c->count;
        if ((int)local_14 < 1) {
          return;
        }
        do {
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_1c,uVar16,&local_c);
          if ((short)local_c != -1) {
            piVar11 = (int *)GetObjPtr(local_10,CONCAT31((int3)(local_c >> 8),
                                                         *(undefined1 *)
                                                          &g_playerRuntime[uVar18].field327_0x167),
                                       local_c,CASE_1);
            (**(code **)(*piVar11 + 0x40))(pAVar17);
            return;
          }
          uVar16 = uVar16 + 1;
        } while ((int)uVar16 < (int)local_14);
        return;
      }
      if ((char)param_1 == '\t') {
        uVar18 = (uint)DAT_0080874d;
        if (g_playerRuntime[uVar18].field384_0x1b3 == 0) {
          return;
        }
        if (g_playerRuntime[uVar18].field384_0x1b3 != 0x19a) {
          iVar5 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1dec,0,0,
                                     &DAT_007a4ccc,s_STAllPlayersC__GetPanelInfo__9__u_007a7d94);
          if (iVar5 == 0) {
            return;
          }
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (g_playerRuntime[uVar18].field388_0x1c1 != 1) {
          return;
        }
        pAVar2 = (AnonShape_006ACC70_C8641025 *)g_playerRuntime[uVar18].field387_0x1bd;
        uVar16 = 0;
        local_14 = pAVar2->field_000C;
        if ((int)local_14 < 1) {
          return;
        }
        do {
          FUN_006acc70(pAVar2,uVar16,&local_c);
          if ((short)local_c != -1) {
            piVar11 = (int *)GetObjPtr(local_10,CONCAT31((int3)(local_c >> 8),
                                                         *(undefined1 *)
                                                          &g_playerRuntime[uVar18].field385_0x1b7),
                                       local_c,CASE_1);
            (**(code **)(*piVar11 + 0x44))(param_2);
            return;
          }
          uVar16 = uVar16 + 1;
        } while ((int)uVar16 < (int)local_14);
        return;
      }
      if ((char)param_1 == '\n') {
        uVar18 = (uint)DAT_0080874d;
        local_28 = uVar18 * 0xa62 + 0x7f4fd3;
        if (g_playerRuntime[uVar18].field384_0x1b3 != 0x19a) {
          return;
        }
        if (g_playerRuntime[uVar18].field388_0x1c1 != 1) {
          return;
        }
        pAVar2 = (AnonShape_006ACC70_C8641025 *)g_playerRuntime[uVar18].field387_0x1bd;
        uVar16 = 0;
        uVar18 = pAVar2->field_000C;
        if ((int)uVar18 < 1) {
          return;
        }
        do {
          FUN_006acc70(pAVar2,uVar16,&local_c);
          if ((short)local_c != -1) {
            piVar11 = (int *)GetObjPtr(local_10,CONCAT31((int3)(local_c >> 8),
                                                         *(undefined1 *)(local_28 + 4)),local_c,
                                       CASE_1);
            (**(code **)(*piVar11 + 0x48))(param_2);
            return;
          }
          uVar16 = uVar16 + 1;
        } while ((int)uVar16 < (int)uVar18);
        return;
      }
      if ((char)param_1 != '\v') {
        if ((char)param_1 == '\f') {
          if (*(int *)param_2 != 0) {
            *(undefined4 *)(*(int *)param_2 + 0xc) = 0;
          }
          uVar18 = (uint)DAT_0080874d;
          if (g_playerRuntime[uVar18].field384_0x1b3 == 0) {
            return;
          }
          if (g_playerRuntime[uVar18].field384_0x1b3 != 0x19a) {
            iVar5 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1ea3,0,0,
                                       &DAT_007a4ccc,s_STAllPlayersC__GetPanelInfo__12__007a7d14);
            if (iVar5 == 0) {
              return;
            }
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (g_playerRuntime[uVar18].field388_0x1c1 != 1) {
            return;
          }
          pAVar2 = (AnonShape_006ACC70_C8641025 *)g_playerRuntime[uVar18].field387_0x1bd;
          uVar16 = 0;
          local_14 = pAVar2->field_000C;
          if ((int)local_14 < 1) {
            return;
          }
          do {
            FUN_006acc70(pAVar2,uVar16,&local_c);
            if ((short)local_c != -1) {
              piVar11 = (int *)GetObjPtr(local_10,CONCAT31((int3)(local_c >> 8),
                                                           *(undefined1 *)
                                                            &g_playerRuntime[uVar18].field385_0x1b7)
                                         ,local_c,CASE_1);
              (**(code **)(*piVar11 + 0x50))(param_2);
              return;
            }
            uVar16 = uVar16 + 1;
          } while ((int)uVar16 < (int)local_14);
          return;
        }
        if ((char)param_1 == '\x0e') {
          local_28 = 4;
          pAVar12 = (AnonShape_0043BEB0_1C00EC12 *)&g_playerRuntime[DAT_0080874d].field334_0x17d;
          do {
            iVar5._0_1_ = pAVar12[-0xffffffff00000001].field_000A;
            iVar5._1_1_ = pAVar12[-0xffffffff00000001].field_000B;
            iVar5._2_1_ = pAVar12[-0xffffffff00000001].field_0xc;
            iVar5._3_1_ = pAVar12[-0xffffffff00000001].field_000D;
            param_2 = pAVar12;
            if (iVar5 == 0) {
LAB_0043d41d:
              *(undefined1 *)pAVar17 = 0;
            }
            else if (iVar5 == 0x3c) {
              uVar1._0_1_ = pAVar12->field_0004;
              uVar1._1_1_ = pAVar12->field_0005;
              if (uVar1 == 1) {
                uVar18 = 0;
                pAVar2 = *(AnonShape_006ACC70_C8641025 **)pAVar12;
                local_14 = pAVar2->field_000C;
                if (0 < (int)local_14) {
                  do {
                    FUN_006acc70(pAVar2,uVar18,&local_c);
                    if ((short)local_c != -1) {
                      SVar19 = CASE_1;
                      uVar16 = CONCAT31((int3)(local_c >> 8),param_2[-1].field_000E);
                      uVar18 = local_c;
                      goto LAB_0043d447;
                    }
                    uVar18 = uVar18 + 1;
                  } while ((int)uVar18 < (int)local_14);
                }
              }
              else {
                if (uVar1 < 2) goto LAB_0043d41d;
                *(undefined1 *)pAVar17 = 2;
                pAVar17->field_0001 = 1;
                pAVar17->field_0006 = g_playerRuntime[DAT_0080874d].raceId;
              }
            }
            else {
              if (iVar5 != 0x1ae) {
                iVar5 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1ecc,0,0,
                                           &DAT_007a4ccc,s_STAllPlayersC__GetPanelInfo__14__007a7cd4
                                          );
                if (iVar5 != 0) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                goto LAB_0043d41d;
              }
              SVar19 = CASE_3;
              uVar16 = 0xffffffff;
              uVar18 = CONCAT22((short)((uint)pAVar12 >> 0x10),
                                *(undefined2 *)&pAVar12[-1].field_0012);
LAB_0043d447:
              piVar11 = (int *)GetObjPtr(local_10,uVar16,uVar18,SVar19);
              (**(code **)(*piVar11 + 0x58))(pAVar17);
            }
            pAVar12 = (AnonShape_0043BEB0_1C00EC12 *)&param_2->field_0x10;
            pAVar17 = (AnonShape_0043BEB0_1C00EC12 *)&pAVar17->field_000B;
            local_28 = local_28 + -1;
            if (local_28 == 0) {
              return;
            }
          } while( true );
        }
        if ((char)param_1 == '\x0f') {
          param_2 = (AnonShape_0043BEB0_1C00EC12 *)0x4;
          puVar9 = &g_playerRuntime[DAT_0080874d].field391_0x1cb;
          do {
            iVar5 = *(int *)(puVar9 + -4);
            if (iVar5 < 0x19b) {
              if (iVar5 == 0x19a) {
                if (puVar9[3] == 1) {
                  local_1c = *(DArrayTy **)(puVar9 + 1);
                  uVar18 = 0;
                  local_14 = local_1c->count;
                  if (0 < (int)local_14) {
                    do {
                      FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_1c,uVar18,&local_c);
                      if ((short)local_c != -1) {
                        uVar16 = CONCAT31((int3)((uint)extraout_ECX_03 >> 8),
                                          *(undefined1 *)(puVar9 + -2));
                        SVar19 = CASE_1;
                        uVar18 = local_c;
                        goto LAB_0043d5b7;
                      }
                      uVar18 = uVar18 + 1;
                    } while ((int)uVar18 < (int)local_14);
                  }
                  goto LAB_0043d5c4;
                }
              }
              else if (iVar5 != 0) {
                if (iVar5 == 0x5a) {
                  SVar19 = CASE_4;
                }
                else {
                  if (iVar5 != 0x172) goto LAB_0043d581;
                  SVar19 = CASE_2;
                }
                goto LAB_0043d5b1;
              }
LAB_0043d5a6:
              *(undefined1 *)pAVar17 = 0;
            }
            else {
              if (iVar5 == 0x1a4) {
                SVar19 = CASE_5;
                iVar5 = 0;
              }
              else {
                if (iVar5 != 0x1b8) {
LAB_0043d581:
                  iVar5 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1efe,0,0,
                                             &DAT_007a4ccc,
                                             s_STAllPlayersC__GetPanelInfo__15__007a7c94);
                  if (iVar5 != 0) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  goto LAB_0043d5a6;
                }
                SVar19 = CASE_6;
                iVar5 = 0;
              }
LAB_0043d5b1:
              uVar16 = 0xffffffff;
              uVar18 = CONCAT22((short)((uint)iVar5 >> 0x10),*puVar9);
LAB_0043d5b7:
              piVar11 = (int *)GetObjPtr(local_10,uVar16,uVar18,SVar19);
              (**(code **)(*piVar11 + 0x5c))(pAVar17);
            }
LAB_0043d5c4:
            puVar9 = puVar9 + 8;
            pAVar17 = (AnonShape_0043BEB0_1C00EC12 *)&pAVar17->field_000B;
            param_2 = (AnonShape_0043BEB0_1C00EC12 *)&param_2[-1].field_0x13;
            if (param_2 == (AnonShape_0043BEB0_1C00EC12 *)0x0) {
              return;
            }
          } while( true );
        }
        if ((char)param_1 != '\x10') {
          if ((char)param_1 == '\x11') {
            uVar18 = (uint)DAT_0080874d;
            if (g_playerRuntime[uVar18].field326_0x163 == 0) {
              return;
            }
            if (g_playerRuntime[uVar18].field326_0x163 != 0x3c) {
              iVar5 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1f4c,0,0,
                                         &DAT_007a4ccc,s_STAllPlayersC__GetPanelInfo__17__007a7c14);
              if (iVar5 == 0) {
                return;
              }
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if ((ushort)g_playerRuntime[uVar18].field330_0x171 < 2) {
              return;
            }
            pAVar2 = (AnonShape_006ACC70_C8641025 *)g_playerRuntime[uVar18].field329_0x16d;
            iVar5 = 0;
            uVar18 = 0;
            local_14 = pAVar2->field_000C;
            if (0 < (int)local_14) {
              do {
                FUN_006acc70(pAVar2,uVar18,&local_c);
                if ((short)local_c != -1) {
                  iVar5 = iVar5 + 1;
                  uVar16 = GetObjPtr(local_10,CONCAT31((int3)((uint)extraout_ECX_04 >> 8),
                                                       DAT_0080874d),local_c,CASE_1);
                  if (iVar5 == 1) {
                    local_20 = (uint)*(ushort *)(uVar16 + 0x30);
                  }
                  else if (local_20 != *(ushort *)(uVar16 + 0x30)) {
                    return;
                  }
                }
                uVar18 = uVar18 + 1;
              } while ((int)uVar18 < (int)local_14);
              if (local_20 == 0xffff) {
                return;
              }
            }
            pSVar7 = thunk_FUN_0042b760(CONCAT31((int3)(local_20 >> 8),DAT_0080874d),local_20);
            uVar10 = (*pSVar7->vtable->vfunc_1C)();
            switch(uVar10) {
            case 0:
              param_2->field_0007 = 1;
              return;
            case 1:
              *(undefined1 *)param_2 = 1;
              return;
            case 2:
              param_2->field_0004 = 1;
              return;
            case 3:
              param_2->field_0006 = 1;
              return;
            case 4:
              param_2->field_0001 = 1;
              return;
            case 5:
              param_2->field_0005 = 1;
              return;
            case 0xfffffffd:
              param_2->field_0002 = 1;
              return;
            case 0xfffffffe:
              param_2->field_0003 = 1;
              return;
            default:
              return;
            }
          }
          if ((char)param_1 != '\x12') {
            return;
          }
          uVar18 = (uint)DAT_0080874d;
          if (g_playerRuntime[uVar18].field326_0x163 == 0) {
            return;
          }
          if (g_playerRuntime[uVar18].field326_0x163 == 0x1ae) {
            piVar11 = (int *)GetObjPtr(this,0xffffffff,
                                       CONCAT22((short)(uVar18 * 0xa62 + 0x7f4f83 >> 0x10),
                                                g_playerRuntime[uVar18].field328_0x16b),CASE_3);
            (**(code **)(*piVar11 + 100))(param_2);
            return;
          }
          iVar5 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1f5d,0,0,
                                     &DAT_007a4ccc,s_STAllPlayersC__GetPanelInfo__18__007a7bd4);
          if (iVar5 == 0) {
            return;
          }
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar18 = (uint)DAT_0080874d;
        iVar5 = g_playerRuntime[uVar18].field326_0x163;
        if (iVar5 == 0) {
          return;
        }
        if (iVar5 != 0x3c) {
          if (iVar5 == 0x1ae) {
            return;
          }
          iVar5 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1f22,0,0,
                                     &DAT_007a4ccc,s_STAllPlayersC__GetPanelInfo__16__007a7c54);
          if (iVar5 == 0) {
            return;
          }
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (g_playerRuntime[uVar18].field330_0x171 == 0) {
          return;
        }
        pAVar2 = (AnonShape_006ACC70_C8641025 *)g_playerRuntime[uVar18].field329_0x16d;
        uVar16 = 0;
        local_14 = pAVar2->field_000C;
        if (0 < (int)local_14) {
          do {
            FUN_006acc70(pAVar2,uVar16,&local_c);
            if ((short)local_c != -1) {
              piVar11 = (int *)GetObjPtr(local_10,CONCAT31((int3)(local_c >> 8),
                                                           *(undefined1 *)
                                                            &g_playerRuntime[uVar18].field327_0x167)
                                         ,local_c,CASE_1);
              (**(code **)(*piVar11 + 0x60))(param_2);
              break;
            }
            uVar16 = uVar16 + 1;
          } while ((int)uVar16 < (int)local_14);
        }
        if ((ushort)g_playerRuntime[uVar18].field330_0x171 < 2) {
          return;
        }
        *(undefined4 *)&param_2[0x15].field_0xc = 0xffffffff;
        *(undefined4 *)(param_2 + 0x18) = 0xffffffff;
        *(undefined4 *)&param_2[0x1a].field_0x8 = 0xffffffff;
        return;
      }
      uVar18 = (uint)DAT_0080874d;
      if (g_playerRuntime[uVar18].field326_0x163 == 0) {
        return;
      }
      if (g_playerRuntime[uVar18].field326_0x163 != 0x3c) {
        iVar5 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1e85,0,0,&DAT_007a4ccc
                                   ,s_STAllPlayersC__GetPanelInfo__11__007a7d54);
        if (iVar5 == 0) {
          return;
        }
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (g_playerRuntime[uVar18].field330_0x171 == 1) {
        pAVar2 = (AnonShape_006ACC70_C8641025 *)g_playerRuntime[uVar18].field329_0x16d;
        uVar16 = 0;
        local_14 = pAVar2->field_000C;
        if ((int)local_14 < 1) {
          return;
        }
        do {
          FUN_006acc70(pAVar2,uVar16,&local_c);
          if ((short)local_c != -1) {
            piVar11 = (int *)GetObjPtr(local_10,CONCAT31((int3)((uint)extraout_ECX_02 >> 8),
                                                         *(undefined1 *)
                                                          &g_playerRuntime[uVar18].field327_0x167),
                                       local_c,CASE_1);
            (**(code **)(*piVar11 + 0x4c))(param_2);
            return;
          }
          uVar16 = uVar16 + 1;
        } while ((int)uVar16 < (int)local_14);
        return;
      }
      if ((ushort)g_playerRuntime[uVar18].field330_0x171 < 2) {
        return;
      }
      *(undefined4 *)param_2 = 0;
      param_2->field_0004 = 0x2b;
      param_2->field_0005 = 0x2c;
      param_2->field_0006 = 5;
      param_2->field_0007 = 6;
      param_2->field_0x8 = 0x4d;
      param_2->field_0009 = 0x2d;
      param_2->field_000A = 1;
      param_2->field_0xc = 1;
      param_2->field_000D = 1;
      param_2->field_000E = 1;
      param_2->field_000F = 1;
      param_2->field_000B = 0;
      pDVar3 = (DArrayTy *)g_playerRuntime[uVar18].field329_0x16d;
      uVar18 = 0;
      local_14 = pDVar3->count;
      param_2->field_0011 = 1;
      param_2->field_0x10 = 1;
      param_2->field_0012 = 3;
      local_1c = pDVar3;
      if (0 < (int)local_14) {
        do {
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar3,uVar18,&local_c);
          if ((short)local_c != -1) {
            uVar16 = GetObjPtr(local_10,CONCAT31((int3)(local_c >> 8),DAT_0080874d),local_c,CASE_1);
            if (*(int *)(uVar16 + 0x7e6) == 0) {
              pAVar17->field_0011 = 3;
            }
            else {
              pAVar17->field_0x10 = 3;
            }
            if ((pAVar17->field_0012 == '\x03') && (*(int *)(uVar16 + 0x7ea) == 0)) {
              pAVar17->field_0012 = 1;
            }
          }
          uVar18 = uVar18 + 1;
        } while ((int)uVar18 < (int)local_14);
      }
      uVar18 = 0;
      if (0 < (int)local_14) {
        do {
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar3,uVar18,&local_c);
          if ((short)local_c != -1) {
            piVar11 = (int *)GetObjPtr(local_10,CONCAT31((int3)((uint)extraout_EDX >> 8),
                                                         DAT_0080874d),local_c,CASE_1);
            uVar10 = (**(code **)(*piVar11 + 0x2c))();
            switch(uVar10) {
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
          uVar18 = uVar18 + 1;
        } while ((int)uVar18 < (int)local_14);
      }
switchD_0043d1bf_caseD_a:
      if (uVar18 == local_14) {
        pAVar17->field_000A = 0;
        pAVar17->field_000B = 0;
        pAVar17->field_0xc = 0;
        pAVar17->field_000D = 0;
      }
      param_2 = (AnonShape_0043BEB0_1C00EC12 *)(uint)(uVar18 == local_14);
      iVar5 = 0;
      uVar18 = 0;
      if (0 < (int)local_14) {
        do {
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_1c,uVar18,&local_c);
          if ((short)local_c != -1) {
            iVar5 = iVar5 + 1;
            uVar16 = GetObjPtr(local_10,CONCAT31((int3)(local_c >> 8),DAT_0080874d),local_c,CASE_1);
            if (iVar5 == 1) {
              local_20 = (uint)*(ushort *)(uVar16 + 0x30);
            }
            else if (local_20 != *(ushort *)(uVar16 + 0x30)) {
              return;
            }
          }
          uVar18 = uVar18 + 1;
        } while ((int)uVar18 < (int)local_14);
      }
      if (param_2 == (AnonShape_0043BEB0_1C00EC12 *)0x1) {
        return;
      }
      if (local_20 == 0xffff) {
        return;
      }
      pSVar7 = thunk_FUN_0042b760(CONCAT31((int3)(local_20 >> 8),DAT_0080874d),local_20);
      uVar10 = (*pSVar7->vtable->vfunc_0C)();
      switch(uVar10) {
      case 5:
        pAVar17->field_0xc = 3;
        return;
      case 6:
        pAVar17->field_000D = 3;
        return;
      default:
        return;
      case 0x10:
        pAVar17->field_000E = 3;
        return;
      case 0x14:
        pAVar17->field_000F = 3;
        return;
      }
    }
    uVar18 = (uint)DAT_0080874d;
    iVar5 = g_playerRuntime[uVar18].field384_0x1b3;
    if (0x19a < iVar5) {
      if (iVar5 == 0x1a4) {
        local_c = (uint)(ushort)g_playerRuntime[uVar18].field386_0x1bb;
        SVar19 = CASE_5;
        uVar18 = 0xffffffff;
      }
      else {
        if (iVar5 != 0x1b8) {
LAB_0043cb81:
          iVar5 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1d78,0,0,
                                     &DAT_007a4ccc,s_STAllPlayersC__GetPanelInfo__5__u_007a7e84);
          if (iVar5 == 0) {
            return;
          }
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_c = (uint)(ushort)g_playerRuntime[uVar18].field386_0x1bb;
        SVar19 = CASE_6;
        uVar18 = 0xffffffff;
      }
      goto cf_common_exit_0043CB5C;
    }
    if (iVar5 != 0x19a) {
      if (iVar5 == 0) {
        return;
      }
      if (iVar5 == 0x5a) {
        local_c = (uint)(ushort)g_playerRuntime[uVar18].field386_0x1bb;
        SVar19 = CASE_4;
        uVar18 = 0xffffffff;
      }
      else {
        if (iVar5 != 0x172) goto LAB_0043cb81;
        local_c = (uint)(ushort)g_playerRuntime[uVar18].field386_0x1bb;
        SVar19 = CASE_2;
        uVar18 = 0xffffffff;
      }
      goto cf_common_exit_0043CB5C;
    }
    if (g_playerRuntime[uVar18].field388_0x1c1 != 1) {
      return;
    }
    pAVar2 = (AnonShape_006ACC70_C8641025 *)g_playerRuntime[uVar18].field387_0x1bd;
    uVar16 = 0;
    local_14 = pAVar2->field_000C;
    if ((int)local_14 < 1) {
      return;
    }
    while (FUN_006acc70(pAVar2,uVar16,&local_c), (short)local_c == -1) {
      uVar16 = uVar16 + 1;
      if ((int)local_14 <= (int)uVar16) {
        return;
      }
    }
    uVar18 = CONCAT31((int3)(local_c >> 8),*(undefined1 *)&g_playerRuntime[uVar18].field385_0x1b7);
  }
  SVar19 = CASE_1;
cf_common_exit_0043CB5C:
  piVar11 = (int *)GetObjPtr(local_10,uVar18,local_c,SVar19);
  (**(code **)(*piVar11 + 0x30))(param_2);
  return;
cf_common_exit_0043C94C:
  *(undefined1 *)param_2 = 3;
  return;
}

