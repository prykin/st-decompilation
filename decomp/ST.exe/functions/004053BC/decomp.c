
undefined4 __thiscall STGroupBoatC::GrpUnLoadRC(STGroupBoatC *this,int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  code *pcVar4;
  STGroupBoatC *pSVar5;
  uint *puVar6;
  int iVar7;
  int *piVar8;
  uint *puVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 extraout_ECX;
  uint uVar12;
  undefined4 extraout_EDX;
  uint uVar13;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  STGroupBoatC *pSVar14;
  undefined4 *puVar15;
  InternalExceptionFrame IStack_7c;
  undefined4 uStack_38;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  STGroupBoatC *pSStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  int iStack_1c;
  int iStack_18;
  uint *puStack_14;
  uint uStack_10;
  uint *puStack_c;
  uint uStack_8;
  
  uStack_10 = *(uint *)(*(int *)(this + 0x29) + 0xc);
  puStack_c = (uint *)0x0;
  puStack_14 = (uint *)0x0;
  IStack_7c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_7c;
  pSStack_2c = this;
  iVar7 = __setjmp3(IStack_7c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar5 = pSStack_2c;
  if (iVar7 != 0) {
    g_currentExceptionFrame = IStack_7c.previous;
    iVar10 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x99a,0,iVar7,&DAT_007a4ccc,
                                s_STGroupBoatC__GrpUnLoadRC_007abff8);
    if (iVar10 == 0) {
      RaiseInternalException(iVar7,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x99b);
      return 0xffffffff;
    }
    pcVar4 = (code *)swi(3);
    uVar11 = (*pcVar4)();
    return uVar11;
  }
  if ((param_1 == 0) || (param_1 == 1)) {
    uVar12 = 0;
    pSVar14 = pSStack_2c + 0x89;
    for (iVar7 = 0x15; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pSVar14 = 0;
      pSVar14 = pSVar14 + 4;
    }
    *(undefined4 *)(pSStack_2c + 0x65) = 0;
    uStack_20 = 0;
    *(undefined4 *)(pSStack_2c + 0x295) = *(undefined4 *)(pSStack_2c + 0x156);
    *(undefined2 *)(pSStack_2c + 0x299) = *(undefined2 *)(pSStack_2c + 0x15a);
    uStack_34 = *(undefined2 *)(pSStack_2c + 0x156);
    uStack_38 = *(undefined4 *)(DAT_00802a38 + 0xe4);
    uStack_30 = *(undefined2 *)(pSStack_2c + 0x15a);
    uStack_32 = *(undefined2 *)(pSStack_2c + 0x158);
    puVar9 = puStack_14;
    uStack_24 = uStack_38;
    if (uStack_10 != 0) {
      do {
        FUN_006acc70(*(int *)(pSVar5 + 0x29),uVar12,&uStack_8);
        if ((short)uStack_8 != -1) {
          piVar8 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX >> 8),pSVar5[0x24]),
                                             uStack_8,1);
          if (piVar8 == (int *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x960);
          }
          iVar7 = (**(code **)(*piVar8 + 0x2c))();
          if (((iVar7 == 8) || (iVar7 = (**(code **)(*piVar8 + 0x2c))(), iVar7 == 0x14)) ||
             (iVar7 = (**(code **)(*piVar8 + 0x2c))(), iVar7 == 0x1a)) {
            if (puVar9 == (uint *)0x0) {
              puVar9 = FUN_006ae290((uint *)0x0,1,2,1);
              puStack_14 = puVar9;
            }
            FUN_006ae1c0(puVar9,&uStack_8);
            puVar15 = &uStack_38;
            iVar7 = 0xd;
          }
          else {
            iVar7 = thunk_FUN_00490d90((int)piVar8);
            if (iVar7 != 0) {
              if (puStack_c == (uint *)0x0) {
                puStack_c = FUN_006ae290((uint *)0x0,1,2,1);
              }
              FUN_006ae1c0(puStack_c,&uStack_8);
              goto LAB_0049d3ca;
            }
            puVar15 = &uStack_24;
            iVar7 = 3;
          }
          thunk_FUN_0045ef00(piVar8,iVar7,puVar15);
        }
LAB_0049d3ca:
        uStack_20 = uStack_20 + 1;
        uVar12 = uStack_20 & 0xffff;
      } while (uVar12 < uStack_10);
    }
    puVar6 = puStack_c;
    STAllPlayersC::RegisterPGPair
              (DAT_007fa174,CONCAT31((int3)(uVar12 >> 8),pSVar5[0x24]),puVar9,puStack_c);
    if (puVar9 != (uint *)0x0) {
      FUN_006ae110((byte *)puVar9);
    }
    if (puVar6 != (uint *)0x0) {
      FUN_006ae110((byte *)puVar6);
    }
  }
  uStack_20 = 2;
  if (*(uint *)(DAT_00802a38 + 0xe4) % 100 == 0) {
    sVar1 = *(short *)(pSVar5 + 0x295);
    sVar2 = *(short *)(pSVar5 + 0x299);
    sVar3 = *(short *)(pSVar5 + 0x297);
    if ((((sVar1 < 0) || (DAT_007fb240 <= sVar1)) ||
        ((sVar3 < 0 || ((DAT_007fb242 <= sVar3 || (sVar2 < 0)))))) || (DAT_007fb244 <= sVar2)) {
      piVar8 = (int *)0x0;
    }
    else {
      piVar8 = *(int **)(DAT_007fb248 +
                        ((int)DAT_007fb246 * (int)sVar2 + (int)DAT_007fb240 * (int)sVar3 +
                        (int)sVar1) * 8);
    }
    uVar12 = 0;
    if (((piVar8 == (int *)0x0) || (piVar8[9] != (int)(char)pSVar5[0x24])) ||
       ((iVar7 = (**(code **)(*piVar8 + 0x2c))(), iVar7 != 0x3b &&
        (iVar7 = (**(code **)(*piVar8 + 0x2c))(), iVar7 != 0x60)))) {
      uStack_20 = 0;
    }
    else {
      iStack_28 = 0;
      iStack_1c = 0;
      iStack_18 = 0;
      if (uStack_10 != 0) {
        uVar13 = 0;
        do {
          FUN_006acc70(*(int *)(pSVar5 + 0x29),uVar13,&uStack_8);
          if ((short)uStack_8 != -1) {
            piVar8 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX >> 8),pSVar5[0x24]
                                                       ),uStack_8,1);
            if (piVar8 == (int *)0x0) {
              RaiseInternalException
                        (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x989);
            }
            iVar7 = (**(code **)(*piVar8 + 0x2c))();
            if (((iVar7 == 8) || (iVar7 = (**(code **)(*piVar8 + 0x2c))(), iVar7 == 0x14)) ||
               (iVar7 = (**(code **)(*piVar8 + 0x2c))(), iVar7 == 0x1a)) {
              iStack_18 = iStack_18 + 1;
              iStack_1c = iStack_1c +
                          *(int *)((int)piVar8 + 0x7da) + *(int *)((int)piVar8 + 0x7d6) +
                          *(int *)((int)piVar8 + 0x7d2);
              if (0 < iStack_1c) break;
              iVar7 = thunk_FUN_0045ff10((int)piVar8);
              if (iVar7 == 0xd) {
                iStack_28 = 1;
                break;
              }
            }
          }
          uVar12 = uVar12 + 1;
          uVar13 = uVar12 & 0xffff;
        } while (uVar13 < uStack_10);
      }
      if ((iStack_18 == 0) || ((iStack_1c == 0 && (iStack_28 == 0)))) {
        g_currentExceptionFrame = IStack_7c.previous;
        return 0;
      }
    }
  }
  g_currentExceptionFrame = IStack_7c.previous;
  return uStack_20;
}

