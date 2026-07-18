
undefined4 __thiscall FUN_00749df1(void *this,int param_1)

{
  int iVar1;
  
  if (((*(int *)(*(int *)((int)this + 0x78) + 0x18) != 0) && (*(int *)((int)this + 0x70) != 1)) &&
     ((iVar1 = (**(code **)(*(int *)this + 0xa0))(), iVar1 != 1 || (param_1 == 0)))) {
    ResetEvent(*(HANDLE *)((int)this + 0x5c));
    return 1;
  }
  SetEvent(*(HANDLE *)((int)this + 0x5c));
  return 0;
}

