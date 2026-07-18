
undefined4 FUN_00576ad0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  void *unaff_ESI;
  undefined4 local_4c [16];
  int *local_c;
  undefined4 local_8;
  
  uVar4 = DAT_00858df8;
  local_8 = 0;
  DAT_00858df8 = &stack0xffffffb0;
  iVar2 = __setjmp3(local_4c,0,unaff_ESI,uVar4);
  if (iVar2 == 0) {
    (**(code **)(*local_c + 0xc))(1,&local_8,0,0);
    (**(code **)(*local_c + 0xc))(0x101,&DAT_00802a2c,0,0);
    DAT_00858df8 = (undefined1 *)uVar4;
    return 0;
  }
  DAT_00858df8 = (undefined1 *)uVar4;
  iVar3 = FUN_006ad4d0(s_E____titans_tsystem_cpp_007cab5c,0x2c,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  FUN_006a5e40(iVar2,0,0x7cab5c,0x2d);
  return 0xffffffff;
}

