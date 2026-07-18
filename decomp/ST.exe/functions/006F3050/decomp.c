
int __cdecl FUN_006f3050(undefined4 param_1,char *param_2,undefined2 *param_3,undefined2 *param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  undefined4 uVar4;
  undefined4 local_50 [16];
  undefined2 local_10;
  undefined2 local_e;
  
  uVar4 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffac;
  iVar2 = __setjmp3(local_50,0,unaff_ESI,uVar4);
  if (iVar2 == 0) {
    FUN_006f2310(0xc,param_2,(undefined4 *)&local_10,1);
    DAT_00858df8 = (undefined1 *)uVar4;
    if (param_3 != (undefined2 *)0x0) {
      *param_3 = local_10;
    }
    if (param_4 != (undefined2 *)0x0) {
      *param_4 = local_e;
    }
    return 0;
  }
  DAT_00858df8 = (undefined1 *)uVar4;
  iVar3 = FUN_006ad4d0(s_E__Ourlib_mfaobj_cpp_007efd3c,0x74,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  FUN_006a5e40(iVar2,0,0x7efd3c,0x76);
  if (iVar2 < 0) {
    return iVar2;
  }
  return -1;
}

