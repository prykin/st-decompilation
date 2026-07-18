
void __thiscall
STAllPlayersC::RegisterPGPair(STAllPlayersC *this,uint param_1,uint *param_2,uint *param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  void *this_00;
  int iVar6;
  char cVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  STAllPlayersC *this_01;
  void *unaff_EDI;
  uint uVar9;
  bool bVar10;
  undefined4 uStack_88;
  undefined4 auStack_84 [16];
  uint *puStack_44;
  uint *puStack_40;
  uint *puStack_3c;
  int iStack_38;
  STAllPlayersC *pSStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  uint *puStack_28;
  int *piStack_24;
  uint uStack_20;
  short sStack_1a;
  uint *puStack_18;
  uint *puStack_14;
  uint uStack_10;
  uint uStack_c;
  uint uStack_8;
  
  puStack_18 = (uint *)0x0;
  puStack_14 = (uint *)0x0;
  puStack_28 = (uint *)0x0;
  iStack_38 = 0;
  uStack_88 = DAT_00858df8;
  DAT_00858df8 = &uStack_88;
  pSStack_34 = this;
  iVar3 = __setjmp3(auStack_84,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_88;
    if (puStack_28 != (uint *)0x0) {
      FUN_006ae110((byte *)puStack_28);
    }
    if (puStack_18 != (uint *)0x0) {
      FUN_006ae110((byte *)puStack_18);
    }
    if (puStack_14 != (uint *)0x0) {
      FUN_006ae110((byte *)puStack_14);
    }
    if (iVar3 != -0x5001fff7) {
      iVar6 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x28a2,0,0,&DAT_007a4ccc);
      if (iVar6 != 0) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FUN_006a5e40(iVar3,0,0x7a6004,0x28a3);
    }
    return;
  }
  if ((((param_2 == (uint *)0x0) || (param_3 == (uint *)0x0)) ||
      (uVar8 = param_2[3], uStack_10 = uVar8, uVar8 == 0)) || (uStack_c = param_3[3], uStack_c == 0)
     ) {
    uVar8 = uStack_10;
    FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0x2837);
  }
  FUN_006afe40((int *)&puStack_18,param_2);
  FUN_006afe40((int *)&puStack_14,param_3);
  uVar9 = 0;
  this_01 = pSStack_34;
  if (0 < (int)uVar8) {
    do {
      FUN_006acc70((int)puStack_18,uVar9,&uStack_8);
      this_01 = pSStack_34;
      piVar4 = (int *)thunk_FUN_0042b620(param_1,uStack_8,1);
      if ((piVar4 == (int *)0x0) || (iVar3 = (**(code **)(*piVar4 + 0xf8))(), iVar3 == 0)) {
        FUN_006b0c70((int)puStack_18,uVar9);
        uVar8 = uVar8 - 1;
        uVar9 = uVar9 - 1;
        uStack_10 = uVar8;
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)uVar8);
  }
  if (uVar8 == 0) {
    FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0x2842);
  }
  uVar8 = 0;
  if (0 < (int)uStack_c) {
    do {
      FUN_006acc70((int)puStack_14,uVar8,&uStack_8);
      piVar4 = (int *)thunk_FUN_0042b620(param_1,uStack_8,1);
      if (((piVar4 == (int *)0x0) || (iVar3 = thunk_FUN_00490d90((int)piVar4), iVar3 == 0)) ||
         ((iVar3 = (**(code **)(*piVar4 + 0xf8))(), iVar3 == 0 || ((short)piVar4[0xc] == -1)))) {
        FUN_006b0c70((int)puStack_14,uVar8);
        uStack_c = uStack_c - 1;
        uVar8 = uVar8 - 1;
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)uStack_c);
  }
  if (uStack_c == 0) {
    FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0x284d);
  }
  uVar8 = 0;
  puVar5 = puStack_28;
  if (0 < (int)uStack_10) {
    do {
      FUN_006acc70((int)puStack_18,uVar8,&uStack_8);
      uVar9 = 0;
      if (0 < (int)uStack_c) {
        do {
          FUN_006acc70((int)puStack_14,uVar9,(undefined4 *)&sStack_1a);
          if ((short)uStack_8 == sStack_1a) {
            if (puVar5 == (uint *)0x0) {
              puVar5 = FUN_006ae290((uint *)0x0,1,2,1);
              puStack_28 = puVar5;
            }
            FUN_006ae1c0(puVar5,&uStack_8);
            FUN_006b0c70((int)puStack_18,uVar8);
            uStack_10 = uStack_10 - 1;
            uVar8 = uVar8 - 1;
            FUN_006b0c70((int)puStack_14,uVar9);
            uStack_c = uStack_c - 1;
            uVar9 = uVar9 - 1;
            if ((uStack_10 == 0) || (uStack_c == 0)) {
              iStack_38 = 1;
              break;
            }
          }
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < (int)uStack_c);
      }
      this_01 = pSStack_34;
    } while ((iStack_38 != 1) && (uVar8 = uVar8 + 1, (int)uVar8 < (int)uStack_10));
  }
  cVar7 = (char)param_1;
  if (puVar5 == (uint *)0x0) goto LAB_00445e36;
  if ((uStack_10 == 0) && (uStack_c == 0)) {
    uStack_30 = puVar5[3];
    uStack_20 = 0;
    if (0 < (int)uStack_30) {
      piStack_24 = (int *)((int)&DAT_007f5816 + cVar7 * 0xa62);
      do {
        FUN_006acc70((int)puVar5,uStack_20,&uStack_8);
        this_00 = (void *)thunk_FUN_0042b620(param_1,uStack_8,1);
        uStack_2c = *(undefined4 *)(DAT_00802a38 + 0xe4);
        thunk_FUN_0045ef00(this_00,0x21,&uStack_2c);
        if ((*piStack_24 != 0) &&
           (iVar3 = _DeleteGuardBoat(this_01,param_1,(short)uStack_8,1), iVar3 == -1)) {
          _DeleteGuardBoat(this_01,param_1,(short)uStack_8,0);
        }
        uStack_20 = uStack_20 + 1;
      } while ((int)uStack_20 < (int)uStack_30);
    }
    if (*(int *)((int)&DAT_007f5816 + cVar7 * 0xa62) != 0) {
      OptimizeGuardBoats(this_01,cVar7);
      DistributeGuardBoats(this_01,param_1);
    }
    FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0x2872);
  }
  if (uStack_10 == 0) {
    bVar10 = uStack_c == 0;
    if (!bVar10) {
      FUN_006afe40((int *)&puStack_18,puVar5);
      goto LAB_00445db2;
    }
  }
  else {
LAB_00445db2:
    bVar10 = uStack_c == 0;
  }
  if (bVar10) {
    if (uStack_10 != 0) {
      FUN_006afe40((int *)&puStack_14,puVar5);
      goto LAB_00445dca;
    }
  }
  else {
LAB_00445dca:
    if ((uStack_10 != 0) && (uStack_c != 0)) {
      uStack_30 = puVar5[3];
      uStack_20 = 0;
      if (0 < (int)uStack_30) {
        do {
          FUN_006acc70((int)puVar5,uStack_20,&uStack_8);
          FUN_006ae1c0(puStack_14,&uStack_8);
          uStack_20 = uStack_20 + 1;
        } while ((int)uStack_20 < (int)uStack_30);
      }
    }
  }
  uStack_10 = puStack_18[3];
  uStack_c = puStack_14[3];
  FUN_006ae110((byte *)puVar5);
  puStack_28 = (uint *)0x0;
