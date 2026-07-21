
LPVOID __thiscall FUN_0074bad7(void *this,uint param_1)

{
  LPVOID pvVar1;

  if (*(uint *)((int)this + 0x40) != param_1) {
    pvVar1 = CoTaskMemAlloc(param_1);
    if (pvVar1 != (LPVOID)0x0) {
      if (*(int *)((int)this + 0x40) != 0) {
        CoTaskMemFree(*(LPVOID *)((int)this + 0x44));
      }
      *(uint *)((int)this + 0x40) = param_1;
      *(LPVOID *)((int)this + 0x44) = pvVar1;
      return pvVar1;
    }
    if (*(uint *)((int)this + 0x40) < param_1) {
      return (LPVOID)0x0;
    }
  }
  return *(LPVOID *)((int)this + 0x44);
}

