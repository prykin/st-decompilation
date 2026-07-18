
uint * __thiscall STGroupBoatC::GrpUnLoadObj(STGroupBoatC *this,int param_1)

{
  code *pcVar1;
  STGroupBoatC *pSVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  uint uVar6;
  void *this_00;
  uint uVar7;
  int iVar8;
  undefined4 extraout_ECX;
  uint uVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  STGroupBoatC *pSVar10;
  uint *puVar11;
  undefined4 uStack_78;
  undefined4 auStack_74 [16];
  undefined4 uStack_34;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  STGroupBoatC *pSStack_28;
  int iStack_24;
  uint uStack_20;
  uint *puStack_1c;
  undefined4 uStack_18;
  uint uStack_14;
  uint *puStack_10;
  uint *puStack_c;
  uint uStack_8;
  
  uStack_14 = *(uint *)(*(int *)(this + 0x29) + 0xc);
  puStack_10 = (uint *)0x0;
  puStack_c = (uint *)0x0;
  iStack_24 = 0;
  puStack_1c = (uint *)0x2;
  uStack_78 = DAT_00858df8;
  DAT_00858df8 = &uStack_78;
  pSStack_28 = this;
  iVar3 = __setjmp3(auStack_74,0,unaff_EDI,unaff_ESI);
  pSVar2 = pSStack_28;
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_78;
    if (iVar3 == -0x5001fff7) {
      return puStack_1c;
    }
    iVar8 = FUN_006ad4d0(s_E____titans_wlad_to_grpb_cpp_007abe3c,0xb01,0,iVar3,&DAT_007a4ccc);
    if (iVar8 != 0) {
      pcVar1 = (code *)swi(3);
      puVar5 = (uint *)(*pcVar1)();
      return puVar5;
    }
    FUN_006a5e40(iVar3,0,0x7abe3c,0xb02);
    return (uint *)0xffffffff;
  }
  if ((param_1 != 1) && (param_1 != 0)) goto LAB_0049e7c1;
  pSVar10 = pSStack_28 + 0x89;
  for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pSVar10 = 0;
    pSVar10 = pSVar10 + 4;
  }
  uStack_30 = *(undefined2 *)(pSStack_28 + 0x17c);
  *(undefined4 *)(pSStack_28 + 0x65) = 0;
  *(undefined2 *)(pSStack_28 + 0x2ad) = uStack_30;
  uStack_2e = *(undefined2 *)(pSStack_28 + 0x17e);
  *(undefined2 *)(pSStack_28 + 0x2af) = uStack_2e;
  uStack_2c = *(undefined2 *)(pSStack_28 + 0x180);
  *(undefined2 *)(pSStack_28 + 0x2b1) = uStack_2c;
  uStack_34 = *(undefined4 *)(DAT_00802a38 + 0xe4);
  uStack_20 = 0;
  uStack_18 = uStack_34;
  if (0 < (int)uStack_14) {
    do {
      FUN_006acc70(*(int *)(pSVar2 + 0x29),uStack_20,&uStack_8);
      if ((short)uStack_8 != -1) {
        piVar4 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX >> 8),pSVar2[0x24]),
                                           uStack_8,1);
        if (piVar4 == (int *)0x0) {
          FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xabe);
        }
        iVar3 = (**(code **)(*piVar4 + 0xf8))();
        if (iVar3 != 0) {
          iVar3 = (**(code **)(*piVar4 + 0x2c))();
          if ((((iVar3 == 7) || (iVar3 == 0x13)) || (iVar3 == 0x1b)) &&
             (iVar3 = thunk_FUN_00492370((int)piVar4), iVar3 != 0)) {
            thunk_FUN_0045ef00(piVar4,0x10,&uStack_34);
            if (((*(short *)(pSVar2 + 0x2ad) != -1) || (*(short *)(pSVar2 + 0x2af) != -1)) ||
               (*(short *)(pSVar2 + 0x2b1) != -1)) {
              puVar5 = puStack_10;
              if (puStack_10 == (uint *)0x0) {
                puVar5 = FUN_006ae290((uint *)0x0,1,2,1);
                puStack_10 = puVar5;
              }
LAB_0049e6f6:
              FUN_006ae1c0(puVar5,&uStack_8);
            }
          }
          else {
            iVar3 = thunk_FUN_00490d90((int)piVar4);
            if (iVar3 == 0) {
              thunk_FUN_0045ef00(piVar4,3,&uStack_18);
            }
            else if (((*(short *)(pSVar2 + 0x2ad) != -1) || (*(short *)(pSVar2 + 0x2af) != -1)) ||
                    (*(short *)(pSVar2 + 0x2b1) != -1)) {
              puVar5 = puStack_c;
              if (puStack_c == (uint *)0x0) {
                puVar5 = FUN_006ae290((uint *)0x0,1,2,1);
                puStack_c = puVar5;
              }
              goto LAB_0049e6f6;
            }
          }
        }
      }
      uStack_20 = uStack_20 + 1;
    } while ((int)uStack_20 < (int)uStack_14);
  }
  puVar11 = puStack_c;
  puVar5 = puStack_10;
  if ((puStack_10 == (uint *)0x0) || (puStack_c == (uint *)0x0)) {
    if (puStack_10 == (uint *)0x0) {
      if (puStack_c != (uint *)0x0) {
        uVar9 = puStack_c[3];
        uVar7 = 0;
        uStack_14 = uVar9;
        if (0 < (int)uVar9) {
          do {
            uVar6 = FUN_006acc70((int)puStack_c,uVar7,&uStack_8);
            this_00 = (void *)thunk_FUN_0042b620(CONCAT31((int3)(uVar6 >> 8),pSVar2[0x24]),uStack_8,
                                                 1);
            thunk_FUN_0045ef00(this_00,3,&uStack_18);
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < (int)uVar9);
        }
        puStack_1c = (uint *)0x0;
      }
      puVar5 = puStack_10;
      puVar11 = puStack_c;
      if (puStack_10 == (uint *)0x0) {
        if (puStack_c == (uint *)0x0) {
          puStack_1c = puStack_c;
        }
        goto LAB_0049e790;
      }
    }
LAB_0049e794:
    FUN_006ae110((byte *)puVar5);
  }
  else {
    STAllPlayersC::RegisterPGPair
              (DAT_007fa174,CONCAT31((int3)(uStack_14 >> 8),pSVar2[0x24]),puStack_10,puStack_c);
LAB_0049e790:
    if (puVar5 != (uint *)0x0) goto LAB_0049e794;
  }
  if (puVar11 != (uint *)0x0) {
    FUN_006ae110((byte *)puVar11);
  }
  FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7abe3c,0xae9);
