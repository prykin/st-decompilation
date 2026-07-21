
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::DistributeDock */

void __thiscall
STGroupBoatC::DistributeDock(STGroupBoatC *this,int param_1,DArrayTy *param_2,DArrayTy *param_3)

{
  dword dVar1;
  code *pcVar2;
  uint uVar3;
  STGroupBoatC *pSVar4;
  int iVar5;
  STGameObjC *pSVar6;
  STBoatC *pSVar7;
  DArrayTy *pDVar8;
  STFishC *pSVar9;
  undefined2 extraout_var;
  undefined4 uVar10;
  int iVar11;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  DArrayTy *extraout_EDX_00;
  DArrayTy *extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  uint uVar12;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_88;
  undefined4 local_44;
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
  undefined4 local_10;
  DArrayTy *local_c;
  uint local_8;
  
  uVar12 = 0;
  local_20 = (DArrayTy *)0x0;
  local_c = (DArrayTy *)0x0;
  local_28 = (DArrayTy *)0x0;
  local_88.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_88;
  local_2c = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_88.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar5 == 0) {
    if ((param_3 == (DArrayTy *)0x0) || (local_24 = param_3->count, local_24 == 0)) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_grpb_cpp_007abe3c,
                 0x1189);
    }
    dVar1 = local_24;
    local_20 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
    local_c = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
    pSVar4 = local_2c;
    if (0 < (int)dVar1) {
      do {
        DArrayGetElement(param_3,uVar12,&local_8);
        if ((short)local_8 != -1) {
          pSVar6 = STAllPlayersC::GetObjPtr
                             (g_sTAllPlayers_007FA174,
                              CONCAT31((int3)((uint)extraout_EDX >> 8),pSVar4->field_0024),local_8,
                              CASE_1);
          if (pSVar6 == (STGameObjC *)0x0) {
            iVar5 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x1191,0,0,
                                       &DAT_007a4ccc,s_STGroupBoatC__DistributeDock_NUL_007ac2e0);
            if (iVar5 != 0) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       s_E____titans_wlad_to_grpb_cpp_007abe3c,0x1192);
          }
          iVar5 = (*pSVar6->vtable->vfunc_2C)();
          pDVar8 = local_c;
          if (((iVar5 != 9) &&
              (iVar5 = (*pSVar6->vtable->vfunc_2C)(), pDVar8 = local_c, iVar5 != 0x15)) &&
             (iVar5 = thunk_FUN_00486b40((int)pSVar6), pDVar8 = local_c, iVar5 != 0)) {
            pDVar8 = local_20;
          }
          Library::DKW::TBL::FUN_006ae1c0(&pDVar8->flags,&local_8);
        }
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < (int)local_24);
    }
    pDVar8 = local_20;
    if (local_20->count == 0) {
      dVar1 = local_c->count;
      local_24 = dVar1;
      if ((dVar1 != 0) && (uVar12 = 0, 0 < (int)dVar1)) {
        do {
          iVar5 = DArrayGetElement(local_c,uVar12,&local_8);
          pSVar7 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (g_sTAllPlayers_007FA174,
                              CONCAT31((int3)((uint)iVar5 >> 8),pSVar4->field_0024),local_8,CASE_1);
          STBoatC::CmdToObj(pSVar7,CASE_3,&local_10);
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)dVar1);
      }
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_grpb_cpp_007abe3c,
                 0x11a3);
      pDVar8 = extraout_EDX_00;
    }
    if ((param_2 == (DArrayTy *)0x0) || (param_2->count == 0)) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_grpb_cpp_007abe3c,
                 0x11a6);
      pDVar8 = extraout_EDX_01;
    }
    pDVar8 = (DArrayTy *)
             STAllPlayersC::_AssignDocks
                       (g_sTAllPlayers_007FA174,
                        CONCAT31((int3)((uint)pDVar8 >> 8),pSVar4->field_0024),param_2,local_20);
    local_28 = pDVar8;
    if (pDVar8 == (DArrayTy *)0x0) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_grpb_cpp_007abe3c,
                 0x11a9);
    }
    uVar12 = 0;
    local_44 = PTR_00802a38->field_00E4;
    local_30 = pDVar8->count;
    local_10 = local_44;
    if (0 < (int)local_30) {
      do {
        DArrayGetElement(pDVar8,uVar12,&local_38);
        uVar3 = CONCAT22(uStack_34,sStack_36);
        if (sStack_36 == -1) {
          pSVar7 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (g_sTAllPlayers_007FA174,
                              CONCAT31((int3)((uint)extraout_ECX >> 8),pSVar4->field_0024),
                              CONCAT22(0xffff,local_38),CASE_1);
          STBoatC::CmdToObj(pSVar7,CASE_3,&local_10);
        }
        else if (param_1 == 1) {
          pSVar9 = (STFishC *)
                   STAllPlayersC::GetObjPtr
                             (g_sTAllPlayers_007FA174,
                              CONCAT31((int3)(uVar3 >> 8),pSVar4->field_0024),uVar3,CASE_1);
          STFishC::sub_004162B0(pSVar9,local_1c,local_18,local_14);
          local_40 = local_1c[0];
          local_3e = local_18[0];
          local_3c = local_14[0];
          pSVar7 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (g_sTAllPlayers_007FA174,
                              CONCAT31((int3)(CONCAT22(extraout_var,local_18[0]) >> 8),
                                       pSVar4->field_0024),CONCAT22(sStack_36,local_38),CASE_1);
          STBoatC::CmdToObj(pSVar7,CASE_4,&local_44);
        }
        else {
          pSVar9 = (STFishC *)
                   STAllPlayersC::GetObjPtr
                             (g_sTAllPlayers_007FA174,
                              CONCAT31((int3)((uint)extraout_EDX_02 >> 8),pSVar4->field_0024),uVar3,
                              CASE_1);
          uVar10 = STFishC::sub_004162B0(pSVar9,local_1c,local_18,local_14);
          pSVar6 = STAllPlayersC::GetObjPtr
                             (g_sTAllPlayers_007FA174,
                              CONCAT31((int3)((uint)uVar10 >> 8),pSVar4->field_0024),
                              CONCAT22(sStack_36,local_38),CASE_1);
          thunk_FUN_00490a00(pSVar6,local_1c[0],local_18[0],local_14[0]);
        }
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < (int)local_30);
    }
    dVar1 = local_c->count;
    local_24 = dVar1;
    if ((dVar1 != 0) && (uVar12 = 0, pDVar8 = local_28, 0 < (int)dVar1)) {
      do {
        DArrayGetElement(local_c,uVar12,&local_8);
        pSVar7 = (STBoatC *)
                 STAllPlayersC::GetObjPtr
                           (g_sTAllPlayers_007FA174,
                            CONCAT31((int3)((uint)extraout_EDX_03 >> 8),pSVar4->field_0024),local_8,
                            CASE_1);
        STBoatC::CmdToObj(pSVar7,CASE_3,&local_10);
        uVar12 = uVar12 + 1;
        pDVar8 = local_28;
      } while ((int)uVar12 < (int)dVar1);
    }
    if (local_20 != (DArrayTy *)0x0) {
      DArrayDestroy(local_20);
    }
    if (local_c != (DArrayTy *)0x0) {
      DArrayDestroy(local_c);
    }
    if (pDVar8 != (DArrayTy *)0x0) {
      DArrayDestroy(pDVar8);
    }
    g_currentExceptionFrame = local_88.previous;
    return;
  }
  g_currentExceptionFrame = local_88.previous;
  if (iVar5 == -0x5001fff7) {
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
    iVar11 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x11d8,0,iVar5,&DAT_007a4ccc
                                ,s_STGroupBoatC__DistributeDock_007ac2bc);
    if (iVar11 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar5,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x11d9);
  }
  return;
}

