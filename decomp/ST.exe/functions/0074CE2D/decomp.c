
int FUN_0074ce2d(int param_1,undefined4 *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  int iVar2;
  
  if (param_2 == (undefined4 *)0x0) {
    iVar2 = -0x7fffbffd;
  }
  else {
    lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + -0x30);
    EnterCriticalSection(lpCriticalSection);
    iVar2 = *(int *)(*(int *)(param_1 + 0x48) + 0x90);
    if (*(int *)(iVar2 + 0x18) == 0) {
      LeaveCriticalSection(lpCriticalSection);
      iVar2 = -0x7ffbfdf6;
    }
    else {
      piVar1 = *(int **)(iVar2 + 0x9c);
      iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,param_2);
      if (iVar2 < 0) {
        piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x48) + 0x90) + 0x98);
        *param_2 = piVar1;
        (**(code **)(*piVar1 + 4))(piVar1);
        LeaveCriticalSection(lpCriticalSection);
        iVar2 = 0;
      }
      else {
        LeaveCriticalSection(lpCriticalSection);
      }
    }
  }
  return iVar2;
}

