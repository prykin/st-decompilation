
undefined4 __thiscall STGroupBoatC::GrpBuild(STGroupBoatC *this,int param_1)

{
  short sVar1;
  short sVar2;
  code *pcVar3;
  STGroupBoatC *pSVar4;
  uint *puVar5;
  short sVar6;
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
  STGroupBoatC *pSVar14;
  void *unaff_EDI;
  STGroupBoatC *pSVar15;
  undefined4 *puVar16;
  InternalExceptionFrame IStack_8c;
  undefined4 uStack_48;
  undefined2 uStack_44;
  undefined2 uStack_42;
  undefined2 uStack_40;
  undefined4 uStack_3e;
  undefined4 uStack_3a;
  char acStack_36 [14];
  undefined1 uStack_28;
  undefined2 uStack_27;
  STGroupBoatC *pSStack_24;
  undefined4 uStack_20;
  uint *puStack_1c;
  int iStack_18;
  uint uStack_14;
  uint *puStack_10;
  uint uStack_c;
  uint uStack_8;
  
  uStack_14 = *(uint *)(*(int *)(this + 0x29) + 0xc);
  puStack_10 = (uint *)0x0;
  puStack_1c = (uint *)0x0;
  IStack_8c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_8c;
  pSStack_24 = this;
  iVar7 = __setjmp3(IStack_8c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar4 = pSStack_24;
  if (iVar7 != 0) {
    g_currentExceptionFrame = IStack_8c.previous;
    iVar10 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x944,0,iVar7,&DAT_007a4ccc,
                                s_STGroupBoatC__GrpBuild_007abfdc);
    if (iVar10 == 0) {
      RaiseInternalException(iVar7,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x945);
      return 0xffffffff;
    }
    pcVar3 = (code *)swi(3);
    uVar11 = (*pcVar3)();
    return uVar11;
  }
  if ((param_1 == 0) || (param_1 == 1)) {
    pSVar14 = pSStack_24 + 0x89;
    for (iVar7 = 0x15; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pSVar14 = 0;
      pSVar14 = pSVar14 + 4;
    }
    *(undefined4 *)(pSStack_24 + 0x65) = 0;
    pSVar14 = pSStack_24 + 0x137;
    pSVar15 = pSStack_24 + 0x276;
    for (iVar7 = 7; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pSVar15 = *(undefined4 *)pSVar14;
      pSVar14 = pSVar14 + 4;
      pSVar15 = pSVar15 + 4;
    }
    *(undefined2 *)pSVar15 = *(undefined2 *)pSVar14;
    pSVar15[2] = pSVar14[2];
    uStack_20 = *(undefined4 *)(DAT_00802a38 + 0xe4);
    uStack_44 = *(undefined2 *)(pSStack_24 + 0x137);
    uStack_48 = *(undefined4 *)(DAT_00802a38 + 0xe4);
    uStack_42 = *(undefined2 *)(pSStack_24 + 0x139);
    uStack_3e = *(undefined4 *)(pSStack_24 + 0x13d);
    uStack_27 = *(undefined2 *)(pSStack_24 + 0x154);
    uStack_40 = *(undefined2 *)(pSStack_24 + 0x13b);
    uStack_3a = *(undefined4 *)(pSStack_24 + 0x141);
    _strncpy(acStack_36,(char *)(pSStack_24 + 0x145),0xe);
    uVar12 = 0;
    uStack_28 = 0;
    uStack_c = 0;
    puVar9 = puStack_1c;
    if (uStack_14 != 0) {
      do {
        FUN_006acc70(*(int *)(pSVar4 + 0x29),uVar12,&uStack_8);
        if ((short)uStack_8 != -1) {
          piVar8 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX >> 8),pSVar4[0x24]),
                                             uStack_8,1);
          if (piVar8 == (int *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x90f);
          }
          iVar7 = (**(code **)(*piVar8 + 0x2c))();
          if (((iVar7 == 0xc) || (iVar7 = (**(code **)(*piVar8 + 0x2c))(), iVar7 == 0x18)) ||
             (iVar7 = (**(code **)(*piVar8 + 0x2c))(), iVar7 == 0x19)) {
            if (puVar9 == (uint *)0x0) {
              puVar9 = FUN_006ae290((uint *)0x0,1,2,1);
              puStack_1c = puVar9;
            }
            FUN_006ae1c0(puVar9,&uStack_8);
            puVar16 = &uStack_48;
            iVar7 = 0x11;
          }
          else {
            iVar7 = thunk_FUN_00490d90((int)piVar8);
            if (iVar7 != 0) {
              if (puStack_10 == (uint *)0x0) {
                puStack_10 = FUN_006ae290((uint *)0x0,1,2,1);
              }
              FUN_006ae1c0(puStack_10,&uStack_8);
              goto LAB_0049cf10;
            }
            puVar16 = &uStack_20;
            iVar7 = 3;
          }
          thunk_FUN_0045ef00(piVar8,iVar7,puVar16);
        }
LAB_0049cf10:
        uStack_c = uStack_c + 1;
        uVar12 = uStack_c & 0xffff;
      } while (uVar12 < uStack_14);
    }
    puVar5 = puStack_10;
    STAllPlayersC::RegisterPGPair
              (DAT_007fa174,CONCAT31((int3)(uVar12 >> 8),pSVar4[0x24]),puVar9,puStack_10);
    if (puVar9 != (uint *)0x0) {
      FUN_006ae110((byte *)puVar9);
    }
    if (puVar5 != (uint *)0x0) {
      FUN_006ae110((byte *)puVar5);
    }
  }
  uVar12 = 0;
  uStack_c = 2;
  if (*(uint *)(DAT_00802a38 + 0xe4) % 0x32 == 0) {
    sVar6 = *(short *)(pSVar4 + 0x276);
    sVar1 = *(short *)(pSVar4 + 0x27a);
    sVar2 = *(short *)(pSVar4 + 0x278);
    if ((((sVar6 < 0) || (DAT_007fb240 <= sVar6)) ||
        ((sVar2 < 0 || ((DAT_007fb242 <= sVar2 || (sVar1 < 0)))))) || (DAT_007fb244 <= sVar1)) {
      sVar6 = -1;
    }
    else {
      sVar6 = *(short *)(DAT_007fb280 +
                        ((int)sVar2 * (int)DAT_007fb278 + (int)sVar1 * (int)DAT_007fb27e +
                        (int)sVar6) * 2);
    }
    if (sVar6 != 0) {
      g_currentExceptionFrame = IStack_8c.previous;
      return 0;
    }
    iStack_18 = 0;
    if (uStack_14 != 0) {
      uVar13 = 0;
      do {
        FUN_006acc70(*(int *)(pSVar4 + 0x29),uVar13,&uStack_8);
        if ((short)uStack_8 != -1) {
          piVar8 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX >> 8),pSVar4[0x24]),
                                             uStack_8,1);
          if (piVar8 == (int *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x938);
          }
          iVar7 = (**(code **)(*piVar8 + 0x2c))();
          if (((((iVar7 == 0xc) || (iVar7 = (**(code **)(*piVar8 + 0x2c))(), iVar7 == 0x18)) ||
               (iVar7 = (**(code **)(*piVar8 + 0x2c))(), iVar7 == 0x19)) &&
              (iVar7 = thunk_FUN_0045ff10((int)piVar8), iVar7 == 0x11)) ||
             (uVar13 = thunk_FUN_0045f400(piVar8,0x11), uVar13 == 1)) {
            iStack_18 = iStack_18 + 1;
          }
        }
        uVar12 = uVar12 + 1;
        uVar13 = uVar12 & 0xffff;
      } while (uVar13 < uStack_14);
    }
    if (iStack_18 == 0) {
      uStack_c = 0;
    }
  }
  g_currentExceptionFrame = IStack_8c.previous;
  return uStack_c;
}

