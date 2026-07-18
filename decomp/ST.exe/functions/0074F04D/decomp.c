
int __thiscall FUN_0074f04d(void *this,undefined4 param_1,int param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x1c);
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)((int)this + 0x48) == 1) {
    LeaveCriticalSection(lpCriticalSection);
    iVar1 = -0x7fffbffb;
  }
  else {
    iVar1 = (**(code **)(*(int *)this + 0x34))
                      (this,param_1,0,*(undefined4 *)((int)this + 0x38),
                       *(undefined4 *)((int)this + 0x3c),&DAT_007a1dd8);
    if ((param_2 != 0) && (-1 < iVar1)) {
      iVar1 = (**(code **)(*(int *)this + 0x34))
                        (this,param_2,0,*(undefined4 *)((int)this + 0x40),
                         *(undefined4 *)((int)this + 0x44),&DAT_007a1dd8);
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  return iVar1;
}

