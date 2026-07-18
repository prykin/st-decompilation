
undefined4 __thiscall thunk_FUN_004a0040(void *this,int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  code *pcVar4;
  void *pvVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint *puVar10;
  undefined4 uVar11;
  undefined4 extraout_ECX;
  uint uVar12;
  undefined4 extraout_EDX;
  uint uVar13;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar14;
  undefined4 uStack_78;
  undefined4 auStack_74 [16];
  undefined4 uStack_34;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined4 uStack_2a;
  void *pvStack_24;
  int iStack_20;
  uint uStack_1c;
  undefined4 uStack_18;
  uint *puStack_14;
  uint uStack_10;
  uint *puStack_c;
  uint uStack_8;
  
  uStack_10 = *(uint *)(*(int *)((int)this + 0x29) + 0xc);
  puStack_c = (uint *)0x0;
  puStack_14 = (uint *)0x0;
  uStack_78 = DAT_00858df8;
  DAT_00858df8 = &uStack_78;
  pvStack_24 = this;
  iVar7 = __setjmp3(auStack_74,0,unaff_EDI,unaff_ESI);
  pvVar5 = pvStack_24;
  if (iVar7 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_78;
    if (iVar7 == -0x5001fff7) {
      return 0;
    }
    iVar8 = FUN_006ad4d0(s_E____titans_wlad_to_grpb_cpp_007abe3c,0xd02,0,iVar7,&DAT_007a4ccc);
    if (iVar8 == 0) {
      FUN_006a5e40(iVar7,0,0x7abe3c,0xd03);
      return 0xffffffff;
    }
    pcVar4 = (code *)swi(3);
    uVar11 = (*pcVar4)();
    return uVar11;
  }
  if ((param_1 == 0) || (param_1 == 1)) {
    puVar14 = (undefined4 *)((int)pvStack_24 + 0x89);
    for (iVar7 = 0x15; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar14 = 0;
      puVar14 = puVar14 + 1;
    }
    *(undefined2 *)((int)pvStack_24 + 0x2f0) = *(undefined2 *)((int)pvStack_24 + 0x1bb);
    *(undefined4 *)((int)pvStack_24 + 0x65) = 0;
    *(undefined2 *)((int)pvStack_24 + 0x2ee) = *(undefined2 *)((int)pvStack_24 + 0x1b9);
    *(short *)((int)pvStack_24 + 0x2f2) = *(short *)((int)pvStack_24 + 0x1bd);
    if (DAT_007fb244 + -2 < (int)*(short *)((int)pvStack_24 + 0x1bd)) {
      FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7abe3c,0xcc7);
    }
    sVar1 = *(short *)((int)pvVar5 + 0x2ee);
    sVar2 = *(short *)((int)pvVar5 + 0x2f2);
    sVar3 = *(short *)((int)pvVar5 + 0x2f0);
    if ((((sVar1 < 0) || (DAT_007fb240 <= sVar1)) || (sVar3 < 0)) ||
       (((DAT_007fb242 <= sVar3 || (sVar2 < 0)) || (DAT_007fb244 <= sVar2)))) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(DAT_007fb248 +
                      ((int)DAT_007fb246 * (int)sVar2 + (int)DAT_007fb240 * (int)sVar3 + (int)sVar1)
                      * 8);
    }
    if (((iVar7 == 0) || (*(int *)(iVar7 + 0x20) != 1000)) ||
       ((*(int *)(iVar7 + 0x24) != (int)*(char *)((int)pvVar5 + 0x24) ||
        (iVar8 = thunk_FUN_004b9d90(iVar7), iVar8 == 0)))) {
      FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7abe3c,0xccc);
    }
    uStack_1c = 0;
    *(undefined4 *)((int)pvVar5 + 0x2f4) = *(undefined4 *)(iVar7 + 0x18);
    uStack_2e = *(undefined2 *)((int)pvVar5 + 0x2f0);
    uStack_34 = *(undefined4 *)(DAT_00802a38 + 0xe4);
    uStack_2c = *(undefined2 *)((int)pvVar5 + 0x2f2);
    uVar12 = CONCAT22((short)((uint)DAT_00802a38 >> 0x10),uStack_2c);
    uStack_30 = *(undefined2 *)((int)pvVar5 + 0x2ee);
    uStack_2a = *(undefined4 *)((int)pvVar5 + 0x2f4);
    puVar10 = puStack_14;
    uStack_18 = uStack_34;
    if (uStack_10 != 0) {
      uVar12 = 0;
      do {
        FUN_006acc70(*(int *)((int)pvVar5 + 0x29),uVar12,&uStack_8);
        if ((short)uStack_8 != -1) {
          piVar9 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX >> 8),
                                                      *(undefined1 *)((int)pvVar5 + 0x24)),uStack_8,
                                             1);
          if (piVar9 == (int *)0x0) {
            FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xcd4);
          }
          iVar7 = (**(code **)(*piVar9 + 0x2c))();
          if (((iVar7 == 0xc) || (iVar7 = (**(code **)(*piVar9 + 0x2c))(), iVar7 == 0x18)) ||
             (iVar7 = (**(code **)(*piVar9 + 0x2c))(), iVar7 == 0x1d)) {
            if (puVar10 == (uint *)0x0) {
              puVar10 = FUN_006ae290((uint *)0x0,1,2,1);
              puStack_14 = puVar10;
            }
            FUN_006ae1c0(puVar10,&uStack_8);
            puVar14 = &uStack_34;
            iVar7 = 0x12;
          }
          else {
            iVar7 = thunk_FUN_00490d90((int)piVar9);
            if (iVar7 != 0) {
              if (puStack_c == (uint *)0x0) {
                puStack_c = FUN_006ae290((uint *)0x0,1,2,1);
              }
              FUN_006ae1c0(puStack_c,&uStack_8);
              goto LAB_004a02d6;
            }
            puVar14 = &uStack_18;
            iVar7 = 3;
          }
          thunk_FUN_0045ef00(piVar9,iVar7,puVar14);
        }
