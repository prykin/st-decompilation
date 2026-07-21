#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::DistributeMD */

void __thiscall
STGroupBoatC::DistributeMD
          (STGroupBoatC *this,int param_1,DArrayTy *param_2,DArrayTy *param_3,DArrayTy *param_4)

{
  code *pcVar1;
  STGroupBoatC *pSVar2;
  int iVar3;
  STBoatC *pSVar4;
  dword dVar5;
  STGameObjC *pSVar6;
  DArrayTy *pDVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  InternalExceptionFrame local_b0;
  STGroupBoatC *local_6c;
  dword local_68;
  dword local_64;
  undefined4 local_60;
  undefined2 local_5c;
  undefined2 local_5a;
  undefined2 local_58;
  undefined4 local_56;
  undefined2 local_52;
  undefined2 local_50;
  undefined2 local_4e;
  undefined4 local_4c;
  undefined4 local_44;
  DArrayTy *local_40;
  undefined2 local_3c;
  undefined2 uStack_3a;
  undefined2 uStack_38;
  undefined2 local_36;
  undefined2 uStack_34;
  undefined4 local_32;
  DArrayTy *local_2c;
  DArrayTy *local_28;
  DArrayTy *local_24;
  uint local_20;
  DArrayTy *local_1c;
  undefined4 local_18;
  undefined2 local_14 [2];
  undefined2 local_10 [2];
  undefined2 local_c [2];
  uint local_8;

  uVar10 = 0;
  local_40 = (DArrayTy *)0x0;
  local_2c = (DArrayTy *)0x0;
  local_28 = (DArrayTy *)0x0;
  local_1c = (DArrayTy *)0x0;
  local_24 = (DArrayTy *)0x0;
  local_b0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b0;
  local_6c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_b0.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_b0.previous;
    if (iVar3 == -0x5001fff7) {
      if (local_2c != (DArrayTy *)0x0) {
        DArrayDestroy(local_2c);
      }
      if (local_28 != (DArrayTy *)0x0) {
        DArrayDestroy(local_28);
      }
      if (local_1c != (DArrayTy *)0x0) {
        DArrayDestroy(local_1c);
      }
      if (local_40 != (DArrayTy *)0x0) {
        DArrayDestroy(local_40);
      }
      if (local_24 != (DArrayTy *)0x0) {
        DArrayDestroy(local_24);
        return;
      }
    }
    else {
      iVar8 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x116f,0,iVar3,
                                 "%s","STGroupBoatC::DistributeMD");
      if (iVar8 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException(iVar3,0,"E:\\__titans\\wlad\\to_grpb.cpp",0x1170);
    }
    return;
  }
  if ((param_4 == (DArrayTy *)0x0) || (local_68 = param_4->count, local_68 == 0)) {
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
               0x10f5);
  }
  dVar5 = local_68;
  local_1c = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
  pSVar2 = local_6c;
  if (0 < (int)dVar5) {
    do {
      DArrayGetElement(param_4,uVar10,&local_8);
      if ((short)local_8 != -1) {
        pSVar4 = (STBoatC *)
                 STAllPlayersC::GetObjPtr(g_sTAllPlayers_007FA174,pSVar2->field_0024,local_8,CASE_1)
        ;
        if (pSVar4 == (STBoatC *)0x0) {
          iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x10fc,0,0,
                                     "%s","STGroupBoatC::DistributeMD ptr==NULL");
          if (iVar3 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          RaiseInternalException
                    (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp"
                     ,0x10fd);
        }
        dVar5 = (*pSVar4->vtable->slot_2C)(pSVar4);
        pDVar7 = local_1c;
        if (((dVar5 != 8) &&
            (dVar5 = (*pSVar4->vtable->slot_2C)(pSVar4), pDVar7 = local_1c, dVar5 != 0x14)) &&
           (dVar5 = (*pSVar4->vtable->slot_2C)(pSVar4), pDVar7 = local_1c, dVar5 != 0x1a)) {
          iVar3 = thunk_FUN_00490d90((int)pSVar4);
          if (iVar3 == 0) {
            local_18 = PTR_00802a38->field_00E4;
            STBoatC::CmdToObj(pSVar4,CASE_3,&local_18);
            goto LAB_004a35b6;
          }
          pDVar7 = local_24;
          if (local_24 == (DArrayTy *)0x0) {
            pDVar7 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
            local_24 = pDVar7;
          }
        }
        Library::DKW::TBL::FUN_006ae1c0(&pDVar7->flags,&local_8);
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
  if ((param_2 != (DArrayTy *)0x0) && (dVar5 = param_2->count, dVar5 != 0)) {
    local_2c = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
    uVar10 = 0;
    if (0 < (int)dVar5) {
      do {
        DArrayGetElement(param_2,uVar10,&local_8);
        if (((short)local_8 != -1) &&
           (pSVar6 = STAllPlayersC::GetObjPtr
                               (g_sTAllPlayers_007FA174,pSVar2->field_0024,local_8,CASE_1),
           pSVar6 != (STGameObjC *)0x0)) {
          Library::DKW::TBL::FUN_006ae1c0(&local_2c->flags,&local_8);
        }
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)dVar5);
    }
  }
  uVar10 = local_20;
  if ((local_2c == (DArrayTy *)0x0) || (local_2c->count == 0)) {
    uVar9 = 0;
    if (0 < (int)local_20) {
      do {
        DArrayGetElement(local_1c,uVar9,&local_8);
        pSVar4 = (STBoatC *)
                 STAllPlayersC::GetObjPtr(g_sTAllPlayers_007FA174,pSVar2->field_0024,local_8,CASE_1)
        ;
        if (param_1 == 1) {
          local_60 = PTR_00802a38->field_00E4;
          local_4c = 0xffffffff;
          local_56 = 0xffffffff;
          STBoatC::CmdToObj(pSVar4,CASE_C,&local_60);
        }
        else {
          STBoatC::SetNewMD(pSVar4,1,-1,-1,-1,-1,0xffffffff);
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar10);
    }
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
               0x1124);
  }
  if ((param_3 != (DArrayTy *)0x0) && (dVar5 = param_3->count, dVar5 != 0)) {
    local_28 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
    uVar10 = 0;
    if (0 < (int)dVar5) {
      do {
        DArrayGetElement(param_3,uVar10,&local_8);
        if (((short)local_8 != -1) &&
           (pSVar6 = STAllPlayersC::GetObjPtr
                               (g_sTAllPlayers_007FA174,pSVar2->field_0024,local_8,CASE_1),
           pSVar6 != (STGameObjC *)0x0)) {
          Library::DKW::TBL::FUN_006ae1c0(&local_28->flags,&local_8);
        }
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)dVar5);
    }
  }
  uVar10 = local_20;
  if ((local_28 == (DArrayTy *)0x0) || (local_28->count == 0)) {
    uVar9 = 0;
    if (0 < (int)local_20) {
      do {
        DArrayGetElement(local_1c,uVar9,&local_8);
        pSVar4 = (STBoatC *)
                 STAllPlayersC::GetObjPtr(g_sTAllPlayers_007FA174,pSVar2->field_0024,local_8,CASE_1)
        ;
        if (param_1 == 1) {
          local_60 = PTR_00802a38->field_00E4;
          local_4c = 0xffffffff;
          local_56 = 0xffffffff;
          STBoatC::CmdToObj(pSVar4,CASE_C,&local_60);
        }
        else {
          STBoatC::SetNewMD(pSVar4,0,-1,-1,-1,-1,0xffffffff);
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar10);
    }
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
               0x113a);
  }
  pDVar7 = (DArrayTy *)
           STAllPlayersC::_AssignMDPairs
                     (g_sTAllPlayers_007FA174,pSVar2->field_0024,pSVar2->field_025E,local_2c,
                      local_28,local_1c);
  local_40 = pDVar7;
  if (pDVar7 == (DArrayTy *)0x0) {
    iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x113f,0,0,"%s",
                               "STGroupBoatC::DistributeMD unknown error");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException
              (-0x5001fff8,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
               0x1140);
  }
  local_64 = pDVar7->count;
  if (local_64 != local_20) {
    iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x1144,0,0,"%s",
                               "STGroupBoatC::DistributeMD different value");
    if (iVar3 != 0) {
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
      DArrayGetElement(pDVar7,local_20,&local_3c);
      if (param_1 == 1) {
        local_60 = PTR_00802a38->field_00E4;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        pSVar6 = STAllPlayersC::GetObjPtr
                           (g_sTAllPlayers_007FA174,pSVar2->field_0024,CONCAT22(uStack_3a,local_3c),
                            CASE_1);
        STFishC::sub_004162B0((STFishC *)pSVar6,&local_5c,&local_5a,&local_58);
        local_56 = pSVar6->field_0018;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        pSVar6 = STAllPlayersC::GetObjPtr
                           (g_sTAllPlayers_007FA174,pSVar2->field_0024,CONCAT22(uStack_38,uStack_3a)
                            ,CASE_1);
        STFishC::sub_004162B0((STFishC *)pSVar6,&local_52,&local_50,&local_4e);
        local_4c = pSVar6->field_0018;
        local_44 = local_32;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        pSVar4 = (STBoatC *)
                 STAllPlayersC::GetObjPtr
                           (g_sTAllPlayers_007FA174,pSVar2->field_0024,CONCAT22(local_36,uStack_38),
                            CASE_1);
        STBoatC::CmdToObj(pSVar4,CASE_C,&local_60);
        local_20 = uVar10;
      }
      else {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        pSVar4 = (STBoatC *)
                 STAllPlayersC::GetObjPtr
                           (g_sTAllPlayers_007FA174,pSVar2->field_0024,CONCAT22(local_36,uStack_38),
                            CASE_1);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        pSVar6 = STAllPlayersC::GetObjPtr
                           (g_sTAllPlayers_007FA174,pSVar2->field_0024,CONCAT22(uStack_3a,local_3c),
                            CASE_1);
        STFishC::sub_004162B0((STFishC *)pSVar6,local_c,local_14,local_10);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        STBoatC::SetNewMD(pSVar4,1,local_c[0],local_14[0],local_10[0],pSVar6->field_0018,
                          CONCAT22(uStack_34,local_36));
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        pSVar6 = STAllPlayersC::GetObjPtr
                           (g_sTAllPlayers_007FA174,pSVar2->field_0024,CONCAT22(uStack_38,uStack_3a)
                            ,CASE_1);
        STFishC::sub_004162B0((STFishC *)pSVar6,local_c,local_14,local_10);
        STBoatC::SetNewMD(pSVar4,0,local_c[0],local_14[0],local_10[0],pSVar6->field_0018,local_32);
      }
      local_20 = local_20 + 1;
      pDVar7 = local_40;
    } while ((int)local_20 < (int)local_64);
  }
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  STAllPlayersC::RegisterPGPair
            (g_sTAllPlayers_007FA174,CONCAT31((int3)(local_64 >> 8),pSVar2->field_0024),
             &local_1c->flags,&local_24->flags);
  RaiseInternalException
            (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",0x1165)
  ;
  g_currentExceptionFrame = local_b0.previous;
  return;
}

