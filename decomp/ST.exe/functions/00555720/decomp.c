
int FUN_00555720(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  undefined4 local_44 [16];
  
  iVar2 = __setjmp3(local_44,0,unaff_ESI,DAT_00858df8);
  if (iVar2 == 0) {
    return 0;
  }
  iVar3 = FUN_006ad4d0(s_E____titans_grig_traks_cpp_007c9104,0x37,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  FUN_006a5e40(iVar2,0,0x7c9104,0x38);
  return iVar2;
}

