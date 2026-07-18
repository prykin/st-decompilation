
undefined4 * thunk_FUN_005582a0(uint *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  undefined4 *puVar7;
  void *unaff_EDI;
  undefined4 *puVar8;
  undefined4 uStack_68;
  undefined4 auStack_64 [16];
  int iStack_24;
  undefined4 *puStack_20;
  undefined4 *puStack_1c;
  uint uStack_18;
  undefined4 *puStack_14;
  uint uStack_10;
  undefined4 *puStack_c;
  undefined4 *puStack_8;
  
  puStack_8 = (undefined4 *)0x0;
  puStack_c = (undefined4 *)0x0;
  uStack_10 = 0;
  puStack_14 = (undefined4 *)0x0;
  uStack_18 = 0;
  uStack_68 = DAT_00858df8;
  DAT_00858df8 = &uStack_68;
  iVar2 = __setjmp3(auStack_64,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_68;
    if (puStack_c != (undefined4 *)0x0) {
      FUN_006ab060(&puStack_c);
    }
    if (puStack_14 != (undefined4 *)0x0) {
      FUN_006ab060(&puStack_14);
    }
    if (puStack_8 != (undefined4 *)0x0) {
      FUN_006ab060(&puStack_8);
    }
    iVar4 = FUN_006ad4d0(s_E____titans_grig_visible_cpp_007c92cc,0x105,0,iVar2,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      puVar3 = (undefined4 *)(*pcVar1)();
      return puVar3;
    }
    FUN_006a5e40(iVar2,0,0x7c92cc,0x106);
    return (undefined4 *)0x0;
  }
  if (*(int *)(iStack_24 + 0x114) != 0) {
    puStack_c = (undefined4 *)FUN_006b0020(*(uint **)(iStack_24 + 0xf4),(int *)&uStack_10);
    puStack_14 = (undefined4 *)FUN_006b0020(*(uint **)(iStack_24 + 0x110),(int *)&uStack_18);
    if (*(int *)(iStack_24 + 0x114) != 0) {
      iVar2 = *(int *)(iStack_24 + 0x2c) * *(int *)(iStack_24 + 0x28) * 4;
      goto LAB_0055832e;
    }
  }
  iVar2 = 0;
LAB_0055832e:
  uVar6 = iVar2 + uStack_18 + 0x81 + uStack_10;
  *param_1 = uVar6;
  puStack_8 = FUN_006aac10(uVar6);
  *puStack_8 = 0x50;
  puStack_8[1] = 0xff;
  puStack_8[2] = 2;
  puStack_8[5] = 1;
  puStack_8[6] = *(undefined4 *)(iStack_24 + 0x20);
  puStack_8[7] = *(undefined4 *)(iStack_24 + 0x24);
  puStack_8[8] = *(undefined4 *)(iStack_24 + 0x28);
  puStack_8[9] = *(undefined4 *)(iStack_24 + 0x2c);
  puStack_8[10] = *(undefined4 *)(iStack_24 + 0x30);
  puStack_8[0xb] = *(undefined4 *)(iStack_24 + 0x34);
  puStack_8[0xc] = *(undefined4 *)(iStack_24 + 0x1c);
  puStack_8[0x10] = *(undefined4 *)(iStack_24 + 0x114);
  puStack_8[0x11] = *(undefined4 *)(iStack_24 + 0xf8);
  puStack_8[0xd] = (uint)DAT_0080874d;
  puStack_8[0xe] = uStack_10;
  puStack_8[0xf] = uStack_18;
  puStack_8[0x12] = *(undefined4 *)(iStack_24 + 0xfc);
  puStack_8[0x13] = *(undefined4 *)(iStack_24 + 0x100);
  if (*(int *)(iStack_24 + 0x114) != 0) {
    puStack_1c = (undefined4 *)(iStack_24 + 0x3c);
    puVar3 = puStack_8 + 0x20;
    puStack_20 = (undefined4 *)0x4;
    do {
      if ((undefined4 *)*puStack_1c != (undefined4 *)0x0) {
        uVar5 = *(int *)(iStack_24 + 0x28) * *(int *)(iStack_24 + 0x2c);
        puVar7 = (undefined4 *)*puStack_1c;
        puVar8 = puVar3;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        puVar3 = (undefined4 *)
                 ((int)puVar3 + *(int *)(iStack_24 + 0x28) * *(int *)(iStack_24 + 0x2c));
      }
      puStack_1c = puStack_1c + 1;
      puStack_20 = (undefined4 *)((int)puStack_20 + -1);
    } while (puStack_20 != (undefined4 *)0x0);
    puStack_20 = (undefined4 *)0x0;
    if (puStack_c != (undefined4 *)0x0) {
      puVar7 = puStack_c;
      puVar8 = puVar3;
      for (uVar6 = uStack_10 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar6 = uStack_10 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      puStack_20 = (undefined4 *)((int)puVar3 + uStack_10);
      FUN_006ab060(&puStack_c);
      puVar3 = puStack_20;
    }
    if (puStack_14 != (undefined4 *)0x0) {
      puVar7 = puStack_14;
      for (uVar6 = uStack_18 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar3 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar3 = puVar3 + 1;
      }
      for (uVar6 = uStack_18 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar3 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
      FUN_006ab060(&puStack_14);
    }
  }
  DAT_00858df8 = (undefined4 *)uStack_68;
  return puStack_8;
}

