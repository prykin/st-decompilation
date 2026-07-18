
int __cdecl FUN_00709e10(int param_1,char param_2,byte *param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  undefined4 uVar4;
  undefined4 local_50 [16];
  int local_10;
  uint local_c;
  int local_8;
  
  uVar4 = DAT_00858df8;
  local_10 = -4;
  local_8 = 0;
  DAT_00858df8 = &stack0xffffffac;
  iVar2 = __setjmp3(local_50,0,unaff_ESI,uVar4);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined1 *)uVar4;
    iVar3 = FUN_006ad4d0(s_E__Ourlib_mfrload_cpp_007eff5c,0xeb,0,iVar2,&DAT_007a4ccc);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
    FUN_006a5e40(iVar2,0,0x7eff5c,0xed);
    return iVar2;
  }
  if (param_1 == 0) {
    FUN_006a5e40(-0x34,DAT_007ed77c,0x7eff5c,0xe2);
    return -0x34;
  }
  if (*(int *)(param_1 + 4) == 0) {
    FUN_006a5e40(-0x34,DAT_007ed77c,0x7eff5c,0xe3);
    return -0x34;
  }
  iVar2 = FUN_007098a0(param_1,param_2,param_3,param_4,&local_8,&local_c);
  if (iVar2 != 0) {
    *(int *)(local_8 + 0x25) = *(int *)(local_8 + 0x25) + 1;
    DAT_00858df8 = (undefined1 *)uVar4;
    return *(int *)(local_8 + 0x25);
  }
  DAT_00858df8 = (undefined1 *)uVar4;
  return local_10;
}

