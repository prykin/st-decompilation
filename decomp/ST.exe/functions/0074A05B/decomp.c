
undefined4 __thiscall FUN_0074a05b(void *this,int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar1;
  void *this_00;
  undefined4 *puVar2;
  void *local_8;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x7c);
  local_8 = this;
  EnterCriticalSection(lpCriticalSection);
  local_8 = (void *)0x0;
  if (param_1 == 0) {
    if (*(int *)((int)this + 0x78) == 0) {
      this_00 = (void *)FUN_0072e530(0xe0);
      if (this_00 == (void *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2 = FUN_0074a95f(this_00,(int)this,&local_8,(short *)&DAT_007ee298);
      }
      *(undefined4 **)((int)this + 0x78) = puVar2;
    }
    uVar1 = *(undefined4 *)((int)this + 0x78);
    LeaveCriticalSection(lpCriticalSection);
  }
  else {
    LeaveCriticalSection(lpCriticalSection);
    uVar1 = 0;
  }
  return uVar1;
}

