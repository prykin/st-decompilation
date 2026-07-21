
int __thiscall FUN_0074dee5(void *this,int param_1)

{
  int iVar1;
  int iVar2;

  iVar1 = FUN_0074deb7(this);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = FUN_0074ded7(iVar1);
    if (iVar2 == param_1) break;
    if (iVar1 == 0) {
      iVar1 = *(int *)this;
    }
    else {
      iVar1 = *(int *)(iVar1 + 4);
    }
  }
  return iVar1;
}

