
uint __thiscall FUN_0074a4d1(void *this,undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 unaff_retaddr;
  
  uVar1 = (**(code **)(*(int *)this + 0x98))(param_1);
  if ((int)uVar1 < 0) {
    return -(uint)(uVar1 != 0x8004022b) & uVar1;
  }
  if (*(int *)((int)this + 0x14) == 1) {
    (**(code **)(*(int *)this + 0x50))();
    *(undefined4 *)((int)this + 0xb4) = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x7c));
    if (*(int *)((int)this + 0x14) == 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x7c));
      return 0;
    }
    *(undefined4 *)((int)this + 0xb4) = 1;
    EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x94));
    (**(code **)(*(int *)this + 0x34))(unaff_retaddr);
    LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x94));
    LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x7c));
    SetEvent(*(HANDLE *)((int)this + 0x5c));
  }
  iVar2 = (**(code **)(*(int *)this + 0x2c))();
  if (iVar2 < 0) {
    *(undefined4 *)((int)this + 0xb4) = 0;
  }
  else {
    (**(code **)(*(int *)this + 0x50))();
    *(undefined4 *)((int)this + 0xb4) = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x7c));
    if (*(int *)((int)this + 0x14) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x94));
      (**(code **)(*(int *)this + 0xa8))(*(undefined4 *)((int)this + 0x6c));
      (**(code **)(*(int *)this + 0x70))();
      (**(code **)(*(int *)this + 0x60))();
      (**(code **)(*(int *)this + 0x6c))();
      LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x94));
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x7c));
  }
  return 0;
}

