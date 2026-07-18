
int __cdecl FUN_0070c860(uint param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  void *unaff_ESI;
  undefined4 uVar3;
  undefined4 local_48 [16];
  int local_8;
  
  uVar3 = DAT_00858df8;
  local_8 = 0;
  DAT_00858df8 = &stack0xffffffb4;
  iVar1 = __setjmp3(local_48,0,unaff_ESI,uVar3);
  if (iVar1 != 0) {
    DAT_00858df8 = (undefined1 *)uVar3;
    return 0;
  }
  if (0 < param_4) {
    uVar2 = FUN_006b4fa0(param_1);
    FUN_007521b0(&local_8,param_1,uVar2,param_3,param_4,param_2);
    DAT_00858df8 = (undefined1 *)uVar3;
    return local_8;
  }
  iVar1 = FUN_006b4fa0(param_1);
  FUN_006b4b20(&local_8,param_1,iVar1,(byte)param_2);
  DAT_00858df8 = (undefined1 *)uVar3;
  return local_8;
}

