
int thunk_FUN_004240f0(int *param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 unaff_ESI;
  undefined4 *puVar6;
  void *unaff_EDI;
  undefined4 *puVar7;
  undefined4 uStack_5c;
  undefined4 auStack_58 [16];
  int iStack_18;
  int iStack_14;
  int iStack_10;
  undefined4 *puStack_c;
  uint uStack_8;
  
  uStack_5c = DAT_00858df8;
  DAT_00858df8 = &uStack_5c;
  iVar3 = __setjmp3(auStack_58,0,unaff_EDI,unaff_ESI);
  iVar4 = iStack_10;
  if (iVar3 == 0) {
    *param_1 = 0x40;
    if (*(uint **)(iStack_10 + 0x29) != (uint *)0x0) {
      puStack_c = (undefined4 *)FUN_006b0020(*(uint **)(iStack_10 + 0x29),(int *)&uStack_8);
      FUN_006ab060(&puStack_c);
      *param_1 = *param_1 + uStack_8;
    }
    if (*(uint **)(iVar4 + 0x2d) != (uint *)0x0) {
      puStack_c = (undefined4 *)FUN_006b0020(*(uint **)(iVar4 + 0x2d),(int *)&uStack_8);
      FUN_006ab060(&puStack_c);
      *param_1 = *param_1 + uStack_8;
    }
    iVar3 = FUN_006aac70(*param_1);
    uStack_8 = 0;
    *(int *)(iVar3 + 4) = (int)*(char *)(iVar4 + 0x24);
    *(undefined4 *)(iVar3 + 0xc) = 2;
    *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(iVar4 + 0x20);
    *(undefined2 *)(iVar3 + 0x18) = *(undefined2 *)(iVar4 + 0x25);
    *(undefined2 *)(iVar3 + 0x1a) = *(undefined2 *)(iVar4 + 0x27);
    *(undefined4 *)(iVar3 + 0x2c) = *(undefined4 *)(iVar4 + 0x31);
    *(undefined4 *)(iVar3 + 0x30) = *(undefined4 *)(iVar4 + 0x35);
    *(undefined4 *)(iVar3 + 0x34) = *(undefined4 *)(iVar4 + 0x39);
    iStack_18 = iVar3;
    if (*(uint **)(iVar4 + 0x29) == (uint *)0x0) {
      uStack_8 = 0;
      *(undefined4 *)(iVar3 + 0x1c) = 0xffffffff;
      *(undefined4 *)(iVar3 + 0x20) = 0;
    }
    else {
      puStack_c = (undefined4 *)FUN_006b0020(*(uint **)(iVar4 + 0x29),(int *)&uStack_8);
      puVar6 = puStack_c;
      puVar7 = (undefined4 *)(iVar3 + 0x40);
      for (uVar5 = uStack_8 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar5 = uStack_8 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      *(undefined4 *)(iVar3 + 0x1c) = 0x40;
      *(uint *)(iVar3 + 0x20) = uStack_8;
      FUN_006ab060(&puStack_c);
      iVar4 = iStack_10;
    }
    iVar1 = uStack_8 + 0x40;
    if (*(uint **)(iVar4 + 0x2d) == (uint *)0x0) {
      *(undefined4 *)(iVar3 + 0x24) = 0xffffffff;
      *(uint *)(iVar3 + 0x28) = uStack_8;
    }
    else {
      iStack_14 = iVar1;
      puStack_c = (undefined4 *)FUN_006b0020(*(uint **)(iVar4 + 0x2d),(int *)&uStack_8);
      puVar6 = puStack_c;
      puVar7 = (undefined4 *)(iVar1 + iVar3);
      for (uVar5 = uStack_8 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar5 = uStack_8 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      *(int *)(iVar3 + 0x24) = iStack_14;
      *(uint *)(iVar3 + 0x28) = uStack_8;
      FUN_006ab060(&puStack_c);
    }
    *(undefined4 *)(iVar3 + 0x38) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x3c) = 0;
    DAT_00858df8 = (undefined4 *)uStack_5c;
    return iVar3;
  }
  DAT_00858df8 = (undefined4 *)uStack_5c;
  iVar4 = FUN_006ad4d0(s_E____titans_wlad_tc_grp_cpp_007a50a4,0x1b9,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  FUN_006a5e40(iVar3,0,0x7a50a4,0x1ba);
  return iStack_18;
}

