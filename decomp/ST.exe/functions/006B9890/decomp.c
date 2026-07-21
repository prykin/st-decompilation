
void FUN_006b9890(int *param_1)

{
  int *piVar1;
  
  piVar1 = param_1;
  param_1 = (int *)*param_1;
  while (param_1 != (int *)0x0) {
    FUN_006b98c0(piVar1,param_1);
    FreeAndNull(&param_1);
    param_1 = (int *)*piVar1;
  }
  return;
}

