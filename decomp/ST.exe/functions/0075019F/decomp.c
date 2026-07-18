
undefined4 __thiscall FUN_0075019f(void *this,int param_1)

{
  int iVar1;
  int *this_00;
  undefined4 local_c;
  int *local_8;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  local_c = 0;
  this_00 = (int *)((int)this + 0x38);
  if (*(int *)(param_1 + 0x30) == 0) {
    this_00 = (int *)((int)this + 0x20);
  }
  local_8 = (int *)*this_00;
  while ((local_8 != (int *)0x0 && (iVar1 = FUN_0074ded7((int)local_8), iVar1 != param_1))) {
    FUN_0074dec2((int *)&local_8);
  }
  if (local_8 == (int *)0x0) {
    local_c = 0x80040216;
  }
  else {
    FUN_0074df2b(this_00,local_8);
    (**(code **)(*(int *)(param_1 + 0xc) + 8))(param_1 + 0xc);
    FUN_00750287((int)this);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  return local_c;
}