LAB_0049e7c1:
  uVar9 = 0;
  if (*(uint *)(DAT_00802a38 + 0xe4) % 0x32 == 0) {
    if (0 < (int)uStack_14) {
      do {
        FUN_006acc70(*(int *)(pSVar2 + 0x29),uVar9,&uStack_8);
        if ((short)uStack_8 != -1) {
          piVar4 = (int *)thunk_FUN_0042b620(CONCAT31((int3)(uStack_8 >> 8),pSVar2[0x24]),uStack_8,1
                                            );
          if (piVar4 == (int *)0x0) {
            FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xaf1);
          }
          iVar3 = (**(code **)(*piVar4 + 0xf8))();
          if ((iVar3 != 0) &&
             ((((iVar3 = (**(code **)(*piVar4 + 0x2c))(), iVar3 == 7 || (iVar3 == 0x13)) ||
               (iVar3 == 0x1b)) &&
              ((iVar3 = thunk_FUN_0045ff10((int)piVar4), iVar3 == 0x10 ||
               (uVar7 = thunk_FUN_0045f400(piVar4,0x10), uVar7 == 1)))))) {
            iStack_24 = 1;
            break;
          }
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uStack_14);
    }
    if (iStack_24 == 0) {
      puStack_1c = (uint *)0x0;
    }
  }
  DAT_00858df8 = (undefined4 *)uStack_78;
  return puStack_1c;
}

