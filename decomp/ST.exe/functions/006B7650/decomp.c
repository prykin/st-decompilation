
int FUN_006b7650(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((param_1[1] & 1) == 0) || (param_2 != 1)) {
    uVar2 = 0;
    if (((param_1[1] & 2) != 0) && ((param_1[10] != 1 && (param_1[10] != 3)))) {
      uVar2 = 1;
    }
    iVar1 = (**(code **)(*(int *)*param_1 + 0x68))
                      ((int *)*param_1,param_1[0xe],param_2,uVar2,param_3,param_4);
    if (iVar1 != 0) {
      FUN_006a5e40(iVar1,DAT_007ed77c,0x7edbc4,0x499);
      return iVar1;
    }
  }
  return 0;
}

