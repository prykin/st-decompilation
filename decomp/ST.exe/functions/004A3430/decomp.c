
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::DistributeMD */

void __thiscall
STGroupBoatC::DistributeMD(STGroupBoatC *this,int param_1,int param_2,int param_3,int param_4)

{
  code *pcVar1;
  STGroupBoatC *pSVar2;
  int iVar3;
  STBoatC *pSVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  void *pvVar8;
  int iVar9;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar10;
  InternalExceptionFrame local_b0;
  STGroupBoatC *local_6c;
  int local_68;
  uint local_64;
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
  uint *local_40;
  undefined2 local_3c;
  undefined2 uStack_3a;
  undefined2 uStack_38;
  undefined2 local_36;
  undefined2 uStack_34;
  undefined4 local_32;
  uint *local_2c;
  uint *local_28;
  uint *local_24;
  uint local_20;
  uint *local_1c;
  undefined4 local_18;
  undefined2 local_14 [2];
  undefined2 local_10 [2];
  undefined2 local_c [2];
  uint local_8;
  
  uVar10 = 0;
  local_40 = (uint *)0x0;
  local_2c = (uint *)0x0;
  local_28 = (uint *)0x0;
  local_1c = (uint *)0x0;
  local_24 = (uint *)0x0;
  local_b0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b0;
  local_6c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_b0.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_b0.previous;
    if (iVar3 == -0x5001fff7) {
      if (local_2c != (uint *)0x0) {
        FUN_006ae110((byte *)local_2c);
      }
      if (local_28 != (uint *)0x0) {
        FUN_006ae110((byte *)local_28);
      }
      if (local_1c != (uint *)0x0) {
        FUN_006ae110((byte *)local_1c);
      }
      if (local_40 != (uint *)0x0) {
        FUN_006ae110((byte *)local_40);
      }
      if (local_24 != (uint *)0x0) {
        FUN_006ae110((byte *)local_24);
        return;
      }
    }
    else {
      iVar9 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x116f,0,iVar3,
                                 &DAT_007a4ccc,s_STGroupBoatC__DistributeMD_007ac208);
      if (iVar9 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      RaiseInternalException(iVar3,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x1170);
    }
    return;
  }
  if ((param_4 == 0) || (local_68 = *(int *)(param_4 + 0xc), local_68 == 0)) {
    RaiseInternalException(-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x10f5);
  }
  iVar3 = local_68;
  local_1c = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
  pSVar2 = local_6c;
  if (0 < iVar3) {
    do {
      FUN_006acc70(param_4,uVar10,&local_8);
      if ((short)local_8 != -1) {
        pSVar4 = (STBoatC *)
                 STAllPlayersC::GetObjPtr
                           (DAT_007fa174,
                            CONCAT31((int3)((uint)extraout_EDX >> 8),pSVar2->field_0024),local_8,
                            CASE_1);
        if (pSVar4 == (STBoatC *)0x0) {
          iVar3 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x10fc,0,0,
                                     &DAT_007a4ccc,s_STGroupBoatC__DistributeMD_ptr___007ac290);
          if (iVar3 != 0) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          RaiseInternalException
                    (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x10fd);
        }
        iVar3 = (*pSVar4->vtable->vfunc_2C)();
        puVar7 = local_1c;
        if (((iVar3 != 8) &&
            (iVar3 = (*pSVar4->vtable->vfunc_2C)(), puVar7 = local_1c, iVar3 != 0x14)) &&
           (iVar3 = (*pSVar4->vtable->vfunc_2C)(), puVar7 = local_1c, iVar3 != 0x1a)) {
          iVar3 = thunk_FUN_00490d90((int)pSVar4);
          if (iVar3 == 0) {
            local_18 = *(undefined4 *)(DAT_00802a38 + 0xe4);
            STBoatC::CmdToObj(pSVar4,CASE_3,&local_18);
            goto LAB_004a35b6;
          }
          puVar7 = local_24;
          if (local_24 == (uint *)0x0) {
            puVar7 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
            local_24 = puVar7;
          }
        }
        Library::DKW::TBL::FUN_006ae1c0(puVar7,&local_8);
      }
LAB_004a35b6:
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < local_68);
  }
  local_20 = local_1c[3];
  if (local_20 == 0) {
    RaiseInternalException(-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x110f);
  }
  if ((param_2 != 0) && (iVar3 = *(int *)(param_2 + 0xc), iVar3 != 0)) {
    local_2c = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
    uVar10 = 0;
    if (0 < iVar3) {
      do {
        FUN_006acc70(param_2,uVar10,&local_8);
        if (((short)local_8 != -1) &&
           (uVar5 = STAllPlayersC::GetObjPtr
                              (DAT_007fa174,
                               CONCAT31((int3)((uint)extraout_ECX >> 8),pSVar2->field_0024),local_8,
                               CASE_1), uVar5 != 0)) {
          Library::DKW::TBL::FUN_006ae1c0(local_2c,&local_8);
        }
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < iVar3);
    }
  }
  uVar10 = local_20;
  if ((local_2c == (uint *)0x0) || (local_2c[3] == 0)) {
    uVar5 = 0;
    if (0 < (int)local_20) {
      do {
        uVar6 = FUN_006acc70((int)local_1c,uVar5,&local_8);
        pSVar4 = (STBoatC *)
                 STAllPlayersC::GetObjPtr
                           (DAT_007fa174,CONCAT31((int3)(uVar6 >> 8),pSVar2->field_0024),local_8,
                            CASE_1);
        if (param_1 == 1) {
          local_60 = *(undefined4 *)(DAT_00802a38 + 0xe4);
          local_4c = 0xffffffff;
          local_56 = 0xffffffff;
          STBoatC::CmdToObj(pSVar4,CASE_C,&local_60);
        }
        else {
          STBoatC::SetNewMD(pSVar4,1,-1,-1,-1,-1,0xffffffff);
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)uVar10);
    }
    RaiseInternalException(-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x1124);
  }
  if ((param_3 != 0) && (iVar3 = *(int *)(param_3 + 0xc), iVar3 != 0)) {
    local_28 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
    uVar10 = 0;
    if (0 < iVar3) {
      do {
        FUN_006acc70(param_3,uVar10,&local_8);
        if (((short)local_8 != -1) &&
           (uVar5 = STAllPlayersC::GetObjPtr
                              (DAT_007fa174,
                               CONCAT31((int3)((uint)extraout_ECX_00 >> 8),pSVar2->field_0024),
                               local_8,CASE_1), uVar5 != 0)) {
          Library::DKW::TBL::FUN_006ae1c0(local_28,&local_8);
        }
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < iVar3);
    }
  }
  uVar10 = local_20;
  if ((local_28 == (uint *)0x0) || (local_28[3] == 0)) {
    uVar5 = 0;
    if (0 < (int)local_20) {
      do {
        uVar6 = FUN_006acc70((int)local_1c,uVar5,&local_8);
        pSVar4 = (STBoatC *)
                 STAllPlayersC::GetObjPtr
                           (DAT_007fa174,CONCAT31((int3)(uVar6 >> 8),pSVar2->field_0024),local_8,
                            CASE_1);
        if (param_1 == 1) {
          local_60 = *(undefined4 *)(DAT_00802a38 + 0xe4);
          local_4c = 0xffffffff;
          local_56 = 0xffffffff;
          STBoatC::CmdToObj(pSVar4,CASE_C,&local_60);
        }
        else {
          STBoatC::SetNewMD(pSVar4,0,-1,-1,-1,-1,0xffffffff);
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)uVar10);
    }
    RaiseInternalException(-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x113a);
  }
  puVar7 = STAllPlayersC::_AssignMDPairs
                     (DAT_007fa174,CONCAT31((int3)((uint)local_28 >> 8),pSVar2->field_0024),
                      pSVar2->field_025E,(int)local_2c,(int)local_28,(int)local_1c);
  local_40 = puVar7;
  if (puVar7 == (uint *)0x0) {
    iVar3 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x113f,0,0,&DAT_007a4ccc,
                               s_STGroupBoatC__DistributeMD_unkno_007ac25c);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(-0x5001fff8,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x1140);
  }
  local_64 = puVar7[3];
  if (local_64 != local_20) {
    iVar3 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x1144,0,0,&DAT_007a4ccc,
                               s_STGroupBoatC__DistributeMD_diffe_007ac228);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(-0x5001fff9,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x1145);
  }
  local_20 = 0;
  if (0 < (int)local_64) {
    do {
      uVar10 = local_20;
      FUN_006acc70((int)puVar7,local_20,(undefined4 *)&local_3c);
      if (param_1 == 1) {
        local_60 = *(undefined4 *)(DAT_00802a38 + 0xe4);
        pvVar8 = (void *)STAllPlayersC::GetObjPtr
                                   (DAT_007fa174,
                                    CONCAT31((int3)((uint)DAT_00802a38 >> 8),pSVar2->field_0024),
                                    CONCAT22(uStack_3a,local_3c),CASE_1);
        thunk_FUN_004162b0(pvVar8,&local_5c,&local_5a,&local_58);
        local_56 = *(undefined4 *)((int)pvVar8 + 0x18);
        pvVar8 = (void *)STAllPlayersC::GetObjPtr
                                   (DAT_007fa174,
                                    CONCAT31((int3)((uint)extraout_EDX_00 >> 8),pSVar2->field_0024),
                                    CONCAT22(uStack_38,uStack_3a),CASE_1);
        thunk_FUN_004162b0(pvVar8,&local_52,&local_50,&local_4e);
        local_4c = *(undefined4 *)((int)pvVar8 + 0x18);
        local_44 = local_32;
        pSVar4 = (STBoatC *)
                 STAllPlayersC::GetObjPtr
                           (DAT_007fa174,
                            CONCAT31((int3)(CONCAT22(uStack_34,local_36) >> 8),pSVar2->field_0024),
                            CONCAT22(local_36,uStack_38),CASE_1);
        STBoatC::CmdToObj(pSVar4,CASE_C,&local_60);
        local_20 = uVar10;
      }
      else {
        pSVar4 = (STBoatC *)
                 STAllPlayersC::GetObjPtr
                           (DAT_007fa174,
                            CONCAT31((int3)((uint)extraout_ECX_01 >> 8),pSVar2->field_0024),
                            CONCAT22(local_36,uStack_38),CASE_1);
        pvVar8 = (void *)STAllPlayersC::GetObjPtr
                                   (DAT_007fa174,
                                    CONCAT31((int3)((uint)pSVar4 >> 8),pSVar2->field_0024),
                                    CONCAT22(uStack_3a,local_3c),CASE_1);
        thunk_FUN_004162b0(pvVar8,local_c,local_14,local_10);
        STBoatC::SetNewMD(pSVar4,1,local_c[0],local_14[0],local_10[0],*(int *)((int)pvVar8 + 0x18),
                          CONCAT22(uStack_34,local_36));
        pvVar8 = (void *)STAllPlayersC::GetObjPtr
                                   (DAT_007fa174,
                                    CONCAT31((int3)((uint)extraout_ECX_02 >> 8),pSVar2->field_0024),
                                    CONCAT22(uStack_38,uStack_3a),CASE_1);
        thunk_FUN_004162b0(pvVar8,local_c,local_14,local_10);
        STBoatC::SetNewMD(pSVar4,0,local_c[0],local_14[0],local_10[0],*(int *)((int)pvVar8 + 0x18),
                          local_32);
      }
      local_20 = local_20 + 1;
      puVar7 = local_40;
    } while ((int)local_20 < (int)local_64);
  }
  STAllPlayersC::RegisterPGPair
            (DAT_007fa174,CONCAT31((int3)(local_64 >> 8),pSVar2->field_0024),local_1c,local_24);
  RaiseInternalException(-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x1165);
  g_currentExceptionFrame = local_b0.previous;
  return;
}

