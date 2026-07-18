
undefined4 FUN_005ab0a0(void)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  void *unaff_ESI;
  undefined4 local_4c [16];
  int local_c;
  undefined4 local_8;
  
  uVar5 = DAT_00858df8;
  local_8 = 0;
  DAT_00858df8 = &stack0xffffffb0;
  iVar3 = __setjmp3(local_4c,0,unaff_ESI,uVar5);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined1 *)uVar5;
    iVar4 = FUN_006ad4d0(s_E____titans_Start_hologram_cpp_007cc674,0xc1,0,iVar3,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
    FUN_006a5e40(iVar3,0,0x7cc674,0xc1);
    return local_8;
  }
  uVar1 = *(uint *)(local_c + 3);
  if (-1 < (int)uVar1) {
    iVar3 = *(int *)(local_c + 0x17);
    if (*(char *)(local_c + 2) == '\0') {
      if (iVar3 < *(int *)(local_c + 0x13) + -2) {
        *(int *)(local_c + 0x17) = iVar3 + 1;
        local_8 = 1;
        FUN_006b35d0(DAT_008075a8,uVar1);
      }
    }
    else if (0 < iVar3) {
      *(int *)(local_c + 0x17) = iVar3 + -1;
      local_8 = 1;
      FUN_006b35d0(DAT_008075a8,uVar1);
      DAT_00858df8 = (undefined1 *)uVar5;
      return local_8;
    }
  }
  DAT_00858df8 = (undefined1 *)uVar5;
  return local_8;
}

