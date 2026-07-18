
int __cdecl FUN_00718080(undefined4 param_1,char *param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  void *unaff_ESI;
  undefined4 uVar5;
  undefined4 local_50 [16];
  short local_10 [6];
  
  uVar5 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffac;
  iVar2 = __setjmp3(local_50,0,unaff_ESI,uVar5);
  if (iVar2 == 0) {
    puVar3 = FUN_006f2310(0x20,param_2,(undefined4 *)local_10,param_3);
    DAT_00858df8 = (undefined1 *)uVar5;
    if (puVar3 != (undefined4 *)0x0) {
      return (int)local_10[0];
    }
  }
  else {
    DAT_00858df8 = (undefined1 *)uVar5;
    iVar4 = FUN_006ad4d0(s_E__ourlib_mfplt_cpp_007f06f8,0x34,0,iVar2,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
    FUN_006a5e40(iVar2,0,0x7f06f8,0x36);
    if (iVar2 < 0) {
      return iVar2;
    }
  }
  return -1;
}

