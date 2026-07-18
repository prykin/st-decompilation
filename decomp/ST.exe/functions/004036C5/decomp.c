
undefined4 __thiscall STGroupBoatC::Capture(STGroupBoatC *this,int param_1)

{
  code *pcVar1;
  STGroupBoatC *pSVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  uint *puVar6;
  void *pvVar7;
  int iVar8;
  undefined4 uVar9;
  undefined2 extraout_var;
  undefined4 extraout_ECX;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 uVar10;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  uint uVar11;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  uint uVar12;
  undefined4 unaff_ESI;
  undefined4 *puVar13;
  void *unaff_EDI;
  STGroupBoatC *pSVar14;
  undefined4 *puVar15;
  undefined4 auStack_9c [5];
  int iStack_87;
  undefined4 uStack_7c;
  undefined4 auStack_78 [16];
  STGroupBoatC *pSStack_38;
  void *pvStack_34;
  undefined4 uStack_30;
  STGroupBoatC SStack_2c;
  undefined2 uStack_2b;
  undefined4 uStack_29;
  undefined4 uStack_24;
  uint *puStack_20;
  int iStack_1c;
  uint *puStack_18;
  undefined4 uStack_14;
  uint uStack_10;
  uint uStack_c;
  uint uStack_8;
  
  uStack_c = *(uint *)(*(int *)(this + 0x29) + 0xc);
  puStack_18 = (uint *)0x0;
  puStack_20 = (uint *)0x0;
  iStack_1c = 0;
  uStack_24 = 2;
  uStack_7c = DAT_00858df8;
  DAT_00858df8 = &uStack_7c;
  pSStack_38 = this;
  iVar4 = __setjmp3(auStack_78,0,unaff_EDI,unaff_ESI);
  pSVar2 = pSStack_38;
  if (iVar4 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_7c;
    iVar8 = FUN_006ad4d0(s_E____titans_wlad_to_grpb_cpp_007abe3c,0xbf4,0,iVar4,&DAT_007a4ccc);
    if (iVar8 == 0) {
      FUN_006a5e40(iVar4,0,0x7abe3c,0xbf5);
      return 0xffffffff;
    }
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return uVar9;
  }
  if ((param_1 == 0) || (uVar9 = extraout_EDX, uVar10 = extraout_var, param_1 == 1)) {
    pSVar14 = pSStack_38 + 0x89;
    for (iVar4 = 0x15; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pSVar14 = 0;
      pSVar14 = pSVar14 + 4;
    }
    *(undefined4 *)(pSStack_38 + 0x65) = 0;
    uStack_10 = 0;
    *(undefined4 *)(pSStack_38 + 0x2c3) = *(undefined4 *)(pSStack_38 + 0x192);
    *(undefined2 *)(pSStack_38 + 0x2c7) = *(undefined2 *)(pSStack_38 + 0x196);
    pSStack_38[0x2c9] = pSStack_38[0x198];
    SStack_2c = pSStack_38[0x192];
    uStack_2b = *(undefined2 *)(pSStack_38 + 0x193);
    *(undefined4 *)(pSStack_38 + 0x2ca) = 0;
    uStack_30 = *(undefined4 *)(DAT_00802a38 + 0xe4);
    uStack_29 = *(undefined4 *)(pSStack_38 + 0x195);
    puVar6 = puStack_20;
    uStack_14 = uStack_30;
    if (uStack_c != 0) {
      uVar11 = 0;
      do {
        FUN_006acc70(*(int *)(pSVar2 + 0x29),uVar11,&uStack_8);
        if ((short)uStack_8 != -1) {
          piVar5 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX >> 8),pSVar2[0x24]),
                                             uStack_8,1);
          if (piVar5 == (int *)0x0) {
            FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xbb4);
          }
          iVar4 = (**(code **)(*piVar5 + 0x2c))();
          if (((iVar4 == 6) || (iVar4 = (**(code **)(*piVar5 + 0x2c))(), iVar4 == 0x12)) ||
             (iVar4 = (**(code **)(*piVar5 + 0x2c))(), iVar4 == 0x22)) {
            if (puVar6 == (uint *)0x0) {
              puVar6 = FUN_006ae290((uint *)0x0,1,2,1);
              puStack_20 = puVar6;
            }
            FUN_006ae1c0(puVar6,&uStack_8);
            puVar13 = &uStack_30;
            iVar4 = 9;
          }
          else {
            iVar4 = thunk_FUN_00490d90((int)piVar5);
            if (iVar4 != 0) {
              if (puStack_18 == (uint *)0x0) {
                puStack_18 = FUN_006ae290((uint *)0x0,1,2,1);
              }
              FUN_006ae1c0(puStack_18,&uStack_8);
              goto LAB_0049f2b2;
            }
            puVar13 = &uStack_14;
            iVar4 = 3;
          }
          thunk_FUN_0045ef00(piVar5,iVar4,puVar13);
        }
