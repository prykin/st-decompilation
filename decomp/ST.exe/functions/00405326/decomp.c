
undefined4 __thiscall STGroupBoatC::GrpRepSub(STGroupBoatC *this,int param_1)

{
  code *pcVar1;
  STGroupBoatC *pSVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  STGroupBoatC *pSVar10;
  uint uVar11;
  InternalExceptionFrame IStack_84;
  undefined4 uStack_40;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined2 uStack_38;
  undefined4 uStack_36;
  STGroupBoatC *pSStack_30;
  int iStack_2c;
  int iStack_28;
  uint *puStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int *piStack_14;
  uint *puStack_10;
  uint uStack_c;
  int *piStack_8;
  
  piStack_14 = *(int **)(*(int *)(this + 0x29) + 0xc);
  puStack_10 = (uint *)0x0;
  puStack_24 = (uint *)0x0;
  iStack_28 = 0;
  iStack_2c = 0;
  uStack_1c = 2;
  IStack_84.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_84;
  pSStack_30 = this;
  iVar3 = __setjmp3(IStack_84.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = pSStack_30;
  if (iVar3 != 0) {
    g_currentExceptionFrame = IStack_84.previous;
    if (iVar3 == -0x5001fff7) {
      return uStack_1c;
    }
    iVar7 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0xda5,0,iVar3,&DAT_007a4ccc,
                               s_STGroupBoatC__GrpRepSub_007ac190);
    if (iVar7 != 0) {
      pcVar1 = (code *)swi(3);
      uVar8 = (*pcVar1)();
      return uVar8;
    }
    RaiseInternalException(iVar3,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xda6);
    return 0xffffffff;
  }
  if ((param_1 != 1) && (param_1 != 0)) goto LAB_004a0c5b;
  pSVar10 = pSStack_30 + 0x89;
  for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pSVar10 = 0;
    pSVar10 = pSVar10 + 4;
  }
  *(undefined4 *)(pSStack_30 + 0x65) = 0;
  iVar3 = FUN_006e62d0(DAT_00802a38,*(int *)(pSStack_30 + 0x1c5),(int *)&piStack_8);
  if (iVar3 == -4) {
    return 0;
  }
  thunk_FUN_004162f0(piStack_8,(undefined2 *)(pSVar2 + 0x304),(undefined2 *)(pSVar2 + 0x306),
                     (undefined2 *)(pSVar2 + 0x308));
  uStack_20 = 0;
  *(int *)(pSVar2 + 0x30a) = piStack_8[6];
  uStack_40 = *(undefined4 *)((int)DAT_00802a38 + 0xe4);
  piVar9 = piStack_8;
  puVar5 = puStack_24;
  uStack_18 = uStack_40;
  if (0 < (int)piStack_14) {
    do {
      FUN_006acc70(*(int *)(pSVar2 + 0x29),uStack_20,&uStack_c);
      if ((short)uStack_c != -1) {
        piStack_8 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX >> 8),pSVar2[0x24])
                                              ,uStack_c,1);
        if (piStack_8 == (int *)0x0) {
          RaiseInternalException
                    (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xd64);
        }
        iVar3 = (**(code **)(*piStack_8 + 0xf8))();
        if (iVar3 != 0) {
          iVar3 = thunk_FUN_00490d90((int)piStack_8);
          if (iVar3 == 0) {
            iVar3 = (**(code **)(*piStack_8 + 0x2c))();
            if ((iVar3 == 7) || (iVar3 == 0x13)) {
              iVar3 = thunk_FUN_00492370((int)piStack_8);
              if (iVar3 == 0) {
                uStack_3a = *(undefined2 *)(pSVar2 + 0x306);
                uStack_3c = *(undefined2 *)(pSVar2 + 0x304);
                uStack_38 = *(undefined2 *)(pSVar2 + 0x308);
                uStack_36 = *(undefined4 *)(pSVar2 + 0x30a);
                thunk_FUN_0045ef00(piStack_8,0xe,&uStack_40);
                puVar4 = puStack_10;
                if (puStack_10 == (uint *)0x0) {
                  puVar4 = FUN_006ae290((uint *)0x0,1,2,1);
                  puStack_10 = puVar4;
                }
                goto LAB_004a0b93;
              }
            }
            else {
              thunk_FUN_0045ef00(piStack_8,3,&uStack_18);
            }
          }
          else {
            puVar4 = puVar5;
            if (puVar5 == (uint *)0x0) {
              puVar5 = FUN_006ae290((uint *)0x0,1,2,1);
              puVar4 = puVar5;
              puStack_24 = puVar5;
            }
LAB_004a0b93:
            FUN_006ae1c0(puVar4,&uStack_c);
          }
        }
      }
      uStack_20 = uStack_20 + 1;
      piVar9 = piStack_14;
    } while ((int)uStack_20 < (int)piStack_14);
  }
  puVar4 = puStack_10;
  if (puStack_10 == (uint *)0x0) {
LAB_004a0bcc:
    if (puVar5 != (uint *)0x0) {
      piStack_14 = (int *)puVar5[3];
      uVar11 = 0;
      if (0 < (int)piStack_14) {
        do {
          FUN_006acc70((int)puVar5,uVar11,&uStack_c);
          piStack_8 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX >> 8),
                                                         pSVar2[0x24]),uStack_c,1);
          thunk_FUN_0045ef00(piStack_8,3,&uStack_18);
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)piStack_14);
      }
      uStack_1c = 0;
    }
    puVar4 = puStack_10;
    if (puStack_10 != (uint *)0x0) goto LAB_004a0c2f;
    if (puVar5 == (uint *)0x0) {
      uStack_1c = 0;
    }
