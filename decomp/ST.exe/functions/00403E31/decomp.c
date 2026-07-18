
undefined4 __thiscall
STAllPlayersC::AddObjToTmp2
          (STAllPlayersC *this,char param_1,int param_2,int param_3,int param_4,uint param_5,
          uint param_6)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_ESI;
  int *piVar4;
  void *unaff_EDI;
  undefined1 uVar5;
  undefined4 uStack_58;
  undefined4 auStack_54 [16];
  int iStack_14;
  undefined4 uStack_10;
  STAllPlayersC *pSStack_c;
  undefined4 uStack_8;
  
  uStack_10 = 0;
  uStack_58 = DAT_00858df8;
  DAT_00858df8 = &uStack_58;
  pSStack_c = this;
  iVar2 = __setjmp3(auStack_54,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_58;
    if (iVar2 == -0x5001fff7) {
      return uStack_10;
    }
    uStack_10 = 0xaffe0001;
    if (iVar2 == -0x5001ffff) {
      iVar2 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x251,0,0,&DAT_007a4ccc);
      if (iVar2 != 0) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
    }
    else {
      iVar2 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x252,0,0,&DAT_007a4ccc);
      if (iVar2 != 0) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
    }
    return 0xaffe0001;
  }
  if (param_2 == 0) {
    iStack_14 = (int)&DAT_007f4f83 + param_1 * 0xa62;
    if (param_3 == 0) {
      thunk_FUN_0043fc50(1,0);
      uVar5 = 2;
LAB_0042bf8b:
      thunk_FUN_0043fc50(uVar5,param_3);
    }
  }
  else if (param_2 == 1) {
    iStack_14 = (int)&DAT_007f4fd3 + param_1 * 0xa62;
    if (param_3 == 0) {
      thunk_FUN_0043fc50(4,0);
      uVar5 = 5;
      goto LAB_0042bf8b;
    }
  }
  else {
    iVar2 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x23b,0,0,&DAT_007a4ccc);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0x23c);
  }
  piVar4 = (int *)(param_3 * 0x10 + iStack_14);
  if (((*piVar4 == param_4) && (piVar4[1] == (int)(char)param_5)) &&
     ((short)piVar4[2] == (short)param_6)) {
    FUN_006a5e40(-0x5001ffff,DAT_007ed77c,0x7a6004,0x23f);
  }
  *piVar4 = param_4;
  piVar4[1] = (int)(char)param_5;
  *(short *)(piVar4 + 2) = (short)param_6;
  if (param_4 < 0x1a5) {
    if (param_4 == 0x1a4) {
      uStack_8 = 5;
      goto LAB_0042c072;
    }
    if (param_4 == 0x5a) {
      uStack_8 = 4;
      goto LAB_0042c072;
    }
    if (param_4 == 0x172) {
      uStack_8 = 2;
      goto LAB_0042c072;
    }
  }
  else {
    if (param_4 == 0x1ae) {
      uStack_8 = 3;
      goto LAB_0042c072;
    }
    if (param_4 == 0x1b8) {
      uStack_8 = 6;
      goto LAB_0042c072;
    }
  }
  iVar2 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x249,0,0,&DAT_007a4ccc);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  FUN_006a5e40(-0x5001ffff,DAT_007ed77c,0x7a6004,0x24a);
LAB_0042c072:
  piVar4 = (int *)thunk_FUN_0042b620(param_5,param_6,uStack_8);
  (**(code **)(*piVar4 + 0xe8))(1);
  DAT_00858df8 = (undefined4 *)uStack_58;
  return uStack_10;
}

