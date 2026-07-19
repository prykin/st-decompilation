
undefined4 __thiscall FUN_0071b630(void *this,undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int iVar2;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x78);
  EnterCriticalSection(lpCriticalSection);
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
  }
  if (*(int *)((int)this + 100) == 0) {
    iVar1 = (**(code **)(**(int **)((int)this + 0x20) + 0x1c))(*(int **)((int)this + 0x20));
    *(uint *)((int)this + 100) = (uint)(-1 < iVar1);
    if (-1 < iVar1 == 0) goto LAB_0071b73b;
  }
  iVar1 = (**(code **)(**(int **)((int)this + 0x20) + 0x24))
                    (*(int **)((int)this + 0x20),0x10,&local_14);
  if (iVar1 != 0) {
    RaiseInternalException(iVar1,DAT_007ed77c,s_E__Ourlib_Sinput_cpp_007f092c,0x77);
  }
  if (param_3 != (int *)0x0) {
    *param_3 = local_14;
    param_3[1] = local_10;
    param_3[2] = local_c;
    param_3[3] = local_8;
  }
  if ((local_14 != 0) || (local_10 != 0)) {
    local_14 = *(int *)((int)this + 0x2c) + local_14;
    local_10 = *(int *)((int)this + 0x30) + local_10;
    iVar1 = *(int *)((int)this + 0x34);
    *(undefined4 *)((int)this + 0x74) = 1;
    *(int *)((int)this + 0x2c) = local_14;
    *(int *)((int)this + 0x30) = local_10;
    if (local_14 < iVar1) {
      *(int *)((int)this + 0x2c) = iVar1;
    }
    iVar2 = *(int *)((int)this + 0x38);
    if (local_10 < iVar2) {
      *(int *)((int)this + 0x30) = iVar2;
    }
    iVar1 = iVar1 + *(int *)((int)this + 0x3c);
    if (iVar1 <= *(int *)((int)this + 0x2c)) {
      *(int *)((int)this + 0x2c) = iVar1 + -1;
    }
    iVar2 = *(int *)((int)this + 0x40) + iVar2;
    if (iVar2 <= *(int *)((int)this + 0x30)) {
      *(int *)((int)this + 0x30) = iVar2 + -1;
    }
    *param_1 = *(undefined4 *)((int)this + 0x2c);
    *param_2 = *(undefined4 *)((int)this + 0x30);
    LeaveCriticalSection(lpCriticalSection);
    return 1;
  }
LAB_0071b73b:
  *param_1 = *(undefined4 *)((int)this + 0x2c);
  *param_2 = *(undefined4 *)((int)this + 0x30);
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}

