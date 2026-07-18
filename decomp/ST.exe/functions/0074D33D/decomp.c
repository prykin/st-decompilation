
undefined4 __thiscall FUN_0074d33d(void *this,undefined4 param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x18);
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)((int)this + 0x14) == 0) {
    LeaveCriticalSection(lpCriticalSection);
    uVar1 = 0x80004005;
  }
  else {
    *(undefined4 *)((int)this + 0xc) = param_1;
    SetEvent(*(HANDLE *)((int)this + 4));
    WaitForSingleObject(*(HANDLE *)((int)this + 8),0xffffffff);
    uVar1 = *(undefined4 *)((int)this + 0x10);
    LeaveCriticalSection(lpCriticalSection);
  }
  return uVar1;
}

