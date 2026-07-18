
void thunk_FUN_005585f0(int param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  uint *puVar8;
  int *piVar9;
  void *unaff_EDI;
  int iVar10;
  undefined4 uStack_58;
  undefined4 auStack_54 [16];
  int iStack_14;
  int iStack_10;
  undefined4 *puStack_c;
  uint *puStack_8;
  
  uStack_58 = DAT_00858df8;
  DAT_00858df8 = &uStack_58;
  iVar2 = __setjmp3(auStack_54,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    *(undefined4 *)(iStack_14 + 0x20) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(iStack_14 + 0x24) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(iStack_14 + 0x28) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(iStack_14 + 0x2c) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(iStack_14 + 0x30) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(iStack_14 + 0x34) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(iStack_14 + 0x1c) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(iStack_14 + 0x114) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(iStack_14 + 0xf8) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(iStack_14 + 0xfc) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(iStack_14 + 0x100) = *(undefined4 *)(param_1 + 0x4c);
    if (*(int *)(iStack_14 + 0x114) != 0) {
      puStack_c = (undefined4 *)(iStack_14 + 0x3c);
      uVar3 = *(int *)(iStack_14 + 0x2c) * *(int *)(iStack_14 + 0x28);
      iStack_10 = 4;
      puStack_8 = (uint *)(param_1 + 0x80);
      do {
        puVar4 = FUN_006aac10(uVar3);
        *puStack_c = puVar4;
        uVar7 = *(int *)(iStack_14 + 0x2c) * *(int *)(iStack_14 + 0x28);
        puStack_c = puStack_c + 1;
        puVar8 = puStack_8;
        for (uVar3 = uVar7 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar4 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar4 = puVar4 + 1;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(char *)puVar4 = (char)*puVar8;
          puVar8 = (uint *)((int)puVar8 + 1);
          puVar4 = (uint *)((int)puVar4 + 1);
        }
        uVar3 = *(int *)(iStack_14 + 0x2c) * *(int *)(iStack_14 + 0x28);
        puVar8 = (uint *)((int)puStack_8 + uVar3);
        iStack_10 = iStack_10 + -1;
        puStack_8 = puVar8;
      } while (iStack_10 != 0);
      puVar5 = FUN_006aac10(*(int *)(iStack_14 + 0x20) * *(int *)(iStack_14 + 0x24) * 2);
      *(undefined4 **)(iStack_14 + 0x38) = puVar5;
      puVar5 = FUN_006aac10(*(int *)(iStack_14 + 0x30) * *(int *)(iStack_14 + 0x34));
      *(undefined4 **)(iStack_14 + 0x4c) = puVar5;
      puVar5 = FUN_006aac10(*(int *)(iStack_14 + 0x30) * *(int *)(iStack_14 + 0x34) * 2);
      *(undefined4 **)(iStack_14 + 0x50) = puVar5;
      uVar6 = FUN_006b0060((uint *)0x0,puVar8);
      *(undefined4 *)(iStack_14 + 0xf4) = uVar6;
      uVar6 = FUN_006b0060((uint *)0x0,(uint *)((int)puVar8 + *(int *)(param_1 + 0x38)));
      *(undefined4 *)(iStack_14 + 0x110) = uVar6;
    }
    DAT_00858df8 = (undefined4 *)uStack_58;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_58;
  iVar10 = 4;
  piVar9 = (int *)(iStack_14 + 0x3c);
  do {
    if (*piVar9 != 0) {
      FUN_006ab060(piVar9);
    }
    piVar9 = piVar9 + 1;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  iVar10 = FUN_006ad4d0(s_E____titans_grig_visible_cpp_007c92cc,0x132,0,iVar2,&DAT_007a4ccc);
  if (iVar10 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7c92cc,0x133);
  return;
}

