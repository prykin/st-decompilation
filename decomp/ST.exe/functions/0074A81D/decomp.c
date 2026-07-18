
void __thiscall FUN_0074a81d(void *this,undefined4 param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x94));
  *(undefined4 *)((int)this + 0xb0) = param_1;
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x94));
  return;
}

