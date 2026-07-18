
int __thiscall FUN_004c9370(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 0x3d4);
  iVar1 = 0;
  if (((iVar3 != 0) && (piVar2 = *(int **)((int)this + 0x607), piVar2 != (int *)0x0)) && (0 < iVar3)
     ) {
    do {
      if (((*piVar2 == param_1) && (piVar2[1] == param_2)) &&
         ((param_3 < 0 || (param_3 == piVar2[3])))) {
        iVar1 = iVar1 + piVar2[2];
      }
      piVar2 = (int *)((int)piVar2 + 0x27);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return iVar1;
}

