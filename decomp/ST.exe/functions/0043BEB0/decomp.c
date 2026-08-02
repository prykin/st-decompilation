#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetPanelInfo */

void __thiscall
STAllPlayersC::GetPanelInfo
          (STAllPlayersC *this,undefined4 param_1,AnonShape_0043BEB0_1C00EC12 *param_2)

{
  DArrayTy *pDVar1;
  code *pcVar2;
  ushort uVar3;
  int iVar4;
  STGroupBoatC *pSVar5;
  Global_sub_0044D320_param_1Enum GVar6;
  byte *pbVar7;
  dword dVar8;
  STGameObjC *pSVar9;
  undefined4 uVar10;
  AnonShape_0043BEB0_1C00EC12 *pAVar11;
  byte *pbVar12;
  uint uVar13;
  ushort *puVar14;
  uint uVar15;
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
  int local_28;
  uint local_24;
  uint local_20;
  DArrayTy *local_1c;
  byte *local_18;
  dword local_14;
  STAllPlayersC *local_10;
  undefined1 local_c [4];
  undefined2 local_8;
  short local_6;

  pAVar16 = param_2;
  local_20 = 0;
  local_10 = this;
  if ((char)param_1 == '\x01') {
    uVar15 = (uint)DAT_0080874d;
    iVar4 = g_packedRecords_A62x8[uVar15].field332_0x163;
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
      uVar3 = g_packedRecords_A62x8[uVar15].field334_0x16b;
      SVar18 = CASE_3;
      cVar17 = -1;
      goto cf_common_exit_0043CB5C;
    }
    if (g_packedRecords_A62x8[uVar15].field336_0x171 != 1) {
      if ((ushort)g_packedRecords_A62x8[uVar15].field336_0x171 < 2) {
        *(undefined1 *)param_2 = 0;
        return;
      }
      *(undefined1 *)param_2 = 2;
      if (g_packedRecords_A62x8[DAT_0080874d].field448_0x203 == 0) {
        param_2->field_0001 = 1;
      }
      else {
        param_2->field_0001 = 0;
      }
      param_2->field_0002 = 1;
      iVar4 = LookupRecordByte(DAT_0080874d);
      pAVar16->field_0007 = (char)iVar4;
      local_1c = (DArrayTy *)g_packedRecords_A62x8[uVar15].field335_0x16d;
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
        DArrayGetElement(local_1c,local_24,local_c);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        if (local_c._0_2_ != 0xffff) {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          pSVar9 = GetObjPtr(local_10,*(char *)&g_packedRecords_A62x8[uVar15].field333_0x167,
                             local_c._0_2_,CASE_1);
          STFishC::sub_004162B0
                    ((STFishC *)pSVar9,&local_6,&local_8,(undefined2 *)((int)&param_1 + 2));
          *(undefined1 *)((int)pAVar16 + (0x2e - param_1._2_2_)) = 1;
          (*pSVar9->vtable->vfunc_30)(local_6c);
          local_34 = local_64;
          local_30 = local_69;
          local_2c = local_51;
          Library::DKW::TBL::DArrayAppend(*(DArrayTy **)&pAVar16[2].field_000A,&local_34);
          uVar13 = local_24;
        }
        local_24 = uVar13 + 1;
      } while ((int)local_24 < (int)local_14);
      return;
    }
    pDVar1 = (DArrayTy *)g_packedRecords_A62x8[uVar15].field335_0x16d;
    uVar13 = 0;
    local_14 = pDVar1->count;
    if ((int)local_14 < 1) {
      return;
    }
    while( true ) {
      DArrayGetElement(pDVar1,uVar13,local_c);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      uVar3 = local_c._0_2_;
      if (uVar3 != 0xffff) break;
      uVar13 = uVar13 + 1;
      if ((int)local_14 <= (int)uVar13) {
        return;
      }
    }
    cVar17 = *(char *)&g_packedRecords_A62x8[uVar15].field333_0x167;
  }
  else {
    if ((char)param_1 == '\x02') {
      uVar15 = (uint)DAT_0080874d;
      iVar4 = g_packedRecords_A62x8[uVar15].field332_0x163;
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
        uVar3 = g_packedRecords_A62x8[uVar15].field334_0x16b;
        SVar18 = CASE_3;
        cVar17 = -1;
        goto cf_common_exit_0043CA35;
      }
      if (g_packedRecords_A62x8[uVar15].field336_0x171 == 1) {
        pDVar1 = (DArrayTy *)g_packedRecords_A62x8[uVar15].field335_0x16d;
        uVar13 = 0;
        local_14 = pDVar1->count;
        if ((int)local_14 < 1) {
          return;
        }
        while( true ) {
          DArrayGetElement(pDVar1,uVar13,local_c);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          uVar3 = local_c._0_2_;
          if (uVar3 != 0xffff) break;
          uVar13 = uVar13 + 1;
          if ((int)local_14 <= (int)uVar13) {
            return;
          }
        }
        cVar17 = *(char *)&g_packedRecords_A62x8[uVar15].field333_0x167;
        goto LAB_0043ca31;
      }
      if ((ushort)g_packedRecords_A62x8[uVar15].field336_0x171 < 2) {
        param_2->field_0005 = 0;
        return;
      }
      param_2->field_0005 = 2;
      iVar4 = LookupRecordByte(DAT_0080874d);
      pAVar16->field_0004 = (char)iVar4;
      local_1c = (DArrayTy *)g_packedRecords_A62x8[uVar15].field335_0x16d;
      local_14 = local_1c->count;
      uVar15 = 0;
      if (0 < (int)local_14) {
        do {
          DArrayGetElement(local_1c,uVar15,local_c);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          if (local_c._0_2_ != 0xffff) {
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            pSVar9 = GetObjPtr(this,DAT_0080874d,local_c._0_2_,CASE_1);
            iVar4 = thunk_FUN_00493cd0(pSVar9);
            if (iVar4 == 0) break;
          }
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < (int)local_14);
      }
      if (uVar15 == local_14) {
        pAVar16[1].field_0001 = 0;
        pAVar16->field_0x8 = 0;
        pAVar16->field_0007 = 0;
        return;
      }
      pAVar16->field_0x8 = 1;
      if (*(int *)&g_packedRecords_A62x8[DAT_0080874d].field_0x1 == 0) {
LAB_0043c293:
        pAVar16[1].field_0001 = 0;
      }
      else {
        uVar15 = 0;
        pAVar16[1].field_0001 = 3;
        if (0 < (int)local_14) {
          do {
            DArrayGetElement(local_1c,uVar15,local_c);
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            if (local_c._0_2_ != 0xffff) {
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              pSVar9 = GetObjPtr(this,DAT_0080874d,local_c._0_2_,CASE_1);
              pSVar5 = thunk_FUN_0042b760(DAT_0080874d,pSVar9->field_0030);
              if ((pSVar5 != nullptr) &&
                 (pAVar16[1].field_0001 = 1, pSVar5->field_001C == 0)) break;
            }
            uVar15 = uVar15 + 1;
          } while ((int)uVar15 < (int)local_14);
        }
        if (uVar15 == local_14) {
          if (pAVar16[1].field_0001 == '\x03') goto LAB_0043c293;
          if (pAVar16[1].field_0001 == '\x01') {
            pAVar16[1].field_0001 = 3;
          }
        }
      }
      pAVar16->field_0007 = 1;
      GVar6 = thunk_FUN_0044ce40(this);
      local_18 = thunk_FUN_0044d320(GVar6);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = (AnonShape_0043BEB0_1C00EC12 *)&pAVar16->field_000F;
      pbVar7 = local_18;
      pbVar12 = (byte *)param_2;
      do {
        pbVar12[-6] = pbVar7[1];
        *pbVar12 = *pbVar7;
        pbVar12 = pbVar12 + 1;
        pbVar7 = pbVar7 + 2;
      } while ((int)(pbVar12 + (-0xf - (int)pAVar16)) < 6);
      FreeAndNull(&local_18);
      uVar15 = 0;
      pAVar16[2].field_0011 = 1;
      pAVar16[2].field_0x10 = 1;
      pAVar16[2].field_000F = 1;
      pAVar16[2].field_000E = 1;
      if (0 < (int)local_14) {
        do {
          DArrayGetElement(local_1c,uVar15,local_c);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          if (local_c._0_2_ != 0xffff) {
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            pSVar9 = GetObjPtr(local_10,DAT_0080874d,local_c._0_2_,CASE_1);
            (&pAVar16[2].field_000E)[pSVar9->field_07EE] = 3;
          }
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < (int)local_14);
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
      local_28 = 0;
      local_24 = 0;
      uVar15 = local_20;
      if (0 < (int)local_14) {
        do {
          DArrayGetElement(local_1c,local_24,local_c);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          if (local_c._0_2_ != 0xffff) {
            local_28 = local_28 + 1;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            pSVar9 = GetObjPtr(local_10,DAT_0080874d,local_c._0_2_,CASE_1);
            if (local_28 == 1) {
              uVar15 = (uint)(ushort)pSVar9->field_0030;
            }
            else if (uVar15 != (ushort)pSVar9->field_0030) {
              return;
            }
          }
          local_24 = local_24 + 1;
        } while ((int)local_24 < (int)local_14);
        if (uVar15 == 0xffff) {
          return;
        }
      }
      uVar3 = (ushort)uVar15;
      if (0x1000 < GVar6) {
        if (GVar6 < 0x100001) {
          if (GVar6 == 0x100000) {
            pSVar5 = thunk_FUN_0042b760(DAT_0080874d,uVar3);
            dVar8 = pSVar5->slot_0C();
            switch(dVar8) {
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
              pSVar5 = thunk_FUN_0042b760(DAT_0080874d,uVar3);
              dVar8 = pSVar5->slot_0C();
              switch(dVar8) {
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
              pSVar5 = thunk_FUN_0042b760(DAT_0080874d,uVar3);
              dVar8 = pSVar5->slot_0C();
              switch(dVar8) {
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
            pSVar5 = thunk_FUN_0042b760(DAT_0080874d,uVar3);
            dVar8 = pSVar5->slot_0C();
            switch(dVar8) {
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
            pSVar5 = thunk_FUN_0042b760(DAT_0080874d,uVar3);
            dVar8 = pSVar5->slot_0C();
            switch(dVar8) {
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
          pSVar5 = thunk_FUN_0042b760(DAT_0080874d,uVar3);
          dVar8 = pSVar5->slot_0C();
          switch(dVar8) {
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
            pSVar5 = thunk_FUN_0042b760(DAT_0080874d,uVar3);
            dVar8 = pSVar5->slot_0C();
            switch(dVar8) {
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
            pSVar5 = thunk_FUN_0042b760(DAT_0080874d,uVar3);
            dVar8 = pSVar5->slot_0C();
            switch(dVar8) {
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
          pSVar5 = thunk_FUN_0042b760(DAT_0080874d,uVar3);
          dVar8 = pSVar5->slot_0C();
          switch(dVar8) {
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
          pSVar5 = thunk_FUN_0042b760(DAT_0080874d,uVar3);
          dVar8 = pSVar5->slot_0C();
          switch(dVar8) {
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
        pSVar5 = thunk_FUN_0042b760(DAT_0080874d,uVar3);
        dVar8 = pSVar5->slot_0C();
        switch(dVar8) {
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
            pSVar5 = thunk_FUN_0042b760(DAT_0080874d,uVar3);
            dVar8 = pSVar5->slot_0C();
            switch(dVar8) {
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
          pSVar5 = thunk_FUN_0042b760(DAT_0080874d,uVar3);
          dVar8 = pSVar5->slot_0C();
          switch(dVar8) {
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
          pSVar5 = thunk_FUN_0042b760(DAT_0080874d,uVar3);
          dVar8 = pSVar5->slot_0C();
          switch(dVar8) {
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
        pSVar5 = thunk_FUN_0042b760(DAT_0080874d,uVar3);
        dVar8 = pSVar5->slot_0C();
        switch(dVar8) {
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
        pSVar5 = thunk_FUN_0042b760(DAT_0080874d,uVar3);
        dVar8 = pSVar5->slot_0C();
        switch(dVar8) {
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
        pSVar5 = thunk_FUN_0042b760(DAT_0080874d,uVar3);
        dVar8 = pSVar5->slot_0C();
        switch(dVar8) {
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
        pSVar5 = thunk_FUN_0042b760(DAT_0080874d,uVar3);
        dVar8 = pSVar5->slot_0C();
        switch(dVar8) {
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
        pSVar5 = thunk_FUN_0042b760(DAT_0080874d,uVar3);
        dVar8 = pSVar5->slot_0C();
        switch(dVar8) {
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
        pSVar5 = thunk_FUN_0042b760(DAT_0080874d,uVar3);
        dVar8 = pSVar5->slot_0C();
        switch(dVar8) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
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
      uVar15 = (uint)DAT_0080874d;
      iVar4 = g_packedRecords_A62x8[uVar15].field390_0x1b3;
      if (0x19a < iVar4) {
        if (iVar4 == 0x1a4) {
          uVar3 = g_packedRecords_A62x8[uVar15].field392_0x1bb;
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
          uVar3 = g_packedRecords_A62x8[uVar15].field392_0x1bb;
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
          uVar3 = g_packedRecords_A62x8[uVar15].field392_0x1bb;
          SVar18 = CASE_4;
          cVar17 = -1;
        }
        else {
          if (iVar4 != 0x172) goto LAB_0043ca5a;
          uVar3 = g_packedRecords_A62x8[uVar15].field392_0x1bb;
          SVar18 = CASE_2;
          cVar17 = -1;
        }
        goto cf_common_exit_0043CA35;
      }
      if (g_packedRecords_A62x8[uVar15].field394_0x1c1 != 1) {
        return;
      }
      pDVar1 = (DArrayTy *)g_packedRecords_A62x8[uVar15].field393_0x1bd;
      uVar13 = 0;
      local_14 = pDVar1->count;
      if ((int)local_14 < 1) {
        return;
      }
      while( true ) {
        DArrayGetElement(pDVar1,uVar13,local_c);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        uVar3 = local_c._0_2_;
        if (uVar3 != 0xffff) break;
        uVar13 = uVar13 + 1;
        if ((int)local_14 <= (int)uVar13) {
          return;
        }
      }
      cVar17 = *(char *)&g_packedRecords_A62x8[uVar15].field391_0x1b7;
LAB_0043ca31:
      SVar18 = CASE_1;
cf_common_exit_0043CA35:
      pSVar9 = GetObjPtr(local_10,cVar17,uVar3,SVar18);
      (*pSVar9->vtable->vfunc_34)(param_2);
      return;
    }
    if ((char)param_1 != '\x05') {
      if ((char)param_1 == '\x06') {
        if (*(int *)param_2 != 0) {
          *(undefined4 *)(*(int *)param_2 + 0xc) = 0;
        }
        uVar15 = (uint)DAT_0080874d;
        if (g_packedRecords_A62x8[uVar15].field390_0x1b3 == 0) {
          return;
        }
        if (g_packedRecords_A62x8[uVar15].field390_0x1b3 != 0x19a) {
          iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1d95,0,0,
                                     "%s","STAllPlayersC::GetPanelInfo (6) unknown game type");
          if (iVar4 == 0) {
            return;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        if (g_packedRecords_A62x8[uVar15].field394_0x1c1 != 1) {
          return;
        }
        pDVar1 = (DArrayTy *)g_packedRecords_A62x8[uVar15].field393_0x1bd;
        uVar13 = 0;
        local_14 = pDVar1->count;
        if ((int)local_14 < 1) {
          return;
        }
        do {
          DArrayGetElement(pDVar1,uVar13,local_c);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          if (local_c._0_2_ != 0xffff) {
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            pSVar9 = GetObjPtr(local_10,*(char *)&g_packedRecords_A62x8[uVar15].field391_0x1b7,
                               local_c._0_2_,CASE_1);
            (*pSVar9->vtable->vfunc_38)(param_2);
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
        uVar15 = (uint)DAT_0080874d;
        if (g_packedRecords_A62x8[uVar15].field390_0x1b3 == 0) {
          return;
        }
        if (g_packedRecords_A62x8[uVar15].field390_0x1b3 != 0x19a) {
          iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1db2,0,0,
                                     "%s","STAllPlayersC::GetPanelInfo (7) unknown game type");
          if (iVar4 == 0) {
            return;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        if (g_packedRecords_A62x8[uVar15].field394_0x1c1 != 1) {
          return;
        }
        pDVar1 = (DArrayTy *)g_packedRecords_A62x8[uVar15].field393_0x1bd;
        uVar13 = 0;
        local_14 = pDVar1->count;
        if ((int)local_14 < 1) {
          return;
        }
        do {
          DArrayGetElement(pDVar1,uVar13,local_c);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          if (local_c._0_2_ != 0xffff) {
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            pSVar9 = GetObjPtr(local_10,*(char *)&g_packedRecords_A62x8[uVar15].field391_0x1b7,
                               local_c._0_2_,CASE_1);
            (*pSVar9->vtable->vfunc_3C)(param_2);
            return;
          }
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < (int)local_14);
        return;
      }
      if ((char)param_1 == '\b') {
        uVar15 = (uint)DAT_0080874d;
        *(undefined4 *)(*(int *)param_2 + 0xc) = 0;
        *(undefined4 *)(*(int *)&param_2->field_0004 + 0xc) = 0;
        *(undefined4 *)(*(int *)&param_2->field_0x8 + 0xc) = 0;
        *(undefined4 *)(*(int *)&param_2->field_0xc + 0xc) = 0;
        *(undefined4 *)(*(int *)&param_2->field_0x10 + 0xc) = 0;
        if (g_packedRecords_A62x8[uVar15].field332_0x163 == 0) {
          return;
        }
        if (g_packedRecords_A62x8[uVar15].field332_0x163 != 0x3c) {
          iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1dd0,0,0,
                                     "%s","STAllPlayersC::GetPanelInfo (8) unknown game type");
          if (iVar4 == 0) {
            return;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        if (g_packedRecords_A62x8[uVar15].field336_0x171 == 0) {
          return;
        }
        local_1c = (DArrayTy *)g_packedRecords_A62x8[uVar15].field335_0x16d;
        uVar13 = 0;
        local_14 = local_1c->count;
        if ((int)local_14 < 1) {
          return;
        }
        do {
          DArrayGetElement(local_1c,uVar13,local_c);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          if (local_c._0_2_ != 0xffff) {
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            pSVar9 = GetObjPtr(local_10,*(char *)&g_packedRecords_A62x8[uVar15].field333_0x167,
                               local_c._0_2_,CASE_1);
            (*pSVar9->vtable->vfunc_40)(pAVar16);
            return;
          }
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < (int)local_14);
        return;
      }
      if ((char)param_1 == '\t') {
        uVar15 = (uint)DAT_0080874d;
        if (g_packedRecords_A62x8[uVar15].field390_0x1b3 == 0) {
          return;
        }
        if (g_packedRecords_A62x8[uVar15].field390_0x1b3 != 0x19a) {
          iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1dec,0,0,
                                     "%s","STAllPlayersC::GetPanelInfo (9) unknown game type");
          if (iVar4 == 0) {
            return;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        if (g_packedRecords_A62x8[uVar15].field394_0x1c1 != 1) {
          return;
        }
        pDVar1 = (DArrayTy *)g_packedRecords_A62x8[uVar15].field393_0x1bd;
        uVar13 = 0;
        local_14 = pDVar1->count;
        if ((int)local_14 < 1) {
          return;
        }
        do {
          DArrayGetElement(pDVar1,uVar13,local_c);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          if (local_c._0_2_ != 0xffff) {
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            pSVar9 = GetObjPtr(local_10,*(char *)&g_packedRecords_A62x8[uVar15].field391_0x1b7,
                               local_c._0_2_,CASE_1);
            (*pSVar9->vtable->vfunc_44)(param_2);
            return;
          }
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < (int)local_14);
        return;
      }
      if ((char)param_1 == '\n') {
        uVar15 = (uint)DAT_0080874d;
        /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
        local_28 = uVar15 * 0xa62 + 0x7f4fd3;
        if (g_packedRecords_A62x8[uVar15].field390_0x1b3 != 0x19a) {
          return;
        }
        if (g_packedRecords_A62x8[uVar15].field394_0x1c1 != 1) {
          return;
        }
        pDVar1 = (DArrayTy *)g_packedRecords_A62x8[uVar15].field393_0x1bd;
        uVar15 = 0;
        dVar8 = pDVar1->count;
        if ((int)dVar8 < 1) {
          return;
        }
        do {
          DArrayGetElement(pDVar1,uVar15,local_c);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          if (local_c._0_2_ != 0xffff) {
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            pSVar9 = GetObjPtr(local_10,*(char *)(local_28 + 4),local_c._0_2_,CASE_1);
            (*pSVar9->vtable->vfunc_48)(param_2);
            return;
          }
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < (int)dVar8);
        return;
      }
      if ((char)param_1 != '\v') {
        if ((char)param_1 == '\f') {
          if (*(int *)param_2 != 0) {
            *(undefined4 *)(*(int *)param_2 + 0xc) = 0;
          }
          uVar15 = (uint)DAT_0080874d;
          if (g_packedRecords_A62x8[uVar15].field390_0x1b3 == 0) {
            return;
          }
          if (g_packedRecords_A62x8[uVar15].field390_0x1b3 != 0x19a) {
            iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1ea3,0,0,
                                       "%s","STAllPlayersC::GetPanelInfo (12) unknown game type");
            if (iVar4 == 0) {
              return;
            }
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          if (g_packedRecords_A62x8[uVar15].field394_0x1c1 != 1) {
            return;
          }
          pDVar1 = (DArrayTy *)g_packedRecords_A62x8[uVar15].field393_0x1bd;
          uVar13 = 0;
          local_14 = pDVar1->count;
          if ((int)local_14 < 1) {
            return;
          }
          do {
            DArrayGetElement(pDVar1,uVar13,local_c);
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            if (local_c._0_2_ != 0xffff) {
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              pSVar9 = GetObjPtr(local_10,*(char *)&g_packedRecords_A62x8[uVar15].field391_0x1b7,
                                 local_c._0_2_,CASE_1);
              (*pSVar9->vtable->vfunc_50)(param_2);
              return;
            }
            uVar13 = uVar13 + 1;
          } while ((int)uVar13 < (int)local_14);
          return;
        }
        if ((char)param_1 == '\x0e') {
          local_28 = 4;
          pAVar11 = (AnonShape_0043BEB0_1C00EC12 *)
                    &g_packedRecords_A62x8[DAT_0080874d].field340_0x17d;
          do {
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            iVar4._0_1_ = pAVar11[-0xffffffff00000001].field_000A;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            iVar4._1_1_ = pAVar11[-0xffffffff00000001].field_000B;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            iVar4._2_1_ = pAVar11[-0xffffffff00000001].field_0xc;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            iVar4._3_1_ = pAVar11[-0xffffffff00000001].field_000D;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_2 = pAVar11;
            if (iVar4 == 0) {
LAB_0043d41d:
              *(undefined1 *)pAVar16 = 0;
            }
            else if (iVar4 == 0x3c) {
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              uVar3._0_1_ = pAVar11->field_0004;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              uVar3._1_1_ = pAVar11->field_0005;
              if (uVar3 == 1) {
                uVar15 = 0;
                pDVar1 = *(DArrayTy **)pAVar11;
                local_14 = pDVar1->count;
                if (0 < (int)local_14) {
                  do {
                    DArrayGetElement(pDVar1,uVar15,local_c);
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    uVar3 = local_c._0_2_;
                    if (uVar3 != 0xffff) {
                      SVar18 = CASE_1;
                      cVar17 = param_2[-1].field_000E;
                      goto LAB_0043d447;
                    }
                    uVar15 = uVar15 + 1;
                  } while ((int)uVar15 < (int)local_14);
                }
              }
              else {
                if (uVar3 < 2) goto LAB_0043d41d;
                *(undefined1 *)pAVar16 = 2;
                pAVar16->field_0001 = 1;
                pAVar16->field_0006 = g_packedRecords_A62x8[DAT_0080874d].field0_0x0;
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
              uVar3 = *(ushort *)&pAVar11[-1].field_0012;
              SVar18 = CASE_3;
              cVar17 = -1;
LAB_0043d447:
              pSVar9 = GetObjPtr(local_10,cVar17,uVar3,SVar18);
              (*pSVar9->vtable->vfunc_58)(pAVar16);
            }
            pAVar11 = (AnonShape_0043BEB0_1C00EC12 *)&param_2->field_0x10;
            pAVar16 = (AnonShape_0043BEB0_1C00EC12 *)&pAVar16->field_000B;
            local_28 = local_28 + -1;
            if (local_28 == 0) {
              return;
            }
          } while( true );
        }
        if ((char)param_1 == '\x0f') {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_2 = (AnonShape_0043BEB0_1C00EC12 *)0x4;
          puVar14 = &g_packedRecords_A62x8[DAT_0080874d].field397_0x1cb;
          do {
            iVar4 = *(int *)(puVar14 + -4);
            if (iVar4 < 0x19b) {
              if (iVar4 == 0x19a) {
                if (puVar14[3] == 1) {
                  local_1c = *(DArrayTy **)(puVar14 + 1);
                  uVar15 = 0;
                  local_14 = local_1c->count;
                  if (0 < (int)local_14) {
                    do {
                      DArrayGetElement(local_1c,uVar15,local_c);
                      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                      uVar3 = local_c._0_2_;
                      if (uVar3 != 0xffff) {
                        cVar17 = (char)puVar14[-2];
                        SVar18 = CASE_1;
                        goto LAB_0043d5b7;
                      }
                      uVar15 = uVar15 + 1;
                    } while ((int)uVar15 < (int)local_14);
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
              }
LAB_0043d5b1:
              uVar3 = *puVar14;
              cVar17 = -1;
LAB_0043d5b7:
              pSVar9 = GetObjPtr(local_10,cVar17,uVar3,SVar18);
              (*pSVar9->vtable->vfunc_5C)(pAVar16);
            }
LAB_0043d5c4:
            puVar14 = puVar14 + 8;
            pAVar16 = (AnonShape_0043BEB0_1C00EC12 *)&pAVar16->field_000B;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_2 = (AnonShape_0043BEB0_1C00EC12 *)&param_2[-1].field_0x13;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            if (param_2 == nullptr) {
              return;
            }
          } while( true );
        }
        if ((char)param_1 != '\x10') {
          if ((char)param_1 == '\x11') {
            uVar15 = (uint)DAT_0080874d;
            if (g_packedRecords_A62x8[uVar15].field332_0x163 == 0) {
              return;
            }
            if (g_packedRecords_A62x8[uVar15].field332_0x163 != 0x3c) {
              iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1f4c,0,0,
                                         "%s","STAllPlayersC::GetPanelInfo (17) invalid game type");
              if (iVar4 == 0) {
                return;
              }
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            if ((ushort)g_packedRecords_A62x8[uVar15].field336_0x171 < 2) {
              return;
            }
            pDVar1 = (DArrayTy *)g_packedRecords_A62x8[uVar15].field335_0x16d;
            iVar4 = 0;
            uVar15 = 0;
            local_14 = pDVar1->count;
            if (0 < (int)local_14) {
              do {
                DArrayGetElement(pDVar1,uVar15,local_c);
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                if (local_c._0_2_ != 0xffff) {
                  iVar4 = iVar4 + 1;
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  pSVar9 = GetObjPtr(local_10,DAT_0080874d,local_c._0_2_,CASE_1);
                  if (iVar4 == 1) {
                    local_20 = (uint)(ushort)pSVar9->field_0030;
                  }
                  else if (local_20 != (ushort)pSVar9->field_0030) {
                    return;
                  }
                }
                uVar15 = uVar15 + 1;
              } while ((int)uVar15 < (int)local_14);
              if (local_20 == 0xffff) {
                return;
              }
            }
            pSVar5 = thunk_FUN_0042b760(DAT_0080874d,(ushort)local_20);
            dVar8 = pSVar5->slot_1C();
            switch(dVar8) {
            case 0:
              param_2->field_0007 = 1;
              return;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
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
          if (g_packedRecords_A62x8[DAT_0080874d].field332_0x163 == 0) {
            return;
          }
          if (g_packedRecords_A62x8[DAT_0080874d].field332_0x163 == 0x1ae) {
            pSVar9 = GetObjPtr(this,-1,g_packedRecords_A62x8[DAT_0080874d].field334_0x16b,CASE_3);
            (*pSVar9->vtable->vfunc_64)(param_2);
            return;
          }
          iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1f5d,0,0,
                                     "%s","STAllPlayersC::GetPanelInfo (18) unknown game type");
          if (iVar4 == 0) {
            return;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        uVar15 = (uint)DAT_0080874d;
        iVar4 = g_packedRecords_A62x8[uVar15].field332_0x163;
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
        if (g_packedRecords_A62x8[uVar15].field336_0x171 == 0) {
          return;
        }
        pDVar1 = (DArrayTy *)g_packedRecords_A62x8[uVar15].field335_0x16d;
        uVar13 = 0;
        local_14 = pDVar1->count;
        if (0 < (int)local_14) {
          do {
            DArrayGetElement(pDVar1,uVar13,local_c);
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            if (local_c._0_2_ != 0xffff) {
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              pSVar9 = GetObjPtr(local_10,*(char *)&g_packedRecords_A62x8[uVar15].field333_0x167,
                                 local_c._0_2_,CASE_1);
              (*pSVar9->vtable->vfunc_60)(param_2);
              break;
            }
            uVar13 = uVar13 + 1;
          } while ((int)uVar13 < (int)local_14);
        }
        if ((ushort)g_packedRecords_A62x8[uVar15].field336_0x171 < 2) {
          return;
        }
        *(undefined4 *)&param_2[0x15].field_0xc = 0xffffffff;
        *(undefined4 *)(param_2 + 0x18) = 0xffffffff;
        *(undefined4 *)&param_2[0x1a].field_0x8 = 0xffffffff;
        return;
      }
      uVar15 = (uint)DAT_0080874d;
      if (g_packedRecords_A62x8[uVar15].field332_0x163 == 0) {
        return;
      }
      if (g_packedRecords_A62x8[uVar15].field332_0x163 != 0x3c) {
        iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1e85,0,0,"%s"
                                   ,"STAllPlayersC::GetPanelInfo (11) invalid game type");
        if (iVar4 == 0) {
          return;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      if (g_packedRecords_A62x8[uVar15].field336_0x171 == 1) {
        pDVar1 = (DArrayTy *)g_packedRecords_A62x8[uVar15].field335_0x16d;
        uVar13 = 0;
        local_14 = pDVar1->count;
        if ((int)local_14 < 1) {
          return;
        }
        do {
          DArrayGetElement(pDVar1,uVar13,local_c);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          if (local_c._0_2_ != 0xffff) {
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            pSVar9 = GetObjPtr(local_10,*(char *)&g_packedRecords_A62x8[uVar15].field333_0x167,
                               local_c._0_2_,CASE_1);
            (*pSVar9->vtable->vfunc_4C)(param_2);
            return;
          }
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < (int)local_14);
        return;
      }
      if ((ushort)g_packedRecords_A62x8[uVar15].field336_0x171 < 2) {
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
      pDVar1 = (DArrayTy *)g_packedRecords_A62x8[uVar15].field335_0x16d;
      uVar15 = 0;
      local_14 = pDVar1->count;
      param_2->field_0011 = 1;
      param_2->field_0x10 = 1;
      param_2->field_0012 = 3;
      local_1c = pDVar1;
      if (0 < (int)local_14) {
        do {
          DArrayGetElement(pDVar1,uVar15,local_c);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          if (local_c._0_2_ != 0xffff) {
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            pSVar9 = GetObjPtr(local_10,DAT_0080874d,local_c._0_2_,CASE_1);
            if (pSVar9->field_07E6 == 0) {
              pAVar16->field_0011 = 3;
            }
            else {
              pAVar16->field_0x10 = 3;
            }
            if ((pAVar16->field_0012 == '\x03') && (pSVar9->field_07EA == 0)) {
              pAVar16->field_0012 = 1;
            }
          }
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < (int)local_14);
      }
      dVar8 = 0;
      if (0 < (int)local_14) {
        do {
          DArrayGetElement(pDVar1,dVar8,local_c);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          if (local_c._0_2_ != 0xffff) {
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            pSVar9 = GetObjPtr(local_10,DAT_0080874d,local_c._0_2_,CASE_1);
            uVar10 = (*pSVar9->vtable->vfunc_2C)();
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
          dVar8 = dVar8 + 1;
        } while ((int)dVar8 < (int)local_14);
      }
switchD_0043d1bf_caseD_a:
      if (dVar8 == local_14) {
        pAVar16->field_000A = 0;
        pAVar16->field_000B = 0;
        pAVar16->field_0xc = 0;
        pAVar16->field_000D = 0;
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = (AnonShape_0043BEB0_1C00EC12 *)(uint)(dVar8 == local_14);
      iVar4 = 0;
      uVar15 = 0;
      if (0 < (int)local_14) {
        do {
          DArrayGetElement(local_1c,uVar15,local_c);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          if (local_c._0_2_ != 0xffff) {
            iVar4 = iVar4 + 1;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            pSVar9 = GetObjPtr(local_10,DAT_0080874d,local_c._0_2_,CASE_1);
            if (iVar4 == 1) {
              local_20 = (uint)(ushort)pSVar9->field_0030;
            }
            else if (local_20 != (ushort)pSVar9->field_0030) {
              return;
            }
          }
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < (int)local_14);
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      if (param_2 == (AnonShape_0043BEB0_1C00EC12 *)0x1) {
        return;
      }
      if (local_20 == 0xffff) {
        return;
      }
      pSVar5 = thunk_FUN_0042b760(DAT_0080874d,(ushort)local_20);
      dVar8 = pSVar5->slot_0C();
      switch(dVar8) {
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
    uVar15 = (uint)DAT_0080874d;
    iVar4 = g_packedRecords_A62x8[uVar15].field390_0x1b3;
    if (0x19a < iVar4) {
      if (iVar4 == 0x1a4) {
        uVar3 = g_packedRecords_A62x8[uVar15].field392_0x1bb;
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
        uVar3 = g_packedRecords_A62x8[uVar15].field392_0x1bb;
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
        uVar3 = g_packedRecords_A62x8[uVar15].field392_0x1bb;
        SVar18 = CASE_4;
        cVar17 = -1;
      }
      else {
        if (iVar4 != 0x172) goto LAB_0043cb81;
        uVar3 = g_packedRecords_A62x8[uVar15].field392_0x1bb;
        SVar18 = CASE_2;
        cVar17 = -1;
      }
      goto cf_common_exit_0043CB5C;
    }
    if (g_packedRecords_A62x8[uVar15].field394_0x1c1 != 1) {
      return;
    }
    pDVar1 = (DArrayTy *)g_packedRecords_A62x8[uVar15].field393_0x1bd;
    uVar13 = 0;
    local_14 = pDVar1->count;
    if ((int)local_14 < 1) {
      return;
    }
    while( true ) {
      DArrayGetElement(pDVar1,uVar13,local_c);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      uVar3 = local_c._0_2_;
      if (uVar3 != 0xffff) break;
      uVar13 = uVar13 + 1;
      if ((int)local_14 <= (int)uVar13) {
        return;
      }
    }
    cVar17 = *(char *)&g_packedRecords_A62x8[uVar15].field391_0x1b7;
  }
  SVar18 = CASE_1;
cf_common_exit_0043CB5C:
  pSVar9 = GetObjPtr(local_10,cVar17,uVar3,SVar18);
  (*pSVar9->vtable->vfunc_30)(param_2);
  return;
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
cf_common_exit_0043C94C:
  *(undefined1 *)param_2 = 3;
  return;
}

