
int __cdecl FUN_0070a650(undefined4 param_1,byte param_2,char *param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  undefined4 uVar4;
  undefined4 local_44 [16];
  
  uVar4 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb8;
  iVar2 = __setjmp3(local_44,0,unaff_ESI,uVar4);
  if (iVar2 == 0) {
    iVar2 = FUN_006f2600(param_2,param_3,(undefined1 *)0x0,param_4);
    DAT_00858df8 = (undefined1 *)uVar4;
    return iVar2;
  }
  DAT_00858df8 = (undefined1 *)uVar4;
  iVar3 = FUN_006ad4d0(s_E__Ourlib_Mfimg_cpp_007effe0,0x37,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  FUN_006a5e40(iVar2,0,0x7effe0,0x39);
  if (iVar2 < 0) {
    return iVar2;
  }
  return -1;
}

