
void FUN_0074b719(int *param_1,undefined4 *param_2,short *param_3)

{
  int *piVar1;
  
  piVar1 = param_1;
  if ((param_2 == (undefined4 *)0x0) && (param_1[0xd] != 0)) {
    (**(code **)*param_1)(param_1,&DAT_007a1368,&param_1);
    FUN_00747406(piVar1 + -3,0x15,param_1,0);
    (**(code **)(*param_1 + 8))(param_1);
  }
  FUN_0074736a((int)piVar1,param_2,param_3);
  return;
}

