
bool FUN_00753090(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8)

{
  int iVar1;
  
  iVar1 = param_1 + param_3;
  if (param_1 < param_5) {
    param_1 = param_5;
  }
  if (param_7 + param_5 < iVar1) {
    iVar1 = param_7 + param_5;
  }
  if (iVar1 <= param_1) {
    return false;
  }
  iVar1 = param_4 + param_2;
  if (param_2 < param_6) {
    param_2 = param_6;
  }
  if (param_8 + param_6 < iVar1) {
    iVar1 = param_8 + param_6;
  }
  return param_2 < iVar1;
}

