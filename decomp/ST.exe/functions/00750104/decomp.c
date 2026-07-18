
undefined4 __thiscall FUN_00750104(void *this,int param_1)

{
  int iVar1;
  int *this_00;
  int *local_8;
  
  local_8 = this;
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  (**(code **)(*(int *)(param_1 + 0xc) + 4))(param_1 + 0xc);
  this_00 = (int *)((int)this + 0x38);
  if (*(int *)(param_1 + 0x30) == 0) {
    this_00 = (int *)((int)this + 0x20);
  }
  local_8 = (int *)*this_00;
  while (local_8 != (int *)0x0) {
    iVar1 = FUN_0074ded7((int)local_8);
    if ((*(int *)(param_1 + 0x1c) < *(int *)(iVar1 + 0x1c)) ||
       ((*(int *)(param_1 + 0x1c) <= *(int *)(iVar1 + 0x1c) &&
        (*(uint *)(param_1 + 0x18) < *(uint *)(iVar1 + 0x18))))) break;
    FUN_0074dec2((int *)&local_8);
  }
  if (local_8 == (int *)0x0) {
    FUN_0074df72(this_00,param_1);
  }
  else {
    FUN_0074e122(this_00,local_8,param_1);
  }
  FUN_00750287((int)this);
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  return 0;
}

