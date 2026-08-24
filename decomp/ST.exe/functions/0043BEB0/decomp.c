#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetPanelInfo */

void __thiscall
STAllPlayersC::GetPanelInfo
          (STAllPlayersC *this,undefined4 param_1,AnonShape_0043BEB0_1C00EC12 *param_2)

{
  DArrayTy *pDVar1;
  ushort uVar4;
  byte bVar3;
  int local_EAX_107;
  int local_EAX_583;
  int iVar6;
  STGroupBoatC *pSVar7;
  Global_sub_0044D320_param_1Enum GVar8;
  byte *pbVar9;
  dword dVar10;
  int iVar5;
  STGameObjC *pSVar11;
  int local_EAX_3303;
  int local_EAX_3449;
  int local_EAX_3685;
  int local_EAX_3922;
  int local_EAX_4134;
  int local_EAX_4501;
  uint uVar12;
  int local_EAX_5245;
  AnonShape_0043BEB0_1C00EC12 *pAVar13;
  int local_EAX_5472;
  int local_EAX_5865;
  int local_EAX_6027;
  int local_EAX_6259;
  int local_EAX_6655;
  byte *pbVar14;
  uint uVar15;
  ushort *puVar16;
  uint uVar17;
  AnonShape_0043BEB0_1C00EC12 *pAVar18;
  char cVar19;
  STAllPlayersC_GetObjPtr_param_3Enum SVar20;
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
  short local_8;
  short local_6;

  pAVar18 = param_2;
  local_20 = 0;
  local_10 = this;
  if ((char)param_1 == '\x01') {
    uVar17 = (uint)DAT_0080874d;
    iVar6 = g_packedRecords_A62x8[uVar17].field96_0x163;
    if (iVar6 == 0) {
      return;
    }
    if (iVar6 != 0x3c) {
      if (iVar6 != 0x1ae) {
        local_EAX_107 =
             ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1b8a,0,0,"%s",
                                "STAllPlayersC::GetPanelInfo (1) unknown game type");
        if (local_EAX_107 == 0) {
          return;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      uVar4 = g_packedRecords_A62x8[uVar17].field101_0x16b;
      SVar20 = CASE_3;
      cVar19 = -1;
      goto cf_common_exit_0043CB5C;
    }
    if (g_packedRecords_A62x8[uVar17].field103_0x171 != 1) {
      if ((ushort)g_packedRecords_A62x8[uVar17].field103_0x171 < 2) {
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
      /* ST_CALLSITE[0043BFD8]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      bVar3 = LookupRecordByte(DAT_0080874d);
      pAVar18->field_0007 = bVar3;
      local_1c = (DArrayTy *)g_packedRecords_A62x8[uVar17].field102_0x16d;
      local_14 = local_1c->count;
      pAVar18[1].field_000E = 0;
      pAVar18[1].field_000F = 0;
      pAVar18[1].field_0x10 = 0;
      pAVar18[1].field_0011 = 0;
      pAVar18[1].field_0012 = 0;
      pAVar18[1].field_0001 = 1;
      local_24 = 0;
      if ((int)local_14 < 1) {
        return;
      }
      do {
        uVar15 = local_24;
        DArrayGetElement(local_1c,local_24,local_c);
        if (STPiece<0,2>(local_c) != 0xffff) {
          /* ST_CALLSITE[0043C02A]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
          pSVar11 = GetObjPtr(local_10,g_packedRecords_A62x8[uVar17].field97_0x167,STPiece<0,2>(local_c),
                              CASE_1);
          /* ST_CALLSITE[0043C03F]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
          STFishC::sub_004162B0((STFishC *)pSVar11,&local_6,&local_8,(short *)((int)&param_1 + 2));
          *(undefined1 *)((int)pAVar18 + (0x2e - STPiece<2,2>(param_1))) = 1;
          /* ST_CALLSITE[0043C058]: CALL dword ptr [EDX + 0x30] */
          (*pSVar11->vtable->vfunc_30)((short)local_6c);
          local_34 = local_64;
          local_30 = local_69;
          local_2c = local_51;
          Library::DKW::TBL::DArrayAppend(*(DArrayTy **)&pAVar18[1].field_0x16,&local_34);
          uVar15 = local_24;
        }
        local_24 = uVar15 + 1;
      } while ((int)local_24 < (int)local_14);
      return;
    }
    pDVar1 = (DArrayTy *)g_packedRecords_A62x8[uVar17].field102_0x16d;
    uVar15 = 0;
    local_14 = pDVar1->count;
    if ((int)local_14 < 1) {
      return;
    }
    while( true ) {
      DArrayGetElement(pDVar1,uVar15,local_c);
      uVar4 = STPiece<0,2>(local_c);
      if (uVar4 != 0xffff) break;
      uVar15 = uVar15 + 1;
      if ((int)local_14 <= (int)uVar15) {
        return;
      }
    }
    cVar19 = g_packedRecords_A62x8[uVar17].field97_0x167;
  }
  else {
    if ((char)param_1 == '\x02') {
      uVar17 = (uint)DAT_0080874d;
      iVar6 = g_packedRecords_A62x8[uVar17].field96_0x163;
      if (iVar6 == 0) {
        return;
      }
      if (iVar6 != 0x3c) {
        if (iVar6 != 0x1ae) {
          local_EAX_583 =
               ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1d16,0,0,"%s",
                                  "STAllPlayersC::GetPanelInfo (2) unknown game type");
          if (local_EAX_583 == 0) {
            return;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        uVar4 = g_packedRecords_A62x8[uVar17].field101_0x16b;
        SVar20 = CASE_3;
        cVar19 = -1;
        goto cf_common_exit_0043CA35;
      }
      if (g_packedRecords_A62x8[uVar17].field103_0x171 == 1) {
        pDVar1 = (DArrayTy *)g_packedRecords_A62x8[uVar17].field102_0x16d;
        uVar15 = 0;
        local_14 = pDVar1->count;
        if ((int)local_14 < 1) {
          return;
        }
        while( true ) {
          DArrayGetElement(pDVar1,uVar15,local_c);
          uVar4 = STPiece<0,2>(local_c);
          if (uVar4 != 0xffff) break;
          uVar15 = uVar15 + 1;
          if ((int)local_14 <= (int)uVar15) {
            return;
          }
        }
        cVar19 = g_packedRecords_A62x8[uVar17].field97_0x167;
        goto LAB_0043ca31;
      }
      if ((ushort)g_packedRecords_A62x8[uVar17].field103_0x171 < 2) {
        param_2->field_0005 = 0;
        return;
      }
      param_2->field_0005 = 2;
      /* ST_CALLSITE[0043C187]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      bVar3 = LookupRecordByte(DAT_0080874d);
      pAVar18->field_0004 = bVar3;
      local_1c = (DArrayTy *)g_packedRecords_A62x8[uVar17].field102_0x16d;
      local_14 = local_1c->count;
      uVar17 = 0;
      if (0 < (int)local_14) {
        do {
          DArrayGetElement(local_1c,uVar17,local_c);
          if (STPiece<0,2>(local_c) != 0xffff) {
            /* ST_CALLSITE[0043C1C4]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
            pSVar11 = GetObjPtr(this,DAT_0080874d,STPiece<0,2>(local_c),CASE_1);
            iVar6 = thunk_FUN_00493cd0(pSVar11);
            if (iVar6 == 0) break;
          }
          uVar17 = uVar17 + 1;
        } while ((int)uVar17 < (int)local_14);
      }
      if (uVar17 == local_14) {
        pAVar18->field_0x15 = 0;
        pAVar18->field_0x8 = 0;
        pAVar18->field_0007 = 0;
        return;
      }
      pAVar18->field_0x8 = 1;
      if (g_packedRecords_A62x8[DAT_0080874d].field1_0x1 == 0) {
LAB_0043c293:
        pAVar18->field_0x15 = 0;
      }
      else {
        uVar17 = 0;
        pAVar18->field_0x15 = 3;
        if (0 < (int)local_14) {
          do {
            DArrayGetElement(local_1c,uVar17,local_c);
            if (STPiece<0,2>(local_c) != 0xffff) {
              /* ST_CALLSITE[0043C24B]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
              pSVar11 = GetObjPtr(this,DAT_0080874d,STPiece<0,2>(local_c),CASE_1);
              pSVar7 = thunk_FUN_0042b760(DAT_0080874d,pSVar11->field_0030);
              if ((pSVar7 != nullptr) &&
                 (pAVar18->field_0x15 = 1, pSVar7->field_001C == 0)) break;
            }
            uVar17 = uVar17 + 1;
          } while ((int)uVar17 < (int)local_14);
        }
        if (uVar17 == local_14) {
          if (pAVar18->field_0x15 == '\x03') goto LAB_0043c293;
          if (pAVar18->field_0x15 == '\x01') {
            pAVar18->field_0x15 = 3;
          }
        }
      }
      pAVar18->field_0007 = 1;
      GVar8 = thunk_FUN_0044ce40(this);
      local_18 = thunk_FUN_0044d320(GVar8);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = (AnonShape_0043BEB0_1C00EC12 *)&pAVar18->field_000F;
      pbVar9 = local_18;
      pbVar14 = (byte *)param_2;
      do {
        pbVar14[-6] = pbVar9[1];
        *pbVar14 = *pbVar9;
        pbVar14 = pbVar14 + 1;
        pbVar9 = pbVar9 + 2;
      } while ((int)(pbVar14 + (-0xf - (int)pAVar18)) < 6);
      FreeAndNull(&local_18);
      uVar17 = 0;
      pAVar18[2].field_0001 = 1;
      ((undefined1 *)pAVar18)[2] = 1;
      *(undefined1 *)((int)&pAVar18[1].field_0018 + 3) = 1;
      *(undefined1 *)((int)&pAVar18[1].field_0018 + 2) = 1;
      if (0 < (int)local_14) {
        do {
          DArrayGetElement(local_1c,uVar17,local_c);
          if (STPiece<0,2>(local_c) != 0xffff) {
            /* ST_CALLSITE[0043C31A]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
            pSVar11 = GetObjPtr(local_10,DAT_0080874d,STPiece<0,2>(local_c),CASE_1);
            *(undefined1 *)((int)&pAVar18[1].field_0018 + pSVar11->field_07EE + 2) = 3;
          }
          uVar17 = uVar17 + 1;
        } while ((int)uVar17 < (int)local_14);
      }
      if (GVar8 < 0x40001) {
        if (GVar8 == 0x40000) {
          *(undefined4 *)pAVar18 = 0x19;
        }
        else if (GVar8 < 0x81) {
          if (GVar8 == 0x80) {
            *(undefined4 *)pAVar18 = 9;
          }
          else if (GVar8 == CASE_2) {
            *(undefined4 *)pAVar18 = 5;
          }
          else if (GVar8 == CASE_4) {
            *(undefined4 *)pAVar18 = 0xb;
          }
          else if (GVar8 == CASE_8) {
            *(undefined4 *)pAVar18 = 0x11;
          }
        }
        else if (GVar8 == 0x100) {
          *(undefined4 *)pAVar18 = 0x15;
        }
        else if (GVar8 == 0x10000) {
          *(undefined4 *)pAVar18 = 0x22;
        }
        else if (GVar8 == 0x20000) {
          *(undefined4 *)pAVar18 = 0x1a;
        }
      }
      else if (GVar8 < 0x400001) {
        if (GVar8 == 0x400000) {
          *(undefined4 *)pAVar18 = 0x21;
        }
        else if (GVar8 == 0x80000) {
          *(undefined4 *)pAVar18 = 0x1c;
        }
        else if (GVar8 == 0x100000) {
          *(undefined4 *)pAVar18 = 0x1d;
        }
        else if (GVar8 == 0x200000) {
          *(undefined4 *)pAVar18 = 0x1b;
        }
      }
      else if (GVar8 == 0x800000) {
        *(undefined4 *)pAVar18 = 0x23;
      }
      else if (GVar8 == 0x1000000) {
        *(undefined4 *)pAVar18 = 0x24;
      }
      local_28 = 0;
      local_24 = 0;
      uVar17 = local_20;
      if (0 < (int)local_14) {
        do {
          DArrayGetElement(local_1c,local_24,local_c);
          if (STPiece<0,2>(local_c) != 0xffff) {
            local_28 = local_28 + 1;
            /* ST_CALLSITE[0043C464]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
            pSVar11 = GetObjPtr(local_10,DAT_0080874d,STPiece<0,2>(local_c),CASE_1);
            if (local_28 == 1) {
              uVar17 = (uint)(ushort)pSVar11->field_0030;
            }
            else if (uVar17 != (ushort)pSVar11->field_0030) {
              return;
            }
          }
          local_24 = local_24 + 1;
        } while ((int)local_24 < (int)local_14);
        if (uVar17 == 0xffff) {
          return;
        }
      }
      uVar4 = (ushort)uVar17;
      if (0x1000 < GVar8) {
        if (GVar8 < 0x100001) {
          if (GVar8 == 0x100000) {
            pSVar7 = thunk_FUN_0042b760(DAT_0080874d,uVar4);
            /* ST_CALLSITE[0043C7F1]: CALL dword ptr [EDX + 0xc] */
            dVar10 = pSVar7->slot_0C();
            switch(dVar10) {
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
              pSVar7 = thunk_FUN_0042b760(DAT_0080874d,uVar4);
              /* ST_CALLSITE[0043C750]: CALL dword ptr [EDX + 0xc] */
              dVar10 = pSVar7->slot_0C();
              switch(dVar10) {
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
              pSVar7 = thunk_FUN_0042b760(DAT_0080874d,uVar4);
              /* ST_CALLSITE[0043C719]: CALL dword ptr [EDX + 0xc] */
              dVar10 = pSVar7->slot_0C();
              switch(dVar10) {
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
            pSVar7 = thunk_FUN_0042b760(DAT_0080874d,uVar4);
            /* ST_CALLSITE[0043C6EA]: CALL dword ptr [EDX + 0xc] */
            dVar10 = pSVar7->slot_0C();
            switch(dVar10) {
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
            pSVar7 = thunk_FUN_0042b760(DAT_0080874d,uVar4);
            /* ST_CALLSITE[0043C7C2]: CALL dword ptr [EDX + 0xc] */
            dVar10 = pSVar7->slot_0C();
            switch(dVar10) {
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
          pSVar7 = thunk_FUN_0042b760(DAT_0080874d,uVar4);
          /* ST_CALLSITE[0043C793]: CALL dword ptr [EDX + 0xc] */
          dVar10 = pSVar7->slot_0C();
          switch(dVar10) {
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
            pSVar7 = thunk_FUN_0042b760(DAT_0080874d,uVar4);
            /* ST_CALLSITE[0043C8BE]: CALL dword ptr [EDX + 0xc] */
            dVar10 = pSVar7->slot_0C();
            switch(dVar10) {
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
            pSVar7 = thunk_FUN_0042b760(DAT_0080874d,uVar4);
            /* ST_CALLSITE[0043C88F]: CALL dword ptr [EDX + 0xc] */
            dVar10 = pSVar7->slot_0C();
            switch(dVar10) {
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
          pSVar7 = thunk_FUN_0042b760(DAT_0080874d,uVar4);
          /* ST_CALLSITE[0043C846]: CALL dword ptr [EDX + 0xc] */
          dVar10 = pSVar7->slot_0C();
          switch(dVar10) {
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
          pSVar7 = thunk_FUN_0042b760(DAT_0080874d,uVar4);
          /* ST_CALLSITE[0043C930]: CALL dword ptr [EDX + 0xc] */
          dVar10 = pSVar7->slot_0C();
          switch(dVar10) {
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
        pSVar7 = thunk_FUN_0042b760(DAT_0080874d,uVar4);
        /* ST_CALLSITE[0043C901]: CALL dword ptr [EDX + 0xc] */
        dVar10 = pSVar7->slot_0C();
        switch(dVar10) {
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
            pSVar7 = thunk_FUN_0042b760(DAT_0080874d,uVar4);
            /* ST_CALLSITE[0043C65F]: CALL dword ptr [EDX + 0xc] */
            dVar10 = pSVar7->slot_0C();
            switch(dVar10) {
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
          pSVar7 = thunk_FUN_0042b760(DAT_0080874d,uVar4);
          /* ST_CALLSITE[0043C630]: CALL dword ptr [EDX + 0xc] */
          dVar10 = pSVar7->slot_0C();
          switch(dVar10) {
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
          pSVar7 = thunk_FUN_0042b760(DAT_0080874d,uVar4);
          /* ST_CALLSITE[0043C5F4]: CALL dword ptr [EDX + 0xc] */
          dVar10 = pSVar7->slot_0C();
          switch(dVar10) {
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
        pSVar7 = thunk_FUN_0042b760(DAT_0080874d,uVar4);
        /* ST_CALLSITE[0043C5CC]: CALL dword ptr [EDX + 0xc] */
        dVar10 = pSVar7->slot_0C();
        switch(dVar10) {
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
        pSVar7 = thunk_FUN_0042b760(DAT_0080874d,uVar4);
        /* ST_CALLSITE[0043C57F]: CALL dword ptr [EDX + 0xc] */
        dVar10 = pSVar7->slot_0C();
        switch(dVar10) {
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
        pSVar7 = thunk_FUN_0042b760(DAT_0080874d,uVar4);
        /* ST_CALLSITE[0043C4EC]: CALL dword ptr [EDX + 0xc] */
        dVar10 = pSVar7->slot_0C();
        switch(dVar10) {
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
          pAVar18->field_0x14 = 3;
          return;
        }
        break;
      case CASE_2:
      case CASE_4:
      case CASE_8:
        pSVar7 = thunk_FUN_0042b760(DAT_0080874d,uVar4);
        /* ST_CALLSITE[0043C528]: CALL dword ptr [EDX + 0xc] */
        dVar10 = pSVar7->slot_0C();
        switch(dVar10) {
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
        pSVar7 = thunk_FUN_0042b760(DAT_0080874d,uVar4);
        /* ST_CALLSITE[0043C557]: CALL dword ptr [EDX + 0xc] */
        dVar10 = pSVar7->slot_0C();
        switch(dVar10) {
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
        pSVar7 = thunk_FUN_0042b760(DAT_0080874d,uVar4);
        /* ST_CALLSITE[0043C68E]: CALL dword ptr [EDX + 0xc] */
        dVar10 = pSVar7->slot_0C();
        switch(dVar10) {
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
      uVar17 = (uint)DAT_0080874d;
      iVar6 = g_packedRecords_A62x8[uVar17].field149_0x1b3;
      if (0x19a < iVar6) {
        if (iVar6 == 0x1a4) {
          uVar4 = g_packedRecords_A62x8[uVar17].field154_0x1bb;
          SVar20 = CASE_5;
          cVar19 = -1;
        }
        else {
          if (iVar6 != 0x1b8) {
LAB_0043ca5a:
            iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1d47,0,0,
                                       "%s","STAllPlayersC::GetPanelInfo (4) unknown game type");
            if (iVar5 == 0) {
              return;
            }
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          uVar4 = g_packedRecords_A62x8[uVar17].field154_0x1bb;
          SVar20 = CASE_6;
          cVar19 = -1;
        }
        goto cf_common_exit_0043CA35;
      }
      if (iVar6 != 0x19a) {
        if (iVar6 == 0) {
          return;
        }
        if (iVar6 == 0x5a) {
          uVar4 = g_packedRecords_A62x8[uVar17].field154_0x1bb;
          SVar20 = CASE_4;
          cVar19 = -1;
        }
        else {
          if (iVar6 != 0x172) goto LAB_0043ca5a;
          uVar4 = g_packedRecords_A62x8[uVar17].field154_0x1bb;
          SVar20 = CASE_2;
          cVar19 = -1;
        }
        goto cf_common_exit_0043CA35;
      }
      if (g_packedRecords_A62x8[uVar17].field156_0x1c1 != 1) {
        return;
      }
      pDVar1 = (DArrayTy *)g_packedRecords_A62x8[uVar17].field155_0x1bd;
      uVar15 = 0;
      local_14 = pDVar1->count;
      if ((int)local_14 < 1) {
        return;
      }
      while( true ) {
        DArrayGetElement(pDVar1,uVar15,local_c);
        uVar4 = STPiece<0,2>(local_c);
        if (uVar4 != 0xffff) break;
        uVar15 = uVar15 + 1;
        if ((int)local_14 <= (int)uVar15) {
          return;
        }
      }
      cVar19 = g_packedRecords_A62x8[uVar17].field150_0x1b7;
LAB_0043ca31:
      SVar20 = CASE_1;
cf_common_exit_0043CA35:
      /* ST_CALLSITE[0043CA35]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
      pSVar11 = GetObjPtr(local_10,cVar19,uVar4,SVar20);
      /* ST_CALLSITE[0043CA42]: CALL dword ptr [EDX + 0x34] */
      (*pSVar11->vtable->vfunc_34)((short)param_2);
      return;
    }
    if ((char)param_1 != '\x05') {
      if ((char)param_1 == '\x06') {
        if (*(int *)param_2 != 0) {
          *(undefined4 *)(*(int *)param_2 + 0xc) = 0;
        }
        uVar17 = (uint)DAT_0080874d;
        if (g_packedRecords_A62x8[uVar17].field149_0x1b3 == 0) {
          return;
        }
        if (g_packedRecords_A62x8[uVar17].field149_0x1b3 != 0x19a) {
          local_EAX_3449 =
               ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1d95,0,0,"%s",
                                  "STAllPlayersC::GetPanelInfo (6) unknown game type");
          if (local_EAX_3449 == 0) {
            return;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        if (g_packedRecords_A62x8[uVar17].field156_0x1c1 != 1) {
          return;
        }
        pDVar1 = (DArrayTy *)g_packedRecords_A62x8[uVar17].field155_0x1bd;
        uVar15 = 0;
        local_14 = pDVar1->count;
        if ((int)local_14 < 1) {
          return;
        }
        do {
          DArrayGetElement(pDVar1,uVar15,local_c);
          if (STPiece<0,2>(local_c) != 0xffff) {
            /* ST_CALLSITE[0043CC92]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
            pSVar11 = GetObjPtr(local_10,g_packedRecords_A62x8[uVar17].field150_0x1b7,STPiece<0,2>(local_c),
                                CASE_1);
            /* ST_CALLSITE[0043CC9F]: CALL dword ptr [EDX + 0x38] */
            (*pSVar11->vtable->vfunc_38)((short)param_2);
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
        uVar17 = (uint)DAT_0080874d;
        if (g_packedRecords_A62x8[uVar17].field149_0x1b3 == 0) {
          return;
        }
        if (g_packedRecords_A62x8[uVar17].field149_0x1b3 != 0x19a) {
          local_EAX_3685 =
               ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1db2,0,0,"%s",
                                  "STAllPlayersC::GetPanelInfo (7) unknown game type");
          if (local_EAX_3685 == 0) {
            return;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        if (g_packedRecords_A62x8[uVar17].field156_0x1c1 != 1) {
          return;
        }
        pDVar1 = (DArrayTy *)g_packedRecords_A62x8[uVar17].field155_0x1bd;
        uVar15 = 0;
        local_14 = pDVar1->count;
        if ((int)local_14 < 1) {
          return;
        }
        do {
          DArrayGetElement(pDVar1,uVar15,local_c);
          if (STPiece<0,2>(local_c) != 0xffff) {
            /* ST_CALLSITE[0043CD7E]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
            pSVar11 = GetObjPtr(local_10,g_packedRecords_A62x8[uVar17].field150_0x1b7,STPiece<0,2>(local_c),
                                CASE_1);
            /* ST_CALLSITE[0043CD8B]: CALL dword ptr [EDX + 0x3c] */
            (*pSVar11->vtable->vfunc_3C)((short)param_2);
            return;
          }
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < (int)local_14);
        return;
      }
      if ((char)param_1 == '\b') {
        uVar17 = (uint)DAT_0080874d;
        *(undefined4 *)(*(int *)param_2 + 0xc) = 0;
        *(undefined4 *)(*(int *)&param_2->field_0004 + 0xc) = 0;
        *(undefined4 *)(*(int *)&param_2->field_0x8 + 0xc) = 0;
        *(undefined4 *)(*(int *)&param_2->field_0xc + 0xc) = 0;
        *(undefined4 *)(*(int *)&param_2->field_0x10 + 0xc) = 0;
        if (g_packedRecords_A62x8[uVar17].field96_0x163 == 0) {
          return;
        }
        if (g_packedRecords_A62x8[uVar17].field96_0x163 != 0x3c) {
          local_EAX_3922 =
               ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1dd0,0,0,"%s",
                                  "STAllPlayersC::GetPanelInfo (8) unknown game type");
          if (local_EAX_3922 == 0) {
            return;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        if (g_packedRecords_A62x8[uVar17].field103_0x171 == 0) {
          return;
        }
        local_1c = (DArrayTy *)g_packedRecords_A62x8[uVar17].field102_0x16d;
        uVar15 = 0;
        local_14 = local_1c->count;
        if ((int)local_14 < 1) {
          return;
        }
        do {
          DArrayGetElement(local_1c,uVar15,local_c);
          if (STPiece<0,2>(local_c) != 0xffff) {
            /* ST_CALLSITE[0043CE6E]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
            pSVar11 = GetObjPtr(local_10,g_packedRecords_A62x8[uVar17].field97_0x167,STPiece<0,2>(local_c),
                                CASE_1);
            /* ST_CALLSITE[0043CE78]: CALL dword ptr [EDX + 0x40] */
            (*pSVar11->vtable->vfunc_40)((short)pAVar18);
            return;
          }
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < (int)local_14);
        return;
      }
      if ((char)param_1 == '\t') {
        uVar17 = (uint)DAT_0080874d;
        if (g_packedRecords_A62x8[uVar17].field149_0x1b3 == 0) {
          return;
        }
        if (g_packedRecords_A62x8[uVar17].field149_0x1b3 != 0x19a) {
          local_EAX_4134 =
               ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1dec,0,0,"%s",
                                  "STAllPlayersC::GetPanelInfo (9) unknown game type");
          if (local_EAX_4134 == 0) {
            return;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        if (g_packedRecords_A62x8[uVar17].field156_0x1c1 != 1) {
          return;
        }
        pDVar1 = (DArrayTy *)g_packedRecords_A62x8[uVar17].field155_0x1bd;
        uVar15 = 0;
        local_14 = pDVar1->count;
        if ((int)local_14 < 1) {
          return;
        }
        do {
          DArrayGetElement(pDVar1,uVar15,local_c);
          if (STPiece<0,2>(local_c) != 0xffff) {
            /* ST_CALLSITE[0043CF3F]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
            pSVar11 = GetObjPtr(local_10,g_packedRecords_A62x8[uVar17].field150_0x1b7,STPiece<0,2>(local_c),
                                CASE_1);
            /* ST_CALLSITE[0043CF4C]: CALL dword ptr [EDX + 0x44] */
            (*pSVar11->vtable->vfunc_44)((short)param_2);
            return;
          }
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < (int)local_14);
        return;
      }
      if ((char)param_1 == '\n') {
        uVar17 = (uint)DAT_0080874d;
        local_28 = STRecordByteAddress(g_packedRecords_A62x8, uVar17, 0x1B3);
        if (g_packedRecords_A62x8[uVar17].field149_0x1b3 != 0x19a) {
          return;
        }
        if (g_packedRecords_A62x8[uVar17].field156_0x1c1 != 1) {
          return;
        }
        pDVar1 = (DArrayTy *)g_packedRecords_A62x8[uVar17].field155_0x1bd;
        uVar17 = 0;
        dVar10 = pDVar1->count;
        if ((int)dVar10 < 1) {
          return;
        }
        do {
          DArrayGetElement(pDVar1,uVar17,local_c);
          if (STPiece<0,2>(local_c) != 0xffff) {
            /* ST_CALLSITE[0043CFDE]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
            pSVar11 = GetObjPtr(local_10,((char *)local_28)[4],STPiece<0,2>(local_c),CASE_1);
            /* ST_CALLSITE[0043CFEB]: CALL dword ptr [EDX + 0x48] */
            (*pSVar11->vtable->vfunc_48)((short)param_2);
            return;
          }
          uVar17 = uVar17 + 1;
        } while ((int)uVar17 < (int)dVar10);
        return;
      }
      if ((char)param_1 != '\v') {
        if ((char)param_1 == '\f') {
          if (*(int *)param_2 != 0) {
            *(undefined4 *)(*(int *)param_2 + 0xc) = 0;
          }
          uVar17 = (uint)DAT_0080874d;
          if (g_packedRecords_A62x8[uVar17].field149_0x1b3 == 0) {
            return;
          }
          if (g_packedRecords_A62x8[uVar17].field149_0x1b3 != 0x19a) {
            local_EAX_5245 =
                 ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1ea3,0,0,
                                    "%s","STAllPlayersC::GetPanelInfo (12) unknown game type");
            if (local_EAX_5245 == 0) {
              return;
            }
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          if (g_packedRecords_A62x8[uVar17].field156_0x1c1 != 1) {
            return;
          }
          pDVar1 = (DArrayTy *)g_packedRecords_A62x8[uVar17].field155_0x1bd;
          uVar15 = 0;
          local_14 = pDVar1->count;
          if ((int)local_14 < 1) {
            return;
          }
          do {
            DArrayGetElement(pDVar1,uVar15,local_c);
            if (STPiece<0,2>(local_c) != 0xffff) {
              /* ST_CALLSITE[0043D396]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
              pSVar11 = GetObjPtr(local_10,g_packedRecords_A62x8[uVar17].field150_0x1b7,
                                  STPiece<0,2>(local_c),CASE_1);
              /* ST_CALLSITE[0043D3A3]: CALL dword ptr [EDX + 0x50] */
              (*pSVar11->vtable->vfunc_50)((short)param_2);
              return;
            }
            uVar15 = uVar15 + 1;
          } while ((int)uVar15 < (int)local_14);
          return;
        }
        if ((char)param_1 == '\x0e') {
          local_28 = 4;
          pAVar13 = (AnonShape_0043BEB0_1C00EC12 *)
                    &g_packedRecords_A62x8[DAT_0080874d].field107_0x17d;
          do {
            iVar6 = *(int *)&pAVar13[-1].field_0012;
            param_2 = pAVar13;
            if (iVar6 == 0) {
LAB_0043d41d:
              *(undefined1 *)pAVar18 = 0;
            }
            else if (iVar6 == 0x3c) {
              STPiece<0,1>(uVar4) = pAVar13->field_0004;
              STPiece<1,1>(uVar4) = pAVar13->field_0005;
              if (uVar4 == 1) {
                uVar17 = 0;
                pDVar1 = *(DArrayTy **)pAVar13;
                local_14 = pDVar1->count;
                if (0 < (int)local_14) {
                  do {
                    DArrayGetElement(pDVar1,uVar17,local_c);
                    uVar4 = STPiece<0,2>(local_c);
                    if (uVar4 != 0xffff) {
                      SVar20 = CASE_1;
                      cVar19 = param_2[-1].field_0x16;
                      goto LAB_0043d447;
                    }
                    uVar17 = uVar17 + 1;
                  } while ((int)uVar17 < (int)local_14);
                }
              }
              else {
                if (uVar4 < 2) goto LAB_0043d41d;
                *(undefined1 *)pAVar18 = 2;
                pAVar18->field_0001 = 1;
                pAVar18->field_0006 = g_packedRecords_A62x8[DAT_0080874d].field0_0x0;
              }
            }
            else {
              if (iVar6 != 0x1ae) {
                local_EAX_5472 =
                     ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1ecc,0,0,
                                        "%s","STAllPlayersC::GetPanelInfo (14) unknown game type");
                if (local_EAX_5472 != 0) {
                  STDebugBreak(); /* noreturn in standalone pseudocode */
                }
                goto LAB_0043d41d;
              }
              uVar4 = *(ushort *)((int)&pAVar13[-1].field_0018 + 2);
              SVar20 = CASE_3;
              cVar19 = -1;
LAB_0043d447:
              /* ST_CALLSITE[0043D44A]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
              pSVar11 = GetObjPtr(local_10,cVar19,uVar4,SVar20);
              /* ST_CALLSITE[0043D454]: CALL dword ptr [EDX + 0x58] */
              (*pSVar11->vtable->vfunc_58)((short)pAVar18);
            }
            pAVar13 = (AnonShape_0043BEB0_1C00EC12 *)&param_2->field_0x10;
            pAVar18 = (AnonShape_0043BEB0_1C00EC12 *)&pAVar18->field_000B;
            local_28 = local_28 + -1;
            if (local_28 == 0) {
              return;
            }
          } while( true );
        }
        if ((char)param_1 == '\x0f') {
          param_2 = (AnonShape_0043BEB0_1C00EC12 *)0x4;
          puVar16 = &g_packedRecords_A62x8[DAT_0080874d].field159_0x1cb;
          do {
            iVar6 = *(int *)(puVar16 + -4);
            if (iVar6 < 0x19b) {
              if (iVar6 == 0x19a) {
                if (puVar16[3] == 1) {
                  local_1c = *(DArrayTy **)(puVar16 + 1);
                  uVar17 = 0;
                  local_14 = local_1c->count;
                  if (0 < (int)local_14) {
                    do {
                      DArrayGetElement(local_1c,uVar17,local_c);
                      uVar4 = STPiece<0,2>(local_c);
                      if (uVar4 != 0xffff) {
                        cVar19 = (char)puVar16[-2];
                        SVar20 = CASE_1;
                        goto LAB_0043d5b7;
                      }
                      uVar17 = uVar17 + 1;
                    } while ((int)uVar17 < (int)local_14);
                  }
                  goto LAB_0043d5c4;
                }
              }
              else if (iVar6 != 0) {
                if (iVar6 == 0x5a) {
                  SVar20 = CASE_4;
                }
                else {
                  if (iVar6 != 0x172) goto LAB_0043d581;
                  SVar20 = CASE_2;
                }
                goto LAB_0043d5b1;
              }
LAB_0043d5a6:
              *(undefined1 *)pAVar18 = 0;
            }
            else {
              if (iVar6 == 0x1a4) {
                SVar20 = CASE_5;
              }
              else {
                if (iVar6 != 0x1b8) {
LAB_0043d581:
                  local_EAX_5865 =
                       ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1efe,0,0,
                                          "%s","STAllPlayersC::GetPanelInfo (15) unknown game type");
                  if (local_EAX_5865 != 0) {
                    STDebugBreak(); /* noreturn in standalone pseudocode */
                  }
                  goto LAB_0043d5a6;
                }
                SVar20 = CASE_6;
              }
LAB_0043d5b1:
              uVar4 = *puVar16;
              cVar19 = -1;
LAB_0043d5b7:
              /* ST_CALLSITE[0043D5B7]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
              pSVar11 = GetObjPtr(local_10,cVar19,uVar4,SVar20);
              /* ST_CALLSITE[0043D5C1]: CALL dword ptr [EDX + 0x5c] */
              (*pSVar11->vtable->vfunc_5C)((short)pAVar18);
            }
LAB_0043d5c4:
            puVar16 = puVar16 + 8;
            pAVar18 = (AnonShape_0043BEB0_1C00EC12 *)&pAVar18->field_000B;
            param_2 = (AnonShape_0043BEB0_1C00EC12 *)((int)&param_2[-1].field_0018 + 3);
            if (param_2 == nullptr) {
              return;
            }
          } while( true );
        }
        if ((char)param_1 != '\x10') {
          if ((char)param_1 == '\x11') {
            uVar17 = (uint)DAT_0080874d;
            if (g_packedRecords_A62x8[uVar17].field96_0x163 == 0) {
              return;
            }
            if (g_packedRecords_A62x8[uVar17].field96_0x163 != 0x3c) {
              local_EAX_6259 =
                   ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1f4c,0,0,
                                      "%s","STAllPlayersC::GetPanelInfo (17) invalid game type");
              if (local_EAX_6259 == 0) {
                return;
              }
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            if ((ushort)g_packedRecords_A62x8[uVar17].field103_0x171 < 2) {
              return;
            }
            pDVar1 = (DArrayTy *)g_packedRecords_A62x8[uVar17].field102_0x16d;
            iVar6 = 0;
            uVar17 = 0;
            local_14 = pDVar1->count;
            if (0 < (int)local_14) {
              do {
                DArrayGetElement(pDVar1,uVar17,local_c);
                if (STPiece<0,2>(local_c) != 0xffff) {
                  iVar6 = iVar6 + 1;
                  /* ST_CALLSITE[0043D77D]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                  pSVar11 = GetObjPtr(local_10,DAT_0080874d,STPiece<0,2>(local_c),CASE_1);
                  if (iVar6 == 1) {
                    local_20 = (uint)(ushort)pSVar11->field_0030;
                  }
                  else if (local_20 != (ushort)pSVar11->field_0030) {
                    return;
                  }
                }
                uVar17 = uVar17 + 1;
              } while ((int)uVar17 < (int)local_14);
              if (local_20 == 0xffff) {
                return;
              }
            }
            pSVar7 = thunk_FUN_0042b760(DAT_0080874d,(ushort)local_20);
            /* ST_CALLSITE[0043D7D1]: CALL dword ptr [EDX + 0x1c] */
            dVar10 = pSVar7->slot_1C();
            switch(dVar10) {
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
          if (g_packedRecords_A62x8[DAT_0080874d].field96_0x163 == 0) {
            return;
          }
          if (g_packedRecords_A62x8[DAT_0080874d].field96_0x163 == 0x1ae) {
            /* ST_CALLSITE[0043D8D0]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
            pSVar11 = GetObjPtr(this,-1,g_packedRecords_A62x8[DAT_0080874d].field101_0x16b,CASE_3);
            /* ST_CALLSITE[0043D8DD]: CALL dword ptr [EDX + 0x64] */
            (*pSVar11->vtable->vfunc_64)((short)param_2);
            return;
          }
          local_EAX_6655 =
               ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1f5d,0,0,"%s",
                                  "STAllPlayersC::GetPanelInfo (18) unknown game type");
          if (local_EAX_6655 == 0) {
            return;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        uVar17 = (uint)DAT_0080874d;
        iVar6 = g_packedRecords_A62x8[uVar17].field96_0x163;
        if (iVar6 == 0) {
          return;
        }
        if (iVar6 != 0x3c) {
          if (iVar6 == 0x1ae) {
            return;
          }
          local_EAX_6027 =
               ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1f22,0,0,"%s",
                                  "STAllPlayersC::GetPanelInfo (16) unknown game type");
          if (local_EAX_6027 == 0) {
            return;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        if (g_packedRecords_A62x8[uVar17].field103_0x171 == 0) {
          return;
        }
        pDVar1 = (DArrayTy *)g_packedRecords_A62x8[uVar17].field102_0x16d;
        uVar15 = 0;
        local_14 = pDVar1->count;
        if (0 < (int)local_14) {
          do {
            DArrayGetElement(pDVar1,uVar15,local_c);
            if (STPiece<0,2>(local_c) != 0xffff) {
              /* ST_CALLSITE[0043D699]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
              pSVar11 = GetObjPtr(local_10,g_packedRecords_A62x8[uVar17].field97_0x167,STPiece<0,2>(local_c)
                                  ,CASE_1);
              /* ST_CALLSITE[0043D6A6]: CALL dword ptr [EDX + 0x60] */
              (*pSVar11->vtable->vfunc_60)((short)param_2);
              break;
            }
            uVar15 = uVar15 + 1;
          } while ((int)uVar15 < (int)local_14);
        }
        if ((ushort)g_packedRecords_A62x8[uVar17].field103_0x171 < 2) {
          return;
        }
        *(int *)&param_2[0xf].field_0xc = 0xffffffff;
        param_2[0x11].field_0004 = 0xff;
        param_2[0x11].field_0005 = 0xff;
        param_2[0x11].field_0006 = 0xff;
        param_2[0x11].field_0007 = 0xff;
        param_2[0x12].field_0018 = 0xffffffff;
        return;
      }
      uVar17 = (uint)DAT_0080874d;
      if (g_packedRecords_A62x8[uVar17].field96_0x163 == 0) {
        return;
      }
      if (g_packedRecords_A62x8[uVar17].field96_0x163 != 0x3c) {
        local_EAX_4501 =
             ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1e85,0,0,"%s",
                                "STAllPlayersC::GetPanelInfo (11) invalid game type");
        if (local_EAX_4501 == 0) {
          return;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      if (g_packedRecords_A62x8[uVar17].field103_0x171 == 1) {
        pDVar1 = (DArrayTy *)g_packedRecords_A62x8[uVar17].field102_0x16d;
        uVar15 = 0;
        local_14 = pDVar1->count;
        if ((int)local_14 < 1) {
          return;
        }
        do {
          DArrayGetElement(pDVar1,uVar15,local_c);
          if (STPiece<0,2>(local_c) != 0xffff) {
            /* ST_CALLSITE[0043D0AD]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
            pSVar11 = GetObjPtr(local_10,g_packedRecords_A62x8[uVar17].field97_0x167,STPiece<0,2>(local_c),
                                CASE_1);
            /* ST_CALLSITE[0043D0BA]: CALL dword ptr [EDX + 0x4c] */
            (*pSVar11->vtable->vfunc_4C)((short)param_2);
            return;
          }
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < (int)local_14);
        return;
      }
      if ((ushort)g_packedRecords_A62x8[uVar17].field103_0x171 < 2) {
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
      pDVar1 = (DArrayTy *)g_packedRecords_A62x8[uVar17].field102_0x16d;
      uVar17 = 0;
      local_14 = pDVar1->count;
      param_2->field_0011 = 1;
      param_2->field_0x10 = 1;
      param_2->field_0012 = 3;
      local_1c = pDVar1;
      if (0 < (int)local_14) {
        do {
          DArrayGetElement(pDVar1,uVar17,local_c);
          if (STPiece<0,2>(local_c) != 0xffff) {
            /* ST_CALLSITE[0043D145]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
            pSVar11 = GetObjPtr(local_10,DAT_0080874d,STPiece<0,2>(local_c),CASE_1);
            if (pSVar11->field_07E6 == 0) {
              pAVar18->field_0011 = 3;
            }
            else {
              pAVar18->field_0x10 = 3;
            }
            if ((pAVar18->field_0012 == '\x03') && (pSVar11->field_07EA == 0)) {
              pAVar18->field_0012 = 1;
            }
          }
          uVar17 = uVar17 + 1;
        } while ((int)uVar17 < (int)local_14);
      }
      dVar10 = 0;
      if (0 < (int)local_14) {
        do {
          DArrayGetElement(pDVar1,dVar10,local_c);
          if (STPiece<0,2>(local_c) != 0xffff) {
            /* ST_CALLSITE[0043D1A3]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
            pSVar11 = GetObjPtr(local_10,DAT_0080874d,STPiece<0,2>(local_c),CASE_1);
            /* ST_CALLSITE[0043D1AC]: CALL dword ptr [EDX + 0x2c] */
            uVar12 = pSVar11->vfunc_2C();
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
          dVar10 = dVar10 + 1;
        } while ((int)dVar10 < (int)local_14);
      }
switchD_0043d1bf_caseD_a:
      if (dVar10 == local_14) {
        pAVar18->field_000A = 0;
        pAVar18->field_000B = 0;
        pAVar18->field_0xc = 0;
        pAVar18->field_000D = 0;
      }
      param_2 = (AnonShape_0043BEB0_1C00EC12 *)(uint)(dVar10 == local_14);
      iVar6 = 0;
      uVar17 = 0;
      if (0 < (int)local_14) {
        do {
          DArrayGetElement(local_1c,uVar17,local_c);
          if (STPiece<0,2>(local_c) != 0xffff) {
            iVar6 = iVar6 + 1;
            /* ST_CALLSITE[0043D222]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
            pSVar11 = GetObjPtr(local_10,DAT_0080874d,STPiece<0,2>(local_c),CASE_1);
            if (iVar6 == 1) {
              local_20 = (uint)(ushort)pSVar11->field_0030;
            }
            else if (local_20 != (ushort)pSVar11->field_0030) {
              return;
            }
          }
          uVar17 = uVar17 + 1;
        } while ((int)uVar17 < (int)local_14);
      }
      if (param_2 == (AnonShape_0043BEB0_1C00EC12 *)0x1) {
        return;
      }
      if (local_20 == 0xffff) {
        return;
      }
      pSVar7 = thunk_FUN_0042b760(DAT_0080874d,(ushort)local_20);
      /* ST_CALLSITE[0043D27D]: CALL dword ptr [EDX + 0xc] */
      dVar10 = pSVar7->slot_0C();
      switch(dVar10) {
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
    uVar17 = (uint)DAT_0080874d;
    iVar6 = g_packedRecords_A62x8[uVar17].field149_0x1b3;
    if (0x19a < iVar6) {
      if (iVar6 == 0x1a4) {
        uVar4 = g_packedRecords_A62x8[uVar17].field154_0x1bb;
        SVar20 = CASE_5;
        cVar19 = -1;
      }
      else {
        if (iVar6 != 0x1b8) {
LAB_0043cb81:
          local_EAX_3303 =
               ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1d78,0,0,"%s",
                                  "STAllPlayersC::GetPanelInfo (5) unknown game type");
          if (local_EAX_3303 == 0) {
            return;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        uVar4 = g_packedRecords_A62x8[uVar17].field154_0x1bb;
        SVar20 = CASE_6;
        cVar19 = -1;
      }
      goto cf_common_exit_0043CB5C;
    }
    if (iVar6 != 0x19a) {
      if (iVar6 == 0) {
        return;
      }
      if (iVar6 == 0x5a) {
        uVar4 = g_packedRecords_A62x8[uVar17].field154_0x1bb;
        SVar20 = CASE_4;
        cVar19 = -1;
      }
      else {
        if (iVar6 != 0x172) goto LAB_0043cb81;
        uVar4 = g_packedRecords_A62x8[uVar17].field154_0x1bb;
        SVar20 = CASE_2;
        cVar19 = -1;
      }
      goto cf_common_exit_0043CB5C;
    }
    if (g_packedRecords_A62x8[uVar17].field156_0x1c1 != 1) {
      return;
    }
    pDVar1 = (DArrayTy *)g_packedRecords_A62x8[uVar17].field155_0x1bd;
    uVar15 = 0;
    local_14 = pDVar1->count;
    if ((int)local_14 < 1) {
      return;
    }
    while( true ) {
      DArrayGetElement(pDVar1,uVar15,local_c);
      uVar4 = STPiece<0,2>(local_c);
      if (uVar4 != 0xffff) break;
      uVar15 = uVar15 + 1;
      if ((int)local_14 <= (int)uVar15) {
        return;
      }
    }
    cVar19 = g_packedRecords_A62x8[uVar17].field150_0x1b7;
  }
  SVar20 = CASE_1;
cf_common_exit_0043CB5C:
  /* ST_CALLSITE[0043CB5C]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
  pSVar11 = GetObjPtr(local_10,cVar19,uVar4,SVar20);
  /* ST_CALLSITE[0043CB69]: CALL dword ptr [EDX + 0x30] */
  (*pSVar11->vtable->vfunc_30)((short)param_2);
  return;
cf_common_exit_0043C94C:
  *(undefined1 *)param_2 = 3;
  return;
}

