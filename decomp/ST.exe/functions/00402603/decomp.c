
undefined4 thunk_FUN_00499b80(void)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 unaff_ESI;
  uint uVar8;
  void *unaff_EDI;
  undefined4 uStack_58;
  undefined4 auStack_54 [16];
  undefined1 uStack_14;
  char cStack_13;
  undefined2 uStack_12;
  undefined2 uStack_10;
  uint uStack_c;
  int iStack_8;
  
  uStack_58 = DAT_00858df8;
  DAT_00858df8 = &uStack_58;
  iVar3 = __setjmp3(auStack_54,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    if (*(int *)(iStack_8 + 0x20e) == 0) {
      FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7abe3c,0x52e);
    }
    if (*(int *)(iStack_8 + 0x21e) != 0) {
      FUN_006ab060((undefined4 *)(iStack_8 + 0x21e));
    }
    uVar8 = *(uint *)(*(int *)(iStack_8 + 0x20e) + 0xc);
    *(uint *)(iStack_8 + 0x21a) = uVar8;
    uStack_c = uVar8;
    puVar4 = (undefined4 *)FUN_006aac70(uVar8 * 8);
    uVar2 = uStack_c;
    *(undefined4 *)(iStack_8 + 0x21e) = puVar4;
    for (iVar3 = (uVar8 & 0x1fffffff) << 1; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    uVar8 = 0;
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    *(undefined4 *)(iStack_8 + 0x216) = 0;
    if (0 < (int)uStack_c) {
      do {
        FUN_006acc70(*(int *)(iStack_8 + 0x20e),uVar8,(undefined4 *)&uStack_14);
        uVar5 = thunk_FUN_0042b620(CONCAT22(uStack_12,CONCAT11(cStack_13,uStack_14)),
                                   CONCAT22(uStack_10,uStack_12),(int)cStack_13);
        if (uVar5 == 0) {
          uStack_12 = 0xffff;
          FUN_006ae140(*(uint **)(iStack_8 + 0x20e),uVar8,(undefined4 *)&uStack_14);
          *(undefined4 *)(*(int *)(iStack_8 + 0x21e) + uVar8 * 8) = 0xffffffff;
          if ((int)uVar8 < (int)(uVar2 - 1)) {
            *(undefined4 *)(*(int *)(iStack_8 + 0x21e) + 8 + uVar8 * 8) =
                 *(undefined4 *)(iStack_8 + 0x216);
          }
        }
        else {
          iVar3 = *(int *)(uVar5 + 0x219) + *(int *)(uVar5 + 0x215);
          *(int *)(iStack_8 + 0x216) = *(int *)(iStack_8 + 0x216) + iVar3;
          *(int *)(*(int *)(iStack_8 + 0x21e) + 4 + uVar8 * 8) = iVar3;
          if ((int)uVar8 < (int)(uVar2 - 1)) {
            *(undefined4 *)(*(int *)(iStack_8 + 0x21e) + 8 + uVar8 * 8) =
                 *(undefined4 *)(iStack_8 + 0x216);
          }
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)uVar2);
    }
    DAT_00858df8 = (undefined4 *)uStack_58;
    return 0;
  }
  DAT_00858df8 = (undefined4 *)uStack_58;
  if (iVar3 == -0x5001fff7) {
    return 0;
  }
  iVar6 = FUN_006ad4d0(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x543,0,iVar3,&DAT_007a4ccc);
  if (iVar6 != 0) {
    pcVar1 = (code *)swi(3);
    uVar7 = (*pcVar1)();
    return uVar7;
  }
  FUN_006a5e40(iVar3,0,0x7abe3c,0x544);
  return 0xffffffff;
}

