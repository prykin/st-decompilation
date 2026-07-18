
bool FUN_0074b8c6(int *param_1,int *param_2)

{
  int *piVar1;
  bool bVar2;
  
  piVar1 = param_2;
  if (param_1 == param_2) {
    bVar2 = true;
  }
  else {
    (**(code **)*param_1)(param_1,&DAT_007a22b8,&param_1);
    (**(code **)*piVar1)(piVar1,&DAT_007a22b8,&param_2);
    (**(code **)(*param_1 + 8))(param_1);
    (**(code **)(*param_2 + 8))(param_2);
    bVar2 = param_1 == param_2;
  }
  return bVar2;
}

