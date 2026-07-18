
undefined4 __thiscall FUN_00630220(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + param_1 * 4 + 0x1e5);
  if ((iVar1 != 0) && ((iVar1 = *(int *)(iVar1 + 4), iVar1 == 3 || (iVar1 == 6)))) {
    return 1;
  }
  return 0;
}

