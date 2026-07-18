
undefined4 __thiscall STGroupBoatC::MakePVec(STGroupBoatC *this)

{
  code *pcVar1;
  uint uVar2;
  STGroupBoatC *pSVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 unaff_ESI;
  uint uVar9;
  void *unaff_EDI;
  undefined4 uStack_58;
  undefined4 auStack_54 [16];
  undefined1 uStack_14;
  char cStack_13;
  undefined2 uStack_12;
  undefined2 uStack_10;
  uint uStack_c;
  STGroupBoatC *pSStack_8;
  
  uStack_58 = DAT_00858df8;
  DAT_00858df8 = &uStack_58;
  pSStack_8 = this;
  iVar4 = __setjmp3(auStack_54,0,unaff_EDI,unaff_ESI);
  pSVar3 = pSStack_8;
  if (iVar4 == 0) {
    if (*(int *)(pSStack_8 + 0x20e) == 0) {
      FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7abe3c,0x52e);
    }
    if (*(int *)(pSVar3 + 0x21e) != 0) {
      FUN_006ab060((undefined4 *)(pSVar3 + 0x21e));
    }
    uVar9 = *(uint *)(*(int *)(pSVar3 + 0x20e) + 0xc);
    *(uint *)(pSVar3 + 0x21a) = uVar9;
    uStack_c = uVar9;
    puVar5 = (undefined4 *)FUN_006aac70(uVar9 * 8);
    uVar2 = uStack_c;
    *(undefined4 **)(pSVar3 + 0x21e) = puVar5;
    for (iVar4 = (uVar9 & 0x1fffffff) << 1; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    uVar9 = 0;
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)puVar5 = 0;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    *(undefined4 *)(pSVar3 + 0x216) = 0;
    if (0 < (int)uStack_c) {
      do {
        FUN_006acc70(*(int *)(pSVar3 + 0x20e),uVar9,(undefined4 *)&uStack_14);
        uVar6 = thunk_FUN_0042b620(CONCAT22(uStack_12,CONCAT11(cStack_13,uStack_14)),
                                   CONCAT22(uStack_10,uStack_12),(int)cStack_13);
        if (uVar6 == 0) {
          uStack_12 = 0xffff;
          FUN_006ae140(*(uint **)(pSVar3 + 0x20e),uVar9,(undefined4 *)&uStack_14);
          *(undefined4 *)(*(int *)(pSVar3 + 0x21e) + uVar9 * 8) = 0xffffffff;
          if ((int)uVar9 < (int)(uVar2 - 1)) {
            *(undefined4 *)(*(int *)(pSVar3 + 0x21e) + 8 + uVar9 * 8) =
                 *(undefined4 *)(pSVar3 + 0x216);
          }
        }
        else {
          iVar4 = *(int *)(uVar6 + 0x219) + *(int *)(uVar6 + 0x215);
          *(int *)(pSVar3 + 0x216) = *(int *)(pSVar3 + 0x216) + iVar4;
          *(int *)(*(int *)(pSVar3 + 0x21e) + 4 + uVar9 * 8) = iVar4;
          if ((int)uVar9 < (int)(uVar2 - 1)) {
            *(undefined4 *)(*(int *)(pSVar3 + 0x21e) + 8 + uVar9 * 8) =
                 *(undefined4 *)(pSVar3 + 0x216);
          }
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar2);
    }
    DAT_00858df8 = (undefined4 *)uStack_58;
    return 0;
  }
  DAT_00858df8 = (undefined4 *)uStack_58;
  if (iVar4 == -0x5001fff7) {
    return 0;
  }
  iVar7 = FUN_006ad4d0(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x543,0,iVar4,&DAT_007a4ccc);
  if (iVar7 != 0) {
    pcVar1 = (code *)swi(3);
    uVar8 = (*pcVar1)();
    return uVar8;
  }
  FUN_006a5e40(iVar4,0,0x7abe3c,0x544);
  return 0xffffffff;
}

