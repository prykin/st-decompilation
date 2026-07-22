#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::DistributeTargets */

undefined4 __thiscall STGroupBoatC::DistributeTargets(STGroupBoatC *this,uint *param_1)

{
  ushort *puVar1;
  code *pcVar2;
  STGroupBoatC *this_00;
  int iVar3;
  STBoatC *pSVar4;
  dword dVar5;
  STGameObjC *objPtr;
  undefined4 uVar6;
  DArrayTy *pDVar7;
  int iVar8;
  ushort *puVar9;
  ushort uVar10;
  uint uVar11;
  uint uVar12;
  short sVar13;
  STBoatC_CmdToObj_param_1Enum SVar14;
  DArrayTy *pDVar15;
  uint *puVar16;
  InternalExceptionFrame local_a4;
  STGroupBoatC *local_60;
  uint local_5c;
  int local_58;
  uint local_54;
  int local_50;
  int local_4c;
  uint local_48;
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
  uint local_20;
  undefined1 local_1c [2];
  short sStack_1a;
  short local_16;
  dword local_14;
  DArrayTy *local_10;
  uint local_c;
  undefined1 local_5;

  uVar11 = 0;
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
    iVar8 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x5eb,0,iVar3,"%s",
                               "STGroupBoatC::DistributeTargets");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\wlad\\to_grpb.cpp",0x5ec);
    return 0xffffffff;
  }
  if (local_60->field_020E == (DArrayTy *)0x0) {
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",0x55a
              );
  }
  Library::DKW::TBL::FUN_006afe40((int *)&local_10,param_1);
  local_20 = g_playSystem_00802A38->field_00E4;
  local_14 = local_10->count;
  if (0 < (int)local_14) {
    do {
      dVar5 = local_14;
      DArrayGetElement(local_10,uVar11,&local_c);
      if ((short)local_c == -1) {
        FUN_006b0c70(local_10,uVar11);
        uVar11 = uVar11 - 1;
        local_14 = dVar5 - 1;
      }
      else {
        pSVar4 = (STBoatC *)
                 STAllPlayersC::GetObjPtr(g_allPlayers_007FA174,this_00->field_0024,local_c,CASE_1);
        if (pSVar4 == (STBoatC *)0x0) {
          RaiseInternalException
                    (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp"
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
          FUN_006b0c70(local_10,uVar11);
          uVar11 = uVar11 - 1;
          local_14 = local_14 - 1;
          STBoatC::CmdToObj(pSVar4,CASE_3,&local_20);
          break;
        default:
          if ((this_00->field_020A == 1) &&
             (dVar5 = (*pSVar4->vtable->slot_2C)(pSVar4), dVar5 != 0x17)) {
            FUN_006b0c70(local_10,uVar11);
            uVar11 = uVar11 - 1;
            local_14 = local_14 - 1;
            iVar3 = thunk_FUN_00490d90((STGameObjC *)pSVar4);
            if (iVar3 == 0) {
              STBoatC::CmdToObj(pSVar4,CASE_3,&local_20);
            }
          }
        }
      }
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < (int)local_14);
  }
  dVar5 = local_14;
  uVar11 = 0;
  if (local_14 != 0) {
    pDVar7 = this_00->field_020E;
    this_00->field_0212 = 0;
    uVar12 = 0;
    if (pDVar7->count != 0) {
      do {
        DArrayGetElement(pDVar7,uVar11,local_1c);
        if (sStack_1a != -1) {
          this_00->field_0212 = this_00->field_0212 + 1;
        }
        pDVar7 = this_00->field_020E;
        uVar12 = uVar12 + 1;
        uVar11 = uVar12 & 0xffff;
      } while (uVar11 < pDVar7->count);
    }
    if (this_00->field_0212 == 0) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                 0x58f);
    }
    uVar11 = 0;
    local_24 = 0;
    if (0 < (int)dVar5) {
      do {
        DArrayGetElement(local_10,uVar11,&local_c);
        if ((short)local_c != -1) {
          pSVar4 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,this_00->field_0024,local_c,CASE_1);
          dVar5 = (*pSVar4->vtable->slot_2C)(pSVar4);
          if (dVar5 == 9) {
            GetDepotForAttack(this_00,local_c,&local_5,&local_16,&local_2a,&local_28,&local_26);
            if (local_16 == -1) {
              puVar16 = &local_20;
              SVar14 = CASE_3;
              local_20 = g_playSystem_00802A38->field_00E4;
            }
            else {
              local_44 = this_00->field_020A;
              local_3b = local_16;
              puVar16 = &local_48;
              local_40 = local_5;
              local_3f = 1;
              SVar14 = CASE_2;
              local_48 = g_playSystem_00802A38->field_00E4;
            }
          }
          else {
            local_5c = this_00->field_0216 + 1;
            local_50 = 0;
            local_4c = 2;
            do {
              uVar11 = this_00->field_0031 * 0x41c64e6d + 0x3039;
              this_00->field_0031 = uVar11;
              local_54 = (uVar11 >> 0x10) % local_5c;
              iVar3 = 0;
              if (0 < this_00->field_021A) {
                puVar1 = this_00->field_021E;
                puVar9 = puVar1;
                uVar11 = local_54;
                do {
                  if ((*(int *)puVar9 != -1) &&
                     (uVar10 = (short)uVar11 - puVar9[2], uVar11 = (uint)uVar10, (short)uVar10 < 1))
                  {
                    if (local_50 < *(int *)(puVar1 + iVar3 * 4 + 2)) {
                      local_50 = *(int *)(puVar1 + (short)iVar3 * 4 + 2);
                      local_58 = iVar3;
                    }
                    break;
                  }
                  iVar3 = iVar3 + 1;
                  puVar9 = puVar9 + 4;
                } while (iVar3 < this_00->field_021A);
              }
              local_4c = local_4c + -1;
            } while (local_4c != 0);
            sVar13 = (short)local_58;
            DArrayGetElement(this_00->field_020E,(int)sVar13,local_1c);
            local_48 = g_playSystem_00802A38->field_00E4;
            local_40 = (undefined1)_local_1c;
            local_44 = this_00->field_020A;
            local_3b = sStack_1a;
            local_3f = (int)(char)((uint)_local_1c >> 8);
            local_39 = sVar13;
            pSVar4 = (STBoatC *)
                     STAllPlayersC::GetObjPtr
                               (g_allPlayers_007FA174,this_00->field_0024,local_c,CASE_1);
            puVar16 = &local_48;
            SVar14 = CASE_2;
          }
          STBoatC::CmdToObj(pSVar4,SVar14,puVar16);
        }
        local_24 = local_24 + 1;
        uVar11 = local_24 & 0xffff;
      } while ((int)uVar11 < (int)local_14);
    }
    if (this_00->field_020A == 1) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      local_14 = *(dword *)(this_00->field_0029 + 0xc);
      uVar11 = 0;
      local_24 = 0;
      pDVar7 = local_34;
      if (0 < (int)local_14) {
        do {
          DArrayGetElement((DArrayTy *)this_00->field_0029,uVar11,&local_c);
          if ((short)local_c != -1) {
            objPtr = STAllPlayersC::GetObjPtr
                               (g_allPlayers_007FA174,this_00->field_0024,local_c,CASE_1);
            if (objPtr == (STGameObjC *)0x0) {
              RaiseInternalException
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         "E:\\__titans\\wlad\\to_grpb.cpp",0x5c4);
            }
            uVar6 = (*objPtr->vtable->vfunc_2C)();
            switch(uVar6) {
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
              iVar3 = (*objPtr->vtable->vfunc_2C)();
              if (iVar3 == 0x17) {
                pDVar15 = pDVar7;
                if (pDVar7 == (DArrayTy *)0x0) {
                  pDVar7 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,1,2,1);
                  pDVar15 = pDVar7;
                  local_34 = pDVar7;
                }
              }
              else {
                iVar3 = thunk_FUN_00490d90(objPtr);
                if (iVar3 == 0) break;
                pDVar15 = local_30;
                if (local_30 == (DArrayTy *)0x0) {
                  local_30 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,1,2,1);
                  pDVar15 = local_30;
                }
              }
              Library::DKW::TBL::FUN_006ae1c0(&pDVar15->flags,&local_c);
            }
          }
          local_24 = local_24 + 1;
          uVar11 = local_24 & 0xffff;
        } while ((int)uVar11 < (int)local_14);
      }
      pDVar15 = local_30;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      STAllPlayersC::RegisterPGPair
                (g_allPlayers_007FA174,CONCAT31((int3)(local_14 >> 8),this_00->field_0024),
                 &pDVar7->flags,&local_30->flags);
      if (pDVar7 != (DArrayTy *)0x0) {
        DArrayDestroy(pDVar7);
      }
      if (pDVar15 != (DArrayTy *)0x0) {
        DArrayDestroy(pDVar15);
      }
    }
  }
  if (local_10 != (DArrayTy *)0x0) {
    DArrayDestroy(local_10);
  }
  g_currentExceptionFrame = local_a4.previous;
  return 0;
}

