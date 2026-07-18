
uint FUN_0074e40e(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int *param_5
                 ,undefined4 param_6)

{
  uint uVar1;
  
  uVar1 = FUN_0074e337(param_1,param_2,(int *)0x0,param_5,(int *)&param_5);
  if (-1 < (int)uVar1) {
    uVar1 = (**(code **)(*param_5 + 0x28))(param_5,param_3,param_4,param_6);
    (**(code **)(*param_5 + 8))(param_5);
  }
  return uVar1;
}

