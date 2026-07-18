
undefined4 __thiscall thunk_FUN_0049f640(void *this,int param_1)

{
  code *pcVar1;
  void *pvVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 extraout_EDX;
  uint uVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar9;
  undefined4 uStack_68;
  undefined4 auStack_64 [16];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  void *pvStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  uint uStack_8;
  
  uStack_8 = *(uint *)(*(int *)((int)this + 0x29) + 0xc);
  uVar8 = 0;
  uStack_10 = 2;
  uStack_68 = DAT_00858df8;
  DAT_00858df8 = &uStack_68;
  pvStack_14 = this;
  iVar3 = __setjmp3(auStack_64,0,unaff_EDI,unaff_ESI);
  pvVar2 = pvStack_14;
  if (iVar3 == 0) {
    if ((param_1 == 0) || (param_1 == 1)) {
      puVar9 = (undefined4 *)((int)pvStack_14 + 0x89);
      for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      *(undefined4 *)((int)pvStack_14 + 0x65) = 0;
      *(undefined4 *)((int)pvStack_14 + 0x2ce) = *(undefined4 *)((int)pvStack_14 + 0x199);
      *(undefined4 *)((int)pvStack_14 + 0x2d2) = *(undefined4 *)((int)pvStack_14 + 0x19d);
      *(undefined2 *)((int)pvStack_14 + 0x2d6) = *(undefined2 *)((int)pvStack_14 + 0x1a1);
      uStack_20 = *(undefined4 *)((int)pvStack_14 + 0x2ce);
      uStack_24 = *(undefined4 *)(DAT_00802a38 + 0xe4);
      uStack_1c = *(undefined2 *)((int)pvStack_14 + 0x2d2);
      uStack_18 = *(undefined2 *)((int)pvStack_14 + 0x2d6);
      uStack_1a = *(undefined2 *)((int)pvStack_14 + 0x2d4);
      if (0 < (int)uStack_8) {
        do {
          FUN_006acc70(*(int *)((int)pvVar2 + 0x29),uVar8,&uStack_c);
          if ((short)uStack_c != -1) {
            pvVar4 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX >> 8),
                                                         *(undefined1 *)((int)pvVar2 + 0x24)),
                                                uStack_c,1);
            if (pvVar4 == (void *)0x0) {
              FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xc11);
            }
            thunk_FUN_0045ef00(pvVar4,0x16,&uStack_24);
          }
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)uStack_8);
      }
    }
    if (*(uint *)(DAT_00802a38 + 0xe4) % 0x19 == 7) {
      uVar8 = 0;
      if (0 < (int)uStack_8) {
        do {
          FUN_006acc70(*(int *)((int)pvVar2 + 0x29),uVar8,&uStack_c);
          if ((short)uStack_c != -1) {
            pvVar4 = (void *)thunk_FUN_0042b620(CONCAT31((int3)(uStack_c >> 8),
                                                         *(undefined1 *)((int)pvVar2 + 0x24)),
                                                uStack_c,1);
            if (pvVar4 == (void *)0x0) {
              FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xc1c);
            }
            iVar3 = thunk_FUN_0045ff10((int)pvVar4);
            if (iVar3 == 0x16) break;
            uVar5 = thunk_FUN_0045f400(pvVar4,0x16);
            if (uVar5 == 1) break;
          }
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)uStack_8);
      }
      if (uVar8 == uStack_8) {
        uStack_10 = 0;
      }
    }
    DAT_00858df8 = (undefined4 *)uStack_68;
  }
  else {
    DAT_00858df8 = (undefined4 *)uStack_68;
    if (iVar3 != -0x5001fff7) {
      iVar6 = FUN_006ad4d0(s_E____titans_wlad_to_grpb_cpp_007abe3c,0xc25,0,iVar3,&DAT_007a4ccc);
      if (iVar6 != 0) {
        pcVar1 = (code *)swi(3);
        uVar7 = (*pcVar1)();
        return uVar7;
      }
      FUN_006a5e40(iVar3,0,0x7abe3c,0xc26);
      return 0xffffffff;
    }
  }
  return uStack_10;
}

