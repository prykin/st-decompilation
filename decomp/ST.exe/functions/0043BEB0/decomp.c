#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetPanelInfo */

void __thiscall
STAllPlayersC::GetPanelInfo
          (STAllPlayersC *this,undefined4 param_1,AnonShape_0043BEB0_1C00EC12 *param_2)

{
  DArrayTy *pDVar1;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  STGroupBoatC *pSVar6;
  Global_sub_0044D320_param_1Enum GVar7;
  byte *pbVar8;
  dword dVar9;
  STGameObjC *pSVar10;
  undefined4 uVar11;
  AnonShape_0043BEB0_1C00EC12 *pAVar12;
  byte *pbVar13;
  uint uVar14;
  ushort *puVar15;
  uint uVar16;
  AnonShape_0043BEB0_1C00EC12 *pAVar17;
  char cVar18;
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
  byte *local_18;
  dword local_14;
  STAllPlayersC *local_10;
  undefined1 local_c [4];
  undefined2 local_8;
  short local_6;

  pAVar17 = param_2;
  local_20 = 0;
  local_10 = this;
  if ((char)param_1 == '\x01') {
    uVar16 = (uint)DAT_0080874d;
    iVar5 = g_packedRecords_A62x8[uVar16].field96_0x163;
    if (iVar5 == 0) {
      return;
    }
    if (iVar5 != 0x3c) {
      if (iVar5 != 0x1ae) {
        iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1b8a,0,0,"%s"
                                   ,"STAllPlayersC::GetPanelInfo (1) unknown game type");
        if (iVar5 == 0) {
          return;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      uVar4 = g_packedRecords_A62x8[uVar16].field101_0x16b;
      SVar19 = CASE_3;
      cVar18 = -1;
      goto cf_common_exit_0043CB5C;
    }
    if (g_packedRecords_A62x8[uVar16].field103_0x171 != 1) {
      if ((ushort)g_packedRecords_A62x8[uVar16].field103_0x171 < 2) {
        *(undefined1 *)param_2 = 0;
        return;
      }
      *(undefined1 *)param_2 = 2;
      if (g_packedRecords_A62x8[DAT_0080874d].field200_0x203 == 0) {
        param_2->field_0001 = 1;
      }
      else {
        param_2->field_0001 = 0;
      }
      param_2->field_0002 = 1;
      bVar3 = LookupRecordByte(DAT_0080874d);
      pAVar17->field_0007 = bVar3;
      local_1c = (DArrayTy *)g_packedRecords_A62x8[uVar16].field102_0x16d;
      local_14 = local_1c->count;
      pAVar17[1].field_000E = 0;
      pAVar17[1].field_000F = 0;
      pAVar17[1].field_0x10 = 0;
      pAVar17[1].field_0011 = 0;
      pAVar17[1].field_0012 = 0;
      pAVar17[1].field_0001 = 1;
      local_24 = 0;
      if ((int)local_14 < 1) {
        return;
      }
      do {
        uVar14 = local_24;
        DArrayGetElement(local_1c,local_24,local_c);
        if (STPiece<0,2>(local_c) != 0xffff) {
          pSVar10 = GetObjPtr(local_10,g_packedRecords_A62x8[uVar16].field97_0x167,STPiece<0,2>(local_c),
                              CASE_1);
          STFishC::sub_004162B0
                    ((STFishC *)pSVar10,&local_6,&local_8,(undefined2 *)((int)&param_1 + 2));
          *(undefined1 *)((int)pAVar17 + (0x2e - STPiece<2,2>(param_1))) = 1;
          (*pSVar10->vtable->vfunc_30)((short)local_6c);
          local_34 = local_64;
          local_30 = local_69;
          local_2c = local_51;
          Library::DKW::TBL::DArrayAppend(*(DArrayTy **)&pAVar17[1].field_0x16,&local_34);
          uVar14 = local_24;
        }
        local_24 = uVar14 + 1;
      } while ((int)local_24 < (int)local_14);
      return;
    }
    pDVar1 = (DArrayTy *)g_packedRecords_A62x8[uVar16].field102_0x16d;
    uVar14 = 0;
    local_14 = pDVar1->count;
    if ((int)local_14 < 1) {
      return;
    }
    while( true ) {
      DArrayGetElement(pDVar1,uVar14,local_c);
      uVar4 = STPiece<0,2>(local_c);
      if (uVar4 != 0xffff) break;
      uVar14 = uVar14 + 1;
      if ((int)local_14 <= (int)uVar14) {
        return;
      }
    }
    cVar18 = g_packedRecords_A62x8[uVar16].field97_0x167;
  }
  else {
    if ((char)param_1 == '\x02') {
      uVar16 = (uint)DAT_0080874d;
      iVar5 = g_packedRecords_A62x8[uVar16].field96_0x163;
      if (iVar5 == 0) {
        return;
      }
      if (iVar5 != 0x3c) {
        if (iVar5 != 0x1ae) {
          iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1d16,0,0,
                                     "%s","STAllPlayersC::GetPanelInfo (2) unknown game type");
          if (iVar5 == 0) {
            return;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        uVar4 = g_packedRecords_A62x8[uVar16].field101_0x16b;
        SVar19 = CASE_3;
        cVar18 = -1;
        goto cf_common_exit_0043CA35;
      }
      if (g_packedRecords_A62x8[uVar16].field103_0x171 == 1) {
        pDVar1 = (DArrayTy *)g_packedRecords_A62x8[uVar16].field102_0x16d;
        uVar14 = 0;
        local_14 = pDVar1->count;
        if ((int)local_14 < 1) {
          return;
        }
        while( true ) {
          DArrayGetElement(pDVar1,uVar14,local_c);
          uVar4 = STPiece<0,2>(local_c);
          if (uVar4 != 0xffff) break;
          uVar14 = uVar14 + 1;
          if ((int)local_14 <= (int)uVar14) {
            return;
          }
        }
        cVar18 = g_packedRecords_A62x8[uVar16].field97_0x167;
        goto LAB_0043ca31;
      }
      if ((ushort)g_packedRecords_A62x8[uVar16].field103_0x171 < 2) {
        param_2->field_0005 = 0;
        return;
      }
      param_2->field_0005 = 2;
      bVar3 = LookupRecordByte(DAT_0080874d);
      pAVar17->field_0004 = bVar3;
      local_1c = (DArrayTy *)g_packedRecords_A62x8[uVar16].field102_0x16d;
      local_14 = local_1c->count;
      uVar16 = 0;
      if (0 < (int)local_14) {
        do {
          DArrayGetElement(local_1c,uVar16,local_c);
          if (STPiece<0,2>(local_c) != 0xffff) {
            pSVar10 = GetObjPtr(this,DAT_0080874d,STPiece<0,2>(local_c),CASE_1);
            iVar5 = thunk_FUN_00493cd0(pSVar10);
            if (iVar5 == 0) break;
          }
          uVar16 = uVar16 + 1;
        } while ((int)uVar16 < (int)local_14);
      }
      if (uVar16 == local_14) {
        pAVar17->field_0x15 = 0;
        pAVar17->field_0x8 = 0;
        pAVar17->field_0007 = 0;
        return;
      }
      pAVar17->field_0x8 = 1;
      if (g_packedRecords_A62x8[DAT_0080874d].field1_0x1 == 0) {
LAB_0043c293:
        pAVar17->field_0x15 = 0;
      }
      else {
        uVar16 = 0;
        pAVar17->field_0x15 = 3;
        if (0 < (int)local_14) {
          do {
            DArrayGetElement(local_1c,uVar16,local_c);
            if (STPiece<0,2>(local_c) != 0xffff) {
              pSVar10 = GetObjPtr(this,DAT_0080874d,STPiece<0,2>(local_c),CASE_1);
              pSVar6 = thunk_FUN_0042b760(DAT_0080874d,pSVar10->field_0030);
              if ((pSVar6 != nullptr) &&
                 (pAVar17->field_0x15 = 1, pSVar6->field_001C == 0)) break;
            }
            uVar16 = uVar16 + 1;
          } while ((int)uVar16 < (int)local_14);
        }
        if (uVar16 == local_14) {
          if (pAVar17->field_0x15 == '\x03') goto LAB_0043c293;
          if (pAVar17->field_0x15 == '\x01') {
            pAVar17->field_0x15 = 3;
          }
        }
      }
      pAVar17->field_0007 = 1;
      GVar7 = thunk_FUN_0044ce40(this);
      local_18 = thunk_FUN_0044d320(GVar7);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = (AnonShape_0043BEB0_1C00EC12 *)&pAVar17->field_000F;
      pbVar8 = local_18;
      pbVar13 = (byte *)param_2;
      do {
        pbVar13[-6] = pbVar8[1];
        *pbVar13 = *pbVar8;
        pbVar13 = pbVar13 + 1;
        pbVar8 = pbVar8 + 2;
      } while ((int)(pbVar13 + (-0xf - (int)pAVar17)) < 6);
      FreeAndNull(&local_18);
      uVar16 = 0;
      pAVar17[2].field_0001 = 1;
      *(undefined1 *)(pAVar17 + 2) = 1;
      *(undefined1 *)((int)&pAVar17[1].field_0018 + 3) = 1;
      *(undefined1 *)((int)&pAVar17[1].field_0018 + 2) = 1;
      if (0 < (int)local_14) {
        do {
          DArrayGetElement(local_1c,uVar16,local_c);
          if (STPiece<0,2>(local_c) != 0xffff) {
            pSVar10 = GetObjPtr(local_10,DAT_0080874d,STPiece<0,2>(local_c),CASE_1);
            *(undefined1 *)((int)&pAVar17[1].field_0018 + pSVar10->field_07EE + 2) = 3;
          }
          uVar16 = uVar16 + 1;
        } while ((int)uVar16 < (int)local_14);
      }
      if (GVar7 < 0x40001) {
        if (GVar7 == 0x40000) {
          *(undefined4 *)pAVar17 = 0x19;
        }
        else if (GVar7 < 0x81) {
          if (GVar7 == 0x80) {
            *(undefined4 *)pAVar17 = 9;
          }
          else if (GVar7 == CASE_2) {
            *(undefined4 *)pAVar17 = 5;
          }
          else if (GVar7 == CASE_4) {
            *(undefined4 *)pAVar17 = 0xb;
          }
          else if (GVar7 == CASE_8) {
            *(undefined4 *)pAVar17 = 0x11;
          }
        }
        else if (GVar7 == 0x100) {
          *(undefined4 *)pAVar17 = 0x15;
        }
        else if (GVar7 == 0x10000) {
          *(undefined4 *)pAVar17 = 0x22;
        }
        else if (GVar7 == 0x20000) {
          *(undefined4 *)pAVar17 = 0x1a;
        }
      }
      else if (GVar7 < 0x400001) {
        if (GVar7 == 0x400000) {
          *(undefined4 *)pAVar17 = 0x21;
        }
        else if (GVar7 == 0x80000) {
          *(undefined4 *)pAVar17 = 0x1c;
        }
        else if (GVar7 == 0x100000) {
          *(undefined4 *)pAVar17 = 0x1d;
        }
        else if (GVar7 == 0x200000) {
          *(undefined4 *)pAVar17 = 0x1b;
        }
      }
      else if (GVar7 == 0x800000) {
        *(undefined4 *)pAVar17 = 0x23;
      }
      else if (GVar7 == 0x1000000) {
        *(undefined4 *)pAVar17 = 0x24;
      }
      local_28 = 0;
      local_24 = 0;
      uVar16 = local_20;
      if (0 < (int)local_14) {
        do {
          DArrayGetElement(local_1c,local_24,local_c);
          if (STPiece<0,2>(local_c) != 0xffff) {
            local_28 = local_28 + 1;
            pSVar10 = GetObjPtr(local_10,DAT_0080874d,STPiece<0,2>(local_c),CASE_1);
            if (local_28 == 1) {
              uVar16 = (uint)(ushort)pSVar10->field_0030;
            }
            else if (uVar16 != (ushort)pSVar10->field_0030) {
              return;
            }
          }
          local_24 = local_24 + 1;
        } while ((int)local_24 < (int)local_14);
        if (uVar16 == 0xffff) {
          return;
        }
      }
      uVar4 = (ushort)uVar16;
      if (0x1000 < GVar7) {
        if (GVar7 < 0x100001) {
          if (GVar7 == 0x100000) {
            pSVar6 = thunk_FUN_0042b760(DAT_0080874d,uVar4);
            dVar9 = pSVar6->slot_0C();
            switch(dVar9) {
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
              pSVar6 = thunk_FUN_0042b760(DAT_0080874d,uVar4);
              dVar9 = pSVar6->slot_0C();
              switch(dVar9) {
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
              pSVar6 = thunk_FUN_0042b760(DAT_0080874d,uVar4);
              dVar9 = pSVar6->slot_0C();
              switch(dVar9) {
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
            pSVar6 = thunk_FUN_0042b760(DAT_0080874d,uVar4);
            dVar9 = pSVar6->slot_0C();
            switch(dVar9) {
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
            pSVar6 = thunk_FUN_0042b760(DAT_0080874d,uVar4);
            dVar9 = pSVar6->slot_0C();
            switch(dVar9) {
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
          pSVar6 = thunk_FUN_0042b760(DAT_0080874d,uVar4);
          dVar9 = pSVar6->slot_0C();
          switch(dVar9) {
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
            pSVar6 = thunk_FUN_0042b760(DAT_0080874d,uVar4);
            dVar9 = pSVar6->slot_0C();
            switch(dVar9) {
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
            pSVar6 = thunk_FUN_0042b760(DAT_0080874d,uVar4);
            dVar9 = pSVar6->slot_0C();
            switch(dVar9) {
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
          pSVar6 = thunk_FUN_0042b760(DAT_0080874d,uVar4);
          dVar9 = pSVar6->slot_0C();
          switch(dVar9) {
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
          pSVar6 = thunk_FUN_0042b760(DAT_0080874d,uVar4);
          dVar9 = pSVar6->slot_0C();
          switch(dVar9) {
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
        pSVar6 = thunk_FUN_0042b760(DAT_0080874d,uVar4);
        dVar9 = pSVar6->slot_0C();
        switch(dVar9) {
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
            pSVar6 = thunk_FUN_0042b760(DAT_0080874d,uVar4);
            dVar9 = pSVar6->slot_0C();
            switch(dVar9) {
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
          pSVar6 = thunk_FUN_0042b760(DAT_0080874d,uVar4);
          dVar9 = pSVar6->slot_0C();
          switch(dVar9) {
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
          pSVar6 = thunk_FUN_0042b760(DAT_0080874d,uVar4);
          dVar9 = pSVar6->slot_0C();
          switch(dVar9) {
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
        pSVar6 = thunk_FUN_0042b760(DAT_0080874d,uVar4);
        dVar9 = pSVar6->slot_0C();
        switch(dVar9) {
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
        pSVar6 = thunk_FUN_0042b760(DAT_0080874d,uVar4);
        dVar9 = pSVar6->slot_0C();
        switch(dVar9) {
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
        pSVar6 = thunk_FUN_0042b760(DAT_0080874d,uVar4);
        dVar9 = pSVar6->slot_0C();
        switch(dVar9) {
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
          pAVar17->field_0x14 = 3;
          return;
        }
        break;
      case CASE_2:
      case CASE_4:
      case CASE_8:
        pSVar6 = thunk_FUN_0042b760(DAT_0080874d,uVar4);
        dVar9 = pSVar6->slot_0C();
        switch(dVar9) {
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
        pSVar6 = thunk_FUN_0042b760(DAT_0080874d,uVar4);
        dVar9 = pSVar6->slot_0C();
        switch(dVar9) {
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
        pSVar6 = thunk_FUN_0042b760(DAT_0080874d,uVar4);
        dVar9 = pSVar6->slot_0C();
        switch(dVar9) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
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
      uVar16 = (uint)DAT_0080874d;
      iVar5 = g_packedRecords_A62x8[uVar16].field149_0x1b3;
      if (0x19a < iVar5) {
        if (iVar5 == 0x1a4) {
          uVar4 = g_packedRecords_A62x8[uVar16].field154_0x1bb;
          SVar19 = CASE_5;
          cVar18 = -1;
        }
        else {
          if (iVar5 != 0x1b8) {
LAB_0043ca5a:
            iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1d47,0,0,
                                       "%s","STAllPlayersC::GetPanelInfo (4) unknown game type");
            if (iVar5 == 0) {
              return;
            }
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          uVar4 = g_packedRecords_A62x8[uVar16].field154_0x1bb;
          SVar19 = CASE_6;
          cVar18 = -1;
        }
        goto cf_common_exit_0043CA35;
      }
      if (iVar5 != 0x19a) {
        if (iVar5 == 0) {
          return;
        }
        if (iVar5 == 0x5a) {
          uVar4 = g_packedRecords_A62x8[uVar16].field154_0x1bb;
          SVar19 = CASE_4;
          cVar18 = -1;
        }
        else {
          if (iVar5 != 0x172) goto LAB_0043ca5a;
          uVar4 = g_packedRecords_A62x8[uVar16].field154_0x1bb;
          SVar19 = CASE_2;
          cVar18 = -1;
        }
        goto cf_common_exit_0043CA35;
      }
      if (g_packedRecords_A62x8[uVar16].field156_0x1c1 != 1) {
        return;
      }
      pDVar1 = (DArrayTy *)g_packedRecords_A62x8[uVar16].field155_0x1bd;
      uVar14 = 0;
      local_14 = pDVar1->count;
      if ((int)local_14 < 1) {
        return;
      }
      while( true ) {
        DArrayGetElement(pDVar1,uVar14,local_c);
        uVar4 = STPiece<0,2>(local_c);
        if (uVar4 != 0xffff) break;
        uVar14 = uVar14 + 1;
        if ((int)local_14 <= (int)uVar14) {
          return;
        }
      }
      cVar18 = g_packedRecords_A62x8[uVar16].field150_0x1b7;
LAB_0043ca31:
      SVar19 = CASE_1;
cf_common_exit_0043CA35:
      pSVar10 = GetObjPtr(local_10,cVar18,uVar4,SVar19);
      (*pSVar10->vtable->vfunc_34)((short)param_2);
      return;
    }
    if ((char)param_1 != '\x05') {
      if ((char)param_1 == '\x06') {
        if (*(int *)param_2 != 0) {
          *(undefined4 *)(*(int *)param_2 + 0xc) = 0;
        }
        uVar16 = (uint)DAT_0080874d;
        if (g_packedRecords_A62x8[uVar16].field149_0x1b3 == 0) {
          return;
        }
        if (g_packedRecords_A62x8[uVar16].field149_0x1b3 != 0x19a) {
          iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1d95,0,0,
                                     "%s","STAllPlayersC::GetPanelInfo (6) unknown game type");
          if (iVar5 == 0) {
            return;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        if (g_packedRecords_A62x8[uVar16].field156_0x1c1 != 1) {
          return;
        }
        pDVar1 = (DArrayTy *)g_packedRecords_A62x8[uVar16].field155_0x1bd;
        uVar14 = 0;
        local_14 = pDVar1->count;
        if ((int)local_14 < 1) {
          return;
        }
        do {
          DArrayGetElement(pDVar1,uVar14,local_c);
          if (STPiece<0,2>(local_c) != 0xffff) {
            pSVar10 = GetObjPtr(local_10,g_packedRecords_A62x8[uVar16].field150_0x1b7,STPiece<0,2>(local_c),
                                CASE_1);
            (*pSVar10->vtable->vfunc_38)((short)param_2);
            return;
          }
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < (int)local_14);
        return;
      }
      if ((char)param_1 == '\a') {
        *(undefined4 *)(*(int *)param_2 + 0xc) = 0;
        *(undefined4 *)(*(int *)&param_2->field_0004 + 0xc) = 0;
        *(undefined4 *)(*(int *)&param_2->field_0x8 + 0xc) = 0;
        *(undefined4 *)(*(int *)&param_2->field_0xc + 0xc) = 0;
        uVar16 = (uint)DAT_0080874d;
        if (g_packedRecords_A62x8[uVar16].field149_0x1b3 == 0) {
          return;
        }
        if (g_packedRecords_A62x8[uVar16].field149_0x1b3 != 0x19a) {
          iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1db2,0,0,
                                     "%s","STAllPlayersC::GetPanelInfo (7) unknown game type");
          if (iVar5 == 0) {
            return;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        if (g_packedRecords_A62x8[uVar16].field156_0x1c1 != 1) {
          return;
        }
        pDVar1 = (DArrayTy *)g_packedRecords_A62x8[uVar16].field155_0x1bd;
        uVar14 = 0;
        local_14 = pDVar1->count;
        if ((int)local_14 < 1) {
          return;
        }
        do {
          DArrayGetElement(pDVar1,uVar14,local_c);
          if (STPiece<0,2>(local_c) != 0xffff) {
            pSVar10 = GetObjPtr(local_10,g_packedRecords_A62x8[uVar16].field150_0x1b7,STPiece<0,2>(local_c),
                                CASE_1);
            (*pSVar10->vtable->vfunc_3C)((short)param_2);
            return;
          }
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < (int)local_14);
        return;
      }
      if ((char)param_1 == '\b') {
        uVar16 = (uint)DAT_0080874d;
        *(undefined4 *)(*(int *)param_2 + 0xc) = 0;
        *(undefined4 *)(*(int *)&param_2->field_0004 + 0xc) = 0;
        *(undefined4 *)(*(int *)&param_2->field_0x8 + 0xc) = 0;
        *(undefined4 *)(*(int *)&param_2->field_0xc + 0xc) = 0;
        *(undefined4 *)(*(int *)&param_2->field_0x10 + 0xc) = 0;
        if (g_packedRecords_A62x8[uVar16].field96_0x163 == 0) {
          return;
        }
        if (g_packedRecords_A62x8[uVar16].field96_0x163 != 0x3c) {
          iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1dd0,0,0,
                                     "%s","STAllPlayersC::GetPanelInfo (8) unknown game type");
          if (iVar5 == 0) {
            return;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        if (g_packedRecords_A62x8[uVar16].field103_0x171 == 0) {
          return;
        }
        local_1c = (DArrayTy *)g_packedRecords_A62x8[uVar16].field102_0x16d;
        uVar14 = 0;
        local_14 = local_1c->count;
        if ((int)local_14 < 1) {
          return;
        }
        do {
          DArrayGetElement(local_1c,uVar14,local_c);
          if (STPiece<0,2>(local_c) != 0xffff) {
            pSVar10 = GetObjPtr(local_10,g_packedRecords_A62x8[uVar16].field97_0x167,STPiece<0,2>(local_c),
                                CASE_1);
            (*pSVar10->vtable->vfunc_40)((short)pAVar17);
            return;
          }
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < (int)local_14);
        return;
      }
      if ((char)param_1 == '\t') {
        uVar16 = (uint)DAT_0080874d;
        if (g_packedRecords_A62x8[uVar16].field149_0x1b3 == 0) {
          return;
        }
        if (g_packedRecords_A62x8[uVar16].field149_0x1b3 != 0x19a) {
          iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1dec,0,0,
                                     "%s","STAllPlayersC::GetPanelInfo (9) unknown game type");
          if (iVar5 == 0) {
            return;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        if (g_packedRecords_A62x8[uVar16].field156_0x1c1 != 1) {
          return;
        }
        pDVar1 = (DArrayTy *)g_packedRecords_A62x8[uVar16].field155_0x1bd;
        uVar14 = 0;
        local_14 = pDVar1->count;
        if ((int)local_14 < 1) {
          return;
        }
        do {
          DArrayGetElement(pDVar1,uVar14,local_c);
          if (STPiece<0,2>(local_c) != 0xffff) {
            pSVar10 = GetObjPtr(local_10,g_packedRecords_A62x8[uVar16].field150_0x1b7,STPiece<0,2>(local_c),
                                CASE_1);
            (*pSVar10->vtable->vfunc_44)((short)param_2);
            return;
          }
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < (int)local_14);
        return;
      }
      if ((char)param_1 == '\n') {
        uVar16 = (uint)DAT_0080874d;
        local_28 = STRecordByteAddress(g_packedRecords_A62x8, uVar16, 0x1B3);
        if (g_packedRecords_A62x8[uVar16].field149_0x1b3 != 0x19a) {
          return;
        }
        if (g_packedRecords_A62x8[uVar16].field156_0x1c1 != 1) {
          return;
        }
        pDVar1 = (DArrayTy *)g_packedRecords_A62x8[uVar16].field155_0x1bd;
        uVar16 = 0;
        dVar9 = pDVar1->count;
        if ((int)dVar9 < 1) {
          return;
        }
        do {
          DArrayGetElement(pDVar1,uVar16,local_c);
          if (STPiece<0,2>(local_c) != 0xffff) {
            pSVar10 = GetObjPtr(local_10,*(char *)(local_28 + 4),STPiece<0,2>(local_c),CASE_1);
            (*pSVar10->vtable->vfunc_48)((short)param_2);
            return;
          }
          uVar16 = uVar16 + 1;
        } while ((int)uVar16 < (int)dVar9);
        return;
      }
      if ((char)param_1 != '\v') {
        if ((char)param_1 == '\f') {
          if (*(int *)param_2 != 0) {
            *(undefined4 *)(*(int *)param_2 + 0xc) = 0;
          }
          uVar16 = (uint)DAT_0080874d;
          if (g_packedRecords_A62x8[uVar16].field149_0x1b3 == 0) {
            return;
          }
          if (g_packedRecords_A62x8[uVar16].field149_0x1b3 != 0x19a) {
            iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1ea3,0,0,
                                       "%s","STAllPlayersC::GetPanelInfo (12) unknown game type");
            if (iVar5 == 0) {
              return;
            }
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          if (g_packedRecords_A62x8[uVar16].field156_0x1c1 != 1) {
            return;
          }
          pDVar1 = (DArrayTy *)g_packedRecords_A62x8[uVar16].field155_0x1bd;
          uVar14 = 0;
          local_14 = pDVar1->count;
          if ((int)local_14 < 1) {
            return;
          }
          do {
            DArrayGetElement(pDVar1,uVar14,local_c);
            if (STPiece<0,2>(local_c) != 0xffff) {
              pSVar10 = GetObjPtr(local_10,g_packedRecords_A62x8[uVar16].field150_0x1b7,
                                  STPiece<0,2>(local_c),CASE_1);
              (*pSVar10->vtable->vfunc_50)((short)param_2);
              return;
            }
            uVar14 = uVar14 + 1;
          } while ((int)uVar14 < (int)local_14);
          return;
        }
        if ((char)param_1 == '\x0e') {
          local_28 = 4;
          pAVar12 = (AnonShape_0043BEB0_1C00EC12 *)
                    &g_packedRecords_A62x8[DAT_0080874d].field107_0x17d;
          do {
            iVar5 = *(int *)&pAVar12[-1].field_0012;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_2 = pAVar12;
            if (iVar5 == 0) {
LAB_0043d41d:
              *(undefined1 *)pAVar17 = 0;
            }
            else if (iVar5 == 0x3c) {
              STPiece<0,1>(uVar4) = pAVar12->field_0004;
              STPiece<1,1>(uVar4) = pAVar12->field_0005;
              if (uVar4 == 1) {
                uVar16 = 0;
                pDVar1 = *(DArrayTy **)pAVar12;
                local_14 = pDVar1->count;
                if (0 < (int)local_14) {
                  do {
                    DArrayGetElement(pDVar1,uVar16,local_c);
                    uVar4 = STPiece<0,2>(local_c);
                    if (uVar4 != 0xffff) {
                      SVar19 = CASE_1;
                      cVar18 = param_2[-1].field_0x16;
                      goto LAB_0043d447;
                    }
                    uVar16 = uVar16 + 1;
                  } while ((int)uVar16 < (int)local_14);
                }
              }
              else {
                if (uVar4 < 2) goto LAB_0043d41d;
                *(undefined1 *)pAVar17 = 2;
                pAVar17->field_0001 = 1;
                pAVar17->field_0006 = g_packedRecords_A62x8[DAT_0080874d].field0_0x0;
              }
            }
            else {
              if (iVar5 != 0x1ae) {
                iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1ecc,0,0,
                                           "%s","STAllPlayersC::GetPanelInfo (14) unknown game type"
                                          );
                if (iVar5 != 0) {
                  STDebugBreak(); /* noreturn in standalone pseudocode */
                }
                goto LAB_0043d41d;
              }
              uVar4 = *(ushort *)((int)&pAVar12[-1].field_0018 + 2);
              SVar19 = CASE_3;
              cVar18 = -1;
LAB_0043d447:
              pSVar10 = GetObjPtr(local_10,cVar18,uVar4,SVar19);
              (*pSVar10->vtable->vfunc_58)((short)pAVar17);
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
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_2 = (AnonShape_0043BEB0_1C00EC12 *)0x4;
          puVar15 = &g_packedRecords_A62x8[DAT_0080874d].field159_0x1cb;
          do {
            iVar5 = *(int *)(puVar15 + -4);
            if (iVar5 < 0x19b) {
              if (iVar5 == 0x19a) {
                if (puVar15[3] == 1) {
                  local_1c = *(DArrayTy **)(puVar15 + 1);
                  uVar16 = 0;
                  local_14 = local_1c->count;
                  if (0 < (int)local_14) {
                    do {
                      DArrayGetElement(local_1c,uVar16,local_c);
                      uVar4 = STPiece<0,2>(local_c);
                      if (uVar4 != 0xffff) {
                        cVar18 = (char)puVar15[-2];
                        SVar19 = CASE_1;
                        goto LAB_0043d5b7;
                      }
                      uVar16 = uVar16 + 1;
                    } while ((int)uVar16 < (int)local_14);
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
              }
              else {
                if (iVar5 != 0x1b8) {
LAB_0043d581:
                  iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1efe,0,0,
                                             "%s",
                                             "STAllPlayersC::GetPanelInfo (15) unknown game type");
                  if (iVar5 != 0) {
                    STDebugBreak(); /* noreturn in standalone pseudocode */
                  }
                  goto LAB_0043d5a6;
                }
                SVar19 = CASE_6;
              }
LAB_0043d5b1:
              uVar4 = *puVar15;
              cVar18 = -1;
LAB_0043d5b7:
              pSVar10 = GetObjPtr(local_10,cVar18,uVar4,SVar19);
              (*pSVar10->vtable->vfunc_5C)((short)pAVar17);
            }
LAB_0043d5c4:
            puVar15 = puVar15 + 8;
            pAVar17 = (AnonShape_0043BEB0_1C00EC12 *)&pAVar17->field_000B;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_2 = (AnonShape_0043BEB0_1C00EC12 *)((int)&param_2[-1].field_0018 + 3);
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            if (param_2 == nullptr) {
              return;
            }
          } while( true );
        }
        if ((char)param_1 != '\x10') {
          if ((char)param_1 == '\x11') {
            uVar16 = (uint)DAT_0080874d;
            if (g_packedRecords_A62x8[uVar16].field96_0x163 == 0) {
              return;
            }
            if (g_packedRecords_A62x8[uVar16].field96_0x163 != 0x3c) {
              iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1f4c,0,0,
                                         "%s","STAllPlayersC::GetPanelInfo (17) invalid game type");
              if (iVar5 == 0) {
                return;
              }
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            if ((ushort)g_packedRecords_A62x8[uVar16].field103_0x171 < 2) {
              return;
            }
            pDVar1 = (DArrayTy *)g_packedRecords_A62x8[uVar16].field102_0x16d;
            iVar5 = 0;
            uVar16 = 0;
            local_14 = pDVar1->count;
            if (0 < (int)local_14) {
              do {
                DArrayGetElement(pDVar1,uVar16,local_c);
                if (STPiece<0,2>(local_c) != 0xffff) {
                  iVar5 = iVar5 + 1;
                  pSVar10 = GetObjPtr(local_10,DAT_0080874d,STPiece<0,2>(local_c),CASE_1);
                  if (iVar5 == 1) {
                    local_20 = (uint)(ushort)pSVar10->field_0030;
                  }
                  else if (local_20 != (ushort)pSVar10->field_0030) {
                    return;
                  }
                }
                uVar16 = uVar16 + 1;
              } while ((int)uVar16 < (int)local_14);
              if (local_20 == 0xffff) {
                return;
              }
            }
            pSVar6 = thunk_FUN_0042b760(DAT_0080874d,(ushort)local_20);
            dVar9 = pSVar6->slot_1C();
            switch(dVar9) {
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
          if (g_packedRecords_A62x8[DAT_0080874d].field96_0x163 == 0) {
            return;
          }
          if (g_packedRecords_A62x8[DAT_0080874d].field96_0x163 == 0x1ae) {
            pSVar10 = GetObjPtr(this,-1,g_packedRecords_A62x8[DAT_0080874d].field101_0x16b,CASE_3);
            (*pSVar10->vtable->vfunc_64)((short)param_2);
            return;
          }
          iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1f5d,0,0,
                                     "%s","STAllPlayersC::GetPanelInfo (18) unknown game type");
          if (iVar5 == 0) {
            return;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        uVar16 = (uint)DAT_0080874d;
        iVar5 = g_packedRecords_A62x8[uVar16].field96_0x163;
        if (iVar5 == 0) {
          return;
        }
        if (iVar5 != 0x3c) {
          if (iVar5 == 0x1ae) {
            return;
          }
          iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1f22,0,0,
                                     "%s","STAllPlayersC::GetPanelInfo (16) unknown game type");
          if (iVar5 == 0) {
            return;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        if (g_packedRecords_A62x8[uVar16].field103_0x171 == 0) {
          return;
        }
        pDVar1 = (DArrayTy *)g_packedRecords_A62x8[uVar16].field102_0x16d;
        uVar14 = 0;
        local_14 = pDVar1->count;
        if (0 < (int)local_14) {
          do {
            DArrayGetElement(pDVar1,uVar14,local_c);
            if (STPiece<0,2>(local_c) != 0xffff) {
              pSVar10 = GetObjPtr(local_10,g_packedRecords_A62x8[uVar16].field97_0x167,STPiece<0,2>(local_c)
                                  ,CASE_1);
              (*pSVar10->vtable->vfunc_60)((short)param_2);
              break;
            }
            uVar14 = uVar14 + 1;
          } while ((int)uVar14 < (int)local_14);
        }
        if ((ushort)g_packedRecords_A62x8[uVar16].field103_0x171 < 2) {
          return;
        }
        *(undefined4 *)&param_2[0xf].field_0xc = 0xffffffff;
        param_2[0x11].field_0004 = 0xff;
        param_2[0x11].field_0005 = 0xff;
        param_2[0x11].field_0006 = 0xff;
        param_2[0x11].field_0007 = 0xff;
        param_2[0x12].field_0018 = 0xffffffff;
        return;
      }
      uVar16 = (uint)DAT_0080874d;
      if (g_packedRecords_A62x8[uVar16].field96_0x163 == 0) {
        return;
      }
      if (g_packedRecords_A62x8[uVar16].field96_0x163 != 0x3c) {
        iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1e85,0,0,"%s"
                                   ,"STAllPlayersC::GetPanelInfo (11) invalid game type");
        if (iVar5 == 0) {
          return;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      if (g_packedRecords_A62x8[uVar16].field103_0x171 == 1) {
        pDVar1 = (DArrayTy *)g_packedRecords_A62x8[uVar16].field102_0x16d;
        uVar14 = 0;
        local_14 = pDVar1->count;
        if ((int)local_14 < 1) {
          return;
        }
        do {
          DArrayGetElement(pDVar1,uVar14,local_c);
          if (STPiece<0,2>(local_c) != 0xffff) {
            pSVar10 = GetObjPtr(local_10,g_packedRecords_A62x8[uVar16].field97_0x167,STPiece<0,2>(local_c),
                                CASE_1);
            (*pSVar10->vtable->vfunc_4C)((short)param_2);
            return;
          }
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < (int)local_14);
        return;
      }
      if ((ushort)g_packedRecords_A62x8[uVar16].field103_0x171 < 2) {
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
      pDVar1 = (DArrayTy *)g_packedRecords_A62x8[uVar16].field102_0x16d;
      uVar16 = 0;
      local_14 = pDVar1->count;
      param_2->field_0011 = 1;
      param_2->field_0x10 = 1;
      param_2->field_0012 = 3;
      local_1c = pDVar1;
      if (0 < (int)local_14) {
        do {
          DArrayGetElement(pDVar1,uVar16,local_c);
          if (STPiece<0,2>(local_c) != 0xffff) {
            pSVar10 = GetObjPtr(local_10,DAT_0080874d,STPiece<0,2>(local_c),CASE_1);
            if (pSVar10->field_07E6 == 0) {
              pAVar17->field_0011 = 3;
            }
            else {
              pAVar17->field_0x10 = 3;
            }
            if ((pAVar17->field_0012 == '\x03') && (pSVar10->field_07EA == 0)) {
              pAVar17->field_0012 = 1;
            }
          }
          uVar16 = uVar16 + 1;
        } while ((int)uVar16 < (int)local_14);
      }
      dVar9 = 0;
      if (0 < (int)local_14) {
        do {
          DArrayGetElement(pDVar1,dVar9,local_c);
          if (STPiece<0,2>(local_c) != 0xffff) {
            pSVar10 = GetObjPtr(local_10,DAT_0080874d,STPiece<0,2>(local_c),CASE_1);
            uVar11 = (*pSVar10->vtable->vfunc_2C)();
            switch(uVar11) {
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
          dVar9 = dVar9 + 1;
        } while ((int)dVar9 < (int)local_14);
      }
switchD_0043d1bf_caseD_a:
      if (dVar9 == local_14) {
        pAVar17->field_000A = 0;
        pAVar17->field_000B = 0;
        pAVar17->field_0xc = 0;
        pAVar17->field_000D = 0;
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = (AnonShape_0043BEB0_1C00EC12 *)(uint)(dVar9 == local_14);
      iVar5 = 0;
      uVar16 = 0;
      if (0 < (int)local_14) {
        do {
          DArrayGetElement(local_1c,uVar16,local_c);
          if (STPiece<0,2>(local_c) != 0xffff) {
            iVar5 = iVar5 + 1;
            pSVar10 = GetObjPtr(local_10,DAT_0080874d,STPiece<0,2>(local_c),CASE_1);
            if (iVar5 == 1) {
              local_20 = (uint)(ushort)pSVar10->field_0030;
            }
            else if (local_20 != (ushort)pSVar10->field_0030) {
              return;
            }
          }
          uVar16 = uVar16 + 1;
        } while ((int)uVar16 < (int)local_14);
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      if (param_2 == (AnonShape_0043BEB0_1C00EC12 *)0x1) {
        return;
      }
      if (local_20 == 0xffff) {
        return;
      }
      pSVar6 = thunk_FUN_0042b760(DAT_0080874d,(ushort)local_20);
      dVar9 = pSVar6->slot_0C();
      switch(dVar9) {
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
    uVar16 = (uint)DAT_0080874d;
    iVar5 = g_packedRecords_A62x8[uVar16].field149_0x1b3;
    if (0x19a < iVar5) {
      if (iVar5 == 0x1a4) {
        uVar4 = g_packedRecords_A62x8[uVar16].field154_0x1bb;
        SVar19 = CASE_5;
        cVar18 = -1;
      }
      else {
        if (iVar5 != 0x1b8) {
LAB_0043cb81:
          iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1d78,0,0,
                                     "%s","STAllPlayersC::GetPanelInfo (5) unknown game type");
          if (iVar5 == 0) {
            return;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        uVar4 = g_packedRecords_A62x8[uVar16].field154_0x1bb;
        SVar19 = CASE_6;
        cVar18 = -1;
      }
      goto cf_common_exit_0043CB5C;
    }
    if (iVar5 != 0x19a) {
      if (iVar5 == 0) {
        return;
      }
      if (iVar5 == 0x5a) {
        uVar4 = g_packedRecords_A62x8[uVar16].field154_0x1bb;
        SVar19 = CASE_4;
        cVar18 = -1;
      }
      else {
        if (iVar5 != 0x172) goto LAB_0043cb81;
        uVar4 = g_packedRecords_A62x8[uVar16].field154_0x1bb;
        SVar19 = CASE_2;
        cVar18 = -1;
      }
      goto cf_common_exit_0043CB5C;
    }
    if (g_packedRecords_A62x8[uVar16].field156_0x1c1 != 1) {
      return;
    }
    pDVar1 = (DArrayTy *)g_packedRecords_A62x8[uVar16].field155_0x1bd;
    uVar14 = 0;
    local_14 = pDVar1->count;
    if ((int)local_14 < 1) {
      return;
    }
    while( true ) {
      DArrayGetElement(pDVar1,uVar14,local_c);
      uVar4 = STPiece<0,2>(local_c);
      if (uVar4 != 0xffff) break;
      uVar14 = uVar14 + 1;
      if ((int)local_14 <= (int)uVar14) {
        return;
      }
    }
    cVar18 = g_packedRecords_A62x8[uVar16].field150_0x1b7;
  }
  SVar19 = CASE_1;
cf_common_exit_0043CB5C:
  pSVar10 = GetObjPtr(local_10,cVar18,uVar4,SVar19);
  (*pSVar10->vtable->vfunc_30)((short)param_2);
  return;
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
cf_common_exit_0043C94C:
  *(undefined1 *)param_2 = 3;
  return;
}

