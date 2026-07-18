
int FUN_0074ec3f(int *param_1,double param_2)

{
  int iVar1;
  
  if (param_2 == 0.0) {
    iVar1 = -0x7ff8ffa9;
  }
  else {
    iVar1 = FUN_0074e8df(param_1,(int *)&param_1);
    if (-1 < iVar1) {
      iVar1 = (**(code **)(*param_1 + 0x44))(param_1,param_2);
      (**(code **)(*param_1 + 8))(param_1);
    }
  }
  return iVar1;
}

