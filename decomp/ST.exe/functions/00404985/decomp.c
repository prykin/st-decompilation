
undefined4 thunk_FUN_00499750(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar6;
  undefined4 uStack_58;
  undefined4 auStack_54 [16];
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_58 = DAT_00858df8;
  DAT_00858df8 = &uStack_58;
  iVar2 = __setjmp3(auStack_54,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if (*(int *)(iStack_10 + 0x212) == 0) {
      FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7abe3c,0x4d7);
    }
    uVar6 = 0;
    iStack_14 = *(int *)(param_1 + 0xc);
    if (0 < iStack_14) {
      do {
        FUN_006acc70(param_1,uVar6,&uStack_c);
        FUN_006acc70(*(int *)(iStack_10 + 0x20e),(int)uStack_c._2_2_,&uStack_8);
        if (uStack_8._2_2_ != -1) {
          uStack_8._2_2_ = -1;
          FUN_006ae140(*(uint **)(iStack_10 + 0x20e),(int)uStack_c._2_2_,&uStack_8);
          *(int *)(iStack_10 + 0x212) = *(int *)(iStack_10 + 0x212) + -1;
          *(undefined4 *)(*(int *)(iStack_10 + 0x21e) + uStack_c._2_2_ * 8) = 0xffffffff;
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < iStack_14);
    }
    if (*(int *)(iStack_10 + 0x212) == 0) {
      FUN_006ae110(*(byte **)(iStack_10 + 0x20e));
      *(undefined4 *)(iStack_10 + 0x20e) = 0;
      FUN_006ab060((undefined4 *)(iStack_10 + 0x21e));
      FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7abe3c,0x4e5);
    }
    iVar5 = -1;
    iVar2 = 0;
    if (0 < *(int *)(iStack_10 + 0x21a)) {
      iVar3 = *(int *)(iStack_10 + 0x21e);
      do {
        if (*(int *)(iVar3 + iVar2 * 8) != -1) {
          if (iVar5 == -1) {
            *(undefined4 *)(iVar3 + iVar2 * 8) = 0;
            iVar3 = *(int *)(iStack_10 + 0x21e);
            *(undefined4 *)(iStack_10 + 0x216) = *(undefined4 *)(iVar3 + 4 + iVar2 * 8);
            iVar5 = 0;
          }
          else {
            *(undefined4 *)(iVar3 + iVar2 * 8) = *(undefined4 *)(iStack_10 + 0x216);
            iVar3 = *(int *)(iStack_10 + 0x21e);
            *(int *)(iStack_10 + 0x216) =
                 *(int *)(iStack_10 + 0x216) + *(int *)(iVar3 + 4 + iVar2 * 8);
          }
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(iStack_10 + 0x21a));
    }
    DAT_00858df8 = (undefined4 *)uStack_58;
  }
  else {
    DAT_00858df8 = (undefined4 *)uStack_58;
    if (iVar2 != -0x5001fff7) {
      iVar5 = FUN_006ad4d0(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x4f3,0,iVar2,&DAT_007a4ccc);
      if (iVar5 != 0) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      FUN_006a5e40(iVar2,0,0x7abe3c,0x4f4);
      return 0xffffffff;
    }
  }
  return *(undefined4 *)(iStack_10 + 0x212);
}

