
int __thiscall FUN_00690180(void *this,uint param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0xa5);
  if (((iVar1 != 0) && (-1 < (int)param_1)) && ((int)param_1 < (int)*(uint *)(iVar1 + 0xc))) {
    if (param_1 < *(uint *)(iVar1 + 0xc)) {
      iVar1 = *(int *)(iVar1 + 8) * param_1 + *(int *)(iVar1 + 0x1c);
    }
    else {
      iVar1 = 0;
    }
    if (*(int *)(iVar1 + 4) != 0) {
      iVar1 = thunk_FUN_00662240(param_2);
      return iVar1;
    }
  }
  return -4;
}

