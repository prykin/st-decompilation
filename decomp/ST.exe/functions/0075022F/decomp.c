
undefined4 __thiscall FUN_0075022f(void *this,int *param_1)

{
  int *piVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))(param_1);
  }
  piVar1 = *(int **)((int)this + 0x60);
  if (piVar1 != (int *)0x0) {
    if (*(int *)((int)this + 0x54) != 0) {
      (**(code **)(*piVar1 + 0x18))(piVar1,*(int *)((int)this + 0x54));
      *(undefined4 *)((int)this + 0x54) = 0;
    }
    (**(code **)(**(int **)((int)this + 0x60) + 8))(*(int **)((int)this + 0x60));
  }
  *(int **)((int)this + 0x60) = param_1;
  FUN_00750287(this);
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  return 0;
}

