#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::DistributeTargets */

undefined4 __thiscall STGroupBoatC::DistributeTargets(STGroupBoatC *this,uint *param_1)

{
  ushort *puVar1;
  STGroupBoatC *this_00;
  int iVar3;
  STBoatC *pSVar3;
  dword dVar4;
  int iVar6;
  STGameObjC *this_01;
  undefined4 uVar7;
  DArrayTy *pDVar8;
  int iVar5;
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
  local_10 = nullptr;
  local_34 = nullptr;
  local_30 = nullptr;
  local_a4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_a4;
  local_60 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_a4.jumpBuffer,0);
  this_00 = local_60;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_a4.previous;
    if (iVar3 == -0x5001fff7) {
      if (local_10 != nullptr) {
        DArrayDestroy(local_10);
      }
      return 0;
    }
    iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x5eb,0,iVar3,"%s",
                               "STGroupBoatC::DistributeTargets");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\wlad\\to_grpb.cpp",0x5ec);
    return 0xffffffff;
  }
  if (local_60->field_020E == nullptr) {
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",0x55a
              );
  }
  Library::DKW::TBL::FUN_006afe40((int *)&local_10,param_1);
  local_20 = g_playSystem_00802A38->field_00E4;
  local_14 = local_10->count;
  if (0 < (int)local_14) {
    do {
      dVar4 = local_14;
      DArrayGetElement(local_10,uVar11,&local_c);
      if ((ushort)local_c == 0xffff) {
        DArrayRemoveAt(local_10,uVar11);
        uVar11 = uVar11 - 1;
        local_14 = dVar4 - 1;
      }
      else {
        pSVar3 = (STBoatC *)
                 /* ST_CALLSITE[00499EA3]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                 STAllPlayersC::GetObjPtr
                           (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_c,CASE_1);
        if (pSVar3 == nullptr) {
          RaiseInternalException
                    (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp"
                     ,0x564);
        }
        /* ST_CALLSITE[00499ECC]: CALL dword ptr [EDX + 0x2c] */
        dVar4 = pSVar3->slot_2C();
        switch(dVar4) {
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
          DArrayRemoveAt(local_10,uVar11);
          uVar11 = uVar11 - 1;
          local_14 = local_14 - 1;
          /* ST_CALLSITE[00499F00]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
          STBoatC::CmdToObj(pSVar3,CASE_3,&local_20);
          break;
        default:
          if ((this_00->field_020A == 1) &&
             /* ST_CALLSITE[00499F14]: CALL dword ptr [EDX + 0x2c] */
             (dVar4 = pSVar3->slot_2C(), dVar4 != 0x17)) {
            DArrayRemoveAt(local_10,uVar11);
            uVar11 = uVar11 - 1;
            local_14 = local_14 - 1;
            iVar6 = thunk_FUN_00490d90((STGameObjC *)pSVar3);
            if (iVar6 == 0) {
              /* ST_CALLSITE[00499F41]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
              STBoatC::CmdToObj(pSVar3,CASE_3,&local_20);
            }
          }
        }
      }
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < (int)local_14);
  }
  dVar4 = local_14;
  uVar11 = 0;
  if (local_14 != 0) {
    pDVar8 = this_00->field_020E;
    this_00->field_0212 = 0;
    uVar12 = 0;
    if (pDVar8->count != 0) {
      do {
        DArrayGetElement(pDVar8,uVar11,local_1c);
        if (sStack_1a != -1) {
          this_00->field_0212 = this_00->field_0212 + 1;
        }
        pDVar8 = this_00->field_020E;
        uVar12 = uVar12 + 1;
        uVar11 = uVar12 & 0xffff;
      } while (uVar11 < pDVar8->count);
    }
    if (this_00->field_0212 == 0) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                 0x58f);
    }
    uVar11 = 0;
    local_24 = 0;
    if (0 < (int)dVar4) {
      do {
        DArrayGetElement(local_10,uVar11,&local_c);
        if ((ushort)local_c != 0xffff) {
          pSVar3 = (STBoatC *)
                   /* ST_CALLSITE[0049A005]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                   STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_c,CASE_1);
          /* ST_CALLSITE[0049A010]: CALL dword ptr [EDX + 0x2c] */
          dVar4 = pSVar3->slot_2C();
          if (dVar4 == 9) {
            /* ST_CALLSITE[0049A032]: CALL 0x004019ba; direct=004019BA STGroupBoatC::GetDepotForAttack */
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
              iVar6 = 0;
              if (0 < this_00->field_021A) {
                puVar1 = this_00->field_021E;
                puVar9 = puVar1;
                uVar11 = local_54;
                do {
                  if ((*(int *)puVar9 != -1) &&
                     (uVar10 = (short)uVar11 - puVar9[2], uVar11 = (uint)uVar10, (short)uVar10 < 1))
                  {
                    if (local_50 < *(int *)(puVar1 + iVar6 * 4 + 2)) {
                      local_50 = *(int *)(puVar1 + (short)iVar6 * 4 + 2);
                      local_58 = iVar6;
                    }
                    break;
                  }
                  iVar6 = iVar6 + 1;
                  puVar9 = puVar9 + 4;
                } while (iVar6 < this_00->field_021A);
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
            pSVar3 = (STBoatC *)
                     /* ST_CALLSITE[0049A15D]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                     STAllPlayersC::GetObjPtr
                               (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_c,CASE_1);
            puVar16 = &local_48;
            SVar14 = CASE_2;
          }
          /* ST_CALLSITE[0049A16A]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
          STBoatC::CmdToObj(pSVar3,SVar14,puVar16);
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
      pDVar8 = local_34;
      if (0 < (int)local_14) {
        do {
          DArrayGetElement((DArrayTy *)this_00->field_0029,uVar11,&local_c);
          if ((ushort)local_c != 0xffff) {
            /* ST_CALLSITE[0049A1D3]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
            this_01 = STAllPlayersC::GetObjPtr
                                (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_c,CASE_1);
            if (this_01 == nullptr) {
              RaiseInternalException
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         "E:\\__titans\\wlad\\to_grpb.cpp",0x5c4);
            }
            /* ST_CALLSITE[0049A1FD]: CALL dword ptr [EAX + 0x2c] */
            uVar7 = this_01->vfunc_2C();
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
              /* ST_CALLSITE[0049A21B]: CALL dword ptr [EDX + 0x2c] */
              iVar6 = this_01->vfunc_2C();
              if (iVar6 == 0x17) {
                pDVar15 = pDVar8;
                if (pDVar8 == nullptr) {
                  pDVar8 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
                  pDVar15 = pDVar8;
                  local_34 = pDVar8;
                }
              }
              else {
                iVar6 = thunk_FUN_00490d90(this_01);
                if (iVar6 == 0) break;
                pDVar15 = local_30;
                if (local_30 == nullptr) {
                  local_30 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
                  pDVar15 = local_30;
                }
              }
              Library::DKW::TBL::DArrayAppend(pDVar15,&local_c);
            }
          }
          local_24 = local_24 + 1;
          uVar11 = local_24 & 0xffff;
        } while ((int)uVar11 < (int)local_14);
      }
      pDVar15 = local_30;
      /* ST_CALLSITE[0049A295]: CALL 0x00403d9b; direct=00403D9B STAllPlayersC::RegisterPGPair */
      STAllPlayersC::RegisterPGPair
                (g_allPlayers_007FA174,STReplaceLowByte((uint32_t)(local_14), (uint8_t)(this_00->field_0024)),
                 &pDVar8->flags,&local_30->flags);
      if (pDVar8 != nullptr) {
        DArrayDestroy(pDVar8);
      }
      if (pDVar15 != nullptr) {
        DArrayDestroy(pDVar15);
      }
    }
  }
  if (local_10 != nullptr) {
    DArrayDestroy(local_10);
  }
  g_currentExceptionFrame = local_a4.previous;
  return 0;
}

