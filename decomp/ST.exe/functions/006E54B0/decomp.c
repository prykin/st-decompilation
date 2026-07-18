
int FUN_006e54b0(int param_1,undefined4 *param_2,int *param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  undefined4 uVar4;
  undefined4 local_50 [16];
  undefined4 local_10;
  int local_c;
  int local_8;
  
  uVar4 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffac;
  iVar2 = __setjmp3(local_50,0,unaff_ESI,uVar4);
  if (iVar2 == 0) {
    local_10 = param_4;
    local_c = FUN_006e3810(param_1,param_4);
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)(local_c + 8);
    }
    if (param_3 != (int *)0x0) {
      *param_3 = local_c;
    }
    *(int *)(local_c + 0xc) = local_8;
    FUN_006ae1c0(*(uint **)(local_8 + 0x10),&local_10);
    DAT_00858df8 = (undefined1 *)uVar4;
    return local_c;
  }
  DAT_00858df8 = (undefined1 *)uVar4;
  iVar3 = FUN_006ad4d0(s_E__Ourlib_Sapp_cpp_007ee78c,0x3b3,0,iVar2,
                       (byte *)s_SystemClassTy___CreateObject_err_007eeac8);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  FUN_006a5e40(iVar2,0,0x7ee78c,0x3b4);
  return 0;
}

