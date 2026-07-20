
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 006D7330 -> 0074CEB2 @ 006D733D | 0074CEB2 -> EXTERNAL:00000019 @ 0074CF11 | 0074CEB2
   -> EXTERNAL:00000019 @ 0074CF1E */

int FUN_0074ceb2(int param_1,int *lpCriticalSection,int param_3)

{
  LPCRITICAL_SECTION lpCriticalSection_00;
  int *piVar1;
  void *this;
  int iVar2;
  
  if (lpCriticalSection == (int *)0x0) {
    iVar2 = -0x7fffbffd;
  }
  else {
    *(int *)(param_1 + 0x4c) = param_3;
    lpCriticalSection_00 = *(LPCRITICAL_SECTION *)(param_1 + -0x30);
    EnterCriticalSection(lpCriticalSection_00);
    (**(code **)(*lpCriticalSection + 4))(lpCriticalSection);
    piVar1 = *(int **)(param_1 + 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(int **)(param_1 + 4) = lpCriticalSection;
    this = *(void **)(*(int *)(param_1 + 0x48) + 0x90);
    if ((*(int *)((int)this + 0x18) != 0) &&
       (iVar2 = FUN_0074d156(this,lpCriticalSection,param_3), iVar2 < 0)) {
      LeaveCriticalSection(lpCriticalSection_00);
      return iVar2;
    }
    LeaveCriticalSection(lpCriticalSection_00);
    iVar2 = 0;
  }
  return iVar2;
}

