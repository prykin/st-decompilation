
int __cdecl FUN_00715280(int param_1,char *param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  undefined4 uVar4;
  undefined4 local_50 [16];
  int local_10 [3];
  
  uVar4 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffac;
  iVar2 = __setjmp3(local_50,0,unaff_ESI,uVar4);
  if (iVar2 == 0) {
    if (param_1 == 0) {
      FUN_006a5e40(-0x34,DAT_007ed77c,0x7f03fc,0x5b);
    }
    FUN_006f2310(0x14,param_2,local_10,1);
    DAT_00858df8 = (undefined1 *)uVar4;
    return local_10[0];
  }
  DAT_00858df8 = (undefined1 *)uVar4;
  iVar3 = FUN_006ad4d0(s_E__ourlib_mfdarr_cpp_007f03fc,0x60,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  if (iVar2 == -4) {
    if (param_3 != 0) {
      FUN_006a5e40(-4,0,0x7f03fc,99);
    }
    return -4;
  }
  FUN_006a5e40(iVar2,0,0x7f03fc,0x67);
  if (iVar2 < 0) {
    return iVar2;
  }
  return -1;
}

