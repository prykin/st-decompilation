
void FUN_0075ef60(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)(**(code **)*param_1)(param_1,1,param_2 << 5);
  *piVar1 = 0;
  piVar1[1] = 0x1f;
  piVar1[2] = 0;
  piVar1[3] = 0x3f;
  piVar1[4] = 0;
  piVar1[5] = 0x1f;
  FUN_0075efe0(param_1,piVar1);
  iVar2 = FUN_0075f3f0(param_1,(int)piVar1,1,param_2);
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      FUN_0075f590((AnonShape_0075F590_570A7014 *)param_1,piVar1,iVar3);
      iVar3 = iVar3 + 1;
      piVar1 = piVar1 + 8;
    } while (iVar3 < iVar2);
    param_1[0x1f] = iVar2;
    return;
  }
  param_1[0x1f] = iVar2;
  return;
}

