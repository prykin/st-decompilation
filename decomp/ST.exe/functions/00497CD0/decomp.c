
undefined4 FUN_00497cd0(int param_1,int param_2,int param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 extraout_EDX;
  undefined4 unaff_ESI;
  uint uVar6;
  void *unaff_EDI;
  undefined4 local_50;
  undefined4 local_4c [16];
  void *local_c;
  uint local_8;
  
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar2 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    uVar6 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      do {
        FUN_006acc70(param_1,uVar6,&local_8);
        uVar3 = thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX >> 8),
                                            *(undefined1 *)((int)local_c + 0x24)),local_8,1);
        *(undefined4 *)(uVar3 + 0xfd) = 0;
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)(param_1 + 0xc));
    }
    thunk_FUN_00415160(local_c,param_1,param_2,param_3,param_4);
    DAT_00858df8 = (undefined4 *)local_50;
    return 0;
  }
  DAT_00858df8 = (undefined4 *)local_50;
  iVar4 = FUN_006ad4d0(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x6e,0,iVar2,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  FUN_006a5e40(iVar2,0,0x7abe3c,0x6f);
  return 0xffffffff;
}

