
undefined4 __thiscall thunk_FUN_004a0590(void *this,int param_1)

{
  short *psVar1;
  short *psVar2;
  code *pcVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  void *pvVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 extraout_ECX;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar11;
  uint uVar12;
  undefined4 uStack_80;
  undefined4 auStack_7c [16];
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
  void *pvStack_18;
  undefined4 uStack_14;
  uint *puStack_10;
  uint uStack_c;
  uint uStack_8;
  
  uStack_8 = *(uint *)(*(int *)((int)this + 0x29) + 0xc);
  uStack_14 = 2;
  uStack_80 = DAT_00858df8;
  DAT_00858df8 = &uStack_80;
  pvStack_18 = this;
  iVar5 = __setjmp3(auStack_7c,0,unaff_EDI,unaff_ESI);
  pvVar4 = pvStack_18;
  if (iVar5 == 0) {
    if ((param_1 == 0) || (param_1 == 1)) {
      psVar1 = (short *)((int)pvStack_18 + 0x300);
      puVar11 = (undefined4 *)((int)pvStack_18 + 0x89);
      for (iVar5 = 0x15; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar11 = 0;
        puVar11 = puVar11 + 1;
      }
      *(undefined4 *)((int)pvStack_18 + 0x65) = 0;
      psVar2 = (short *)((int)pvStack_18 + 0x302);
      *(undefined2 *)((int)pvStack_18 + 0x2fa) = *(undefined2 *)((int)pvStack_18 + 0x1c1);
      *(undefined2 *)((int)pvStack_18 + 0x2fc) = *(undefined2 *)((int)pvStack_18 + 0x1c3);
      *(undefined2 *)((int)pvStack_18 + 0x2f8) = *(undefined2 *)((int)pvStack_18 + 0x1bf);
      thunk_FUN_0049a500(pvStack_18,(undefined2 *)((int)pvStack_18 + 0x2fe),psVar1,psVar2);
      puStack_10 = thunk_FUN_00415590(pvVar4,*(int *)((int)pvVar4 + 0x29),
                                      (int)*(short *)((int)pvVar4 + 0x2fe),(int)*psVar1,(int)*psVar2
                                      ,(int)*(short *)((int)pvVar4 + 0x2f8),
                                      (int)*(short *)((int)pvVar4 + 0x2fa),
                                      (int)*(short *)((int)pvVar4 + 0x2fc));
      if (puStack_10 == (uint *)0x0) {
        return 0;
      }
      puVar6 = thunk_FUN_00415590(pvVar4,*(int *)((int)pvVar4 + 0x29),
                                  (int)*(short *)((int)pvVar4 + 0x2f8),
                                  (int)*(short *)((int)pvVar4 + 0x2fa),
                                  (int)*(short *)((int)pvVar4 + 0x2fc),
                                  (int)*(short *)((int)pvVar4 + 0x2fe),(int)*psVar1,(int)*psVar2);
      puStack_1c = puVar6;
      if (puVar6 == (uint *)0x0) {
        FUN_006ae110((byte *)puStack_10);
        return 0;
      }
      uVar12 = 0;
      uStack_3c = *(undefined4 *)(DAT_00802a38 + 0xe4);
      if (0 < (int)uStack_8) {
        do {
          FUN_006acc70((int)puStack_10,uVar12,(undefined4 *)&uStack_24);
          FUN_006acc70((int)puVar6,uVar12,(undefined4 *)&uStack_2c);
          FUN_006acc70(*(int *)((int)pvVar4 + 0x29),uVar12,&uStack_c);
          if ((short)uStack_c != -1) {
            pvVar7 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX >> 8),
                                                         *(undefined1 *)((int)pvVar4 + 0x24)),
                                                uStack_c,1);
            if (pvVar7 == (void *)0x0) {
              FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xd2a);
            }
            uStack_38 = uStack_24;
            uStack_36 = uStack_22;
            uStack_32 = uStack_2c;
            uStack_34 = uStack_20;
            uStack_30 = uStack_2a;
            uStack_2e = uStack_28;
            thunk_FUN_0045ef00(pvVar7,8,&uStack_3c);
            puVar6 = puStack_1c;
          }
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)uStack_8);
      }
      FUN_006ae110((byte *)puStack_10);
      FUN_006ae110((byte *)puVar6);
    }
    if (*(uint *)(DAT_00802a38 + 0xe4) % 0x19 == 3) {
      uVar12 = 0;
      if (0 < (int)uStack_8) {
        do {
          FUN_006acc70(*(int *)((int)pvVar4 + 0x29),uVar12,&uStack_c);
          if ((short)uStack_c != -1) {
            pvVar7 = (void *)thunk_FUN_0042b620(CONCAT31((int3)(uStack_c >> 8),
                                                         *(undefined1 *)((int)pvVar4 + 0x24)),
                                                uStack_c,1);
            if (pvVar7 == (void *)0x0) {
              FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xd3d);
            }
            iVar5 = thunk_FUN_0045ff10((int)pvVar7);
            if (iVar5 == 8) break;
            uVar8 = thunk_FUN_0045f400(pvVar7,8);
            if (uVar8 == 1) break;
          }
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)uStack_8);
      }
      if (uVar12 == uStack_8) {
        uStack_14 = 0;
      }
    }
    DAT_00858df8 = (undefined4 *)uStack_80;
  }
  else {
    DAT_00858df8 = (undefined4 *)uStack_80;
    if (iVar5 != -0x5001fff7) {
      iVar9 = FUN_006ad4d0(s_E____titans_wlad_to_grpb_cpp_007abe3c,0xd46,0,iVar5,&DAT_007a4ccc);
      if (iVar9 != 0) {
        pcVar3 = (code *)swi(3);
        uVar10 = (*pcVar3)();
        return uVar10;
      }
      FUN_006a5e40(iVar5,0,0x7abe3c,0xd47);
      return 0xffffffff;
    }
  }
  return uStack_14;
}

