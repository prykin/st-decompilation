
undefined4 FUN_0044aa20(uint param_1,uint param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_50;
  undefined4 local_4c [17];
  undefined4 local_8;
  
  local_8 = 0;
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar2 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    uVar3 = thunk_FUN_0042b620(0xffffffff,param_1,6);
    uVar5 = extraout_ECX;
    if (uVar3 != param_2) {
      FUN_006a5e40(-0x5001fff9,DAT_007ed77c,0x7a6004,0x2fb8);
      uVar5 = extraout_ECX_00;
    }
    thunk_FUN_0042c5f0(DAT_0080874d,*(int *)(param_2 + 0x20),
                       CONCAT31((int3)((uint)uVar5 >> 8),*(undefined1 *)(param_2 + 0x24)),param_1);
    thunk_FUN_0042cef0(*(int *)(param_2 + 0x20),*(char *)(param_2 + 0x24),(short)param_1);
    FUN_006ae140(DAT_007fa164,param_1 & 0xffff,&local_8);
    DAT_00858df8 = (undefined4 *)local_50;
  }
  else {
    DAT_00858df8 = (undefined4 *)local_50;
    if (iVar2 != -0x5001fff7) {
      iVar4 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2fc1,0,iVar2,&DAT_007a4ccc);
      if (iVar4 != 0) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return uVar5;
      }
      FUN_006a5e40(iVar2,0,0x7a6004,0x2fc2);
      return 0xffffffff;
    }
  }
  return 0;
}

