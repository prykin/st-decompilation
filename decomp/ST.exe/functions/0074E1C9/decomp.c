
undefined4 __thiscall FUN_0074e1c9(void *this,int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (param_1 != (int *)0x0) {
    iVar3 = 0;
    piVar2 = param_1;
    do {
      piVar2 = (int *)*piVar2;
      iVar3 = iVar3 + 1;
    } while (piVar2 != (int *)0x0);
    if (param_2[1] != 0) {
      *(undefined4 *)(param_2[1] + 4) = *(undefined4 *)this;
    }
    if (*(int **)this != (int *)0x0) {
      **(int **)this = param_2[1];
    }
    if (*param_2 == 0) {
      *param_2 = *(int *)this;
    }
    iVar1 = param_1[1];
    *(int *)this = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)((int)this + 4) = 0;
    }
    param_2[1] = (int)param_1;
    if (*(undefined4 **)this != (undefined4 *)0x0) {
      **(undefined4 **)this = 0;
    }
    param_1[1] = 0;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) - iVar3;
    param_2[2] = param_2[2] + iVar3;
  }
  return 1;
}

