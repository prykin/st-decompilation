
undefined4 __thiscall FUN_0074a39b(void *this,int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  LPCRITICAL_SECTION lpCriticalSection_00;
  int iVar1;
  undefined4 uVar2;

  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x7c);
  EnterCriticalSection(lpCriticalSection);
  *(undefined4 *)((int)this + 0xb4) = 1;
  iVar1 = FUN_00748721(*(int *)((int)this + 0x78) + 0x98,param_1);
  if (iVar1 == 0) {
    iVar1 = (*(int **)((int)this + 0x78))[0x33];
    if (iVar1 != 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(**(int **)((int)this + 0x78) + 0x24))(iVar1);
    }
    lpCriticalSection_00 = (LPCRITICAL_SECTION)((int)this + 0x94);
    EnterCriticalSection(lpCriticalSection_00);
    if (((*(int *)((int)this + 0x6c) == 0) && (*(int *)((int)this + 0x70) == 0)) &&
       (*(int *)((int)this + 0x60) == 0)) {
      if (*(void **)((int)this + 0x50) != (void *)0x0) {
        FUN_0074ef87(*(void **)((int)this + 0x50),param_1);
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      if ((*(int *)((int)this + 100) == 1) &&
         (iVar1 = (**(code **)(*(int *)this + 0x54))(param_1), iVar1 == 0)) {
        *(undefined4 *)((int)this + 0xb4) = 0;
        LeaveCriticalSection(lpCriticalSection_00);
        LeaveCriticalSection(lpCriticalSection);
        return 0x8004022b;
      }
      *(undefined4 *)((int)this + 0xb8) = *(undefined4 *)(*(int *)((int)this + 0x78) + 0xc0);
      uVar2 = *(undefined4 *)(*(int *)((int)this + 0x78) + 0xc4);
      *(int **)((int)this + 0x6c) = param_1;
      *(undefined4 *)((int)this + 0xbc) = uVar2;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*param_1 + 4))(param_1);
      if (*(int *)((int)this + 100) == 0) {
        FUN_0074a81d(this,1);
      }
      LeaveCriticalSection(lpCriticalSection_00);
      LeaveCriticalSection(lpCriticalSection);
      uVar2 = 0;
    }
    else {
      SetEvent(*(HANDLE *)((int)this + 0x5c));
      *(undefined4 *)((int)this + 0xb4) = 0;
      LeaveCriticalSection(lpCriticalSection_00);
      LeaveCriticalSection(lpCriticalSection);
      uVar2 = 0x8000ffff;
    }
  }
  else {
    *(undefined4 *)((int)this + 0xb4) = 0;
    LeaveCriticalSection(lpCriticalSection);
    uVar2 = 0x80004005;
  }
  return uVar2;
}

