
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetPanelInfo */

void __thiscall
STAllPlayersC::GetPanelInfo
          (STAllPlayersC *this,undefined4 param_1,AnonShape_0043BEB0_1C00EC12 *param_2)

{
  ushort uVar1;
  DArrayTy *pDVar2;
  code *pcVar3;
  int iVar4;
  STFishC *this_00;
  AnonShape_00493CD0_11D91B87 *pAVar5;
  STGroupBoatC *pSVar6;
  Global_sub_0044D320_param_1Enum GVar7;
  undefined2 *puVar8;
  undefined3 uVar12;
  undefined4 uVar9;
  int *piVar10;
  AnonShape_0043BEB0_1C00EC12 *pAVar11;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined1 *puVar13;
  undefined3 uVar14;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined2 extraout_var;
  undefined4 extraout_EDX;
  uint uVar15;
  short *psVar16;
  dword dVar17;
  AnonShape_0043BEB0_1C00EC12 *pAVar18;
  uint uVar19;
  STAllPlayersC_GetObjPtr_param_3Enum SVar20;
  undefined1 local_6c [3];
  undefined4 local_69;
  undefined4 local_64;
  undefined1 local_51;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  STPlayerTempSlot *local_28;
  uint local_24;
  uint local_20;
  DArrayTy *local_1c;
  undefined2 *local_18;
  uint local_14;
  STAllPlayersC *local_10;
  uint local_c;
  undefined2 local_8;
  undefined2 local_6;
  
  pAVar18 = param_2;
  local_20 = 0;
  local_10 = this;
  if ((char)param_1 == '\x01') {
    uVar19 = (uint)DAT_0080874d;
    iVar4 = g_playerRuntime[uVar19].tempSlots[0][0].objectType;
    if (iVar4 == 0) {
      return;
    }
    if (iVar4 != 0x3c) {
      if (iVar4 != 0x1ae) {
        iVar4 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1b8a,0,0,&DAT_007a4ccc
                                   ,s_STAllPlayersC__GetPanelInfo__1__u_007a7f38);
        if (iVar4 == 0) {
          return;
        }
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_c = (uint)(ushort)g_playerRuntime[uVar19].tempSlots[0][0].objectId;
      SVar20 = CASE_3;
      uVar19 = 0xffffffff;
      goto cf_common_exit_0043CB5C;
    }
    uVar1 = g_playerRuntime[uVar19].tempSlots[0][0].activityCount;
    if (uVar1 != 1) {
      if (uVar1 < 2) {
        *(undefined1 *)param_2 = 0;
        return;
      }
      *(undefined1 *)param_2 = 2;
      if (g_playerRuntime[DAT_0080874d].field324_0x203 == 0) {
        param_2->field_0001 = 1;
      }
      else {
        param_2->field_0001 = 0;
      }
      param_2->field_0002 = 1;
      iVar4 = thunk_FUN_004406c0(DAT_0080874d);
      pAVar18->field_0007 = (char)iVar4;
      local_1c = g_playerRuntime[uVar19].tempSlots[0][0].objectIds;
      local_14 = local_1c->count;
      pAVar18[2].field_0002 = 0;
      pAVar18[2].field_0003 = 0;
      pAVar18[2].field_0004 = 0;
      pAVar18[2].field_0005 = 0;
      pAVar18[2].field_0006 = 0;
      pAVar18[1].field_0009 = 1;
      local_24 = 0;
      if ((int)local_14 < 1) {
        return;
      }
      do {
        uVar15 = local_24;
        FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_1c,local_24,&local_c);
        if ((short)local_c != -1) {
          this_00 = (STFishC *)
                    GetObjPtr(local_10,CONCAT31((int3)((uint)extraout_ECX >> 8),
                                                (char)g_playerRuntime[uVar19].tempSlots[0][0].
                                                      playerId),local_c,CASE_1);
          STFishC::sub_004162B0(this_00,&local_6,&local_8,(undefined2 *)((int)&param_1 + 2));
          *(undefined1 *)((int)pAVar18 + (0x2e - param_1._2_2_)) = 1;
          (*this_00->vtable->vfunc_30)(local_6c);
          local_34 = local_64;
          local_30 = local_69;
          local_2c = local_51;
          Library::DKW::TBL::FUN_006ae1c0(*(uint **)&pAVar18[2].field_000A,&local_34);
          uVar15 = local_24;
        }
        local_24 = uVar15 + 1;
      } while ((int)local_24 < (int)local_14);
      return;
    }
    pDVar2 = g_playerRuntime[uVar19].tempSlots[0][0].objectIds;
    uVar15 = 0;
    local_14 = pDVar2->count;
    if ((int)local_14 < 1) {
      return;
    }
    while (FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar2,uVar15,&local_c), (short)local_c == -1
          ) {
      uVar15 = uVar15 + 1;
      if ((int)local_14 <= (int)uVar15) {
        return;
      }
    }
    uVar19 = CONCAT31((int3)(local_c >> 8),(char)g_playerRuntime[uVar19].tempSlots[0][0].playerId);
  }
  else {
    if ((char)param_1 == '\x02') {
      uVar19 = (uint)DAT_0080874d;
      iVar4 = g_playerRuntime[uVar19].tempSlots[0][0].objectType;
      if (iVar4 == 0) {
        return;
      }
      if (iVar4 != 0x3c) {
        if (iVar4 != 0x1ae) {
          iVar4 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1d16,0,0,
                                     &DAT_007a4ccc,s_STAllPlayersC__GetPanelInfo__2__u_007a7efc);
          if (iVar4 == 0) {
            return;
          }
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_c = (uint)(ushort)g_playerRuntime[uVar19].tempSlots[0][0].objectId;
        SVar20 = CASE_3;
        uVar19 = 0xffffffff;
        goto cf_common_exit_0043CA35;
      }
      uVar1 = g_playerRuntime[uVar19].tempSlots[0][0].activityCount;
      if (uVar1 == 1) {
        pDVar2 = g_playerRuntime[uVar19].tempSlots[0][0].objectIds;
        uVar15 = 0;
        local_14 = pDVar2->count;
        if ((int)local_14 < 1) {
          return;
        }
        while (FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar2,uVar15,&local_c),
              (short)local_c == -1) {
          uVar15 = uVar15 + 1;
          if ((int)local_14 <= (int)uVar15) {
            return;
          }
        }
        uVar19 = CONCAT31((int3)(local_c >> 8),
                          (char)g_playerRuntime[uVar19].tempSlots[0][0].playerId);
        goto LAB_0043ca31;
      }
      if (uVar1 < 2) {
        param_2->field_0005 = 0;
        return;
      }
      param_2->field_0005 = 2;
      iVar4 = thunk_FUN_004406c0(DAT_0080874d);
      pAVar18->field_0004 = (char)iVar4;
      local_1c = g_playerRuntime[uVar19].tempSlots[0][0].objectIds;
      local_14 = local_1c->count;
      dVar17 = 0;
      if (0 < (int)local_14) {
        do {
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_1c,dVar17,&local_c);
          if ((short)local_c != -1) {
            pAVar5 = (AnonShape_00493CD0_11D91B87 *)
                     GetObjPtr(this,CONCAT31((int3)((uint)extraout_ECX_00 >> 8),DAT_0080874d),
                               local_c,CASE_1);
            iVar4 = thunk_FUN_00493cd0(pAVar5);
            if (iVar4 == 0) break;
          }
          dVar17 = dVar17 + 1;
        } while ((int)dVar17 < (int)local_14);
      }
      if (dVar17 == local_14) {
        pAVar18[1].field_0001 = 0;
        pAVar18->field_0x8 = 0;
        pAVar18->field_0007 = 0;
        return;
      }
      pAVar18->field_0x8 = 1;
      if (g_playerRuntime[DAT_0080874d].aiPlayer == (AiPlrClassTy *)0x0) {
LAB_0043c293:
        pAVar18[1].field_0001 = 0;
      }
      else {
        dVar17 = 0;
        pAVar18[1].field_0001 = 3;
        if (0 < (int)local_14) {
          do {
            FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_1c,dVar17,&local_c);
            if ((short)local_c != -1) {
              uVar19 = GetObjPtr(this,CONCAT31((int3)((uint)extraout_ECX_01 >> 8),DAT_0080874d),
                                 local_c,CASE_1);
              pSVar6 = thunk_FUN_0042b760(CONCAT31((int3)(uVar19 >> 8),DAT_0080874d),
                                          CONCAT22(extraout_var,*(undefined2 *)(uVar19 + 0x30)));
              if ((pSVar6 != (STGroupBoatC *)0x0) &&
                 (pAVar18[1].field_0001 = 1, pSVar6->field_001C == 0)) break;
            }
            dVar17 = dVar17 + 1;
          } while ((int)dVar17 < (int)local_14);
        }
        if (dVar17 == local_14) {
          if (pAVar18[1].field_0001 == '\x03') goto LAB_0043c293;
          if (pAVar18[1].field_0001 == '\x01') {
            pAVar18[1].field_0001 = 3;
          }
        }
      }
      pAVar18->field_0007 = 1;
      GVar7 = thunk_FUN_0044ce40(this);
      local_18 = thunk_FUN_0044d320(GVar7);
      param_2 = (AnonShape_0043BEB0_1C00EC12 *)&pAVar18->field_000F;
      puVar8 = local_18;
      puVar13 = (undefined1 *)param_2;
      do {
        puVar13[-6] = *(undefined1 *)((int)puVar8 + 1);
        *puVar13 = *(undefined1 *)puVar8;
        puVar13 = puVar13 + 1;
        puVar8 = puVar8 + 1;
      } while ((int)(puVar13 + (-0xf - (int)pAVar18)) < 6);
      FUN_006ab060(&local_18);
      uVar19 = 0;
      pAVar18[2].field_0011 = 1;
      pAVar18[2].field_0x10 = 1;
      pAVar18[2].field_000F = 1;
      pAVar18[2].field_000E = 1;
      if (0 < (int)local_14) {
        do {
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_1c,uVar19,&local_c);
          if ((short)local_c != -1) {
            uVar15 = GetObjPtr(local_10,CONCAT31((int3)(local_c >> 8),DAT_0080874d),local_c,CASE_1);
            (&pAVar18[2].field_000E)[*(int *)(uVar15 + 0x7ee)] = 3;
          }
          uVar19 = uVar19 + 1;
        } while ((int)uVar19 < (int)local_14);
      }
      if (GVar7 < 0x40001) {
        if (GVar7 == 0x40000) {
          *(undefined4 *)pAVar18 = 0x19;
        }
        else if (GVar7 < 0x81) {
          if (GVar7 == 0x80) {
            *(undefined4 *)pAVar18 = 9;
          }
          else if (GVar7 == CASE_2) {
            *(undefined4 *)pAVar18 = 5;
          }
          else if (GVar7 == CASE_4) {
            *(undefined4 *)pAVar18 = 0xb;
          }
          else if (GVar7 == CASE_8) {
            *(undefined4 *)pAVar18 = 0x11;
          }
        }
        else if (GVar7 == 0x100) {
          *(undefined4 *)pAVar18 = 0x15;
        }
        else if (GVar7 == 0x10000) {
          *(undefined4 *)pAVar18 = 0x22;
        }
        else if (GVar7 == 0x20000) {
          *(undefined4 *)pAVar18 = 0x1a;
        }
      }
      else if (GVar7 < 0x400001) {
        if (GVar7 == 0x400000) {
          *(undefined4 *)pAVar18 = 0x21;
        }
        else if (GVar7 == 0x80000) {
          *(undefined4 *)pAVar18 = 0x1c;
        }
        else if (GVar7 == 0x100000) {
          *(undefined4 *)pAVar18 = 0x1d;
        }
        else if (GVar7 == 0x200000) {
          *(undefined4 *)pAVar18 = 0x1b;
        }
      }
      else if (GVar7 == 0x800000) {
        *(undefined4 *)pAVar18 = 0x23;
      }
      else if (GVar7 == 0x1000000) {
        *(undefined4 *)pAVar18 = 0x24;
      }
      local_28 = (STPlayerTempSlot *)0x0;
      local_24 = 0;
      uVar19 = local_20;
      if (0 < (int)local_14) {
        do {
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_1c,local_24,&local_c);
          if ((short)local_c != -1) {
            local_28 = (STPlayerTempSlot *)((int)&local_28->objectType + 1);
            uVar15 = GetObjPtr(local_10,CONCAT31((int3)(local_c >> 8),DAT_0080874d),local_c,CASE_1);
            if (local_28 == (STPlayerTempSlot *)0x1) {
              uVar19 = (uint)*(ushort *)(uVar15 + 0x30);
            }
            else if (uVar19 != *(ushort *)(uVar15 + 0x30)) {
              return;
            }
          }
          local_24 = local_24 + 1;
        } while ((int)local_24 < (int)local_14);
        if (uVar19 == 0xffff) {
          return;
        }
      }
      uVar12 = (undefined3)(local_24 >> 8);
      uVar14 = (undefined3)(local_14 >> 8);
      if (0x1000 < GVar7) {
        if (GVar7 < 0x100001) {
          if (GVar7 == 0x100000) {
            pSVar6 = thunk_FUN_0042b760(CONCAT31(uVar12,DAT_0080874d),uVar19);
            uVar9 = (*pSVar6->vtable->vfunc_0C)();
            switch(uVar9) {
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
          if (GVar7 < 0x20001) {
            if (GVar7 == 0x20000) {
              pSVar6 = thunk_FUN_0042b760(CONCAT31(uVar14,DAT_0080874d),uVar19);
              uVar9 = (*pSVar6->vtable->vfunc_0C)();
              switch(uVar9) {
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
            if (GVar7 == 0x2000) {
              pSVar6 = thunk_FUN_0042b760(CONCAT31(uVar12,DAT_0080874d),uVar19);
              uVar9 = (*pSVar6->vtable->vfunc_0C)();
              switch(uVar9) {
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
            if (GVar7 != 0x10000) {
              return;
            }
            pSVar6 = thunk_FUN_0042b760(CONCAT31(uVar14,DAT_0080874d),uVar19);
            uVar9 = (*pSVar6->vtable->vfunc_0C)();
            switch(uVar9) {
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
          if (GVar7 == 0x40000) {
            pSVar6 = thunk_FUN_0042b760(CONCAT31(uVar12,DAT_0080874d),uVar19);
            uVar9 = (*pSVar6->vtable->vfunc_0C)();
            switch(uVar9) {
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
          if (GVar7 != 0x80000) {
            return;
          }
          pSVar6 = thunk_FUN_0042b760(CONCAT31(uVar12,DAT_0080874d),uVar19);
          uVar9 = (*pSVar6->vtable->vfunc_0C)();
          switch(uVar9) {
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
        if (GVar7 < 0x800001) {
          if (GVar7 == 0x800000) {
            pSVar6 = thunk_FUN_0042b760(CONCAT31(uVar12,DAT_0080874d),uVar19);
            uVar9 = (*pSVar6->vtable->vfunc_0C)();
            switch(uVar9) {
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
          if (GVar7 == 0x200000) {
            pSVar6 = thunk_FUN_0042b760(CONCAT31(uVar12,DAT_0080874d),uVar19);
            uVar9 = (*pSVar6->vtable->vfunc_0C)();
            switch(uVar9) {
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
          if (GVar7 != 0x400000) {
            return;
          }
          pSVar6 = thunk_FUN_0042b760(CONCAT31(uVar12,DAT_0080874d),uVar19);
          uVar9 = (*pSVar6->vtable->vfunc_0C)();
          switch(uVar9) {
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
        if (GVar7 == 0x1000000) {
          pSVar6 = thunk_FUN_0042b760(CONCAT31(uVar12,DAT_0080874d),uVar19);
          uVar9 = (*pSVar6->vtable->vfunc_0C)();
          switch(uVar9) {
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
        if (GVar7 != 0x2000000) {
          return;
        }
        pSVar6 = thunk_FUN_0042b760(CONCAT31(uVar12,DAT_0080874d),uVar19);
        uVar9 = (*pSVar6->vtable->vfunc_0C)();
        switch(uVar9) {
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
      if (GVar7 == 0x1000) goto switchD_0043c4d2_caseD_28;
      if (0x40 < GVar7) {
        if (0x200 < GVar7) {
          if (GVar7 == 0x400) {
            pSVar6 = thunk_FUN_0042b760(CONCAT31(uVar12,DAT_0080874d),uVar19);
            uVar9 = (*pSVar6->vtable->vfunc_0C)();
            switch(uVar9) {
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
          if (GVar7 != 0x800) {
            return;
          }
          pSVar6 = thunk_FUN_0042b760(CONCAT31(uVar14,DAT_0080874d),uVar19);
          uVar9 = (*pSVar6->vtable->vfunc_0C)();
          switch(uVar9) {
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
        if (GVar7 == 0x200) {
          pSVar6 = thunk_FUN_0042b760(CONCAT31(uVar14,DAT_0080874d),uVar19);
          uVar9 = (*pSVar6->vtable->vfunc_0C)();
          switch(uVar9) {
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
        if ((GVar7 != 0x80) && (GVar7 != 0x100)) {
          return;
        }
        pSVar6 = thunk_FUN_0042b760(CONCAT31(uVar12,DAT_0080874d),uVar19);
        uVar9 = (*pSVar6->vtable->vfunc_0C)();
        switch(uVar9) {
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
      if (GVar7 == 0x40) {
        pSVar6 = thunk_FUN_0042b760(CONCAT31(uVar14,DAT_0080874d),uVar19);
        uVar9 = (*pSVar6->vtable->vfunc_0C)();
        switch(uVar9) {
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
      switch(GVar7) {
      case CASE_1:
        pSVar6 = thunk_FUN_0042b760(CONCAT31(uVar12,DAT_0080874d),uVar19);
        uVar9 = (*pSVar6->vtable->vfunc_0C)();
        switch(uVar9) {
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
          *(undefined1 *)(pAVar18 + 1) = 3;
          return;
        }
        break;
      case CASE_2:
      case CASE_4:
      case CASE_8:
        pSVar6 = thunk_FUN_0042b760(CONCAT31(uVar12,DAT_0080874d),uVar19);
        uVar9 = (*pSVar6->vtable->vfunc_0C)();
        switch(uVar9) {
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
        pSVar6 = thunk_FUN_0042b760(CONCAT31(uVar12,DAT_0080874d),uVar19);
        uVar9 = (*pSVar6->vtable->vfunc_0C)();
        switch(uVar9) {
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
        pSVar6 = thunk_FUN_0042b760(CONCAT31(uVar12,DAT_0080874d),uVar19);
        uVar9 = (*pSVar6->vtable->vfunc_0C)();
        switch(uVar9) {
        case 1:
        case 7:
cf_common_exit_0043C72D:
          *(undefined1 *)param_2 = 3;
          return;
        case 2:
cf_common_exit_0043C862:
          pAVar18->field_0x10 = 3;
          return;
        case 3:
cf_common_exit_0043C95B:
          pAVar18->field_0011 = 3;
          return;
        case 4:
cf_common_exit_0043C86F:
          pAVar18->field_0012 = 3;
          return;
        }
      }
      return;
    }
    if ((char)param_1 == '\x04') {
      uVar19 = (uint)DAT_0080874d;
      iVar4 = g_playerRuntime[uVar19].tempSlots[1][0].objectType;
      if (0x19a < iVar4) {
        if (iVar4 == 0x1a4) {
          local_c = (uint)(ushort)g_playerRuntime[uVar19].tempSlots[1][0].objectId;
          SVar20 = CASE_5;
          uVar19 = 0xffffffff;
        }
        else {
          if (iVar4 != 0x1b8) {
LAB_0043ca5a:
            iVar4 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1d47,0,0,
                                       &DAT_007a4ccc,s_STAllPlayersC__GetPanelInfo__4__u_007a7ec0);
            if (iVar4 == 0) {
              return;
            }
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_c = (uint)(ushort)g_playerRuntime[uVar19].tempSlots[1][0].objectId;
          SVar20 = CASE_6;
          uVar19 = 0xffffffff;
        }
        goto cf_common_exit_0043CA35;
      }
      if (iVar4 != 0x19a) {
        if (iVar4 == 0) {
          return;
        }
        if (iVar4 == 0x5a) {
          local_c = (uint)(ushort)g_playerRuntime[uVar19].tempSlots[1][0].objectId;
          SVar20 = CASE_4;
          uVar19 = 0xffffffff;
        }
        else {
          if (iVar4 != 0x172) goto LAB_0043ca5a;
          local_c = (uint)(ushort)g_playerRuntime[uVar19].tempSlots[1][0].objectId;
          SVar20 = CASE_2;
          uVar19 = 0xffffffff;
        }
        goto cf_common_exit_0043CA35;
      }
      if (g_playerRuntime[uVar19].tempSlots[1][0].activityCount != 1) {
        return;
      }
      pDVar2 = g_playerRuntime[uVar19].tempSlots[1][0].objectIds;
      uVar15 = 0;
      local_14 = pDVar2->count;
      if ((int)local_14 < 1) {
        return;
      }
      while (FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar2,uVar15,&local_c),
            (short)local_c == -1) {
        uVar15 = uVar15 + 1;
        if ((int)local_14 <= (int)uVar15) {
          return;
        }
      }
      uVar19 = CONCAT31((int3)(local_c >> 8),(char)g_playerRuntime[uVar19].tempSlots[1][0].playerId)
      ;
LAB_0043ca31:
      SVar20 = CASE_1;
cf_common_exit_0043CA35:
      piVar10 = (int *)GetObjPtr(local_10,uVar19,local_c,SVar20);
      (**(code **)(*piVar10 + 0x34))(param_2);
      return;
    }
    if ((char)param_1 != '\x05') {
      if ((char)param_1 == '\x06') {
        if (*(int *)param_2 != 0) {
          *(undefined4 *)(*(int *)param_2 + 0xc) = 0;
        }
        uVar19 = (uint)DAT_0080874d;
        iVar4 = g_playerRuntime[uVar19].tempSlots[1][0].objectType;
        if (iVar4 == 0) {
          return;
        }
        if (iVar4 != 0x19a) {
          iVar4 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1d95,0,0,
                                     &DAT_007a4ccc,s_STAllPlayersC__GetPanelInfo__6__u_007a7e48);
          if (iVar4 == 0) {
            return;
          }
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (g_playerRuntime[uVar19].tempSlots[1][0].activityCount != 1) {
          return;
        }
        pDVar2 = g_playerRuntime[uVar19].tempSlots[1][0].objectIds;
        uVar15 = 0;
        local_14 = pDVar2->count;
        if ((int)local_14 < 1) {
          return;
        }
        do {
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar2,uVar15,&local_c);
          if ((short)local_c != -1) {
            piVar10 = (int *)GetObjPtr(local_10,CONCAT31((int3)(local_c >> 8),
                                                         (char)g_playerRuntime[uVar19].tempSlots[1]
                                                               [0].playerId),local_c,CASE_1);
            (**(code **)(*piVar10 + 0x38))(param_2);
            return;
          }
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < (int)local_14);
        return;
      }
      if ((char)param_1 == '\a') {
        *(undefined4 *)(*(int *)param_2 + 0xc) = 0;
        *(undefined4 *)(*(int *)&param_2->field_0004 + 0xc) = 0;
        *(undefined4 *)(*(int *)&param_2->field_0x8 + 0xc) = 0;
        *(undefined4 *)(*(int *)&param_2->field_0xc + 0xc) = 0;
        uVar19 = (uint)DAT_0080874d;
        iVar4 = g_playerRuntime[uVar19].tempSlots[1][0].objectType;
        if (iVar4 == 0) {
          return;
        }
        if (iVar4 != 0x19a) {
          iVar4 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1db2,0,0,
                                     &DAT_007a4ccc,s_STAllPlayersC__GetPanelInfo__7__u_007a7e0c);
          if (iVar4 == 0) {
            return;
          }
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (g_playerRuntime[uVar19].tempSlots[1][0].activityCount != 1) {
          return;
        }
        pDVar2 = g_playerRuntime[uVar19].tempSlots[1][0].objectIds;
        uVar15 = 0;
        local_14 = pDVar2->count;
        if ((int)local_14 < 1) {
          return;
        }
        do {
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar2,uVar15,&local_c);
          if ((short)local_c != -1) {
            piVar10 = (int *)GetObjPtr(local_10,CONCAT31((int3)(local_c >> 8),
                                                         (char)g_playerRuntime[uVar19].tempSlots[1]
                                                               [0].playerId),local_c,CASE_1);
            (**(code **)(*piVar10 + 0x3c))(param_2);
            return;
          }
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < (int)local_14);
        return;
      }
      if ((char)param_1 == '\b') {
        uVar19 = (uint)DAT_0080874d;
        *(undefined4 *)(*(int *)param_2 + 0xc) = 0;
        *(undefined4 *)(*(int *)&param_2->field_0004 + 0xc) = 0;
        *(undefined4 *)(*(int *)&param_2->field_0x8 + 0xc) = 0;
        *(undefined4 *)(*(int *)&param_2->field_0xc + 0xc) = 0;
        *(undefined4 *)(*(int *)&param_2->field_0x10 + 0xc) = 0;
        iVar4 = g_playerRuntime[uVar19].tempSlots[0][0].objectType;
        if (iVar4 == 0) {
          return;
        }
        if (iVar4 != 0x3c) {
          iVar4 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1dd0,0,0,
                                     &DAT_007a4ccc,s_STAllPlayersC__GetPanelInfo__8__u_007a7dd0);
          if (iVar4 == 0) {
            return;
          }
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (g_playerRuntime[uVar19].tempSlots[0][0].activityCount == 0) {
          return;
        }
        local_1c = g_playerRuntime[uVar19].tempSlots[0][0].objectIds;
        uVar15 = 0;
        local_14 = local_1c->count;
        if ((int)local_14 < 1) {
          return;
        }
        do {
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_1c,uVar15,&local_c);
          if ((short)local_c != -1) {
            piVar10 = (int *)GetObjPtr(local_10,CONCAT31((int3)(local_c >> 8),
                                                         (char)g_playerRuntime[uVar19].tempSlots[0]
                                                               [0].playerId),local_c,CASE_1);
            (**(code **)(*piVar10 + 0x40))(pAVar18);
            return;
          }
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < (int)local_14);
        return;
      }
      if ((char)param_1 == '\t') {
        uVar19 = (uint)DAT_0080874d;
        iVar4 = g_playerRuntime[uVar19].tempSlots[1][0].objectType;
        if (iVar4 == 0) {
          return;
        }
        if (iVar4 != 0x19a) {
          iVar4 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1dec,0,0,
                                     &DAT_007a4ccc,s_STAllPlayersC__GetPanelInfo__9__u_007a7d94);
          if (iVar4 == 0) {
            return;
          }
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (g_playerRuntime[uVar19].tempSlots[1][0].activityCount != 1) {
          return;
        }
        pDVar2 = g_playerRuntime[uVar19].tempSlots[1][0].objectIds;
        uVar15 = 0;
        local_14 = pDVar2->count;
        if ((int)local_14 < 1) {
          return;
        }
        do {
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar2,uVar15,&local_c);
          if ((short)local_c != -1) {
            piVar10 = (int *)GetObjPtr(local_10,CONCAT31((int3)(local_c >> 8),
                                                         (char)g_playerRuntime[uVar19].tempSlots[1]
                                                               [0].playerId),local_c,CASE_1);
            (**(code **)(*piVar10 + 0x44))(param_2);
            return;
          }
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < (int)local_14);
        return;
      }
      if ((char)param_1 == '\n') {
        uVar19 = (uint)DAT_0080874d;
        local_28 = g_playerRuntime[uVar19].tempSlots[1];
        if (g_playerRuntime[uVar19].tempSlots[1][0].objectType != 0x19a) {
          return;
        }
        if (g_playerRuntime[uVar19].tempSlots[1][0].activityCount != 1) {
          return;
        }
        pDVar2 = g_playerRuntime[uVar19].tempSlots[1][0].objectIds;
        uVar15 = 0;
        uVar19 = pDVar2->count;
        if ((int)uVar19 < 1) {
          return;
        }
        do {
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar2,uVar15,&local_c);
          if ((short)local_c != -1) {
            piVar10 = (int *)GetObjPtr(local_10,CONCAT31((int3)(local_c >> 8),
                                                         (char)local_28->playerId),local_c,CASE_1);
            (**(code **)(*piVar10 + 0x48))(param_2);
            return;
          }
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < (int)uVar19);
        return;
      }
      if ((char)param_1 != '\v') {
        if ((char)param_1 == '\f') {
          if (*(int *)param_2 != 0) {
            *(undefined4 *)(*(int *)param_2 + 0xc) = 0;
          }
          uVar19 = (uint)DAT_0080874d;
          iVar4 = g_playerRuntime[uVar19].tempSlots[1][0].objectType;
          if (iVar4 == 0) {
            return;
          }
          if (iVar4 != 0x19a) {
            iVar4 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1ea3,0,0,
                                       &DAT_007a4ccc,s_STAllPlayersC__GetPanelInfo__12__007a7d14);
            if (iVar4 == 0) {
              return;
            }
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (g_playerRuntime[uVar19].tempSlots[1][0].activityCount != 1) {
            return;
          }
          pDVar2 = g_playerRuntime[uVar19].tempSlots[1][0].objectIds;
          uVar15 = 0;
          local_14 = pDVar2->count;
          if ((int)local_14 < 1) {
            return;
          }
          do {
            FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar2,uVar15,&local_c);
            if ((short)local_c != -1) {
              piVar10 = (int *)GetObjPtr(local_10,CONCAT31((int3)(local_c >> 8),
                                                           (char)g_playerRuntime[uVar19].tempSlots
                                                                 [1][0].playerId),local_c,CASE_1);
              (**(code **)(*piVar10 + 0x50))(param_2);
              return;
            }
            uVar15 = uVar15 + 1;
          } while ((int)uVar15 < (int)local_14);
          return;
        }
        if ((char)param_1 == '\x0e') {
          local_28 = (STPlayerTempSlot *)0x4;
          pAVar11 = (AnonShape_0043BEB0_1C00EC12 *)
                    &g_playerRuntime[DAT_0080874d].tempSlots[0][1].objectIds;
          do {
            iVar4._0_1_ = pAVar11[-0xffffffff00000001].field_000A;
            iVar4._1_1_ = pAVar11[-0xffffffff00000001].field_000B;
            iVar4._2_1_ = pAVar11[-0xffffffff00000001].field_0xc;
            iVar4._3_1_ = pAVar11[-0xffffffff00000001].field_000D;
            param_2 = pAVar11;
            if (iVar4 == 0) {
LAB_0043d41d:
              *(undefined1 *)pAVar18 = 0;
            }
            else if (iVar4 == 0x3c) {
              if (*(ushort *)&pAVar11->field_0004 == 1) {
                uVar19 = 0;
                pDVar2 = *(DArrayTy **)pAVar11;
                local_14 = pDVar2->count;
                if (0 < (int)local_14) {
                  do {
                    FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar2,uVar19,&local_c);
                    if ((short)local_c != -1) {
                      SVar20 = CASE_1;
                      uVar15 = CONCAT31((int3)(local_c >> 8),param_2[-1].field_000E);
                      uVar19 = local_c;
                      goto LAB_0043d447;
                    }
                    uVar19 = uVar19 + 1;
                  } while ((int)uVar19 < (int)local_14);
                }
              }
              else {
                if (*(ushort *)&pAVar11->field_0004 < 2) goto LAB_0043d41d;
                *(undefined1 *)pAVar18 = 2;
                pAVar18->field_0001 = 1;
                pAVar18->field_0006 = g_playerRuntime[DAT_0080874d].raceId;
              }
            }
            else {
              if (iVar4 != 0x1ae) {
                iVar4 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1ecc,0,0,
                                           &DAT_007a4ccc,s_STAllPlayersC__GetPanelInfo__14__007a7cd4
                                          );
                if (iVar4 != 0) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                goto LAB_0043d41d;
              }
              SVar20 = CASE_3;
              uVar15 = 0xffffffff;
              uVar19 = CONCAT22((short)((uint)pAVar11 >> 0x10),
                                *(undefined2 *)&pAVar11[-1].field_0012);
LAB_0043d447:
              piVar10 = (int *)GetObjPtr(local_10,uVar15,uVar19,SVar20);
              (**(code **)(*piVar10 + 0x58))(pAVar18);
            }
            pAVar11 = (AnonShape_0043BEB0_1C00EC12 *)&param_2->field_0x10;
            pAVar18 = (AnonShape_0043BEB0_1C00EC12 *)&pAVar18->field_000B;
            local_28 = (STPlayerTempSlot *)((int)&local_28[-1].activityCount + 1);
            if (local_28 == (STPlayerTempSlot *)0x0) {
              return;
            }
          } while( true );
        }
        if ((char)param_1 == '\x0f') {
          param_2 = (AnonShape_0043BEB0_1C00EC12 *)0x4;
          psVar16 = &g_playerRuntime[DAT_0080874d].tempSlots[1][1].objectId;
          do {
            iVar4 = ((STPlayerTempSlot *)(psVar16 + -4))->objectType;
            if (iVar4 < 0x19b) {
              if (iVar4 == 0x19a) {
                if (psVar16[3] == 1) {
                  local_1c = *(DArrayTy **)(psVar16 + 1);
                  uVar19 = 0;
                  local_14 = local_1c->count;
                  if (0 < (int)local_14) {
                    do {
                      FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_1c,uVar19,&local_c);
                      if ((short)local_c != -1) {
                        uVar15 = CONCAT31((int3)((uint)extraout_ECX_03 >> 8),
                                          (char)*(int *)(psVar16 + -2));
                        SVar20 = CASE_1;
                        uVar19 = local_c;
                        goto LAB_0043d5b7;
                      }
                      uVar19 = uVar19 + 1;
                    } while ((int)uVar19 < (int)local_14);
                  }
                  goto LAB_0043d5c4;
                }
              }
              else if (iVar4 != 0) {
                if (iVar4 == 0x5a) {
                  SVar20 = CASE_4;
                }
                else {
                  if (iVar4 != 0x172) goto LAB_0043d581;
                  SVar20 = CASE_2;
                }
                goto LAB_0043d5b1;
              }
LAB_0043d5a6:
              *(undefined1 *)pAVar18 = 0;
            }
            else {
              if (iVar4 == 0x1a4) {
                SVar20 = CASE_5;
                iVar4 = 0;
              }
              else {
                if (iVar4 != 0x1b8) {
LAB_0043d581:
                  iVar4 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1efe,0,0,
                                             &DAT_007a4ccc,
                                             s_STAllPlayersC__GetPanelInfo__15__007a7c94);
                  if (iVar4 != 0) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  goto LAB_0043d5a6;
                }
                SVar20 = CASE_6;
                iVar4 = 0;
              }
LAB_0043d5b1:
              uVar15 = 0xffffffff;
              uVar19 = CONCAT22((short)((uint)iVar4 >> 0x10),*psVar16);
LAB_0043d5b7:
              piVar10 = (int *)GetObjPtr(local_10,uVar15,uVar19,SVar20);
              (**(code **)(*piVar10 + 0x5c))(pAVar18);
            }
LAB_0043d5c4:
            psVar16 = psVar16 + 8;
            pAVar18 = (AnonShape_0043BEB0_1C00EC12 *)&pAVar18->field_000B;
            param_2 = (AnonShape_0043BEB0_1C00EC12 *)&param_2[-1].field_0x13;
            if (param_2 == (AnonShape_0043BEB0_1C00EC12 *)0x0) {
              return;
            }
          } while( true );
        }
        if ((char)param_1 != '\x10') {
          if ((char)param_1 == '\x11') {
            uVar19 = (uint)DAT_0080874d;
            iVar4 = g_playerRuntime[uVar19].tempSlots[0][0].objectType;
            if (iVar4 == 0) {
              return;
            }
            if (iVar4 != 0x3c) {
              iVar4 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1f4c,0,0,
                                         &DAT_007a4ccc,s_STAllPlayersC__GetPanelInfo__17__007a7c14);
              if (iVar4 == 0) {
                return;
              }
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if ((ushort)g_playerRuntime[uVar19].tempSlots[0][0].activityCount < 2) {
              return;
            }
            pDVar2 = g_playerRuntime[uVar19].tempSlots[0][0].objectIds;
            iVar4 = 0;
            uVar19 = 0;
            local_14 = pDVar2->count;
            if (0 < (int)local_14) {
              do {
                FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar2,uVar19,&local_c);
                if ((short)local_c != -1) {
                  iVar4 = iVar4 + 1;
                  uVar15 = GetObjPtr(local_10,CONCAT31((int3)((uint)extraout_ECX_04 >> 8),
                                                       DAT_0080874d),local_c,CASE_1);
                  if (iVar4 == 1) {
                    local_20 = (uint)*(ushort *)(uVar15 + 0x30);
                  }
                  else if (local_20 != *(ushort *)(uVar15 + 0x30)) {
                    return;
                  }
                }
                uVar19 = uVar19 + 1;
              } while ((int)uVar19 < (int)local_14);
              if (local_20 == 0xffff) {
                return;
              }
            }
            pSVar6 = thunk_FUN_0042b760(CONCAT31((int3)(local_20 >> 8),DAT_0080874d),local_20);
            uVar9 = (*pSVar6->vtable->vfunc_1C)();
            switch(uVar9) {
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
          uVar19 = (uint)DAT_0080874d;
          iVar4 = g_playerRuntime[uVar19].tempSlots[0][0].objectType;
          if (iVar4 == 0) {
            return;
          }
          if (iVar4 == 0x1ae) {
            piVar10 = (int *)GetObjPtr(this,0xffffffff,
                                       CONCAT22((short)(uVar19 * 0xa62 + 0x7f4f83 >> 0x10),
                                                g_playerRuntime[uVar19].tempSlots[0][0].objectId),
                                       CASE_3);
            (**(code **)(*piVar10 + 100))(param_2);
            return;
          }
          iVar4 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1f5d,0,0,
                                     &DAT_007a4ccc,s_STAllPlayersC__GetPanelInfo__18__007a7bd4);
          if (iVar4 == 0) {
            return;
          }
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar19 = (uint)DAT_0080874d;
        iVar4 = g_playerRuntime[uVar19].tempSlots[0][0].objectType;
        if (iVar4 == 0) {
          return;
        }
        if (iVar4 != 0x3c) {
          if (iVar4 == 0x1ae) {
            return;
          }
          iVar4 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1f22,0,0,
                                     &DAT_007a4ccc,s_STAllPlayersC__GetPanelInfo__16__007a7c54);
          if (iVar4 == 0) {
            return;
          }
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (g_playerRuntime[uVar19].tempSlots[0][0].activityCount == 0) {
          return;
        }
        pDVar2 = g_playerRuntime[uVar19].tempSlots[0][0].objectIds;
        uVar15 = 0;
        local_14 = pDVar2->count;
        if (0 < (int)local_14) {
          do {
            FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar2,uVar15,&local_c);
            if ((short)local_c != -1) {
              piVar10 = (int *)GetObjPtr(local_10,CONCAT31((int3)(local_c >> 8),
                                                           (char)g_playerRuntime[uVar19].tempSlots
                                                                 [0][0].playerId),local_c,CASE_1);
              (**(code **)(*piVar10 + 0x60))(param_2);
              break;
            }
            uVar15 = uVar15 + 1;
          } while ((int)uVar15 < (int)local_14);
        }
        if ((ushort)g_playerRuntime[uVar19].tempSlots[0][0].activityCount < 2) {
          return;
        }
        *(undefined4 *)&param_2[0x15].field_0xc = 0xffffffff;
        *(undefined4 *)(param_2 + 0x18) = 0xffffffff;
        *(undefined4 *)&param_2[0x1a].field_0x8 = 0xffffffff;
        return;
      }
      uVar19 = (uint)DAT_0080874d;
      iVar4 = g_playerRuntime[uVar19].tempSlots[0][0].objectType;
      if (iVar4 == 0) {
        return;
      }
      if (iVar4 != 0x3c) {
        iVar4 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1e85,0,0,&DAT_007a4ccc
                                   ,s_STAllPlayersC__GetPanelInfo__11__007a7d54);
        if (iVar4 == 0) {
          return;
        }
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar1 = g_playerRuntime[uVar19].tempSlots[0][0].activityCount;
      if (uVar1 == 1) {
        pDVar2 = g_playerRuntime[uVar19].tempSlots[0][0].objectIds;
        uVar15 = 0;
        local_14 = pDVar2->count;
        if ((int)local_14 < 1) {
          return;
        }
        do {
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar2,uVar15,&local_c);
          if ((short)local_c != -1) {
            piVar10 = (int *)GetObjPtr(local_10,CONCAT31((int3)((uint)extraout_ECX_02 >> 8),
                                                         (char)g_playerRuntime[uVar19].tempSlots[0]
                                                               [0].playerId),local_c,CASE_1);
            (**(code **)(*piVar10 + 0x4c))(param_2);
            return;
          }
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < (int)local_14);
        return;
      }
      if (uVar1 < 2) {
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
      pDVar2 = g_playerRuntime[uVar19].tempSlots[0][0].objectIds;
      uVar19 = 0;
      local_14 = pDVar2->count;
      param_2->field_0011 = 1;
      param_2->field_0x10 = 1;
      param_2->field_0012 = 3;
      local_1c = pDVar2;
      if (0 < (int)local_14) {
        do {
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar2,uVar19,&local_c);
          if ((short)local_c != -1) {
            uVar15 = GetObjPtr(local_10,CONCAT31((int3)(local_c >> 8),DAT_0080874d),local_c,CASE_1);
            if (*(int *)(uVar15 + 0x7e6) == 0) {
              pAVar18->field_0011 = 3;
            }
            else {
              pAVar18->field_0x10 = 3;
            }
            if ((pAVar18->field_0012 == '\x03') && (*(int *)(uVar15 + 0x7ea) == 0)) {
              pAVar18->field_0012 = 1;
            }
          }
          uVar19 = uVar19 + 1;
        } while ((int)uVar19 < (int)local_14);
      }
      uVar19 = 0;
      if (0 < (int)local_14) {
        do {
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar2,uVar19,&local_c);
          if ((short)local_c != -1) {
            piVar10 = (int *)GetObjPtr(local_10,CONCAT31((int3)((uint)extraout_EDX >> 8),
                                                         DAT_0080874d),local_c,CASE_1);
            uVar9 = (**(code **)(*piVar10 + 0x2c))();
            switch(uVar9) {
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
          uVar19 = uVar19 + 1;
        } while ((int)uVar19 < (int)local_14);
      }
switchD_0043d1bf_caseD_a:
      if (uVar19 == local_14) {
        pAVar18->field_000A = 0;
        pAVar18->field_000B = 0;
        pAVar18->field_0xc = 0;
        pAVar18->field_000D = 0;
      }
      param_2 = (AnonShape_0043BEB0_1C00EC12 *)(uint)(uVar19 == local_14);
      iVar4 = 0;
      uVar19 = 0;
      if (0 < (int)local_14) {
        do {
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_1c,uVar19,&local_c);
          if ((short)local_c != -1) {
            iVar4 = iVar4 + 1;
            uVar15 = GetObjPtr(local_10,CONCAT31((int3)(local_c >> 8),DAT_0080874d),local_c,CASE_1);
            if (iVar4 == 1) {
              local_20 = (uint)*(ushort *)(uVar15 + 0x30);
            }
            else if (local_20 != *(ushort *)(uVar15 + 0x30)) {
              return;
            }
          }
          uVar19 = uVar19 + 1;
        } while ((int)uVar19 < (int)local_14);
      }
      if (param_2 == (AnonShape_0043BEB0_1C00EC12 *)0x1) {
        return;
      }
      if (local_20 == 0xffff) {
        return;
      }
      pSVar6 = thunk_FUN_0042b760(CONCAT31((int3)(local_20 >> 8),DAT_0080874d),local_20);
      uVar9 = (*pSVar6->vtable->vfunc_0C)();
      switch(uVar9) {
      case 5:
        pAVar18->field_0xc = 3;
        return;
      case 6:
        pAVar18->field_000D = 3;
        return;
      default:
        return;
      case 0x10:
        pAVar18->field_000E = 3;
        return;
      case 0x14:
        pAVar18->field_000F = 3;
        return;
      }
    }
    uVar19 = (uint)DAT_0080874d;
    iVar4 = g_playerRuntime[uVar19].tempSlots[1][0].objectType;
    if (0x19a < iVar4) {
      if (iVar4 == 0x1a4) {
        local_c = (uint)(ushort)g_playerRuntime[uVar19].tempSlots[1][0].objectId;
        SVar20 = CASE_5;
        uVar19 = 0xffffffff;
      }
      else {
        if (iVar4 != 0x1b8) {
LAB_0043cb81:
          iVar4 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1d78,0,0,
                                     &DAT_007a4ccc,s_STAllPlayersC__GetPanelInfo__5__u_007a7e84);
          if (iVar4 == 0) {
            return;
          }
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_c = (uint)(ushort)g_playerRuntime[uVar19].tempSlots[1][0].objectId;
        SVar20 = CASE_6;
        uVar19 = 0xffffffff;
      }
      goto cf_common_exit_0043CB5C;
    }
    if (iVar4 != 0x19a) {
      if (iVar4 == 0) {
        return;
      }
      if (iVar4 == 0x5a) {
        local_c = (uint)(ushort)g_playerRuntime[uVar19].tempSlots[1][0].objectId;
        SVar20 = CASE_4;
        uVar19 = 0xffffffff;
      }
      else {
        if (iVar4 != 0x172) goto LAB_0043cb81;
        local_c = (uint)(ushort)g_playerRuntime[uVar19].tempSlots[1][0].objectId;
        SVar20 = CASE_2;
        uVar19 = 0xffffffff;
      }
      goto cf_common_exit_0043CB5C;
    }
    if (g_playerRuntime[uVar19].tempSlots[1][0].activityCount != 1) {
      return;
    }
    pDVar2 = g_playerRuntime[uVar19].tempSlots[1][0].objectIds;
    uVar15 = 0;
    local_14 = pDVar2->count;
    if ((int)local_14 < 1) {
      return;
    }
    while (FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar2,uVar15,&local_c), (short)local_c == -1
          ) {
      uVar15 = uVar15 + 1;
      if ((int)local_14 <= (int)uVar15) {
        return;
      }
    }
    uVar19 = CONCAT31((int3)(local_c >> 8),(char)g_playerRuntime[uVar19].tempSlots[1][0].playerId);
  }
  SVar20 = CASE_1;
cf_common_exit_0043CB5C:
  piVar10 = (int *)GetObjPtr(local_10,uVar19,local_c,SVar20);
  (**(code **)(*piVar10 + 0x30))(param_2);
  return;
cf_common_exit_0043C94C:
  *(undefined1 *)param_2 = 3;
  return;
}

