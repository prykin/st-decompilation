#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::DistributeDock */

void __thiscall
STGroupBoatC::DistributeDock(STGroupBoatC *this,int param_1,DArrayTy *param_2,DArrayTy *param_3)

{
  dword dVar1;
  code *pcVar2;
  STGroupBoatC *pSVar3;
  int iVar4;
  STGameObjC *pSVar5;
  STBoatC *pSVar6;
  DArrayTy *pDVar7;
  int iVar8;
  uint uVar9;
  InternalExceptionFrame local_88;
  uint local_44;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined2 local_38;
  short sStack_36;
  undefined2 uStack_34;
  dword local_30;
  STGroupBoatC *local_2c;
  DArrayTy *local_28;
  dword local_24;
  DArrayTy *local_20;
  undefined2 local_1c [2];
  undefined2 local_18 [2];
  undefined2 local_14 [2];
  uint local_10;
  DArrayTy *local_c;
  uint local_8;

  uVar9 = 0;
  local_20 = (DArrayTy *)0x0;
  local_c = (DArrayTy *)0x0;
  local_28 = (DArrayTy *)0x0;
  local_88.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_88;
  local_2c = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_88.jumpBuffer,0);
  if (iVar4 == 0) {
    if ((param_3 == (DArrayTy *)0x0) || (local_24 = param_3->count, local_24 == 0)) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                 0x1189);
    }
    dVar1 = local_24;
    local_20 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0,2,1);
    local_c = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0,2,1);
    pSVar3 = local_2c;
    if (0 < (int)dVar1) {
      do {
        DArrayGetElement(param_3,uVar9,&local_8);
        if ((short)local_8 != -1) {
          pSVar5 = STAllPlayersC::GetObjPtr(g_allPlayers_007FA174,pSVar3->field_0024,local_8,CASE_1)
          ;
          if (pSVar5 == (STGameObjC *)0x0) {
            iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x1191,0,0,
                                       "%s","STGroupBoatC::DistributeDock NULL value");
            if (iVar4 != 0) {
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0x1192);
          }
          iVar4 = (*pSVar5->vtable->vfunc_2C)();
          pDVar7 = local_c;
          if (((iVar4 != 9) &&
              (iVar4 = (*pSVar5->vtable->vfunc_2C)(), pDVar7 = local_c, iVar4 != 0x15)) &&
             (iVar4 = thunk_FUN_00486b40(pSVar5), pDVar7 = local_c, iVar4 != 0)) {
            pDVar7 = local_20;
          }
          Library::DKW::TBL::FUN_006ae1c0(&pDVar7->flags,&local_8);
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)local_24);
    }
    if (local_20->count == 0) {
      dVar1 = local_c->count;
      local_24 = dVar1;
      if ((dVar1 != 0) && (uVar9 = 0, 0 < (int)dVar1)) {
        do {
          DArrayGetElement(local_c,uVar9,&local_8);
          pSVar6 = (STBoatC *)
                   STAllPlayersC::GetObjPtr(g_allPlayers_007FA174,pSVar3->field_0024,local_8,CASE_1)
          ;
          STBoatC::CmdToObj(pSVar6,CASE_3,&local_10);
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < (int)dVar1);
      }
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                 0x11a3);
    }
    if ((param_2 == (DArrayTy *)0x0) || (param_2->count == 0)) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                 0x11a6);
    }
    pDVar7 = (DArrayTy *)
             STAllPlayersC::_AssignDocks(g_allPlayers_007FA174,pSVar3->field_0024,param_2,local_20);
    local_28 = pDVar7;
    if (pDVar7 == (DArrayTy *)0x0) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                 0x11a9);
    }
    uVar9 = 0;
    local_44 = g_playSystem_00802A38->field_00E4;
    local_30 = pDVar7->count;
    local_10 = local_44;
    if (0 < (int)local_30) {
      do {
        DArrayGetElement(pDVar7,uVar9,&local_38);
        if (sStack_36 == -1) {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          pSVar6 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,pSVar3->field_0024,CONCAT22(0xffff,local_38),
                              CASE_1);
          STBoatC::CmdToObj(pSVar6,CASE_3,&local_10);
        }
        else if (param_1 == 1) {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          pSVar5 = STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,pSVar3->field_0024,CONCAT22(uStack_34,sStack_36)
                              ,CASE_1);
          STFishC::sub_004162B0((STFishC *)pSVar5,local_1c,local_18,local_14);
          local_40 = local_1c[0];
          local_3e = local_18[0];
          local_3c = local_14[0];
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          pSVar6 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,pSVar3->field_0024,CONCAT22(sStack_36,local_38),
                              CASE_1);
          STBoatC::CmdToObj(pSVar6,CASE_4,&local_44);
        }
        else {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          pSVar5 = STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,pSVar3->field_0024,CONCAT22(uStack_34,sStack_36)
                              ,CASE_1);
          STFishC::sub_004162B0((STFishC *)pSVar5,local_1c,local_18,local_14);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          pSVar5 = STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,pSVar3->field_0024,CONCAT22(sStack_36,local_38),
                              CASE_1);
          thunk_FUN_00490a00(pSVar5,local_1c[0],local_18[0],local_14[0]);
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)local_30);
    }
    dVar1 = local_c->count;
    local_24 = dVar1;
    if ((dVar1 != 0) && (uVar9 = 0, pDVar7 = local_28, 0 < (int)dVar1)) {
      do {
        DArrayGetElement(local_c,uVar9,&local_8);
        pSVar6 = (STBoatC *)
                 STAllPlayersC::GetObjPtr(g_allPlayers_007FA174,pSVar3->field_0024,local_8,CASE_1);
        STBoatC::CmdToObj(pSVar6,CASE_3,&local_10);
        uVar9 = uVar9 + 1;
        pDVar7 = local_28;
      } while ((int)uVar9 < (int)dVar1);
    }
    if (local_20 != (DArrayTy *)0x0) {
      DArrayDestroy(local_20);
    }
    if (local_c != (DArrayTy *)0x0) {
      DArrayDestroy(local_c);
    }
    if (pDVar7 != (DArrayTy *)0x0) {
      DArrayDestroy(pDVar7);
    }
    g_currentExceptionFrame = local_88.previous;
    return;
  }
  g_currentExceptionFrame = local_88.previous;
  if (iVar4 == -0x5001fff7) {
    if (local_20 != (DArrayTy *)0x0) {
      DArrayDestroy(local_20);
    }
    if (local_c != (DArrayTy *)0x0) {
      DArrayDestroy(local_c);
    }
    if (local_28 != (DArrayTy *)0x0) {
      DArrayDestroy(local_28);
      return;
    }
  }
  else {
    iVar8 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x11d8,0,iVar4,"%s",
                               "STGroupBoatC::DistributeDock");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\wlad\\to_grpb.cpp",0x11d9);
  }
  return;
}

