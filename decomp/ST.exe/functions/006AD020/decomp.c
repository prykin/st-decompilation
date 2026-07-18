
int FUN_006ad020(int param_1,int param_2,uint param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_4 - param_1;
  iVar2 = param_5 - param_2;
  iVar3 = iVar1;
  switch(param_3) {
  case 1:
  case 2:
    iVar3 = -iVar2;
    iVar2 = iVar1;
    break;
  case 3:
  case 4:
    iVar3 = -iVar1;
    iVar2 = -iVar2;
    break;
  case 5:
  case 6:
    iVar3 = iVar2;
    iVar2 = -iVar1;
  }
  if ((param_3 & 1) == 0) {
    return iVar2 * 2;
  }
  iVar3 = (iVar3 - iVar2) * 4 + 1;
  iVar3 = (int)((ulonglong)((longlong)iVar3 * 0x55555555) >> 0x20) - iVar3;
  return (iVar3 >> 1) - (iVar3 >> 0x1f);
}

