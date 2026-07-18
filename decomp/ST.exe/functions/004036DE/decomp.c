
undefined4 __thiscall thunk_FUN_0049ed40(void *this,int param_1)

{
  code *pcVar1;
  void *pvVar2;
  uint *puVar3;
  int iVar4;
  void *pvVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 extraout_EDX;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 uStack_78;
  undefined4 auStack_74 [16];
  undefined4 uStack_34;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  void *pvStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  uint *puStack_14;
  int iStack_10;
  uint *puStack_c;
  uint uStack_8;
  
  iStack_10 = *(int *)(*(int *)((int)this + 0x29) + 0xc);
  puStack_c = (uint *)0x0;
  puStack_14 = (uint *)0x0;
  uStack_24 = 2;
  iStack_18 = 0;
  uStack_78 = DAT_00858df8;
  DAT_00858df8 = &uStack_78;
  pvStack_28 = this;
  iVar4 = __setjmp3(auStack_74,0,unaff_EDI,unaff_ESI);
  pvVar2 = pvStack_28;
  if (iVar4 == 0) {
    if ((param_1 == 0) || (param_1 == 1)) {
      puVar10 = (undefined4 *)((int)pvStack_28 + 0x89);
      for (iVar4 = 0x15; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
      *(undefined4 *)((int)pvStack_28 + 0x65) = 0;
      uStack_20 = 0;
      *(undefined4 *)((int)pvStack_28 + 0x2bd) = *(undefined4 *)((int)pvStack_28 + 0x18c);
      *(undefined2 *)((int)pvStack_28 + 0x2c1) = *(undefined2 *)((int)pvStack_28 + 400);
      uStack_30 = *(undefined2 *)((int)pvStack_28 + 0x2bd);
      uStack_34 = *(undefined4 *)(DAT_00802a38 + 0xe4);
      uStack_2c = *(undefined2 *)((int)pvStack_28 + 0x2c1);
      uStack_2e = *(undefined2 *)((int)pvStack_28 + 0x2bf);
      puVar6 = puStack_14;
      uStack_1c = uStack_34;
      if (0 < iStack_10) {
        do {
          FUN_006acc70(*(int *)((int)pvVar2 + 0x29),uStack_20,&uStack_8);
          if ((short)uStack_8 != -1) {
            pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX >> 8),
                                                         *(undefined1 *)((int)pvVar2 + 0x24)),
                                                uStack_8,1);
            if (pvVar5 == (void *)0x0) {
              FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xb6b);
            }
            if ((*(int *)((int)pvVar5 + 0x6f7) == 4) && (0 < *(int *)((int)pvVar5 + 0x7be))) {
              if (puVar6 == (uint *)0x0) {
                puVar6 = FUN_006ae290((uint *)0x0,1,2,1);
                puStack_14 = puVar6;
              }
              FUN_006ae1c0(puVar6,&uStack_8);
              thunk_FUN_0045ef00(pvVar5,10,&uStack_34);
            }
            else {
              iVar4 = thunk_FUN_00490d90((int)pvVar5);
              if (iVar4 == 0) {
                thunk_FUN_0045ef00(pvVar5,3,&uStack_1c);
              }
              else {
                if (puStack_c == (uint *)0x0) {
                  puStack_c = FUN_006ae290((uint *)0x0,1,2,1);
                }
                FUN_006ae1c0(puStack_c,&uStack_8);
              }
            }
          }
          uStack_20 = uStack_20 + 1;
        } while ((int)uStack_20 < iStack_10);
      }
      puVar3 = puStack_c;
      thunk_FUN_00445a40(CONCAT31((int3)((uint)iStack_10 >> 8),*(undefined1 *)((int)pvVar2 + 0x24)),
                         puVar6,puStack_c);
      if (puVar6 != (uint *)0x0) {
        FUN_006ae110((byte *)puVar6);
      }
      if (puVar3 != (uint *)0x0) {
        FUN_006ae110((byte *)puVar3);
      }
      FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7abe3c,0xb84);
    }
    uVar11 = 0;
    if (*(uint *)(DAT_00802a38 + 0xe4) % 0x1e == 10) {
      if (0 < iStack_10) {
        do {
          FUN_006acc70(*(int *)((int)pvVar2 + 0x29),uVar11,&uStack_8);
          if ((short)uStack_8 != -1) {
            pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)(uStack_8 >> 8),
                                                         *(undefined1 *)((int)pvVar2 + 0x24)),
                                                uStack_8,1);
            if (pvVar5 == (void *)0x0) {
              FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xb8b);
            }
            iVar4 = thunk_FUN_0045ff10((int)pvVar5);
            if ((iVar4 == 10) || (uVar7 = thunk_FUN_0045f400(pvVar5,10), uVar7 == 1)) {
              iStack_18 = iStack_18 + 1;
              break;
            }
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < iStack_10);
      }
      if (iStack_18 == 0) {
        uStack_24 = 0;
      }
    }
    DAT_00858df8 = (undefined4 *)uStack_78;
  }
  else {
    DAT_00858df8 = (undefined4 *)uStack_78;
    if (iVar4 != -0x5001fff7) {
      iVar8 = FUN_006ad4d0(s_E____titans_wlad_to_grpb_cpp_007abe3c,0xb94,0,iVar4,&DAT_007a4ccc);
      if (iVar8 == 0) {
        FUN_006a5e40(iVar4,0,0x7abe3c,0xb95);
        return 0xffffffff;
      }
      pcVar1 = (code *)swi(3);
      uVar9 = (*pcVar1)();
      return uVar9;
    }
  }
  return uStack_24;
}