LAB_004a0c2b:
    if (puVar4 != (uint *)0x0) goto LAB_004a0c2f;
  }
  else {
    if (puVar5 != (uint *)0x0) {
      STAllPlayersC::RegisterPGPair
                (DAT_007fa174,CONCAT31((int3)((uint)piVar9 >> 8),pSVar2[0x24]),puStack_10,puVar5);
      goto LAB_004a0c2b;
    }
    if (puStack_10 == (uint *)0x0) goto LAB_004a0bcc;
LAB_004a0c2f:
    FUN_006ae110((byte *)puVar4);
  }
  if (puVar5 != (uint *)0x0) {
    FUN_006ae110((byte *)puVar5);
  }
  RaiseInternalException(-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xd8f);
LAB_004a0c5b:
  piVar9 = piStack_14;
  if (*(uint *)((int)DAT_00802a38 + 0xe4) % 0x14 == 4) {
    uVar11 = 0;
    if (0 < (int)piStack_14) {
      do {
        FUN_006acc70(*(int *)(pSVar2 + 0x29),uVar11,&uStack_c);
        if ((short)uStack_c != -1) {
          piStack_8 = (int *)thunk_FUN_0042b620(CONCAT31((int3)(uStack_c >> 8),pSVar2[0x24]),
                                                uStack_c,1);
          if (piStack_8 == (int *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xd97);
          }
          iVar3 = (**(code **)(*piStack_8 + 0xf8))();
          if ((iVar3 != 0) &&
             (((iVar3 = (**(code **)(*piStack_8 + 0x2c))(), iVar3 == 7 || (iVar3 == 0x13)) ||
              (iVar3 == 0x1b)))) {
            iStack_28 = 1;
            iVar3 = thunk_FUN_0045ff10((int)piStack_8);
            if ((iVar3 == 0xe) || (uVar6 = thunk_FUN_0045f400(piStack_8,0xe), uVar6 == 1)) {
              iStack_2c = 1;
              break;
            }
          }
        }
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < (int)piVar9);
    }
    if ((iStack_28 == 0) || (iStack_2c == 0)) {
      uStack_1c = 0;
    }
  }
  g_currentExceptionFrame = IStack_84.previous;
  return uStack_1c;
}

