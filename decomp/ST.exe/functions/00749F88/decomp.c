
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 00749F88 -> EXTERNAL:00000019 @ 00749FFB | 00749F88 -> EXTERNAL:00000019 @ 0074A048 */

int FUN_00749f88(LPCRITICAL_SECTION lpCriticalSection,int param_2,int param_3)

{
  HANDLE *lpCriticalSection_00;
  HANDLE *this;
  int *piVar1;
  int iVar2;
  int iVar3;

  lpCriticalSection_00 = &lpCriticalSection[4].LockSemaphore;
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
  iVar3 = lpCriticalSection->RecursionCount;
  if (iVar3 != 2) {
    if (*(int *)((int)lpCriticalSection[4].OwningThread + 0x18) != 0) {
      SetEvent((HANDLE)lpCriticalSection[3].RecursionCount);
      iVar2 = FUN_00747161((int *)lpCriticalSection,param_2,param_3);
      if (iVar2 < 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
        return iVar2;
      }
      this = &lpCriticalSection[-1].OwningThread;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)((int)lpCriticalSection[-1].OwningThread + 0x28))(1);
      FUN_0074a81d(this,0);
      piVar1 = *(int **)((int)lpCriticalSection[4].OwningThread + 0x9c);
      if (piVar1 != (int *)0x0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*piVar1 + 0x14))(piVar1);
      }
      if (iVar3 == 0) {
        lpCriticalSection[3].OwningThread = (HANDLE)0x0;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)((int)*this + 0x70))();
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar3 = (**(code **)((int)*this + 0x7c))();
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      return iVar3;
    }
    FUN_00747406(&lpCriticalSection[-1].OwningThread,1,(int *)0x0,
                 -(uint)(&lpCriticalSection[-1].OwningThread != (HANDLE *)0x0) &
                 (uint)lpCriticalSection);
    lpCriticalSection->RecursionCount = 2;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
  return 0;
}

