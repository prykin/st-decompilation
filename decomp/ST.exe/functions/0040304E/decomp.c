
undefined4 __thiscall thunk_FUN_0049a620(void *this,int param_1)

{
  code *pcVar1;
  void *pvVar2;
  int iVar3;
  uint *puVar4;
  void *this_00;
  int iVar5;
  undefined4 uVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  uint uVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar9;
  undefined4 uStack_64;
  undefined4 auStack_60 [16];
  undefined4 uStack_20;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  void *pvStack_14;
  uint uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  
  uStack_10 = *(uint *)(*(int *)((int)this + 0x29) + 0xc);
  uVar8 = 0;
  uStack_64 = DAT_00858df8;
  DAT_00858df8 = &uStack_64;
  pvStack_14 = this;
  iVar3 = __setjmp3(auStack_60,0,unaff_EDI,unaff_ESI);
  pvVar2 = pvStack_14;
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_64;
    iVar5 = FUN_006ad4d0(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x642,0,iVar3,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return uVar6;
    }
    FUN_006a5e40(iVar3,0,0x7abe3c,0x643);
    return 0xffffffff;
  }
  if ((param_1 == 0) || (param_1 == 1)) {
    puVar9 = (undefined4 *)((int)pvStack_14 + 0x89);
    for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    *(int *)((int)pvStack_14 + 0x3d) = (int)*(short *)((int)pvStack_14 + 0xdd);
    *(int *)((int)pvStack_14 + 0x45) = (int)*(short *)((int)pvStack_14 + 0xe1);
    *(undefined4 *)((int)pvStack_14 + 0x65) = 0;
    *(int *)((int)pvStack_14 + 0x41) = (int)*(short *)((int)pvStack_14 + 0xdf);
    *(undefined4 *)((int)pvStack_14 + 0x30e) = *(undefined4 *)((int)pvStack_14 + 0xe3);
    puVar4 = thunk_FUN_004233e0((int)pvStack_14);
    thunk_FUN_00497cd0((int)puVar4,*(int *)((int)pvVar2 + 0x3d),*(int *)((int)pvVar2 + 0x41),
                       *(int *)((int)pvVar2 + 0x45));
    FUN_006ae110((byte *)puVar4);
    uStack_20 = *(undefined4 *)(DAT_00802a38 + 0xe4);
    uStack_1c = 0xffff;
    uStack_1a = 0xffff;
    uStack_18 = 0xffff;
    if (uStack_10 != 0) {
      uVar7 = 0;
      do {
        FUN_006acc70(*(int *)((int)pvVar2 + 0x29),uVar7,&uStack_c);
        if ((short)uStack_c != -1) {
          this_00 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX >> 8),
                                                        *(undefined1 *)((int)pvVar2 + 0x24)),
                                               uStack_c,1);
          if (this_00 == (void *)0x0) {
            FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0x629);
          }
          thunk_FUN_0045ef00(this_00,1,&uStack_20);
        }
        uVar8 = uVar8 + 1;
        uVar7 = uVar8 & 0xffff;
      } while (uVar7 < uStack_10);
    }
    uStack_8 = 2;
  }
  if (param_1 == 2) {
    if (*(uint *)(DAT_00802a38 + 0xe4) % 3 == 0) {
      uVar7 = 0;
      uStack_8 = 0;
      uVar8 = 0;
      if (uStack_10 != 0) {
        do {
          FUN_006acc70(*(int *)((int)pvVar2 + 0x29),uVar8,&uStack_c);
          if ((short)uStack_c != -1) {
            uVar8 = thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX_00 >> 8),
                                                *(undefined1 *)((int)pvVar2 + 0x24)),uStack_c,1);
            if (uVar8 == 0) {
              FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0x638);
            }
            iVar3 = thunk_FUN_0045ff30(uVar8);
            if (iVar3 != 0) goto LAB_0049a832;
            iVar3 = thunk_FUN_0045ff10(uVar8);
            if (iVar3 == 1) goto LAB_0049a832;
            iVar3 = thunk_FUN_0045ff10(uVar8);
            if (iVar3 == 0) goto LAB_0049a832;
          }
          uVar7 = uVar7 + 1;
          uVar8 = uVar7 & 0xffff;
          if (uStack_10 <= uVar8) {
            DAT_00858df8 = (undefined4 *)uStack_64;
            return uStack_8;
          }
        } while( true );
      }
    }
    else {
LAB_0049a832:
      uStack_8 = 2;
    }
  }
  DAT_00858df8 = (undefined4 *)uStack_64;
  return uStack_8;
}