LAB_004a02d6:
        uStack_1c = uStack_1c + 1;
        uVar12 = uStack_1c & 0xffff;
      } while (uVar12 < uStack_10);
    }
    puVar6 = puStack_c;
    thunk_FUN_00445a40(CONCAT31((int3)(uVar12 >> 8),*(undefined1 *)((int)pvVar5 + 0x24)),puVar10,
                       puStack_c);
    if (puVar10 != (uint *)0x0) {
      FUN_006ae110((byte *)puVar10);
    }
    if (puVar6 != (uint *)0x0) {
      FUN_006ae110((byte *)puVar6);
    }
  }
  uVar12 = 0;
  uStack_1c = 2;
  if (*(uint *)(DAT_00802a38 + 0xe4) % 0x1e == 0xc) {
    iStack_20 = 0;
    if (uStack_10 != 0) {
      uVar13 = 0;
      do {
        FUN_006acc70(*(int *)((int)pvVar5 + 0x29),uVar13,&uStack_8);
        if ((short)uStack_8 != -1) {
          piVar9 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX >> 8),
                                                      *(undefined1 *)((int)pvVar5 + 0x24)),uStack_8,
                                             1);
          if (piVar9 == (int *)0x0) {
            FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xcf6);
          }
          iVar7 = (**(code **)(*piVar9 + 0x2c))();
          if (((((iVar7 == 0xc) || (iVar7 = (**(code **)(*piVar9 + 0x2c))(), iVar7 == 0x18)) ||
               (iVar7 = (**(code **)(*piVar9 + 0x2c))(), iVar7 == 0x1d)) &&
              (iVar7 = thunk_FUN_0045ff10((int)piVar9), iVar7 == 0x12)) ||
             (uVar13 = thunk_FUN_0045f400(piVar9,0x12), uVar13 == 1)) {
            iStack_20 = 1;
            break;
          }
        }
        uVar12 = uVar12 + 1;
        uVar13 = uVar12 & 0xffff;
      } while (uVar13 < uStack_10);
    }
    if (iStack_20 == 0) {
      uStack_1c = 0;
    }
  }
  DAT_00858df8 = (undefined4 *)uStack_78;
  return uStack_1c;
}