LAB_0049f2b2:
        uStack_10 = uStack_10 + 1;
        uVar11 = uStack_10 & 0xffff;
      } while (uVar11 < uStack_c);
    }
    puVar3 = puStack_18;
    STAllPlayersC::RegisterPGPair
              (DAT_007fa174,CONCAT31((int3)(uStack_c >> 8),pSVar2[0x24]),puVar6,puStack_18);
    uVar9 = extraout_EDX_00;
    uVar10 = extraout_var_00;
    if (puVar6 != (uint *)0x0) {
      FUN_006ae110((byte *)puVar6);
      uVar9 = extraout_EDX_01;
      uVar10 = extraout_var_01;
    }
    if (puVar3 != (uint *)0x0) {
      FUN_006ae110((byte *)puVar3);
      uVar9 = extraout_EDX_02;
      uVar10 = extraout_var_02;
    }
  }
  uVar11 = 0;
  if (*(int *)(pSVar2 + 0x2ca) == 0) {
    piVar5 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)uVar9 >> 8),pSVar2[0x2c3]),
                                       CONCAT22(uVar10,*(undefined2 *)(pSVar2 + 0x2c4)),1);
    if (((piVar5 == (int *)0x0) || (piVar5[6] != *(int *)(pSVar2 + 0x2c6))) ||
       (iVar4 = (**(code **)(*piVar5 + 0x108))((int)(char)pSVar2[0x24]), iVar4 == 0)) {
      *(undefined4 *)(pSVar2 + 0x2ca) = 1;
      uStack_10 = 0;
      uStack_14 = *(undefined4 *)(DAT_00802a38 + 0xe4);
      if (0 < (int)uStack_c) {
        uVar11 = 0;
        do {
          FUN_006acc70(*(int *)(pSVar2 + 0x29),uVar11,&uStack_8);
          if ((short)uStack_8 != -1) {
            pvVar7 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX_03 >> 8),
                                                         pSVar2[0x24]),uStack_8,1);
            pvStack_34 = pvVar7;
            if (pvVar7 == (void *)0x0) {
              FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xbda);
            }
            iVar4 = thunk_FUN_0045ff10((int)pvVar7);
            if (iVar4 == 9) {
              puVar13 = (undefined4 *)((int)pvVar7 + 0x5fc);
              puVar15 = auStack_9c;
              for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar15 = *puVar13;
                puVar13 = puVar13 + 1;
                puVar15 = puVar15 + 1;
              }
              *(undefined1 *)puVar15 = *(undefined1 *)puVar13;
              pvVar7 = pvStack_34;
              if (3 < iStack_87) goto LAB_0049f3f5;
            }
            thunk_FUN_0045ef00(pvVar7,3,&uStack_14);
          }
LAB_0049f3f5:
          uStack_10 = uStack_10 + 1;
          uVar11 = uStack_10 & 0xffff;
          if ((int)uStack_c <= (int)uVar11) {
            DAT_00858df8 = (undefined4 *)uStack_7c;
            return uStack_24;
          }
        } while( true );
      }
    }
  }
  else if (*(uint *)(DAT_00802a38 + 0xe4) % 0x14 == 5) {
    if (0 < (int)uStack_c) {
      uVar12 = 0;
      do {
        FUN_006acc70(*(int *)(pSVar2 + 0x29),uVar12,&uStack_8);
        if ((short)uStack_8 != -1) {
          pvVar7 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX_00 >> 8),
                                                       pSVar2[0x24]),uStack_8,1);
          if (pvVar7 == (void *)0x0) {
            FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xbeb);
          }
          iVar4 = thunk_FUN_0045ff10((int)pvVar7);
          if ((iVar4 == 9) || (uVar12 = thunk_FUN_0045f400(pvVar7,9), uVar12 == 1)) {
            iStack_1c = iStack_1c + 1;
            break;
          }
        }
        uVar11 = uVar11 + 1;
        uVar12 = uVar11 & 0xffff;
      } while ((int)uVar12 < (int)uStack_c);
    }
    if (iStack_1c == 0) {
      uStack_24 = 0;
    }
  }
  DAT_00858df8 = (undefined4 *)uStack_7c;
  return uStack_24;
}

