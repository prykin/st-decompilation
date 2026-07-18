
uint FUN_00753d90(uint param_1,ushort *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00755970(param_1,param_2,0);
  if ((iVar1 == 0) || (*(short *)(*(int *)(param_1 + 0xc) + 0x2e) != 0)) {
    uVar2 = FUN_00755560(param_1,param_2,param_3,0xffffffff);
    if (uVar2 == 0) {
      return 0;
    }
  }
  else {
    uVar2 = 0xffffffc3;
  }
  FUN_006a5e40(uVar2,DAT_007ed77c,0x7f2c70,0x1a);
  return uVar2;
}

