
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
  InternalExceptionFrame IStack_b0;
  STGroupBoatC *pSStack_6c;
  int iStack_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined2 uStack_58;
  undefined4 uStack_56;
  undefined2 uStack_52;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined4 uStack_4c;
  undefined4 uStack_44;
  uint *puStack_40;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined2 uStack_38;
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined4 uStack_32;
  uint *puStack_2c;
  uint *puStack_28;
  uint *puStack_24;
  uint uStack_20;
  uint *puStack_1c;
  undefined4 uStack_18;
  undefined2 auStack_14 [2];
  undefined2 auStack_10 [2];
  undefined2 auStack_c [2];
  uint uStack_8;
  
  uVar10 = 0;
  puStack_40 = (uint *)0x0;
  puStack_2c = (uint *)0x0;
  puStack_28 = (uint *)0x0;
  puStack_1c = (uint *)0x0;
  puStack_24 = (uint *)0x0;
  IStack_b0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_b0;
  pSStack_6c = this;
  iVar3 = Library::MSVCRT::__setjmp3(IStack_b0.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    g_currentExceptionFrame = IStack_b0.previous;
    if (iVar3 == -0x5001fff7) {
      if (puStack_2c != (uint *)0x0) {
        FUN_006ae110((byte *)puStack_2c);
      }
      if (puStack_28 != (uint *)0x0) {
        FUN_006ae110((byte *)puStack_28);
      }
      if (puStack_1c != (uint *)0x0) {
        FUN_006ae110((byte *)puStack_1c);
      }
      if (puStack_40 != (uint *)0x0) {
        FUN_006ae110((byte *)puStack_40);
      }
      if (puStack_24 != (uint *)0x0) {
        FUN_006ae110((byte *)puStack_24);
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
  if ((param_4 == 0) || (iStack_68 = *(int *)(param_4 + 0xc), iStack_68 == 0)) {
    RaiseInternalException(-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x10f5);
  }
  iVar3 = iStack_68;
  puStack_1c = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
  pSVar2 = pSStack_6c;
  if (0 < iVar3) {
    do {
      FUN_006acc70(param_4,uVar10,&uStack_8);
      if ((short)uStack_8 != -1) {
        pSVar4 = (STBoatC *)
                 STAllPlayersC::GetObjPtr
                           (DAT_007fa174,CONCAT31((int3)((uint)extraout_EDX >> 8),pSVar2[0x24]),
                            uStack_8,1);
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
        iVar3 = (**(code **)(*(int *)pSVar4 + 0x2c))();
        puVar7 = puStack_1c;
        if (((iVar3 != 8) &&
            (iVar3 = (**(code **)(*(int *)pSVar4 + 0x2c))(), puVar7 = puStack_1c, iVar3 != 0x14)) &&
           (iVar3 = (**(code **)(*(int *)pSVar4 + 0x2c))(), puVar7 = puStack_1c, iVar3 != 0x1a)) {
          iVar3 = thunk_FUN_00490d90((int)pSVar4);
          if (iVar3 == 0) {
            uStack_18 = *(undefined4 *)(DAT_00802a38 + 0xe4);
            STBoatC::CmdToObj(pSVar4,3,&uStack_18);
            goto LAB_004a35b6;
          }
          puVar7 = puStack_24;
          if (puStack_24 == (uint *)0x0) {
            puVar7 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
            puStack_24 = puVar7;
          }
        }
        Library::DKW::TBL::FUN_006ae1c0(puVar7,&uStack_8);
      }
LAB_004a35b6:
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < iStack_68);
  }
  uStack_20 = puStack_1c[3];
  if (uStack_20 == 0) {
    RaiseInternalException(-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x110f);
  }
  if ((param_2 != 0) && (iVar3 = *(int *)(param_2 + 0xc), iVar3 != 0)) {
    puStack_2c = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
    uVar10 = 0;
    if (0 < iVar3) {
      do {
        FUN_006acc70(param_2,uVar10,&uStack_8);
        if (((short)uStack_8 != -1) &&
           (uVar5 = STAllPlayersC::GetObjPtr
                              (DAT_007fa174,CONCAT31((int3)((uint)extraout_ECX >> 8),pSVar2[0x24]),
                               uStack_8,1), uVar5 != 0)) {
          Library::DKW::TBL::FUN_006ae1c0(puStack_2c,&uStack_8);
        }
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < iVar3);
    }
  }
  uVar10 = uStack_20;
  if ((puStack_2c == (uint *)0x0) || (puStack_2c[3] == 0)) {
    uVar5 = 0;
    if (0 < (int)uStack_20) {
      do {
        uVar6 = FUN_006acc70((int)puStack_1c,uVar5,&uStack_8);
        pSVar4 = (STBoatC *)
                 STAllPlayersC::GetObjPtr
                           (DAT_007fa174,CONCAT31((int3)(uVar6 >> 8),pSVar2[0x24]),uStack_8,1);
        if (param_1 == 1) {
          uStack_60 = *(undefined4 *)(DAT_00802a38 + 0xe4);
          uStack_4c = 0xffffffff;
          uStack_56 = 0xffffffff;
          STBoatC::CmdToObj(pSVar4,0xc,&uStack_60);
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
    puStack_28 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
    uVar10 = 0;
    if (0 < iVar3) {
      do {
        FUN_006acc70(param_3,uVar10,&uStack_8);
        if (((short)uStack_8 != -1) &&
           (uVar5 = STAllPlayersC::GetObjPtr
                              (DAT_007fa174,
                               CONCAT31((int3)((uint)extraout_ECX_00 >> 8),pSVar2[0x24]),uStack_8,1)
           , uVar5 != 0)) {
          Library::DKW::TBL::FUN_006ae1c0(puStack_28,&uStack_8);
        }
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < iVar3);
    }
  }
  uVar10 = uStack_20;
  if ((puStack_28 == (uint *)0x0) || (puStack_28[3] == 0)) {
    uVar5 = 0;
    if (0 < (int)uStack_20) {
      do {
        uVar6 = FUN_006acc70((int)puStack_1c,uVar5,&uStack_8);
        pSVar4 = (STBoatC *)
                 STAllPlayersC::GetObjPtr
                           (DAT_007fa174,CONCAT31((int3)(uVar6 >> 8),pSVar2[0x24]),uStack_8,1);
        if (param_1 == 1) {
          uStack_60 = *(undefined4 *)(DAT_00802a38 + 0xe4);
          uStack_4c = 0xffffffff;
          uStack_56 = 0xffffffff;
          STBoatC::CmdToObj(pSVar4,0xc,&uStack_60);
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
                     (DAT_007fa174,CONCAT31((int3)((uint)puStack_28 >> 8),pSVar2[0x24]),
                      *(int *)(pSVar2 + 0x25e),(int)puStack_2c,(int)puStack_28,(int)puStack_1c);
  puStack_40 = puVar7;
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
  uStack_64 = puVar7[3];
  if (uStack_64 != uStack_20) {
    iVar3 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x1144,0,0,&DAT_007a4ccc,
                               s_STGroupBoatC__DistributeMD_diffe_007ac228);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(-0x5001fff9,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x1145);
  }
  uStack_20 = 0;
  if (0 < (int)uStack_64) {
    do {
      uVar10 = uStack_20;
      FUN_006acc70((int)puVar7,uStack_20,(undefined4 *)&uStack_3c);
      if (param_1 == 1) {
        uStack_60 = *(undefined4 *)(DAT_00802a38 + 0xe4);
        pvVar8 = (void *)STAllPlayersC::GetObjPtr
                                   (DAT_007fa174,
                                    CONCAT31((int3)((uint)DAT_00802a38 >> 8),pSVar2[0x24]),
                                    CONCAT22(uStack_3a,uStack_3c),1);
        thunk_FUN_004162b0(pvVar8,&uStack_5c,&uStack_5a,&uStack_58);
        uStack_56 = *(undefined4 *)((int)pvVar8 + 0x18);
        pvVar8 = (void *)STAllPlayersC::GetObjPtr
                                   (DAT_007fa174,
                                    CONCAT31((int3)((uint)extraout_EDX_00 >> 8),pSVar2[0x24]),
                                    CONCAT22(uStack_38,uStack_3a),1);
        thunk_FUN_004162b0(pvVar8,&uStack_52,&uStack_50,&uStack_4e);
        uStack_4c = *(undefined4 *)((int)pvVar8 + 0x18);
        uStack_44 = uStack_32;
        pSVar4 = (STBoatC *)
                 STAllPlayersC::GetObjPtr
                           (DAT_007fa174,
                            CONCAT31((int3)(CONCAT22(uStack_34,uStack_36) >> 8),pSVar2[0x24]),
                            CONCAT22(uStack_36,uStack_38),1);
        STBoatC::CmdToObj(pSVar4,0xc,&uStack_60);
        uStack_20 = uVar10;
      }
      else {
        pSVar4 = (STBoatC *)
                 STAllPlayersC::GetObjPtr
                           (DAT_007fa174,CONCAT31((int3)((uint)extraout_ECX_01 >> 8),pSVar2[0x24]),
                            CONCAT22(uStack_36,uStack_38),1);
        pvVar8 = (void *)STAllPlayersC::GetObjPtr
                                   (DAT_007fa174,CONCAT31((int3)((uint)pSVar4 >> 8),pSVar2[0x24]),
                                    CONCAT22(uStack_3a,uStack_3c),1);
        thunk_FUN_004162b0(pvVar8,auStack_c,auStack_14,auStack_10);
        STBoatC::SetNewMD(pSVar4,1,auStack_c[0],auStack_14[0],auStack_10[0],
                          *(int *)((int)pvVar8 + 0x18),CONCAT22(uStack_34,uStack_36));
        pvVar8 = (void *)STAllPlayersC::GetObjPtr
                                   (DAT_007fa174,
                                    CONCAT31((int3)((uint)extraout_ECX_02 >> 8),pSVar2[0x24]),
                                    CONCAT22(uStack_38,uStack_3a),1);
        thunk_FUN_004162b0(pvVar8,auStack_c,auStack_14,auStack_10);
        STBoatC::SetNewMD(pSVar4,0,auStack_c[0],auStack_14[0],auStack_10[0],
                          *(int *)((int)pvVar8 + 0x18),uStack_32);
      }
      uStack_20 = uStack_20 + 1;
      puVar7 = puStack_40;
    } while ((int)uStack_20 < (int)uStack_64);
  }
  STAllPlayersC::RegisterPGPair
            (DAT_007fa174,CONCAT31((int3)(uStack_64 >> 8),pSVar2[0x24]),puStack_1c,puStack_24);
  RaiseInternalException(-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x1165);
  g_currentExceptionFrame = IStack_b0.previous;
  return;
}

