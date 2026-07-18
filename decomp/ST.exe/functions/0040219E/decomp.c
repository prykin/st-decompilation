
undefined4 thunk_FUN_00430620(short param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  void *unaff_ESI;
  undefined4 auStack_4c [16];
  undefined4 uStack_c;
  int iStack_8;
  
  uVar5 = DAT_00858df8;
  uStack_c = 0;
  DAT_00858df8 = &stack0xffffffb0;
  iVar2 = __setjmp3(auStack_4c,0,unaff_ESI,uVar5);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined1 *)uVar5;
    if (iVar2 != -0x5001fff7) {
      iVar4 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x80b,0,iVar2,&DAT_007a4ccc);
      if (iVar4 != 0) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return uVar5;
      }
      FUN_006a5e40(iVar2,0,0x7a6004,0x80c);
    }
    return uStack_c;
  }
  uVar3 = FUN_006acc70(DAT_007fa130,(int)param_1,&iStack_8);
  if (uVar3 != 0xfffffffc) {
    if (iStack_8 == 0) {
      FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0x806);
    }
    if (*(int *)(iStack_8 + 0x18) == param_2) {
      DAT_00858df8 = (undefined1 *)uVar5;
      return 1;
    }
  }
  DAT_00858df8 = (undefined1 *)uVar5;
  return uStack_c;
}