LAB_00445e36:
  uVar8 = 0;
  if (0 < (int)uStack_c) {
    piStack_24 = (int *)((int)&DAT_007f5816 + cVar7 * 0xa62);
    do {
      if (*piStack_24 == 0) break;
      FUN_006acc70((int)puStack_14,uVar8,&uStack_8);
      iVar3 = _DeleteGuardBoat(this_01,param_1,(short)uStack_8,1);
      if (iVar3 == -1) {
        _DeleteGuardBoat(this_01,param_1,(short)uStack_8,0);
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)uStack_c);
  }
  uVar8 = 0;
  if (0 < (int)uStack_10) {
    piStack_24 = (int *)((int)&DAT_007f5816 + cVar7 * 0xa62);
    do {
      if (*piStack_24 == 0) break;
      FUN_006acc70((int)puStack_18,uVar8,&uStack_8);
      _DeleteGuardBoat(this_01,param_1,(short)uStack_8,1);
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)uStack_10);
  }
  puStack_44 = FUN_006ae290((uint *)0x0,uStack_10,2,1);
  FUN_006afe40((int *)&puStack_44,puStack_18);
  puStack_40 = FUN_006ae290((uint *)0x0,uStack_c,2,1);
  FUN_006afe40((int *)&puStack_40,puStack_14);
  puStack_3c = FUN_006ae290((uint *)0x0,1,4,1);
  puVar1 = (undefined4 *)((int)&DAT_007f5816 + cVar7 * 0xa62);
  if (*(int *)((int)&DAT_007f5816 + cVar7 * 0xa62) == 0) {
    puVar5 = FUN_006ae290((uint *)0x0,1,0xc,1);
    *puVar1 = puVar5;
  }
  FUN_006ae1c0((uint *)*puVar1,&puStack_44);
  OptimizeGuardBoats(this_01,cVar7);
  DistributeGuardBoats(this_01,param_1);
  if (puStack_18 != (uint *)0x0) {
    FUN_006ae110((byte *)puStack_18);
  }
  if (puStack_14 != (uint *)0x0) {
    FUN_006ae110((byte *)puStack_14);
  }
  DAT_00858df8 = (undefined4 *)uStack_88;
  return;
}

