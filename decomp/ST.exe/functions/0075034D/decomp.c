
undefined4 __thiscall FUN_0075034d(void *this,undefined4 param_1,undefined4 param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  *(undefined4 *)((int)this + 0x68) = param_1;
  *(undefined4 *)((int)this + 0x6c) = param_2;
  *(undefined4 *)((int)this + 100) = 1;
  FUN_00750287(this);
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  return 0;
}

