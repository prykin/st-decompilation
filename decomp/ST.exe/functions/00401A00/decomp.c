
undefined4 __thiscall STGroupBoatC::Scout(STGroupBoatC *this,int param_1)

{
  STGroupBoatC *pSVar1;
  code *pcVar2;
  STGroupBoatC *pSVar3;
  int iVar4;
  uint *puVar5;
  void *pvVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 extraout_ECX;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  STGroupBoatC *pSVar10;
  uint uVar11;
  InternalExceptionFrame IStack_80;
  undefined4 uStack_3c;
  undefined2 uStack_38;
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  uint *puStack_1c;
  STGroupBoatC *pSStack_18;
  undefined4 uStack_14;
  uint *puStack_10;
  uint uStack_c;
  uint uStack_8;
  
  uStack_8 = *(uint *)(*(int *)(this + 0x29) + 0xc);
  uStack_14 = 2;
  IStack_80.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_80;
  pSStack_18 = this;
  iVar4 = __setjmp3(IStack_80.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar3 = pSStack_18;
  if (iVar4 == 0) {
    if ((param_1 == 0) || (param_1 == 1)) {
      pSVar1 = pSStack_18 + 0x300;
      pSVar10 = pSStack_18 + 0x89;
      for (iVar4 = 0x15; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined4 *)pSVar10 = 0;
        pSVar10 = pSVar10 + 4;
      }
      *(undefined4 *)(pSStack_18 + 0x65) = 0;
      pSVar10 = pSStack_18 + 0x302;
      *(undefined2 *)(pSStack_18 + 0x2fa) = *(undefined2 *)(pSStack_18 + 0x1c1);
      *(undefined2 *)(pSStack_18 + 0x2fc) = *(undefined2 *)(pSStack_18 + 0x1c3);
      *(undefined2 *)(pSStack_18 + 0x2f8) = *(undefined2 *)(pSStack_18 + 0x1bf);
      thunk_FUN_0049a500(pSStack_18,(undefined2 *)(pSStack_18 + 0x2fe),(undefined2 *)pSVar1,
                         (undefined2 *)pSVar10);
      puStack_10 = Way3DGrpGetDistrPoint
                             (pSVar3,*(int *)(pSVar3 + 0x29),(int)*(short *)(pSVar3 + 0x2fe),
                              (int)*(short *)pSVar1,(int)*(short *)pSVar10,
                              (int)*(short *)(pSVar3 + 0x2f8),(int)*(short *)(pSVar3 + 0x2fa),
                              (int)*(short *)(pSVar3 + 0x2fc));
      if (puStack_10 == (uint *)0x0) {
        return 0;
      }
      puVar5 = Way3DGrpGetDistrPoint
                         (pSVar3,*(int *)(pSVar3 + 0x29),(int)*(short *)(pSVar3 + 0x2f8),
                          (int)*(short *)(pSVar3 + 0x2fa),(int)*(short *)(pSVar3 + 0x2fc),
                          (int)*(short *)(pSVar3 + 0x2fe),(int)*(short *)pSVar1,
                          (int)*(short *)pSVar10);
      puStack_1c = puVar5;
      if (puVar5 == (uint *)0x0) {
        FUN_006ae110((byte *)puStack_10);
        return 0;
      }
      uVar11 = 0;
      uStack_3c = *(undefined4 *)(DAT_00802a38 + 0xe4);
      if (0 < (int)uStack_8) {
        do {
          FUN_006acc70((int)puStack_10,uVar11,(undefined4 *)&uStack_24);
          FUN_006acc70((int)puVar5,uVar11,(undefined4 *)&uStack_2c);
          FUN_006acc70(*(int *)(pSVar3 + 0x29),uVar11,&uStack_c);
          if ((short)uStack_c != -1) {
            pvVar6 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX >> 8),
                                                         pSVar3[0x24]),uStack_c,1);
            if (pvVar6 == (void *)0x0) {
              RaiseInternalException
                        (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xd2a);
            }
            uStack_38 = uStack_24;
            uStack_36 = uStack_22;
            uStack_32 = uStack_2c;
            uStack_34 = uStack_20;
            uStack_30 = uStack_2a;
            uStack_2e = uStack_28;
            thunk_FUN_0045ef00(pvVar6,8,&uStack_3c);
            puVar5 = puStack_1c;
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)uStack_8);
      }
      FUN_006ae110((byte *)puStack_10);
      FUN_006ae110((byte *)puVar5);
    }
    if (*(uint *)(DAT_00802a38 + 0xe4) % 0x19 == 3) {
      uVar11 = 0;
      if (0 < (int)uStack_8) {
        do {
          FUN_006acc70(*(int *)(pSVar3 + 0x29),uVar11,&uStack_c);
          if ((short)uStack_c != -1) {
            pvVar6 = (void *)thunk_FUN_0042b620(CONCAT31((int3)(uStack_c >> 8),pSVar3[0x24]),
                                                uStack_c,1);
            if (pvVar6 == (void *)0x0) {
              RaiseInternalException
                        (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xd3d);
            }
            iVar4 = thunk_FUN_0045ff10((int)pvVar6);
            if (iVar4 == 8) break;
            uVar7 = thunk_FUN_0045f400(pvVar6,8);
            if (uVar7 == 1) break;
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)uStack_8);
      }
      if (uVar11 == uStack_8) {
        uStack_14 = 0;
      }
    }
    g_currentExceptionFrame = IStack_80.previous;
  }
  else {
    g_currentExceptionFrame = IStack_80.previous;
    if (iVar4 != -0x5001fff7) {
      iVar8 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0xd46,0,iVar4,&DAT_007a4ccc
                                 ,s_STGroupBoatC__Scout_007ac178);
      if (iVar8 != 0) {
        pcVar2 = (code *)swi(3);
        uVar9 = (*pcVar2)();
        return uVar9;
      }
      RaiseInternalException(iVar4,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xd47);
      return 0xffffffff;
    }
  }
  return uStack_14;
}

