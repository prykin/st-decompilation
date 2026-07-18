
int FUN_006b2450(int *param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(*param_1 + 0x20) == 0x10) {
    return 0;
  }
  iVar1 = param_1[0x75];
  param_1[0x75] = param_2;
  return iVar1;
}

