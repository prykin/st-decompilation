
uint * __cdecl FUN_0071aa10(int param_1,char *param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  ushort *puVar3;
  uint *puVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_50;
  undefined4 local_4c [16];
  uint *local_c;
  uint *local_8;
  
  local_8 = (uint *)0x0;
  local_c = (uint *)0x0;
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar2 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)local_50;
    iVar5 = FUN_006ad4d0(s_E__Ourlib_mfsarr_cpp_007f0898,0x1e,0,iVar2,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      puVar4 = (uint *)(*pcVar1)();
      return puVar4;
    }
    if (local_8 != (uint *)0x0) {
      cMf32::RecMemFree((cMf32 *)param_1,(uint *)&local_8);
    }
    if (local_c != (uint *)0x0) {
      FUN_006b5570((byte *)local_c);
    }
    FUN_006a5e40(iVar2,0,0x7f0898,0x23);
    return (uint *)0x0;
  }
  if (param_1 == 0) {
    FUN_006a5e40(-0x34,DAT_007ed77c,0x7f0898,0x15);
  }
  puVar3 = FUN_006f1ce0(0x17,param_2,(int *)&local_8,param_3);
  if (puVar3 == (ushort *)0x0) {
    DAT_00858df8 = (undefined4 *)local_50;
    return (uint *)0x0;
  }
  puVar4 = FUN_006c8680((uint *)0x0,local_8);
  if (local_8 != (uint *)0x0) {
    local_c = puVar4;
    cMf32::RecMemFree((cMf32 *)param_1,(uint *)&local_8);
  }
  DAT_00858df8 = (undefined4 *)local_50;
  return puVar4;
}

