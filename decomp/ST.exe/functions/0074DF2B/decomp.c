
int __thiscall FUN_0074df2b(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != (int *)0x0) {
    if (*param_1 == 0) {
      *(int *)this = param_1[1];
    }
    else {
      *(int *)(*param_1 + 4) = param_1[1];
    }
    if ((int *)param_1[1] == (int *)0x0) {
      *(int *)((int)this + 4) = *param_1;
    }
    else {
      *(int *)param_1[1] = *param_1;
    }
    iVar1 = param_1[2];
    FUN_0074e2d9((void *)((int)this + 0xc),param_1);
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
  }
  return iVar1;
}

