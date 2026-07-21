#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::DistributeTargets */

undefined4 __thiscall STGroupBoatC::DistributeTargets(STGroupBoatC *this,uint *param_1)

{
  int *piVar1;
  code *pcVar2;
  STGroupBoatC *this_00;
  int iVar3;
  STBoatC *pSVar4;
  dword dVar5;
  STGameObjC *pSVar6;
  undefined4 uVar7;
  DArrayTy *pDVar8;
  int iVar9;
  int *piVar10;
  ushort uVar11;
  uint uVar12;
  uint uVar13;
  short sVar14;
  STBoatC_CmdToObj_param_1Enum SVar15;
  DArrayTy *pDVar16;
  undefined4 *puVar17;
  InternalExceptionFrame local_a4;
  STGroupBoatC *local_60;
  uint local_5c;
  int local_58;
  uint local_54;
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40;
  int local_3f;
  short local_3b;
  short local_39;
  DArrayTy *local_34;
  DArrayTy *local_30;
  short local_2a;
  short local_28;
  short local_26;
  uint local_24;
  undefined4 local_20;
  undefined1 local_1c [2];
  short sStack_1a;
  short local_16;
  dword local_14;
  DArrayTy *local_10;
  uint local_c;
  undefined1 local_5;

  uVar12 = 0;
  local_10 = (DArrayTy *)0x0;
  local_34 = (DArrayTy *)0x0;
  local_30 = (DArrayTy *)0x0;
  local_a4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_a4;
  local_60 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_a4.jumpBuffer,0);
  this_00 = local_60;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_a4.previous;
    if (iVar3 == -0x5001fff7) {
      if (local_10 != (DArrayTy *)0x0) {
        DArrayDestroy(local_10);
      }
      return 0;
    }
    iVar9 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x5eb,0,iVar3,&DAT_007a4ccc,
                               s_STGroupBoatC__DistributeTargets_007abf14);
    if (iVar9 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x5ec);
    return 0xffffffff;
  }
  if (local_60->field_020E == 0) {
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x55a
              );
  }
  Library::DKW::TBL::FUN_006afe40((int *)&local_10,param_1);
  local_20 = PTR_00802a38->field_00E4;
  local_14 = local_10->count;
  if (0 < (int)local_14) {
    do {
      dVar5 = local_14;
      DArrayGetElement(local_10,uVar12,&local_c);
      if ((short)local_c == -1) {
        FUN_006b0c70(local_10,uVar12);
        uVar12 = uVar12 - 1;
        local_14 = dVar5 - 1;
      }
      else {
        pSVar4 = (STBoatC *)
                 STAllPlayersC::GetObjPtr
                           (g_sTAllPlayers_007FA174,this_00->field_0024,local_c,CASE_1);
        if (pSVar4 == (STBoatC *)0x0) {
          RaiseInternalException
                    (-0x5001fffc,g_overwriteContext_007ED77C,s_E____titans_wlad_to_grpb_cpp_007abe3c
                     ,0x564);
        }
        dVar5 = (*pSVar4->vtable->slot_2C)(pSVar4);
        switch(dVar5) {
        case 7:
        case 8:
        case 0xc:
        case 0x13:
        case 0x14:
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1b:
        case 0x24:
        case 0x25:
          FUN_006b0c70(local_10,uVar12);
          uVar12 = uVar12 - 1;
          local_14 = local_14 - 1;
          STBoatC::CmdToObj(pSVar4,CASE_3,&local_20);
          break;
        default:
          if ((this_00->field_020A == 1) &&
             (dVar5 = (*pSVar4->vtable->slot_2C)(pSVar4), dVar5 != 0x17)) {
            FUN_006b0c70(local_10,uVar12);
            uVar12 = uVar12 - 1;
            local_14 = local_14 - 1;
            iVar3 = thunk_FUN_00490d90((int)pSVar4);
            if (iVar3 == 0) {
              STBoatC::CmdToObj(pSVar4,CASE_3,&local_20);
            }
          }
        }
      }
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < (int)local_14);
  }
  dVar5 = local_14;
  uVar12 = 0;
  if (local_14 != 0) {
    pDVar8 = (DArrayTy *)this_00->field_020E;
    this_00->field_0212 = 0;
    uVar13 = 0;
    if (pDVar8->count != 0) {
      do {
        DArrayGetElement(pDVar8,uVar12,local_1c);
        if (sStack_1a != -1) {
          this_00->field_0212 = this_00->field_0212 + 1;
        }
        pDVar8 = (DArrayTy *)this_00->field_020E;
        uVar13 = uVar13 + 1;
        uVar12 = uVar13 & 0xffff;
      } while (uVar12 < pDVar8->count);
    }
    if (this_00->field_0212 == 0) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_grpb_cpp_007abe3c,
                 0x58f);
    }
    uVar12 = 0;
    local_24 = 0;
    if (0 < (int)dVar5) {
      do {
        DArrayGetElement(local_10,uVar12,&local_c);
        if ((short)local_c != -1) {
          pSVar4 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (g_sTAllPlayers_007FA174,this_00->field_0024,local_c,CASE_1);
          dVar5 = (*pSVar4->vtable->slot_2C)(pSVar4);
          if (dVar5 == 9) {
            GetDepotForAttack(this_00,local_c,&local_5,&local_16,&local_2a,&local_28,&local_26);
            if (local_16 == -1) {
              puVar17 = &local_20;
              SVar15 = CASE_3;
              local_20 = PTR_00802a38->field_00E4;
            }
            else {
              local_44 = this_00->field_020A;
              local_3b = local_16;
              puVar17 = &local_48;
              local_40 = local_5;
              local_3f = 1;
              SVar15 = CASE_2;
              local_48 = PTR_00802a38->field_00E4;
            }
          }
          else {
            local_5c = this_00->field_0216 + 1;
            local_50 = 0;
            local_4c = 2;
            do {
              uVar12 = this_00->field_0031 * 0x41c64e6d + 0x3039;
              this_00->field_0031 = uVar12;
              local_54 = (uVar12 >> 0x10) % local_5c;
              iVar3 = 0;
              if (0 < (int)this_00->field_021A) {
                piVar1 = (int *)this_00->field_021E;
                piVar10 = piVar1;
                uVar12 = local_54;
                do {
                  if ((*piVar10 != -1) &&
                     (uVar11 = (short)uVar12 - (short)piVar10[1], uVar12 = (uint)uVar11,
                     (short)uVar11 < 1)) {
                    if (local_50 < piVar1[iVar3 * 2 + 1]) {
                      local_50 = piVar1[(short)iVar3 * 2 + 1];
                      local_58 = iVar3;
                    }
                    break;
                  }
                  iVar3 = iVar3 + 1;
                  piVar10 = piVar10 + 2;
                } while (iVar3 < (int)this_00->field_021A);
              }
              local_4c = local_4c + -1;
            } while (local_4c != 0);
            sVar14 = (short)local_58;
            DArrayGetElement((DArrayTy *)this_00->field_020E,(int)sVar14,local_1c);
            local_48 = PTR_00802a38->field_00E4;
            local_40 = (undefined1)_local_1c;
            local_44 = this_00->field_020A;
            local_3b = sStack_1a;
            local_3f = (int)(char)((uint)_local_1c >> 8);
            local_39 = sVar14;
            pSVar4 = (STBoatC *)
                     STAllPlayersC::GetObjPtr
                               (g_sTAllPlayers_007FA174,this_00->field_0024,local_c,CASE_1);
            puVar17 = &local_48;
            SVar15 = CASE_2;
          }
          STBoatC::CmdToObj(pSVar4,SVar15,puVar17);
        }
        local_24 = local_24 + 1;
        uVar12 = local_24 & 0xffff;
      } while ((int)uVar12 < (int)local_14);
    }
    if (this_00->field_020A == 1) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      local_14 = *(dword *)(this_00->field_0029 + 0xc);
      uVar12 = 0;
      local_24 = 0;
      pDVar8 = local_34;
      if (0 < (int)local_14) {
        do {
          DArrayGetElement((DArrayTy *)this_00->field_0029,uVar12,&local_c);
          if ((short)local_c != -1) {
            pSVar6 = STAllPlayersC::GetObjPtr
                               (g_sTAllPlayers_007FA174,this_00->field_0024,local_c,CASE_1);
            if (pSVar6 == (STGameObjC *)0x0) {
              RaiseInternalException
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         s_E____titans_wlad_to_grpb_cpp_007abe3c,0x5c4);
            }
            uVar7 = (*pSVar6->vtable->vfunc_2C)();
            switch(uVar7) {
            case 7:
            case 8:
            case 0xc:
            case 0x13:
            case 0x14:
            case 0x18:
            case 0x19:
            case 0x1a:
            case 0x1b:
            case 0x24:
            case 0x25:
              break;
            default:
              iVar3 = (*pSVar6->vtable->vfunc_2C)();
              if (iVar3 == 0x17) {
                pDVar16 = pDVar8;
                if (pDVar8 == (DArrayTy *)0x0) {
                  pDVar8 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
                  pDVar16 = pDVar8;
                  local_34 = pDVar8;
                }
              }
              else {
                iVar3 = thunk_FUN_00490d90((int)pSVar6);
                if (iVar3 == 0) break;
                pDVar16 = local_30;
                if (local_30 == (DArrayTy *)0x0) {
                  local_30 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
                  pDVar16 = local_30;
                }
              }
              Library::DKW::TBL::FUN_006ae1c0(&pDVar16->flags,&local_c);
            }
          }
          local_24 = local_24 + 1;
          uVar12 = local_24 & 0xffff;
        } while ((int)uVar12 < (int)local_14);
      }
      pDVar16 = local_30;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      STAllPlayersC::RegisterPGPair
                (g_sTAllPlayers_007FA174,CONCAT31((int3)(local_14 >> 8),this_00->field_0024),
                 &pDVar8->flags,&local_30->flags);
      if (pDVar8 != (DArrayTy *)0x0) {
        DArrayDestroy(pDVar8);
      }
      if (pDVar16 != (DArrayTy *)0x0) {
        DArrayDestroy(pDVar16);
      }
    }
  }
  if (local_10 != (DArrayTy *)0x0) {
    DArrayDestroy(local_10);
  }
  g_currentExceptionFrame = local_a4.previous;
  return 0;
}

