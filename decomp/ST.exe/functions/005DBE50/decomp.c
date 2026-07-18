
void FUN_005dbe50(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 DWORD param_6,DWORD param_7,BITMAPINFO *param_8)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  undefined4 uVar4;
  undefined4 local_44 [16];
  
  uVar4 = DAT_00858df8;
  if (param_8 != (BITMAPINFO *)0x0) {
    DAT_00858df8 = &stack0xffffffb8;
    iVar2 = __setjmp3(local_44,0,unaff_ESI,uVar4);
    if (iVar2 == 0) {
      FUN_006b4680(param_1,param_4,param_5,param_8,(uint *)0x0,0,0,param_6,param_7,0x10000ff);
      DAT_00858df8 = (undefined1 *)uVar4;
      return;
    }
    DAT_00858df8 = (undefined1 *)uVar4;
    iVar3 = FUN_006ad4d0(s_E____titans_Start_startsys_cpp_007cd718,0x1b7,0,iVar2,&DAT_007a4ccc);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar2,0,0x7cd718,0x1b7);
  }
  return;
}

