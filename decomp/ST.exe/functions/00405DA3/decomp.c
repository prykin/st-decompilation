
undefined4 __thiscall STGroupBoatC::GrpGuard(STGroupBoatC *this,int param_1)

{
  code *pcVar1;
  STGroupBoatC *pSVar2;
  int iVar3;
  uint *puVar4;
  void *pvVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 extraout_EDX;
  uint uVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  STGroupBoatC *pSVar10;
  undefined4 uStack_78;
  undefined4 auStack_74 [16];
  undefined4 uStack_34;
  STGroupBoatC *pSStack_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  uint *puStack_1c;
  int iStack_18;
  int iStack_14;
  uint *puStack_10;
  uint uStack_c;
  uint *puStack_8;
  
  puStack_8 = (uint *)0x0;
  puStack_1c = (uint *)0x0;
  puStack_10 = (uint *)0x0;
  uStack_20 = *(uint *)(*(int *)(this + 0x29) + 0xc);
  puStack_28 = (uint *)0x0;
  uStack_34 = 2;
  uStack_78 = DAT_00858df8;
  DAT_00858df8 = &uStack_78;
  pSStack_30 = this;
  iVar3 = __setjmp3(auStack_74,0,unaff_EDI,unaff_ESI);
  pSVar2 = pSStack_30;
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_78;
    iVar8 = FUN_006ad4d0(s_E____titans_wlad_to_grpb_cpp_007abe3c,0xa3e,0,iVar3,&DAT_007a4ccc);
    if (iVar8 != 0) {
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return uVar6;
    }
    FUN_006a5e40(iVar3,0,0x7abe3c,0xa3f);
    return 0xffffffff;
  }
  if ((param_1 == 1) || (param_1 == 0)) {
    pSVar10 = pSStack_30 + 0x89;
    for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pSVar10 = 0;
      pSVar10 = pSVar10 + 4;
    }
    *(undefined4 *)(pSStack_30 + 0x65) = 0;
    puStack_8 = FUN_006ae290((uint *)0x0,0,2,1);
    if (*(int *)(pSVar2 + 0x164) == 0) {
      FUN_006afe40((int *)&puStack_8,*(uint **)(pSVar2 + 0x168));
    }
    if (*(int *)(pSVar2 + 0x164) == 1) {
      STAllPlayersC::GetGObjFromBox
                (DAT_007fa174,(char)pSVar2[0x24],*(short *)(pSVar2 + 0x16c),
                 *(short *)(pSVar2 + 0x16e),*(short *)(pSVar2 + 0x170),*(short *)(pSVar2 + 0x172),
                 *(short *)(pSVar2 + 0x174),*(short *)(pSVar2 + 0x176),(int *)&puStack_1c,
                 (int *)&puStack_10,&iStack_14,&iStack_18);
      if (0 < iStack_14) {
        FUN_006afe40((int *)&puStack_8,puStack_1c);
      }
      if (0 < iStack_18) {
        if (iStack_14 == 0) {
          FUN_006afe40((int *)&puStack_8,puStack_10);
        }
        else {
          uVar9 = 0;
          if (0 < iStack_18) {
            do {
              FUN_006acc70((int)puStack_10,uVar9,&uStack_c);
              FUN_006ae1c0(puStack_8,&uStack_c);
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < iStack_18);
          }
        }
      }
    }
    uStack_2c = 0;
    puVar4 = puStack_28;
    if (0 < (int)uStack_20) {
      do {
        FUN_006acc70(*(int *)(pSVar2 + 0x29),uStack_2c,&uStack_c);
        if ((short)uStack_c != -1) {
          pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX >> 8),pSVar2[0x24])
                                              ,uStack_c,1);
          if (pvVar5 == (void *)0x0) {
            FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xa1a);
          }
          iVar3 = thunk_FUN_00490d90((int)pvVar5);
          if (iVar3 == 0) {
            uStack_24 = *(undefined4 *)(DAT_00802a38 + 0xe4);
            thunk_FUN_0045ef00(pvVar5,3,&uStack_24);
          }
          else {
            if (puVar4 == (uint *)0x0) {
              puVar4 = FUN_006ae290((uint *)0x0,1,2,1);
              puStack_28 = puVar4;
            }
            FUN_006ae1c0(puVar4,&uStack_c);
          }
        }
        uStack_2c = uStack_2c + 1;
      } while ((int)uStack_2c < (int)uStack_20);
    }
    STAllPlayersC::RegisterPGPair
              (DAT_007fa174,CONCAT31((int3)(uStack_20 >> 8),pSVar2[0x24]),puStack_8,puVar4);
    FUN_006ae110((byte *)puStack_8);
    if (puVar4 != (uint *)0x0) {
      FUN_006ae110((byte *)puVar4);
    }
    if (*(byte **)(pSVar2 + 0x168) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(pSVar2 + 0x168));
      *(undefined4 *)(pSVar2 + 0x168) = 0;
    }
  }
  else if (*(uint *)(DAT_00802a38 + 0xe4) % 5 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_78;
    return uStack_34;
  }
  uVar9 = 0;
  if (0 < (int)uStack_20) {
    do {
      FUN_006acc70(*(int *)(pSVar2 + 0x29),uVar9,&uStack_c);
      if ((short)uStack_c != -1) {
        pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)(uStack_c >> 8),pSVar2[0x24]),uStack_c,1)
        ;
        if (pvVar5 == (void *)0x0) {
          iVar3 = FUN_006ad4d0(s_E____titans_wlad_to_grpb_cpp_007abe3c,0xa34,0,0,&DAT_007a4ccc);
          if (iVar3 != 0) {
            pcVar1 = (code *)swi(3);
            uVar6 = (*pcVar1)();
            return uVar6;
          }
          FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xa35);
        }
        iVar3 = thunk_FUN_0045ff10((int)pvVar5);
        if ((iVar3 == 5) || (uVar7 = thunk_FUN_0045f400(pvVar5,5), uVar7 == 1)) break;
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)uStack_20);
  }
  if ((uStack_20 != 0) && (uVar9 != uStack_20)) {
    DAT_00858df8 = (undefined4 *)uStack_78;
    return uStack_34;
  }
  DAT_00858df8 = (undefined4 *)uStack_78;
  return 0;
}

