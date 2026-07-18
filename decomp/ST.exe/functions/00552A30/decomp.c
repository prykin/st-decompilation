
void FUN_00552a30(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_48 [16];
  int local_8;
  
  uVar2 = DAT_00858df8;
  iVar3 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    *(undefined4 *)(local_8 + 0x3f3) = 0;
    *(undefined4 *)(local_8 + 0x3ef) = 0;
    *(undefined4 *)(local_8 + 0x3eb) = 0;
    DAT_00802a48 = 0;
    DAT_00858df8 = uVar2;
    return;
  }
  DAT_00858df8 = uVar2;
  iVar4 = FUN_006ad4d0(s_E____titans_Andrey_upginfo_cpp_007c87b8,0x2a,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7c87b8,0x2a);
  return;
}

