
undefined4 __thiscall FUN_0074e0d6(void *this,int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0074deb7(param_2);
  while( true ) {
    if (iVar1 == 0) {
      return 1;
    }
    iVar2 = FUN_0074ded7(iVar1);
    param_1 = FUN_0074e079(this,param_1,iVar2);
    if (param_1 == 0) break;
    if (iVar1 == 0) {
      iVar1 = *param_2;
    }
    else {
      iVar1 = *(int *)(iVar1 + 4);
    }
  }
  return 0;
}

