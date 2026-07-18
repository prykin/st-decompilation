
int FUN_0074ceb2(int param_1,int *param_2,int param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  void *this;
  int iVar2;
  
  if (param_2 == (int *)0x0) {
    iVar2 = -0x7fffbffd;
  }
  else {
    *(int *)(param_1 + 0x4c) = param_3;
    lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + -0x30);
    EnterCriticalSection(lpCriticalSection);
    (**(code **)(*param_2 + 4))(param_2);
    piVar1 = *(int **)(param_1 + 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(int **)(param_1 + 4) = param_2;
    this = *(void **)(*(int *)(param_1 + 0x48) + 0x90);
    if ((*(int *)((int)this + 0x18) != 0) && (iVar2 = FUN_0074d156(this,param_2,param_3), iVar2 < 0)
       ) {
      LeaveCriticalSection(lpCriticalSection);
      return iVar2;
    }
    LeaveCriticalSection(lpCriticalSection);
    iVar2 = 0;
  }
  return iVar2;
}

