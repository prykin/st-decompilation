#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::DistributeMD */

void __thiscall
STGroupBoatC::DistributeMD
          (STGroupBoatC *this,int param_1,DArrayTy *param_2,DArrayTy *param_3,DArrayTy *param_4)

{
  STGroupBoatC *pSVar2;
  int local_EAX_63;
  STBoatC *pSVar3;
  int iVar3;
  dword dVar4;
  int iVar6;
  STGameObjC *pSVar7;
  DArrayTy *pDVar8;
  int local_EAX_1021;
  int local_EAX_1098;
  int iVar5;
  uint uVar9;
  uint uVar10;
  InternalExceptionFrame local_b0;
  STGroupBoatC *local_6c;
  dword local_68;
  dword local_64;
  uint local_60;
  short local_5c;
  short local_5a;
  short local_58;
  undefined4 local_56;
  short local_52;
  short local_50;
  short local_4e;
  undefined4 local_4c;
  undefined4 local_44;
  DArrayTy *local_40;
  ushort local_3c;
  ushort uStack_3a;
  ushort uStack_38;
  undefined2 local_36;
  undefined2 uStack_34;
  undefined4 local_32;
  DArrayTy *local_2c;
  DArrayTy *local_28;
  DArrayTy *local_24;
  uint local_20;
  DArrayTy *local_1c;
  uint local_18;
  short local_14 [2];
  short local_10 [2];
  short local_c [2];
  undefined1 local_8 [4];

  uVar10 = 0;
  local_40 = nullptr;
  local_2c = nullptr;
  local_28 = nullptr;
  local_1c = nullptr;
  local_24 = nullptr;
  local_b0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b0;
  local_6c = this;
  local_EAX_63 = Library::MSVCRT::__setjmp3(local_b0.jumpBuffer,0);
  if (local_EAX_63 != 0) {
    g_currentExceptionFrame = local_b0.previous;
    if (local_EAX_63 == -0x5001fff7) {
      if (local_2c != nullptr) {
        DArrayDestroy(local_2c);
      }
      if (local_28 != nullptr) {
        DArrayDestroy(local_28);
      }
      if (local_1c != nullptr) {
        DArrayDestroy(local_1c);
      }
      if (local_40 != nullptr) {
        DArrayDestroy(local_40);
      }
      if (local_24 != nullptr) {
        DArrayDestroy(local_24);
        return;
      }
    }
    else {
      iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x116f,0,local_EAX_63,
                                 "%s","STGroupBoatC::DistributeMD");
      if (iVar5 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException(local_EAX_63,0,"E:\\__titans\\wlad\\to_grpb.cpp",0x1170);
    }
    return;
  }
  if ((param_4 == nullptr) || (local_68 = param_4->count, local_68 == 0)) {
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
               0x10f5);
  }
  dVar4 = local_68;
  local_1c = Library::DKW::TBL::DArrayCreate(nullptr,0,2,1);
  pSVar2 = local_6c;
  if (0 < (int)dVar4) {
    do {
      DArrayGetElement(param_4,uVar10,local_8);
      if (STPiece<0,2>(local_8) != 0xffff) {
        pSVar3 = (STBoatC *)
                 STAllPlayersC::GetObjPtr
                           (g_allPlayers_007FA174,pSVar2->field_0024,STPiece<0,2>(local_8),CASE_1);
        if (pSVar3 == nullptr) {
          iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x10fc,0,0,
                                     "%s","STGroupBoatC::DistributeMD ptr==NULL");
          if (iVar3 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          RaiseInternalException
                    (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp"
                     ,0x10fd);
        }
        dVar4 = pSVar3->slot_2C();
        pDVar8 = local_1c;
        if (((dVar4 != 8) &&
            (dVar4 = pSVar3->slot_2C(), pDVar8 = local_1c, dVar4 != 0x14)) &&
           (dVar4 = pSVar3->slot_2C(), pDVar8 = local_1c, dVar4 != 0x1a)) {
          iVar6 = thunk_FUN_00490d90((STGameObjC *)pSVar3);
          if (iVar6 == 0) {
            local_18 = g_playSystem_00802A38->field_00E4;
            STBoatC::CmdToObj(pSVar3,CASE_3,&local_18);
            goto LAB_004a35b6;
          }
          pDVar8 = local_24;
          if (local_24 == nullptr) {
            pDVar8 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
            local_24 = pDVar8;
          }
        }
        Library::DKW::TBL::DArrayAppend(pDVar8,local_8);
      }
LAB_004a35b6:
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (int)local_68);
  }
  local_20 = local_1c->count;
  if (local_20 == 0) {
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
               0x110f);
  }
  if ((param_2 != nullptr) && (dVar4 = param_2->count, dVar4 != 0)) {
    local_2c = Library::DKW::TBL::DArrayCreate(nullptr,0,2,1);
    uVar10 = 0;
    if (0 < (int)dVar4) {
      do {
        DArrayGetElement(param_2,uVar10,local_8);
        if ((STPiece<0,2>(local_8) != 0xffff) &&
           (pSVar7 = STAllPlayersC::GetObjPtr
                               (g_allPlayers_007FA174,pSVar2->field_0024,STPiece<0,2>(local_8),CASE_1),
           pSVar7 != nullptr)) {
          Library::DKW::TBL::DArrayAppend(local_2c,local_8);
        }
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)dVar4);
    }
  }
  uVar10 = local_20;
  if ((local_2c == nullptr) || (local_2c->count == 0)) {
    uVar9 = 0;
    if (0 < (int)local_20) {
      do {
        DArrayGetElement(local_1c,uVar9,local_8);
        pSVar3 = (STBoatC *)
                 STAllPlayersC::GetObjPtr
                           (g_allPlayers_007FA174,pSVar2->field_0024,STPiece<0,2>(local_8),CASE_1);
        if (param_1 == 1) {
          local_60 = g_playSystem_00802A38->field_00E4;
          local_4c = 0xffffffff;
          local_56 = 0xffffffff;
          STBoatC::CmdToObj(pSVar3,CASE_C,&local_60);
        }
        else {
          STBoatC::SetNewMD(pSVar3,1,-1,-1,-1,-1,0xffffffff);
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar10);
    }
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
               0x1124);
  }
  if ((param_3 != nullptr) && (dVar4 = param_3->count, dVar4 != 0)) {
    local_28 = Library::DKW::TBL::DArrayCreate(nullptr,0,2,1);
    uVar10 = 0;
    if (0 < (int)dVar4) {
      do {
        DArrayGetElement(param_3,uVar10,local_8);
        if ((STPiece<0,2>(local_8) != 0xffff) &&
           (pSVar7 = STAllPlayersC::GetObjPtr
                               (g_allPlayers_007FA174,pSVar2->field_0024,STPiece<0,2>(local_8),CASE_1),
           pSVar7 != nullptr)) {
          Library::DKW::TBL::DArrayAppend(local_28,local_8);
        }
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)dVar4);
    }
  }
  uVar10 = local_20;
  if ((local_28 == nullptr) || (local_28->count == 0)) {
    uVar9 = 0;
    if (0 < (int)local_20) {
      do {
        DArrayGetElement(local_1c,uVar9,local_8);
        pSVar3 = (STBoatC *)
                 STAllPlayersC::GetObjPtr
                           (g_allPlayers_007FA174,pSVar2->field_0024,STPiece<0,2>(local_8),CASE_1);
        if (param_1 == 1) {
          local_60 = g_playSystem_00802A38->field_00E4;
          local_4c = 0xffffffff;
          local_56 = 0xffffffff;
          STBoatC::CmdToObj(pSVar3,CASE_C,&local_60);
        }
        else {
          STBoatC::SetNewMD(pSVar3,0,-1,-1,-1,-1,0xffffffff);
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar10);
    }
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
               0x113a);
  }
  pDVar8 = (DArrayTy *)
           STAllPlayersC::_AssignMDPairs
                     (g_allPlayers_007FA174,pSVar2->field_0024,pSVar2->field_025E,local_2c,local_28,
                      local_1c);
  local_40 = pDVar8;
  if (pDVar8 == nullptr) {
    local_EAX_1021 =
         ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x113f,0,0,"%s",
                            "STGroupBoatC::DistributeMD unknown error");
    if (local_EAX_1021 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException
              (-0x5001fff8,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
               0x1140);
  }
  local_64 = pDVar8->count;
  if (local_64 != local_20) {
    local_EAX_1098 =
         ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x1144,0,0,"%s",
                            "STGroupBoatC::DistributeMD different value");
    if (local_EAX_1098 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException
              (-0x5001fff9,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
               0x1145);
  }
  local_20 = 0;
  if (0 < (int)local_64) {
    do {
      uVar10 = local_20;
      DArrayGetElement(pDVar8,local_20,&local_3c);
      if (param_1 == 1) {
        local_60 = g_playSystem_00802A38->field_00E4;
        pSVar7 = STAllPlayersC::GetObjPtr(g_allPlayers_007FA174,pSVar2->field_0024,local_3c,CASE_1);
        STFishC::sub_004162B0((STFishC *)pSVar7,&local_5c,&local_5a,&local_58);
        local_56 = pSVar7->field_0018;
        pSVar7 = STAllPlayersC::GetObjPtr(g_allPlayers_007FA174,pSVar2->field_0024,uStack_3a,CASE_1);
        STFishC::sub_004162B0((STFishC *)pSVar7,&local_52,&local_50,&local_4e);
        local_4c = pSVar7->field_0018;
        local_44 = local_32;
        pSVar3 = (STBoatC *)
                 STAllPlayersC::GetObjPtr(g_allPlayers_007FA174,pSVar2->field_0024,uStack_38,CASE_1);
        STBoatC::CmdToObj(pSVar3,CASE_C,&local_60);
        local_20 = uVar10;
      }
      else {
        pSVar3 = (STBoatC *)
                 STAllPlayersC::GetObjPtr(g_allPlayers_007FA174,pSVar2->field_0024,uStack_38,CASE_1);
        pSVar7 = STAllPlayersC::GetObjPtr(g_allPlayers_007FA174,pSVar2->field_0024,local_3c,CASE_1);
        STFishC::sub_004162B0((STFishC *)pSVar7,local_c,local_14,local_10);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        STBoatC::SetNewMD(pSVar3,1,local_c[0],local_14[0],local_10[0],pSVar7->field_0018,
                          CONCAT22(uStack_34,local_36));
        pSVar7 = STAllPlayersC::GetObjPtr(g_allPlayers_007FA174,pSVar2->field_0024,uStack_3a,CASE_1);
        STFishC::sub_004162B0((STFishC *)pSVar7,local_c,local_14,local_10);
        STBoatC::SetNewMD(pSVar3,0,local_c[0],local_14[0],local_10[0],pSVar7->field_0018,local_32);
      }
      local_20 = local_20 + 1;
      pDVar8 = local_40;
    } while ((int)local_20 < (int)local_64);
  }
  STAllPlayersC::RegisterPGPair
            (g_allPlayers_007FA174,STReplaceLowByte((uint32_t)(local_64), (uint8_t)(pSVar2->field_0024)),
             &local_1c->flags,&local_24->flags);
  RaiseInternalException
            (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",0x1165);
  g_currentExceptionFrame = local_b0.previous;
  return;
}

