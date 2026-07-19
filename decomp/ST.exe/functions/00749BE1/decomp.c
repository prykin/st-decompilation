
undefined4 __thiscall FUN_00749be1(void *this,undefined4 param_1,undefined4 param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar1;
  void *this_00;
  int iVar2;
  undefined4 *puVar3;
  void *local_8;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x7c);
  local_8 = this;
  EnterCriticalSection(lpCriticalSection);
  iVar2 = *(int *)((int)this + 0x50);
  if (iVar2 == 0) {
    local_8 = (void *)0x0;
    this_00 = (void *)Library::MSVCRT::FUN_0072e530(0x50);
    if (this_00 == (void *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      iVar2 = (**(code **)(*(int *)this + 0x1c))(0);
      puVar3 = FUN_0074eef3(this_00,0,*(int *)((int)this + 4),&local_8,
                            -(uint)(iVar2 != 0) & iVar2 + 0xcU);
    }
    *(undefined4 **)((int)this + 0x50) = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      LeaveCriticalSection(lpCriticalSection);
      return 0x8007000e;
    }
    if ((int)local_8 < 0) {
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)(puVar3[2] + 0xc))(1);
      }
      *(undefined4 *)((int)this + 0x50) = 0;
      LeaveCriticalSection(lpCriticalSection);
      return 0x80004002;
    }
    uVar1 = (**(code **)(*(int *)this + 0x24))(param_1,param_2);
  }
  else {
    uVar1 = (*(code *)**(undefined4 **)(iVar2 + 8))(iVar2 + 8,param_1,param_2);
  }
  LeaveCriticalSection(lpCriticalSection);
  return uVar1;
}

