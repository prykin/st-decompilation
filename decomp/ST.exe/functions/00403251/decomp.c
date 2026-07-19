
void __thiscall STGroupBoatC::DistributeDock(STGroupBoatC *this,int param_1,int param_2,int param_3)

{
  code *pcVar1;
  STGroupBoatC *pSVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  STBoatC *pSVar6;
  uint *puVar7;
  void *pvVar8;
  undefined2 extraout_var;
  undefined4 uVar9;
  int iVar10;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  uint *extraout_EDX_00;
  uint *extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  uint uVar11;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar12;
  InternalExceptionFrame IStack_88;
  undefined4 uStack_44;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  undefined2 uStack_38;
  short sStack_36;
  undefined2 uStack_34;
  uint uStack_30;
  STGroupBoatC *pSStack_2c;
  uint *puStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined2 auStack_1c [2];
  undefined2 auStack_18 [2];
  undefined2 auStack_14 [2];
  undefined4 uStack_10;
  uint *puStack_c;
  uint uStack_8;
  
  uVar11 = 0;
  puStack_20 = (uint *)0x0;
  puStack_c = (uint *)0x0;
  puStack_28 = (uint *)0x0;
  IStack_88.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_88;
  pSStack_2c = this;
  iVar3 = Library::MSVCRT::__setjmp3(IStack_88.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    if ((param_3 == 0) || (uStack_24 = *(uint *)(param_3 + 0xc), uStack_24 == 0)) {
      RaiseInternalException
                (-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x1189);
    }
    uVar12 = uStack_24;
    puStack_20 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
    puStack_c = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
    pSVar2 = pSStack_2c;
    if (0 < (int)uVar12) {
      do {
        FUN_006acc70(param_3,uVar11,&uStack_8);
        if ((short)uStack_8 != -1) {
          piVar4 = (int *)STAllPlayersC::GetObjPtr
                                    (DAT_007fa174,
                                     CONCAT31((int3)((uint)extraout_EDX >> 8),pSVar2[0x24]),uStack_8
                                     ,1);
          if (piVar4 == (int *)0x0) {
            iVar3 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x1191,0,0,
                                       &DAT_007a4ccc,s_STGroupBoatC__DistributeDock_NUL_007ac2e0);
            if (iVar3 != 0) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            RaiseInternalException
                      (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x1192);
          }
          iVar3 = (**(code **)(*piVar4 + 0x2c))();
          puVar7 = puStack_c;
          if (((iVar3 != 9) &&
              (iVar3 = (**(code **)(*piVar4 + 0x2c))(), puVar7 = puStack_c, iVar3 != 0x15)) &&
             (iVar3 = thunk_FUN_00486b40((int)piVar4), puVar7 = puStack_c, iVar3 != 0)) {
            puVar7 = puStack_20;
          }
          Library::DKW::TBL::FUN_006ae1c0(puVar7,&uStack_8);
        }
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < (int)uStack_24);
    }
    puVar7 = puStack_20;
    if (puStack_20[3] == 0) {
      uVar11 = puStack_c[3];
      uStack_24 = uVar11;
      if ((uVar11 != 0) && (uVar12 = 0, 0 < (int)uVar11)) {
        do {
          uVar5 = FUN_006acc70((int)puStack_c,uVar12,&uStack_8);
          pSVar6 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (DAT_007fa174,CONCAT31((int3)(uVar5 >> 8),pSVar2[0x24]),uStack_8,1);
          STBoatC::CmdToObj(pSVar6,3,&uStack_10);
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)uVar11);
      }
      RaiseInternalException
                (-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x11a3);
      puVar7 = extraout_EDX_00;
    }
    if ((param_2 == 0) || (*(int *)(param_2 + 0xc) == 0)) {
      RaiseInternalException
                (-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x11a6);
      puVar7 = extraout_EDX_01;
    }
    puVar7 = STAllPlayersC::_AssignDocks
                       (DAT_007fa174,CONCAT31((int3)((uint)puVar7 >> 8),pSVar2[0x24]),param_2,
                        (int)puStack_20);
    puStack_28 = puVar7;
    if (puVar7 == (uint *)0x0) {
      RaiseInternalException
                (-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x11a9);
    }
    uVar11 = 0;
    uStack_44 = *(undefined4 *)(DAT_00802a38 + 0xe4);
    uStack_30 = puVar7[3];
    uStack_10 = uStack_44;
    if (0 < (int)uStack_30) {
      do {
        FUN_006acc70((int)puVar7,uVar11,(undefined4 *)&uStack_38);
        uVar12 = CONCAT22(uStack_34,sStack_36);
        if (sStack_36 == -1) {
          pSVar6 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (DAT_007fa174,CONCAT31((int3)((uint)extraout_ECX >> 8),pSVar2[0x24]),
                              CONCAT22(0xffff,uStack_38),1);
          STBoatC::CmdToObj(pSVar6,3,&uStack_10);
        }
        else if (param_1 == 1) {
          pvVar8 = (void *)STAllPlayersC::GetObjPtr
                                     (DAT_007fa174,CONCAT31((int3)(uVar12 >> 8),pSVar2[0x24]),uVar12
                                      ,1);
          thunk_FUN_004162b0(pvVar8,auStack_1c,auStack_18,auStack_14);
          uStack_40 = auStack_1c[0];
          uStack_3e = auStack_18[0];
          uStack_3c = auStack_14[0];
          pSVar6 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (DAT_007fa174,
                              CONCAT31((int3)(CONCAT22(extraout_var,auStack_18[0]) >> 8),
                                       pSVar2[0x24]),CONCAT22(sStack_36,uStack_38),1);
          STBoatC::CmdToObj(pSVar6,4,&uStack_44);
        }
        else {
          pvVar8 = (void *)STAllPlayersC::GetObjPtr
                                     (DAT_007fa174,
                                      CONCAT31((int3)((uint)extraout_EDX_02 >> 8),pSVar2[0x24]),
                                      uVar12,1);
          uVar9 = thunk_FUN_004162b0(pvVar8,auStack_1c,auStack_18,auStack_14);
          pvVar8 = (void *)STAllPlayersC::GetObjPtr
                                     (DAT_007fa174,CONCAT31((int3)((uint)uVar9 >> 8),pSVar2[0x24]),
                                      CONCAT22(sStack_36,uStack_38),1);
          thunk_FUN_00490a00(pvVar8,auStack_1c[0],auStack_18[0],auStack_14[0]);
        }
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < (int)uStack_30);
    }
    uVar11 = puStack_c[3];
    uStack_24 = uVar11;
    if ((uVar11 != 0) && (uVar12 = 0, puVar7 = puStack_28, 0 < (int)uVar11)) {
      do {
        FUN_006acc70((int)puStack_c,uVar12,&uStack_8);
        pSVar6 = (STBoatC *)
                 STAllPlayersC::GetObjPtr
                           (DAT_007fa174,CONCAT31((int3)((uint)extraout_EDX_03 >> 8),pSVar2[0x24]),
                            uStack_8,1);
        STBoatC::CmdToObj(pSVar6,3,&uStack_10);
        uVar12 = uVar12 + 1;
        puVar7 = puStack_28;
      } while ((int)uVar12 < (int)uVar11);
    }
    if (puStack_20 != (uint *)0x0) {
      FUN_006ae110((byte *)puStack_20);
    }
    if (puStack_c != (uint *)0x0) {
      FUN_006ae110((byte *)puStack_c);
    }
    if (puVar7 != (uint *)0x0) {
      FUN_006ae110((byte *)puVar7);
    }
    g_currentExceptionFrame = IStack_88.previous;
    return;
  }
  g_currentExceptionFrame = IStack_88.previous;
  if (iVar3 == -0x5001fff7) {
    if (puStack_20 != (uint *)0x0) {
      FUN_006ae110((byte *)puStack_20);
    }
    if (puStack_c != (uint *)0x0) {
      FUN_006ae110((byte *)puStack_c);
    }
    if (puStack_28 != (uint *)0x0) {
      FUN_006ae110((byte *)puStack_28);
      return;
    }
  }
  else {
    iVar10 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x11d8,0,iVar3,&DAT_007a4ccc
                                ,s_STGroupBoatC__DistributeDock_007ac2bc);
    if (iVar10 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x11d9);
  }
  return;
}

