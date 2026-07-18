
undefined4 * __cdecl FUN_0070aad0(cMf32 *param_1,char *param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 unaff_EBX;
  void *unaff_ESI;
  undefined4 local_54;
  undefined4 local_50 [16];
  int *local_10;
  uint local_c;
  undefined4 *local_8;
  
  local_c = 0;
  local_8 = (undefined4 *)0x0;
  local_10 = (undefined4 *)0x0;
  local_54 = DAT_00858df8;
  DAT_00858df8 = &local_54;
  iVar2 = __setjmp3(local_50,0,unaff_ESI,unaff_EBX);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)local_54;
    iVar4 = FUN_006ad4d0(s_E__Ourlib_Mfimg_cpp_007effe0,0x11b,0,iVar2,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      puVar5 = (undefined4 *)(*pcVar1)();
      return puVar5;
    }
    if (local_10 != (undefined4 *)0x0) {
      FUN_006c6fc0(local_10);
    }
    cMf32::RecMemFree(param_1,&local_c);
    if (local_8 != (undefined4 *)0x0) {
      FUN_006ab060(&local_8);
    }
    FUN_006a5e40(iVar2,0,0x7effe0,0x121);
    return (undefined4 *)0x0;
  }
  local_c = FUN_0070aab0(param_1,param_2,0,param_3);
  if (local_c == 0) {
    DAT_00858df8 = (undefined4 *)local_54;
    return (undefined4 *)0x0;
  }
  piVar3 = FUN_006c7dc0(local_c);
  local_10 = piVar3;
  local_8 = FUN_006c7070(piVar3,(undefined4 *)0x0,0);
  if (piVar3 != (int *)0x0) {
    FUN_006c6fc0(piVar3);
  }
  cMf32::RecMemFree(param_1,&local_c);
  DAT_00858df8 = (undefined4 *)local_54;
  return local_8;
}

