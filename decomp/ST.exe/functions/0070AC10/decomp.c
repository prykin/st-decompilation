
undefined4 * __cdecl FUN_0070ac10(cMf32 *param_1,char *param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_54;
  undefined4 local_50 [16];
  int *local_10;
  undefined4 *local_c;
  uint local_8;
  
  local_8 = 0;
  local_c = (undefined4 *)0x0;
  local_10 = (undefined4 *)0x0;
  local_54 = DAT_00858df8;
  DAT_00858df8 = &local_54;
  iVar2 = __setjmp3(local_50,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)local_54;
    iVar5 = FUN_006ad4d0(s_E__Ourlib_Mfimg_cpp_007effe0,0x14b,0,iVar2,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      puVar6 = (undefined4 *)(*pcVar1)();
      return puVar6;
    }
    if (local_10 != (undefined4 *)0x0) {
      FUN_006c7980(local_10);
    }
    cMf32::RecMemFree(param_1,&local_8);
    if (local_c != (undefined4 *)0x0) {
      FUN_006ab060(&local_c);
    }
    FUN_006a5e40(iVar2,0,0x7effe0,0x151);
    return (undefined4 *)0x0;
  }
  local_8 = FUN_0070abf0(param_1,param_2,0,param_3);
  if (local_8 == 0) {
    DAT_00858df8 = (undefined4 *)local_54;
    return (undefined4 *)0x0;
  }
  uVar3 = FUN_0070a650(param_1,4,param_2,param_3);
  piVar4 = FUN_006c7c50(local_8,uVar3);
  local_10 = piVar4;
  local_c = FUN_006c79a0(piVar4,(undefined4 *)0x0,0);
  if (piVar4 != (int *)0x0) {
    FUN_006c7980(piVar4);
  }
  cMf32::RecMemFree(param_1,&local_8);
  DAT_00858df8 = (undefined4 *)local_54;
  return local_c;
}

