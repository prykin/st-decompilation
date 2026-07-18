
uint FUN_00753df0(int param_1,uint param_2,undefined4 *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  void *unaff_ESI;
  undefined4 uVar3;
  undefined4 local_4c [16];
  int local_c;
  uint local_8;
  
  local_c = param_1;
  local_8 = param_2;
  if ((param_2 == 1) && (local_8 = FUN_00755a80(param_1,param_4), local_8 == 0xffffffff)) {
    return 0xffffffff;
  }
  uVar3 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb0;
  iVar2 = __setjmp3(local_4c,0,unaff_ESI,uVar3);
  uVar1 = local_8;
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined1 *)uVar3;
    if (param_2 == 1) {
      FUN_00753ce0(local_c,local_8);
    }
    FUN_006a5e40(iVar2,0,0x7f2c88,0x15);
    return 0xffffffff;
  }
  FUN_006d4860(local_c,local_8,param_3,param_4);
  DAT_00858df8 = (undefined1 *)uVar3;
  return uVar1;
}

