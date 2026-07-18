
int __thiscall FUN_006301d0(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = 0;
  iVar3 = 0;
  piVar4 = (int *)((int)this + 0x1e5);
  do {
    if ((*piVar4 != 0) && ((iVar1 = *(int *)(*piVar4 + 4), iVar1 == 3 || (iVar1 == 6)))) {
      *param_1 = iVar3;
      iVar2 = iVar2 + 1;
      param_1 = param_1 + 1;
    }
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar3 < 5);
  return iVar2;
}

