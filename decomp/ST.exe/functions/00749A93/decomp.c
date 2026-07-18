
undefined4 * __thiscall FUN_00749a93(void *this,undefined4 *param_1,undefined4 param_2,int param_3)

{
  FUN_00746ee3(this,param_2,param_3,(LPCRITICAL_SECTION)((int)this + 0x7c),param_1);
  *(undefined4 *)((int)this + 0x50) = 0;
  FUN_0074d1ea((void *)((int)this + 0x54),0);
  FUN_0074d1ea((void *)((int)this + 0x58),1);
  FUN_0074d1ea((void *)((int)this + 0x5c),1);
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x7c));
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x94));
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 1;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined ***)this = &PTR_FUN_007a13d0;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_007a1390;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_007a1378;
  SetEvent(*(HANDLE *)((int)this + 0x5c));
  return this;
}

