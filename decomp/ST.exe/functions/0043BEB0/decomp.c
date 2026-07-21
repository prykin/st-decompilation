#include "../../pseudocode_runtime.h"


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
  STGroupBoatC *pSVar5;
  Global_sub_0044D320_param_1Enum GVar6;
  undefined2 *puVar7;
  STGameObjC *pSVar8;
  undefined4 uVar9;
  AnonShape_0043BEB0_1C00EC12 *pAVar10;
  undefined1 *puVar11;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  uint uVar12;
  uint uVar13;
  short *psVar14;
  dword dVar15;
  AnonShape_0043BEB0_1C00EC12 *pAVar16;
  char cVar17;
  STAllPlayersC_GetObjPtr_param_3Enum SVar18;
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
  dword local_14;
  STAllPlayersC *local_10;
  uint local_c;
  undefined2 local_8;
  undefined2 local_6;

  pAVar16 = param_2;
  local_20 = 0;
  local_10 = this;
  if ((char)param_1 == '\x01') {
    uVar12 = (uint)DAT_0080874d;
    iVar4 = g_playerRuntime[uVar12].tempSlots[0][0].objectType;
    if (iVar4 == 0) {
      return;
    }
    if (iVar4 != 0x3c) {
      if (iVar4 != 0x1ae) {
        iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1b8a,0,0,"%s"
                                   ,"STAllPlayersC::GetPanelInfo (1) unknown game type");
        if (iVar4 == 0) {
          return;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      local_c = (uint)(ushort)g_playerRuntime[uVar12].tempSlots[0][0].objectId;
      SVar18 = CASE_3;
      cVar17 = -1;
      goto cf_common_exit_0043CB5C;
    }
    uVar1 = g_playerRuntime[uVar12].tempSlots[0][0].activityCount;
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
      iVar4 = GetPlayerRaceId(DAT_0080874d);
      pAVar16->field_0007 = (char)iVar4;
      local_1c = g_playerRuntime[uVar12].tempSlots[0][0].objectIds;
      local_14 = local_1c->count;
      pAVar16[2].field_0002 = 0;
      pAVar16[2].field_0003 = 0;
      pAVar16[2].field_0004 = 0;
      pAVar16[2].field_0005 = 0;
      pAVar16[2].field_0006 = 0;
      pAVar16[1].field_0009 = 1;
      local_24 = 0;
      if ((int)local_14 < 1) {
        return;
      }
      do {
        uVar13 = local_24;
        DArrayGetElement(local_1c,local_24,&local_c);
        if ((short)local_c != -1) {
          pSVar8 = GetObjPtr(local_10,(char)g_playerRuntime[uVar12].tempSlots[0][0].playerId,local_c
                             ,CASE_1);
          STFishC::sub_004162B0
                    ((STFishC *)pSVar8,&local_6,&local_8,(undefined2 *)((int)&param_1 + 2));
          *(undefined1 *)((int)pAVar16 + (0x2e - param_1._2_2_)) = 1;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (*(code *)pSVar8->vtable->field_0030)(local_6c);
          local_34 = local_64;
          local_30 = local_69;
          local_2c = local_51;
          Library::DKW::TBL::FUN_006ae1c0(*(uint **)&pAVar16[2].field_000A,&local_34);
          uVar13 = local_24;
        }
        local_24 = uVar13 + 1;
      } while ((int)local_24 < (int)local_14);
      return;
    }
    pDVar2 = g_playerRuntime[uVar12].tempSlots[0][0].objectIds;
    uVar13 = 0;
    local_14 = pDVar2->count;
    if ((int)local_14 < 1) {
      return;
    }
    while (DArrayGetElement(pDVar2,uVar13,&local_c), (short)local_c == -1) {
      uVar13 = uVar13 + 1;
      if ((int)local_14 <= (int)uVar13) {
        return;
      }
    }
    cVar17 = (char)g_playerRuntime[uVar12].tempSlots[0][0].playerId;
  }
  else {
    if ((char)param_1 == '\x02') {
      uVar12 = (uint)DAT_0080874d;
      iVar4 = g_playerRuntime[uVar12].tempSlots[0][0].objectType;
      if (iVar4 == 0) {
        return;
      }
      if (iVar4 != 0x3c) {
        if (iVar4 != 0x1ae) {
          iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1d16,0,0,
                                     "%s","STAllPlayersC::GetPanelInfo (2) unknown game type");
          if (iVar4 == 0) {
            return;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        local_c = (uint)(ushort)g_playerRuntime[uVar12].tempSlots[0][0].objectId;
        SVar18 = CASE_3;
        cVar17 = -1;
        goto cf_common_exit_0043CA35;
      }
      uVar1 = g_playerRuntime[uVar12].tempSlots[0][0].activityCount;
      if (uVar1 == 1) {
        pDVar2 = g_playerRuntime[uVar12].tempSlots[0][0].objectIds;
        uVar13 = 0;
        local_14 = pDVar2->count;
        if ((int)local_14 < 1) {
          return;
        }
        while (DArrayGetElement(pDVar2,uVar13,&local_c), (short)local_c == -1) {
          uVar13 = uVar13 + 1;
          if ((int)local_14 <= (int)uVar13) {
            return;
          }
        }
        cVar17 = (char)g_playerRuntime[uVar12].tempSlots[0][0].playerId;
        goto LAB_0043ca31;
      }
      if (uVar1 < 2) {
        param_2->field_0005 = 0;
        return;
      }
      param_2->field_0005 = 2;
      iVar4 = GetPlayerRaceId(DAT_0080874d);
      pAVar16->field_0004 = (char)iVar4;
      local_1c = g_playerRuntime[uVar12].tempSlots[0][0].objectIds;
      local_14 = local_1c->count;
      dVar15 = 0;
      if (0 < (int)local_14) {
        do {
          DArrayGetElement(local_1c,dVar15,&local_c);
          if ((short)local_c != -1) {
            pSVar8 = GetObjPtr(this,DAT_0080874d,local_c,CASE_1);
            iVar4 = thunk_FUN_00493cd0((AnonShape_00493CD0_11D91B87 *)pSVar8);
            if (iVar4 == 0) break;
          }
          dVar15 = dVar15 + 1;
        } while ((int)dVar15 < (int)local_14);
      }
      if (dVar15 == local_14) {
        pAVar16[1].field_0001 = 0;
        pAVar16->field_0x8 = 0;
        pAVar16->field_0007 = 0;
        return;
      }
      pAVar16->field_0x8 = 1;
      if (g_playerRuntime[DAT_0080874d].aiPlayer == (AiPlrClassTy *)0x0) {
LAB_0043c293:
        pAVar16[1].field_0001 = 0;
      }
      else {
        dVar15 = 0;
        pAVar16[1].field_0001 = 3;
        if (0 < (int)local_14) {
          do {
            DArrayGetElement(local_1c,dVar15,&local_c);
            if ((short)local_c != -1) {
              pSVar8 = GetObjPtr(this,DAT_0080874d,local_c,CASE_1);
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              pSVar5 = thunk_FUN_0042b760(DAT_0080874d,CONCAT22(extraout_var,pSVar8->field_0030));
              if ((pSVar5 != (STGroupBoatC *)0x0) &&
                 (pAVar16[1].field_0001 = 1, pSVar5->field_001C == 0)) break;
            }
            dVar15 = dVar15 + 1;
          } while ((int)dVar15 < (int)local_14);
        }
        if (dVar15 == local_14) {
          if (pAVar16[1].field_0001 == '\x03') goto LAB_0043c293;
          if (pAVar16[1].field_0001 == '\x01') {
            pAVar16[1].field_0001 = 3;
          }
        }
      }
      pAVar16->field_0007 = 1;
      GVar6 = thunk_FUN_0044ce40(this);
      local_18 = thunk_FUN_0044d320(GVar6);
      param_2 = (AnonShape_0043BEB0_1C00EC12 *)&pAVar16->field_000F;
      puVar7 = local_18;
      puVar11 = (undefined1 *)param_2;
      do {
        puVar11[-6] = *(undefined1 *)((int)puVar7 + 1);
        *puVar11 = *(undefined1 *)puVar7;
        puVar11 = puVar11 + 1;
        puVar7 = puVar7 + 1;
      } while ((int)(puVar11 + (-0xf - (int)pAVar16)) < 6);
      FreeAndNull(&local_18);
      uVar12 = 0;
      pAVar16[2].field_0011 = 1;
      pAVar16[2].field_0x10 = 1;
      pAVar16[2].field_000F = 1;
      pAVar16[2].field_000E = 1;
      if (0 < (int)local_14) {
        do {
          DArrayGetElement(local_1c,uVar12,&local_c);
          if ((short)local_c != -1) {
            pSVar8 = GetObjPtr(local_10,DAT_0080874d,local_c,CASE_1);
            (&pAVar16[2].field_000E)[pSVar8->field_07EE] = 3;
          }
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)local_14);
      }
      if (GVar6 < 0x40001) {
        if (GVar6 == 0x40000) {
          *(undefined4 *)pAVar16 = 0x19;
        }
        else if (GVar6 < 0x81) {
          if (GVar6 == 0x80) {
            *(undefined4 *)pAVar16 = 9;
          }
          else if (GVar6 == CASE_2) {
            *(undefined4 *)pAVar16 = 5;
          }
          else if (GVar6 == CASE_4) {
            *(undefined4 *)pAVar16 = 0xb;
          }
          else if (GVar6 == CASE_8) {
            *(undefined4 *)pAVar16 = 0x11;
          }
        }
        else if (GVar6 == 0x100) {
          *(undefined4 *)pAVar16 = 0x15;
        }
        else if (GVar6 == 0x10000) {
          *(undefined4 *)pAVar16 = 0x22;
        }
        else if (GVar6 == 0x20000) {
          *(undefined4 *)pAVar16 = 0x1a;
        }
      }
      else if (GVar6 < 0x400001) {
        if (GVar6 == 0x400000) {
          *(undefined4 *)pAVar16 = 0x21;
        }
        else if (GVar6 == 0x80000) {
          *(undefined4 *)pAVar16 = 0x1c;
        }
        else if (GVar6 == 0x100000) {
          *(undefined4 *)pAVar16 = 0x1d;
        }
        else if (GVar6 == 0x200000) {
          *(undefined4 *)pAVar16 = 0x1b;
        }
      }
      else if (GVar6 == 0x800000) {
        *(undefined4 *)pAVar16 = 0x23;
      }
      else if (GVar6 == 0x1000000) {
        *(undefined4 *)pAVar16 = 0x24;
      }
      local_28 = (STPlayerTempSlot *)0x0;
      local_24 = 0;
      uVar12 = local_20;
      if (0 < (int)local_14) {
        do {
          DArrayGetElement(local_1c,local_24,&local_c);
          if ((short)local_c != -1) {
            local_28 = (STPlayerTempSlot *)((int)&local_28->objectType + 1);
            pSVar8 = GetObjPtr(local_10,DAT_0080874d,local_c,CASE_1);
            if (local_28 == (STPlayerTempSlot *)0x1) {
              uVar12 = (uint)(ushort)pSVar8->field_0030;
            }
            else if (uVar12 != (ushort)pSVar8->field_0030) {
              return;
            }
          }
          local_24 = local_24 + 1;
        } while ((int)local_24 < (int)local_14);
        if (uVar12 == 0xffff) {
          return;
        }
      }
      if (0x1000 < GVar6) {
        if (GVar6 < 0x100001) {
          if (GVar6 == 0x100000) {
            pSVar5 = thunk_FUN_0042b760(DAT_0080874d,uVar12);
            dVar15 = (*pSVar5->vtable->slot_0C)(pSVar5);
            switch(dVar15) {
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
              pSVar5 = thunk_FUN_0042b760(DAT_0080874d,uVar12);
              dVar15 = (*pSVar5->vtable->slot_0C)(pSVar5);
              switch(dVar15) {
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
              pSVar5 = thunk_FUN_0042b760(DAT_0080874d,uVar12);
              dVar15 = (*pSVar5->vtable->slot_0C)(pSVar5);
              switch(dVar15) {
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
            pSVar5 = thunk_FUN_0042b760(DAT_0080874d,uVar12);
            dVar15 = (*pSVar5->vtable->slot_0C)(pSVar5);
            switch(dVar15) {
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
            pSVar5 = thunk_FUN_0042b760(DAT_0080874d,uVar12);
            dVar15 = (*pSVar5->vtable->slot_0C)(pSVar5);
            switch(dVar15) {
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
          pSVar5 = thunk_FUN_0042b760(DAT_0080874d,uVar12);
          dVar15 = (*pSVar5->vtable->slot_0C)(pSVar5);
          switch(dVar15) {
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
            pSVar5 = thunk_FUN_0042b760(DAT_0080874d,uVar12);
            dVar15 = (*pSVar5->vtable->slot_0C)(pSVar5);
            switch(dVar15) {
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
            pSVar5 = thunk_FUN_0042b760(DAT_0080874d,uVar12);
            dVar15 = (*pSVar5->vtable->slot_0C)(pSVar5);
            switch(dVar15) {
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
          pSVar5 = thunk_FUN_0042b760(DAT_0080874d,uVar12);
          dVar15 = (*pSVar5->vtable->slot_0C)(pSVar5);
          switch(dVar15) {
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
          pSVar5 = thunk_FUN_0042b760(DAT_0080874d,uVar12);
          dVar15 = (*pSVar5->vtable->slot_0C)(pSVar5);
          switch(dVar15) {
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
        pSVar5 = thunk_FUN_0042b760(DAT_0080874d,uVar12);
        dVar15 = (*pSVar5->vtable->slot_0C)(pSVar5);
        switch(dVar15) {
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
            pSVar5 = thunk_FUN_0042b760(DAT_0080874d,uVar12);
            dVar15 = (*pSVar5->vtable->slot_0C)(pSVar5);
            switch(dVar15) {
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
          pSVar5 = thunk_FUN_0042b760(DAT_0080874d,uVar12);
          dVar15 = (*pSVar5->vtable->slot_0C)(pSVar5);
          switch(dVar15) {
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
          pSVar5 = thunk_FUN_0042b760(DAT_0080874d,uVar12);
          dVar15 = (*pSVar5->vtable->slot_0C)(pSVar5);
          switch(dVar15) {
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
        pSVar5 = thunk_FUN_0042b760(DAT_0080874d,uVar12);
        dVar15 = (*pSVar5->vtable->slot_0C)(pSVar5);
        switch(dVar15) {
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
        pSVar5 = thunk_FUN_0042b760(DAT_0080874d,uVar12);
        dVar15 = (*pSVar5->vtable->slot_0C)(pSVar5);
        switch(dVar15) {
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
        pSVar5 = thunk_FUN_0042b760(DAT_0080874d,uVar12);
        dVar15 = (*pSVar5->vtable->slot_0C)(pSVar5);
        switch(dVar15) {
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
          *(undefined1 *)(pAVar16 + 1) = 3;
          return;
        }
        break;
      case CASE_2:
      case CASE_4:
      case CASE_8:
        pSVar5 = thunk_FUN_0042b760(DAT_0080874d,uVar12);
        dVar15 = (*pSVar5->vtable->slot_0C)(pSVar5);
        switch(dVar15) {
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
        pSVar5 = thunk_FUN_0042b760(DAT_0080874d,uVar12);
        dVar15 = (*pSVar5->vtable->slot_0C)(pSVar5);
        switch(dVar15) {
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
        pSVar5 = thunk_FUN_0042b760(DAT_0080874d,uVar12);
        dVar15 = (*pSVar5->vtable->slot_0C)(pSVar5);
        switch(dVar15) {
        case 1:
        case 7:
cf_common_exit_0043C72D:
          *(undefined1 *)param_2 = 3;
          return;
        case 2:
cf_common_exit_0043C862:
          pAVar16->field_0x10 = 3;
          return;
        case 3:
cf_common_exit_0043C95B:
          pAVar16->field_0011 = 3;
          return;
        case 4:
cf_common_exit_0043C86F:
          pAVar16->field_0012 = 3;
          return;
        }
      }
      return;
    }
    if ((char)param_1 == '\x04') {
      uVar12 = (uint)DAT_0080874d;
      iVar4 = g_playerRuntime[uVar12].tempSlots[1][0].objectType;
      if (0x19a < iVar4) {
        if (iVar4 == 0x1a4) {
          local_c = (uint)(ushort)g_playerRuntime[uVar12].tempSlots[1][0].objectId;
          SVar18 = CASE_5;
          cVar17 = -1;
        }
        else {
          if (iVar4 != 0x1b8) {
LAB_0043ca5a:
            iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1d47,0,0,
                                       "%s","STAllPlayersC::GetPanelInfo (4) unknown game type");
            if (iVar4 == 0) {
              return;
            }
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          local_c = (uint)(ushort)g_playerRuntime[uVar12].tempSlots[1][0].objectId;
          SVar18 = CASE_6;
          cVar17 = -1;
        }
        goto cf_common_exit_0043CA35;
      }
      if (iVar4 != 0x19a) {
        if (iVar4 == 0) {
          return;
        }
        if (iVar4 == 0x5a) {
          local_c = (uint)(ushort)g_playerRuntime[uVar12].tempSlots[1][0].objectId;
          SVar18 = CASE_4;
          cVar17 = -1;
        }
        else {
          if (iVar4 != 0x172) goto LAB_0043ca5a;
          local_c = (uint)(ushort)g_playerRuntime[uVar12].tempSlots[1][0].objectId;
          SVar18 = CASE_2;
          cVar17 = -1;
        }
        goto cf_common_exit_0043CA35;
      }
      if (g_playerRuntime[uVar12].tempSlots[1][0].activityCount != 1) {
        return;
      }
      pDVar2 = g_playerRuntime[uVar12].tempSlots[1][0].objectIds;
      uVar13 = 0;
      local_14 = pDVar2->count;
      if ((int)local_14 < 1) {
        return;
      }
      while (DArrayGetElement(pDVar2,uVar13,&local_c), (short)local_c == -1) {
        uVar13 = uVar13 + 1;
        if ((int)local_14 <= (int)uVar13) {
          return;
        }
      }
      cVar17 = (char)g_playerRuntime[uVar12].tempSlots[1][0].playerId;
LAB_0043ca31:
      SVar18 = CASE_1;
cf_common_exit_0043CA35:
      pSVar8 = GetObjPtr(local_10,cVar17,local_c,SVar18);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (*(code *)pSVar8->vtable->field_0034)(param_2);
      return;
    }
    if ((char)param_1 != '\x05') {
      if ((char)param_1 == '\x06') {
        if (*(int *)param_2 != 0) {
          *(undefined4 *)(*(int *)param_2 + 0xc) = 0;
        }
        uVar12 = (uint)DAT_0080874d;
        iVar4 = g_playerRuntime[uVar12].tempSlots[1][0].objectType;
        if (iVar4 == 0) {
          return;
        }
        if (iVar4 != 0x19a) {
          iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1d95,0,0,
                                     "%s","STAllPlayersC::GetPanelInfo (6) unknown game type");
          if (iVar4 == 0) {
            return;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        if (g_playerRuntime[uVar12].tempSlots[1][0].activityCount != 1) {
          return;
        }
        pDVar2 = g_playerRuntime[uVar12].tempSlots[1][0].objectIds;
        uVar13 = 0;
        local_14 = pDVar2->count;
        if ((int)local_14 < 1) {
          return;
        }
        do {
          DArrayGetElement(pDVar2,uVar13,&local_c);
          if ((short)local_c != -1) {
            pSVar8 = GetObjPtr(local_10,(char)g_playerRuntime[uVar12].tempSlots[1][0].playerId,
                               local_c,CASE_1);
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)&pSVar8->vtable->field_0x38)(param_2);
            return;
          }
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < (int)local_14);
        return;
      }
      if ((char)param_1 == '\a') {
        *(undefined4 *)(*(int *)param_2 + 0xc) = 0;
        *(undefined4 *)(*(int *)&param_2->field_0004 + 0xc) = 0;
        *(undefined4 *)(*(int *)&param_2->field_0x8 + 0xc) = 0;
        *(undefined4 *)(*(int *)&param_2->field_0xc + 0xc) = 0;
        uVar12 = (uint)DAT_0080874d;
        iVar4 = g_playerRuntime[uVar12].tempSlots[1][0].objectType;
        if (iVar4 == 0) {
          return;
        }
        if (iVar4 != 0x19a) {
          iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1db2,0,0,
                                     "%s","STAllPlayersC::GetPanelInfo (7) unknown game type");
          if (iVar4 == 0) {
            return;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        if (g_playerRuntime[uVar12].tempSlots[1][0].activityCount != 1) {
          return;
        }
        pDVar2 = g_playerRuntime[uVar12].tempSlots[1][0].objectIds;
        uVar13 = 0;
        local_14 = pDVar2->count;
        if ((int)local_14 < 1) {
          return;
        }
        do {
          DArrayGetElement(pDVar2,uVar13,&local_c);
          if ((short)local_c != -1) {
            pSVar8 = GetObjPtr(local_10,(char)g_playerRuntime[uVar12].tempSlots[1][0].playerId,
                               local_c,CASE_1);
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)&pSVar8->vtable->field_0x3c)(param_2);
            return;
          }
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < (int)local_14);
        return;
      }
      if ((char)param_1 == '\b') {
        uVar12 = (uint)DAT_0080874d;
        *(undefined4 *)(*(int *)param_2 + 0xc) = 0;
        *(undefined4 *)(*(int *)&param_2->field_0004 + 0xc) = 0;
        *(undefined4 *)(*(int *)&param_2->field_0x8 + 0xc) = 0;
        *(undefined4 *)(*(int *)&param_2->field_0xc + 0xc) = 0;
        *(undefined4 *)(*(int *)&param_2->field_0x10 + 0xc) = 0;
        iVar4 = g_playerRuntime[uVar12].tempSlots[0][0].objectType;
        if (iVar4 == 0) {
          return;
        }
        if (iVar4 != 0x3c) {
          iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1dd0,0,0,
                                     "%s","STAllPlayersC::GetPanelInfo (8) unknown game type");
          if (iVar4 == 0) {
            return;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        if (g_playerRuntime[uVar12].tempSlots[0][0].activityCount == 0) {
          return;
        }
        local_1c = g_playerRuntime[uVar12].tempSlots[0][0].objectIds;
        uVar13 = 0;
        local_14 = local_1c->count;
        if ((int)local_14 < 1) {
          return;
        }
        do {
          DArrayGetElement(local_1c,uVar13,&local_c);
          if ((short)local_c != -1) {
            pSVar8 = GetObjPtr(local_10,(char)g_playerRuntime[uVar12].tempSlots[0][0].playerId,
                               local_c,CASE_1);
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (*(code *)pSVar8->vtable->field_0040)(pAVar16);
            return;
          }
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < (int)local_14);
        return;
      }
      if ((char)param_1 == '\t') {
        uVar12 = (uint)DAT_0080874d;
        iVar4 = g_playerRuntime[uVar12].tempSlots[1][0].objectType;
        if (iVar4 == 0) {
          return;
        }
        if (iVar4 != 0x19a) {
          iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1dec,0,0,
                                     "%s","STAllPlayersC::GetPanelInfo (9) unknown game type");
          if (iVar4 == 0) {
            return;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        if (g_playerRuntime[uVar12].tempSlots[1][0].activityCount != 1) {
          return;
        }
        pDVar2 = g_playerRuntime[uVar12].tempSlots[1][0].objectIds;
        uVar13 = 0;
        local_14 = pDVar2->count;
        if ((int)local_14 < 1) {
          return;
        }
        do {
          DArrayGetElement(pDVar2,uVar13,&local_c);
          if ((short)local_c != -1) {
            pSVar8 = GetObjPtr(local_10,(char)g_playerRuntime[uVar12].tempSlots[1][0].playerId,
                               local_c,CASE_1);
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)&pSVar8->vtable->field_0x44)(param_2);
            return;
          }
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < (int)local_14);
        return;
      }
      if ((char)param_1 == '\n') {
        uVar12 = (uint)DAT_0080874d;
        local_28 = g_playerRuntime[uVar12].tempSlots[1];
        if (g_playerRuntime[uVar12].tempSlots[1][0].objectType != 0x19a) {
          return;
        }
        if (g_playerRuntime[uVar12].tempSlots[1][0].activityCount != 1) {
          return;
        }
        pDVar2 = g_playerRuntime[uVar12].tempSlots[1][0].objectIds;
        uVar12 = 0;
        dVar15 = pDVar2->count;
        if ((int)dVar15 < 1) {
          return;
        }
        do {
          DArrayGetElement(pDVar2,uVar12,&local_c);
          if ((short)local_c != -1) {
            pSVar8 = GetObjPtr(local_10,(char)local_28->playerId,local_c,CASE_1);
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)&pSVar8->vtable->field_0x48)(param_2);
            return;
          }
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)dVar15);
        return;
      }
      if ((char)param_1 != '\v') {
        if ((char)param_1 == '\f') {
          if (*(int *)param_2 != 0) {
            *(undefined4 *)(*(int *)param_2 + 0xc) = 0;
          }
          uVar12 = (uint)DAT_0080874d;
          iVar4 = g_playerRuntime[uVar12].tempSlots[1][0].objectType;
          if (iVar4 == 0) {
            return;
          }
          if (iVar4 != 0x19a) {
            iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1ea3,0,0,
                                       "%s","STAllPlayersC::GetPanelInfo (12) unknown game type");
            if (iVar4 == 0) {
              return;
            }
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          if (g_playerRuntime[uVar12].tempSlots[1][0].activityCount != 1) {
            return;
          }
          pDVar2 = g_playerRuntime[uVar12].tempSlots[1][0].objectIds;
          uVar13 = 0;
          local_14 = pDVar2->count;
          if ((int)local_14 < 1) {
            return;
          }
          do {
            DArrayGetElement(pDVar2,uVar13,&local_c);
            if ((short)local_c != -1) {
              pSVar8 = GetObjPtr(local_10,(char)g_playerRuntime[uVar12].tempSlots[1][0].playerId,
                                 local_c,CASE_1);
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (**(code **)&pSVar8->vtable->field_0x50)(param_2);
              return;
            }
            uVar13 = uVar13 + 1;
          } while ((int)uVar13 < (int)local_14);
          return;
        }
        if ((char)param_1 == '\x0e') {
          local_28 = (STPlayerTempSlot *)0x4;
          pAVar10 = (AnonShape_0043BEB0_1C00EC12 *)
                    &g_playerRuntime[DAT_0080874d].tempSlots[0][1].objectIds;
          do {
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            iVar4._0_1_ = pAVar10[-0xffffffff00000001].field_000A;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            iVar4._1_1_ = pAVar10[-0xffffffff00000001].field_000B;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            iVar4._2_1_ = pAVar10[-0xffffffff00000001].field_0xc;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            iVar4._3_1_ = pAVar10[-0xffffffff00000001].field_000D;
            param_2 = pAVar10;
            if (iVar4 == 0) {
LAB_0043d41d:
              *(undefined1 *)pAVar16 = 0;
            }
            else if (iVar4 == 0x3c) {
              if (*(ushort *)&pAVar10->field_0004 == 1) {
                uVar12 = 0;
                pDVar2 = *(DArrayTy **)pAVar10;
                local_14 = pDVar2->count;
                if (0 < (int)local_14) {
                  do {
                    DArrayGetElement(pDVar2,uVar12,&local_c);
                    if ((short)local_c != -1) {
                      SVar18 = CASE_1;
                      cVar17 = param_2[-1].field_000E;
                      uVar12 = local_c;
                      goto LAB_0043d447;
                    }
                    uVar12 = uVar12 + 1;
                  } while ((int)uVar12 < (int)local_14);
                }
              }
              else {
                if (*(ushort *)&pAVar10->field_0004 < 2) goto LAB_0043d41d;
                *(undefined1 *)pAVar16 = 2;
                pAVar16->field_0001 = 1;
                pAVar16->field_0006 = g_playerRuntime[DAT_0080874d].raceId;
              }
            }
            else {
              if (iVar4 != 0x1ae) {
                iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1ecc,0,0,
                                           "%s","STAllPlayersC::GetPanelInfo (14) unknown game type"
                                          );
                if (iVar4 != 0) {
                  STDebugBreak(); /* noreturn in standalone pseudocode */
                }
                goto LAB_0043d41d;
              }
              SVar18 = CASE_3;
              cVar17 = -1;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              uVar12 = CONCAT22((short)((uint)pAVar10 >> 0x10),
                                *(undefined2 *)&pAVar10[-1].field_0012);
LAB_0043d447:
              pSVar8 = GetObjPtr(local_10,cVar17,uVar12,SVar18);
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (*(code *)pSVar8->vtable->field_0058)(pAVar16);
            }
            pAVar10 = (AnonShape_0043BEB0_1C00EC12 *)&param_2->field_0x10;
            pAVar16 = (AnonShape_0043BEB0_1C00EC12 *)&pAVar16->field_000B;
            local_28 = (STPlayerTempSlot *)((int)&local_28[-1].activityCount + 1);
            if (local_28 == (STPlayerTempSlot *)0x0) {
              return;
            }
          } while( true );
        }
        if ((char)param_1 == '\x0f') {
          param_2 = (AnonShape_0043BEB0_1C00EC12 *)0x4;
          psVar14 = &g_playerRuntime[DAT_0080874d].tempSlots[1][1].objectId;
          do {
            iVar4 = ((STPlayerTempSlot *)(psVar14 + -4))->objectType;
            if (iVar4 < 0x19b) {
              if (iVar4 == 0x19a) {
                if (psVar14[3] == 1) {
                  local_1c = *(DArrayTy **)(psVar14 + 1);
                  uVar12 = 0;
                  local_14 = local_1c->count;
                  if (0 < (int)local_14) {
                    do {
                      DArrayGetElement(local_1c,uVar12,&local_c);
                      if ((short)local_c != -1) {
                        cVar17 = (char)*(int *)(psVar14 + -2);
                        SVar18 = CASE_1;
                        uVar12 = local_c;
                        goto LAB_0043d5b7;
                      }
                      uVar12 = uVar12 + 1;
                    } while ((int)uVar12 < (int)local_14);
                  }
                  goto LAB_0043d5c4;
                }
              }
              else if (iVar4 != 0) {
                if (iVar4 == 0x5a) {
                  SVar18 = CASE_4;
                }
                else {
                  if (iVar4 != 0x172) goto LAB_0043d581;
                  SVar18 = CASE_2;
                }
                goto LAB_0043d5b1;
              }
LAB_0043d5a6:
              *(undefined1 *)pAVar16 = 0;
            }
            else {
              if (iVar4 == 0x1a4) {
                SVar18 = CASE_5;
                iVar4 = 0;
              }
              else {
                if (iVar4 != 0x1b8) {
LAB_0043d581:
                  iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1efe,0,0,
                                             "%s",
                                             "STAllPlayersC::GetPanelInfo (15) unknown game type");
                  if (iVar4 != 0) {
                    STDebugBreak(); /* noreturn in standalone pseudocode */
                  }
                  goto LAB_0043d5a6;
                }
                SVar18 = CASE_6;
                iVar4 = 0;
              }
LAB_0043d5b1:
              cVar17 = -1;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              uVar12 = CONCAT22((short)((uint)iVar4 >> 0x10),*psVar14);
LAB_0043d5b7:
              pSVar8 = GetObjPtr(local_10,cVar17,uVar12,SVar18);
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (**(code **)&pSVar8->vtable->field_0x5c)(pAVar16);
            }
LAB_0043d5c4:
            psVar14 = psVar14 + 8;
            pAVar16 = (AnonShape_0043BEB0_1C00EC12 *)&pAVar16->field_000B;
            param_2 = (AnonShape_0043BEB0_1C00EC12 *)&param_2[-1].field_0x13;
            if (param_2 == (AnonShape_0043BEB0_1C00EC12 *)0x0) {
              return;
            }
          } while( true );
        }
        if ((char)param_1 != '\x10') {
          if ((char)param_1 == '\x11') {
            uVar12 = (uint)DAT_0080874d;
            iVar4 = g_playerRuntime[uVar12].tempSlots[0][0].objectType;
            if (iVar4 == 0) {
              return;
            }
            if (iVar4 != 0x3c) {
              iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1f4c,0,0,
                                         "%s","STAllPlayersC::GetPanelInfo (17) invalid game type");
              if (iVar4 == 0) {
                return;
              }
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            if ((ushort)g_playerRuntime[uVar12].tempSlots[0][0].activityCount < 2) {
              return;
            }
            pDVar2 = g_playerRuntime[uVar12].tempSlots[0][0].objectIds;
            iVar4 = 0;
            uVar12 = 0;
            local_14 = pDVar2->count;
            if (0 < (int)local_14) {
              do {
                DArrayGetElement(pDVar2,uVar12,&local_c);
                if ((short)local_c != -1) {
                  iVar4 = iVar4 + 1;
                  pSVar8 = GetObjPtr(local_10,DAT_0080874d,local_c,CASE_1);
                  if (iVar4 == 1) {
                    local_20 = (uint)(ushort)pSVar8->field_0030;
                  }
                  else if (local_20 != (ushort)pSVar8->field_0030) {
                    return;
                  }
                }
                uVar12 = uVar12 + 1;
              } while ((int)uVar12 < (int)local_14);
              if (local_20 == 0xffff) {
                return;
              }
            }
            pSVar5 = thunk_FUN_0042b760(DAT_0080874d,local_20);
            dVar15 = (*pSVar5->vtable->slot_1C)(pSVar5);
            switch(dVar15) {
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
          uVar12 = (uint)DAT_0080874d;
          iVar4 = g_playerRuntime[uVar12].tempSlots[0][0].objectType;
          if (iVar4 == 0) {
            return;
          }
          if (iVar4 == 0x1ae) {
            /* ST_PSEUDO[flattened_global_record_array,packed_or_unaligned_piece]: expected g_playerRuntime[player].field[index...] after base/stride proof; expected named packed member, bit extract/compose, or unaligned load */
            pSVar8 = GetObjPtr(this,-1,CONCAT22((short)(uVar12 * 0xa62 + 0x7f4f83 >> 0x10),
                                                g_playerRuntime[uVar12].tempSlots[0][0].objectId),
                               CASE_3);
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)&pSVar8->vtable->field_0x64)(param_2);
            return;
          }
          iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1f5d,0,0,
                                     "%s","STAllPlayersC::GetPanelInfo (18) unknown game type");
          if (iVar4 == 0) {
            return;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        uVar12 = (uint)DAT_0080874d;
        iVar4 = g_playerRuntime[uVar12].tempSlots[0][0].objectType;
        if (iVar4 == 0) {
          return;
        }
        if (iVar4 != 0x3c) {
          if (iVar4 == 0x1ae) {
            return;
          }
          iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1f22,0,0,
                                     "%s","STAllPlayersC::GetPanelInfo (16) unknown game type");
          if (iVar4 == 0) {
            return;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        if (g_playerRuntime[uVar12].tempSlots[0][0].activityCount == 0) {
          return;
        }
        pDVar2 = g_playerRuntime[uVar12].tempSlots[0][0].objectIds;
        uVar13 = 0;
        local_14 = pDVar2->count;
        if (0 < (int)local_14) {
          do {
            DArrayGetElement(pDVar2,uVar13,&local_c);
            if ((short)local_c != -1) {
              pSVar8 = GetObjPtr(local_10,(char)g_playerRuntime[uVar12].tempSlots[0][0].playerId,
                                 local_c,CASE_1);
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (*(code *)pSVar8->vtable->field_0060)(param_2);
              break;
            }
            uVar13 = uVar13 + 1;
          } while ((int)uVar13 < (int)local_14);
        }
        if ((ushort)g_playerRuntime[uVar12].tempSlots[0][0].activityCount < 2) {
          return;
        }
        *(undefined4 *)&param_2[0x15].field_0xc = 0xffffffff;
        *(undefined4 *)(param_2 + 0x18) = 0xffffffff;
        *(undefined4 *)&param_2[0x1a].field_0x8 = 0xffffffff;
        return;
      }
      uVar12 = (uint)DAT_0080874d;
      iVar4 = g_playerRuntime[uVar12].tempSlots[0][0].objectType;
      if (iVar4 == 0) {
        return;
      }
      if (iVar4 != 0x3c) {
        iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1e85,0,0,"%s"
                                   ,"STAllPlayersC::GetPanelInfo (11) invalid game type");
        if (iVar4 == 0) {
          return;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      uVar1 = g_playerRuntime[uVar12].tempSlots[0][0].activityCount;
      if (uVar1 == 1) {
        pDVar2 = g_playerRuntime[uVar12].tempSlots[0][0].objectIds;
        uVar13 = 0;
        local_14 = pDVar2->count;
        if ((int)local_14 < 1) {
          return;
        }
        do {
          DArrayGetElement(pDVar2,uVar13,&local_c);
          if ((short)local_c != -1) {
            pSVar8 = GetObjPtr(local_10,(char)g_playerRuntime[uVar12].tempSlots[0][0].playerId,
                               local_c,CASE_1);
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (*(code *)pSVar8->vtable->field_004C)(param_2);
            return;
          }
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < (int)local_14);
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
      pDVar2 = g_playerRuntime[uVar12].tempSlots[0][0].objectIds;
      uVar12 = 0;
      local_14 = pDVar2->count;
      param_2->field_0011 = 1;
      param_2->field_0x10 = 1;
      param_2->field_0012 = 3;
      local_1c = pDVar2;
      if (0 < (int)local_14) {
        do {
          DArrayGetElement(pDVar2,uVar12,&local_c);
          if ((short)local_c != -1) {
            pSVar8 = GetObjPtr(local_10,DAT_0080874d,local_c,CASE_1);
            if (pSVar8->field_07E6 == 0) {
              pAVar16->field_0011 = 3;
            }
            else {
              pAVar16->field_0x10 = 3;
            }
            if ((pAVar16->field_0012 == '\x03') && (pSVar8->field_07EA == 0)) {
              pAVar16->field_0012 = 1;
            }
          }
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)local_14);
      }
      dVar15 = 0;
      if (0 < (int)local_14) {
        do {
          DArrayGetElement(pDVar2,dVar15,&local_c);
          if ((short)local_c != -1) {
            pSVar8 = GetObjPtr(local_10,DAT_0080874d,local_c,CASE_1);
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            uVar9 = (**(code **)&pSVar8->vtable->field_0x2c)();
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
          dVar15 = dVar15 + 1;
        } while ((int)dVar15 < (int)local_14);
      }
switchD_0043d1bf_caseD_a:
      if (dVar15 == local_14) {
        pAVar16->field_000A = 0;
        pAVar16->field_000B = 0;
        pAVar16->field_0xc = 0;
        pAVar16->field_000D = 0;
      }
      param_2 = (AnonShape_0043BEB0_1C00EC12 *)(uint)(dVar15 == local_14);
      iVar4 = 0;
      uVar12 = 0;
      if (0 < (int)local_14) {
        do {
          DArrayGetElement(local_1c,uVar12,&local_c);
          if ((short)local_c != -1) {
            iVar4 = iVar4 + 1;
            pSVar8 = GetObjPtr(local_10,DAT_0080874d,local_c,CASE_1);
            if (iVar4 == 1) {
              local_20 = (uint)(ushort)pSVar8->field_0030;
            }
            else if (local_20 != (ushort)pSVar8->field_0030) {
              return;
            }
          }
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)local_14);
      }
      if (param_2 == (AnonShape_0043BEB0_1C00EC12 *)0x1) {
        return;
      }
      if (local_20 == 0xffff) {
        return;
      }
      pSVar5 = thunk_FUN_0042b760(DAT_0080874d,local_20);
      dVar15 = (*pSVar5->vtable->slot_0C)(pSVar5);
      switch(dVar15) {
      case 5:
        pAVar16->field_0xc = 3;
        return;
      case 6:
        pAVar16->field_000D = 3;
        return;
      default:
        return;
      case 0x10:
        pAVar16->field_000E = 3;
        return;
      case 0x14:
        pAVar16->field_000F = 3;
        return;
      }
    }
    uVar12 = (uint)DAT_0080874d;
    iVar4 = g_playerRuntime[uVar12].tempSlots[1][0].objectType;
    if (0x19a < iVar4) {
      if (iVar4 == 0x1a4) {
        local_c = (uint)(ushort)g_playerRuntime[uVar12].tempSlots[1][0].objectId;
        SVar18 = CASE_5;
        cVar17 = -1;
      }
      else {
        if (iVar4 != 0x1b8) {
LAB_0043cb81:
          iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1d78,0,0,
                                     "%s","STAllPlayersC::GetPanelInfo (5) unknown game type");
          if (iVar4 == 0) {
            return;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        local_c = (uint)(ushort)g_playerRuntime[uVar12].tempSlots[1][0].objectId;
        SVar18 = CASE_6;
        cVar17 = -1;
      }
      goto cf_common_exit_0043CB5C;
    }
    if (iVar4 != 0x19a) {
      if (iVar4 == 0) {
        return;
      }
      if (iVar4 == 0x5a) {
        local_c = (uint)(ushort)g_playerRuntime[uVar12].tempSlots[1][0].objectId;
        SVar18 = CASE_4;
        cVar17 = -1;
      }
      else {
        if (iVar4 != 0x172) goto LAB_0043cb81;
        local_c = (uint)(ushort)g_playerRuntime[uVar12].tempSlots[1][0].objectId;
        SVar18 = CASE_2;
        cVar17 = -1;
      }
      goto cf_common_exit_0043CB5C;
    }
    if (g_playerRuntime[uVar12].tempSlots[1][0].activityCount != 1) {
      return;
    }
    pDVar2 = g_playerRuntime[uVar12].tempSlots[1][0].objectIds;
    uVar13 = 0;
    local_14 = pDVar2->count;
    if ((int)local_14 < 1) {
      return;
    }
    while (DArrayGetElement(pDVar2,uVar13,&local_c), (short)local_c == -1) {
      uVar13 = uVar13 + 1;
      if ((int)local_14 <= (int)uVar13) {
        return;
      }
    }
    cVar17 = (char)g_playerRuntime[uVar12].tempSlots[1][0].playerId;
  }
  SVar18 = CASE_1;
cf_common_exit_0043CB5C:
  pSVar8 = GetObjPtr(local_10,cVar17,local_c,SVar18);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (*(code *)pSVar8->vtable->field_0030)(param_2);
  return;
cf_common_exit_0043C94C:
  *(undefined1 *)param_2 = 3;
  return;
}

